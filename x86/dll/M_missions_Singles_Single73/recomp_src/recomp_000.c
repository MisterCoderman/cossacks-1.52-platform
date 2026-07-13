#include "recomp.h"

/* FUN_10001000 @ 0x11c31000 (52 bytes, 26 insns) */
void f_11c31000(void) {
  FTRACE(0x11c31000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31000 push ebx */
  push32((uint32_t)(EBX));
  /* 11c31001 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c31005 push ebp */
  push32((uint32_t)(EBP));
  /* 11c31006 push esi */
  push32((uint32_t)(ESI));
  /* 11c31007 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c31009 push edi */
  push32((uint32_t)(EDI));
  /* 11c3100a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3100c jle 0x11c3102d */
  if ((C.zf||C.sf!=C.of)) goto L_11c3102d;
  /* 11c3100e mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11c31012 mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
L_11c31016:;
  /* 11c31016 push ebp */
  push32((uint32_t)(EBP));
  /* 11c31017 push edi */
  push32((uint32_t)(EDI));
  /* 11c31018 call dword ptr [0x11c3d1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1c8))), 0x11c3101eu);
  /* 11c3101e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31023 jne 0x11c3102d */
  if (!C.zf) goto L_11c3102d;
  /* 11c31025 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c31026 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31029 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3102b jl 0x11c31016 */
  if ((C.sf!=C.of)) goto L_11c31016;
L_11c3102d:;
  /* 11c3102d mov eax, esi */
  EAX = (ESI);
  /* 11c3102f pop edi */
  EDI = (pop32());
  /* 11c31030 pop esi */
  ESI = (pop32());
  /* 11c31031 pop ebp */
  EBP = (pop32());
  /* 11c31032 pop ebx */
  EBX = (pop32());
  /* 11c31033 ret  */
  ESPCHK(0x11c31000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11c31090 (2162 bytes, 604 insns) */
void f_11c31090(void) {
  FTRACE(0x11c31090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31090 push ebx */
  push32((uint32_t)(EBX));
  /* 11c31091 push ebp */
  push32((uint32_t)(EBP));
  /* 11c31092 push esi */
  push32((uint32_t)(ESI));
  /* 11c31093 push edi */
  push32((uint32_t)(EDI));
  /* 11c31094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31096 call 0x11c33586 */
  push32(0x11c3109bu); f_11c33586();
  /* 11c3109b push eax */
  push32((uint32_t)(EAX));
  /* 11c3109c call 0x11c33557 */
  push32(0x11c310a1u); f_11c33557();
  /* 11c310a1 mov esi, dword ptr [0x11c3d184] */
  ESI = (r32((uint32_t)(0x11c3d184)));
  /* 11c310a7 push 0x11c3f51c */
  push32((uint32_t)(0x11c3f51cu));
  /* 11c310ac push 0x11c42d40 */
  push32((uint32_t)(0x11c42d40u));
  /* 11c310b1 call esi */
  call_ind((uint32_t)(ESI), 0x11c310b3u);
  /* 11c310b3 push 0x11c3f510 */
  push32((uint32_t)(0x11c3f510u));
  /* 11c310b8 push 0x11c42d48 */
  push32((uint32_t)(0x11c42d48u));
  /* 11c310bd call esi */
  call_ind((uint32_t)(ESI), 0x11c310bfu);
  /* 11c310bf push 0x11c3f504 */
  push32((uint32_t)(0x11c3f504u));
  /* 11c310c4 push 0x11c42d50 */
  push32((uint32_t)(0x11c42d50u));
  /* 11c310c9 call esi */
  call_ind((uint32_t)(ESI), 0x11c310cbu);
  /* 11c310cb push 0x11c3f4f8 */
  push32((uint32_t)(0x11c3f4f8u));
  /* 11c310d0 push 0x11c42d58 */
  push32((uint32_t)(0x11c42d58u));
  /* 11c310d5 call esi */
  call_ind((uint32_t)(ESI), 0x11c310d7u);
  /* 11c310d7 push 0x11c3f4ec */
  push32((uint32_t)(0x11c3f4ecu));
  /* 11c310dc push 0x11c42d60 */
  push32((uint32_t)(0x11c42d60u));
  /* 11c310e1 call esi */
  call_ind((uint32_t)(ESI), 0x11c310e3u);
  /* 11c310e3 call 0x11c33564 */
  push32(0x11c310e8u); f_11c33564();
  /* 11c310e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c310ed mov edi, dword ptr [0x11c3d188] */
  EDI = (r32((uint32_t)(0x11c3d188)));
  /* 11c310f3 push 0x11c3f4e0 */
  push32((uint32_t)(0x11c3f4e0u));
  /* 11c310f8 push 0x11c42d98 */
  push32((uint32_t)(0x11c42d98u));
  /* 11c310fd lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11c31100 mov eax, 0x80808081 */
  EAX = (0x80808081u);
  /* 11c31105 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c31107 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 11c31109 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3110b sar edx, 7 */
  EDX = (sh_sar((uint32_t)(EDX), (0x7u)&0x1f, 32));
  /* 11c3110e mov eax, edx */
  EAX = (EDX);
  /* 11c31110 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 11c31113 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31115 mov dword ptr [0x11c5295a], edx */
  w32((uint32_t)(0x11c5295a), (EDX));
  /* 11c3111b call edi */
  call_ind((uint32_t)(EDI), 0x11c3111du);
  /* 11c3111d push 0x11c3f4d8 */
  push32((uint32_t)(0x11c3f4d8u));
  /* 11c31122 push 0x11c566e8 */
  push32((uint32_t)(0x11c566e8u));
  /* 11c31127 call dword ptr [0x11c3d18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d18c))), 0x11c3112du);
  /* 11c3112d mov ebx, dword ptr [0x11c3d190] */
  EBX = (r32((uint32_t)(0x11c3d190)));
  /* 11c31133 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31136 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c31138 push 0x11c52528 */
  push32((uint32_t)(0x11c52528u));
  /* 11c3113d call ebx */
  call_ind((uint32_t)(EBX), 0x11c3113fu);
  /* 11c3113f push 0x11c52528 */
  push32((uint32_t)(0x11c52528u));
  /* 11c31144 call dword ptr [0x11c3d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d194))), 0x11c3114au);
  /* 11c3114a push 0x11c3f4cc */
  push32((uint32_t)(0x11c3f4ccu));
  /* 11c3114f push 0x11c566a0 */
  push32((uint32_t)(0x11c566a0u));
  /* 11c31154 call edi */
  call_ind((uint32_t)(EDI), 0x11c31156u);
  /* 11c31156 mov ebp, dword ptr [0x11c3d198] */
  EBP = (r32((uint32_t)(0x11c3d198)));
  /* 11c3115c push 0x11c3f4c4 */
  push32((uint32_t)(0x11c3f4c4u));
  /* 11c31161 push 0x11c43090 */
  push32((uint32_t)(0x11c43090u));
  /* 11c31166 call ebp */
  call_ind((uint32_t)(EBP), 0x11c31168u);
  /* 11c31168 push 0x11c3f4bc */
  push32((uint32_t)(0x11c3f4bcu));
  /* 11c3116d push 0x11c43098 */
  push32((uint32_t)(0x11c43098u));
  /* 11c31172 call ebp */
  call_ind((uint32_t)(EBP), 0x11c31174u);
  /* 11c31174 push 0x11c3f4b4 */
  push32((uint32_t)(0x11c3f4b4u));
  /* 11c31179 push 0x11c430a0 */
  push32((uint32_t)(0x11c430a0u));
  /* 11c3117e call ebp */
  call_ind((uint32_t)(EBP), 0x11c31180u);
  /* 11c31180 push 0x11c3f4ac */
  push32((uint32_t)(0x11c3f4acu));
  /* 11c31185 push 0x11c52758 */
  push32((uint32_t)(0x11c52758u));
  /* 11c3118a call esi */
  call_ind((uint32_t)(ESI), 0x11c3118cu);
  /* 11c3118c push 0x11c3f4a4 */
  push32((uint32_t)(0x11c3f4a4u));
  /* 11c31191 push 0x11c52760 */
  push32((uint32_t)(0x11c52760u));
  /* 11c31196 call esi */
  call_ind((uint32_t)(ESI), 0x11c31198u);
  /* 11c31198 push 0x11c3f49c */
  push32((uint32_t)(0x11c3f49cu));
  /* 11c3119d push 0x11c52768 */
  push32((uint32_t)(0x11c52768u));
  /* 11c311a2 call esi */
  call_ind((uint32_t)(ESI), 0x11c311a4u);
  /* 11c311a4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c311a7 push 0x11c3f494 */
  push32((uint32_t)(0x11c3f494u));
  /* 11c311ac push 0x11c42d70 */
  push32((uint32_t)(0x11c42d70u));
  /* 11c311b1 call ebp */
  call_ind((uint32_t)(EBP), 0x11c311b3u);
  /* 11c311b3 push 0x11c3f488 */
  push32((uint32_t)(0x11c3f488u));
  /* 11c311b8 push 0x11c52770 */
  push32((uint32_t)(0x11c52770u));
  /* 11c311bd call esi */
  call_ind((uint32_t)(ESI), 0x11c311bfu);
  /* 11c311bf push 0x11c3f47c */
  push32((uint32_t)(0x11c3f47cu));
  /* 11c311c4 push 0x11c52548 */
  push32((uint32_t)(0x11c52548u));
  /* 11c311c9 call edi */
  call_ind((uint32_t)(EDI), 0x11c311cbu);
  /* 11c311cb push 0x11c3f470 */
  push32((uint32_t)(0x11c3f470u));
  /* 11c311d0 push 0x11c527a8 */
  push32((uint32_t)(0x11c527a8u));
  /* 11c311d5 call edi */
  call_ind((uint32_t)(EDI), 0x11c311d7u);
  /* 11c311d7 push 0x11c3f464 */
  push32((uint32_t)(0x11c3f464u));
  /* 11c311dc push 0x11c52550 */
  push32((uint32_t)(0x11c52550u));
  /* 11c311e1 call edi */
  call_ind((uint32_t)(EDI), 0x11c311e3u);
  /* 11c311e3 push 0x11c3f458 */
  push32((uint32_t)(0x11c3f458u));
  /* 11c311e8 push 0x11c42d80 */
  push32((uint32_t)(0x11c42d80u));
  /* 11c311ed call edi */
  call_ind((uint32_t)(EDI), 0x11c311efu);
  /* 11c311ef push 0x11c3f44c */
  push32((uint32_t)(0x11c3f44cu));
  /* 11c311f4 push 0x11c42da0 */
  push32((uint32_t)(0x11c42da0u));
  /* 11c311f9 call edi */
  call_ind((uint32_t)(EDI), 0x11c311fbu);
  /* 11c311fb push 0x11c3f440 */
  push32((uint32_t)(0x11c3f440u));
  /* 11c31200 push 0x11c42d68 */
  push32((uint32_t)(0x11c42d68u));
  /* 11c31205 call edi */
  call_ind((uint32_t)(EDI), 0x11c31207u);
  /* 11c31207 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3120a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3120c push 0x11c52548 */
  push32((uint32_t)(0x11c52548u));
  /* 11c31211 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31213 call dword ptr [0x11c3d19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d19c))), 0x11c31219u);
  /* 11c31219 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3121b push 0x11c527a8 */
  push32((uint32_t)(0x11c527a8u));
  /* 11c31220 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31222 call dword ptr [0x11c3d19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d19c))), 0x11c31228u);
  /* 11c31228 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3122a push 0x11c52550 */
  push32((uint32_t)(0x11c52550u));
  /* 11c3122f push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31231 call dword ptr [0x11c3d19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d19c))), 0x11c31237u);
  /* 11c31237 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31239 push 0x11c42d80 */
  push32((uint32_t)(0x11c42d80u));
  /* 11c3123e push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31240 call dword ptr [0x11c3d19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d19c))), 0x11c31246u);
  /* 11c31246 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c31248 push 0x11c52850 */
  push32((uint32_t)(0x11c52850u));
  /* 11c3124d call ebx */
  call_ind((uint32_t)(EBX), 0x11c3124fu);
  /* 11c3124f push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c31251 push 0x11c527d8 */
  push32((uint32_t)(0x11c527d8u));
  /* 11c31256 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31258u);
  /* 11c31258 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3125b push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c3125d push 0x11c528c8 */
  push32((uint32_t)(0x11c528c8u));
  /* 11c31262 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31264u);
  /* 11c31264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31267 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c3126c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c3126e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31270 push 0x11c3f434 */
  push32((uint32_t)(0x11c3f434u));
  /* 11c31275 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31277 call 0x11c32ad0 */
  push32(0x11c3127cu); f_11c32ad0();
  /* 11c3127c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3127e mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c31283 call 0x11c32b90 */
  push32(0x11c31288u); f_11c32b90();
  /* 11c31288 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3128a mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c3128f call 0x11c32ba0 */
  push32(0x11c31294u); f_11c32ba0();
  /* 11c31294 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31296 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c3129b call 0x11c32b80 */
  push32(0x11c312a0u); f_11c32b80();
  /* 11c312a0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c312a5 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c312aa call 0x11c32bb0 */
  push32(0x11c312afu); f_11c32bb0();
  /* 11c312af push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c312b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c312b3 push 0x11c3f428 */
  push32((uint32_t)(0x11c3f428u));
  /* 11c312b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c312ba mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c312bf call 0x11c32ad0 */
  push32(0x11c312c4u); f_11c32ad0();
  /* 11c312c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c312c6 mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c312cb call 0x11c32b90 */
  push32(0x11c312d0u); f_11c32b90();
  /* 11c312d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c312d2 mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c312d7 call 0x11c32ba0 */
  push32(0x11c312dcu); f_11c32ba0();
  /* 11c312dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c312de mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c312e3 call 0x11c32b80 */
  push32(0x11c312e8u); f_11c32b80();
  /* 11c312e8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c312ed mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c312f2 call 0x11c32bb0 */
  push32(0x11c312f7u); f_11c32bb0();
  /* 11c312f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c312f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c312fb push 0x11c3f41c */
  push32((uint32_t)(0x11c3f41cu));
  /* 11c31300 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31302 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c31307 call 0x11c32ad0 */
  push32(0x11c3130cu); f_11c32ad0();
  /* 11c3130c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3130e mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c31313 call 0x11c32b90 */
  push32(0x11c31318u); f_11c32b90();
  /* 11c31318 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3131a mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c3131f call 0x11c32ba0 */
  push32(0x11c31324u); f_11c32ba0();
  /* 11c31324 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31326 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c3132b call 0x11c32b80 */
  push32(0x11c31330u); f_11c32b80();
  /* 11c31330 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c31335 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c3133a call 0x11c32bb0 */
  push32(0x11c3133fu); f_11c32bb0();
  /* 11c3133f push 0x11c3f410 */
  push32((uint32_t)(0x11c3f410u));
  /* 11c31344 push 0x11c430c0 */
  push32((uint32_t)(0x11c430c0u));
  /* 11c31349 call esi */
  call_ind((uint32_t)(ESI), 0x11c3134bu);
  /* 11c3134b push 0x11c3f404 */
  push32((uint32_t)(0x11c3f404u));
  /* 11c31350 push 0x11c430c8 */
  push32((uint32_t)(0x11c430c8u));
  /* 11c31355 call esi */
  call_ind((uint32_t)(ESI), 0x11c31357u);
  /* 11c31357 push 0x11c3f3f8 */
  push32((uint32_t)(0x11c3f3f8u));
  /* 11c3135c push 0x11c430b0 */
  push32((uint32_t)(0x11c430b0u));
  /* 11c31361 call esi */
  call_ind((uint32_t)(ESI), 0x11c31363u);
  /* 11c31363 push 0x11c3f3ec */
  push32((uint32_t)(0x11c3f3ecu));
  /* 11c31368 push 0x11c430b8 */
  push32((uint32_t)(0x11c430b8u));
  /* 11c3136d call esi */
  call_ind((uint32_t)(ESI), 0x11c3136fu);
  /* 11c3136f push 0x11c3f3e0 */
  push32((uint32_t)(0x11c3f3e0u));
  /* 11c31374 push 0x11c430a8 */
  push32((uint32_t)(0x11c430a8u));
  /* 11c31379 call esi */
  call_ind((uint32_t)(ESI), 0x11c3137bu);
  /* 11c3137b push 0x11c3f3d4 */
  push32((uint32_t)(0x11c3f3d4u));
  /* 11c31380 push 0x11c52510 */
  push32((uint32_t)(0x11c52510u));
  /* 11c31385 call esi */
  call_ind((uint32_t)(ESI), 0x11c31387u);
  /* 11c31387 push 0x11c3f3c8 */
  push32((uint32_t)(0x11c3f3c8u));
  /* 11c3138c push 0x11c52518 */
  push32((uint32_t)(0x11c52518u));
  /* 11c31391 call esi */
  call_ind((uint32_t)(ESI), 0x11c31393u);
  /* 11c31393 push 0x11c3f3bc */
  push32((uint32_t)(0x11c3f3bcu));
  /* 11c31398 push 0x11c52500 */
  push32((uint32_t)(0x11c52500u));
  /* 11c3139d call esi */
  call_ind((uint32_t)(ESI), 0x11c3139fu);
  /* 11c3139f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c313a2 push 0x11c3f3b0 */
  push32((uint32_t)(0x11c3f3b0u));
  /* 11c313a7 push 0x11c52508 */
  push32((uint32_t)(0x11c52508u));
  /* 11c313ac call esi */
  call_ind((uint32_t)(ESI), 0x11c313aeu);
  /* 11c313ae push 0x11c3f3a4 */
  push32((uint32_t)(0x11c3f3a4u));
  /* 11c313b3 push 0x11c524f8 */
  push32((uint32_t)(0x11c524f8u));
  /* 11c313b8 call esi */
  call_ind((uint32_t)(ESI), 0x11c313bau);
  /* 11c313ba push 0x11c3f398 */
  push32((uint32_t)(0x11c3f398u));
  /* 11c313bf push 0x11c43088 */
  push32((uint32_t)(0x11c43088u));
  /* 11c313c4 call esi */
  call_ind((uint32_t)(ESI), 0x11c313c6u);
  /* 11c313c6 push 0x11c3f38c */
  push32((uint32_t)(0x11c3f38cu));
  /* 11c313cb push 0x11c43078 */
  push32((uint32_t)(0x11c43078u));
  /* 11c313d0 call esi */
  call_ind((uint32_t)(ESI), 0x11c313d2u);
  /* 11c313d2 push 0x11c3f380 */
  push32((uint32_t)(0x11c3f380u));
  /* 11c313d7 push 0x11c43080 */
  push32((uint32_t)(0x11c43080u));
  /* 11c313dc call esi */
  call_ind((uint32_t)(ESI), 0x11c313deu);
  /* 11c313de push 0x11c3f374 */
  push32((uint32_t)(0x11c3f374u));
  /* 11c313e3 push 0x11c43060 */
  push32((uint32_t)(0x11c43060u));
  /* 11c313e8 call esi */
  call_ind((uint32_t)(ESI), 0x11c313eau);
  /* 11c313ea push 0x11c3f368 */
  push32((uint32_t)(0x11c3f368u));
  /* 11c313ef push 0x11c43070 */
  push32((uint32_t)(0x11c43070u));
  /* 11c313f4 call esi */
  call_ind((uint32_t)(ESI), 0x11c313f6u);
  /* 11c313f6 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c313f8 push 0x11c52570 */
  push32((uint32_t)(0x11c52570u));
  /* 11c313fd call ebx */
  call_ind((uint32_t)(EBX), 0x11c313ffu);
  /* 11c313ff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31402 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c31404 push 0x11c525e8 */
  push32((uint32_t)(0x11c525e8u));
  /* 11c31409 call ebx */
  call_ind((uint32_t)(EBX), 0x11c3140bu);
  /* 11c3140b push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c3140d push 0x11c52660 */
  push32((uint32_t)(0x11c52660u));
  /* 11c31412 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31414u);
  /* 11c31414 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c31416 push 0x11c526d8 */
  push32((uint32_t)(0x11c526d8u));
  /* 11c3141b call ebx */
  call_ind((uint32_t)(EBX), 0x11c3141du);
  /* 11c3141d push 0x11c3f360 */
  push32((uint32_t)(0x11c3f360u));
  /* 11c31422 push 0x11c42d78 */
  push32((uint32_t)(0x11c42d78u));
  /* 11c31427 call esi */
  call_ind((uint32_t)(ESI), 0x11c31429u);
  /* 11c31429 push 0x11c3f358 */
  push32((uint32_t)(0x11c3f358u));
  /* 11c3142e push 0x11c42d88 */
  push32((uint32_t)(0x11c42d88u));
  /* 11c31433 call esi */
  call_ind((uint32_t)(ESI), 0x11c31435u);
  /* 11c31435 push 0x11c3f350 */
  push32((uint32_t)(0x11c3f350u));
  /* 11c3143a push 0x11c42d90 */
  push32((uint32_t)(0x11c42d90u));
  /* 11c3143f call esi */
  call_ind((uint32_t)(ESI), 0x11c31441u);
  /* 11c31441 push 0x11c3f348 */
  push32((uint32_t)(0x11c3f348u));
  /* 11c31446 push 0x11c529a0 */
  push32((uint32_t)(0x11c529a0u));
  /* 11c3144b call esi */
  call_ind((uint32_t)(ESI), 0x11c3144du);
  /* 11c3144d push 0x11c3f33c */
  push32((uint32_t)(0x11c3f33cu));
  /* 11c31452 push 0x11c52538 */
  push32((uint32_t)(0x11c52538u));
  /* 11c31457 call esi */
  call_ind((uint32_t)(ESI), 0x11c31459u);
  /* 11c31459 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3145c push 0x11c3f330 */
  push32((uint32_t)(0x11c3f330u));
  /* 11c31461 push 0x11c527b0 */
  push32((uint32_t)(0x11c527b0u));
  /* 11c31466 call esi */
  call_ind((uint32_t)(ESI), 0x11c31468u);
  /* 11c31468 push 0x11c3f324 */
  push32((uint32_t)(0x11c3f324u));
  /* 11c3146d push 0x11c52798 */
  push32((uint32_t)(0x11c52798u));
  /* 11c31472 call esi */
  call_ind((uint32_t)(ESI), 0x11c31474u);
  /* 11c31474 push 0x11c3f318 */
  push32((uint32_t)(0x11c3f318u));
  /* 11c31479 push 0x11c52778 */
  push32((uint32_t)(0x11c52778u));
  /* 11c3147e call esi */
  call_ind((uint32_t)(ESI), 0x11c31480u);
  /* 11c31480 push 0x11c3f30c */
  push32((uint32_t)(0x11c3f30cu));
  /* 11c31485 push 0x11c52788 */
  push32((uint32_t)(0x11c52788u));
  /* 11c3148a call esi */
  call_ind((uint32_t)(ESI), 0x11c3148cu);
  /* 11c3148c push 0x11c3f300 */
  push32((uint32_t)(0x11c3f300u));
  /* 11c31491 push 0x11c52780 */
  push32((uint32_t)(0x11c52780u));
  /* 11c31496 call esi */
  call_ind((uint32_t)(ESI), 0x11c31498u);
  /* 11c31498 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3149b mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c314a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c314a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c314a4 push 0x11c3f2f0 */
  push32((uint32_t)(0x11c3f2f0u));
  /* 11c314a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c314ab call 0x11c32ad0 */
  push32(0x11c314b0u); f_11c32ad0();
  /* 11c314b0 mov esi, dword ptr [0x11c3d1a0] */
  ESI = (r32((uint32_t)(0x11c3d1a0)));
  /* 11c314b6 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c314bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c314bd call esi */
  call_ind((uint32_t)(ESI), 0x11c314bfu);
  /* 11c314bf mov ecx, 4 */
  ECX = (0x4u);
  /* 11c314c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c314c7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c314c9 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c314cc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c314cf shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c314d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11c314d2 push 0x11c3f2d8 */
  push32((uint32_t)(0x11c3f2d8u));
  /* 11c314d7 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c314dc call 0x11c32be0 */
  push32(0x11c314e1u); f_11c32be0();
  /* 11c314e1 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c314e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c314e8 call esi */
  call_ind((uint32_t)(ESI), 0x11c314eau);
  /* 11c314ea mov ecx, 4 */
  ECX = (0x4u);
  /* 11c314ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c314f2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c314f4 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c314f7 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c314fc lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c314ff push edx */
  push32((uint32_t)(EDX));
  /* 11c31500 push 0x11c3f2c0 */
  push32((uint32_t)(0x11c3f2c0u));
  /* 11c31505 call 0x11c32c10 */
  push32(0x11c3150au); f_11c32c10();
  /* 11c3150a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3150c call esi */
  call_ind((uint32_t)(ESI), 0x11c3150eu);
  /* 11c3150e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31511 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31514 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31519 push eax */
  push32((uint32_t)(EAX));
  /* 11c3151a call 0x11c32b90 */
  push32(0x11c3151fu); f_11c32b90();
  /* 11c3151f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31521 call esi */
  call_ind((uint32_t)(ESI), 0x11c31523u);
  /* 11c31523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31526 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31529 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c3152e push eax */
  push32((uint32_t)(EAX));
  /* 11c3152f call 0x11c32ba0 */
  push32(0x11c31534u); f_11c32ba0();
  /* 11c31534 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c31539 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c3153e call 0x11c32bb0 */
  push32(0x11c31543u); f_11c32bb0();
  /* 11c31543 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c31545 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31547 push 0x11c3f2b0 */
  push32((uint32_t)(0x11c3f2b0u));
  /* 11c3154c push 5 */
  push32((uint32_t)(0x5u));
  /* 11c3154e mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31553 call 0x11c32ad0 */
  push32(0x11c31558u); f_11c32ad0();
  /* 11c31558 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c3155d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3155f call esi */
  call_ind((uint32_t)(ESI), 0x11c31561u);
  /* 11c31561 mov ecx, 4 */
  ECX = (0x4u);
  /* 11c31566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31569 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3156b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c3156e mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31573 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c31576 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c31578 push eax */
  push32((uint32_t)(EAX));
  /* 11c31579 push 0x11c3f294 */
  push32((uint32_t)(0x11c3f294u));
  /* 11c3157e call 0x11c32be0 */
  push32(0x11c31583u); f_11c32be0();
  /* 11c31583 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c31588 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3158a call esi */
  call_ind((uint32_t)(ESI), 0x11c3158cu);
  /* 11c3158c mov ecx, 4 */
  ECX = (0x4u);
  /* 11c31591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31594 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c31596 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c31599 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c3159c push ecx */
  push32((uint32_t)(ECX));
  /* 11c3159d push 0x11c3f27c */
  push32((uint32_t)(0x11c3f27cu));
  /* 11c315a2 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c315a7 call 0x11c32c10 */
  push32(0x11c315acu); f_11c32c10();
  /* 11c315ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11c315ae call esi */
  call_ind((uint32_t)(ESI), 0x11c315b0u);
  /* 11c315b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c315b3 add eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c315b6 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c315bb push eax */
  push32((uint32_t)(EAX));
  /* 11c315bc call 0x11c32b90 */
  push32(0x11c315c1u); f_11c32b90();
  /* 11c315c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c315c3 call esi */
  call_ind((uint32_t)(ESI), 0x11c315c5u);
  /* 11c315c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c315c8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c315cb mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c315d0 push eax */
  push32((uint32_t)(EAX));
  /* 11c315d1 call 0x11c32ba0 */
  push32(0x11c315d6u); f_11c32ba0();
  /* 11c315d6 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 11c315db mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c315e0 call 0x11c32bb0 */
  push32(0x11c315e5u); f_11c32bb0();
  /* 11c315e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c315e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c315e9 push 0x11c3f26c */
  push32((uint32_t)(0x11c3f26cu));
  /* 11c315ee push 5 */
  push32((uint32_t)(0x5u));
  /* 11c315f0 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c315f5 call 0x11c32ad0 */
  push32(0x11c315fau); f_11c32ad0();
  /* 11c315fa push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c315ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31601 call esi */
  call_ind((uint32_t)(ESI), 0x11c31603u);
  /* 11c31603 mov ecx, 4 */
  ECX = (0x4u);
  /* 11c31608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3160b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3160d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c31610 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31615 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c31618 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11c3161a push edx */
  push32((uint32_t)(EDX));
  /* 11c3161b push 0x11c3f254 */
  push32((uint32_t)(0x11c3f254u));
  /* 11c31620 call 0x11c32be0 */
  push32(0x11c31625u); f_11c32be0();
  /* 11c31625 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c3162a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3162c call esi */
  call_ind((uint32_t)(ESI), 0x11c3162eu);
  /* 11c3162e mov ecx, 4 */
  ECX = (0x4u);
  /* 11c31633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31636 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c31638 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c3163b mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31640 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c31643 push eax */
  push32((uint32_t)(EAX));
  /* 11c31644 push 0x11c3f23c */
  push32((uint32_t)(0x11c3f23cu));
  /* 11c31649 call 0x11c32c10 */
  push32(0x11c3164eu); f_11c32c10();
  /* 11c3164e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31650 call esi */
  call_ind((uint32_t)(ESI), 0x11c31652u);
  /* 11c31652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31655 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31658 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c3165d push eax */
  push32((uint32_t)(EAX));
  /* 11c3165e call 0x11c32b90 */
  push32(0x11c31663u); f_11c32b90();
  /* 11c31663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31665 call esi */
  call_ind((uint32_t)(ESI), 0x11c31667u);
  /* 11c31667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3166a add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3166d mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31672 push eax */
  push32((uint32_t)(EAX));
  /* 11c31673 call 0x11c32ba0 */
  push32(0x11c31678u); f_11c32ba0();
  /* 11c31678 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11c3167d mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31682 call 0x11c32bb0 */
  push32(0x11c31687u); f_11c32bb0();
  /* 11c31687 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c31689 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3168b push 0x11c3f22c */
  push32((uint32_t)(0x11c3f22cu));
  /* 11c31690 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31692 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c31697 call 0x11c32ad0 */
  push32(0x11c3169cu); f_11c32ad0();
  /* 11c3169c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c316a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c316a3 call esi */
  call_ind((uint32_t)(ESI), 0x11c316a5u);
  /* 11c316a5 mov ecx, 4 */
  ECX = (0x4u);
  /* 11c316aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c316ad sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c316af lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c316b2 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c316b5 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c316b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c316b8 push 0x11c3f214 */
  push32((uint32_t)(0x11c3f214u));
  /* 11c316bd mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c316c2 call 0x11c32be0 */
  push32(0x11c316c7u); f_11c32be0();
  /* 11c316c7 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c316cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c316ce call esi */
  call_ind((uint32_t)(ESI), 0x11c316d0u);
  /* 11c316d0 mov ecx, 4 */
  ECX = (0x4u);
  /* 11c316d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c316d8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c316da lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c316dd mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c316e2 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c316e5 push edx */
  push32((uint32_t)(EDX));
  /* 11c316e6 push 0x11c3f1fc */
  push32((uint32_t)(0x11c3f1fcu));
  /* 11c316eb call 0x11c32c10 */
  push32(0x11c316f0u); f_11c32c10();
  /* 11c316f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c316f2 call esi */
  call_ind((uint32_t)(ESI), 0x11c316f4u);
  /* 11c316f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c316f7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c316fa mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c316ff push eax */
  push32((uint32_t)(EAX));
  /* 11c31700 call 0x11c32b90 */
  push32(0x11c31705u); f_11c32b90();
  /* 11c31705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31707 call esi */
  call_ind((uint32_t)(ESI), 0x11c31709u);
  /* 11c31709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3170c add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3170f mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c31714 push eax */
  push32((uint32_t)(EAX));
  /* 11c31715 call 0x11c32ba0 */
  push32(0x11c3171au); f_11c32ba0();
  /* 11c3171a push 0x2134 */
  push32((uint32_t)(0x2134u));
  /* 11c3171f mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c31724 call 0x11c32bb0 */
  push32(0x11c31729u); f_11c32bb0();
  /* 11c31729 push 0x11c3f1f4 */
  push32((uint32_t)(0x11c3f1f4u));
  /* 11c3172e push 0x11c56698 */
  push32((uint32_t)(0x11c56698u));
  /* 11c31733 call ebp */
  call_ind((uint32_t)(EBP), 0x11c31735u);
  /* 11c31735 push 0x11c3f1e0 */
  push32((uint32_t)(0x11c3f1e0u));
  /* 11c3173a push 0x11c52750 */
  push32((uint32_t)(0x11c52750u));
  /* 11c3173f call edi */
  call_ind((uint32_t)(EDI), 0x11c31741u);
  /* 11c31741 push 0x11c3f1cc */
  push32((uint32_t)(0x11c3f1ccu));
  /* 11c31746 push 0x11c52568 */
  push32((uint32_t)(0x11c52568u));
  /* 11c3174b call edi */
  call_ind((uint32_t)(EDI), 0x11c3174du);
  /* 11c3174d push 0x11c3f1b8 */
  push32((uint32_t)(0x11c3f1b8u));
  /* 11c31752 push 0x11c527c8 */
  push32((uint32_t)(0x11c527c8u));
  /* 11c31757 call edi */
  call_ind((uint32_t)(EDI), 0x11c31759u);
  /* 11c31759 push 0x11c3f1a4 */
  push32((uint32_t)(0x11c3f1a4u));
  /* 11c3175e push 0x11c52558 */
  push32((uint32_t)(0x11c52558u));
  /* 11c31763 call edi */
  call_ind((uint32_t)(EDI), 0x11c31765u);
  /* 11c31765 push 0x11c3f190 */
  push32((uint32_t)(0x11c3f190u));
  /* 11c3176a push 0x11c566a8 */
  push32((uint32_t)(0x11c566a8u));
  /* 11c3176f call edi */
  call_ind((uint32_t)(EDI), 0x11c31771u);
  /* 11c31771 push 0x11c3f184 */
  push32((uint32_t)(0x11c3f184u));
  /* 11c31776 push 0x11c42d38 */
  push32((uint32_t)(0x11c42d38u));
  /* 11c3177b call edi */
  call_ind((uint32_t)(EDI), 0x11c3177du);
  /* 11c3177d push 0x11c3f170 */
  push32((uint32_t)(0x11c3f170u));
  /* 11c31782 push 0x11c52540 */
  push32((uint32_t)(0x11c52540u));
  /* 11c31787 call edi */
  call_ind((uint32_t)(EDI), 0x11c31789u);
  /* 11c31789 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3178c push 0x11c3f160 */
  push32((uint32_t)(0x11c3f160u));
  /* 11c31791 push 0x11c52530 */
  push32((uint32_t)(0x11c52530u));
  /* 11c31796 call edi */
  call_ind((uint32_t)(EDI), 0x11c31798u);
  /* 11c31798 mov esi, dword ptr [0x11c3d1a4] */
  ESI = (r32((uint32_t)(0x11c3d1a4)));
  /* 11c3179e push 0x11c3f14c */
  push32((uint32_t)(0x11c3f14cu));
  /* 11c317a3 push 0x11c52790 */
  push32((uint32_t)(0x11c52790u));
  /* 11c317a8 call esi */
  call_ind((uint32_t)(ESI), 0x11c317aau);
  /* 11c317aa push 0x11c3f138 */
  push32((uint32_t)(0x11c3f138u));
  /* 11c317af push 0x11c527a0 */
  push32((uint32_t)(0x11c527a0u));
  /* 11c317b4 call esi */
  call_ind((uint32_t)(ESI), 0x11c317b6u);
  /* 11c317b6 push 0x11c3f130 */
  push32((uint32_t)(0x11c3f130u));
  /* 11c317bb push 0x11c52978 */
  push32((uint32_t)(0x11c52978u));
  /* 11c317c0 call esi */
  call_ind((uint32_t)(ESI), 0x11c317c2u);
  /* 11c317c2 push 0x11c3f128 */
  push32((uint32_t)(0x11c3f128u));
  /* 11c317c7 push 0x11c52980 */
  push32((uint32_t)(0x11c52980u));
  /* 11c317cc call esi */
  call_ind((uint32_t)(ESI), 0x11c317ceu);
  /* 11c317ce push 0x11c3f120 */
  push32((uint32_t)(0x11c3f120u));
  /* 11c317d3 push 0x11c52988 */
  push32((uint32_t)(0x11c52988u));
  /* 11c317d8 call esi */
  call_ind((uint32_t)(ESI), 0x11c317dau);
  /* 11c317da push 0x11c3f118 */
  push32((uint32_t)(0x11c3f118u));
  /* 11c317df push 0x11c42da8 */
  push32((uint32_t)(0x11c42da8u));
  /* 11c317e4 call esi */
  call_ind((uint32_t)(ESI), 0x11c317e6u);
  /* 11c317e6 push 0x11c3f110 */
  push32((uint32_t)(0x11c3f110u));
  /* 11c317eb push 0x11c527b8 */
  push32((uint32_t)(0x11c527b8u));
  /* 11c317f0 call esi */
  call_ind((uint32_t)(ESI), 0x11c317f2u);
  /* 11c317f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c317f5 push 0x11c3f108 */
  push32((uint32_t)(0x11c3f108u));
  /* 11c317fa push 0x11c527c0 */
  push32((uint32_t)(0x11c527c0u));
  /* 11c317ff call esi */
  call_ind((uint32_t)(ESI), 0x11c31801u);
  /* 11c31801 push 0x11c3f100 */
  push32((uint32_t)(0x11c3f100u));
  /* 11c31806 push 0x11c42db8 */
  push32((uint32_t)(0x11c42db8u));
  /* 11c3180b call esi */
  call_ind((uint32_t)(ESI), 0x11c3180du);
  /* 11c3180d push 0x11c3f0f8 */
  push32((uint32_t)(0x11c3f0f8u));
  /* 11c31812 push 0x11c52998 */
  push32((uint32_t)(0x11c52998u));
  /* 11c31817 call esi */
  call_ind((uint32_t)(ESI), 0x11c31819u);
  /* 11c31819 push 0x11c3f0e4 */
  push32((uint32_t)(0x11c3f0e4u));
  /* 11c3181e push 0x11c52560 */
  push32((uint32_t)(0x11c52560u));
  /* 11c31823 call edi */
  call_ind((uint32_t)(EDI), 0x11c31825u);
  /* 11c31825 push 0x11c3f0d8 */
  push32((uint32_t)(0x11c3f0d8u));
  /* 11c3182a push 0x11c43068 */
  push32((uint32_t)(0x11c43068u));
  /* 11c3182f call edi */
  call_ind((uint32_t)(EDI), 0x11c31831u);
  /* 11c31831 push 0x11c3f0c4 */
  push32((uint32_t)(0x11c3f0c4u));
  /* 11c31836 push 0x11c42c88 */
  push32((uint32_t)(0x11c42c88u));
  /* 11c3183b call edi */
  call_ind((uint32_t)(EDI), 0x11c3183du);
  /* 11c3183d push 0x11c3f0b4 */
  push32((uint32_t)(0x11c3f0b4u));
  /* 11c31842 push 0x11c52990 */
  push32((uint32_t)(0x11c52990u));
  /* 11c31847 call edi */
  call_ind((uint32_t)(EDI), 0x11c31849u);
  /* 11c31849 push 0x11c3f0a8 */
  push32((uint32_t)(0x11c3f0a8u));
  /* 11c3184e push 0x11c527d0 */
  push32((uint32_t)(0x11c527d0u));
  /* 11c31853 call edi */
  call_ind((uint32_t)(EDI), 0x11c31855u);
  /* 11c31855 mov esi, dword ptr [0x11c3d1a8] */
  ESI = (r32((uint32_t)(0x11c3d1a8)));
  /* 11c3185b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3185e push 0x11c3f098 */
  push32((uint32_t)(0x11c3f098u));
  /* 11c31863 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31865 call esi */
  call_ind((uint32_t)(ESI), 0x11c31867u);
  /* 11c31867 push 0x11c3f090 */
  push32((uint32_t)(0x11c3f090u));
  /* 11c3186c push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3186e call esi */
  call_ind((uint32_t)(ESI), 0x11c31870u);
  /* 11c31870 push 0x11c3f088 */
  push32((uint32_t)(0x11c3f088u));
  /* 11c31875 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31877 call esi */
  call_ind((uint32_t)(ESI), 0x11c31879u);
  /* 11c31879 push 0x11c3f098 */
  push32((uint32_t)(0x11c3f098u));
  /* 11c3187e push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31880 call esi */
  call_ind((uint32_t)(ESI), 0x11c31882u);
  /* 11c31882 push 0x11c3f090 */
  push32((uint32_t)(0x11c3f090u));
  /* 11c31887 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31889 call esi */
  call_ind((uint32_t)(ESI), 0x11c3188bu);
  /* 11c3188b push 0x11c3f080 */
  push32((uint32_t)(0x11c3f080u));
  /* 11c31890 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31892 call esi */
  call_ind((uint32_t)(ESI), 0x11c31894u);
  /* 11c31894 mov esi, dword ptr [0x11c3d1ac] */
  ESI = (r32((uint32_t)(0x11c3d1ac)));
  /* 11c3189a push 0xfe */
  push32((uint32_t)(0xfeu));
  /* 11c3189f push 3 */
  push32((uint32_t)(0x3u));
  /* 11c318a1 call esi */
  call_ind((uint32_t)(ESI), 0x11c318a3u);
  /* 11c318a3 push 0xfe */
  push32((uint32_t)(0xfeu));
  /* 11c318a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c318aa call esi */
  call_ind((uint32_t)(ESI), 0x11c318acu);
  /* 11c318ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c318af push 0xfe */
  push32((uint32_t)(0xfeu));
  /* 11c318b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c318b6 call esi */
  call_ind((uint32_t)(ESI), 0x11c318b8u);
  /* 11c318b8 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c318bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c318bf call esi */
  call_ind((uint32_t)(ESI), 0x11c318c1u);
  /* 11c318c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c318c3 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c318c5 call esi */
  call_ind((uint32_t)(ESI), 0x11c318c7u);
  /* 11c318c7 mov esi, dword ptr [0x11c3d1b0] */
  ESI = (r32((uint32_t)(0x11c3d1b0)));
  /* 11c318cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11c318d1 call esi */
  call_ind((uint32_t)(ESI), 0x11c318d3u);
  /* 11c318d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c318d7 call esi */
  call_ind((uint32_t)(ESI), 0x11c318d9u);
  /* 11c318d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318db push 6 */
  push32((uint32_t)(0x6u));
  /* 11c318dd call esi */
  call_ind((uint32_t)(ESI), 0x11c318dfu);
  /* 11c318df push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318e1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c318e3 call esi */
  call_ind((uint32_t)(ESI), 0x11c318e5u);
  /* 11c318e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c318e9 call esi */
  call_ind((uint32_t)(ESI), 0x11c318ebu);
  /* 11c318eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c318ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318f0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c318f2 call esi */
  call_ind((uint32_t)(ESI), 0x11c318f4u);
  /* 11c318f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c318f6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11c318f8 call esi */
  call_ind((uint32_t)(ESI), 0x11c318fau);
  /* 11c318fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c318fd pop edi */
  EDI = (pop32());
  /* 11c318fe pop esi */
  ESI = (pop32());
  /* 11c318ff pop ebp */
  EBP = (pop32());
  /* 11c31900 pop ebx */
  EBX = (pop32());
  /* 11c31901 ret  */
  ESPCHK(0x11c31090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001910 @ 0x11c31910 (64 bytes, 18 insns) */
void f_11c31910(void) {
  FTRACE(0x11c31910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31910 push esi */
  push32((uint32_t)(ESI));
  /* 11c31911 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c31915 cmp dword ptr [esi*8 + 0x11c42cfc], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI*8 + 0x11c42cfc))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31920 je 0x11c31933 */
  if (C.zf) goto L_11c31933;
  /* 11c31922 lea eax, [esi*8 + 0x11c42cf8] */
  EAX = ((uint32_t)(ESI*8 + 0x11c42cf8));
  /* 11c31929 push eax */
  push32((uint32_t)(EAX));
  /* 11c3192a call dword ptr [0x11c3d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d194))), 0x11c31930u);
  /* 11c31930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c31933:;
  /* 11c31933 lea ecx, [esi*8 + 0x11c42cf8] */
  ECX = ((uint32_t)(ESI*8 + 0x11c42cf8));
  /* 11c3193a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3193c push ecx */
  push32((uint32_t)(ECX));
  /* 11c3193d push esi */
  push32((uint32_t)(ESI));
  /* 11c3193e call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c31944u);
  /* 11c31944 push esi */
  push32((uint32_t)(ESI));
  /* 11c31945 call dword ptr [0x11c3d180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d180))), 0x11c3194bu);
  /* 11c3194b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3194e pop esi */
  ESI = (pop32());
  /* 11c3194f ret  */
  ESPCHK(0x11c31910u, _esp0);
  ESP += 4; return;
}

/* FUN_10001950 @ 0x11c31950 (33 bytes, 11 insns) */
void f_11c31950(void) {
  FTRACE(0x11c31950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31950 push esi */
  push32((uint32_t)(ESI));
  /* 11c31951 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c31955 push esi */
  push32((uint32_t)(ESI));
  /* 11c31956 call dword ptr [0x11c3d180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d180))), 0x11c3195cu);
  /* 11c3195c lea eax, [esi*8 + 0x11c42cf8] */
  EAX = ((uint32_t)(ESI*8 + 0x11c42cf8));
  /* 11c31963 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31965 push eax */
  push32((uint32_t)(EAX));
  /* 11c31966 call dword ptr [0x11c3d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1bc))), 0x11c3196cu);
  /* 11c3196c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3196f pop esi */
  ESI = (pop32());
  /* 11c31970 ret  */
  ESPCHK(0x11c31950u, _esp0);
  ESP += 4; return;
}

/* FUN_10001980 @ 0x11c31980 (77 bytes, 24 insns) */
void f_11c31980(void) {
  FTRACE(0x11c31980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31980 push esi */
  push32((uint32_t)(ESI));
  /* 11c31981 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c31985 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31987 push 0x11c430c0 */
  push32((uint32_t)(0x11c430c0u));
  /* 11c3198c mov ecx, esi */
  ECX = (ESI);
  /* 11c3198e call 0x11c32e10 */
  push32(0x11c31993u); f_11c32e10();
  /* 11c31993 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31995 push 0x11c430c8 */
  push32((uint32_t)(0x11c430c8u));
  /* 11c3199a mov ecx, esi */
  ECX = (ESI);
  /* 11c3199c call 0x11c32e10 */
  push32(0x11c319a1u); f_11c32e10();
  /* 11c319a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c319a3 push 0x11c430b0 */
  push32((uint32_t)(0x11c430b0u));
  /* 11c319a8 mov ecx, esi */
  ECX = (ESI);
  /* 11c319aa call 0x11c32e10 */
  push32(0x11c319afu); f_11c32e10();
  /* 11c319af push 2 */
  push32((uint32_t)(0x2u));
  /* 11c319b1 push 0x11c430b8 */
  push32((uint32_t)(0x11c430b8u));
  /* 11c319b6 mov ecx, esi */
  ECX = (ESI);
  /* 11c319b8 call 0x11c32e10 */
  push32(0x11c319bdu); f_11c32e10();
  /* 11c319bd push 2 */
  push32((uint32_t)(0x2u));
  /* 11c319bf push 0x11c430a8 */
  push32((uint32_t)(0x11c430a8u));
  /* 11c319c4 mov ecx, esi */
  ECX = (ESI);
  /* 11c319c6 call 0x11c32e10 */
  push32(0x11c319cbu); f_11c32e10();
  /* 11c319cb pop esi */
  ESI = (pop32());
  /* 11c319cc ret  */
  ESPCHK(0x11c31980u, _esp0);
  ESP += 4; return;
}

/* FUN_100019d0 @ 0x11c319d0 (77 bytes, 24 insns) */
void f_11c319d0(void) {
  FTRACE(0x11c319d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c319d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c319d1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c319d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c319d7 push 0x11c52510 */
  push32((uint32_t)(0x11c52510u));
  /* 11c319dc mov ecx, esi */
  ECX = (ESI);
  /* 11c319de call 0x11c32e10 */
  push32(0x11c319e3u); f_11c32e10();
  /* 11c319e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c319e5 push 0x11c52518 */
  push32((uint32_t)(0x11c52518u));
  /* 11c319ea mov ecx, esi */
  ECX = (ESI);
  /* 11c319ec call 0x11c32e10 */
  push32(0x11c319f1u); f_11c32e10();
  /* 11c319f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c319f3 push 0x11c52500 */
  push32((uint32_t)(0x11c52500u));
  /* 11c319f8 mov ecx, esi */
  ECX = (ESI);
  /* 11c319fa call 0x11c32e10 */
  push32(0x11c319ffu); f_11c32e10();
  /* 11c319ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31a01 push 0x11c52508 */
  push32((uint32_t)(0x11c52508u));
  /* 11c31a06 mov ecx, esi */
  ECX = (ESI);
  /* 11c31a08 call 0x11c32e10 */
  push32(0x11c31a0du); f_11c32e10();
  /* 11c31a0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31a0f push 0x11c524f8 */
  push32((uint32_t)(0x11c524f8u));
  /* 11c31a14 mov ecx, esi */
  ECX = (ESI);
  /* 11c31a16 call 0x11c32ec0 */
  push32(0x11c31a1bu); f_11c32ec0();
  /* 11c31a1b pop esi */
  ESI = (pop32());
  /* 11c31a1c ret  */
  ESPCHK(0x11c319d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a20 @ 0x11c31a20 (77 bytes, 24 insns) */
void f_11c31a20(void) {
  FTRACE(0x11c31a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31a20 push esi */
  push32((uint32_t)(ESI));
  /* 11c31a21 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c31a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31a27 push 0x11c43088 */
  push32((uint32_t)(0x11c43088u));
  /* 11c31a2c mov ecx, esi */
  ECX = (ESI);
  /* 11c31a2e call 0x11c32e10 */
  push32(0x11c31a33u); f_11c32e10();
  /* 11c31a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31a35 push 0x11c43078 */
  push32((uint32_t)(0x11c43078u));
  /* 11c31a3a mov ecx, esi */
  ECX = (ESI);
  /* 11c31a3c call 0x11c32e10 */
  push32(0x11c31a41u); f_11c32e10();
  /* 11c31a41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31a43 push 0x11c43080 */
  push32((uint32_t)(0x11c43080u));
  /* 11c31a48 mov ecx, esi */
  ECX = (ESI);
  /* 11c31a4a call 0x11c32e10 */
  push32(0x11c31a4fu); f_11c32e10();
  /* 11c31a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31a51 push 0x11c43060 */
  push32((uint32_t)(0x11c43060u));
  /* 11c31a56 mov ecx, esi */
  ECX = (ESI);
  /* 11c31a58 call 0x11c32e10 */
  push32(0x11c31a5du); f_11c32e10();
  /* 11c31a5d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31a5f push 0x11c43070 */
  push32((uint32_t)(0x11c43070u));
  /* 11c31a64 mov ecx, esi */
  ECX = (ESI);
  /* 11c31a66 call 0x11c32e10 */
  push32(0x11c31a6bu); f_11c32e10();
  /* 11c31a6b pop esi */
  ESI = (pop32());
  /* 11c31a6c ret  */
  ESPCHK(0x11c31a20u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11c31a70 (4013 bytes, 1205 insns) */
void f_11c31a70(void) {
  FTRACE(0x11c31a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c31a70 push ebx */
  push32((uint32_t)(EBX));
  /* 11c31a71 mov ebx, dword ptr [0x11c3d118] */
  EBX = (r32((uint32_t)(0x11c3d118)));
  /* 11c31a77 push ebp */
  push32((uint32_t)(EBP));
  /* 11c31a78 push esi */
  push32((uint32_t)(ESI));
  /* 11c31a79 push edi */
  push32((uint32_t)(EDI));
  /* 11c31a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31a7c call ebx */
  call_ind((uint32_t)(EBX), 0x11c31a7eu);
  /* 11c31a7e mov edi, dword ptr [0x11c3d1a0] */
  EDI = (r32((uint32_t)(0x11c3d1a0)));
  /* 11c31a84 mov ebp, dword ptr [0x11c3d11c] */
  EBP = (r32((uint32_t)(0x11c3d11c)));
  /* 11c31a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31a8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31a8f je 0x11c31cbd */
  if (C.zf) goto L_11c31cbd;
  /* 11c31a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31a99 call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c31a9fu);
  /* 11c31a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31aa1 call edi */
  call_ind((uint32_t)(EDI), 0x11c31aa3u);
  /* 11c31aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31aa6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31aa9 jge 0x11c31ac3 */
  if ((C.sf==C.of)) goto L_11c31ac3;
  /* 11c31aab push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31aad push 0x11c56698 */
  push32((uint32_t)(0x11c56698u));
  /* 11c31ab2 call dword ptr [0x11c3d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1bc))), 0x11c31ab8u);
  /* 11c31ab8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31aba call dword ptr [0x11c3d120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d120))), 0x11c31ac0u);
  /* 11c31ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c31ac3:;
  /* 11c31ac3 mov esi, dword ptr [0x11c3d124] */
  ESI = (r32((uint32_t)(0x11c3d124)));
  /* 11c31ac9 push 0x11c52790 */
  push32((uint32_t)(0x11c52790u));
  /* 11c31ace push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31ad0 call esi */
  call_ind((uint32_t)(ESI), 0x11c31ad2u);
  /* 11c31ad2 push 0x11c527a0 */
  push32((uint32_t)(0x11c527a0u));
  /* 11c31ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31ad9 call esi */
  call_ind((uint32_t)(ESI), 0x11c31adbu);
  /* 11c31adb push 0x11c52978 */
  push32((uint32_t)(0x11c52978u));
  /* 11c31ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31ae2 call esi */
  call_ind((uint32_t)(ESI), 0x11c31ae4u);
  /* 11c31ae4 push 0x11c52980 */
  push32((uint32_t)(0x11c52980u));
  /* 11c31ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31aeb call esi */
  call_ind((uint32_t)(ESI), 0x11c31aedu);
  /* 11c31aed push 0x11c52988 */
  push32((uint32_t)(0x11c52988u));
  /* 11c31af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31af4 call esi */
  call_ind((uint32_t)(ESI), 0x11c31af6u);
  /* 11c31af6 push 0x11c42da8 */
  push32((uint32_t)(0x11c42da8u));
  /* 11c31afb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31afd call esi */
  call_ind((uint32_t)(ESI), 0x11c31affu);
  /* 11c31aff push 0x11c527b8 */
  push32((uint32_t)(0x11c527b8u));
  /* 11c31b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b06 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b08u);
  /* 11c31b08 push 0x11c527c0 */
  push32((uint32_t)(0x11c527c0u));
  /* 11c31b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b0f call esi */
  call_ind((uint32_t)(ESI), 0x11c31b11u);
  /* 11c31b11 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31b14 push 0x11c42db8 */
  push32((uint32_t)(0x11c42db8u));
  /* 11c31b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b1b call esi */
  call_ind((uint32_t)(ESI), 0x11c31b1du);
  /* 11c31b1d push 0x11c52998 */
  push32((uint32_t)(0x11c52998u));
  /* 11c31b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b24 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b26u);
  /* 11c31b26 mov esi, dword ptr [0x11c3d19c] */
  ESI = (r32((uint32_t)(0x11c3d19c)));
  /* 11c31b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b2e push 0x11c52560 */
  push32((uint32_t)(0x11c52560u));
  /* 11c31b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b35 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b37u);
  /* 11c31b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b39 push 0x11c43068 */
  push32((uint32_t)(0x11c43068u));
  /* 11c31b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b40 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b42u);
  /* 11c31b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b44 push 0x11c52750 */
  push32((uint32_t)(0x11c52750u));
  /* 11c31b49 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31b4b call esi */
  call_ind((uint32_t)(ESI), 0x11c31b4du);
  /* 11c31b4d push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11c31b4f call ebp */
  call_ind((uint32_t)(EBP), 0x11c31b51u);
  /* 11c31b51 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11c31b53 call ebp */
  call_ind((uint32_t)(EBP), 0x11c31b55u);
  /* 11c31b55 mov esi, dword ptr [0x11c3d128] */
  ESI = (r32((uint32_t)(0x11c3d128)));
  /* 11c31b5b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c31b60 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b64 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b66u);
  /* 11c31b66 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31b69 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c31b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b72 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b74u);
  /* 11c31b74 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c31b79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b7d call esi */
  call_ind((uint32_t)(ESI), 0x11c31b7fu);
  /* 11c31b7f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c31b84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b88 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b8au);
  /* 11c31b8a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c31b8f push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b93 call esi */
  call_ind((uint32_t)(ESI), 0x11c31b95u);
  /* 11c31b95 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c31b9a push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31b9e call esi */
  call_ind((uint32_t)(ESI), 0x11c31ba0u);
  /* 11c31ba0 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c31ba5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31ba7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31ba9 call esi */
  call_ind((uint32_t)(ESI), 0x11c31babu);
  /* 11c31bab add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31bae push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c31bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31bb5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31bb7 call esi */
  call_ind((uint32_t)(ESI), 0x11c31bb9u);
  /* 11c31bb9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c31bbe push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31bc0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31bc2 call esi */
  call_ind((uint32_t)(ESI), 0x11c31bc4u);
  /* 11c31bc4 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c31bc9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31bcb push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31bcd call esi */
  call_ind((uint32_t)(ESI), 0x11c31bcfu);
  /* 11c31bcf push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c31bd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31bd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31bd8 call esi */
  call_ind((uint32_t)(ESI), 0x11c31bdau);
  /* 11c31bda push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c31bdf push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31be1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31be3 call esi */
  call_ind((uint32_t)(ESI), 0x11c31be5u);
  /* 11c31be5 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31bea push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31bec push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31bee call esi */
  call_ind((uint32_t)(ESI), 0x11c31bf0u);
  /* 11c31bf0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31bf3 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31bfa push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31bfc call esi */
  call_ind((uint32_t)(ESI), 0x11c31bfeu);
  /* 11c31bfe push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31c05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31c07 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c09u);
  /* 11c31c09 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31c10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31c12 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c14u);
  /* 11c31c14 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c19 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31c1d call esi */
  call_ind((uint32_t)(ESI), 0x11c31c1fu);
  /* 11c31c1f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c24 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31c28 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c2au);
  /* 11c31c2a push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c2f push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31c31 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c33 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c35u);
  /* 11c31c35 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31c38 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c3f push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c41 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c43u);
  /* 11c31c43 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31c4a push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c4c call esi */
  call_ind((uint32_t)(ESI), 0x11c31c4eu);
  /* 11c31c4e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31c55 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c57 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c59u);
  /* 11c31c59 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c5e push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c60 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c62 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c64u);
  /* 11c31c64 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c31c69 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31c6b push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31c6d call esi */
  call_ind((uint32_t)(ESI), 0x11c31c6fu);
  /* 11c31c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c71 call edi */
  call_ind((uint32_t)(EDI), 0x11c31c73u);
  /* 11c31c73 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31c76 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c31c77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c31c78 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c31c7a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c31c7c push eax */
  push32((uint32_t)(EAX));
  /* 11c31c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c83 push 0x11c3f5f8 */
  push32((uint32_t)(0x11c3f5f8u));
  /* 11c31c88 mov esi, dword ptr [0x11c3d12c] */
  ESI = (r32((uint32_t)(0x11c3d12c)));
  /* 11c31c8e push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31c90 call esi */
  call_ind((uint32_t)(ESI), 0x11c31c92u);
  /* 11c31c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c94 call edi */
  call_ind((uint32_t)(EDI), 0x11c31c96u);
  /* 11c31c96 push eax */
  push32((uint32_t)(EAX));
  /* 11c31c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31c9d push 0x11c3f5f0 */
  push32((uint32_t)(0x11c3f5f0u));
  /* 11c31ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31ca4 call esi */
  call_ind((uint32_t)(ESI), 0x11c31ca6u);
  /* 11c31ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31ca8 call edi */
  call_ind((uint32_t)(EDI), 0x11c31caau);
  /* 11c31caa push eax */
  push32((uint32_t)(EAX));
  /* 11c31cab push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31cad push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31caf push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31cb1 push 0x11c3f5f8 */
  push32((uint32_t)(0x11c3f5f8u));
  /* 11c31cb6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c31cb8 call esi */
  call_ind((uint32_t)(ESI), 0x11c31cbau);
  /* 11c31cba add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c31cbd:;
  /* 11c31cbd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31cbf call ebx */
  call_ind((uint32_t)(EBX), 0x11c31cc1u);
  /* 11c31cc1 mov ebx, dword ptr [0x11c3d130] */
  EBX = (r32((uint32_t)(0x11c3d130)));
  /* 11c31cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31cca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31ccc je 0x11c31d7a */
  if (C.zf) goto L_11c31d7a;
  /* 11c31cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31cd4 call edi */
  call_ind((uint32_t)(EDI), 0x11c31cd6u);
  /* 11c31cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31cd9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31cdc jge 0x11c31d7a */
  if ((C.sf==C.of)) goto L_11c31d7a;
  /* 11c31ce2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31ce4 push 0x11c52558 */
  push32((uint32_t)(0x11c52558u));
  /* 11c31ce9 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31cebu);
  /* 11c31ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31cee cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31cf1 jge 0x11c31d7a */
  if ((C.sf==C.of)) goto L_11c31d7a;
  /* 11c31cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31cf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31cfb call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c31d01u);
  /* 11c31d01 push 0x11c3f5e0 */
  push32((uint32_t)(0x11c3f5e0u));
  /* 11c31d06 call dword ptr [0x11c3d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d134))), 0x11c31d0cu);
  /* 11c31d0c mov edi, dword ptr [0x11c3d180] */
  EDI = (r32((uint32_t)(0x11c3d180)));
  /* 11c31d12 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d14 call edi */
  call_ind((uint32_t)(EDI), 0x11c31d16u);
  /* 11c31d16 mov esi, dword ptr [0x11c3d138] */
  ESI = (r32((uint32_t)(0x11c3d138)));
  /* 11c31d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31d1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d20 push 0x11c527c8 */
  push32((uint32_t)(0x11c527c8u));
  /* 11c31d25 call esi */
  call_ind((uint32_t)(ESI), 0x11c31d27u);
  /* 11c31d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31d29 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d2b push 0x11c52558 */
  push32((uint32_t)(0x11c52558u));
  /* 11c31d30 call esi */
  call_ind((uint32_t)(ESI), 0x11c31d32u);
  /* 11c31d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31d34 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d36 push 0x11c52568 */
  push32((uint32_t)(0x11c52568u));
  /* 11c31d3b call esi */
  call_ind((uint32_t)(ESI), 0x11c31d3du);
  /* 11c31d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31d3f push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d41 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c31d47u);
  /* 11c31d47 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d49 call edi */
  call_ind((uint32_t)(EDI), 0x11c31d4bu);
  /* 11c31d4b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31d50 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d52 push 0x11c566a8 */
  push32((uint32_t)(0x11c566a8u));
  /* 11c31d57 call esi */
  call_ind((uint32_t)(ESI), 0x11c31d59u);
  /* 11c31d59 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31d5b push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d5d push 0x11c52540 */
  push32((uint32_t)(0x11c52540u));
  /* 11c31d62 call esi */
  call_ind((uint32_t)(ESI), 0x11c31d64u);
  /* 11c31d64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31d66 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d68 push 0x11c42d38 */
  push32((uint32_t)(0x11c42d38u));
  /* 11c31d6d call esi */
  call_ind((uint32_t)(ESI), 0x11c31d6fu);
  /* 11c31d6f push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31d71 call dword ptr [0x11c3d120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d120))), 0x11c31d77u);
  /* 11c31d77 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c31d7a:;
  /* 11c31d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31d7c push 0x11c527c8 */
  push32((uint32_t)(0x11c527c8u));
  /* 11c31d81 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31d83u);
  /* 11c31d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31d88 jne 0x11c31d9d */
  if (!C.zf) goto L_11c31d9d;
  /* 11c31d8a push eax */
  push32((uint32_t)(EAX));
  /* 11c31d8b push 0x11c52568 */
  push32((uint32_t)(0x11c52568u));
  /* 11c31d90 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31d92u);
  /* 11c31d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31d97 jne 0x11c31d9d */
  if (!C.zf) goto L_11c31d9d;
  /* 11c31d99 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11c31d9b jmp 0x11c31d9f */
  goto L_11c31d9f;
L_11c31d9d:;
  /* 11c31d9d mov bl, 1 */
  BL = (0x1u);
L_11c31d9f:;
  /* 11c31d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31da1 call dword ptr [0x11c3d118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d118))), 0x11c31da7u);
  /* 11c31da7 mov esi, dword ptr [0x11c3d140] */
  ESI = (r32((uint32_t)(0x11c3d140)));
  /* 11c31dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31db0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31db2 jne 0x11c31de0 */
  if (!C.zf) goto L_11c31de0;
  /* 11c31db4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11c31db6 je 0x11c31de0 */
  if (C.zf) goto L_11c31de0;
  /* 11c31db8 mov edi, dword ptr [0x11c3d1b0] */
  EDI = (r32((uint32_t)(0x11c3d1b0)));
  /* 11c31dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31dc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31dc2 call edi */
  call_ind((uint32_t)(EDI), 0x11c31dc4u);
  /* 11c31dc4 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11c31dc6 call ebp */
  call_ind((uint32_t)(EBP), 0x11c31dc8u);
  /* 11c31dc8 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11c31dca call esi */
  call_ind((uint32_t)(ESI), 0x11c31dccu);
  /* 11c31dcc push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11c31dce call esi */
  call_ind((uint32_t)(ESI), 0x11c31dd0u);
  /* 11c31dd0 push 0x11c3f5d0 */
  push32((uint32_t)(0x11c3f5d0u));
  /* 11c31dd5 call dword ptr [0x11c3d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d134))), 0x11c31ddbu);
  /* 11c31ddb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31dde jmp 0x11c31de6 */
  goto L_11c31de6;
L_11c31de0:;
  /* 11c31de0 mov edi, dword ptr [0x11c3d1b0] */
  EDI = (r32((uint32_t)(0x11c3d1b0)));
L_11c31de6:;
  /* 11c31de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31de8 call dword ptr [0x11c3d118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d118))), 0x11c31deeu);
  /* 11c31dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31df1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31df3 je 0x11c31e15 */
  if (C.zf) goto L_11c31e15;
  /* 11c31df5 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11c31df7 jne 0x11c31e15 */
  if (!C.zf) goto L_11c31e15;
  /* 11c31df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31dfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31dfd call edi */
  call_ind((uint32_t)(EDI), 0x11c31dffu);
  /* 11c31dff push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11c31e01 call ebp */
  call_ind((uint32_t)(EBP), 0x11c31e03u);
  /* 11c31e03 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11c31e05 call esi */
  call_ind((uint32_t)(ESI), 0x11c31e07u);
  /* 11c31e07 push 0x11c3f5c4 */
  push32((uint32_t)(0x11c3f5c4u));
  /* 11c31e0c call dword ptr [0x11c3d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d134))), 0x11c31e12u);
  /* 11c31e12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c31e15:;
  /* 11c31e15 mov ebp, dword ptr [0x11c3d118] */
  EBP = (r32((uint32_t)(0x11c3d118)));
  /* 11c31e1b push 7 */
  push32((uint32_t)(0x7u));
  /* 11c31e1d call ebp */
  call_ind((uint32_t)(EBP), 0x11c31e1fu);
  /* 11c31e1f mov esi, dword ptr [0x11c3d144] */
  ESI = (r32((uint32_t)(0x11c3d144)));
  /* 11c31e25 mov ebx, dword ptr [0x11c3d148] */
  EBX = (r32((uint32_t)(0x11c3d148)));
  /* 11c31e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31e30 je 0x11c31e9d */
  if (C.zf) goto L_11c31e9d;
  /* 11c31e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31e34 push 0x11c42c88 */
  push32((uint32_t)(0x11c42c88u));
  /* 11c31e39 call esi */
  call_ind((uint32_t)(ESI), 0x11c31e3bu);
  /* 11c31e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31e40 jne 0x11c31e51 */
  if (!C.zf) goto L_11c31e51;
  /* 11c31e42 push eax */
  push32((uint32_t)(EAX));
  /* 11c31e43 push 0x11c566a8 */
  push32((uint32_t)(0x11c566a8u));
  /* 11c31e48 call esi */
  call_ind((uint32_t)(ESI), 0x11c31e4au);
  /* 11c31e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31e4f je 0x11c31e9d */
  if (C.zf) goto L_11c31e9d;
L_11c31e51:;
  /* 11c31e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31e53 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c31e55 call edi */
  call_ind((uint32_t)(EDI), 0x11c31e57u);
  /* 11c31e57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e5a call ebx */
  call_ind((uint32_t)(EBX), 0x11c31e5cu);
  /* 11c31e5c add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e61 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31e66 push eax */
  push32((uint32_t)(EAX));
  /* 11c31e67 call 0x11c32bb0 */
  push32(0x11c31e6cu); f_11c32bb0();
  /* 11c31e6c call ebx */
  call_ind((uint32_t)(EBX), 0x11c31e6eu);
  /* 11c31e6e push eax */
  push32((uint32_t)(EAX));
  /* 11c31e6f mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31e74 call 0x11c32bb0 */
  push32(0x11c31e79u); f_11c32bb0();
  /* 11c31e79 call ebx */
  call_ind((uint32_t)(EBX), 0x11c31e7bu);
  /* 11c31e7b add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e80 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31e85 push eax */
  push32((uint32_t)(EAX));
  /* 11c31e86 call 0x11c32bb0 */
  push32(0x11c31e8bu); f_11c32bb0();
  /* 11c31e8b call ebx */
  call_ind((uint32_t)(EBX), 0x11c31e8du);
  /* 11c31e8d add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31e92 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c31e97 push eax */
  push32((uint32_t)(EAX));
  /* 11c31e98 call 0x11c32bb0 */
  push32(0x11c31e9du); f_11c32bb0();
L_11c31e9d:;
  /* 11c31e9d push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31e9f call ebp */
  call_ind((uint32_t)(EBP), 0x11c31ea1u);
  /* 11c31ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31ea4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31ea6 je 0x11c31f1b */
  if (C.zf) goto L_11c31f1b;
  /* 11c31ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31eaa push 0x11c42c88 */
  push32((uint32_t)(0x11c42c88u));
  /* 11c31eaf call esi */
  call_ind((uint32_t)(ESI), 0x11c31eb1u);
  /* 11c31eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31eb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31eb7 jg 0x11c31eca */
  if ((!C.zf&&C.sf==C.of)) goto L_11c31eca;
  /* 11c31eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31ebb push 0x11c566a8 */
  push32((uint32_t)(0x11c566a8u));
  /* 11c31ec0 call esi */
  call_ind((uint32_t)(ESI), 0x11c31ec2u);
  /* 11c31ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31ec5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31ec8 jle 0x11c31f1b */
  if ((C.zf||C.sf!=C.of)) goto L_11c31f1b;
L_11c31eca:;
  /* 11c31eca push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31ecc push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31ece call edi */
  call_ind((uint32_t)(EDI), 0x11c31ed0u);
  /* 11c31ed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31ed3 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31eda call 0x11c32c70 */
  push32(0x11c31edfu); f_11c32c70();
  /* 11c31edf push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31ee1 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31ee6 call 0x11c32c90 */
  push32(0x11c31eebu); f_11c32c90();
  /* 11c31eeb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31eed mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31ef2 call 0x11c32c70 */
  push32(0x11c31ef7u); f_11c32c70();
  /* 11c31ef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31ef9 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31efe call 0x11c32c90 */
  push32(0x11c31f03u); f_11c32c90();
  /* 11c31f03 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31f05 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31f0a call 0x11c32c70 */
  push32(0x11c31f0fu); f_11c32c70();
  /* 11c31f0f push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31f11 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31f16 call 0x11c32c90 */
  push32(0x11c31f1bu); f_11c32c90();
L_11c31f1b:;
  /* 11c31f1b push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31f1d call ebp */
  call_ind((uint32_t)(EBP), 0x11c31f1fu);
  /* 11c31f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31f22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31f24 jne 0x11c31f99 */
  if (!C.zf) goto L_11c31f99;
  /* 11c31f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31f28 push 0x11c42c88 */
  push32((uint32_t)(0x11c42c88u));
  /* 11c31f2d call esi */
  call_ind((uint32_t)(ESI), 0x11c31f2fu);
  /* 11c31f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31f32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31f35 jg 0x11c31f99 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c31f99;
  /* 11c31f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31f39 push 0x11c566a8 */
  push32((uint32_t)(0x11c566a8u));
  /* 11c31f3e call esi */
  call_ind((uint32_t)(ESI), 0x11c31f40u);
  /* 11c31f40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31f43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c31f46 jg 0x11c31f99 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c31f99;
  /* 11c31f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c31f4a push 5 */
  push32((uint32_t)(0x5u));
  /* 11c31f4c call edi */
  call_ind((uint32_t)(EDI), 0x11c31f4eu);
  /* 11c31f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31f51 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31f58 call 0x11c32c60 */
  push32(0x11c31f5du); f_11c32c60();
  /* 11c31f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31f5f mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31f64 call 0x11c32c80 */
  push32(0x11c31f69u); f_11c32c80();
  /* 11c31f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31f6b mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31f70 call 0x11c32c60 */
  push32(0x11c31f75u); f_11c32c60();
  /* 11c31f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31f77 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31f7c call 0x11c32c80 */
  push32(0x11c31f81u); f_11c32c80();
  /* 11c31f81 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31f83 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31f88 call 0x11c32c60 */
  push32(0x11c31f8du); f_11c32c60();
  /* 11c31f8d push 3 */
  push32((uint32_t)(0x3u));
  /* 11c31f8f mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c31f94 call 0x11c32c80 */
  push32(0x11c31f99u); f_11c32c80();
L_11c31f99:;
  /* 11c31f99 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c31f9b call ebp */
  call_ind((uint32_t)(EBP), 0x11c31f9du);
  /* 11c31f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31fa0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c31fa2 je 0x11c31ffc */
  if (C.zf) goto L_11c31ffc;
  /* 11c31fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31fa6 push 0x11c52990 */
  push32((uint32_t)(0x11c52990u));
  /* 11c31fab call esi */
  call_ind((uint32_t)(ESI), 0x11c31fadu);
  /* 11c31fad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31fb2 jne 0x11c31fc3 */
  if (!C.zf) goto L_11c31fc3;
  /* 11c31fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11c31fb5 push 0x11c52530 */
  push32((uint32_t)(0x11c52530u));
  /* 11c31fba call esi */
  call_ind((uint32_t)(ESI), 0x11c31fbcu);
  /* 11c31fbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c31fc1 je 0x11c31ffc */
  if (C.zf) goto L_11c31ffc;
L_11c31fc3:;
  /* 11c31fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c31fc5 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c31fc7 call edi */
  call_ind((uint32_t)(EDI), 0x11c31fc9u);
  /* 11c31fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c31fcc mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31fd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31fd3 call 0x11c32c70 */
  push32(0x11c31fd8u); f_11c32c70();
  /* 11c31fd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31fda mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c31fdf call 0x11c32c90 */
  push32(0x11c31fe4u); f_11c32c90();
  /* 11c31fe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31fe6 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31feb call 0x11c32c70 */
  push32(0x11c31ff0u); f_11c32c70();
  /* 11c31ff0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c31ff2 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c31ff7 call 0x11c32c90 */
  push32(0x11c31ffcu); f_11c32c90();
L_11c31ffc:;
  /* 11c31ffc push 6 */
  push32((uint32_t)(0x6u));
  /* 11c31ffe call ebp */
  call_ind((uint32_t)(EBP), 0x11c32000u);
  /* 11c32000 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32003 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32005 jne 0x11c3205f */
  if (!C.zf) goto L_11c3205f;
  /* 11c32007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32009 push 0x11c52990 */
  push32((uint32_t)(0x11c52990u));
  /* 11c3200e call esi */
  call_ind((uint32_t)(ESI), 0x11c32010u);
  /* 11c32010 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32015 jne 0x11c3205f */
  if (!C.zf) goto L_11c3205f;
  /* 11c32017 push eax */
  push32((uint32_t)(EAX));
  /* 11c32018 push 0x11c52530 */
  push32((uint32_t)(0x11c52530u));
  /* 11c3201d call esi */
  call_ind((uint32_t)(ESI), 0x11c3201fu);
  /* 11c3201f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32024 jne 0x11c3205f */
  if (!C.zf) goto L_11c3205f;
  /* 11c32026 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32028 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3202a call edi */
  call_ind((uint32_t)(EDI), 0x11c3202cu);
  /* 11c3202c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3202f mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c32034 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c32036 call 0x11c32c60 */
  push32(0x11c3203bu); f_11c32c60();
  /* 11c3203b push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3203d mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c32042 call 0x11c32c80 */
  push32(0x11c32047u); f_11c32c80();
  /* 11c32047 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c32049 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c3204e call 0x11c32c60 */
  push32(0x11c32053u); f_11c32c60();
  /* 11c32053 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c32055 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c3205a call 0x11c32c80 */
  push32(0x11c3205fu); f_11c32c80();
L_11c3205f:;
  /* 11c3205f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32061 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c32066 call 0x11c32b80 */
  push32(0x11c3206bu); f_11c32b80();
  /* 11c3206b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3206d mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c32072 call 0x11c32b80 */
  push32(0x11c32077u); f_11c32b80();
  /* 11c32077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32079 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c3207e call 0x11c32b80 */
  push32(0x11c32083u); f_11c32b80();
  /* 11c32083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32085 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c3208a call 0x11c32b80 */
  push32(0x11c3208fu); f_11c32b80();
  /* 11c3208f mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c32094 call 0x11c32dd0 */
  push32(0x11c32099u); f_11c32dd0();
  /* 11c32099 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3209c jge 0x11c320aa */
  if ((C.sf==C.of)) goto L_11c320aa;
  /* 11c3209e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c320a0 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c320a5 call 0x11c32b80 */
  push32(0x11c320aau); f_11c32b80();
L_11c320aa:;
  /* 11c320aa mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c320af call 0x11c32dd0 */
  push32(0x11c320b4u); f_11c32dd0();
  /* 11c320b4 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c320b7 jge 0x11c320c5 */
  if ((C.sf==C.of)) goto L_11c320c5;
  /* 11c320b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c320bb mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c320c0 call 0x11c32b80 */
  push32(0x11c320c5u); f_11c32b80();
L_11c320c5:;
  /* 11c320c5 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c320ca call 0x11c32dd0 */
  push32(0x11c320cfu); f_11c32dd0();
  /* 11c320cf cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c320d2 jge 0x11c320e0 */
  if ((C.sf==C.of)) goto L_11c320e0;
  /* 11c320d4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c320d6 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c320db call 0x11c32b80 */
  push32(0x11c320e0u); f_11c32b80();
L_11c320e0:;
  /* 11c320e0 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c320e5 call 0x11c32dd0 */
  push32(0x11c320eau); f_11c32dd0();
  /* 11c320ea cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c320ed jge 0x11c320fb */
  if ((C.sf==C.of)) goto L_11c320fb;
  /* 11c320ef push 3 */
  push32((uint32_t)(0x3u));
  /* 11c320f1 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c320f6 call 0x11c32b80 */
  push32(0x11c320fbu); f_11c32b80();
L_11c320fb:;
  /* 11c320fb mov esi, dword ptr [0x11c3d118] */
  ESI = (r32((uint32_t)(0x11c3d118)));
  /* 11c32101 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c32103 call esi */
  call_ind((uint32_t)(ESI), 0x11c32105u);
  /* 11c32105 mov ebp, dword ptr [0x11c3d14c] */
  EBP = (r32((uint32_t)(0x11c3d14c)));
  /* 11c3210b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3210e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32110 jne 0x11c32153 */
  if (!C.zf) goto L_11c32153;
  /* 11c32112 push 0x11c42d78 */
  push32((uint32_t)(0x11c42d78u));
  /* 11c32117 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c3211c call 0x11c33160 */
  push32(0x11c32121u); f_11c33160();
  /* 11c32121 push 0x11c42d78 */
  push32((uint32_t)(0x11c42d78u));
  /* 11c32126 mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c3212b call 0x11c33160 */
  push32(0x11c32130u); f_11c33160();
  /* 11c32130 push 0x11c42d88 */
  push32((uint32_t)(0x11c42d88u));
  /* 11c32135 mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c3213a call 0x11c33160 */
  push32(0x11c3213fu); f_11c33160();
  /* 11c3213f push 0x11c42d90 */
  push32((uint32_t)(0x11c42d90u));
  /* 11c32144 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c32149 call 0x11c33160 */
  push32(0x11c3214eu); f_11c33160();
  /* 11c3214e jmp 0x11c32214 */
  goto L_11c32214;
L_11c32153:;
  /* 11c32153 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c32155 push 0x11c52798 */
  push32((uint32_t)(0x11c52798u));
  /* 11c3215a call ebp */
  call_ind((uint32_t)(EBP), 0x11c3215cu);
  /* 11c3215c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3215f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32161 jne 0x11c3216a */
  if (!C.zf) goto L_11c3216a;
  /* 11c32163 push 0x11c52798 */
  push32((uint32_t)(0x11c52798u));
  /* 11c32168 jmp 0x11c3216f */
  goto L_11c3216f;
L_11c3216a:;
  /* 11c3216a push 0x11c52538 */
  push32((uint32_t)(0x11c52538u));
L_11c3216f:;
  /* 11c3216f push 0x11c42d78 */
  push32((uint32_t)(0x11c42d78u));
  /* 11c32174 mov ecx, 0x11c52570 */
  ECX = (0x11c52570u);
  /* 11c32179 call 0x11c33180 */
  push32(0x11c3217eu); f_11c33180();
  /* 11c3217e push 5 */
  push32((uint32_t)(0x5u));
  /* 11c32180 push 0x11c52798 */
  push32((uint32_t)(0x11c52798u));
  /* 11c32185 call ebp */
  call_ind((uint32_t)(EBP), 0x11c32187u);
  /* 11c32187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3218a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3218c jne 0x11c32195 */
  if (!C.zf) goto L_11c32195;
  /* 11c3218e push 0x11c527b0 */
  push32((uint32_t)(0x11c527b0u));
  /* 11c32193 jmp 0x11c3219a */
  goto L_11c3219a;
L_11c32195:;
  /* 11c32195 push 0x11c52538 */
  push32((uint32_t)(0x11c52538u));
L_11c3219a:;
  /* 11c3219a push 0x11c42d78 */
  push32((uint32_t)(0x11c42d78u));
  /* 11c3219f mov ecx, 0x11c525e8 */
  ECX = (0x11c525e8u);
  /* 11c321a4 call 0x11c33180 */
  push32(0x11c321a9u); f_11c33180();
  /* 11c321a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c321ab push 0x11c52768 */
  push32((uint32_t)(0x11c52768u));
  /* 11c321b0 call ebp */
  call_ind((uint32_t)(EBP), 0x11c321b2u);
  /* 11c321b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c321b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c321b7 push 0x11c42d90 */
  push32((uint32_t)(0x11c42d90u));
  /* 11c321bc jne 0x11c321c5 */
  if (!C.zf) goto L_11c321c5;
  /* 11c321be push 0x11c52768 */
  push32((uint32_t)(0x11c52768u));
  /* 11c321c3 jmp 0x11c321ca */
  goto L_11c321ca;
L_11c321c5:;
  /* 11c321c5 push 0x11c42d88 */
  push32((uint32_t)(0x11c42d88u));
L_11c321ca:;
  /* 11c321ca mov ecx, 0x11c52660 */
  ECX = (0x11c52660u);
  /* 11c321cf call 0x11c33180 */
  push32(0x11c321d4u); f_11c33180();
  /* 11c321d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c321d6 push 0x11c52758 */
  push32((uint32_t)(0x11c52758u));
  /* 11c321db call ebp */
  call_ind((uint32_t)(EBP), 0x11c321ddu);
  /* 11c321dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c321e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c321e2 je 0x11c32200 */
  if (C.zf) goto L_11c32200;
  /* 11c321e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c321e6 push 0x11c52760 */
  push32((uint32_t)(0x11c52760u));
  /* 11c321eb call ebp */
  call_ind((uint32_t)(EBP), 0x11c321edu);
  /* 11c321ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c321f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c321f2 je 0x11c32200 */
  if (C.zf) goto L_11c32200;
  /* 11c321f4 push 0x11c529a0 */
  push32((uint32_t)(0x11c529a0u));
  /* 11c321f9 push 0x11c42d88 */
  push32((uint32_t)(0x11c42d88u));
  /* 11c321fe jmp 0x11c3220a */
  goto L_11c3220a;
L_11c32200:;
  /* 11c32200 push 0x11c52760 */
  push32((uint32_t)(0x11c52760u));
  /* 11c32205 push 0x11c52758 */
  push32((uint32_t)(0x11c52758u));
L_11c3220a:;
  /* 11c3220a mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c3220f call 0x11c33180 */
  push32(0x11c32214u); f_11c33180();
L_11c32214:;
  /* 11c32214 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c32216 call esi */
  call_ind((uint32_t)(ESI), 0x11c32218u);
  /* 11c32218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3221b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3221d jne 0x11c3225a */
  if (!C.zf) goto L_11c3225a;
  /* 11c3221f push 8 */
  push32((uint32_t)(0x8u));
  /* 11c32221 call esi */
  call_ind((uint32_t)(ESI), 0x11c32223u);
  /* 11c32223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32226 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32228 je 0x11c3225a */
  if (C.zf) goto L_11c3225a;
  /* 11c3222a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3222c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c3222e call edi */
  call_ind((uint32_t)(EDI), 0x11c32230u);
  /* 11c32230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32233 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32235u);
  /* 11c32235 push eax */
  push32((uint32_t)(EAX));
  /* 11c32236 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c3223b call 0x11c32bb0 */
  push32(0x11c32240u); f_11c32bb0();
  /* 11c32240 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32242u);
  /* 11c32242 push eax */
  push32((uint32_t)(EAX));
  /* 11c32243 mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c32248 call 0x11c32bb0 */
  push32(0x11c3224du); f_11c32bb0();
  /* 11c3224d call ebx */
  call_ind((uint32_t)(EBX), 0x11c3224fu);
  /* 11c3224f push eax */
  push32((uint32_t)(EAX));
  /* 11c32250 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32255 call 0x11c32bb0 */
  push32(0x11c3225au); f_11c32bb0();
L_11c3225a:;
  /* 11c3225a mov esi, dword ptr [0x11c3d130] */
  ESI = (r32((uint32_t)(0x11c3d130)));
  /* 11c32260 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c32262 push 0x11c52548 */
  push32((uint32_t)(0x11c52548u));
  /* 11c32267 call esi */
  call_ind((uint32_t)(ESI), 0x11c32269u);
  /* 11c32269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3226c cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3226f jge 0x11c3234a */
  if ((C.sf==C.of)) goto L_11c3234a;
  /* 11c32275 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c32277 push 0x11c52550 */
  push32((uint32_t)(0x11c52550u));
  /* 11c3227c call esi */
  call_ind((uint32_t)(ESI), 0x11c3227eu);
  /* 11c3227e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32281 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32284 jge 0x11c3234a */
  if ((C.sf==C.of)) goto L_11c3234a;
  /* 11c3228a push 5 */
  push32((uint32_t)(0x5u));
  /* 11c3228c push 0x11c527a8 */
  push32((uint32_t)(0x11c527a8u));
  /* 11c32291 call esi */
  call_ind((uint32_t)(ESI), 0x11c32293u);
  /* 11c32293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32296 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32299 jge 0x11c3234a */
  if ((C.sf==C.of)) goto L_11c3234a;
  /* 11c3229f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c322a4 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c322a9 push 0x11c52548 */
  push32((uint32_t)(0x11c52548u));
  /* 11c322ae mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c322b3 call 0x11c32c40 */
  push32(0x11c322b8u); f_11c32c40();
  /* 11c322b8 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11c322ba push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c322bf push 0x11c527a8 */
  push32((uint32_t)(0x11c527a8u));
  /* 11c322c4 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c322c9 call 0x11c32bc0 */
  push32(0x11c322ceu); f_11c32bc0();
  /* 11c322ce mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c322d3 call 0x11c32ce0 */
  push32(0x11c322d8u); f_11c32ce0();
  /* 11c322d8 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c322dd push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c322e2 push 0x11c527a8 */
  push32((uint32_t)(0x11c527a8u));
  /* 11c322e7 mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c322ec call 0x11c32c40 */
  push32(0x11c322f1u); f_11c32c40();
  /* 11c322f1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11c322f3 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c322f8 push 0x11c52550 */
  push32((uint32_t)(0x11c52550u));
  /* 11c322fd mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c32302 call 0x11c32bc0 */
  push32(0x11c32307u); f_11c32bc0();
  /* 11c32307 mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c3230c call 0x11c32ce0 */
  push32(0x11c32311u); f_11c32ce0();
  /* 11c32311 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c32316 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c3231b push 0x11c52550 */
  push32((uint32_t)(0x11c52550u));
  /* 11c32320 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32325 call 0x11c32c40 */
  push32(0x11c3232au); f_11c32c40();
  /* 11c3232a push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11c3232c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c32331 push 0x11c52548 */
  push32((uint32_t)(0x11c52548u));
  /* 11c32336 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c3233b call 0x11c32bc0 */
  push32(0x11c32340u); f_11c32bc0();
  /* 11c32340 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32345 call 0x11c32ce0 */
  push32(0x11c3234au); f_11c32ce0();
L_11c3234a:;
  /* 11c3234a mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c3234f call 0x11c32de0 */
  push32(0x11c32354u); f_11c32de0();
  /* 11c32354 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32356 je 0x11c323ac */
  if (C.zf) goto L_11c323ac;
  /* 11c32358 call 0x11c33564 */
  push32(0x11c3235du); f_11c33564();
  /* 11c3235d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c32362 push 0x11c52850 */
  push32((uint32_t)(0x11c52850u));
  /* 11c32367 cmp eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3236c jge 0x11c32389 */
  if ((C.sf==C.of)) goto L_11c32389;
  /* 11c3236e call 0x11c31980 */
  push32(0x11c32373u); f_11c31980();
  /* 11c32373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32376 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c3237b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3237d push 0x11c52770 */
  push32((uint32_t)(0x11c52770u));
  /* 11c32382 call 0x11c33020 */
  push32(0x11c32387u); f_11c33020();
  /* 11c32387 jmp 0x11c323a2 */
  goto L_11c323a2;
L_11c32389:;
  /* 11c32389 call 0x11c319d0 */
  push32(0x11c3238eu); f_11c319d0();
  /* 11c3238e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32391 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c32396 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32398 push 0x11c52780 */
  push32((uint32_t)(0x11c52780u));
  /* 11c3239d call 0x11c32f70 */
  push32(0x11c323a2u); f_11c32f70();
L_11c323a2:;
  /* 11c323a2 mov ecx, 0x11c52850 */
  ECX = (0x11c52850u);
  /* 11c323a7 call 0x11c330d0 */
  push32(0x11c323acu); f_11c330d0();
L_11c323ac:;
  /* 11c323ac mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c323b1 call 0x11c32de0 */
  push32(0x11c323b6u); f_11c32de0();
  /* 11c323b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c323b8 je 0x11c32404 */
  if (C.zf) goto L_11c32404;
  /* 11c323ba call 0x11c33564 */
  push32(0x11c323bfu); f_11c33564();
  /* 11c323bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c323c4 push 0x11c527d8 */
  push32((uint32_t)(0x11c527d8u));
  /* 11c323c9 cmp eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c323ce jge 0x11c323e1 */
  if ((C.sf==C.of)) goto L_11c323e1;
  /* 11c323d0 call 0x11c31980 */
  push32(0x11c323d5u); f_11c31980();
  /* 11c323d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c323d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c323da push 0x11c52778 */
  push32((uint32_t)(0x11c52778u));
  /* 11c323df jmp 0x11c323f0 */
  goto L_11c323f0;
L_11c323e1:;
  /* 11c323e1 call 0x11c31a20 */
  push32(0x11c323e6u); f_11c31a20();
  /* 11c323e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c323e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c323eb push 0x11c52780 */
  push32((uint32_t)(0x11c52780u));
L_11c323f0:;
  /* 11c323f0 mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c323f5 call 0x11c32f70 */
  push32(0x11c323fau); f_11c32f70();
  /* 11c323fa mov ecx, 0x11c527d8 */
  ECX = (0x11c527d8u);
  /* 11c323ff call 0x11c330d0 */
  push32(0x11c32404u); f_11c330d0();
L_11c32404:;
  /* 11c32404 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32409 call 0x11c32de0 */
  push32(0x11c3240eu); f_11c32de0();
  /* 11c3240e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32410 je 0x11c32466 */
  if (C.zf) goto L_11c32466;
  /* 11c32412 call 0x11c33564 */
  push32(0x11c32417u); f_11c33564();
  /* 11c32417 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3241c push 0x11c528c8 */
  push32((uint32_t)(0x11c528c8u));
  /* 11c32421 cmp eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32426 jge 0x11c32443 */
  if ((C.sf==C.of)) goto L_11c32443;
  /* 11c32428 call 0x11c319d0 */
  push32(0x11c3242du); f_11c319d0();
  /* 11c3242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32430 mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32435 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32437 push 0x11c52778 */
  push32((uint32_t)(0x11c52778u));
  /* 11c3243c call 0x11c32f70 */
  push32(0x11c32441u); f_11c32f70();
  /* 11c32441 jmp 0x11c3245c */
  goto L_11c3245c;
L_11c32443:;
  /* 11c32443 call 0x11c31a20 */
  push32(0x11c32448u); f_11c31a20();
  /* 11c32448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3244b mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32450 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32452 push 0x11c52770 */
  push32((uint32_t)(0x11c52770u));
  /* 11c32457 call 0x11c33020 */
  push32(0x11c3245cu); f_11c33020();
L_11c3245c:;
  /* 11c3245c mov ecx, 0x11c528c8 */
  ECX = (0x11c528c8u);
  /* 11c32461 call 0x11c330d0 */
  push32(0x11c32466u); f_11c330d0();
L_11c32466:;
  /* 11c32466 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c32468 call dword ptr [0x11c3d118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d118))), 0x11c3246eu);
  /* 11c3246e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32471 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32473 je 0x11c324cc */
  if (C.zf) goto L_11c324cc;
  /* 11c32475 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32477 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c32479 call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c3247fu);
  /* 11c3247f mov esi, dword ptr [0x11c3d150] */
  ESI = (r32((uint32_t)(0x11c3d150)));
  /* 11c32485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32488 mov edi, 0x50 */
  EDI = (0x50u);
L_11c3248d:;
  /* 11c3248d push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3248f push 0x11c52528 */
  push32((uint32_t)(0x11c52528u));
  /* 11c32494 push 0x11c566a0 */
  push32((uint32_t)(0x11c566a0u));
  /* 11c32499 push 0x11c43090 */
  push32((uint32_t)(0x11c43090u));
  /* 11c3249e call esi */
  call_ind((uint32_t)(ESI), 0x11c324a0u);
  /* 11c324a0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c324a2 push 0x11c52528 */
  push32((uint32_t)(0x11c52528u));
  /* 11c324a7 push 0x11c566a0 */
  push32((uint32_t)(0x11c566a0u));
  /* 11c324ac push 0x11c43098 */
  push32((uint32_t)(0x11c43098u));
  /* 11c324b1 call esi */
  call_ind((uint32_t)(ESI), 0x11c324b3u);
  /* 11c324b3 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c324b5 push 0x11c52528 */
  push32((uint32_t)(0x11c52528u));
  /* 11c324ba push 0x11c566a0 */
  push32((uint32_t)(0x11c566a0u));
  /* 11c324bf push 0x11c430a0 */
  push32((uint32_t)(0x11c430a0u));
  /* 11c324c4 call esi */
  call_ind((uint32_t)(ESI), 0x11c324c6u);
  /* 11c324c6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c324c9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c324ca jne 0x11c3248d */
  if (!C.zf) goto L_11c3248d;
L_11c324cc:;
  /* 11c324cc mov edi, dword ptr [0x11c3d118] */
  EDI = (r32((uint32_t)(0x11c3d118)));
  /* 11c324d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c324d4 call edi */
  call_ind((uint32_t)(EDI), 0x11c324d6u);
  /* 11c324d6 mov ebx, dword ptr [0x11c3d1c0] */
  EBX = (r32((uint32_t)(0x11c3d1c0)));
  /* 11c324dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c324df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c324e1 jne 0x11c3254c */
  if (!C.zf) goto L_11c3254c;
  /* 11c324e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c324e5 push 0x11c52758 */
  push32((uint32_t)(0x11c52758u));
  /* 11c324ea call ebp */
  call_ind((uint32_t)(EBP), 0x11c324ecu);
  /* 11c324ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c324ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c324f1 jne 0x11c32513 */
  if (!C.zf) goto L_11c32513;
  /* 11c324f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c324f5 push 0x11c52760 */
  push32((uint32_t)(0x11c52760u));
  /* 11c324fa call ebp */
  call_ind((uint32_t)(EBP), 0x11c324fcu);
  /* 11c324fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c324ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32501 jne 0x11c32513 */
  if (!C.zf) goto L_11c32513;
  /* 11c32503 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c32505 push 0x11c52768 */
  push32((uint32_t)(0x11c52768u));
  /* 11c3250a call ebp */
  call_ind((uint32_t)(EBP), 0x11c3250cu);
  /* 11c3250c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3250f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32511 je 0x11c3254c */
  if (C.zf) goto L_11c3254c;
L_11c32513:;
  /* 11c32513 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32515 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c32517 call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c3251du);
  /* 11c3251d push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3251f call 0x11c31910 */
  push32(0x11c32524u); f_11c31910();
  /* 11c32524 mov esi, dword ptr [0x11c3d1bc] */
  ESI = (r32((uint32_t)(0x11c3d1bc)));
  /* 11c3252a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3252c push 0x11c42d70 */
  push32((uint32_t)(0x11c42d70u));
  /* 11c32531 call esi */
  call_ind((uint32_t)(ESI), 0x11c32533u);
  /* 11c32533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32535 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c32537 push 0x11c52770 */
  push32((uint32_t)(0x11c52770u));
  /* 11c3253c push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3253e call ebx */
  call_ind((uint32_t)(EBX), 0x11c32540u);
  /* 11c32540 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c32542 call 0x11c31950 */
  push32(0x11c32547u); f_11c31950();
  /* 11c32547 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3254a jmp 0x11c32552 */
  goto L_11c32552;
L_11c3254c:;
  /* 11c3254c mov esi, dword ptr [0x11c3d1bc] */
  ESI = (r32((uint32_t)(0x11c3d1bc)));
L_11c32552:;
  /* 11c32552 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c32554 call edi */
  call_ind((uint32_t)(EDI), 0x11c32556u);
  /* 11c32556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32559 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3255b jne 0x11c325c5 */
  if (!C.zf) goto L_11c325c5;
  /* 11c3255d push 0x11c42d70 */
  push32((uint32_t)(0x11c42d70u));
  /* 11c32562 push 0x11c52770 */
  push32((uint32_t)(0x11c52770u));
  /* 11c32567 call dword ptr [0x11c3d1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1c8))), 0x11c3256du);
  /* 11c3256d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32572 je 0x11c325c5 */
  if (C.zf) goto L_11c325c5;
  /* 11c32574 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32576 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c32578 call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c3257eu);
  /* 11c3257e push 0x11c52770 */
  push32((uint32_t)(0x11c52770u));
  /* 11c32583 call dword ptr [0x11c3d154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d154))), 0x11c32589u);
  /* 11c32589 call dword ptr [0x11c3d158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d158))), 0x11c3258fu);
  /* 11c3258f push 0x11c3f5b4 */
  push32((uint32_t)(0x11c3f5b4u));
  /* 11c32594 call dword ptr [0x11c3d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d134))), 0x11c3259au);
  /* 11c3259a push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3259c call 0x11c31910 */
  push32(0x11c325a1u); f_11c31910();
  /* 11c325a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c325a3 push 0x11c42d70 */
  push32((uint32_t)(0x11c42d70u));
  /* 11c325a8 call esi */
  call_ind((uint32_t)(ESI), 0x11c325aau);
  /* 11c325aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11c325ac push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11c325ae push 0x11c52780 */
  push32((uint32_t)(0x11c52780u));
  /* 11c325b3 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c325b5 call dword ptr [0x11c3d1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b4))), 0x11c325bbu);
  /* 11c325bb push 6 */
  push32((uint32_t)(0x6u));
  /* 11c325bd call 0x11c31950 */
  push32(0x11c325c2u); f_11c31950();
  /* 11c325c2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c325c5:;
  /* 11c325c5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11c325c7 call edi */
  call_ind((uint32_t)(EDI), 0x11c325c9u);
  /* 11c325c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c325cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c325ce jne 0x11c3266a */
  if (!C.zf) goto L_11c3266a;
  /* 11c325d4 mov ecx, 0x11c526d8 */
  ECX = (0x11c526d8u);
  /* 11c325d9 call 0x11c32cc0 */
  push32(0x11c325deu); f_11c32cc0();
  /* 11c325de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c325e0 jne 0x11c3266a */
  if (!C.zf) goto L_11c3266a;
  /* 11c325e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c325e8 push 0x11c52758 */
  push32((uint32_t)(0x11c52758u));
  /* 11c325ed call ebp */
  call_ind((uint32_t)(EBP), 0x11c325efu);
  /* 11c325ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c325f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c325f4 jne 0x11c3266a */
  if (!C.zf) goto L_11c3266a;
  /* 11c325f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c325f8 push 0x11c52760 */
  push32((uint32_t)(0x11c52760u));
  /* 11c325fd call ebp */
  call_ind((uint32_t)(EBP), 0x11c325ffu);
  /* 11c325ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32604 jne 0x11c3266a */
  if (!C.zf) goto L_11c3266a;
  /* 11c32606 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c32608 push 0x11c52768 */
  push32((uint32_t)(0x11c52768u));
  /* 11c3260d call ebp */
  call_ind((uint32_t)(EBP), 0x11c3260fu);
  /* 11c3260f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c32614 jne 0x11c3266a */
  if (!C.zf) goto L_11c3266a;
  /* 11c32616 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32618 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11c3261a call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c32620u);
  /* 11c32620 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c32622 call 0x11c31910 */
  push32(0x11c32627u); f_11c31910();
  /* 11c32627 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32629 push 0x11c43090 */
  push32((uint32_t)(0x11c43090u));
  /* 11c3262e call esi */
  call_ind((uint32_t)(ESI), 0x11c32630u);
  /* 11c32630 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32632 push 0x11c43098 */
  push32((uint32_t)(0x11c43098u));
  /* 11c32637 call esi */
  call_ind((uint32_t)(ESI), 0x11c32639u);
  /* 11c32639 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3263b push 0x11c430a0 */
  push32((uint32_t)(0x11c430a0u));
  /* 11c32640 call esi */
  call_ind((uint32_t)(ESI), 0x11c32642u);
  /* 11c32642 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32644 push 0x11c52528 */
  push32((uint32_t)(0x11c52528u));
  /* 11c32649 call esi */
  call_ind((uint32_t)(ESI), 0x11c3264bu);
  /* 11c3264b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3264d push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3264f call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32655u);
  /* 11c32655 push 0x11c3f5a4 */
  push32((uint32_t)(0x11c3f5a4u));
  /* 11c3265a call dword ptr [0x11c3d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d134))), 0x11c32660u);
  /* 11c32660 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c32662 call 0x11c31950 */
  push32(0x11c32667u); f_11c31950();
  /* 11c32667 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3266a:;
  /* 11c3266a push 5 */
  push32((uint32_t)(0x5u));
  /* 11c3266c push 0x11c42d40 */
  push32((uint32_t)(0x11c42d40u));
  /* 11c32671 push 0x11c566bc */
  push32((uint32_t)(0x11c566bcu));
  /* 11c32676 call 0x11c31000 */
  push32(0x11c3267bu); f_11c31000();
  /* 11c3267b mov ebp, dword ptr [0x11c3d15c] */
  EBP = (r32((uint32_t)(0x11c3d15c)));
  /* 11c32681 mov edi, eax */
  EDI = (EAX);
  /* 11c32683 mov eax, dword ptr [0x11c52962] */
  EAX = (r32((uint32_t)(0x11c52962)));
  /* 11c32688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3268b sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3268e je 0x11c32829 */
  if (C.zf) goto L_11c32829;
  /* 11c32694 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c32695 jne 0x11c32957 */
  if (!C.zf) goto L_11c32957;
  /* 11c3269b mov esi, dword ptr [0x11c3d148] */
  ESI = (r32((uint32_t)(0x11c3d148)));
  /* 11c326a1 call esi */
  call_ind((uint32_t)(ESI), 0x11c326a3u);
  /* 11c326a3 cmp eax, dword ptr [0x11c5296a] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c5296a))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c326a9 jle 0x11c326cf */
  if ((C.zf||C.sf!=C.of)) goto L_11c326cf;
  /* 11c326ab push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c326b0 call dword ptr [0x11c3d160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d160))), 0x11c326b6u);
  /* 11c326b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c326b9 call esi */
  call_ind((uint32_t)(ESI), 0x11c326bbu);
  /* 11c326bb add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c326c0 mov dword ptr [0x11c5296a], eax */
  w32((uint32_t)(0x11c5296a), (EAX));
  /* 11c326c5 call esi */
  call_ind((uint32_t)(ESI), 0x11c326c7u);
  /* 11c326c7 add eax, 0x4b */
  { uint32_t _a=(EAX),_b=(0x4bu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c326ca mov dword ptr [0x11c5296e], eax */
  w32((uint32_t)(0x11c5296e), (EAX));
L_11c326cf:;
  /* 11c326cf call esi */
  call_ind((uint32_t)(ESI), 0x11c326d1u);
  /* 11c326d1 cmp eax, dword ptr [0x11c5296e] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c5296e))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c326d7 jle 0x11c32729 */
  if ((C.zf||C.sf!=C.of)) goto L_11c32729;
  /* 11c326d9 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c326db call 0x11c31910 */
  push32(0x11c326e0u); f_11c31910();
  /* 11c326e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c326e2 push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c326e7 call dword ptr [0x11c3d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1bc))), 0x11c326edu);
  /* 11c326ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c326f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c326f2 call 0x11c33564 */
  push32(0x11c326f7u); f_11c33564();
  /* 11c326f7 push eax */
  push32((uint32_t)(EAX));
  /* 11c326f8 mov eax, dword ptr [0x11c5295e] */
  EAX = (r32((uint32_t)(0x11c5295e)));
  /* 11c326fd lea ecx, [eax*8 + 0x11c42d40] */
  ECX = ((uint32_t)(EAX*8 + 0x11c42d40));
  /* 11c32704 push ecx */
  push32((uint32_t)(ECX));
  /* 11c32705 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c32707 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32709u);
  /* 11c32709 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3270b call 0x11c31950 */
  push32(0x11c32710u); f_11c31950();
  /* 11c32710 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32713 call esi */
  call_ind((uint32_t)(ESI), 0x11c32715u);
  /* 11c32715 add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3271a mov dword ptr [0x11c5296e], eax */
  w32((uint32_t)(0x11c5296e), (EAX));
  /* 11c3271f call esi */
  call_ind((uint32_t)(ESI), 0x11c32721u);
  /* 11c32721 add eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32724 mov dword ptr [0x11c52972], eax */
  w32((uint32_t)(0x11c52972), (EAX));
L_11c32729:;
  /* 11c32729 mov edi, dword ptr [0x11c3d148] */
  EDI = (r32((uint32_t)(0x11c3d148)));
  /* 11c3272f call edi */
  call_ind((uint32_t)(EDI), 0x11c32731u);
  /* 11c32731 mov ecx, dword ptr [0x11c52972] */
  ECX = (r32((uint32_t)(0x11c52972)));
  /* 11c32737 mov esi, dword ptr [0x11c3d164] */
  ESI = (r32((uint32_t)(0x11c3d164)));
  /* 11c3273d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3273f jle 0x11c32761 */
  if ((C.zf||C.sf!=C.of)) goto L_11c32761;
  /* 11c32741 push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c32746 call esi */
  call_ind((uint32_t)(ESI), 0x11c32748u);
  /* 11c32748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3274b call edi */
  call_ind((uint32_t)(EDI), 0x11c3274du);
  /* 11c3274d add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32752 mov dword ptr [0x11c52972], eax */
  w32((uint32_t)(0x11c52972), (EAX));
  /* 11c32757 call edi */
  call_ind((uint32_t)(EDI), 0x11c32759u);
  /* 11c32759 add eax, 0x4b */
  { uint32_t _a=(EAX),_b=(0x4bu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3275c mov dword ptr [0x11c5296a], eax */
  w32((uint32_t)(0x11c5296a), (EAX));
L_11c32761:;
  /* 11c32761 call edi */
  call_ind((uint32_t)(EDI), 0x11c32763u);
  /* 11c32763 cmp eax, dword ptr [0x11c52966] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c52966))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32769 jle 0x11c32775 */
  if ((C.zf||C.sf!=C.of)) goto L_11c32775;
  /* 11c3276b push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c32770 call esi */
  call_ind((uint32_t)(ESI), 0x11c32772u);
  /* 11c32772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c32775:;
  /* 11c32775 call edi */
  call_ind((uint32_t)(EDI), 0x11c32777u);
  /* 11c32777 mov edx, dword ptr [0x11c52966] */
  EDX = (r32((uint32_t)(0x11c52966)));
  /* 11c3277d add edx, 0x32 */
  { uint32_t _a=(EDX),_b=(0x32u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32780 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32782 jle 0x11c32957 */
  if ((C.zf||C.sf!=C.of)) goto L_11c32957;
  /* 11c32788 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11c3278d push 0x11c566bc */
  push32((uint32_t)(0x11c566bcu));
  /* 11c32792 push 0x11c566c4 */
  push32((uint32_t)(0x11c566c4u));
  /* 11c32797 call dword ptr [0x11c3d1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b8))), 0x11c3279du);
  /* 11c3279d push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3279f call 0x11c31910 */
  push32(0x11c327a4u); f_11c31910();
  /* 11c327a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c327a6 push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c327ab call dword ptr [0x11c3d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1bc))), 0x11c327b1u);
  /* 11c327b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c327b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c327b6 call 0x11c33564 */
  push32(0x11c327bbu); f_11c33564();
  /* 11c327bb push eax */
  push32((uint32_t)(EAX));
  /* 11c327bc push 0x11c566c4 */
  push32((uint32_t)(0x11c566c4u));
  /* 11c327c1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c327c3 call ebx */
  call_ind((uint32_t)(EBX), 0x11c327c5u);
  /* 11c327c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c327c7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c327c9 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c327cfu);
  /* 11c327cf push 6 */
  push32((uint32_t)(0x6u));
  /* 11c327d1 call 0x11c31950 */
  push32(0x11c327d6u); f_11c31950();
  /* 11c327d6 mov eax, dword ptr [0x11c5295e] */
  EAX = (r32((uint32_t)(0x11c5295e)));
  /* 11c327db mov dword ptr [0x11c52962], 0 */
  w32((uint32_t)(0x11c52962), (0x0u));
  /* 11c327e5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c327e8 mov byte ptr [eax + 0x11c52950], 1 */
  w8((uint32_t)(EAX + 0x11c52950), (0x1u));
  /* 11c327ef mov ecx, dword ptr [0x11c5295e] */
  ECX = (r32((uint32_t)(0x11c5295e)));
  /* 11c327f5 cmp ecx, dword ptr [0x11c5295a] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c5295a))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c327fb jne 0x11c32814 */
  if (!C.zf) goto L_11c32814;
  /* 11c327fd mov edi, dword ptr [0x11c3d134] */
  EDI = (r32((uint32_t)(0x11c3d134)));
  /* 11c32803 push 0x11c3f594 */
  push32((uint32_t)(0x11c3f594u));
  /* 11c32808 call edi */
  call_ind((uint32_t)(EDI), 0x11c3280au);
  /* 11c3280a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3280d call ebp */
  call_ind((uint32_t)(EBP), 0x11c3280fu);
  /* 11c3280f jmp 0x11c3295d */
  goto L_11c3295d;
L_11c32814:;
  /* 11c32814 mov edi, dword ptr [0x11c3d134] */
  EDI = (r32((uint32_t)(0x11c3d134)));
  /* 11c3281a push 0x11c3f584 */
  push32((uint32_t)(0x11c3f584u));
  /* 11c3281f call edi */
  call_ind((uint32_t)(EDI), 0x11c32821u);
  /* 11c32821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32824 jmp 0x11c3295d */
  goto L_11c3295d;
L_11c32829:;
  /* 11c32829 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3282c jge 0x11c3283f */
  if ((C.sf==C.of)) goto L_11c3283f;
  /* 11c3282e mov al, byte ptr [edi + 0x11c52950] */
  AL = (r8((uint32_t)(EDI + 0x11c52950)));
  /* 11c32834 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32836 jne 0x11c3283f */
  if (!C.zf) goto L_11c3283f;
  /* 11c32838 mov eax, 1 */
  EAX = (0x1u);
  /* 11c3283d jmp 0x11c32841 */
  goto L_11c32841;
L_11c3283f:;
  /* 11c3283f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c32841:;
  /* 11c32841 push eax */
  push32((uint32_t)(EAX));
  /* 11c32842 mov ecx, 0x11c566b0 */
  ECX = (0x11c566b0u);
  /* 11c32847 call 0x11c333e0 */
  push32(0x11c3284cu); f_11c333e0();
  /* 11c3284c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3284e je 0x11c32957 */
  if (C.zf) goto L_11c32957;
  /* 11c32854 mov ebx, dword ptr [0x11c3d168] */
  EBX = (r32((uint32_t)(0x11c3d168)));
  /* 11c3285a push 0x11c3f570 */
  push32((uint32_t)(0x11c3f570u));
  /* 11c3285f call ebx */
  call_ind((uint32_t)(EBX), 0x11c32861u);
  /* 11c32861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32864 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32866 je 0x11c32957 */
  if (C.zf) goto L_11c32957;
  /* 11c3286c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3286e call 0x11c31910 */
  push32(0x11c32873u); f_11c31910();
  /* 11c32873 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11c32878 push 0x11c566bc */
  push32((uint32_t)(0x11c566bcu));
  /* 11c3287d push 0x11c566c4 */
  push32((uint32_t)(0x11c566c4u));
  /* 11c32882 call dword ptr [0x11c3d1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b8))), 0x11c32888u);
  /* 11c32888 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3288a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3288c push 0x11c52940 */
  push32((uint32_t)(0x11c52940u));
  /* 11c32891 push 0x11c566c4 */
  push32((uint32_t)(0x11c566c4u));
  /* 11c32896 call dword ptr [0x11c3d16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d16c))), 0x11c3289cu);
  /* 11c3289c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3289e push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c328a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c328a5 call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c328abu);
  /* 11c328ab push 0x11c52948 */
  push32((uint32_t)(0x11c52948u));
  /* 11c328b0 call dword ptr [0x11c3d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d170))), 0x11c328b6u);
  /* 11c328b6 mov esi, eax */
  ESI = (EAX);
  /* 11c328b8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c328bb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c328bd jne 0x11c328da */
  if (!C.zf) goto L_11c328da;
  /* 11c328bf mov edi, dword ptr [0x11c3d134] */
  EDI = (r32((uint32_t)(0x11c3d134)));
  /* 11c328c5 push 0x11c3f564 */
  push32((uint32_t)(0x11c3f564u));
  /* 11c328ca call edi */
  call_ind((uint32_t)(EDI), 0x11c328ccu);
  /* 11c328cc push esi */
  push32((uint32_t)(ESI));
  /* 11c328cd call 0x11c31950 */
  push32(0x11c328d2u); f_11c31950();
  /* 11c328d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c328d5 jmp 0x11c3295d */
  goto L_11c3295d;
L_11c328da:;
  /* 11c328da cmp esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c328dd jge 0x11c328f9 */
  if ((C.sf==C.of)) goto L_11c328f9;
  /* 11c328df push 0x11c3f554 */
  push32((uint32_t)(0x11c3f554u));
  /* 11c328e4 call ebx */
  call_ind((uint32_t)(EBX), 0x11c328e6u);
  /* 11c328e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c328e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c328eb jne 0x11c328f9 */
  if (!C.zf) goto L_11c328f9;
  /* 11c328ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11c328ef call 0x11c31950 */
  push32(0x11c328f4u); f_11c31950();
  /* 11c328f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c328f7 jmp 0x11c32957 */
  goto L_11c32957;
L_11c328f9:;
  /* 11c328f9 cmp esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c328fc mov dword ptr [0x11c52962], 1 */
  w32((uint32_t)(0x11c52962), (0x1u));
  /* 11c32906 mov dword ptr [0x11c5295e], edi */
  w32((uint32_t)(0x11c5295e), (EDI));
  /* 11c3290c jl 0x11c32913 */
  if ((C.sf!=C.of)) goto L_11c32913;
  /* 11c3290e mov esi, 0x14 */
  ESI = (0x14u);
L_11c32913:;
  /* 11c32913 mov edi, dword ptr [0x11c3d148] */
  EDI = (r32((uint32_t)(0x11c3d148)));
  /* 11c32919 call edi */
  call_ind((uint32_t)(EDI), 0x11c3291bu);
  /* 11c3291b mov ecx, eax */
  ECX = (EAX);
  /* 11c3291d mov eax, 0x13880 */
  EAX = (0x13880u);
  /* 11c32922 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c32923 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c32925 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32927 mov dword ptr [0x11c52966], ecx */
  w32((uint32_t)(0x11c52966), (ECX));
  /* 11c3292d call edi */
  call_ind((uint32_t)(EDI), 0x11c3292fu);
  /* 11c3292f mov dword ptr [0x11c5296a], eax */
  w32((uint32_t)(0x11c5296a), (EAX));
  /* 11c32934 add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32939 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3293b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3293d mov dword ptr [0x11c52972], eax */
  w32((uint32_t)(0x11c52972), (EAX));
  /* 11c32942 mov dword ptr [0x11c5296e], eax */
  w32((uint32_t)(0x11c5296e), (EAX));
  /* 11c32947 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c3294du);
  /* 11c3294d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3294f call 0x11c31950 */
  push32(0x11c32954u); f_11c31950();
  /* 11c32954 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c32957:;
  /* 11c32957 mov edi, dword ptr [0x11c3d134] */
  EDI = (r32((uint32_t)(0x11c3d134)));
L_11c3295d:;
  /* 11c3295d mov esi, dword ptr [0x11c3d118] */
  ESI = (r32((uint32_t)(0x11c3d118)));
  /* 11c32963 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c32965 call esi */
  call_ind((uint32_t)(ESI), 0x11c32967u);
  /* 11c32967 mov ebx, dword ptr [0x11c3d174] */
  EBX = (r32((uint32_t)(0x11c3d174)));
  /* 11c3296d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32970 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32972 je 0x11c329ac */
  if (C.zf) goto L_11c329ac;
  /* 11c32974 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c32976 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32978u);
  /* 11c32978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3297b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3297d je 0x11c329ac */
  if (C.zf) goto L_11c329ac;
  /* 11c3297f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32981 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c32983 call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c32989u);
  /* 11c32989 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c3298b call esi */
  call_ind((uint32_t)(ESI), 0x11c3298du);
  /* 11c3298d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32990 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32992 je 0x11c329a0 */
  if (C.zf) goto L_11c329a0;
  /* 11c32994 push 0x11c3f548 */
  push32((uint32_t)(0x11c3f548u));
  /* 11c32999 call edi */
  call_ind((uint32_t)(EDI), 0x11c3299bu);
  /* 11c3299b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3299e jmp 0x11c329ac */
  goto L_11c329ac;
L_11c329a0:;
  /* 11c329a0 push 0x11c3f53c */
  push32((uint32_t)(0x11c3f53cu));
  /* 11c329a5 call edi */
  call_ind((uint32_t)(EDI), 0x11c329a7u);
  /* 11c329a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329aa call ebp */
  call_ind((uint32_t)(EBP), 0x11c329acu);
L_11c329ac:;
  /* 11c329ac push 4 */
  push32((uint32_t)(0x4u));
  /* 11c329ae call esi */
  call_ind((uint32_t)(ESI), 0x11c329b0u);
  /* 11c329b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c329b5 je 0x11c329ef */
  if (C.zf) goto L_11c329ef;
  /* 11c329b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c329b9 call ebx */
  call_ind((uint32_t)(EBX), 0x11c329bbu);
  /* 11c329bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c329c0 je 0x11c329ef */
  if (C.zf) goto L_11c329ef;
  /* 11c329c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c329c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c329c6 call dword ptr [0x11c3d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b0))), 0x11c329ccu);
  /* 11c329cc push 3 */
  push32((uint32_t)(0x3u));
  /* 11c329ce call esi */
  call_ind((uint32_t)(ESI), 0x11c329d0u);
  /* 11c329d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c329d5 je 0x11c329e3 */
  if (C.zf) goto L_11c329e3;
  /* 11c329d7 push 0x11c3f530 */
  push32((uint32_t)(0x11c3f530u));
  /* 11c329dc call edi */
  call_ind((uint32_t)(EDI), 0x11c329deu);
  /* 11c329de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329e1 jmp 0x11c329ef */
  goto L_11c329ef;
L_11c329e3:;
  /* 11c329e3 push 0x11c3f53c */
  push32((uint32_t)(0x11c3f53cu));
  /* 11c329e8 call edi */
  call_ind((uint32_t)(EDI), 0x11c329eau);
  /* 11c329ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329ed call ebp */
  call_ind((uint32_t)(EBP), 0x11c329efu);
L_11c329ef:;
  /* 11c329ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11c329f1 call ebx */
  call_ind((uint32_t)(EBX), 0x11c329f3u);
  /* 11c329f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c329f6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c329f8 jne 0x11c32a08 */
  if (!C.zf) goto L_11c32a08;
  /* 11c329fa mov ecx, 0x11c566b0 */
  ECX = (0x11c566b0u);
  /* 11c329ff call 0x11c332f0 */
  push32(0x11c32a04u); f_11c332f0();
  /* 11c32a04 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32a06 jne 0x11c32a18 */
  if (!C.zf) goto L_11c32a18;
L_11c32a08:;
  /* 11c32a08 push 0x11c3f528 */
  push32((uint32_t)(0x11c3f528u));
  /* 11c32a0d call edi */
  call_ind((uint32_t)(EDI), 0x11c32a0fu);
  /* 11c32a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32a12 call dword ptr [0x11c3d178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d178))), 0x11c32a18u);
L_11c32a18:;
  /* 11c32a18 pop edi */
  EDI = (pop32());
  /* 11c32a19 pop esi */
  ESI = (pop32());
  /* 11c32a1a pop ebp */
  EBP = (pop32());
  /* 11c32a1b pop ebx */
  EBX = (pop32());
  /* 11c32a1c ret  */
  ESPCHK(0x11c31a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x11c32a30 (13 bytes, 4 insns) */
void f_11c32a30(void) {
  FTRACE(0x11c32a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c32a32 mov ecx, 0x11c42c90 */
  ECX = (0x11c42c90u);
  /* 11c32a37 call 0x11c3aefc */
  push32(0x11c32a3cu); f_11c3aefc();
  /* 11c32a3c ret  */
  ESPCHK(0x11c32a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a40 @ 0x11c32a40 (12 bytes, 4 insns) */
void f_11c32a40(void) {
  FTRACE(0x11c32a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32a40 push 0x11c32a50 */
  push32((uint32_t)(0x11c32a50u));
  /* 11c32a45 call 0x11c336e0 */
  push32(0x11c32a4au); f_11c336e0();
  /* 11c32a4a pop ecx */
  ECX = (pop32());
  /* 11c32a4b ret  */
  ESPCHK(0x11c32a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a70 @ 0x11c32a70 (20 bytes, 6 insns) */
void f_11c32a70(void) {
  FTRACE(0x11c32a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32a70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c32a74 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c32a75 jne 0x11c32a7c */
  if (!C.zf) goto L_11c32a7c;
  /* 11c32a77 call 0x11c31090 */
  push32(0x11c32a7cu); f_11c31090();
L_11c32a7c:;
  /* 11c32a7c mov eax, 1 */
  EAX = (0x1u);
  /* 11c32a81 ret 0xc */
  ESPCHK(0x11c32a70u, _esp0);
  ESP += 16; return;
}

/* FUN_10002ab0 @ 0x11c32ab0 (22 bytes, 9 insns) */
void f_11c32ab0(void) {
  FTRACE(0x11c32ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32ab0 push esi */
  push32((uint32_t)(ESI));
  /* 11c32ab1 mov esi, ecx */
  ESI = (ECX);
  /* 11c32ab3 push 0x11c3f4d8 */
  push32((uint32_t)(0x11c3f4d8u));
  /* 11c32ab8 push esi */
  push32((uint32_t)(ESI));
  /* 11c32ab9 call dword ptr [0x11c3d18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d18c))), 0x11c32abfu);
  /* 11c32abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32ac2 mov eax, esi */
  EAX = (ESI);
  /* 11c32ac4 pop esi */
  ESI = (pop32());
  /* 11c32ac5 ret  */
  ESPCHK(0x11c32ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad0 @ 0x11c32ad0 (162 bytes, 58 insns) */
void f_11c32ad0(void) {
  FTRACE(0x11c32ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c32ad1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32ad2 push esi */
  push32((uint32_t)(ESI));
  /* 11c32ad3 push edi */
  push32((uint32_t)(EDI));
  /* 11c32ad4 mov esi, ecx */
  ESI = (ECX);
  /* 11c32ad6 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c32ad8 push esi */
  push32((uint32_t)(ESI));
  /* 11c32ad9 call dword ptr [0x11c3d190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d190))), 0x11c32adfu);
  /* 11c32adf mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c32ae3 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c32ae7 lea ebx, [esi + 4] */
  EBX = ((uint32_t)(ESI + 0x4));
  /* 11c32aea push ecx */
  push32((uint32_t)(ECX));
  /* 11c32aeb push ebx */
  push32((uint32_t)(EBX));
  /* 11c32aec mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c32aee call dword ptr [0x11c3d198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d198))), 0x11c32af4u);
  /* 11c32af4 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11c32af8 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11c32afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32afd cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32aff je 0x11c32b17 */
  if (C.zf) goto L_11c32b17;
  /* 11c32b01 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 11c32b04 push eax */
  push32((uint32_t)(EAX));
  /* 11c32b05 push edi */
  push32((uint32_t)(EDI));
  /* 11c32b06 call dword ptr [0x11c3d184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d184))), 0x11c32b0cu);
  /* 11c32b0c push edi */
  push32((uint32_t)(EDI));
  /* 11c32b0d push ebx */
  push32((uint32_t)(EBX));
  /* 11c32b0e call dword ptr [0x11c3d114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d114))), 0x11c32b14u);
  /* 11c32b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c32b17:;
  /* 11c32b17 mov edi, dword ptr [0x11c3d194] */
  EDI = (r32((uint32_t)(0x11c3d194)));
  /* 11c32b1d lea edx, [esi + 0x14] */
  EDX = ((uint32_t)(ESI + 0x14));
  /* 11c32b20 push edx */
  push32((uint32_t)(EDX));
  /* 11c32b21 call edi */
  call_ind((uint32_t)(EDI), 0x11c32b23u);
  /* 11c32b23 lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 11c32b26 push eax */
  push32((uint32_t)(EAX));
  /* 11c32b27 call edi */
  call_ind((uint32_t)(EDI), 0x11c32b29u);
  /* 11c32b29 lea ecx, [esi + 0x6c] */
  ECX = ((uint32_t)(ESI + 0x6c));
  /* 11c32b2c push ecx */
  push32((uint32_t)(ECX));
  /* 11c32b2d call edi */
  call_ind((uint32_t)(EDI), 0x11c32b2fu);
  /* 11c32b2f mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11c32b33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32b36 mov eax, 1 */
  EAX = (0x1u);
  /* 11c32b3b mov dword ptr [esi + 0x30], ebp */
  w32((uint32_t)(ESI + 0x30), (EBP));
  /* 11c32b3e mov dword ptr [esi + 0x34], ebp */
  w32((uint32_t)(ESI + 0x34), (EBP));
  /* 11c32b41 mov dword ptr [esi + 0x38], 0x3c */
  w32((uint32_t)(ESI + 0x38), (0x3cu));
  /* 11c32b48 mov dword ptr [esi + 0x44], ebp */
  w32((uint32_t)(ESI + 0x44), (EBP));
  /* 11c32b4b mov dword ptr [esi + 0x48], ebp */
  w32((uint32_t)(ESI + 0x48), (EBP));
  /* 11c32b4e mov dword ptr [esi + 0x4c], 0x78 */
  w32((uint32_t)(ESI + 0x4c), (0x78u));
  /* 11c32b55 mov dword ptr [esi + 0x54], ebp */
  w32((uint32_t)(ESI + 0x54), (EBP));
  /* 11c32b58 mov dword ptr [esi + 0x50], eax */
  w32((uint32_t)(ESI + 0x50), (EAX));
  /* 11c32b5b mov dword ptr [esi + 0x58], 0xa */
  w32((uint32_t)(ESI + 0x58), (0xau));
  /* 11c32b62 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 11c32b65 mov dword ptr [esi + 0x60], ebp */
  w32((uint32_t)(ESI + 0x60), (EBP));
  /* 11c32b68 mov dword ptr [esi + 0x24], edx */
  w32((uint32_t)(ESI + 0x24), (EDX));
  /* 11c32b6b pop edi */
  EDI = (pop32());
  /* 11c32b6c pop esi */
  ESI = (pop32());
  /* 11c32b6d pop ebp */
  EBP = (pop32());
  /* 11c32b6e pop ebx */
  EBX = (pop32());
  /* 11c32b6f ret 0x10 */
  ESPCHK(0x11c32ad0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002b80 @ 0x11c32b80 (10 bytes, 3 insns) */
void f_11c32b80(void) {
  FTRACE(0x11c32b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32b80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32b84 mov dword ptr [ecx + 0x50], eax */
  w32((uint32_t)(ECX + 0x50), (EAX));
  /* 11c32b87 ret 4 */
  ESPCHK(0x11c32b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10002b90 @ 0x11c32b90 (10 bytes, 3 insns) */
void f_11c32b90(void) {
  FTRACE(0x11c32b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32b90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32b94 mov dword ptr [ecx + 0x58], eax */
  w32((uint32_t)(ECX + 0x58), (EAX));
  /* 11c32b97 ret 4 */
  ESPCHK(0x11c32b90u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ba0 @ 0x11c32ba0 (10 bytes, 3 insns) */
void f_11c32ba0(void) {
  FTRACE(0x11c32ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32ba0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32ba4 mov dword ptr [ecx + 0x5c], eax */
  w32((uint32_t)(ECX + 0x5c), (EAX));
  /* 11c32ba7 ret 4 */
  ESPCHK(0x11c32ba0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002bb0 @ 0x11c32bb0 (10 bytes, 3 insns) */
void f_11c32bb0(void) {
  FTRACE(0x11c32bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32bb0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32bb4 mov dword ptr [ecx + 0x60], eax */
  w32((uint32_t)(ECX + 0x60), (EAX));
  /* 11c32bb7 ret 4 */
  ESPCHK(0x11c32bb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002bc0 @ 0x11c32bc0 (32 bytes, 10 insns) */
void f_11c32bc0(void) {
  FTRACE(0x11c32bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32bc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32bc4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c32bc6 mov dword ptr [ecx + 0x3c], edx */
  w32((uint32_t)(ECX + 0x3c), (EDX));
  /* 11c32bc9 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c32bcc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c32bd0 mov dword ptr [ecx + 0x40], eax */
  w32((uint32_t)(ECX + 0x40), (EAX));
  /* 11c32bd3 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c32bd7 mov dword ptr [ecx + 0x44], edx */
  w32((uint32_t)(ECX + 0x44), (EDX));
  /* 11c32bda mov dword ptr [ecx + 0x48], eax */
  w32((uint32_t)(ECX + 0x48), (EAX));
  /* 11c32bdd ret 0xc */
  ESPCHK(0x11c32bc0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002be0 @ 0x11c32be0 (39 bytes, 14 insns) */
void f_11c32be0(void) {
  FTRACE(0x11c32be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32be0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32be4 push esi */
  push32((uint32_t)(ESI));
  /* 11c32be5 mov esi, ecx */
  ESI = (ECX);
  /* 11c32be7 push eax */
  push32((uint32_t)(EAX));
  /* 11c32be8 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11c32beb push ecx */
  push32((uint32_t)(ECX));
  /* 11c32bec call dword ptr [0x11c3d188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d188))), 0x11c32bf2u);
  /* 11c32bf2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c32bf6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c32bfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32bfd mov dword ptr [esi + 0x30], edx */
  w32((uint32_t)(ESI + 0x30), (EDX));
  /* 11c32c00 mov dword ptr [esi + 0x34], eax */
  w32((uint32_t)(ESI + 0x34), (EAX));
  /* 11c32c03 pop esi */
  ESI = (pop32());
  /* 11c32c04 ret 0xc */
  ESPCHK(0x11c32be0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002c10 @ 0x11c32c10 (39 bytes, 14 insns) */
void f_11c32c10(void) {
  FTRACE(0x11c32c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32c10 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32c14 push esi */
  push32((uint32_t)(ESI));
  /* 11c32c15 mov esi, ecx */
  ESI = (ECX);
  /* 11c32c17 push eax */
  push32((uint32_t)(EAX));
  /* 11c32c18 lea ecx, [esi + 0x3c] */
  ECX = ((uint32_t)(ESI + 0x3c));
  /* 11c32c1b push ecx */
  push32((uint32_t)(ECX));
  /* 11c32c1c call dword ptr [0x11c3d188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d188))), 0x11c32c22u);
  /* 11c32c22 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c32c26 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c32c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32c2d mov dword ptr [esi + 0x44], edx */
  w32((uint32_t)(ESI + 0x44), (EDX));
  /* 11c32c30 mov dword ptr [esi + 0x48], eax */
  w32((uint32_t)(ESI + 0x48), (EAX));
  /* 11c32c33 pop esi */
  ESI = (pop32());
  /* 11c32c34 ret 0xc */
  ESPCHK(0x11c32c10u, _esp0);
  ESP += 16; return;
}

/* FUN_10002c40 @ 0x11c32c40 (32 bytes, 10 insns) */
void f_11c32c40(void) {
  FTRACE(0x11c32c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32c40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32c44 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c32c46 mov dword ptr [ecx + 0x28], edx */
  w32((uint32_t)(ECX + 0x28), (EDX));
  /* 11c32c49 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c32c4c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c32c50 mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11c32c53 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c32c57 mov dword ptr [ecx + 0x30], edx */
  w32((uint32_t)(ECX + 0x30), (EDX));
  /* 11c32c5a mov dword ptr [ecx + 0x34], eax */
  w32((uint32_t)(ECX + 0x34), (EAX));
  /* 11c32c5d ret 0xc */
  ESPCHK(0x11c32c40u, _esp0);
  ESP += 16; return;
}

/* FUN_10002c60 @ 0x11c32c60 (14 bytes, 4 insns) */
void f_11c32c60(void) {
  FTRACE(0x11c32c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32c60 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32c64 imul eax, dword ptr [ecx + 0x30] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ECX + 0x30)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c32c68 mov dword ptr [ecx + 0x30], eax */
  w32((uint32_t)(ECX + 0x30), (EAX));
  /* 11c32c6b ret 4 */
  ESPCHK(0x11c32c60u, _esp0);
  ESP += 8; return;
}

/* FUN_10002c70 @ 0x11c32c70 (14 bytes, 5 insns) */
void f_11c32c70(void) {
  FTRACE(0x11c32c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32c70 mov eax, dword ptr [ecx + 0x30] */
  EAX = (r32((uint32_t)(ECX + 0x30)));
  /* 11c32c73 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c32c74 idiv dword ptr [esp + 4] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(ESP + 0x4))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c32c78 mov dword ptr [ecx + 0x30], eax */
  w32((uint32_t)(ECX + 0x30), (EAX));
  /* 11c32c7b ret 4 */
  ESPCHK(0x11c32c70u, _esp0);
  ESP += 8; return;
}

/* FUN_10002c80 @ 0x11c32c80 (14 bytes, 4 insns) */
void f_11c32c80(void) {
  FTRACE(0x11c32c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32c80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32c84 imul eax, dword ptr [ecx + 0x44] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ECX + 0x44)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c32c88 mov dword ptr [ecx + 0x44], eax */
  w32((uint32_t)(ECX + 0x44), (EAX));
  /* 11c32c8b ret 4 */
  ESPCHK(0x11c32c80u, _esp0);
  ESP += 8; return;
}

/* FUN_10002c90 @ 0x11c32c90 (14 bytes, 5 insns) */
void f_11c32c90(void) {
  FTRACE(0x11c32c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32c90 mov eax, dword ptr [ecx + 0x44] */
  EAX = (r32((uint32_t)(ECX + 0x44)));
  /* 11c32c93 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c32c94 idiv dword ptr [esp + 4] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(ESP + 0x4))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c32c98 mov dword ptr [ecx + 0x44], eax */
  w32((uint32_t)(ECX + 0x44), (EAX));
  /* 11c32c9b ret 4 */
  ESPCHK(0x11c32c90u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ca0 @ 0x11c32ca0 (18 bytes, 6 insns) */
void f_11c32ca0(void) {
  FTRACE(0x11c32ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32ca0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c32ca4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c32ca6 mov dword ptr [ecx + 0x64], edx */
  w32((uint32_t)(ECX + 0x64), (EDX));
  /* 11c32ca9 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c32cac mov dword ptr [ecx + 0x68], eax */
  w32((uint32_t)(ECX + 0x68), (EAX));
  /* 11c32caf ret 4 */
  ESPCHK(0x11c32ca0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002cc0 @ 0x11c32cc0 (20 bytes, 8 insns) */
void f_11c32cc0(void) {
  FTRACE(0x11c32cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32cc0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c32cc4 call dword ptr [0x11c3d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d170))), 0x11c32ccau);
  /* 11c32cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32ccd neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c32ccf sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c32cd1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c32cd3 ret  */
  ESPCHK(0x11c32cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x11c32ce0 (229 bytes, 92 insns) */
void f_11c32ce0(void) {
  FTRACE(0x11c32ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c32ce1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c32ce2 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32ce3 mov ebp, dword ptr [0x11c3d170] */
  EBP = (r32((uint32_t)(0x11c3d170)));
  /* 11c32ce9 push esi */
  push32((uint32_t)(ESI));
  /* 11c32cea mov esi, ecx */
  ESI = (ECX);
  /* 11c32cec push edi */
  push32((uint32_t)(EDI));
  /* 11c32ced lea ebx, [esi + 0x1c] */
  EBX = ((uint32_t)(ESI + 0x1c));
  /* 11c32cf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c32cf1 call ebp */
  call_ind((uint32_t)(EBP), 0x11c32cf3u);
  /* 11c32cf3 lea edi, [esi + 0x14] */
  EDI = ((uint32_t)(ESI + 0x14));
  /* 11c32cf6 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11c32cfa push edi */
  push32((uint32_t)(EDI));
  /* 11c32cfb call ebp */
  call_ind((uint32_t)(EBP), 0x11c32cfdu);
  /* 11c32cfd mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c32d01 mov ecx, dword ptr [esi + 0x24] */
  ECX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c32d04 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32d09 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32d0b jle 0x11c32d16 */
  if ((C.zf||C.sf!=C.of)) goto L_11c32d16;
  /* 11c32d0d pop edi */
  EDI = (pop32());
  /* 11c32d0e pop esi */
  ESI = (pop32());
  /* 11c32d0f pop ebp */
  EBP = (pop32());
  /* 11c32d10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c32d13 pop ebx */
  EBX = (pop32());
  /* 11c32d14 pop ecx */
  ECX = (pop32());
  /* 11c32d15 ret  */
  ESPCHK(0x11c32ce0u, _esp0);
  ESP += 4; return;
L_11c32d16:;
  /* 11c32d16 mov ecx, esi */
  ECX = (ESI);
  /* 11c32d18 call 0x11c32cc0 */
  push32(0x11c32d1du); f_11c32cc0();
  /* 11c32d1d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32d1f je 0x11c32dbd */
  if (C.zf) goto L_11c32dbd;
  /* 11c32d25 lea ebp, [esi + 4] */
  EBP = ((uint32_t)(ESI + 0x4));
  /* 11c32d28 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32d29 call dword ptr [0x11c3d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d110))), 0x11c32d2fu);
  /* 11c32d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32d32 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32d34 je 0x11c32dbd */
  if (C.zf) goto L_11c32dbd;
  /* 11c32d3a mov eax, dword ptr [esi + 0x54] */
  EAX = (r32((uint32_t)(ESI + 0x54)));
  /* 11c32d3d mov ecx, dword ptr [esi + 0x50] */
  ECX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c32d40 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32d42 jl 0x11c32d4f */
  if ((C.sf!=C.of)) goto L_11c32d4f;
  /* 11c32d44 mov edi, ebx */
  EDI = (EBX);
  /* 11c32d46 mov dword ptr [esi + 0x54], 0 */
  w32((uint32_t)(ESI + 0x54), (0x0u));
  /* 11c32d4d jmp 0x11c32d53 */
  goto L_11c32d53;
L_11c32d4f:;
  /* 11c32d4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c32d50 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
L_11c32d53:;
  /* 11c32d53 mov ebx, dword ptr [0x11c3d148] */
  EBX = (r32((uint32_t)(0x11c3d148)));
  /* 11c32d59 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32d5bu);
  /* 11c32d5b cmp eax, dword ptr [esi + 0x60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32d5e jle 0x11c32dbd */
  if ((C.zf||C.sf!=C.of)) goto L_11c32dbd;
  /* 11c32d60 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32d62u);
  /* 11c32d62 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
  /* 11c32d65 call 0x11c33564 */
  push32(0x11c32d6au); f_11c33564();
  /* 11c32d6a mov ecx, dword ptr [esi + 0x34] */
  ECX = (r32((uint32_t)(ESI + 0x34)));
  /* 11c32d6d mov ebx, dword ptr [0x11c3d150] */
  EBX = (r32((uint32_t)(0x11c3d150)));
  /* 11c32d73 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c32d78 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32d7a jl 0x11c32d94 */
  if ((C.sf!=C.of)) goto L_11c32d94;
  /* 11c32d7c push 3 */
  push32((uint32_t)(0x3u));
  /* 11c32d7e lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11c32d81 push edi */
  push32((uint32_t)(EDI));
  /* 11c32d82 push eax */
  push32((uint32_t)(EAX));
  /* 11c32d83 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32d84 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32d86u);
  /* 11c32d86 mov ecx, dword ptr [esi + 0x30] */
  ECX = (r32((uint32_t)(ESI + 0x30)));
  /* 11c32d89 mov eax, dword ptr [esi + 0x60] */
  EAX = (r32((uint32_t)(ESI + 0x60)));
  /* 11c32d8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32d8f add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32d91 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
L_11c32d94:;
  /* 11c32d94 call 0x11c33564 */
  push32(0x11c32d99u); f_11c33564();
  /* 11c32d99 mov ecx, dword ptr [esi + 0x48] */
  ECX = (r32((uint32_t)(ESI + 0x48)));
  /* 11c32d9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c32da1 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32da3 jl 0x11c32dbd */
  if ((C.sf!=C.of)) goto L_11c32dbd;
  /* 11c32da5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c32da7 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 11c32daa push edi */
  push32((uint32_t)(EDI));
  /* 11c32dab push edx */
  push32((uint32_t)(EDX));
  /* 11c32dac push ebp */
  push32((uint32_t)(EBP));
  /* 11c32dad call ebx */
  call_ind((uint32_t)(EBX), 0x11c32dafu);
  /* 11c32daf mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11c32db2 mov ecx, dword ptr [esi + 0x60] */
  ECX = (r32((uint32_t)(ESI + 0x60)));
  /* 11c32db5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32db8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32dba mov dword ptr [esi + 0x60], ecx */
  w32((uint32_t)(ESI + 0x60), (ECX));
L_11c32dbd:;
  /* 11c32dbd pop edi */
  EDI = (pop32());
  /* 11c32dbe pop esi */
  ESI = (pop32());
  /* 11c32dbf pop ebp */
  EBP = (pop32());
  /* 11c32dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c32dc2 pop ebx */
  EBX = (pop32());
  /* 11c32dc3 pop ecx */
  ECX = (pop32());
  /* 11c32dc4 ret  */
  ESPCHK(0x11c32ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd0 @ 0x11c32dd0 (14 bytes, 5 insns) */
void f_11c32dd0(void) {
  FTRACE(0x11c32dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32dd0 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c32dd4 call dword ptr [0x11c3d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d170))), 0x11c32ddau);
  /* 11c32dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32ddd ret  */
  ESPCHK(0x11c32dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de0 @ 0x11c32de0 (43 bytes, 18 insns) */
void f_11c32de0(void) {
  FTRACE(0x11c32de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32de0 push esi */
  push32((uint32_t)(ESI));
  /* 11c32de1 mov esi, ecx */
  ESI = (ECX);
  /* 11c32de3 call 0x11c32cc0 */
  push32(0x11c32de8u); f_11c32cc0();
  /* 11c32de8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32dea je 0x11c32e07 */
  if (C.zf) goto L_11c32e07;
  /* 11c32dec lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 11c32def push eax */
  push32((uint32_t)(EAX));
  /* 11c32df0 call dword ptr [0x11c3d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d170))), 0x11c32df6u);
  /* 11c32df6 mov ecx, dword ptr [esi + 0x58] */
  ECX = (r32((uint32_t)(ESI + 0x58)));
  /* 11c32df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32dfc cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c32dfe jl 0x11c32e07 */
  if ((C.sf!=C.of)) goto L_11c32e07;
  /* 11c32e00 mov eax, 1 */
  EAX = (0x1u);
  /* 11c32e05 pop esi */
  ESI = (pop32());
  /* 11c32e06 ret  */
  ESPCHK(0x11c32de0u, _esp0);
  ESP += 4; return;
L_11c32e07:;
  /* 11c32e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c32e09 pop esi */
  ESI = (pop32());
  /* 11c32e0a ret  */
  ESPCHK(0x11c32de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e10 @ 0x11c32e10 (164 bytes, 64 insns) */
void f_11c32e10(void) {
  FTRACE(0x11c32e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32e10 push esi */
  push32((uint32_t)(ESI));
  /* 11c32e11 mov esi, ecx */
  ESI = (ECX);
  /* 11c32e13 call 0x11c32de0 */
  push32(0x11c32e18u); f_11c32de0();
  /* 11c32e18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32e1a je 0x11c32eb0 */
  if (C.zf) goto L_11c32eb0;
  /* 11c32e20 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c32e22 push ebx */
  push32((uint32_t)(EBX));
  /* 11c32e23 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32e24 push edi */
  push32((uint32_t)(EDI));
  /* 11c32e25 push eax */
  push32((uint32_t)(EAX));
  /* 11c32e26 call 0x11c31910 */
  push32(0x11c32e2bu); f_11c31910();
  /* 11c32e2b mov ebx, dword ptr [0x11c3d1bc] */
  EBX = (r32((uint32_t)(0x11c3d1bc)));
  /* 11c32e31 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c32e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32e36 push edi */
  push32((uint32_t)(EDI));
  /* 11c32e37 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32e39u);
  /* 11c32e39 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c32e3b push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32e3d push ecx */
  push32((uint32_t)(ECX));
  /* 11c32e3e call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32e44u);
  /* 11c32e44 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32e46 call 0x11c31910 */
  push32(0x11c32e4bu); f_11c31910();
  /* 11c32e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32e4d lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11c32e50 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32e52 push edx */
  push32((uint32_t)(EDX));
  /* 11c32e53 call dword ptr [0x11c3d138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d138))), 0x11c32e59u);
  /* 11c32e59 lea ebp, [esi + 0x6c] */
  EBP = ((uint32_t)(ESI + 0x6c));
  /* 11c32e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32e5e push ebp */
  push32((uint32_t)(EBP));
  /* 11c32e5f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32e61 call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c32e67u);
  /* 11c32e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32e69 push edi */
  push32((uint32_t)(EDI));
  /* 11c32e6a call ebx */
  call_ind((uint32_t)(EBX), 0x11c32e6cu);
  /* 11c32e6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c32e6e push eax */
  push32((uint32_t)(EAX));
  /* 11c32e6f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32e71 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32e77u);
  /* 11c32e77 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32e7a push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32e7c call 0x11c31950 */
  push32(0x11c32e81u); f_11c31950();
  /* 11c32e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32e83 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32e84 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32e86u);
  /* 11c32e86 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c32e8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32e8d push ecx */
  push32((uint32_t)(ECX));
  /* 11c32e8e call 0x11c33564 */
  push32(0x11c32e93u); f_11c33564();
  /* 11c32e93 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c32e97 push eax */
  push32((uint32_t)(EAX));
  /* 11c32e98 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c32e9a push edx */
  push32((uint32_t)(EDX));
  /* 11c32e9b push eax */
  push32((uint32_t)(EAX));
  /* 11c32e9c call dword ptr [0x11c3d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1c0))), 0x11c32ea2u);
  /* 11c32ea2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c32ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c32ea5 call 0x11c31950 */
  push32(0x11c32eaau); f_11c31950();
  /* 11c32eaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32ead pop edi */
  EDI = (pop32());
  /* 11c32eae pop ebp */
  EBP = (pop32());
  /* 11c32eaf pop ebx */
  EBX = (pop32());
L_11c32eb0:;
  /* 11c32eb0 pop esi */
  ESI = (pop32());
  /* 11c32eb1 ret 8 */
  ESPCHK(0x11c32e10u, _esp0);
  ESP += 12; return;
}

/* FUN_10002ec0 @ 0x11c32ec0 (164 bytes, 64 insns) */
void f_11c32ec0(void) {
  FTRACE(0x11c32ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32ec0 push esi */
  push32((uint32_t)(ESI));
  /* 11c32ec1 mov esi, ecx */
  ESI = (ECX);
  /* 11c32ec3 call 0x11c32de0 */
  push32(0x11c32ec8u); f_11c32de0();
  /* 11c32ec8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32eca je 0x11c32f60 */
  if (C.zf) goto L_11c32f60;
  /* 11c32ed0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c32ed2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c32ed3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32ed4 push edi */
  push32((uint32_t)(EDI));
  /* 11c32ed5 push eax */
  push32((uint32_t)(EAX));
  /* 11c32ed6 call 0x11c31910 */
  push32(0x11c32edbu); f_11c31910();
  /* 11c32edb mov ebx, dword ptr [0x11c3d1bc] */
  EBX = (r32((uint32_t)(0x11c3d1bc)));
  /* 11c32ee1 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c32ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32ee6 push edi */
  push32((uint32_t)(EDI));
  /* 11c32ee7 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32ee9u);
  /* 11c32ee9 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c32eeb push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32eed push ecx */
  push32((uint32_t)(ECX));
  /* 11c32eee call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32ef4u);
  /* 11c32ef4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32ef6 call 0x11c31910 */
  push32(0x11c32efbu); f_11c31910();
  /* 11c32efb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32efd lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11c32f00 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32f02 push edx */
  push32((uint32_t)(EDX));
  /* 11c32f03 call dword ptr [0x11c3d138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d138))), 0x11c32f09u);
  /* 11c32f09 lea ebp, [esi + 0x6c] */
  EBP = ((uint32_t)(ESI + 0x6c));
  /* 11c32f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32f0e push ebp */
  push32((uint32_t)(EBP));
  /* 11c32f0f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32f11 call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c32f17u);
  /* 11c32f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32f19 push edi */
  push32((uint32_t)(EDI));
  /* 11c32f1a call ebx */
  call_ind((uint32_t)(EBX), 0x11c32f1cu);
  /* 11c32f1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c32f1e push eax */
  push32((uint32_t)(EAX));
  /* 11c32f1f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32f21 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32f27u);
  /* 11c32f27 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32f2a push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32f2c call 0x11c31950 */
  push32(0x11c32f31u); f_11c31950();
  /* 11c32f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32f33 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32f34 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32f36u);
  /* 11c32f36 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c32f3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32f3d push ecx */
  push32((uint32_t)(ECX));
  /* 11c32f3e call 0x11c33564 */
  push32(0x11c32f43u); f_11c33564();
  /* 11c32f43 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c32f47 push eax */
  push32((uint32_t)(EAX));
  /* 11c32f48 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c32f4a push edx */
  push32((uint32_t)(EDX));
  /* 11c32f4b push eax */
  push32((uint32_t)(EAX));
  /* 11c32f4c call dword ptr [0x11c3d1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b4))), 0x11c32f52u);
  /* 11c32f52 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c32f54 push ecx */
  push32((uint32_t)(ECX));
  /* 11c32f55 call 0x11c31950 */
  push32(0x11c32f5au); f_11c31950();
  /* 11c32f5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32f5d pop edi */
  EDI = (pop32());
  /* 11c32f5e pop ebp */
  EBP = (pop32());
  /* 11c32f5f pop ebx */
  EBX = (pop32());
L_11c32f60:;
  /* 11c32f60 pop esi */
  ESI = (pop32());
  /* 11c32f61 ret 8 */
  ESPCHK(0x11c32ec0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002f70 @ 0x11c32f70 (164 bytes, 64 insns) */
void f_11c32f70(void) {
  FTRACE(0x11c32f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c32f70 push esi */
  push32((uint32_t)(ESI));
  /* 11c32f71 mov esi, ecx */
  ESI = (ECX);
  /* 11c32f73 call 0x11c32de0 */
  push32(0x11c32f78u); f_11c32de0();
  /* 11c32f78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c32f7a je 0x11c33010 */
  if (C.zf) goto L_11c33010;
  /* 11c32f80 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c32f82 push ebx */
  push32((uint32_t)(EBX));
  /* 11c32f83 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32f84 push edi */
  push32((uint32_t)(EDI));
  /* 11c32f85 push eax */
  push32((uint32_t)(EAX));
  /* 11c32f86 call 0x11c31910 */
  push32(0x11c32f8bu); f_11c31910();
  /* 11c32f8b mov ebx, dword ptr [0x11c3d1bc] */
  EBX = (r32((uint32_t)(0x11c3d1bc)));
  /* 11c32f91 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c32f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32f96 push edi */
  push32((uint32_t)(EDI));
  /* 11c32f97 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32f99u);
  /* 11c32f99 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c32f9b push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32f9d push ecx */
  push32((uint32_t)(ECX));
  /* 11c32f9e call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32fa4u);
  /* 11c32fa4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32fa6 call 0x11c31910 */
  push32(0x11c32fabu); f_11c31910();
  /* 11c32fab push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32fad lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 11c32fb0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32fb2 push edx */
  push32((uint32_t)(EDX));
  /* 11c32fb3 call dword ptr [0x11c3d138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d138))), 0x11c32fb9u);
  /* 11c32fb9 lea ebp, [esi + 0x6c] */
  EBP = ((uint32_t)(ESI + 0x6c));
  /* 11c32fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32fbe push ebp */
  push32((uint32_t)(EBP));
  /* 11c32fbf push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32fc1 call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c32fc7u);
  /* 11c32fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32fc9 push edi */
  push32((uint32_t)(EDI));
  /* 11c32fca call ebx */
  call_ind((uint32_t)(EBX), 0x11c32fccu);
  /* 11c32fcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c32fce push eax */
  push32((uint32_t)(EAX));
  /* 11c32fcf push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32fd1 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c32fd7u);
  /* 11c32fd7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32fda push 7 */
  push32((uint32_t)(0x7u));
  /* 11c32fdc call 0x11c31950 */
  push32(0x11c32fe1u); f_11c31950();
  /* 11c32fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c32fe3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c32fe4 call ebx */
  call_ind((uint32_t)(EBX), 0x11c32fe6u);
  /* 11c32fe6 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c32fea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c32fed push ecx */
  push32((uint32_t)(ECX));
  /* 11c32fee call 0x11c33564 */
  push32(0x11c32ff3u); f_11c33564();
  /* 11c32ff3 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c32ff7 push eax */
  push32((uint32_t)(EAX));
  /* 11c32ff8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c32ffa push edx */
  push32((uint32_t)(EDX));
  /* 11c32ffb push eax */
  push32((uint32_t)(EAX));
  /* 11c32ffc call dword ptr [0x11c3d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1c0))), 0x11c33002u);
  /* 11c33002 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c33004 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33005 call 0x11c31950 */
  push32(0x11c3300au); f_11c31950();
  /* 11c3300a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3300d pop edi */
  EDI = (pop32());
  /* 11c3300e pop ebp */
  EBP = (pop32());
  /* 11c3300f pop ebx */
  EBX = (pop32());
L_11c33010:;
  /* 11c33010 pop esi */
  ESI = (pop32());
  /* 11c33011 ret 8 */
  ESPCHK(0x11c32f70u, _esp0);
  ESP += 12; return;
}

/* FUN_10003020 @ 0x11c33020 (164 bytes, 64 insns) */
void f_11c33020(void) {
  FTRACE(0x11c33020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33020 push esi */
  push32((uint32_t)(ESI));
  /* 11c33021 mov esi, ecx */
  ESI = (ECX);
  /* 11c33023 call 0x11c32de0 */
  push32(0x11c33028u); f_11c32de0();
  /* 11c33028 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3302a je 0x11c330c0 */
  if (C.zf) goto L_11c330c0;
  /* 11c33030 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c33032 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33033 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33034 push edi */
  push32((uint32_t)(EDI));
  /* 11c33035 push eax */
  push32((uint32_t)(EAX));
  /* 11c33036 call 0x11c31910 */
  push32(0x11c3303bu); f_11c31910();
  /* 11c3303b mov ebx, dword ptr [0x11c3d1bc] */
  EBX = (r32((uint32_t)(0x11c3d1bc)));
  /* 11c33041 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c33044 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33046 push edi */
  push32((uint32_t)(EDI));
  /* 11c33047 call ebx */
  call_ind((uint32_t)(EBX), 0x11c33049u);
  /* 11c33049 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c3304b push 7 */
  push32((uint32_t)(0x7u));
  /* 11c3304d push ecx */
  push32((uint32_t)(ECX));
  /* 11c3304e call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c33054u);
  /* 11c33054 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c33056 call 0x11c31910 */
  push32(0x11c3305bu); f_11c31910();
  /* 11c3305b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3305d lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 11c33060 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c33062 push edx */
  push32((uint32_t)(EDX));
  /* 11c33063 call dword ptr [0x11c3d138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d138))), 0x11c33069u);
  /* 11c33069 lea ebp, [esi + 0x6c] */
  EBP = ((uint32_t)(ESI + 0x6c));
  /* 11c3306c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3306e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3306f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c33071 call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c33077u);
  /* 11c33077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33079 push edi */
  push32((uint32_t)(EDI));
  /* 11c3307a call ebx */
  call_ind((uint32_t)(EBX), 0x11c3307cu);
  /* 11c3307c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3307e push eax */
  push32((uint32_t)(EAX));
  /* 11c3307f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c33081 call dword ptr [0x11c3d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d13c))), 0x11c33087u);
  /* 11c33087 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3308a push 7 */
  push32((uint32_t)(0x7u));
  /* 11c3308c call 0x11c31950 */
  push32(0x11c33091u); f_11c31950();
  /* 11c33091 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33093 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33094 call ebx */
  call_ind((uint32_t)(EBX), 0x11c33096u);
  /* 11c33096 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c3309a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3309d push ecx */
  push32((uint32_t)(ECX));
  /* 11c3309e call 0x11c33564 */
  push32(0x11c330a3u); f_11c33564();
  /* 11c330a3 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c330a7 push eax */
  push32((uint32_t)(EAX));
  /* 11c330a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c330aa push edx */
  push32((uint32_t)(EDX));
  /* 11c330ab push eax */
  push32((uint32_t)(EAX));
  /* 11c330ac call dword ptr [0x11c3d1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b4))), 0x11c330b2u);
  /* 11c330b2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c330b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c330b5 call 0x11c31950 */
  push32(0x11c330bau); f_11c31950();
  /* 11c330ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c330bd pop edi */
  EDI = (pop32());
  /* 11c330be pop ebp */
  EBP = (pop32());
  /* 11c330bf pop ebx */
  EBX = (pop32());
L_11c330c0:;
  /* 11c330c0 pop esi */
  ESI = (pop32());
  /* 11c330c1 ret 8 */
  ESPCHK(0x11c33020u, _esp0);
  ESP += 12; return;
}

/* FUN_100030d0 @ 0x11c330d0 (42 bytes, 18 insns) */
void f_11c330d0(void) {
  FTRACE(0x11c330d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c330d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c330d1 mov esi, ecx */
  ESI = (ECX);
  /* 11c330d3 push edi */
  push32((uint32_t)(EDI));
  /* 11c330d4 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c330d7 push edi */
  push32((uint32_t)(EDI));
  /* 11c330d8 call dword ptr [0x11c3d1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1c4))), 0x11c330deu);
  /* 11c330de lea eax, [esi + 0x6c] */
  EAX = ((uint32_t)(ESI + 0x6c));
  /* 11c330e1 push eax */
  push32((uint32_t)(EAX));
  /* 11c330e2 push edi */
  push32((uint32_t)(EDI));
  /* 11c330e3 call dword ptr [0x11c3d10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d10c))), 0x11c330e9u);
  /* 11c330e9 mov ecx, dword ptr [esi + 0x5c] */
  ECX = (r32((uint32_t)(ESI + 0x5c)));
  /* 11c330ec mov eax, dword ptr [esi + 0x58] */
  EAX = (r32((uint32_t)(ESI + 0x58)));
  /* 11c330ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c330f2 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c330f4 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
  /* 11c330f7 pop edi */
  EDI = (pop32());
  /* 11c330f8 pop esi */
  ESI = (pop32());
  /* 11c330f9 ret  */
  ESPCHK(0x11c330d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x11c33100 (94 bytes, 35 insns) */
void f_11c33100(void) {
  FTRACE(0x11c33100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33100 push esi */
  push32((uint32_t)(ESI));
  /* 11c33101 mov esi, ecx */
  ESI = (ECX);
  /* 11c33103 call 0x11c32cc0 */
  push32(0x11c33108u); f_11c32cc0();
  /* 11c33108 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3310a je 0x11c3315c */
  if (C.zf) goto L_11c3315c;
  /* 11c3310c mov ecx, esi */
  ECX = (ESI);
  /* 11c3310e call 0x11c32ce0 */
  push32(0x11c33113u); f_11c32ce0();
  /* 11c33113 mov ecx, esi */
  ECX = (ESI);
  /* 11c33115 call 0x11c32de0 */
  push32(0x11c3311au); f_11c32de0();
  /* 11c3311a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3311c je 0x11c3315c */
  if (C.zf) goto L_11c3315c;
  /* 11c3311e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c33120 push eax */
  push32((uint32_t)(EAX));
  /* 11c33121 call 0x11c31910 */
  push32(0x11c33126u); f_11c31910();
  /* 11c33126 lea ecx, [esi + 0x1c] */
  ECX = ((uint32_t)(ESI + 0x1c));
  /* 11c33129 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3312b push ecx */
  push32((uint32_t)(ECX));
  /* 11c3312c call dword ptr [0x11c3d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1bc))), 0x11c33132u);
  /* 11c33132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33135 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33137 call 0x11c33564 */
  push32(0x11c3313cu); f_11c33564();
  /* 11c3313c push eax */
  push32((uint32_t)(EAX));
  /* 11c3313d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3313f lea edx, [esi + 0x64] */
  EDX = ((uint32_t)(ESI + 0x64));
  /* 11c33142 push edx */
  push32((uint32_t)(EDX));
  /* 11c33143 push eax */
  push32((uint32_t)(EAX));
  /* 11c33144 call dword ptr [0x11c3d1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d1b4))), 0x11c3314au);
  /* 11c3314a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c3314c push ecx */
  push32((uint32_t)(ECX));
  /* 11c3314d call 0x11c31950 */
  push32(0x11c33152u); f_11c31950();
  /* 11c33152 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33155 mov ecx, esi */
  ECX = (ESI);
  /* 11c33157 call 0x11c330d0 */
  push32(0x11c3315cu); f_11c330d0();
L_11c3315c:;
  /* 11c3315c pop esi */
  ESI = (pop32());
  /* 11c3315d ret  */
  ESPCHK(0x11c33100u, _esp0);
  ESP += 4; return;
}

/* FUN_10003160 @ 0x11c33160 (24 bytes, 9 insns) */
void f_11c33160(void) {
  FTRACE(0x11c33160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33160 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c33164 push esi */
  push32((uint32_t)(ESI));
  /* 11c33165 mov esi, ecx */
  ESI = (ECX);
  /* 11c33167 push eax */
  push32((uint32_t)(EAX));
  /* 11c33168 call 0x11c32ca0 */
  push32(0x11c3316du); f_11c32ca0();
  /* 11c3316d mov ecx, esi */
  ECX = (ESI);
  /* 11c3316f call 0x11c33100 */
  push32(0x11c33174u); f_11c33100();
  /* 11c33174 pop esi */
  ESI = (pop32());
  /* 11c33175 ret 4 */
  ESPCHK(0x11c33160u, _esp0);
  ESP += 8; return;
}

/* FUN_10003180 @ 0x11c33180 (75 bytes, 25 insns) */
void f_11c33180(void) {
  FTRACE(0x11c33180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33180 push esi */
  push32((uint32_t)(ESI));
  /* 11c33181 mov esi, ecx */
  ESI = (ECX);
  /* 11c33183 call 0x11c32de0 */
  push32(0x11c33188u); f_11c32de0();
  /* 11c33188 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3318a je 0x11c331c0 */
  if (C.zf) goto L_11c331c0;
  /* 11c3318c call 0x11c33564 */
  push32(0x11c33191u); f_11c33564();
  /* 11c33191 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c33196 cmp eax, 0xa0 */
  { uint32_t _a=(EAX),_b=(0xa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3319b jge 0x11c331b4 */
  if ((C.sf==C.of)) goto L_11c331b4;
  /* 11c3319d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c331a1 mov ecx, esi */
  ECX = (ESI);
  /* 11c331a3 push eax */
  push32((uint32_t)(EAX));
  /* 11c331a4 call 0x11c32ca0 */
  push32(0x11c331a9u); f_11c32ca0();
  /* 11c331a9 mov ecx, esi */
  ECX = (ESI);
  /* 11c331ab call 0x11c33100 */
  push32(0x11c331b0u); f_11c33100();
  /* 11c331b0 pop esi */
  ESI = (pop32());
  /* 11c331b1 ret 8 */
  ESPCHK(0x11c33180u, _esp0);
  ESP += 12; return;
L_11c331b4:;
  /* 11c331b4 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c331b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c331b9 mov ecx, esi */
  ECX = (ESI);
  /* 11c331bb call 0x11c32ca0 */
  push32(0x11c331c0u); f_11c32ca0();
L_11c331c0:;
  /* 11c331c0 mov ecx, esi */
  ECX = (ESI);
  /* 11c331c2 call 0x11c33100 */
  push32(0x11c331c7u); f_11c33100();
  /* 11c331c7 pop esi */
  ESI = (pop32());
  /* 11c331c8 ret 8 */
  ESPCHK(0x11c33180u, _esp0);
  ESP += 12; return;
}

/* FUN_100031d0 @ 0x11c331d0 (69 bytes, 25 insns) */
void f_11c331d0(void) {
  FTRACE(0x11c331d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c331d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c331d1 mov esi, ecx */
  ESI = (ECX);
  /* 11c331d3 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11c331d5 push esi */
  push32((uint32_t)(ESI));
  /* 11c331d6 call dword ptr [0x11c3d190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d190))), 0x11c331dcu);
  /* 11c331dc mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c331e0 push eax */
  push32((uint32_t)(EAX));
  /* 11c331e1 push esi */
  push32((uint32_t)(ESI));
  /* 11c331e2 call dword ptr [0x11c3d188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d188))), 0x11c331e8u);
  /* 11c331e8 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11c331eb push ecx */
  push32((uint32_t)(ECX));
  /* 11c331ec call dword ptr [0x11c3d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d194))), 0x11c331f2u);
  /* 11c331f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c331f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c331f6 mov dword ptr [esi + 0x22], eax */
  w32((uint32_t)(ESI + 0x22), (EAX));
  /* 11c331f9 mov dword ptr [esi + 0x10], edx */
  w32((uint32_t)(ESI + 0x10), (EDX));
  /* 11c331fc mov dword ptr [esi + 0x14], edx */
  w32((uint32_t)(ESI + 0x14), (EDX));
  /* 11c331ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33202 mov word ptr [esi + 0x18], dx */
  w16((uint32_t)(ESI + 0x18), (DX));
  /* 11c33206 mov dword ptr [esi + 0x2a], eax */
  w32((uint32_t)(ESI + 0x2a), (EAX));
  /* 11c33209 mov dword ptr [esi + 0x2e], eax */
  w32((uint32_t)(ESI + 0x2e), (EAX));
  /* 11c3320c mov dword ptr [esi + 0x32], eax */
  w32((uint32_t)(ESI + 0x32), (EAX));
  /* 11c3320f mov eax, esi */
  EAX = (ESI);
  /* 11c33211 pop esi */
  ESI = (pop32());
  /* 11c33212 ret 4 */
  ESPCHK(0x11c331d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003220 @ 0x11c33220 (13 bytes, 3 insns) */
void f_11c33220(void) {
  FTRACE(0x11c33220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33220 mov eax, ecx */
  EAX = (ECX);
  /* 11c33222 mov dword ptr [eax + 0x320], 0 */
  w32((uint32_t)(EAX + 0x320), (0x0u));
  /* 11c3322c ret  */
  ESPCHK(0x11c33220u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c0 @ 0x11c332c0 (40 bytes, 16 insns) */
void f_11c332c0(void) {
  FTRACE(0x11c332c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c332c0 push esi */
  push32((uint32_t)(ESI));
  /* 11c332c1 mov esi, ecx */
  ESI = (ECX);
  /* 11c332c3 push edi */
  push32((uint32_t)(EDI));
  /* 11c332c4 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c332c7 mov dword ptr [esi], 0 */
  w32((uint32_t)(ESI), (0x0u));
  /* 11c332cd push eax */
  push32((uint32_t)(EAX));
  /* 11c332ce call dword ptr [0x11c3d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d194))), 0x11c332d4u);
  /* 11c332d4 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c332d7 mov ecx, 6 */
  ECX = (0x6u);
  /* 11c332dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c332de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c332e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c332e3 mov eax, esi */
  EAX = (ESI);
  /* 11c332e5 pop edi */
  EDI = (pop32());
  /* 11c332e6 pop esi */
  ESI = (pop32());
  /* 11c332e7 ret  */
  ESPCHK(0x11c332c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x11c332f0 (23 bytes, 9 insns) */
void f_11c332f0(void) {
  FTRACE(0x11c332f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c332f0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c332f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c332f4 call dword ptr [0x11c3d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d170))), 0x11c332fau);
  /* 11c332fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c332fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c332ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33301 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11c33304 mov al, cl */
  AL = (CL);
  /* 11c33306 ret  */
  ESPCHK(0x11c332f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x11c33310 (127 bytes, 48 insns) */
void f_11c33310(void) {
  FTRACE(0x11c33310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33310 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33313 push esi */
  push32((uint32_t)(ESI));
  /* 11c33314 push edi */
  push32((uint32_t)(EDI));
  /* 11c33315 mov edi, ecx */
  EDI = (ECX);
  /* 11c33317 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c33319 lea esi, [eax*8 + 0x11c42cf8] */
  ESI = ((uint32_t)(EAX*8 + 0x11c42cf8));
  /* 11c33320 mov eax, dword ptr [eax*8 + 0x11c42cfc] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11c42cfc)));
  /* 11c33327 cmp eax, 0x554e4954 */
  { uint32_t _a=(EAX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3332c je 0x11c33338 */
  if (C.zf) goto L_11c33338;
  /* 11c3332e push esi */
  push32((uint32_t)(ESI));
  /* 11c3332f call dword ptr [0x11c3d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d194))), 0x11c33335u);
  /* 11c33335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c33338:;
  /* 11c33338 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11c3333a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3333c push esi */
  push32((uint32_t)(ESI));
  /* 11c3333d push ecx */
  push32((uint32_t)(ECX));
  /* 11c3333e call dword ptr [0x11c3d17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d17c))), 0x11c33344u);
  /* 11c33344 push esi */
  push32((uint32_t)(ESI));
  /* 11c33345 call dword ptr [0x11c3d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d170))), 0x11c3334bu);
  /* 11c3334b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3334e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33351 jne 0x11c33387 */
  if (!C.zf) goto L_11c33387;
  /* 11c33353 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 11c33357 add edi, 0xc */
  { uint32_t _a=(EDI),_b=(0xcu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3335a push edx */
  push32((uint32_t)(EDX));
  /* 11c3335b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3335d push edi */
  push32((uint32_t)(EDI));
  /* 11c3335e mov edi, dword ptr [0x11c3d1cc] */
  EDI = (r32((uint32_t)(0x11c3d1cc)));
  /* 11c33364 call edi */
  call_ind((uint32_t)(EDI), 0x11c33366u);
  /* 11c33366 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 11c3336a push eax */
  push32((uint32_t)(EAX));
  /* 11c3336b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3336d push esi */
  push32((uint32_t)(ESI));
  /* 11c3336e call edi */
  call_ind((uint32_t)(EDI), 0x11c33370u);
  /* 11c33370 mov cx, word ptr [esp + 0x20] */
  CX = (r16((uint32_t)(ESP + 0x20)));
  /* 11c33375 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33378 cmp cx, word ptr [esp + 0x34] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(ESP + 0x34))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3337d jne 0x11c33387 */
  if (!C.zf) goto L_11c33387;
  /* 11c3337f pop edi */
  EDI = (pop32());
  /* 11c33380 mov al, 1 */
  AL = (0x1u);
  /* 11c33382 pop esi */
  ESI = (pop32());
  /* 11c33383 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33386 ret  */
  ESPCHK(0x11c33310u, _esp0);
  ESP += 4; return;
L_11c33387:;
  /* 11c33387 pop edi */
  EDI = (pop32());
  /* 11c33388 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3338a pop esi */
  ESI = (pop32());
  /* 11c3338b add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3338e ret  */
  ESPCHK(0x11c33310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003390 @ 0x11c33390 (16 bytes, 7 insns) */
void f_11c33390(void) {
  FTRACE(0x11c33390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33390 push esi */
  push32((uint32_t)(ESI));
  /* 11c33391 mov esi, ecx */
  ESI = (ECX);
  /* 11c33393 call 0x11c332c0 */
  push32(0x11c33398u); f_11c332c0();
  /* 11c33398 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11c3339c mov eax, esi */
  EAX = (ESI);
  /* 11c3339e pop esi */
  ESI = (pop32());
  /* 11c3339f ret  */
  ESPCHK(0x11c33390u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x11c333a0 (51 bytes, 18 insns) */
void f_11c333a0(void) {
  FTRACE(0x11c333a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c333a0 push esi */
  push32((uint32_t)(ESI));
  /* 11c333a1 mov esi, ecx */
  ESI = (ECX);
  /* 11c333a3 call 0x11c332c0 */
  push32(0x11c333a8u); f_11c332c0();
  /* 11c333a8 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11c333aa push esi */
  push32((uint32_t)(ESI));
  /* 11c333ab call dword ptr [0x11c3d190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d190))), 0x11c333b1u);
  /* 11c333b1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c333b5 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11c333b8 push eax */
  push32((uint32_t)(EAX));
  /* 11c333b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c333ba call dword ptr [0x11c3d198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d198))), 0x11c333c0u);
  /* 11c333c0 mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c333c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c333c7 mov dword ptr [esi], edx */
  w32((uint32_t)(ESI), (EDX));
  /* 11c333c9 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11c333cd mov eax, esi */
  EAX = (ESI);
  /* 11c333cf pop esi */
  ESI = (pop32());
  /* 11c333d0 ret 8 */
  ESPCHK(0x11c333a0u, _esp0);
  ESP += 12; return;
}

/* FUN_100033e0 @ 0x11c333e0 (58 bytes, 23 insns) */
void f_11c333e0(void) {
  FTRACE(0x11c333e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c333e0 push esi */
  push32((uint32_t)(ESI));
  /* 11c333e1 mov esi, ecx */
  ESI = (ECX);
  /* 11c333e3 call 0x11c332f0 */
  push32(0x11c333e8u); f_11c332f0();
  /* 11c333e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c333ea je 0x11c33414 */
  if (C.zf) goto L_11c33414;
  /* 11c333ec mov ecx, esi */
  ECX = (ESI);
  /* 11c333ee call 0x11c33310 */
  push32(0x11c333f3u); f_11c33310();
  /* 11c333f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c333f5 je 0x11c33410 */
  if (C.zf) goto L_11c33410;
  /* 11c333f7 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c333fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c333fd je 0x11c33410 */
  if (C.zf) goto L_11c33410;
  /* 11c333ff mov al, byte ptr [esi + 0x34] */
  AL = (r8((uint32_t)(ESI + 0x34)));
  /* 11c33402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c33404 je 0x11c33414 */
  if (C.zf) goto L_11c33414;
  /* 11c33406 mov byte ptr [esi + 0x34], 0 */
  w8((uint32_t)(ESI + 0x34), (0x0u));
  /* 11c3340a mov al, 1 */
  AL = (0x1u);
  /* 11c3340c pop esi */
  ESI = (pop32());
  /* 11c3340d ret 4 */
  ESPCHK(0x11c333e0u, _esp0);
  ESP += 8; return;
L_11c33410:;
  /* 11c33410 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
L_11c33414:;
  /* 11c33414 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c33416 pop esi */
  ESI = (pop32());
  /* 11c33417 ret 4 */
  ESPCHK(0x11c333e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003420 @ 0x11c33420 (126 bytes, 34 insns) */
void f_11c33420(void) {
  FTRACE(0x11c33420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33420 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33421 push esi */
  push32((uint32_t)(ESI));
  /* 11c33422 push edi */
  push32((uint32_t)(EDI));
  /* 11c33423 mov esi, ecx */
  ESI = (ECX);
  /* 11c33425 call 0x11c33390 */
  push32(0x11c3342au); f_11c33390();
  /* 11c3342a lea edi, [esi + 0x3d] */
  EDI = ((uint32_t)(ESI + 0x3d));
  /* 11c3342d mov ecx, edi */
  ECX = (EDI);
  /* 11c3342f call 0x11c332c0 */
  push32(0x11c33434u); f_11c332c0();
  /* 11c33434 lea ecx, [edi + 0x6c] */
  ECX = ((uint32_t)(EDI + 0x6c));
  /* 11c33437 call 0x11c334c0 */
  push32(0x11c3343cu); f_11c334c0();
  /* 11c3343c lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
  /* 11c33442 mov ebx, 0x64 */
  EBX = (0x64u);
L_11c33447:;
  /* 11c33447 mov ecx, edi */
  ECX = (EDI);
  /* 11c33449 call 0x11c332c0 */
  push32(0x11c3344eu); f_11c332c0();
  /* 11c3344e add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33451 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c33452 jne 0x11c33447 */
  if (!C.zf) goto L_11c33447;
  /* 11c33454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33456 mov dword ptr [esi + 0x185a], 5 */
  w32((uint32_t)(ESI + 0x185a), (0x5u));
  /* 11c33460 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 11c33466 mov byte ptr [esi + 0x184d], al */
  w8((uint32_t)(ESI + 0x184d), (AL));
  /* 11c3346c mov dword ptr [esi + 0x184e], eax */
  w32((uint32_t)(ESI + 0x184e), (EAX));
  /* 11c33472 mov dword ptr [esi + 0x1852], eax */
  w32((uint32_t)(ESI + 0x1852), (EAX));
  /* 11c33478 mov dword ptr [esi + 0x1856], eax */
  w32((uint32_t)(ESI + 0x1856), (EAX));
  /* 11c3347e lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 11c33484 push eax */
  push32((uint32_t)(EAX));
  /* 11c33485 mov dword ptr [esi + 0x185e], 0xa */
  w32((uint32_t)(ESI + 0x185e), (0xau));
  /* 11c3348f call dword ptr [0x11c3d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d194))), 0x11c33495u);
  /* 11c33495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33498 mov eax, esi */
  EAX = (ESI);
  /* 11c3349a pop edi */
  EDI = (pop32());
  /* 11c3349b pop esi */
  ESI = (pop32());
  /* 11c3349c pop ebx */
  EBX = (pop32());
  /* 11c3349d ret  */
  ESPCHK(0x11c33420u, _esp0);
  ESP += 4; return;
}

/* FUN_100034a0 @ 0x11c334a0 (20 bytes, 8 insns) */
void f_11c334a0(void) {
  FTRACE(0x11c334a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c334a0 push esi */
  push32((uint32_t)(ESI));
  /* 11c334a1 mov esi, ecx */
  ESI = (ECX);
  /* 11c334a3 call 0x11c33390 */
  push32(0x11c334a8u); f_11c33390();
  /* 11c334a8 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 11c334ac mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11c334b0 mov eax, esi */
  EAX = (ESI);
  /* 11c334b2 pop esi */
  ESI = (pop32());
  /* 11c334b3 ret  */
  ESPCHK(0x11c334a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034c0 @ 0x11c334c0 (25 bytes, 8 insns) */
void f_11c334c0(void) {
  FTRACE(0x11c334c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c334c0 push esi */
  push32((uint32_t)(ESI));
  /* 11c334c1 mov esi, ecx */
  ESI = (ECX);
  /* 11c334c3 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11c334c6 call 0x11c33220 */
  push32(0x11c334cbu); f_11c33220();
  /* 11c334cb mov dword ptr [esi + 0x334], 0 */
  w32((uint32_t)(ESI + 0x334), (0x0u));
  /* 11c334d5 mov eax, esi */
  EAX = (ESI);
  /* 11c334d7 pop esi */
  ESI = (pop32());
  /* 11c334d8 ret  */
  ESPCHK(0x11c334c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e0 @ 0x11c334e0 (23 bytes, 6 insns) */
void f_11c334e0(void) {
  FTRACE(0x11c334e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c334e0 call 0x11c334f8 */
  push32(0x11c334e5u); f_11c334f8();
  /* 11c334e5 call 0x11c3391a */
  push32(0x11c334eau); f_11c3391a();
  /* 11c334ea mov dword ptr [0x11c566f8], eax */
  w32((uint32_t)(0x11c566f8), (EAX));
  /* 11c334ef call 0x11c338ca */
  push32(0x11c334f4u); f_11c338ca();
  /* 11c334f4 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11c334f6 ret  */
  ESPCHK(0x11c334e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f8 @ 0x11c334f8 (56 bytes, 8 insns) */
void f_11c334f8(void) {
  FTRACE(0x11c334f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c334f8 mov eax, 0x11c33cf3 */
  EAX = (0x11c33cf3u);
  /* 11c334fd mov dword ptr [0x11c3f620], 0x11c3399d */
  w32((uint32_t)(0x11c3f620), (0x11c3399du));
  /* 11c33507 mov dword ptr [0x11c3f61c], eax */
  w32((uint32_t)(0x11c3f61c), (EAX));
  /* 11c3350c mov dword ptr [0x11c3f624], 0x11c33a03 */
  w32((uint32_t)(0x11c3f624), (0x11c33a03u));
  /* 11c33516 mov dword ptr [0x11c3f628], 0x11c33943 */
  w32((uint32_t)(0x11c3f628), (0x11c33943u));
  /* 11c33520 mov dword ptr [0x11c3f62c], 0x11c339eb */
  w32((uint32_t)(0x11c3f62c), (0x11c339ebu));
  /* 11c3352a mov dword ptr [0x11c3f630], eax */
  w32((uint32_t)(0x11c3f630), (EAX));
  /* 11c3352f ret  */
  ESPCHK(0x11c334f8u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11c33530 (39 bytes, 16 insns) */
void f_11c33530(void) {
  FTRACE(0x11c33530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33530 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33531 mov ebp, esp */
  EBP = (ESP);
  /* 11c33533 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33536 wait  */
  /* wait (no observable integer/reg state) */
  /* 11c33537 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11c3353a wait  */
  /* wait (no observable integer/reg state) */
  /* 11c3353b mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11c3353f or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11c33542 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11c33546 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11c33549 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11c3354c fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11c3354f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c33552 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c33555 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33556 ret  */
  ESPCHK(0x11c33530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003557 @ 0x11c33557 (13 bytes, 4 insns) */
void f_11c33557(void) {
  FTRACE(0x11c33557u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33557 call 0x11c33dee */
  push32(0x11c3355cu); f_11c33dee();
  /* 11c3355c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c33560 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11c33563 ret  */
  ESPCHK(0x11c33557u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11c33564 (34 bytes, 9 insns) */
void f_11c33564(void) {
  FTRACE(0x11c33564u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33564 call 0x11c33dee */
  push32(0x11c33569u); f_11c33dee();
  /* 11c33569 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11c3356c imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c33572 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33578 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11c3357b mov eax, ecx */
  EAX = (ECX);
  /* 11c3357d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c33580 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c33585 ret  */
  ESPCHK(0x11c33564u, _esp0);
  ESP += 4; return;
}

/* FUN_10003586 @ 0x11c33586 (220 bytes, 75 insns) */
void f_11c33586(void) {
  FTRACE(0x11c33586u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33586 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33587 mov ebp, esp */
  EBP = (ESP);
  /* 11c33589 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3358f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33592 push eax */
  push32((uint32_t)(EAX));
  /* 11c33593 call dword ptr [0x11c3d0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0cc))), 0x11c33599u);
  /* 11c33599 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c3359c push eax */
  push32((uint32_t)(EAX));
  /* 11c3359d call dword ptr [0x11c3d0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0c8))), 0x11c335a3u);
  /* 11c335a3 mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11c335a7 cmp ax, word ptr [0x11c56712] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c56712))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c335ae jne 0x11c335eb */
  if (!C.zf) goto L_11c335eb;
  /* 11c335b0 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11c335b4 cmp ax, word ptr [0x11c56710] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c56710))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c335bb jne 0x11c335eb */
  if (!C.zf) goto L_11c335eb;
  /* 11c335bd mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11c335c1 cmp ax, word ptr [0x11c5670e] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c5670e))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c335c8 jne 0x11c335eb */
  if (!C.zf) goto L_11c335eb;
  /* 11c335ca mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11c335ce cmp ax, word ptr [0x11c5670a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c5670a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c335d5 jne 0x11c335eb */
  if (!C.zf) goto L_11c335eb;
  /* 11c335d7 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11c335db cmp ax, word ptr [0x11c56708] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c56708))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c335e2 jne 0x11c335eb */
  if (!C.zf) goto L_11c335eb;
  /* 11c335e4 mov eax, dword ptr [0x11c56700] */
  EAX = (r32((uint32_t)(0x11c56700)));
  /* 11c335e9 jmp 0x11c33630 */
  goto L_11c33630;
L_11c335eb:;
  /* 11c335eb lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11c335f1 push eax */
  push32((uint32_t)(EAX));
  /* 11c335f2 call dword ptr [0x11c3d0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0c4))), 0x11c335f8u);
  /* 11c335f8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c335fb je 0x11c33618 */
  if (C.zf) goto L_11c33618;
  /* 11c335fd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33600 jne 0x11c33614 */
  if (!C.zf) goto L_11c33614;
  /* 11c33602 cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c33607 je 0x11c33614 */
  if (C.zf) goto L_11c33614;
  /* 11c33609 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3360d je 0x11c33614 */
  if (C.zf) goto L_11c33614;
  /* 11c3360f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33611 pop eax */
  EAX = (pop32());
  /* 11c33612 jmp 0x11c3361b */
  goto L_11c3361b;
L_11c33614:;
  /* 11c33614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33616 jmp 0x11c3361b */
  goto L_11c3361b;
L_11c33618:;
  /* 11c33618 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c3361b:;
  /* 11c3361b push esi */
  push32((uint32_t)(ESI));
  /* 11c3361c push edi */
  push32((uint32_t)(EDI));
  /* 11c3361d lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11c33620 mov edi, 0x11c56708 */
  EDI = (0x11c56708u);
  /* 11c33625 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c33626 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c33627 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c33628 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c33629 pop edi */
  EDI = (pop32());
  /* 11c3362a mov dword ptr [0x11c56700], eax */
  w32((uint32_t)(0x11c56700), (EAX));
  /* 11c3362f pop esi */
  ESI = (pop32());
L_11c33630:;
  /* 11c33630 push eax */
  push32((uint32_t)(EAX));
  /* 11c33631 movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11c33635 push eax */
  push32((uint32_t)(EAX));
  /* 11c33636 movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11c3363a push eax */
  push32((uint32_t)(EAX));
  /* 11c3363b movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11c3363f push eax */
  push32((uint32_t)(EAX));
  /* 11c33640 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11c33644 push eax */
  push32((uint32_t)(EAX));
  /* 11c33645 movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11c33649 push eax */
  push32((uint32_t)(EAX));
  /* 11c3364a movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11c3364e push eax */
  push32((uint32_t)(EAX));
  /* 11c3364f call 0x11c33ef5 */
  push32(0x11c33654u); f_11c33ef5();
  /* 11c33654 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33657 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3365a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3365c je 0x11c33660 */
  if (C.zf) goto L_11c33660;
  /* 11c3365e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c33660:;
  /* 11c33660 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33661 ret  */
  ESPCHK(0x11c33586u, _esp0);
  ESP += 4; return;
}

/* FUN_10003662 @ 0x11c33662 (126 bytes, 37 insns) */
void f_11c33662(void) {
  FTRACE(0x11c33662u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33662 push esi */
  push32((uint32_t)(ESI));
  /* 11c33663 call 0x11c340a9 */
  push32(0x11c33668u); f_11c340a9();
  /* 11c33668 push dword ptr [0x11c57e70] */
  push32((uint32_t)(r32((uint32_t)(0x11c57e70))));
  /* 11c3366e call 0x11c34404 */
  push32(0x11c33673u); f_11c34404();
  /* 11c33673 mov edx, dword ptr [0x11c57e70] */
  EDX = (r32((uint32_t)(0x11c57e70)));
  /* 11c33679 pop ecx */
  ECX = (pop32());
  /* 11c3367a mov ecx, dword ptr [0x11c57e6c] */
  ECX = (r32((uint32_t)(0x11c57e6c)));
  /* 11c33680 mov esi, ecx */
  ESI = (ECX);
  /* 11c33682 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33684 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33687 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33689 jae 0x11c336c8 */
  if (!C.cf) goto L_11c336c8;
  /* 11c3368b push edx */
  push32((uint32_t)(EDX));
  /* 11c3368c call 0x11c34404 */
  push32(0x11c33691u); f_11c34404();
  /* 11c33691 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33694 push eax */
  push32((uint32_t)(EAX));
  /* 11c33695 push dword ptr [0x11c57e70] */
  push32((uint32_t)(r32((uint32_t)(0x11c57e70))));
  /* 11c3369b call 0x11c340d5 */
  push32(0x11c336a0u); f_11c340d5();
  /* 11c336a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c336a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c336a5 jne 0x11c336ab */
  if (!C.zf) goto L_11c336ab;
  /* 11c336a7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c336a9 jmp 0x11c336d7 */
  goto L_11c336d7;
L_11c336ab:;
  /* 11c336ab mov ecx, dword ptr [0x11c57e6c] */
  ECX = (r32((uint32_t)(0x11c57e6c)));
  /* 11c336b1 sub ecx, dword ptr [0x11c57e70] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c57e70))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c336b7 mov dword ptr [0x11c57e70], eax */
  w32((uint32_t)(0x11c57e70), (EAX));
  /* 11c336bc sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c336bf lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
  /* 11c336c2 mov dword ptr [0x11c57e6c], ecx */
  w32((uint32_t)(0x11c57e6c), (ECX));
L_11c336c8:;
  /* 11c336c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c336cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c336ce add dword ptr [0x11c57e6c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x11c57e6c))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(0x11c57e6c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c336d5 mov esi, eax */
  ESI = (EAX);
L_11c336d7:;
  /* 11c336d7 call 0x11c340b2 */
  push32(0x11c336dcu); f_11c340b2();
  /* 11c336dc mov eax, esi */
  EAX = (ESI);
  /* 11c336de pop esi */
  ESI = (pop32());
  /* 11c336df ret  */
  ESPCHK(0x11c33662u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x11c336e0 (18 bytes, 8 insns) */
void f_11c336e0(void) {
  FTRACE(0x11c336e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c336e0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c336e4 call 0x11c33662 */
  push32(0x11c336e9u); f_11c33662();
  /* 11c336e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c336eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c336ed pop ecx */
  ECX = (pop32());
  /* 11c336ee neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c336f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c336f1 ret  */
  ESPCHK(0x11c336e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003721 @ 0x11c33721 (217 bytes, 57 insns) */
void f_11c33721(void) {
  FTRACE(0x11c33721u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33721 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c33725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33728 jne 0x11c337b6 */
  if (!C.zf) goto L_11c337b6;
  /* 11c3372e call dword ptr [0x11c3d0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0d4))), 0x11c33734u);
  /* 11c33734 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33736 mov dword ptr [0x11c56730], eax */
  w32((uint32_t)(0x11c56730), (EAX));
  /* 11c3373b call 0x11c34de9 */
  push32(0x11c33740u); f_11c34de9();
  /* 11c33740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33742 pop ecx */
  ECX = (pop32());
  /* 11c33743 je 0x11c33781 */
  if (C.zf) goto L_11c33781;
  /* 11c33745 mov eax, dword ptr [0x11c56730] */
  EAX = (r32((uint32_t)(0x11c56730)));
  /* 11c3374a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3374c mov cl, byte ptr [0x11c56731] */
  CL = (r8((uint32_t)(0x11c56731)));
  /* 11c33752 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c33757 shr dword ptr [0x11c56730], 0x10 */
  w32((uint32_t)(0x11c56730), (sh_shr((uint32_t)(r32((uint32_t)(0x11c56730))), (0x10u)&0x1f, 32)));
  /* 11c3375e mov dword ptr [0x11c56738], eax */
  w32((uint32_t)(0x11c56738), (EAX));
  /* 11c33763 mov dword ptr [0x11c5673c], ecx */
  w32((uint32_t)(0x11c5673c), (ECX));
  /* 11c33769 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c3376c add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3376e mov dword ptr [0x11c56734], eax */
  w32((uint32_t)(0x11c56734), (EAX));
  /* 11c33773 call 0x11c33d69 */
  push32(0x11c33778u); f_11c33d69();
  /* 11c33778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3377a jne 0x11c33785 */
  if (!C.zf) goto L_11c33785;
  /* 11c3377c call 0x11c34e46 */
  push32(0x11c33781u); f_11c34e46();
L_11c33781:;
  /* 11c33781 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33783 jmp 0x11c337f7 */
  goto L_11c337f7;
L_11c33785:;
  /* 11c33785 call dword ptr [0x11c3d0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0d0))), 0x11c3378bu);
  /* 11c3378b mov dword ptr [0x11c57e74], eax */
  w32((uint32_t)(0x11c57e74), (EAX));
  /* 11c33790 call 0x11c34b42 */
  push32(0x11c33795u); f_11c34b42();
  /* 11c33795 mov dword ptr [0x11c5671c], eax */
  w32((uint32_t)(0x11c5671c), (EAX));
  /* 11c3379a call 0x11c3462c */
  push32(0x11c3379fu); f_11c3462c();
  /* 11c3379f call 0x11c348f5 */
  push32(0x11c337a4u); f_11c348f5();
  /* 11c337a4 call 0x11c3483c */
  push32(0x11c337a9u); f_11c3483c();
  /* 11c337a9 call 0x11c33fb7 */
  push32(0x11c337aeu); f_11c33fb7();
  /* 11c337ae inc dword ptr [0x11c56718] */
  { uint32_t _r=(r32((uint32_t)(0x11c56718)))+1; w32((uint32_t)(0x11c56718), (_r)); fl_inc(_r,32); }
  /* 11c337b4 jmp 0x11c337f4 */
  goto L_11c337f4;
L_11c337b6:;
  /* 11c337b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c337b8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c337ba jne 0x11c337e8 */
  if (!C.zf) goto L_11c337e8;
  /* 11c337bc cmp dword ptr [0x11c56718], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c56718))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c337c2 jle 0x11c33781 */
  if ((C.zf||C.sf!=C.of)) goto L_11c33781;
  /* 11c337c4 dec dword ptr [0x11c56718] */
  { uint32_t _r=(r32((uint32_t)(0x11c56718)))-1; w32((uint32_t)(0x11c56718), (_r)); fl_dec(_r,32); }
  /* 11c337ca cmp dword ptr [0x11c56768], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c56768))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c337d0 jne 0x11c337d7 */
  if (!C.zf) goto L_11c337d7;
  /* 11c337d2 call 0x11c33ff5 */
  push32(0x11c337d7u); f_11c33ff5();
L_11c337d7:;
  /* 11c337d7 call 0x11c347e8 */
  push32(0x11c337dcu); f_11c347e8();
  /* 11c337dc call 0x11c33dbd */
  push32(0x11c337e1u); f_11c33dbd();
  /* 11c337e1 call 0x11c34e46 */
  push32(0x11c337e6u); f_11c34e46();
  /* 11c337e6 jmp 0x11c337f4 */
  goto L_11c337f4;
L_11c337e8:;
  /* 11c337e8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c337eb jne 0x11c337f4 */
  if (!C.zf) goto L_11c337f4;
  /* 11c337ed push ecx */
  push32((uint32_t)(ECX));
  /* 11c337ee call 0x11c33e55 */
  push32(0x11c337f3u); f_11c33e55();
  /* 11c337f3 pop ecx */
  ECX = (pop32());
L_11c337f4:;
  /* 11c337f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c337f6 pop eax */
  EAX = (pop32());
L_11c337f7:;
  /* 11c337f7 ret 0xc */
  ESPCHK(0x11c33721u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11c337fa (157 bytes, 73 insns) */
void f_11c337fa(void) {
  FTRACE(0x11c337fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c337fa push ebp */
  push32((uint32_t)(EBP));
  /* 11c337fb mov ebp, esp */
  EBP = (ESP);
  /* 11c337fd push ebx */
  push32((uint32_t)(EBX));
  /* 11c337fe mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33801 push esi */
  push32((uint32_t)(ESI));
  /* 11c33802 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33805 push edi */
  push32((uint32_t)(EDI));
  /* 11c33806 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c33809 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3380b jne 0x11c33816 */
  if (!C.zf) goto L_11c33816;
  /* 11c3380d cmp dword ptr [0x11c56718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c56718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33814 jmp 0x11c3383c */
  goto L_11c3383c;
L_11c33816:;
  /* 11c33816 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33819 je 0x11c33820 */
  if (C.zf) goto L_11c33820;
  /* 11c3381b cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3381e jne 0x11c33842 */
  if (!C.zf) goto L_11c33842;
L_11c33820:;
  /* 11c33820 mov eax, dword ptr [0x11c57e78] */
  EAX = (r32((uint32_t)(0x11c57e78)));
  /* 11c33825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33827 je 0x11c33832 */
  if (C.zf) goto L_11c33832;
  /* 11c33829 push edi */
  push32((uint32_t)(EDI));
  /* 11c3382a push esi */
  push32((uint32_t)(ESI));
  /* 11c3382b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3382c call eax */
  call_ind((uint32_t)(EAX), 0x11c3382eu);
  /* 11c3382e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33830 je 0x11c3383e */
  if (C.zf) goto L_11c3383e;
L_11c33832:;
  /* 11c33832 push edi */
  push32((uint32_t)(EDI));
  /* 11c33833 push esi */
  push32((uint32_t)(ESI));
  /* 11c33834 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33835 call 0x11c33721 */
  push32(0x11c3383au); f_11c33721();
  /* 11c3383a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11c3383c:;
  /* 11c3383c jne 0x11c33842 */
  if (!C.zf) goto L_11c33842;
L_11c3383e:;
  /* 11c3383e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33840 jmp 0x11c33890 */
  goto L_11c33890;
L_11c33842:;
  /* 11c33842 push edi */
  push32((uint32_t)(EDI));
  /* 11c33843 push esi */
  push32((uint32_t)(ESI));
  /* 11c33844 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33845 call 0x11c32a70 */
  push32(0x11c3384au); f_11c32a70();
  /* 11c3384a cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3384d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c33850 jne 0x11c3385e */
  if (!C.zf) goto L_11c3385e;
  /* 11c33852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33854 jne 0x11c3388d */
  if (!C.zf) goto L_11c3388d;
  /* 11c33856 push edi */
  push32((uint32_t)(EDI));
  /* 11c33857 push eax */
  push32((uint32_t)(EAX));
  /* 11c33858 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33859 call 0x11c33721 */
  push32(0x11c3385eu); f_11c33721();
L_11c3385e:;
  /* 11c3385e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33860 je 0x11c33867 */
  if (C.zf) goto L_11c33867;
  /* 11c33862 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33865 jne 0x11c3388d */
  if (!C.zf) goto L_11c3388d;
L_11c33867:;
  /* 11c33867 push edi */
  push32((uint32_t)(EDI));
  /* 11c33868 push esi */
  push32((uint32_t)(ESI));
  /* 11c33869 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3386a call 0x11c33721 */
  push32(0x11c3386fu); f_11c33721();
  /* 11c3386f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33871 jne 0x11c33876 */
  if (!C.zf) goto L_11c33876;
  /* 11c33873 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11c33876:;
  /* 11c33876 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3387a je 0x11c3388d */
  if (C.zf) goto L_11c3388d;
  /* 11c3387c mov eax, dword ptr [0x11c57e78] */
  EAX = (r32((uint32_t)(0x11c57e78)));
  /* 11c33881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33883 je 0x11c3388d */
  if (C.zf) goto L_11c3388d;
  /* 11c33885 push edi */
  push32((uint32_t)(EDI));
  /* 11c33886 push esi */
  push32((uint32_t)(ESI));
  /* 11c33887 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33888 call eax */
  call_ind((uint32_t)(EAX), 0x11c3388au);
  /* 11c3388a mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11c3388d:;
  /* 11c3388d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11c33890:;
  /* 11c33890 pop edi */
  EDI = (pop32());
  /* 11c33891 pop esi */
  ESI = (pop32());
  /* 11c33892 pop ebx */
  EBX = (pop32());
  /* 11c33893 pop ebp */
  EBP = (pop32());
  /* 11c33894 ret 0xc */
  ESPCHK(0x11c337fau, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11c33897 (48 bytes, 15 insns) */
void f_11c33897(void) {
  FTRACE(0x11c33897u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33897 mov eax, dword ptr [0x11c56724] */
  EAX = (r32((uint32_t)(0x11c56724)));
  /* 11c3389c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3389f je 0x11c338ae */
  if (C.zf) goto L_11c338ae;
  /* 11c338a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c338a3 jne 0x11c338b3 */
  if (!C.zf) goto L_11c338b3;
  /* 11c338a5 cmp dword ptr [0x11c56728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c56728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c338ac jne 0x11c338b3 */
  if (!C.zf) goto L_11c338b3;
L_11c338ae:;
  /* 11c338ae call 0x11c34eee */
  push32(0x11c338b3u); f_11c34eee();
L_11c338b3:;
  /* 11c338b3 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c338b7 call 0x11c34f27 */
  push32(0x11c338bcu); f_11c34f27();
  /* 11c338bc push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c338c1 call dword ptr [0x11c3f618] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3f618))), 0x11c338c7u);
  /* 11c338c7 pop ecx */
  ECX = (pop32());
  /* 11c338c8 pop ecx */
  ECX = (pop32());
  /* 11c338c9 ret  */
  ESPCHK(0x11c33897u, _esp0);
  ESP += 4; return;
}

/* FUN_100038ca @ 0x11c338ca (18 bytes, 6 insns) */
void f_11c338ca(void) {
  FTRACE(0x11c338cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c338ca push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11c338cf push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11c338d4 call 0x11c350af */
  push32(0x11c338d9u); f_11c350af();
  /* 11c338d9 pop ecx */
  ECX = (pop32());
  /* 11c338da pop ecx */
  ECX = (pop32());
  /* 11c338db ret  */
  ESPCHK(0x11c338cau, _esp0);
  ESP += 4; return;
}

/* FUN_100038dc @ 0x11c338dc (62 bytes, 24 insns) */
void f_11c338dc(void) {
  FTRACE(0x11c338dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c338dc push ebp */
  push32((uint32_t)(EBP));
  /* 11c338dd mov ebp, esp */
  EBP = (ESP);
  /* 11c338df sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c338e2 fld qword ptr [0x11c3d1e8] */
  fpu_push(rf64((uint32_t)(0x11c3d1e8)));
  /* 11c338e8 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11c338eb fld qword ptr [0x11c3d1e0] */
  fpu_push(rf64((uint32_t)(0x11c3d1e0)));
  /* 11c338f1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11c338f4 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11c338f7 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11c338fa fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11c338fd fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11c33900 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11c33903 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11c33906 fcomp qword ptr [0x11c3d1d8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11c3d1d8)));
  (void)fpu_pop();
  /* 11c3390c fnstsw ax */
  AX = fpu_status();
  /* 11c3390e sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11c3390f jbe 0x11c33916 */
  if ((C.cf||C.zf)) goto L_11c33916;
  /* 11c33911 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33913 pop eax */
  EAX = (pop32());
  /* 11c33914 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33915 ret  */
  ESPCHK(0x11c338dcu, _esp0);
  ESP += 4; return;
L_11c33916:;
  /* 11c33916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33918 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33919 ret  */
  ESPCHK(0x11c338dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000391a @ 0x11c3391a (41 bytes, 13 insns) */
void f_11c3391a(void) {
  FTRACE(0x11c3391au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3391a push 0x11c3d20c */
  push32((uint32_t)(0x11c3d20cu));
  /* 11c3391f call dword ptr [0x11c3d0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0dc))), 0x11c33925u);
  /* 11c33925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33927 je 0x11c3393e */
  if (C.zf) goto L_11c3393e;
  /* 11c33929 push 0x11c3d1f0 */
  push32((uint32_t)(0x11c3d1f0u));
  /* 11c3392e push eax */
  push32((uint32_t)(EAX));
  /* 11c3392f call dword ptr [0x11c3d0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0d8))), 0x11c33935u);
  /* 11c33935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33937 je 0x11c3393e */
  if (C.zf) goto L_11c3393e;
  /* 11c33939 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3393b call eax */
  call_ind((uint32_t)(EAX), 0x11c3393du);
  /* 11c3393d ret  */
  ESPCHK(0x11c3391au, _esp0);
  ESP += 4; return;
L_11c3393e:;
  /* 11c3393e jmp 0x11c338dc */
  f_11c338dc(); return;
}

/* FUN_10003943 @ 0x11c33943 (90 bytes, 37 insns) */
void f_11c33943(void) {
  FTRACE(0x11c33943u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33943 push esi */
  push32((uint32_t)(ESI));
  /* 11c33944 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c33948 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c3394b push eax */
  push32((uint32_t)(EAX));
  /* 11c3394c call 0x11c35255 */
  push32(0x11c33951u); f_11c35255();
  /* 11c33951 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33954 pop ecx */
  ECX = (pop32());
  /* 11c33955 je 0x11c33983 */
  if (C.zf) goto L_11c33983;
L_11c33957:;
  /* 11c33957 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c33958 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3395f jle 0x11c33970 */
  if ((C.zf||C.sf!=C.of)) goto L_11c33970;
  /* 11c33961 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c33964 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c33966 push eax */
  push32((uint32_t)(EAX));
  /* 11c33967 call 0x11c351e0 */
  push32(0x11c3396cu); f_11c351e0();
  /* 11c3396c pop ecx */
  ECX = (pop32());
  /* 11c3396d pop ecx */
  ECX = (pop32());
  /* 11c3396e jmp 0x11c3397f */
  goto L_11c3397f;
L_11c33970:;
  /* 11c33970 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c33973 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c33979 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c3397c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c3397f:;
  /* 11c3397f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33981 jne 0x11c33957 */
  if (!C.zf) goto L_11c33957;
L_11c33983:;
  /* 11c33983 mov cl, byte ptr [0x11c3f6fc] */
  CL = (r8((uint32_t)(0x11c3f6fc)));
  /* 11c33989 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3398b mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11c3398d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c3398e:;
  /* 11c3398e mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c33990 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11c33992 mov al, cl */
  AL = (CL);
  /* 11c33994 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c33996 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c33997 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c33999 jne 0x11c3398e */
  if (!C.zf) goto L_11c3398e;
  /* 11c3399b pop esi */
  ESI = (pop32());
  /* 11c3399c ret  */
  ESPCHK(0x11c33943u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11c33a03 (62 bytes, 29 insns) */
void f_11c33a03(void) {
  FTRACE(0x11c33a03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33a03 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33a04 mov ebp, esp */
  EBP = (ESP);
  /* 11c33a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33a07 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33a08 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33a0c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c33a0f je 0x11c33a2c */
  if (C.zf) goto L_11c33a2c;
  /* 11c33a11 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c33a14 push eax */
  push32((uint32_t)(EAX));
  /* 11c33a15 call 0x11c35721 */
  push32(0x11c33a1au); f_11c35721();
  /* 11c33a1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33a1d pop ecx */
  ECX = (pop32());
  /* 11c33a1e pop ecx */
  ECX = (pop32());
  /* 11c33a1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c33a22 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c33a24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c33a27 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c33a2a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33a2b ret  */
  ESPCHK(0x11c33a03u, _esp0);
  ESP += 4; return;
L_11c33a2c:;
  /* 11c33a2c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11c33a2f push eax */
  push32((uint32_t)(EAX));
  /* 11c33a30 call 0x11c3574e */
  push32(0x11c33a35u); f_11c3574e();
  /* 11c33a35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33a38 pop ecx */
  ECX = (pop32());
  /* 11c33a39 pop ecx */
  ECX = (pop32());
  /* 11c33a3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c33a3d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c33a3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33a40 ret  */
  ESPCHK(0x11c33a03u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a41 @ 0x11c33a41 (97 bytes, 42 insns) */
void f_11c33a41(void) {
  FTRACE(0x11c33a41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33a41 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33a42 mov ebp, esp */
  EBP = (ESP);
  /* 11c33a44 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33a47 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c33a4a push esi */
  push32((uint32_t)(ESI));
  /* 11c33a4b push eax */
  push32((uint32_t)(EAX));
  /* 11c33a4c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33a4f push eax */
  push32((uint32_t)(EAX));
  /* 11c33a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33a54 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33a55 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11c33a57 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11c33a5a call 0x11c357f2 */
  push32(0x11c33a5fu); f_11c357f2();
  /* 11c33a5f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c33a62 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33a65 push eax */
  push32((uint32_t)(EAX));
  /* 11c33a66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33a69 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11c33a6c push eax */
  push32((uint32_t)(EAX));
  /* 11c33a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33a6f cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33a73 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c33a76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c33a78 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33a7a setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11c33a7d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33a7f add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33a81 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33a82 call 0x11c3577b */
  push32(0x11c33a87u); f_11c3577b();
  /* 11c33a87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33a8c push eax */
  push32((uint32_t)(EAX));
  /* 11c33a8d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c33a90 push esi */
  push32((uint32_t)(ESI));
  /* 11c33a91 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33a94 call 0x11c33aa2 */
  push32(0x11c33a99u); f_11c33aa2();
  /* 11c33a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33a9c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33a9f pop esi */
  ESI = (pop32());
  /* 11c33aa0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33aa1 ret  */
  ESPCHK(0x11c33a41u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa2 @ 0x11c33aa2 (194 bytes, 91 insns) */
void f_11c33aa2(void) {
  FTRACE(0x11c33aa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33aa2 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33aa3 mov ebp, esp */
  EBP = (ESP);
  /* 11c33aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33aa6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c33aa8 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c33aab push esi */
  push32((uint32_t)(ESI));
  /* 11c33aac mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c33aaf push edi */
  push32((uint32_t)(EDI));
  /* 11c33ab0 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33ab3 je 0x11c33ad0 */
  if (C.zf) goto L_11c33ad0;
  /* 11c33ab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33ab7 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33aba setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11c33abd push eax */
  push32((uint32_t)(EAX));
  /* 11c33abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33ac0 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33ac3 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c33ac6 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33ac8 push eax */
  push32((uint32_t)(EAX));
  /* 11c33ac9 call 0x11c33d44 */
  push32(0x11c33aceu); f_11c33d44();
  /* 11c33ace pop ecx */
  ECX = (pop32());
  /* 11c33acf pop ecx */
  ECX = (pop32());
L_11c33ad0:;
  /* 11c33ad0 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33ad3 mov eax, edi */
  EAX = (EDI);
  /* 11c33ad5 jne 0x11c33add */
  if (!C.zf) goto L_11c33add;
  /* 11c33ad7 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11c33ada lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11c33add:;
  /* 11c33add cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33ae0 jle 0x11c33af4 */
  if ((C.zf||C.sf!=C.of)) goto L_11c33af4;
  /* 11c33ae2 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c33ae5 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c33ae8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c33aea mov eax, ecx */
  EAX = (ECX);
  /* 11c33aec mov cl, byte ptr [0x11c3f6fc] */
  CL = (r8((uint32_t)(0x11c3f6fc)));
  /* 11c33af2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_11c33af4:;
  /* 11c33af4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c33af6 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c33af9 push 0x11c3d220 */
  push32((uint32_t)(0x11c3d220u));
  /* 11c33afe sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11c33b01 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33b03 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33b07 call 0x11c35910 */
  push32(0x11c33b0cu); f_11c35910();
  /* 11c33b0c cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33b0f pop ecx */
  ECX = (pop32());
  /* 11c33b10 pop ecx */
  ECX = (pop32());
  /* 11c33b11 mov ecx, eax */
  ECX = (EAX);
  /* 11c33b13 je 0x11c33b18 */
  if (C.zf) goto L_11c33b18;
  /* 11c33b15 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11c33b18:;
  /* 11c33b18 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c33b1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c33b1c cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c33b1f je 0x11c33b5d */
  if (C.zf) goto L_11c33b5d;
  /* 11c33b21 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c33b24 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c33b25 jns 0x11c33b2c */
  if (!C.sf) goto L_11c33b2c;
  /* 11c33b27 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c33b29 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11c33b2c:;
  /* 11c33b2c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c33b2d cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33b30 jl 0x11c33b43 */
  if ((C.sf!=C.of)) goto L_11c33b43;
  /* 11c33b32 mov eax, ebx */
  EAX = (EBX);
  /* 11c33b34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c33b36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c33b37 pop esi */
  ESI = (pop32());
  /* 11c33b38 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c33b3a add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11c33b3c mov eax, ebx */
  EAX = (EBX);
  /* 11c33b3e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c33b3f idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c33b41 mov ebx, edx */
  EBX = (EDX);
L_11c33b43:;
  /* 11c33b43 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c33b44 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33b47 jl 0x11c33b5a */
  if ((C.sf!=C.of)) goto L_11c33b5a;
  /* 11c33b49 mov eax, ebx */
  EAX = (EBX);
  /* 11c33b4b push 0xa */
  push32((uint32_t)(0xau));
  /* 11c33b4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c33b4e pop esi */
  ESI = (pop32());
  /* 11c33b4f idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c33b51 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11c33b53 mov eax, ebx */
  EAX = (EBX);
  /* 11c33b55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c33b56 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c33b58 mov ebx, edx */
  EBX = (EDX);
L_11c33b5a:;
  /* 11c33b5a add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_11c33b5d:;
  /* 11c33b5d mov eax, edi */
  EAX = (EDI);
  /* 11c33b5f pop edi */
  EDI = (pop32());
  /* 11c33b60 pop esi */
  ESI = (pop32());
  /* 11c33b61 pop ebx */
  EBX = (pop32());
  /* 11c33b62 pop ebp */
  EBP = (pop32());
  /* 11c33b63 ret  */
  ESPCHK(0x11c33aa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b64 @ 0x11c33b64 (85 bytes, 37 insns) */
void f_11c33b64(void) {
  FTRACE(0x11c33b64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33b64 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33b65 mov ebp, esp */
  EBP = (ESP);
  /* 11c33b67 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33b6a lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c33b6d push esi */
  push32((uint32_t)(ESI));
  /* 11c33b6e push eax */
  push32((uint32_t)(EAX));
  /* 11c33b6f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33b72 push eax */
  push32((uint32_t)(EAX));
  /* 11c33b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33b76 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33b77 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33b78 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11c33b7a fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11c33b7d call 0x11c357f2 */
  push32(0x11c33b82u); f_11c357f2();
  /* 11c33b82 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c33b85 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33b88 push eax */
  push32((uint32_t)(EAX));
  /* 11c33b89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c33b8c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33b8e push eax */
  push32((uint32_t)(EAX));
  /* 11c33b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33b91 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33b95 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c33b98 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33b9b push eax */
  push32((uint32_t)(EAX));
  /* 11c33b9c call 0x11c3577b */
  push32(0x11c33ba1u); f_11c3577b();
  /* 11c33ba1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33ba6 push eax */
  push32((uint32_t)(EAX));
  /* 11c33ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11c33ba8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33bab call 0x11c33bb9 */
  push32(0x11c33bb0u); f_11c33bb9();
  /* 11c33bb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33bb3 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33bb6 pop esi */
  ESI = (pop32());
  /* 11c33bb7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33bb8 ret  */
  ESPCHK(0x11c33b64u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb9 @ 0x11c33bb9 (167 bytes, 73 insns) */
void f_11c33bb9(void) {
  FTRACE(0x11c33bb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33bb9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33bba mov ebp, esp */
  EBP = (ESP);
  /* 11c33bbc push ebx */
  push32((uint32_t)(EBX));
  /* 11c33bbd push esi */
  push32((uint32_t)(ESI));
  /* 11c33bbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c33bc1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33bc4 push edi */
  push32((uint32_t)(EDI));
  /* 11c33bc5 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c33bc8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c33bc9 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c33bcd je 0x11c33be9 */
  if (C.zf) goto L_11c33be9;
  /* 11c33bcf cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33bd2 jne 0x11c33be9 */
  if (!C.zf) goto L_11c33be9;
  /* 11c33bd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c33bd6 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33bd9 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11c33bdc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33bde add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33be0 mov eax, ecx */
  EAX = (ECX);
  /* 11c33be2 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11c33be5 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11c33be9:;
  /* 11c33be9 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33bec mov edi, ebx */
  EDI = (EBX);
  /* 11c33bee jne 0x11c33bf6 */
  if (!C.zf) goto L_11c33bf6;
  /* 11c33bf0 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 11c33bf3 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11c33bf6:;
  /* 11c33bf6 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c33bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33bfb jg 0x11c33c0d */
  if ((!C.zf&&C.sf==C.of)) goto L_11c33c0d;
  /* 11c33bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33bff push edi */
  push32((uint32_t)(EDI));
  /* 11c33c00 call 0x11c33d44 */
  push32(0x11c33c05u); f_11c33d44();
  /* 11c33c05 pop ecx */
  ECX = (pop32());
  /* 11c33c06 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11c33c09 pop ecx */
  ECX = (pop32());
  /* 11c33c0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c33c0b jmp 0x11c33c0f */
  goto L_11c33c0f;
L_11c33c0d:;
  /* 11c33c0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c33c0f:;
  /* 11c33c0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33c13 jle 0x11c33c59 */
  if ((C.zf||C.sf!=C.of)) goto L_11c33c59;
  /* 11c33c15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33c17 push edi */
  push32((uint32_t)(EDI));
  /* 11c33c18 call 0x11c33d44 */
  push32(0x11c33c1du); f_11c33d44();
  /* 11c33c1d mov al, byte ptr [0x11c3f6fc] */
  AL = (r8((uint32_t)(0x11c3f6fc)));
  /* 11c33c22 pop ecx */
  ECX = (pop32());
  /* 11c33c23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c33c25 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c33c28 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c33c29 pop ecx */
  ECX = (pop32());
  /* 11c33c2a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33c2c jge 0x11c33c59 */
  if ((C.sf==C.of)) goto L_11c33c59;
  /* 11c33c2e cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c33c32 je 0x11c33c38 */
  if (C.zf) goto L_11c33c38;
  /* 11c33c34 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c33c36 jmp 0x11c33c3f */
  goto L_11c33c3f;
L_11c33c38:;
  /* 11c33c38 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c33c3a cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33c3d jl 0x11c33c42 */
  if ((C.sf!=C.of)) goto L_11c33c42;
L_11c33c3f:;
  /* 11c33c3f mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11c33c42:;
  /* 11c33c42 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33c45 push edi */
  push32((uint32_t)(EDI));
  /* 11c33c46 call 0x11c33d44 */
  push32(0x11c33c4bu); f_11c33d44();
  /* 11c33c4b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33c4e push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11c33c50 push edi */
  push32((uint32_t)(EDI));
  /* 11c33c51 call 0x11c35a00 */
  push32(0x11c33c56u); f_11c35a00();
  /* 11c33c56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c33c59:;
  /* 11c33c59 pop edi */
  EDI = (pop32());
  /* 11c33c5a mov eax, ebx */
  EAX = (EBX);
  /* 11c33c5c pop esi */
  ESI = (pop32());
  /* 11c33c5d pop ebx */
  EBX = (pop32());
  /* 11c33c5e pop ebp */
  EBP = (pop32());
  /* 11c33c5f ret  */
  ESPCHK(0x11c33bb9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c60 @ 0x11c33c60 (147 bytes, 66 insns) */
void f_11c33c60(void) {
  FTRACE(0x11c33c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33c61 mov ebp, esp */
  EBP = (ESP);
  /* 11c33c63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33c66 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33c67 push esi */
  push32((uint32_t)(ESI));
  /* 11c33c68 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c33c6b push edi */
  push32((uint32_t)(EDI));
  /* 11c33c6c push eax */
  push32((uint32_t)(EAX));
  /* 11c33c6d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33c70 push eax */
  push32((uint32_t)(EAX));
  /* 11c33c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33c74 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33c75 push ecx */
  push32((uint32_t)(ECX));
  /* 11c33c76 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11c33c78 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11c33c7b call 0x11c357f2 */
  push32(0x11c33c80u); f_11c357f2();
  /* 11c33c80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c33c83 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c33c86 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11c33c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33c8b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33c8f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c33c92 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33c95 mov edi, eax */
  EDI = (EAX);
  /* 11c33c97 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33c9a push eax */
  push32((uint32_t)(EAX));
  /* 11c33c9b push ebx */
  push32((uint32_t)(EBX));
  /* 11c33c9c push edi */
  push32((uint32_t)(EDI));
  /* 11c33c9d call 0x11c3577b */
  push32(0x11c33ca2u); f_11c3577b();
  /* 11c33ca2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c33ca5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33ca8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c33ca9 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33cab setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11c33cae cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33cb1 jl 0x11c33cd9 */
  if ((C.sf!=C.of)) goto L_11c33cd9;
  /* 11c33cb3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33cb5 jge 0x11c33cd9 */
  if ((C.sf==C.of)) goto L_11c33cd9;
  /* 11c33cb7 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c33cb9 je 0x11c33cc5 */
  if (C.zf) goto L_11c33cc5;
L_11c33cbb:;
  /* 11c33cbb mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c33cbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c33cbe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c33cc0 jne 0x11c33cbb */
  if (!C.zf) goto L_11c33cbb;
  /* 11c33cc2 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_11c33cc5:;
  /* 11c33cc5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33cc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33cca push eax */
  push32((uint32_t)(EAX));
  /* 11c33ccb push ebx */
  push32((uint32_t)(EBX));
  /* 11c33ccc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33ccf call 0x11c33bb9 */
  push32(0x11c33cd4u); f_11c33bb9();
  /* 11c33cd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33cd7 jmp 0x11c33cee */
  goto L_11c33cee;
L_11c33cd9:;
  /* 11c33cd9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c33cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33cde push eax */
  push32((uint32_t)(EAX));
  /* 11c33cdf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c33ce2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c33ce3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33ce6 call 0x11c33aa2 */
  push32(0x11c33cebu); f_11c33aa2();
  /* 11c33ceb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c33cee:;
  /* 11c33cee pop edi */
  EDI = (pop32());
  /* 11c33cef pop esi */
  ESI = (pop32());
  /* 11c33cf0 pop ebx */
  EBX = (pop32());
  /* 11c33cf1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33cf2 ret  */
  ESPCHK(0x11c33c60u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11c33cf3 (81 bytes, 29 insns) */
void f_11c33cf3(void) {
  FTRACE(0x11c33cf3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33cf3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33cf4 mov ebp, esp */
  EBP = (ESP);
  /* 11c33cf6 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33cfa je 0x11c33d2e */
  if (C.zf) goto L_11c33d2e;
  /* 11c33cfc cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33d00 je 0x11c33d2e */
  if (C.zf) goto L_11c33d2e;
  /* 11c33d02 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33d06 jne 0x11c33d1b */
  if (!C.zf) goto L_11c33d1b;
  /* 11c33d08 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c33d0b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33d0e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c33d11 call 0x11c33b64 */
  push32(0x11c33d16u); f_11c33b64();
  /* 11c33d16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33d19 pop ebp */
  EBP = (pop32());
  /* 11c33d1a ret  */
  ESPCHK(0x11c33cf3u, _esp0);
  ESP += 4; return;
L_11c33d1b:;
  /* 11c33d1b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c33d1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c33d21 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33d24 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c33d27 call 0x11c33c60 */
  push32(0x11c33d2cu); f_11c33c60();
  /* 11c33d2c jmp 0x11c33d3f */
  goto L_11c33d3f;
L_11c33d2e:;
  /* 11c33d2e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c33d31 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c33d34 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c33d37 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c33d3a call 0x11c33a41 */
  push32(0x11c33d3fu); f_11c33a41();
L_11c33d3f:;
  /* 11c33d3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33d42 pop ebp */
  EBP = (pop32());
  /* 11c33d43 ret  */
  ESPCHK(0x11c33cf3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d44 @ 0x11c33d44 (37 bytes, 18 insns) */
void f_11c33d44(void) {
  FTRACE(0x11c33d44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33d44 push edi */
  push32((uint32_t)(EDI));
  /* 11c33d45 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c33d49 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c33d4b je 0x11c33d67 */
  if (C.zf) goto L_11c33d67;
  /* 11c33d4d push esi */
  push32((uint32_t)(ESI));
  /* 11c33d4e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c33d52 push esi */
  push32((uint32_t)(ESI));
  /* 11c33d53 call 0x11c35da0 */
  push32(0x11c33d58u); f_11c35da0();
  /* 11c33d58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c33d59 push eax */
  push32((uint32_t)(EAX));
  /* 11c33d5a push esi */
  push32((uint32_t)(ESI));
  /* 11c33d5b add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33d5d push esi */
  push32((uint32_t)(ESI));
  /* 11c33d5e call 0x11c35a60 */
  push32(0x11c33d63u); f_11c35a60();
  /* 11c33d63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33d66 pop esi */
  ESI = (pop32());
L_11c33d67:;
  /* 11c33d67 pop edi */
  EDI = (pop32());
  /* 11c33d68 ret  */
  ESPCHK(0x11c33d44u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d69 @ 0x11c33d69 (84 bytes, 32 insns) */
void f_11c33d69(void) {
  FTRACE(0x11c33d69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33d69 push esi */
  push32((uint32_t)(ESI));
  /* 11c33d6a call 0x11c35f61 */
  push32(0x11c33d6fu); f_11c35f61();
  /* 11c33d6f call dword ptr [0x11c3d000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d000))), 0x11c33d75u);
  /* 11c33d75 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33d78 mov dword ptr [0x11c3f634], eax */
  w32((uint32_t)(0x11c3f634), (EAX));
  /* 11c33d7d je 0x11c33db9 */
  if (C.zf) goto L_11c33db9;
  /* 11c33d7f push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c33d81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33d83 call 0x11c35e24 */
  push32(0x11c33d88u); f_11c35e24();
  /* 11c33d88 mov esi, eax */
  ESI = (EAX);
  /* 11c33d8a pop ecx */
  ECX = (pop32());
  /* 11c33d8b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33d8d pop ecx */
  ECX = (pop32());
  /* 11c33d8e je 0x11c33db9 */
  if (C.zf) goto L_11c33db9;
  /* 11c33d90 push esi */
  push32((uint32_t)(ESI));
  /* 11c33d91 push dword ptr [0x11c3f634] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f634))));
  /* 11c33d97 call dword ptr [0x11c3d004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d004))), 0x11c33d9du);
  /* 11c33d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33d9f je 0x11c33db9 */
  if (C.zf) goto L_11c33db9;
  /* 11c33da1 push esi */
  push32((uint32_t)(ESI));
  /* 11c33da2 call 0x11c33ddb */
  push32(0x11c33da7u); f_11c33ddb();
  /* 11c33da7 pop ecx */
  ECX = (pop32());
  /* 11c33da8 call dword ptr [0x11c3d0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e0))), 0x11c33daeu);
  /* 11c33dae or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c33db2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33db4 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c33db6 pop eax */
  EAX = (pop32());
  /* 11c33db7 pop esi */
  ESI = (pop32());
  /* 11c33db8 ret  */
  ESPCHK(0x11c33d69u, _esp0);
  ESP += 4; return;
L_11c33db9:;
  /* 11c33db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c33dbb pop esi */
  ESI = (pop32());
  /* 11c33dbc ret  */
  ESPCHK(0x11c33d69u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dbd @ 0x11c33dbd (30 bytes, 8 insns) */
void f_11c33dbd(void) {
  FTRACE(0x11c33dbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33dbd call 0x11c35f8a */
  push32(0x11c33dc2u); f_11c35f8a();
  /* 11c33dc2 mov eax, dword ptr [0x11c3f634] */
  EAX = (r32((uint32_t)(0x11c3f634)));
  /* 11c33dc7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33dca je 0x11c33dda */
  if (C.zf) goto L_11c33dda;
  /* 11c33dcc push eax */
  push32((uint32_t)(EAX));
  /* 11c33dcd call dword ptr [0x11c3d0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0ec))), 0x11c33dd3u);
  /* 11c33dd3 or dword ptr [0x11c3f634], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c3f634)))|(0xffffffffu); w32((uint32_t)(0x11c3f634), (_r)); fl_logic(_r,32); }
L_11c33dda:;
  /* 11c33dda ret  */
  ESPCHK(0x11c33dbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ddb @ 0x11c33ddb (19 bytes, 4 insns) */
void f_11c33ddb(void) {
  FTRACE(0x11c33ddbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33ddb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c33ddf mov dword ptr [eax + 0x50], 0x11c3fa00 */
  w32((uint32_t)(EAX + 0x50), (0x11c3fa00u));
  /* 11c33de6 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11c33ded ret  */
  ESPCHK(0x11c33ddbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003dee @ 0x11c33dee (103 bytes, 38 insns) */
void f_11c33dee(void) {
  FTRACE(0x11c33deeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33dee push esi */
  push32((uint32_t)(ESI));
  /* 11c33def push edi */
  push32((uint32_t)(EDI));
  /* 11c33df0 call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c33df6u);
  /* 11c33df6 push dword ptr [0x11c3f634] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f634))));
  /* 11c33dfc mov edi, eax */
  EDI = (EAX);
  /* 11c33dfe call dword ptr [0x11c3d0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f4))), 0x11c33e04u);
  /* 11c33e04 mov esi, eax */
  ESI = (EAX);
  /* 11c33e06 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33e08 jne 0x11c33e49 */
  if (!C.zf) goto L_11c33e49;
  /* 11c33e0a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c33e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33e0e call 0x11c35e24 */
  push32(0x11c33e13u); f_11c35e24();
  /* 11c33e13 mov esi, eax */
  ESI = (EAX);
  /* 11c33e15 pop ecx */
  ECX = (pop32());
  /* 11c33e16 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33e18 pop ecx */
  ECX = (pop32());
  /* 11c33e19 je 0x11c33e41 */
  if (C.zf) goto L_11c33e41;
  /* 11c33e1b push esi */
  push32((uint32_t)(ESI));
  /* 11c33e1c push dword ptr [0x11c3f634] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f634))));
  /* 11c33e22 call dword ptr [0x11c3d004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d004))), 0x11c33e28u);
  /* 11c33e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33e2a je 0x11c33e41 */
  if (C.zf) goto L_11c33e41;
  /* 11c33e2c push esi */
  push32((uint32_t)(ESI));
  /* 11c33e2d call 0x11c33ddb */
  push32(0x11c33e32u); f_11c33ddb();
  /* 11c33e32 pop ecx */
  ECX = (pop32());
  /* 11c33e33 call dword ptr [0x11c3d0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e0))), 0x11c33e39u);
  /* 11c33e39 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c33e3d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c33e3f jmp 0x11c33e49 */
  goto L_11c33e49;
L_11c33e41:;
  /* 11c33e41 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c33e43 call 0x11c33897 */
  push32(0x11c33e48u); f_11c33897();
  /* 11c33e48 pop ecx */
  ECX = (pop32());
L_11c33e49:;
  /* 11c33e49 push edi */
  push32((uint32_t)(EDI));
  /* 11c33e4a call dword ptr [0x11c3d0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f0))), 0x11c33e50u);
  /* 11c33e50 mov eax, esi */
  EAX = (ESI);
  /* 11c33e52 pop edi */
  EDI = (pop32());
  /* 11c33e53 pop esi */
  ESI = (pop32());
  /* 11c33e54 ret  */
  ESPCHK(0x11c33deeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e55 @ 0x11c33e55 (160 bytes, 62 insns) */
void f_11c33e55(void) {
  FTRACE(0x11c33e55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33e55 mov eax, dword ptr [0x11c3f634] */
  EAX = (r32((uint32_t)(0x11c3f634)));
  /* 11c33e5a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33e5d je 0x11c33ef4 */
  if (C.zf) goto L_11c33ef4;
  /* 11c33e63 push esi */
  push32((uint32_t)(ESI));
  /* 11c33e64 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c33e68 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33e6a jne 0x11c33e79 */
  if (!C.zf) goto L_11c33e79;
  /* 11c33e6c push eax */
  push32((uint32_t)(EAX));
  /* 11c33e6d call dword ptr [0x11c3d0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f4))), 0x11c33e73u);
  /* 11c33e73 mov esi, eax */
  ESI = (EAX);
  /* 11c33e75 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c33e77 je 0x11c33ee5 */
  if (C.zf) goto L_11c33ee5;
L_11c33e79:;
  /* 11c33e79 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c33e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33e7e je 0x11c33e87 */
  if (C.zf) goto L_11c33e87;
  /* 11c33e80 push eax */
  push32((uint32_t)(EAX));
  /* 11c33e81 call 0x11c3606c */
  push32(0x11c33e86u); f_11c3606c();
  /* 11c33e86 pop ecx */
  ECX = (pop32());
L_11c33e87:;
  /* 11c33e87 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c33e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33e8c je 0x11c33e95 */
  if (C.zf) goto L_11c33e95;
  /* 11c33e8e push eax */
  push32((uint32_t)(EAX));
  /* 11c33e8f call 0x11c3606c */
  push32(0x11c33e94u); f_11c3606c();
  /* 11c33e94 pop ecx */
  ECX = (pop32());
L_11c33e95:;
  /* 11c33e95 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11c33e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33e9a je 0x11c33ea3 */
  if (C.zf) goto L_11c33ea3;
  /* 11c33e9c push eax */
  push32((uint32_t)(EAX));
  /* 11c33e9d call 0x11c3606c */
  push32(0x11c33ea2u); f_11c3606c();
  /* 11c33ea2 pop ecx */
  ECX = (pop32());
L_11c33ea3:;
  /* 11c33ea3 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11c33ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33ea8 je 0x11c33eb1 */
  if (C.zf) goto L_11c33eb1;
  /* 11c33eaa push eax */
  push32((uint32_t)(EAX));
  /* 11c33eab call 0x11c3606c */
  push32(0x11c33eb0u); f_11c3606c();
  /* 11c33eb0 pop ecx */
  ECX = (pop32());
L_11c33eb1:;
  /* 11c33eb1 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11c33eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33eb6 je 0x11c33ebf */
  if (C.zf) goto L_11c33ebf;
  /* 11c33eb8 push eax */
  push32((uint32_t)(EAX));
  /* 11c33eb9 call 0x11c3606c */
  push32(0x11c33ebeu); f_11c3606c();
  /* 11c33ebe pop ecx */
  ECX = (pop32());
L_11c33ebf:;
  /* 11c33ebf mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11c33ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33ec4 je 0x11c33ecd */
  if (C.zf) goto L_11c33ecd;
  /* 11c33ec6 push eax */
  push32((uint32_t)(EAX));
  /* 11c33ec7 call 0x11c3606c */
  push32(0x11c33eccu); f_11c3606c();
  /* 11c33ecc pop ecx */
  ECX = (pop32());
L_11c33ecd:;
  /* 11c33ecd mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c33ed0 cmp eax, 0x11c3fa00 */
  { uint32_t _a=(EAX),_b=(0x11c3fa00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33ed5 je 0x11c33ede */
  if (C.zf) goto L_11c33ede;
  /* 11c33ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11c33ed8 call 0x11c3606c */
  push32(0x11c33eddu); f_11c3606c();
  /* 11c33edd pop ecx */
  ECX = (pop32());
L_11c33ede:;
  /* 11c33ede push esi */
  push32((uint32_t)(ESI));
  /* 11c33edf call 0x11c3606c */
  push32(0x11c33ee4u); f_11c3606c();
  /* 11c33ee4 pop ecx */
  ECX = (pop32());
L_11c33ee5:;
  /* 11c33ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33ee7 push dword ptr [0x11c3f634] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f634))));
  /* 11c33eed call dword ptr [0x11c3d004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d004))), 0x11c33ef3u);
  /* 11c33ef3 pop esi */
  ESI = (pop32());
L_11c33ef4:;
  /* 11c33ef4 ret  */
  ESPCHK(0x11c33e55u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef5 @ 0x11c33ef5 (194 bytes, 65 insns) */
void f_11c33ef5(void) {
  FTRACE(0x11c33ef5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33ef5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c33ef6 mov ebp, esp */
  EBP = (ESP);
  /* 11c33ef8 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33efb push ebx */
  push32((uint32_t)(EBX));
  /* 11c33efc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33eff sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c33f05 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33f08 jl 0x11c33fb1 */
  if ((C.sf!=C.of)) goto L_11c33fb1;
  /* 11c33f0e cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33f14 jg 0x11c33fb1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c33fb1;
  /* 11c33f1a push esi */
  push32((uint32_t)(ESI));
  /* 11c33f1b push edi */
  push32((uint32_t)(EDI));
  /* 11c33f1c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c33f1f mov esi, dword ptr [edi*4 + 0x11c3fb6c] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11c3fb6c)));
  /* 11c33f26 add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33f29 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11c33f2c jne 0x11c33f34 */
  if (!C.zf) goto L_11c33f34;
  /* 11c33f2e cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33f31 jle 0x11c33f34 */
  if ((C.zf||C.sf!=C.of)) goto L_11c33f34;
  /* 11c33f33 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c33f34:;
  /* 11c33f34 call 0x11c36155 */
  push32(0x11c33f39u); f_11c36155();
  /* 11c33f39 mov eax, ebx */
  EAX = (EBX);
  /* 11c33f3b lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11c33f3e imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c33f44 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c33f47 mov edx, esi */
  EDX = (ESI);
  /* 11c33f49 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11c33f4c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33f4e mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11c33f51 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33f53 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c33f56 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11c33f59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c33f5c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c33f5f lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11c33f62 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c33f65 add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33f68 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c33f6b add ecx, dword ptr [0x11c3fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c3fa88))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33f71 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c33f72 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33f76 mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11c33f79 pop edi */
  EDI = (pop32());
  /* 11c33f7a pop esi */
  ESI = (pop32());
  /* 11c33f7b lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11c33f82 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11c33f85 je 0x11c33fa7 */
  if (C.zf) goto L_11c33fa7;
  /* 11c33f87 cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33f8b jne 0x11c33fad */
  if (!C.zf) goto L_11c33fad;
  /* 11c33f8d cmp dword ptr [0x11c3fa8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c3fa8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c33f94 je 0x11c33fad */
  if (C.zf) goto L_11c33fad;
  /* 11c33f96 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c33f99 push eax */
  push32((uint32_t)(EAX));
  /* 11c33f9a call 0x11c3640a */
  push32(0x11c33f9fu); f_11c3640a();
  /* 11c33f9f pop ecx */
  ECX = (pop32());
  /* 11c33fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c33fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33fa5 je 0x11c33fad */
  if (C.zf) goto L_11c33fad;
L_11c33fa7:;
  /* 11c33fa7 add ecx, dword ptr [0x11c3fa90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c3fa90))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11c33fad:;
  /* 11c33fad mov eax, ecx */
  EAX = (ECX);
  /* 11c33faf jmp 0x11c33fb4 */
  goto L_11c33fb4;
L_11c33fb1:;
  /* 11c33fb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c33fb4:;
  /* 11c33fb4 pop ebx */
  EBX = (pop32());
  /* 11c33fb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c33fb6 ret  */
  ESPCHK(0x11c33ef5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb7 @ 0x11c33fb7 (45 bytes, 12 insns) */
void f_11c33fb7(void) {
  FTRACE(0x11c33fb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33fb7 mov eax, dword ptr [0x11c3f60c] */
  EAX = (r32((uint32_t)(0x11c3f60c)));
  /* 11c33fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c33fbe je 0x11c33fc2 */
  if (C.zf) goto L_11c33fc2;
  /* 11c33fc0 call eax */
  call_ind((uint32_t)(EAX), 0x11c33fc2u);
L_11c33fc2:;
  /* 11c33fc2 push 0x11c3f038 */
  push32((uint32_t)(0x11c3f038u));
  /* 11c33fc7 push 0x11c3f024 */
  push32((uint32_t)(0x11c3f024u));
  /* 11c33fcc call 0x11c340bb */
  push32(0x11c33fd1u); f_11c340bb();
  /* 11c33fd1 push 0x11c3f020 */
  push32((uint32_t)(0x11c3f020u));
  /* 11c33fd6 push 0x11c3f000 */
  push32((uint32_t)(0x11c3f000u));
  /* 11c33fdb call 0x11c340bb */
  push32(0x11c33fe0u); f_11c340bb();
  /* 11c33fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33fe3 ret  */
  ESPCHK(0x11c33fb7u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11c33fe4 (17 bytes, 6 insns) */
void f_11c33fe4(void) {
  FTRACE(0x11c33fe4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33fe8 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c33fec call 0x11c34004 */
  push32(0x11c33ff1u); f_11c34004();
  /* 11c33ff1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c33ff4 ret  */
  ESPCHK(0x11c33fe4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ff5 @ 0x11c33ff5 (15 bytes, 6 insns) */
void f_11c33ff5(void) {
  FTRACE(0x11c33ff5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c33ff5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c33ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c33ffb call 0x11c34004 */
  push32(0x11c34000u); f_11c34004();
  /* 11c34000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34003 ret  */
  ESPCHK(0x11c33ff5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004004 @ 0x11c34004 (163 bytes, 53 insns) */
void f_11c34004(void) {
  FTRACE(0x11c34004u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34004 push edi */
  push32((uint32_t)(EDI));
  /* 11c34005 call 0x11c340a9 */
  push32(0x11c3400au); f_11c340a9();
  /* 11c3400a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3400c pop edi */
  EDI = (pop32());
  /* 11c3400d cmp dword ptr [0x11c5676c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c5676c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34013 jne 0x11c34026 */
  if (!C.zf) goto L_11c34026;
  /* 11c34015 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c34019 call dword ptr [0x11c3d104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d104))), 0x11c3401fu);
  /* 11c3401f push eax */
  push32((uint32_t)(EAX));
  /* 11c34020 call dword ptr [0x11c3d100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d100))), 0x11c34026u);
L_11c34026:;
  /* 11c34026 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3402b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3402c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c34030 mov dword ptr [0x11c56768], edi */
  w32((uint32_t)(0x11c56768), (EDI));
  /* 11c34036 mov byte ptr [0x11c56764], bl */
  w8((uint32_t)(0x11c56764), (BL));
  /* 11c3403c jne 0x11c3407a */
  if (!C.zf) goto L_11c3407a;
  /* 11c3403e mov eax, dword ptr [0x11c57e70] */
  EAX = (r32((uint32_t)(0x11c57e70)));
  /* 11c34043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34045 je 0x11c34069 */
  if (C.zf) goto L_11c34069;
  /* 11c34047 mov ecx, dword ptr [0x11c57e6c] */
  ECX = (r32((uint32_t)(0x11c57e6c)));
  /* 11c3404d push esi */
  push32((uint32_t)(ESI));
  /* 11c3404e lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11c34051 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34053 jb 0x11c34068 */
  if (C.cf) goto L_11c34068;
L_11c34055:;
  /* 11c34055 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c34057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34059 je 0x11c3405d */
  if (C.zf) goto L_11c3405d;
  /* 11c3405b call eax */
  call_ind((uint32_t)(EAX), 0x11c3405du);
L_11c3405d:;
  /* 11c3405d sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34060 cmp esi, dword ptr [0x11c57e70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57e70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34066 jae 0x11c34055 */
  if (!C.cf) goto L_11c34055;
L_11c34068:;
  /* 11c34068 pop esi */
  ESI = (pop32());
L_11c34069:;
  /* 11c34069 push 0x11c3f044 */
  push32((uint32_t)(0x11c3f044u));
  /* 11c3406e push 0x11c3f03c */
  push32((uint32_t)(0x11c3f03cu));
  /* 11c34073 call 0x11c340bb */
  push32(0x11c34078u); f_11c340bb();
  /* 11c34078 pop ecx */
  ECX = (pop32());
  /* 11c34079 pop ecx */
  ECX = (pop32());
L_11c3407a:;
  /* 11c3407a push 0x11c3f050 */
  push32((uint32_t)(0x11c3f050u));
  /* 11c3407f push 0x11c3f048 */
  push32((uint32_t)(0x11c3f048u));
  /* 11c34084 call 0x11c340bb */
  push32(0x11c34089u); f_11c340bb();
  /* 11c34089 pop ecx */
  ECX = (pop32());
  /* 11c3408a pop ecx */
  ECX = (pop32());
  /* 11c3408b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3408d pop ebx */
  EBX = (pop32());
  /* 11c3408e je 0x11c34097 */
  if (C.zf) goto L_11c34097;
  /* 11c34090 call 0x11c340b2 */
  push32(0x11c34095u); f_11c340b2();
  /* 11c34095 pop edi */
  EDI = (pop32());
  /* 11c34096 ret  */
  ESPCHK(0x11c34004u, _esp0);
  ESP += 4; return;
L_11c34097:;
  /* 11c34097 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c3409b mov dword ptr [0x11c5676c], edi */
  w32((uint32_t)(0x11c5676c), (EDI));
  /* 11c340a1 call dword ptr [0x11c3d0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0fc))), 0x11c340a7u);
  /* 11c340a7 pop edi */
  EDI = (pop32());
  /* 11c340a8 ret  */
  ESPCHK(0x11c34004u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a9 @ 0x11c340a9 (9 bytes, 4 insns) */
void f_11c340a9(void) {
  FTRACE(0x11c340a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c340a9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c340ab call 0x11c35ff6 */
  push32(0x11c340b0u); f_11c35ff6();
  /* 11c340b0 pop ecx */
  ECX = (pop32());
  /* 11c340b1 ret  */
  ESPCHK(0x11c340a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b2 @ 0x11c340b2 (9 bytes, 4 insns) */
void f_11c340b2(void) {
  FTRACE(0x11c340b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c340b2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c340b4 call 0x11c36057 */
  push32(0x11c340b9u); f_11c36057();
  /* 11c340b9 pop ecx */
  ECX = (pop32());
  /* 11c340ba ret  */
  ESPCHK(0x11c340b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100040bb @ 0x11c340bb (26 bytes, 12 insns) */
void f_11c340bb(void) {
  FTRACE(0x11c340bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c340bb push esi */
  push32((uint32_t)(ESI));
  /* 11c340bc mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11c340c0:;
  /* 11c340c0 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c340c4 jae 0x11c340d3 */
  if (!C.cf) goto L_11c340d3;
  /* 11c340c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c340c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c340ca je 0x11c340ce */
  if (C.zf) goto L_11c340ce;
  /* 11c340cc call eax */
  call_ind((uint32_t)(EAX), 0x11c340ceu);
L_11c340ce:;
  /* 11c340ce add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c340d1 jmp 0x11c340c0 */
  goto L_11c340c0;
L_11c340d3:;
  /* 11c340d3 pop esi */
  ESI = (pop32());
  /* 11c340d4 ret  */
  ESPCHK(0x11c340bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100040d5 @ 0x11c340d5 (781 bytes, 277 insns) */
void f_11c340d5(void) {
  FTRACE(0x11c340d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c340d5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c340d6 mov ebp, esp */
  EBP = (ESP);
  /* 11c340d8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c340da push 0x11c3d228 */
  push32((uint32_t)(0x11c3d228u));
  /* 11c340df push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c340e4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c340ea push eax */
  push32((uint32_t)(EAX));
  /* 11c340eb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c340f2 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c340f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c340f6 push esi */
  push32((uint32_t)(ESI));
  /* 11c340f7 push edi */
  push32((uint32_t)(EDI));
  /* 11c340f8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c340fb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c340fd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c340ff jne 0x11c3410f */
  if (!C.zf) goto L_11c3410f;
  /* 11c34101 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c34104 call 0x11c344f2 */
  push32(0x11c34109u); f_11c344f2();
  /* 11c34109 pop ecx */
  ECX = (pop32());
  /* 11c3410a jmp 0x11c343f5 */
  jmp_ind(0x11c343f5u); return;
L_11c3410f:;
  /* 11c3410f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c34112 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34114 jne 0x11c34122 */
  if (!C.zf) goto L_11c34122;
  /* 11c34116 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34117 call 0x11c3606c */
  push32(0x11c3411cu); f_11c3606c();
  /* 11c3411c pop ecx */
  ECX = (pop32());
  /* 11c3411d jmp 0x11c343f3 */
  jmp_ind(0x11c343f3u); return;
L_11c34122:;
  /* 11c34122 mov eax, dword ptr [0x11c57d44] */
  EAX = (r32((uint32_t)(0x11c57d44)));
  /* 11c34127 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3412a jne 0x11c34269 */
  if (!C.zf) goto L_11c34269;
L_11c34130:;
  /* 11c34130 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c34133 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34136 ja 0x11c3422d */
  if ((!C.cf&&!C.zf)) goto L_11c3422d;
  /* 11c3413c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3413e call 0x11c35ff6 */
  push32(0x11c34143u); f_11c35ff6();
  /* 11c34143 pop ecx */
  ECX = (pop32());
  /* 11c34144 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c34147 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34148 call 0x11c3675f */
  push32(0x11c3414du); f_11c3675f();
  /* 11c3414d pop ecx */
  ECX = (pop32());
  /* 11c3414e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c34151 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34153 je 0x11c341fd */
  if (C.zf) goto L_11c341fd;
  /* 11c34159 cmp esi, dword ptr [0x11c57d3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57d3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3415f ja 0x11c341ad */
  if ((!C.cf&&!C.zf)) goto L_11c341ad;
  /* 11c34161 push esi */
  push32((uint32_t)(ESI));
  /* 11c34162 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34163 push eax */
  push32((uint32_t)(EAX));
  /* 11c34164 call 0x11c36f68 */
  push32(0x11c34169u); f_11c36f68();
  /* 11c34169 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3416c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3416e je 0x11c34175 */
  if (C.zf) goto L_11c34175;
  /* 11c34170 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11c34173 jmp 0x11c341ad */
  goto L_11c341ad;
L_11c34175:;
  /* 11c34175 push esi */
  push32((uint32_t)(ESI));
  /* 11c34176 call 0x11c36ab3 */
  push32(0x11c3417bu); f_11c36ab3();
  /* 11c3417b pop ecx */
  ECX = (pop32());
  /* 11c3417c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c3417f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34181 je 0x11c341ad */
  if (C.zf) goto L_11c341ad;
  /* 11c34183 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11c34186 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c34187 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c3418a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3418c jb 0x11c34190 */
  if (C.cf) goto L_11c34190;
  /* 11c3418e mov eax, esi */
  EAX = (ESI);
L_11c34190:;
  /* 11c34190 push eax */
  push32((uint32_t)(EAX));
  /* 11c34191 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34192 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c34195 call 0x11c37950 */
  push32(0x11c3419au); f_11c37950();
  /* 11c3419a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3419b call 0x11c3675f */
  push32(0x11c341a0u); f_11c3675f();
  /* 11c341a0 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c341a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c341a4 push eax */
  push32((uint32_t)(EAX));
  /* 11c341a5 call 0x11c3678a */
  push32(0x11c341aau); f_11c3678a();
  /* 11c341aa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c341ad:;
  /* 11c341ad cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c341b0 jne 0x11c341fd */
  if (!C.zf) goto L_11c341fd;
  /* 11c341b2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c341b4 jne 0x11c341bc */
  if (!C.zf) goto L_11c341bc;
  /* 11c341b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c341b8 pop esi */
  ESI = (pop32());
  /* 11c341b9 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11c341bc:;
  /* 11c341bc add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c341bf and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c341c2 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c341c5 push esi */
  push32((uint32_t)(ESI));
  /* 11c341c6 push edi */
  push32((uint32_t)(EDI));
  /* 11c341c7 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c341cd call dword ptr [0x11c3d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e8))), 0x11c341d3u);
  /* 11c341d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c341d6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c341d8 je 0x11c341fd */
  if (C.zf) goto L_11c341fd;
  /* 11c341da mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11c341dd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c341de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c341e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c341e3 jb 0x11c341e7 */
  if (C.cf) goto L_11c341e7;
  /* 11c341e5 mov eax, esi */
  EAX = (ESI);
L_11c341e7:;
  /* 11c341e7 push eax */
  push32((uint32_t)(EAX));
  /* 11c341e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c341e9 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c341ec call 0x11c37950 */
  push32(0x11c341f1u); f_11c37950();
  /* 11c341f1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c341f2 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11c341f5 call 0x11c3678a */
  push32(0x11c341fau); f_11c3678a();
  /* 11c341fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c341fd:;
  /* 11c341fd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c34201 call 0x11c34260 */
  push32(0x11c34206u); f_11c34260();
  /* 11c34206 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34209 jne 0x11c3422d */
  if (!C.zf) goto L_11c3422d;
  /* 11c3420b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3420d jne 0x11c34212 */
  if (!C.zf) goto L_11c34212;
  /* 11c3420f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c34211 pop esi */
  ESI = (pop32());
L_11c34212:;
  /* 11c34212 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34215 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c34218 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c3421b push esi */
  push32((uint32_t)(ESI));
  /* 11c3421c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3421d push edi */
  push32((uint32_t)(EDI));
  /* 11c3421e push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34224 call dword ptr [0x11c3d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e4))), 0x11c3422au);
  /* 11c3422a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11c3422d:;
  /* 11c3422d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11c34230 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34232 jne 0x11c343f5 */
  if (!C.zf) { jmp_ind(0x11c343f5u); return; }
  /* 11c34238 cmp dword ptr [0x11c569a4], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c569a4))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3423e je 0x11c343f5 */
  if (C.zf) { jmp_ind(0x11c343f5u); return; }
  /* 11c34244 push esi */
  push32((uint32_t)(ESI));
  /* 11c34245 call 0x11c3792b */
  push32(0x11c3424au); f_11c3792b();
  /* 11c3424a pop ecx */
  ECX = (pop32());
  /* 11c3424b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3424d jne 0x11c34130 */
  if (!C.zf) goto L_11c34130;
  /* 11c34253 jmp 0x11c343f3 */
  jmp_ind(0x11c343f3u); return;
  /* 11c34258 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3425b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3425e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c34260 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34262 call 0x11c36057 */
  push32(0x11c34267u); f_11c36057();
  /* 11c34267 pop ecx */
  ECX = (pop32());
  /* 11c34268 ret  */
  ESPCHK(0x11c340d5u, _esp0);
  ESP += 4; return;
L_11c34269:;
  /* 11c34269 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3426c jne 0x11c343b9 */
  if (!C.zf) goto L_11c343b9;
  /* 11c34272 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34275 ja 0x11c34289 */
  if ((!C.cf&&!C.zf)) goto L_11c34289;
  /* 11c34277 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34279 jbe 0x11c34283 */
  if ((C.cf||C.zf)) goto L_11c34283;
  /* 11c3427b add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3427e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c34281 jmp 0x11c34286 */
  goto L_11c34286;
L_11c34283:;
  /* 11c34283 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c34285 pop esi */
  ESI = (pop32());
L_11c34286:;
  /* 11c34286 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11c34289:;
  /* 11c34289 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c3428c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3428f ja 0x11c34388 */
  if ((!C.cf&&!C.zf)) goto L_11c34388;
  /* 11c34295 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34297 call 0x11c35ff6 */
  push32(0x11c3429cu); f_11c35ff6();
  /* 11c3429c pop ecx */
  ECX = (pop32());
  /* 11c3429d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c342a4 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11c342a7 push eax */
  push32((uint32_t)(EAX));
  /* 11c342a8 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11c342ab push eax */
  push32((uint32_t)(EAX));
  /* 11c342ac push ebx */
  push32((uint32_t)(EBX));
  /* 11c342ad call 0x11c374ba */
  push32(0x11c342b2u); f_11c374ba();
  /* 11c342b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c342b5 mov edi, eax */
  EDI = (EAX);
  /* 11c342b7 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11c342ba test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c342bc je 0x11c3436c */
  if (C.zf) goto L_11c3436c;
  /* 11c342c2 cmp esi, dword ptr [0x11c41bcc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c41bcc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c342c8 jae 0x11c34326 */
  if (!C.cf) goto L_11c34326;
  /* 11c342ca mov ebx, esi */
  EBX = (ESI);
  /* 11c342cc shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11c342cf push ebx */
  push32((uint32_t)(EBX));
  /* 11c342d0 push edi */
  push32((uint32_t)(EDI));
  /* 11c342d1 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11c342d4 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11c342d7 call 0x11c37882 */
  push32(0x11c342dcu); f_11c37882();
  /* 11c342dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c342df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c342e1 je 0x11c342eb */
  if (C.zf) goto L_11c342eb;
  /* 11c342e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c342e6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c342e9 jmp 0x11c34323 */
  goto L_11c34323;
L_11c342eb:;
  /* 11c342eb push ebx */
  push32((uint32_t)(EBX));
  /* 11c342ec call 0x11c37556 */
  push32(0x11c342f1u); f_11c37556();
  /* 11c342f1 pop ecx */
  ECX = (pop32());
  /* 11c342f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c342f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c342f7 je 0x11c34323 */
  if (C.zf) goto L_11c34323;
  /* 11c342f9 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c342fc shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c342ff mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11c34302 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34304 jb 0x11c34308 */
  if (C.cf) goto L_11c34308;
  /* 11c34306 mov eax, esi */
  EAX = (ESI);
L_11c34308:;
  /* 11c34308 push eax */
  push32((uint32_t)(EAX));
  /* 11c34309 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3430c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c3430f call 0x11c37950 */
  push32(0x11c34314u); f_11c37950();
  /* 11c34314 push edi */
  push32((uint32_t)(EDI));
  /* 11c34315 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11c34318 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11c3431b call 0x11c37511 */
  push32(0x11c34320u); f_11c37511();
  /* 11c34320 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c34323:;
  /* 11c34323 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c34326:;
  /* 11c34326 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3432a jne 0x11c3437f */
  if (!C.zf) goto L_11c3437f;
  /* 11c3432c push esi */
  push32((uint32_t)(ESI));
  /* 11c3432d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3432f push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34335 call dword ptr [0x11c3d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e8))), 0x11c3433bu);
  /* 11c3433b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c3433e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34340 je 0x11c3437f */
  if (C.zf) goto L_11c3437f;
  /* 11c34342 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c34345 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c34348 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11c3434b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3434d jb 0x11c34351 */
  if (C.cf) goto L_11c34351;
  /* 11c3434f mov eax, esi */
  EAX = (ESI);
L_11c34351:;
  /* 11c34351 push eax */
  push32((uint32_t)(EAX));
  /* 11c34352 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34353 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c34356 call 0x11c37950 */
  push32(0x11c3435bu); f_11c37950();
  /* 11c3435b push edi */
  push32((uint32_t)(EDI));
  /* 11c3435c push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11c3435f push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11c34362 call 0x11c37511 */
  push32(0x11c34367u); f_11c37511();
  /* 11c34367 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3436a jmp 0x11c3437f */
  goto L_11c3437f;
L_11c3436c:;
  /* 11c3436c push esi */
  push32((uint32_t)(ESI));
  /* 11c3436d push ebx */
  push32((uint32_t)(EBX));
  /* 11c3436e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34370 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34376 call dword ptr [0x11c3d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e4))), 0x11c3437cu);
  /* 11c3437c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11c3437f:;
  /* 11c3437f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c34383 call 0x11c343ae */
  push32(0x11c34388u); f_11c343ae();
L_11c34388:;
  /* 11c34388 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11c3438b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3438d jne 0x11c343f5 */
  if (!C.zf) { jmp_ind(0x11c343f5u); return; }
  /* 11c3438f cmp dword ptr [0x11c569a4], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c569a4))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34395 je 0x11c343f5 */
  if (C.zf) { jmp_ind(0x11c343f5u); return; }
  /* 11c34397 push esi */
  push32((uint32_t)(ESI));
  /* 11c34398 call 0x11c3792b */
  push32(0x11c3439du); f_11c3792b();
  /* 11c3439d pop ecx */
  ECX = (pop32());
  /* 11c3439e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c343a0 jne 0x11c34289 */
  if (!C.zf) goto L_11c34289;
  /* 11c343a6 jmp 0x11c343f3 */
  jmp_ind(0x11c343f3u); return;
  /* 11c343a8 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c343ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c343ae push 9 */
  push32((uint32_t)(0x9u));
  /* 11c343b0 call 0x11c36057 */
  push32(0x11c343b5u); f_11c36057();
  /* 11c343b5 pop ecx */
  ECX = (pop32());
  /* 11c343b6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c343b8 ret  */
  ESPCHK(0x11c340d5u, _esp0);
  ESP += 4; return;
L_11c343b9:;
  /* 11c343b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c343bb cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c343be ja 0x11c343dc */
  if ((!C.cf&&!C.zf)) goto L_11c343dc;
  /* 11c343c0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c343c2 jne 0x11c343c7 */
  if (!C.zf) goto L_11c343c7;
  /* 11c343c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c343c6 pop esi */
  ESI = (pop32());
L_11c343c7:;
  /* 11c343c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c343ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c343cd push esi */
  push32((uint32_t)(ESI));
  /* 11c343ce push ebx */
  push32((uint32_t)(EBX));
  /* 11c343cf push edi */
  push32((uint32_t)(EDI));
  /* 11c343d0 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c343d6 call dword ptr [0x11c3d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e4))), 0x11c343dcu);
L_11c343dc:;
  /* 11c343dc cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c343de jne 0x11c343f5 */
  if (!C.zf) { jmp_ind(0x11c343f5u); return; }
}

/* FUN_10004260 @ 0x11c34260 (9 bytes, 4 insns) */
void f_11c34260(void) {
  FTRACE(0x11c34260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34260 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34262 call 0x11c36057 */
  push32(0x11c34267u); f_11c36057();
  /* 11c34267 pop ecx */
  ECX = (pop32());
  /* 11c34268 ret  */
  ESPCHK(0x11c34260u, _esp0);
  ESP += 4; return;
}

/* FUN_100043ae @ 0x11c343ae (11 bytes, 5 insns) */
void f_11c343ae(void) {
  FTRACE(0x11c343aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c343ae push 9 */
  push32((uint32_t)(0x9u));
  /* 11c343b0 call 0x11c36057 */
  push32(0x11c343b5u); f_11c36057();
  /* 11c343b5 pop ecx */
  ECX = (pop32());
  /* 11c343b6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c343b8 ret  */
  ESPCHK(0x11c343aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004404 @ 0x11c34404 (214 bytes, 72 insns) */
void f_11c34404(void) {
  FTRACE(0x11c34404u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34404 push ebp */
  push32((uint32_t)(EBP));
  /* 11c34405 mov ebp, esp */
  EBP = (ESP);
  /* 11c34407 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c34409 push 0x11c3d240 */
  push32((uint32_t)(0x11c3d240u));
  /* 11c3440e push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c34413 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c34419 push eax */
  push32((uint32_t)(EAX));
  /* 11c3441a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c34421 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34424 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34425 push esi */
  push32((uint32_t)(ESI));
  /* 11c34426 push edi */
  push32((uint32_t)(EDI));
  /* 11c34427 mov eax, dword ptr [0x11c57d44] */
  EAX = (r32((uint32_t)(0x11c57d44)));
  /* 11c3442c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3442f jne 0x11c34477 */
  if (!C.zf) goto L_11c34477;
  /* 11c34431 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34433 call 0x11c35ff6 */
  push32(0x11c34438u); f_11c35ff6();
  /* 11c34438 pop ecx */
  ECX = (pop32());
  /* 11c34439 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3443d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c34440 push esi */
  push32((uint32_t)(ESI));
  /* 11c34441 call 0x11c3675f */
  push32(0x11c34446u); f_11c3675f();
  /* 11c34446 pop ecx */
  ECX = (pop32());
  /* 11c34447 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c3444a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3444c je 0x11c34459 */
  if (C.zf) goto L_11c34459;
  /* 11c3444e mov esi, dword ptr [esi - 4] */
  ESI = (r32((uint32_t)(ESI + -0x4)));
  /* 11c34451 sub esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34454 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11c34457 jmp 0x11c3445c */
  goto L_11c3445c;
L_11c34459:;
  /* 11c34459 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11c3445c:;
  /* 11c3445c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c34460 call 0x11c3446e */
  push32(0x11c34465u); f_11c3446e();
  /* 11c34465 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34469 jmp 0x11c344c0 */
  goto L_11c344c0;
  /* 11c3446b mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 11c3446e push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34470 call 0x11c36057 */
  push32(0x11c34475u); f_11c36057();
  /* 11c34475 pop ecx */
  ECX = (pop32());
  /* 11c34476 ret  */
  ESPCHK(0x11c34404u, _esp0);
  ESP += 4; return;
L_11c34477:;
  /* 11c34477 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3447a jne 0x11c344c2 */
  if (!C.zf) goto L_11c344c2;
  /* 11c3447c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3447e call 0x11c35ff6 */
  push32(0x11c34483u); f_11c35ff6();
  /* 11c34483 pop ecx */
  ECX = (pop32());
  /* 11c34484 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c3448b lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c3448e push eax */
  push32((uint32_t)(EAX));
  /* 11c3448f lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11c34492 push eax */
  push32((uint32_t)(EAX));
  /* 11c34493 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c34496 call 0x11c374ba */
  push32(0x11c3449bu); f_11c374ba();
  /* 11c3449b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3449e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c344a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c344a3 je 0x11c344b0 */
  if (C.zf) goto L_11c344b0;
  /* 11c344a5 movzx esi, byte ptr [eax] */
  ESI = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11c344a8 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c344ab mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11c344ae jmp 0x11c344b3 */
  goto L_11c344b3;
L_11c344b0:;
  /* 11c344b0 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11c344b3:;
  /* 11c344b3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c344b7 call 0x11c344e9 */
  push32(0x11c344bcu); f_11c344e9();
  /* 11c344bc cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c344c0:;
  /* 11c344c0 jne 0x11c344d5 */
  if (!C.zf) goto L_11c344d5;
L_11c344c2:;
  /* 11c344c2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c344c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c344c7 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c344cd call dword ptr [0x11c3d0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0c0))), 0x11c344d3u);
  /* 11c344d3 mov esi, eax */
  ESI = (EAX);
L_11c344d5:;
  /* 11c344d5 mov eax, esi */
  EAX = (ESI);
  /* 11c344d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
}

/* FUN_1000446e @ 0x11c3446e (9 bytes, 4 insns) */
void f_11c3446e(void) {
  FTRACE(0x11c3446eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3446e push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34470 call 0x11c36057 */
  push32(0x11c34475u); f_11c36057();
  /* 11c34475 pop ecx */
  ECX = (pop32());
  /* 11c34476 ret  */
  ESPCHK(0x11c3446eu, _esp0);
  ESP += 4; return;
}

/* FUN_100044e9 @ 0x11c344e9 (9 bytes, 4 insns) */
void f_11c344e9(void) {
  FTRACE(0x11c344e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c344e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c344eb call 0x11c36057 */
  push32(0x11c344f0u); f_11c36057();
  /* 11c344f0 pop ecx */
  ECX = (pop32());
  /* 11c344f1 ret  */
  ESPCHK(0x11c344e9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11c344f2 (18 bytes, 6 insns) */
void f_11c344f2(void) {
  FTRACE(0x11c344f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c344f2 push dword ptr [0x11c569a4] */
  push32((uint32_t)(r32((uint32_t)(0x11c569a4))));
  /* 11c344f8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c344fc call 0x11c34504 */
  push32(0x11c34501u); f_11c34504();
  /* 11c34501 pop ecx */
  ECX = (pop32());
  /* 11c34502 pop ecx */
  ECX = (pop32());
  /* 11c34503 ret  */
  ESPCHK(0x11c344f2u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11c34504 (44 bytes, 16 insns) */
void f_11c34504(void) {
  FTRACE(0x11c34504u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34504 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34509 ja 0x11c3452d */
  if ((!C.cf&&!C.zf)) goto L_11c3452d;
L_11c3450b:;
  /* 11c3450b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3450f call 0x11c34530 */
  push32(0x11c34514u); f_11c34530();
  /* 11c34514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34516 pop ecx */
  ECX = (pop32());
  /* 11c34517 jne 0x11c3452f */
  if (!C.zf) goto L_11c3452f;
  /* 11c34519 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3451d je 0x11c3452f */
  if (C.zf) goto L_11c3452f;
  /* 11c3451f push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c34523 call 0x11c3792b */
  push32(0x11c34528u); f_11c3792b();
  /* 11c34528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3452a pop ecx */
  ECX = (pop32());
  /* 11c3452b jne 0x11c3450b */
  if (!C.zf) goto L_11c3450b;
L_11c3452d:;
  /* 11c3452d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3452f:;
  /* 11c3452f ret  */
  ESPCHK(0x11c34504u, _esp0);
  ESP += 4; return;
}

/* FUN_10004530 @ 0x11c34530 (231 bytes, 81 insns) */
void f_11c34530(void) {
  FTRACE(0x11c34530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34530 push ebp */
  push32((uint32_t)(EBP));
  /* 11c34531 mov ebp, esp */
  EBP = (ESP);
  /* 11c34533 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c34535 push 0x11c3d258 */
  push32((uint32_t)(0x11c3d258u));
  /* 11c3453a push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3453f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c34545 push eax */
  push32((uint32_t)(EAX));
  /* 11c34546 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3454d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34550 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34551 push esi */
  push32((uint32_t)(ESI));
  /* 11c34552 push edi */
  push32((uint32_t)(EDI));
  /* 11c34553 mov eax, dword ptr [0x11c57d44] */
  EAX = (r32((uint32_t)(0x11c57d44)));
  /* 11c34558 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3455b jne 0x11c345a0 */
  if (!C.zf) goto L_11c345a0;
  /* 11c3455d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c34560 cmp esi, dword ptr [0x11c57d3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57d3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34566 ja 0x11c345ff */
  if ((!C.cf&&!C.zf)) goto L_11c345ff;
  /* 11c3456c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3456e call 0x11c35ff6 */
  push32(0x11c34573u); f_11c35ff6();
  /* 11c34573 pop ecx */
  ECX = (pop32());
  /* 11c34574 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c34578 push esi */
  push32((uint32_t)(ESI));
  /* 11c34579 call 0x11c36ab3 */
  push32(0x11c3457eu); f_11c36ab3();
  /* 11c3457e pop ecx */
  ECX = (pop32());
  /* 11c3457f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c34582 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c34586 call 0x11c34597 */
  push32(0x11c3458bu); f_11c34597();
  /* 11c3458b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c3458e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34590 je 0x11c345ff */
  if (C.zf) goto L_11c345ff;
  /* 11c34592 jmp 0x11c3461d */
  jmp_ind(0x11c3461du); return;
  /* 11c34597 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34599 call 0x11c36057 */
  push32(0x11c3459eu); f_11c36057();
  /* 11c3459e pop ecx */
  ECX = (pop32());
  /* 11c3459f ret  */
  ESPCHK(0x11c34530u, _esp0);
  ESP += 4; return;
L_11c345a0:;
  /* 11c345a0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c345a3 jne 0x11c345ff */
  if (!C.zf) goto L_11c345ff;
  /* 11c345a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c345a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c345aa je 0x11c345b4 */
  if (C.zf) goto L_11c345b4;
  /* 11c345ac lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11c345af and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c345b2 jmp 0x11c345b7 */
  goto L_11c345b7;
L_11c345b4:;
  /* 11c345b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c345b6 pop esi */
  ESI = (pop32());
L_11c345b7:;
  /* 11c345b7 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11c345ba cmp esi, dword ptr [0x11c41bcc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c41bcc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c345c0 ja 0x11c345f0 */
  if ((!C.cf&&!C.zf)) goto L_11c345f0;
  /* 11c345c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c345c4 call 0x11c35ff6 */
  push32(0x11c345c9u); f_11c35ff6();
  /* 11c345c9 pop ecx */
  ECX = (pop32());
  /* 11c345ca mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c345d1 mov eax, esi */
  EAX = (ESI);
  /* 11c345d3 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c345d6 push eax */
  push32((uint32_t)(EAX));
  /* 11c345d7 call 0x11c37556 */
  push32(0x11c345dcu); f_11c37556();
  /* 11c345dc pop ecx */
  ECX = (pop32());
  /* 11c345dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c345e0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c345e4 call 0x11c345f6 */
  push32(0x11c345e9u); f_11c345f6();
  /* 11c345e9 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c345ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c345ee jne 0x11c3461d */
  if (!C.zf) { jmp_ind(0x11c3461du); return; }
L_11c345f0:;
  /* 11c345f0 push esi */
  push32((uint32_t)(ESI));
  /* 11c345f1 jmp 0x11c3460f */
  goto L_11c3460f;
  /* 11c345f3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c345f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c345f8 call 0x11c36057 */
  push32(0x11c345fdu); f_11c36057();
  /* 11c345fd pop ecx */
  ECX = (pop32());
  /* 11c345fe ret  */
  ESPCHK(0x11c34530u, _esp0);
  ESP += 4; return;
L_11c345ff:;
  /* 11c345ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c34602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34604 jne 0x11c34609 */
  if (!C.zf) goto L_11c34609;
  /* 11c34606 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c34608 pop eax */
  EAX = (pop32());
L_11c34609:;
  /* 11c34609 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3460c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11c3460e push eax */
  push32((uint32_t)(EAX));
L_11c3460f:;
  /* 11c3460f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34611 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
}

/* FUN_10004597 @ 0x11c34597 (9 bytes, 4 insns) */
void f_11c34597(void) {
  FTRACE(0x11c34597u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34597 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c34599 call 0x11c36057 */
  push32(0x11c3459eu); f_11c36057();
  /* 11c3459e pop ecx */
  ECX = (pop32());
  /* 11c3459f ret  */
  ESPCHK(0x11c34597u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f6 @ 0x11c345f6 (9 bytes, 4 insns) */
void f_11c345f6(void) {
  FTRACE(0x11c345f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c345f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c345f8 call 0x11c36057 */
  push32(0x11c345fdu); f_11c36057();
  /* 11c345fd pop ecx */
  ECX = (pop32());
  /* 11c345fe ret  */
  ESPCHK(0x11c345f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000462c @ 0x11c3462c (444 bytes, 150 insns) */
void f_11c3462c(void) {
  FTRACE(0x11c3462cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3462c push ebp */
  push32((uint32_t)(EBP));
  /* 11c3462d mov ebp, esp */
  EBP = (ESP);
  /* 11c3462f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34632 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34633 push esi */
  push32((uint32_t)(ESI));
  /* 11c34634 push edi */
  push32((uint32_t)(EDI));
  /* 11c34635 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c3463a call 0x11c344f2 */
  push32(0x11c3463fu); f_11c344f2();
  /* 11c3463f mov esi, eax */
  ESI = (EAX);
  /* 11c34641 pop ecx */
  ECX = (pop32());
  /* 11c34642 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34644 jne 0x11c3464e */
  if (!C.zf) goto L_11c3464e;
  /* 11c34646 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c34648 call 0x11c33897 */
  push32(0x11c3464du); f_11c33897();
  /* 11c3464d pop ecx */
  ECX = (pop32());
L_11c3464e:;
  /* 11c3464e mov dword ptr [0x11c57d60], esi */
  w32((uint32_t)(0x11c57d60), (ESI));
  /* 11c34654 mov dword ptr [0x11c57e60], 0x20 */
  w32((uint32_t)(0x11c57e60), (0x20u));
  /* 11c3465e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11c34664:;
  /* 11c34664 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34666 jae 0x11c34686 */
  if (!C.cf) goto L_11c34686;
  /* 11c34668 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c3466c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c3466f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c34673 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11c34677 mov eax, dword ptr [0x11c57d60] */
  EAX = (r32((uint32_t)(0x11c57d60)));
  /* 11c3467c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3467f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34684 jmp 0x11c34664 */
  goto L_11c34664;
L_11c34686:;
  /* 11c34686 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11c34689 push eax */
  push32((uint32_t)(EAX));
  /* 11c3468a call dword ptr [0x11c3d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0b0))), 0x11c34690u);
  /* 11c34690 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c34695 je 0x11c3476c */
  if (C.zf) goto L_11c3476c;
  /* 11c3469b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3469e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c346a0 je 0x11c3476c */
  if (C.zf) goto L_11c3476c;
  /* 11c346a6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11c346a8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11c346ab lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11c346ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c346b1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11c346b6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c346b8 jl 0x11c346bc */
  if ((C.sf!=C.of)) goto L_11c346bc;
  /* 11c346ba mov edi, eax */
  EDI = (EAX);
L_11c346bc:;
  /* 11c346bc cmp dword ptr [0x11c57e60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c57e60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c346c2 jge 0x11c3471a */
  if ((C.sf==C.of)) goto L_11c3471a;
  /* 11c346c4 mov esi, 0x11c57d64 */
  ESI = (0x11c57d64u);
L_11c346c9:;
  /* 11c346c9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c346ce call 0x11c344f2 */
  push32(0x11c346d3u); f_11c344f2();
  /* 11c346d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c346d5 pop ecx */
  ECX = (pop32());
  /* 11c346d6 je 0x11c34714 */
  if (C.zf) goto L_11c34714;
  /* 11c346d8 add dword ptr [0x11c57e60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c57e60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11c57e60), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c346df mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c346e1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11c346e7:;
  /* 11c346e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c346e9 jae 0x11c34707 */
  if (!C.cf) goto L_11c34707;
  /* 11c346eb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c346ef or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c346f2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c346f6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11c346fa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c346fc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c346ff add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34705 jmp 0x11c346e7 */
  goto L_11c346e7;
L_11c34707:;
  /* 11c34707 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3470a cmp dword ptr [0x11c57e60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c57e60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34710 jl 0x11c346c9 */
  if ((C.sf!=C.of)) goto L_11c346c9;
  /* 11c34712 jmp 0x11c3471a */
  goto L_11c3471a;
L_11c34714:;
  /* 11c34714 mov edi, dword ptr [0x11c57e60] */
  EDI = (r32((uint32_t)(0x11c57e60)));
L_11c3471a:;
  /* 11c3471a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c3471c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c3471e jle 0x11c3476c */
  if ((C.zf||C.sf!=C.of)) goto L_11c3476c;
L_11c34720:;
  /* 11c34720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c34723 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c34725 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34728 je 0x11c34762 */
  if (C.zf) goto L_11c34762;
  /* 11c3472a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11c3472c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c3472e je 0x11c34762 */
  if (C.zf) goto L_11c34762;
  /* 11c34730 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c34732 jne 0x11c3473f */
  if (!C.zf) goto L_11c3473f;
  /* 11c34734 push ecx */
  push32((uint32_t)(ECX));
  /* 11c34735 call dword ptr [0x11c3d0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0b4))), 0x11c3473bu);
  /* 11c3473b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3473d je 0x11c34762 */
  if (C.zf) goto L_11c34762;
L_11c3473f:;
  /* 11c3473f mov ecx, esi */
  ECX = (ESI);
  /* 11c34741 mov eax, esi */
  EAX = (ESI);
  /* 11c34743 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c34746 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c34749 mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c34750 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c34753 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11c34756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c34759 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c3475b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c3475d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11c3475f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11c34762:;
  /* 11c34762 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c34766 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c34767 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c34768 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3476a jl 0x11c34720 */
  if ((C.sf!=C.of)) goto L_11c34720;
L_11c3476c:;
  /* 11c3476c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c3476e:;
  /* 11c3476e mov ecx, dword ptr [0x11c57d60] */
  ECX = (r32((uint32_t)(0x11c57d60)));
  /* 11c34774 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11c34777 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3477b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c3477e jne 0x11c347cd */
  if (!C.zf) goto L_11c347cd;
  /* 11c34780 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c34782 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11c34786 jne 0x11c3478d */
  if (!C.zf) goto L_11c3478d;
  /* 11c34788 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11c3478a pop eax */
  EAX = (pop32());
  /* 11c3478b jmp 0x11c34797 */
  goto L_11c34797;
L_11c3478d:;
  /* 11c3478d mov eax, ebx */
  EAX = (EBX);
  /* 11c3478f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c34790 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c34792 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34794 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c34797:;
  /* 11c34797 push eax */
  push32((uint32_t)(EAX));
  /* 11c34798 call dword ptr [0x11c3d0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0b8))), 0x11c3479eu);
  /* 11c3479e mov edi, eax */
  EDI = (EAX);
  /* 11c347a0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c347a3 je 0x11c347bc */
  if (C.zf) goto L_11c347bc;
  /* 11c347a5 push edi */
  push32((uint32_t)(EDI));
  /* 11c347a6 call dword ptr [0x11c3d0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0b4))), 0x11c347acu);
  /* 11c347ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c347ae je 0x11c347bc */
  if (C.zf) goto L_11c347bc;
  /* 11c347b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c347b5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c347b7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c347ba jne 0x11c347c2 */
  if (!C.zf) goto L_11c347c2;
L_11c347bc:;
  /* 11c347bc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c347c0 jmp 0x11c347d1 */
  goto L_11c347d1;
L_11c347c2:;
  /* 11c347c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c347c5 jne 0x11c347d1 */
  if (!C.zf) goto L_11c347d1;
  /* 11c347c7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c347cb jmp 0x11c347d1 */
  goto L_11c347d1;
L_11c347cd:;
  /* 11c347cd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11c347d1:;
  /* 11c347d1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c347d2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c347d5 jl 0x11c3476e */
  if ((C.sf!=C.of)) goto L_11c3476e;
  /* 11c347d7 push dword ptr [0x11c57e60] */
  push32((uint32_t)(r32((uint32_t)(0x11c57e60))));
  /* 11c347dd call dword ptr [0x11c3d0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0bc))), 0x11c347e3u);
  /* 11c347e3 pop edi */
  EDI = (pop32());
  /* 11c347e4 pop esi */
  ESI = (pop32());
  /* 11c347e5 pop ebx */
  EBX = (pop32());
  /* 11c347e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c347e7 ret  */
  ESPCHK(0x11c3462cu, _esp0);
  ESP += 4; return;
}

/* FUN_100047e8 @ 0x11c347e8 (84 bytes, 33 insns) */
void f_11c347e8(void) {
  FTRACE(0x11c347e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c347e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c347e9 push esi */
  push32((uint32_t)(ESI));
  /* 11c347ea push edi */
  push32((uint32_t)(EDI));
  /* 11c347eb mov esi, 0x11c57d60 */
  ESI = (0x11c57d60u);
L_11c347f0:;
  /* 11c347f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c347f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c347f4 je 0x11c3482d */
  if (C.zf) goto L_11c3482d;
  /* 11c347f6 mov edi, eax */
  EDI = (EAX);
  /* 11c347f8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c347fd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c347ff jae 0x11c34822 */
  if (!C.cf) goto L_11c34822;
  /* 11c34801 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11c34804:;
  /* 11c34804 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34808 je 0x11c34811 */
  if (C.zf) goto L_11c34811;
  /* 11c3480a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3480b call dword ptr [0x11c3d0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0ac))), 0x11c34811u);
L_11c34811:;
  /* 11c34811 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c34813 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34816 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3481b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3481e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34820 jb 0x11c34804 */
  if (C.cf) goto L_11c34804;
L_11c34822:;
  /* 11c34822 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c34824 call 0x11c3606c */
  push32(0x11c34829u); f_11c3606c();
  /* 11c34829 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c3482c pop ecx */
  ECX = (pop32());
L_11c3482d:;
  /* 11c3482d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34830 cmp esi, 0x11c57e60 */
  { uint32_t _a=(ESI),_b=(0x11c57e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34836 jl 0x11c347f0 */
  if ((C.sf!=C.of)) goto L_11c347f0;
  /* 11c34838 pop edi */
  EDI = (pop32());
  /* 11c34839 pop esi */
  ESI = (pop32());
  /* 11c3483a pop ebx */
  EBX = (pop32());
  /* 11c3483b ret  */
  ESPCHK(0x11c347e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000483c @ 0x11c3483c (185 bytes, 71 insns) */
void f_11c3483c(void) {
  FTRACE(0x11c3483cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3483c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3483d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3483f cmp dword ptr [0x11c57e68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c57e68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34845 push esi */
  push32((uint32_t)(ESI));
  /* 11c34846 push edi */
  push32((uint32_t)(EDI));
  /* 11c34847 jne 0x11c3484e */
  if (!C.zf) goto L_11c3484e;
  /* 11c34849 call 0x11c3873d */
  push32(0x11c3484eu); f_11c3873d();
L_11c3484e:;
  /* 11c3484e mov esi, dword ptr [0x11c5671c] */
  ESI = (r32((uint32_t)(0x11c5671c)));
  /* 11c34854 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c34856:;
  /* 11c34856 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c34858 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3485a je 0x11c3486e */
  if (C.zf) goto L_11c3486e;
  /* 11c3485c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3485e je 0x11c34861 */
  if (C.zf) goto L_11c34861;
  /* 11c34860 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c34861:;
  /* 11c34861 push esi */
  push32((uint32_t)(ESI));
  /* 11c34862 call 0x11c35da0 */
  push32(0x11c34867u); f_11c35da0();
  /* 11c34867 pop ecx */
  ECX = (pop32());
  /* 11c34868 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11c3486c jmp 0x11c34856 */
  goto L_11c34856;
L_11c3486e:;
  /* 11c3486e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11c34875 push eax */
  push32((uint32_t)(EAX));
  /* 11c34876 call 0x11c344f2 */
  push32(0x11c3487bu); f_11c344f2();
  /* 11c3487b mov esi, eax */
  ESI = (EAX);
  /* 11c3487d pop ecx */
  ECX = (pop32());
  /* 11c3487e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34880 mov dword ptr [0x11c5674c], esi */
  w32((uint32_t)(0x11c5674c), (ESI));
  /* 11c34886 jne 0x11c34890 */
  if (!C.zf) goto L_11c34890;
  /* 11c34888 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3488a call 0x11c33897 */
  push32(0x11c3488fu); f_11c33897();
  /* 11c3488f pop ecx */
  ECX = (pop32());
L_11c34890:;
  /* 11c34890 mov edi, dword ptr [0x11c5671c] */
  EDI = (r32((uint32_t)(0x11c5671c)));
  /* 11c34896 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34898 je 0x11c348d3 */
  if (C.zf) goto L_11c348d3;
  /* 11c3489a push ebp */
  push32((uint32_t)(EBP));
L_11c3489b:;
  /* 11c3489b push edi */
  push32((uint32_t)(EDI));
  /* 11c3489c call 0x11c35da0 */
  push32(0x11c348a1u); f_11c35da0();
  /* 11c348a1 mov ebp, eax */
  EBP = (EAX);
  /* 11c348a3 pop ecx */
  ECX = (pop32());
  /* 11c348a4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c348a5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c348a8 je 0x11c348cc */
  if (C.zf) goto L_11c348cc;
  /* 11c348aa push ebp */
  push32((uint32_t)(EBP));
  /* 11c348ab call 0x11c344f2 */
  push32(0x11c348b0u); f_11c344f2();
  /* 11c348b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c348b2 pop ecx */
  ECX = (pop32());
  /* 11c348b3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c348b5 jne 0x11c348bf */
  if (!C.zf) goto L_11c348bf;
  /* 11c348b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c348b9 call 0x11c33897 */
  push32(0x11c348beu); f_11c33897();
  /* 11c348be pop ecx */
  ECX = (pop32());
L_11c348bf:;
  /* 11c348bf push edi */
  push32((uint32_t)(EDI));
  /* 11c348c0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c348c2 call 0x11c35910 */
  push32(0x11c348c7u); f_11c35910();
  /* 11c348c7 pop ecx */
  ECX = (pop32());
  /* 11c348c8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c348cb pop ecx */
  ECX = (pop32());
L_11c348cc:;
  /* 11c348cc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c348ce cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c348d0 jne 0x11c3489b */
  if (!C.zf) goto L_11c3489b;
  /* 11c348d2 pop ebp */
  EBP = (pop32());
L_11c348d3:;
  /* 11c348d3 push dword ptr [0x11c5671c] */
  push32((uint32_t)(r32((uint32_t)(0x11c5671c))));
  /* 11c348d9 call 0x11c3606c */
  push32(0x11c348deu); f_11c3606c();
  /* 11c348de pop ecx */
  ECX = (pop32());
  /* 11c348df mov dword ptr [0x11c5671c], ebx */
  w32((uint32_t)(0x11c5671c), (EBX));
  /* 11c348e5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11c348e7 pop edi */
  EDI = (pop32());
  /* 11c348e8 pop esi */
  ESI = (pop32());
  /* 11c348e9 mov dword ptr [0x11c57e64], 1 */
  w32((uint32_t)(0x11c57e64), (0x1u));
  /* 11c348f3 pop ebx */
  EBX = (pop32());
  /* 11c348f4 ret  */
  ESPCHK(0x11c3483cu, _esp0);
  ESP += 4; return;
}

/* FUN_100048f5 @ 0x11c348f5 (153 bytes, 62 insns) */
void f_11c348f5(void) {
  FTRACE(0x11c348f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c348f5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c348f6 mov ebp, esp */
  EBP = (ESP);
  /* 11c348f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c348f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c348fa push ebx */
  push32((uint32_t)(EBX));
  /* 11c348fb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c348fd cmp dword ptr [0x11c57e68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c57e68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34903 push esi */
  push32((uint32_t)(ESI));
  /* 11c34904 push edi */
  push32((uint32_t)(EDI));
  /* 11c34905 jne 0x11c3490c */
  if (!C.zf) goto L_11c3490c;
  /* 11c34907 call 0x11c3873d */
  push32(0x11c3490cu); f_11c3873d();
L_11c3490c:;
  /* 11c3490c mov esi, 0x11c56770 */
  ESI = (0x11c56770u);
  /* 11c34911 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c34916 push esi */
  push32((uint32_t)(ESI));
  /* 11c34917 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34918 call dword ptr [0x11c3d0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0a8))), 0x11c3491eu);
  /* 11c3491e mov eax, dword ptr [0x11c57e74] */
  EAX = (r32((uint32_t)(0x11c57e74)));
  /* 11c34923 mov dword ptr [0x11c5675c], esi */
  w32((uint32_t)(0x11c5675c), (ESI));
  /* 11c34929 mov edi, esi */
  EDI = (ESI);
  /* 11c3492b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3492d je 0x11c34931 */
  if (C.zf) goto L_11c34931;
  /* 11c3492f mov edi, eax */
  EDI = (EAX);
L_11c34931:;
  /* 11c34931 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c34934 push eax */
  push32((uint32_t)(EAX));
  /* 11c34935 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c34938 push eax */
  push32((uint32_t)(EAX));
  /* 11c34939 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3493a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3493b push edi */
  push32((uint32_t)(EDI));
  /* 11c3493c call 0x11c3498e */
  push32(0x11c34941u); f_11c3498e();
  /* 11c34941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c34944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c34947 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11c3494a push eax */
  push32((uint32_t)(EAX));
  /* 11c3494b call 0x11c344f2 */
  push32(0x11c34950u); f_11c344f2();
  /* 11c34950 mov esi, eax */
  ESI = (EAX);
  /* 11c34952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34955 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34957 jne 0x11c34961 */
  if (!C.zf) goto L_11c34961;
  /* 11c34959 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c3495b call 0x11c33897 */
  push32(0x11c34960u); f_11c33897();
  /* 11c34960 pop ecx */
  ECX = (pop32());
L_11c34961:;
  /* 11c34961 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c34964 push eax */
  push32((uint32_t)(EAX));
  /* 11c34965 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c34968 push eax */
  push32((uint32_t)(EAX));
  /* 11c34969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3496c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11c3496f push eax */
  push32((uint32_t)(EAX));
  /* 11c34970 push esi */
  push32((uint32_t)(ESI));
  /* 11c34971 push edi */
  push32((uint32_t)(EDI));
  /* 11c34972 call 0x11c3498e */
  push32(0x11c34977u); f_11c3498e();
  /* 11c34977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3497a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3497d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3497e mov dword ptr [0x11c56744], esi */
  w32((uint32_t)(0x11c56744), (ESI));
  /* 11c34984 pop edi */
  EDI = (pop32());
  /* 11c34985 pop esi */
  ESI = (pop32());
  /* 11c34986 mov dword ptr [0x11c56740], eax */
  w32((uint32_t)(0x11c56740), (EAX));
  /* 11c3498b pop ebx */
  EBX = (pop32());
  /* 11c3498c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3498d ret  */
  ESPCHK(0x11c348f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000498e @ 0x11c3498e (436 bytes, 187 insns) */
void f_11c3498e(void) {
  FTRACE(0x11c3498eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3498e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3498f mov ebp, esp */
  EBP = (ESP);
  /* 11c34991 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c34994 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c34997 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34998 push esi */
  push32((uint32_t)(ESI));
  /* 11c34999 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c3499c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3499f push edi */
  push32((uint32_t)(EDI));
  /* 11c349a0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c349a3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11c349a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c349ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c349ae je 0x11c349b8 */
  if (C.zf) goto L_11c349b8;
  /* 11c349b0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c349b2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c349b5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c349b8:;
  /* 11c349b8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c349bb jne 0x11c34a01 */
  if (!C.zf) goto L_11c34a01;
L_11c349bd:;
  /* 11c349bd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c349c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c349c1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c349c4 je 0x11c349ef */
  if (C.zf) goto L_11c349ef;
  /* 11c349c6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c349c8 je 0x11c349ef */
  if (C.zf) goto L_11c349ef;
  /* 11c349ca movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c349cd test byte ptr [edx + 0x11c56c01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c56c01)))&(0x4u); fl_logic(_r,8); }
  /* 11c349d4 je 0x11c349e2 */
  if (C.zf) goto L_11c349e2;
  /* 11c349d6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c349d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c349da je 0x11c349e2 */
  if (C.zf) goto L_11c349e2;
  /* 11c349dc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c349de mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c349e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c349e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c349e2:;
  /* 11c349e2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c349e4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c349e6 je 0x11c349bd */
  if (C.zf) goto L_11c349bd;
  /* 11c349e8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c349ea mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c349ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c349ed jmp 0x11c349bd */
  goto L_11c349bd;
L_11c349ef:;
  /* 11c349ef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c349f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c349f3 je 0x11c349f9 */
  if (C.zf) goto L_11c349f9;
  /* 11c349f5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c349f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c349f9:;
  /* 11c349f9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c349fc jne 0x11c34a44 */
  if (!C.zf) goto L_11c34a44;
  /* 11c349fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c349ff jmp 0x11c34a44 */
  goto L_11c34a44;
L_11c34a01:;
  /* 11c34a01 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c34a03 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34a05 je 0x11c34a0c */
  if (C.zf) goto L_11c34a0c;
  /* 11c34a07 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c34a09 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c34a0b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c34a0c:;
  /* 11c34a0c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c34a0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34a0f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c34a12 test byte ptr [ebx + 0x11c56c01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c56c01)))&(0x4u); fl_logic(_r,8); }
  /* 11c34a19 je 0x11c34a27 */
  if (C.zf) goto L_11c34a27;
  /* 11c34a1b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c34a1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34a1f je 0x11c34a26 */
  if (C.zf) goto L_11c34a26;
  /* 11c34a21 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c34a23 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11c34a25 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c34a26:;
  /* 11c34a26 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c34a27:;
  /* 11c34a27 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a2a je 0x11c34a35 */
  if (C.zf) goto L_11c34a35;
  /* 11c34a2c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c34a2e je 0x11c34a39 */
  if (C.zf) goto L_11c34a39;
  /* 11c34a30 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a33 jne 0x11c34a01 */
  if (!C.zf) goto L_11c34a01;
L_11c34a35:;
  /* 11c34a35 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c34a37 jne 0x11c34a3c */
  if (!C.zf) goto L_11c34a3c;
L_11c34a39:;
  /* 11c34a39 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c34a3a jmp 0x11c34a44 */
  goto L_11c34a44;
L_11c34a3c:;
  /* 11c34a3c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34a3e je 0x11c34a44 */
  if (C.zf) goto L_11c34a44;
  /* 11c34a40 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11c34a44:;
  /* 11c34a44 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11c34a48:;
  /* 11c34a48 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a4b je 0x11c34b31 */
  if (C.zf) goto L_11c34b31;
L_11c34a51:;
  /* 11c34a51 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c34a53 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a56 je 0x11c34a5d */
  if (C.zf) goto L_11c34a5d;
  /* 11c34a58 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a5b jne 0x11c34a60 */
  if (!C.zf) goto L_11c34a60;
L_11c34a5d:;
  /* 11c34a5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34a5e jmp 0x11c34a51 */
  goto L_11c34a51;
L_11c34a60:;
  /* 11c34a60 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a63 je 0x11c34b31 */
  if (C.zf) goto L_11c34b31;
  /* 11c34a69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c34a6b je 0x11c34a75 */
  if (C.zf) goto L_11c34a75;
  /* 11c34a6d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c34a6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34a72 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c34a75:;
  /* 11c34a75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c34a78 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11c34a7a:;
  /* 11c34a7a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11c34a81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c34a83:;
  /* 11c34a83 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a86 jne 0x11c34a8c */
  if (!C.zf) goto L_11c34a8c;
  /* 11c34a88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34a89 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c34a8a jmp 0x11c34a83 */
  goto L_11c34a83;
L_11c34a8c:;
  /* 11c34a8c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34a8f jne 0x11c34abd */
  if (!C.zf) goto L_11c34abd;
  /* 11c34a91 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c34a94 jne 0x11c34abb */
  if (!C.zf) goto L_11c34abb;
  /* 11c34a96 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c34a98 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34a9b je 0x11c34aaa */
  if (C.zf) goto L_11c34aaa;
  /* 11c34a9d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34aa1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11c34aa4 jne 0x11c34aaa */
  if (!C.zf) goto L_11c34aaa;
  /* 11c34aa6 mov eax, edx */
  EAX = (EDX);
  /* 11c34aa8 jmp 0x11c34aad */
  goto L_11c34aad;
L_11c34aaa:;
  /* 11c34aaa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11c34aad:;
  /* 11c34aad mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c34ab0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c34ab2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34ab5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11c34ab8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11c34abb:;
  /* 11c34abb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11c34abd:;
  /* 11c34abd mov edx, ebx */
  EDX = (EBX);
  /* 11c34abf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c34ac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c34ac2 je 0x11c34ad2 */
  if (C.zf) goto L_11c34ad2;
  /* 11c34ac4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c34ac5:;
  /* 11c34ac5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34ac7 je 0x11c34acd */
  if (C.zf) goto L_11c34acd;
  /* 11c34ac9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11c34acc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c34acd:;
  /* 11c34acd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c34acf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c34ad0 jne 0x11c34ac5 */
  if (!C.zf) goto L_11c34ac5;
L_11c34ad2:;
  /* 11c34ad2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c34ad4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c34ad6 je 0x11c34b22 */
  if (C.zf) goto L_11c34b22;
  /* 11c34ad8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34adc jne 0x11c34ae8 */
  if (!C.zf) goto L_11c34ae8;
  /* 11c34ade cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34ae1 je 0x11c34b22 */
  if (C.zf) goto L_11c34b22;
  /* 11c34ae3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34ae6 je 0x11c34b22 */
  if (C.zf) goto L_11c34b22;
L_11c34ae8:;
  /* 11c34ae8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34aec je 0x11c34b1c */
  if (C.zf) goto L_11c34b1c;
  /* 11c34aee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34af0 je 0x11c34b0b */
  if (C.zf) goto L_11c34b0b;
  /* 11c34af2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c34af5 test byte ptr [ebx + 0x11c56c01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c56c01)))&(0x4u); fl_logic(_r,8); }
  /* 11c34afc je 0x11c34b04 */
  if (C.zf) goto L_11c34b04;
  /* 11c34afe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c34b00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c34b01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34b02 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c34b04:;
  /* 11c34b04 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c34b06 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c34b08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c34b09 jmp 0x11c34b1a */
  goto L_11c34b1a;
L_11c34b0b:;
  /* 11c34b0b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c34b0e test byte ptr [edx + 0x11c56c01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c56c01)))&(0x4u); fl_logic(_r,8); }
  /* 11c34b15 je 0x11c34b1a */
  if (C.zf) goto L_11c34b1a;
  /* 11c34b17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34b18 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c34b1a:;
  /* 11c34b1a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c34b1c:;
  /* 11c34b1c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34b1d jmp 0x11c34a7a */
  goto L_11c34a7a;
L_11c34b22:;
  /* 11c34b22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c34b24 je 0x11c34b2a */
  if (C.zf) goto L_11c34b2a;
  /* 11c34b26 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c34b29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c34b2a:;
  /* 11c34b2a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c34b2c jmp 0x11c34a48 */
  goto L_11c34a48;
L_11c34b31:;
  /* 11c34b31 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c34b33 je 0x11c34b38 */
  if (C.zf) goto L_11c34b38;
  /* 11c34b35 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c34b38:;
  /* 11c34b38 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c34b3b pop edi */
  EDI = (pop32());
  /* 11c34b3c pop esi */
  ESI = (pop32());
  /* 11c34b3d pop ebx */
  EBX = (pop32());
  /* 11c34b3e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11c34b40 pop ebp */
  EBP = (pop32());
  /* 11c34b41 ret  */
  ESPCHK(0x11c3498eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b42 @ 0x11c34b42 (306 bytes, 132 insns) */
void f_11c34b42(void) {
  FTRACE(0x11c34b42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34b42 push ecx */
  push32((uint32_t)(ECX));
  /* 11c34b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11c34b44 mov eax, dword ptr [0x11c56874] */
  EAX = (r32((uint32_t)(0x11c56874)));
  /* 11c34b49 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34b4a push ebp */
  push32((uint32_t)(EBP));
  /* 11c34b4b mov ebp, dword ptr [0x11c3d094] */
  EBP = (r32((uint32_t)(0x11c3d094)));
  /* 11c34b51 push esi */
  push32((uint32_t)(ESI));
  /* 11c34b52 push edi */
  push32((uint32_t)(EDI));
  /* 11c34b53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c34b55 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c34b57 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c34b59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34b5b jne 0x11c34b90 */
  if (!C.zf) goto L_11c34b90;
  /* 11c34b5d call ebp */
  call_ind((uint32_t)(EBP), 0x11c34b5fu);
  /* 11c34b5f mov esi, eax */
  ESI = (EAX);
  /* 11c34b61 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34b63 je 0x11c34b71 */
  if (C.zf) goto L_11c34b71;
  /* 11c34b65 mov dword ptr [0x11c56874], 1 */
  w32((uint32_t)(0x11c56874), (0x1u));
  /* 11c34b6f jmp 0x11c34b99 */
  goto L_11c34b99;
L_11c34b71:;
  /* 11c34b71 call dword ptr [0x11c3d098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d098))), 0x11c34b77u);
  /* 11c34b77 mov edi, eax */
  EDI = (EAX);
  /* 11c34b79 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34b7b je 0x11c34c6b */
  if (C.zf) goto L_11c34c6b;
  /* 11c34b81 mov dword ptr [0x11c56874], 2 */
  w32((uint32_t)(0x11c56874), (0x2u));
  /* 11c34b8b jmp 0x11c34c1f */
  goto L_11c34c1f;
L_11c34b90:;
  /* 11c34b90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34b93 jne 0x11c34c1a */
  if (!C.zf) goto L_11c34c1a;
L_11c34b99:;
  /* 11c34b99 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34b9b jne 0x11c34ba9 */
  if (!C.zf) goto L_11c34ba9;
  /* 11c34b9d call ebp */
  call_ind((uint32_t)(EBP), 0x11c34b9fu);
  /* 11c34b9f mov esi, eax */
  ESI = (EAX);
  /* 11c34ba1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34ba3 je 0x11c34c6b */
  if (C.zf) goto L_11c34c6b;
L_11c34ba9:;
  /* 11c34ba9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c34bac mov eax, esi */
  EAX = (ESI);
  /* 11c34bae je 0x11c34bbe */
  if (C.zf) goto L_11c34bbe;
L_11c34bb0:;
  /* 11c34bb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34bb1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34bb2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c34bb5 jne 0x11c34bb0 */
  if (!C.zf) goto L_11c34bb0;
  /* 11c34bb7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34bb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34bb9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c34bbc jne 0x11c34bb0 */
  if (!C.zf) goto L_11c34bb0;
L_11c34bbe:;
  /* 11c34bbe sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34bc0 mov edi, dword ptr [0x11c3d09c] */
  EDI = (r32((uint32_t)(0x11c3d09c)));
  /* 11c34bc6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c34bc8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34bcb push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bcc push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bcd push eax */
  push32((uint32_t)(EAX));
  /* 11c34bce push esi */
  push32((uint32_t)(ESI));
  /* 11c34bcf push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bd1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11c34bd5 call edi */
  call_ind((uint32_t)(EDI), 0x11c34bd7u);
  /* 11c34bd7 mov ebp, eax */
  EBP = (EAX);
  /* 11c34bd9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34bdb je 0x11c34c0f */
  if (C.zf) goto L_11c34c0f;
  /* 11c34bdd push ebp */
  push32((uint32_t)(EBP));
  /* 11c34bde call 0x11c344f2 */
  push32(0x11c34be3u); f_11c344f2();
  /* 11c34be3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34be5 pop ecx */
  ECX = (pop32());
  /* 11c34be6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c34bea je 0x11c34c0f */
  if (C.zf) goto L_11c34c0f;
  /* 11c34bec push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bed push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bee push ebp */
  push32((uint32_t)(EBP));
  /* 11c34bef push eax */
  push32((uint32_t)(EAX));
  /* 11c34bf0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11c34bf4 push esi */
  push32((uint32_t)(ESI));
  /* 11c34bf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34bf7 call edi */
  call_ind((uint32_t)(EDI), 0x11c34bf9u);
  /* 11c34bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34bfb jne 0x11c34c0b */
  if (!C.zf) goto L_11c34c0b;
  /* 11c34bfd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c34c01 call 0x11c3606c */
  push32(0x11c34c06u); f_11c3606c();
  /* 11c34c06 pop ecx */
  ECX = (pop32());
  /* 11c34c07 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11c34c0b:;
  /* 11c34c0b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11c34c0f:;
  /* 11c34c0f push esi */
  push32((uint32_t)(ESI));
  /* 11c34c10 call dword ptr [0x11c3d0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0a0))), 0x11c34c16u);
  /* 11c34c16 mov eax, ebx */
  EAX = (EBX);
  /* 11c34c18 jmp 0x11c34c6d */
  goto L_11c34c6d;
L_11c34c1a:;
  /* 11c34c1a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34c1d jne 0x11c34c6b */
  if (!C.zf) goto L_11c34c6b;
L_11c34c1f:;
  /* 11c34c1f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34c21 jne 0x11c34c2f */
  if (!C.zf) goto L_11c34c2f;
  /* 11c34c23 call dword ptr [0x11c3d098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d098))), 0x11c34c29u);
  /* 11c34c29 mov edi, eax */
  EDI = (EAX);
  /* 11c34c2b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34c2d je 0x11c34c6b */
  if (C.zf) goto L_11c34c6b;
L_11c34c2f:;
  /* 11c34c2f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34c31 mov eax, edi */
  EAX = (EDI);
  /* 11c34c33 je 0x11c34c3f */
  if (C.zf) goto L_11c34c3f;
L_11c34c35:;
  /* 11c34c35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34c36 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34c38 jne 0x11c34c35 */
  if (!C.zf) goto L_11c34c35;
  /* 11c34c3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34c3b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34c3d jne 0x11c34c35 */
  if (!C.zf) goto L_11c34c35;
L_11c34c3f:;
  /* 11c34c3f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34c41 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34c42 mov ebp, eax */
  EBP = (EAX);
  /* 11c34c44 push ebp */
  push32((uint32_t)(EBP));
  /* 11c34c45 call 0x11c344f2 */
  push32(0x11c34c4au); f_11c344f2();
  /* 11c34c4a mov esi, eax */
  ESI = (EAX);
  /* 11c34c4c pop ecx */
  ECX = (pop32());
  /* 11c34c4d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34c4f jne 0x11c34c55 */
  if (!C.zf) goto L_11c34c55;
  /* 11c34c51 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c34c53 jmp 0x11c34c60 */
  goto L_11c34c60;
L_11c34c55:;
  /* 11c34c55 push ebp */
  push32((uint32_t)(EBP));
  /* 11c34c56 push edi */
  push32((uint32_t)(EDI));
  /* 11c34c57 push esi */
  push32((uint32_t)(ESI));
  /* 11c34c58 call 0x11c37950 */
  push32(0x11c34c5du); f_11c37950();
  /* 11c34c5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c34c60:;
  /* 11c34c60 push edi */
  push32((uint32_t)(EDI));
  /* 11c34c61 call dword ptr [0x11c3d0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0a4))), 0x11c34c67u);
  /* 11c34c67 mov eax, esi */
  EAX = (ESI);
  /* 11c34c69 jmp 0x11c34c6d */
  goto L_11c34c6d;
L_11c34c6b:;
  /* 11c34c6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c34c6d:;
  /* 11c34c6d pop edi */
  EDI = (pop32());
  /* 11c34c6e pop esi */
  ESI = (pop32());
  /* 11c34c6f pop ebp */
  EBP = (pop32());
  /* 11c34c70 pop ebx */
  EBX = (pop32());
  /* 11c34c71 pop ecx */
  ECX = (pop32());
  /* 11c34c72 pop ecx */
  ECX = (pop32());
  /* 11c34c73 ret  */
  ESPCHK(0x11c34b42u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c74 @ 0x11c34c74 (45 bytes, 17 insns) */
void f_11c34c74(void) {
  FTRACE(0x11c34c74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34c74 push esi */
  push32((uint32_t)(ESI));
  /* 11c34c75 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c34c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34c7b and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c34c7e call dword ptr [0x11c3d0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0dc))), 0x11c34c84u);
  /* 11c34c84 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c34c89 jne 0x11c34c9f */
  if (!C.zf) goto L_11c34c9f;
  /* 11c34c8b mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11c34c8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c34c90 je 0x11c34c9f */
  if (C.zf) goto L_11c34c9f;
  /* 11c34c92 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34c94 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11c34c97 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11c34c99 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11c34c9c mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11c34c9f:;
  /* 11c34c9f pop esi */
  ESI = (pop32());
  /* 11c34ca0 ret  */
  ESPCHK(0x11c34c74u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca1 @ 0x11c34ca1 (328 bytes, 115 insns) */
void f_11c34ca1(void) {
  FTRACE(0x11c34ca1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34ca1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c34ca2 mov ebp, esp */
  EBP = (ESP);
  /* 11c34ca4 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11c34ca9 call 0x11c38b10 */
  push32(0x11c34caeu); f_11c38b10();
  /* 11c34cae lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11c34cb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34cb5 push eax */
  push32((uint32_t)(EAX));
  /* 11c34cb6 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11c34cc0 call dword ptr [0x11c3d08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d08c))), 0x11c34cc6u);
  /* 11c34cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34cc8 je 0x11c34ce4 */
  if (C.zf) goto L_11c34ce4;
  /* 11c34cca cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34cd1 jne 0x11c34ce4 */
  if (!C.zf) goto L_11c34ce4;
  /* 11c34cd3 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34cda jb 0x11c34ce4 */
  if (C.cf) goto L_11c34ce4;
  /* 11c34cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11c34cde pop eax */
  EAX = (pop32());
  /* 11c34cdf jmp 0x11c34de6 */
  goto L_11c34de6;
L_11c34ce4:;
  /* 11c34ce4 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c34cea push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11c34cef push eax */
  push32((uint32_t)(EAX));
  /* 11c34cf0 push 0x11c3d2fc */
  push32((uint32_t)(0x11c3d2fcu));
  /* 11c34cf5 call dword ptr [0x11c3d090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d090))), 0x11c34cfbu);
  /* 11c34cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34cfd je 0x11c34dd3 */
  if (C.zf) goto L_11c34dd3;
  /* 11c34d03 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c34d05 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11c34d0b cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d11 je 0x11c34d26 */
  if (C.zf) goto L_11c34d26;
L_11c34d13:;
  /* 11c34d13 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c34d15 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d17 jl 0x11c34d21 */
  if ((C.sf!=C.of)) goto L_11c34d21;
  /* 11c34d19 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d1b jg 0x11c34d21 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c34d21;
  /* 11c34d1d sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c34d1f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11c34d21:;
  /* 11c34d21 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c34d22 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d24 jne 0x11c34d13 */
  if (!C.zf) goto L_11c34d13;
L_11c34d26:;
  /* 11c34d26 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c34d2c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11c34d2e push eax */
  push32((uint32_t)(EAX));
  /* 11c34d2f push 0x11c3d2e4 */
  push32((uint32_t)(0x11c3d2e4u));
  /* 11c34d34 call 0x11c38ad0 */
  push32(0x11c34d39u); f_11c38ad0();
  /* 11c34d39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34d3e jne 0x11c34d48 */
  if (!C.zf) goto L_11c34d48;
  /* 11c34d40 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c34d46 jmp 0x11c34d91 */
  goto L_11c34d91;
L_11c34d48:;
  /* 11c34d48 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11c34d4e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c34d53 push eax */
  push32((uint32_t)(EAX));
  /* 11c34d54 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34d55 call dword ptr [0x11c3d0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0a8))), 0x11c34d5bu);
  /* 11c34d5b cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d61 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11c34d67 je 0x11c34d7c */
  if (C.zf) goto L_11c34d7c;
L_11c34d69:;
  /* 11c34d69 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c34d6b cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d6d jl 0x11c34d77 */
  if ((C.sf!=C.of)) goto L_11c34d77;
  /* 11c34d6f cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d71 jg 0x11c34d77 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c34d77;
  /* 11c34d73 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c34d75 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11c34d77:;
  /* 11c34d77 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c34d78 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34d7a jne 0x11c34d69 */
  if (!C.zf) goto L_11c34d69;
L_11c34d7c:;
  /* 11c34d7c lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11c34d82 push eax */
  push32((uint32_t)(EAX));
  /* 11c34d83 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c34d89 push eax */
  push32((uint32_t)(EAX));
  /* 11c34d8a call 0x11c38a50 */
  push32(0x11c34d8fu); f_11c38a50();
  /* 11c34d8f pop ecx */
  ECX = (pop32());
  /* 11c34d90 pop ecx */
  ECX = (pop32());
L_11c34d91:;
  /* 11c34d91 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34d93 je 0x11c34dd3 */
  if (C.zf) goto L_11c34dd3;
  /* 11c34d95 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11c34d97 push eax */
  push32((uint32_t)(EAX));
  /* 11c34d98 call 0x11c38990 */
  push32(0x11c34d9du); f_11c38990();
  /* 11c34d9d pop ecx */
  ECX = (pop32());
  /* 11c34d9e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34da0 pop ecx */
  ECX = (pop32());
  /* 11c34da1 je 0x11c34dd3 */
  if (C.zf) goto L_11c34dd3;
  /* 11c34da3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34da4 mov ecx, eax */
  ECX = (EAX);
  /* 11c34da6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34da8 je 0x11c34db8 */
  if (C.zf) goto L_11c34db8;
L_11c34daa:;
  /* 11c34daa cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34dad jne 0x11c34db3 */
  if (!C.zf) goto L_11c34db3;
  /* 11c34daf mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11c34db1 jmp 0x11c34db4 */
  goto L_11c34db4;
L_11c34db3:;
  /* 11c34db3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11c34db4:;
  /* 11c34db4 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34db6 jne 0x11c34daa */
  if (!C.zf) goto L_11c34daa;
L_11c34db8:;
  /* 11c34db8 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c34dba push ebx */
  push32((uint32_t)(EBX));
  /* 11c34dbb push eax */
  push32((uint32_t)(EAX));
  /* 11c34dbc call 0x11c38759 */
  push32(0x11c34dc1u); f_11c38759();
  /* 11c34dc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34dc4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34dc7 je 0x11c34de6 */
  if (C.zf) goto L_11c34de6;
  /* 11c34dc9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34dcc je 0x11c34de6 */
  if (C.zf) goto L_11c34de6;
  /* 11c34dce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34dd1 je 0x11c34de6 */
  if (C.zf) goto L_11c34de6;
L_11c34dd3:;
  /* 11c34dd3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c34dd6 push eax */
  push32((uint32_t)(EAX));
  /* 11c34dd7 call 0x11c34c74 */
  push32(0x11c34ddcu); f_11c34c74();
  /* 11c34ddc cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c34de0 pop ecx */
  ECX = (pop32());
  /* 11c34de1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34de3 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c34de6:;
  /* 11c34de6 pop ebx */
  EBX = (pop32());
  /* 11c34de7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c34de8 ret  */
  ESPCHK(0x11c34ca1u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de9 @ 0x11c34de9 (93 bytes, 30 insns) */
void f_11c34de9(void) {
  FTRACE(0x11c34de9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c34deb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34ded cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34df1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c34df6 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c34df9 push eax */
  push32((uint32_t)(EAX));
  /* 11c34dfa call dword ptr [0x11c3d084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d084))), 0x11c34e00u);
  /* 11c34e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34e02 mov dword ptr [0x11c57d40], eax */
  w32((uint32_t)(0x11c57d40), (EAX));
  /* 11c34e07 je 0x11c34e3f */
  if (C.zf) goto L_11c34e3f;
  /* 11c34e09 call 0x11c34ca1 */
  push32(0x11c34e0eu); f_11c34ca1();
  /* 11c34e0e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34e11 mov dword ptr [0x11c57d44], eax */
  w32((uint32_t)(0x11c57d44), (EAX));
  /* 11c34e16 jne 0x11c34e25 */
  if (!C.zf) goto L_11c34e25;
  /* 11c34e18 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11c34e1d call 0x11c36717 */
  push32(0x11c34e22u); f_11c36717();
  /* 11c34e22 pop ecx */
  ECX = (pop32());
  /* 11c34e23 jmp 0x11c34e2f */
  goto L_11c34e2f;
L_11c34e25:;
  /* 11c34e25 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34e28 jne 0x11c34e42 */
  if (!C.zf) goto L_11c34e42;
  /* 11c34e2a call 0x11c3725e */
  push32(0x11c34e2fu); f_11c3725e();
L_11c34e2f:;
  /* 11c34e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34e31 jne 0x11c34e42 */
  if (!C.zf) goto L_11c34e42;
  /* 11c34e33 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34e39 call dword ptr [0x11c3d088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d088))), 0x11c34e3fu);
L_11c34e3f:;
  /* 11c34e3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c34e41 ret  */
  ESPCHK(0x11c34de9u, _esp0);
  ESP += 4; return;
L_11c34e42:;
  /* 11c34e42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c34e44 pop eax */
  EAX = (pop32());
  /* 11c34e45 ret  */
  ESPCHK(0x11c34de9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e46 @ 0x11c34e46 (168 bytes, 56 insns) */
void f_11c34e46(void) {
  FTRACE(0x11c34e46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34e46 mov eax, dword ptr [0x11c57d44] */
  EAX = (r32((uint32_t)(0x11c57d44)));
  /* 11c34e4b push esi */
  push32((uint32_t)(ESI));
  /* 11c34e4c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34e4f push edi */
  push32((uint32_t)(EDI));
  /* 11c34e50 jne 0x11c34eb8 */
  if (!C.zf) goto L_11c34eb8;
  /* 11c34e52 push ebx */
  push32((uint32_t)(EBX));
  /* 11c34e53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c34e55 cmp dword ptr [0x11c57d34], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c57d34))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34e5b push ebp */
  push32((uint32_t)(EBP));
  /* 11c34e5c mov ebp, dword ptr [0x11c3d07c] */
  EBP = (r32((uint32_t)(0x11c3d07c)));
  /* 11c34e62 jle 0x11c34ea4 */
  if ((C.zf||C.sf!=C.of)) goto L_11c34ea4;
  /* 11c34e64 mov eax, dword ptr [0x11c57d38] */
  EAX = (r32((uint32_t)(0x11c57d38)));
  /* 11c34e69 mov edi, dword ptr [0x11c3d080] */
  EDI = (r32((uint32_t)(0x11c3d080)));
  /* 11c34e6f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11c34e72:;
  /* 11c34e72 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c34e77 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c34e7c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c34e7e call edi */
  call_ind((uint32_t)(EDI), 0x11c34e80u);
  /* 11c34e80 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c34e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34e87 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c34e89 call edi */
  call_ind((uint32_t)(EDI), 0x11c34e8bu);
  /* 11c34e8b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11c34e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34e90 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34e96 call ebp */
  call_ind((uint32_t)(EBP), 0x11c34e98u);
  /* 11c34e98 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34e9b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c34e9c cmp ebx, dword ptr [0x11c57d34] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c57d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34ea2 jl 0x11c34e72 */
  if ((C.sf!=C.of)) goto L_11c34e72;
L_11c34ea4:;
  /* 11c34ea4 push dword ptr [0x11c57d38] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d38))));
  /* 11c34eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34eac push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34eb2 call ebp */
  call_ind((uint32_t)(EBP), 0x11c34eb4u);
  /* 11c34eb4 pop ebp */
  EBP = (pop32());
  /* 11c34eb5 pop ebx */
  EBX = (pop32());
  /* 11c34eb6 jmp 0x11c34edf */
  goto L_11c34edf;
L_11c34eb8:;
  /* 11c34eb8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34ebb jne 0x11c34edf */
  if (!C.zf) goto L_11c34edf;
  /* 11c34ebd mov edi, 0x11c3fba8 */
  EDI = (0x11c3fba8u);
  /* 11c34ec2 mov esi, edi */
  ESI = (EDI);
L_11c34ec4:;
  /* 11c34ec4 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c34ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34ec9 je 0x11c34ed9 */
  if (C.zf) goto L_11c34ed9;
  /* 11c34ecb push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c34ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11c34ed3 call dword ptr [0x11c3d080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d080))), 0x11c34ed9u);
L_11c34ed9:;
  /* 11c34ed9 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11c34edb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34edd jne 0x11c34ec4 */
  if (!C.zf) goto L_11c34ec4;
L_11c34edf:;
  /* 11c34edf push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c34ee5 call dword ptr [0x11c3d088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d088))), 0x11c34eebu);
  /* 11c34eeb pop edi */
  EDI = (pop32());
  /* 11c34eec pop esi */
  ESI = (pop32());
  /* 11c34eed ret  */
  ESPCHK(0x11c34e46u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eee @ 0x11c34eee (57 bytes, 18 insns) */
void f_11c34eee(void) {
  FTRACE(0x11c34eeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34eee mov eax, dword ptr [0x11c56724] */
  EAX = (r32((uint32_t)(0x11c56724)));
  /* 11c34ef3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34ef6 je 0x11c34f05 */
  if (C.zf) goto L_11c34f05;
  /* 11c34ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34efa jne 0x11c34f26 */
  if (!C.zf) goto L_11c34f26;
  /* 11c34efc cmp dword ptr [0x11c56728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c56728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f03 jne 0x11c34f26 */
  if (!C.zf) goto L_11c34f26;
L_11c34f05:;
  /* 11c34f05 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11c34f0a call 0x11c34f27 */
  push32(0x11c34f0fu); f_11c34f27();
  /* 11c34f0f mov eax, dword ptr [0x11c56878] */
  EAX = (r32((uint32_t)(0x11c56878)));
  /* 11c34f14 pop ecx */
  ECX = (pop32());
  /* 11c34f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34f17 je 0x11c34f1b */
  if (C.zf) goto L_11c34f1b;
  /* 11c34f19 call eax */
  call_ind((uint32_t)(EAX), 0x11c34f1bu);
L_11c34f1b:;
  /* 11c34f1b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c34f20 call 0x11c34f27 */
  push32(0x11c34f25u); f_11c34f27();
  /* 11c34f25 pop ecx */
  ECX = (pop32());
L_11c34f26:;
  /* 11c34f26 ret  */
  ESPCHK(0x11c34eeeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f27 @ 0x11c34f27 (339 bytes, 100 insns) */
void f_11c34f27(void) {
  FTRACE(0x11c34f27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c34f27 push ebp */
  push32((uint32_t)(EBP));
  /* 11c34f28 mov ebp, esp */
  EBP = (ESP);
  /* 11c34f2a sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c34f33 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c34f35 mov eax, 0x11c3f668 */
  EAX = (0x11c3f668u);
L_11c34f3a:;
  /* 11c34f3a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f3c je 0x11c34f49 */
  if (C.zf) goto L_11c34f49;
  /* 11c34f3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34f41 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c34f42 cmp eax, 0x11c3f6f8 */
  { uint32_t _a=(EAX),_b=(0x11c3f6f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f47 jl 0x11c34f3a */
  if ((C.sf!=C.of)) goto L_11c34f3a;
L_11c34f49:;
  /* 11c34f49 push esi */
  push32((uint32_t)(ESI));
  /* 11c34f4a mov esi, ecx */
  ESI = (ECX);
  /* 11c34f4c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c34f4f cmp edx, dword ptr [esi + 0x11c3f668] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11c3f668))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f55 jne 0x11c35077 */
  if (!C.zf) goto L_11c35077;
  /* 11c34f5b mov eax, dword ptr [0x11c56724] */
  EAX = (r32((uint32_t)(0x11c56724)));
  /* 11c34f60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f63 je 0x11c35051 */
  if (C.zf) goto L_11c35051;
  /* 11c34f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34f6b jne 0x11c34f7a */
  if (!C.zf) goto L_11c34f7a;
  /* 11c34f6d cmp dword ptr [0x11c56728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c56728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f74 je 0x11c35051 */
  if (C.zf) goto L_11c35051;
L_11c34f7a:;
  /* 11c34f7a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34f80 je 0x11c35077 */
  if (C.zf) goto L_11c35077;
  /* 11c34f86 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c34f8c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c34f91 push eax */
  push32((uint32_t)(EAX));
  /* 11c34f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c34f94 call dword ptr [0x11c3d0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0a8))), 0x11c34f9au);
  /* 11c34f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c34f9c jne 0x11c34fb1 */
  if (!C.zf) goto L_11c34fb1;
  /* 11c34f9e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c34fa4 push 0x11c3d5ec */
  push32((uint32_t)(0x11c3d5ecu));
  /* 11c34fa9 push eax */
  push32((uint32_t)(EAX));
  /* 11c34faa call 0x11c35910 */
  push32(0x11c34fafu); f_11c35910();
  /* 11c34faf pop ecx */
  ECX = (pop32());
  /* 11c34fb0 pop ecx */
  ECX = (pop32());
L_11c34fb1:;
  /* 11c34fb1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c34fb7 push edi */
  push32((uint32_t)(EDI));
  /* 11c34fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11c34fb9 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11c34fbf call 0x11c35da0 */
  push32(0x11c34fc4u); f_11c35da0();
  /* 11c34fc4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c34fc5 pop ecx */
  ECX = (pop32());
  /* 11c34fc6 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c34fc9 jbe 0x11c34ff4 */
  if ((C.cf||C.zf)) goto L_11c34ff4;
  /* 11c34fcb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c34fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11c34fd2 call 0x11c35da0 */
  push32(0x11c34fd7u); f_11c35da0();
  /* 11c34fd7 mov edi, eax */
  EDI = (EAX);
  /* 11c34fd9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c34fdf sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c34fe2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c34fe4 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c34fe6 push 0x11c3d5e8 */
  push32((uint32_t)(0x11c3d5e8u));
  /* 11c34feb push edi */
  push32((uint32_t)(EDI));
  /* 11c34fec call 0x11c38bd0 */
  push32(0x11c34ff1u); f_11c38bd0();
  /* 11c34ff1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c34ff4:;
  /* 11c34ff4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c34ffa push 0x11c3d5cc */
  push32((uint32_t)(0x11c3d5ccu));
  /* 11c34fff push eax */
  push32((uint32_t)(EAX));
  /* 11c35000 call 0x11c35910 */
  push32(0x11c35005u); f_11c35910();
  /* 11c35005 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c3500b push edi */
  push32((uint32_t)(EDI));
  /* 11c3500c push eax */
  push32((uint32_t)(EAX));
  /* 11c3500d call 0x11c35920 */
  push32(0x11c35012u); f_11c35920();
  /* 11c35012 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c35018 push 0x11c3d5c8 */
  push32((uint32_t)(0x11c3d5c8u));
  /* 11c3501d push eax */
  push32((uint32_t)(EAX));
  /* 11c3501e call 0x11c35920 */
  push32(0x11c35023u); f_11c35920();
  /* 11c35023 push dword ptr [esi + 0x11c3f66c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11c3f66c))));
  /* 11c35029 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c3502f push eax */
  push32((uint32_t)(EAX));
  /* 11c35030 call 0x11c35920 */
  push32(0x11c35035u); f_11c35920();
  /* 11c35035 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11c3503a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c35040 push 0x11c3d5a0 */
  push32((uint32_t)(0x11c3d5a0u));
  /* 11c35045 push eax */
  push32((uint32_t)(EAX));
  /* 11c35046 call 0x11c38b3f */
  push32(0x11c3504bu); f_11c38b3f();
  /* 11c3504b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3504e pop edi */
  EDI = (pop32());
  /* 11c3504f jmp 0x11c35077 */
  goto L_11c35077;
L_11c35051:;
  /* 11c35051 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c35054 lea esi, [esi + 0x11c3f66c] */
  ESI = ((uint32_t)(ESI + 0x11c3f66c));
  /* 11c3505a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3505c push eax */
  push32((uint32_t)(EAX));
  /* 11c3505d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c3505f call 0x11c35da0 */
  push32(0x11c35064u); f_11c35da0();
  /* 11c35064 pop ecx */
  ECX = (pop32());
  /* 11c35065 push eax */
  push32((uint32_t)(EAX));
  /* 11c35066 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c35068 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11c3506a call dword ptr [0x11c3d0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0b8))), 0x11c35070u);
  /* 11c35070 push eax */
  push32((uint32_t)(EAX));
  /* 11c35071 call dword ptr [0x11c3d078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d078))), 0x11c35077u);
L_11c35077:;
  /* 11c35077 pop esi */
  ESI = (pop32());
  /* 11c35078 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35079 ret  */
  ESPCHK(0x11c34f27u, _esp0);
  ESP += 4; return;
}

/* FUN_1000507a @ 0x11c3507a (53 bytes, 25 insns) */
void f_11c3507a(void) {
  FTRACE(0x11c3507au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3507a push ebp */
  push32((uint32_t)(EBP));
  /* 11c3507b mov ebp, esp */
  EBP = (ESP);
  /* 11c3507d push ecx */
  push32((uint32_t)(ECX));
  /* 11c3507e push esi */
  push32((uint32_t)(ESI));
  /* 11c3507f wait  */
  /* wait (no observable integer/reg state) */
  /* 11c35080 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11c35083 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c35086 call 0x11c350c5 */
  push32(0x11c3508bu); f_11c350c5();
  /* 11c3508b mov esi, eax */
  ESI = (EAX);
  /* 11c3508d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35090 not eax */
  EAX = (~(EAX));
  /* 11c35092 and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11c35094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35097 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c3509a or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11c3509c push esi */
  push32((uint32_t)(ESI));
  /* 11c3509d call 0x11c35157 */
  push32(0x11c350a2u); f_11c35157();
  /* 11c350a2 pop ecx */
  ECX = (pop32());
  /* 11c350a3 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c350a6 pop ecx */
  ECX = (pop32());
  /* 11c350a7 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11c350aa mov eax, esi */
  EAX = (ESI);
  /* 11c350ac pop esi */
  ESI = (pop32());
  /* 11c350ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c350ae ret  */
  ESPCHK(0x11c3507au, _esp0);
  ESP += 4; return;
}

/* FUN_100050af @ 0x11c350af (22 bytes, 8 insns) */
void f_11c350af(void) {
  FTRACE(0x11c350afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c350af mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c350b3 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c350b8 push eax */
  push32((uint32_t)(EAX));
  /* 11c350b9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c350bd call 0x11c3507a */
  push32(0x11c350c2u); f_11c3507a();
  /* 11c350c2 pop ecx */
  ECX = (pop32());
  /* 11c350c3 pop ecx */
  ECX = (pop32());
  /* 11c350c4 ret  */
  ESPCHK(0x11c350afu, _esp0);
  ESP += 4; return;
}

/* FUN_100050c5 @ 0x11c350c5 (146 bytes, 58 insns) */
void f_11c350c5(void) {
  FTRACE(0x11c350c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c350c5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c350c6 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c350ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c350cc push ebp */
  push32((uint32_t)(EBP));
  /* 11c350cd test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c350d0 push edi */
  push32((uint32_t)(EDI));
  /* 11c350d1 je 0x11c350d6 */
  if (C.zf) goto L_11c350d6;
  /* 11c350d3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c350d5 pop eax */
  EAX = (pop32());
L_11c350d6:;
  /* 11c350d6 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11c350d9 je 0x11c350dd */
  if (C.zf) goto L_11c350dd;
  /* 11c350db or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11c350dd:;
  /* 11c350dd test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11c350e0 je 0x11c350e4 */
  if (C.zf) goto L_11c350e4;
  /* 11c350e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11c350e4:;
  /* 11c350e4 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11c350e7 je 0x11c350eb */
  if (C.zf) goto L_11c350eb;
  /* 11c350e9 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11c350eb:;
  /* 11c350eb test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11c350ee je 0x11c350f2 */
  if (C.zf) goto L_11c350f2;
  /* 11c350f0 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11c350f2:;
  /* 11c350f2 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11c350f5 je 0x11c350fc */
  if (C.zf) goto L_11c350fc;
  /* 11c350f7 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11c350fc:;
  /* 11c350fc movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11c350ff push esi */
  push32((uint32_t)(ESI));
  /* 11c35100 mov edx, ecx */
  EDX = (ECX);
  /* 11c35102 mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11c35107 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11c3510c and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11c3510e mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11c35113 je 0x11c35134 */
  if (C.zf) goto L_11c35134;
  /* 11c35115 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3511b je 0x11c35131 */
  if (C.zf) goto L_11c35131;
  /* 11c3511d cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35123 je 0x11c3512d */
  if (C.zf) goto L_11c3512d;
  /* 11c35125 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35127 jne 0x11c35134 */
  if (!C.zf) goto L_11c35134;
  /* 11c35129 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11c3512b jmp 0x11c35134 */
  goto L_11c35134;
L_11c3512d:;
  /* 11c3512d or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11c3512f jmp 0x11c35134 */
  goto L_11c35134;
L_11c35131:;
  /* 11c35131 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11c35134:;
  /* 11c35134 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c35136 pop esi */
  ESI = (pop32());
  /* 11c35137 je 0x11c35144 */
  if (C.zf) goto L_11c35144;
  /* 11c35139 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3513b jne 0x11c35149 */
  if (!C.zf) goto L_11c35149;
  /* 11c3513d or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11c35142 jmp 0x11c35149 */
  goto L_11c35149;
L_11c35144:;
  /* 11c35144 or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11c35149:;
  /* 11c35149 pop edi */
  EDI = (pop32());
  /* 11c3514a pop ebp */
  EBP = (pop32());
  /* 11c3514b test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11c3514e pop ebx */
  EBX = (pop32());
  /* 11c3514f je 0x11c35156 */
  if (C.zf) goto L_11c35156;
  /* 11c35151 or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11c35156:;
  /* 11c35156 ret  */
  ESPCHK(0x11c350c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005157 @ 0x11c35157 (137 bytes, 53 insns) */
void f_11c35157(void) {
  FTRACE(0x11c35157u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35157 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35158 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3515c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3515e push esi */
  push32((uint32_t)(ESI));
  /* 11c3515f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11c35162 je 0x11c35167 */
  if (C.zf) goto L_11c35167;
  /* 11c35164 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c35166 pop eax */
  EAX = (pop32());
L_11c35167:;
  /* 11c35167 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11c3516a je 0x11c3516e */
  if (C.zf) goto L_11c3516e;
  /* 11c3516c or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11c3516e:;
  /* 11c3516e test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11c35171 je 0x11c35175 */
  if (C.zf) goto L_11c35175;
  /* 11c35173 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11c35175:;
  /* 11c35175 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11c35178 je 0x11c3517c */
  if (C.zf) goto L_11c3517c;
  /* 11c3517a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_11c3517c:;
  /* 11c3517c test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c3517f je 0x11c35183 */
  if (C.zf) goto L_11c35183;
  /* 11c35181 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11c35183:;
  /* 11c35183 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11c35189 je 0x11c3518d */
  if (C.zf) goto L_11c3518d;
  /* 11c3518b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11c3518d:;
  /* 11c3518d mov ecx, ebx */
  ECX = (EBX);
  /* 11c3518f mov edx, 0x300 */
  EDX = (0x300u);
  /* 11c35194 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c35196 mov esi, 0x200 */
  ESI = (0x200u);
  /* 11c3519b je 0x11c351ba */
  if (C.zf) goto L_11c351ba;
  /* 11c3519d cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c351a3 je 0x11c351b7 */
  if (C.zf) goto L_11c351b7;
  /* 11c351a5 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c351a7 je 0x11c351b2 */
  if (C.zf) goto L_11c351b2;
  /* 11c351a9 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c351ab jne 0x11c351ba */
  if (!C.zf) goto L_11c351ba;
  /* 11c351ad or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11c351b0 jmp 0x11c351ba */
  goto L_11c351ba;
L_11c351b2:;
  /* 11c351b2 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11c351b5 jmp 0x11c351ba */
  goto L_11c351ba;
L_11c351b7:;
  /* 11c351b7 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11c351ba:;
  /* 11c351ba mov ecx, ebx */
  ECX = (EBX);
  /* 11c351bc and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c351c2 je 0x11c351d0 */
  if (C.zf) goto L_11c351d0;
  /* 11c351c4 cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c351ca jne 0x11c351d2 */
  if (!C.zf) goto L_11c351d2;
  /* 11c351cc or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c351ce jmp 0x11c351d2 */
  goto L_11c351d2;
L_11c351d0:;
  /* 11c351d0 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11c351d2:;
  /* 11c351d2 pop esi */
  ESI = (pop32());
  /* 11c351d3 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11c351d9 pop ebx */
  EBX = (pop32());
  /* 11c351da je 0x11c351df */
  if (C.zf) goto L_11c351df;
  /* 11c351dc or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_11c351df:;
  /* 11c351df ret  */
  ESPCHK(0x11c35157u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x11c351e0 (117 bytes, 46 insns) */
void f_11c351e0(void) {
  FTRACE(0x11c351e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c351e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c351e1 mov ebp, esp */
  EBP = (ESP);
  /* 11c351e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c351e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c351e7 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c351ea cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c351f0 ja 0x11c351fe */
  if ((!C.cf&&!C.zf)) goto L_11c351fe;
  /* 11c351f2 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c351f8 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11c351fc jmp 0x11c35250 */
  goto L_11c35250;
L_11c351fe:;
  /* 11c351fe mov ecx, eax */
  ECX = (EAX);
  /* 11c35200 push esi */
  push32((uint32_t)(ESI));
  /* 11c35201 mov esi, dword ptr [0x11c3f704] */
  ESI = (r32((uint32_t)(0x11c3f704)));
  /* 11c35207 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11c3520a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11c3520d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c35212 pop esi */
  ESI = (pop32());
  /* 11c35213 je 0x11c35223 */
  if (C.zf) goto L_11c35223;
  /* 11c35215 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11c35219 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11c3521c mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11c3521f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c35221 jmp 0x11c3522c */
  goto L_11c3522c;
L_11c35223:;
  /* 11c35223 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11c35227 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11c3522a push 1 */
  push32((uint32_t)(0x1u));
L_11c3522c:;
  /* 11c3522c pop eax */
  EAX = (pop32());
  /* 11c3522d lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11c35230 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c35232 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c35234 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c35236 push ecx */
  push32((uint32_t)(ECX));
  /* 11c35237 push eax */
  push32((uint32_t)(EAX));
  /* 11c35238 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c3523b push eax */
  push32((uint32_t)(EAX));
  /* 11c3523c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3523e call 0x11c38e8d */
  push32(0x11c35243u); f_11c38e8d();
  /* 11c35243 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c35248 jne 0x11c3524c */
  if (!C.zf) goto L_11c3524c;
  /* 11c3524a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3524b ret  */
  ESPCHK(0x11c351e0u, _esp0);
  ESP += 4; return;
L_11c3524c:;
  /* 11c3524c movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11c35250:;
  /* 11c35250 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c35253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35254 ret  */
  ESPCHK(0x11c351e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005255 @ 0x11c35255 (111 bytes, 44 insns) */
void f_11c35255(void) {
  FTRACE(0x11c35255u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35255 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35256 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c35258 cmp dword ptr [0x11c569e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c569e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3525e jne 0x11c35273 */
  if (!C.zf) goto L_11c35273;
  /* 11c35260 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c35264 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35267 jl 0x11c352c2 */
  if ((C.sf!=C.of)) goto L_11c352c2;
  /* 11c35269 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3526c jg 0x11c352c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c352c2;
  /* 11c3526e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35271 pop ebx */
  EBX = (pop32());
  /* 11c35272 ret  */
  ESPCHK(0x11c35255u, _esp0);
  ESP += 4; return;
L_11c35273:;
  /* 11c35273 push esi */
  push32((uint32_t)(ESI));
  /* 11c35274 mov esi, 0x11c56ad0 */
  ESI = (0x11c56ad0u);
  /* 11c35279 push edi */
  push32((uint32_t)(EDI));
  /* 11c3527a push esi */
  push32((uint32_t)(ESI));
  /* 11c3527b call dword ptr [0x11c3d070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d070))), 0x11c35281u);
  /* 11c35281 cmp dword ptr [0x11c56acc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c56acc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35287 mov edi, dword ptr [0x11c3d074] */
  EDI = (r32((uint32_t)(0x11c3d074)));
  /* 11c3528d je 0x11c3529d */
  if (C.zf) goto L_11c3529d;
  /* 11c3528f push esi */
  push32((uint32_t)(ESI));
  /* 11c35290 call edi */
  call_ind((uint32_t)(EDI), 0x11c35292u);
  /* 11c35292 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c35294 call 0x11c35ff6 */
  push32(0x11c35299u); f_11c35ff6();
  /* 11c35299 pop ecx */
  ECX = (pop32());
  /* 11c3529a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3529c pop ebx */
  EBX = (pop32());
L_11c3529d:;
  /* 11c3529d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c352a1 call 0x11c352c4 */
  push32(0x11c352a6u); f_11c352c4();
  /* 11c352a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c352a8 pop ecx */
  ECX = (pop32());
  /* 11c352a9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c352ad je 0x11c352b9 */
  if (C.zf) goto L_11c352b9;
  /* 11c352af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c352b1 call 0x11c36057 */
  push32(0x11c352b6u); f_11c36057();
  /* 11c352b6 pop ecx */
  ECX = (pop32());
  /* 11c352b7 jmp 0x11c352bc */
  goto L_11c352bc;
L_11c352b9:;
  /* 11c352b9 push esi */
  push32((uint32_t)(ESI));
  /* 11c352ba call edi */
  call_ind((uint32_t)(EDI), 0x11c352bcu);
L_11c352bc:;
  /* 11c352bc mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c352c0 pop edi */
  EDI = (pop32());
  /* 11c352c1 pop esi */
  ESI = (pop32());
L_11c352c2:;
  /* 11c352c2 pop ebx */
  EBX = (pop32());
  /* 11c352c3 ret  */
  ESPCHK(0x11c35255u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c4 @ 0x11c352c4 (203 bytes, 78 insns) */
void f_11c352c4(void) {
  FTRACE(0x11c352c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c352c4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c352c5 mov ebp, esp */
  EBP = (ESP);
  /* 11c352c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c352c8 cmp dword ptr [0x11c569e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c569e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c352cf push ebx */
  push32((uint32_t)(EBX));
  /* 11c352d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c352d1 push edi */
  push32((uint32_t)(EDI));
  /* 11c352d2 jne 0x11c352f1 */
  if (!C.zf) goto L_11c352f1;
  /* 11c352d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c352d7 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c352da jl 0x11c3538a */
  if ((C.sf!=C.of)) goto L_11c3538a;
  /* 11c352e0 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c352e3 jg 0x11c3538a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3538a;
  /* 11c352e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c352ec jmp 0x11c3538a */
  goto L_11c3538a;
L_11c352f1:;
  /* 11c352f1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c352f4 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11c352f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c352fb cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c352fd pop esi */
  ESI = (pop32());
  /* 11c352fe jge 0x11c35325 */
  if ((C.sf==C.of)) goto L_11c35325;
  /* 11c35300 cmp dword ptr [0x11c3f6f8], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35306 jle 0x11c35313 */
  if ((C.zf||C.sf!=C.of)) goto L_11c35313;
  /* 11c35308 push esi */
  push32((uint32_t)(ESI));
  /* 11c35309 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3530a call 0x11c351e0 */
  push32(0x11c3530fu); f_11c351e0();
  /* 11c3530f pop ecx */
  ECX = (pop32());
  /* 11c35310 pop ecx */
  ECX = (pop32());
  /* 11c35311 jmp 0x11c3531d */
  goto L_11c3531d;
L_11c35313:;
  /* 11c35313 mov eax, dword ptr [0x11c3f704] */
  EAX = (r32((uint32_t)(0x11c3f704)));
  /* 11c35318 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11c3531b and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c3531d:;
  /* 11c3531d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3531f jne 0x11c35325 */
  if (!C.zf) goto L_11c35325;
L_11c35321:;
  /* 11c35321 mov eax, ebx */
  EAX = (EBX);
  /* 11c35323 jmp 0x11c3538a */
  goto L_11c3538a;
L_11c35325:;
  /* 11c35325 mov edx, dword ptr [0x11c3f704] */
  EDX = (r32((uint32_t)(0x11c3f704)));
  /* 11c3532b mov eax, ebx */
  EAX = (EBX);
  /* 11c3532d sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c35330 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11c35333 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c35338 je 0x11c35349 */
  if (C.zf) goto L_11c35349;
  /* 11c3533a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11c3533e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c35340 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11c35343 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11c35346 pop eax */
  EAX = (pop32());
  /* 11c35347 jmp 0x11c35352 */
  goto L_11c35352;
L_11c35349:;
  /* 11c35349 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11c3534d mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11c35350 mov eax, esi */
  EAX = (ESI);
L_11c35352:;
  /* 11c35352 push esi */
  push32((uint32_t)(ESI));
  /* 11c35353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c35355 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11c35358 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c3535a push ecx */
  push32((uint32_t)(ECX));
  /* 11c3535b push eax */
  push32((uint32_t)(EAX));
  /* 11c3535c lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c3535f push eax */
  push32((uint32_t)(EAX));
  /* 11c35360 push edi */
  push32((uint32_t)(EDI));
  /* 11c35361 push dword ptr [0x11c569e8] */
  push32((uint32_t)(r32((uint32_t)(0x11c569e8))));
  /* 11c35367 call 0x11c38fd6 */
  push32(0x11c3536cu); f_11c38fd6();
  /* 11c3536c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3536f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c35371 je 0x11c35321 */
  if (C.zf) goto L_11c35321;
  /* 11c35373 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35375 jne 0x11c3537d */
  if (!C.zf) goto L_11c3537d;
  /* 11c35377 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c3537b jmp 0x11c3538a */
  goto L_11c3538a;
L_11c3537d:;
  /* 11c3537d movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11c35381 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c35385 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c35388 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11c3538a:;
  /* 11c3538a pop edi */
  EDI = (pop32());
  /* 11c3538b pop esi */
  ESI = (pop32());
  /* 11c3538c pop ebx */
  EBX = (pop32());
  /* 11c3538d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3538e ret  */
  ESPCHK(0x11c352c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000538f @ 0x11c3538f (73 bytes, 36 insns) */
void f_11c3538f(void) {
  FTRACE(0x11c3538fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3538f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c35393 push esi */
  push32((uint32_t)(ESI));
  /* 11c35394 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c35396 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c35397 pop ecx */
  ECX = (pop32());
  /* 11c35398 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c3539a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c3539c mov esi, eax */
  ESI = (EAX);
  /* 11c3539e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c353a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c353a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c353a5 pop ecx */
  ECX = (pop32());
  /* 11c353a6 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c353aa sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c353ac or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c353af shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c353b1 not edx */
  EDX = (~(EDX));
  /* 11c353b3 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11c353b6 jne 0x11c353d4 */
  if (!C.zf) goto L_11c353d4;
  /* 11c353b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c353b9 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c353bc jge 0x11c353cf */
  if ((C.sf==C.of)) goto L_11c353cf;
  /* 11c353be lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11c353c1:;
  /* 11c353c1 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c353c4 jne 0x11c353d4 */
  if (!C.zf) goto L_11c353d4;
  /* 11c353c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c353c7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c353ca cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c353cd jl 0x11c353c1 */
  if ((C.sf!=C.of)) goto L_11c353c1;
L_11c353cf:;
  /* 11c353cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11c353d1 pop eax */
  EAX = (pop32());
  /* 11c353d2 pop esi */
  ESI = (pop32());
  /* 11c353d3 ret  */
  ESPCHK(0x11c3538fu, _esp0);
  ESP += 4; return;
L_11c353d4:;
  /* 11c353d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c353d6 pop esi */
  ESI = (pop32());
  /* 11c353d7 ret  */
  ESPCHK(0x11c3538fu, _esp0);
  ESP += 4; return;
}

/* FUN_100053d8 @ 0x11c353d8 (86 bytes, 43 insns) */
void f_11c353d8(void) {
  FTRACE(0x11c353d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c353d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c353dc push ebx */
  push32((uint32_t)(EBX));
  /* 11c353dd push esi */
  push32((uint32_t)(ESI));
  /* 11c353de push edi */
  push32((uint32_t)(EDI));
  /* 11c353df push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c353e1 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c353e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c353e6 pop ecx */
  ECX = (pop32());
  /* 11c353e7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c353e9 mov esi, eax */
  ESI = (EAX);
  /* 11c353eb mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c353ef cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c353f0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c353f2 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11c353f5 push edi */
  push32((uint32_t)(EDI));
  /* 11c353f6 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c353f8 pop ecx */
  ECX = (pop32());
  /* 11c353f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c353fb pop eax */
  EAX = (pop32());
  /* 11c353fc sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c353fe shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c35400 push eax */
  push32((uint32_t)(EAX));
  /* 11c35401 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c35403 call 0x11c391fa */
  push32(0x11c35408u); f_11c391fa();
  /* 11c35408 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3540b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c3540c js 0x11c3542a */
  if (C.sf) goto L_11c3542a;
  /* 11c3540e lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_11c35411:;
  /* 11c35411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c35413 je 0x11c3542a */
  if (C.zf) goto L_11c3542a;
  /* 11c35415 push edi */
  push32((uint32_t)(EDI));
  /* 11c35416 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c35418 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c3541a call 0x11c391fa */
  push32(0x11c3541fu); f_11c391fa();
  /* 11c3541f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35422 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c35423 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35426 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c35428 jge 0x11c35411 */
  if ((C.sf==C.of)) goto L_11c35411;
L_11c3542a:;
  /* 11c3542a pop edi */
  EDI = (pop32());
  /* 11c3542b pop esi */
  ESI = (pop32());
  /* 11c3542c pop ebx */
  EBX = (pop32());
  /* 11c3542d ret  */
  ESPCHK(0x11c353d8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000542e @ 0x11c3542e (140 bytes, 71 insns) */
void f_11c3542e(void) {
  FTRACE(0x11c3542eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3542e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3542f mov ebp, esp */
  EBP = (ESP);
  /* 11c35431 push ecx */
  push32((uint32_t)(ECX));
  /* 11c35432 push ecx */
  push32((uint32_t)(ECX));
  /* 11c35433 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35436 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35437 push esi */
  push32((uint32_t)(ESI));
  /* 11c35438 push edi */
  push32((uint32_t)(EDI));
  /* 11c35439 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11c3543c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c3543e pop ecx */
  ECX = (pop32());
  /* 11c3543f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c35443 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 11c35446 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c35448 mov eax, ebx */
  EAX = (EBX);
  /* 11c3544a pop esi */
  ESI = (pop32());
  /* 11c3544b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c3544c idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c3544e push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c35450 mov ecx, eax */
  ECX = (EAX);
  /* 11c35452 mov eax, ebx */
  EAX = (EBX);
  /* 11c35454 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c35455 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c35457 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3545a pop esi */
  ESI = (pop32());
  /* 11c3545b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3545d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c35460 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11c35463 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c35466 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35468 pop edx */
  EDX = (pop32());
  /* 11c35469 mov ecx, esi */
  ECX = (ESI);
  /* 11c3546b shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c3546d test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 11c3546f je 0x11c35492 */
  if (C.zf) goto L_11c35492;
  /* 11c35471 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c35472 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35473 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c35476 call 0x11c3538f */
  push32(0x11c3547bu); f_11c3538f();
  /* 11c3547b pop ecx */
  ECX = (pop32());
  /* 11c3547c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3547e pop ecx */
  ECX = (pop32());
  /* 11c3547f jne 0x11c3548f */
  if (!C.zf) goto L_11c3548f;
  /* 11c35481 push edi */
  push32((uint32_t)(EDI));
  /* 11c35482 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c35485 call 0x11c353d8 */
  push32(0x11c3548au); f_11c353d8();
  /* 11c3548a pop ecx */
  ECX = (pop32());
  /* 11c3548b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3548e pop ecx */
  ECX = (pop32());
L_11c3548f:;
  /* 11c3548f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11c35492:;
  /* 11c35492 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c35495 mov ecx, esi */
  ECX = (ESI);
  /* 11c35497 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c35499 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c3549b pop ecx */
  ECX = (pop32());
  /* 11c3549c and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c3549e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c354a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c354a2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c354a4 jge 0x11c354b2 */
  if ((C.sf==C.of)) goto L_11c354b2;
  /* 11c354a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c354a9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c354ab lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11c354ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c354b0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11c354b2:;
  /* 11c354b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c354b5 pop edi */
  EDI = (pop32());
  /* 11c354b6 pop esi */
  ESI = (pop32());
  /* 11c354b7 pop ebx */
  EBX = (pop32());
  /* 11c354b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c354b9 ret  */
  ESPCHK(0x11c3542eu, _esp0);
  ESP += 4; return;
}

/* FUN_100054ba @ 0x11c354ba (27 bytes, 13 insns) */
void f_11c354ba(void) {
  FTRACE(0x11c354bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c354ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c354be mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c354c2 push esi */
  push32((uint32_t)(ESI));
  /* 11c354c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c354c5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c354c7 pop edx */
  EDX = (pop32());
L_11c354c8:;
  /* 11c354c8 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11c354ca mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 11c354cd add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c354d0 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c354d1 jne 0x11c354c8 */
  if (!C.zf) goto L_11c354c8;
  /* 11c354d3 pop esi */
  ESI = (pop32());
  /* 11c354d4 ret  */
  ESPCHK(0x11c354bau, _esp0);
  ESP += 4; return;
}

/* FUN_100054d5 @ 0x11c354d5 (12 bytes, 8 insns) */
void f_11c354d5(void) {
  FTRACE(0x11c354d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c354d5 push edi */
  push32((uint32_t)(EDI));
  /* 11c354d6 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c354da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c354dc stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c354dd stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c354de stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c354df pop edi */
  EDI = (pop32());
  /* 11c354e0 ret  */
  ESPCHK(0x11c354d5u, _esp0);
  ESP += 4; return;
}

