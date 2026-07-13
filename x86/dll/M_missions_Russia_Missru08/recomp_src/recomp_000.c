#include "recomp.h"

/* thunk_FUN_10001be0 @ 0x10b41005 (5 bytes, 1 insns) */
void f_10b41005(void) {
  FTRACE(0x10b41005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41005 jmp 0x10b41be0 */
  f_10b41be0(); return;
}

/* OnInit @ 0x10b4100a (5 bytes, 1 insns) */
void f_10b4100a(void) {
  FTRACE(0x10b4100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4100a jmp 0x10b410a0 */
  f_10b410a0(); return;
}

/* thunk_FUN_10001c30 @ 0x10b4100f (5 bytes, 1 insns) */
void f_10b4100f(void) {
  FTRACE(0x10b4100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4100f jmp 0x10b41c30 */
  f_10b41c30(); return;
}

/* thunk_FUN_10001040 @ 0x10b41014 (5 bytes, 1 insns) */
void f_10b41014(void) {
  FTRACE(0x10b41014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41014 jmp 0x10b41040 */
  f_10b41040(); return;
}

/* ProcessScenary @ 0x10b41019 (5 bytes, 1 insns) */
void f_10b41019(void) {
  FTRACE(0x10b41019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41019 jmp 0x10b41230 */
  f_10b41230(); return;
}

/* FUN_10001040 @ 0x10b41040 (67 bytes, 26 insns) */
void f_10b41040(void) {
  FTRACE(0x10b41040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41040 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41041 mov ebp, esp */
  EBP = (ESP);
  /* 10b41043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b41046 push ebx */
  push32((uint32_t)(EBX));
  /* 10b41047 push esi */
  push32((uint32_t)(ESI));
  /* 10b41048 push edi */
  push32((uint32_t)(EDI));
  /* 10b41049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10b4104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10b41051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b41056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b41058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41062 je 0x10b41066 */
  if (C.zf) goto L_10b41066;
  /* 10b41064 jmp 0x10b4106b */
  goto L_10b4106b;
L_10b41066:;
  /* 10b41066 call 0x10b4100a */
  push32(0x10b4106bu); f_10b4100a();
L_10b4106b:;
  /* 10b4106b mov eax, 1 */
  EAX = (0x1u);
  /* 10b41070 pop edi */
  EDI = (pop32());
  /* 10b41071 pop esi */
  ESI = (pop32());
  /* 10b41072 pop ebx */
  EBX = (pop32());
  /* 10b41073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41078 call 0x10b41d10 */
  push32(0x10b4107du); f_10b41d10();
  /* 10b4107d mov esp, ebp */
  ESP = (EBP);
  /* 10b4107f pop ebp */
  EBP = (pop32());
  /* 10b41080 ret 0xc */
  ESPCHK(0x10b41040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x10b410a0 (315 bytes, 89 insns) */
void f_10b410a0(void) {
  FTRACE(0x10b410a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b410a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b410a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b410a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b410a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b410a7 push esi */
  push32((uint32_t)(ESI));
  /* 10b410a8 push edi */
  push32((uint32_t)(EDI));
  /* 10b410a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b410ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b410b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b410b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b410b8 mov esi, esp */
  ESI = (ESP);
  /* 10b410ba push 0x10b690a0 */
  push32((uint32_t)(0x10b690a0u));
  /* 10b410bf push 0x10b6e408 */
  push32((uint32_t)(0x10b6e408u));
  /* 10b410c4 call dword ptr [0x10b70420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70420))), 0x10b410cau);
  /* 10b410ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b410cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b410cf call 0x10b41d10 */
  push32(0x10b410d4u); f_10b41d10();
  /* 10b410d4 mov esi, esp */
  ESI = (ESP);
  /* 10b410d6 push 0x10b69098 */
  push32((uint32_t)(0x10b69098u));
  /* 10b410db push 0x10b6e410 */
  push32((uint32_t)(0x10b6e410u));
  /* 10b410e0 call dword ptr [0x10b70420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70420))), 0x10b410e6u);
  /* 10b410e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b410e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b410eb call 0x10b41d10 */
  push32(0x10b410f0u); f_10b41d10();
  /* 10b410f0 mov esi, esp */
  ESI = (ESP);
  /* 10b410f2 push 0x10b69090 */
  push32((uint32_t)(0x10b69090u));
  /* 10b410f7 push 0x10b6e3f0 */
  push32((uint32_t)(0x10b6e3f0u));
  /* 10b410fc call dword ptr [0x10b70424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70424))), 0x10b41102u);
  /* 10b41102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41107 call 0x10b41d10 */
  push32(0x10b4110cu); f_10b41d10();
  /* 10b4110c mov esi, esp */
  ESI = (ESP);
  /* 10b4110e push 0x10b69088 */
  push32((uint32_t)(0x10b69088u));
  /* 10b41113 push 0x10b6e3e8 */
  push32((uint32_t)(0x10b6e3e8u));
  /* 10b41118 call dword ptr [0x10b70424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70424))), 0x10b4111eu);
  /* 10b4111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41123 call 0x10b41d10 */
  push32(0x10b41128u); f_10b41d10();
  /* 10b41128 mov esi, esp */
  ESI = (ESP);
  /* 10b4112a push 0x10b69078 */
  push32((uint32_t)(0x10b69078u));
  /* 10b4112f push 0x10b6e400 */
  push32((uint32_t)(0x10b6e400u));
  /* 10b41134 call dword ptr [0x10b70428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70428))), 0x10b4113au);
  /* 10b4113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4113f call 0x10b41d10 */
  push32(0x10b41144u); f_10b41d10();
  /* 10b41144 mov esi, esp */
  ESI = (ESP);
  /* 10b41146 push 0x10b69060 */
  push32((uint32_t)(0x10b69060u));
  /* 10b4114b push 0x10b6e3f8 */
  push32((uint32_t)(0x10b6e3f8u));
  /* 10b41150 call dword ptr [0x10b70428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70428))), 0x10b41156u);
  /* 10b41156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4115b call 0x10b41d10 */
  push32(0x10b41160u); f_10b41d10();
  /* 10b41160 mov esi, esp */
  ESI = (ESP);
  /* 10b41162 push 0x10b69048 */
  push32((uint32_t)(0x10b69048u));
  /* 10b41167 push 0x10b6e418 */
  push32((uint32_t)(0x10b6e418u));
  /* 10b4116c call dword ptr [0x10b70428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70428))), 0x10b41172u);
  /* 10b41172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41177 call 0x10b41d10 */
  push32(0x10b4117cu); f_10b41d10();
  /* 10b4117c mov esi, esp */
  ESI = (ESP);
  /* 10b4117e push 0x10b69030 */
  push32((uint32_t)(0x10b69030u));
  /* 10b41183 push 0x10b6e420 */
  push32((uint32_t)(0x10b6e420u));
  /* 10b41188 call dword ptr [0x10b70428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70428))), 0x10b4118eu);
  /* 10b4118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41193 call 0x10b41d10 */
  push32(0x10b41198u); f_10b41d10();
  /* 10b41198 mov esi, esp */
  ESI = (ESP);
  /* 10b4119a push 0x10b69028 */
  push32((uint32_t)(0x10b69028u));
  /* 10b4119f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b411a1 call dword ptr [0x10b7042c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7042c))), 0x10b411a7u);
  /* 10b411a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b411aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b411ac call 0x10b41d10 */
  push32(0x10b411b1u); f_10b41d10();
  /* 10b411b1 mov esi, esp */
  ESI = (ESP);
  /* 10b411b3 push 0x10b6901c */
  push32((uint32_t)(0x10b6901cu));
  /* 10b411b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b411ba call dword ptr [0x10b7042c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7042c))), 0x10b411c0u);
  /* 10b411c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b411c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b411c5 call 0x10b41d10 */
  push32(0x10b411cau); f_10b41d10();
  /* 10b411ca pop edi */
  EDI = (pop32());
  /* 10b411cb pop esi */
  ESI = (pop32());
  /* 10b411cc pop ebx */
  EBX = (pop32());
  /* 10b411cd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b411d0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b411d2 call 0x10b41d10 */
  push32(0x10b411d7u); f_10b41d10();
  /* 10b411d7 mov esp, ebp */
  ESP = (EBP);
  /* 10b411d9 pop ebp */
  EBP = (pop32());
  /* 10b411da ret  */
  ESPCHK(0x10b410a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001230 @ 0x10b41230 (1975 bytes, 588 insns) */
void f_10b41230(void) {
  FTRACE(0x10b41230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41230 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41231 mov ebp, esp */
  EBP = (ESP);
  /* 10b41233 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b41236 push ebx */
  push32((uint32_t)(EBX));
  /* 10b41237 push esi */
  push32((uint32_t)(ESI));
  /* 10b41238 push edi */
  push32((uint32_t)(EDI));
  /* 10b41239 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b4123c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b41241 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b41246 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b41248 mov esi, esp */
  ESI = (ESP);
  /* 10b4124a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4124c call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b41252u);
  /* 10b41252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41257 call 0x10b41d10 */
  push32(0x10b4125cu); f_10b41d10();
  /* 10b4125c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41263 je 0x10b41417 */
  if (C.zf) goto L_10b41417;
  /* 10b41269 mov esi, esp */
  ESI = (ESP);
  /* 10b4126b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4126d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4126f call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b41275u);
  /* 10b41275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41278 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4127a call 0x10b41d10 */
  push32(0x10b4127fu); f_10b41d10();
  /* 10b4127f mov esi, esp */
  ESI = (ESP);
  /* 10b41281 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b41286 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b41288 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4128a call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b41290u);
  /* 10b41290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41295 call 0x10b41d10 */
  push32(0x10b4129au); f_10b41d10();
  /* 10b4129a mov esi, esp */
  ESI = (ESP);
  /* 10b4129c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b412a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b412a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b412a5 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b412abu);
  /* 10b412ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b412ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b412b0 call 0x10b41d10 */
  push32(0x10b412b5u); f_10b41d10();
  /* 10b412b5 mov esi, esp */
  ESI = (ESP);
  /* 10b412b7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b412bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b412be push 0 */
  push32((uint32_t)(0x0u));
  /* 10b412c0 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b412c6u);
  /* 10b412c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b412c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b412cb call 0x10b41d10 */
  push32(0x10b412d0u); f_10b41d10();
  /* 10b412d0 mov esi, esp */
  ESI = (ESP);
  /* 10b412d2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b412d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b412d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b412db call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b412e1u);
  /* 10b412e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b412e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b412e6 call 0x10b41d10 */
  push32(0x10b412ebu); f_10b41d10();
  /* 10b412eb mov esi, esp */
  ESI = (ESP);
  /* 10b412ed push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b412f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b412f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b412f6 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b412fcu);
  /* 10b412fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b412ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41301 call 0x10b41d10 */
  push32(0x10b41306u); f_10b41d10();
  /* 10b41306 mov esi, esp */
  ESI = (ESP);
  /* 10b41308 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b4130d push 4 */
  push32((uint32_t)(0x4u));
  /* 10b4130f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41311 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b41317u);
  /* 10b41317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4131a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4131c call 0x10b41d10 */
  push32(0x10b41321u); f_10b41d10();
  /* 10b41321 mov esi, esp */
  ESI = (ESP);
  /* 10b41323 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b41328 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b4132a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4132c call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b41332u);
  /* 10b41332 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41337 call 0x10b41d10 */
  push32(0x10b4133cu); f_10b41d10();
  /* 10b4133c mov esi, esp */
  ESI = (ESP);
  /* 10b4133e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10b41343 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41345 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41347 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b4134du);
  /* 10b4134d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41350 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41352 call 0x10b41d10 */
  push32(0x10b41357u); f_10b41d10();
  /* 10b41357 mov esi, esp */
  ESI = (ESP);
  /* 10b41359 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b4135e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41360 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41362 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b41368u);
  /* 10b41368 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4136b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4136d call 0x10b41d10 */
  push32(0x10b41372u); f_10b41d10();
  /* 10b41372 mov esi, esp */
  ESI = (ESP);
  /* 10b41374 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b41379 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4137b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4137d call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b41383u);
  /* 10b41383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41386 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41388 call 0x10b41d10 */
  push32(0x10b4138du); f_10b41d10();
  /* 10b4138d mov esi, esp */
  ESI = (ESP);
  /* 10b4138f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b41394 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b41396 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41398 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b4139eu);
  /* 10b4139e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b413a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b413a3 call 0x10b41d10 */
  push32(0x10b413a8u); f_10b41d10();
  /* 10b413a8 mov esi, esp */
  ESI = (ESP);
  /* 10b413aa push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b413af push 4 */
  push32((uint32_t)(0x4u));
  /* 10b413b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b413b3 call dword ptr [0x10b703e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e8))), 0x10b413b9u);
  /* 10b413b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b413bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b413be call 0x10b41d10 */
  push32(0x10b413c3u); f_10b41d10();
  /* 10b413c3 mov esi, esp */
  ESI = (ESP);
  /* 10b413c5 push 0x10b69108 */
  push32((uint32_t)(0x10b69108u));
  /* 10b413ca push 0x10b69100 */
  push32((uint32_t)(0x10b69100u));
  /* 10b413cf call dword ptr [0x10b703ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703ec))), 0x10b413d5u);
  /* 10b413d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b413d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b413da call 0x10b41d10 */
  push32(0x10b413dfu); f_10b41d10();
  /* 10b413df mov esi, esp */
  ESI = (ESP);
  /* 10b413e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b413e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b413e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b413e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b413e9 push 0x10b690f4 */
  push32((uint32_t)(0x10b690f4u));
  /* 10b413ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10b413f0 call dword ptr [0x10b703f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f0))), 0x10b413f6u);
  /* 10b413f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b413f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b413fb call 0x10b41d10 */
  push32(0x10b41400u); f_10b41d10();
  /* 10b41400 mov esi, esp */
  ESI = (ESP);
  /* 10b41402 push 0x10b690ec */
  push32((uint32_t)(0x10b690ecu));
  /* 10b41407 call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b4140du);
  /* 10b4140d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41412 call 0x10b41d10 */
  push32(0x10b41417u); f_10b41d10();
L_10b41417:;
  /* 10b41417 mov esi, esp */
  ESI = (ESP);
  /* 10b41419 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4141b call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b41421u);
  /* 10b41421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41426 call 0x10b41d10 */
  push32(0x10b4142bu); f_10b41d10();
  /* 10b4142b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41432 je 0x10b414c0 */
  if (C.zf) goto L_10b414c0;
  /* 10b41438 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4143a push 0x10b6e3f8 */
  push32((uint32_t)(0x10b6e3f8u));
  /* 10b4143f call 0x10b4100f */
  push32(0x10b41444u); f_10b4100f();
  /* 10b41444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41449 jne 0x10b414c0 */
  if (!C.zf) goto L_10b414c0;
  /* 10b4144b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4144d push 0x10b6e400 */
  push32((uint32_t)(0x10b6e400u));
  /* 10b41452 call 0x10b4100f */
  push32(0x10b41457u); f_10b4100f();
  /* 10b41457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4145a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4145c jne 0x10b414c0 */
  if (!C.zf) goto L_10b414c0;
  /* 10b4145e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41460 push 0x10b6e420 */
  push32((uint32_t)(0x10b6e420u));
  /* 10b41465 call 0x10b4100f */
  push32(0x10b4146au); f_10b4100f();
  /* 10b4146a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4146d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4146f jne 0x10b414c0 */
  if (!C.zf) goto L_10b414c0;
  /* 10b41471 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41473 push 0x10b6e418 */
  push32((uint32_t)(0x10b6e418u));
  /* 10b41478 call 0x10b4100f */
  push32(0x10b4147du); f_10b4100f();
  /* 10b4147d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41482 jne 0x10b414c0 */
  if (!C.zf) goto L_10b414c0;
  /* 10b41484 mov esi, esp */
  ESI = (ESP);
  /* 10b41486 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41488 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4148a call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b41490u);
  /* 10b41490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41493 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41495 call 0x10b41d10 */
  push32(0x10b4149au); f_10b41d10();
  /* 10b4149a mov esi, esp */
  ESI = (ESP);
  /* 10b4149c push 0x10b690e4 */
  push32((uint32_t)(0x10b690e4u));
  /* 10b414a1 call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b414a7u);
  /* 10b414a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b414aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b414ac call 0x10b41d10 */
  push32(0x10b414b1u); f_10b41d10();
  /* 10b414b1 mov esi, esp */
  ESI = (ESP);
  /* 10b414b3 call dword ptr [0x10b703f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f8))), 0x10b414b9u);
  /* 10b414b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b414bb call 0x10b41d10 */
  push32(0x10b414c0u); f_10b41d10();
L_10b414c0:;
  /* 10b414c0 mov esi, esp */
  ESI = (ESP);
  /* 10b414c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b414c4 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b414cau);
  /* 10b414ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b414cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b414cf call 0x10b41d10 */
  push32(0x10b414d4u); f_10b41d10();
  /* 10b414d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b414d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b414db je 0x10b41569 */
  if (C.zf) goto L_10b41569;
  /* 10b414e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b414e3 push 0x10b6e3f8 */
  push32((uint32_t)(0x10b6e3f8u));
  /* 10b414e8 call 0x10b4100f */
  push32(0x10b414edu); f_10b4100f();
  /* 10b414ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b414f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b414f2 jne 0x10b41569 */
  if (!C.zf) goto L_10b41569;
  /* 10b414f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b414f6 push 0x10b6e400 */
  push32((uint32_t)(0x10b6e400u));
  /* 10b414fb call 0x10b4100f */
  push32(0x10b41500u); f_10b4100f();
  /* 10b41500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41505 jne 0x10b41569 */
  if (!C.zf) goto L_10b41569;
  /* 10b41507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41509 push 0x10b6e420 */
  push32((uint32_t)(0x10b6e420u));
  /* 10b4150e call 0x10b4100f */
  push32(0x10b41513u); f_10b4100f();
  /* 10b41513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41516 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41518 jne 0x10b41569 */
  if (!C.zf) goto L_10b41569;
  /* 10b4151a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4151c push 0x10b6e418 */
  push32((uint32_t)(0x10b6e418u));
  /* 10b41521 call 0x10b4100f */
  push32(0x10b41526u); f_10b4100f();
  /* 10b41526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4152b jne 0x10b41569 */
  if (!C.zf) goto L_10b41569;
  /* 10b4152d mov esi, esp */
  ESI = (ESP);
  /* 10b4152f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41531 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b41533 call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b41539u);
  /* 10b41539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4153c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4153e call 0x10b41d10 */
  push32(0x10b41543u); f_10b41d10();
  /* 10b41543 mov esi, esp */
  ESI = (ESP);
  /* 10b41545 push 0x10b690dc */
  push32((uint32_t)(0x10b690dcu));
  /* 10b4154a call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b41550u);
  /* 10b41550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41553 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41555 call 0x10b41d10 */
  push32(0x10b4155au); f_10b41d10();
  /* 10b4155a mov esi, esp */
  ESI = (ESP);
  /* 10b4155c call dword ptr [0x10b703fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703fc))), 0x10b41562u);
  /* 10b41562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41564 call 0x10b41d10 */
  push32(0x10b41569u); f_10b41d10();
L_10b41569:;
  /* 10b41569 mov esi, esp */
  ESI = (ESP);
  /* 10b4156b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b4156d call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b41573u);
  /* 10b41573 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41576 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41578 call 0x10b41d10 */
  push32(0x10b4157du); f_10b41d10();
  /* 10b4157d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41584 je 0x10b415f9 */
  if (C.zf) goto L_10b415f9;
  /* 10b41586 mov esi, esp */
  ESI = (ESP);
  /* 10b41588 call dword ptr [0x10b70400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70400))), 0x10b4158eu);
  /* 10b4158e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41590 call 0x10b41d10 */
  push32(0x10b41595u); f_10b41d10();
  /* 10b41595 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4159a jle 0x10b415f9 */
  if ((C.zf||C.sf!=C.of)) goto L_10b415f9;
  /* 10b4159c push 0x10b6e3f0 */
  push32((uint32_t)(0x10b6e3f0u));
  /* 10b415a1 call 0x10b41005 */
  push32(0x10b415a6u); f_10b41005();
  /* 10b415a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b415a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b415ab jle 0x10b415f9 */
  if ((C.zf||C.sf!=C.of)) goto L_10b415f9;
  /* 10b415ad mov esi, esp */
  ESI = (ESP);
  /* 10b415af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b415b1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b415b3 call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b415b9u);
  /* 10b415b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b415bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b415be call 0x10b41d10 */
  push32(0x10b415c3u); f_10b41d10();
  /* 10b415c3 mov esi, esp */
  ESI = (ESP);
  /* 10b415c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b415c7 push 0x10b6e3f0 */
  push32((uint32_t)(0x10b6e3f0u));
  /* 10b415cc call dword ptr [0x10b70404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70404))), 0x10b415d2u);
  /* 10b415d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b415d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b415d7 call 0x10b41d10 */
  push32(0x10b415dcu); f_10b41d10();
  /* 10b415dc mov esi, esp */
  ESI = (ESP);
  /* 10b415de push 0 */
  push32((uint32_t)(0x0u));
  /* 10b415e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b415e2 push 0x10b6e408 */
  push32((uint32_t)(0x10b6e408u));
  /* 10b415e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b415e9 call dword ptr [0x10b70408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70408))), 0x10b415efu);
  /* 10b415ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b415f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b415f4 call 0x10b41d10 */
  push32(0x10b415f9u); f_10b41d10();
L_10b415f9:;
  /* 10b415f9 mov esi, esp */
  ESI = (ESP);
  /* 10b415fb push 0x10b6e3f0 */
  push32((uint32_t)(0x10b6e3f0u));
  /* 10b41600 push 0x10b6e408 */
  push32((uint32_t)(0x10b6e408u));
  /* 10b41605 call dword ptr [0x10b7040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7040c))), 0x10b4160bu);
  /* 10b4160b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4160e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41610 call 0x10b41d10 */
  push32(0x10b41615u); f_10b41d10();
  /* 10b41615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41617 jle 0x10b41654 */
  if ((C.zf||C.sf!=C.of)) goto L_10b41654;
  /* 10b41619 mov esi, esp */
  ESI = (ESP);
  /* 10b4161b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4161d push 0x10b6e408 */
  push32((uint32_t)(0x10b6e408u));
  /* 10b41622 call dword ptr [0x10b70410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70410))), 0x10b41628u);
  /* 10b41628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4162b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4162d call 0x10b41d10 */
  push32(0x10b41632u); f_10b41d10();
  /* 10b41632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41634 jle 0x10b41654 */
  if ((C.zf||C.sf!=C.of)) goto L_10b41654;
  /* 10b41636 mov esi, esp */
  ESI = (ESP);
  /* 10b41638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4163a push 0x10b6e408 */
  push32((uint32_t)(0x10b6e408u));
  /* 10b4163f push 0x10b6e3f0 */
  push32((uint32_t)(0x10b6e3f0u));
  /* 10b41644 call dword ptr [0x10b70414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70414))), 0x10b4164au);
  /* 10b4164a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4164d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4164f call 0x10b41d10 */
  push32(0x10b41654u); f_10b41d10();
L_10b41654:;
  /* 10b41654 mov esi, esp */
  ESI = (ESP);
  /* 10b41656 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b41658 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b4165eu);
  /* 10b4165e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41663 call 0x10b41d10 */
  push32(0x10b41668u); f_10b41d10();
  /* 10b41668 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4166d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4166f je 0x10b416cc */
  if (C.zf) goto L_10b416cc;
  /* 10b41671 push 0x10b6e3e8 */
  push32((uint32_t)(0x10b6e3e8u));
  /* 10b41676 call 0x10b41005 */
  push32(0x10b4167bu); f_10b41005();
  /* 10b4167b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4167e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41680 jle 0x10b416cc */
  if ((C.zf||C.sf!=C.of)) goto L_10b416cc;
  /* 10b41682 mov esi, esp */
  ESI = (ESP);
  /* 10b41684 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41686 push 0x10b6e410 */
  push32((uint32_t)(0x10b6e410u));
  /* 10b4168b call dword ptr [0x10b70410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70410))), 0x10b41691u);
  /* 10b41691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41694 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41696 call 0x10b41d10 */
  push32(0x10b4169bu); f_10b41d10();
  /* 10b4169b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4169d jle 0x10b416cc */
  if ((C.zf||C.sf!=C.of)) goto L_10b416cc;
  /* 10b4169f mov esi, esp */
  ESI = (ESP);
  /* 10b416a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b416a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b416a5 call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b416abu);
  /* 10b416ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b416ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b416b0 call 0x10b41d10 */
  push32(0x10b416b5u); f_10b41d10();
  /* 10b416b5 mov esi, esp */
  ESI = (ESP);
  /* 10b416b7 push 0x10b690d4 */
  push32((uint32_t)(0x10b690d4u));
  /* 10b416bc call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b416c2u);
  /* 10b416c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b416c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b416c7 call 0x10b41d10 */
  push32(0x10b416ccu); f_10b41d10();
L_10b416cc:;
  /* 10b416cc mov esi, esp */
  ESI = (ESP);
  /* 10b416ce push 4 */
  push32((uint32_t)(0x4u));
  /* 10b416d0 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b416d6u);
  /* 10b416d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b416d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b416db call 0x10b41d10 */
  push32(0x10b416e0u); f_10b41d10();
  /* 10b416e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b416e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b416e7 jne 0x10b41735 */
  if (!C.zf) goto L_10b41735;
  /* 10b416e9 push 0x10b6e3e8 */
  push32((uint32_t)(0x10b6e3e8u));
  /* 10b416ee call 0x10b41005 */
  push32(0x10b416f3u); f_10b41005();
  /* 10b416f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b416f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b416f8 jle 0x10b41735 */
  if ((C.zf||C.sf!=C.of)) goto L_10b41735;
  /* 10b416fa mov esi, esp */
  ESI = (ESP);
  /* 10b416fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b416fe push 0x10b6e410 */
  push32((uint32_t)(0x10b6e410u));
  /* 10b41703 call dword ptr [0x10b70410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70410))), 0x10b41709u);
  /* 10b41709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4170c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4170e call 0x10b41d10 */
  push32(0x10b41713u); f_10b41d10();
  /* 10b41713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41715 jle 0x10b41735 */
  if ((C.zf||C.sf!=C.of)) goto L_10b41735;
  /* 10b41717 mov esi, esp */
  ESI = (ESP);
  /* 10b41719 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4171b push 0x10b6e410 */
  push32((uint32_t)(0x10b6e410u));
  /* 10b41720 push 0x10b6e3e8 */
  push32((uint32_t)(0x10b6e3e8u));
  /* 10b41725 call dword ptr [0x10b70414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70414))), 0x10b4172bu);
  /* 10b4172b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4172e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41730 call 0x10b41d10 */
  push32(0x10b41735u); f_10b41d10();
L_10b41735:;
  /* 10b41735 mov esi, esp */
  ESI = (ESP);
  /* 10b41737 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b41739 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b4173fu);
  /* 10b4173f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41742 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41744 call 0x10b41d10 */
  push32(0x10b41749u); f_10b41d10();
  /* 10b41749 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4174e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41750 je 0x10b41795 */
  if (C.zf) goto L_10b41795;
  /* 10b41752 mov esi, esp */
  ESI = (ESP);
  /* 10b41754 call dword ptr [0x10b70400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70400))), 0x10b4175au);
  /* 10b4175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4175c call 0x10b41d10 */
  push32(0x10b41761u); f_10b41d10();
  /* 10b41761 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41766 jle 0x10b41795 */
  if ((C.zf||C.sf!=C.of)) goto L_10b41795;
  /* 10b41768 mov esi, esp */
  ESI = (ESP);
  /* 10b4176a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4176c push 5 */
  push32((uint32_t)(0x5u));
  /* 10b4176e call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b41774u);
  /* 10b41774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41777 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41779 call 0x10b41d10 */
  push32(0x10b4177eu); f_10b41d10();
  /* 10b4177e mov esi, esp */
  ESI = (ESP);
  /* 10b41780 push 0x10b690cc */
  push32((uint32_t)(0x10b690ccu));
  /* 10b41785 call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b4178bu);
  /* 10b4178b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4178e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41790 call 0x10b41d10 */
  push32(0x10b41795u); f_10b41d10();
L_10b41795:;
  /* 10b41795 mov esi, esp */
  ESI = (ESP);
  /* 10b41797 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b41799 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b4179fu);
  /* 10b4179f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b417a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b417a4 call 0x10b41d10 */
  push32(0x10b417a9u); f_10b41d10();
  /* 10b417a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b417ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b417b0 je 0x10b41812 */
  if (C.zf) goto L_10b41812;
  /* 10b417b2 mov esi, esp */
  ESI = (ESP);
  /* 10b417b4 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b417b6 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b417bcu);
  /* 10b417bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b417bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b417c1 call 0x10b41d10 */
  push32(0x10b417c6u); f_10b41d10();
  /* 10b417c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b417cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b417cd je 0x10b41812 */
  if (C.zf) goto L_10b41812;
  /* 10b417cf mov esi, esp */
  ESI = (ESP);
  /* 10b417d1 call dword ptr [0x10b70400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70400))), 0x10b417d7u);
  /* 10b417d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b417d9 call 0x10b41d10 */
  push32(0x10b417deu); f_10b41d10();
  /* 10b417de cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b417e3 jle 0x10b41812 */
  if ((C.zf||C.sf!=C.of)) goto L_10b41812;
  /* 10b417e5 mov esi, esp */
  ESI = (ESP);
  /* 10b417e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b417e9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b417eb call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b417f1u);
  /* 10b417f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b417f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b417f6 call 0x10b41d10 */
  push32(0x10b417fbu); f_10b41d10();
  /* 10b417fb mov esi, esp */
  ESI = (ESP);
  /* 10b417fd push 0x10b690c4 */
  push32((uint32_t)(0x10b690c4u));
  /* 10b41802 call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b41808u);
  /* 10b41808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4180b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4180d call 0x10b41d10 */
  push32(0x10b41812u); f_10b41d10();
L_10b41812:;
  /* 10b41812 mov esi, esp */
  ESI = (ESP);
  /* 10b41814 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b41816 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b4181cu);
  /* 10b4181c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4181f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41821 call 0x10b41d10 */
  push32(0x10b41826u); f_10b41d10();
  /* 10b41826 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4182b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4182d jne 0x10b418b5 */
  if (!C.zf) goto L_10b418b5;
  /* 10b41833 mov esi, esp */
  ESI = (ESP);
  /* 10b41835 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b41837 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b4183du);
  /* 10b4183d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41842 call 0x10b41d10 */
  push32(0x10b41847u); f_10b41d10();
  /* 10b41847 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4184c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4184e je 0x10b418b5 */
  if (C.zf) goto L_10b418b5;
  /* 10b41850 mov esi, esp */
  ESI = (ESP);
  /* 10b41852 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41854 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41856 call dword ptr [0x10b70418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70418))), 0x10b4185cu);
  /* 10b4185c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4185f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41861 call 0x10b41d10 */
  push32(0x10b41866u); f_10b41d10();
  /* 10b41866 cmp eax, 0x1869f */
  { uint32_t _a=(EAX),_b=(0x1869fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4186b jle 0x10b418b5 */
  if ((C.zf||C.sf!=C.of)) goto L_10b418b5;
  /* 10b4186d mov esi, esp */
  ESI = (ESP);
  /* 10b4186f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41871 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b41873 call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b41879u);
  /* 10b41879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4187c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4187e call 0x10b41d10 */
  push32(0x10b41883u); f_10b41d10();
  /* 10b41883 mov esi, esp */
  ESI = (ESP);
  /* 10b41885 push 0xfffe7960 */
  push32((uint32_t)(0xfffe7960u));
  /* 10b4188a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4188c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4188e call dword ptr [0x10b7041c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7041c))), 0x10b41894u);
  /* 10b41894 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41899 call 0x10b41d10 */
  push32(0x10b4189eu); f_10b41d10();
  /* 10b4189e mov esi, esp */
  ESI = (ESP);
  /* 10b418a0 push 0x10b690bc */
  push32((uint32_t)(0x10b690bcu));
  /* 10b418a5 call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b418abu);
  /* 10b418ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b418ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b418b0 call 0x10b41d10 */
  push32(0x10b418b5u); f_10b41d10();
L_10b418b5:;
  /* 10b418b5 mov esi, esp */
  ESI = (ESP);
  /* 10b418b7 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b418b9 call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b418bfu);
  /* 10b418bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b418c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b418c4 call 0x10b41d10 */
  push32(0x10b418c9u); f_10b41d10();
  /* 10b418c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b418ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b418d0 je 0x10b4195b */
  if (C.zf) goto L_10b4195b;
  /* 10b418d6 mov esi, esp */
  ESI = (ESP);
  /* 10b418d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b418da call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b418e0u);
  /* 10b418e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b418e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b418e5 call 0x10b41d10 */
  push32(0x10b418eau); f_10b41d10();
  /* 10b418ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b418ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b418f1 je 0x10b4195b */
  if (C.zf) goto L_10b4195b;
  /* 10b418f3 mov esi, esp */
  ESI = (ESP);
  /* 10b418f5 call dword ptr [0x10b70400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70400))), 0x10b418fbu);
  /* 10b418fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b418fd call 0x10b41d10 */
  push32(0x10b41902u); f_10b41d10();
  /* 10b41902 cmp eax, 0x13c68 */
  { uint32_t _a=(EAX),_b=(0x13c68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41907 jle 0x10b4195b */
  if ((C.zf||C.sf!=C.of)) goto L_10b4195b;
  /* 10b41909 mov esi, esp */
  ESI = (ESP);
  /* 10b4190b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4190d push 7 */
  push32((uint32_t)(0x7u));
  /* 10b4190f call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b41915u);
  /* 10b41915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41918 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4191a call 0x10b41d10 */
  push32(0x10b4191fu); f_10b41d10();
  /* 10b4191f mov esi, esp */
  ESI = (ESP);
  /* 10b41921 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41923 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b41925 call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b4192bu);
  /* 10b4192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4192e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41930 call 0x10b41d10 */
  push32(0x10b41935u); f_10b41d10();
  /* 10b41935 mov esi, esp */
  ESI = (ESP);
  /* 10b41937 push 0x10b690b0 */
  push32((uint32_t)(0x10b690b0u));
  /* 10b4193c call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b41942u);
  /* 10b41942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41947 call 0x10b41d10 */
  push32(0x10b4194cu); f_10b41d10();
  /* 10b4194c mov esi, esp */
  ESI = (ESP);
  /* 10b4194e call dword ptr [0x10b703fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703fc))), 0x10b41954u);
  /* 10b41954 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41956 call 0x10b41d10 */
  push32(0x10b4195bu); f_10b41d10();
L_10b4195b:;
  /* 10b4195b mov esi, esp */
  ESI = (ESP);
  /* 10b4195d push 8 */
  push32((uint32_t)(0x8u));
  /* 10b4195f call dword ptr [0x10b703e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e0))), 0x10b41965u);
  /* 10b41965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41968 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4196a call 0x10b41d10 */
  push32(0x10b4196fu); f_10b41d10();
  /* 10b4196f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41976 je 0x10b419d6 */
  if (C.zf) goto L_10b419d6;
  /* 10b41978 mov esi, esp */
  ESI = (ESP);
  /* 10b4197a call dword ptr [0x10b70400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70400))), 0x10b41980u);
  /* 10b41980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41982 call 0x10b41d10 */
  push32(0x10b41987u); f_10b41d10();
  /* 10b41987 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4198c jle 0x10b419d6 */
  if ((C.zf||C.sf!=C.of)) goto L_10b419d6;
  /* 10b4198e mov esi, esp */
  ESI = (ESP);
  /* 10b41990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41992 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b41994 call dword ptr [0x10b703e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703e4))), 0x10b4199au);
  /* 10b4199a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4199d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4199f call 0x10b41d10 */
  push32(0x10b419a4u); f_10b41d10();
  /* 10b419a4 mov esi, esp */
  ESI = (ESP);
  /* 10b419a6 push 0x10b690a8 */
  push32((uint32_t)(0x10b690a8u));
  /* 10b419ab call dword ptr [0x10b703f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703f4))), 0x10b419b1u);
  /* 10b419b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b419b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b419b6 call 0x10b41d10 */
  push32(0x10b419bbu); f_10b41d10();
  /* 10b419bb mov esi, esp */
  ESI = (ESP);
  /* 10b419bd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10b419c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b419c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b419c6 call dword ptr [0x10b7041c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7041c))), 0x10b419ccu);
  /* 10b419cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b419cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b419d1 call 0x10b41d10 */
  push32(0x10b419d6u); f_10b41d10();
L_10b419d6:;
  /* 10b419d6 pop edi */
  EDI = (pop32());
  /* 10b419d7 pop esi */
  ESI = (pop32());
  /* 10b419d8 pop ebx */
  EBX = (pop32());
  /* 10b419d9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b419dc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b419de call 0x10b41d10 */
  push32(0x10b419e3u); f_10b41d10();
  /* 10b419e3 mov esp, ebp */
  ESP = (EBP);
  /* 10b419e5 pop ebp */
  EBP = (pop32());
  /* 10b419e6 ret  */
  ESPCHK(0x10b41230u, _esp0);
  ESP += 4; return;
}

/* FUN_10001be0 @ 0x10b41be0 (63 bytes, 26 insns) */
void f_10b41be0(void) {
  FTRACE(0x10b41be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41be1 mov ebp, esp */
  EBP = (ESP);
  /* 10b41be3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b41be6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b41be7 push esi */
  push32((uint32_t)(ESI));
  /* 10b41be8 push edi */
  push32((uint32_t)(EDI));
  /* 10b41be9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b41bec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b41bf1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b41bf6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b41bf8 mov esi, esp */
  ESI = (ESP);
  /* 10b41bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41bfd push eax */
  push32((uint32_t)(EAX));
  /* 10b41bfe call dword ptr [0x10b703dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703dc))), 0x10b41c04u);
  /* 10b41c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41c07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41c09 call 0x10b41d10 */
  push32(0x10b41c0eu); f_10b41d10();
  /* 10b41c0e pop edi */
  EDI = (pop32());
  /* 10b41c0f pop esi */
  ESI = (pop32());
  /* 10b41c10 pop ebx */
  EBX = (pop32());
  /* 10b41c11 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41c14 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41c16 call 0x10b41d10 */
  push32(0x10b41c1bu); f_10b41d10();
  /* 10b41c1b mov esp, ebp */
  ESP = (EBP);
  /* 10b41c1d pop ebp */
  EBP = (pop32());
  /* 10b41c1e ret  */
  ESPCHK(0x10b41be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c30 @ 0x10b41c30 (67 bytes, 28 insns) */
void f_10b41c30(void) {
  FTRACE(0x10b41c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41c31 mov ebp, esp */
  EBP = (ESP);
  /* 10b41c33 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b41c36 push ebx */
  push32((uint32_t)(EBX));
  /* 10b41c37 push esi */
  push32((uint32_t)(ESI));
  /* 10b41c38 push edi */
  push32((uint32_t)(EDI));
  /* 10b41c39 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b41c3c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b41c41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b41c46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b41c48 mov esi, esp */
  ESI = (ESP);
  /* 10b41c4a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10b41c4d push eax */
  push32((uint32_t)(EAX));
  /* 10b41c4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41c51 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41c52 call dword ptr [0x10b703d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b703d8))), 0x10b41c58u);
  /* 10b41c58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41c5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41c5d call 0x10b41d10 */
  push32(0x10b41c62u); f_10b41d10();
  /* 10b41c62 pop edi */
  EDI = (pop32());
  /* 10b41c63 pop esi */
  ESI = (pop32());
  /* 10b41c64 pop ebx */
  EBX = (pop32());
  /* 10b41c65 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41c68 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41c6a call 0x10b41d10 */
  push32(0x10b41c6fu); f_10b41d10();
  /* 10b41c6f mov esp, ebp */
  ESP = (EBP);
  /* 10b41c71 pop ebp */
  EBP = (pop32());
  /* 10b41c72 ret  */
  ESPCHK(0x10b41c30u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10b41d10 (56 bytes, 28 insns) */
void f_10b41d10(void) {
  FTRACE(0x10b41d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41d10 jne 0x10b41d13 */
  if (!C.zf) goto L_10b41d13;
  /* 10b41d12 ret  */
  ESPCHK(0x10b41d10u, _esp0);
  ESP += 4; return;
L_10b41d13:;
  /* 10b41d13 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41d14 mov ebp, esp */
  EBP = (ESP);
  /* 10b41d16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b41d19 push eax */
  push32((uint32_t)(EAX));
  /* 10b41d1a push edx */
  push32((uint32_t)(EDX));
  /* 10b41d1b push ebx */
  push32((uint32_t)(EBX));
  /* 10b41d1c push esi */
  push32((uint32_t)(ESI));
  /* 10b41d1d push edi */
  push32((uint32_t)(EDI));
  /* 10b41d1e push 0x10b69124 */
  push32((uint32_t)(0x10b69124u));
  /* 10b41d23 push 0x10b69120 */
  push32((uint32_t)(0x10b69120u));
  /* 10b41d28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10b41d2a push 0x10b69110 */
  push32((uint32_t)(0x10b69110u));
  /* 10b41d2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41d31 call 0x10b420e0 */
  push32(0x10b41d36u); f_10b420e0();
  /* 10b41d36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41d39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41d3c jne 0x10b41d3f */
  if (!C.zf) goto L_10b41d3f;
  /* 10b41d3e int3  */
  x86_unimpl("int3 @ 0x10b41d3e");
L_10b41d3f:;
  /* 10b41d3f pop edi */
  EDI = (pop32());
  /* 10b41d40 pop esi */
  ESI = (pop32());
  /* 10b41d41 pop ebx */
  EBX = (pop32());
  /* 10b41d42 pop edx */
  EDX = (pop32());
  /* 10b41d43 pop eax */
  EAX = (pop32());
  /* 10b41d44 mov esp, ebp */
  ESP = (EBP);
  /* 10b41d46 pop ebp */
  EBP = (pop32());
  /* 10b41d47 ret  */
  ESPCHK(0x10b41d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d50 @ 0x10b41d50 (313 bytes, 78 insns) */
void f_10b41d50(void) {
  FTRACE(0x10b41d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41d51 mov ebp, esp */
  EBP = (ESP);
  /* 10b41d53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41d57 jne 0x10b41e17 */
  if (!C.zf) goto L_10b41e17;
  /* 10b41d5d call dword ptr [0x10b702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702b0))), 0x10b41d63u);
  /* 10b41d63 mov dword ptr [0x10b6e458], eax */
  w32((uint32_t)(0x10b6e458), (EAX));
  /* 10b41d68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b41d6a call 0x10b45810 */
  push32(0x10b41d6fu); f_10b45810();
  /* 10b41d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41d74 jne 0x10b41d7d */
  if (!C.zf) goto L_10b41d7d;
  /* 10b41d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b41d78 jmp 0x10b41e85 */
  goto L_10b41e85;
L_10b41d7d:;
  /* 10b41d7d mov eax, dword ptr [0x10b6e458] */
  EAX = (r32((uint32_t)(0x10b6e458)));
  /* 10b41d82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b41d85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41d8a mov dword ptr [0x10b6e464], eax */
  w32((uint32_t)(0x10b6e464), (EAX));
  /* 10b41d8f mov ecx, dword ptr [0x10b6e458] */
  ECX = (r32((uint32_t)(0x10b6e458)));
  /* 10b41d95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b41d9b mov dword ptr [0x10b6e460], ecx */
  w32((uint32_t)(0x10b6e460), (ECX));
  /* 10b41da1 mov edx, dword ptr [0x10b6e460] */
  EDX = (r32((uint32_t)(0x10b6e460)));
  /* 10b41da7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b41daa add edx, dword ptr [0x10b6e464] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6e464))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41db0 mov dword ptr [0x10b6e45c], edx */
  w32((uint32_t)(0x10b6e45c), (EDX));
  /* 10b41db6 mov eax, dword ptr [0x10b6e458] */
  EAX = (r32((uint32_t)(0x10b6e458)));
  /* 10b41dbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b41dbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41dc3 mov dword ptr [0x10b6e458], eax */
  w32((uint32_t)(0x10b6e458), (EAX));
  /* 10b41dc8 call 0x10b42980 */
  push32(0x10b41dcdu); f_10b42980();
  /* 10b41dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41dcf jne 0x10b41ddd */
  if (!C.zf) goto L_10b41ddd;
  /* 10b41dd1 call 0x10b45860 */
  push32(0x10b41dd6u); f_10b45860();
  /* 10b41dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b41dd8 jmp 0x10b41e85 */
  goto L_10b41e85;
L_10b41ddd:;
  /* 10b41ddd call dword ptr [0x10b702ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702ac))), 0x10b41de3u);
  /* 10b41de3 mov dword ptr [0x10b6ffac], eax */
  w32((uint32_t)(0x10b6ffac), (EAX));
  /* 10b41de8 call 0x10b455f0 */
  push32(0x10b41dedu); f_10b455f0();
  /* 10b41ded mov dword ptr [0x10b6e440], eax */
  w32((uint32_t)(0x10b6e440), (EAX));
  /* 10b41df2 call 0x10b42c30 */
  push32(0x10b41df7u); f_10b42c30();
  /* 10b41df7 call 0x10b450e0 */
  push32(0x10b41dfcu); f_10b450e0();
  /* 10b41dfc call 0x10b44f90 */
  push32(0x10b41e01u); f_10b44f90();
  /* 10b41e01 call 0x10b42780 */
  push32(0x10b41e06u); f_10b42780();
  /* 10b41e06 mov ecx, dword ptr [0x10b6e43c] */
  ECX = (r32((uint32_t)(0x10b6e43c)));
  /* 10b41e0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41e0f mov dword ptr [0x10b6e43c], ecx */
  w32((uint32_t)(0x10b6e43c), (ECX));
  /* 10b41e15 jmp 0x10b41e80 */
  goto L_10b41e80;
L_10b41e17:;
  /* 10b41e17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41e1b jne 0x10b41e70 */
  if (!C.zf) goto L_10b41e70;
  /* 10b41e1d cmp dword ptr [0x10b6e43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41e24 jle 0x10b41e6a */
  if ((C.zf||C.sf!=C.of)) goto L_10b41e6a;
  /* 10b41e26 mov edx, dword ptr [0x10b6e43c] */
  EDX = (r32((uint32_t)(0x10b6e43c)));
  /* 10b41e2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b41e2f mov dword ptr [0x10b6e43c], edx */
  w32((uint32_t)(0x10b6e43c), (EDX));
  /* 10b41e35 cmp dword ptr [0x10b6e490], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e490))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41e3c jne 0x10b41e43 */
  if (!C.zf) goto L_10b41e43;
  /* 10b41e3e call 0x10b42800 */
  push32(0x10b41e43u); f_10b42800();
L_10b41e43:;
  /* 10b41e43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b41e45 call 0x10b44530 */
  push32(0x10b41e4au); f_10b44530();
  /* 10b41e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41e4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b41e50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41e52 je 0x10b41e59 */
  if (C.zf) goto L_10b41e59;
  /* 10b41e54 call 0x10b44e40 */
  push32(0x10b41e59u); f_10b44e40();
L_10b41e59:;
  /* 10b41e59 call 0x10b42f60 */
  push32(0x10b41e5eu); f_10b42f60();
  /* 10b41e5e call 0x10b42a10 */
  push32(0x10b41e63u); f_10b42a10();
  /* 10b41e63 call 0x10b45860 */
  push32(0x10b41e68u); f_10b45860();
  /* 10b41e68 jmp 0x10b41e6e */
  goto L_10b41e6e;
L_10b41e6a:;
  /* 10b41e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b41e6c jmp 0x10b41e85 */
  goto L_10b41e85;
L_10b41e6e:;
  /* 10b41e6e jmp 0x10b41e80 */
  goto L_10b41e80;
L_10b41e70:;
  /* 10b41e70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41e74 jne 0x10b41e80 */
  if (!C.zf) goto L_10b41e80;
  /* 10b41e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41e78 call 0x10b42b00 */
  push32(0x10b41e7du); f_10b42b00();
  /* 10b41e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b41e80:;
  /* 10b41e80 mov eax, 1 */
  EAX = (0x1u);
L_10b41e85:;
  /* 10b41e85 pop ebp */
  EBP = (pop32());
  /* 10b41e86 ret 0xc */
  ESPCHK(0x10b41d50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10b41e90 (243 bytes, 86 insns) */
void f_10b41e90(void) {
  FTRACE(0x10b41e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41e91 mov ebp, esp */
  EBP = (ESP);
  /* 10b41e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41e94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b41e9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41e9f jne 0x10b41eb1 */
  if (!C.zf) goto L_10b41eb1;
  /* 10b41ea1 cmp dword ptr [0x10b6e43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41ea8 jne 0x10b41eb1 */
  if (!C.zf) goto L_10b41eb1;
  /* 10b41eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b41eac jmp 0x10b41f7d */
  goto L_10b41f7d;
L_10b41eb1:;
  /* 10b41eb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41eb5 je 0x10b41ebd */
  if (C.zf) goto L_10b41ebd;
  /* 10b41eb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41ebb jne 0x10b41eff */
  if (!C.zf) goto L_10b41eff;
L_10b41ebd:;
  /* 10b41ebd cmp dword ptr [0x10b6ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41ec4 je 0x10b41edb */
  if (C.zf) goto L_10b41edb;
  /* 10b41ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b41ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10b41eca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b41ecd push ecx */
  push32((uint32_t)(ECX));
  /* 10b41ece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41ed1 push edx */
  push32((uint32_t)(EDX));
  /* 10b41ed2 call dword ptr [0x10b6ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6ffbc))), 0x10b41ed8u);
  /* 10b41ed8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b41edb:;
  /* 10b41edb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41edf je 0x10b41ef5 */
  if (C.zf) goto L_10b41ef5;
  /* 10b41ee1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b41ee4 push eax */
  push32((uint32_t)(EAX));
  /* 10b41ee5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b41ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41ee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41eec push edx */
  push32((uint32_t)(EDX));
  /* 10b41eed call 0x10b41d50 */
  push32(0x10b41ef2u); f_10b41d50();
  /* 10b41ef2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b41ef5:;
  /* 10b41ef5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41ef9 jne 0x10b41eff */
  if (!C.zf) goto L_10b41eff;
  /* 10b41efb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b41efd jmp 0x10b41f7d */
  goto L_10b41f7d;
L_10b41eff:;
  /* 10b41eff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b41f02 push eax */
  push32((uint32_t)(EAX));
  /* 10b41f03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b41f06 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41f07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41f0a push edx */
  push32((uint32_t)(EDX));
  /* 10b41f0b call 0x10b41014 */
  push32(0x10b41f10u); f_10b41014();
  /* 10b41f10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b41f13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f17 jne 0x10b41f2e */
  if (!C.zf) goto L_10b41f2e;
  /* 10b41f19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f1d jne 0x10b41f2e */
  if (!C.zf) goto L_10b41f2e;
  /* 10b41f1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b41f22 push eax */
  push32((uint32_t)(EAX));
  /* 10b41f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b41f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41f28 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41f29 call 0x10b41d50 */
  push32(0x10b41f2eu); f_10b41d50();
L_10b41f2e:;
  /* 10b41f2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f32 je 0x10b41f3a */
  if (C.zf) goto L_10b41f3a;
  /* 10b41f34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f38 jne 0x10b41f7a */
  if (!C.zf) goto L_10b41f7a;
L_10b41f3a:;
  /* 10b41f3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b41f3d push edx */
  push32((uint32_t)(EDX));
  /* 10b41f3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b41f41 push eax */
  push32((uint32_t)(EAX));
  /* 10b41f42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41f45 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41f46 call 0x10b41d50 */
  push32(0x10b41f4bu); f_10b41d50();
  /* 10b41f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b41f4d jne 0x10b41f56 */
  if (!C.zf) goto L_10b41f56;
  /* 10b41f4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b41f56:;
  /* 10b41f56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f5a je 0x10b41f7a */
  if (C.zf) goto L_10b41f7a;
  /* 10b41f5c cmp dword ptr [0x10b6ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f63 je 0x10b41f7a */
  if (C.zf) goto L_10b41f7a;
  /* 10b41f65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b41f68 push edx */
  push32((uint32_t)(EDX));
  /* 10b41f69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b41f6c push eax */
  push32((uint32_t)(EAX));
  /* 10b41f6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41f70 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41f71 call dword ptr [0x10b6ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6ffbc))), 0x10b41f77u);
  /* 10b41f77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b41f7a:;
  /* 10b41f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b41f7d:;
  /* 10b41f7d mov esp, ebp */
  ESP = (EBP);
  /* 10b41f7f pop ebp */
  EBP = (pop32());
  /* 10b41f80 ret 0xc */
  ESPCHK(0x10b41e90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10b41f90 (58 bytes, 18 insns) */
void f_10b41f90(void) {
  FTRACE(0x10b41f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41f91 mov ebp, esp */
  EBP = (ESP);
  /* 10b41f93 cmp dword ptr [0x10b6e448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41f9a je 0x10b41fae */
  if (C.zf) goto L_10b41fae;
  /* 10b41f9c cmp dword ptr [0x10b6e448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41fa3 jne 0x10b41fb3 */
  if (!C.zf) goto L_10b41fb3;
  /* 10b41fa5 cmp dword ptr [0x10b6e44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41fac jne 0x10b41fb3 */
  if (!C.zf) goto L_10b41fb3;
L_10b41fae:;
  /* 10b41fae call 0x10b45900 */
  push32(0x10b41fb3u); f_10b45900();
L_10b41fb3:;
  /* 10b41fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41fb6 push eax */
  push32((uint32_t)(EAX));
  /* 10b41fb7 call 0x10b45950 */
  push32(0x10b41fbcu); f_10b45950();
  /* 10b41fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41fbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b41fc4 call dword ptr [0x10b6ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6ca30))), 0x10b41fcau);
  /* 10b41fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b41fcd pop ebp */
  EBP = (pop32());
  /* 10b41fce ret  */
  ESPCHK(0x10b41f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd0 @ 0x10b41fd0 (11 bytes, 5 insns) */
void f_10b41fd0(void) {
  FTRACE(0x10b41fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b41fd3 call dword ptr [0x10b702b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702b4))), 0x10b41fd9u);
  /* 10b41fd9 pop ebp */
  EBP = (pop32());
  /* 10b41fda ret  */
  ESPCHK(0x10b41fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fe0 @ 0x10b41fe0 (87 bytes, 30 insns) */
void f_10b41fe0(void) {
  FTRACE(0x10b41fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b41fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b41fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10b41fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b41fe4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41fe8 jl 0x10b41ff0 */
  if ((C.sf!=C.of)) goto L_10b41ff0;
  /* 10b41fea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41fee jl 0x10b41ff5 */
  if ((C.sf!=C.of)) goto L_10b41ff5;
L_10b41ff0:;
  /* 10b41ff0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b41ff3 jmp 0x10b42033 */
  goto L_10b42033;
L_10b41ff5:;
  /* 10b41ff5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b41ff9 jne 0x10b42007 */
  if (!C.zf) goto L_10b42007;
  /* 10b41ffb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b41ffe mov eax, dword ptr [eax*4 + 0x10b6ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10b6ca38)));
  /* 10b42005 jmp 0x10b42033 */
  goto L_10b42033;
L_10b42007:;
  /* 10b42007 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4200a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4200d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4200f je 0x10b42016 */
  if (C.zf) goto L_10b42016;
  /* 10b42011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b42014 jmp 0x10b42033 */
  goto L_10b42033;
L_10b42016:;
  /* 10b42016 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42019 mov eax, dword ptr [edx*4 + 0x10b6ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6ca38)));
  /* 10b42020 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b42023 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42026 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b42029 mov dword ptr [ecx*4 + 0x10b6ca38], edx */
  w32((uint32_t)(ECX*4 + 0x10b6ca38), (EDX));
  /* 10b42030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b42033:;
  /* 10b42033 mov esp, ebp */
  ESP = (EBP);
  /* 10b42035 pop ebp */
  EBP = (pop32());
  /* 10b42036 ret  */
  ESPCHK(0x10b41fe0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10b42040 (126 bytes, 38 insns) */
void f_10b42040(void) {
  FTRACE(0x10b42040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42040 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42041 mov ebp, esp */
  EBP = (ESP);
  /* 10b42043 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42044 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42048 jl 0x10b42050 */
  if ((C.sf!=C.of)) goto L_10b42050;
  /* 10b4204a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4204e jl 0x10b42057 */
  if ((C.sf!=C.of)) goto L_10b42057;
L_10b42050:;
  /* 10b42050 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10b42055 jmp 0x10b420ba */
  goto L_10b420ba;
L_10b42057:;
  /* 10b42057 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4205b jne 0x10b42069 */
  if (!C.zf) goto L_10b42069;
  /* 10b4205d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42060 mov eax, dword ptr [eax*4 + 0x10b6ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10b6ca44)));
  /* 10b42067 jmp 0x10b420ba */
  goto L_10b420ba;
L_10b42069:;
  /* 10b42069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4206c mov edx, dword ptr [ecx*4 + 0x10b6ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca44)));
  /* 10b42073 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b42076 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4207a jne 0x10b42090 */
  if (!C.zf) goto L_10b42090;
  /* 10b4207c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10b4207e call dword ptr [0x10b702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702b8))), 0x10b42084u);
  /* 10b42084 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42087 mov dword ptr [ecx*4 + 0x10b6ca44], eax */
  w32((uint32_t)(ECX*4 + 0x10b6ca44), (EAX));
  /* 10b4208e jmp 0x10b420b7 */
  goto L_10b420b7;
L_10b42090:;
  /* 10b42090 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42094 jne 0x10b420aa */
  if (!C.zf) goto L_10b420aa;
  /* 10b42096 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b42098 call dword ptr [0x10b702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702b8))), 0x10b4209eu);
  /* 10b4209e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b420a1 mov dword ptr [edx*4 + 0x10b6ca44], eax */
  w32((uint32_t)(EDX*4 + 0x10b6ca44), (EAX));
  /* 10b420a8 jmp 0x10b420b7 */
  goto L_10b420b7;
L_10b420aa:;
  /* 10b420aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b420ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b420b0 mov dword ptr [eax*4 + 0x10b6ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10b6ca44), (ECX));
L_10b420b7:;
  /* 10b420b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b420ba:;
  /* 10b420ba mov esp, ebp */
  ESP = (EBP);
  /* 10b420bc pop ebp */
  EBP = (pop32());
  /* 10b420bd ret  */
  ESPCHK(0x10b42040u, _esp0);
  ESP += 4; return;
}

/* FUN_100020c0 @ 0x10b420c0 (28 bytes, 11 insns) */
void f_10b420c0(void) {
  FTRACE(0x10b420c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b420c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b420c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b420c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b420c4 mov eax, dword ptr [0x10b6ffa0] */
  EAX = (r32((uint32_t)(0x10b6ffa0)));
  /* 10b420c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b420cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b420cf mov dword ptr [0x10b6ffa0], ecx */
  w32((uint32_t)(0x10b6ffa0), (ECX));
  /* 10b420d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b420d8 mov esp, ebp */
  ESP = (EBP);
  /* 10b420da pop ebp */
  EBP = (pop32());
  /* 10b420db ret  */
  ESPCHK(0x10b420c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e0 @ 0x10b420e0 (912 bytes, 248 insns) */
void f_10b420e0(void) {
  FTRACE(0x10b420e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b420e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b420e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b420e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10b420e8 call 0x10b461c0 */
  push32(0x10b420edu); f_10b461c0();
  /* 10b420ed push edi */
  push32((uint32_t)(EDI));
  /* 10b420ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10b420f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10b420fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b420fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10b42102 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b42104 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10b42106 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b42107 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10b4210e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10b42113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b42115 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10b4211b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b4211d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10b4211f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b42120 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10b42127 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10b4212c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4212e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10b42134 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b42136 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10b42138 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b42139 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10b4213c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10b42142 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42146 jl 0x10b4214e */
  if ((C.sf!=C.of)) goto L_10b4214e;
  /* 10b42148 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4214c jl 0x10b42156 */
  if ((C.sf!=C.of)) goto L_10b42156;
L_10b4214e:;
  /* 10b4214e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b42151 jmp 0x10b4246b */
  goto L_10b4246b;
L_10b42156:;
  /* 10b42156 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4215a jne 0x10b42200 */
  if (!C.zf) goto L_10b42200;
  /* 10b42160 push 0x10b6ca34 */
  push32((uint32_t)(0x10b6ca34u));
  /* 10b42165 call dword ptr [0x10b702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d0))), 0x10b4216bu);
  /* 10b4216b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4216d jle 0x10b42200 */
  if ((C.zf||C.sf!=C.of)) goto L_10b42200;
  /* 10b42173 cmp dword ptr [0x10b6e450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4217a jne 0x10b421be */
  if (!C.zf) goto L_10b421be;
  /* 10b4217c push 0x10b692cc */
  push32((uint32_t)(0x10b692ccu));
  /* 10b42181 call dword ptr [0x10b702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702cc))), 0x10b42187u);
  /* 10b42187 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10b4218d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42194 je 0x10b421b6 */
  if (C.zf) goto L_10b421b6;
  /* 10b42196 push 0x10b692c0 */
  push32((uint32_t)(0x10b692c0u));
  /* 10b4219b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10b421a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b421a2 call dword ptr [0x10b702c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c8))), 0x10b421a8u);
  /* 10b421a8 mov dword ptr [0x10b6e450], eax */
  w32((uint32_t)(0x10b6e450), (EAX));
  /* 10b421ad cmp dword ptr [0x10b6e450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b421b4 jne 0x10b421be */
  if (!C.zf) goto L_10b421be;
L_10b421b6:;
  /* 10b421b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b421b9 jmp 0x10b4246b */
  goto L_10b4246b;
L_10b421be:;
  /* 10b421be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b421c1 push edx */
  push32((uint32_t)(EDX));
  /* 10b421c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b421c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b421c6 push 0x10b6928c */
  push32((uint32_t)(0x10b6928cu));
  /* 10b421cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10b421d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b421d2 call dword ptr [0x10b6e450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e450))), 0x10b421d8u);
  /* 10b421d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b421db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b421e1 push edx */
  push32((uint32_t)(EDX));
  /* 10b421e2 call dword ptr [0x10b702c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c4))), 0x10b421e8u);
  /* 10b421e8 push 0x10b6ca34 */
  push32((uint32_t)(0x10b6ca34u));
  /* 10b421ed call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b421f3u);
  /* 10b421f3 call 0x10b41fd0 */
  push32(0x10b421f8u); f_10b41fd0();
  /* 10b421f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b421fb jmp 0x10b4246b */
  goto L_10b4246b;
L_10b42200:;
  /* 10b42200 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42204 je 0x10b4223d */
  if (C.zf) goto L_10b4223d;
  /* 10b42206 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10b4220c push eax */
  push32((uint32_t)(EAX));
  /* 10b4220d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b42210 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42211 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10b42216 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10b4221c push edx */
  push32((uint32_t)(EDX));
  /* 10b4221d call 0x10b460c0 */
  push32(0x10b42222u); f_10b460c0();
  /* 10b42222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b42227 jge 0x10b4223d */
  if ((C.sf==C.of)) goto L_10b4223d;
  /* 10b42229 push 0x10b69260 */
  push32((uint32_t)(0x10b69260u));
  /* 10b4222e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10b42234 push eax */
  push32((uint32_t)(EAX));
  /* 10b42235 call 0x10b45fd0 */
  push32(0x10b4223au); f_10b45fd0();
  /* 10b4223a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4223d:;
  /* 10b4223d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42241 jne 0x10b42275 */
  if (!C.zf) goto L_10b42275;
  /* 10b42243 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42247 je 0x10b42255 */
  if (C.zf) goto L_10b42255;
  /* 10b42249 mov dword ptr [ebp - 0x3028], 0x10b6924c */
  w32((uint32_t)(EBP + -0x3028), (0x10b6924cu));
  /* 10b42253 jmp 0x10b4225f */
  goto L_10b4225f;
L_10b42255:;
  /* 10b42255 mov dword ptr [ebp - 0x3028], 0x10b69238 */
  w32((uint32_t)(EBP + -0x3028), (0x10b69238u));
L_10b4225f:;
  /* 10b4225f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10b42265 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42266 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10b4226c push edx */
  push32((uint32_t)(EDX));
  /* 10b4226d call 0x10b45fd0 */
  push32(0x10b42272u); f_10b45fd0();
  /* 10b42272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42275:;
  /* 10b42275 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10b4227b push eax */
  push32((uint32_t)(EAX));
  /* 10b4227c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10b42282 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42283 call 0x10b45fe0 */
  push32(0x10b42288u); f_10b45fe0();
  /* 10b42288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4228b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4228f jne 0x10b422ca */
  if (!C.zf) goto L_10b422ca;
  /* 10b42291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42294 mov eax, dword ptr [edx*4 + 0x10b6ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6ca38)));
  /* 10b4229b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4229e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b422a0 je 0x10b422b6 */
  if (C.zf) goto L_10b422b6;
  /* 10b422a2 push 0x10b69234 */
  push32((uint32_t)(0x10b69234u));
  /* 10b422a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10b422ad push ecx */
  push32((uint32_t)(ECX));
  /* 10b422ae call 0x10b45fe0 */
  push32(0x10b422b3u); f_10b45fe0();
  /* 10b422b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b422b6:;
  /* 10b422b6 push 0x10b69230 */
  push32((uint32_t)(0x10b69230u));
  /* 10b422bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10b422c1 push edx */
  push32((uint32_t)(EDX));
  /* 10b422c2 call 0x10b45fe0 */
  push32(0x10b422c7u); f_10b45fe0();
  /* 10b422c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b422ca:;
  /* 10b422ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b422ce je 0x10b42312 */
  if (C.zf) goto L_10b42312;
  /* 10b422d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10b422d6 push eax */
  push32((uint32_t)(EAX));
  /* 10b422d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b422da push ecx */
  push32((uint32_t)(ECX));
  /* 10b422db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b422de push edx */
  push32((uint32_t)(EDX));
  /* 10b422df push 0x10b69224 */
  push32((uint32_t)(0x10b69224u));
  /* 10b422e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b422e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10b422ef push eax */
  push32((uint32_t)(EAX));
  /* 10b422f0 call 0x10b45ed0 */
  push32(0x10b422f5u); f_10b45ed0();
  /* 10b422f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b422f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b422fa jge 0x10b42310 */
  if ((C.sf==C.of)) goto L_10b42310;
  /* 10b422fc push 0x10b69260 */
  push32((uint32_t)(0x10b69260u));
  /* 10b42301 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10b42307 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42308 call 0x10b45fd0 */
  push32(0x10b4230du); f_10b45fd0();
  /* 10b4230d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42310:;
  /* 10b42310 jmp 0x10b42328 */
  goto L_10b42328;
L_10b42312:;
  /* 10b42312 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10b42318 push edx */
  push32((uint32_t)(EDX));
  /* 10b42319 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10b4231f push eax */
  push32((uint32_t)(EAX));
  /* 10b42320 call 0x10b45fd0 */
  push32(0x10b42325u); f_10b45fd0();
  /* 10b42325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42328:;
  /* 10b42328 cmp dword ptr [0x10b6ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4232f je 0x10b4236c */
  if (C.zf) goto L_10b4236c;
  /* 10b42331 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10b42337 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42338 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b4233e push edx */
  push32((uint32_t)(EDX));
  /* 10b4233f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42342 push eax */
  push32((uint32_t)(EAX));
  /* 10b42343 call dword ptr [0x10b6ffa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6ffa0))), 0x10b42349u);
  /* 10b42349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4234c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4234e je 0x10b4236c */
  if (C.zf) goto L_10b4236c;
  /* 10b42350 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42354 jne 0x10b42361 */
  if (!C.zf) goto L_10b42361;
  /* 10b42356 push 0x10b6ca34 */
  push32((uint32_t)(0x10b6ca34u));
  /* 10b4235b call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b42361u);
L_10b42361:;
  /* 10b42361 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10b42367 jmp 0x10b4246b */
  goto L_10b4246b;
L_10b4236c:;
  /* 10b4236c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4236f mov edx, dword ptr [ecx*4 + 0x10b6ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca38)));
  /* 10b42376 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b42379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4237b je 0x10b423bb */
  if (C.zf) goto L_10b423bb;
  /* 10b4237d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42380 cmp dword ptr [eax*4 + 0x10b6ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10b6ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42388 je 0x10b423bb */
  if (C.zf) goto L_10b423bb;
  /* 10b4238a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4238c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10b42392 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42393 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b42399 push edx */
  push32((uint32_t)(EDX));
  /* 10b4239a call 0x10b45e50 */
  push32(0x10b4239fu); f_10b45e50();
  /* 10b4239f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b423a2 push eax */
  push32((uint32_t)(EAX));
  /* 10b423a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10b423a9 push eax */
  push32((uint32_t)(EAX));
  /* 10b423aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b423ad mov edx, dword ptr [ecx*4 + 0x10b6ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca44)));
  /* 10b423b4 push edx */
  push32((uint32_t)(EDX));
  /* 10b423b5 call dword ptr [0x10b702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702bc))), 0x10b423bbu);
L_10b423bb:;
  /* 10b423bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b423be mov ecx, dword ptr [eax*4 + 0x10b6ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6ca38)));
  /* 10b423c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b423c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b423ca je 0x10b423d9 */
  if (C.zf) goto L_10b423d9;
  /* 10b423cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b423d2 push edx */
  push32((uint32_t)(EDX));
  /* 10b423d3 call dword ptr [0x10b702c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c4))), 0x10b423d9u);
L_10b423d9:;
  /* 10b423d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b423dc mov ecx, dword ptr [eax*4 + 0x10b6ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6ca38)));
  /* 10b423e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b423e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b423e8 je 0x10b42458 */
  if (C.zf) goto L_10b42458;
  /* 10b423ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b423ee je 0x10b4240d */
  if (C.zf) goto L_10b4240d;
  /* 10b423f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b423f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10b423f8 push edx */
  push32((uint32_t)(EDX));
  /* 10b423f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b423fc push eax */
  push32((uint32_t)(EAX));
  /* 10b423fd call 0x10b45b60 */
  push32(0x10b42402u); f_10b45b60();
  /* 10b42402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42405 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10b4240b jmp 0x10b42417 */
  goto L_10b42417;
L_10b4240d:;
  /* 10b4240d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10b42417:;
  /* 10b42417 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10b4241d push ecx */
  push32((uint32_t)(ECX));
  /* 10b4241e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b42421 push edx */
  push32((uint32_t)(EDX));
  /* 10b42422 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10b42428 push eax */
  push32((uint32_t)(EAX));
  /* 10b42429 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4242c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4242d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42430 push edx */
  push32((uint32_t)(EDX));
  /* 10b42431 call 0x10b42470 */
  push32(0x10b42436u); f_10b42470();
  /* 10b42436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42439 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10b4243f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42443 jne 0x10b42450 */
  if (!C.zf) goto L_10b42450;
  /* 10b42445 push 0x10b6ca34 */
  push32((uint32_t)(0x10b6ca34u));
  /* 10b4244a call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b42450u);
L_10b42450:;
  /* 10b42450 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10b42456 jmp 0x10b4246b */
  goto L_10b4246b;
L_10b42458:;
  /* 10b42458 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4245c jne 0x10b42469 */
  if (!C.zf) goto L_10b42469;
  /* 10b4245e push 0x10b6ca34 */
  push32((uint32_t)(0x10b6ca34u));
  /* 10b42463 call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b42469u);
L_10b42469:;
  /* 10b42469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4246b:;
  /* 10b4246b pop edi */
  EDI = (pop32());
  /* 10b4246c mov esp, ebp */
  ESP = (EBP);
  /* 10b4246e pop ebp */
  EBP = (pop32());
  /* 10b4246f ret  */
  ESPCHK(0x10b420e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002470 @ 0x10b42470 (780 bytes, 197 insns) */
void f_10b42470(void) {
  FTRACE(0x10b42470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42470 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42471 mov ebp, esp */
  EBP = (ESP);
  /* 10b42473 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10b42478 call 0x10b461c0 */
  push32(0x10b4247du); f_10b461c0();
L_10b4247d:;
  /* 10b4247d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42481 jne 0x10b424a8 */
  if (!C.zf) goto L_10b424a8;
  /* 10b42483 push 0x10b6941c */
  push32((uint32_t)(0x10b6941cu));
  /* 10b42488 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4248a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10b4248f push 0x10b69410 */
  push32((uint32_t)(0x10b69410u));
  /* 10b42494 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42496 call 0x10b420e0 */
  push32(0x10b4249bu); f_10b420e0();
  /* 10b4249b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4249e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b424a1 jne 0x10b424a8 */
  if (!C.zf) goto L_10b424a8;
  /* 10b424a3 call 0x10b41fd0 */
  push32(0x10b424a8u); f_10b41fd0();
L_10b424a8:;
  /* 10b424a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b424aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b424ac jne 0x10b4247d */
  if (!C.zf) goto L_10b4247d;
  /* 10b424ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b424b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10b424b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b424ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b424bc call dword ptr [0x10b702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d4))), 0x10b424c2u);
  /* 10b424c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b424c4 jne 0x10b424da */
  if (!C.zf) goto L_10b424da;
  /* 10b424c6 push 0x10b693f8 */
  push32((uint32_t)(0x10b693f8u));
  /* 10b424cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10b424d1 push edx */
  push32((uint32_t)(EDX));
  /* 10b424d2 call 0x10b45fd0 */
  push32(0x10b424d7u); f_10b45fd0();
  /* 10b424d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b424da:;
  /* 10b424da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10b424e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b424e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b424e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b424e7 call 0x10b45e50 */
  push32(0x10b424ecu); f_10b45e50();
  /* 10b424ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b424ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b424f2 jbe 0x10b4251d */
  if ((C.cf||C.zf)) goto L_10b4251d;
  /* 10b424f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b424f7 push edx */
  push32((uint32_t)(EDX));
  /* 10b424f8 call 0x10b45e50 */
  push32(0x10b424fdu); f_10b45e50();
  /* 10b424fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42500 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42503 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10b42507 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4250a push 3 */
  push32((uint32_t)(0x3u));
  /* 10b4250c push 0x10b693f4 */
  push32((uint32_t)(0x10b693f4u));
  /* 10b42511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42514 push eax */
  push32((uint32_t)(EAX));
  /* 10b42515 call 0x10b46840 */
  push32(0x10b4251au); f_10b46840();
  /* 10b4251a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4251d:;
  /* 10b4251d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b42520 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10b42526 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4252d je 0x10b42578 */
  if (C.zf) goto L_10b42578;
  /* 10b4252f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b42535 push edx */
  push32((uint32_t)(EDX));
  /* 10b42536 call 0x10b45e50 */
  push32(0x10b4253bu); f_10b45e50();
  /* 10b4253b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4253e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42541 jbe 0x10b42578 */
  if ((C.cf||C.zf)) goto L_10b42578;
  /* 10b42543 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b42549 push eax */
  push32((uint32_t)(EAX));
  /* 10b4254a call 0x10b45e50 */
  push32(0x10b4254fu); f_10b45e50();
  /* 10b4254f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42552 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b42558 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10b4255c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10b42562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b42564 push 0x10b693f4 */
  push32((uint32_t)(0x10b693f4u));
  /* 10b42569 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b4256f push eax */
  push32((uint32_t)(EAX));
  /* 10b42570 call 0x10b46840 */
  push32(0x10b42575u); f_10b46840();
  /* 10b42575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42578:;
  /* 10b42578 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4257c jne 0x10b4258a */
  if (!C.zf) goto L_10b4258a;
  /* 10b4257e mov dword ptr [ebp - 0x1114], 0x10b69380 */
  w32((uint32_t)(EBP + -0x1114), (0x10b69380u));
  /* 10b42588 jmp 0x10b42594 */
  goto L_10b42594;
L_10b4258a:;
  /* 10b4258a mov dword ptr [ebp - 0x1114], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1114), (0x10b69120u));
L_10b42594:;
  /* 10b42594 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b42597 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4259a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4259c je 0x10b425a9 */
  if (C.zf) goto L_10b425a9;
  /* 10b4259e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b425a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10b425a7 jmp 0x10b425b3 */
  goto L_10b425b3;
L_10b425a9:;
  /* 10b425a9 mov dword ptr [ebp - 0x1118], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1118), (0x10b69120u));
L_10b425b3:;
  /* 10b425b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b425b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b425b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b425bb je 0x10b425cf */
  if (C.zf) goto L_10b425cf;
  /* 10b425bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b425c1 jne 0x10b425cf */
  if (!C.zf) goto L_10b425cf;
  /* 10b425c3 mov dword ptr [ebp - 0x111c], 0x10b69370 */
  w32((uint32_t)(EBP + -0x111c), (0x10b69370u));
  /* 10b425cd jmp 0x10b425d9 */
  goto L_10b425d9;
L_10b425cf:;
  /* 10b425cf mov dword ptr [ebp - 0x111c], 0x10b69120 */
  w32((uint32_t)(EBP + -0x111c), (0x10b69120u));
L_10b425d9:;
  /* 10b425d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b425dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b425df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b425e1 je 0x10b425ef */
  if (C.zf) goto L_10b425ef;
  /* 10b425e3 mov dword ptr [ebp - 0x1120], 0x10b6936c */
  w32((uint32_t)(EBP + -0x1120), (0x10b6936cu));
  /* 10b425ed jmp 0x10b425f9 */
  goto L_10b425f9;
L_10b425ef:;
  /* 10b425ef mov dword ptr [ebp - 0x1120], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1120), (0x10b69120u));
L_10b425f9:;
  /* 10b425f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b425fd je 0x10b4260a */
  if (C.zf) goto L_10b4260a;
  /* 10b425ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b42602 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10b42608 jmp 0x10b42614 */
  goto L_10b42614;
L_10b4260a:;
  /* 10b4260a mov dword ptr [ebp - 0x1124], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1124), (0x10b69120u));
L_10b42614:;
  /* 10b42614 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42618 je 0x10b42626 */
  if (C.zf) goto L_10b42626;
  /* 10b4261a mov dword ptr [ebp - 0x1128], 0x10b69364 */
  w32((uint32_t)(EBP + -0x1128), (0x10b69364u));
  /* 10b42624 jmp 0x10b42630 */
  goto L_10b42630;
L_10b42626:;
  /* 10b42626 mov dword ptr [ebp - 0x1128], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1128), (0x10b69120u));
L_10b42630:;
  /* 10b42630 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42634 je 0x10b42641 */
  if (C.zf) goto L_10b42641;
  /* 10b42636 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b42639 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10b4263f jmp 0x10b4264b */
  goto L_10b4264b;
L_10b42641:;
  /* 10b42641 mov dword ptr [ebp - 0x112c], 0x10b69120 */
  w32((uint32_t)(EBP + -0x112c), (0x10b69120u));
L_10b4264b:;
  /* 10b4264b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4264f je 0x10b4265d */
  if (C.zf) goto L_10b4265d;
  /* 10b42651 mov dword ptr [ebp - 0x1130], 0x10b6935c */
  w32((uint32_t)(EBP + -0x1130), (0x10b6935cu));
  /* 10b4265b jmp 0x10b42667 */
  goto L_10b42667;
L_10b4265d:;
  /* 10b4265d mov dword ptr [ebp - 0x1130], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1130), (0x10b69120u));
L_10b42667:;
  /* 10b42667 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4266e je 0x10b4267e */
  if (C.zf) goto L_10b4267e;
  /* 10b42670 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b42676 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10b4267c jmp 0x10b42688 */
  goto L_10b42688;
L_10b4267e:;
  /* 10b4267e mov dword ptr [ebp - 0x1134], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1134), (0x10b69120u));
L_10b42688:;
  /* 10b42688 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4268f je 0x10b4269d */
  if (C.zf) goto L_10b4269d;
  /* 10b42691 mov dword ptr [ebp - 0x1138], 0x10b69350 */
  w32((uint32_t)(EBP + -0x1138), (0x10b69350u));
  /* 10b4269b jmp 0x10b426a7 */
  goto L_10b426a7;
L_10b4269d:;
  /* 10b4269d mov dword ptr [ebp - 0x1138], 0x10b69120 */
  w32((uint32_t)(EBP + -0x1138), (0x10b69120u));
L_10b426a7:;
  /* 10b426a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10b426ad push edx */
  push32((uint32_t)(EDX));
  /* 10b426ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10b426b4 push eax */
  push32((uint32_t)(EAX));
  /* 10b426b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10b426bb push ecx */
  push32((uint32_t)(ECX));
  /* 10b426bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10b426c2 push edx */
  push32((uint32_t)(EDX));
  /* 10b426c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10b426c9 push eax */
  push32((uint32_t)(EAX));
  /* 10b426ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10b426d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b426d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10b426d7 push edx */
  push32((uint32_t)(EDX));
  /* 10b426d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10b426de push eax */
  push32((uint32_t)(EAX));
  /* 10b426df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10b426e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b426e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10b426ec push edx */
  push32((uint32_t)(EDX));
  /* 10b426ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b426f0 push eax */
  push32((uint32_t)(EAX));
  /* 10b426f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b426f4 mov edx, dword ptr [ecx*4 + 0x10b6ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca50)));
  /* 10b426fb push edx */
  push32((uint32_t)(EDX));
  /* 10b426fc push 0x10b692fc */
  push32((uint32_t)(0x10b692fcu));
  /* 10b42701 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b42706 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10b4270c push eax */
  push32((uint32_t)(EAX));
  /* 10b4270d call 0x10b45ed0 */
  push32(0x10b42712u); f_10b45ed0();
  /* 10b42712 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b42717 jge 0x10b4272d */
  if ((C.sf==C.of)) goto L_10b4272d;
  /* 10b42719 push 0x10b69260 */
  push32((uint32_t)(0x10b69260u));
  /* 10b4271e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10b42724 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42725 call 0x10b45fd0 */
  push32(0x10b4272au); f_10b45fd0();
  /* 10b4272a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4272d:;
  /* 10b4272d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10b42732 push 0x10b692d8 */
  push32((uint32_t)(0x10b692d8u));
  /* 10b42737 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10b4273d push edx */
  push32((uint32_t)(EDX));
  /* 10b4273e call 0x10b46780 */
  push32(0x10b42743u); f_10b46780();
  /* 10b42743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42746 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10b4274c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42753 jne 0x10b42766 */
  if (!C.zf) goto L_10b42766;
  /* 10b42755 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b42757 call 0x10b464c0 */
  push32(0x10b4275cu); f_10b464c0();
  /* 10b4275c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4275f push 3 */
  push32((uint32_t)(0x3u));
  /* 10b42761 call 0x10b427e0 */
  push32(0x10b42766u); f_10b427e0();
L_10b42766:;
  /* 10b42766 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4276d jne 0x10b42776 */
  if (!C.zf) goto L_10b42776;
  /* 10b4276f mov eax, 1 */
  EAX = (0x1u);
  /* 10b42774 jmp 0x10b42778 */
  goto L_10b42778;
L_10b42776:;
  /* 10b42776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b42778:;
  /* 10b42778 mov esp, ebp */
  ESP = (EBP);
  /* 10b4277a pop ebp */
  EBP = (pop32());
  /* 10b4277b ret  */
  ESPCHK(0x10b42470u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10b42780 (56 bytes, 15 insns) */
void f_10b42780(void) {
  FTRACE(0x10b42780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42780 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42781 mov ebp, esp */
  EBP = (ESP);
  /* 10b42783 cmp dword ptr [0x10b6ff9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ff9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4278a je 0x10b42792 */
  if (C.zf) goto L_10b42792;
  /* 10b4278c call dword ptr [0x10b6ff9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6ff9c))), 0x10b42792u);
L_10b42792:;
  /* 10b42792 push 0x10b6c418 */
  push32((uint32_t)(0x10b6c418u));
  /* 10b42797 push 0x10b6c208 */
  push32((uint32_t)(0x10b6c208u));
  /* 10b4279c call 0x10b42950 */
  push32(0x10b427a1u); f_10b42950();
  /* 10b427a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b427a4 push 0x10b6c104 */
  push32((uint32_t)(0x10b6c104u));
  /* 10b427a9 push 0x10b6c000 */
  push32((uint32_t)(0x10b6c000u));
  /* 10b427ae call 0x10b42950 */
  push32(0x10b427b3u); f_10b42950();
  /* 10b427b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b427b6 pop ebp */
  EBP = (pop32());
  /* 10b427b7 ret  */
  ESPCHK(0x10b42780u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x10b427c0 (21 bytes, 10 insns) */
void f_10b427c0(void) {
  FTRACE(0x10b427c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b427c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b427c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b427c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b427c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b427c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b427ca push eax */
  push32((uint32_t)(EAX));
  /* 10b427cb call 0x10b42840 */
  push32(0x10b427d0u); f_10b42840();
  /* 10b427d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b427d3 pop ebp */
  EBP = (pop32());
  /* 10b427d4 ret  */
  ESPCHK(0x10b427c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10b427e0 (21 bytes, 10 insns) */
void f_10b427e0(void) {
  FTRACE(0x10b427e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b427e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b427e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b427e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b427e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b427e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b427ea push eax */
  push32((uint32_t)(EAX));
  /* 10b427eb call 0x10b42840 */
  push32(0x10b427f0u); f_10b42840();
  /* 10b427f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b427f3 pop ebp */
  EBP = (pop32());
  /* 10b427f4 ret  */
  ESPCHK(0x10b427e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002800 @ 0x10b42800 (19 bytes, 9 insns) */
void f_10b42800(void) {
  FTRACE(0x10b42800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42800 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42801 mov ebp, esp */
  EBP = (ESP);
  /* 10b42803 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b42805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b42807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b42809 call 0x10b42840 */
  push32(0x10b4280eu); f_10b42840();
  /* 10b4280e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42811 pop ebp */
  EBP = (pop32());
  /* 10b42812 ret  */
  ESPCHK(0x10b42800u, _esp0);
  ESP += 4; return;
}

/* FUN_10002820 @ 0x10b42820 (19 bytes, 9 insns) */
void f_10b42820(void) {
  FTRACE(0x10b42820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42820 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42821 mov ebp, esp */
  EBP = (ESP);
  /* 10b42823 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b42825 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b42827 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b42829 call 0x10b42840 */
  push32(0x10b4282eu); f_10b42840();
  /* 10b4282e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42831 pop ebp */
  EBP = (pop32());
  /* 10b42832 ret  */
  ESPCHK(0x10b42820u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x10b42840 (227 bytes, 61 insns) */
void f_10b42840(void) {
  FTRACE(0x10b42840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42840 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42841 mov ebp, esp */
  EBP = (ESP);
  /* 10b42843 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42844 call 0x10b42930 */
  push32(0x10b42849u); f_10b42930();
  /* 10b42849 cmp dword ptr [0x10b6e494], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e494))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42850 jne 0x10b42863 */
  if (!C.zf) goto L_10b42863;
  /* 10b42852 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42855 push eax */
  push32((uint32_t)(EAX));
  /* 10b42856 call dword ptr [0x10b702e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e0))), 0x10b4285cu);
  /* 10b4285c push eax */
  push32((uint32_t)(EAX));
  /* 10b4285d call dword ptr [0x10b702dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702dc))), 0x10b42863u);
L_10b42863:;
  /* 10b42863 mov dword ptr [0x10b6e490], 1 */
  w32((uint32_t)(0x10b6e490), (0x1u));
  /* 10b4286d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10b42870 mov byte ptr [0x10b6e48c], cl */
  w8((uint32_t)(0x10b6e48c), (CL));
  /* 10b42876 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4287a jne 0x10b428c3 */
  if (!C.zf) goto L_10b428c3;
  /* 10b4287c cmp dword ptr [0x10b6ff98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ff98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42883 je 0x10b428b1 */
  if (C.zf) goto L_10b428b1;
  /* 10b42885 mov edx, dword ptr [0x10b6ff94] */
  EDX = (r32((uint32_t)(0x10b6ff94)));
  /* 10b4288b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4288e:;
  /* 10b4288e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42891 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b42894 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b42897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4289a cmp ecx, dword ptr [0x10b6ff98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6ff98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b428a0 jb 0x10b428b1 */
  if (C.cf) goto L_10b428b1;
  /* 10b428a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b428a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b428a8 je 0x10b428af */
  if (C.zf) goto L_10b428af;
  /* 10b428aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b428ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10b428afu);
L_10b428af:;
  /* 10b428af jmp 0x10b4288e */
  goto L_10b4288e;
L_10b428b1:;
  /* 10b428b1 push 0x10b6c724 */
  push32((uint32_t)(0x10b6c724u));
  /* 10b428b6 push 0x10b6c51c */
  push32((uint32_t)(0x10b6c51cu));
  /* 10b428bb call 0x10b42950 */
  push32(0x10b428c0u); f_10b42950();
  /* 10b428c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b428c3:;
  /* 10b428c3 push 0x10b6c92c */
  push32((uint32_t)(0x10b6c92cu));
  /* 10b428c8 push 0x10b6c828 */
  push32((uint32_t)(0x10b6c828u));
  /* 10b428cd call 0x10b42950 */
  push32(0x10b428d2u); f_10b42950();
  /* 10b428d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b428d5 cmp dword ptr [0x10b6e498], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e498))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b428dc jne 0x10b428fe */
  if (!C.zf) goto L_10b428fe;
  /* 10b428de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b428e0 call 0x10b44530 */
  push32(0x10b428e5u); f_10b44530();
  /* 10b428e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b428e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b428eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b428ed je 0x10b428fe */
  if (C.zf) goto L_10b428fe;
  /* 10b428ef mov dword ptr [0x10b6e498], 1 */
  w32((uint32_t)(0x10b6e498), (0x1u));
  /* 10b428f9 call 0x10b44e40 */
  push32(0x10b428feu); f_10b44e40();
L_10b428fe:;
  /* 10b428fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42902 je 0x10b4290b */
  if (C.zf) goto L_10b4290b;
  /* 10b42904 call 0x10b42940 */
  push32(0x10b42909u); f_10b42940();
  /* 10b42909 jmp 0x10b4291f */
  goto L_10b4291f;
L_10b4290b:;
  /* 10b4290b mov dword ptr [0x10b6e494], 1 */
  w32((uint32_t)(0x10b6e494), (0x1u));
  /* 10b42915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42918 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42919 call dword ptr [0x10b702d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d8))), 0x10b4291fu);
L_10b4291f:;
  /* 10b4291f mov esp, ebp */
  ESP = (EBP);
  /* 10b42921 pop ebp */
  EBP = (pop32());
  /* 10b42922 ret  */
  ESPCHK(0x10b42840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002930 @ 0x10b42930 (15 bytes, 7 insns) */
void f_10b42930(void) {
  FTRACE(0x10b42930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42930 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42931 mov ebp, esp */
  EBP = (ESP);
  /* 10b42933 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b42935 call 0x10b46a20 */
  push32(0x10b4293au); f_10b46a20();
  /* 10b4293a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4293d pop ebp */
  EBP = (pop32());
  /* 10b4293e ret  */
  ESPCHK(0x10b42930u, _esp0);
  ESP += 4; return;
}

/* FUN_10002940 @ 0x10b42940 (15 bytes, 7 insns) */
void f_10b42940(void) {
  FTRACE(0x10b42940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42940 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42941 mov ebp, esp */
  EBP = (ESP);
  /* 10b42943 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b42945 call 0x10b46ac0 */
  push32(0x10b4294au); f_10b46ac0();
  /* 10b4294a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4294d pop ebp */
  EBP = (pop32());
  /* 10b4294e ret  */
  ESPCHK(0x10b42940u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10b42950 (37 bytes, 16 insns) */
void f_10b42950(void) {
  FTRACE(0x10b42950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42950 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42951 mov ebp, esp */
  EBP = (ESP);
L_10b42953:;
  /* 10b42953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42956 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42959 jae 0x10b42973 */
  if (!C.cf) goto L_10b42973;
  /* 10b4295b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4295e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42961 je 0x10b42968 */
  if (C.zf) goto L_10b42968;
  /* 10b42963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42966 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10b42968u);
L_10b42968:;
  /* 10b42968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4296b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4296e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b42971 jmp 0x10b42953 */
  goto L_10b42953;
L_10b42973:;
  /* 10b42973 pop ebp */
  EBP = (pop32());
  /* 10b42974 ret  */
  ESPCHK(0x10b42950u, _esp0);
  ESP += 4; return;
}

/* FUN_10002980 @ 0x10b42980 (130 bytes, 42 insns) */
void f_10b42980(void) {
  FTRACE(0x10b42980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42980 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42981 mov ebp, esp */
  EBP = (ESP);
  /* 10b42983 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42984 call 0x10b46940 */
  push32(0x10b42989u); f_10b46940();
  /* 10b42989 call dword ptr [0x10b702ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702ec))), 0x10b4298fu);
  /* 10b4298f mov dword ptr [0x10b6ca5c], eax */
  w32((uint32_t)(0x10b6ca5c), (EAX));
  /* 10b42994 cmp dword ptr [0x10b6ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4299b jne 0x10b429a1 */
  if (!C.zf) goto L_10b429a1;
  /* 10b4299d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4299f jmp 0x10b429fe */
  goto L_10b429fe;
L_10b429a1:;
  /* 10b429a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10b429a3 push 0x10b69434 */
  push32((uint32_t)(0x10b69434u));
  /* 10b429a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b429aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10b429ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10b429ae call 0x10b43430 */
  push32(0x10b429b3u); f_10b43430();
  /* 10b429b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b429b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b429b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b429bd je 0x10b429d4 */
  if (C.zf) goto L_10b429d4;
  /* 10b429bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b429c2 push eax */
  push32((uint32_t)(EAX));
  /* 10b429c3 mov ecx, dword ptr [0x10b6ca5c] */
  ECX = (r32((uint32_t)(0x10b6ca5c)));
  /* 10b429c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b429ca call dword ptr [0x10b702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e8))), 0x10b429d0u);
  /* 10b429d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b429d2 jne 0x10b429d8 */
  if (!C.zf) goto L_10b429d8;
L_10b429d4:;
  /* 10b429d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b429d6 jmp 0x10b429fe */
  goto L_10b429fe;
L_10b429d8:;
  /* 10b429d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b429db push edx */
  push32((uint32_t)(EDX));
  /* 10b429dc call 0x10b42a40 */
  push32(0x10b429e1u); f_10b42a40();
  /* 10b429e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b429e4 call dword ptr [0x10b702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e4))), 0x10b429eau);
  /* 10b429ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b429ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b429ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b429f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10b429f9 mov eax, 1 */
  EAX = (0x1u);
L_10b429fe:;
  /* 10b429fe mov esp, ebp */
  ESP = (EBP);
  /* 10b42a00 pop ebp */
  EBP = (pop32());
  /* 10b42a01 ret  */
  ESPCHK(0x10b42980u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x10b42a10 (41 bytes, 11 insns) */
void f_10b42a10(void) {
  FTRACE(0x10b42a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42a11 mov ebp, esp */
  EBP = (ESP);
  /* 10b42a13 call 0x10b46980 */
  push32(0x10b42a18u); f_10b46980();
  /* 10b42a18 cmp dword ptr [0x10b6ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42a1f je 0x10b42a37 */
  if (C.zf) goto L_10b42a37;
  /* 10b42a21 mov eax, dword ptr [0x10b6ca5c] */
  EAX = (r32((uint32_t)(0x10b6ca5c)));
  /* 10b42a26 push eax */
  push32((uint32_t)(EAX));
  /* 10b42a27 call dword ptr [0x10b702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702f0))), 0x10b42a2du);
  /* 10b42a2d mov dword ptr [0x10b6ca5c], 0xffffffff */
  w32((uint32_t)(0x10b6ca5c), (0xffffffffu));
L_10b42a37:;
  /* 10b42a37 pop ebp */
  EBP = (pop32());
  /* 10b42a38 ret  */
  ESPCHK(0x10b42a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a40 @ 0x10b42a40 (25 bytes, 8 insns) */
void f_10b42a40(void) {
  FTRACE(0x10b42a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42a41 mov ebp, esp */
  EBP = (ESP);
  /* 10b42a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42a46 mov dword ptr [eax + 0x50], 0x10b6cc00 */
  w32((uint32_t)(EAX + 0x50), (0x10b6cc00u));
  /* 10b42a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42a50 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10b42a57 pop ebp */
  EBP = (pop32());
  /* 10b42a58 ret  */
  ESPCHK(0x10b42a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x10b42a60 (152 bytes, 48 insns) */
void f_10b42a60(void) {
  FTRACE(0x10b42a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42a61 mov ebp, esp */
  EBP = (ESP);
  /* 10b42a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b42a66 call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b42a6cu);
  /* 10b42a6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b42a6f mov eax, dword ptr [0x10b6ca5c] */
  EAX = (r32((uint32_t)(0x10b6ca5c)));
  /* 10b42a74 push eax */
  push32((uint32_t)(EAX));
  /* 10b42a75 call dword ptr [0x10b702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702f8))), 0x10b42a7bu);
  /* 10b42a7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b42a7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42a82 jne 0x10b42ae7 */
  if (!C.zf) goto L_10b42ae7;
  /* 10b42a84 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10b42a89 push 0x10b69434 */
  push32((uint32_t)(0x10b69434u));
  /* 10b42a8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42a90 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10b42a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b42a94 call 0x10b43430 */
  push32(0x10b42a99u); f_10b43430();
  /* 10b42a99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42a9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b42a9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42aa3 je 0x10b42add */
  if (C.zf) goto L_10b42add;
  /* 10b42aa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42aa9 mov edx, dword ptr [0x10b6ca5c] */
  EDX = (r32((uint32_t)(0x10b6ca5c)));
  /* 10b42aaf push edx */
  push32((uint32_t)(EDX));
  /* 10b42ab0 call dword ptr [0x10b702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e8))), 0x10b42ab6u);
  /* 10b42ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b42ab8 je 0x10b42add */
  if (C.zf) goto L_10b42add;
  /* 10b42aba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42abd push eax */
  push32((uint32_t)(EAX));
  /* 10b42abe call 0x10b42a40 */
  push32(0x10b42ac3u); f_10b42a40();
  /* 10b42ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42ac6 call dword ptr [0x10b702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e4))), 0x10b42accu);
  /* 10b42acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42acf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b42ad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42ad4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10b42adb jmp 0x10b42ae7 */
  goto L_10b42ae7;
L_10b42add:;
  /* 10b42add push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b42adf call 0x10b41f90 */
  push32(0x10b42ae4u); f_10b41f90();
  /* 10b42ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42ae7:;
  /* 10b42ae7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42aea push eax */
  push32((uint32_t)(EAX));
  /* 10b42aeb call dword ptr [0x10b702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702f4))), 0x10b42af1u);
  /* 10b42af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42af4 mov esp, ebp */
  ESP = (EBP);
  /* 10b42af6 pop ebp */
  EBP = (pop32());
  /* 10b42af7 ret  */
  ESPCHK(0x10b42a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x10b42b00 (263 bytes, 86 insns) */
void f_10b42b00(void) {
  FTRACE(0x10b42b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42b01 mov ebp, esp */
  EBP = (ESP);
  /* 10b42b03 cmp dword ptr [0x10b6ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b0a je 0x10b42c05 */
  if (C.zf) goto L_10b42c05;
  /* 10b42b10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b14 jne 0x10b42b25 */
  if (!C.zf) goto L_10b42b25;
  /* 10b42b16 mov eax, dword ptr [0x10b6ca5c] */
  EAX = (r32((uint32_t)(0x10b6ca5c)));
  /* 10b42b1b push eax */
  push32((uint32_t)(EAX));
  /* 10b42b1c call dword ptr [0x10b702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702f8))), 0x10b42b22u);
  /* 10b42b22 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b42b25:;
  /* 10b42b25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b29 je 0x10b42bf6 */
  if (C.zf) goto L_10b42bf6;
  /* 10b42b2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b32 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b36 je 0x10b42b49 */
  if (C.zf) goto L_10b42b49;
  /* 10b42b38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42b3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b3d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10b42b40 push eax */
  push32((uint32_t)(EAX));
  /* 10b42b41 call 0x10b43ab0 */
  push32(0x10b42b46u); f_10b43ab0();
  /* 10b42b46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42b49:;
  /* 10b42b49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b4c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b50 je 0x10b42b63 */
  if (C.zf) goto L_10b42b63;
  /* 10b42b52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42b54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b57 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10b42b5a push eax */
  push32((uint32_t)(EAX));
  /* 10b42b5b call 0x10b43ab0 */
  push32(0x10b42b60u); f_10b43ab0();
  /* 10b42b60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42b63:;
  /* 10b42b63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b66 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b6a je 0x10b42b7d */
  if (C.zf) goto L_10b42b7d;
  /* 10b42b6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b71 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10b42b74 push eax */
  push32((uint32_t)(EAX));
  /* 10b42b75 call 0x10b43ab0 */
  push32(0x10b42b7au); f_10b43ab0();
  /* 10b42b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42b7d:;
  /* 10b42b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b80 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b84 je 0x10b42b97 */
  if (C.zf) goto L_10b42b97;
  /* 10b42b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b8b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10b42b8e push eax */
  push32((uint32_t)(EAX));
  /* 10b42b8f call 0x10b43ab0 */
  push32(0x10b42b94u); f_10b43ab0();
  /* 10b42b94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42b97:;
  /* 10b42b97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42b9a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42b9e je 0x10b42bb1 */
  if (C.zf) goto L_10b42bb1;
  /* 10b42ba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42ba5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10b42ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10b42ba9 call 0x10b43ab0 */
  push32(0x10b42baeu); f_10b43ab0();
  /* 10b42bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42bb1:;
  /* 10b42bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42bb4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42bb8 je 0x10b42bcb */
  if (C.zf) goto L_10b42bcb;
  /* 10b42bba push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42bbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42bbf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10b42bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10b42bc3 call 0x10b43ab0 */
  push32(0x10b42bc8u); f_10b43ab0();
  /* 10b42bc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42bcb:;
  /* 10b42bcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42bce cmp dword ptr [ecx + 0x50], 0x10b6cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10b6cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42bd5 je 0x10b42be8 */
  if (C.zf) goto L_10b42be8;
  /* 10b42bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42bd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42bdc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10b42bdf push eax */
  push32((uint32_t)(EAX));
  /* 10b42be0 call 0x10b43ab0 */
  push32(0x10b42be5u); f_10b43ab0();
  /* 10b42be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42be8:;
  /* 10b42be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42bea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b42bed push ecx */
  push32((uint32_t)(ECX));
  /* 10b42bee call 0x10b43ab0 */
  push32(0x10b42bf3u); f_10b43ab0();
  /* 10b42bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42bf6:;
  /* 10b42bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b42bf8 mov edx, dword ptr [0x10b6ca5c] */
  EDX = (r32((uint32_t)(0x10b6ca5c)));
  /* 10b42bfe push edx */
  push32((uint32_t)(EDX));
  /* 10b42bff call dword ptr [0x10b702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e8))), 0x10b42c05u);
L_10b42c05:;
  /* 10b42c05 pop ebp */
  EBP = (pop32());
  /* 10b42c06 ret  */
  ESPCHK(0x10b42b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c10 @ 0x10b42c10 (11 bytes, 5 insns) */
void f_10b42c10(void) {
  FTRACE(0x10b42c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42c11 mov ebp, esp */
  EBP = (ESP);
  /* 10b42c13 call dword ptr [0x10b702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702e4))), 0x10b42c19u);
  /* 10b42c19 pop ebp */
  EBP = (pop32());
  /* 10b42c1a ret  */
  ESPCHK(0x10b42c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x10b42c20 (11 bytes, 5 insns) */
void f_10b42c20(void) {
  FTRACE(0x10b42c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42c21 mov ebp, esp */
  EBP = (ESP);
  /* 10b42c23 call dword ptr [0x10b70300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70300))), 0x10b42c29u);
  /* 10b42c29 pop ebp */
  EBP = (pop32());
  /* 10b42c2a ret  */
  ESPCHK(0x10b42c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c30 @ 0x10b42c30 (804 bytes, 236 insns) */
void f_10b42c30(void) {
  FTRACE(0x10b42c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42c31 mov ebp, esp */
  EBP = (ESP);
  /* 10b42c33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b42c36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10b42c3b push 0x10b69440 */
  push32((uint32_t)(0x10b69440u));
  /* 10b42c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42c42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b42c47 call 0x10b43020 */
  push32(0x10b42c4cu); f_10b43020();
  /* 10b42c4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42c4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10b42c52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42c56 jne 0x10b42c62 */
  if (!C.zf) goto L_10b42c62;
  /* 10b42c58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b42c5a call 0x10b41f90 */
  push32(0x10b42c5fu); f_10b41f90();
  /* 10b42c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b42c62:;
  /* 10b42c62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42c65 mov dword ptr [0x10b6fe40], eax */
  w32((uint32_t)(0x10b6fe40), (EAX));
  /* 10b42c6a mov dword ptr [0x10b6ff7c], 0x20 */
  w32((uint32_t)(0x10b6ff7c), (0x20u));
  /* 10b42c74 jmp 0x10b42c7f */
  goto L_10b42c7f;
L_10b42c76:;
  /* 10b42c76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42c79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42c7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10b42c7f:;
  /* 10b42c7f mov edx, dword ptr [0x10b6fe40] */
  EDX = (r32((uint32_t)(0x10b6fe40)));
  /* 10b42c85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42c8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42c8e jae 0x10b42cb3 */
  if (!C.cf) goto L_10b42cb3;
  /* 10b42c90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42c93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b42c97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42c9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b42ca0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42ca3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10b42ca7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42caa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b42cb1 jmp 0x10b42c76 */
  goto L_10b42c76;
L_10b42cb3:;
  /* 10b42cb3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10b42cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b42cb7 call dword ptr [0x10b70258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70258))), 0x10b42cbdu);
  /* 10b42cbd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10b42cc0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b42cc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b42cc8 je 0x10b42e55 */
  if (C.zf) goto L_10b42e55;
  /* 10b42cce cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42cd2 je 0x10b42e55 */
  if (C.zf) goto L_10b42e55;
  /* 10b42cd8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b42cdb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b42cdd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10b42ce0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b42ce3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42ce6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b42ce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42cec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42cef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10b42cf2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42cf9 jge 0x10b42d03 */
  if ((C.sf==C.of)) goto L_10b42d03;
  /* 10b42cfb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10b42cfe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10b42d01 jmp 0x10b42d0a */
  goto L_10b42d0a;
L_10b42d03:;
  /* 10b42d03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10b42d0a:;
  /* 10b42d0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10b42d0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10b42d10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10b42d17 jmp 0x10b42d22 */
  goto L_10b42d22;
L_10b42d19:;
  /* 10b42d19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10b42d1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42d1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10b42d22:;
  /* 10b42d22 mov ecx, dword ptr [0x10b6ff7c] */
  ECX = (r32((uint32_t)(0x10b6ff7c)));
  /* 10b42d28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42d2b jge 0x10b42dc2 */
  if ((C.sf==C.of)) goto L_10b42dc2;
  /* 10b42d31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10b42d36 push 0x10b69440 */
  push32((uint32_t)(0x10b69440u));
  /* 10b42d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42d3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b42d42 call 0x10b43020 */
  push32(0x10b42d47u); f_10b43020();
  /* 10b42d47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42d4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10b42d4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42d51 jne 0x10b42d5e */
  if (!C.zf) goto L_10b42d5e;
  /* 10b42d53 mov edx, dword ptr [0x10b6ff7c] */
  EDX = (r32((uint32_t)(0x10b6ff7c)));
  /* 10b42d59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10b42d5c jmp 0x10b42dc2 */
  goto L_10b42dc2;
L_10b42d5e:;
  /* 10b42d5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10b42d61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42d64 mov dword ptr [eax*4 + 0x10b6fe40], ecx */
  w32((uint32_t)(EAX*4 + 0x10b6fe40), (ECX));
  /* 10b42d6b mov edx, dword ptr [0x10b6ff7c] */
  EDX = (r32((uint32_t)(0x10b6ff7c)));
  /* 10b42d71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42d74 mov dword ptr [0x10b6ff7c], edx */
  w32((uint32_t)(0x10b6ff7c), (EDX));
  /* 10b42d7a jmp 0x10b42d85 */
  goto L_10b42d85;
L_10b42d7c:;
  /* 10b42d7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42d7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42d82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10b42d85:;
  /* 10b42d85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10b42d88 mov edx, dword ptr [ecx*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b42d8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42d95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42d98 jae 0x10b42dbd */
  if (!C.cf) goto L_10b42dbd;
  /* 10b42d9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42d9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b42da1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42da4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b42daa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42dad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10b42db1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42db4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b42dbb jmp 0x10b42d7c */
  goto L_10b42d7c;
L_10b42dbd:;
  /* 10b42dbd jmp 0x10b42d19 */
  goto L_10b42d19;
L_10b42dc2:;
  /* 10b42dc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10b42dc9 jmp 0x10b42de6 */
  goto L_10b42de6;
L_10b42dcb:;
  /* 10b42dcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42dce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42dd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10b42dd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42dd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42dda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b42ddd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b42de0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42de3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10b42de6:;
  /* 10b42de6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42de9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42dec jge 0x10b42e55 */
  if ((C.sf==C.of)) goto L_10b42e55;
  /* 10b42dee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b42df1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42df4 je 0x10b42e50 */
  if (C.zf) goto L_10b42e50;
  /* 10b42df6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42df9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b42dfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b42dff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b42e01 je 0x10b42e50 */
  if (C.zf) goto L_10b42e50;
  /* 10b42e03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42e06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b42e09 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b42e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b42e0e jne 0x10b42e20 */
  if (!C.zf) goto L_10b42e20;
  /* 10b42e10 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b42e13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b42e15 push edx */
  push32((uint32_t)(EDX));
  /* 10b42e16 call dword ptr [0x10b70308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70308))), 0x10b42e1cu);
  /* 10b42e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b42e1e je 0x10b42e50 */
  if (C.zf) goto L_10b42e50;
L_10b42e20:;
  /* 10b42e20 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42e23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b42e26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42e29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b42e2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b42e2f mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b42e36 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42e38 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10b42e3b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42e3e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b42e41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b42e43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b42e45 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42e48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42e4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b42e4d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10b42e50:;
  /* 10b42e50 jmp 0x10b42dcb */
  goto L_10b42dcb;
L_10b42e55:;
  /* 10b42e55 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10b42e5c jmp 0x10b42e67 */
  goto L_10b42e67;
L_10b42e5e:;
  /* 10b42e5e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42e61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42e64 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10b42e67:;
  /* 10b42e67 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42e6b jge 0x10b42f44 */
  if ((C.sf==C.of)) goto L_10b42f44;
  /* 10b42e71 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42e74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b42e77 mov edx, dword ptr [0x10b6fe40] */
  EDX = (r32((uint32_t)(0x10b6fe40)));
  /* 10b42e7d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42e7f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10b42e82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42e85 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42e88 jne 0x10b42f30 */
  if (!C.zf) goto L_10b42f30;
  /* 10b42e8e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42e91 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10b42e95 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42e99 jne 0x10b42ea4 */
  if (!C.zf) goto L_10b42ea4;
  /* 10b42e9b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10b42ea2 jmp 0x10b42eb4 */
  goto L_10b42eb4;
L_10b42ea4:;
  /* 10b42ea4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b42ea7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b42eaa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b42eac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b42eae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42eb1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10b42eb4:;
  /* 10b42eb4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10b42eb7 push eax */
  push32((uint32_t)(EAX));
  /* 10b42eb8 call dword ptr [0x10b702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702b8))), 0x10b42ebeu);
  /* 10b42ebe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10b42ec1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42ec5 je 0x10b42f1f */
  if (C.zf) goto L_10b42f1f;
  /* 10b42ec7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b42eca push ecx */
  push32((uint32_t)(ECX));
  /* 10b42ecb call dword ptr [0x10b70308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70308))), 0x10b42ed1u);
  /* 10b42ed1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10b42ed4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42ed8 je 0x10b42f1f */
  if (C.zf) goto L_10b42f1f;
  /* 10b42eda mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42edd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b42ee0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b42ee2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10b42ee5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b42eeb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42eee jne 0x10b42f00 */
  if (!C.zf) goto L_10b42f00;
  /* 10b42ef0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42ef3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b42ef6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10b42ef8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42efb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10b42efe jmp 0x10b42f1d */
  goto L_10b42f1d;
L_10b42f00:;
  /* 10b42f00 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10b42f03 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b42f09 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42f0c jne 0x10b42f1d */
  if (!C.zf) goto L_10b42f1d;
  /* 10b42f0e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42f11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b42f14 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10b42f17 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42f1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10b42f1d:;
  /* 10b42f1d jmp 0x10b42f2e */
  goto L_10b42f2e;
L_10b42f1f:;
  /* 10b42f1f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42f22 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b42f25 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10b42f28 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42f2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10b42f2e:;
  /* 10b42f2e jmp 0x10b42f3f */
  goto L_10b42f3f;
L_10b42f30:;
  /* 10b42f30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42f33 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b42f36 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10b42f39 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b42f3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10b42f3f:;
  /* 10b42f3f jmp 0x10b42e5e */
  goto L_10b42e5e;
L_10b42f44:;
  /* 10b42f44 mov eax, dword ptr [0x10b6ff7c] */
  EAX = (r32((uint32_t)(0x10b6ff7c)));
  /* 10b42f49 push eax */
  push32((uint32_t)(EAX));
  /* 10b42f4a call dword ptr [0x10b70304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70304))), 0x10b42f50u);
  /* 10b42f50 mov esp, ebp */
  ESP = (EBP);
  /* 10b42f52 pop ebp */
  EBP = (pop32());
  /* 10b42f53 ret  */
  ESPCHK(0x10b42c30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10b42f60 (155 bytes, 45 insns) */
void f_10b42f60(void) {
  FTRACE(0x10b42f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b42f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b42f61 mov ebp, esp */
  EBP = (ESP);
  /* 10b42f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b42f66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b42f6d jmp 0x10b42f78 */
  goto L_10b42f78;
L_10b42f6f:;
  /* 10b42f6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42f72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42f75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b42f78:;
  /* 10b42f78 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42f7c jge 0x10b42ff7 */
  if ((C.sf==C.of)) goto L_10b42ff7;
  /* 10b42f7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42f81 cmp dword ptr [ecx*4 + 0x10b6fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b6fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42f89 je 0x10b42ff2 */
  if (C.zf) goto L_10b42ff2;
  /* 10b42f8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42f8e mov eax, dword ptr [edx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b42f95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b42f98 jmp 0x10b42fa3 */
  goto L_10b42fa3;
L_10b42f9a:;
  /* 10b42f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42f9d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42fa0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b42fa3:;
  /* 10b42fa3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42fa6 mov eax, dword ptr [edx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b42fad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42fb2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42fb5 jae 0x10b42fcf */
  if (!C.cf) goto L_10b42fcf;
  /* 10b42fb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42fba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b42fbe je 0x10b42fcd */
  if (C.zf) goto L_10b42fcd;
  /* 10b42fc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b42fc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42fc6 push edx */
  push32((uint32_t)(EDX));
  /* 10b42fc7 call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b42fcdu);
L_10b42fcd:;
  /* 10b42fcd jmp 0x10b42f9a */
  goto L_10b42f9a;
L_10b42fcf:;
  /* 10b42fcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10b42fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42fd4 mov ecx, dword ptr [eax*4 + 0x10b6fe40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b42fdb push ecx */
  push32((uint32_t)(ECX));
  /* 10b42fdc call 0x10b43ab0 */
  push32(0x10b42fe1u); f_10b43ab0();
  /* 10b42fe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b42fe4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b42fe7 mov dword ptr [edx*4 + 0x10b6fe40], 0 */
  w32((uint32_t)(EDX*4 + 0x10b6fe40), (0x0u));
L_10b42ff2:;
  /* 10b42ff2 jmp 0x10b42f6f */
  goto L_10b42f6f;
L_10b42ff7:;
  /* 10b42ff7 mov esp, ebp */
  ESP = (EBP);
  /* 10b42ff9 pop ebp */
  EBP = (pop32());
  /* 10b42ffa ret  */
  ESPCHK(0x10b42f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003000 @ 0x10b43000 (29 bytes, 13 insns) */
void f_10b43000(void) {
  FTRACE(0x10b43000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43000 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43001 mov ebp, esp */
  EBP = (ESP);
  /* 10b43003 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43007 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43009 mov eax, dword ptr [0x10b6e640] */
  EAX = (r32((uint32_t)(0x10b6e640)));
  /* 10b4300e push eax */
  push32((uint32_t)(EAX));
  /* 10b4300f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43012 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43013 call 0x10b43070 */
  push32(0x10b43018u); f_10b43070();
  /* 10b43018 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4301b pop ebp */
  EBP = (pop32());
  /* 10b4301c ret  */
  ESPCHK(0x10b43000u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x10b43020 (35 bytes, 16 insns) */
void f_10b43020(void) {
  FTRACE(0x10b43020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43020 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43021 mov ebp, esp */
  EBP = (ESP);
  /* 10b43023 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b43026 push eax */
  push32((uint32_t)(EAX));
  /* 10b43027 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4302a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4302b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4302e push edx */
  push32((uint32_t)(EDX));
  /* 10b4302f mov eax, dword ptr [0x10b6e640] */
  EAX = (r32((uint32_t)(0x10b6e640)));
  /* 10b43034 push eax */
  push32((uint32_t)(EAX));
  /* 10b43035 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43038 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43039 call 0x10b43070 */
  push32(0x10b4303eu); f_10b43070();
  /* 10b4303e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43041 pop ebp */
  EBP = (pop32());
  /* 10b43042 ret  */
  ESPCHK(0x10b43020u, _esp0);
  ESP += 4; return;
}

/* FUN_10003050 @ 0x10b43050 (27 bytes, 13 insns) */
void f_10b43050(void) {
  FTRACE(0x10b43050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43050 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43051 mov ebp, esp */
  EBP = (ESP);
  /* 10b43053 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43055 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43057 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43059 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4305c push eax */
  push32((uint32_t)(EAX));
  /* 10b4305d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43060 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43061 call 0x10b43070 */
  push32(0x10b43066u); f_10b43070();
  /* 10b43066 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43069 pop ebp */
  EBP = (pop32());
  /* 10b4306a ret  */
  ESPCHK(0x10b43050u, _esp0);
  ESP += 4; return;
}

/* FUN_10003070 @ 0x10b43070 (94 bytes, 38 insns) */
void f_10b43070(void) {
  FTRACE(0x10b43070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43070 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43071 mov ebp, esp */
  EBP = (ESP);
  /* 10b43073 push ecx */
  push32((uint32_t)(ECX));
L_10b43074:;
  /* 10b43074 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b43076 call 0x10b46a20 */
  push32(0x10b4307bu); f_10b46a20();
  /* 10b4307b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4307e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b43081 push eax */
  push32((uint32_t)(EAX));
  /* 10b43082 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b43085 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43086 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43089 push edx */
  push32((uint32_t)(EDX));
  /* 10b4308a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4308d push eax */
  push32((uint32_t)(EAX));
  /* 10b4308e call 0x10b430f0 */
  push32(0x10b43093u); f_10b430f0();
  /* 10b43093 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43096 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b43099 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4309b call 0x10b46ac0 */
  push32(0x10b430a0u); f_10b46ac0();
  /* 10b430a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b430a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b430a7 jne 0x10b430af */
  if (!C.zf) goto L_10b430af;
  /* 10b430a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b430ad jne 0x10b430b4 */
  if (!C.zf) goto L_10b430b4;
L_10b430af:;
  /* 10b430af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b430b2 jmp 0x10b430ca */
  goto L_10b430ca;
L_10b430b4:;
  /* 10b430b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b430b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b430b8 call 0x10b46d60 */
  push32(0x10b430bdu); f_10b46d60();
  /* 10b430bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b430c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b430c2 jne 0x10b430c8 */
  if (!C.zf) goto L_10b430c8;
  /* 10b430c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b430c6 jmp 0x10b430ca */
  goto L_10b430ca;
L_10b430c8:;
  /* 10b430c8 jmp 0x10b43074 */
  goto L_10b43074;
L_10b430ca:;
  /* 10b430ca mov esp, ebp */
  ESP = (EBP);
  /* 10b430cc pop ebp */
  EBP = (pop32());
  /* 10b430cd ret  */
  ESPCHK(0x10b43070u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x10b430d0 (23 bytes, 11 insns) */
void f_10b430d0(void) {
  FTRACE(0x10b430d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b430d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b430d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b430d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b430d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b430d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b430d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b430dc push eax */
  push32((uint32_t)(EAX));
  /* 10b430dd call 0x10b430f0 */
  push32(0x10b430e2u); f_10b430f0();
  /* 10b430e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b430e5 pop ebp */
  EBP = (pop32());
  /* 10b430e6 ret  */
  ESPCHK(0x10b430d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x10b430f0 (787 bytes, 254 insns) */
void f_10b430f0(void) {
  FTRACE(0x10b430f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b430f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b430f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b430f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b430f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b430f7 push esi */
  push32((uint32_t)(ESI));
  /* 10b430f8 push edi */
  push32((uint32_t)(EDI));
  /* 10b430f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b43100 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b43105 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b43108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4310a je 0x10b4313c */
  if (C.zf) goto L_10b4313c;
L_10b4310c:;
  /* 10b4310c call 0x10b441c0 */
  push32(0x10b43111u); f_10b441c0();
  /* 10b43111 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43113 jne 0x10b43136 */
  if (!C.zf) goto L_10b43136;
  /* 10b43115 push 0x10b69534 */
  push32((uint32_t)(0x10b69534u));
  /* 10b4311a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4311c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10b43121 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43126 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43128 call 0x10b420e0 */
  push32(0x10b4312du); f_10b420e0();
  /* 10b4312d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43130 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43133 jne 0x10b43136 */
  if (!C.zf) goto L_10b43136;
  /* 10b43135 int3  */
  x86_unimpl("int3 @ 0x10b43135");
L_10b43136:;
  /* 10b43136 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43138 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4313a jne 0x10b4310c */
  if (!C.zf) goto L_10b4310c;
L_10b4313c:;
  /* 10b4313c mov edx, dword ptr [0x10b6ca88] */
  EDX = (r32((uint32_t)(0x10b6ca88)));
  /* 10b43142 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b43145 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43148 cmp eax, dword ptr [0x10b6ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4314e jne 0x10b43151 */
  if (!C.zf) goto L_10b43151;
  /* 10b43150 int3  */
  x86_unimpl("int3 @ 0x10b43150");
L_10b43151:;
  /* 10b43151 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b43154 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43158 push edx */
  push32((uint32_t)(EDX));
  /* 10b43159 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4315c push eax */
  push32((uint32_t)(EAX));
  /* 10b4315d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43160 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43164 push edx */
  push32((uint32_t)(EDX));
  /* 10b43165 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43167 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43169 call dword ptr [0x10b6cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6cc90))), 0x10b4316fu);
  /* 10b4316f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43174 jne 0x10b431d4 */
  if (!C.zf) goto L_10b431d4;
  /* 10b43176 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4317a je 0x10b431a7 */
  if (C.zf) goto L_10b431a7;
L_10b4317c:;
  /* 10b4317c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4317f push eax */
  push32((uint32_t)(EAX));
  /* 10b43180 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43183 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43184 push 0x10b694f0 */
  push32((uint32_t)(0x10b694f0u));
  /* 10b43189 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4318b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4318d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4318f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43191 call 0x10b420e0 */
  push32(0x10b43196u); f_10b420e0();
  /* 10b43196 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43199 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4319c jne 0x10b4319f */
  if (!C.zf) goto L_10b4319f;
  /* 10b4319e int3  */
  x86_unimpl("int3 @ 0x10b4319e");
L_10b4319f:;
  /* 10b4319f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b431a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b431a3 jne 0x10b4317c */
  if (!C.zf) goto L_10b4317c;
  /* 10b431a5 jmp 0x10b431cd */
  goto L_10b431cd;
L_10b431a7:;
  /* 10b431a7 push 0x10b694cc */
  push32((uint32_t)(0x10b694ccu));
  /* 10b431ac push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b431b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b431b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b431b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b431b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b431b9 call 0x10b420e0 */
  push32(0x10b431beu); f_10b420e0();
  /* 10b431be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b431c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b431c4 jne 0x10b431c7 */
  if (!C.zf) goto L_10b431c7;
  /* 10b431c6 int3  */
  x86_unimpl("int3 @ 0x10b431c6");
L_10b431c7:;
  /* 10b431c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b431c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b431cb jne 0x10b431a7 */
  if (!C.zf) goto L_10b431a7;
L_10b431cd:;
  /* 10b431cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b431cf jmp 0x10b433fc */
  goto L_10b433fc;
L_10b431d4:;
  /* 10b431d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b431d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b431dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b431e0 je 0x10b431f6 */
  if (C.zf) goto L_10b431f6;
  /* 10b431e2 mov edx, dword ptr [0x10b6ca84] */
  EDX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b431e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b431eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b431ed jne 0x10b431f6 */
  if (!C.zf) goto L_10b431f6;
  /* 10b431ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10b431f6:;
  /* 10b431f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b431fa ja 0x10b43207 */
  if ((!C.cf&&!C.zf)) goto L_10b43207;
  /* 10b431fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b431ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43202 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43205 jbe 0x10b43233 */
  if ((C.cf||C.zf)) goto L_10b43233;
L_10b43207:;
  /* 10b43207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4320a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4320b push 0x10b694a4 */
  push32((uint32_t)(0x10b694a4u));
  /* 10b43210 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43212 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43214 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43216 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43218 call 0x10b420e0 */
  push32(0x10b4321du); f_10b420e0();
  /* 10b4321d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43220 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43223 jne 0x10b43226 */
  if (!C.zf) goto L_10b43226;
  /* 10b43225 int3  */
  x86_unimpl("int3 @ 0x10b43225");
L_10b43226:;
  /* 10b43226 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b43228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4322a jne 0x10b43207 */
  if (!C.zf) goto L_10b43207;
  /* 10b4322c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4322e jmp 0x10b433fc */
  goto L_10b433fc;
L_10b43233:;
  /* 10b43233 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43236 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4323b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4323e je 0x10b43280 */
  if (C.zf) goto L_10b43280;
  /* 10b43240 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43244 je 0x10b43280 */
  if (C.zf) goto L_10b43280;
  /* 10b43246 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43249 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4324f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43252 je 0x10b43280 */
  if (C.zf) goto L_10b43280;
  /* 10b43254 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43258 je 0x10b43280 */
  if (C.zf) goto L_10b43280;
L_10b4325a:;
  /* 10b4325a push 0x10b69470 */
  push32((uint32_t)(0x10b69470u));
  /* 10b4325f push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b43264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43266 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43268 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4326a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4326c call 0x10b420e0 */
  push32(0x10b43271u); f_10b420e0();
  /* 10b43271 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43274 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43277 jne 0x10b4327a */
  if (!C.zf) goto L_10b4327a;
  /* 10b43279 int3  */
  x86_unimpl("int3 @ 0x10b43279");
L_10b4327a:;
  /* 10b4327a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4327c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4327e jne 0x10b4325a */
  if (!C.zf) goto L_10b4325a;
L_10b43280:;
  /* 10b43280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43283 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43286 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b43289 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4328c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4328d call 0x10b46e70 */
  push32(0x10b43292u); f_10b46e70();
  /* 10b43292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43295 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b43298 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4329c jne 0x10b432a5 */
  if (!C.zf) goto L_10b432a5;
  /* 10b4329e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b432a0 jmp 0x10b433fc */
  goto L_10b433fc;
L_10b432a5:;
  /* 10b432a5 mov edx, dword ptr [0x10b6ca88] */
  EDX = (r32((uint32_t)(0x10b6ca88)));
  /* 10b432ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b432ae mov dword ptr [0x10b6ca88], edx */
  w32((uint32_t)(0x10b6ca88), (EDX));
  /* 10b432b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b432b8 je 0x10b43303 */
  if (C.zf) goto L_10b43303;
  /* 10b432ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b432c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b432cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10b432d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10b432e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b432e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10b432ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10b432f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b432f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10b432fe jmp 0x10b433a3 */
  goto L_10b433a3;
L_10b43303:;
  /* 10b43303 mov edx, dword ptr [0x10b6e4a0] */
  EDX = (r32((uint32_t)(0x10b6e4a0)));
  /* 10b43309 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4330c mov dword ptr [0x10b6e4a0], edx */
  w32((uint32_t)(0x10b6e4a0), (EDX));
  /* 10b43312 mov eax, dword ptr [0x10b6e4a8] */
  EAX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43317 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4331a mov dword ptr [0x10b6e4a8], eax */
  w32((uint32_t)(0x10b6e4a8), (EAX));
  /* 10b4331f mov ecx, dword ptr [0x10b6e4a8] */
  ECX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43325 cmp ecx, dword ptr [0x10b6e4ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6e4ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4332b jbe 0x10b43339 */
  if ((C.cf||C.zf)) goto L_10b43339;
  /* 10b4332d mov edx, dword ptr [0x10b6e4a8] */
  EDX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43333 mov dword ptr [0x10b6e4ac], edx */
  w32((uint32_t)(0x10b6e4ac), (EDX));
L_10b43339:;
  /* 10b43339 cmp dword ptr [0x10b6e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43340 je 0x10b4334f */
  if (C.zf) goto L_10b4334f;
  /* 10b43342 mov eax, dword ptr [0x10b6e4a4] */
  EAX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b43347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4334a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b4334d jmp 0x10b43358 */
  goto L_10b43358;
L_10b4334f:;
  /* 10b4334f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43352 mov dword ptr [0x10b6e49c], edx */
  w32((uint32_t)(0x10b6e49c), (EDX));
L_10b43358:;
  /* 10b43358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4335b mov ecx, dword ptr [0x10b6e4a4] */
  ECX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b43361 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b43363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43366 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10b4336d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43370 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43373 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b43376 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43379 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4337c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10b4337f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43382 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43385 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10b43388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4338b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4338e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10b43391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43394 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43397 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10b4339a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4339d mov dword ptr [0x10b6e4a4], ecx */
  w32((uint32_t)(0x10b6e4a4), (ECX));
L_10b433a3:;
  /* 10b433a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b433a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b433a7 mov dl, byte ptr [0x10b6ca90] */
  DL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b433ad push edx */
  push32((uint32_t)(EDX));
  /* 10b433ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b433b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b433b4 push eax */
  push32((uint32_t)(EAX));
  /* 10b433b5 call 0x10b46d90 */
  push32(0x10b433bau); f_10b46d90();
  /* 10b433ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b433bd push 4 */
  push32((uint32_t)(0x4u));
  /* 10b433bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b433c1 mov cl, byte ptr [0x10b6ca90] */
  CL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b433c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b433c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b433cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b433ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10b433d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b433d3 call 0x10b46d90 */
  push32(0x10b433d8u); f_10b46d90();
  /* 10b433d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b433db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b433de push edx */
  push32((uint32_t)(EDX));
  /* 10b433df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b433e1 mov al, byte ptr [0x10b6ca92] */
  AL = (r8((uint32_t)(0x10b6ca92)));
  /* 10b433e6 push eax */
  push32((uint32_t)(EAX));
  /* 10b433e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b433ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b433ed push ecx */
  push32((uint32_t)(ECX));
  /* 10b433ee call 0x10b46d90 */
  push32(0x10b433f3u); f_10b46d90();
  /* 10b433f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b433f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b433f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b433fc:;
  /* 10b433fc pop edi */
  EDI = (pop32());
  /* 10b433fd pop esi */
  ESI = (pop32());
  /* 10b433fe pop ebx */
  EBX = (pop32());
  /* 10b433ff mov esp, ebp */
  ESP = (EBP);
  /* 10b43401 pop ebp */
  EBP = (pop32());
  /* 10b43402 ret  */
  ESPCHK(0x10b430f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003410 @ 0x10b43410 (27 bytes, 13 insns) */
void f_10b43410(void) {
  FTRACE(0x10b43410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43410 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43411 mov ebp, esp */
  EBP = (ESP);
  /* 10b43413 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43415 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43417 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43419 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4341c push eax */
  push32((uint32_t)(EAX));
  /* 10b4341d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43420 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43421 call 0x10b43430 */
  push32(0x10b43426u); f_10b43430();
  /* 10b43426 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43429 pop ebp */
  EBP = (pop32());
  /* 10b4342a ret  */
  ESPCHK(0x10b43410u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10b43430 (96 bytes, 37 insns) */
void f_10b43430(void) {
  FTRACE(0x10b43430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43430 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43431 mov ebp, esp */
  EBP = (ESP);
  /* 10b43433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b43436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43439 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4343d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b43440 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b43443 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43444 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b43447 push edx */
  push32((uint32_t)(EDX));
  /* 10b43448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4344b push eax */
  push32((uint32_t)(EAX));
  /* 10b4344c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4344f push ecx */
  push32((uint32_t)(ECX));
  /* 10b43450 call 0x10b43020 */
  push32(0x10b43455u); f_10b43020();
  /* 10b43455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43458 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4345b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4345f je 0x10b43489 */
  if (C.zf) goto L_10b43489;
  /* 10b43461 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43464 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b43467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4346a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4346d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b43470:;
  /* 10b43470 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43473 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43476 jae 0x10b43489 */
  if (!C.cf) goto L_10b43489;
  /* 10b43478 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4347b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b4347e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43481 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43484 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b43487 jmp 0x10b43470 */
  goto L_10b43470;
L_10b43489:;
  /* 10b43489 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4348c mov esp, ebp */
  ESP = (EBP);
  /* 10b4348e pop ebp */
  EBP = (pop32());
  /* 10b4348f ret  */
  ESPCHK(0x10b43430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003490 @ 0x10b43490 (27 bytes, 13 insns) */
void f_10b43490(void) {
  FTRACE(0x10b43490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43490 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43491 mov ebp, esp */
  EBP = (ESP);
  /* 10b43493 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43495 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43497 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4349c push eax */
  push32((uint32_t)(EAX));
  /* 10b4349d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b434a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b434a1 call 0x10b434b0 */
  push32(0x10b434a6u); f_10b434b0();
  /* 10b434a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b434a9 pop ebp */
  EBP = (pop32());
  /* 10b434aa ret  */
  ESPCHK(0x10b43490u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b0 @ 0x10b434b0 (64 bytes, 27 insns) */
void f_10b434b0(void) {
  FTRACE(0x10b434b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b434b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b434b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b434b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b434b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b434b6 call 0x10b46a20 */
  push32(0x10b434bbu); f_10b46a20();
  /* 10b434bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b434be push 1 */
  push32((uint32_t)(0x1u));
  /* 10b434c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b434c3 push eax */
  push32((uint32_t)(EAX));
  /* 10b434c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b434c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b434c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b434cb push edx */
  push32((uint32_t)(EDX));
  /* 10b434cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b434cf push eax */
  push32((uint32_t)(EAX));
  /* 10b434d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b434d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b434d4 call 0x10b434f0 */
  push32(0x10b434d9u); f_10b434f0();
  /* 10b434d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b434dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b434df push 9 */
  push32((uint32_t)(0x9u));
  /* 10b434e1 call 0x10b46ac0 */
  push32(0x10b434e6u); f_10b46ac0();
  /* 10b434e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b434e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b434ec mov esp, ebp */
  ESP = (EBP);
  /* 10b434ee pop ebp */
  EBP = (pop32());
  /* 10b434ef ret  */
  ESPCHK(0x10b434b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x10b434f0 (1297 bytes, 431 insns) */
void f_10b434f0(void) {
  FTRACE(0x10b434f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b434f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b434f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b434f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b434f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b434f7 push esi */
  push32((uint32_t)(ESI));
  /* 10b434f8 push edi */
  push32((uint32_t)(EDI));
  /* 10b434f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10b43500 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43504 jne 0x10b43523 */
  if (!C.zf) goto L_10b43523;
  /* 10b43506 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b43509 push eax */
  push32((uint32_t)(EAX));
  /* 10b4350a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4350d push ecx */
  push32((uint32_t)(ECX));
  /* 10b4350e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43511 push edx */
  push32((uint32_t)(EDX));
  /* 10b43512 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43515 push eax */
  push32((uint32_t)(EAX));
  /* 10b43516 call 0x10b43020 */
  push32(0x10b4351bu); f_10b43020();
  /* 10b4351b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4351e jmp 0x10b439fa */
  goto L_10b439fa;
L_10b43523:;
  /* 10b43523 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43527 je 0x10b43546 */
  if (C.zf) goto L_10b43546;
  /* 10b43529 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4352d jne 0x10b43546 */
  if (!C.zf) goto L_10b43546;
  /* 10b4352f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43532 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43536 push edx */
  push32((uint32_t)(EDX));
  /* 10b43537 call 0x10b43ab0 */
  push32(0x10b4353cu); f_10b43ab0();
  /* 10b4353c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4353f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43541 jmp 0x10b439fa */
  goto L_10b439fa;
L_10b43546:;
  /* 10b43546 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b4354b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4354e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43550 je 0x10b43582 */
  if (C.zf) goto L_10b43582;
L_10b43552:;
  /* 10b43552 call 0x10b441c0 */
  push32(0x10b43557u); f_10b441c0();
  /* 10b43557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43559 jne 0x10b4357c */
  if (!C.zf) goto L_10b4357c;
  /* 10b4355b push 0x10b69534 */
  push32((uint32_t)(0x10b69534u));
  /* 10b43560 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43562 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10b43567 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b4356c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4356e call 0x10b420e0 */
  push32(0x10b43573u); f_10b420e0();
  /* 10b43573 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43576 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43579 jne 0x10b4357c */
  if (!C.zf) goto L_10b4357c;
  /* 10b4357b int3  */
  x86_unimpl("int3 @ 0x10b4357b");
L_10b4357c:;
  /* 10b4357c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4357e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43580 jne 0x10b43552 */
  if (!C.zf) goto L_10b43552;
L_10b43582:;
  /* 10b43582 mov edx, dword ptr [0x10b6ca88] */
  EDX = (r32((uint32_t)(0x10b6ca88)));
  /* 10b43588 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b4358b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4358e cmp eax, dword ptr [0x10b6ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43594 jne 0x10b43597 */
  if (!C.zf) goto L_10b43597;
  /* 10b43596 int3  */
  x86_unimpl("int3 @ 0x10b43596");
L_10b43597:;
  /* 10b43597 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4359a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4359b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4359e push edx */
  push32((uint32_t)(EDX));
  /* 10b4359f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b435a2 push eax */
  push32((uint32_t)(EAX));
  /* 10b435a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b435a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b435a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b435aa push edx */
  push32((uint32_t)(EDX));
  /* 10b435ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b435ae push eax */
  push32((uint32_t)(EAX));
  /* 10b435af push 2 */
  push32((uint32_t)(0x2u));
  /* 10b435b1 call dword ptr [0x10b6cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6cc90))), 0x10b435b7u);
  /* 10b435b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b435ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b435bc jne 0x10b4361c */
  if (!C.zf) goto L_10b4361c;
  /* 10b435be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b435c2 je 0x10b435ef */
  if (C.zf) goto L_10b435ef;
L_10b435c4:;
  /* 10b435c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b435c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b435c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b435cb push edx */
  push32((uint32_t)(EDX));
  /* 10b435cc push 0x10b696b0 */
  push32((uint32_t)(0x10b696b0u));
  /* 10b435d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435d9 call 0x10b420e0 */
  push32(0x10b435deu); f_10b420e0();
  /* 10b435de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b435e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b435e4 jne 0x10b435e7 */
  if (!C.zf) goto L_10b435e7;
  /* 10b435e6 int3  */
  x86_unimpl("int3 @ 0x10b435e6");
L_10b435e7:;
  /* 10b435e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b435e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b435eb jne 0x10b435c4 */
  if (!C.zf) goto L_10b435c4;
  /* 10b435ed jmp 0x10b43615 */
  goto L_10b43615;
L_10b435ef:;
  /* 10b435ef push 0x10b6968c */
  push32((uint32_t)(0x10b6968cu));
  /* 10b435f4 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b435f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b435ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43601 call 0x10b420e0 */
  push32(0x10b43606u); f_10b420e0();
  /* 10b43606 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43609 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4360c jne 0x10b4360f */
  if (!C.zf) goto L_10b4360f;
  /* 10b4360e int3  */
  x86_unimpl("int3 @ 0x10b4360e");
L_10b4360f:;
  /* 10b4360f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43611 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43613 jne 0x10b435ef */
  if (!C.zf) goto L_10b435ef;
L_10b43615:;
  /* 10b43615 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43617 jmp 0x10b439fa */
  goto L_10b439fa;
L_10b4361c:;
  /* 10b4361c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43620 jbe 0x10b4364e */
  if ((C.cf||C.zf)) goto L_10b4364e;
L_10b43622:;
  /* 10b43622 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43625 push edx */
  push32((uint32_t)(EDX));
  /* 10b43626 push 0x10b6965c */
  push32((uint32_t)(0x10b6965cu));
  /* 10b4362b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4362d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4362f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43631 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43633 call 0x10b420e0 */
  push32(0x10b43638u); f_10b420e0();
  /* 10b43638 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4363b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4363e jne 0x10b43641 */
  if (!C.zf) goto L_10b43641;
  /* 10b43640 int3  */
  x86_unimpl("int3 @ 0x10b43640");
L_10b43641:;
  /* 10b43641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43645 jne 0x10b43622 */
  if (!C.zf) goto L_10b43622;
  /* 10b43647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43649 jmp 0x10b439fa */
  goto L_10b439fa;
L_10b4364e:;
  /* 10b4364e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43652 je 0x10b43696 */
  if (C.zf) goto L_10b43696;
  /* 10b43654 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43657 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4365d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43660 je 0x10b43696 */
  if (C.zf) goto L_10b43696;
  /* 10b43662 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43665 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4366b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4366e je 0x10b43696 */
  if (C.zf) goto L_10b43696;
L_10b43670:;
  /* 10b43670 push 0x10b69470 */
  push32((uint32_t)(0x10b69470u));
  /* 10b43675 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b4367a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4367c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4367e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43680 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43682 call 0x10b420e0 */
  push32(0x10b43687u); f_10b420e0();
  /* 10b43687 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4368a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4368d jne 0x10b43690 */
  if (!C.zf) goto L_10b43690;
  /* 10b4368f int3  */
  x86_unimpl("int3 @ 0x10b4368f");
L_10b43690:;
  /* 10b43690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43694 jne 0x10b43670 */
  if (!C.zf) goto L_10b43670;
L_10b43696:;
  /* 10b43696 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43699 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4369a call 0x10b44620 */
  push32(0x10b4369fu); f_10b44620();
  /* 10b4369f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b436a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b436a4 jne 0x10b436c7 */
  if (!C.zf) goto L_10b436c7;
  /* 10b436a6 push 0x10b69638 */
  push32((uint32_t)(0x10b69638u));
  /* 10b436ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b436ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10b436b2 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b436b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b436b9 call 0x10b420e0 */
  push32(0x10b436beu); f_10b420e0();
  /* 10b436be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b436c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b436c4 jne 0x10b436c7 */
  if (!C.zf) goto L_10b436c7;
  /* 10b436c6 int3  */
  x86_unimpl("int3 @ 0x10b436c6");
L_10b436c7:;
  /* 10b436c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b436c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b436cb jne 0x10b43696 */
  if (!C.zf) goto L_10b43696;
  /* 10b436cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b436d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b436d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b436d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b436d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b436dd jne 0x10b436e6 */
  if (!C.zf) goto L_10b436e6;
  /* 10b436df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10b436e6:;
  /* 10b436e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b436ea je 0x10b4372a */
  if (C.zf) goto L_10b4372a;
L_10b436ec:;
  /* 10b436ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b436ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b436f6 jne 0x10b43701 */
  if (!C.zf) goto L_10b43701;
  /* 10b436f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b436fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b436ff je 0x10b43722 */
  if (C.zf) goto L_10b43722;
L_10b43701:;
  /* 10b43701 push 0x10b695f0 */
  push32((uint32_t)(0x10b695f0u));
  /* 10b43706 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43708 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10b4370d push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43712 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43714 call 0x10b420e0 */
  push32(0x10b43719u); f_10b420e0();
  /* 10b43719 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4371c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4371f jne 0x10b43722 */
  if (!C.zf) goto L_10b43722;
  /* 10b43721 int3  */
  x86_unimpl("int3 @ 0x10b43721");
L_10b43722:;
  /* 10b43722 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43724 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43726 jne 0x10b436ec */
  if (!C.zf) goto L_10b436ec;
  /* 10b43728 jmp 0x10b4378e */
  goto L_10b4378e;
L_10b4372a:;
  /* 10b4372a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4372d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43730 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b43735 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43738 jne 0x10b4374f */
  if (!C.zf) goto L_10b4374f;
  /* 10b4373a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4373d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b43743 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43746 jne 0x10b4374f */
  if (!C.zf) goto L_10b4374f;
  /* 10b43748 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10b4374f:;
  /* 10b4374f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43752 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43755 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4375a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4375d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b43763 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43765 je 0x10b43788 */
  if (C.zf) goto L_10b43788;
  /* 10b43767 push 0x10b695b4 */
  push32((uint32_t)(0x10b695b4u));
  /* 10b4376c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4376e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10b43773 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43778 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4377a call 0x10b420e0 */
  push32(0x10b4377fu); f_10b420e0();
  /* 10b4377f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43782 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43785 jne 0x10b43788 */
  if (!C.zf) goto L_10b43788;
  /* 10b43787 int3  */
  x86_unimpl("int3 @ 0x10b43787");
L_10b43788:;
  /* 10b43788 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4378a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4378c jne 0x10b4374f */
  if (!C.zf) goto L_10b4374f;
L_10b4378e:;
  /* 10b4378e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43792 je 0x10b437b9 */
  if (C.zf) goto L_10b437b9;
  /* 10b43794 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43797 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4379a push eax */
  push32((uint32_t)(EAX));
  /* 10b4379b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4379e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4379f call 0x10b46fa0 */
  push32(0x10b437a4u); f_10b46fa0();
  /* 10b437a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b437a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b437aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b437ae jne 0x10b437b7 */
  if (!C.zf) goto L_10b437b7;
  /* 10b437b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b437b2 jmp 0x10b439fa */
  goto L_10b439fa;
L_10b437b7:;
  /* 10b437b7 jmp 0x10b437dc */
  goto L_10b437dc;
L_10b437b9:;
  /* 10b437b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b437bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b437bf push edx */
  push32((uint32_t)(EDX));
  /* 10b437c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b437c3 push eax */
  push32((uint32_t)(EAX));
  /* 10b437c4 call 0x10b46ef0 */
  push32(0x10b437c9u); f_10b46ef0();
  /* 10b437c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b437cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b437cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b437d3 jne 0x10b437dc */
  if (!C.zf) goto L_10b437dc;
  /* 10b437d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b437d7 jmp 0x10b439fa */
  goto L_10b439fa;
L_10b437dc:;
  /* 10b437dc mov ecx, dword ptr [0x10b6ca88] */
  ECX = (r32((uint32_t)(0x10b6ca88)));
  /* 10b437e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b437e5 mov dword ptr [0x10b6ca88], ecx */
  w32((uint32_t)(0x10b6ca88), (ECX));
  /* 10b437eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b437ef jne 0x10b43847 */
  if (!C.zf) goto L_10b43847;
  /* 10b437f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b437f4 mov eax, dword ptr [0x10b6e4a0] */
  EAX = (r32((uint32_t)(0x10b6e4a0)));
  /* 10b437f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b437fc mov dword ptr [0x10b6e4a0], eax */
  w32((uint32_t)(0x10b6e4a0), (EAX));
  /* 10b43801 mov ecx, dword ptr [0x10b6e4a0] */
  ECX = (r32((uint32_t)(0x10b6e4a0)));
  /* 10b43807 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4380a mov dword ptr [0x10b6e4a0], ecx */
  w32((uint32_t)(0x10b6e4a0), (ECX));
  /* 10b43810 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43813 mov eax, dword ptr [0x10b6e4a8] */
  EAX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43818 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4381b mov dword ptr [0x10b6e4a8], eax */
  w32((uint32_t)(0x10b6e4a8), (EAX));
  /* 10b43820 mov ecx, dword ptr [0x10b6e4a8] */
  ECX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43826 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43829 mov dword ptr [0x10b6e4a8], ecx */
  w32((uint32_t)(0x10b6e4a8), (ECX));
  /* 10b4382f mov edx, dword ptr [0x10b6e4a8] */
  EDX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43835 cmp edx, dword ptr [0x10b6e4ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6e4ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4383b jbe 0x10b43847 */
  if ((C.cf||C.zf)) goto L_10b43847;
  /* 10b4383d mov eax, dword ptr [0x10b6e4a8] */
  EAX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43842 mov dword ptr [0x10b6e4ac], eax */
  w32((uint32_t)(0x10b6e4ac), (EAX));
L_10b43847:;
  /* 10b43847 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4384a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4384d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b43850 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43853 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43856 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43859 jbe 0x10b4387f */
  if ((C.cf||C.zf)) goto L_10b4387f;
  /* 10b4385b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4385e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43861 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b43864 push edx */
  push32((uint32_t)(EDX));
  /* 10b43865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43867 mov al, byte ptr [0x10b6ca92] */
  AL = (r8((uint32_t)(0x10b6ca92)));
  /* 10b4386c push eax */
  push32((uint32_t)(EAX));
  /* 10b4386d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43870 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43873 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43876 push edx */
  push32((uint32_t)(EDX));
  /* 10b43877 call 0x10b46d90 */
  push32(0x10b4387cu); f_10b46d90();
  /* 10b4387c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4387f:;
  /* 10b4387f push 4 */
  push32((uint32_t)(0x4u));
  /* 10b43881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43883 mov al, byte ptr [0x10b6ca90] */
  AL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b43888 push eax */
  push32((uint32_t)(EAX));
  /* 10b43889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4388c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4388f push ecx */
  push32((uint32_t)(ECX));
  /* 10b43890 call 0x10b46d90 */
  push32(0x10b43895u); f_10b46d90();
  /* 10b43895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43898 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4389c jne 0x10b438b9 */
  if (!C.zf) goto L_10b438b9;
  /* 10b4389e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b438a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b438a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b438a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b438aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b438ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10b438b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b438b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b438b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10b438b9:;
  /* 10b438b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b438bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b438bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10b438c2:;
  /* 10b438c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b438c6 jne 0x10b438f7 */
  if (!C.zf) goto L_10b438f7;
  /* 10b438c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b438cc jne 0x10b438d6 */
  if (!C.zf) goto L_10b438d6;
  /* 10b438ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b438d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b438d4 je 0x10b438f7 */
  if (C.zf) goto L_10b438f7;
L_10b438d6:;
  /* 10b438d6 push 0x10b69580 */
  push32((uint32_t)(0x10b69580u));
  /* 10b438db push 0 */
  push32((uint32_t)(0x0u));
  /* 10b438dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10b438e2 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b438e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b438e9 call 0x10b420e0 */
  push32(0x10b438eeu); f_10b420e0();
  /* 10b438ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b438f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b438f4 jne 0x10b438f7 */
  if (!C.zf) goto L_10b438f7;
  /* 10b438f6 int3  */
  x86_unimpl("int3 @ 0x10b438f6");
L_10b438f7:;
  /* 10b438f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b438f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b438fb jne 0x10b438c2 */
  if (!C.zf) goto L_10b438c2;
  /* 10b438fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43900 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43903 je 0x10b4390b */
  if (C.zf) goto L_10b4390b;
  /* 10b43905 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43909 je 0x10b43913 */
  if (C.zf) goto L_10b43913;
L_10b4390b:;
  /* 10b4390b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4390e jmp 0x10b439fa */
  goto L_10b439fa;
L_10b43913:;
  /* 10b43913 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43916 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43919 je 0x10b4392b */
  if (C.zf) goto L_10b4392b;
  /* 10b4391b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4391e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b43920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43923 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b43926 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b43929 jmp 0x10b43967 */
  goto L_10b43967;
L_10b4392b:;
  /* 10b4392b mov eax, dword ptr [0x10b6e49c] */
  EAX = (r32((uint32_t)(0x10b6e49c)));
  /* 10b43930 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43933 je 0x10b43956 */
  if (C.zf) goto L_10b43956;
  /* 10b43935 push 0x10b69564 */
  push32((uint32_t)(0x10b69564u));
  /* 10b4393a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4393c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10b43941 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43946 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43948 call 0x10b420e0 */
  push32(0x10b4394du); f_10b420e0();
  /* 10b4394d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43950 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43953 jne 0x10b43956 */
  if (!C.zf) goto L_10b43956;
  /* 10b43955 int3  */
  x86_unimpl("int3 @ 0x10b43955");
L_10b43956:;
  /* 10b43956 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43958 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4395a jne 0x10b4392b */
  if (!C.zf) goto L_10b4392b;
  /* 10b4395c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4395f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b43962 mov dword ptr [0x10b6e49c], eax */
  w32((uint32_t)(0x10b6e49c), (EAX));
L_10b43967:;
  /* 10b43967 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4396a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4396e je 0x10b4397f */
  if (C.zf) goto L_10b4397f;
  /* 10b43970 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43973 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b43976 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b43979 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4397b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b4397d jmp 0x10b439ba */
  goto L_10b439ba;
L_10b4397f:;
  /* 10b4397f mov eax, dword ptr [0x10b6e4a4] */
  EAX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b43984 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43987 je 0x10b439aa */
  if (C.zf) goto L_10b439aa;
  /* 10b43989 push 0x10b69548 */
  push32((uint32_t)(0x10b69548u));
  /* 10b4398e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43990 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10b43995 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b4399a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4399c call 0x10b420e0 */
  push32(0x10b439a1u); f_10b420e0();
  /* 10b439a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b439a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b439a7 jne 0x10b439aa */
  if (!C.zf) goto L_10b439aa;
  /* 10b439a9 int3  */
  x86_unimpl("int3 @ 0x10b439a9");
L_10b439aa:;
  /* 10b439aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b439ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b439ae jne 0x10b4397f */
  if (!C.zf) goto L_10b4397f;
  /* 10b439b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b439b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b439b5 mov dword ptr [0x10b6e4a4], eax */
  w32((uint32_t)(0x10b6e4a4), (EAX));
L_10b439ba:;
  /* 10b439ba cmp dword ptr [0x10b6e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b439c1 je 0x10b439d1 */
  if (C.zf) goto L_10b439d1;
  /* 10b439c3 mov ecx, dword ptr [0x10b6e4a4] */
  ECX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b439c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b439cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b439cf jmp 0x10b439d9 */
  goto L_10b439d9;
L_10b439d1:;
  /* 10b439d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b439d4 mov dword ptr [0x10b6e49c], eax */
  w32((uint32_t)(0x10b6e49c), (EAX));
L_10b439d9:;
  /* 10b439d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b439dc mov edx, dword ptr [0x10b6e4a4] */
  EDX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b439e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b439e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b439e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b439ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b439f1 mov dword ptr [0x10b6e4a4], ecx */
  w32((uint32_t)(0x10b6e4a4), (ECX));
  /* 10b439f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b439fa:;
  /* 10b439fa pop edi */
  EDI = (pop32());
  /* 10b439fb pop esi */
  ESI = (pop32());
  /* 10b439fc pop ebx */
  EBX = (pop32());
  /* 10b439fd mov esp, ebp */
  ESP = (EBP);
  /* 10b439ff pop ebp */
  EBP = (pop32());
  /* 10b43a00 ret  */
  ESPCHK(0x10b434f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x10b43a10 (27 bytes, 13 insns) */
void f_10b43a10(void) {
  FTRACE(0x10b43a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43a11 mov ebp, esp */
  EBP = (ESP);
  /* 10b43a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43a19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43a1c push eax */
  push32((uint32_t)(EAX));
  /* 10b43a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43a21 call 0x10b43a30 */
  push32(0x10b43a26u); f_10b43a30();
  /* 10b43a26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43a29 pop ebp */
  EBP = (pop32());
  /* 10b43a2a ret  */
  ESPCHK(0x10b43a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a30 @ 0x10b43a30 (64 bytes, 27 insns) */
void f_10b43a30(void) {
  FTRACE(0x10b43a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43a31 mov ebp, esp */
  EBP = (ESP);
  /* 10b43a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43a34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b43a36 call 0x10b46a20 */
  push32(0x10b43a3bu); f_10b46a20();
  /* 10b43a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43a40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b43a43 push eax */
  push32((uint32_t)(EAX));
  /* 10b43a44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b43a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43a48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b43a4b push edx */
  push32((uint32_t)(EDX));
  /* 10b43a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43a4f push eax */
  push32((uint32_t)(EAX));
  /* 10b43a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43a54 call 0x10b434f0 */
  push32(0x10b43a59u); f_10b434f0();
  /* 10b43a59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43a5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b43a5f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b43a61 call 0x10b46ac0 */
  push32(0x10b43a66u); f_10b46ac0();
  /* 10b43a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43a6c mov esp, ebp */
  ESP = (EBP);
  /* 10b43a6e pop ebp */
  EBP = (pop32());
  /* 10b43a6f ret  */
  ESPCHK(0x10b43a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a70 @ 0x10b43a70 (19 bytes, 9 insns) */
void f_10b43a70(void) {
  FTRACE(0x10b43a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43a71 mov ebp, esp */
  EBP = (ESP);
  /* 10b43a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43a75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43a78 push eax */
  push32((uint32_t)(EAX));
  /* 10b43a79 call 0x10b43ab0 */
  push32(0x10b43a7eu); f_10b43ab0();
  /* 10b43a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43a81 pop ebp */
  EBP = (pop32());
  /* 10b43a82 ret  */
  ESPCHK(0x10b43a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a90 @ 0x10b43a90 (19 bytes, 9 insns) */
void f_10b43a90(void) {
  FTRACE(0x10b43a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43a91 mov ebp, esp */
  EBP = (ESP);
  /* 10b43a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43a95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43a98 push eax */
  push32((uint32_t)(EAX));
  /* 10b43a99 call 0x10b43ae0 */
  push32(0x10b43a9eu); f_10b43ae0();
  /* 10b43a9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43aa1 pop ebp */
  EBP = (pop32());
  /* 10b43aa2 ret  */
  ESPCHK(0x10b43a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ab0 @ 0x10b43ab0 (41 bytes, 16 insns) */
void f_10b43ab0(void) {
  FTRACE(0x10b43ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10b43ab3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b43ab5 call 0x10b46a20 */
  push32(0x10b43abau); f_10b46a20();
  /* 10b43aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43abd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43ac0 push eax */
  push32((uint32_t)(EAX));
  /* 10b43ac1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43ac4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43ac5 call 0x10b43ae0 */
  push32(0x10b43acau); f_10b43ae0();
  /* 10b43aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43acd push 9 */
  push32((uint32_t)(0x9u));
  /* 10b43acf call 0x10b46ac0 */
  push32(0x10b43ad4u); f_10b46ac0();
  /* 10b43ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43ad7 pop ebp */
  EBP = (pop32());
  /* 10b43ad8 ret  */
  ESPCHK(0x10b43ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x10b43ae0 (1004 bytes, 342 insns) */
void f_10b43ae0(void) {
  FTRACE(0x10b43ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10b43ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 10b43ae5 push esi */
  push32((uint32_t)(ESI));
  /* 10b43ae6 push edi */
  push32((uint32_t)(EDI));
  /* 10b43ae7 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b43aec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b43aef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43af1 je 0x10b43b23 */
  if (C.zf) goto L_10b43b23;
L_10b43af3:;
  /* 10b43af3 call 0x10b441c0 */
  push32(0x10b43af8u); f_10b441c0();
  /* 10b43af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43afa jne 0x10b43b1d */
  if (!C.zf) goto L_10b43b1d;
  /* 10b43afc push 0x10b69534 */
  push32((uint32_t)(0x10b69534u));
  /* 10b43b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b03 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10b43b08 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43b0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43b0f call 0x10b420e0 */
  push32(0x10b43b14u); f_10b420e0();
  /* 10b43b14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43b17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43b1a jne 0x10b43b1d */
  if (!C.zf) goto L_10b43b1d;
  /* 10b43b1c int3  */
  x86_unimpl("int3 @ 0x10b43b1c");
L_10b43b1d:;
  /* 10b43b1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43b1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43b21 jne 0x10b43af3 */
  if (!C.zf) goto L_10b43af3;
L_10b43b23:;
  /* 10b43b23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43b27 jne 0x10b43b2e */
  if (!C.zf) goto L_10b43b2e;
  /* 10b43b29 jmp 0x10b43ec5 */
  goto L_10b43ec5;
L_10b43b2e:;
  /* 10b43b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b43b37 push edx */
  push32((uint32_t)(EDX));
  /* 10b43b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43b3d push eax */
  push32((uint32_t)(EAX));
  /* 10b43b3e push 3 */
  push32((uint32_t)(0x3u));
  /* 10b43b40 call dword ptr [0x10b6cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6cc90))), 0x10b43b46u);
  /* 10b43b46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43b4b jne 0x10b43b78 */
  if (!C.zf) goto L_10b43b78;
L_10b43b4d:;
  /* 10b43b4d push 0x10b697f8 */
  push32((uint32_t)(0x10b697f8u));
  /* 10b43b52 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b43b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b5f call 0x10b420e0 */
  push32(0x10b43b64u); f_10b420e0();
  /* 10b43b64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43b67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43b6a jne 0x10b43b6d */
  if (!C.zf) goto L_10b43b6d;
  /* 10b43b6c int3  */
  x86_unimpl("int3 @ 0x10b43b6c");
L_10b43b6d:;
  /* 10b43b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43b6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43b71 jne 0x10b43b4d */
  if (!C.zf) goto L_10b43b4d;
  /* 10b43b73 jmp 0x10b43ec5 */
  goto L_10b43ec5;
L_10b43b78:;
  /* 10b43b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43b7b push edx */
  push32((uint32_t)(EDX));
  /* 10b43b7c call 0x10b44620 */
  push32(0x10b43b81u); f_10b44620();
  /* 10b43b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43b86 jne 0x10b43ba9 */
  if (!C.zf) goto L_10b43ba9;
  /* 10b43b88 push 0x10b69638 */
  push32((uint32_t)(0x10b69638u));
  /* 10b43b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43b8f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10b43b94 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43b99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43b9b call 0x10b420e0 */
  push32(0x10b43ba0u); f_10b420e0();
  /* 10b43ba0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43ba3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43ba6 jne 0x10b43ba9 */
  if (!C.zf) goto L_10b43ba9;
  /* 10b43ba8 int3  */
  x86_unimpl("int3 @ 0x10b43ba8");
L_10b43ba9:;
  /* 10b43ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43bad jne 0x10b43b78 */
  if (!C.zf) goto L_10b43b78;
  /* 10b43baf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43bb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b43bb5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b43bb8:;
  /* 10b43bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43bbb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b43bc3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43bc6 je 0x10b43c0b */
  if (C.zf) goto L_10b43c0b;
  /* 10b43bc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43bcb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43bcf je 0x10b43c0b */
  if (C.zf) goto L_10b43c0b;
  /* 10b43bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43bd4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43bd7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b43bdc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43bdf je 0x10b43c0b */
  if (C.zf) goto L_10b43c0b;
  /* 10b43be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43be4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43be8 je 0x10b43c0b */
  if (C.zf) goto L_10b43c0b;
  /* 10b43bea push 0x10b697d0 */
  push32((uint32_t)(0x10b697d0u));
  /* 10b43bef push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43bf1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10b43bf6 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43bfb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43bfd call 0x10b420e0 */
  push32(0x10b43c02u); f_10b420e0();
  /* 10b43c02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43c05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43c08 jne 0x10b43c0b */
  if (!C.zf) goto L_10b43c0b;
  /* 10b43c0a int3  */
  x86_unimpl("int3 @ 0x10b43c0a");
L_10b43c0b:;
  /* 10b43c0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b43c0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b43c0f jne 0x10b43bb8 */
  if (!C.zf) goto L_10b43bb8;
  /* 10b43c11 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b43c16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b43c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43c1b jne 0x10b43ce6 */
  if (!C.zf) goto L_10b43ce6;
  /* 10b43c21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b43c23 mov cl, byte ptr [0x10b6ca90] */
  CL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b43c29 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43c2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43c2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43c30 push edx */
  push32((uint32_t)(EDX));
  /* 10b43c31 call 0x10b44130 */
  push32(0x10b43c36u); f_10b44130();
  /* 10b43c36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43c3b jne 0x10b43c80 */
  if (!C.zf) goto L_10b43c80;
L_10b43c3d:;
  /* 10b43c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43c40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43c43 push eax */
  push32((uint32_t)(EAX));
  /* 10b43c44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43c47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b43c4a push edx */
  push32((uint32_t)(EDX));
  /* 10b43c4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43c4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b43c51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b43c57 mov edx, dword ptr [ecx*4 + 0x10b6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca94)));
  /* 10b43c5e push edx */
  push32((uint32_t)(EDX));
  /* 10b43c5f push 0x10b697a4 */
  push32((uint32_t)(0x10b697a4u));
  /* 10b43c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43c6c call 0x10b420e0 */
  push32(0x10b43c71u); f_10b420e0();
  /* 10b43c71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43c74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43c77 jne 0x10b43c7a */
  if (!C.zf) goto L_10b43c7a;
  /* 10b43c79 int3  */
  x86_unimpl("int3 @ 0x10b43c79");
L_10b43c7a:;
  /* 10b43c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43c7e jne 0x10b43c3d */
  if (!C.zf) goto L_10b43c3d;
L_10b43c80:;
  /* 10b43c80 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b43c82 mov cl, byte ptr [0x10b6ca90] */
  CL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b43c88 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43c89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43c8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b43c8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43c92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10b43c96 push edx */
  push32((uint32_t)(EDX));
  /* 10b43c97 call 0x10b44130 */
  push32(0x10b43c9cu); f_10b44130();
  /* 10b43c9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43c9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43ca1 jne 0x10b43ce6 */
  if (!C.zf) goto L_10b43ce6;
L_10b43ca3:;
  /* 10b43ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43ca6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43ca9 push eax */
  push32((uint32_t)(EAX));
  /* 10b43caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43cad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b43cb0 push edx */
  push32((uint32_t)(EDX));
  /* 10b43cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43cb4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b43cb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b43cbd mov edx, dword ptr [ecx*4 + 0x10b6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca94)));
  /* 10b43cc4 push edx */
  push32((uint32_t)(EDX));
  /* 10b43cc5 push 0x10b69778 */
  push32((uint32_t)(0x10b69778u));
  /* 10b43cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43cd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43cd2 call 0x10b420e0 */
  push32(0x10b43cd7u); f_10b420e0();
  /* 10b43cd7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43cda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43cdd jne 0x10b43ce0 */
  if (!C.zf) goto L_10b43ce0;
  /* 10b43cdf int3  */
  x86_unimpl("int3 @ 0x10b43cdf");
L_10b43ce0:;
  /* 10b43ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43ce4 jne 0x10b43ca3 */
  if (!C.zf) goto L_10b43ca3;
L_10b43ce6:;
  /* 10b43ce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43ce9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43ced jne 0x10b43d5b */
  if (!C.zf) goto L_10b43d5b;
L_10b43cef:;
  /* 10b43cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43cf2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43cf9 jne 0x10b43d04 */
  if (!C.zf) goto L_10b43d04;
  /* 10b43cfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43cfe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43d02 je 0x10b43d25 */
  if (C.zf) goto L_10b43d25;
L_10b43d04:;
  /* 10b43d04 push 0x10b69738 */
  push32((uint32_t)(0x10b69738u));
  /* 10b43d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43d0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10b43d10 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43d15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43d17 call 0x10b420e0 */
  push32(0x10b43d1cu); f_10b420e0();
  /* 10b43d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43d1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43d22 jne 0x10b43d25 */
  if (!C.zf) goto L_10b43d25;
  /* 10b43d24 int3  */
  x86_unimpl("int3 @ 0x10b43d24");
L_10b43d25:;
  /* 10b43d25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43d27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43d29 jne 0x10b43cef */
  if (!C.zf) goto L_10b43cef;
  /* 10b43d2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43d2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b43d31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43d34 push eax */
  push32((uint32_t)(EAX));
  /* 10b43d35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43d37 mov cl, byte ptr [0x10b6ca91] */
  CL = (r8((uint32_t)(0x10b6ca91)));
  /* 10b43d3d push ecx */
  push32((uint32_t)(ECX));
  /* 10b43d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43d41 push edx */
  push32((uint32_t)(EDX));
  /* 10b43d42 call 0x10b46d90 */
  push32(0x10b43d47u); f_10b46d90();
  /* 10b43d47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43d4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43d4d push eax */
  push32((uint32_t)(EAX));
  /* 10b43d4e call 0x10b47190 */
  push32(0x10b43d53u); f_10b47190();
  /* 10b43d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43d56 jmp 0x10b43ec5 */
  goto L_10b43ec5;
L_10b43d5b:;
  /* 10b43d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43d5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43d62 jne 0x10b43d71 */
  if (!C.zf) goto L_10b43d71;
  /* 10b43d64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43d68 jne 0x10b43d71 */
  if (!C.zf) goto L_10b43d71;
  /* 10b43d6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10b43d71:;
  /* 10b43d71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43d74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43d77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43d7a je 0x10b43d9d */
  if (C.zf) goto L_10b43d9d;
  /* 10b43d7c push 0x10b69718 */
  push32((uint32_t)(0x10b69718u));
  /* 10b43d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43d83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10b43d88 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43d8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43d8f call 0x10b420e0 */
  push32(0x10b43d94u); f_10b420e0();
  /* 10b43d94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43d97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43d9a jne 0x10b43d9d */
  if (!C.zf) goto L_10b43d9d;
  /* 10b43d9c int3  */
  x86_unimpl("int3 @ 0x10b43d9c");
L_10b43d9d:;
  /* 10b43d9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43d9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43da1 jne 0x10b43d71 */
  if (!C.zf) goto L_10b43d71;
  /* 10b43da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43da6 mov eax, dword ptr [0x10b6e4a8] */
  EAX = (r32((uint32_t)(0x10b6e4a8)));
  /* 10b43dab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b43dae mov dword ptr [0x10b6e4a8], eax */
  w32((uint32_t)(0x10b6e4a8), (EAX));
  /* 10b43db3 mov ecx, dword ptr [0x10b6ca84] */
  ECX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b43db9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b43dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43dbe jne 0x10b43e9c */
  if (!C.zf) goto L_10b43e9c;
  /* 10b43dc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43dc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43dca je 0x10b43ddc */
  if (C.zf) goto L_10b43ddc;
  /* 10b43dcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43dcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b43dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43dd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b43dd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b43dda jmp 0x10b43e1a */
  goto L_10b43e1a;
L_10b43ddc:;
  /* 10b43ddc mov ecx, dword ptr [0x10b6e49c] */
  ECX = (r32((uint32_t)(0x10b6e49c)));
  /* 10b43de2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43de5 je 0x10b43e08 */
  if (C.zf) goto L_10b43e08;
  /* 10b43de7 push 0x10b69700 */
  push32((uint32_t)(0x10b69700u));
  /* 10b43dec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43dee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10b43df3 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43dfa call 0x10b420e0 */
  push32(0x10b43dffu); f_10b420e0();
  /* 10b43dff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43e02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43e05 jne 0x10b43e08 */
  if (!C.zf) goto L_10b43e08;
  /* 10b43e07 int3  */
  x86_unimpl("int3 @ 0x10b43e07");
L_10b43e08:;
  /* 10b43e08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b43e0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b43e0c jne 0x10b43ddc */
  if (!C.zf) goto L_10b43ddc;
  /* 10b43e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e11 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b43e14 mov dword ptr [0x10b6e49c], ecx */
  w32((uint32_t)(0x10b6e49c), (ECX));
L_10b43e1a:;
  /* 10b43e1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e1d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43e21 je 0x10b43e32 */
  if (C.zf) goto L_10b43e32;
  /* 10b43e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b43e29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b43e2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b43e30 jmp 0x10b43e6f */
  goto L_10b43e6f;
L_10b43e32:;
  /* 10b43e32 mov ecx, dword ptr [0x10b6e4a4] */
  ECX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b43e38 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43e3b je 0x10b43e5e */
  if (C.zf) goto L_10b43e5e;
  /* 10b43e3d push 0x10b696e8 */
  push32((uint32_t)(0x10b696e8u));
  /* 10b43e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43e44 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10b43e49 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43e50 call 0x10b420e0 */
  push32(0x10b43e55u); f_10b420e0();
  /* 10b43e55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43e58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43e5b jne 0x10b43e5e */
  if (!C.zf) goto L_10b43e5e;
  /* 10b43e5d int3  */
  x86_unimpl("int3 @ 0x10b43e5d");
L_10b43e5e:;
  /* 10b43e5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b43e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b43e62 jne 0x10b43e32 */
  if (!C.zf) goto L_10b43e32;
  /* 10b43e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b43e69 mov dword ptr [0x10b6e4a4], ecx */
  w32((uint32_t)(0x10b6e4a4), (ECX));
L_10b43e6f:;
  /* 10b43e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b43e75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43e78 push eax */
  push32((uint32_t)(EAX));
  /* 10b43e79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43e7b mov cl, byte ptr [0x10b6ca91] */
  CL = (r8((uint32_t)(0x10b6ca91)));
  /* 10b43e81 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43e82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e85 push edx */
  push32((uint32_t)(EDX));
  /* 10b43e86 call 0x10b46d90 */
  push32(0x10b43e8bu); f_10b46d90();
  /* 10b43e8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43e8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e91 push eax */
  push32((uint32_t)(EAX));
  /* 10b43e92 call 0x10b47190 */
  push32(0x10b43e97u); f_10b47190();
  /* 10b43e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43e9a jmp 0x10b43ec5 */
  goto L_10b43ec5;
L_10b43e9c:;
  /* 10b43e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43e9f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10b43ea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43ea9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b43eac push eax */
  push32((uint32_t)(EAX));
  /* 10b43ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43eaf mov cl, byte ptr [0x10b6ca91] */
  CL = (r8((uint32_t)(0x10b6ca91)));
  /* 10b43eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b43eb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b43eb9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43ebc push edx */
  push32((uint32_t)(EDX));
  /* 10b43ebd call 0x10b46d90 */
  push32(0x10b43ec2u); f_10b46d90();
  /* 10b43ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b43ec5:;
  /* 10b43ec5 pop edi */
  EDI = (pop32());
  /* 10b43ec6 pop esi */
  ESI = (pop32());
  /* 10b43ec7 pop ebx */
  EBX = (pop32());
  /* 10b43ec8 mov esp, ebp */
  ESP = (EBP);
  /* 10b43eca pop ebp */
  EBP = (pop32());
  /* 10b43ecb ret  */
  ESPCHK(0x10b43ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ed0 @ 0x10b43ed0 (19 bytes, 9 insns) */
void f_10b43ed0(void) {
  FTRACE(0x10b43ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10b43ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b43ed5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43ed8 push eax */
  push32((uint32_t)(EAX));
  /* 10b43ed9 call 0x10b43ef0 */
  push32(0x10b43edeu); f_10b43ef0();
  /* 10b43ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43ee1 pop ebp */
  EBP = (pop32());
  /* 10b43ee2 ret  */
  ESPCHK(0x10b43ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef0 @ 0x10b43ef0 (342 bytes, 119 insns) */
void f_10b43ef0(void) {
  FTRACE(0x10b43ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b43ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b43ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10b43ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b43ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b43ef7 push esi */
  push32((uint32_t)(ESI));
  /* 10b43ef8 push edi */
  push32((uint32_t)(EDI));
  /* 10b43ef9 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b43efe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b43f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43f03 je 0x10b43f35 */
  if (C.zf) goto L_10b43f35;
L_10b43f05:;
  /* 10b43f05 call 0x10b441c0 */
  push32(0x10b43f0au); f_10b441c0();
  /* 10b43f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43f0c jne 0x10b43f2f */
  if (!C.zf) goto L_10b43f2f;
  /* 10b43f0e push 0x10b69534 */
  push32((uint32_t)(0x10b69534u));
  /* 10b43f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43f15 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10b43f1a push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43f1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43f21 call 0x10b420e0 */
  push32(0x10b43f26u); f_10b420e0();
  /* 10b43f26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43f29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43f2c jne 0x10b43f2f */
  if (!C.zf) goto L_10b43f2f;
  /* 10b43f2e int3  */
  x86_unimpl("int3 @ 0x10b43f2e");
L_10b43f2f:;
  /* 10b43f2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b43f31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b43f33 jne 0x10b43f05 */
  if (!C.zf) goto L_10b43f05;
L_10b43f35:;
  /* 10b43f35 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b43f37 call 0x10b46a20 */
  push32(0x10b43f3cu); f_10b46a20();
  /* 10b43f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b43f3f:;
  /* 10b43f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43f42 push edx */
  push32((uint32_t)(EDX));
  /* 10b43f43 call 0x10b44620 */
  push32(0x10b43f48u); f_10b44620();
  /* 10b43f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43f4d jne 0x10b43f70 */
  if (!C.zf) goto L_10b43f70;
  /* 10b43f4f push 0x10b69638 */
  push32((uint32_t)(0x10b69638u));
  /* 10b43f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43f56 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10b43f5b push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43f60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43f62 call 0x10b420e0 */
  push32(0x10b43f67u); f_10b420e0();
  /* 10b43f67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43f6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43f6d jne 0x10b43f70 */
  if (!C.zf) goto L_10b43f70;
  /* 10b43f6f int3  */
  x86_unimpl("int3 @ 0x10b43f6f");
L_10b43f70:;
  /* 10b43f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b43f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b43f74 jne 0x10b43f3f */
  if (!C.zf) goto L_10b43f3f;
  /* 10b43f76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b43f79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b43f7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b43f7f:;
  /* 10b43f7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43f82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43f85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b43f8a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43f8d je 0x10b43fd2 */
  if (C.zf) goto L_10b43fd2;
  /* 10b43f8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43f92 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43f96 je 0x10b43fd2 */
  if (C.zf) goto L_10b43fd2;
  /* 10b43f98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43f9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43f9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b43fa3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43fa6 je 0x10b43fd2 */
  if (C.zf) goto L_10b43fd2;
  /* 10b43fa8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43fab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43faf je 0x10b43fd2 */
  if (C.zf) goto L_10b43fd2;
  /* 10b43fb1 push 0x10b697d0 */
  push32((uint32_t)(0x10b697d0u));
  /* 10b43fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b43fb8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10b43fbd push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b43fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b43fc4 call 0x10b420e0 */
  push32(0x10b43fc9u); f_10b420e0();
  /* 10b43fc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b43fcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43fcf jne 0x10b43fd2 */
  if (!C.zf) goto L_10b43fd2;
  /* 10b43fd1 int3  */
  x86_unimpl("int3 @ 0x10b43fd1");
L_10b43fd2:;
  /* 10b43fd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b43fd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b43fd6 jne 0x10b43f7f */
  if (!C.zf) goto L_10b43f7f;
  /* 10b43fd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43fdb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43fdf jne 0x10b43fee */
  if (!C.zf) goto L_10b43fee;
  /* 10b43fe1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43fe5 jne 0x10b43fee */
  if (!C.zf) goto L_10b43fee;
  /* 10b43fe7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10b43fee:;
  /* 10b43fee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43ff1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b43ff5 je 0x10b44029 */
  if (C.zf) goto L_10b44029;
L_10b43ff7:;
  /* 10b43ff7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b43ffa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b43ffd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44000 je 0x10b44023 */
  if (C.zf) goto L_10b44023;
  /* 10b44002 push 0x10b69718 */
  push32((uint32_t)(0x10b69718u));
  /* 10b44007 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44009 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10b4400e push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b44013 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b44015 call 0x10b420e0 */
  push32(0x10b4401au); f_10b420e0();
  /* 10b4401a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4401d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44020 jne 0x10b44023 */
  if (!C.zf) goto L_10b44023;
  /* 10b44022 int3  */
  x86_unimpl("int3 @ 0x10b44022");
L_10b44023:;
  /* 10b44023 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b44025 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44027 jne 0x10b43ff7 */
  if (!C.zf) goto L_10b43ff7;
L_10b44029:;
  /* 10b44029 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4402c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b4402f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b44032 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44034 call 0x10b46ac0 */
  push32(0x10b44039u); f_10b46ac0();
  /* 10b44039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4403c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4403f pop edi */
  EDI = (pop32());
  /* 10b44040 pop esi */
  ESI = (pop32());
  /* 10b44041 pop ebx */
  EBX = (pop32());
  /* 10b44042 mov esp, ebp */
  ESP = (EBP);
  /* 10b44044 pop ebp */
  EBP = (pop32());
  /* 10b44045 ret  */
  ESPCHK(0x10b43ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004050 @ 0x10b44050 (28 bytes, 11 insns) */
void f_10b44050(void) {
  FTRACE(0x10b44050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44050 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44051 mov ebp, esp */
  EBP = (ESP);
  /* 10b44053 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44054 mov eax, dword ptr [0x10b6ca8c] */
  EAX = (r32((uint32_t)(0x10b6ca8c)));
  /* 10b44059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4405c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4405f mov dword ptr [0x10b6ca8c], ecx */
  w32((uint32_t)(0x10b6ca8c), (ECX));
  /* 10b44065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44068 mov esp, ebp */
  ESP = (EBP);
  /* 10b4406a pop ebp */
  EBP = (pop32());
  /* 10b4406b ret  */
  ESPCHK(0x10b44050u, _esp0);
  ESP += 4; return;
}

/* FUN_10004070 @ 0x10b44070 (157 bytes, 59 insns) */
void f_10b44070(void) {
  FTRACE(0x10b44070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44070 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44071 mov ebp, esp */
  EBP = (ESP);
  /* 10b44073 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44074 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44075 push esi */
  push32((uint32_t)(ESI));
  /* 10b44076 push edi */
  push32((uint32_t)(EDI));
  /* 10b44077 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44079 call 0x10b46a20 */
  push32(0x10b4407eu); f_10b46a20();
  /* 10b4407e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44084 push eax */
  push32((uint32_t)(EAX));
  /* 10b44085 call 0x10b44620 */
  push32(0x10b4408au); f_10b44620();
  /* 10b4408a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4408d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4408f je 0x10b440fc */
  if (C.zf) goto L_10b440fc;
  /* 10b44091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44094 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44097 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4409a:;
  /* 10b4409a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4409d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b440a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b440a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b440a8 je 0x10b440ed */
  if (C.zf) goto L_10b440ed;
  /* 10b440aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b440ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b440b1 je 0x10b440ed */
  if (C.zf) goto L_10b440ed;
  /* 10b440b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b440b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b440b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b440be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b440c1 je 0x10b440ed */
  if (C.zf) goto L_10b440ed;
  /* 10b440c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b440c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b440ca je 0x10b440ed */
  if (C.zf) goto L_10b440ed;
  /* 10b440cc push 0x10b697d0 */
  push32((uint32_t)(0x10b697d0u));
  /* 10b440d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b440d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10b440d8 push 0x10b69528 */
  push32((uint32_t)(0x10b69528u));
  /* 10b440dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b440df call 0x10b420e0 */
  push32(0x10b440e4u); f_10b420e0();
  /* 10b440e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b440e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b440ea jne 0x10b440ed */
  if (!C.zf) goto L_10b440ed;
  /* 10b440ec int3  */
  x86_unimpl("int3 @ 0x10b440ec");
L_10b440ed:;
  /* 10b440ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b440ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b440f1 jne 0x10b4409a */
  if (!C.zf) goto L_10b4409a;
  /* 10b440f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b440f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b440f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10b440fc:;
  /* 10b440fc push 9 */
  push32((uint32_t)(0x9u));
  /* 10b440fe call 0x10b46ac0 */
  push32(0x10b44103u); f_10b46ac0();
  /* 10b44103 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44106 pop edi */
  EDI = (pop32());
  /* 10b44107 pop esi */
  ESI = (pop32());
  /* 10b44108 pop ebx */
  EBX = (pop32());
  /* 10b44109 mov esp, ebp */
  ESP = (EBP);
  /* 10b4410b pop ebp */
  EBP = (pop32());
  /* 10b4410c ret  */
  ESPCHK(0x10b44070u, _esp0);
  ESP += 4; return;
}

/* FUN_10004110 @ 0x10b44110 (28 bytes, 11 insns) */
void f_10b44110(void) {
  FTRACE(0x10b44110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44110 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44111 mov ebp, esp */
  EBP = (ESP);
  /* 10b44113 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44114 mov eax, dword ptr [0x10b6cc90] */
  EAX = (r32((uint32_t)(0x10b6cc90)));
  /* 10b44119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4411c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4411f mov dword ptr [0x10b6cc90], ecx */
  w32((uint32_t)(0x10b6cc90), (ECX));
  /* 10b44125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44128 mov esp, ebp */
  ESP = (EBP);
  /* 10b4412a pop ebp */
  EBP = (pop32());
  /* 10b4412b ret  */
  ESPCHK(0x10b44110u, _esp0);
  ESP += 4; return;
}

/* FUN_10004130 @ 0x10b44130 (136 bytes, 55 insns) */
void f_10b44130(void) {
  FTRACE(0x10b44130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44130 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44131 mov ebp, esp */
  EBP = (ESP);
  /* 10b44133 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44134 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44135 push esi */
  push32((uint32_t)(ESI));
  /* 10b44136 push edi */
  push32((uint32_t)(EDI));
  /* 10b44137 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10b4413e:;
  /* 10b4413e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b44141 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b44144 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44147 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b4414a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4414c je 0x10b441ae */
  if (C.zf) goto L_10b441ae;
  /* 10b4414e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44151 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44153 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b44155 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b44158 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4415e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44161 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44164 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b44167 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44169 je 0x10b441ac */
  if (C.zf) goto L_10b441ac;
L_10b4416b:;
  /* 10b4416b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4416e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b44173 push eax */
  push32((uint32_t)(EAX));
  /* 10b44174 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44177 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b44179 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10b4417c push edx */
  push32((uint32_t)(EDX));
  /* 10b4417d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44180 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44183 push eax */
  push32((uint32_t)(EAX));
  /* 10b44184 push 0x10b69814 */
  push32((uint32_t)(0x10b69814u));
  /* 10b44189 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4418b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4418d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4418f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44191 call 0x10b420e0 */
  push32(0x10b44196u); f_10b420e0();
  /* 10b44196 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44199 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4419c jne 0x10b4419f */
  if (!C.zf) goto L_10b4419f;
  /* 10b4419e int3  */
  x86_unimpl("int3 @ 0x10b4419e");
L_10b4419f:;
  /* 10b4419f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b441a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b441a3 jne 0x10b4416b */
  if (!C.zf) goto L_10b4416b;
  /* 10b441a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b441ac:;
  /* 10b441ac jmp 0x10b4413e */
  goto L_10b4413e;
L_10b441ae:;
  /* 10b441ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b441b1 pop edi */
  EDI = (pop32());
  /* 10b441b2 pop esi */
  ESI = (pop32());
  /* 10b441b3 pop ebx */
  EBX = (pop32());
  /* 10b441b4 mov esp, ebp */
  ESP = (EBP);
  /* 10b441b6 pop ebp */
  EBP = (pop32());
  /* 10b441b7 ret  */
  ESPCHK(0x10b44130u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x10b441c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10b441c0(void) {
  FTRACE(0x10b441c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b441c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b441c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b441c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b441c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b441c7 push esi */
  push32((uint32_t)(ESI));
  /* 10b441c8 push edi */
  push32((uint32_t)(EDI));
  /* 10b441c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b441d0 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b441d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b441d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b441da jne 0x10b441e6 */
  if (!C.zf) goto L_10b441e6;
  /* 10b441dc mov eax, 1 */
  EAX = (0x1u);
  /* 10b441e1 jmp 0x10b44518 */
  goto L_10b44518;
L_10b441e6:;
  /* 10b441e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b441e8 call 0x10b46a20 */
  push32(0x10b441edu); f_10b46a20();
  /* 10b441ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b441f0 call 0x10b47200 */
  push32(0x10b441f5u); f_10b47200();
  /* 10b441f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b441f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b441fc je 0x10b44309 */
  if (C.zf) goto L_10b44309;
  /* 10b44202 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44206 je 0x10b44309 */
  if (C.zf) goto L_10b44309;
  /* 10b4420c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4420f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b44212 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b44215 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44218 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b4421b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4421f ja 0x10b442d2 */
  if ((!C.cf&&!C.zf)) goto L_10b442d2;
  /* 10b44225 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b44228 jmp dword ptr [eax*4 + 0x10b4451f] */
  switch (EAX) {
    case 0: goto L_10b442aa;
    case 1: goto L_10b44282;
    case 2: goto L_10b4425a;
    case 3: goto L_10b4422f;
    default: x86_unimpl("switch@0x10b44228 out of table"); return;
  }
L_10b4422f:;
  /* 10b4422f push 0x10b69968 */
  push32((uint32_t)(0x10b69968u));
  /* 10b44234 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b44239 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4423b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4423d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4423f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44241 call 0x10b420e0 */
  push32(0x10b44246u); f_10b420e0();
  /* 10b44246 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44249 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4424c jne 0x10b4424f */
  if (!C.zf) goto L_10b4424f;
  /* 10b4424e int3  */
  x86_unimpl("int3 @ 0x10b4424e");
L_10b4424f:;
  /* 10b4424f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b44251 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44253 jne 0x10b4422f */
  if (!C.zf) goto L_10b4422f;
  /* 10b44255 jmp 0x10b442f8 */
  goto L_10b442f8;
L_10b4425a:;
  /* 10b4425a push 0x10b69944 */
  push32((uint32_t)(0x10b69944u));
  /* 10b4425f push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b44264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44266 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44268 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4426a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4426c call 0x10b420e0 */
  push32(0x10b44271u); f_10b420e0();
  /* 10b44271 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44274 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44277 jne 0x10b4427a */
  if (!C.zf) goto L_10b4427a;
  /* 10b44279 int3  */
  x86_unimpl("int3 @ 0x10b44279");
L_10b4427a:;
  /* 10b4427a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4427c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4427e jne 0x10b4425a */
  if (!C.zf) goto L_10b4425a;
  /* 10b44280 jmp 0x10b442f8 */
  goto L_10b442f8;
L_10b44282:;
  /* 10b44282 push 0x10b69920 */
  push32((uint32_t)(0x10b69920u));
  /* 10b44287 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b4428c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4428e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44290 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44294 call 0x10b420e0 */
  push32(0x10b44299u); f_10b420e0();
  /* 10b44299 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4429c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4429f jne 0x10b442a2 */
  if (!C.zf) goto L_10b442a2;
  /* 10b442a1 int3  */
  x86_unimpl("int3 @ 0x10b442a1");
L_10b442a2:;
  /* 10b442a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b442a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b442a6 jne 0x10b44282 */
  if (!C.zf) goto L_10b44282;
  /* 10b442a8 jmp 0x10b442f8 */
  goto L_10b442f8;
L_10b442aa:;
  /* 10b442aa push 0x10b698fc */
  push32((uint32_t)(0x10b698fcu));
  /* 10b442af push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b442b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442bc call 0x10b420e0 */
  push32(0x10b442c1u); f_10b420e0();
  /* 10b442c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b442c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b442c7 jne 0x10b442ca */
  if (!C.zf) goto L_10b442ca;
  /* 10b442c9 int3  */
  x86_unimpl("int3 @ 0x10b442c9");
L_10b442ca:;
  /* 10b442ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b442cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b442ce jne 0x10b442aa */
  if (!C.zf) goto L_10b442aa;
  /* 10b442d0 jmp 0x10b442f8 */
  goto L_10b442f8;
L_10b442d2:;
  /* 10b442d2 push 0x10b698d0 */
  push32((uint32_t)(0x10b698d0u));
  /* 10b442d7 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b442dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442de push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b442e4 call 0x10b420e0 */
  push32(0x10b442e9u); f_10b420e0();
  /* 10b442e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b442ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b442ef jne 0x10b442f2 */
  if (!C.zf) goto L_10b442f2;
  /* 10b442f1 int3  */
  x86_unimpl("int3 @ 0x10b442f1");
L_10b442f2:;
  /* 10b442f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b442f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b442f6 jne 0x10b442d2 */
  if (!C.zf) goto L_10b442d2;
L_10b442f8:;
  /* 10b442f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b442fa call 0x10b46ac0 */
  push32(0x10b442ffu); f_10b46ac0();
  /* 10b442ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44304 jmp 0x10b44518 */
  goto L_10b44518;
L_10b44309:;
  /* 10b44309 mov eax, dword ptr [0x10b6e4a4] */
  EAX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b4430e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b44311 jmp 0x10b4431b */
  goto L_10b4431b;
L_10b44313:;
  /* 10b44313 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b44318 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b4431b:;
  /* 10b4431b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4431f je 0x10b4450b */
  if (C.zf) goto L_10b4450b;
  /* 10b44325 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b4432c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4432f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b44332 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b44338 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4433b je 0x10b44360 */
  if (C.zf) goto L_10b44360;
  /* 10b4433d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44340 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44344 je 0x10b44360 */
  if (C.zf) goto L_10b44360;
  /* 10b44346 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44349 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b4434c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b44352 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44355 je 0x10b44360 */
  if (C.zf) goto L_10b44360;
  /* 10b44357 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4435a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4435e jne 0x10b44378 */
  if (!C.zf) goto L_10b44378;
L_10b44360:;
  /* 10b44360 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44363 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b44366 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4436c mov edx, dword ptr [ecx*4 + 0x10b6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca94)));
  /* 10b44373 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b44376 jmp 0x10b4437f */
  goto L_10b4437f;
L_10b44378:;
  /* 10b44378 mov dword ptr [ebp - 0x14], 0x10b698c8 */
  w32((uint32_t)(EBP + -0x14), (0x10b698c8u));
L_10b4437f:;
  /* 10b4437f push 4 */
  push32((uint32_t)(0x4u));
  /* 10b44381 mov al, byte ptr [0x10b6ca90] */
  AL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b44386 push eax */
  push32((uint32_t)(EAX));
  /* 10b44387 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4438a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4438d push ecx */
  push32((uint32_t)(ECX));
  /* 10b4438e call 0x10b44130 */
  push32(0x10b44393u); f_10b44130();
  /* 10b44393 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44398 jne 0x10b443d4 */
  if (!C.zf) goto L_10b443d4;
L_10b4439a:;
  /* 10b4439a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4439d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b443a0 push edx */
  push32((uint32_t)(EDX));
  /* 10b443a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b443a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b443a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b443a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b443ab push edx */
  push32((uint32_t)(EDX));
  /* 10b443ac push 0x10b697a4 */
  push32((uint32_t)(0x10b697a4u));
  /* 10b443b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b443b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b443b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b443b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b443b9 call 0x10b420e0 */
  push32(0x10b443beu); f_10b420e0();
  /* 10b443be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b443c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b443c4 jne 0x10b443c7 */
  if (!C.zf) goto L_10b443c7;
  /* 10b443c6 int3  */
  x86_unimpl("int3 @ 0x10b443c6");
L_10b443c7:;
  /* 10b443c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b443c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b443cb jne 0x10b4439a */
  if (!C.zf) goto L_10b4439a;
  /* 10b443cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b443d4:;
  /* 10b443d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b443d6 mov cl, byte ptr [0x10b6ca90] */
  CL = (r8((uint32_t)(0x10b6ca90)));
  /* 10b443dc push ecx */
  push32((uint32_t)(ECX));
  /* 10b443dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b443e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b443e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b443e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10b443ea push edx */
  push32((uint32_t)(EDX));
  /* 10b443eb call 0x10b44130 */
  push32(0x10b443f0u); f_10b44130();
  /* 10b443f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b443f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b443f5 jne 0x10b44431 */
  if (!C.zf) goto L_10b44431;
L_10b443f7:;
  /* 10b443f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b443fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b443fd push eax */
  push32((uint32_t)(EAX));
  /* 10b443fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44401 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b44404 push edx */
  push32((uint32_t)(EDX));
  /* 10b44405 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b44408 push eax */
  push32((uint32_t)(EAX));
  /* 10b44409 push 0x10b69778 */
  push32((uint32_t)(0x10b69778u));
  /* 10b4440e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44410 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44412 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44414 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44416 call 0x10b420e0 */
  push32(0x10b4441bu); f_10b420e0();
  /* 10b4441b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4441e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44421 jne 0x10b44424 */
  if (!C.zf) goto L_10b44424;
  /* 10b44423 int3  */
  x86_unimpl("int3 @ 0x10b44423");
L_10b44424:;
  /* 10b44424 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b44426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44428 jne 0x10b443f7 */
  if (!C.zf) goto L_10b443f7;
  /* 10b4442a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b44431:;
  /* 10b44431 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44434 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44438 jne 0x10b4448a */
  if (!C.zf) goto L_10b4448a;
  /* 10b4443a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4443d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b44440 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44441 mov dl, byte ptr [0x10b6ca91] */
  DL = (r8((uint32_t)(0x10b6ca91)));
  /* 10b44447 push edx */
  push32((uint32_t)(EDX));
  /* 10b44448 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4444b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4444e push eax */
  push32((uint32_t)(EAX));
  /* 10b4444f call 0x10b44130 */
  push32(0x10b44454u); f_10b44130();
  /* 10b44454 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44459 jne 0x10b4448a */
  if (!C.zf) goto L_10b4448a;
L_10b4445b:;
  /* 10b4445b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4445e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44461 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44462 push 0x10b6989c */
  push32((uint32_t)(0x10b6989cu));
  /* 10b44467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44469 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4446b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4446d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4446f call 0x10b420e0 */
  push32(0x10b44474u); f_10b420e0();
  /* 10b44474 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4447a jne 0x10b4447d */
  if (!C.zf) goto L_10b4447d;
  /* 10b4447c int3  */
  x86_unimpl("int3 @ 0x10b4447c");
L_10b4447d:;
  /* 10b4447d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4447f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44481 jne 0x10b4445b */
  if (!C.zf) goto L_10b4445b;
  /* 10b44483 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b4448a:;
  /* 10b4448a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4448e jne 0x10b44506 */
  if (!C.zf) goto L_10b44506;
  /* 10b44490 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44493 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44497 je 0x10b444cc */
  if (C.zf) goto L_10b444cc;
L_10b44499:;
  /* 10b44499 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4449c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4449f push edx */
  push32((uint32_t)(EDX));
  /* 10b444a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b444a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b444a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b444a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b444aa push edx */
  push32((uint32_t)(EDX));
  /* 10b444ab push 0x10b6987c */
  push32((uint32_t)(0x10b6987cu));
  /* 10b444b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444b8 call 0x10b420e0 */
  push32(0x10b444bdu); f_10b420e0();
  /* 10b444bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b444c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b444c3 jne 0x10b444c6 */
  if (!C.zf) goto L_10b444c6;
  /* 10b444c5 int3  */
  x86_unimpl("int3 @ 0x10b444c5");
L_10b444c6:;
  /* 10b444c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b444c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b444ca jne 0x10b44499 */
  if (!C.zf) goto L_10b44499;
L_10b444cc:;
  /* 10b444cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b444cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b444d2 push edx */
  push32((uint32_t)(EDX));
  /* 10b444d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b444d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b444d9 push eax */
  push32((uint32_t)(EAX));
  /* 10b444da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b444dd push ecx */
  push32((uint32_t)(ECX));
  /* 10b444de push 0x10b69850 */
  push32((uint32_t)(0x10b69850u));
  /* 10b444e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b444eb call 0x10b420e0 */
  push32(0x10b444f0u); f_10b420e0();
  /* 10b444f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b444f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b444f6 jne 0x10b444f9 */
  if (!C.zf) goto L_10b444f9;
  /* 10b444f8 int3  */
  x86_unimpl("int3 @ 0x10b444f8");
L_10b444f9:;
  /* 10b444f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b444fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b444fd jne 0x10b444cc */
  if (!C.zf) goto L_10b444cc;
  /* 10b444ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b44506:;
  /* 10b44506 jmp 0x10b44313 */
  goto L_10b44313;
L_10b4450b:;
  /* 10b4450b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4450d call 0x10b46ac0 */
  push32(0x10b44512u); f_10b46ac0();
  /* 10b44512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b44518:;
  /* 10b44518 pop edi */
  EDI = (pop32());
  /* 10b44519 pop esi */
  ESI = (pop32());
  /* 10b4451a pop ebx */
  EBX = (pop32());
  /* 10b4451b mov esp, ebp */
  ESP = (EBP);
  /* 10b4451d pop ebp */
  EBP = (pop32());
  /* 10b4451e ret  */
  ESPCHK(0x10b441c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004530 @ 0x10b44530 (34 bytes, 13 insns) */
void f_10b44530(void) {
  FTRACE(0x10b44530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44530 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44531 mov ebp, esp */
  EBP = (ESP);
  /* 10b44533 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44534 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b44539 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4453c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44540 je 0x10b4454b */
  if (C.zf) goto L_10b4454b;
  /* 10b44542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44545 mov dword ptr [0x10b6ca84], ecx */
  w32((uint32_t)(0x10b6ca84), (ECX));
L_10b4454b:;
  /* 10b4454b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4454e mov esp, ebp */
  ESP = (EBP);
  /* 10b44550 pop ebp */
  EBP = (pop32());
  /* 10b44551 ret  */
  ESPCHK(0x10b44530u, _esp0);
  ESP += 4; return;
}

/* FUN_10004560 @ 0x10b44560 (103 bytes, 38 insns) */
void f_10b44560(void) {
  FTRACE(0x10b44560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44560 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44561 mov ebp, esp */
  EBP = (ESP);
  /* 10b44563 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44564 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b44569 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4456c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4456e jne 0x10b44572 */
  if (!C.zf) goto L_10b44572;
  /* 10b44570 jmp 0x10b445c3 */
  goto L_10b445c3;
L_10b44572:;
  /* 10b44572 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44574 call 0x10b46a20 */
  push32(0x10b44579u); f_10b46a20();
  /* 10b44579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4457c mov ecx, dword ptr [0x10b6e4a4] */
  ECX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b44582 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b44585 jmp 0x10b4458f */
  goto L_10b4458f;
L_10b44587:;
  /* 10b44587 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4458a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4458c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4458f:;
  /* 10b4458f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44593 je 0x10b445b9 */
  if (C.zf) goto L_10b445b9;
  /* 10b44595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44598 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b4459b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b445a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b445a4 jne 0x10b445b7 */
  if (!C.zf) goto L_10b445b7;
  /* 10b445a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b445a9 push eax */
  push32((uint32_t)(EAX));
  /* 10b445aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b445ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b445b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b445b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10b445b4u);
  /* 10b445b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b445b7:;
  /* 10b445b7 jmp 0x10b44587 */
  goto L_10b44587;
L_10b445b9:;
  /* 10b445b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b445bb call 0x10b46ac0 */
  push32(0x10b445c0u); f_10b46ac0();
  /* 10b445c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b445c3:;
  /* 10b445c3 mov esp, ebp */
  ESP = (EBP);
  /* 10b445c5 pop ebp */
  EBP = (pop32());
  /* 10b445c6 ret  */
  ESPCHK(0x10b44560u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10b445d0 (75 bytes, 28 insns) */
void f_10b445d0(void) {
  FTRACE(0x10b445d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b445d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b445d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b445d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b445d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b445d8 je 0x10b4460d */
  if (C.zf) goto L_10b4460d;
  /* 10b445da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b445dd push eax */
  push32((uint32_t)(EAX));
  /* 10b445de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b445e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b445e2 call dword ptr [0x10b70318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70318))), 0x10b445e8u);
  /* 10b445e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b445ea jne 0x10b4460d */
  if (!C.zf) goto L_10b4460d;
  /* 10b445ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b445f0 je 0x10b44604 */
  if (C.zf) goto L_10b44604;
  /* 10b445f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b445f5 push edx */
  push32((uint32_t)(EDX));
  /* 10b445f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b445f9 push eax */
  push32((uint32_t)(EAX));
  /* 10b445fa call dword ptr [0x10b70314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70314))), 0x10b44600u);
  /* 10b44600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44602 jne 0x10b4460d */
  if (!C.zf) goto L_10b4460d;
L_10b44604:;
  /* 10b44604 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b4460b jmp 0x10b44614 */
  goto L_10b44614;
L_10b4460d:;
  /* 10b4460d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b44614:;
  /* 10b44614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44617 mov esp, ebp */
  ESP = (EBP);
  /* 10b44619 pop ebp */
  EBP = (pop32());
  /* 10b4461a ret  */
  ESPCHK(0x10b445d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x10b44620 (134 bytes, 50 insns) */
void f_10b44620(void) {
  FTRACE(0x10b44620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44620 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44621 mov ebp, esp */
  EBP = (ESP);
  /* 10b44623 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44624 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44628 jne 0x10b4462e */
  if (!C.zf) goto L_10b4462e;
  /* 10b4462a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4462c jmp 0x10b446a2 */
  goto L_10b446a2;
L_10b4462e:;
  /* 10b4462e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b44630 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b44632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44635 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44638 push eax */
  push32((uint32_t)(EAX));
  /* 10b44639 call 0x10b445d0 */
  push32(0x10b4463eu); f_10b445d0();
  /* 10b4463e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44643 jne 0x10b44649 */
  if (!C.zf) goto L_10b44649;
  /* 10b44645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44647 jmp 0x10b446a2 */
  goto L_10b446a2;
L_10b44649:;
  /* 10b44649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4464c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4464f push ecx */
  push32((uint32_t)(ECX));
  /* 10b44650 call 0x10b47320 */
  push32(0x10b44655u); f_10b47320();
  /* 10b44655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44658 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4465b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4465f je 0x10b44676 */
  if (C.zf) goto L_10b44676;
  /* 10b44661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44664 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44667 push edx */
  push32((uint32_t)(EDX));
  /* 10b44668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4466b push eax */
  push32((uint32_t)(EAX));
  /* 10b4466c call 0x10b47380 */
  push32(0x10b44671u); f_10b47380();
  /* 10b44671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44674 jmp 0x10b446a2 */
  goto L_10b446a2;
L_10b44676:;
  /* 10b44676 mov ecx, dword ptr [0x10b6e458] */
  ECX = (r32((uint32_t)(0x10b6e458)));
  /* 10b4467c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b44682 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44684 je 0x10b4468d */
  if (C.zf) goto L_10b4468d;
  /* 10b44686 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4468b jmp 0x10b446a2 */
  goto L_10b446a2;
L_10b4468d:;
  /* 10b4468d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44690 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44693 push edx */
  push32((uint32_t)(EDX));
  /* 10b44694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44696 mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b4469b push eax */
  push32((uint32_t)(EAX));
  /* 10b4469c call dword ptr [0x10b7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7031c))), 0x10b446a2u);
L_10b446a2:;
  /* 10b446a2 mov esp, ebp */
  ESP = (EBP);
  /* 10b446a4 pop ebp */
  EBP = (pop32());
  /* 10b446a5 ret  */
  ESPCHK(0x10b44620u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b0 @ 0x10b446b0 (227 bytes, 80 insns) */
void f_10b446b0(void) {
  FTRACE(0x10b446b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b446b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b446b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b446b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b446b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b446b7 push eax */
  push32((uint32_t)(EAX));
  /* 10b446b8 call 0x10b44620 */
  push32(0x10b446bdu); f_10b44620();
  /* 10b446bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b446c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b446c2 jne 0x10b446cb */
  if (!C.zf) goto L_10b446cb;
  /* 10b446c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b446c6 jmp 0x10b4478f */
  goto L_10b4478f;
L_10b446cb:;
  /* 10b446cb push 9 */
  push32((uint32_t)(0x9u));
  /* 10b446cd call 0x10b46a20 */
  push32(0x10b446d2u); f_10b46a20();
  /* 10b446d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b446d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b446d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b446db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b446de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b446e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b446e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b446e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b446ec je 0x10b44710 */
  if (C.zf) goto L_10b44710;
  /* 10b446ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b446f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b446f5 je 0x10b44710 */
  if (C.zf) goto L_10b44710;
  /* 10b446f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b446fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b446fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b44702 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44705 je 0x10b44710 */
  if (C.zf) goto L_10b44710;
  /* 10b44707 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4470a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4470e jne 0x10b44783 */
  if (!C.zf) goto L_10b44783;
L_10b44710:;
  /* 10b44710 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b44712 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b44715 push edx */
  push32((uint32_t)(EDX));
  /* 10b44716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44719 push eax */
  push32((uint32_t)(EAX));
  /* 10b4471a call 0x10b445d0 */
  push32(0x10b4471fu); f_10b445d0();
  /* 10b4471f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44724 je 0x10b44783 */
  if (C.zf) goto L_10b44783;
  /* 10b44726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44729 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b4472c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4472f jne 0x10b44783 */
  if (!C.zf) goto L_10b44783;
  /* 10b44731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44734 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b44737 cmp ecx, dword ptr [0x10b6ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4473d jg 0x10b44783 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b44783;
  /* 10b4473f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44743 je 0x10b44750 */
  if (C.zf) goto L_10b44750;
  /* 10b44745 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b44748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4474b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b4474e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b44750:;
  /* 10b44750 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44754 je 0x10b44761 */
  if (C.zf) goto L_10b44761;
  /* 10b44756 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b44759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4475c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4475f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b44761:;
  /* 10b44761 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44765 je 0x10b44772 */
  if (C.zf) goto L_10b44772;
  /* 10b44767 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4476a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4476d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b44770 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b44772:;
  /* 10b44772 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44774 call 0x10b46ac0 */
  push32(0x10b44779u); f_10b46ac0();
  /* 10b44779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4477c mov eax, 1 */
  EAX = (0x1u);
  /* 10b44781 jmp 0x10b4478f */
  goto L_10b4478f;
L_10b44783:;
  /* 10b44783 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44785 call 0x10b46ac0 */
  push32(0x10b4478au); f_10b46ac0();
  /* 10b4478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4478d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4478f:;
  /* 10b4478f mov esp, ebp */
  ESP = (EBP);
  /* 10b44791 pop ebp */
  EBP = (pop32());
  /* 10b44792 ret  */
  ESPCHK(0x10b446b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x10b447a0 (28 bytes, 11 insns) */
void f_10b447a0(void) {
  FTRACE(0x10b447a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b447a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b447a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b447a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b447a4 mov eax, dword ptr [0x10b6fe18] */
  EAX = (r32((uint32_t)(0x10b6fe18)));
  /* 10b447a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b447ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b447af mov dword ptr [0x10b6fe18], ecx */
  w32((uint32_t)(0x10b6fe18), (ECX));
  /* 10b447b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b447b8 mov esp, ebp */
  ESP = (EBP);
  /* 10b447ba pop ebp */
  EBP = (pop32());
  /* 10b447bb ret  */
  ESPCHK(0x10b447a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x10b447c0 (362 bytes, 116 insns) */
void f_10b447c0(void) {
  FTRACE(0x10b447c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b447c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b447c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b447c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b447c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b447c7 push esi */
  push32((uint32_t)(ESI));
  /* 10b447c8 push edi */
  push32((uint32_t)(EDI));
  /* 10b447c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b447cd jne 0x10b447fa */
  if (!C.zf) goto L_10b447fa;
L_10b447cf:;
  /* 10b447cf push 0x10b699b0 */
  push32((uint32_t)(0x10b699b0u));
  /* 10b447d4 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b447d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b447db push 0 */
  push32((uint32_t)(0x0u));
  /* 10b447dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b447df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b447e1 call 0x10b420e0 */
  push32(0x10b447e6u); f_10b420e0();
  /* 10b447e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b447e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b447ec jne 0x10b447ef */
  if (!C.zf) goto L_10b447ef;
  /* 10b447ee int3  */
  x86_unimpl("int3 @ 0x10b447ee");
L_10b447ef:;
  /* 10b447ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b447f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b447f3 jne 0x10b447cf */
  if (!C.zf) goto L_10b447cf;
  /* 10b447f5 jmp 0x10b44923 */
  goto L_10b44923;
L_10b447fa:;
  /* 10b447fa push 9 */
  push32((uint32_t)(0x9u));
  /* 10b447fc call 0x10b46a20 */
  push32(0x10b44801u); f_10b46a20();
  /* 10b44801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44807 mov edx, dword ptr [0x10b6e4a4] */
  EDX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b4480d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b4480f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b44816 jmp 0x10b44821 */
  goto L_10b44821;
L_10b44818:;
  /* 10b44818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4481b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4481e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b44821:;
  /* 10b44821 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44825 jge 0x10b44845 */
  if ((C.sf==C.of)) goto L_10b44845;
  /* 10b44827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4482a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4482d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10b44835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4483b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10b44843 jmp 0x10b44818 */
  goto L_10b44818;
L_10b44845:;
  /* 10b44845 mov edx, dword ptr [0x10b6e4a4] */
  EDX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b4484b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b4484e jmp 0x10b44858 */
  goto L_10b44858;
L_10b44850:;
  /* 10b44850 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44853 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b44855 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b44858:;
  /* 10b44858 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4485c je 0x10b44901 */
  if (C.zf) goto L_10b44901;
  /* 10b44862 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44865 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b44868 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4486d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4486f jl 0x10b448d7 */
  if ((C.sf!=C.of)) goto L_10b448d7;
  /* 10b44871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44874 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b44877 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4487d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44880 jge 0x10b448d7 */
  if ((C.sf==C.of)) goto L_10b448d7;
  /* 10b44882 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44885 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b44888 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4488e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44891 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10b44895 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44898 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4489b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b4489e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b448a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b448a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10b448ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b448ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b448b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b448b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b448b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10b448bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b448c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b448c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b448c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b448c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b448ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b448d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10b448d5 jmp 0x10b448fc */
  goto L_10b448fc;
L_10b448d7:;
  /* 10b448d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b448da push edx */
  push32((uint32_t)(EDX));
  /* 10b448db push 0x10b6998c */
  push32((uint32_t)(0x10b6998cu));
  /* 10b448e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b448e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b448e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b448e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b448e8 call 0x10b420e0 */
  push32(0x10b448edu); f_10b420e0();
  /* 10b448ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b448f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b448f3 jne 0x10b448f6 */
  if (!C.zf) goto L_10b448f6;
  /* 10b448f5 int3  */
  x86_unimpl("int3 @ 0x10b448f5");
L_10b448f6:;
  /* 10b448f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b448f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b448fa jne 0x10b448d7 */
  if (!C.zf) goto L_10b448d7;
L_10b448fc:;
  /* 10b448fc jmp 0x10b44850 */
  goto L_10b44850;
L_10b44901:;
  /* 10b44901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44904 mov edx, dword ptr [0x10b6e4ac] */
  EDX = (r32((uint32_t)(0x10b6e4ac)));
  /* 10b4490a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10b4490d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44910 mov ecx, dword ptr [0x10b6e4a0] */
  ECX = (r32((uint32_t)(0x10b6e4a0)));
  /* 10b44916 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10b44919 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4491b call 0x10b46ac0 */
  push32(0x10b44920u); f_10b46ac0();
  /* 10b44920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b44923:;
  /* 10b44923 pop edi */
  EDI = (pop32());
  /* 10b44924 pop esi */
  ESI = (pop32());
  /* 10b44925 pop ebx */
  EBX = (pop32());
  /* 10b44926 mov esp, ebp */
  ESP = (EBP);
  /* 10b44928 pop ebp */
  EBP = (pop32());
  /* 10b44929 ret  */
  ESPCHK(0x10b447c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004930 @ 0x10b44930 (291 bytes, 95 insns) */
void f_10b44930(void) {
  FTRACE(0x10b44930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44930 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44931 mov ebp, esp */
  EBP = (ESP);
  /* 10b44933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44936 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44937 push esi */
  push32((uint32_t)(ESI));
  /* 10b44938 push edi */
  push32((uint32_t)(EDI));
  /* 10b44939 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b44940 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44944 je 0x10b44952 */
  if (C.zf) goto L_10b44952;
  /* 10b44946 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4494a je 0x10b44952 */
  if (C.zf) goto L_10b44952;
  /* 10b4494c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44950 jne 0x10b44980 */
  if (!C.zf) goto L_10b44980;
L_10b44952:;
  /* 10b44952 push 0x10b699d8 */
  push32((uint32_t)(0x10b699d8u));
  /* 10b44957 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b4495c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4495e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44962 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44964 call 0x10b420e0 */
  push32(0x10b44969u); f_10b420e0();
  /* 10b44969 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4496c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4496f jne 0x10b44972 */
  if (!C.zf) goto L_10b44972;
  /* 10b44971 int3  */
  x86_unimpl("int3 @ 0x10b44971");
L_10b44972:;
  /* 10b44972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44976 jne 0x10b44952 */
  if (!C.zf) goto L_10b44952;
  /* 10b44978 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4497b jmp 0x10b44a4c */
  goto L_10b44a4c;
L_10b44980:;
  /* 10b44980 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b44987 jmp 0x10b44992 */
  goto L_10b44992;
L_10b44989:;
  /* 10b44989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4498c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4498f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b44992:;
  /* 10b44992 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44996 jge 0x10b44a1c */
  if ((C.sf==C.of)) goto L_10b44a1c;
  /* 10b4499c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4499f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b449a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b449a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10b449ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b449b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b449b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10b449ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b449c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b449c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10b449ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b449ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b449d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10b449d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b449de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b449e3 jne 0x10b449f2 */
  if (!C.zf) goto L_10b449f2;
  /* 10b449e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b449e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b449eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b449f0 je 0x10b44a17 */
  if (C.zf) goto L_10b44a17;
L_10b449f2:;
  /* 10b449f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b449f6 je 0x10b44a17 */
  if (C.zf) goto L_10b44a17;
  /* 10b449f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b449fc jne 0x10b44a10 */
  if (!C.zf) goto L_10b44a10;
  /* 10b449fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44a02 jne 0x10b44a17 */
  if (!C.zf) goto L_10b44a17;
  /* 10b44a04 mov eax, dword ptr [0x10b6ca84] */
  EAX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b44a09 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10b44a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44a0e je 0x10b44a17 */
  if (C.zf) goto L_10b44a17;
L_10b44a10:;
  /* 10b44a10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10b44a17:;
  /* 10b44a17 jmp 0x10b44989 */
  goto L_10b44989;
L_10b44a1c:;
  /* 10b44a1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b44a1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b44a22 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10b44a25 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44a2b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10b44a2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b44a31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b44a34 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10b44a37 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44a3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44a3d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10b44a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44a43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b44a49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b44a4c:;
  /* 10b44a4c pop edi */
  EDI = (pop32());
  /* 10b44a4d pop esi */
  ESI = (pop32());
  /* 10b44a4e pop ebx */
  EBX = (pop32());
  /* 10b44a4f mov esp, ebp */
  ESP = (EBP);
  /* 10b44a51 pop ebp */
  EBP = (pop32());
  /* 10b44a52 ret  */
  ESPCHK(0x10b44930u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x10b44a60 (697 bytes, 253 insns) */
void f_10b44a60(void) {
  FTRACE(0x10b44a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44a61 mov ebp, esp */
  EBP = (ESP);
  /* 10b44a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44a66 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44a67 push esi */
  push32((uint32_t)(ESI));
  /* 10b44a68 push edi */
  push32((uint32_t)(EDI));
  /* 10b44a69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b44a70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44a72 call 0x10b46a20 */
  push32(0x10b44a77u); f_10b46a20();
  /* 10b44a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b44a7a:;
  /* 10b44a7a push 0x10b69ad0 */
  push32((uint32_t)(0x10b69ad0u));
  /* 10b44a7f push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b44a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44a8c call 0x10b420e0 */
  push32(0x10b44a91u); f_10b420e0();
  /* 10b44a91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44a94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44a97 jne 0x10b44a9a */
  if (!C.zf) goto L_10b44a9a;
  /* 10b44a99 int3  */
  x86_unimpl("int3 @ 0x10b44a99");
L_10b44a9a:;
  /* 10b44a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44a9e jne 0x10b44a7a */
  if (!C.zf) goto L_10b44a7a;
  /* 10b44aa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44aa4 je 0x10b44aae */
  if (C.zf) goto L_10b44aae;
  /* 10b44aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44aa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b44aab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b44aae:;
  /* 10b44aae mov eax, dword ptr [0x10b6e4a4] */
  EAX = (r32((uint32_t)(0x10b6e4a4)));
  /* 10b44ab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b44ab6 jmp 0x10b44ac0 */
  goto L_10b44ac0;
L_10b44ab8:;
  /* 10b44ab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44abb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b44abd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b44ac0:;
  /* 10b44ac0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44ac4 je 0x10b44ce2 */
  if (C.zf) goto L_10b44ce2;
  /* 10b44aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44acd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44ad0 je 0x10b44ce2 */
  if (C.zf) goto L_10b44ce2;
  /* 10b44ad6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44ad9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b44adc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b44ae2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44ae5 je 0x10b44b14 */
  if (C.zf) goto L_10b44b14;
  /* 10b44ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44aea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b44aed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b44af3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44af5 je 0x10b44b14 */
  if (C.zf) goto L_10b44b14;
  /* 10b44af7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44afa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b44afd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b44b02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44b05 jne 0x10b44b19 */
  if (!C.zf) goto L_10b44b19;
  /* 10b44b07 mov ecx, dword ptr [0x10b6ca84] */
  ECX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b44b0d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10b44b10 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44b12 jne 0x10b44b19 */
  if (!C.zf) goto L_10b44b19;
L_10b44b14:;
  /* 10b44b14 jmp 0x10b44cdd */
  goto L_10b44cdd;
L_10b44b19:;
  /* 10b44b19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44b1c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44b20 je 0x10b44b92 */
  if (C.zf) goto L_10b44b92;
  /* 10b44b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b44b26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44b29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b44b2c push ecx */
  push32((uint32_t)(ECX));
  /* 10b44b2d call 0x10b445d0 */
  push32(0x10b44b32u); f_10b445d0();
  /* 10b44b32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44b35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44b37 jne 0x10b44b63 */
  if (!C.zf) goto L_10b44b63;
L_10b44b39:;
  /* 10b44b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44b3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b44b3f push eax */
  push32((uint32_t)(EAX));
  /* 10b44b40 push 0x10b69abc */
  push32((uint32_t)(0x10b69abcu));
  /* 10b44b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b4d call 0x10b420e0 */
  push32(0x10b44b52u); f_10b420e0();
  /* 10b44b52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44b55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44b58 jne 0x10b44b5b */
  if (!C.zf) goto L_10b44b5b;
  /* 10b44b5a int3  */
  x86_unimpl("int3 @ 0x10b44b5a");
L_10b44b5b:;
  /* 10b44b5b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b44b5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44b5f jne 0x10b44b39 */
  if (!C.zf) goto L_10b44b39;
  /* 10b44b61 jmp 0x10b44b92 */
  goto L_10b44b92;
L_10b44b63:;
  /* 10b44b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44b66 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b44b69 push eax */
  push32((uint32_t)(EAX));
  /* 10b44b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44b6d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b44b70 push edx */
  push32((uint32_t)(EDX));
  /* 10b44b71 push 0x10b69ab0 */
  push32((uint32_t)(0x10b69ab0u));
  /* 10b44b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44b7e call 0x10b420e0 */
  push32(0x10b44b83u); f_10b420e0();
  /* 10b44b83 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44b86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44b89 jne 0x10b44b8c */
  if (!C.zf) goto L_10b44b8c;
  /* 10b44b8b int3  */
  x86_unimpl("int3 @ 0x10b44b8b");
L_10b44b8c:;
  /* 10b44b8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44b90 jne 0x10b44b63 */
  if (!C.zf) goto L_10b44b63;
L_10b44b92:;
  /* 10b44b92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44b95 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b44b98 push edx */
  push32((uint32_t)(EDX));
  /* 10b44b99 push 0x10b69aa8 */
  push32((uint32_t)(0x10b69aa8u));
  /* 10b44b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44ba6 call 0x10b420e0 */
  push32(0x10b44babu); f_10b420e0();
  /* 10b44bab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44bae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44bb1 jne 0x10b44bb4 */
  if (!C.zf) goto L_10b44bb4;
  /* 10b44bb3 int3  */
  x86_unimpl("int3 @ 0x10b44bb3");
L_10b44bb4:;
  /* 10b44bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44bb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44bb8 jne 0x10b44b92 */
  if (!C.zf) goto L_10b44b92;
  /* 10b44bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44bbd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b44bc0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b44bc6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44bc9 jne 0x10b44c3c */
  if (!C.zf) goto L_10b44c3c;
L_10b44bcb:;
  /* 10b44bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44bce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b44bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44bd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b44bd8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b44bdb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b44be0 push eax */
  push32((uint32_t)(EAX));
  /* 10b44be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44be4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44be7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44be8 push 0x10b69a74 */
  push32((uint32_t)(0x10b69a74u));
  /* 10b44bed push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44bef push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44bf5 call 0x10b420e0 */
  push32(0x10b44bfau); f_10b420e0();
  /* 10b44bfa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44bfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44c00 jne 0x10b44c03 */
  if (!C.zf) goto L_10b44c03;
  /* 10b44c02 int3  */
  x86_unimpl("int3 @ 0x10b44c02");
L_10b44c03:;
  /* 10b44c03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b44c05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44c07 jne 0x10b44bcb */
  if (!C.zf) goto L_10b44bcb;
  /* 10b44c09 cmp dword ptr [0x10b6fe18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fe18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44c10 je 0x10b44c2b */
  if (C.zf) goto L_10b44c2b;
  /* 10b44c12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b44c18 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44c19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44c1f push edx */
  push32((uint32_t)(EDX));
  /* 10b44c20 call dword ptr [0x10b6fe18] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6fe18))), 0x10b44c26u);
  /* 10b44c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44c29 jmp 0x10b44c37 */
  goto L_10b44c37;
L_10b44c2b:;
  /* 10b44c2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c2e push eax */
  push32((uint32_t)(EAX));
  /* 10b44c2f call 0x10b44d20 */
  push32(0x10b44c34u); f_10b44d20();
  /* 10b44c34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b44c37:;
  /* 10b44c37 jmp 0x10b44cdd */
  goto L_10b44cdd;
L_10b44c3c:;
  /* 10b44c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44c43 jne 0x10b44c82 */
  if (!C.zf) goto L_10b44c82;
L_10b44c45:;
  /* 10b44c45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b44c4b push eax */
  push32((uint32_t)(EAX));
  /* 10b44c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44c52 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44c53 push 0x10b69a4c */
  push32((uint32_t)(0x10b69a4cu));
  /* 10b44c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44c60 call 0x10b420e0 */
  push32(0x10b44c65u); f_10b420e0();
  /* 10b44c65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44c68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44c6b jne 0x10b44c6e */
  if (!C.zf) goto L_10b44c6e;
  /* 10b44c6d int3  */
  x86_unimpl("int3 @ 0x10b44c6d");
L_10b44c6e:;
  /* 10b44c6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b44c70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44c72 jne 0x10b44c45 */
  if (!C.zf) goto L_10b44c45;
  /* 10b44c74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c77 push eax */
  push32((uint32_t)(EAX));
  /* 10b44c78 call 0x10b44d20 */
  push32(0x10b44c7du); f_10b44d20();
  /* 10b44c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44c80 jmp 0x10b44cdd */
  goto L_10b44cdd;
L_10b44c82:;
  /* 10b44c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b44c88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b44c8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44c91 jne 0x10b44cdd */
  if (!C.zf) goto L_10b44cdd;
L_10b44c93:;
  /* 10b44c93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b44c99 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44c9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44c9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b44ca0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b44ca3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b44ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10b44ca9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44cac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44caf push ecx */
  push32((uint32_t)(ECX));
  /* 10b44cb0 push 0x10b69a18 */
  push32((uint32_t)(0x10b69a18u));
  /* 10b44cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cbd call 0x10b420e0 */
  push32(0x10b44cc2u); f_10b420e0();
  /* 10b44cc2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44cc5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44cc8 jne 0x10b44ccb */
  if (!C.zf) goto L_10b44ccb;
  /* 10b44cca int3  */
  x86_unimpl("int3 @ 0x10b44cca");
L_10b44ccb:;
  /* 10b44ccb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b44ccd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44ccf jne 0x10b44c93 */
  if (!C.zf) goto L_10b44c93;
  /* 10b44cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44cd4 push eax */
  push32((uint32_t)(EAX));
  /* 10b44cd5 call 0x10b44d20 */
  push32(0x10b44cdau); f_10b44d20();
  /* 10b44cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b44cdd:;
  /* 10b44cdd jmp 0x10b44ab8 */
  goto L_10b44ab8;
L_10b44ce2:;
  /* 10b44ce2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b44ce4 call 0x10b46ac0 */
  push32(0x10b44ce9u); f_10b46ac0();
  /* 10b44ce9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b44cec:;
  /* 10b44cec push 0x10b69a00 */
  push32((uint32_t)(0x10b69a00u));
  /* 10b44cf1 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b44cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44cfe call 0x10b420e0 */
  push32(0x10b44d03u); f_10b420e0();
  /* 10b44d03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44d06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44d09 jne 0x10b44d0c */
  if (!C.zf) goto L_10b44d0c;
  /* 10b44d0b int3  */
  x86_unimpl("int3 @ 0x10b44d0b");
L_10b44d0c:;
  /* 10b44d0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b44d0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44d10 jne 0x10b44cec */
  if (!C.zf) goto L_10b44cec;
  /* 10b44d12 pop edi */
  EDI = (pop32());
  /* 10b44d13 pop esi */
  ESI = (pop32());
  /* 10b44d14 pop ebx */
  EBX = (pop32());
  /* 10b44d15 mov esp, ebp */
  ESP = (EBP);
  /* 10b44d17 pop ebp */
  EBP = (pop32());
  /* 10b44d18 ret  */
  ESPCHK(0x10b44a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x10b44d20 (276 bytes, 89 insns) */
void f_10b44d20(void) {
  FTRACE(0x10b44d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44d21 mov ebp, esp */
  EBP = (ESP);
  /* 10b44d23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44d26 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44d27 push esi */
  push32((uint32_t)(ESI));
  /* 10b44d28 push edi */
  push32((uint32_t)(EDI));
  /* 10b44d29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10b44d30 jmp 0x10b44d3b */
  goto L_10b44d3b;
L_10b44d32:;
  /* 10b44d32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b44d35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44d38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10b44d3b:;
  /* 10b44d3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44d3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44d42 jge 0x10b44d4f */
  if ((C.sf==C.of)) goto L_10b44d4f;
  /* 10b44d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44d47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b44d4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10b44d4d jmp 0x10b44d56 */
  goto L_10b44d56;
L_10b44d4f:;
  /* 10b44d4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10b44d56:;
  /* 10b44d56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b44d59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44d5c jge 0x10b44dfc */
  if ((C.sf==C.of)) goto L_10b44dfc;
  /* 10b44d62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44d65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44d68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10b44d6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10b44d6e cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44d75 jle 0x10b44d93 */
  if ((C.zf||C.sf!=C.of)) goto L_10b44d93;
  /* 10b44d77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10b44d7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b44d7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b44d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44d86 call 0x10b49030 */
  push32(0x10b44d8bu); f_10b49030();
  /* 10b44d8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44d8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10b44d91 jmp 0x10b44db0 */
  goto L_10b44db0;
L_10b44d93:;
  /* 10b44d93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b44d96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b44d9c mov eax, dword ptr [0x10b6cc98] */
  EAX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b44da1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b44da3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b44da7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10b44dad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10b44db0:;
  /* 10b44db0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44db4 je 0x10b44dc4 */
  if (C.zf) goto L_10b44dc4;
  /* 10b44db6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b44db9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b44dbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10b44dc2 jmp 0x10b44dcb */
  goto L_10b44dcb;
L_10b44dc4:;
  /* 10b44dc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10b44dcb:;
  /* 10b44dcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b44dce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10b44dd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10b44dd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b44dd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b44dde push edx */
  push32((uint32_t)(EDX));
  /* 10b44ddf push 0x10b69af4 */
  push32((uint32_t)(0x10b69af4u));
  /* 10b44de4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b44de7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b44dea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10b44dee push ecx */
  push32((uint32_t)(ECX));
  /* 10b44def call 0x10b48f30 */
  push32(0x10b44df4u); f_10b48f30();
  /* 10b44df4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44df7 jmp 0x10b44d32 */
  goto L_10b44d32;
L_10b44dfc:;
  /* 10b44dfc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b44dff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10b44e04:;
  /* 10b44e04 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10b44e07 push eax */
  push32((uint32_t)(EAX));
  /* 10b44e08 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10b44e0b push ecx */
  push32((uint32_t)(ECX));
  /* 10b44e0c push 0x10b69ae4 */
  push32((uint32_t)(0x10b69ae4u));
  /* 10b44e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e19 call 0x10b420e0 */
  push32(0x10b44e1eu); f_10b420e0();
  /* 10b44e1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44e21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44e24 jne 0x10b44e27 */
  if (!C.zf) goto L_10b44e27;
  /* 10b44e26 int3  */
  x86_unimpl("int3 @ 0x10b44e26");
L_10b44e27:;
  /* 10b44e27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b44e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44e2b jne 0x10b44e04 */
  if (!C.zf) goto L_10b44e04;
  /* 10b44e2d pop edi */
  EDI = (pop32());
  /* 10b44e2e pop esi */
  ESI = (pop32());
  /* 10b44e2f pop ebx */
  EBX = (pop32());
  /* 10b44e30 mov esp, ebp */
  ESP = (EBP);
  /* 10b44e32 pop ebp */
  EBP = (pop32());
  /* 10b44e33 ret  */
  ESPCHK(0x10b44d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x10b44e40 (116 bytes, 46 insns) */
void f_10b44e40(void) {
  FTRACE(0x10b44e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44e41 mov ebp, esp */
  EBP = (ESP);
  /* 10b44e43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44e46 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44e47 push esi */
  push32((uint32_t)(ESI));
  /* 10b44e48 push edi */
  push32((uint32_t)(EDI));
  /* 10b44e49 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10b44e4c push eax */
  push32((uint32_t)(EAX));
  /* 10b44e4d call 0x10b447c0 */
  push32(0x10b44e52u); f_10b447c0();
  /* 10b44e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44e55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44e59 jne 0x10b44e74 */
  if (!C.zf) goto L_10b44e74;
  /* 10b44e5b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44e5f jne 0x10b44e74 */
  if (!C.zf) goto L_10b44e74;
  /* 10b44e61 mov ecx, dword ptr [0x10b6ca84] */
  ECX = (r32((uint32_t)(0x10b6ca84)));
  /* 10b44e67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10b44e6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b44e6c je 0x10b44eab */
  if (C.zf) goto L_10b44eab;
  /* 10b44e6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44e72 je 0x10b44eab */
  if (C.zf) goto L_10b44eab;
L_10b44e74:;
  /* 10b44e74 push 0x10b69afc */
  push32((uint32_t)(0x10b69afcu));
  /* 10b44e79 push 0x10b694c8 */
  push32((uint32_t)(0x10b694c8u));
  /* 10b44e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e86 call 0x10b420e0 */
  push32(0x10b44e8bu); f_10b420e0();
  /* 10b44e8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44e8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44e91 jne 0x10b44e94 */
  if (!C.zf) goto L_10b44e94;
  /* 10b44e93 int3  */
  x86_unimpl("int3 @ 0x10b44e93");
L_10b44e94:;
  /* 10b44e94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b44e96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44e98 jne 0x10b44e74 */
  if (!C.zf) goto L_10b44e74;
  /* 10b44e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44e9c call 0x10b44a60 */
  push32(0x10b44ea1u); f_10b44a60();
  /* 10b44ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44ea4 mov eax, 1 */
  EAX = (0x1u);
  /* 10b44ea9 jmp 0x10b44ead */
  goto L_10b44ead;
L_10b44eab:;
  /* 10b44eab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b44ead:;
  /* 10b44ead pop edi */
  EDI = (pop32());
  /* 10b44eae pop esi */
  ESI = (pop32());
  /* 10b44eaf pop ebx */
  EBX = (pop32());
  /* 10b44eb0 mov esp, ebp */
  ESP = (EBP);
  /* 10b44eb2 pop ebp */
  EBP = (pop32());
  /* 10b44eb3 ret  */
  ESPCHK(0x10b44e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ec0 @ 0x10b44ec0 (197 bytes, 79 insns) */
void f_10b44ec0(void) {
  FTRACE(0x10b44ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10b44ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b44ec4 push ebx */
  push32((uint32_t)(EBX));
  /* 10b44ec5 push esi */
  push32((uint32_t)(ESI));
  /* 10b44ec6 push edi */
  push32((uint32_t)(EDI));
  /* 10b44ec7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44ecb jne 0x10b44ed2 */
  if (!C.zf) goto L_10b44ed2;
  /* 10b44ecd jmp 0x10b44f7e */
  goto L_10b44f7e;
L_10b44ed2:;
  /* 10b44ed2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b44ed9 jmp 0x10b44ee4 */
  goto L_10b44ee4;
L_10b44edb:;
  /* 10b44edb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44ede add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44ee1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b44ee4:;
  /* 10b44ee4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44ee8 jge 0x10b44f2e */
  if ((C.sf==C.of)) goto L_10b44f2e;
L_10b44eea:;
  /* 10b44eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44eed mov edx, dword ptr [ecx*4 + 0x10b6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6ca94)));
  /* 10b44ef4 push edx */
  push32((uint32_t)(EDX));
  /* 10b44ef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44ef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44efb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10b44eff push edx */
  push32((uint32_t)(EDX));
  /* 10b44f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44f06 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10b44f0a push edx */
  push32((uint32_t)(EDX));
  /* 10b44f0b push 0x10b69b58 */
  push32((uint32_t)(0x10b69b58u));
  /* 10b44f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f18 call 0x10b420e0 */
  push32(0x10b44f1du); f_10b420e0();
  /* 10b44f1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44f20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44f23 jne 0x10b44f26 */
  if (!C.zf) goto L_10b44f26;
  /* 10b44f25 int3  */
  x86_unimpl("int3 @ 0x10b44f25");
L_10b44f26:;
  /* 10b44f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44f2a jne 0x10b44eea */
  if (!C.zf) goto L_10b44eea;
  /* 10b44f2c jmp 0x10b44edb */
  goto L_10b44edb;
L_10b44f2e:;
  /* 10b44f2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44f31 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10b44f34 push edx */
  push32((uint32_t)(EDX));
  /* 10b44f35 push 0x10b69b34 */
  push32((uint32_t)(0x10b69b34u));
  /* 10b44f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f42 call 0x10b420e0 */
  push32(0x10b44f47u); f_10b420e0();
  /* 10b44f47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44f4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44f4d jne 0x10b44f50 */
  if (!C.zf) goto L_10b44f50;
  /* 10b44f4f int3  */
  x86_unimpl("int3 @ 0x10b44f4f");
L_10b44f50:;
  /* 10b44f50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44f54 jne 0x10b44f2e */
  if (!C.zf) goto L_10b44f2e;
L_10b44f56:;
  /* 10b44f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b44f59 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10b44f5c push edx */
  push32((uint32_t)(EDX));
  /* 10b44f5d push 0x10b69b14 */
  push32((uint32_t)(0x10b69b14u));
  /* 10b44f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b44f6a call 0x10b420e0 */
  push32(0x10b44f6fu); f_10b420e0();
  /* 10b44f6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44f72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44f75 jne 0x10b44f78 */
  if (!C.zf) goto L_10b44f78;
  /* 10b44f77 int3  */
  x86_unimpl("int3 @ 0x10b44f77");
L_10b44f78:;
  /* 10b44f78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b44f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b44f7c jne 0x10b44f56 */
  if (!C.zf) goto L_10b44f56;
L_10b44f7e:;
  /* 10b44f7e pop edi */
  EDI = (pop32());
  /* 10b44f7f pop esi */
  ESI = (pop32());
  /* 10b44f80 pop ebx */
  EBX = (pop32());
  /* 10b44f81 mov esp, ebp */
  ESP = (EBP);
  /* 10b44f83 pop ebp */
  EBP = (pop32());
  /* 10b44f84 ret  */
  ESPCHK(0x10b44ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x10b44f90 (329 bytes, 102 insns) */
void f_10b44f90(void) {
  FTRACE(0x10b44f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b44f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b44f91 mov ebp, esp */
  EBP = (ESP);
  /* 10b44f93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b44f96 cmp dword ptr [0x10b6ff90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ff90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44f9d jne 0x10b44fa4 */
  if (!C.zf) goto L_10b44fa4;
  /* 10b44f9f call 0x10b498d0 */
  push32(0x10b44fa4u); f_10b498d0();
L_10b44fa4:;
  /* 10b44fa4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b44fab mov eax, dword ptr [0x10b6e440] */
  EAX = (r32((uint32_t)(0x10b6e440)));
  /* 10b44fb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b44fb3:;
  /* 10b44fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44fb6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b44fb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b44fbb je 0x10b44fe9 */
  if (C.zf) goto L_10b44fe9;
  /* 10b44fbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44fc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b44fc3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b44fc6 je 0x10b44fd1 */
  if (C.zf) goto L_10b44fd1;
  /* 10b44fc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44fcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44fce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b44fd1:;
  /* 10b44fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44fd4 push eax */
  push32((uint32_t)(EAX));
  /* 10b44fd5 call 0x10b45e50 */
  push32(0x10b44fdau); f_10b45e50();
  /* 10b44fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b44fdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b44fe0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b44fe4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b44fe7 jmp 0x10b44fb3 */
  goto L_10b44fb3;
L_10b44fe9:;
  /* 10b44fe9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10b44feb push 0x10b69b78 */
  push32((uint32_t)(0x10b69b78u));
  /* 10b44ff0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b44ff2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b44ff5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10b44ffc push ecx */
  push32((uint32_t)(ECX));
  /* 10b44ffd call 0x10b43020 */
  push32(0x10b45002u); f_10b43020();
  /* 10b45002 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45005 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b45008 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4500b mov dword ptr [0x10b6e474], edx */
  w32((uint32_t)(0x10b6e474), (EDX));
  /* 10b45011 cmp dword ptr [0x10b6e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45018 jne 0x10b45024 */
  if (!C.zf) goto L_10b45024;
  /* 10b4501a push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4501c call 0x10b41f90 */
  push32(0x10b45021u); f_10b41f90();
  /* 10b45021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b45024:;
  /* 10b45024 mov eax, dword ptr [0x10b6e440] */
  EAX = (r32((uint32_t)(0x10b6e440)));
  /* 10b45029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4502c jmp 0x10b45037 */
  goto L_10b45037;
L_10b4502e:;
  /* 10b4502e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45031 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45034 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b45037:;
  /* 10b45037 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4503a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4503d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4503f je 0x10b450a7 */
  if (C.zf) goto L_10b450a7;
  /* 10b45041 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45044 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45045 call 0x10b45e50 */
  push32(0x10b4504au); f_10b45e50();
  /* 10b4504a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4504d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45050 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b45053 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45056 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b45059 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4505c je 0x10b450a5 */
  if (C.zf) goto L_10b450a5;
  /* 10b4505e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10b45060 push 0x10b69b78 */
  push32((uint32_t)(0x10b69b78u));
  /* 10b45065 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b45067 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4506a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4506b call 0x10b43020 */
  push32(0x10b45070u); f_10b43020();
  /* 10b45070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45073 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45076 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b45078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4507b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4507e jne 0x10b4508a */
  if (!C.zf) goto L_10b4508a;
  /* 10b45080 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b45082 call 0x10b41f90 */
  push32(0x10b45087u); f_10b41f90();
  /* 10b45087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4508a:;
  /* 10b4508a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4508d push ecx */
  push32((uint32_t)(ECX));
  /* 10b4508e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45091 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b45093 push eax */
  push32((uint32_t)(EAX));
  /* 10b45094 call 0x10b45fd0 */
  push32(0x10b45099u); f_10b45fd0();
  /* 10b45099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4509c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4509f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b450a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b450a5:;
  /* 10b450a5 jmp 0x10b4502e */
  goto L_10b4502e;
L_10b450a7:;
  /* 10b450a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b450a9 mov edx, dword ptr [0x10b6e440] */
  EDX = (r32((uint32_t)(0x10b6e440)));
  /* 10b450af push edx */
  push32((uint32_t)(EDX));
  /* 10b450b0 call 0x10b43ab0 */
  push32(0x10b450b5u); f_10b43ab0();
  /* 10b450b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b450b8 mov dword ptr [0x10b6e440], 0 */
  w32((uint32_t)(0x10b6e440), (0x0u));
  /* 10b450c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b450c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b450cb mov dword ptr [0x10b6ff80], 1 */
  w32((uint32_t)(0x10b6ff80), (0x1u));
  /* 10b450d5 mov esp, ebp */
  ESP = (EBP);
  /* 10b450d7 pop ebp */
  EBP = (pop32());
  /* 10b450d8 ret  */
  ESPCHK(0x10b44f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100050e0 @ 0x10b450e0 (216 bytes, 69 insns) */
void f_10b450e0(void) {
  FTRACE(0x10b450e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b450e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b450e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b450e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b450e6 cmp dword ptr [0x10b6ff90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ff90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b450ed jne 0x10b450f4 */
  if (!C.zf) goto L_10b450f4;
  /* 10b450ef call 0x10b498d0 */
  push32(0x10b450f4u); f_10b498d0();
L_10b450f4:;
  /* 10b450f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b450f9 push 0x10b6e4b0 */
  push32((uint32_t)(0x10b6e4b0u));
  /* 10b450fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45100 call dword ptr [0x10b702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d4))), 0x10b45106u);
  /* 10b45106 mov dword ptr [0x10b6e484], 0x10b6e4b0 */
  w32((uint32_t)(0x10b6e484), (0x10b6e4b0u));
  /* 10b45110 mov eax, dword ptr [0x10b6ffac] */
  EAX = (r32((uint32_t)(0x10b6ffac)));
  /* 10b45115 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b45118 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4511a jne 0x10b45127 */
  if (!C.zf) goto L_10b45127;
  /* 10b4511c mov edx, dword ptr [0x10b6e484] */
  EDX = (r32((uint32_t)(0x10b6e484)));
  /* 10b45122 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b45125 jmp 0x10b4512f */
  goto L_10b4512f;
L_10b45127:;
  /* 10b45127 mov eax, dword ptr [0x10b6ffac] */
  EAX = (r32((uint32_t)(0x10b6ffac)));
  /* 10b4512c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10b4512f:;
  /* 10b4512f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b45132 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b45135 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10b45138 push edx */
  push32((uint32_t)(EDX));
  /* 10b45139 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10b4513c push eax */
  push32((uint32_t)(EAX));
  /* 10b4513d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4513f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45141 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b45144 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45145 call 0x10b451c0 */
  push32(0x10b4514au); f_10b451c0();
  /* 10b4514a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4514d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10b45152 push 0x10b69b84 */
  push32((uint32_t)(0x10b69b84u));
  /* 10b45157 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b45159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4515c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4515f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10b45162 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45163 call 0x10b43020 */
  push32(0x10b45168u); f_10b43020();
  /* 10b45168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4516b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4516e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45172 jne 0x10b4517e */
  if (!C.zf) goto L_10b4517e;
  /* 10b45174 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b45176 call 0x10b41f90 */
  push32(0x10b4517bu); f_10b41f90();
  /* 10b4517b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4517e:;
  /* 10b4517e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10b45181 push edx */
  push32((uint32_t)(EDX));
  /* 10b45182 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10b45185 push eax */
  push32((uint32_t)(EAX));
  /* 10b45186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45189 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4518c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10b4518f push eax */
  push32((uint32_t)(EAX));
  /* 10b45190 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45193 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45194 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b45197 push edx */
  push32((uint32_t)(EDX));
  /* 10b45198 call 0x10b451c0 */
  push32(0x10b4519du); f_10b451c0();
  /* 10b4519d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b451a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b451a3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b451a6 mov dword ptr [0x10b6e468], eax */
  w32((uint32_t)(0x10b6e468), (EAX));
  /* 10b451ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b451ae mov dword ptr [0x10b6e46c], ecx */
  w32((uint32_t)(0x10b6e46c), (ECX));
  /* 10b451b4 mov esp, ebp */
  ESP = (EBP);
  /* 10b451b6 pop ebp */
  EBP = (pop32());
  /* 10b451b7 ret  */
  ESPCHK(0x10b450e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051c0 @ 0x10b451c0 (1060 bytes, 360 insns) */
void f_10b451c0(void) {
  FTRACE(0x10b451c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b451c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b451c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b451c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b451c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b451c9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b451cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b451d2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10b451d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b451db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b451de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b451e2 je 0x10b451f5 */
  if (C.zf) goto L_10b451f5;
  /* 10b451e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b451e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b451ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b451ec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b451ef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b451f2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10b451f5:;
  /* 10b451f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b451f8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b451fb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b451fe jne 0x10b452cd */
  if (!C.zf) goto L_10b452cd;
L_10b45204:;
  /* 10b45204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45207 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4520a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4520d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45210 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b45213 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45216 je 0x10b45292 */
  if (C.zf) goto L_10b45292;
  /* 10b45218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4521b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4521e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45220 je 0x10b45292 */
  if (C.zf) goto L_10b45292;
  /* 10b45222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45225 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45227 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4522b mov al, byte ptr [edx + 0x10b6fce1] */
  AL = (r8((uint32_t)(EDX + 0x10b6fce1)));
  /* 10b45231 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b45234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45236 je 0x10b45267 */
  if (C.zf) goto L_10b45267;
  /* 10b45238 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4523b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4523d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45240 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45243 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b45245 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45249 je 0x10b45267 */
  if (C.zf) goto L_10b45267;
  /* 10b4524b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4524e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45251 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b45253 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b45255 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45258 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4525b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b4525e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45261 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45264 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b45267:;
  /* 10b45267 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4526a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4526c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4526f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45272 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b45274 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45278 je 0x10b4528d */
  if (C.zf) goto L_10b4528d;
  /* 10b4527a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4527d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45280 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45282 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45284 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45287 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4528a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b4528d:;
  /* 10b4528d jmp 0x10b45204 */
  goto L_10b45204;
L_10b45292:;
  /* 10b45292 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45295 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b45297 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4529a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4529d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b4529f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b452a3 je 0x10b452b4 */
  if (C.zf) goto L_10b452b4;
  /* 10b452a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b452a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b452ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b452ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b452b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10b452b4:;
  /* 10b452b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b452b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b452ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b452bd jne 0x10b452c8 */
  if (!C.zf) goto L_10b452c8;
  /* 10b452bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b452c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b452c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b452c8:;
  /* 10b452c8 jmp 0x10b4539c */
  goto L_10b4539c;
L_10b452cd:;
  /* 10b452cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b452d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b452d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b452d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b452d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b452da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b452de je 0x10b452f3 */
  if (C.zf) goto L_10b452f3;
  /* 10b452e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b452e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b452e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b452e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b452ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b452ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b452f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b452f3:;
  /* 10b452f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b452f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b452f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10b452fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b452fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45301 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b45304 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45307 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4530d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4530f mov dl, byte ptr [ecx + 0x10b6fce1] */
  DL = (r8((uint32_t)(ECX + 0x10b6fce1)));
  /* 10b45315 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b45318 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4531a je 0x10b4534b */
  if (C.zf) goto L_10b4534b;
  /* 10b4531c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4531f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b45321 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45324 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45327 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b45329 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4532d je 0x10b45342 */
  if (C.zf) goto L_10b45342;
  /* 10b4532f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45335 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45337 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45339 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4533c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4533f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b45342:;
  /* 10b45342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45348 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4534b:;
  /* 10b4534b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4534e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b45354 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45357 je 0x10b45377 */
  if (C.zf) goto L_10b45377;
  /* 10b45359 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4535c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b45361 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45363 je 0x10b45377 */
  if (C.zf) goto L_10b45377;
  /* 10b45365 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45368 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4536e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45371 jne 0x10b452cd */
  if (!C.zf) goto L_10b452cd;
L_10b45377:;
  /* 10b45377 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4537a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b45380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45382 jne 0x10b4538f */
  if (!C.zf) goto L_10b4538f;
  /* 10b45384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45387 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4538a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4538d jmp 0x10b4539c */
  goto L_10b4539c;
L_10b4538f:;
  /* 10b4538f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45393 je 0x10b4539c */
  if (C.zf) goto L_10b4539c;
  /* 10b45395 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45398 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10b4539c:;
  /* 10b4539c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10b453a3:;
  /* 10b453a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b453a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b453a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b453ab je 0x10b453ce */
  if (C.zf) goto L_10b453ce;
L_10b453ad:;
  /* 10b453ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b453b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b453b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b453b6 je 0x10b453c3 */
  if (C.zf) goto L_10b453c3;
  /* 10b453b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b453bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b453be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b453c1 jne 0x10b453ce */
  if (!C.zf) goto L_10b453ce;
L_10b453c3:;
  /* 10b453c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b453c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b453c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b453cc jmp 0x10b453ad */
  goto L_10b453ad;
L_10b453ce:;
  /* 10b453ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b453d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b453d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b453d6 jne 0x10b453dd */
  if (!C.zf) goto L_10b453dd;
  /* 10b453d8 jmp 0x10b455bb */
  goto L_10b455bb;
L_10b453dd:;
  /* 10b453dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b453e1 je 0x10b453f4 */
  if (C.zf) goto L_10b453f4;
  /* 10b453e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b453e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b453e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b453eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b453ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b453f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b453f4:;
  /* 10b453f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b453f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b453f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b453fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b453ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10b45401:;
  /* 10b45401 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b45408 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b4540f:;
  /* 10b4540f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45412 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b45415 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45418 jne 0x10b4542e */
  if (!C.zf) goto L_10b4542e;
  /* 10b4541a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4541d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45420 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b45423 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b45426 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45429 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b4542c jmp 0x10b4540f */
  goto L_10b4540f;
L_10b4542e:;
  /* 10b4542e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45431 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b45434 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45437 jne 0x10b4548a */
  if (!C.zf) goto L_10b4548a;
  /* 10b45439 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4543c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4543e mov ecx, 2 */
  ECX = (0x2u);
  /* 10b45443 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b45445 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45447 jne 0x10b45482 */
  if (!C.zf) goto L_10b45482;
  /* 10b45449 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4544d je 0x10b4546f */
  if (C.zf) goto L_10b4546f;
  /* 10b4544f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45452 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b45456 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45459 jne 0x10b45466 */
  if (!C.zf) goto L_10b45466;
  /* 10b4545b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4545e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45461 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b45464 jmp 0x10b4546d */
  goto L_10b4546d;
L_10b45466:;
  /* 10b45466 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b4546d:;
  /* 10b4546d jmp 0x10b45476 */
  goto L_10b45476;
L_10b4546f:;
  /* 10b4546f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b45476:;
  /* 10b45476 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45478 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4547c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10b4547f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b45482:;
  /* 10b45482 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b45485 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b45487 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b4548a:;
  /* 10b4548a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4548d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b45490 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45493 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b45496 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b45498 je 0x10b454be */
  if (C.zf) goto L_10b454be;
  /* 10b4549a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4549e je 0x10b454af */
  if (C.zf) goto L_10b454af;
  /* 10b454a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b454a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10b454a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b454a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b454ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10b454af:;
  /* 10b454af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b454b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b454b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b454b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b454ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b454bc jmp 0x10b4548a */
  goto L_10b4548a;
L_10b454be:;
  /* 10b454be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b454c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b454c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b454c6 je 0x10b454e4 */
  if (C.zf) goto L_10b454e4;
  /* 10b454c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b454cc jne 0x10b454e9 */
  if (!C.zf) goto L_10b454e9;
  /* 10b454ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b454d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b454d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b454d7 je 0x10b454e4 */
  if (C.zf) goto L_10b454e4;
  /* 10b454d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b454dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b454df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b454e2 jne 0x10b454e9 */
  if (!C.zf) goto L_10b454e9;
L_10b454e4:;
  /* 10b454e4 jmp 0x10b45594 */
  goto L_10b45594;
L_10b454e9:;
  /* 10b454e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b454ed je 0x10b45586 */
  if (C.zf) goto L_10b45586;
  /* 10b454f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b454f7 je 0x10b4554d */
  if (C.zf) goto L_10b4554d;
  /* 10b454f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b454fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b454fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b45500 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b45502 mov cl, byte ptr [eax + 0x10b6fce1] */
  CL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b45508 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4550b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4550d je 0x10b45538 */
  if (C.zf) goto L_10b45538;
  /* 10b4550f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45515 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b45517 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b45519 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4551c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4551f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10b45522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45525 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45528 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4552b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4552e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b45530 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45533 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45536 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b45538:;
  /* 10b45538 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4553b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4553e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b45540 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b45542 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45548 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b4554b jmp 0x10b45579 */
  goto L_10b45579;
L_10b4554d:;
  /* 10b4554d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45550 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45552 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b45554 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b45556 mov cl, byte ptr [eax + 0x10b6fce1] */
  CL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b4555c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4555f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b45561 je 0x10b45579 */
  if (C.zf) goto L_10b45579;
  /* 10b45563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45566 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45569 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4556c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4556f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b45571 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45574 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45577 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b45579:;
  /* 10b45579 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4557c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4557e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45581 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b45584 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b45586:;
  /* 10b45586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45589 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4558c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4558f jmp 0x10b45401 */
  goto L_10b45401;
L_10b45594:;
  /* 10b45594 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45598 je 0x10b455a9 */
  if (C.zf) goto L_10b455a9;
  /* 10b4559a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4559d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b455a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b455a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b455a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10b455a9:;
  /* 10b455a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b455ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b455ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b455b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b455b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b455b6 jmp 0x10b453a3 */
  goto L_10b453a3;
L_10b455bb:;
  /* 10b455bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b455bf je 0x10b455d3 */
  if (C.zf) goto L_10b455d3;
  /* 10b455c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b455c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b455ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b455cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b455d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b455d3:;
  /* 10b455d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b455d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b455d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b455db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b455de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b455e0 mov esp, ebp */
  ESP = (EBP);
  /* 10b455e2 pop ebp */
  EBP = (pop32());
  /* 10b455e3 ret  */
  ESPCHK(0x10b451c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x10b455f0 (537 bytes, 173 insns) */
void f_10b455f0(void) {
  FTRACE(0x10b455f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b455f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b455f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b455f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b455f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10b455fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10b45604 cmp dword ptr [0x10b6e5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4560b jne 0x10b4564a */
  if (!C.zf) goto L_10b4564a;
  /* 10b4560d call dword ptr [0x10b70330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70330))), 0x10b45613u);
  /* 10b45613 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b45616 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4561a je 0x10b45628 */
  if (C.zf) goto L_10b45628;
  /* 10b4561c mov dword ptr [0x10b6e5b4], 1 */
  w32((uint32_t)(0x10b6e5b4), (0x1u));
  /* 10b45626 jmp 0x10b4564a */
  goto L_10b4564a;
L_10b45628:;
  /* 10b45628 call dword ptr [0x10b7032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7032c))), 0x10b4562eu);
  /* 10b4562e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b45631 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45635 je 0x10b45643 */
  if (C.zf) goto L_10b45643;
  /* 10b45637 mov dword ptr [0x10b6e5b4], 2 */
  w32((uint32_t)(0x10b6e5b4), (0x2u));
  /* 10b45641 jmp 0x10b4564a */
  goto L_10b4564a;
L_10b45643:;
  /* 10b45643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45645 jmp 0x10b45805 */
  goto L_10b45805;
L_10b4564a:;
  /* 10b4564a cmp dword ptr [0x10b6e5b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45651 jne 0x10b4574e */
  if (!C.zf) goto L_10b4574e;
  /* 10b45657 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4565b jne 0x10b45673 */
  if (!C.zf) goto L_10b45673;
  /* 10b4565d call dword ptr [0x10b70330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70330))), 0x10b45663u);
  /* 10b45663 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b45666 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4566a jne 0x10b45673 */
  if (!C.zf) goto L_10b45673;
  /* 10b4566c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4566e jmp 0x10b45805 */
  goto L_10b45805;
L_10b45673:;
  /* 10b45673 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b45676 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b45679:;
  /* 10b45679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4567c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4567e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b45681 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45683 je 0x10b456a5 */
  if (C.zf) goto L_10b456a5;
  /* 10b45685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45688 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4568b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4568e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45691 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45693 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b45696 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45698 jne 0x10b456a3 */
  if (!C.zf) goto L_10b456a3;
  /* 10b4569a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4569d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b456a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b456a3:;
  /* 10b456a3 jmp 0x10b45679 */
  goto L_10b45679;
L_10b456a5:;
  /* 10b456a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b456a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b456ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b456ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b456b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b456b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b456b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b456b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b456b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b456bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b456be push edx */
  push32((uint32_t)(EDX));
  /* 10b456bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b456c2 push eax */
  push32((uint32_t)(EAX));
  /* 10b456c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b456c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b456c7 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b456cdu);
  /* 10b456cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b456d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b456d4 je 0x10b456f4 */
  if (C.zf) goto L_10b456f4;
  /* 10b456d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10b456d8 push 0x10b69b90 */
  push32((uint32_t)(0x10b69b90u));
  /* 10b456dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b456df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b456e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b456e3 call 0x10b43020 */
  push32(0x10b456e8u); f_10b43020();
  /* 10b456e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b456eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b456ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b456f2 jne 0x10b45705 */
  if (!C.zf) goto L_10b45705;
L_10b456f4:;
  /* 10b456f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b456f7 push edx */
  push32((uint32_t)(EDX));
  /* 10b456f8 call dword ptr [0x10b70324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70324))), 0x10b456feu);
  /* 10b456fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45700 jmp 0x10b45805 */
  goto L_10b45805;
L_10b45705:;
  /* 10b45705 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45707 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45709 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4570c push eax */
  push32((uint32_t)(EAX));
  /* 10b4570d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b45710 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45711 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45714 push edx */
  push32((uint32_t)(EDX));
  /* 10b45715 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b45718 push eax */
  push32((uint32_t)(EAX));
  /* 10b45719 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4571b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4571d call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b45723u);
  /* 10b45723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45725 jne 0x10b4573c */
  if (!C.zf) goto L_10b4573c;
  /* 10b45727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b45729 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4572c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4572d call 0x10b43ab0 */
  push32(0x10b45732u); f_10b43ab0();
  /* 10b45732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45735 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10b4573c:;
  /* 10b4573c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4573f push edx */
  push32((uint32_t)(EDX));
  /* 10b45740 call dword ptr [0x10b70324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70324))), 0x10b45746u);
  /* 10b45746 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b45749 jmp 0x10b45805 */
  goto L_10b45805;
L_10b4574e:;
  /* 10b4574e cmp dword ptr [0x10b6e5b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45755 jne 0x10b45803 */
  if (!C.zf) goto L_10b45803;
  /* 10b4575b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4575f jne 0x10b45777 */
  if (!C.zf) goto L_10b45777;
  /* 10b45761 call dword ptr [0x10b7032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7032c))), 0x10b45767u);
  /* 10b45767 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b4576a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4576e jne 0x10b45777 */
  if (!C.zf) goto L_10b45777;
  /* 10b45770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45772 jmp 0x10b45805 */
  goto L_10b45805;
L_10b45777:;
  /* 10b45777 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4577a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b4577d:;
  /* 10b4577d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45780 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b45783 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45785 je 0x10b457a5 */
  if (C.zf) goto L_10b457a5;
  /* 10b45787 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4578a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4578d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b45790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45793 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b45796 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45798 jne 0x10b457a3 */
  if (!C.zf) goto L_10b457a3;
  /* 10b4579a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4579d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b457a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b457a3:;
  /* 10b457a3 jmp 0x10b4577d */
  goto L_10b4577d;
L_10b457a5:;
  /* 10b457a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b457a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b457ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b457ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b457b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10b457b6 push 0x10b69b90 */
  push32((uint32_t)(0x10b69b90u));
  /* 10b457bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b457bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b457c0 push edx */
  push32((uint32_t)(EDX));
  /* 10b457c1 call 0x10b43020 */
  push32(0x10b457c6u); f_10b43020();
  /* 10b457c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b457c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b457cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b457d0 jne 0x10b457e0 */
  if (!C.zf) goto L_10b457e0;
  /* 10b457d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b457d5 push eax */
  push32((uint32_t)(EAX));
  /* 10b457d6 call dword ptr [0x10b70320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70320))), 0x10b457dcu);
  /* 10b457dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b457de jmp 0x10b45805 */
  goto L_10b45805;
L_10b457e0:;
  /* 10b457e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b457e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b457e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b457e7 push edx */
  push32((uint32_t)(EDX));
  /* 10b457e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b457eb push eax */
  push32((uint32_t)(EAX));
  /* 10b457ec call 0x10b49900 */
  push32(0x10b457f1u); f_10b49900();
  /* 10b457f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b457f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b457f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b457f8 call dword ptr [0x10b70320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70320))), 0x10b457feu);
  /* 10b457fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45801 jmp 0x10b45805 */
  goto L_10b45805;
L_10b45803:;
  /* 10b45803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b45805:;
  /* 10b45805 mov esp, ebp */
  ESP = (EBP);
  /* 10b45807 pop ebp */
  EBP = (pop32());
  /* 10b45808 ret  */
  ESPCHK(0x10b455f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x10b45810 (77 bytes, 25 insns) */
void f_10b45810(void) {
  FTRACE(0x10b45810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45810 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45811 mov ebp, esp */
  EBP = (ESP);
  /* 10b45813 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45815 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b4581a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4581c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45820 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10b45823 push eax */
  push32((uint32_t)(EAX));
  /* 10b45824 call dword ptr [0x10b70338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70338))), 0x10b4582au);
  /* 10b4582a mov dword ptr [0x10b6fe0c], eax */
  w32((uint32_t)(0x10b6fe0c), (EAX));
  /* 10b4582f cmp dword ptr [0x10b6fe0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fe0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45836 jne 0x10b4583c */
  if (!C.zf) goto L_10b4583c;
  /* 10b45838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4583a jmp 0x10b4585b */
  goto L_10b4585b;
L_10b4583c:;
  /* 10b4583c call 0x10b472c0 */
  push32(0x10b45841u); f_10b472c0();
  /* 10b45841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45843 jne 0x10b45856 */
  if (!C.zf) goto L_10b45856;
  /* 10b45845 mov ecx, dword ptr [0x10b6fe0c] */
  ECX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b4584b push ecx */
  push32((uint32_t)(ECX));
  /* 10b4584c call dword ptr [0x10b70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70334))), 0x10b45852u);
  /* 10b45852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45854 jmp 0x10b4585b */
  goto L_10b4585b;
L_10b45856:;
  /* 10b45856 mov eax, 1 */
  EAX = (0x1u);
L_10b4585b:;
  /* 10b4585b pop ebp */
  EBP = (pop32());
  /* 10b4585c ret  */
  ESPCHK(0x10b45810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x10b45860 (156 bytes, 48 insns) */
void f_10b45860(void) {
  FTRACE(0x10b45860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45860 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45861 mov ebp, esp */
  EBP = (ESP);
  /* 10b45863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45866 mov eax, dword ptr [0x10b6fe08] */
  EAX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b4586b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4586e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b45875 jmp 0x10b45880 */
  goto L_10b45880;
L_10b45877:;
  /* 10b45877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4587a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4587d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b45880:;
  /* 10b45880 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45883 cmp edx, dword ptr [0x10b6fe04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6fe04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45889 jge 0x10b458d6 */
  if ((C.sf==C.of)) goto L_10b458d6;
  /* 10b4588b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b45890 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b45895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45898 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4589b push ecx */
  push32((uint32_t)(ECX));
  /* 10b4589c call dword ptr [0x10b70340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70340))), 0x10b458a2u);
  /* 10b458a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b458a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b458a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b458ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b458af push eax */
  push32((uint32_t)(EAX));
  /* 10b458b0 call dword ptr [0x10b70340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70340))), 0x10b458b6u);
  /* 10b458b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b458b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b458bc push edx */
  push32((uint32_t)(EDX));
  /* 10b458bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b458bf mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b458c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b458c5 call dword ptr [0x10b7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7033c))), 0x10b458cbu);
  /* 10b458cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b458ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b458d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b458d4 jmp 0x10b45877 */
  goto L_10b45877;
L_10b458d6:;
  /* 10b458d6 mov edx, dword ptr [0x10b6fe08] */
  EDX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b458dc push edx */
  push32((uint32_t)(EDX));
  /* 10b458dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b458df mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b458e4 push eax */
  push32((uint32_t)(EAX));
  /* 10b458e5 call dword ptr [0x10b7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7033c))), 0x10b458ebu);
  /* 10b458eb mov ecx, dword ptr [0x10b6fe0c] */
  ECX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b458f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b458f2 call dword ptr [0x10b70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70334))), 0x10b458f8u);
  /* 10b458f8 mov esp, ebp */
  ESP = (EBP);
  /* 10b458fa pop ebp */
  EBP = (pop32());
  /* 10b458fb ret  */
  ESPCHK(0x10b45860u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10b45900 (73 bytes, 19 insns) */
void f_10b45900(void) {
  FTRACE(0x10b45900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45900 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45901 mov ebp, esp */
  EBP = (ESP);
  /* 10b45903 cmp dword ptr [0x10b6e448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4590a je 0x10b4591e */
  if (C.zf) goto L_10b4591e;
  /* 10b4590c cmp dword ptr [0x10b6e448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45913 jne 0x10b45947 */
  if (!C.zf) goto L_10b45947;
  /* 10b45915 cmp dword ptr [0x10b6e44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4591c jne 0x10b45947 */
  if (!C.zf) goto L_10b45947;
L_10b4591e:;
  /* 10b4591e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10b45923 call 0x10b45950 */
  push32(0x10b45928u); f_10b45950();
  /* 10b45928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4592b cmp dword ptr [0x10b6e5b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45932 je 0x10b4593a */
  if (C.zf) goto L_10b4593a;
  /* 10b45934 call dword ptr [0x10b6e5b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e5b8))), 0x10b4593au);
L_10b4593a:;
  /* 10b4593a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b4593f call 0x10b45950 */
  push32(0x10b45944u); f_10b45950();
  /* 10b45944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b45947:;
  /* 10b45947 pop ebp */
  EBP = (pop32());
  /* 10b45948 ret  */
  ESPCHK(0x10b45900u, _esp0);
  ESP += 4; return;
}

/* FUN_10005950 @ 0x10b45950 (447 bytes, 131 insns) */
void f_10b45950(void) {
  FTRACE(0x10b45950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45950 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45951 mov ebp, esp */
  EBP = (ESP);
  /* 10b45953 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45959 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4595a push esi */
  push32((uint32_t)(ESI));
  /* 10b4595b push edi */
  push32((uint32_t)(EDI));
  /* 10b4595c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b45963 jmp 0x10b4596e */
  goto L_10b4596e;
L_10b45965:;
  /* 10b45965 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45968 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4596b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b4596e:;
  /* 10b4596e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45972 jae 0x10b45987 */
  if (!C.cf) goto L_10b45987;
  /* 10b45974 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4597a cmp edx, dword ptr [ecx*8 + 0x10b6cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10b6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45981 jne 0x10b45985 */
  if (!C.zf) goto L_10b45985;
  /* 10b45983 jmp 0x10b45987 */
  goto L_10b45987;
L_10b45985:;
  /* 10b45985 jmp 0x10b45965 */
  goto L_10b45965;
L_10b45987:;
  /* 10b45987 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4598a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4598d cmp ecx, dword ptr [eax*8 + 0x10b6cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10b6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45994 jne 0x10b45b08 */
  if (!C.zf) goto L_10b45b08;
  /* 10b4599a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b459a1 je 0x10b459c4 */
  if (C.zf) goto L_10b459c4;
  /* 10b459a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b459a6 mov eax, dword ptr [edx*8 + 0x10b6cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10b6cab4)));
  /* 10b459ad push eax */
  push32((uint32_t)(EAX));
  /* 10b459ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10b459b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b459b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b459b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b459b6 call 0x10b420e0 */
  push32(0x10b459bbu); f_10b420e0();
  /* 10b459bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b459be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b459c1 jne 0x10b459c4 */
  if (!C.zf) goto L_10b459c4;
  /* 10b459c3 int3  */
  x86_unimpl("int3 @ 0x10b459c3");
L_10b459c4:;
  /* 10b459c4 cmp dword ptr [0x10b6e448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b459cb je 0x10b459df */
  if (C.zf) goto L_10b459df;
  /* 10b459cd cmp dword ptr [0x10b6e448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b459d4 jne 0x10b45a18 */
  if (!C.zf) goto L_10b45a18;
  /* 10b459d6 cmp dword ptr [0x10b6e44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b459dd jne 0x10b45a18 */
  if (!C.zf) goto L_10b45a18;
L_10b459df:;
  /* 10b459df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b459e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10b459e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b459e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b459e8 mov eax, dword ptr [edx*8 + 0x10b6cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10b6cab4)));
  /* 10b459ef push eax */
  push32((uint32_t)(EAX));
  /* 10b459f0 call 0x10b45e50 */
  push32(0x10b459f5u); f_10b45e50();
  /* 10b459f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b459f8 push eax */
  push32((uint32_t)(EAX));
  /* 10b459f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b459fc mov edx, dword ptr [ecx*8 + 0x10b6cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10b6cab4)));
  /* 10b45a03 push edx */
  push32((uint32_t)(EDX));
  /* 10b45a04 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b45a06 call dword ptr [0x10b702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702b8))), 0x10b45a0cu);
  /* 10b45a0c push eax */
  push32((uint32_t)(EAX));
  /* 10b45a0d call dword ptr [0x10b702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702bc))), 0x10b45a13u);
  /* 10b45a13 jmp 0x10b45b08 */
  goto L_10b45b08;
L_10b45a18:;
  /* 10b45a18 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45a1f je 0x10b45b08 */
  if (C.zf) goto L_10b45b08;
  /* 10b45a25 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b45a2a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10b45a30 push eax */
  push32((uint32_t)(EAX));
  /* 10b45a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45a33 call dword ptr [0x10b702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d4))), 0x10b45a39u);
  /* 10b45a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45a3b jne 0x10b45a51 */
  if (!C.zf) goto L_10b45a51;
  /* 10b45a3d push 0x10b693f8 */
  push32((uint32_t)(0x10b693f8u));
  /* 10b45a42 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10b45a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45a49 call 0x10b45fd0 */
  push32(0x10b45a4eu); f_10b45fd0();
  /* 10b45a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b45a51:;
  /* 10b45a51 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10b45a57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b45a5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45a5d push eax */
  push32((uint32_t)(EAX));
  /* 10b45a5e call 0x10b45e50 */
  push32(0x10b45a63u); f_10b45e50();
  /* 10b45a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45a66 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45a69 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45a6c jbe 0x10b45a9a */
  if ((C.cf||C.zf)) goto L_10b45a9a;
  /* 10b45a6e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10b45a74 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45a75 call 0x10b45e50 */
  push32(0x10b45a7au); f_10b45e50();
  /* 10b45a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45a7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45a80 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10b45a84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b45a87 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b45a89 push 0x10b693f4 */
  push32((uint32_t)(0x10b693f4u));
  /* 10b45a8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45a91 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45a92 call 0x10b46840 */
  push32(0x10b45a97u); f_10b46840();
  /* 10b45a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b45a9a:;
  /* 10b45a9a push 0x10b69e4c */
  push32((uint32_t)(0x10b69e4cu));
  /* 10b45a9f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10b45aa5 push edx */
  push32((uint32_t)(EDX));
  /* 10b45aa6 call 0x10b45fd0 */
  push32(0x10b45aabu); f_10b45fd0();
  /* 10b45aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45aae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10b45ab2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10b45ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45ab9 call 0x10b45fe0 */
  push32(0x10b45abeu); f_10b45fe0();
  /* 10b45abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45ac1 push 0x10b6936c */
  push32((uint32_t)(0x10b6936cu));
  /* 10b45ac6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10b45acc push edx */
  push32((uint32_t)(EDX));
  /* 10b45acd call 0x10b45fe0 */
  push32(0x10b45ad2u); f_10b45fe0();
  /* 10b45ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45ad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45ad8 mov ecx, dword ptr [eax*8 + 0x10b6cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10b6cab4)));
  /* 10b45adf push ecx */
  push32((uint32_t)(ECX));
  /* 10b45ae0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10b45ae6 push edx */
  push32((uint32_t)(EDX));
  /* 10b45ae7 call 0x10b45fe0 */
  push32(0x10b45aecu); f_10b45fe0();
  /* 10b45aec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45aef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10b45af4 push 0x10b69e24 */
  push32((uint32_t)(0x10b69e24u));
  /* 10b45af9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10b45aff push eax */
  push32((uint32_t)(EAX));
  /* 10b45b00 call 0x10b46780 */
  push32(0x10b45b05u); f_10b46780();
  /* 10b45b05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b45b08:;
  /* 10b45b08 pop edi */
  EDI = (pop32());
  /* 10b45b09 pop esi */
  ESI = (pop32());
  /* 10b45b0a pop ebx */
  EBX = (pop32());
  /* 10b45b0b mov esp, ebp */
  ESP = (EBP);
  /* 10b45b0d pop ebp */
  EBP = (pop32());
  /* 10b45b0e ret  */
  ESPCHK(0x10b45950u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10b45b10 (80 bytes, 27 insns) */
void f_10b45b10(void) {
  FTRACE(0x10b45b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45b11 mov ebp, esp */
  EBP = (ESP);
  /* 10b45b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b45b1b jmp 0x10b45b26 */
  goto L_10b45b26;
L_10b45b1d:;
  /* 10b45b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45b20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45b23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b45b26:;
  /* 10b45b26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45b2a jae 0x10b45b3f */
  if (!C.cf) goto L_10b45b3f;
  /* 10b45b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45b2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45b32 cmp edx, dword ptr [ecx*8 + 0x10b6cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10b6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45b39 jne 0x10b45b3d */
  if (!C.zf) goto L_10b45b3d;
  /* 10b45b3b jmp 0x10b45b3f */
  goto L_10b45b3f;
L_10b45b3d:;
  /* 10b45b3d jmp 0x10b45b1d */
  goto L_10b45b1d;
L_10b45b3f:;
  /* 10b45b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45b42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45b45 cmp ecx, dword ptr [eax*8 + 0x10b6cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10b6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45b4c jne 0x10b45b5a */
  if (!C.zf) goto L_10b45b5a;
  /* 10b45b4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45b51 mov eax, dword ptr [edx*8 + 0x10b6cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10b6cab4)));
  /* 10b45b58 jmp 0x10b45b5c */
  goto L_10b45b5c;
L_10b45b5a:;
  /* 10b45b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b45b5c:;
  /* 10b45b5c mov esp, ebp */
  ESP = (EBP);
  /* 10b45b5e pop ebp */
  EBP = (pop32());
  /* 10b45b5f ret  */
  ESPCHK(0x10b45b10u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10b45b60 (66 bytes, 28 insns) */
void f_10b45b60(void) {
  FTRACE(0x10b45b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45b61 mov ebp, esp */
  EBP = (ESP);
  /* 10b45b63 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45b67 jne 0x10b45b87 */
  if (!C.zf) goto L_10b45b87;
  /* 10b45b69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45b6d jge 0x10b45b87 */
  if ((C.sf==C.of)) goto L_10b45b87;
  /* 10b45b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b45b71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45b74 push eax */
  push32((uint32_t)(EAX));
  /* 10b45b75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45b78 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45b79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45b7c push edx */
  push32((uint32_t)(EDX));
  /* 10b45b7d call 0x10b45bb0 */
  push32(0x10b45b82u); f_10b45bb0();
  /* 10b45b82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45b85 jmp 0x10b45b9d */
  goto L_10b45b9d;
L_10b45b87:;
  /* 10b45b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45b89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45b8c push eax */
  push32((uint32_t)(EAX));
  /* 10b45b8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45b91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45b94 push edx */
  push32((uint32_t)(EDX));
  /* 10b45b95 call 0x10b45bb0 */
  push32(0x10b45b9au); f_10b45bb0();
  /* 10b45b9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b45b9d:;
  /* 10b45b9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45ba0 pop ebp */
  EBP = (pop32());
  /* 10b45ba1 ret  */
  ESPCHK(0x10b45b60u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10b45bb0 (194 bytes, 71 insns) */
void f_10b45bb0(void) {
  FTRACE(0x10b45bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b45bb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45bb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b45bbc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45bc0 je 0x10b45bd9 */
  if (C.zf) goto L_10b45bd9;
  /* 10b45bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45bc5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10b45bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45bcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45bce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b45bd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45bd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b45bd6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b45bd9:;
  /* 10b45bd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45bdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b45bdf:;
  /* 10b45bdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45be2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45be4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b45be7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b45bea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45bed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45bef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b45bf2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b45bf5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45bf9 jbe 0x10b45c11 */
  if ((C.cf||C.zf)) goto L_10b45c11;
  /* 10b45bfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45bfe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45c06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45c0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b45c0f jmp 0x10b45c25 */
  goto L_10b45c25;
L_10b45c11:;
  /* 10b45c11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45c14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45c22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b45c25:;
  /* 10b45c25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45c29 ja 0x10b45bdf */
  if ((!C.cf&&!C.zf)) goto L_10b45bdf;
  /* 10b45c2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b45c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45c37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b45c3a:;
  /* 10b45c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45c3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10b45c42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45c48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45c4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45c4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45c4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10b45c52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b45c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45c57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45c5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b45c5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45c60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45c63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b45c66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45c69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45c6c jb 0x10b45c3a */
  if (C.cf) goto L_10b45c3a;
  /* 10b45c6e mov esp, ebp */
  ESP = (EBP);
  /* 10b45c70 pop ebp */
  EBP = (pop32());
  /* 10b45c71 ret  */
  ESPCHK(0x10b45bb0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10b45c80 (63 bytes, 24 insns) */
void f_10b45c80(void) {
  FTRACE(0x10b45c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45c81 mov ebp, esp */
  EBP = (ESP);
  /* 10b45c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45c84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45c88 jne 0x10b45c99 */
  if (!C.zf) goto L_10b45c99;
  /* 10b45c8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45c8e jge 0x10b45c99 */
  if ((C.sf==C.of)) goto L_10b45c99;
  /* 10b45c90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b45c97 jmp 0x10b45ca0 */
  goto L_10b45ca0;
L_10b45c99:;
  /* 10b45c99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b45ca0:;
  /* 10b45ca0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45ca3 push eax */
  push32((uint32_t)(EAX));
  /* 10b45ca4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45ca8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45cab push edx */
  push32((uint32_t)(EDX));
  /* 10b45cac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45caf push eax */
  push32((uint32_t)(EAX));
  /* 10b45cb0 call 0x10b45bb0 */
  push32(0x10b45cb5u); f_10b45bb0();
  /* 10b45cb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45cb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45cbb mov esp, ebp */
  ESP = (EBP);
  /* 10b45cbd pop ebp */
  EBP = (pop32());
  /* 10b45cbe ret  */
  ESPCHK(0x10b45c80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10b45cc0 (30 bytes, 14 insns) */
void f_10b45cc0(void) {
  FTRACE(0x10b45cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b45cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45cc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10b45cc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45ccc push ecx */
  push32((uint32_t)(ECX));
  /* 10b45ccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45cd0 push edx */
  push32((uint32_t)(EDX));
  /* 10b45cd1 call 0x10b45bb0 */
  push32(0x10b45cd6u); f_10b45bb0();
  /* 10b45cd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45cd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45cdc pop ebp */
  EBP = (pop32());
  /* 10b45cdd ret  */
  ESPCHK(0x10b45cc0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10b45ce0 (72 bytes, 28 insns) */
void f_10b45ce0(void) {
  FTRACE(0x10b45ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10b45ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45ce4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45ce8 jne 0x10b45d01 */
  if (!C.zf) goto L_10b45d01;
  /* 10b45cea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45cee jg 0x10b45d01 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b45d01;
  /* 10b45cf0 jl 0x10b45cf8 */
  if ((C.sf!=C.of)) goto L_10b45cf8;
  /* 10b45cf2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45cf6 jae 0x10b45d01 */
  if (!C.cf) goto L_10b45d01;
L_10b45cf8:;
  /* 10b45cf8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b45cff jmp 0x10b45d08 */
  goto L_10b45d08;
L_10b45d01:;
  /* 10b45d01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b45d08:;
  /* 10b45d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45d0b push eax */
  push32((uint32_t)(EAX));
  /* 10b45d0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b45d0f push ecx */
  push32((uint32_t)(ECX));
  /* 10b45d10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45d13 push edx */
  push32((uint32_t)(EDX));
  /* 10b45d14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45d17 push eax */
  push32((uint32_t)(EAX));
  /* 10b45d18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10b45d1c call 0x10b45d30 */
  push32(0x10b45d21u); f_10b45d30();
  /* 10b45d21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45d24 mov esp, ebp */
  ESP = (EBP);
  /* 10b45d26 pop ebp */
  EBP = (pop32());
  /* 10b45d27 ret  */
  ESPCHK(0x10b45ce0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10b45d30 (242 bytes, 91 insns) */
void f_10b45d30(void) {
  FTRACE(0x10b45d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45d31 mov ebp, esp */
  EBP = (ESP);
  /* 10b45d33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45d36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b45d3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45d40 je 0x10b45d64 */
  if (C.zf) goto L_10b45d64;
  /* 10b45d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45d45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10b45d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45d4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45d4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b45d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45d54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b45d56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45d59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45d5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b45d5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b45d61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b45d64:;
  /* 10b45d64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45d67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b45d6a:;
  /* 10b45d6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b45d6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b45d6f push ecx */
  push32((uint32_t)(ECX));
  /* 10b45d70 push eax */
  push32((uint32_t)(EAX));
  /* 10b45d71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45d74 push edx */
  push32((uint32_t)(EDX));
  /* 10b45d75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45d78 push eax */
  push32((uint32_t)(EAX));
  /* 10b45d79 call 0x10b49cb0 */
  push32(0x10b45d7eu); f_10b49cb0();
  /* 10b45d7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b45d81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b45d84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45d86 push edx */
  push32((uint32_t)(EDX));
  /* 10b45d87 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45d88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45d8b push eax */
  push32((uint32_t)(EAX));
  /* 10b45d8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45d8f push ecx */
  push32((uint32_t)(ECX));
  /* 10b45d90 call 0x10b49c40 */
  push32(0x10b45d95u); f_10b49c40();
  /* 10b45d95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b45d98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b45d9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45d9f jbe 0x10b45db7 */
  if ((C.cf||C.zf)) goto L_10b45db7;
  /* 10b45da1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45da4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45daa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45daf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45db2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b45db5 jmp 0x10b45dcb */
  goto L_10b45dcb;
L_10b45db7:;
  /* 10b45db7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b45dba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45dc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45dc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b45dcb:;
  /* 10b45dcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45dcf ja 0x10b45d6a */
  if ((!C.cf&&!C.zf)) goto L_10b45d6a;
  /* 10b45dd1 jb 0x10b45dd9 */
  if (C.cf) goto L_10b45dd9;
  /* 10b45dd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45dd7 ja 0x10b45d6a */
  if ((!C.cf&&!C.zf)) goto L_10b45d6a;
L_10b45dd9:;
  /* 10b45dd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45ddc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b45ddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45de2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45de5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b45de8:;
  /* 10b45de8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45deb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45ded mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10b45df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45df6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b45df8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b45dfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45dfd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10b45e00 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b45e02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b45e05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45e08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b45e0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45e0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45e11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b45e14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b45e17 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45e1a jb 0x10b45de8 */
  if (C.cf) goto L_10b45de8;
  /* 10b45e1c mov esp, ebp */
  ESP = (EBP);
  /* 10b45e1e pop ebp */
  EBP = (pop32());
  /* 10b45e1f ret 0x14 */
  ESPCHK(0x10b45d30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10b45e30 (31 bytes, 15 insns) */
void f_10b45e30(void) {
  FTRACE(0x10b45e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45e31 mov ebp, esp */
  EBP = (ESP);
  /* 10b45e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45e35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b45e38 push eax */
  push32((uint32_t)(EAX));
  /* 10b45e39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45e3c push ecx */
  push32((uint32_t)(ECX));
  /* 10b45e3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45e40 push edx */
  push32((uint32_t)(EDX));
  /* 10b45e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45e44 push eax */
  push32((uint32_t)(EAX));
  /* 10b45e45 call 0x10b45d30 */
  push32(0x10b45e4au); f_10b45d30();
  /* 10b45e4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45e4d pop ebp */
  EBP = (pop32());
  /* 10b45e4e ret  */
  ESPCHK(0x10b45e30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10b45e50 (123 bytes, 44 insns) */
void f_10b45e50(void) {
  FTRACE(0x10b45e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45e50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b45e54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b45e5a je 0x10b45e70 */
  if (C.zf) goto L_10b45e70;
L_10b45e5c:;
  /* 10b45e5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b45e5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b45e5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b45e61 je 0x10b45ea3 */
  if (C.zf) goto L_10b45ea3;
  /* 10b45e63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b45e69 jne 0x10b45e5c */
  if (!C.zf) goto L_10b45e5c;
  /* 10b45e6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b45e70:;
  /* 10b45e70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b45e72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b45e77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45e79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b45e7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45e7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45e81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b45e86 je 0x10b45e70 */
  if (C.zf) goto L_10b45e70;
  /* 10b45e88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b45e8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b45e8d je 0x10b45ec1 */
  if (C.zf) goto L_10b45ec1;
  /* 10b45e8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b45e91 je 0x10b45eb7 */
  if (C.zf) goto L_10b45eb7;
  /* 10b45e93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b45e98 je 0x10b45ead */
  if (C.zf) goto L_10b45ead;
  /* 10b45e9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b45e9f je 0x10b45ea3 */
  if (C.zf) goto L_10b45ea3;
  /* 10b45ea1 jmp 0x10b45e70 */
  goto L_10b45e70;
L_10b45ea3:;
  /* 10b45ea3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10b45ea6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b45eaa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45eac ret  */
  ESPCHK(0x10b45e50u, _esp0);
  ESP += 4; return;
L_10b45ead:;
  /* 10b45ead lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10b45eb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b45eb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45eb6 ret  */
  ESPCHK(0x10b45e50u, _esp0);
  ESP += 4; return;
L_10b45eb7:;
  /* 10b45eb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10b45eba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b45ebe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45ec0 ret  */
  ESPCHK(0x10b45e50u, _esp0);
  ESP += 4; return;
L_10b45ec1:;
  /* 10b45ec1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10b45ec4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b45ec8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45eca ret  */
  ESPCHK(0x10b45e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x10b45ed0 (249 bytes, 93 insns) */
void f_10b45ed0(void) {
  FTRACE(0x10b45ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b45ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10b45ed3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b45ed7 push esi */
  push32((uint32_t)(ESI));
  /* 10b45ed8 push edi */
  push32((uint32_t)(EDI));
  /* 10b45ed9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10b45edc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b45edf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10b45ee2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10b45ee5:;
  /* 10b45ee5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45ee9 jne 0x10b45f09 */
  if (!C.zf) goto L_10b45f09;
  /* 10b45eeb push 0x10b69e84 */
  push32((uint32_t)(0x10b69e84u));
  /* 10b45ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45ef2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10b45ef4 push 0x10b69e78 */
  push32((uint32_t)(0x10b69e78u));
  /* 10b45ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b45efb call 0x10b420e0 */
  push32(0x10b45f00u); f_10b420e0();
  /* 10b45f00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45f03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45f06 jne 0x10b45f09 */
  if (!C.zf) goto L_10b45f09;
  /* 10b45f08 int3  */
  x86_unimpl("int3 @ 0x10b45f08");
L_10b45f09:;
  /* 10b45f09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45f0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b45f0d jne 0x10b45ee5 */
  if (!C.zf) goto L_10b45ee5;
L_10b45f0f:;
  /* 10b45f0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45f13 jne 0x10b45f33 */
  if (!C.zf) goto L_10b45f33;
  /* 10b45f15 push 0x10b69e68 */
  push32((uint32_t)(0x10b69e68u));
  /* 10b45f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45f1c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10b45f1e push 0x10b69e78 */
  push32((uint32_t)(0x10b69e78u));
  /* 10b45f23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b45f25 call 0x10b420e0 */
  push32(0x10b45f2au); f_10b420e0();
  /* 10b45f2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45f2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45f30 jne 0x10b45f33 */
  if (!C.zf) goto L_10b45f33;
  /* 10b45f32 int3  */
  x86_unimpl("int3 @ 0x10b45f32");
L_10b45f33:;
  /* 10b45f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b45f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b45f37 jne 0x10b45f0f */
  if (!C.zf) goto L_10b45f0f;
  /* 10b45f39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f3c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10b45f43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45f49 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b45f4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b45f52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b45f54 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b45f5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b45f5d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b45f60 push edx */
  push32((uint32_t)(EDX));
  /* 10b45f61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b45f64 push eax */
  push32((uint32_t)(EAX));
  /* 10b45f65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f68 push ecx */
  push32((uint32_t)(ECX));
  /* 10b45f69 call 0x10b49fb0 */
  push32(0x10b45f6eu); f_10b49fb0();
  /* 10b45f6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45f71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b45f74 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f77 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b45f7a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b45f7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b45f83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f86 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b45f8a jl 0x10b45fae */
  if ((C.sf!=C.of)) goto L_10b45fae;
  /* 10b45f8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45f8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b45f91 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b45f94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b45f96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b45f9c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10b45f9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45fa2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b45fa4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45fa7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45faa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b45fac jmp 0x10b45fbf */
  goto L_10b45fbf;
L_10b45fae:;
  /* 10b45fae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b45fb1 push eax */
  push32((uint32_t)(EAX));
  /* 10b45fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b45fb4 call 0x10b49d30 */
  push32(0x10b45fb9u); f_10b49d30();
  /* 10b45fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b45fbc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10b45fbf:;
  /* 10b45fbf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b45fc2 pop edi */
  EDI = (pop32());
  /* 10b45fc3 pop esi */
  ESI = (pop32());
  /* 10b45fc4 pop ebx */
  EBX = (pop32());
  /* 10b45fc5 mov esp, ebp */
  ESP = (EBP);
  /* 10b45fc7 pop ebp */
  EBP = (pop32());
  /* 10b45fc8 ret  */
  ESPCHK(0x10b45ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10b45fd0 (7 bytes, 3 insns) */
void f_10b45fd0(void) {
  FTRACE(0x10b45fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45fd0 push edi */
  push32((uint32_t)(EDI));
  /* 10b45fd1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b45fd5 jmp 0x10b46041 */
  jmp_ind(0x10b46041u); return;
}

/* FUN_10005fe0 @ 0x10b45fe0 (224 bytes, 84 insns) */
void f_10b45fe0(void) {
  FTRACE(0x10b45fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b45fe0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b45fe4 push edi */
  push32((uint32_t)(EDI));
  /* 10b45fe5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b45feb je 0x10b45ffc */
  if (C.zf) goto L_10b45ffc;
L_10b45fed:;
  /* 10b45fed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b45fef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b45ff0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b45ff2 je 0x10b4602f */
  if (C.zf) goto L_10b4602f;
  /* 10b45ff4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b45ffa jne 0x10b45fed */
  if (!C.zf) goto L_10b45fed;
L_10b45ffc:;
  /* 10b45ffc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b45ffe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b46003 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46005 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b46008 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4600a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4600d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b46012 je 0x10b45ffc */
  if (C.zf) goto L_10b45ffc;
  /* 10b46014 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b46017 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b46019 je 0x10b4603e */
  if (C.zf) goto L_10b4603e;
  /* 10b4601b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b4601d je 0x10b46039 */
  if (C.zf) goto L_10b46039;
  /* 10b4601f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b46024 je 0x10b46034 */
  if (C.zf) goto L_10b46034;
  /* 10b46026 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b4602b je 0x10b4602f */
  if (C.zf) goto L_10b4602f;
  /* 10b4602d jmp 0x10b45ffc */
  goto L_10b45ffc;
L_10b4602f:;
  /* 10b4602f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10b46032 jmp 0x10b46041 */
  goto L_10b46041;
L_10b46034:;
  /* 10b46034 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10b46037 jmp 0x10b46041 */
  goto L_10b46041;
L_10b46039:;
  /* 10b46039 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10b4603c jmp 0x10b46041 */
  goto L_10b46041;
L_10b4603e:;
  /* 10b4603e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10b46041:;
  /* 10b46041 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b46045 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b4604b je 0x10b46066 */
  if (C.zf) goto L_10b46066;
L_10b4604d:;
  /* 10b4604d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b4604f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b46050 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b46052 je 0x10b460b8 */
  if (C.zf) goto L_10b460b8;
  /* 10b46054 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b46056 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b46057 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b4605d jne 0x10b4604d */
  if (!C.zf) goto L_10b4604d;
  /* 10b4605f jmp 0x10b46066 */
  goto L_10b46066;
L_10b46061:;
  /* 10b46061 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b46063 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b46066:;
  /* 10b46066 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b4606b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b4606d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4606f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b46072 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46074 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b46076 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46079 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b4607e je 0x10b46061 */
  if (C.zf) goto L_10b46061;
  /* 10b46080 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b46082 je 0x10b460b8 */
  if (C.zf) goto L_10b460b8;
  /* 10b46084 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b46086 je 0x10b460af */
  if (C.zf) goto L_10b460af;
  /* 10b46088 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b4608e je 0x10b460a2 */
  if (C.zf) goto L_10b460a2;
  /* 10b46090 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b46096 je 0x10b4609a */
  if (C.zf) goto L_10b4609a;
  /* 10b46098 jmp 0x10b46061 */
  goto L_10b46061;
L_10b4609a:;
  /* 10b4609a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b4609c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b460a0 pop edi */
  EDI = (pop32());
  /* 10b460a1 ret  */
  ESPCHK(0x10b45fe0u, _esp0);
  ESP += 4; return;
L_10b460a2:;
  /* 10b460a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b460a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b460a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10b460ad pop edi */
  EDI = (pop32());
  /* 10b460ae ret  */
  ESPCHK(0x10b45fe0u, _esp0);
  ESP += 4; return;
L_10b460af:;
  /* 10b460af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b460b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b460b6 pop edi */
  EDI = (pop32());
  /* 10b460b7 ret  */
  ESPCHK(0x10b45fe0u, _esp0);
  ESP += 4; return;
L_10b460b8:;
  /* 10b460b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b460ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b460be pop edi */
  EDI = (pop32());
  /* 10b460bf ret  */
  ESPCHK(0x10b45fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x10b460c0 (243 bytes, 91 insns) */
void f_10b460c0(void) {
  FTRACE(0x10b460c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b460c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b460c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b460c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b460c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b460c7 push esi */
  push32((uint32_t)(ESI));
  /* 10b460c8 push edi */
  push32((uint32_t)(EDI));
  /* 10b460c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10b460cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b460cf:;
  /* 10b460cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b460d3 jne 0x10b460f3 */
  if (!C.zf) goto L_10b460f3;
  /* 10b460d5 push 0x10b69e84 */
  push32((uint32_t)(0x10b69e84u));
  /* 10b460da push 0 */
  push32((uint32_t)(0x0u));
  /* 10b460dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10b460de push 0x10b69e94 */
  push32((uint32_t)(0x10b69e94u));
  /* 10b460e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b460e5 call 0x10b420e0 */
  push32(0x10b460eau); f_10b420e0();
  /* 10b460ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b460ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b460f0 jne 0x10b460f3 */
  if (!C.zf) goto L_10b460f3;
  /* 10b460f2 int3  */
  x86_unimpl("int3 @ 0x10b460f2");
L_10b460f3:;
  /* 10b460f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b460f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b460f7 jne 0x10b460cf */
  if (!C.zf) goto L_10b460cf;
L_10b460f9:;
  /* 10b460f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b460fd jne 0x10b4611d */
  if (!C.zf) goto L_10b4611d;
  /* 10b460ff push 0x10b69e68 */
  push32((uint32_t)(0x10b69e68u));
  /* 10b46104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b46106 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10b46108 push 0x10b69e94 */
  push32((uint32_t)(0x10b69e94u));
  /* 10b4610d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4610f call 0x10b420e0 */
  push32(0x10b46114u); f_10b420e0();
  /* 10b46114 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46117 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4611a jne 0x10b4611d */
  if (!C.zf) goto L_10b4611d;
  /* 10b4611c int3  */
  x86_unimpl("int3 @ 0x10b4611c");
L_10b4611d:;
  /* 10b4611d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4611f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b46121 jne 0x10b460f9 */
  if (!C.zf) goto L_10b460f9;
  /* 10b46123 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46126 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10b4612d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46133 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b46136 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4613c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b4613e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46141 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46144 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b46147 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4614a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4614b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4614e push edx */
  push32((uint32_t)(EDX));
  /* 10b4614f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46152 push eax */
  push32((uint32_t)(EAX));
  /* 10b46153 call 0x10b49fb0 */
  push32(0x10b46158u); f_10b49fb0();
  /* 10b46158 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4615b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4615e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46161 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b46164 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b46167 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4616a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b4616d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46170 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46174 jl 0x10b46198 */
  if ((C.sf!=C.of)) goto L_10b46198;
  /* 10b46176 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46179 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4617b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b4617e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b46180 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b46186 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b46189 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4618c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4618e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46191 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b46194 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b46196 jmp 0x10b461a9 */
  goto L_10b461a9;
L_10b46198:;
  /* 10b46198 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4619b push edx */
  push32((uint32_t)(EDX));
  /* 10b4619c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4619e call 0x10b49d30 */
  push32(0x10b461a3u); f_10b49d30();
  /* 10b461a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b461a6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10b461a9:;
  /* 10b461a9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b461ac pop edi */
  EDI = (pop32());
  /* 10b461ad pop esi */
  ESI = (pop32());
  /* 10b461ae pop ebx */
  EBX = (pop32());
  /* 10b461af mov esp, ebp */
  ESP = (EBP);
  /* 10b461b1 pop ebp */
  EBP = (pop32());
  /* 10b461b2 ret  */
  ESPCHK(0x10b460c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x10b461c0 (47 bytes, 17 insns) */
void f_10b461c0(void) {
  FTRACE(0x10b461c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b461c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b461c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b461c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10b461ca jb 0x10b461e0 */
  if (C.cf) goto L_10b461e0;
L_10b461cc:;
  /* 10b461cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b461d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b461d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b461d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b461de jae 0x10b461cc */
  if (!C.cf) goto L_10b461cc;
L_10b461e0:;
  /* 10b461e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b461e2 mov eax, esp */
  EAX = (ESP);
  /* 10b461e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b461e6 mov esp, ecx */
  ESP = (ECX);
  /* 10b461e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b461ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b461ed push eax */
  push32((uint32_t)(EAX));
  /* 10b461ee ret  */
  ESPCHK(0x10b461c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061f0 @ 0x10b461f0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10b461f0(void) {
  FTRACE(0x10b461f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b461f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b461f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b461f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b461f6 push esi */
  push32((uint32_t)(ESI));
  /* 10b461f7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b461fb je 0x10b46203 */
  if (C.zf) goto L_10b46203;
  /* 10b461fd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46201 jne 0x10b46208 */
  if (!C.zf) goto L_10b46208;
L_10b46203:;
  /* 10b46203 jmp 0x10b463d8 */
  goto L_10b463d8;
L_10b46208:;
  /* 10b46208 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4620c je 0x10b46224 */
  if (C.zf) goto L_10b46224;
  /* 10b4620e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46212 je 0x10b46224 */
  if (C.zf) goto L_10b46224;
  /* 10b46214 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46218 je 0x10b46224 */
  if (C.zf) goto L_10b46224;
  /* 10b4621a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4621e jne 0x10b46301 */
  if (!C.zf) goto L_10b46301;
L_10b46224:;
  /* 10b46224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b46226 call 0x10b46a20 */
  push32(0x10b4622bu); f_10b46a20();
  /* 10b4622b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4622e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46232 je 0x10b4623a */
  if (C.zf) goto L_10b4623a;
  /* 10b46234 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46238 jne 0x10b4627f */
  if (!C.zf) goto L_10b4627f;
L_10b4623a:;
  /* 10b4623a cmp dword ptr [0x10b6e5cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46241 jne 0x10b4627f */
  if (!C.zf) goto L_10b4627f;
  /* 10b46243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b46245 push 0x10b46420 */
  push32((uint32_t)(0x10b46420u));
  /* 10b4624a call dword ptr [0x10b70310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70310))), 0x10b46250u);
  /* 10b46250 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46253 jne 0x10b46261 */
  if (!C.zf) goto L_10b46261;
  /* 10b46255 mov dword ptr [0x10b6e5cc], 1 */
  w32((uint32_t)(0x10b6e5cc), (0x1u));
  /* 10b4625f jmp 0x10b4627f */
  goto L_10b4627f;
L_10b46261:;
  /* 10b46261 call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b46267u);
  /* 10b46267 mov esi, eax */
  ESI = (EAX);
  /* 10b46269 call 0x10b4af00 */
  push32(0x10b4626eu); f_10b4af00();
  /* 10b4626e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10b46270 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b46272 call 0x10b46ac0 */
  push32(0x10b46277u); f_10b46ac0();
  /* 10b46277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4627a jmp 0x10b463d8 */
  goto L_10b463d8;
L_10b4627f:;
  /* 10b4627f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46282 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b46285 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46288 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4628b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b4628e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46292 ja 0x10b462f2 */
  if ((!C.cf&&!C.zf)) goto L_10b462f2;
  /* 10b46294 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46297 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b46299 mov dl, byte ptr [eax + 0x10b463ff] */
  DL = (r8((uint32_t)(EAX + 0x10b463ff)));
  /* 10b4629f jmp dword ptr [edx*4 + 0x10b463eb] */
  switch (EDX) {
    case 0: goto L_10b462a6;
    case 1: goto L_10b462e0;
    case 2: goto L_10b462ba;
    case 3: goto L_10b462cd;
    case 4: goto L_10b462f2;
    default: x86_unimpl("switch@0x10b4629f out of table"); return;
  }
L_10b462a6:;
  /* 10b462a6 mov ecx, dword ptr [0x10b6e5bc] */
  ECX = (r32((uint32_t)(0x10b6e5bc)));
  /* 10b462ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b462af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b462b2 mov dword ptr [0x10b6e5bc], edx */
  w32((uint32_t)(0x10b6e5bc), (EDX));
  /* 10b462b8 jmp 0x10b462f2 */
  goto L_10b462f2;
L_10b462ba:;
  /* 10b462ba mov eax, dword ptr [0x10b6e5c0] */
  EAX = (r32((uint32_t)(0x10b6e5c0)));
  /* 10b462bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b462c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b462c5 mov dword ptr [0x10b6e5c0], ecx */
  w32((uint32_t)(0x10b6e5c0), (ECX));
  /* 10b462cb jmp 0x10b462f2 */
  goto L_10b462f2;
L_10b462cd:;
  /* 10b462cd mov edx, dword ptr [0x10b6e5c4] */
  EDX = (r32((uint32_t)(0x10b6e5c4)));
  /* 10b462d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b462d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b462d9 mov dword ptr [0x10b6e5c4], eax */
  w32((uint32_t)(0x10b6e5c4), (EAX));
  /* 10b462de jmp 0x10b462f2 */
  goto L_10b462f2;
L_10b462e0:;
  /* 10b462e0 mov ecx, dword ptr [0x10b6e5c8] */
  ECX = (r32((uint32_t)(0x10b6e5c8)));
  /* 10b462e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b462e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b462ec mov dword ptr [0x10b6e5c8], edx */
  w32((uint32_t)(0x10b6e5c8), (EDX));
L_10b462f2:;
  /* 10b462f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b462f4 call 0x10b46ac0 */
  push32(0x10b462f9u); f_10b46ac0();
  /* 10b462f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b462fc jmp 0x10b463d3 */
  goto L_10b463d3;
L_10b46301:;
  /* 10b46301 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46305 je 0x10b46318 */
  if (C.zf) goto L_10b46318;
  /* 10b46307 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4630b je 0x10b46318 */
  if (C.zf) goto L_10b46318;
  /* 10b4630d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46311 je 0x10b46318 */
  if (C.zf) goto L_10b46318;
  /* 10b46313 jmp 0x10b463d8 */
  goto L_10b463d8;
L_10b46318:;
  /* 10b46318 call 0x10b42a60 */
  push32(0x10b4631du); f_10b42a60();
  /* 10b4631d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46323 cmp dword ptr [eax + 0x50], 0x10b6cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10b6cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4632a jne 0x10b46375 */
  if (!C.zf) goto L_10b46375;
  /* 10b4632c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10b46331 push 0x10b69ea0 */
  push32((uint32_t)(0x10b69ea0u));
  /* 10b46336 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b46338 mov ecx, dword ptr [0x10b6cc80] */
  ECX = (r32((uint32_t)(0x10b6cc80)));
  /* 10b4633e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4633f call 0x10b43020 */
  push32(0x10b46344u); f_10b43020();
  /* 10b46344 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46347 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4634a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10b4634d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46350 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46354 je 0x10b46373 */
  if (C.zf) goto L_10b46373;
  /* 10b46356 mov ecx, dword ptr [0x10b6cc80] */
  ECX = (r32((uint32_t)(0x10b6cc80)));
  /* 10b4635c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4635d push 0x10b6cc00 */
  push32((uint32_t)(0x10b6cc00u));
  /* 10b46362 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46365 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10b46368 push eax */
  push32((uint32_t)(EAX));
  /* 10b46369 call 0x10b49900 */
  push32(0x10b4636eu); f_10b49900();
  /* 10b4636e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46371 jmp 0x10b46375 */
  goto L_10b46375;
L_10b46373:;
  /* 10b46373 jmp 0x10b463d8 */
  goto L_10b463d8;
L_10b46375:;
  /* 10b46375 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46378 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b4637b push edx */
  push32((uint32_t)(EDX));
  /* 10b4637c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4637f push eax */
  push32((uint32_t)(EAX));
  /* 10b46380 call 0x10b46700 */
  push32(0x10b46385u); f_10b46700();
  /* 10b46385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46388 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4638b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4638f jne 0x10b46393 */
  if (!C.zf) goto L_10b46393;
  /* 10b46391 jmp 0x10b463d8 */
  goto L_10b463d8;
L_10b46393:;
  /* 10b46393 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46396 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b46399 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b4639c:;
  /* 10b4639c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4639f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b463a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b463a5 jne 0x10b463d3 */
  if (!C.zf) goto L_10b463d3;
  /* 10b463a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b463aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b463ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b463b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b463b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b463b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b463b9 mov edx, dword ptr [0x10b6cc84] */
  EDX = (r32((uint32_t)(0x10b6cc84)));
  /* 10b463bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b463c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b463c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10b463c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b463ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b463cd jb 0x10b463d1 */
  if (C.cf) goto L_10b463d1;
  /* 10b463cf jmp 0x10b463d3 */
  goto L_10b463d3;
L_10b463d1:;
  /* 10b463d1 jmp 0x10b4639c */
  goto L_10b4639c;
L_10b463d3:;
  /* 10b463d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b463d6 jmp 0x10b463e6 */
  goto L_10b463e6;
L_10b463d8:;
  /* 10b463d8 call 0x10b4aef0 */
  push32(0x10b463ddu); f_10b4aef0();
  /* 10b463dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10b463e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b463e6:;
  /* 10b463e6 pop esi */
  ESI = (pop32());
  /* 10b463e7 mov esp, ebp */
  ESP = (EBP);
  /* 10b463e9 pop ebp */
  EBP = (pop32());
  /* 10b463ea ret  */
  ESPCHK(0x10b461f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006420 @ 0x10b46420 (146 bytes, 45 insns) */
void f_10b46420(void) {
  FTRACE(0x10b46420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46420 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46421 mov ebp, esp */
  EBP = (ESP);
  /* 10b46423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b46426 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b46428 call 0x10b46a20 */
  push32(0x10b4642du); f_10b46a20();
  /* 10b4642d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46430 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46434 jne 0x10b4644e */
  if (!C.zf) goto L_10b4644e;
  /* 10b46436 mov dword ptr [ebp - 8], 0x10b6e5bc */
  w32((uint32_t)(EBP + -0x8), (0x10b6e5bcu));
  /* 10b4643d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46440 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b46442 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b46445 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b4644c jmp 0x10b46464 */
  goto L_10b46464;
L_10b4644e:;
  /* 10b4644e mov dword ptr [ebp - 8], 0x10b6e5c0 */
  w32((uint32_t)(EBP + -0x8), (0x10b6e5c0u));
  /* 10b46455 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46458 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4645a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4645d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10b46464:;
  /* 10b46464 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46468 jne 0x10b46478 */
  if (!C.zf) goto L_10b46478;
  /* 10b4646a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4646c call 0x10b46ac0 */
  push32(0x10b46471u); f_10b46ac0();
  /* 10b46471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46476 jmp 0x10b464ac */
  goto L_10b464ac;
L_10b46478:;
  /* 10b46478 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4647c je 0x10b4649d */
  if (C.zf) goto L_10b4649d;
  /* 10b4647e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46481 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10b46487 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b46489 call 0x10b46ac0 */
  push32(0x10b4648eu); f_10b46ac0();
  /* 10b4648e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46494 push edx */
  push32((uint32_t)(EDX));
  /* 10b46495 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10b46498u);
  /* 10b46498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4649b jmp 0x10b464a7 */
  goto L_10b464a7;
L_10b4649d:;
  /* 10b4649d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4649f call 0x10b46ac0 */
  push32(0x10b464a4u); f_10b46ac0();
  /* 10b464a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b464a7:;
  /* 10b464a7 mov eax, 1 */
  EAX = (0x1u);
L_10b464ac:;
  /* 10b464ac mov esp, ebp */
  ESP = (EBP);
  /* 10b464ae pop ebp */
  EBP = (pop32());
  /* 10b464af ret 4 */
  ESPCHK(0x10b46420u, _esp0);
  ESP += 8; return;
}

/* FUN_100064c0 @ 0x10b464c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10b464c0(void) {
  FTRACE(0x10b464c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b464c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b464c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b464c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b464c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b464cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b464d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b464d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b464d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b464d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b464dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b464e0 ja 0x10b4658e */
  if ((!C.cf&&!C.zf)) goto L_10b4658e;
  /* 10b464e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b464e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b464eb mov dl, byte ptr [eax + 0x10b466e2] */
  DL = (r8((uint32_t)(EAX + 0x10b466e2)));
  /* 10b464f1 jmp dword ptr [edx*4 + 0x10b466ca] */
  switch (EDX) {
    case 0: goto L_10b464f8;
    case 1: goto L_10b46563;
    case 2: goto L_10b46549;
    case 3: goto L_10b46515;
    case 4: goto L_10b4652f;
    case 5: goto L_10b4658e;
    default: x86_unimpl("switch@0x10b464f1 out of table"); return;
  }
L_10b464f8:;
  /* 10b464f8 mov dword ptr [ebp - 0x18], 0x10b6e5bc */
  w32((uint32_t)(EBP + -0x18), (0x10b6e5bcu));
  /* 10b464ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b46502 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b46504 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b46507 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4650a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4650d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b46510 jmp 0x10b46596 */
  goto L_10b46596;
L_10b46515:;
  /* 10b46515 mov dword ptr [ebp - 0x18], 0x10b6e5c0 */
  w32((uint32_t)(EBP + -0x18), (0x10b6e5c0u));
  /* 10b4651c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4651f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b46521 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b46524 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b46527 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4652a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4652d jmp 0x10b46596 */
  goto L_10b46596;
L_10b4652f:;
  /* 10b4652f mov dword ptr [ebp - 0x18], 0x10b6e5c4 */
  w32((uint32_t)(EBP + -0x18), (0x10b6e5c4u));
  /* 10b46536 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b46539 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4653b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b4653e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b46541 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46544 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b46547 jmp 0x10b46596 */
  goto L_10b46596;
L_10b46549:;
  /* 10b46549 mov dword ptr [ebp - 0x18], 0x10b6e5c8 */
  w32((uint32_t)(EBP + -0x18), (0x10b6e5c8u));
  /* 10b46550 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b46553 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b46555 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b46558 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4655b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4655e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b46561 jmp 0x10b46596 */
  goto L_10b46596;
L_10b46563:;
  /* 10b46563 call 0x10b42a60 */
  push32(0x10b46568u); f_10b42a60();
  /* 10b46568 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4656b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4656e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b46571 push edx */
  push32((uint32_t)(EDX));
  /* 10b46572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46575 push eax */
  push32((uint32_t)(EAX));
  /* 10b46576 call 0x10b46700 */
  push32(0x10b4657bu); f_10b46700();
  /* 10b4657b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4657e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46581 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b46584 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b46587 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b46589 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b4658c jmp 0x10b46596 */
  goto L_10b46596;
L_10b4658e:;
  /* 10b4658e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b46591 jmp 0x10b466c6 */
  goto L_10b466c6;
L_10b46596:;
  /* 10b46596 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4659a je 0x10b465a6 */
  if (C.zf) goto L_10b465a6;
  /* 10b4659c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4659e call 0x10b46a20 */
  push32(0x10b465a3u); f_10b46a20();
  /* 10b465a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b465a6:;
  /* 10b465a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465aa jne 0x10b465c3 */
  if (!C.zf) goto L_10b465c3;
  /* 10b465ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465b0 je 0x10b465bc */
  if (C.zf) goto L_10b465bc;
  /* 10b465b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b465b4 call 0x10b46ac0 */
  push32(0x10b465b9u); f_10b46ac0();
  /* 10b465b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b465bc:;
  /* 10b465bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b465be jmp 0x10b466c6 */
  goto L_10b466c6;
L_10b465c3:;
  /* 10b465c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465c7 jne 0x10b465e0 */
  if (!C.zf) goto L_10b465e0;
  /* 10b465c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465cd je 0x10b465d9 */
  if (C.zf) goto L_10b465d9;
  /* 10b465cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10b465d1 call 0x10b46ac0 */
  push32(0x10b465d6u); f_10b46ac0();
  /* 10b465d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b465d9:;
  /* 10b465d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b465db call 0x10b427e0 */
  push32(0x10b465e0u); f_10b427e0();
L_10b465e0:;
  /* 10b465e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465e4 je 0x10b465f2 */
  if (C.zf) goto L_10b465f2;
  /* 10b465e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465ea je 0x10b465f2 */
  if (C.zf) goto L_10b465f2;
  /* 10b465ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b465f0 jne 0x10b4661e */
  if (!C.zf) goto L_10b4661e;
L_10b465f2:;
  /* 10b465f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b465f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10b465f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b465fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b465fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10b46605 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46609 jne 0x10b4661e */
  if (!C.zf) goto L_10b4661e;
  /* 10b4660b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4660e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10b46611 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b46614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46617 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10b4661e:;
  /* 10b4661e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46622 jne 0x10b46660 */
  if (!C.zf) goto L_10b46660;
  /* 10b46624 mov eax, dword ptr [0x10b6cc78] */
  EAX = (r32((uint32_t)(0x10b6cc78)));
  /* 10b46629 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b4662c jmp 0x10b46637 */
  goto L_10b46637;
L_10b4662e:;
  /* 10b4662e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46631 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46634 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b46637:;
  /* 10b46637 mov edx, dword ptr [0x10b6cc78] */
  EDX = (r32((uint32_t)(0x10b6cc78)));
  /* 10b4663d add edx, dword ptr [0x10b6cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46643 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46646 jge 0x10b4665e */
  if ((C.sf==C.of)) goto L_10b4665e;
  /* 10b46648 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4664b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4664e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46651 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b46654 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10b4665c jmp 0x10b4662e */
  goto L_10b4662e;
L_10b4665e:;
  /* 10b4665e jmp 0x10b46669 */
  goto L_10b46669;
L_10b46660:;
  /* 10b46660 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b46663 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b46669:;
  /* 10b46669 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4666d je 0x10b46679 */
  if (C.zf) goto L_10b46679;
  /* 10b4666f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b46671 call 0x10b46ac0 */
  push32(0x10b46676u); f_10b46ac0();
  /* 10b46676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b46679:;
  /* 10b46679 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4667d jne 0x10b46690 */
  if (!C.zf) goto L_10b46690;
  /* 10b4667f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46682 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10b46685 push edx */
  push32((uint32_t)(EDX));
  /* 10b46686 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b46688 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10b4668bu);
  /* 10b4668b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4668e jmp 0x10b4669a */
  goto L_10b4669a;
L_10b46690:;
  /* 10b46690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46693 push eax */
  push32((uint32_t)(EAX));
  /* 10b46694 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10b46697u);
  /* 10b46697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4669a:;
  /* 10b4669a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4669e je 0x10b466ac */
  if (C.zf) goto L_10b466ac;
  /* 10b466a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b466a4 je 0x10b466ac */
  if (C.zf) goto L_10b466ac;
  /* 10b466a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b466aa jne 0x10b466c4 */
  if (!C.zf) goto L_10b466c4;
L_10b466ac:;
  /* 10b466ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b466af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b466b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10b466b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b466b9 jne 0x10b466c4 */
  if (!C.zf) goto L_10b466c4;
  /* 10b466bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b466be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b466c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10b466c4:;
  /* 10b466c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b466c6:;
  /* 10b466c6 mov esp, ebp */
  ESP = (EBP);
  /* 10b466c8 pop ebp */
  EBP = (pop32());
  /* 10b466c9 ret  */
  ESPCHK(0x10b464c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x10b46700 (91 bytes, 35 insns) */
void f_10b46700(void) {
  FTRACE(0x10b46700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46700 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46701 mov ebp, esp */
  EBP = (ESP);
  /* 10b46703 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46707 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4670a:;
  /* 10b4670a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4670d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b46710 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46713 je 0x10b46733 */
  if (C.zf) goto L_10b46733;
  /* 10b46715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46718 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4671b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4671e mov ecx, dword ptr [0x10b6cc84] */
  ECX = (r32((uint32_t)(0x10b6cc84)));
  /* 10b46724 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b46727 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4672a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4672c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4672f jae 0x10b46733 */
  if (!C.cf) goto L_10b46733;
  /* 10b46731 jmp 0x10b4670a */
  goto L_10b4670a;
L_10b46733:;
  /* 10b46733 mov eax, dword ptr [0x10b6cc84] */
  EAX = (r32((uint32_t)(0x10b6cc84)));
  /* 10b46738 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4673b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4673e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46740 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46743 jae 0x10b46755 */
  if (!C.cf) goto L_10b46755;
  /* 10b46745 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46748 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b4674b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4674e jne 0x10b46755 */
  if (!C.zf) goto L_10b46755;
  /* 10b46750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46753 jmp 0x10b46757 */
  goto L_10b46757;
L_10b46755:;
  /* 10b46755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b46757:;
  /* 10b46757 mov esp, ebp */
  ESP = (EBP);
  /* 10b46759 pop ebp */
  EBP = (pop32());
  /* 10b4675a ret  */
  ESPCHK(0x10b46700u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10b46760 (13 bytes, 6 insns) */
void f_10b46760(void) {
  FTRACE(0x10b46760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46760 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46761 mov ebp, esp */
  EBP = (ESP);
  /* 10b46763 call 0x10b42a60 */
  push32(0x10b46768u); f_10b42a60();
  /* 10b46768 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4676b pop ebp */
  EBP = (pop32());
  /* 10b4676c ret  */
  ESPCHK(0x10b46760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x10b46770 (13 bytes, 6 insns) */
void f_10b46770(void) {
  FTRACE(0x10b46770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46770 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46771 mov ebp, esp */
  EBP = (ESP);
  /* 10b46773 call 0x10b42a60 */
  push32(0x10b46778u); f_10b42a60();
  /* 10b46778 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4677b pop ebp */
  EBP = (pop32());
  /* 10b4677c ret  */
  ESPCHK(0x10b46770u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x10b46780 (187 bytes, 54 insns) */
void f_10b46780(void) {
  FTRACE(0x10b46780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46780 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46781 mov ebp, esp */
  EBP = (ESP);
  /* 10b46783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b46786 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4678d cmp dword ptr [0x10b6e5d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46794 jne 0x10b467f3 */
  if (!C.zf) goto L_10b467f3;
  /* 10b46796 push 0x10b692cc */
  push32((uint32_t)(0x10b692ccu));
  /* 10b4679b call dword ptr [0x10b702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702cc))), 0x10b467a1u);
  /* 10b467a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b467a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b467a8 je 0x10b467c7 */
  if (C.zf) goto L_10b467c7;
  /* 10b467aa push 0x10b69ed0 */
  push32((uint32_t)(0x10b69ed0u));
  /* 10b467af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b467b2 push eax */
  push32((uint32_t)(EAX));
  /* 10b467b3 call dword ptr [0x10b702c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c8))), 0x10b467b9u);
  /* 10b467b9 mov dword ptr [0x10b6e5d0], eax */
  w32((uint32_t)(0x10b6e5d0), (EAX));
  /* 10b467be cmp dword ptr [0x10b6e5d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b467c5 jne 0x10b467cb */
  if (!C.zf) goto L_10b467cb;
L_10b467c7:;
  /* 10b467c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b467c9 jmp 0x10b46837 */
  goto L_10b46837;
L_10b467cb:;
  /* 10b467cb push 0x10b69ec0 */
  push32((uint32_t)(0x10b69ec0u));
  /* 10b467d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b467d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b467d4 call dword ptr [0x10b702c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c8))), 0x10b467dau);
  /* 10b467da mov dword ptr [0x10b6e5d4], eax */
  w32((uint32_t)(0x10b6e5d4), (EAX));
  /* 10b467df push 0x10b69eac */
  push32((uint32_t)(0x10b69eacu));
  /* 10b467e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b467e7 push edx */
  push32((uint32_t)(EDX));
  /* 10b467e8 call dword ptr [0x10b702c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c8))), 0x10b467eeu);
  /* 10b467ee mov dword ptr [0x10b6e5d8], eax */
  w32((uint32_t)(0x10b6e5d8), (EAX));
L_10b467f3:;
  /* 10b467f3 cmp dword ptr [0x10b6e5d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b467fa je 0x10b46805 */
  if (C.zf) goto L_10b46805;
  /* 10b467fc call dword ptr [0x10b6e5d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e5d4))), 0x10b46802u);
  /* 10b46802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b46805:;
  /* 10b46805 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46809 je 0x10b46821 */
  if (C.zf) goto L_10b46821;
  /* 10b4680b cmp dword ptr [0x10b6e5d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e5d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46812 je 0x10b46821 */
  if (C.zf) goto L_10b46821;
  /* 10b46814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46817 push eax */
  push32((uint32_t)(EAX));
  /* 10b46818 call dword ptr [0x10b6e5d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e5d8))), 0x10b4681eu);
  /* 10b4681e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b46821:;
  /* 10b46821 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b46824 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46825 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46828 push edx */
  push32((uint32_t)(EDX));
  /* 10b46829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4682c push eax */
  push32((uint32_t)(EAX));
  /* 10b4682d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46830 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46831 call dword ptr [0x10b6e5d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e5d0))), 0x10b46837u);
L_10b46837:;
  /* 10b46837 mov esp, ebp */
  ESP = (EBP);
  /* 10b46839 pop ebp */
  EBP = (pop32());
  /* 10b4683a ret  */
  ESPCHK(0x10b46780u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10b46840 (254 bytes, 109 insns) */
void f_10b46840(void) {
  FTRACE(0x10b46840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46840 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b46844 push edi */
  push32((uint32_t)(EDI));
  /* 10b46845 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b46847 je 0x10b468c3 */
  if (C.zf) goto L_10b468c3;
  /* 10b46849 push esi */
  push32((uint32_t)(ESI));
  /* 10b4684a push ebx */
  push32((uint32_t)(EBX));
  /* 10b4684b mov ebx, ecx */
  EBX = (ECX);
  /* 10b4684d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10b46851 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b46857 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10b4685b jne 0x10b46864 */
  if (!C.zf) goto L_10b46864;
  /* 10b4685d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b46860 jne 0x10b468d1 */
  if (!C.zf) goto L_10b468d1;
  /* 10b46862 jmp 0x10b46885 */
  goto L_10b46885;
L_10b46864:;
  /* 10b46864 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b46866 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b46867 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b46869 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b4686a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b4686b je 0x10b46892 */
  if (C.zf) goto L_10b46892;
  /* 10b4686d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b4686f je 0x10b4689a */
  if (C.zf) goto L_10b4689a;
  /* 10b46871 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b46877 jne 0x10b46864 */
  if (!C.zf) goto L_10b46864;
  /* 10b46879 mov ebx, ecx */
  EBX = (ECX);
  /* 10b4687b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4687e jne 0x10b468d1 */
  if (!C.zf) goto L_10b468d1;
L_10b46880:;
  /* 10b46880 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b46883 je 0x10b46892 */
  if (C.zf) goto L_10b46892;
L_10b46885:;
  /* 10b46885 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b46887 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b46888 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4688a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b4688b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b4688d je 0x10b468be */
  if (C.zf) goto L_10b468be;
  /* 10b4688f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b46890 jne 0x10b46885 */
  if (!C.zf) goto L_10b46885;
L_10b46892:;
  /* 10b46892 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b46896 pop ebx */
  EBX = (pop32());
  /* 10b46897 pop esi */
  ESI = (pop32());
  /* 10b46898 pop edi */
  EDI = (pop32());
  /* 10b46899 ret  */
  ESPCHK(0x10b46840u, _esp0);
  ESP += 4; return;
L_10b4689a:;
  /* 10b4689a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b468a0 je 0x10b468b4 */
  if (C.zf) goto L_10b468b4;
L_10b468a2:;
  /* 10b468a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b468a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b468a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b468a6 je 0x10b46936 */
  if (C.zf) goto L_10b46936;
  /* 10b468ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b468b2 jne 0x10b468a2 */
  if (!C.zf) goto L_10b468a2;
L_10b468b4:;
  /* 10b468b4 mov ebx, ecx */
  EBX = (ECX);
  /* 10b468b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b468b9 jne 0x10b46927 */
  if (!C.zf) goto L_10b46927;
L_10b468bb:;
  /* 10b468bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b468bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10b468be:;
  /* 10b468be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b468bf jne 0x10b468bb */
  if (!C.zf) goto L_10b468bb;
  /* 10b468c1 pop ebx */
  EBX = (pop32());
  /* 10b468c2 pop esi */
  ESI = (pop32());
L_10b468c3:;
  /* 10b468c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b468c7 pop edi */
  EDI = (pop32());
  /* 10b468c8 ret  */
  ESPCHK(0x10b46840u, _esp0);
  ESP += 4; return;
L_10b468c9:;
  /* 10b468c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b468cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b468ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b468cf je 0x10b46880 */
  if (C.zf) goto L_10b46880;
L_10b468d1:;
  /* 10b468d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b468d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b468d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b468da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b468dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b468df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10b468e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b468e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b468e9 je 0x10b468c9 */
  if (C.zf) goto L_10b468c9;
  /* 10b468eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b468ed je 0x10b4691b */
  if (C.zf) goto L_10b4691b;
  /* 10b468ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b468f1 je 0x10b46911 */
  if (C.zf) goto L_10b46911;
  /* 10b468f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b468f9 je 0x10b46907 */
  if (C.zf) goto L_10b46907;
  /* 10b468fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b46901 jne 0x10b468c9 */
  if (!C.zf) goto L_10b468c9;
  /* 10b46903 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b46905 jmp 0x10b4691f */
  goto L_10b4691f;
L_10b46907:;
  /* 10b46907 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4690d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b4690f jmp 0x10b4691f */
  goto L_10b4691f;
L_10b46911:;
  /* 10b46911 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b46917 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b46919 jmp 0x10b4691f */
  goto L_10b4691f;
L_10b4691b:;
  /* 10b4691b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4691d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10b4691f:;
  /* 10b4691f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46924 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b46925 je 0x10b46931 */
  if (C.zf) goto L_10b46931;
L_10b46927:;
  /* 10b46927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b46929:;
  /* 10b46929 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10b4692b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4692e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b4692f jne 0x10b46929 */
  if (!C.zf) goto L_10b46929;
L_10b46931:;
  /* 10b46931 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b46934 jne 0x10b468bb */
  if (!C.zf) goto L_10b468bb;
L_10b46936:;
  /* 10b46936 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b4693a pop ebx */
  EBX = (pop32());
  /* 10b4693b pop esi */
  ESI = (pop32());
  /* 10b4693c pop edi */
  EDI = (pop32());
  /* 10b4693d ret  */
  ESPCHK(0x10b46840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006940 @ 0x10b46940 (55 bytes, 16 insns) */
void f_10b46940(void) {
  FTRACE(0x10b46940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46940 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46941 mov ebp, esp */
  EBP = (ESP);
  /* 10b46943 mov eax, dword ptr [0x10b6cb84] */
  EAX = (r32((uint32_t)(0x10b6cb84)));
  /* 10b46948 push eax */
  push32((uint32_t)(EAX));
  /* 10b46949 call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b4694fu);
  /* 10b4694f mov ecx, dword ptr [0x10b6cb74] */
  ECX = (r32((uint32_t)(0x10b6cb74)));
  /* 10b46955 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46956 call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b4695cu);
  /* 10b4695c mov edx, dword ptr [0x10b6cb64] */
  EDX = (r32((uint32_t)(0x10b6cb64)));
  /* 10b46962 push edx */
  push32((uint32_t)(EDX));
  /* 10b46963 call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b46969u);
  /* 10b46969 mov eax, dword ptr [0x10b6cb44] */
  EAX = (r32((uint32_t)(0x10b6cb44)));
  /* 10b4696e push eax */
  push32((uint32_t)(EAX));
  /* 10b4696f call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b46975u);
  /* 10b46975 pop ebp */
  EBP = (pop32());
  /* 10b46976 ret  */
  ESPCHK(0x10b46940u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x10b46980 (159 bytes, 47 insns) */
void f_10b46980(void) {
  FTRACE(0x10b46980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46980 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46981 mov ebp, esp */
  EBP = (ESP);
  /* 10b46983 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46984 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4698b jmp 0x10b46996 */
  goto L_10b46996;
L_10b4698d:;
  /* 10b4698d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b46996:;
  /* 10b46996 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4699a jge 0x10b469e9 */
  if ((C.sf==C.of)) goto L_10b469e9;
  /* 10b4699c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4699f cmp dword ptr [ecx*4 + 0x10b6cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b6cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b469a7 je 0x10b469e7 */
  if (C.zf) goto L_10b469e7;
  /* 10b469a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b469ad je 0x10b469e7 */
  if (C.zf) goto L_10b469e7;
  /* 10b469af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b469b3 je 0x10b469e7 */
  if (C.zf) goto L_10b469e7;
  /* 10b469b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b469b9 je 0x10b469e7 */
  if (C.zf) goto L_10b469e7;
  /* 10b469bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b469bf je 0x10b469e7 */
  if (C.zf) goto L_10b469e7;
  /* 10b469c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b469c4 mov eax, dword ptr [edx*4 + 0x10b6cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6cb40)));
  /* 10b469cb push eax */
  push32((uint32_t)(EAX));
  /* 10b469cc call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b469d2u);
  /* 10b469d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b469d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b469d7 mov edx, dword ptr [ecx*4 + 0x10b6cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6cb40)));
  /* 10b469de push edx */
  push32((uint32_t)(EDX));
  /* 10b469df call 0x10b43ab0 */
  push32(0x10b469e4u); f_10b43ab0();
  /* 10b469e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b469e7:;
  /* 10b469e7 jmp 0x10b4698d */
  goto L_10b4698d;
L_10b469e9:;
  /* 10b469e9 mov eax, dword ptr [0x10b6cb64] */
  EAX = (r32((uint32_t)(0x10b6cb64)));
  /* 10b469ee push eax */
  push32((uint32_t)(EAX));
  /* 10b469ef call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b469f5u);
  /* 10b469f5 mov ecx, dword ptr [0x10b6cb74] */
  ECX = (r32((uint32_t)(0x10b6cb74)));
  /* 10b469fb push ecx */
  push32((uint32_t)(ECX));
  /* 10b469fc call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b46a02u);
  /* 10b46a02 mov edx, dword ptr [0x10b6cb84] */
  EDX = (r32((uint32_t)(0x10b6cb84)));
  /* 10b46a08 push edx */
  push32((uint32_t)(EDX));
  /* 10b46a09 call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b46a0fu);
  /* 10b46a0f mov eax, dword ptr [0x10b6cb44] */
  EAX = (r32((uint32_t)(0x10b6cb44)));
  /* 10b46a14 push eax */
  push32((uint32_t)(EAX));
  /* 10b46a15 call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b46a1bu);
  /* 10b46a1b mov esp, ebp */
  ESP = (EBP);
  /* 10b46a1d pop ebp */
  EBP = (pop32());
  /* 10b46a1e ret  */
  ESPCHK(0x10b46980u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x10b46a20 (151 bytes, 46 insns) */
void f_10b46a20(void) {
  FTRACE(0x10b46a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46a21 mov ebp, esp */
  EBP = (ESP);
  /* 10b46a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46a27 cmp dword ptr [eax*4 + 0x10b6cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10b6cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46a2f jne 0x10b46aa2 */
  if (!C.zf) goto L_10b46aa2;
  /* 10b46a31 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10b46a36 push 0x10b69edc */
  push32((uint32_t)(0x10b69edcu));
  /* 10b46a3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b46a3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b46a3f call 0x10b43020 */
  push32(0x10b46a44u); f_10b43020();
  /* 10b46a44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46a47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46a4a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46a4e jne 0x10b46a5a */
  if (!C.zf) goto L_10b46a5a;
  /* 10b46a50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b46a52 call 0x10b41f90 */
  push32(0x10b46a57u); f_10b41f90();
  /* 10b46a57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b46a5a:;
  /* 10b46a5a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b46a5c call 0x10b46a20 */
  push32(0x10b46a61u); f_10b46a20();
  /* 10b46a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46a64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46a67 cmp dword ptr [ecx*4 + 0x10b6cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b6cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46a6f jne 0x10b46a8a */
  if (!C.zf) goto L_10b46a8a;
  /* 10b46a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46a74 push edx */
  push32((uint32_t)(EDX));
  /* 10b46a75 call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b46a7bu);
  /* 10b46a7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46a81 mov dword ptr [eax*4 + 0x10b6cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10b6cb40), (ECX));
  /* 10b46a88 jmp 0x10b46a98 */
  goto L_10b46a98;
L_10b46a8a:;
  /* 10b46a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b46a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46a8f push edx */
  push32((uint32_t)(EDX));
  /* 10b46a90 call 0x10b43ab0 */
  push32(0x10b46a95u); f_10b43ab0();
  /* 10b46a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b46a98:;
  /* 10b46a98 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b46a9a call 0x10b46ac0 */
  push32(0x10b46a9fu); f_10b46ac0();
  /* 10b46a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b46aa2:;
  /* 10b46aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46aa5 mov ecx, dword ptr [eax*4 + 0x10b6cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6cb40)));
  /* 10b46aac push ecx */
  push32((uint32_t)(ECX));
  /* 10b46aad call dword ptr [0x10b7034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7034c))), 0x10b46ab3u);
  /* 10b46ab3 mov esp, ebp */
  ESP = (EBP);
  /* 10b46ab5 pop ebp */
  EBP = (pop32());
  /* 10b46ab6 ret  */
  ESPCHK(0x10b46a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10b46ac0 (22 bytes, 8 insns) */
void f_10b46ac0(void) {
  FTRACE(0x10b46ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46ac6 mov ecx, dword ptr [eax*4 + 0x10b6cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6cb40)));
  /* 10b46acd push ecx */
  push32((uint32_t)(ECX));
  /* 10b46ace call dword ptr [0x10b70350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70350))), 0x10b46ad4u);
  /* 10b46ad4 pop ebp */
  EBP = (pop32());
  /* 10b46ad5 ret  */
  ESPCHK(0x10b46ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae0 @ 0x10b46ae0 (26 bytes, 10 insns) */
void f_10b46ae0(void) {
  FTRACE(0x10b46ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46ae6 push eax */
  push32((uint32_t)(EAX));
  /* 10b46ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b46ae9 call dword ptr [0x10b70354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70354))), 0x10b46aefu);
  /* 10b46aef push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b46af4 call dword ptr [0x10b702d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d8))), 0x10b46afau);
  /* 10b46afa pop ebp */
  EBP = (pop32());
  /* 10b46afb ret  */
  ESPCHK(0x10b46ae0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10b46b00 (446 bytes, 130 insns) */
void f_10b46b00(void) {
  FTRACE(0x10b46b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46b01 mov ebp, esp */
  EBP = (ESP);
  /* 10b46b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b46b06 call 0x10b42a60 */
  push32(0x10b46b0bu); f_10b42a60();
  /* 10b46b0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b46b0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46b11 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10b46b14 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46b15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46b18 push edx */
  push32((uint32_t)(EDX));
  /* 10b46b19 call 0x10b46cc0 */
  push32(0x10b46b1eu); f_10b46cc0();
  /* 10b46b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46b21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b46b24 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46b28 je 0x10b46b33 */
  if (C.zf) goto L_10b46b33;
  /* 10b46b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46b2d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46b31 jne 0x10b46b42 */
  if (!C.zf) goto L_10b46b42;
L_10b46b33:;
  /* 10b46b33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46b36 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46b37 call dword ptr [0x10b70358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70358))), 0x10b46b3du);
  /* 10b46b3d jmp 0x10b46cba */
  goto L_10b46cba;
L_10b46b42:;
  /* 10b46b42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46b45 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46b49 jne 0x10b46b5f */
  if (!C.zf) goto L_10b46b5f;
  /* 10b46b4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46b4e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b46b55 mov eax, 1 */
  EAX = (0x1u);
  /* 10b46b5a jmp 0x10b46cba */
  goto L_10b46cba;
L_10b46b5f:;
  /* 10b46b5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46b62 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46b66 jne 0x10b46b70 */
  if (!C.zf) goto L_10b46b70;
  /* 10b46b68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b46b6b jmp 0x10b46cba */
  goto L_10b46cba;
L_10b46b70:;
  /* 10b46b70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46b73 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b46b76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46b7c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10b46b7f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b46b82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46b85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46b88 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10b46b8b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46b8e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46b92 jne 0x10b46c97 */
  if (!C.zf) goto L_10b46c97;
  /* 10b46b98 mov eax, dword ptr [0x10b6cc78] */
  EAX = (r32((uint32_t)(0x10b6cc78)));
  /* 10b46b9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b46ba0 jmp 0x10b46bab */
  goto L_10b46bab;
L_10b46ba2:;
  /* 10b46ba2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b46ba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46ba8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b46bab:;
  /* 10b46bab mov edx, dword ptr [0x10b6cc78] */
  EDX = (r32((uint32_t)(0x10b6cc78)));
  /* 10b46bb1 add edx, dword ptr [0x10b6cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46bb7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46bba jge 0x10b46bd2 */
  if ((C.sf==C.of)) goto L_10b46bd2;
  /* 10b46bbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b46bbf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b46bc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46bc5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b46bc8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10b46bd0 jmp 0x10b46ba2 */
  goto L_10b46ba2;
L_10b46bd2:;
  /* 10b46bd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46bd5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10b46bd8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b46bdb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46bde cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46be4 jne 0x10b46bf5 */
  if (!C.zf) goto L_10b46bf5;
  /* 10b46be6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46be9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10b46bf0 jmp 0x10b46c7d */
  goto L_10b46c7d;
L_10b46bf5:;
  /* 10b46bf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46bf8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46bfe jne 0x10b46c0c */
  if (!C.zf) goto L_10b46c0c;
  /* 10b46c00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10b46c0a jmp 0x10b46c7d */
  goto L_10b46c7d;
L_10b46c0c:;
  /* 10b46c0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46c0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46c15 jne 0x10b46c23 */
  if (!C.zf) goto L_10b46c23;
  /* 10b46c17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10b46c21 jmp 0x10b46c7d */
  goto L_10b46c7d;
L_10b46c23:;
  /* 10b46c23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46c26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46c2c jne 0x10b46c3a */
  if (!C.zf) goto L_10b46c3a;
  /* 10b46c2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10b46c38 jmp 0x10b46c7d */
  goto L_10b46c7d;
L_10b46c3a:;
  /* 10b46c3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46c3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46c43 jne 0x10b46c51 */
  if (!C.zf) goto L_10b46c51;
  /* 10b46c45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10b46c4f jmp 0x10b46c7d */
  goto L_10b46c7d;
L_10b46c51:;
  /* 10b46c51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46c54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46c5a jne 0x10b46c68 */
  if (!C.zf) goto L_10b46c68;
  /* 10b46c5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10b46c66 jmp 0x10b46c7d */
  goto L_10b46c7d;
L_10b46c68:;
  /* 10b46c68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46c6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46c71 jne 0x10b46c7d */
  if (!C.zf) goto L_10b46c7d;
  /* 10b46c73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10b46c7d:;
  /* 10b46c7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10b46c83 push edx */
  push32((uint32_t)(EDX));
  /* 10b46c84 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b46c86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10b46c89u);
  /* 10b46c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46c8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46c8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b46c92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10b46c95 jmp 0x10b46cae */
  goto L_10b46cae;
L_10b46c97:;
  /* 10b46c97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46c9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10b46ca1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b46ca4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b46ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46ca8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10b46cabu);
  /* 10b46cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b46cae:;
  /* 10b46cae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46cb1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b46cb4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10b46cb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b46cba:;
  /* 10b46cba mov esp, ebp */
  ESP = (EBP);
  /* 10b46cbc pop ebp */
  EBP = (pop32());
  /* 10b46cbd ret  */
  ESPCHK(0x10b46b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x10b46cc0 (89 bytes, 35 insns) */
void f_10b46cc0(void) {
  FTRACE(0x10b46cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b46cca:;
  /* 10b46cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46ccd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b46ccf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46cd2 je 0x10b46cf2 */
  if (C.zf) goto L_10b46cf2;
  /* 10b46cd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46cd7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46cda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46cdd mov ecx, dword ptr [0x10b6cc84] */
  ECX = (r32((uint32_t)(0x10b6cc84)));
  /* 10b46ce3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b46ce6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46ce9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46ceb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46cee jae 0x10b46cf2 */
  if (!C.cf) goto L_10b46cf2;
  /* 10b46cf0 jmp 0x10b46cca */
  goto L_10b46cca;
L_10b46cf2:;
  /* 10b46cf2 mov eax, dword ptr [0x10b6cc84] */
  EAX = (r32((uint32_t)(0x10b6cc84)));
  /* 10b46cf7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b46cfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46cfd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46cff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46d02 jae 0x10b46d0e */
  if (!C.cf) goto L_10b46d0e;
  /* 10b46d04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46d07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b46d09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46d0c je 0x10b46d12 */
  if (C.zf) goto L_10b46d12;
L_10b46d0e:;
  /* 10b46d0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46d10 jmp 0x10b46d15 */
  goto L_10b46d15;
L_10b46d12:;
  /* 10b46d12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b46d15:;
  /* 10b46d15 mov esp, ebp */
  ESP = (EBP);
  /* 10b46d17 pop ebp */
  EBP = (pop32());
  /* 10b46d18 ret  */
  ESPCHK(0x10b46cc0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10b46d20 (48 bytes, 17 insns) */
void f_10b46d20(void) {
  FTRACE(0x10b46d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46d21 mov ebp, esp */
  EBP = (ESP);
  /* 10b46d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46d24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46d26 call 0x10b46a20 */
  push32(0x10b46d2bu); f_10b46a20();
  /* 10b46d2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46d2e mov eax, dword ptr [0x10b6e644] */
  EAX = (r32((uint32_t)(0x10b6e644)));
  /* 10b46d33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46d36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46d39 mov dword ptr [0x10b6e644], ecx */
  w32((uint32_t)(0x10b6e644), (ECX));
  /* 10b46d3f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46d41 call 0x10b46ac0 */
  push32(0x10b46d46u); f_10b46ac0();
  /* 10b46d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46d49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46d4c mov esp, ebp */
  ESP = (EBP);
  /* 10b46d4e pop ebp */
  EBP = (pop32());
  /* 10b46d4f ret  */
  ESPCHK(0x10b46d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x10b46d50 (10 bytes, 5 insns) */
void f_10b46d50(void) {
  FTRACE(0x10b46d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46d51 mov ebp, esp */
  EBP = (ESP);
  /* 10b46d53 mov eax, dword ptr [0x10b6e644] */
  EAX = (r32((uint32_t)(0x10b6e644)));
  /* 10b46d58 pop ebp */
  EBP = (pop32());
  /* 10b46d59 ret  */
  ESPCHK(0x10b46d50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10b46d60 (45 bytes, 19 insns) */
void f_10b46d60(void) {
  FTRACE(0x10b46d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46d61 mov ebp, esp */
  EBP = (ESP);
  /* 10b46d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46d64 mov eax, dword ptr [0x10b6e644] */
  EAX = (r32((uint32_t)(0x10b6e644)));
  /* 10b46d69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46d6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46d70 je 0x10b46d80 */
  if (C.zf) goto L_10b46d80;
  /* 10b46d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46d75 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46d76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10b46d79u);
  /* 10b46d79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b46d7e jne 0x10b46d84 */
  if (!C.zf) goto L_10b46d84;
L_10b46d80:;
  /* 10b46d80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46d82 jmp 0x10b46d89 */
  goto L_10b46d89;
L_10b46d84:;
  /* 10b46d84 mov eax, 1 */
  EAX = (0x1u);
L_10b46d89:;
  /* 10b46d89 mov esp, ebp */
  ESP = (EBP);
  /* 10b46d8b pop ebp */
  EBP = (pop32());
  /* 10b46d8c ret  */
  ESPCHK(0x10b46d60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10b46d90 (88 bytes, 40 insns) */
void f_10b46d90(void) {
  FTRACE(0x10b46d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46d90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b46d94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b46d98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b46d9a je 0x10b46de3 */
  if (C.zf) goto L_10b46de3;
  /* 10b46d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46d9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10b46da2 push edi */
  push32((uint32_t)(EDI));
  /* 10b46da3 mov edi, ecx */
  EDI = (ECX);
  /* 10b46da5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46da8 jb 0x10b46dd7 */
  if (C.cf) goto L_10b46dd7;
  /* 10b46daa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b46dac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b46daf je 0x10b46db9 */
  if (C.zf) goto L_10b46db9;
  /* 10b46db1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b46db3:;
  /* 10b46db3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b46db5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b46db6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b46db7 jne 0x10b46db3 */
  if (!C.zf) goto L_10b46db3;
L_10b46db9:;
  /* 10b46db9 mov ecx, eax */
  ECX = (EAX);
  /* 10b46dbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b46dbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46dc0 mov ecx, eax */
  ECX = (EAX);
  /* 10b46dc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b46dc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46dc7 mov ecx, edx */
  ECX = (EDX);
  /* 10b46dc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b46dcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b46dcf je 0x10b46dd7 */
  if (C.zf) goto L_10b46dd7;
  /* 10b46dd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b46dd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b46dd5 je 0x10b46ddd */
  if (C.zf) goto L_10b46ddd;
L_10b46dd7:;
  /* 10b46dd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b46dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b46dda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10b46ddb jne 0x10b46dd7 */
  if (!C.zf) goto L_10b46dd7;
L_10b46ddd:;
  /* 10b46ddd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b46de1 pop edi */
  EDI = (pop32());
  /* 10b46de2 ret  */
  ESPCHK(0x10b46d90u, _esp0);
  ESP += 4; return;
L_10b46de3:;
  /* 10b46de3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b46de7 ret  */
  ESPCHK(0x10b46d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x10b46df0 (23 bytes, 10 insns) */
void f_10b46df0(void) {
  FTRACE(0x10b46df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46df1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46df3 mov eax, dword ptr [0x10b6e640] */
  EAX = (r32((uint32_t)(0x10b6e640)));
  /* 10b46df8 push eax */
  push32((uint32_t)(EAX));
  /* 10b46df9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46dfc push ecx */
  push32((uint32_t)(ECX));
  /* 10b46dfd call 0x10b46e10 */
  push32(0x10b46e02u); f_10b46e10();
  /* 10b46e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46e05 pop ebp */
  EBP = (pop32());
  /* 10b46e06 ret  */
  ESPCHK(0x10b46df0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10b46e10 (87 bytes, 34 insns) */
void f_10b46e10(void) {
  FTRACE(0x10b46e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46e11 mov ebp, esp */
  EBP = (ESP);
  /* 10b46e13 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46e14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46e18 jbe 0x10b46e1e */
  if ((C.cf||C.zf)) goto L_10b46e1e;
  /* 10b46e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46e1c jmp 0x10b46e63 */
  goto L_10b46e63;
L_10b46e1e:;
  /* 10b46e1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46e22 ja 0x10b46e35 */
  if ((!C.cf&&!C.zf)) goto L_10b46e35;
  /* 10b46e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46e27 push eax */
  push32((uint32_t)(EAX));
  /* 10b46e28 call 0x10b46e70 */
  push32(0x10b46e2du); f_10b46e70();
  /* 10b46e2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46e30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46e33 jmp 0x10b46e3c */
  goto L_10b46e3c;
L_10b46e35:;
  /* 10b46e35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b46e3c:;
  /* 10b46e3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46e40 jne 0x10b46e48 */
  if (!C.zf) goto L_10b46e48;
  /* 10b46e42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46e46 jne 0x10b46e4d */
  if (!C.zf) goto L_10b46e4d;
L_10b46e48:;
  /* 10b46e48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46e4b jmp 0x10b46e63 */
  goto L_10b46e63;
L_10b46e4d:;
  /* 10b46e4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46e50 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46e51 call 0x10b46d60 */
  push32(0x10b46e56u); f_10b46d60();
  /* 10b46e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b46e5b jne 0x10b46e61 */
  if (!C.zf) goto L_10b46e61;
  /* 10b46e5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46e5f jmp 0x10b46e63 */
  goto L_10b46e63;
L_10b46e61:;
  /* 10b46e61 jmp 0x10b46e1e */
  goto L_10b46e1e;
L_10b46e63:;
  /* 10b46e63 mov esp, ebp */
  ESP = (EBP);
  /* 10b46e65 pop ebp */
  EBP = (pop32());
  /* 10b46e66 ret  */
  ESPCHK(0x10b46e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e70 @ 0x10b46e70 (109 bytes, 37 insns) */
void f_10b46e70(void) {
  FTRACE(0x10b46e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46e71 mov ebp, esp */
  EBP = (ESP);
  /* 10b46e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46e77 cmp eax, dword ptr [0x10b6cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46e7d ja 0x10b46ead */
  if ((!C.cf&&!C.zf)) goto L_10b46ead;
  /* 10b46e7f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46e81 call 0x10b46a20 */
  push32(0x10b46e86u); f_10b46a20();
  /* 10b46e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46e89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46e8c push ecx */
  push32((uint32_t)(ECX));
  /* 10b46e8d call 0x10b479b0 */
  push32(0x10b46e92u); f_10b479b0();
  /* 10b46e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46e95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b46e98 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46e9a call 0x10b46ac0 */
  push32(0x10b46e9fu); f_10b46ac0();
  /* 10b46e9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46ea2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46ea6 je 0x10b46ead */
  if (C.zf) goto L_10b46ead;
  /* 10b46ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46eab jmp 0x10b46ed9 */
  goto L_10b46ed9;
L_10b46ead:;
  /* 10b46ead cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46eb1 jne 0x10b46eba */
  if (!C.zf) goto L_10b46eba;
  /* 10b46eb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10b46eba:;
  /* 10b46eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46ebd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46ec0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10b46ec3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b46ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10b46eca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b46ecc mov ecx, dword ptr [0x10b6fe0c] */
  ECX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b46ed2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46ed3 call dword ptr [0x10b70344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70344))), 0x10b46ed9u);
L_10b46ed9:;
  /* 10b46ed9 mov esp, ebp */
  ESP = (EBP);
  /* 10b46edb pop ebp */
  EBP = (pop32());
  /* 10b46edc ret  */
  ESPCHK(0x10b46e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ee0 @ 0x10b46ee0 (10 bytes, 5 insns) */
void f_10b46ee0(void) {
  FTRACE(0x10b46ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46ee3 mov eax, 1 */
  EAX = (0x1u);
  /* 10b46ee8 pop ebp */
  EBP = (pop32());
  /* 10b46ee9 ret  */
  ESPCHK(0x10b46ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x10b46ef0 (173 bytes, 59 insns) */
void f_10b46ef0(void) {
  FTRACE(0x10b46ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b46ef6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46efa jbe 0x10b46f03 */
  if ((C.cf||C.zf)) goto L_10b46f03;
  /* 10b46efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46efe jmp 0x10b46f99 */
  goto L_10b46f99;
L_10b46f03:;
  /* 10b46f03 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46f05 call 0x10b46a20 */
  push32(0x10b46f0au); f_10b46a20();
  /* 10b46f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46f0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46f10 push eax */
  push32((uint32_t)(EAX));
  /* 10b46f11 call 0x10b47320 */
  push32(0x10b46f16u); f_10b47320();
  /* 10b46f16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46f19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b46f1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46f20 je 0x10b46f61 */
  if (C.zf) goto L_10b46f61;
  /* 10b46f22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b46f29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46f2c cmp ecx, dword ptr [0x10b6cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46f32 ja 0x10b46f52 */
  if ((!C.cf&&!C.zf)) goto L_10b46f52;
  /* 10b46f34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46f37 push edx */
  push32((uint32_t)(EDX));
  /* 10b46f38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46f3b push eax */
  push32((uint32_t)(EAX));
  /* 10b46f3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b46f3f push ecx */
  push32((uint32_t)(ECX));
  /* 10b46f40 call 0x10b481f0 */
  push32(0x10b46f45u); f_10b481f0();
  /* 10b46f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b46f4a je 0x10b46f52 */
  if (C.zf) goto L_10b46f52;
  /* 10b46f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46f4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b46f52:;
  /* 10b46f52 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46f54 call 0x10b46ac0 */
  push32(0x10b46f59u); f_10b46ac0();
  /* 10b46f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b46f5f jmp 0x10b46f99 */
  goto L_10b46f99;
L_10b46f61:;
  /* 10b46f61 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46f63 call 0x10b46ac0 */
  push32(0x10b46f68u); f_10b46ac0();
  /* 10b46f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46f6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46f6f jne 0x10b46f78 */
  if (!C.zf) goto L_10b46f78;
  /* 10b46f71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10b46f78:;
  /* 10b46f78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46f7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46f7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10b46f80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b46f83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46f86 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46f8a push edx */
  push32((uint32_t)(EDX));
  /* 10b46f8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b46f8d mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b46f92 push eax */
  push32((uint32_t)(EAX));
  /* 10b46f93 call dword ptr [0x10b7035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7035c))), 0x10b46f99u);
L_10b46f99:;
  /* 10b46f99 mov esp, ebp */
  ESP = (EBP);
  /* 10b46f9b pop ebp */
  EBP = (pop32());
  /* 10b46f9c ret  */
  ESPCHK(0x10b46ef0u, _esp0);
  ESP += 4; return;
}

