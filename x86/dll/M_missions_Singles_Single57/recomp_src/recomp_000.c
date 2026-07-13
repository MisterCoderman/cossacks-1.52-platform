#include "recomp.h"

/* OnInit @ 0x11971005 (5 bytes, 1 insns) */
void f_11971005(void) {
  FTRACE(0x11971005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11971005 jmp 0x11971030 */
  f_11971030(); return;
}

/* thunk_FUN_10002460 @ 0x1197100a (5 bytes, 1 insns) */
void f_1197100a(void) {
  FTRACE(0x1197100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197100a jmp 0x11972460 */
  f_11972460(); return;
}

/* ProcessScenary @ 0x1197100f (5 bytes, 1 insns) */
void f_1197100f(void) {
  FTRACE(0x1197100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197100f jmp 0x119724c0 */
  f_119724c0(); return;
}

/* FUN_10001030 @ 0x11971030 (4130 bytes, 1086 insns) */
void f_11971030(void) {
  FTRACE(0x11971030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11971030 push ebp */
  push32((uint32_t)(EBP));
  /* 11971031 mov ebp, esp */
  EBP = (ESP);
  /* 11971033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11971036 push ebx */
  push32((uint32_t)(EBX));
  /* 11971037 push esi */
  push32((uint32_t)(ESI));
  /* 11971038 push edi */
  push32((uint32_t)(EDI));
  /* 11971039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1197103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11971041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11971046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11971048 mov esi, esp */
  ESI = (ESP);
  /* 1197104a push 0x1199e48c */
  push32((uint32_t)(0x1199e48cu));
  /* 1197104f push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 11971054 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197105au);
  /* 1197105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197105f call 0x11976460 */
  push32(0x11971064u); f_11976460();
  /* 11971064 mov esi, esp */
  ESI = (ESP);
  /* 11971066 push 0x1199e484 */
  push32((uint32_t)(0x1199e484u));
  /* 1197106b push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 11971070 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971076u);
  /* 11971076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197107b call 0x11976460 */
  push32(0x11971080u); f_11976460();
  /* 11971080 mov esi, esp */
  ESI = (ESP);
  /* 11971082 push 0x1199e478 */
  push32((uint32_t)(0x1199e478u));
  /* 11971087 push 0x119a3500 */
  push32((uint32_t)(0x119a3500u));
  /* 1197108c call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971092u);
  /* 11971092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971097 call 0x11976460 */
  push32(0x1197109cu); f_11976460();
  /* 1197109c mov esi, esp */
  ESI = (ESP);
  /* 1197109e push 0x1199e46c */
  push32((uint32_t)(0x1199e46cu));
  /* 119710a3 push 0x119a34f8 */
  push32((uint32_t)(0x119a34f8u));
  /* 119710a8 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119710aeu);
  /* 119710ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119710b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119710b3 call 0x11976460 */
  push32(0x119710b8u); f_11976460();
  /* 119710b8 mov esi, esp */
  ESI = (ESP);
  /* 119710ba push 0x1199e460 */
  push32((uint32_t)(0x1199e460u));
  /* 119710bf push 0x119a34f0 */
  push32((uint32_t)(0x119a34f0u));
  /* 119710c4 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119710cau);
  /* 119710ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119710cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119710cf call 0x11976460 */
  push32(0x119710d4u); f_11976460();
  /* 119710d4 mov esi, esp */
  ESI = (ESP);
  /* 119710d6 push 0x1199e454 */
  push32((uint32_t)(0x1199e454u));
  /* 119710db push 0x119a34e8 */
  push32((uint32_t)(0x119a34e8u));
  /* 119710e0 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119710e6u);
  /* 119710e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119710e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119710eb call 0x11976460 */
  push32(0x119710f0u); f_11976460();
  /* 119710f0 mov esi, esp */
  ESI = (ESP);
  /* 119710f2 push 0x1199e448 */
  push32((uint32_t)(0x1199e448u));
  /* 119710f7 push 0x119a34e0 */
  push32((uint32_t)(0x119a34e0u));
  /* 119710fc call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971102u);
  /* 11971102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971107 call 0x11976460 */
  push32(0x1197110cu); f_11976460();
  /* 1197110c mov esi, esp */
  ESI = (ESP);
  /* 1197110e push 0x1199e43c */
  push32((uint32_t)(0x1199e43cu));
  /* 11971113 push 0x119a3520 */
  push32((uint32_t)(0x119a3520u));
  /* 11971118 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197111eu);
  /* 1197111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971123 call 0x11976460 */
  push32(0x11971128u); f_11976460();
  /* 11971128 mov esi, esp */
  ESI = (ESP);
  /* 1197112a push 0x1199e430 */
  push32((uint32_t)(0x1199e430u));
  /* 1197112f push 0x119a3518 */
  push32((uint32_t)(0x119a3518u));
  /* 11971134 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197113au);
  /* 1197113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197113f call 0x11976460 */
  push32(0x11971144u); f_11976460();
  /* 11971144 mov esi, esp */
  ESI = (ESP);
  /* 11971146 push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 1197114b push 0x119a3510 */
  push32((uint32_t)(0x119a3510u));
  /* 11971150 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971156u);
  /* 11971156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197115b call 0x11976460 */
  push32(0x11971160u); f_11976460();
  /* 11971160 mov esi, esp */
  ESI = (ESP);
  /* 11971162 push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 11971167 push 0x119a3508 */
  push32((uint32_t)(0x119a3508u));
  /* 1197116c call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971172u);
  /* 11971172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971177 call 0x11976460 */
  push32(0x1197117cu); f_11976460();
  /* 1197117c mov esi, esp */
  ESI = (ESP);
  /* 1197117e push 0x1199e410 */
  push32((uint32_t)(0x1199e410u));
  /* 11971183 push 0x119a3730 */
  push32((uint32_t)(0x119a3730u));
  /* 11971188 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197118eu);
  /* 1197118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971193 call 0x11976460 */
  push32(0x11971198u); f_11976460();
  /* 11971198 mov esi, esp */
  ESI = (ESP);
  /* 1197119a push 0x1199e408 */
  push32((uint32_t)(0x1199e408u));
  /* 1197119f push 0x119a3648 */
  push32((uint32_t)(0x119a3648u));
  /* 119711a4 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119711aau);
  /* 119711aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119711ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119711af call 0x11976460 */
  push32(0x119711b4u); f_11976460();
  /* 119711b4 mov esi, esp */
  ESI = (ESP);
  /* 119711b6 push 0x1199e400 */
  push32((uint32_t)(0x1199e400u));
  /* 119711bb push 0x119a3650 */
  push32((uint32_t)(0x119a3650u));
  /* 119711c0 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119711c6u);
  /* 119711c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119711c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119711cb call 0x11976460 */
  push32(0x119711d0u); f_11976460();
  /* 119711d0 mov esi, esp */
  ESI = (ESP);
  /* 119711d2 push 0x1199e3f8 */
  push32((uint32_t)(0x1199e3f8u));
  /* 119711d7 push 0x119a3658 */
  push32((uint32_t)(0x119a3658u));
  /* 119711dc call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119711e2u);
  /* 119711e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119711e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119711e7 call 0x11976460 */
  push32(0x119711ecu); f_11976460();
  /* 119711ec mov esi, esp */
  ESI = (ESP);
  /* 119711ee push 0x1199e3f0 */
  push32((uint32_t)(0x1199e3f0u));
  /* 119711f3 push 0x119a3660 */
  push32((uint32_t)(0x119a3660u));
  /* 119711f8 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119711feu);
  /* 119711fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971203 call 0x11976460 */
  push32(0x11971208u); f_11976460();
  /* 11971208 mov esi, esp */
  ESI = (ESP);
  /* 1197120a push 0x1199e3e8 */
  push32((uint32_t)(0x1199e3e8u));
  /* 1197120f push 0x119a3608 */
  push32((uint32_t)(0x119a3608u));
  /* 11971214 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197121au);
  /* 1197121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197121f call 0x11976460 */
  push32(0x11971224u); f_11976460();
  /* 11971224 mov esi, esp */
  ESI = (ESP);
  /* 11971226 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197122b push 0x119a3498 */
  push32((uint32_t)(0x119a3498u));
  /* 11971230 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971236u);
  /* 11971236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197123b call 0x11976460 */
  push32(0x11971240u); f_11976460();
  /* 11971240 mov esi, esp */
  ESI = (ESP);
  /* 11971242 push 0x1199e3d8 */
  push32((uint32_t)(0x1199e3d8u));
  /* 11971247 push 0x119a34a0 */
  push32((uint32_t)(0x119a34a0u));
  /* 1197124c call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971252u);
  /* 11971252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971257 call 0x11976460 */
  push32(0x1197125cu); f_11976460();
  /* 1197125c mov esi, esp */
  ESI = (ESP);
  /* 1197125e push 0x1199e3cc */
  push32((uint32_t)(0x1199e3ccu));
  /* 11971263 push 0x119a3740 */
  push32((uint32_t)(0x119a3740u));
  /* 11971268 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197126eu);
  /* 1197126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971273 call 0x11976460 */
  push32(0x11971278u); f_11976460();
  /* 11971278 mov esi, esp */
  ESI = (ESP);
  /* 1197127a push 0x1199e3c0 */
  push32((uint32_t)(0x1199e3c0u));
  /* 1197127f push 0x119a3738 */
  push32((uint32_t)(0x119a3738u));
  /* 11971284 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197128au);
  /* 1197128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197128f call 0x11976460 */
  push32(0x11971294u); f_11976460();
  /* 11971294 mov esi, esp */
  ESI = (ESP);
  /* 11971296 push 0x1199e3b4 */
  push32((uint32_t)(0x1199e3b4u));
  /* 1197129b push 0x119a3750 */
  push32((uint32_t)(0x119a3750u));
  /* 119712a0 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119712a6u);
  /* 119712a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119712a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119712ab call 0x11976460 */
  push32(0x119712b0u); f_11976460();
  /* 119712b0 mov esi, esp */
  ESI = (ESP);
  /* 119712b2 push 0x1199e3a8 */
  push32((uint32_t)(0x1199e3a8u));
  /* 119712b7 push 0x119a3748 */
  push32((uint32_t)(0x119a3748u));
  /* 119712bc call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119712c2u);
  /* 119712c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119712c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119712c7 call 0x11976460 */
  push32(0x119712ccu); f_11976460();
  /* 119712cc mov esi, esp */
  ESI = (ESP);
  /* 119712ce push 0x1199e3a0 */
  push32((uint32_t)(0x1199e3a0u));
  /* 119712d3 push 0x119a3540 */
  push32((uint32_t)(0x119a3540u));
  /* 119712d8 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119712deu);
  /* 119712de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119712e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119712e3 call 0x11976460 */
  push32(0x119712e8u); f_11976460();
  /* 119712e8 mov esi, esp */
  ESI = (ESP);
  /* 119712ea push 0x1199e398 */
  push32((uint32_t)(0x1199e398u));
  /* 119712ef push 0x119a3538 */
  push32((uint32_t)(0x119a3538u));
  /* 119712f4 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119712fau);
  /* 119712fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119712fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119712ff call 0x11976460 */
  push32(0x11971304u); f_11976460();
  /* 11971304 mov esi, esp */
  ESI = (ESP);
  /* 11971306 push 0x1199e390 */
  push32((uint32_t)(0x1199e390u));
  /* 1197130b push 0x119a3688 */
  push32((uint32_t)(0x119a3688u));
  /* 11971310 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971316u);
  /* 11971316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197131b call 0x11976460 */
  push32(0x11971320u); f_11976460();
  /* 11971320 mov esi, esp */
  ESI = (ESP);
  /* 11971322 push 0x1199e388 */
  push32((uint32_t)(0x1199e388u));
  /* 11971327 push 0x119a3690 */
  push32((uint32_t)(0x119a3690u));
  /* 1197132c call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971332u);
  /* 11971332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971337 call 0x11976460 */
  push32(0x1197133cu); f_11976460();
  /* 1197133c mov esi, esp */
  ESI = (ESP);
  /* 1197133e push 0x1199e380 */
  push32((uint32_t)(0x1199e380u));
  /* 11971343 push 0x119a3610 */
  push32((uint32_t)(0x119a3610u));
  /* 11971348 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197134eu);
  /* 1197134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971353 call 0x11976460 */
  push32(0x11971358u); f_11976460();
  /* 11971358 mov esi, esp */
  ESI = (ESP);
  /* 1197135a push 0x1199e378 */
  push32((uint32_t)(0x1199e378u));
  /* 1197135f push 0x119a3618 */
  push32((uint32_t)(0x119a3618u));
  /* 11971364 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x1197136au);
  /* 1197136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197136f call 0x11976460 */
  push32(0x11971374u); f_11976460();
  /* 11971374 mov esi, esp */
  ESI = (ESP);
  /* 11971376 push 0x1199e370 */
  push32((uint32_t)(0x1199e370u));
  /* 1197137b push 0x119a3620 */
  push32((uint32_t)(0x119a3620u));
  /* 11971380 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971386u);
  /* 11971386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197138b call 0x11976460 */
  push32(0x11971390u); f_11976460();
  /* 11971390 mov esi, esp */
  ESI = (ESP);
  /* 11971392 push 0x1199e368 */
  push32((uint32_t)(0x1199e368u));
  /* 11971397 push 0x119a3628 */
  push32((uint32_t)(0x119a3628u));
  /* 1197139c call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119713a2u);
  /* 119713a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119713a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119713a7 call 0x11976460 */
  push32(0x119713acu); f_11976460();
  /* 119713ac mov esi, esp */
  ESI = (ESP);
  /* 119713ae push 0x1199e360 */
  push32((uint32_t)(0x1199e360u));
  /* 119713b3 push 0x119a3478 */
  push32((uint32_t)(0x119a3478u));
  /* 119713b8 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119713beu);
  /* 119713be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119713c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119713c3 call 0x11976460 */
  push32(0x119713c8u); f_11976460();
  /* 119713c8 mov esi, esp */
  ESI = (ESP);
  /* 119713ca push 0x1199e358 */
  push32((uint32_t)(0x1199e358u));
  /* 119713cf push 0x119a3480 */
  push32((uint32_t)(0x119a3480u));
  /* 119713d4 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119713dau);
  /* 119713da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119713dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119713df call 0x11976460 */
  push32(0x119713e4u); f_11976460();
  /* 119713e4 mov esi, esp */
  ESI = (ESP);
  /* 119713e6 push 0x1199e350 */
  push32((uint32_t)(0x1199e350u));
  /* 119713eb push 0x119a3488 */
  push32((uint32_t)(0x119a3488u));
  /* 119713f0 call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x119713f6u);
  /* 119713f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119713f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119713fb call 0x11976460 */
  push32(0x11971400u); f_11976460();
  /* 11971400 mov esi, esp */
  ESI = (ESP);
  /* 11971402 push 0x1199e348 */
  push32((uint32_t)(0x1199e348u));
  /* 11971407 push 0x119a3490 */
  push32((uint32_t)(0x119a3490u));
  /* 1197140c call dword ptr [0x119a64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ec))), 0x11971412u);
  /* 11971412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971417 call 0x11976460 */
  push32(0x1197141cu); f_11976460();
  /* 1197141c mov esi, esp */
  ESI = (ESP);
  /* 1197141e push 0x1199e340 */
  push32((uint32_t)(0x1199e340u));
  /* 11971423 push 0x119a3680 */
  push32((uint32_t)(0x119a3680u));
  /* 11971428 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197142eu);
  /* 1197142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971433 call 0x11976460 */
  push32(0x11971438u); f_11976460();
  /* 11971438 mov esi, esp */
  ESI = (ESP);
  /* 1197143a push 0x1199e334 */
  push32((uint32_t)(0x1199e334u));
  /* 1197143f push 0x119a3728 */
  push32((uint32_t)(0x119a3728u));
  /* 11971444 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197144au);
  /* 1197144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197144f call 0x11976460 */
  push32(0x11971454u); f_11976460();
  /* 11971454 mov esi, esp */
  ESI = (ESP);
  /* 11971456 push 0x1199e32c */
  push32((uint32_t)(0x1199e32cu));
  /* 1197145b push 0x119a3670 */
  push32((uint32_t)(0x119a3670u));
  /* 11971460 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971466u);
  /* 11971466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197146b call 0x11976460 */
  push32(0x11971470u); f_11976460();
  /* 11971470 mov esi, esp */
  ESI = (ESP);
  /* 11971472 push 0x1199e320 */
  push32((uint32_t)(0x1199e320u));
  /* 11971477 push 0x119a3758 */
  push32((uint32_t)(0x119a3758u));
  /* 1197147c call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971482u);
  /* 11971482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971487 call 0x11976460 */
  push32(0x1197148cu); f_11976460();
  /* 1197148c mov esi, esp */
  ESI = (ESP);
  /* 1197148e push 0x1199e314 */
  push32((uint32_t)(0x1199e314u));
  /* 11971493 push 0x119a3760 */
  push32((uint32_t)(0x119a3760u));
  /* 11971498 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197149eu);
  /* 1197149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119714a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119714a3 call 0x11976460 */
  push32(0x119714a8u); f_11976460();
  /* 119714a8 mov esi, esp */
  ESI = (ESP);
  /* 119714aa push 0x1199e30c */
  push32((uint32_t)(0x1199e30cu));
  /* 119714af push 0x119a3678 */
  push32((uint32_t)(0x119a3678u));
  /* 119714b4 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119714bau);
  /* 119714ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119714bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119714bf call 0x11976460 */
  push32(0x119714c4u); f_11976460();
  /* 119714c4 mov esi, esp */
  ESI = (ESP);
  /* 119714c6 push 0x1199e300 */
  push32((uint32_t)(0x1199e300u));
  /* 119714cb push 0x119a3768 */
  push32((uint32_t)(0x119a3768u));
  /* 119714d0 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119714d6u);
  /* 119714d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119714d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119714db call 0x11976460 */
  push32(0x119714e0u); f_11976460();
  /* 119714e0 mov esi, esp */
  ESI = (ESP);
  /* 119714e2 push 0x1199e2f4 */
  push32((uint32_t)(0x1199e2f4u));
  /* 119714e7 push 0x119a3770 */
  push32((uint32_t)(0x119a3770u));
  /* 119714ec call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119714f2u);
  /* 119714f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119714f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119714f7 call 0x11976460 */
  push32(0x119714fcu); f_11976460();
  /* 119714fc mov esi, esp */
  ESI = (ESP);
  /* 119714fe push 0x1199e2e8 */
  push32((uint32_t)(0x1199e2e8u));
  /* 11971503 push 0x119a36b0 */
  push32((uint32_t)(0x119a36b0u));
  /* 11971508 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197150eu);
  /* 1197150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971513 call 0x11976460 */
  push32(0x11971518u); f_11976460();
  /* 11971518 mov esi, esp */
  ESI = (ESP);
  /* 1197151a push 0x1199e2dc */
  push32((uint32_t)(0x1199e2dcu));
  /* 1197151f push 0x119a36b8 */
  push32((uint32_t)(0x119a36b8u));
  /* 11971524 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197152au);
  /* 1197152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197152f call 0x11976460 */
  push32(0x11971534u); f_11976460();
  /* 11971534 mov esi, esp */
  ESI = (ESP);
  /* 11971536 push 0x1199e2d0 */
  push32((uint32_t)(0x1199e2d0u));
  /* 1197153b push 0x119a36a0 */
  push32((uint32_t)(0x119a36a0u));
  /* 11971540 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971546u);
  /* 11971546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197154b call 0x11976460 */
  push32(0x11971550u); f_11976460();
  /* 11971550 mov esi, esp */
  ESI = (ESP);
  /* 11971552 push 0x1199e2c4 */
  push32((uint32_t)(0x1199e2c4u));
  /* 11971557 push 0x119a36a8 */
  push32((uint32_t)(0x119a36a8u));
  /* 1197155c call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971562u);
  /* 11971562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971567 call 0x11976460 */
  push32(0x1197156cu); f_11976460();
  /* 1197156c mov esi, esp */
  ESI = (ESP);
  /* 1197156e push 0x1199e2b8 */
  push32((uint32_t)(0x1199e2b8u));
  /* 11971573 push 0x119a36d0 */
  push32((uint32_t)(0x119a36d0u));
  /* 11971578 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197157eu);
  /* 1197157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971583 call 0x11976460 */
  push32(0x11971588u); f_11976460();
  /* 11971588 mov esi, esp */
  ESI = (ESP);
  /* 1197158a push 0x1199e2ac */
  push32((uint32_t)(0x1199e2acu));
  /* 1197158f push 0x119a36d8 */
  push32((uint32_t)(0x119a36d8u));
  /* 11971594 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197159au);
  /* 1197159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197159f call 0x11976460 */
  push32(0x119715a4u); f_11976460();
  /* 119715a4 mov esi, esp */
  ESI = (ESP);
  /* 119715a6 push 0x1199e2a0 */
  push32((uint32_t)(0x1199e2a0u));
  /* 119715ab push 0x119a36c0 */
  push32((uint32_t)(0x119a36c0u));
  /* 119715b0 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119715b6u);
  /* 119715b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119715b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119715bb call 0x11976460 */
  push32(0x119715c0u); f_11976460();
  /* 119715c0 mov esi, esp */
  ESI = (ESP);
  /* 119715c2 push 0x1199e294 */
  push32((uint32_t)(0x1199e294u));
  /* 119715c7 push 0x119a36c8 */
  push32((uint32_t)(0x119a36c8u));
  /* 119715cc call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119715d2u);
  /* 119715d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119715d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119715d7 call 0x11976460 */
  push32(0x119715dcu); f_11976460();
  /* 119715dc mov esi, esp */
  ESI = (ESP);
  /* 119715de push 0x1199e288 */
  push32((uint32_t)(0x1199e288u));
  /* 119715e3 push 0x119a36e0 */
  push32((uint32_t)(0x119a36e0u));
  /* 119715e8 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119715eeu);
  /* 119715ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119715f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119715f3 call 0x11976460 */
  push32(0x119715f8u); f_11976460();
  /* 119715f8 mov esi, esp */
  ESI = (ESP);
  /* 119715fa push 0x1199e27c */
  push32((uint32_t)(0x1199e27cu));
  /* 119715ff push 0x119a3788 */
  push32((uint32_t)(0x119a3788u));
  /* 11971604 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197160au);
  /* 1197160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197160f call 0x11976460 */
  push32(0x11971614u); f_11976460();
  /* 11971614 mov esi, esp */
  ESI = (ESP);
  /* 11971616 push 0x1199e270 */
  push32((uint32_t)(0x1199e270u));
  /* 1197161b push 0x119a3780 */
  push32((uint32_t)(0x119a3780u));
  /* 11971620 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971626u);
  /* 11971626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197162b call 0x11976460 */
  push32(0x11971630u); f_11976460();
  /* 11971630 mov esi, esp */
  ESI = (ESP);
  /* 11971632 push 0x1199e264 */
  push32((uint32_t)(0x1199e264u));
  /* 11971637 push 0x119a3778 */
  push32((uint32_t)(0x119a3778u));
  /* 1197163c call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971642u);
  /* 11971642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971647 call 0x11976460 */
  push32(0x1197164cu); f_11976460();
  /* 1197164c mov esi, esp */
  ESI = (ESP);
  /* 1197164e push 0x1199e258 */
  push32((uint32_t)(0x1199e258u));
  /* 11971653 push 0x119a35e0 */
  push32((uint32_t)(0x119a35e0u));
  /* 11971658 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197165eu);
  /* 1197165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971663 call 0x11976460 */
  push32(0x11971668u); f_11976460();
  /* 11971668 mov esi, esp */
  ESI = (ESP);
  /* 1197166a push 0x1199e24c */
  push32((uint32_t)(0x1199e24cu));
  /* 1197166f push 0x119a35e8 */
  push32((uint32_t)(0x119a35e8u));
  /* 11971674 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x1197167au);
  /* 1197167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197167f call 0x11976460 */
  push32(0x11971684u); f_11976460();
  /* 11971684 mov esi, esp */
  ESI = (ESP);
  /* 11971686 push 0x1199e244 */
  push32((uint32_t)(0x1199e244u));
  /* 1197168b push 0x119a3630 */
  push32((uint32_t)(0x119a3630u));
  /* 11971690 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971696u);
  /* 11971696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197169b call 0x11976460 */
  push32(0x119716a0u); f_11976460();
  /* 119716a0 mov esi, esp */
  ESI = (ESP);
  /* 119716a2 push 0x1199e23c */
  push32((uint32_t)(0x1199e23cu));
  /* 119716a7 push 0x119a3638 */
  push32((uint32_t)(0x119a3638u));
  /* 119716ac call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119716b2u);
  /* 119716b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119716b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119716b7 call 0x11976460 */
  push32(0x119716bcu); f_11976460();
  /* 119716bc mov esi, esp */
  ESI = (ESP);
  /* 119716be push 0x1199e230 */
  push32((uint32_t)(0x1199e230u));
  /* 119716c3 push 0x119a3418 */
  push32((uint32_t)(0x119a3418u));
  /* 119716c8 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119716ceu);
  /* 119716ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119716d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119716d3 call 0x11976460 */
  push32(0x119716d8u); f_11976460();
  /* 119716d8 mov esi, esp */
  ESI = (ESP);
  /* 119716da push 0x1199e224 */
  push32((uint32_t)(0x1199e224u));
  /* 119716df push 0x119a3420 */
  push32((uint32_t)(0x119a3420u));
  /* 119716e4 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x119716eau);
  /* 119716ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119716ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119716ef call 0x11976460 */
  push32(0x119716f4u); f_11976460();
  /* 119716f4 mov esi, esp */
  ESI = (ESP);
  /* 119716f6 push 0x1199e218 */
  push32((uint32_t)(0x1199e218u));
  /* 119716fb push 0x119a3428 */
  push32((uint32_t)(0x119a3428u));
  /* 11971700 call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971706u);
  /* 11971706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197170b call 0x11976460 */
  push32(0x11971710u); f_11976460();
  /* 11971710 mov esi, esp */
  ESI = (ESP);
  /* 11971712 push 0x1199e20c */
  push32((uint32_t)(0x1199e20cu));
  /* 11971717 push 0x119a3440 */
  push32((uint32_t)(0x119a3440u));
  /* 1197171c call dword ptr [0x119a64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f0))), 0x11971722u);
  /* 11971722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971727 call 0x11976460 */
  push32(0x1197172cu); f_11976460();
  /* 1197172c mov esi, esp */
  ESI = (ESP);
  /* 1197172e push 0x1199e1fc */
  push32((uint32_t)(0x1199e1fcu));
  /* 11971733 push 0x119a3470 */
  push32((uint32_t)(0x119a3470u));
  /* 11971738 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x1197173eu);
  /* 1197173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971743 call 0x11976460 */
  push32(0x11971748u); f_11976460();
  /* 11971748 mov esi, esp */
  ESI = (ESP);
  /* 1197174a push 0x1199e1e8 */
  push32((uint32_t)(0x1199e1e8u));
  /* 1197174f push 0x119a34d8 */
  push32((uint32_t)(0x119a34d8u));
  /* 11971754 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x1197175au);
  /* 1197175a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197175d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197175f call 0x11976460 */
  push32(0x11971764u); f_11976460();
  /* 11971764 mov esi, esp */
  ESI = (ESP);
  /* 11971766 push 0x1199e1d8 */
  push32((uint32_t)(0x1199e1d8u));
  /* 1197176b push 0x119a3720 */
  push32((uint32_t)(0x119a3720u));
  /* 11971770 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x11971776u);
  /* 11971776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197177b call 0x11976460 */
  push32(0x11971780u); f_11976460();
  /* 11971780 mov esi, esp */
  ESI = (ESP);
  /* 11971782 push 0x1199e1bc */
  push32((uint32_t)(0x1199e1bcu));
  /* 11971787 push 0x119a3458 */
  push32((uint32_t)(0x119a3458u));
  /* 1197178c call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x11971792u);
  /* 11971792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971797 call 0x11976460 */
  push32(0x1197179cu); f_11976460();
  /* 1197179c mov esi, esp */
  ESI = (ESP);
  /* 1197179e push 0x1199e1a0 */
  push32((uint32_t)(0x1199e1a0u));
  /* 119717a3 push 0x119a3468 */
  push32((uint32_t)(0x119a3468u));
  /* 119717a8 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119717aeu);
  /* 119717ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119717b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119717b3 call 0x11976460 */
  push32(0x119717b8u); f_11976460();
  /* 119717b8 mov esi, esp */
  ESI = (ESP);
  /* 119717ba push 0x1199e184 */
  push32((uint32_t)(0x1199e184u));
  /* 119717bf push 0x119a3438 */
  push32((uint32_t)(0x119a3438u));
  /* 119717c4 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119717cau);
  /* 119717ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119717cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119717cf call 0x11976460 */
  push32(0x119717d4u); f_11976460();
  /* 119717d4 mov esi, esp */
  ESI = (ESP);
  /* 119717d6 push 0x1199e174 */
  push32((uint32_t)(0x1199e174u));
  /* 119717db push 0x119a34b0 */
  push32((uint32_t)(0x119a34b0u));
  /* 119717e0 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119717e6u);
  /* 119717e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119717e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119717eb call 0x11976460 */
  push32(0x119717f0u); f_11976460();
  /* 119717f0 mov esi, esp */
  ESI = (ESP);
  /* 119717f2 push 0x1199e164 */
  push32((uint32_t)(0x1199e164u));
  /* 119717f7 push 0x119a35f8 */
  push32((uint32_t)(0x119a35f8u));
  /* 119717fc call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x11971802u);
  /* 11971802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971807 call 0x11976460 */
  push32(0x1197180cu); f_11976460();
  /* 1197180c mov esi, esp */
  ESI = (ESP);
  /* 1197180e push 0x1199e154 */
  push32((uint32_t)(0x1199e154u));
  /* 11971813 push 0x119a34b8 */
  push32((uint32_t)(0x119a34b8u));
  /* 11971818 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x1197181eu);
  /* 1197181e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971823 call 0x11976460 */
  push32(0x11971828u); f_11976460();
  /* 11971828 mov esi, esp */
  ESI = (ESP);
  /* 1197182a push 0x1199e144 */
  push32((uint32_t)(0x1199e144u));
  /* 1197182f push 0x119a3600 */
  push32((uint32_t)(0x119a3600u));
  /* 11971834 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x1197183au);
  /* 1197183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197183f call 0x11976460 */
  push32(0x11971844u); f_11976460();
  /* 11971844 mov esi, esp */
  ESI = (ESP);
  /* 11971846 push 0x1199e134 */
  push32((uint32_t)(0x1199e134u));
  /* 1197184b push 0x119a34c0 */
  push32((uint32_t)(0x119a34c0u));
  /* 11971850 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x11971856u);
  /* 11971856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197185b call 0x11976460 */
  push32(0x11971860u); f_11976460();
  /* 11971860 mov esi, esp */
  ESI = (ESP);
  /* 11971862 push 0x1199e124 */
  push32((uint32_t)(0x1199e124u));
  /* 11971867 push 0x119a35f0 */
  push32((uint32_t)(0x119a35f0u));
  /* 1197186c call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x11971872u);
  /* 11971872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971877 call 0x11976460 */
  push32(0x1197187cu); f_11976460();
  /* 1197187c mov esi, esp */
  ESI = (ESP);
  /* 1197187e push 0x1199e10c */
  push32((uint32_t)(0x1199e10cu));
  /* 11971883 push 0x119a3528 */
  push32((uint32_t)(0x119a3528u));
  /* 11971888 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x1197188eu);
  /* 1197188e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971893 call 0x11976460 */
  push32(0x11971898u); f_11976460();
  /* 11971898 mov esi, esp */
  ESI = (ESP);
  /* 1197189a push 0x1199e0f4 */
  push32((uint32_t)(0x1199e0f4u));
  /* 1197189f push 0x119a3530 */
  push32((uint32_t)(0x119a3530u));
  /* 119718a4 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119718aau);
  /* 119718aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119718ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119718af call 0x11976460 */
  push32(0x119718b4u); f_11976460();
  /* 119718b4 mov esi, esp */
  ESI = (ESP);
  /* 119718b6 push 0x1199e0e4 */
  push32((uint32_t)(0x1199e0e4u));
  /* 119718bb push 0x119a3708 */
  push32((uint32_t)(0x119a3708u));
  /* 119718c0 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119718c6u);
  /* 119718c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119718c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119718cb call 0x11976460 */
  push32(0x119718d0u); f_11976460();
  /* 119718d0 mov esi, esp */
  ESI = (ESP);
  /* 119718d2 push 0x1199e0d4 */
  push32((uint32_t)(0x1199e0d4u));
  /* 119718d7 push 0x119a3700 */
  push32((uint32_t)(0x119a3700u));
  /* 119718dc call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119718e2u);
  /* 119718e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119718e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119718e7 call 0x11976460 */
  push32(0x119718ecu); f_11976460();
  /* 119718ec mov esi, esp */
  ESI = (ESP);
  /* 119718ee push 0x1199e0c4 */
  push32((uint32_t)(0x1199e0c4u));
  /* 119718f3 push 0x119a3710 */
  push32((uint32_t)(0x119a3710u));
  /* 119718f8 call dword ptr [0x119a64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e8))), 0x119718feu);
  /* 119718fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971903 call 0x11976460 */
  push32(0x11971908u); f_11976460();
  /* 11971908 mov esi, esp */
  ESI = (ESP);
  /* 1197190a push 8 */
  push32((uint32_t)(0x8u));
  /* 1197190c push 0x119a3448 */
  push32((uint32_t)(0x119a3448u));
  /* 11971911 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971917u);
  /* 11971917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197191a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197191c call 0x11976460 */
  push32(0x11971921u); f_11976460();
  /* 11971921 mov esi, esp */
  ESI = (ESP);
  /* 11971923 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971925 push 0x119a3430 */
  push32((uint32_t)(0x119a3430u));
  /* 1197192a call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971930u);
  /* 11971930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971935 call 0x11976460 */
  push32(0x1197193au); f_11976460();
  /* 1197193a mov esi, esp */
  ESI = (ESP);
  /* 1197193c push 8 */
  push32((uint32_t)(0x8u));
  /* 1197193e push 0x119a3460 */
  push32((uint32_t)(0x119a3460u));
  /* 11971943 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971949u);
  /* 11971949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197194c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197194e call 0x11976460 */
  push32(0x11971953u); f_11976460();
  /* 11971953 mov esi, esp */
  ESI = (ESP);
  /* 11971955 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971957 push 0x119a3450 */
  push32((uint32_t)(0x119a3450u));
  /* 1197195c call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971962u);
  /* 11971962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971967 call 0x11976460 */
  push32(0x1197196cu); f_11976460();
  /* 1197196c mov esi, esp */
  ESI = (ESP);
  /* 1197196e push 8 */
  push32((uint32_t)(0x8u));
  /* 11971970 push 0x119a33f8 */
  push32((uint32_t)(0x119a33f8u));
  /* 11971975 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x1197197bu);
  /* 1197197b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197197e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971980 call 0x11976460 */
  push32(0x11971985u); f_11976460();
  /* 11971985 mov esi, esp */
  ESI = (ESP);
  /* 11971987 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971989 push 0x119a33f0 */
  push32((uint32_t)(0x119a33f0u));
  /* 1197198e call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971994u);
  /* 11971994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971997 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971999 call 0x11976460 */
  push32(0x1197199eu); f_11976460();
  /* 1197199e mov esi, esp */
  ESI = (ESP);
  /* 119719a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 119719a2 push 0x119a3408 */
  push32((uint32_t)(0x119a3408u));
  /* 119719a7 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x119719adu);
  /* 119719ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119719b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119719b2 call 0x11976460 */
  push32(0x119719b7u); f_11976460();
  /* 119719b7 mov esi, esp */
  ESI = (ESP);
  /* 119719b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 119719bb push 0x119a3400 */
  push32((uint32_t)(0x119a3400u));
  /* 119719c0 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x119719c6u);
  /* 119719c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119719c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119719cb call 0x11976460 */
  push32(0x119719d0u); f_11976460();
  /* 119719d0 mov esi, esp */
  ESI = (ESP);
  /* 119719d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 119719d4 push 0x119a3410 */
  push32((uint32_t)(0x119a3410u));
  /* 119719d9 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x119719dfu);
  /* 119719df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119719e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119719e4 call 0x11976460 */
  push32(0x119719e9u); f_11976460();
  /* 119719e9 mov esi, esp */
  ESI = (ESP);
  /* 119719eb push 8 */
  push32((uint32_t)(0x8u));
  /* 119719ed push 0x119a3550 */
  push32((uint32_t)(0x119a3550u));
  /* 119719f2 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x119719f8u);
  /* 119719f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119719fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119719fd call 0x11976460 */
  push32(0x11971a02u); f_11976460();
  /* 11971a02 mov esi, esp */
  ESI = (ESP);
  /* 11971a04 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a06 push 0x119a3548 */
  push32((uint32_t)(0x119a3548u));
  /* 11971a0b call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971a11u);
  /* 11971a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971a14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971a16 call 0x11976460 */
  push32(0x11971a1bu); f_11976460();
  /* 11971a1b mov esi, esp */
  ESI = (ESP);
  /* 11971a1d push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a1f push 0x119a3588 */
  push32((uint32_t)(0x119a3588u));
  /* 11971a24 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971a2au);
  /* 11971a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971a2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971a2f call 0x11976460 */
  push32(0x11971a34u); f_11976460();
  /* 11971a34 mov esi, esp */
  ESI = (ESP);
  /* 11971a36 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a38 push 0x119a3580 */
  push32((uint32_t)(0x119a3580u));
  /* 11971a3d call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971a43u);
  /* 11971a43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971a48 call 0x11976460 */
  push32(0x11971a4du); f_11976460();
  /* 11971a4d mov esi, esp */
  ESI = (ESP);
  /* 11971a4f push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a51 push 0x119a35a0 */
  push32((uint32_t)(0x119a35a0u));
  /* 11971a56 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971a5cu);
  /* 11971a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971a61 call 0x11976460 */
  push32(0x11971a66u); f_11976460();
  /* 11971a66 mov esi, esp */
  ESI = (ESP);
  /* 11971a68 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a6a push 0x119a3590 */
  push32((uint32_t)(0x119a3590u));
  /* 11971a6f call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971a75u);
  /* 11971a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971a7a call 0x11976460 */
  push32(0x11971a7fu); f_11976460();
  /* 11971a7f mov esi, esp */
  ESI = (ESP);
  /* 11971a81 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a83 push 0x119a3568 */
  push32((uint32_t)(0x119a3568u));
  /* 11971a88 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971a8eu);
  /* 11971a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971a91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971a93 call 0x11976460 */
  push32(0x11971a98u); f_11976460();
  /* 11971a98 mov esi, esp */
  ESI = (ESP);
  /* 11971a9a push 8 */
  push32((uint32_t)(0x8u));
  /* 11971a9c push 0x119a3560 */
  push32((uint32_t)(0x119a3560u));
  /* 11971aa1 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971aa7u);
  /* 11971aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971aac call 0x11976460 */
  push32(0x11971ab1u); f_11976460();
  /* 11971ab1 mov esi, esp */
  ESI = (ESP);
  /* 11971ab3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971ab5 push 0x119a3578 */
  push32((uint32_t)(0x119a3578u));
  /* 11971aba call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971ac0u);
  /* 11971ac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971ac3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971ac5 call 0x11976460 */
  push32(0x11971acau); f_11976460();
  /* 11971aca mov esi, esp */
  ESI = (ESP);
  /* 11971acc push 8 */
  push32((uint32_t)(0x8u));
  /* 11971ace push 0x119a3570 */
  push32((uint32_t)(0x119a3570u));
  /* 11971ad3 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971ad9u);
  /* 11971ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971ade call 0x11976460 */
  push32(0x11971ae3u); f_11976460();
  /* 11971ae3 mov esi, esp */
  ESI = (ESP);
  /* 11971ae5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11971ae7 push 0x119a3598 */
  push32((uint32_t)(0x119a3598u));
  /* 11971aec call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971af2u);
  /* 11971af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971af5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971af7 call 0x11976460 */
  push32(0x11971afcu); f_11976460();
  /* 11971afc mov esi, esp */
  ESI = (ESP);
  /* 11971afe push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b00 push 0x119a3558 */
  push32((uint32_t)(0x119a3558u));
  /* 11971b05 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971b0bu);
  /* 11971b0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971b10 call 0x11976460 */
  push32(0x11971b15u); f_11976460();
  /* 11971b15 mov esi, esp */
  ESI = (ESP);
  /* 11971b17 push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b19 push 0x119a35a8 */
  push32((uint32_t)(0x119a35a8u));
  /* 11971b1e call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971b24u);
  /* 11971b24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971b27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971b29 call 0x11976460 */
  push32(0x11971b2eu); f_11976460();
  /* 11971b2e mov esi, esp */
  ESI = (ESP);
  /* 11971b30 push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b32 push 0x119a35d8 */
  push32((uint32_t)(0x119a35d8u));
  /* 11971b37 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971b3du);
  /* 11971b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971b42 call 0x11976460 */
  push32(0x11971b47u); f_11976460();
  /* 11971b47 mov esi, esp */
  ESI = (ESP);
  /* 11971b49 push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b4b push 0x119a3640 */
  push32((uint32_t)(0x119a3640u));
  /* 11971b50 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971b56u);
  /* 11971b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971b5b call 0x11976460 */
  push32(0x11971b60u); f_11976460();
  /* 11971b60 mov esi, esp */
  ESI = (ESP);
  /* 11971b62 push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b64 push 0x119a3668 */
  push32((uint32_t)(0x119a3668u));
  /* 11971b69 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971b6fu);
  /* 11971b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971b74 call 0x11976460 */
  push32(0x11971b79u); f_11976460();
  /* 11971b79 mov esi, esp */
  ESI = (ESP);
  /* 11971b7b push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b7d push 0x119a3698 */
  push32((uint32_t)(0x119a3698u));
  /* 11971b82 call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971b88u);
  /* 11971b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971b8d call 0x11976460 */
  push32(0x11971b92u); f_11976460();
  /* 11971b92 mov esi, esp */
  ESI = (ESP);
  /* 11971b94 push 4 */
  push32((uint32_t)(0x4u));
  /* 11971b96 push 0x119a3718 */
  push32((uint32_t)(0x119a3718u));
  /* 11971b9b call dword ptr [0x119a64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f8))), 0x11971ba1u);
  /* 11971ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971ba6 call 0x11976460 */
  push32(0x11971babu); f_11976460();
  /* 11971bab mov esi, esp */
  ESI = (ESP);
  /* 11971bad push 0x1199e0bc */
  push32((uint32_t)(0x1199e0bcu));
  /* 11971bb2 push 0x119a36f8 */
  push32((uint32_t)(0x119a36f8u));
  /* 11971bb7 call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971bbdu);
  /* 11971bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971bc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971bc2 call 0x11976460 */
  push32(0x11971bc7u); f_11976460();
  /* 11971bc7 mov esi, esp */
  ESI = (ESP);
  /* 11971bc9 push 0x1199e0ac */
  push32((uint32_t)(0x1199e0acu));
  /* 11971bce push 0x119a35b8 */
  push32((uint32_t)(0x119a35b8u));
  /* 11971bd3 call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971bd9u);
  /* 11971bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971bde call 0x11976460 */
  push32(0x11971be3u); f_11976460();
  /* 11971be3 mov esi, esp */
  ESI = (ESP);
  /* 11971be5 push 0x1199e09c */
  push32((uint32_t)(0x1199e09cu));
  /* 11971bea push 0x119a35c8 */
  push32((uint32_t)(0x119a35c8u));
  /* 11971bef call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971bf5u);
  /* 11971bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971bf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971bfa call 0x11976460 */
  push32(0x11971bffu); f_11976460();
  /* 11971bff mov esi, esp */
  ESI = (ESP);
  /* 11971c01 push 0x1199e08c */
  push32((uint32_t)(0x1199e08cu));
  /* 11971c06 push 0x119a35d0 */
  push32((uint32_t)(0x119a35d0u));
  /* 11971c0b call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971c11u);
  /* 11971c11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971c16 call 0x11976460 */
  push32(0x11971c1bu); f_11976460();
  /* 11971c1b mov esi, esp */
  ESI = (ESP);
  /* 11971c1d push 0x1199e07c */
  push32((uint32_t)(0x1199e07cu));
  /* 11971c22 push 0x119a35c0 */
  push32((uint32_t)(0x119a35c0u));
  /* 11971c27 call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971c2du);
  /* 11971c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971c32 call 0x11976460 */
  push32(0x11971c37u); f_11976460();
  /* 11971c37 mov esi, esp */
  ESI = (ESP);
  /* 11971c39 push 0x1199e06c */
  push32((uint32_t)(0x1199e06cu));
  /* 11971c3e push 0x119a35b0 */
  push32((uint32_t)(0x119a35b0u));
  /* 11971c43 call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971c49u);
  /* 11971c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971c4e call 0x11976460 */
  push32(0x11971c53u); f_11976460();
  /* 11971c53 mov esi, esp */
  ESI = (ESP);
  /* 11971c55 push 0x1199e064 */
  push32((uint32_t)(0x1199e064u));
  /* 11971c5a push 0x119a36f0 */
  push32((uint32_t)(0x119a36f0u));
  /* 11971c5f call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971c65u);
  /* 11971c65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971c68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971c6a call 0x11976460 */
  push32(0x11971c6fu); f_11976460();
  /* 11971c6f mov esi, esp */
  ESI = (ESP);
  /* 11971c71 push 0x1199e058 */
  push32((uint32_t)(0x1199e058u));
  /* 11971c76 push 0x119a33e0 */
  push32((uint32_t)(0x119a33e0u));
  /* 11971c7b call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971c81u);
  /* 11971c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971c86 call 0x11976460 */
  push32(0x11971c8bu); f_11976460();
  /* 11971c8b mov esi, esp */
  ESI = (ESP);
  /* 11971c8d push 0x1199e04c */
  push32((uint32_t)(0x1199e04cu));
  /* 11971c92 push 0x119a33e8 */
  push32((uint32_t)(0x119a33e8u));
  /* 11971c97 call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971c9du);
  /* 11971c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971ca2 call 0x11976460 */
  push32(0x11971ca7u); f_11976460();
  /* 11971ca7 mov esi, esp */
  ESI = (ESP);
  /* 11971ca9 push 0x1199e044 */
  push32((uint32_t)(0x1199e044u));
  /* 11971cae push 0x119a34a8 */
  push32((uint32_t)(0x119a34a8u));
  /* 11971cb3 call dword ptr [0x119a64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64fc))), 0x11971cb9u);
  /* 11971cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971cbe call 0x11976460 */
  push32(0x11971cc3u); f_11976460();
  /* 11971cc3 mov esi, esp */
  ESI = (ESP);
  /* 11971cc5 push 0x119a3448 */
  push32((uint32_t)(0x119a3448u));
  /* 11971cca call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971cd0u);
  /* 11971cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971cd5 call 0x11976460 */
  push32(0x11971cdau); f_11976460();
  /* 11971cda mov esi, esp */
  ESI = (ESP);
  /* 11971cdc push 0x119a3430 */
  push32((uint32_t)(0x119a3430u));
  /* 11971ce1 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971ce7u);
  /* 11971ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971cea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971cec call 0x11976460 */
  push32(0x11971cf1u); f_11976460();
  /* 11971cf1 mov esi, esp */
  ESI = (ESP);
  /* 11971cf3 push 0x119a3460 */
  push32((uint32_t)(0x119a3460u));
  /* 11971cf8 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971cfeu);
  /* 11971cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d03 call 0x11976460 */
  push32(0x11971d08u); f_11976460();
  /* 11971d08 mov esi, esp */
  ESI = (ESP);
  /* 11971d0a push 0x119a3450 */
  push32((uint32_t)(0x119a3450u));
  /* 11971d0f call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d15u);
  /* 11971d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d1a call 0x11976460 */
  push32(0x11971d1fu); f_11976460();
  /* 11971d1f mov esi, esp */
  ESI = (ESP);
  /* 11971d21 push 0x119a33f8 */
  push32((uint32_t)(0x119a33f8u));
  /* 11971d26 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d2cu);
  /* 11971d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d31 call 0x11976460 */
  push32(0x11971d36u); f_11976460();
  /* 11971d36 mov esi, esp */
  ESI = (ESP);
  /* 11971d38 push 0x119a33f0 */
  push32((uint32_t)(0x119a33f0u));
  /* 11971d3d call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d43u);
  /* 11971d43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d48 call 0x11976460 */
  push32(0x11971d4du); f_11976460();
  /* 11971d4d mov esi, esp */
  ESI = (ESP);
  /* 11971d4f push 0x119a3408 */
  push32((uint32_t)(0x119a3408u));
  /* 11971d54 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d5au);
  /* 11971d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d5f call 0x11976460 */
  push32(0x11971d64u); f_11976460();
  /* 11971d64 mov esi, esp */
  ESI = (ESP);
  /* 11971d66 push 0x119a3400 */
  push32((uint32_t)(0x119a3400u));
  /* 11971d6b call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d71u);
  /* 11971d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d76 call 0x11976460 */
  push32(0x11971d7bu); f_11976460();
  /* 11971d7b mov esi, esp */
  ESI = (ESP);
  /* 11971d7d push 0x119a3410 */
  push32((uint32_t)(0x119a3410u));
  /* 11971d82 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d88u);
  /* 11971d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971d8d call 0x11976460 */
  push32(0x11971d92u); f_11976460();
  /* 11971d92 mov esi, esp */
  ESI = (ESP);
  /* 11971d94 push 0x119a3550 */
  push32((uint32_t)(0x119a3550u));
  /* 11971d99 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971d9fu);
  /* 11971d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971da4 call 0x11976460 */
  push32(0x11971da9u); f_11976460();
  /* 11971da9 mov esi, esp */
  ESI = (ESP);
  /* 11971dab push 0x119a3548 */
  push32((uint32_t)(0x119a3548u));
  /* 11971db0 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971db6u);
  /* 11971db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971db9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971dbb call 0x11976460 */
  push32(0x11971dc0u); f_11976460();
  /* 11971dc0 mov esi, esp */
  ESI = (ESP);
  /* 11971dc2 push 0x119a3588 */
  push32((uint32_t)(0x119a3588u));
  /* 11971dc7 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971dcdu);
  /* 11971dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971dd2 call 0x11976460 */
  push32(0x11971dd7u); f_11976460();
  /* 11971dd7 mov esi, esp */
  ESI = (ESP);
  /* 11971dd9 push 0x119a3580 */
  push32((uint32_t)(0x119a3580u));
  /* 11971dde call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971de4u);
  /* 11971de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971de7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971de9 call 0x11976460 */
  push32(0x11971deeu); f_11976460();
  /* 11971dee mov esi, esp */
  ESI = (ESP);
  /* 11971df0 push 0x119a35a0 */
  push32((uint32_t)(0x119a35a0u));
  /* 11971df5 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971dfbu);
  /* 11971dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971dfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e00 call 0x11976460 */
  push32(0x11971e05u); f_11976460();
  /* 11971e05 mov esi, esp */
  ESI = (ESP);
  /* 11971e07 push 0x119a3590 */
  push32((uint32_t)(0x119a3590u));
  /* 11971e0c call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e12u);
  /* 11971e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e17 call 0x11976460 */
  push32(0x11971e1cu); f_11976460();
  /* 11971e1c mov esi, esp */
  ESI = (ESP);
  /* 11971e1e push 0x119a3568 */
  push32((uint32_t)(0x119a3568u));
  /* 11971e23 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e29u);
  /* 11971e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e2e call 0x11976460 */
  push32(0x11971e33u); f_11976460();
  /* 11971e33 mov esi, esp */
  ESI = (ESP);
  /* 11971e35 push 0x119a3560 */
  push32((uint32_t)(0x119a3560u));
  /* 11971e3a call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e40u);
  /* 11971e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e45 call 0x11976460 */
  push32(0x11971e4au); f_11976460();
  /* 11971e4a mov esi, esp */
  ESI = (ESP);
  /* 11971e4c push 0x119a3578 */
  push32((uint32_t)(0x119a3578u));
  /* 11971e51 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e57u);
  /* 11971e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e5c call 0x11976460 */
  push32(0x11971e61u); f_11976460();
  /* 11971e61 mov esi, esp */
  ESI = (ESP);
  /* 11971e63 push 0x119a3570 */
  push32((uint32_t)(0x119a3570u));
  /* 11971e68 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e6eu);
  /* 11971e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e73 call 0x11976460 */
  push32(0x11971e78u); f_11976460();
  /* 11971e78 mov esi, esp */
  ESI = (ESP);
  /* 11971e7a push 0x119a3598 */
  push32((uint32_t)(0x119a3598u));
  /* 11971e7f call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e85u);
  /* 11971e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971e8a call 0x11976460 */
  push32(0x11971e8fu); f_11976460();
  /* 11971e8f mov esi, esp */
  ESI = (ESP);
  /* 11971e91 push 0x119a36e8 */
  push32((uint32_t)(0x119a36e8u));
  /* 11971e96 call dword ptr [0x119a64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64f4))), 0x11971e9cu);
  /* 11971e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971ea1 call 0x11976460 */
  push32(0x11971ea6u); f_11976460();
  /* 11971ea6 mov esi, esp */
  ESI = (ESP);
  /* 11971ea8 push 0x1199e038 */
  push32((uint32_t)(0x1199e038u));
  /* 11971ead push 1 */
  push32((uint32_t)(0x1u));
  /* 11971eaf call dword ptr [0x119a6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6504))), 0x11971eb5u);
  /* 11971eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971eb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971eba call 0x11976460 */
  push32(0x11971ebfu); f_11976460();
  /* 11971ebf mov esi, esp */
  ESI = (ESP);
  /* 11971ec1 push 0x1199e02c */
  push32((uint32_t)(0x1199e02cu));
  /* 11971ec6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11971ec8 call dword ptr [0x119a6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6504))), 0x11971eceu);
  /* 11971ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971ed3 call 0x11976460 */
  push32(0x11971ed8u); f_11976460();
  /* 11971ed8 mov esi, esp */
  ESI = (ESP);
  /* 11971eda push 0x1199e01c */
  push32((uint32_t)(0x1199e01cu));
  /* 11971edf push 4 */
  push32((uint32_t)(0x4u));
  /* 11971ee1 call dword ptr [0x119a6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6504))), 0x11971ee7u);
  /* 11971ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971eea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971eec call 0x11976460 */
  push32(0x11971ef1u); f_11976460();
  /* 11971ef1 mov esi, esp */
  ESI = (ESP);
  /* 11971ef3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11971ef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11971ef7 call dword ptr [0x119a6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6508))), 0x11971efdu);
  /* 11971efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f02 call 0x11976460 */
  push32(0x11971f07u); f_11976460();
  /* 11971f07 mov esi, esp */
  ESI = (ESP);
  /* 11971f09 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11971f0b push 5 */
  push32((uint32_t)(0x5u));
  /* 11971f0d call dword ptr [0x119a6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6508))), 0x11971f13u);
  /* 11971f13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f18 call 0x11976460 */
  push32(0x11971f1du); f_11976460();
  /* 11971f1d mov esi, esp */
  ESI = (ESP);
  /* 11971f1f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11971f21 push 4 */
  push32((uint32_t)(0x4u));
  /* 11971f23 call dword ptr [0x119a6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6508))), 0x11971f29u);
  /* 11971f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f2e call 0x11976460 */
  push32(0x11971f33u); f_11976460();
  /* 11971f33 mov esi, esp */
  ESI = (ESP);
  /* 11971f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f37 push 0x119a34b0 */
  push32((uint32_t)(0x119a34b0u));
  /* 11971f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f3e call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971f44u);
  /* 11971f44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f49 call 0x11976460 */
  push32(0x11971f4eu); f_11976460();
  /* 11971f4e mov esi, esp */
  ESI = (ESP);
  /* 11971f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f52 push 0x119a35f8 */
  push32((uint32_t)(0x119a35f8u));
  /* 11971f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f59 call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971f5fu);
  /* 11971f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f64 call 0x11976460 */
  push32(0x11971f69u); f_11976460();
  /* 11971f69 mov esi, esp */
  ESI = (ESP);
  /* 11971f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f6d push 0x119a34b8 */
  push32((uint32_t)(0x119a34b8u));
  /* 11971f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f74 call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971f7au);
  /* 11971f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f7f call 0x11976460 */
  push32(0x11971f84u); f_11976460();
  /* 11971f84 mov esi, esp */
  ESI = (ESP);
  /* 11971f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f88 push 0x119a3600 */
  push32((uint32_t)(0x119a3600u));
  /* 11971f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11971f8f call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971f95u);
  /* 11971f95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971f98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971f9a call 0x11976460 */
  push32(0x11971f9fu); f_11976460();
  /* 11971f9f mov esi, esp */
  ESI = (ESP);
  /* 11971fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971fa3 push 0x119a34c0 */
  push32((uint32_t)(0x119a34c0u));
  /* 11971fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971faa call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971fb0u);
  /* 11971fb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971fb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971fb5 call 0x11976460 */
  push32(0x11971fbau); f_11976460();
  /* 11971fba mov esi, esp */
  ESI = (ESP);
  /* 11971fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11971fbe push 0x119a35f0 */
  push32((uint32_t)(0x119a35f0u));
  /* 11971fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971fc5 call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971fcbu);
  /* 11971fcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971fce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971fd0 call 0x11976460 */
  push32(0x11971fd5u); f_11976460();
  /* 11971fd5 mov esi, esp */
  ESI = (ESP);
  /* 11971fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971fd9 push 0x119a3458 */
  push32((uint32_t)(0x119a3458u));
  /* 11971fde push 0 */
  push32((uint32_t)(0x0u));
  /* 11971fe0 call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11971fe6u);
  /* 11971fe6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11971fe9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11971feb call 0x11976460 */
  push32(0x11971ff0u); f_11976460();
  /* 11971ff0 mov esi, esp */
  ESI = (ESP);
  /* 11971ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971ff4 push 0x119a3468 */
  push32((uint32_t)(0x119a3468u));
  /* 11971ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11971ffb call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11972001u);
  /* 11972001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972004 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972006 call 0x11976460 */
  push32(0x1197200bu); f_11976460();
  /* 1197200b mov esi, esp */
  ESI = (ESP);
  /* 1197200d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197200f push 0x119a3528 */
  push32((uint32_t)(0x119a3528u));
  /* 11972014 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972016 call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x1197201cu);
  /* 1197201c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197201f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972021 call 0x11976460 */
  push32(0x11972026u); f_11976460();
  /* 11972026 mov esi, esp */
  ESI = (ESP);
  /* 11972028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197202a push 0x119a3530 */
  push32((uint32_t)(0x119a3530u));
  /* 1197202f push 0 */
  push32((uint32_t)(0x0u));
  /* 11972031 call dword ptr [0x119a6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6500))), 0x11972037u);
  /* 11972037 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197203a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197203c call 0x11976460 */
  push32(0x11972041u); f_11976460();
  /* 11972041 pop edi */
  EDI = (pop32());
  /* 11972042 pop esi */
  ESI = (pop32());
  /* 11972043 pop ebx */
  EBX = (pop32());
  /* 11972044 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972047 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972049 call 0x11976460 */
  push32(0x1197204eu); f_11976460();
  /* 1197204e mov esp, ebp */
  ESP = (EBP);
  /* 11972050 pop ebp */
  EBP = (pop32());
  /* 11972051 ret  */
  ESPCHK(0x11971030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x11972460 (67 bytes, 26 insns) */
void f_11972460(void) {
  FTRACE(0x11972460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11972460 push ebp */
  push32((uint32_t)(EBP));
  /* 11972461 mov ebp, esp */
  EBP = (ESP);
  /* 11972463 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972466 push ebx */
  push32((uint32_t)(EBX));
  /* 11972467 push esi */
  push32((uint32_t)(ESI));
  /* 11972468 push edi */
  push32((uint32_t)(EDI));
  /* 11972469 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1197246c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11972471 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11972476 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11972478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197247b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197247e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972482 je 0x11972486 */
  if (C.zf) goto L_11972486;
  /* 11972484 jmp 0x1197248b */
  goto L_1197248b;
L_11972486:;
  /* 11972486 call 0x11971005 */
  push32(0x1197248bu); f_11971005();
L_1197248b:;
  /* 1197248b mov eax, 1 */
  EAX = (0x1u);
  /* 11972490 pop edi */
  EDI = (pop32());
  /* 11972491 pop esi */
  ESI = (pop32());
  /* 11972492 pop ebx */
  EBX = (pop32());
  /* 11972493 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972496 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972498 call 0x11976460 */
  push32(0x1197249du); f_11976460();
  /* 1197249d mov esp, ebp */
  ESP = (EBP);
  /* 1197249f pop ebp */
  EBP = (pop32());
  /* 119724a0 ret 0xc */
  ESPCHK(0x11972460u, _esp0);
  ESP += 16; return;
}

/* FUN_100024c0 @ 0x119724c0 (12772 bytes, 3512 insns) [2 switch table(s)] */
void f_119724c0(void) {
  FTRACE(0x119724c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119724c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119724c1 mov ebp, esp */
  EBP = (ESP);
  /* 119724c3 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119724c6 push ebx */
  push32((uint32_t)(EBX));
  /* 119724c7 push esi */
  push32((uint32_t)(ESI));
  /* 119724c8 push edi */
  push32((uint32_t)(EDI));
  /* 119724c9 lea edi, [ebp - 0x58] */
  EDI = ((uint32_t)(EBP + -0x58));
  /* 119724cc mov ecx, 0x16 */
  ECX = (0x16u);
  /* 119724d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 119724d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119724d8 mov esi, esp */
  ESI = (ESP);
  /* 119724da push 0x63 */
  push32((uint32_t)(0x63u));
  /* 119724dc call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119724e2u);
  /* 119724e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119724e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119724e7 call 0x11976460 */
  push32(0x119724ecu); f_11976460();
  /* 119724ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119724f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119724f3 je 0x1197346a */
  if (C.zf) goto L_1197346a;
  /* 119724f9 mov esi, esp */
  ESI = (ESP);
  /* 119724fb push 0 */
  push32((uint32_t)(0x0u));
  /* 119724fd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 119724ff call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11972505u);
  /* 11972505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972508 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197250a call 0x11976460 */
  push32(0x1197250fu); f_11976460();
  /* 1197250f mov esi, esp */
  ESI = (ESP);
  /* 11972511 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11972513 call dword ptr [0x119a645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a645c))), 0x11972519u);
  /* 11972519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197251c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197251e call 0x11976460 */
  push32(0x11972523u); f_11976460();
  /* 11972523 mov esi, esp */
  ESI = (ESP);
  /* 11972525 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11972527 call dword ptr [0x119a6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6460))), 0x1197252du);
  /* 1197252d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972532 call 0x11976460 */
  push32(0x11972537u); f_11976460();
  /* 11972537 mov esi, esp */
  ESI = (ESP);
  /* 11972539 push 0x119a3500 */
  push32((uint32_t)(0x119a3500u));
  /* 1197253e call dword ptr [0x119a6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6458))), 0x11972544u);
  /* 11972544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972549 call 0x11976460 */
  push32(0x1197254eu); f_11976460();
  /* 1197254e mov esi, esp */
  ESI = (ESP);
  /* 11972550 push 0x119a34f8 */
  push32((uint32_t)(0x119a34f8u));
  /* 11972555 call dword ptr [0x119a6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6458))), 0x1197255bu);
  /* 1197255b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197255e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972560 call 0x11976460 */
  push32(0x11972565u); f_11976460();
  /* 11972565 mov esi, esp */
  ESI = (ESP);
  /* 11972567 push 0x119a3520 */
  push32((uint32_t)(0x119a3520u));
  /* 1197256c call dword ptr [0x119a6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6468))), 0x11972572u);
  /* 11972572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972575 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972577 call 0x11976460 */
  push32(0x1197257cu); f_11976460();
  /* 1197257c mov esi, esp */
  ESI = (ESP);
  /* 1197257e push 0x119a3518 */
  push32((uint32_t)(0x119a3518u));
  /* 11972583 call dword ptr [0x119a6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6468))), 0x11972589u);
  /* 11972589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197258c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197258e call 0x11976460 */
  push32(0x11972593u); f_11976460();
  /* 11972593 mov esi, esp */
  ESI = (ESP);
  /* 11972595 push 0x119a34f0 */
  push32((uint32_t)(0x119a34f0u));
  /* 1197259a call dword ptr [0x119a646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a646c))), 0x119725a0u);
  /* 119725a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119725a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119725a5 call 0x11976460 */
  push32(0x119725aau); f_11976460();
  /* 119725aa mov esi, esp */
  ESI = (ESP);
  /* 119725ac push 0x119a34e8 */
  push32((uint32_t)(0x119a34e8u));
  /* 119725b1 call dword ptr [0x119a646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a646c))), 0x119725b7u);
  /* 119725b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119725ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119725bc call 0x11976460 */
  push32(0x119725c1u); f_11976460();
  /* 119725c1 mov esi, esp */
  ESI = (ESP);
  /* 119725c3 push 0x119a34e0 */
  push32((uint32_t)(0x119a34e0u));
  /* 119725c8 call dword ptr [0x119a646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a646c))), 0x119725ceu);
  /* 119725ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119725d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119725d3 call 0x11976460 */
  push32(0x119725d8u); f_11976460();
  /* 119725d8 mov esi, esp */
  ESI = (ESP);
  /* 119725da push 0 */
  push32((uint32_t)(0x0u));
  /* 119725dc push 0x119a3740 */
  push32((uint32_t)(0x119a3740u));
  /* 119725e1 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119725e7u);
  /* 119725e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119725ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119725ec call 0x11976460 */
  push32(0x119725f1u); f_11976460();
  /* 119725f1 mov esi, esp */
  ESI = (ESP);
  /* 119725f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119725f5 push 0x119a3738 */
  push32((uint32_t)(0x119a3738u));
  /* 119725fa call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972600u);
  /* 11972600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972603 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972605 call 0x11976460 */
  push32(0x1197260au); f_11976460();
  /* 1197260a mov esi, esp */
  ESI = (ESP);
  /* 1197260c push 1 */
  push32((uint32_t)(0x1u));
  /* 1197260e push 0x119a3750 */
  push32((uint32_t)(0x119a3750u));
  /* 11972613 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972619u);
  /* 11972619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197261c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197261e call 0x11976460 */
  push32(0x11972623u); f_11976460();
  /* 11972623 mov esi, esp */
  ESI = (ESP);
  /* 11972625 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972627 push 0x119a3748 */
  push32((uint32_t)(0x119a3748u));
  /* 1197262c call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972632u);
  /* 11972632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972637 call 0x11976460 */
  push32(0x1197263cu); f_11976460();
  /* 1197263c mov esi, esp */
  ESI = (ESP);
  /* 1197263e push 4 */
  push32((uint32_t)(0x4u));
  /* 11972640 call dword ptr [0x119a6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6474))), 0x11972646u);
  /* 11972646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197264b call 0x11976460 */
  push32(0x11972650u); f_11976460();
  /* 11972650 mov esi, esp */
  ESI = (ESP);
  /* 11972652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972654 push 0x119a3620 */
  push32((uint32_t)(0x119a3620u));
  /* 11972659 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x1197265fu);
  /* 1197265f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972664 call 0x11976460 */
  push32(0x11972669u); f_11976460();
  /* 11972669 mov esi, esp */
  ESI = (ESP);
  /* 1197266b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197266d push 0x119a35e0 */
  push32((uint32_t)(0x119a35e0u));
  /* 11972672 push 4 */
  push32((uint32_t)(0x4u));
  /* 11972674 call dword ptr [0x119a6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6478))), 0x1197267au);
  /* 1197267a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197267d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197267f call 0x11976460 */
  push32(0x11972684u); f_11976460();
  /* 11972684 mov esi, esp */
  ESI = (ESP);
  /* 11972686 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972688 push 0x119a3628 */
  push32((uint32_t)(0x119a3628u));
  /* 1197268d call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972693u);
  /* 11972693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972696 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972698 call 0x11976460 */
  push32(0x1197269du); f_11976460();
  /* 1197269d mov esi, esp */
  ESI = (ESP);
  /* 1197269f push 0x82 */
  push32((uint32_t)(0x82u));
  /* 119726a4 push 0x119a35e8 */
  push32((uint32_t)(0x119a35e8u));
  /* 119726a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 119726ab call dword ptr [0x119a6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6478))), 0x119726b1u);
  /* 119726b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119726b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119726b6 call 0x11976460 */
  push32(0x119726bbu); f_11976460();
  /* 119726bb mov esi, esp */
  ESI = (ESP);
  /* 119726bd push 0 */
  push32((uint32_t)(0x0u));
  /* 119726bf call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x119726c5u);
  /* 119726c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119726c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119726ca call 0x11976460 */
  push32(0x119726cfu); f_11976460();
  /* 119726cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119726d2 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119726d6 ja 0x11972e04 */
  if ((!C.cf&&!C.zf)) goto L_11972e04;
  /* 119726dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119726df jmp dword ptr [eax*4 + 0x119756a4] */
  switch (EAX) {
    case 0: goto L_119726e6;
    case 1: goto L_11972940;
    case 2: goto L_11972b36;
    case 3: goto L_11972cc8;
    case 4: goto L_119734d7;
    case 5: goto L_11973532;
    case 6: goto L_1197358d;
    case 7: goto L_119735e5;
    default: x86_unimpl("switch@0x119726df out of table"); return;
  }
L_119726e6:;
  /* 119726e6 mov esi, esp */
  ESI = (ESP);
  /* 119726e8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 119726ed push 3 */
  push32((uint32_t)(0x3u));
  /* 119726ef push 0 */
  push32((uint32_t)(0x0u));
  /* 119726f1 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119726f7u);
  /* 119726f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119726fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119726fc call 0x11976460 */
  push32(0x11972701u); f_11976460();
  /* 11972701 mov esi, esp */
  ESI = (ESP);
  /* 11972703 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11972708 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197270a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197270c call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972712u);
  /* 11972712 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972717 call 0x11976460 */
  push32(0x1197271cu); f_11976460();
  /* 1197271c mov esi, esp */
  ESI = (ESP);
  /* 1197271e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11972723 push 2 */
  push32((uint32_t)(0x2u));
  /* 11972725 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972727 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x1197272du);
  /* 1197272d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972732 call 0x11976460 */
  push32(0x11972737u); f_11976460();
  /* 11972737 mov esi, esp */
  ESI = (ESP);
  /* 11972739 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1197273e push 1 */
  push32((uint32_t)(0x1u));
  /* 11972740 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972742 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972748u);
  /* 11972748 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197274b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197274d call 0x11976460 */
  push32(0x11972752u); f_11976460();
  /* 11972752 mov esi, esp */
  ESI = (ESP);
  /* 11972754 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11972759 push 5 */
  push32((uint32_t)(0x5u));
  /* 1197275b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197275d call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972763u);
  /* 11972763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972768 call 0x11976460 */
  push32(0x1197276du); f_11976460();
  /* 1197276d mov esi, esp */
  ESI = (ESP);
  /* 1197276f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11972774 push 4 */
  push32((uint32_t)(0x4u));
  /* 11972776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972778 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x1197277eu);
  /* 1197277e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972781 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972783 call 0x11976460 */
  push32(0x11972788u); f_11976460();
  /* 11972788 mov esi, esp */
  ESI = (ESP);
  /* 1197278a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197278c push 0x119a3540 */
  push32((uint32_t)(0x119a3540u));
  /* 11972791 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972797u);
  /* 11972797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197279a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197279c call 0x11976460 */
  push32(0x119727a1u); f_11976460();
  /* 119727a1 mov esi, esp */
  ESI = (ESP);
  /* 119727a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119727a5 push 0x119a3538 */
  push32((uint32_t)(0x119a3538u));
  /* 119727aa call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119727b0u);
  /* 119727b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119727b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119727b5 call 0x11976460 */
  push32(0x119727bau); f_11976460();
  /* 119727ba mov esi, esp */
  ESI = (ESP);
  /* 119727bc push 1 */
  push32((uint32_t)(0x1u));
  /* 119727be push 0x119a3610 */
  push32((uint32_t)(0x119a3610u));
  /* 119727c3 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119727c9u);
  /* 119727c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119727cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119727ce call 0x11976460 */
  push32(0x119727d3u); f_11976460();
  /* 119727d3 mov esi, esp */
  ESI = (ESP);
  /* 119727d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119727d7 push 0x119a3618 */
  push32((uint32_t)(0x119a3618u));
  /* 119727dc call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119727e2u);
  /* 119727e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119727e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119727e7 call 0x11976460 */
  push32(0x119727ecu); f_11976460();
  /* 119727ec mov esi, esp */
  ESI = (ESP);
  /* 119727ee push 1 */
  push32((uint32_t)(0x1u));
  /* 119727f0 push 0x119a3620 */
  push32((uint32_t)(0x119a3620u));
  /* 119727f5 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119727fbu);
  /* 119727fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119727fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972800 call 0x11976460 */
  push32(0x11972805u); f_11976460();
  /* 11972805 mov esi, esp */
  ESI = (ESP);
  /* 11972807 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972809 push 0x119a3628 */
  push32((uint32_t)(0x119a3628u));
  /* 1197280e call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972814u);
  /* 11972814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972819 call 0x11976460 */
  push32(0x1197281eu); f_11976460();
  /* 1197281e mov esi, esp */
  ESI = (ESP);
  /* 11972820 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972822 push 0x119a3608 */
  push32((uint32_t)(0x119a3608u));
  /* 11972827 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x1197282du);
  /* 1197282d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972832 call 0x11976460 */
  push32(0x11972837u); f_11976460();
  /* 11972837 mov esi, esp */
  ESI = (ESP);
  /* 11972839 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197283b push 0x119a3688 */
  push32((uint32_t)(0x119a3688u));
  /* 11972840 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972846u);
  /* 11972846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197284b call 0x11976460 */
  push32(0x11972850u); f_11976460();
  /* 11972850 mov esi, esp */
  ESI = (ESP);
  /* 11972852 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972854 push 0x119a3690 */
  push32((uint32_t)(0x119a3690u));
  /* 11972859 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x1197285fu);
  /* 1197285f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972864 call 0x11976460 */
  push32(0x11972869u); f_11976460();
  /* 11972869 mov esi, esp */
  ESI = (ESP);
  /* 1197286b push 4 */
  push32((uint32_t)(0x4u));
  /* 1197286d call dword ptr [0x119a6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6484))), 0x11972873u);
  /* 11972873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972878 call 0x11976460 */
  push32(0x1197287du); f_11976460();
  /* 1197287d mov esi, esp */
  ESI = (ESP);
  /* 1197287f push 0 */
  push32((uint32_t)(0x0u));
  /* 11972881 push 0x119a3648 */
  push32((uint32_t)(0x119a3648u));
  /* 11972886 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x1197288cu);
  /* 1197288c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197288f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972891 call 0x11976460 */
  push32(0x11972896u); f_11976460();
  /* 11972896 mov esi, esp */
  ESI = (ESP);
  /* 11972898 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197289a push 0x119a3650 */
  push32((uint32_t)(0x119a3650u));
  /* 1197289f call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119728a5u);
  /* 119728a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119728a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119728aa call 0x11976460 */
  push32(0x119728afu); f_11976460();
  /* 119728af mov esi, esp */
  ESI = (ESP);
  /* 119728b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119728b3 push 0x119a3658 */
  push32((uint32_t)(0x119a3658u));
  /* 119728b8 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119728beu);
  /* 119728be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119728c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119728c3 call 0x11976460 */
  push32(0x119728c8u); f_11976460();
  /* 119728c8 mov esi, esp */
  ESI = (ESP);
  /* 119728ca push 1 */
  push32((uint32_t)(0x1u));
  /* 119728cc push 0x119a3660 */
  push32((uint32_t)(0x119a3660u));
  /* 119728d1 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119728d7u);
  /* 119728d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119728da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119728dc call 0x11976460 */
  push32(0x119728e1u); f_11976460();
  /* 119728e1 mov esi, esp */
  ESI = (ESP);
  /* 119728e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 119728e5 call dword ptr [0x119a6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6484))), 0x119728ebu);
  /* 119728eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119728ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119728f0 call 0x11976460 */
  push32(0x119728f5u); f_11976460();
  /* 119728f5 mov dword ptr [0x119a3718], 0x50 */
  w32((uint32_t)(0x119a3718), (0x50u));
  /* 119728ff mov dword ptr [0x119a3558], 1 */
  w32((uint32_t)(0x119a3558), (0x1u));
  /* 11972909 mov dword ptr [0x119a35a8], 1 */
  w32((uint32_t)(0x119a35a8), (0x1u));
  /* 11972913 mov dword ptr [0x119a35d8], 1 */
  w32((uint32_t)(0x119a35d8), (0x1u));
  /* 1197291d mov dword ptr [0x119a3640], 1 */
  w32((uint32_t)(0x119a3640), (0x1u));
  /* 11972927 mov dword ptr [0x119a3668], 1 */
  w32((uint32_t)(0x119a3668), (0x1u));
  /* 11972931 mov dword ptr [0x119a3698], 1 */
  w32((uint32_t)(0x119a3698), (0x1u));
  /* 1197293b jmp 0x11972e04 */
  goto L_11972e04;
L_11972940:;
  /* 11972940 mov esi, esp */
  ESI = (ESP);
  /* 11972942 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11972947 push 3 */
  push32((uint32_t)(0x3u));
  /* 11972949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197294b call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972951u);
  /* 11972951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972954 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972956 call 0x11976460 */
  push32(0x1197295bu); f_11976460();
  /* 1197295b mov esi, esp */
  ESI = (ESP);
  /* 1197295d push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11972962 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972964 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972966 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x1197296cu);
  /* 1197296c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197296f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972971 call 0x11976460 */
  push32(0x11972976u); f_11976460();
  /* 11972976 mov esi, esp */
  ESI = (ESP);
  /* 11972978 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1197297d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197297f push 0 */
  push32((uint32_t)(0x0u));
  /* 11972981 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972987u);
  /* 11972987 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197298a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197298c call 0x11976460 */
  push32(0x11972991u); f_11976460();
  /* 11972991 mov esi, esp */
  ESI = (ESP);
  /* 11972993 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11972998 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197299a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197299c call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119729a2u);
  /* 119729a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119729a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119729a7 call 0x11976460 */
  push32(0x119729acu); f_11976460();
  /* 119729ac mov esi, esp */
  ESI = (ESP);
  /* 119729ae push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 119729b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 119729b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119729b7 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119729bdu);
  /* 119729bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119729c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119729c2 call 0x11976460 */
  push32(0x119729c7u); f_11976460();
  /* 119729c7 mov esi, esp */
  ESI = (ESP);
  /* 119729c9 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 119729ce push 4 */
  push32((uint32_t)(0x4u));
  /* 119729d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119729d2 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119729d8u);
  /* 119729d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119729db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119729dd call 0x11976460 */
  push32(0x119729e2u); f_11976460();
  /* 119729e2 mov esi, esp */
  ESI = (ESP);
  /* 119729e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119729e6 push 0x119a3610 */
  push32((uint32_t)(0x119a3610u));
  /* 119729eb call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119729f1u);
  /* 119729f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119729f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119729f6 call 0x11976460 */
  push32(0x119729fbu); f_11976460();
  /* 119729fb mov esi, esp */
  ESI = (ESP);
  /* 119729fd push 1 */
  push32((uint32_t)(0x1u));
  /* 119729ff push 0x119a3618 */
  push32((uint32_t)(0x119a3618u));
  /* 11972a04 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972a0au);
  /* 11972a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972a0f call 0x11976460 */
  push32(0x11972a14u); f_11976460();
  /* 11972a14 mov esi, esp */
  ESI = (ESP);
  /* 11972a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972a18 push 0x119a3620 */
  push32((uint32_t)(0x119a3620u));
  /* 11972a1d call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972a23u);
  /* 11972a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972a28 call 0x11976460 */
  push32(0x11972a2du); f_11976460();
  /* 11972a2d mov esi, esp */
  ESI = (ESP);
  /* 11972a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11972a31 push 0x119a3628 */
  push32((uint32_t)(0x119a3628u));
  /* 11972a36 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972a3cu);
  /* 11972a3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972a41 call 0x11976460 */
  push32(0x11972a46u); f_11976460();
  /* 11972a46 mov esi, esp */
  ESI = (ESP);
  /* 11972a48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972a4a push 0x119a3608 */
  push32((uint32_t)(0x119a3608u));
  /* 11972a4f call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972a55u);
  /* 11972a55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972a5a call 0x11976460 */
  push32(0x11972a5fu); f_11976460();
  /* 11972a5f mov esi, esp */
  ESI = (ESP);
  /* 11972a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972a63 push 0x119a3688 */
  push32((uint32_t)(0x119a3688u));
  /* 11972a68 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972a6eu);
  /* 11972a6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972a73 call 0x11976460 */
  push32(0x11972a78u); f_11976460();
  /* 11972a78 mov esi, esp */
  ESI = (ESP);
  /* 11972a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11972a7c push 0x119a3690 */
  push32((uint32_t)(0x119a3690u));
  /* 11972a81 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972a87u);
  /* 11972a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972a8c call 0x11976460 */
  push32(0x11972a91u); f_11976460();
  /* 11972a91 mov esi, esp */
  ESI = (ESP);
  /* 11972a93 push 4 */
  push32((uint32_t)(0x4u));
  /* 11972a95 call dword ptr [0x119a6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6484))), 0x11972a9bu);
  /* 11972a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972a9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972aa0 call 0x11976460 */
  push32(0x11972aa5u); f_11976460();
  /* 11972aa5 mov esi, esp */
  ESI = (ESP);
  /* 11972aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972aa9 push 0x119a3658 */
  push32((uint32_t)(0x119a3658u));
  /* 11972aae call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972ab4u);
  /* 11972ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ab7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972ab9 call 0x11976460 */
  push32(0x11972abeu); f_11976460();
  /* 11972abe mov esi, esp */
  ESI = (ESP);
  /* 11972ac0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972ac2 push 0x119a3660 */
  push32((uint32_t)(0x119a3660u));
  /* 11972ac7 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972acdu);
  /* 11972acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972ad2 call 0x11976460 */
  push32(0x11972ad7u); f_11976460();
  /* 11972ad7 mov esi, esp */
  ESI = (ESP);
  /* 11972ad9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11972adb call dword ptr [0x119a6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6484))), 0x11972ae1u);
  /* 11972ae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972ae6 call 0x11976460 */
  push32(0x11972aebu); f_11976460();
  /* 11972aeb mov dword ptr [0x119a3718], 0x3c */
  w32((uint32_t)(0x119a3718), (0x3cu));
  /* 11972af5 mov dword ptr [0x119a3558], 2 */
  w32((uint32_t)(0x119a3558), (0x2u));
  /* 11972aff mov dword ptr [0x119a35a8], 2 */
  w32((uint32_t)(0x119a35a8), (0x2u));
  /* 11972b09 mov dword ptr [0x119a35d8], 3 */
  w32((uint32_t)(0x119a35d8), (0x3u));
  /* 11972b13 mov dword ptr [0x119a3640], 2 */
  w32((uint32_t)(0x119a3640), (0x2u));
  /* 11972b1d mov dword ptr [0x119a3668], 1 */
  w32((uint32_t)(0x119a3668), (0x1u));
  /* 11972b27 mov dword ptr [0x119a3698], 2 */
  w32((uint32_t)(0x119a3698), (0x2u));
  /* 11972b31 jmp 0x11972e04 */
  goto L_11972e04;
L_11972b36:;
  /* 11972b36 mov esi, esp */
  ESI = (ESP);
  /* 11972b38 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11972b3d push 3 */
  push32((uint32_t)(0x3u));
  /* 11972b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11972b41 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972b47u);
  /* 11972b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972b4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972b4c call 0x11976460 */
  push32(0x11972b51u); f_11976460();
  /* 11972b51 mov esi, esp */
  ESI = (ESP);
  /* 11972b53 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11972b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11972b5c call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972b62u);
  /* 11972b62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972b65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972b67 call 0x11976460 */
  push32(0x11972b6cu); f_11976460();
  /* 11972b6c mov esi, esp */
  ESI = (ESP);
  /* 11972b6e push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11972b73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11972b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972b77 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972b7du);
  /* 11972b7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972b80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972b82 call 0x11976460 */
  push32(0x11972b87u); f_11976460();
  /* 11972b87 mov esi, esp */
  ESI = (ESP);
  /* 11972b89 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11972b8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11972b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972b92 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972b98u);
  /* 11972b98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972b9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972b9d call 0x11976460 */
  push32(0x11972ba2u); f_11976460();
  /* 11972ba2 mov esi, esp */
  ESI = (ESP);
  /* 11972ba4 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11972ba9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11972bab push 0 */
  push32((uint32_t)(0x0u));
  /* 11972bad call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972bb3u);
  /* 11972bb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972bb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972bb8 call 0x11976460 */
  push32(0x11972bbdu); f_11976460();
  /* 11972bbd mov esi, esp */
  ESI = (ESP);
  /* 11972bbf push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11972bc4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11972bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972bc8 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972bceu);
  /* 11972bce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972bd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972bd3 call 0x11976460 */
  push32(0x11972bd8u); f_11976460();
  /* 11972bd8 mov esi, esp */
  ESI = (ESP);
  /* 11972bda push 0 */
  push32((uint32_t)(0x0u));
  /* 11972bdc push 0x119a3610 */
  push32((uint32_t)(0x119a3610u));
  /* 11972be1 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972be7u);
  /* 11972be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972bec call 0x11976460 */
  push32(0x11972bf1u); f_11976460();
  /* 11972bf1 mov esi, esp */
  ESI = (ESP);
  /* 11972bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972bf5 push 0x119a3618 */
  push32((uint32_t)(0x119a3618u));
  /* 11972bfa call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972c00u);
  /* 11972c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972c05 call 0x11976460 */
  push32(0x11972c0au); f_11976460();
  /* 11972c0a mov esi, esp */
  ESI = (ESP);
  /* 11972c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11972c0e push 0x119a3688 */
  push32((uint32_t)(0x119a3688u));
  /* 11972c13 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972c19u);
  /* 11972c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972c1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972c1e call 0x11976460 */
  push32(0x11972c23u); f_11976460();
  /* 11972c23 mov esi, esp */
  ESI = (ESP);
  /* 11972c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972c27 push 0x119a3690 */
  push32((uint32_t)(0x119a3690u));
  /* 11972c2c call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972c32u);
  /* 11972c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972c35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972c37 call 0x11976460 */
  push32(0x11972c3cu); f_11976460();
  /* 11972c3c mov esi, esp */
  ESI = (ESP);
  /* 11972c3e push 4 */
  push32((uint32_t)(0x4u));
  /* 11972c40 call dword ptr [0x119a6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6484))), 0x11972c46u);
  /* 11972c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972c4b call 0x11976460 */
  push32(0x11972c50u); f_11976460();
  /* 11972c50 mov esi, esp */
  ESI = (ESP);
  /* 11972c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972c54 push 0x119a3660 */
  push32((uint32_t)(0x119a3660u));
  /* 11972c59 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11972c5fu);
  /* 11972c5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972c62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972c64 call 0x11976460 */
  push32(0x11972c69u); f_11976460();
  /* 11972c69 mov esi, esp */
  ESI = (ESP);
  /* 11972c6b push 5 */
  push32((uint32_t)(0x5u));
  /* 11972c6d call dword ptr [0x119a6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6484))), 0x11972c73u);
  /* 11972c73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972c78 call 0x11976460 */
  push32(0x11972c7du); f_11976460();
  /* 11972c7d mov dword ptr [0x119a3718], 0x2d */
  w32((uint32_t)(0x119a3718), (0x2du));
  /* 11972c87 mov dword ptr [0x119a3558], 3 */
  w32((uint32_t)(0x119a3558), (0x3u));
  /* 11972c91 mov dword ptr [0x119a35a8], 2 */
  w32((uint32_t)(0x119a35a8), (0x2u));
  /* 11972c9b mov dword ptr [0x119a35d8], 4 */
  w32((uint32_t)(0x119a35d8), (0x4u));
  /* 11972ca5 mov dword ptr [0x119a3640], 3 */
  w32((uint32_t)(0x119a3640), (0x3u));
  /* 11972caf mov dword ptr [0x119a3668], 2 */
  w32((uint32_t)(0x119a3668), (0x2u));
  /* 11972cb9 mov dword ptr [0x119a3698], 1 */
  w32((uint32_t)(0x119a3698), (0x1u));
  /* 11972cc3 jmp 0x11972e04 */
  goto L_11972e04;
L_11972cc8:;
  /* 11972cc8 mov esi, esp */
  ESI = (ESP);
  /* 11972cca push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11972ccf push 3 */
  push32((uint32_t)(0x3u));
  /* 11972cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972cd3 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972cd9u);
  /* 11972cd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972cdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972cde call 0x11976460 */
  push32(0x11972ce3u); f_11976460();
  /* 11972ce3 mov esi, esp */
  ESI = (ESP);
  /* 11972ce5 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11972cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11972cec push 0 */
  push32((uint32_t)(0x0u));
  /* 11972cee call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972cf4u);
  /* 11972cf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972cf9 call 0x11976460 */
  push32(0x11972cfeu); f_11976460();
  /* 11972cfe mov esi, esp */
  ESI = (ESP);
  /* 11972d00 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11972d05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11972d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972d09 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972d0fu);
  /* 11972d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972d12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972d14 call 0x11976460 */
  push32(0x11972d19u); f_11976460();
  /* 11972d19 mov esi, esp */
  ESI = (ESP);
  /* 11972d1b push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11972d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11972d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972d24 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972d2au);
  /* 11972d2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972d2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972d2f call 0x11976460 */
  push32(0x11972d34u); f_11976460();
  /* 11972d34 mov esi, esp */
  ESI = (ESP);
  /* 11972d36 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11972d3b push 5 */
  push32((uint32_t)(0x5u));
  /* 11972d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11972d3f call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972d45u);
  /* 11972d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972d4a call 0x11976460 */
  push32(0x11972d4fu); f_11976460();
  /* 11972d4f mov esi, esp */
  ESI = (ESP);
  /* 11972d51 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11972d56 push 4 */
  push32((uint32_t)(0x4u));
  /* 11972d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972d5a call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11972d60u);
  /* 11972d60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972d63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972d65 call 0x11976460 */
  push32(0x11972d6au); f_11976460();
  /* 11972d6a mov esi, esp */
  ESI = (ESP);
  /* 11972d6c push 0x1199ed7c */
  push32((uint32_t)(0x1199ed7cu));
  /* 11972d71 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11972d76 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11972d7cu);
  /* 11972d7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972d7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972d81 call 0x11976460 */
  push32(0x11972d86u); f_11976460();
  /* 11972d86 mov esi, esp */
  ESI = (ESP);
  /* 11972d88 push 0x1199ed70 */
  push32((uint32_t)(0x1199ed70u));
  /* 11972d8d push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11972d92 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11972d98u);
  /* 11972d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972d9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972d9d call 0x11976460 */
  push32(0x11972da2u); f_11976460();
  /* 11972da2 mov esi, esp */
  ESI = (ESP);
  /* 11972da4 push 0x1199ed64 */
  push32((uint32_t)(0x1199ed64u));
  /* 11972da9 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11972dae call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11972db4u);
  /* 11972db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972db9 call 0x11976460 */
  push32(0x11972dbeu); f_11976460();
  /* 11972dbe mov dword ptr [0x119a3718], 0x1e */
  w32((uint32_t)(0x119a3718), (0x1eu));
  /* 11972dc8 mov dword ptr [0x119a3558], 4 */
  w32((uint32_t)(0x119a3558), (0x4u));
  /* 11972dd2 mov dword ptr [0x119a35a8], 3 */
  w32((uint32_t)(0x119a35a8), (0x3u));
  /* 11972ddc mov dword ptr [0x119a35d8], 5 */
  w32((uint32_t)(0x119a35d8), (0x5u));
  /* 11972de6 mov dword ptr [0x119a3640], 4 */
  w32((uint32_t)(0x119a3640), (0x4u));
  /* 11972df0 mov dword ptr [0x119a3668], 2 */
  w32((uint32_t)(0x119a3668), (0x2u));
  /* 11972dfa mov dword ptr [0x119a3698], 2 */
  w32((uint32_t)(0x119a3698), (0x2u));
L_11972e04:;
  /* 11972e04 mov esi, esp */
  ESI = (ESP);
  /* 11972e06 push 4 */
  push32((uint32_t)(0x4u));
  /* 11972e08 call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x11972e0eu);
  /* 11972e0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972e11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972e13 call 0x11976460 */
  push32(0x11972e18u); f_11976460();
  /* 11972e18 mov esi, esp */
  ESI = (ESP);
  /* 11972e1a push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11972e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11972e21 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972e27u);
  /* 11972e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972e2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972e2c call 0x11976460 */
  push32(0x11972e31u); f_11976460();
  /* 11972e31 mov esi, esp */
  ESI = (ESP);
  /* 11972e33 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11972e38 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11972e3a call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972e40u);
  /* 11972e40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972e43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972e45 call 0x11976460 */
  push32(0x11972e4au); f_11976460();
  /* 11972e4a mov esi, esp */
  ESI = (ESP);
  /* 11972e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11972e4e call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972e54u);
  /* 11972e54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972e57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972e59 call 0x11976460 */
  push32(0x11972e5eu); f_11976460();
  /* 11972e5e mov ecx, 5 */
  ECX = (0x5u);
  /* 11972e63 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972e65 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972e6b mov esi, esp */
  ESI = (ESP);
  /* 11972e6d push ecx */
  push32((uint32_t)(ECX));
  /* 11972e6e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11972e70 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972e76u);
  /* 11972e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972e7b call 0x11976460 */
  push32(0x11972e80u); f_11976460();
  /* 11972e80 mov esi, esp */
  ESI = (ESP);
  /* 11972e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972e84 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972e8au);
  /* 11972e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972e8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972e8f call 0x11976460 */
  push32(0x11972e94u); f_11976460();
  /* 11972e94 mov edx, 5 */
  EDX = (0x5u);
  /* 11972e99 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972e9b imul edx, edx, 0x1770 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1770u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972ea1 mov esi, esp */
  ESI = (ESP);
  /* 11972ea3 push edx */
  push32((uint32_t)(EDX));
  /* 11972ea4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11972ea6 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972eacu);
  /* 11972eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972eb1 call 0x11976460 */
  push32(0x11972eb6u); f_11976460();
  /* 11972eb6 mov esi, esp */
  ESI = (ESP);
  /* 11972eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972eba call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972ec0u);
  /* 11972ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ec3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972ec5 call 0x11976460 */
  push32(0x11972ecau); f_11976460();
  /* 11972eca mov ecx, 5 */
  ECX = (0x5u);
  /* 11972ecf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972ed1 imul ecx, ecx, 0x2328 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2328u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972ed7 mov esi, esp */
  ESI = (ESP);
  /* 11972ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 11972eda push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11972edc call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972ee2u);
  /* 11972ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972ee7 call 0x11976460 */
  push32(0x11972eecu); f_11976460();
  /* 11972eec mov esi, esp */
  ESI = (ESP);
  /* 11972eee push 0 */
  push32((uint32_t)(0x0u));
  /* 11972ef0 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972ef6u);
  /* 11972ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972efb call 0x11976460 */
  push32(0x11972f00u); f_11976460();
  /* 11972f00 mov edx, 5 */
  EDX = (0x5u);
  /* 11972f05 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972f07 imul edx, edx, 0x2ee0 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2ee0u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972f0d mov esi, esp */
  ESI = (ESP);
  /* 11972f0f push edx */
  push32((uint32_t)(EDX));
  /* 11972f10 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11972f12 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972f18u);
  /* 11972f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972f1d call 0x11976460 */
  push32(0x11972f22u); f_11976460();
  /* 11972f22 mov esi, esp */
  ESI = (ESP);
  /* 11972f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972f26 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972f2cu);
  /* 11972f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972f31 call 0x11976460 */
  push32(0x11972f36u); f_11976460();
  /* 11972f36 mov ecx, 5 */
  ECX = (0x5u);
  /* 11972f3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972f3d imul ecx, ecx, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3a98u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972f43 mov esi, esp */
  ESI = (ESP);
  /* 11972f45 push ecx */
  push32((uint32_t)(ECX));
  /* 11972f46 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11972f48 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972f4eu);
  /* 11972f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972f51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972f53 call 0x11976460 */
  push32(0x11972f58u); f_11976460();
  /* 11972f58 mov esi, esp */
  ESI = (ESP);
  /* 11972f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11972f5c call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972f62u);
  /* 11972f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972f65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972f67 call 0x11976460 */
  push32(0x11972f6cu); f_11976460();
  /* 11972f6c mov edx, 5 */
  EDX = (0x5u);
  /* 11972f71 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972f73 imul edx, edx, 0x4650 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x4650u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972f79 mov esi, esp */
  ESI = (ESP);
  /* 11972f7b push edx */
  push32((uint32_t)(EDX));
  /* 11972f7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11972f7e call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972f84u);
  /* 11972f84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972f87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972f89 call 0x11976460 */
  push32(0x11972f8eu); f_11976460();
  /* 11972f8e mov esi, esp */
  ESI = (ESP);
  /* 11972f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972f92 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972f98u);
  /* 11972f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972f9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972f9d call 0x11976460 */
  push32(0x11972fa2u); f_11976460();
  /* 11972fa2 mov ecx, 5 */
  ECX = (0x5u);
  /* 11972fa7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972fa9 imul ecx, ecx, 0x5208 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x5208u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972faf mov esi, esp */
  ESI = (ESP);
  /* 11972fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11972fb2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11972fb4 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972fbau);
  /* 11972fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972fbf call 0x11976460 */
  push32(0x11972fc4u); f_11976460();
  /* 11972fc4 mov esi, esp */
  ESI = (ESP);
  /* 11972fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11972fc8 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11972fceu);
  /* 11972fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972fd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972fd3 call 0x11976460 */
  push32(0x11972fd8u); f_11976460();
  /* 11972fd8 mov edx, 5 */
  EDX = (0x5u);
  /* 11972fdd sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11972fdf imul edx, edx, 0x5dc0 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x5dc0u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11972fe5 mov esi, esp */
  ESI = (ESP);
  /* 11972fe7 push edx */
  push32((uint32_t)(EDX));
  /* 11972fe8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11972fea call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11972ff0u);
  /* 11972ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11972ff3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11972ff5 call 0x11976460 */
  push32(0x11972ffau); f_11976460();
  /* 11972ffa mov esi, esp */
  ESI = (ESP);
  /* 11972ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 11972ffe call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11973004u);
  /* 11973004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973007 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973009 call 0x11976460 */
  push32(0x1197300eu); f_11976460();
  /* 1197300e mov ecx, 5 */
  ECX = (0x5u);
  /* 11973013 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11973015 imul ecx, ecx, 0x6978 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6978u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197301b mov esi, esp */
  ESI = (ESP);
  /* 1197301d push ecx */
  push32((uint32_t)(ECX));
  /* 1197301e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11973020 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11973026u);
  /* 11973026 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197302b call 0x11976460 */
  push32(0x11973030u); f_11976460();
  /* 11973030 mov esi, esp */
  ESI = (ESP);
  /* 11973032 push 0x1199ed4c */
  push32((uint32_t)(0x1199ed4cu));
  /* 11973037 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197303c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973042u);
  /* 11973042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973045 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973047 call 0x11976460 */
  push32(0x1197304cu); f_11976460();
  /* 1197304c mov esi, esp */
  ESI = (ESP);
  /* 1197304e push 0x1199ed44 */
  push32((uint32_t)(0x1199ed44u));
  /* 11973053 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973058 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197305eu);
  /* 1197305e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973061 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973063 call 0x11976460 */
  push32(0x11973068u); f_11976460();
  /* 11973068 mov esi, esp */
  ESI = (ESP);
  /* 1197306a push 0x1199ed2c */
  push32((uint32_t)(0x1199ed2cu));
  /* 1197306f push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973074 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197307au);
  /* 1197307a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197307d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197307f call 0x11976460 */
  push32(0x11973084u); f_11976460();
  /* 11973084 mov esi, esp */
  ESI = (ESP);
  /* 11973086 push 0x1199ed20 */
  push32((uint32_t)(0x1199ed20u));
  /* 1197308b push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973090 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973096u);
  /* 11973096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973099 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197309b call 0x11976460 */
  push32(0x119730a0u); f_11976460();
  /* 119730a0 mov esi, esp */
  ESI = (ESP);
  /* 119730a2 push 0x1199ed14 */
  push32((uint32_t)(0x1199ed14u));
  /* 119730a7 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119730ac call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119730b2u);
  /* 119730b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119730b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119730b7 call 0x11976460 */
  push32(0x119730bcu); f_11976460();
  /* 119730bc mov esi, esp */
  ESI = (ESP);
  /* 119730be push 0x1199ed08 */
  push32((uint32_t)(0x1199ed08u));
  /* 119730c3 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119730c8 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119730ceu);
  /* 119730ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119730d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119730d3 call 0x11976460 */
  push32(0x119730d8u); f_11976460();
  /* 119730d8 mov esi, esp */
  ESI = (ESP);
  /* 119730da push 0x1199ecfc */
  push32((uint32_t)(0x1199ecfcu));
  /* 119730df push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119730e4 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119730eau);
  /* 119730ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119730ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119730ef call 0x11976460 */
  push32(0x119730f4u); f_11976460();
  /* 119730f4 mov esi, esp */
  ESI = (ESP);
  /* 119730f6 push 0x1199ecf0 */
  push32((uint32_t)(0x1199ecf0u));
  /* 119730fb push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973100 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973106u);
  /* 11973106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197310b call 0x11976460 */
  push32(0x11973110u); f_11976460();
  /* 11973110 mov esi, esp */
  ESI = (ESP);
  /* 11973112 push 0x1199ece4 */
  push32((uint32_t)(0x1199ece4u));
  /* 11973117 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197311c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973122u);
  /* 11973122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973127 call 0x11976460 */
  push32(0x1197312cu); f_11976460();
  /* 1197312c mov esi, esp */
  ESI = (ESP);
  /* 1197312e push 0x1199ecd8 */
  push32((uint32_t)(0x1199ecd8u));
  /* 11973133 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973138 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197313eu);
  /* 1197313e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973143 call 0x11976460 */
  push32(0x11973148u); f_11976460();
  /* 11973148 mov esi, esp */
  ESI = (ESP);
  /* 1197314a push 0x1199eccc */
  push32((uint32_t)(0x1199ecccu));
  /* 1197314f push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973154 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197315au);
  /* 1197315a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197315d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197315f call 0x11976460 */
  push32(0x11973164u); f_11976460();
  /* 11973164 mov esi, esp */
  ESI = (ESP);
  /* 11973166 push 0x1199ecc0 */
  push32((uint32_t)(0x1199ecc0u));
  /* 1197316b push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973170 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973176u);
  /* 11973176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973179 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197317b call 0x11976460 */
  push32(0x11973180u); f_11976460();
  /* 11973180 mov esi, esp */
  ESI = (ESP);
  /* 11973182 push 0x1199ecb4 */
  push32((uint32_t)(0x1199ecb4u));
  /* 11973187 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197318c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973192u);
  /* 11973192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973197 call 0x11976460 */
  push32(0x1197319cu); f_11976460();
  /* 1197319c mov esi, esp */
  ESI = (ESP);
  /* 1197319e push 0x1199ec9c */
  push32((uint32_t)(0x1199ec9cu));
  /* 119731a3 push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 119731a8 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119731aeu);
  /* 119731ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119731b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119731b3 call 0x11976460 */
  push32(0x119731b8u); f_11976460();
  /* 119731b8 mov esi, esp */
  ESI = (ESP);
  /* 119731ba push 0x1199ec94 */
  push32((uint32_t)(0x1199ec94u));
  /* 119731bf push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 119731c4 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119731cau);
  /* 119731ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119731cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119731cf call 0x11976460 */
  push32(0x119731d4u); f_11976460();
  /* 119731d4 mov esi, esp */
  ESI = (ESP);
  /* 119731d6 push 0x1199ec7c */
  push32((uint32_t)(0x1199ec7cu));
  /* 119731db push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 119731e0 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119731e6u);
  /* 119731e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119731e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119731eb call 0x11976460 */
  push32(0x119731f0u); f_11976460();
  /* 119731f0 mov esi, esp */
  ESI = (ESP);
  /* 119731f2 push 0x1199ec70 */
  push32((uint32_t)(0x1199ec70u));
  /* 119731f7 push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 119731fc call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973202u);
  /* 11973202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973205 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973207 call 0x11976460 */
  push32(0x1197320cu); f_11976460();
  /* 1197320c mov esi, esp */
  ESI = (ESP);
  /* 1197320e push 0x1199ec64 */
  push32((uint32_t)(0x1199ec64u));
  /* 11973213 push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 11973218 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197321eu);
  /* 1197321e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973223 call 0x11976460 */
  push32(0x11973228u); f_11976460();
  /* 11973228 mov esi, esp */
  ESI = (ESP);
  /* 1197322a push 0x1199ec58 */
  push32((uint32_t)(0x1199ec58u));
  /* 1197322f push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 11973234 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197323au);
  /* 1197323a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197323d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197323f call 0x11976460 */
  push32(0x11973244u); f_11976460();
  /* 11973244 mov esi, esp */
  ESI = (ESP);
  /* 11973246 push 0x1199ec4c */
  push32((uint32_t)(0x1199ec4cu));
  /* 1197324b push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 11973250 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973256u);
  /* 11973256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197325b call 0x11976460 */
  push32(0x11973260u); f_11976460();
  /* 11973260 mov esi, esp */
  ESI = (ESP);
  /* 11973262 push 0x1199ec40 */
  push32((uint32_t)(0x1199ec40u));
  /* 11973267 push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 1197326c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973272u);
  /* 11973272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973277 call 0x11976460 */
  push32(0x1197327cu); f_11976460();
  /* 1197327c mov esi, esp */
  ESI = (ESP);
  /* 1197327e push 0x1199ec34 */
  push32((uint32_t)(0x1199ec34u));
  /* 11973283 push 0x1199e424 */
  push32((uint32_t)(0x1199e424u));
  /* 11973288 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197328eu);
  /* 1197328e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973293 call 0x11976460 */
  push32(0x11973298u); f_11976460();
  /* 11973298 mov esi, esp */
  ESI = (ESP);
  /* 1197329a push 0x1199ec1c */
  push32((uint32_t)(0x1199ec1cu));
  /* 1197329f push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 119732a4 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119732aau);
  /* 119732aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119732ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119732af call 0x11976460 */
  push32(0x119732b4u); f_11976460();
  /* 119732b4 mov esi, esp */
  ESI = (ESP);
  /* 119732b6 push 0x1199ec14 */
  push32((uint32_t)(0x1199ec14u));
  /* 119732bb push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 119732c0 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119732c6u);
  /* 119732c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119732c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119732cb call 0x11976460 */
  push32(0x119732d0u); f_11976460();
  /* 119732d0 mov esi, esp */
  ESI = (ESP);
  /* 119732d2 push 0x1199ebfc */
  push32((uint32_t)(0x1199ebfcu));
  /* 119732d7 push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 119732dc call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119732e2u);
  /* 119732e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119732e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119732e7 call 0x11976460 */
  push32(0x119732ecu); f_11976460();
  /* 119732ec mov esi, esp */
  ESI = (ESP);
  /* 119732ee push 0x1199ebf0 */
  push32((uint32_t)(0x1199ebf0u));
  /* 119732f3 push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 119732f8 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119732feu);
  /* 119732fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973301 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973303 call 0x11976460 */
  push32(0x11973308u); f_11976460();
  /* 11973308 mov esi, esp */
  ESI = (ESP);
  /* 1197330a push 0x1199ebe4 */
  push32((uint32_t)(0x1199ebe4u));
  /* 1197330f push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 11973314 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197331au);
  /* 1197331a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197331d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197331f call 0x11976460 */
  push32(0x11973324u); f_11976460();
  /* 11973324 mov esi, esp */
  ESI = (ESP);
  /* 11973326 push 0x1199ebd8 */
  push32((uint32_t)(0x1199ebd8u));
  /* 1197332b push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 11973330 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973336u);
  /* 11973336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973339 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197333b call 0x11976460 */
  push32(0x11973340u); f_11976460();
  /* 11973340 mov esi, esp */
  ESI = (ESP);
  /* 11973342 push 0x1199ebcc */
  push32((uint32_t)(0x1199ebccu));
  /* 11973347 push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 1197334c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973352u);
  /* 11973352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973357 call 0x11976460 */
  push32(0x1197335cu); f_11976460();
  /* 1197335c mov esi, esp */
  ESI = (ESP);
  /* 1197335e push 0x1199ebc0 */
  push32((uint32_t)(0x1199ebc0u));
  /* 11973363 push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 11973368 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197336eu);
  /* 1197336e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973373 call 0x11976460 */
  push32(0x11973378u); f_11976460();
  /* 11973378 mov esi, esp */
  ESI = (ESP);
  /* 1197337a push 0x1199ebb4 */
  push32((uint32_t)(0x1199ebb4u));
  /* 1197337f push 0x1199e418 */
  push32((uint32_t)(0x1199e418u));
  /* 11973384 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197338au);
  /* 1197338a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197338d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197338f call 0x11976460 */
  push32(0x11973394u); f_11976460();
  /* 11973394 mov esi, esp */
  ESI = (ESP);
  /* 11973396 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1197339b push 3 */
  push32((uint32_t)(0x3u));
  /* 1197339d push 1 */
  push32((uint32_t)(0x1u));
  /* 1197339f call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119733a5u);
  /* 119733a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119733a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119733aa call 0x11976460 */
  push32(0x119733afu); f_11976460();
  /* 119733af mov esi, esp */
  ESI = (ESP);
  /* 119733b1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119733b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119733b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 119733ba call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119733c0u);
  /* 119733c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119733c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119733c5 call 0x11976460 */
  push32(0x119733cau); f_11976460();
  /* 119733ca mov esi, esp */
  ESI = (ESP);
  /* 119733cc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119733d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119733d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119733d5 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119733dbu);
  /* 119733db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119733de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119733e0 call 0x11976460 */
  push32(0x119733e5u); f_11976460();
  /* 119733e5 mov esi, esp */
  ESI = (ESP);
  /* 119733e7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119733ec push 1 */
  push32((uint32_t)(0x1u));
  /* 119733ee push 1 */
  push32((uint32_t)(0x1u));
  /* 119733f0 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x119733f6u);
  /* 119733f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119733f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119733fb call 0x11976460 */
  push32(0x11973400u); f_11976460();
  /* 11973400 mov esi, esp */
  ESI = (ESP);
  /* 11973402 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11973407 push 5 */
  push32((uint32_t)(0x5u));
  /* 11973409 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197340b call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x11973411u);
  /* 11973411 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973414 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973416 call 0x11976460 */
  push32(0x1197341bu); f_11976460();
  /* 1197341b mov esi, esp */
  ESI = (ESP);
  /* 1197341d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11973422 push 4 */
  push32((uint32_t)(0x4u));
  /* 11973424 push 1 */
  push32((uint32_t)(0x1u));
  /* 11973426 call dword ptr [0x119a6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6480))), 0x1197342cu);
  /* 1197342c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197342f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973431 call 0x11976460 */
  push32(0x11973436u); f_11976460();
  /* 11973436 mov esi, esp */
  ESI = (ESP);
  /* 11973438 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197343a call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11973440u);
  /* 11973440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973445 call 0x11976460 */
  push32(0x1197344au); f_11976460();
  /* 1197344a mov esi, esp */
  ESI = (ESP);
  /* 1197344c push eax */
  push32((uint32_t)(EAX));
  /* 1197344d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197344f push 1 */
  push32((uint32_t)(0x1u));
  /* 11973451 push 0 */
  push32((uint32_t)(0x0u));
  /* 11973453 push 0x1199eba8 */
  push32((uint32_t)(0x1199eba8u));
  /* 11973458 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197345a call dword ptr [0x119a6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6488))), 0x11973460u);
  /* 11973460 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973465 call 0x11976460 */
  push32(0x1197346au); f_11976460();
L_1197346a:;
  /* 1197346a mov esi, esp */
  ESI = (ESP);
  /* 1197346c push 0xd */
  push32((uint32_t)(0xdu));
  /* 1197346e call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973474u);
  /* 11973474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973477 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973479 call 0x11976460 */
  push32(0x1197347eu); f_11976460();
  /* 1197347e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973485 je 0x11973671 */
  if (C.zf) goto L_11973671;
  /* 1197348b mov esi, esp */
  ESI = (ESP);
  /* 1197348d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1197348f call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11973495u);
  /* 11973495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973498 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197349a call 0x11976460 */
  push32(0x1197349fu); f_11976460();
  /* 1197349f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119734a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119734a6 je 0x11973671 */
  if (C.zf) goto L_11973671;
  /* 119734ac mov esi, esp */
  ESI = (ESP);
  /* 119734ae push 0 */
  push32((uint32_t)(0x0u));
  /* 119734b0 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x119734b6u);
  /* 119734b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119734b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119734bb call 0x11976460 */
  push32(0x119734c0u); f_11976460();
  /* 119734c0 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119734c3 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119734c7 ja 0x1197363b */
  if ((!C.cf&&!C.zf)) goto L_1197363b;
  /* 119734cd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119734d0 jmp dword ptr [edx*4 + 0x119756b4] */
  switch (EDX) {
    case 0: goto L_119734d7;
    case 1: goto L_11973532;
    case 2: goto L_1197358d;
    case 3: goto L_119735e5;
    default: x86_unimpl("switch@0x119734d0 out of table"); return;
  }
L_119734d7:;
  /* 119734d7 mov eax, dword ptr [0x119a3558] */
  EAX = (r32((uint32_t)(0x119a3558)));
  /* 119734dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119734df mov dword ptr [0x119a3558], eax */
  w32((uint32_t)(0x119a3558), (EAX));
  /* 119734e4 mov ecx, dword ptr [0x119a35a8] */
  ECX = (r32((uint32_t)(0x119a35a8)));
  /* 119734ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119734ed mov dword ptr [0x119a35a8], ecx */
  w32((uint32_t)(0x119a35a8), (ECX));
  /* 119734f3 mov edx, dword ptr [0x119a35d8] */
  EDX = (r32((uint32_t)(0x119a35d8)));
  /* 119734f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119734fc mov dword ptr [0x119a35d8], edx */
  w32((uint32_t)(0x119a35d8), (EDX));
  /* 11973502 mov eax, dword ptr [0x119a3640] */
  EAX = (r32((uint32_t)(0x119a3640)));
  /* 11973507 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197350a mov dword ptr [0x119a3640], eax */
  w32((uint32_t)(0x119a3640), (EAX));
  /* 1197350f mov ecx, dword ptr [0x119a3668] */
  ECX = (r32((uint32_t)(0x119a3668)));
  /* 11973515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973518 mov dword ptr [0x119a3668], ecx */
  w32((uint32_t)(0x119a3668), (ECX));
  /* 1197351e mov edx, dword ptr [0x119a3698] */
  EDX = (r32((uint32_t)(0x119a3698)));
  /* 11973524 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973527 mov dword ptr [0x119a3698], edx */
  w32((uint32_t)(0x119a3698), (EDX));
  /* 1197352d jmp 0x1197363b */
  goto L_1197363b;
L_11973532:;
  /* 11973532 mov eax, dword ptr [0x119a3558] */
  EAX = (r32((uint32_t)(0x119a3558)));
  /* 11973537 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197353a mov dword ptr [0x119a3558], eax */
  w32((uint32_t)(0x119a3558), (EAX));
  /* 1197353f mov ecx, dword ptr [0x119a35a8] */
  ECX = (r32((uint32_t)(0x119a35a8)));
  /* 11973545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973548 mov dword ptr [0x119a35a8], ecx */
  w32((uint32_t)(0x119a35a8), (ECX));
  /* 1197354e mov edx, dword ptr [0x119a35d8] */
  EDX = (r32((uint32_t)(0x119a35d8)));
  /* 11973554 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973557 mov dword ptr [0x119a35d8], edx */
  w32((uint32_t)(0x119a35d8), (EDX));
  /* 1197355d mov eax, dword ptr [0x119a3640] */
  EAX = (r32((uint32_t)(0x119a3640)));
  /* 11973562 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973565 mov dword ptr [0x119a3640], eax */
  w32((uint32_t)(0x119a3640), (EAX));
  /* 1197356a mov ecx, dword ptr [0x119a3668] */
  ECX = (r32((uint32_t)(0x119a3668)));
  /* 11973570 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973573 mov dword ptr [0x119a3668], ecx */
  w32((uint32_t)(0x119a3668), (ECX));
  /* 11973579 mov edx, dword ptr [0x119a3698] */
  EDX = (r32((uint32_t)(0x119a3698)));
  /* 1197357f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973582 mov dword ptr [0x119a3698], edx */
  w32((uint32_t)(0x119a3698), (EDX));
  /* 11973588 jmp 0x1197363b */
  goto L_1197363b;
L_1197358d:;
  /* 1197358d mov eax, dword ptr [0x119a3558] */
  EAX = (r32((uint32_t)(0x119a3558)));
  /* 11973592 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973595 mov dword ptr [0x119a3558], eax */
  w32((uint32_t)(0x119a3558), (EAX));
  /* 1197359a mov ecx, dword ptr [0x119a35a8] */
  ECX = (r32((uint32_t)(0x119a35a8)));
  /* 119735a0 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735a3 mov dword ptr [0x119a35a8], ecx */
  w32((uint32_t)(0x119a35a8), (ECX));
  /* 119735a9 mov edx, dword ptr [0x119a35d8] */
  EDX = (r32((uint32_t)(0x119a35d8)));
  /* 119735af add edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735b2 mov dword ptr [0x119a35d8], edx */
  w32((uint32_t)(0x119a35d8), (EDX));
  /* 119735b8 mov eax, dword ptr [0x119a3640] */
  EAX = (r32((uint32_t)(0x119a3640)));
  /* 119735bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735c0 mov dword ptr [0x119a3640], eax */
  w32((uint32_t)(0x119a3640), (EAX));
  /* 119735c5 mov ecx, dword ptr [0x119a3668] */
  ECX = (r32((uint32_t)(0x119a3668)));
  /* 119735cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735ce mov dword ptr [0x119a3668], ecx */
  w32((uint32_t)(0x119a3668), (ECX));
  /* 119735d4 mov edx, dword ptr [0x119a3698] */
  EDX = (r32((uint32_t)(0x119a3698)));
  /* 119735da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735dd mov dword ptr [0x119a3698], edx */
  w32((uint32_t)(0x119a3698), (EDX));
  /* 119735e3 jmp 0x1197363b */
  goto L_1197363b;
L_119735e5:;
  /* 119735e5 mov eax, dword ptr [0x119a3558] */
  EAX = (r32((uint32_t)(0x119a3558)));
  /* 119735ea add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735ed mov dword ptr [0x119a3558], eax */
  w32((uint32_t)(0x119a3558), (EAX));
  /* 119735f2 mov ecx, dword ptr [0x119a35a8] */
  ECX = (r32((uint32_t)(0x119a35a8)));
  /* 119735f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119735fb mov dword ptr [0x119a35a8], ecx */
  w32((uint32_t)(0x119a35a8), (ECX));
  /* 11973601 mov edx, dword ptr [0x119a35d8] */
  EDX = (r32((uint32_t)(0x119a35d8)));
  /* 11973607 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197360a mov dword ptr [0x119a35d8], edx */
  w32((uint32_t)(0x119a35d8), (EDX));
  /* 11973610 mov eax, dword ptr [0x119a3640] */
  EAX = (r32((uint32_t)(0x119a3640)));
  /* 11973615 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973618 mov dword ptr [0x119a3640], eax */
  w32((uint32_t)(0x119a3640), (EAX));
  /* 1197361d mov ecx, dword ptr [0x119a3668] */
  ECX = (r32((uint32_t)(0x119a3668)));
  /* 11973623 add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973626 mov dword ptr [0x119a3668], ecx */
  w32((uint32_t)(0x119a3668), (ECX));
  /* 1197362c mov edx, dword ptr [0x119a3698] */
  EDX = (r32((uint32_t)(0x119a3698)));
  /* 11973632 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11973635 mov dword ptr [0x119a3698], edx */
  w32((uint32_t)(0x119a3698), (EDX));
L_1197363b:;
  /* 1197363b mov esi, esp */
  ESI = (ESP);
  /* 1197363d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197363f call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11973645u);
  /* 11973645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973648 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197364a call 0x11976460 */
  push32(0x1197364fu); f_11976460();
  /* 1197364f mov ecx, 5 */
  ECX = (0x5u);
  /* 11973654 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11973656 imul ecx, ecx, 0x1f40 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f40u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197365c mov esi, esp */
  ESI = (ESP);
  /* 1197365e push ecx */
  push32((uint32_t)(ECX));
  /* 1197365f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11973661 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11973667u);
  /* 11973667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197366a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197366c call 0x11976460 */
  push32(0x11973671u); f_11976460();
L_11973671:;
  /* 11973671 mov esi, esp */
  ESI = (ESP);
  /* 11973673 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11973675 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x1197367bu);
  /* 1197367b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197367e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973680 call 0x11976460 */
  push32(0x11973685u); f_11976460();
  /* 11973685 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197368a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197368c je 0x119737aa */
  if (C.zf) goto L_119737aa;
  /* 11973692 mov esi, esp */
  ESI = (ESP);
  /* 11973694 push 0x1199eb90 */
  push32((uint32_t)(0x1199eb90u));
  /* 11973699 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197369e call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119736a4u);
  /* 119736a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119736a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119736a9 call 0x11976460 */
  push32(0x119736aeu); f_11976460();
  /* 119736ae mov esi, esp */
  ESI = (ESP);
  /* 119736b0 push 0x1199eb78 */
  push32((uint32_t)(0x1199eb78u));
  /* 119736b5 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119736ba call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119736c0u);
  /* 119736c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119736c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119736c5 call 0x11976460 */
  push32(0x119736cau); f_11976460();
  /* 119736ca mov esi, esp */
  ESI = (ESP);
  /* 119736cc push 0x1199eb60 */
  push32((uint32_t)(0x1199eb60u));
  /* 119736d1 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119736d6 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119736dcu);
  /* 119736dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119736df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119736e1 call 0x11976460 */
  push32(0x119736e6u); f_11976460();
  /* 119736e6 mov esi, esp */
  ESI = (ESP);
  /* 119736e8 push 0x1199eb48 */
  push32((uint32_t)(0x1199eb48u));
  /* 119736ed push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119736f2 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119736f8u);
  /* 119736f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119736fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119736fd call 0x11976460 */
  push32(0x11973702u); f_11976460();
  /* 11973702 mov esi, esp */
  ESI = (ESP);
  /* 11973704 push 0x1199eb2c */
  push32((uint32_t)(0x1199eb2cu));
  /* 11973709 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197370e call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973714u);
  /* 11973714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973719 call 0x11976460 */
  push32(0x1197371eu); f_11976460();
  /* 1197371e mov esi, esp */
  ESI = (ESP);
  /* 11973720 push 0x1199eb10 */
  push32((uint32_t)(0x1199eb10u));
  /* 11973725 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197372a call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973730u);
  /* 11973730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973735 call 0x11976460 */
  push32(0x1197373au); f_11976460();
  /* 1197373a mov esi, esp */
  ESI = (ESP);
  /* 1197373c push 0x1199eaf8 */
  push32((uint32_t)(0x1199eaf8u));
  /* 11973741 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973746 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197374cu);
  /* 1197374c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197374f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973751 call 0x11976460 */
  push32(0x11973756u); f_11976460();
  /* 11973756 mov esi, esp */
  ESI = (ESP);
  /* 11973758 push 0x1199eae0 */
  push32((uint32_t)(0x1199eae0u));
  /* 1197375d push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973762 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973768u);
  /* 11973768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197376b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197376d call 0x11976460 */
  push32(0x11973772u); f_11976460();
  /* 11973772 mov esi, esp */
  ESI = (ESP);
  /* 11973774 push 0x1199eac8 */
  push32((uint32_t)(0x1199eac8u));
  /* 11973779 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197377e call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973784u);
  /* 11973784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973787 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973789 call 0x11976460 */
  push32(0x1197378eu); f_11976460();
  /* 1197378e mov esi, esp */
  ESI = (ESP);
  /* 11973790 push 0x1199eab0 */
  push32((uint32_t)(0x1199eab0u));
  /* 11973795 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197379a call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119737a0u);
  /* 119737a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119737a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119737a5 call 0x11976460 */
  push32(0x119737aau); f_11976460();
L_119737aa:;
  /* 119737aa mov esi, esp */
  ESI = (ESP);
  /* 119737ac push 0xf */
  push32((uint32_t)(0xfu));
  /* 119737ae call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x119737b4u);
  /* 119737b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119737b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119737b9 call 0x11976460 */
  push32(0x119737beu); f_11976460();
  /* 119737be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119737c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119737c5 je 0x119738e3 */
  if (C.zf) goto L_119738e3;
  /* 119737cb mov esi, esp */
  ESI = (ESP);
  /* 119737cd push 0x1199ea94 */
  push32((uint32_t)(0x1199ea94u));
  /* 119737d2 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119737d7 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119737ddu);
  /* 119737dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119737e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119737e2 call 0x11976460 */
  push32(0x119737e7u); f_11976460();
  /* 119737e7 mov esi, esp */
  ESI = (ESP);
  /* 119737e9 push 0x1199ea78 */
  push32((uint32_t)(0x1199ea78u));
  /* 119737ee push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119737f3 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119737f9u);
  /* 119737f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119737fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119737fe call 0x11976460 */
  push32(0x11973803u); f_11976460();
  /* 11973803 mov esi, esp */
  ESI = (ESP);
  /* 11973805 push 0x1199ea60 */
  push32((uint32_t)(0x1199ea60u));
  /* 1197380a push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197380f call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973815u);
  /* 11973815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197381a call 0x11976460 */
  push32(0x1197381fu); f_11976460();
  /* 1197381f mov esi, esp */
  ESI = (ESP);
  /* 11973821 push 0x1199ea48 */
  push32((uint32_t)(0x1199ea48u));
  /* 11973826 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197382b call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973831u);
  /* 11973831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973834 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973836 call 0x11976460 */
  push32(0x1197383bu); f_11976460();
  /* 1197383b mov esi, esp */
  ESI = (ESP);
  /* 1197383d push 0x1199ea2c */
  push32((uint32_t)(0x1199ea2cu));
  /* 11973842 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973847 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197384du);
  /* 1197384d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973850 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973852 call 0x11976460 */
  push32(0x11973857u); f_11976460();
  /* 11973857 mov esi, esp */
  ESI = (ESP);
  /* 11973859 push 0x1199ea10 */
  push32((uint32_t)(0x1199ea10u));
  /* 1197385e push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973863 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973869u);
  /* 11973869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197386c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197386e call 0x11976460 */
  push32(0x11973873u); f_11976460();
  /* 11973873 mov esi, esp */
  ESI = (ESP);
  /* 11973875 push 0x1199e9f8 */
  push32((uint32_t)(0x1199e9f8u));
  /* 1197387a push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197387f call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973885u);
  /* 11973885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973888 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197388a call 0x11976460 */
  push32(0x1197388fu); f_11976460();
  /* 1197388f mov esi, esp */
  ESI = (ESP);
  /* 11973891 push 0x1199e9e0 */
  push32((uint32_t)(0x1199e9e0u));
  /* 11973896 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197389b call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119738a1u);
  /* 119738a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119738a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119738a6 call 0x11976460 */
  push32(0x119738abu); f_11976460();
  /* 119738ab mov esi, esp */
  ESI = (ESP);
  /* 119738ad push 0x1199e9c4 */
  push32((uint32_t)(0x1199e9c4u));
  /* 119738b2 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119738b7 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119738bdu);
  /* 119738bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119738c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119738c2 call 0x11976460 */
  push32(0x119738c7u); f_11976460();
  /* 119738c7 mov esi, esp */
  ESI = (ESP);
  /* 119738c9 push 0x1199e9a8 */
  push32((uint32_t)(0x1199e9a8u));
  /* 119738ce push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119738d3 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119738d9u);
  /* 119738d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119738dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119738de call 0x11976460 */
  push32(0x119738e3u); f_11976460();
L_119738e3:;
  /* 119738e3 mov esi, esp */
  ESI = (ESP);
  /* 119738e5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 119738e7 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x119738edu);
  /* 119738ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119738f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119738f2 call 0x11976460 */
  push32(0x119738f7u); f_11976460();
  /* 119738f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119738fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119738fe je 0x11973a1c */
  if (C.zf) goto L_11973a1c;
  /* 11973904 mov esi, esp */
  ESI = (ESP);
  /* 11973906 push 0x1199e98c */
  push32((uint32_t)(0x1199e98cu));
  /* 1197390b push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973910 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973916u);
  /* 11973916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197391b call 0x11976460 */
  push32(0x11973920u); f_11976460();
  /* 11973920 mov esi, esp */
  ESI = (ESP);
  /* 11973922 push 0x1199e970 */
  push32((uint32_t)(0x1199e970u));
  /* 11973927 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197392c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973932u);
  /* 11973932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973937 call 0x11976460 */
  push32(0x1197393cu); f_11976460();
  /* 1197393c mov esi, esp */
  ESI = (ESP);
  /* 1197393e push 0x1199e958 */
  push32((uint32_t)(0x1199e958u));
  /* 11973943 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973948 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197394eu);
  /* 1197394e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973953 call 0x11976460 */
  push32(0x11973958u); f_11976460();
  /* 11973958 mov esi, esp */
  ESI = (ESP);
  /* 1197395a push 0x1199e940 */
  push32((uint32_t)(0x1199e940u));
  /* 1197395f push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973964 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x1197396au);
  /* 1197396a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197396d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197396f call 0x11976460 */
  push32(0x11973974u); f_11976460();
  /* 11973974 mov esi, esp */
  ESI = (ESP);
  /* 11973976 push 0x1199e924 */
  push32((uint32_t)(0x1199e924u));
  /* 1197397b push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973980 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973986u);
  /* 11973986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973989 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197398b call 0x11976460 */
  push32(0x11973990u); f_11976460();
  /* 11973990 mov esi, esp */
  ESI = (ESP);
  /* 11973992 push 0x1199e908 */
  push32((uint32_t)(0x1199e908u));
  /* 11973997 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 1197399c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119739a2u);
  /* 119739a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119739a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119739a7 call 0x11976460 */
  push32(0x119739acu); f_11976460();
  /* 119739ac mov esi, esp */
  ESI = (ESP);
  /* 119739ae push 0x1199e8f0 */
  push32((uint32_t)(0x1199e8f0u));
  /* 119739b3 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119739b8 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119739beu);
  /* 119739be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119739c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119739c3 call 0x11976460 */
  push32(0x119739c8u); f_11976460();
  /* 119739c8 mov esi, esp */
  ESI = (ESP);
  /* 119739ca push 0x1199e8d8 */
  push32((uint32_t)(0x1199e8d8u));
  /* 119739cf push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119739d4 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119739dau);
  /* 119739da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119739dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119739df call 0x11976460 */
  push32(0x119739e4u); f_11976460();
  /* 119739e4 mov esi, esp */
  ESI = (ESP);
  /* 119739e6 push 0x1199e8bc */
  push32((uint32_t)(0x1199e8bcu));
  /* 119739eb push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 119739f0 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x119739f6u);
  /* 119739f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119739f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119739fb call 0x11976460 */
  push32(0x11973a00u); f_11976460();
  /* 11973a00 mov esi, esp */
  ESI = (ESP);
  /* 11973a02 push 0x1199e8a0 */
  push32((uint32_t)(0x1199e8a0u));
  /* 11973a07 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973a0c call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973a12u);
  /* 11973a12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973a15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973a17 call 0x11976460 */
  push32(0x11973a1cu); f_11976460();
L_11973a1c:;
  /* 11973a1c mov esi, esp */
  ESI = (ESP);
  /* 11973a1e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11973a20 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973a26u);
  /* 11973a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973a29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973a2b call 0x11976460 */
  push32(0x11973a30u); f_11976460();
  /* 11973a30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973a37 je 0x11973b55 */
  if (C.zf) goto L_11973b55;
  /* 11973a3d mov esi, esp */
  ESI = (ESP);
  /* 11973a3f push 0x1199e884 */
  push32((uint32_t)(0x1199e884u));
  /* 11973a44 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973a49 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973a4fu);
  /* 11973a4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973a54 call 0x11976460 */
  push32(0x11973a59u); f_11976460();
  /* 11973a59 mov esi, esp */
  ESI = (ESP);
  /* 11973a5b push 0x1199e868 */
  push32((uint32_t)(0x1199e868u));
  /* 11973a60 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973a65 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973a6bu);
  /* 11973a6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973a6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973a70 call 0x11976460 */
  push32(0x11973a75u); f_11976460();
  /* 11973a75 mov esi, esp */
  ESI = (ESP);
  /* 11973a77 push 0x1199e850 */
  push32((uint32_t)(0x1199e850u));
  /* 11973a7c push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973a81 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973a87u);
  /* 11973a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973a8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973a8c call 0x11976460 */
  push32(0x11973a91u); f_11976460();
  /* 11973a91 mov esi, esp */
  ESI = (ESP);
  /* 11973a93 push 0x1199e838 */
  push32((uint32_t)(0x1199e838u));
  /* 11973a98 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973a9d call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973aa3u);
  /* 11973aa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973aa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973aa8 call 0x11976460 */
  push32(0x11973aadu); f_11976460();
  /* 11973aad mov esi, esp */
  ESI = (ESP);
  /* 11973aaf push 0x1199e81c */
  push32((uint32_t)(0x1199e81cu));
  /* 11973ab4 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973ab9 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973abfu);
  /* 11973abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ac4 call 0x11976460 */
  push32(0x11973ac9u); f_11976460();
  /* 11973ac9 mov esi, esp */
  ESI = (ESP);
  /* 11973acb push 0x1199e800 */
  push32((uint32_t)(0x1199e800u));
  /* 11973ad0 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973ad5 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973adbu);
  /* 11973adb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ade cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ae0 call 0x11976460 */
  push32(0x11973ae5u); f_11976460();
  /* 11973ae5 mov esi, esp */
  ESI = (ESP);
  /* 11973ae7 push 0x1199e7e8 */
  push32((uint32_t)(0x1199e7e8u));
  /* 11973aec push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973af1 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973af7u);
  /* 11973af7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973afa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973afc call 0x11976460 */
  push32(0x11973b01u); f_11976460();
  /* 11973b01 mov esi, esp */
  ESI = (ESP);
  /* 11973b03 push 0x1199e7d0 */
  push32((uint32_t)(0x1199e7d0u));
  /* 11973b08 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973b0d call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973b13u);
  /* 11973b13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973b16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973b18 call 0x11976460 */
  push32(0x11973b1du); f_11976460();
  /* 11973b1d mov esi, esp */
  ESI = (ESP);
  /* 11973b1f push 0x1199e7b4 */
  push32((uint32_t)(0x1199e7b4u));
  /* 11973b24 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973b29 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973b2fu);
  /* 11973b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973b32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973b34 call 0x11976460 */
  push32(0x11973b39u); f_11976460();
  /* 11973b39 mov esi, esp */
  ESI = (ESP);
  /* 11973b3b push 0x1199e798 */
  push32((uint32_t)(0x1199e798u));
  /* 11973b40 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973b45 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973b4bu);
  /* 11973b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973b4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973b50 call 0x11976460 */
  push32(0x11973b55u); f_11976460();
L_11973b55:;
  /* 11973b55 mov esi, esp */
  ESI = (ESP);
  /* 11973b57 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11973b59 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973b5fu);
  /* 11973b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973b62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973b64 call 0x11976460 */
  push32(0x11973b69u); f_11976460();
  /* 11973b69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973b70 je 0x11973c8e */
  if (C.zf) goto L_11973c8e;
  /* 11973b76 mov esi, esp */
  ESI = (ESP);
  /* 11973b78 push 0x1199e77c */
  push32((uint32_t)(0x1199e77cu));
  /* 11973b7d push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973b82 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973b88u);
  /* 11973b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973b8d call 0x11976460 */
  push32(0x11973b92u); f_11976460();
  /* 11973b92 mov esi, esp */
  ESI = (ESP);
  /* 11973b94 push 0x1199e760 */
  push32((uint32_t)(0x1199e760u));
  /* 11973b99 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973b9e call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973ba4u);
  /* 11973ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ba7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ba9 call 0x11976460 */
  push32(0x11973baeu); f_11976460();
  /* 11973bae mov esi, esp */
  ESI = (ESP);
  /* 11973bb0 push 0x1199e748 */
  push32((uint32_t)(0x1199e748u));
  /* 11973bb5 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973bba call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973bc0u);
  /* 11973bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973bc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973bc5 call 0x11976460 */
  push32(0x11973bcau); f_11976460();
  /* 11973bca mov esi, esp */
  ESI = (ESP);
  /* 11973bcc push 0x1199e730 */
  push32((uint32_t)(0x1199e730u));
  /* 11973bd1 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973bd6 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973bdcu);
  /* 11973bdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973bdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973be1 call 0x11976460 */
  push32(0x11973be6u); f_11976460();
  /* 11973be6 mov esi, esp */
  ESI = (ESP);
  /* 11973be8 push 0x1199e714 */
  push32((uint32_t)(0x1199e714u));
  /* 11973bed push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973bf2 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973bf8u);
  /* 11973bf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973bfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973bfd call 0x11976460 */
  push32(0x11973c02u); f_11976460();
  /* 11973c02 mov esi, esp */
  ESI = (ESP);
  /* 11973c04 push 0x1199e6f8 */
  push32((uint32_t)(0x1199e6f8u));
  /* 11973c09 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973c0e call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973c14u);
  /* 11973c14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973c19 call 0x11976460 */
  push32(0x11973c1eu); f_11976460();
  /* 11973c1e mov esi, esp */
  ESI = (ESP);
  /* 11973c20 push 0x1199e6e0 */
  push32((uint32_t)(0x1199e6e0u));
  /* 11973c25 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973c2a call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973c30u);
  /* 11973c30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973c35 call 0x11976460 */
  push32(0x11973c3au); f_11976460();
  /* 11973c3a mov esi, esp */
  ESI = (ESP);
  /* 11973c3c push 0x1199e6c8 */
  push32((uint32_t)(0x1199e6c8u));
  /* 11973c41 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973c46 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973c4cu);
  /* 11973c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973c51 call 0x11976460 */
  push32(0x11973c56u); f_11976460();
  /* 11973c56 mov esi, esp */
  ESI = (ESP);
  /* 11973c58 push 0x1199e6ac */
  push32((uint32_t)(0x1199e6acu));
  /* 11973c5d push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973c62 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973c68u);
  /* 11973c68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973c6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973c6d call 0x11976460 */
  push32(0x11973c72u); f_11976460();
  /* 11973c72 mov esi, esp */
  ESI = (ESP);
  /* 11973c74 push 0x1199e690 */
  push32((uint32_t)(0x1199e690u));
  /* 11973c79 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973c7e call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973c84u);
  /* 11973c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973c89 call 0x11976460 */
  push32(0x11973c8eu); f_11976460();
L_11973c8e:;
  /* 11973c8e mov esi, esp */
  ESI = (ESP);
  /* 11973c90 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11973c92 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973c98u);
  /* 11973c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973c9d call 0x11976460 */
  push32(0x11973ca2u); f_11976460();
  /* 11973ca2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973ca9 je 0x11973e1b */
  if (C.zf) goto L_11973e1b;
  /* 11973caf mov esi, esp */
  ESI = (ESP);
  /* 11973cb1 push 0x1199e674 */
  push32((uint32_t)(0x1199e674u));
  /* 11973cb6 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973cbb call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973cc1u);
  /* 11973cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973cc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973cc6 call 0x11976460 */
  push32(0x11973ccbu); f_11976460();
  /* 11973ccb mov esi, esp */
  ESI = (ESP);
  /* 11973ccd push 0x1199e658 */
  push32((uint32_t)(0x1199e658u));
  /* 11973cd2 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973cd7 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973cddu);
  /* 11973cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ce2 call 0x11976460 */
  push32(0x11973ce7u); f_11976460();
  /* 11973ce7 mov esi, esp */
  ESI = (ESP);
  /* 11973ce9 push 0x1199e640 */
  push32((uint32_t)(0x1199e640u));
  /* 11973cee push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973cf3 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973cf9u);
  /* 11973cf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973cfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973cfe call 0x11976460 */
  push32(0x11973d03u); f_11976460();
  /* 11973d03 mov esi, esp */
  ESI = (ESP);
  /* 11973d05 push 0x1199e628 */
  push32((uint32_t)(0x1199e628u));
  /* 11973d0a push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973d0f call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973d15u);
  /* 11973d15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973d18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973d1a call 0x11976460 */
  push32(0x11973d1fu); f_11976460();
  /* 11973d1f mov esi, esp */
  ESI = (ESP);
  /* 11973d21 push 0x1199e60c */
  push32((uint32_t)(0x1199e60cu));
  /* 11973d26 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973d2b call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973d31u);
  /* 11973d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973d34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973d36 call 0x11976460 */
  push32(0x11973d3bu); f_11976460();
  /* 11973d3b mov esi, esp */
  ESI = (ESP);
  /* 11973d3d push 0x1199e5f0 */
  push32((uint32_t)(0x1199e5f0u));
  /* 11973d42 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973d47 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973d4du);
  /* 11973d4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973d50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973d52 call 0x11976460 */
  push32(0x11973d57u); f_11976460();
  /* 11973d57 mov esi, esp */
  ESI = (ESP);
  /* 11973d59 push 0x1199e5d8 */
  push32((uint32_t)(0x1199e5d8u));
  /* 11973d5e push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973d63 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973d69u);
  /* 11973d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973d6e call 0x11976460 */
  push32(0x11973d73u); f_11976460();
  /* 11973d73 mov esi, esp */
  ESI = (ESP);
  /* 11973d75 push 0x1199e5c0 */
  push32((uint32_t)(0x1199e5c0u));
  /* 11973d7a push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973d7f call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973d85u);
  /* 11973d85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973d8a call 0x11976460 */
  push32(0x11973d8fu); f_11976460();
  /* 11973d8f mov esi, esp */
  ESI = (ESP);
  /* 11973d91 push 0x1199e5a4 */
  push32((uint32_t)(0x1199e5a4u));
  /* 11973d96 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973d9b call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973da1u);
  /* 11973da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973da6 call 0x11976460 */
  push32(0x11973dabu); f_11976460();
  /* 11973dab mov esi, esp */
  ESI = (ESP);
  /* 11973dad push 0x1199e588 */
  push32((uint32_t)(0x1199e588u));
  /* 11973db2 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973db7 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973dbdu);
  /* 11973dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973dc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973dc2 call 0x11976460 */
  push32(0x11973dc7u); f_11976460();
  /* 11973dc7 mov esi, esp */
  ESI = (ESP);
  /* 11973dc9 push 0x1199e57c */
  push32((uint32_t)(0x1199e57cu));
  /* 11973dce push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973dd3 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973dd9u);
  /* 11973dd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973dde call 0x11976460 */
  push32(0x11973de3u); f_11976460();
  /* 11973de3 mov esi, esp */
  ESI = (ESP);
  /* 11973de5 push 0x1199e570 */
  push32((uint32_t)(0x1199e570u));
  /* 11973dea push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973def call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973df5u);
  /* 11973df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973df8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973dfa call 0x11976460 */
  push32(0x11973dffu); f_11976460();
  /* 11973dff mov esi, esp */
  ESI = (ESP);
  /* 11973e01 push 0x1199e564 */
  push32((uint32_t)(0x1199e564u));
  /* 11973e06 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973e0b call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973e11u);
  /* 11973e11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973e16 call 0x11976460 */
  push32(0x11973e1bu); f_11976460();
L_11973e1b:;
  /* 11973e1b mov esi, esp */
  ESI = (ESP);
  /* 11973e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11973e1f call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973e25u);
  /* 11973e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973e28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973e2a call 0x11976460 */
  push32(0x11973e2fu); f_11976460();
  /* 11973e2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973e36 je 0x11973e70 */
  if (C.zf) goto L_11973e70;
  /* 11973e38 mov esi, esp */
  ESI = (ESP);
  /* 11973e3a push 0x1199e558 */
  push32((uint32_t)(0x1199e558u));
  /* 11973e3f push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973e44 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973e4au);
  /* 11973e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973e4f call 0x11976460 */
  push32(0x11973e54u); f_11976460();
  /* 11973e54 mov esi, esp */
  ESI = (ESP);
  /* 11973e56 push 0x1199e54c */
  push32((uint32_t)(0x1199e54cu));
  /* 11973e5b push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973e60 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973e66u);
  /* 11973e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973e6b call 0x11976460 */
  push32(0x11973e70u); f_11976460();
L_11973e70:;
  /* 11973e70 mov esi, esp */
  ESI = (ESP);
  /* 11973e72 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11973e74 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973e7au);
  /* 11973e7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973e7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973e7f call 0x11976460 */
  push32(0x11973e84u); f_11976460();
  /* 11973e84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973e8b je 0x11973ee1 */
  if (C.zf) goto L_11973ee1;
  /* 11973e8d mov esi, esp */
  ESI = (ESP);
  /* 11973e8f push 0x1199e540 */
  push32((uint32_t)(0x1199e540u));
  /* 11973e94 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973e99 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973e9fu);
  /* 11973e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ea2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ea4 call 0x11976460 */
  push32(0x11973ea9u); f_11976460();
  /* 11973ea9 mov esi, esp */
  ESI = (ESP);
  /* 11973eab push 0x1199e534 */
  push32((uint32_t)(0x1199e534u));
  /* 11973eb0 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973eb5 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973ebbu);
  /* 11973ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973ebe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ec0 call 0x11976460 */
  push32(0x11973ec5u); f_11976460();
  /* 11973ec5 mov esi, esp */
  ESI = (ESP);
  /* 11973ec7 push 0x1199e528 */
  push32((uint32_t)(0x1199e528u));
  /* 11973ecc push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973ed1 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973ed7u);
  /* 11973ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973edc call 0x11976460 */
  push32(0x11973ee1u); f_11976460();
L_11973ee1:;
  /* 11973ee1 mov esi, esp */
  ESI = (ESP);
  /* 11973ee3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11973ee5 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11973eebu);
  /* 11973eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973eee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973ef0 call 0x11976460 */
  push32(0x11973ef5u); f_11976460();
  /* 11973ef5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973efc je 0x11973f52 */
  if (C.zf) goto L_11973f52;
  /* 11973efe mov esi, esp */
  ESI = (ESP);
  /* 11973f00 push 0x1199e51c */
  push32((uint32_t)(0x1199e51cu));
  /* 11973f05 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973f0a call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973f10u);
  /* 11973f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973f13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973f15 call 0x11976460 */
  push32(0x11973f1au); f_11976460();
  /* 11973f1a mov esi, esp */
  ESI = (ESP);
  /* 11973f1c push 0x1199e510 */
  push32((uint32_t)(0x1199e510u));
  /* 11973f21 push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973f26 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973f2cu);
  /* 11973f2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973f31 call 0x11976460 */
  push32(0x11973f36u); f_11976460();
  /* 11973f36 mov esi, esp */
  ESI = (ESP);
  /* 11973f38 push 0x1199e504 */
  push32((uint32_t)(0x1199e504u));
  /* 11973f3d push 0x1199e3e0 */
  push32((uint32_t)(0x1199e3e0u));
  /* 11973f42 call dword ptr [0x119a647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a647c))), 0x11973f48u);
  /* 11973f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973f4d call 0x11976460 */
  push32(0x11973f52u); f_11976460();
L_11973f52:;
  /* 11973f52 mov esi, esp */
  ESI = (ESP);
  /* 11973f54 push 3 */
  push32((uint32_t)(0x3u));
  /* 11973f56 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11973f5cu);
  /* 11973f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973f5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973f61 call 0x11976460 */
  push32(0x11973f66u); f_11976460();
  /* 11973f66 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973f6d je 0x11973fd6 */
  if (C.zf) goto L_11973fd6;
  /* 11973f6f mov esi, esp */
  ESI = (ESP);
  /* 11973f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11973f73 push 0x119a3680 */
  push32((uint32_t)(0x119a3680u));
  /* 11973f78 call dword ptr [0x119a649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a649c))), 0x11973f7eu);
  /* 11973f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973f81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973f83 call 0x11976460 */
  push32(0x11973f88u); f_11976460();
  /* 11973f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973f8a jg 0x11973fa9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11973fa9;
  /* 11973f8c mov esi, esp */
  ESI = (ESP);
  /* 11973f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11973f90 push 0x119a3728 */
  push32((uint32_t)(0x119a3728u));
  /* 11973f95 call dword ptr [0x119a649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a649c))), 0x11973f9bu);
  /* 11973f9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973fa0 call 0x11976460 */
  push32(0x11973fa5u); f_11976460();
  /* 11973fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973fa7 jle 0x11973fd6 */
  if ((C.zf||C.sf!=C.of)) goto L_11973fd6;
L_11973fa9:;
  /* 11973fa9 mov esi, esp */
  ESI = (ESP);
  /* 11973fab push 0 */
  push32((uint32_t)(0x0u));
  /* 11973fad push 3 */
  push32((uint32_t)(0x3u));
  /* 11973faf call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11973fb5u);
  /* 11973fb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973fb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973fba call 0x11976460 */
  push32(0x11973fbfu); f_11976460();
  /* 11973fbf mov esi, esp */
  ESI = (ESP);
  /* 11973fc1 push 0x1199e4fc */
  push32((uint32_t)(0x1199e4fcu));
  /* 11973fc6 call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x11973fccu);
  /* 11973fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973fcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973fd1 call 0x11976460 */
  push32(0x11973fd6u); f_11976460();
L_11973fd6:;
  /* 11973fd6 mov esi, esp */
  ESI = (ESP);
  /* 11973fd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11973fda call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11973fe0u);
  /* 11973fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11973fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11973fe5 call 0x11976460 */
  push32(0x11973feau); f_11976460();
  /* 11973fea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11973fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11973ff1 jne 0x1197407f */
  if (!C.zf) goto L_1197407f;
  /* 11973ff7 mov esi, esp */
  ESI = (ESP);
  /* 11973ff9 push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 11973ffe push 0x119a3670 */
  push32((uint32_t)(0x119a3670u));
  /* 11974003 call dword ptr [0x119a64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a4))), 0x11974009u);
  /* 11974009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197400c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197400e call 0x11976460 */
  push32(0x11974013u); f_11976460();
  /* 11974013 mov esi, eax */
  ESI = (EAX);
  /* 11974015 mov edi, esp */
  EDI = (ESP);
  /* 11974017 push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 1197401c call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974022u);
  /* 11974022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974025 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974027 call 0x11976460 */
  push32(0x1197402cu); f_11976460();
  /* 1197402c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197402e jge 0x1197407f */
  if ((C.sf==C.of)) goto L_1197407f;
  /* 11974030 mov esi, esp */
  ESI = (ESP);
  /* 11974032 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974034 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974036 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197403cu);
  /* 1197403c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197403f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974041 call 0x11976460 */
  push32(0x11974046u); f_11976460();
  /* 11974046 mov esi, esp */
  ESI = (ESP);
  /* 11974048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197404a push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 1197404f call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11974055u);
  /* 11974055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974058 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197405a call 0x11976460 */
  push32(0x1197405fu); f_11976460();
  /* 1197405f mov esi, esp */
  ESI = (ESP);
  /* 11974061 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974063 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11974068 push 0x119a3760 */
  push32((uint32_t)(0x119a3760u));
  /* 1197406d push 5 */
  push32((uint32_t)(0x5u));
  /* 1197406f call dword ptr [0x119a64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a0))), 0x11974075u);
  /* 11974075 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974078 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197407a call 0x11976460 */
  push32(0x1197407fu); f_11976460();
L_1197407f:;
  /* 1197407f mov esi, esp */
  ESI = (ESP);
  /* 11974081 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974083 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974089u);
  /* 11974089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197408c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197408e call 0x11976460 */
  push32(0x11974093u); f_11976460();
  /* 11974093 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197409a je 0x11974123 */
  if (C.zf) goto L_11974123;
  /* 119740a0 mov esi, esp */
  ESI = (ESP);
  /* 119740a2 push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 119740a7 push 0x119a3670 */
  push32((uint32_t)(0x119a3670u));
  /* 119740ac call dword ptr [0x119a64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a4))), 0x119740b2u);
  /* 119740b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119740b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119740b7 call 0x11976460 */
  push32(0x119740bcu); f_11976460();
  /* 119740bc mov esi, eax */
  ESI = (EAX);
  /* 119740be mov edi, esp */
  EDI = (ESP);
  /* 119740c0 push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 119740c5 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x119740cbu);
  /* 119740cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119740ce cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119740d0 call 0x11976460 */
  push32(0x119740d5u); f_11976460();
  /* 119740d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119740d7 jne 0x11974123 */
  if (!C.zf) goto L_11974123;
  /* 119740d9 mov esi, esp */
  ESI = (ESP);
  /* 119740db push 0 */
  push32((uint32_t)(0x0u));
  /* 119740dd push 1 */
  push32((uint32_t)(0x1u));
  /* 119740df call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119740e5u);
  /* 119740e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119740e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119740ea call 0x11976460 */
  push32(0x119740efu); f_11976460();
  /* 119740ef mov esi, esp */
  ESI = (ESP);
  /* 119740f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119740f3 push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 119740f8 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119740feu);
  /* 119740fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974101 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974103 call 0x11976460 */
  push32(0x11974108u); f_11976460();
  /* 11974108 mov esi, esp */
  ESI = (ESP);
  /* 1197410a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197410c push 0x119a3758 */
  push32((uint32_t)(0x119a3758u));
  /* 11974111 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974113 call dword ptr [0x119a6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6478))), 0x11974119u);
  /* 11974119 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197411c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197411e call 0x11976460 */
  push32(0x11974123u); f_11976460();
L_11974123:;
  /* 11974123 mov esi, esp */
  ESI = (ESP);
  /* 11974125 push 2 */
  push32((uint32_t)(0x2u));
  /* 11974127 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197412du);
  /* 1197412d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974132 call 0x11976460 */
  push32(0x11974137u); f_11976460();
  /* 11974137 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197413c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197413e je 0x1197420b */
  if (C.zf) goto L_1197420b;
  /* 11974144 mov esi, esp */
  ESI = (ESP);
  /* 11974146 push 0x119a34d0 */
  push32((uint32_t)(0x119a34d0u));
  /* 1197414b call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974151u);
  /* 11974151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974156 call 0x11976460 */
  push32(0x1197415bu); f_11976460();
  /* 1197415b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197415d jne 0x1197420b */
  if (!C.zf) goto L_1197420b;
  /* 11974163 mov esi, esp */
  ESI = (ESP);
  /* 11974165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974167 push 0x119a3670 */
  push32((uint32_t)(0x119a3670u));
  /* 1197416c call dword ptr [0x119a649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a649c))), 0x11974172u);
  /* 11974172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974177 call 0x11976460 */
  push32(0x1197417cu); f_11976460();
  /* 1197417c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197417e jle 0x1197420b */
  if ((C.zf||C.sf!=C.of)) goto L_1197420b;
  /* 11974184 mov esi, esp */
  ESI = (ESP);
  /* 11974186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197418a call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974190u);
  /* 11974190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974195 call 0x11976460 */
  push32(0x1197419au); f_11976460();
  /* 1197419a mov esi, esp */
  ESI = (ESP);
  /* 1197419c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197419e call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x119741a4u);
  /* 119741a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119741a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119741a9 call 0x11976460 */
  push32(0x119741aeu); f_11976460();
  /* 119741ae imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119741b4 mov edx, 0x1f40 */
  EDX = (0x1f40u);
  /* 119741b9 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119741bb mov esi, esp */
  ESI = (ESP);
  /* 119741bd push edx */
  push32((uint32_t)(EDX));
  /* 119741be push 0x1199e4f4 */
  push32((uint32_t)(0x1199e4f4u));
  /* 119741c3 call dword ptr [0x119a64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b0))), 0x119741c9u);
  /* 119741c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119741cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119741ce call 0x11976460 */
  push32(0x119741d3u); f_11976460();
  /* 119741d3 mov esi, esp */
  ESI = (ESP);
  /* 119741d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119741d7 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x119741ddu);
  /* 119741dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119741e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119741e2 call 0x11976460 */
  push32(0x119741e7u); f_11976460();
  /* 119741e7 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119741ed mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 119741f2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119741f4 mov esi, esp */
  ESI = (ESP);
  /* 119741f6 push ecx */
  push32((uint32_t)(ECX));
  /* 119741f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119741f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119741fb call dword ptr [0x119a64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b4))), 0x11974201u);
  /* 11974201 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974206 call 0x11976460 */
  push32(0x1197420bu); f_11976460();
L_1197420b:;
  /* 1197420b mov esi, esp */
  ESI = (ESP);
  /* 1197420d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1197420f call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974215u);
  /* 11974215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974218 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197421a call 0x11976460 */
  push32(0x1197421fu); f_11976460();
  /* 1197421f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974226 jne 0x119742b4 */
  if (!C.zf) goto L_119742b4;
  /* 1197422c mov esi, esp */
  ESI = (ESP);
  /* 1197422e push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 11974233 push 0x119a3678 */
  push32((uint32_t)(0x119a3678u));
  /* 11974238 call dword ptr [0x119a64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a4))), 0x1197423eu);
  /* 1197423e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974243 call 0x11976460 */
  push32(0x11974248u); f_11976460();
  /* 11974248 mov esi, eax */
  ESI = (EAX);
  /* 1197424a mov edi, esp */
  EDI = (ESP);
  /* 1197424c push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 11974251 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974257u);
  /* 11974257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197425a cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197425c call 0x11976460 */
  push32(0x11974261u); f_11976460();
  /* 11974261 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974263 jge 0x119742b4 */
  if ((C.sf==C.of)) goto L_119742b4;
  /* 11974265 mov esi, esp */
  ESI = (ESP);
  /* 11974267 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974269 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1197426b call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974271u);
  /* 11974271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974276 call 0x11976460 */
  push32(0x1197427bu); f_11976460();
  /* 1197427b mov esi, esp */
  ESI = (ESP);
  /* 1197427d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197427f push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 11974284 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x1197428au);
  /* 1197428a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197428d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197428f call 0x11976460 */
  push32(0x11974294u); f_11976460();
  /* 11974294 mov esi, esp */
  ESI = (ESP);
  /* 11974296 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974298 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 1197429d push 0x119a3770 */
  push32((uint32_t)(0x119a3770u));
  /* 119742a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 119742a4 call dword ptr [0x119a64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a0))), 0x119742aau);
  /* 119742aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119742ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119742af call 0x11976460 */
  push32(0x119742b4u); f_11976460();
L_119742b4:;
  /* 119742b4 mov esi, esp */
  ESI = (ESP);
  /* 119742b6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 119742b8 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119742beu);
  /* 119742be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119742c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119742c3 call 0x11976460 */
  push32(0x119742c8u); f_11976460();
  /* 119742c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119742cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119742cf je 0x11974358 */
  if (C.zf) goto L_11974358;
  /* 119742d5 mov esi, esp */
  ESI = (ESP);
  /* 119742d7 push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 119742dc push 0x119a3678 */
  push32((uint32_t)(0x119a3678u));
  /* 119742e1 call dword ptr [0x119a64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a4))), 0x119742e7u);
  /* 119742e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119742ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119742ec call 0x11976460 */
  push32(0x119742f1u); f_11976460();
  /* 119742f1 mov esi, eax */
  ESI = (EAX);
  /* 119742f3 mov edi, esp */
  EDI = (ESP);
  /* 119742f5 push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 119742fa call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974300u);
  /* 11974300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974303 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974305 call 0x11976460 */
  push32(0x1197430au); f_11976460();
  /* 1197430a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197430c jne 0x11974358 */
  if (!C.zf) goto L_11974358;
  /* 1197430e mov esi, esp */
  ESI = (ESP);
  /* 11974310 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974312 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11974314 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197431au);
  /* 1197431a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197431d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197431f call 0x11976460 */
  push32(0x11974324u); f_11976460();
  /* 11974324 mov esi, esp */
  ESI = (ESP);
  /* 11974326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974328 push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 1197432d call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11974333u);
  /* 11974333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974338 call 0x11976460 */
  push32(0x1197433du); f_11976460();
  /* 1197433d mov esi, esp */
  ESI = (ESP);
  /* 1197433f push 0 */
  push32((uint32_t)(0x0u));
  /* 11974341 push 0x119a3768 */
  push32((uint32_t)(0x119a3768u));
  /* 11974346 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974348 call dword ptr [0x119a6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6478))), 0x1197434eu);
  /* 1197434e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974353 call 0x11976460 */
  push32(0x11974358u); f_11976460();
L_11974358:;
  /* 11974358 mov esi, esp */
  ESI = (ESP);
  /* 1197435a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1197435c call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974362u);
  /* 11974362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974365 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974367 call 0x11976460 */
  push32(0x1197436cu); f_11976460();
  /* 1197436c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974373 je 0x11974440 */
  if (C.zf) goto L_11974440;
  /* 11974379 mov esi, esp */
  ESI = (ESP);
  /* 1197437b push 0x119a34c8 */
  push32((uint32_t)(0x119a34c8u));
  /* 11974380 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974386u);
  /* 11974386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197438b call 0x11976460 */
  push32(0x11974390u); f_11976460();
  /* 11974390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974392 jne 0x11974440 */
  if (!C.zf) goto L_11974440;
  /* 11974398 mov esi, esp */
  ESI = (ESP);
  /* 1197439a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197439c push 0x119a3678 */
  push32((uint32_t)(0x119a3678u));
  /* 119743a1 call dword ptr [0x119a649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a649c))), 0x119743a7u);
  /* 119743a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119743aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119743ac call 0x11976460 */
  push32(0x119743b1u); f_11976460();
  /* 119743b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119743b3 jle 0x11974440 */
  if ((C.zf||C.sf!=C.of)) goto L_11974440;
  /* 119743b9 mov esi, esp */
  ESI = (ESP);
  /* 119743bb push 0 */
  push32((uint32_t)(0x0u));
  /* 119743bd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119743bf call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119743c5u);
  /* 119743c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119743c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119743ca call 0x11976460 */
  push32(0x119743cfu); f_11976460();
  /* 119743cf mov esi, esp */
  ESI = (ESP);
  /* 119743d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119743d3 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x119743d9u);
  /* 119743d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119743dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119743de call 0x11976460 */
  push32(0x119743e3u); f_11976460();
  /* 119743e3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119743e9 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 119743ee sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119743f0 mov esi, esp */
  ESI = (ESP);
  /* 119743f2 push edx */
  push32((uint32_t)(EDX));
  /* 119743f3 push 0x1199e4f4 */
  push32((uint32_t)(0x1199e4f4u));
  /* 119743f8 call dword ptr [0x119a64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b0))), 0x119743feu);
  /* 119743fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974401 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974403 call 0x11976460 */
  push32(0x11974408u); f_11976460();
  /* 11974408 mov esi, esp */
  ESI = (ESP);
  /* 1197440a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197440c call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11974412u);
  /* 11974412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974417 call 0x11976460 */
  push32(0x1197441cu); f_11976460();
  /* 1197441c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11974422 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11974427 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11974429 mov esi, esp */
  ESI = (ESP);
  /* 1197442b push ecx */
  push32((uint32_t)(ECX));
  /* 1197442c push 1 */
  push32((uint32_t)(0x1u));
  /* 1197442e push 0 */
  push32((uint32_t)(0x0u));
  /* 11974430 call dword ptr [0x119a64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b4))), 0x11974436u);
  /* 11974436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974439 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197443b call 0x11976460 */
  push32(0x11974440u); f_11976460();
L_11974440:;
  /* 11974440 mov esi, esp */
  ESI = (ESP);
  /* 11974442 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974444 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x1197444au);
  /* 1197444a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197444d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197444f call 0x11976460 */
  push32(0x11974454u); f_11976460();
  /* 11974454 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197445b je 0x119744eb */
  if (C.zf) goto L_119744eb;
  /* 11974461 mov esi, esp */
  ESI = (ESP);
  /* 11974463 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11974465 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197446bu);
  /* 1197446b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197446e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974470 call 0x11976460 */
  push32(0x11974475u); f_11976460();
  /* 11974475 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197447a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197447c je 0x119744eb */
  if (C.zf) goto L_119744eb;
  /* 1197447e mov esi, esp */
  ESI = (ESP);
  /* 11974480 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974482 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11974484 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197448au);
  /* 1197448a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197448d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197448f call 0x11976460 */
  push32(0x11974494u); f_11976460();
  /* 11974494 mov esi, esp */
  ESI = (ESP);
  /* 11974496 mov edx, dword ptr [0x119a3718] */
  EDX = (r32((uint32_t)(0x119a3718)));
  /* 1197449c push edx */
  push32((uint32_t)(EDX));
  /* 1197449d push 0x1199e4e8 */
  push32((uint32_t)(0x1199e4e8u));
  /* 119744a2 call dword ptr [0x119a64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b0))), 0x119744a8u);
  /* 119744a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119744ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119744ad call 0x11976460 */
  push32(0x119744b2u); f_11976460();
  /* 119744b2 mov eax, dword ptr [0x119a3718] */
  EAX = (r32((uint32_t)(0x119a3718)));
  /* 119744b7 imul eax, eax, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x8fcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119744bd mov esi, esp */
  ESI = (ESP);
  /* 119744bf push eax */
  push32((uint32_t)(EAX));
  /* 119744c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119744c2 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x119744c8u);
  /* 119744c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119744cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119744cd call 0x11976460 */
  push32(0x119744d2u); f_11976460();
  /* 119744d2 mov esi, esp */
  ESI = (ESP);
  /* 119744d4 push 0x2cec */
  push32((uint32_t)(0x2cecu));
  /* 119744d9 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 119744db call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x119744e1u);
  /* 119744e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119744e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119744e6 call 0x11976460 */
  push32(0x119744ebu); f_11976460();
L_119744eb:;
  /* 119744eb mov esi, esp */
  ESI = (ESP);
  /* 119744ed push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 119744ef call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x119744f5u);
  /* 119744f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119744f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119744fa call 0x11976460 */
  push32(0x119744ffu); f_11976460();
  /* 119744ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974506 je 0x1197456d */
  if (C.zf) goto L_1197456d;
  /* 11974508 mov ecx, dword ptr [0x119a3718] */
  ECX = (r32((uint32_t)(0x119a3718)));
  /* 1197450e sub ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11974511 mov dword ptr [0x119a3718], ecx */
  w32((uint32_t)(0x119a3718), (ECX));
  /* 11974517 mov esi, esp */
  ESI = (ESP);
  /* 11974519 mov edx, dword ptr [0x119a3718] */
  EDX = (r32((uint32_t)(0x119a3718)));
  /* 1197451f push edx */
  push32((uint32_t)(EDX));
  /* 11974520 push 0x1199e4dc */
  push32((uint32_t)(0x1199e4dcu));
  /* 11974525 call dword ptr [0x119a64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b0))), 0x1197452bu);
  /* 1197452b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197452e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974530 call 0x11976460 */
  push32(0x11974535u); f_11976460();
  /* 11974535 cmp dword ptr [0x119a3718], 5 */
  { uint32_t _a=(r32((uint32_t)(0x119a3718))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197453c jne 0x11974554 */
  if (!C.zf) goto L_11974554;
  /* 1197453e mov esi, esp */
  ESI = (ESP);
  /* 11974540 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11974542 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x11974548u);
  /* 11974548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197454b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197454d call 0x11976460 */
  push32(0x11974552u); f_11976460();
  /* 11974552 jmp 0x1197456d */
  goto L_1197456d;
L_11974554:;
  /* 11974554 mov esi, esp */
  ESI = (ESP);
  /* 11974556 push 0x2cec */
  push32((uint32_t)(0x2cecu));
  /* 1197455b push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1197455d call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974563u);
  /* 11974563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974568 call 0x11976460 */
  push32(0x1197456du); f_11976460();
L_1197456d:;
  /* 1197456d mov esi, esp */
  ESI = (ESP);
  /* 1197456f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11974571 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11974577u);
  /* 11974577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197457a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197457c call 0x11976460 */
  push32(0x11974581u); f_11976460();
  /* 11974581 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974588 je 0x11974679 */
  if (C.zf) goto L_11974679;
  /* 1197458e mov esi, esp */
  ESI = (ESP);
  /* 11974590 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11974592 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974598u);
  /* 11974598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197459b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197459d call 0x11976460 */
  push32(0x119745a2u); f_11976460();
  /* 119745a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119745a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119745a9 je 0x11974679 */
  if (C.zf) goto L_11974679;
  /* 119745af mov esi, esp */
  ESI = (ESP);
  /* 119745b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119745b3 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 119745b5 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119745bbu);
  /* 119745bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119745be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119745c0 call 0x11976460 */
  push32(0x119745c5u); f_11976460();
  /* 119745c5 mov esi, esp */
  ESI = (ESP);
  /* 119745c7 push 0x1199e4d0 */
  push32((uint32_t)(0x1199e4d0u));
  /* 119745cc call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x119745d2u);
  /* 119745d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119745d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119745d7 call 0x11976460 */
  push32(0x119745dcu); f_11976460();
  /* 119745dc mov esi, esp */
  ESI = (ESP);
  /* 119745de push 0 */
  push32((uint32_t)(0x0u));
  /* 119745e0 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x119745e6u);
  /* 119745e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119745e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119745eb call 0x11976460 */
  push32(0x119745f0u); f_11976460();
  /* 119745f0 mov ecx, 5 */
  ECX = (0x5u);
  /* 119745f5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119745f7 imul ecx, ecx, 0x1f40 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f40u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119745fd mov esi, esp */
  ESI = (ESP);
  /* 119745ff push ecx */
  push32((uint32_t)(ECX));
  /* 11974600 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11974602 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974608u);
  /* 11974608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197460b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197460d call 0x11976460 */
  push32(0x11974612u); f_11976460();
  /* 11974612 mov esi, esp */
  ESI = (ESP);
  /* 11974614 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974616 call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x1197461cu);
  /* 1197461c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197461f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974621 call 0x11976460 */
  push32(0x11974626u); f_11976460();
  /* 11974626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974628 je 0x11974643 */
  if (C.zf) goto L_11974643;
  /* 1197462a mov esi, esp */
  ESI = (ESP);
  /* 1197462c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197462e call dword ptr [0x119a6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6470))), 0x11974634u);
  /* 11974634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974639 call 0x11976460 */
  push32(0x1197463eu); f_11976460();
  /* 1197463e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974641 jne 0x11974679 */
  if (!C.zf) goto L_11974679;
L_11974643:;
  /* 11974643 mov esi, esp */
  ESI = (ESP);
  /* 11974645 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974647 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974649 push 0x119a3630 */
  push32((uint32_t)(0x119a3630u));
  /* 1197464e call dword ptr [0x119a64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64bc))), 0x11974654u);
  /* 11974654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974657 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974659 call 0x11976460 */
  push32(0x1197465eu); f_11976460();
  /* 1197465e mov esi, esp */
  ESI = (ESP);
  /* 11974660 push 2 */
  push32((uint32_t)(0x2u));
  /* 11974662 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974664 push 0x119a3638 */
  push32((uint32_t)(0x119a3638u));
  /* 11974669 call dword ptr [0x119a64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64bc))), 0x1197466fu);
  /* 1197466f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974674 call 0x11976460 */
  push32(0x11974679u); f_11976460();
L_11974679:;
  /* 11974679 mov esi, esp */
  ESI = (ESP);
  /* 1197467b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1197467d call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974683u);
  /* 11974683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974688 call 0x11976460 */
  push32(0x1197468du); f_11976460();
  /* 1197468d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974694 je 0x11974726 */
  if (C.zf) goto L_11974726;
  /* 1197469a mov esi, esp */
  ESI = (ESP);
  /* 1197469c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197469e call dword ptr [0x119a64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c0))), 0x119746a4u);
  /* 119746a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119746a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119746a9 call 0x11976460 */
  push32(0x119746aeu); f_11976460();
  /* 119746ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119746b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119746b5 je 0x11974726 */
  if (C.zf) goto L_11974726;
  /* 119746b7 mov esi, esp */
  ESI = (ESP);
  /* 119746b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119746bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 119746bd call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119746c3u);
  /* 119746c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119746c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119746c8 call 0x11976460 */
  push32(0x119746cdu); f_11976460();
  /* 119746cd mov esi, esp */
  ESI = (ESP);
  /* 119746cf push 3 */
  push32((uint32_t)(0x3u));
  /* 119746d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119746d3 call dword ptr [0x119a64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64b8))), 0x119746d9u);
  /* 119746d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119746dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119746de call 0x11976460 */
  push32(0x119746e3u); f_11976460();
  /* 119746e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119746e5 jle 0x11974700 */
  if ((C.zf||C.sf!=C.of)) goto L_11974700;
  /* 119746e7 mov esi, esp */
  ESI = (ESP);
  /* 119746e9 push 0x1199e4c8 */
  push32((uint32_t)(0x1199e4c8u));
  /* 119746ee call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x119746f4u);
  /* 119746f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119746f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119746f9 call 0x11976460 */
  push32(0x119746feu); f_11976460();
  /* 119746fe jmp 0x11974717 */
  goto L_11974717;
L_11974700:;
  /* 11974700 mov esi, esp */
  ESI = (ESP);
  /* 11974702 push 0x1199e4bc */
  push32((uint32_t)(0x1199e4bcu));
  /* 11974707 call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x1197470du);
  /* 1197470d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974712 call 0x11976460 */
  push32(0x11974717u); f_11976460();
L_11974717:;
  /* 11974717 mov esi, esp */
  ESI = (ESP);
  /* 11974719 call dword ptr [0x119a64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c8))), 0x1197471fu);
  /* 1197471f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974721 call 0x11976460 */
  push32(0x11974726u); f_11976460();
L_11974726:;
  /* 11974726 mov esi, esp */
  ESI = (ESP);
  /* 11974728 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1197472a call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974730u);
  /* 11974730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974735 call 0x11976460 */
  push32(0x1197473au); f_11976460();
  /* 1197473a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197473f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974741 je 0x1197479c */
  if (C.zf) goto L_1197479c;
  /* 11974743 mov esi, esp */
  ESI = (ESP);
  /* 11974745 push 2 */
  push32((uint32_t)(0x2u));
  /* 11974747 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x1197474du);
  /* 1197474d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974752 call 0x11976460 */
  push32(0x11974757u); f_11976460();
  /* 11974757 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197475c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197475e je 0x1197479c */
  if (C.zf) goto L_1197479c;
  /* 11974760 mov esi, esp */
  ESI = (ESP);
  /* 11974762 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974764 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11974766 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197476cu);
  /* 1197476c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197476f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974771 call 0x11976460 */
  push32(0x11974776u); f_11976460();
  /* 11974776 mov esi, esp */
  ESI = (ESP);
  /* 11974778 push 0x1199e4b0 */
  push32((uint32_t)(0x1199e4b0u));
  /* 1197477d call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x11974783u);
  /* 11974783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974788 call 0x11976460 */
  push32(0x1197478du); f_11976460();
  /* 1197478d mov esi, esp */
  ESI = (ESP);
  /* 1197478f call dword ptr [0x119a64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c8))), 0x11974795u);
  /* 11974795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974797 call 0x11976460 */
  push32(0x1197479cu); f_11976460();
L_1197479c:;
  /* 1197479c mov esi, esp */
  ESI = (ESP);
  /* 1197479e push 0x119a3478 */
  push32((uint32_t)(0x119a3478u));
  /* 119747a3 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x119747a9u);
  /* 119747a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119747ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119747ae call 0x11976460 */
  push32(0x119747b3u); f_11976460();
  /* 119747b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119747b5 jle 0x11974b0a */
  if ((C.zf||C.sf!=C.of)) goto L_11974b0a;
  /* 119747bb mov esi, esp */
  ESI = (ESP);
  /* 119747bd push 9 */
  push32((uint32_t)(0x9u));
  /* 119747bf call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119747c5u);
  /* 119747c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119747c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119747ca call 0x11976460 */
  push32(0x119747cfu); f_11976460();
  /* 119747cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119747d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119747d6 je 0x11974830 */
  if (C.zf) goto L_11974830;
  /* 119747d8 mov esi, esp */
  ESI = (ESP);
  /* 119747da push 0 */
  push32((uint32_t)(0x0u));
  /* 119747dc push 9 */
  push32((uint32_t)(0x9u));
  /* 119747de call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119747e4u);
  /* 119747e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119747e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119747e9 call 0x11976460 */
  push32(0x119747eeu); f_11976460();
  /* 119747ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119747f5 jmp 0x11974800 */
  goto L_11974800;
L_119747f7:;
  /* 119747f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119747fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119747fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11974800:;
  /* 11974800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11974803 cmp eax, dword ptr [0x119a3558] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a3558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974809 jge 0x11974830 */
  if ((C.sf==C.of)) goto L_11974830;
  /* 1197480b mov esi, esp */
  ESI = (ESP);
  /* 1197480d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197480f push 0x119a3448 */
  push32((uint32_t)(0x119a3448u));
  /* 11974814 push 0x119a34d8 */
  push32((uint32_t)(0x119a34d8u));
  /* 11974819 push 0x119a3478 */
  push32((uint32_t)(0x119a3478u));
  /* 1197481e call dword ptr [0x119a64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64cc))), 0x11974824u);
  /* 11974824 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974827 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974829 call 0x11976460 */
  push32(0x1197482eu); f_11976460();
  /* 1197482e jmp 0x119747f7 */
  goto L_119747f7;
L_11974830:;
  /* 11974830 mov esi, esp */
  ESI = (ESP);
  /* 11974832 push 0xa */
  push32((uint32_t)(0xau));
  /* 11974834 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197483au);
  /* 1197483a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197483d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197483f call 0x11976460 */
  push32(0x11974844u); f_11976460();
  /* 11974844 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197484b je 0x11974899 */
  if (C.zf) goto L_11974899;
  /* 1197484d mov esi, esp */
  ESI = (ESP);
  /* 1197484f push 0x119a3478 */
  push32((uint32_t)(0x119a3478u));
  /* 11974854 call dword ptr [0x119a64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c4))), 0x1197485au);
  /* 1197485a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197485d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197485f call 0x11976460 */
  push32(0x11974864u); f_11976460();
  /* 11974864 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197486b je 0x11974899 */
  if (C.zf) goto L_11974899;
  /* 1197486d mov esi, esp */
  ESI = (ESP);
  /* 1197486f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11974871 push 3 */
  push32((uint32_t)(0x3u));
  /* 11974873 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974879u);
  /* 11974879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197487c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197487e call 0x11976460 */
  push32(0x11974883u); f_11976460();
  /* 11974883 mov esi, esp */
  ESI = (ESP);
  /* 11974885 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974887 push 0xa */
  push32((uint32_t)(0xau));
  /* 11974889 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197488fu);
  /* 1197488f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974894 call 0x11976460 */
  push32(0x11974899u); f_11976460();
L_11974899:;
  /* 11974899 mov esi, esp */
  ESI = (ESP);
  /* 1197489b push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1197489d call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119748a3u);
  /* 119748a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119748a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119748a8 call 0x11976460 */
  push32(0x119748adu); f_11976460();
  /* 119748ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119748b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119748b4 jne 0x11974a6e */
  if (!C.zf) goto L_11974a6e;
  /* 119748ba mov esi, esp */
  ESI = (ESP);
  /* 119748bc push 4 */
  push32((uint32_t)(0x4u));
  /* 119748be call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119748c4u);
  /* 119748c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119748c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119748c9 call 0x11976460 */
  push32(0x119748ceu); f_11976460();
  /* 119748ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119748d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119748d5 je 0x11974a6e */
  if (C.zf) goto L_11974a6e;
  /* 119748db mov esi, esp */
  ESI = (ESP);
  /* 119748dd push 3 */
  push32((uint32_t)(0x3u));
  /* 119748df call dword ptr [0x119a64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d4))), 0x119748e5u);
  /* 119748e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119748e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119748ea call 0x11976460 */
  push32(0x119748efu); f_11976460();
  /* 119748ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119748f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119748f6 je 0x11974a6e */
  if (C.zf) goto L_11974a6e;
  /* 119748fc mov esi, esp */
  ESI = (ESP);
  /* 119748fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11974900 push 4 */
  push32((uint32_t)(0x4u));
  /* 11974902 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974908u);
  /* 11974908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197490b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197490d call 0x11976460 */
  push32(0x11974912u); f_11976460();
  /* 11974912 mov esi, esp */
  ESI = (ESP);
  /* 11974914 push 3 */
  push32((uint32_t)(0x3u));
  /* 11974916 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x1197491cu);
  /* 1197491c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197491f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974921 call 0x11976460 */
  push32(0x11974926u); f_11976460();
  /* 11974926 mov esi, esp */
  ESI = (ESP);
  /* 11974928 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1197492d push 8 */
  push32((uint32_t)(0x8u));
  /* 1197492f call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974935u);
  /* 11974935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197493a call 0x11976460 */
  push32(0x1197493fu); f_11976460();
  /* 1197493f mov esi, esp */
  ESI = (ESP);
  /* 11974941 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974943 push 0xa */
  push32((uint32_t)(0xau));
  /* 11974945 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197494bu);
  /* 1197494b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197494e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974950 call 0x11976460 */
  push32(0x11974955u); f_11976460();
  /* 11974955 mov esi, esp */
  ESI = (ESP);
  /* 11974957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974959 push 0x119a3448 */
  push32((uint32_t)(0x119a3448u));
  /* 1197495e call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11974964u);
  /* 11974964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974969 call 0x11976460 */
  push32(0x1197496eu); f_11976460();
  /* 1197496e mov esi, esp */
  ESI = (ESP);
  /* 11974970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974972 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974974 push 0x119a3418 */
  push32((uint32_t)(0x119a3418u));
  /* 11974979 push 4 */
  push32((uint32_t)(0x4u));
  /* 1197497b call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11974981u);
  /* 11974981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974986 call 0x11976460 */
  push32(0x1197498bu); f_11976460();
  /* 1197498b mov esi, esp */
  ESI = (ESP);
  /* 1197498d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197498f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11974994 push 0x119a36b0 */
  push32((uint32_t)(0x119a36b0u));
  /* 11974999 push 4 */
  push32((uint32_t)(0x4u));
  /* 1197499b call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x119749a1u);
  /* 119749a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119749a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119749a6 call 0x11976460 */
  push32(0x119749abu); f_11976460();
  /* 119749ab mov esi, esp */
  ESI = (ESP);
  /* 119749ad push 2 */
  push32((uint32_t)(0x2u));
  /* 119749af push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 119749b1 push 0x119a36b8 */
  push32((uint32_t)(0x119a36b8u));
  /* 119749b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 119749b8 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x119749beu);
  /* 119749be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119749c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119749c3 call 0x11976460 */
  push32(0x119749c8u); f_11976460();
  /* 119749c8 mov esi, esp */
  ESI = (ESP);
  /* 119749ca push 2 */
  push32((uint32_t)(0x2u));
  /* 119749cc push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 119749d1 push 0x119a36a0 */
  push32((uint32_t)(0x119a36a0u));
  /* 119749d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 119749d8 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x119749deu);
  /* 119749de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119749e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119749e3 call 0x11976460 */
  push32(0x119749e8u); f_11976460();
  /* 119749e8 mov esi, esp */
  ESI = (ESP);
  /* 119749ea push 2 */
  push32((uint32_t)(0x2u));
  /* 119749ec push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 119749f1 push 0x119a36a8 */
  push32((uint32_t)(0x119a36a8u));
  /* 119749f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 119749f8 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x119749feu);
  /* 119749fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a03 call 0x11976460 */
  push32(0x11974a08u); f_11976460();
  /* 11974a08 mov esi, esp */
  ESI = (ESP);
  /* 11974a0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11974a0c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11974a11 push 0x119a3778 */
  push32((uint32_t)(0x119a3778u));
  /* 11974a16 push 4 */
  push32((uint32_t)(0x4u));
  /* 11974a18 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11974a1eu);
  /* 11974a1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a23 call 0x11976460 */
  push32(0x11974a28u); f_11976460();
  /* 11974a28 mov esi, esp */
  ESI = (ESP);
  /* 11974a2a push 0x119a3408 */
  push32((uint32_t)(0x119a3408u));
  /* 11974a2f push 0x119a3448 */
  push32((uint32_t)(0x119a3448u));
  /* 11974a34 call dword ptr [0x119a64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d0))), 0x11974a3au);
  /* 11974a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a3f call 0x11976460 */
  push32(0x11974a44u); f_11976460();
  /* 11974a44 mov esi, esp */
  ESI = (ESP);
  /* 11974a46 push 4 */
  push32((uint32_t)(0x4u));
  /* 11974a48 call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x11974a4eu);
  /* 11974a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a53 call 0x11976460 */
  push32(0x11974a58u); f_11976460();
  /* 11974a58 mov esi, esp */
  ESI = (ESP);
  /* 11974a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11974a5c push 9 */
  push32((uint32_t)(0x9u));
  /* 11974a5e call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974a64u);
  /* 11974a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a69 call 0x11976460 */
  push32(0x11974a6eu); f_11976460();
L_11974a6e:;
  /* 11974a6e mov esi, esp */
  ESI = (ESP);
  /* 11974a70 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11974a72 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974a78u);
  /* 11974a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a7d call 0x11976460 */
  push32(0x11974a82u); f_11976460();
  /* 11974a82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974a89 jne 0x11974b0a */
  if (!C.zf) goto L_11974b0a;
  /* 11974a8b mov esi, esp */
  ESI = (ESP);
  /* 11974a8d push 4 */
  push32((uint32_t)(0x4u));
  /* 11974a8f call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974a95u);
  /* 11974a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974a98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974a9a call 0x11976460 */
  push32(0x11974a9fu); f_11976460();
  /* 11974a9f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974aa6 jne 0x11974b0a */
  if (!C.zf) goto L_11974b0a;
  /* 11974aa8 mov esi, esp */
  ESI = (ESP);
  /* 11974aaa push 0x119a3408 */
  push32((uint32_t)(0x119a3408u));
  /* 11974aaf call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974ab5u);
  /* 11974ab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974ab8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974aba call 0x11976460 */
  push32(0x11974abfu); f_11976460();
  /* 11974abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974ac1 je 0x11974ae0 */
  if (C.zf) goto L_11974ae0;
  /* 11974ac3 mov esi, esp */
  ESI = (ESP);
  /* 11974ac5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11974ac7 call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11974acdu);
  /* 11974acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974ad2 call 0x11976460 */
  push32(0x11974ad7u); f_11976460();
  /* 11974ad7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974ade je 0x11974b0a */
  if (C.zf) goto L_11974b0a;
L_11974ae0:;
  /* 11974ae0 mov esi, esp */
  ESI = (ESP);
  /* 11974ae2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11974ae4 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x11974aeau);
  /* 11974aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974aef call 0x11976460 */
  push32(0x11974af4u); f_11976460();
  /* 11974af4 mov esi, esp */
  ESI = (ESP);
  /* 11974af6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974af8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11974afa call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974b00u);
  /* 11974b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974b03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974b05 call 0x11976460 */
  push32(0x11974b0au); f_11976460();
L_11974b0a:;
  /* 11974b0a mov esi, esp */
  ESI = (ESP);
  /* 11974b0c push 0x119a3480 */
  push32((uint32_t)(0x119a3480u));
  /* 11974b11 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974b17u);
  /* 11974b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974b1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974b1c call 0x11976460 */
  push32(0x11974b21u); f_11976460();
  /* 11974b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974b23 jle 0x11974e1e */
  if ((C.zf||C.sf!=C.of)) goto L_11974e1e;
  /* 11974b29 mov esi, esp */
  ESI = (ESP);
  /* 11974b2b push 0xb */
  push32((uint32_t)(0xbu));
  /* 11974b2d call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974b33u);
  /* 11974b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974b36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974b38 call 0x11976460 */
  push32(0x11974b3du); f_11976460();
  /* 11974b3d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974b44 je 0x11974b9e */
  if (C.zf) goto L_11974b9e;
  /* 11974b46 mov esi, esp */
  ESI = (ESP);
  /* 11974b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974b4a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11974b4c call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974b52u);
  /* 11974b52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974b57 call 0x11976460 */
  push32(0x11974b5cu); f_11976460();
  /* 11974b5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11974b63 jmp 0x11974b6e */
  goto L_11974b6e;
L_11974b65:;
  /* 11974b65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11974b68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11974b6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11974b6e:;
  /* 11974b6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11974b71 cmp edx, dword ptr [0x119a35a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a35a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974b77 jge 0x11974b9e */
  if ((C.sf==C.of)) goto L_11974b9e;
  /* 11974b79 mov esi, esp */
  ESI = (ESP);
  /* 11974b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11974b7d push 0x119a3430 */
  push32((uint32_t)(0x119a3430u));
  /* 11974b82 push 0x119a3470 */
  push32((uint32_t)(0x119a3470u));
  /* 11974b87 push 0x119a3480 */
  push32((uint32_t)(0x119a3480u));
  /* 11974b8c call dword ptr [0x119a64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64cc))), 0x11974b92u);
  /* 11974b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974b97 call 0x11976460 */
  push32(0x11974b9cu); f_11976460();
  /* 11974b9c jmp 0x11974b65 */
  goto L_11974b65;
L_11974b9e:;
  /* 11974b9e mov esi, esp */
  ESI = (ESP);
  /* 11974ba0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11974ba2 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974ba8u);
  /* 11974ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974bab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974bad call 0x11976460 */
  push32(0x11974bb2u); f_11976460();
  /* 11974bb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974bb9 je 0x11974c07 */
  if (C.zf) goto L_11974c07;
  /* 11974bbb mov esi, esp */
  ESI = (ESP);
  /* 11974bbd push 0x119a3480 */
  push32((uint32_t)(0x119a3480u));
  /* 11974bc2 call dword ptr [0x119a64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c4))), 0x11974bc8u);
  /* 11974bc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974bcd call 0x11976460 */
  push32(0x11974bd2u); f_11976460();
  /* 11974bd2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974bd9 je 0x11974c07 */
  if (C.zf) goto L_11974c07;
  /* 11974bdb mov esi, esp */
  ESI = (ESP);
  /* 11974bdd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11974bdf push 4 */
  push32((uint32_t)(0x4u));
  /* 11974be1 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974be7u);
  /* 11974be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974bec call 0x11976460 */
  push32(0x11974bf1u); f_11976460();
  /* 11974bf1 mov esi, esp */
  ESI = (ESP);
  /* 11974bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974bf5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11974bf7 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974bfdu);
  /* 11974bfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974c00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974c02 call 0x11976460 */
  push32(0x11974c07u); f_11976460();
L_11974c07:;
  /* 11974c07 mov esi, esp */
  ESI = (ESP);
  /* 11974c09 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11974c0b call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974c11u);
  /* 11974c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974c16 call 0x11976460 */
  push32(0x11974c1bu); f_11976460();
  /* 11974c1b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974c20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974c22 jne 0x11974d82 */
  if (!C.zf) goto L_11974d82;
  /* 11974c28 mov esi, esp */
  ESI = (ESP);
  /* 11974c2a push 7 */
  push32((uint32_t)(0x7u));
  /* 11974c2c call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974c32u);
  /* 11974c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974c35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974c37 call 0x11976460 */
  push32(0x11974c3cu); f_11976460();
  /* 11974c3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974c43 je 0x11974d82 */
  if (C.zf) goto L_11974d82;
  /* 11974c49 mov esi, esp */
  ESI = (ESP);
  /* 11974c4b push 4 */
  push32((uint32_t)(0x4u));
  /* 11974c4d call dword ptr [0x119a64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d4))), 0x11974c53u);
  /* 11974c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974c56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974c58 call 0x11976460 */
  push32(0x11974c5du); f_11976460();
  /* 11974c5d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974c64 je 0x11974d82 */
  if (C.zf) goto L_11974d82;
  /* 11974c6a mov esi, esp */
  ESI = (ESP);
  /* 11974c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11974c6e push 7 */
  push32((uint32_t)(0x7u));
  /* 11974c70 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974c76u);
  /* 11974c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974c7b call 0x11976460 */
  push32(0x11974c80u); f_11976460();
  /* 11974c80 mov esi, esp */
  ESI = (ESP);
  /* 11974c82 push 4 */
  push32((uint32_t)(0x4u));
  /* 11974c84 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x11974c8au);
  /* 11974c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974c8f call 0x11976460 */
  push32(0x11974c94u); f_11976460();
  /* 11974c94 mov esi, esp */
  ESI = (ESP);
  /* 11974c96 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11974c9b push 9 */
  push32((uint32_t)(0x9u));
  /* 11974c9d call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974ca3u);
  /* 11974ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974ca8 call 0x11976460 */
  push32(0x11974cadu); f_11976460();
  /* 11974cad mov esi, esp */
  ESI = (ESP);
  /* 11974caf push 1 */
  push32((uint32_t)(0x1u));
  /* 11974cb1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11974cb3 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974cb9u);
  /* 11974cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974cbe call 0x11976460 */
  push32(0x11974cc3u); f_11976460();
  /* 11974cc3 mov esi, esp */
  ESI = (ESP);
  /* 11974cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974cc7 push 0x119a3430 */
  push32((uint32_t)(0x119a3430u));
  /* 11974ccc call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11974cd2u);
  /* 11974cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974cd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974cd7 call 0x11976460 */
  push32(0x11974cdcu); f_11976460();
  /* 11974cdc mov esi, esp */
  ESI = (ESP);
  /* 11974cde push 0 */
  push32((uint32_t)(0x0u));
  /* 11974ce0 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11974ce5 push 0x119a3428 */
  push32((uint32_t)(0x119a3428u));
  /* 11974cea push 4 */
  push32((uint32_t)(0x4u));
  /* 11974cec call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11974cf2u);
  /* 11974cf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974cf7 call 0x11976460 */
  push32(0x11974cfcu); f_11976460();
  /* 11974cfc mov esi, esp */
  ESI = (ESP);
  /* 11974cfe push 2 */
  push32((uint32_t)(0x2u));
  /* 11974d00 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11974d05 push 0x119a36d8 */
  push32((uint32_t)(0x119a36d8u));
  /* 11974d0a push 4 */
  push32((uint32_t)(0x4u));
  /* 11974d0c call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11974d12u);
  /* 11974d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974d15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974d17 call 0x11976460 */
  push32(0x11974d1cu); f_11976460();
  /* 11974d1c mov esi, esp */
  ESI = (ESP);
  /* 11974d1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11974d20 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11974d25 push 0x119a36c0 */
  push32((uint32_t)(0x119a36c0u));
  /* 11974d2a push 4 */
  push32((uint32_t)(0x4u));
  /* 11974d2c call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11974d32u);
  /* 11974d32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974d37 call 0x11976460 */
  push32(0x11974d3cu); f_11976460();
  /* 11974d3c mov esi, esp */
  ESI = (ESP);
  /* 11974d3e push 0x119a3400 */
  push32((uint32_t)(0x119a3400u));
  /* 11974d43 push 0x119a3430 */
  push32((uint32_t)(0x119a3430u));
  /* 11974d48 call dword ptr [0x119a64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d0))), 0x11974d4eu);
  /* 11974d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974d53 call 0x11976460 */
  push32(0x11974d58u); f_11976460();
  /* 11974d58 mov esi, esp */
  ESI = (ESP);
  /* 11974d5a push 4 */
  push32((uint32_t)(0x4u));
  /* 11974d5c call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x11974d62u);
  /* 11974d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974d65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974d67 call 0x11976460 */
  push32(0x11974d6cu); f_11976460();
  /* 11974d6c mov esi, esp */
  ESI = (ESP);
  /* 11974d6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11974d70 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11974d72 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974d78u);
  /* 11974d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974d7d call 0x11976460 */
  push32(0x11974d82u); f_11976460();
L_11974d82:;
  /* 11974d82 mov esi, esp */
  ESI = (ESP);
  /* 11974d84 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11974d86 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974d8cu);
  /* 11974d8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974d8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974d91 call 0x11976460 */
  push32(0x11974d96u); f_11976460();
  /* 11974d96 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974d9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974d9d jne 0x11974e1e */
  if (!C.zf) goto L_11974e1e;
  /* 11974d9f mov esi, esp */
  ESI = (ESP);
  /* 11974da1 push 7 */
  push32((uint32_t)(0x7u));
  /* 11974da3 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974da9u);
  /* 11974da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974dae call 0x11976460 */
  push32(0x11974db3u); f_11976460();
  /* 11974db3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974dba jne 0x11974e1e */
  if (!C.zf) goto L_11974e1e;
  /* 11974dbc mov esi, esp */
  ESI = (ESP);
  /* 11974dbe push 0x119a3400 */
  push32((uint32_t)(0x119a3400u));
  /* 11974dc3 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974dc9u);
  /* 11974dc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974dcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974dce call 0x11976460 */
  push32(0x11974dd3u); f_11976460();
  /* 11974dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974dd5 je 0x11974df4 */
  if (C.zf) goto L_11974df4;
  /* 11974dd7 mov esi, esp */
  ESI = (ESP);
  /* 11974dd9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11974ddb call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11974de1u);
  /* 11974de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974de4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974de6 call 0x11976460 */
  push32(0x11974debu); f_11976460();
  /* 11974deb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974df2 je 0x11974e1e */
  if (C.zf) goto L_11974e1e;
L_11974df4:;
  /* 11974df4 mov esi, esp */
  ESI = (ESP);
  /* 11974df6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11974df8 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x11974dfeu);
  /* 11974dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974e01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974e03 call 0x11976460 */
  push32(0x11974e08u); f_11976460();
  /* 11974e08 mov esi, esp */
  ESI = (ESP);
  /* 11974e0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11974e0c push 7 */
  push32((uint32_t)(0x7u));
  /* 11974e0e call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974e14u);
  /* 11974e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974e19 call 0x11976460 */
  push32(0x11974e1eu); f_11976460();
L_11974e1e:;
  /* 11974e1e mov esi, esp */
  ESI = (ESP);
  /* 11974e20 push 0x119a3488 */
  push32((uint32_t)(0x119a3488u));
  /* 11974e25 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11974e2bu);
  /* 11974e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974e30 call 0x11976460 */
  push32(0x11974e35u); f_11976460();
  /* 11974e35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974e37 jle 0x11975112 */
  if ((C.zf||C.sf!=C.of)) goto L_11975112;
  /* 11974e3d mov esi, esp */
  ESI = (ESP);
  /* 11974e3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11974e41 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974e47u);
  /* 11974e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974e4c call 0x11976460 */
  push32(0x11974e51u); f_11976460();
  /* 11974e51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974e58 je 0x11974eb2 */
  if (C.zf) goto L_11974eb2;
  /* 11974e5a mov esi, esp */
  ESI = (ESP);
  /* 11974e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11974e5e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11974e60 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974e66u);
  /* 11974e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974e6b call 0x11976460 */
  push32(0x11974e70u); f_11976460();
  /* 11974e70 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11974e77 jmp 0x11974e82 */
  goto L_11974e82;
L_11974e79:;
  /* 11974e79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11974e7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11974e7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11974e82:;
  /* 11974e82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11974e85 cmp ecx, dword ptr [0x119a35d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a35d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974e8b jge 0x11974eb2 */
  if ((C.sf==C.of)) goto L_11974eb2;
  /* 11974e8d mov esi, esp */
  ESI = (ESP);
  /* 11974e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11974e91 push 0x119a3460 */
  push32((uint32_t)(0x119a3460u));
  /* 11974e96 push 0x119a3720 */
  push32((uint32_t)(0x119a3720u));
  /* 11974e9b push 0x119a3488 */
  push32((uint32_t)(0x119a3488u));
  /* 11974ea0 call dword ptr [0x119a64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64cc))), 0x11974ea6u);
  /* 11974ea6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974ea9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974eab call 0x11976460 */
  push32(0x11974eb0u); f_11976460();
  /* 11974eb0 jmp 0x11974e79 */
  goto L_11974e79;
L_11974eb2:;
  /* 11974eb2 mov esi, esp */
  ESI = (ESP);
  /* 11974eb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974eb6 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974ebcu);
  /* 11974ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974ebf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974ec1 call 0x11976460 */
  push32(0x11974ec6u); f_11976460();
  /* 11974ec6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974ecd je 0x11974f1b */
  if (C.zf) goto L_11974f1b;
  /* 11974ecf mov esi, esp */
  ESI = (ESP);
  /* 11974ed1 push 0x119a3488 */
  push32((uint32_t)(0x119a3488u));
  /* 11974ed6 call dword ptr [0x119a64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c4))), 0x11974edcu);
  /* 11974edc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974edf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974ee1 call 0x11976460 */
  push32(0x11974ee6u); f_11976460();
  /* 11974ee6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974eed je 0x11974f1b */
  if (C.zf) goto L_11974f1b;
  /* 11974eef mov esi, esp */
  ESI = (ESP);
  /* 11974ef1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11974ef3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974ef5 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974efbu);
  /* 11974efb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974efe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974f00 call 0x11976460 */
  push32(0x11974f05u); f_11976460();
  /* 11974f05 mov esi, esp */
  ESI = (ESP);
  /* 11974f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974f09 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974f0b call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974f11u);
  /* 11974f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974f14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974f16 call 0x11976460 */
  push32(0x11974f1bu); f_11976460();
L_11974f1b:;
  /* 11974f1b mov esi, esp */
  ESI = (ESP);
  /* 11974f1d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11974f1f call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974f25u);
  /* 11974f25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974f28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974f2a call 0x11976460 */
  push32(0x11974f2fu); f_11976460();
  /* 11974f2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974f36 jne 0x11975076 */
  if (!C.zf) goto L_11975076;
  /* 11974f3c mov esi, esp */
  ESI = (ESP);
  /* 11974f3e push 8 */
  push32((uint32_t)(0x8u));
  /* 11974f40 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11974f46u);
  /* 11974f46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974f49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974f4b call 0x11976460 */
  push32(0x11974f50u); f_11976460();
  /* 11974f50 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974f57 je 0x11975076 */
  if (C.zf) goto L_11975076;
  /* 11974f5d mov esi, esp */
  ESI = (ESP);
  /* 11974f5f push 5 */
  push32((uint32_t)(0x5u));
  /* 11974f61 call dword ptr [0x119a64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d4))), 0x11974f67u);
  /* 11974f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974f6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974f6c call 0x11976460 */
  push32(0x11974f71u); f_11976460();
  /* 11974f71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11974f76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11974f78 je 0x11975076 */
  if (C.zf) goto L_11975076;
  /* 11974f7e mov esi, esp */
  ESI = (ESP);
  /* 11974f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974f82 push 8 */
  push32((uint32_t)(0x8u));
  /* 11974f84 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974f8au);
  /* 11974f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974f8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974f8f call 0x11976460 */
  push32(0x11974f94u); f_11976460();
  /* 11974f94 mov esi, esp */
  ESI = (ESP);
  /* 11974f96 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974f98 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x11974f9eu);
  /* 11974f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974fa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974fa3 call 0x11976460 */
  push32(0x11974fa8u); f_11976460();
  /* 11974fa8 mov esi, esp */
  ESI = (ESP);
  /* 11974faa push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11974faf push 0xa */
  push32((uint32_t)(0xau));
  /* 11974fb1 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x11974fb7u);
  /* 11974fb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974fba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974fbc call 0x11976460 */
  push32(0x11974fc1u); f_11976460();
  /* 11974fc1 mov esi, esp */
  ESI = (ESP);
  /* 11974fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11974fc5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11974fc7 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11974fcdu);
  /* 11974fcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974fd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974fd2 call 0x11976460 */
  push32(0x11974fd7u); f_11976460();
  /* 11974fd7 mov esi, esp */
  ESI = (ESP);
  /* 11974fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974fdb push 0x119a3460 */
  push32((uint32_t)(0x119a3460u));
  /* 11974fe0 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x11974fe6u);
  /* 11974fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11974fe9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11974feb call 0x11976460 */
  push32(0x11974ff0u); f_11976460();
  /* 11974ff0 mov esi, esp */
  ESI = (ESP);
  /* 11974ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11974ff4 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11974ff9 push 0x119a3440 */
  push32((uint32_t)(0x119a3440u));
  /* 11974ffe push 4 */
  push32((uint32_t)(0x4u));
  /* 11975000 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975006u);
  /* 11975006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197500b call 0x11976460 */
  push32(0x11975010u); f_11976460();
  /* 11975010 mov esi, esp */
  ESI = (ESP);
  /* 11975012 push 2 */
  push32((uint32_t)(0x2u));
  /* 11975014 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11975019 push 0x119a36c0 */
  push32((uint32_t)(0x119a36c0u));
  /* 1197501e push 4 */
  push32((uint32_t)(0x4u));
  /* 11975020 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975026u);
  /* 11975026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197502b call 0x11976460 */
  push32(0x11975030u); f_11976460();
  /* 11975030 mov esi, esp */
  ESI = (ESP);
  /* 11975032 push 0x119a3410 */
  push32((uint32_t)(0x119a3410u));
  /* 11975037 push 0x119a3460 */
  push32((uint32_t)(0x119a3460u));
  /* 1197503c call dword ptr [0x119a64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d0))), 0x11975042u);
  /* 11975042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975045 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975047 call 0x11976460 */
  push32(0x1197504cu); f_11976460();
  /* 1197504c mov esi, esp */
  ESI = (ESP);
  /* 1197504e push 4 */
  push32((uint32_t)(0x4u));
  /* 11975050 call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x11975056u);
  /* 11975056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975059 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197505b call 0x11976460 */
  push32(0x11975060u); f_11976460();
  /* 11975060 mov esi, esp */
  ESI = (ESP);
  /* 11975062 push 1 */
  push32((uint32_t)(0x1u));
  /* 11975064 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11975066 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197506cu);
  /* 1197506c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197506f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975071 call 0x11976460 */
  push32(0x11975076u); f_11976460();
L_11975076:;
  /* 11975076 mov esi, esp */
  ESI = (ESP);
  /* 11975078 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1197507a call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11975080u);
  /* 11975080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975085 call 0x11976460 */
  push32(0x1197508au); f_11976460();
  /* 1197508a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197508f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11975091 jne 0x11975112 */
  if (!C.zf) goto L_11975112;
  /* 11975093 mov esi, esp */
  ESI = (ESP);
  /* 11975095 push 8 */
  push32((uint32_t)(0x8u));
  /* 11975097 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197509du);
  /* 1197509d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119750a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119750a2 call 0x11976460 */
  push32(0x119750a7u); f_11976460();
  /* 119750a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119750ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119750ae jne 0x11975112 */
  if (!C.zf) goto L_11975112;
  /* 119750b0 mov esi, esp */
  ESI = (ESP);
  /* 119750b2 push 0x119a3410 */
  push32((uint32_t)(0x119a3410u));
  /* 119750b7 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x119750bdu);
  /* 119750bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119750c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119750c2 call 0x11976460 */
  push32(0x119750c7u); f_11976460();
  /* 119750c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119750c9 je 0x119750e8 */
  if (C.zf) goto L_119750e8;
  /* 119750cb mov esi, esp */
  ESI = (ESP);
  /* 119750cd push 0xa */
  push32((uint32_t)(0xau));
  /* 119750cf call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x119750d5u);
  /* 119750d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119750d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119750da call 0x11976460 */
  push32(0x119750dfu); f_11976460();
  /* 119750df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119750e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119750e6 je 0x11975112 */
  if (C.zf) goto L_11975112;
L_119750e8:;
  /* 119750e8 mov esi, esp */
  ESI = (ESP);
  /* 119750ea push 0xa */
  push32((uint32_t)(0xau));
  /* 119750ec call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x119750f2u);
  /* 119750f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119750f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119750f7 call 0x11976460 */
  push32(0x119750fcu); f_11976460();
  /* 119750fc mov esi, esp */
  ESI = (ESP);
  /* 119750fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11975100 push 8 */
  push32((uint32_t)(0x8u));
  /* 11975102 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11975108u);
  /* 11975108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197510b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197510d call 0x11976460 */
  push32(0x11975112u); f_11976460();
L_11975112:;
  /* 11975112 mov esi, esp */
  ESI = (ESP);
  /* 11975114 push 0x119a3490 */
  push32((uint32_t)(0x119a3490u));
  /* 11975119 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x1197511fu);
  /* 1197511f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975122 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975124 call 0x11976460 */
  push32(0x11975129u); f_11976460();
  /* 11975129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197512b jle 0x1197547d */
  if ((C.zf||C.sf!=C.of)) goto L_1197547d;
  /* 11975131 mov esi, esp */
  ESI = (ESP);
  /* 11975133 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11975135 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197513bu);
  /* 1197513b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197513e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975140 call 0x11976460 */
  push32(0x11975145u); f_11976460();
  /* 11975145 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197514a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197514c je 0x119751a6 */
  if (C.zf) goto L_119751a6;
  /* 1197514e mov esi, esp */
  ESI = (ESP);
  /* 11975150 push 0 */
  push32((uint32_t)(0x0u));
  /* 11975152 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11975154 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197515au);
  /* 1197515a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197515d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197515f call 0x11976460 */
  push32(0x11975164u); f_11976460();
  /* 11975164 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1197516b jmp 0x11975176 */
  goto L_11975176;
L_1197516d:;
  /* 1197516d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11975170 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11975173 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11975176:;
  /* 11975176 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11975179 cmp eax, dword ptr [0x119a3640] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a3640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197517f jge 0x119751a6 */
  if ((C.sf==C.of)) goto L_119751a6;
  /* 11975181 mov esi, esp */
  ESI = (ESP);
  /* 11975183 push 0 */
  push32((uint32_t)(0x0u));
  /* 11975185 push 0x119a3450 */
  push32((uint32_t)(0x119a3450u));
  /* 1197518a push 0x119a34d8 */
  push32((uint32_t)(0x119a34d8u));
  /* 1197518f push 0x119a3490 */
  push32((uint32_t)(0x119a3490u));
  /* 11975194 call dword ptr [0x119a64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64cc))), 0x1197519au);
  /* 1197519a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197519d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197519f call 0x11976460 */
  push32(0x119751a4u); f_11976460();
  /* 119751a4 jmp 0x1197516d */
  goto L_1197516d;
L_119751a6:;
  /* 119751a6 mov esi, esp */
  ESI = (ESP);
  /* 119751a8 push 6 */
  push32((uint32_t)(0x6u));
  /* 119751aa call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119751b0u);
  /* 119751b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119751b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119751b5 call 0x11976460 */
  push32(0x119751bau); f_11976460();
  /* 119751ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119751bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119751c1 je 0x1197520f */
  if (C.zf) goto L_1197520f;
  /* 119751c3 mov esi, esp */
  ESI = (ESP);
  /* 119751c5 push 0x119a3490 */
  push32((uint32_t)(0x119a3490u));
  /* 119751ca call dword ptr [0x119a64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c4))), 0x119751d0u);
  /* 119751d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119751d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119751d5 call 0x11976460 */
  push32(0x119751dau); f_11976460();
  /* 119751da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119751df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119751e1 je 0x1197520f */
  if (C.zf) goto L_1197520f;
  /* 119751e3 mov esi, esp */
  ESI = (ESP);
  /* 119751e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119751e7 push 6 */
  push32((uint32_t)(0x6u));
  /* 119751e9 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x119751efu);
  /* 119751ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119751f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119751f4 call 0x11976460 */
  push32(0x119751f9u); f_11976460();
  /* 119751f9 mov esi, esp */
  ESI = (ESP);
  /* 119751fb push 0 */
  push32((uint32_t)(0x0u));
  /* 119751fd push 6 */
  push32((uint32_t)(0x6u));
  /* 119751ff call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11975205u);
  /* 11975205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197520a call 0x11976460 */
  push32(0x1197520fu); f_11976460();
L_1197520f:;
  /* 1197520f mov esi, esp */
  ESI = (ESP);
  /* 11975211 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11975213 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11975219u);
  /* 11975219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197521c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197521e call 0x11976460 */
  push32(0x11975223u); f_11976460();
  /* 11975223 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11975228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197522a jne 0x119753e1 */
  if (!C.zf) goto L_119753e1;
  /* 11975230 mov esi, esp */
  ESI = (ESP);
  /* 11975232 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11975234 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197523au);
  /* 1197523a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197523d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197523f call 0x11976460 */
  push32(0x11975244u); f_11976460();
  /* 11975244 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11975249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197524b je 0x119753e1 */
  if (C.zf) goto L_119753e1;
  /* 11975251 mov esi, esp */
  ESI = (ESP);
  /* 11975253 push 6 */
  push32((uint32_t)(0x6u));
  /* 11975255 call dword ptr [0x119a64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d4))), 0x1197525bu);
  /* 1197525b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197525e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975260 call 0x11976460 */
  push32(0x11975265u); f_11976460();
  /* 11975265 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197526a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197526c je 0x119753e1 */
  if (C.zf) goto L_119753e1;
  /* 11975272 mov esi, esp */
  ESI = (ESP);
  /* 11975274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11975276 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11975278 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197527eu);
  /* 1197527e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975281 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975283 call 0x11976460 */
  push32(0x11975288u); f_11976460();
  /* 11975288 mov esi, esp */
  ESI = (ESP);
  /* 1197528a push 6 */
  push32((uint32_t)(0x6u));
  /* 1197528c call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x11975292u);
  /* 11975292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975297 call 0x11976460 */
  push32(0x1197529cu); f_11976460();
  /* 1197529c mov esi, esp */
  ESI = (ESP);
  /* 1197529e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 119752a3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119752a5 call dword ptr [0x119a6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6490))), 0x119752abu);
  /* 119752ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119752ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119752b0 call 0x11976460 */
  push32(0x119752b5u); f_11976460();
  /* 119752b5 mov esi, esp */
  ESI = (ESP);
  /* 119752b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119752b9 push 6 */
  push32((uint32_t)(0x6u));
  /* 119752bb call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119752c1u);
  /* 119752c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119752c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119752c6 call 0x11976460 */
  push32(0x119752cbu); f_11976460();
  /* 119752cb mov esi, esp */
  ESI = (ESP);
  /* 119752cd push 0 */
  push32((uint32_t)(0x0u));
  /* 119752cf push 0x119a3450 */
  push32((uint32_t)(0x119a3450u));
  /* 119752d4 call dword ptr [0x119a6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6464))), 0x119752dau);
  /* 119752da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119752dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119752df call 0x11976460 */
  push32(0x119752e4u); f_11976460();
  /* 119752e4 mov esi, esp */
  ESI = (ESP);
  /* 119752e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119752e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119752ea push 0x119a3420 */
  push32((uint32_t)(0x119a3420u));
  /* 119752ef push 4 */
  push32((uint32_t)(0x4u));
  /* 119752f1 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x119752f7u);
  /* 119752f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119752fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119752fc call 0x11976460 */
  push32(0x11975301u); f_11976460();
  /* 11975301 mov esi, esp */
  ESI = (ESP);
  /* 11975303 push 2 */
  push32((uint32_t)(0x2u));
  /* 11975305 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1197530a push 0x119a36c8 */
  push32((uint32_t)(0x119a36c8u));
  /* 1197530f push 4 */
  push32((uint32_t)(0x4u));
  /* 11975311 call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975317u);
  /* 11975317 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197531a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197531c call 0x11976460 */
  push32(0x11975321u); f_11976460();
  /* 11975321 mov esi, esp */
  ESI = (ESP);
  /* 11975323 push 2 */
  push32((uint32_t)(0x2u));
  /* 11975325 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11975327 push 0x119a36e0 */
  push32((uint32_t)(0x119a36e0u));
  /* 1197532c push 4 */
  push32((uint32_t)(0x4u));
  /* 1197532e call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975334u);
  /* 11975334 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975339 call 0x11976460 */
  push32(0x1197533eu); f_11976460();
  /* 1197533e mov esi, esp */
  ESI = (ESP);
  /* 11975340 push 2 */
  push32((uint32_t)(0x2u));
  /* 11975342 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11975347 push 0x119a3788 */
  push32((uint32_t)(0x119a3788u));
  /* 1197534c push 4 */
  push32((uint32_t)(0x4u));
  /* 1197534e call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975354u);
  /* 11975354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975357 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975359 call 0x11976460 */
  push32(0x1197535eu); f_11976460();
  /* 1197535e mov esi, esp */
  ESI = (ESP);
  /* 11975360 push 2 */
  push32((uint32_t)(0x2u));
  /* 11975362 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11975367 push 0x119a3780 */
  push32((uint32_t)(0x119a3780u));
  /* 1197536c push 4 */
  push32((uint32_t)(0x4u));
  /* 1197536e call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975374u);
  /* 11975374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975379 call 0x11976460 */
  push32(0x1197537eu); f_11976460();
  /* 1197537e mov esi, esp */
  ESI = (ESP);
  /* 11975380 push 2 */
  push32((uint32_t)(0x2u));
  /* 11975382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11975384 push 0x119a36d0 */
  push32((uint32_t)(0x119a36d0u));
  /* 11975389 push 4 */
  push32((uint32_t)(0x4u));
  /* 1197538b call dword ptr [0x119a64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d8))), 0x11975391u);
  /* 11975391 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975394 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975396 call 0x11976460 */
  push32(0x1197539bu); f_11976460();
  /* 1197539b mov esi, esp */
  ESI = (ESP);
  /* 1197539d push 0x119a3550 */
  push32((uint32_t)(0x119a3550u));
  /* 119753a2 push 0x119a3450 */
  push32((uint32_t)(0x119a3450u));
  /* 119753a7 call dword ptr [0x119a64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64d0))), 0x119753adu);
  /* 119753ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119753b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119753b2 call 0x11976460 */
  push32(0x119753b7u); f_11976460();
  /* 119753b7 mov esi, esp */
  ESI = (ESP);
  /* 119753b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 119753bb call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x119753c1u);
  /* 119753c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119753c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119753c6 call 0x11976460 */
  push32(0x119753cbu); f_11976460();
  /* 119753cb mov esi, esp */
  ESI = (ESP);
  /* 119753cd push 1 */
  push32((uint32_t)(0x1u));
  /* 119753cf push 0xe */
  push32((uint32_t)(0xeu));
  /* 119753d1 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119753d7u);
  /* 119753d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119753da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119753dc call 0x11976460 */
  push32(0x119753e1u); f_11976460();
L_119753e1:;
  /* 119753e1 mov esi, esp */
  ESI = (ESP);
  /* 119753e3 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 119753e5 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119753ebu);
  /* 119753eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119753ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119753f0 call 0x11976460 */
  push32(0x119753f5u); f_11976460();
  /* 119753f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119753fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119753fc jne 0x1197547d */
  if (!C.zf) goto L_1197547d;
  /* 119753fe mov esi, esp */
  ESI = (ESP);
  /* 11975400 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11975402 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11975408u);
  /* 11975408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197540b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197540d call 0x11976460 */
  push32(0x11975412u); f_11976460();
  /* 11975412 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11975417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11975419 jne 0x1197547d */
  if (!C.zf) goto L_1197547d;
  /* 1197541b mov esi, esp */
  ESI = (ESP);
  /* 1197541d push 0x119a3550 */
  push32((uint32_t)(0x119a3550u));
  /* 11975422 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x11975428u);
  /* 11975428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197542b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197542d call 0x11976460 */
  push32(0x11975432u); f_11976460();
  /* 11975432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11975434 je 0x11975453 */
  if (C.zf) goto L_11975453;
  /* 11975436 mov esi, esp */
  ESI = (ESP);
  /* 11975438 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1197543a call dword ptr [0x119a6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6498))), 0x11975440u);
  /* 11975440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975445 call 0x11976460 */
  push32(0x1197544au); f_11976460();
  /* 1197544a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197544f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11975451 je 0x1197547d */
  if (C.zf) goto L_1197547d;
L_11975453:;
  /* 11975453 mov esi, esp */
  ESI = (ESP);
  /* 11975455 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11975457 call dword ptr [0x119a64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64ac))), 0x1197545du);
  /* 1197545d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975462 call 0x11976460 */
  push32(0x11975467u); f_11976460();
  /* 11975467 mov esi, esp */
  ESI = (ESP);
  /* 11975469 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197546b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1197546d call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11975473u);
  /* 11975473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975476 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975478 call 0x11976460 */
  push32(0x1197547du); f_11976460();
L_1197547d:;
  /* 1197547d mov esi, esp */
  ESI = (ESP);
  /* 1197547f push 4 */
  push32((uint32_t)(0x4u));
  /* 11975481 call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x11975487u);
  /* 11975487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197548a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197548c call 0x11976460 */
  push32(0x11975491u); f_11976460();
  /* 11975491 mov esi, esp */
  ESI = (ESP);
  /* 11975493 push 0 */
  push32((uint32_t)(0x0u));
  /* 11975495 push 4 */
  push32((uint32_t)(0x4u));
  /* 11975497 push 0x119a3708 */
  push32((uint32_t)(0x119a3708u));
  /* 1197549c call dword ptr [0x119a64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e0))), 0x119754a2u);
  /* 119754a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119754a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119754a7 call 0x11976460 */
  push32(0x119754acu); f_11976460();
  /* 119754ac mov esi, esp */
  ESI = (ESP);
  /* 119754ae push 1 */
  push32((uint32_t)(0x1u));
  /* 119754b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 119754b2 push 0x119a3700 */
  push32((uint32_t)(0x119a3700u));
  /* 119754b7 call dword ptr [0x119a64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e0))), 0x119754bdu);
  /* 119754bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119754c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119754c2 call 0x11976460 */
  push32(0x119754c7u); f_11976460();
  /* 119754c7 mov esi, esp */
  ESI = (ESP);
  /* 119754c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 119754cb push 4 */
  push32((uint32_t)(0x4u));
  /* 119754cd push 0x119a3710 */
  push32((uint32_t)(0x119a3710u));
  /* 119754d2 call dword ptr [0x119a64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e0))), 0x119754d8u);
  /* 119754d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119754db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119754dd call 0x11976460 */
  push32(0x119754e2u); f_11976460();
  /* 119754e2 mov esi, esp */
  ESI = (ESP);
  /* 119754e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119754e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 119754e8 push 0x119a3438 */
  push32((uint32_t)(0x119a3438u));
  /* 119754ed call dword ptr [0x119a64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e0))), 0x119754f3u);
  /* 119754f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119754f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119754f8 call 0x11976460 */
  push32(0x119754fdu); f_11976460();
  /* 119754fd mov esi, esp */
  ESI = (ESP);
  /* 119754ff push 4 */
  push32((uint32_t)(0x4u));
  /* 11975501 call dword ptr [0x119a64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64e4))), 0x11975507u);
  /* 11975507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197550a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197550c call 0x11976460 */
  push32(0x11975511u); f_11976460();
  /* 11975511 mov esi, esp */
  ESI = (ESP);
  /* 11975513 push 4 */
  push32((uint32_t)(0x4u));
  /* 11975515 call dword ptr [0x119a648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a648c))), 0x1197551bu);
  /* 1197551b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197551e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975520 call 0x11976460 */
  push32(0x11975525u); f_11976460();
  /* 11975525 mov esi, esp */
  ESI = (ESP);
  /* 11975527 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11975529 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x1197552fu);
  /* 1197552f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975534 call 0x11976460 */
  push32(0x11975539u); f_11976460();
  /* 11975539 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197553e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11975540 je 0x1197558a */
  if (C.zf) goto L_1197558a;
  /* 11975542 mov esi, esp */
  ESI = (ESP);
  /* 11975544 push 0x119a3730 */
  push32((uint32_t)(0x119a3730u));
  /* 11975549 call dword ptr [0x119a64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64a8))), 0x1197554fu);
  /* 1197554f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975554 call 0x11976460 */
  push32(0x11975559u); f_11976460();
  /* 11975559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197555b jne 0x1197558a */
  if (!C.zf) goto L_1197558a;
  /* 1197555d mov esi, esp */
  ESI = (ESP);
  /* 1197555f push 0 */
  push32((uint32_t)(0x0u));
  /* 11975561 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11975563 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x11975569u);
  /* 11975569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197556c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197556e call 0x11976460 */
  push32(0x11975573u); f_11976460();
  /* 11975573 mov esi, esp */
  ESI = (ESP);
  /* 11975575 push 0x1199e4a8 */
  push32((uint32_t)(0x1199e4a8u));
  /* 1197557a call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x11975580u);
  /* 11975580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975585 call 0x11976460 */
  push32(0x1197558au); f_11976460();
L_1197558a:;
  /* 1197558a mov esi, esp */
  ESI = (ESP);
  /* 1197558c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1197558e call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x11975594u);
  /* 11975594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975597 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975599 call 0x11976460 */
  push32(0x1197559eu); f_11976460();
  /* 1197559e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119755a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119755a5 je 0x119755f1 */
  if (C.zf) goto L_119755f1;
  /* 119755a7 mov esi, esp */
  ESI = (ESP);
  /* 119755a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 119755ab call dword ptr [0x119a64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c0))), 0x119755b1u);
  /* 119755b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119755b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119755b6 call 0x11976460 */
  push32(0x119755bbu); f_11976460();
  /* 119755bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119755c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119755c2 je 0x119755f1 */
  if (C.zf) goto L_119755f1;
  /* 119755c4 mov esi, esp */
  ESI = (ESP);
  /* 119755c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119755c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119755ca call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x119755d0u);
  /* 119755d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119755d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119755d5 call 0x11976460 */
  push32(0x119755dau); f_11976460();
  /* 119755da mov esi, esp */
  ESI = (ESP);
  /* 119755dc push 0x1199e49c */
  push32((uint32_t)(0x1199e49cu));
  /* 119755e1 call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x119755e7u);
  /* 119755e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119755ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119755ec call 0x11976460 */
  push32(0x119755f1u); f_11976460();
L_119755f1:;
  /* 119755f1 mov esi, esp */
  ESI = (ESP);
  /* 119755f3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 119755f5 call dword ptr [0x119a6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6454))), 0x119755fbu);
  /* 119755fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119755fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975600 call 0x11976460 */
  push32(0x11975605u); f_11976460();
  /* 11975605 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197560a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197560c je 0x11975693 */
  if (C.zf) goto L_11975693;
  /* 11975612 mov esi, esp */
  ESI = (ESP);
  /* 11975614 push 1 */
  push32((uint32_t)(0x1u));
  /* 11975616 call dword ptr [0x119a64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64c0))), 0x1197561cu);
  /* 1197561c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197561f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975621 call 0x11976460 */
  push32(0x11975626u); f_11976460();
  /* 11975626 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197562b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197562d je 0x11975693 */
  if (C.zf) goto L_11975693;
  /* 1197562f mov esi, esp */
  ESI = (ESP);
  /* 11975631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11975633 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11975635 call dword ptr [0x119a6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6450))), 0x1197563bu);
  /* 1197563b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197563e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975640 call 0x11976460 */
  push32(0x11975645u); f_11976460();
  /* 11975645 mov esi, esp */
  ESI = (ESP);
  /* 11975647 push 0x1199e494 */
  push32((uint32_t)(0x1199e494u));
  /* 1197564c call dword ptr [0x119a6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6494))), 0x11975652u);
  /* 11975652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11975657 call 0x11976460 */
  push32(0x1197565cu); f_11976460();
  /* 1197565c mov esi, esp */
  ESI = (ESP);
  /* 1197565e push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11975660 call dword ptr [0x119a6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6460))), 0x11975666u);
  /* 11975666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197566b call 0x11976460 */
  push32(0x11975670u); f_11976460();
  /* 11975670 mov esi, esp */
  ESI = (ESP);
  /* 11975672 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11975674 call dword ptr [0x119a645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a645c))), 0x1197567au);
  /* 1197567a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197567d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197567f call 0x11976460 */
  push32(0x11975684u); f_11976460();
  /* 11975684 mov esi, esp */
  ESI = (ESP);
  /* 11975686 call dword ptr [0x119a64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a64dc))), 0x1197568cu);
  /* 1197568c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197568e call 0x11976460 */
  push32(0x11975693u); f_11976460();
L_11975693:;
  /* 11975693 pop edi */
  EDI = (pop32());
  /* 11975694 pop esi */
  ESI = (pop32());
  /* 11975695 pop ebx */
  EBX = (pop32());
  /* 11975696 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11975699 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197569b call 0x11976460 */
  push32(0x119756a0u); f_11976460();
  /* 119756a0 mov esp, ebp */
  ESP = (EBP);
  /* 119756a2 pop ebp */
  EBP = (pop32());
  /* 119756a3 ret  */
  ESPCHK(0x119724c0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11976460 (56 bytes, 28 insns) */
void f_11976460(void) {
  FTRACE(0x11976460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976460 jne 0x11976463 */
  if (!C.zf) goto L_11976463;
  /* 11976462 ret  */
  ESPCHK(0x11976460u, _esp0);
  ESP += 4; return;
L_11976463:;
  /* 11976463 push ebp */
  push32((uint32_t)(EBP));
  /* 11976464 mov ebp, esp */
  EBP = (ESP);
  /* 11976466 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11976469 push eax */
  push32((uint32_t)(EAX));
  /* 1197646a push edx */
  push32((uint32_t)(EDX));
  /* 1197646b push ebx */
  push32((uint32_t)(EBX));
  /* 1197646c push esi */
  push32((uint32_t)(ESI));
  /* 1197646d push edi */
  push32((uint32_t)(EDI));
  /* 1197646e push 0x1199ed9c */
  push32((uint32_t)(0x1199ed9cu));
  /* 11976473 push 0x1199ed98 */
  push32((uint32_t)(0x1199ed98u));
  /* 11976478 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1197647a push 0x1199ed88 */
  push32((uint32_t)(0x1199ed88u));
  /* 1197647f push 1 */
  push32((uint32_t)(0x1u));
  /* 11976481 call 0x11976830 */
  push32(0x11976486u); f_11976830();
  /* 11976486 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976489 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197648c jne 0x1197648f */
  if (!C.zf) goto L_1197648f;
  /* 1197648e int3  */
  x86_unimpl("int3 @ 0x1197648e");
L_1197648f:;
  /* 1197648f pop edi */
  EDI = (pop32());
  /* 11976490 pop esi */
  ESI = (pop32());
  /* 11976491 pop ebx */
  EBX = (pop32());
  /* 11976492 pop edx */
  EDX = (pop32());
  /* 11976493 pop eax */
  EAX = (pop32());
  /* 11976494 mov esp, ebp */
  ESP = (EBP);
  /* 11976496 pop ebp */
  EBP = (pop32());
  /* 11976497 ret  */
  ESPCHK(0x11976460u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x119764a0 (313 bytes, 78 insns) */
void f_119764a0(void) {
  FTRACE(0x119764a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119764a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119764a1 mov ebp, esp */
  EBP = (ESP);
  /* 119764a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119764a7 jne 0x11976567 */
  if (!C.zf) goto L_11976567;
  /* 119764ad call dword ptr [0x119a638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a638c))), 0x119764b3u);
  /* 119764b3 mov dword ptr [0x119a3870], eax */
  w32((uint32_t)(0x119a3870), (EAX));
  /* 119764b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 119764ba call 0x11979f60 */
  push32(0x119764bfu); f_11979f60();
  /* 119764bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119764c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119764c4 jne 0x119764cd */
  if (!C.zf) goto L_119764cd;
  /* 119764c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119764c8 jmp 0x119765d5 */
  goto L_119765d5;
L_119764cd:;
  /* 119764cd mov eax, dword ptr [0x119a3870] */
  EAX = (r32((uint32_t)(0x119a3870)));
  /* 119764d2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119764d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119764da mov dword ptr [0x119a387c], eax */
  w32((uint32_t)(0x119a387c), (EAX));
  /* 119764df mov ecx, dword ptr [0x119a3870] */
  ECX = (r32((uint32_t)(0x119a3870)));
  /* 119764e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119764eb mov dword ptr [0x119a3878], ecx */
  w32((uint32_t)(0x119a3878), (ECX));
  /* 119764f1 mov edx, dword ptr [0x119a3878] */
  EDX = (r32((uint32_t)(0x119a3878)));
  /* 119764f7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119764fa add edx, dword ptr [0x119a387c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a387c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11976500 mov dword ptr [0x119a3874], edx */
  w32((uint32_t)(0x119a3874), (EDX));
  /* 11976506 mov eax, dword ptr [0x119a3870] */
  EAX = (r32((uint32_t)(0x119a3870)));
  /* 1197650b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1197650e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11976513 mov dword ptr [0x119a3870], eax */
  w32((uint32_t)(0x119a3870), (EAX));
  /* 11976518 call 0x119770d0 */
  push32(0x1197651du); f_119770d0();
  /* 1197651d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197651f jne 0x1197652d */
  if (!C.zf) goto L_1197652d;
  /* 11976521 call 0x11979fb0 */
  push32(0x11976526u); f_11979fb0();
  /* 11976526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11976528 jmp 0x119765d5 */
  goto L_119765d5;
L_1197652d:;
  /* 1197652d call dword ptr [0x119a6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6388))), 0x11976533u);
  /* 11976533 mov dword ptr [0x119a53ac], eax */
  w32((uint32_t)(0x119a53ac), (EAX));
  /* 11976538 call 0x11979d40 */
  push32(0x1197653du); f_11979d40();
  /* 1197653d mov dword ptr [0x119a3858], eax */
  w32((uint32_t)(0x119a3858), (EAX));
  /* 11976542 call 0x11977380 */
  push32(0x11976547u); f_11977380();
  /* 11976547 call 0x11979830 */
  push32(0x1197654cu); f_11979830();
  /* 1197654c call 0x119796e0 */
  push32(0x11976551u); f_119796e0();
  /* 11976551 call 0x11976ed0 */
  push32(0x11976556u); f_11976ed0();
  /* 11976556 mov ecx, dword ptr [0x119a3854] */
  ECX = (r32((uint32_t)(0x119a3854)));
  /* 1197655c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197655f mov dword ptr [0x119a3854], ecx */
  w32((uint32_t)(0x119a3854), (ECX));
  /* 11976565 jmp 0x119765d0 */
  goto L_119765d0;
L_11976567:;
  /* 11976567 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197656b jne 0x119765c0 */
  if (!C.zf) goto L_119765c0;
  /* 1197656d cmp dword ptr [0x119a3854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976574 jle 0x119765ba */
  if ((C.zf||C.sf!=C.of)) goto L_119765ba;
  /* 11976576 mov edx, dword ptr [0x119a3854] */
  EDX = (r32((uint32_t)(0x119a3854)));
  /* 1197657c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197657f mov dword ptr [0x119a3854], edx */
  w32((uint32_t)(0x119a3854), (EDX));
  /* 11976585 cmp dword ptr [0x119a38a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a38a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197658c jne 0x11976593 */
  if (!C.zf) goto L_11976593;
  /* 1197658e call 0x11976f50 */
  push32(0x11976593u); f_11976f50();
L_11976593:;
  /* 11976593 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11976595 call 0x11978c80 */
  push32(0x1197659au); f_11978c80();
  /* 1197659a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197659d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 119765a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119765a2 je 0x119765a9 */
  if (C.zf) goto L_119765a9;
  /* 119765a4 call 0x11979590 */
  push32(0x119765a9u); f_11979590();
L_119765a9:;
  /* 119765a9 call 0x119776b0 */
  push32(0x119765aeu); f_119776b0();
  /* 119765ae call 0x11977160 */
  push32(0x119765b3u); f_11977160();
  /* 119765b3 call 0x11979fb0 */
  push32(0x119765b8u); f_11979fb0();
  /* 119765b8 jmp 0x119765be */
  goto L_119765be;
L_119765ba:;
  /* 119765ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119765bc jmp 0x119765d5 */
  goto L_119765d5;
L_119765be:;
  /* 119765be jmp 0x119765d0 */
  goto L_119765d0;
L_119765c0:;
  /* 119765c0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119765c4 jne 0x119765d0 */
  if (!C.zf) goto L_119765d0;
  /* 119765c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119765c8 call 0x11977250 */
  push32(0x119765cdu); f_11977250();
  /* 119765cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119765d0:;
  /* 119765d0 mov eax, 1 */
  EAX = (0x1u);
L_119765d5:;
  /* 119765d5 pop ebp */
  EBP = (pop32());
  /* 119765d6 ret 0xc */
  ESPCHK(0x119764a0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x119765e0 (243 bytes, 86 insns) */
void f_119765e0(void) {
  FTRACE(0x119765e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119765e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119765e1 mov ebp, esp */
  EBP = (ESP);
  /* 119765e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119765e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119765eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119765ef jne 0x11976601 */
  if (!C.zf) goto L_11976601;
  /* 119765f1 cmp dword ptr [0x119a3854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119765f8 jne 0x11976601 */
  if (!C.zf) goto L_11976601;
  /* 119765fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119765fc jmp 0x119766cd */
  goto L_119766cd;
L_11976601:;
  /* 11976601 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976605 je 0x1197660d */
  if (C.zf) goto L_1197660d;
  /* 11976607 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197660b jne 0x1197664f */
  if (!C.zf) goto L_1197664f;
L_1197660d:;
  /* 1197660d cmp dword ptr [0x119a53bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a53bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976614 je 0x1197662b */
  if (C.zf) goto L_1197662b;
  /* 11976616 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976619 push eax */
  push32((uint32_t)(EAX));
  /* 1197661a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197661d push ecx */
  push32((uint32_t)(ECX));
  /* 1197661e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976621 push edx */
  push32((uint32_t)(EDX));
  /* 11976622 call dword ptr [0x119a53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a53bc))), 0x11976628u);
  /* 11976628 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197662b:;
  /* 1197662b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197662f je 0x11976645 */
  if (C.zf) goto L_11976645;
  /* 11976631 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976634 push eax */
  push32((uint32_t)(EAX));
  /* 11976635 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976638 push ecx */
  push32((uint32_t)(ECX));
  /* 11976639 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197663c push edx */
  push32((uint32_t)(EDX));
  /* 1197663d call 0x119764a0 */
  push32(0x11976642u); f_119764a0();
  /* 11976642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11976645:;
  /* 11976645 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976649 jne 0x1197664f */
  if (!C.zf) goto L_1197664f;
  /* 1197664b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197664d jmp 0x119766cd */
  goto L_119766cd;
L_1197664f:;
  /* 1197664f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976652 push eax */
  push32((uint32_t)(EAX));
  /* 11976653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976656 push ecx */
  push32((uint32_t)(ECX));
  /* 11976657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197665a push edx */
  push32((uint32_t)(EDX));
  /* 1197665b call 0x1197100a */
  push32(0x11976660u); f_1197100a();
  /* 11976660 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11976663 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976667 jne 0x1197667e */
  if (!C.zf) goto L_1197667e;
  /* 11976669 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197666d jne 0x1197667e */
  if (!C.zf) goto L_1197667e;
  /* 1197666f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976672 push eax */
  push32((uint32_t)(EAX));
  /* 11976673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976675 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976678 push ecx */
  push32((uint32_t)(ECX));
  /* 11976679 call 0x119764a0 */
  push32(0x1197667eu); f_119764a0();
L_1197667e:;
  /* 1197667e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976682 je 0x1197668a */
  if (C.zf) goto L_1197668a;
  /* 11976684 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976688 jne 0x119766ca */
  if (!C.zf) goto L_119766ca;
L_1197668a:;
  /* 1197668a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197668d push edx */
  push32((uint32_t)(EDX));
  /* 1197668e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976691 push eax */
  push32((uint32_t)(EAX));
  /* 11976692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976695 push ecx */
  push32((uint32_t)(ECX));
  /* 11976696 call 0x119764a0 */
  push32(0x1197669bu); f_119764a0();
  /* 1197669b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197669d jne 0x119766a6 */
  if (!C.zf) goto L_119766a6;
  /* 1197669f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119766a6:;
  /* 119766a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119766aa je 0x119766ca */
  if (C.zf) goto L_119766ca;
  /* 119766ac cmp dword ptr [0x119a53bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a53bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119766b3 je 0x119766ca */
  if (C.zf) goto L_119766ca;
  /* 119766b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119766b8 push edx */
  push32((uint32_t)(EDX));
  /* 119766b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119766bc push eax */
  push32((uint32_t)(EAX));
  /* 119766bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119766c0 push ecx */
  push32((uint32_t)(ECX));
  /* 119766c1 call dword ptr [0x119a53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a53bc))), 0x119766c7u);
  /* 119766c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119766ca:;
  /* 119766ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119766cd:;
  /* 119766cd mov esp, ebp */
  ESP = (EBP);
  /* 119766cf pop ebp */
  EBP = (pop32());
  /* 119766d0 ret 0xc */
  ESPCHK(0x119765e0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x119766e0 (58 bytes, 18 insns) */
void f_119766e0(void) {
  FTRACE(0x119766e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119766e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119766e1 mov ebp, esp */
  EBP = (ESP);
  /* 119766e3 cmp dword ptr [0x119a3860], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3860))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119766ea je 0x119766fe */
  if (C.zf) goto L_119766fe;
  /* 119766ec cmp dword ptr [0x119a3860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119766f3 jne 0x11976703 */
  if (!C.zf) goto L_11976703;
  /* 119766f5 cmp dword ptr [0x119a3864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119766fc jne 0x11976703 */
  if (!C.zf) goto L_11976703;
L_119766fe:;
  /* 119766fe call 0x1197a050 */
  push32(0x11976703u); f_1197a050();
L_11976703:;
  /* 11976703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976706 push eax */
  push32((uint32_t)(EAX));
  /* 11976707 call 0x1197a0a0 */
  push32(0x1197670cu); f_1197a0a0();
  /* 1197670c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197670f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11976714 call dword ptr [0x119a1a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a1a30))), 0x1197671au);
  /* 1197671a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197671d pop ebp */
  EBP = (pop32());
  /* 1197671e ret  */
  ESPCHK(0x119766e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006720 @ 0x11976720 (11 bytes, 5 insns) */
void f_11976720(void) {
  FTRACE(0x11976720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976720 push ebp */
  push32((uint32_t)(EBP));
  /* 11976721 mov ebp, esp */
  EBP = (ESP);
  /* 11976723 call dword ptr [0x119a6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6390))), 0x11976729u);
  /* 11976729 pop ebp */
  EBP = (pop32());
  /* 1197672a ret  */
  ESPCHK(0x11976720u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x11976730 (87 bytes, 30 insns) */
void f_11976730(void) {
  FTRACE(0x11976730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976730 push ebp */
  push32((uint32_t)(EBP));
  /* 11976731 mov ebp, esp */
  EBP = (ESP);
  /* 11976733 push ecx */
  push32((uint32_t)(ECX));
  /* 11976734 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976738 jl 0x11976740 */
  if ((C.sf!=C.of)) goto L_11976740;
  /* 1197673a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197673e jl 0x11976745 */
  if ((C.sf!=C.of)) goto L_11976745;
L_11976740:;
  /* 11976740 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11976743 jmp 0x11976783 */
  goto L_11976783;
L_11976745:;
  /* 11976745 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976749 jne 0x11976757 */
  if (!C.zf) goto L_11976757;
  /* 1197674b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197674e mov eax, dword ptr [eax*4 + 0x119a1a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x119a1a38)));
  /* 11976755 jmp 0x11976783 */
  goto L_11976783;
L_11976757:;
  /* 11976757 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197675a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1197675d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197675f je 0x11976766 */
  if (C.zf) goto L_11976766;
  /* 11976761 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11976764 jmp 0x11976783 */
  goto L_11976783;
L_11976766:;
  /* 11976766 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976769 mov eax, dword ptr [edx*4 + 0x119a1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a1a38)));
  /* 11976770 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11976773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976776 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976779 mov dword ptr [ecx*4 + 0x119a1a38], edx */
  w32((uint32_t)(ECX*4 + 0x119a1a38), (EDX));
  /* 11976780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11976783:;
  /* 11976783 mov esp, ebp */
  ESP = (EBP);
  /* 11976785 pop ebp */
  EBP = (pop32());
  /* 11976786 ret  */
  ESPCHK(0x11976730u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11976790 (126 bytes, 38 insns) */
void f_11976790(void) {
  FTRACE(0x11976790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976790 push ebp */
  push32((uint32_t)(EBP));
  /* 11976791 mov ebp, esp */
  EBP = (ESP);
  /* 11976793 push ecx */
  push32((uint32_t)(ECX));
  /* 11976794 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976798 jl 0x119767a0 */
  if ((C.sf!=C.of)) goto L_119767a0;
  /* 1197679a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197679e jl 0x119767a7 */
  if ((C.sf!=C.of)) goto L_119767a7;
L_119767a0:;
  /* 119767a0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 119767a5 jmp 0x1197680a */
  goto L_1197680a;
L_119767a7:;
  /* 119767a7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119767ab jne 0x119767b9 */
  if (!C.zf) goto L_119767b9;
  /* 119767ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119767b0 mov eax, dword ptr [eax*4 + 0x119a1a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x119a1a44)));
  /* 119767b7 jmp 0x1197680a */
  goto L_1197680a;
L_119767b9:;
  /* 119767b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119767bc mov edx, dword ptr [ecx*4 + 0x119a1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a44)));
  /* 119767c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119767c6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119767ca jne 0x119767e0 */
  if (!C.zf) goto L_119767e0;
  /* 119767cc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 119767ce call dword ptr [0x119a6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6394))), 0x119767d4u);
  /* 119767d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119767d7 mov dword ptr [ecx*4 + 0x119a1a44], eax */
  w32((uint32_t)(ECX*4 + 0x119a1a44), (EAX));
  /* 119767de jmp 0x11976807 */
  goto L_11976807;
L_119767e0:;
  /* 119767e0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119767e4 jne 0x119767fa */
  if (!C.zf) goto L_119767fa;
  /* 119767e6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119767e8 call dword ptr [0x119a6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6394))), 0x119767eeu);
  /* 119767ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119767f1 mov dword ptr [edx*4 + 0x119a1a44], eax */
  w32((uint32_t)(EDX*4 + 0x119a1a44), (EAX));
  /* 119767f8 jmp 0x11976807 */
  goto L_11976807;
L_119767fa:;
  /* 119767fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119767fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976800 mov dword ptr [eax*4 + 0x119a1a44], ecx */
  w32((uint32_t)(EAX*4 + 0x119a1a44), (ECX));
L_11976807:;
  /* 11976807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1197680a:;
  /* 1197680a mov esp, ebp */
  ESP = (EBP);
  /* 1197680c pop ebp */
  EBP = (pop32());
  /* 1197680d ret  */
  ESPCHK(0x11976790u, _esp0);
  ESP += 4; return;
}

/* FUN_10006810 @ 0x11976810 (28 bytes, 11 insns) */
void f_11976810(void) {
  FTRACE(0x11976810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976810 push ebp */
  push32((uint32_t)(EBP));
  /* 11976811 mov ebp, esp */
  EBP = (ESP);
  /* 11976813 push ecx */
  push32((uint32_t)(ECX));
  /* 11976814 mov eax, dword ptr [0x119a53a0] */
  EAX = (r32((uint32_t)(0x119a53a0)));
  /* 11976819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197681c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197681f mov dword ptr [0x119a53a0], ecx */
  w32((uint32_t)(0x119a53a0), (ECX));
  /* 11976825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976828 mov esp, ebp */
  ESP = (EBP);
  /* 1197682a pop ebp */
  EBP = (pop32());
  /* 1197682b ret  */
  ESPCHK(0x11976810u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x11976830 (912 bytes, 248 insns) */
void f_11976830(void) {
  FTRACE(0x11976830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976830 push ebp */
  push32((uint32_t)(EBP));
  /* 11976831 mov ebp, esp */
  EBP = (ESP);
  /* 11976833 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11976838 call 0x1197a910 */
  push32(0x1197683du); f_1197a910();
  /* 1197683d push edi */
  push32((uint32_t)(EDI));
  /* 1197683e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11976845 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1197684a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197684c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11976852 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11976854 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11976856 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11976857 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1197685e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11976863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11976865 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1197686b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1197686d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1197686f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11976870 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11976877 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1197687c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197687e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11976884 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11976886 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11976888 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11976889 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1197688c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11976892 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976896 jl 0x1197689e */
  if ((C.sf!=C.of)) goto L_1197689e;
  /* 11976898 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197689c jl 0x119768a6 */
  if ((C.sf!=C.of)) goto L_119768a6;
L_1197689e:;
  /* 1197689e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119768a1 jmp 0x11976bbb */
  goto L_11976bbb;
L_119768a6:;
  /* 119768a6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119768aa jne 0x11976950 */
  if (!C.zf) goto L_11976950;
  /* 119768b0 push 0x119a1a34 */
  push32((uint32_t)(0x119a1a34u));
  /* 119768b5 call dword ptr [0x119a63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63ac))), 0x119768bbu);
  /* 119768bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119768bd jle 0x11976950 */
  if ((C.zf||C.sf!=C.of)) goto L_11976950;
  /* 119768c3 cmp dword ptr [0x119a3868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119768ca jne 0x1197690e */
  if (!C.zf) goto L_1197690e;
  /* 119768cc push 0x1199ef44 */
  push32((uint32_t)(0x1199ef44u));
  /* 119768d1 call dword ptr [0x119a63a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a8))), 0x119768d7u);
  /* 119768d7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 119768dd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119768e4 je 0x11976906 */
  if (C.zf) goto L_11976906;
  /* 119768e6 push 0x1199ef38 */
  push32((uint32_t)(0x1199ef38u));
  /* 119768eb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 119768f1 push ecx */
  push32((uint32_t)(ECX));
  /* 119768f2 call dword ptr [0x119a63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a4))), 0x119768f8u);
  /* 119768f8 mov dword ptr [0x119a3868], eax */
  w32((uint32_t)(0x119a3868), (EAX));
  /* 119768fd cmp dword ptr [0x119a3868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976904 jne 0x1197690e */
  if (!C.zf) goto L_1197690e;
L_11976906:;
  /* 11976906 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11976909 jmp 0x11976bbb */
  goto L_11976bbb;
L_1197690e:;
  /* 1197690e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976911 push edx */
  push32((uint32_t)(EDX));
  /* 11976912 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976915 push eax */
  push32((uint32_t)(EAX));
  /* 11976916 push 0x1199ef04 */
  push32((uint32_t)(0x1199ef04u));
  /* 1197691b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11976921 push ecx */
  push32((uint32_t)(ECX));
  /* 11976922 call dword ptr [0x119a3868] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3868))), 0x11976928u);
  /* 11976928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197692b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11976931 push edx */
  push32((uint32_t)(EDX));
  /* 11976932 call dword ptr [0x119a63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a0))), 0x11976938u);
  /* 11976938 push 0x119a1a34 */
  push32((uint32_t)(0x119a1a34u));
  /* 1197693d call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11976943u);
  /* 11976943 call 0x11976720 */
  push32(0x11976948u); f_11976720();
  /* 11976948 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197694b jmp 0x11976bbb */
  goto L_11976bbb;
L_11976950:;
  /* 11976950 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976954 je 0x1197698d */
  if (C.zf) goto L_1197698d;
  /* 11976956 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1197695c push eax */
  push32((uint32_t)(EAX));
  /* 1197695d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11976960 push ecx */
  push32((uint32_t)(ECX));
  /* 11976961 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11976966 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1197696c push edx */
  push32((uint32_t)(EDX));
  /* 1197696d call 0x1197a810 */
  push32(0x11976972u); f_1197a810();
  /* 11976972 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11976977 jge 0x1197698d */
  if ((C.sf==C.of)) goto L_1197698d;
  /* 11976979 push 0x1199eed8 */
  push32((uint32_t)(0x1199eed8u));
  /* 1197697e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11976984 push eax */
  push32((uint32_t)(EAX));
  /* 11976985 call 0x1197a720 */
  push32(0x1197698au); f_1197a720();
  /* 1197698a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197698d:;
  /* 1197698d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976991 jne 0x119769c5 */
  if (!C.zf) goto L_119769c5;
  /* 11976993 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976997 je 0x119769a5 */
  if (C.zf) goto L_119769a5;
  /* 11976999 mov dword ptr [ebp - 0x3028], 0x1199eec4 */
  w32((uint32_t)(EBP + -0x3028), (0x1199eec4u));
  /* 119769a3 jmp 0x119769af */
  goto L_119769af;
L_119769a5:;
  /* 119769a5 mov dword ptr [ebp - 0x3028], 0x1199eeb0 */
  w32((uint32_t)(EBP + -0x3028), (0x1199eeb0u));
L_119769af:;
  /* 119769af mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 119769b5 push ecx */
  push32((uint32_t)(ECX));
  /* 119769b6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 119769bc push edx */
  push32((uint32_t)(EDX));
  /* 119769bd call 0x1197a720 */
  push32(0x119769c2u); f_1197a720();
  /* 119769c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119769c5:;
  /* 119769c5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 119769cb push eax */
  push32((uint32_t)(EAX));
  /* 119769cc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 119769d2 push ecx */
  push32((uint32_t)(ECX));
  /* 119769d3 call 0x1197a730 */
  push32(0x119769d8u); f_1197a730();
  /* 119769d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119769db cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119769df jne 0x11976a1a */
  if (!C.zf) goto L_11976a1a;
  /* 119769e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119769e4 mov eax, dword ptr [edx*4 + 0x119a1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a1a38)));
  /* 119769eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119769ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119769f0 je 0x11976a06 */
  if (C.zf) goto L_11976a06;
  /* 119769f2 push 0x1199eeac */
  push32((uint32_t)(0x1199eeacu));
  /* 119769f7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 119769fd push ecx */
  push32((uint32_t)(ECX));
  /* 119769fe call 0x1197a730 */
  push32(0x11976a03u); f_1197a730();
  /* 11976a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976a06:;
  /* 11976a06 push 0x1199eea8 */
  push32((uint32_t)(0x1199eea8u));
  /* 11976a0b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11976a11 push edx */
  push32((uint32_t)(EDX));
  /* 11976a12 call 0x1197a730 */
  push32(0x11976a17u); f_1197a730();
  /* 11976a17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976a1a:;
  /* 11976a1a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976a1e je 0x11976a62 */
  if (C.zf) goto L_11976a62;
  /* 11976a20 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11976a26 push eax */
  push32((uint32_t)(EAX));
  /* 11976a27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976a2a push ecx */
  push32((uint32_t)(ECX));
  /* 11976a2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976a2e push edx */
  push32((uint32_t)(EDX));
  /* 11976a2f push 0x1199ee9c */
  push32((uint32_t)(0x1199ee9cu));
  /* 11976a34 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11976a39 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11976a3f push eax */
  push32((uint32_t)(EAX));
  /* 11976a40 call 0x1197a620 */
  push32(0x11976a45u); f_1197a620();
  /* 11976a45 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11976a4a jge 0x11976a60 */
  if ((C.sf==C.of)) goto L_11976a60;
  /* 11976a4c push 0x1199eed8 */
  push32((uint32_t)(0x1199eed8u));
  /* 11976a51 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11976a57 push ecx */
  push32((uint32_t)(ECX));
  /* 11976a58 call 0x1197a720 */
  push32(0x11976a5du); f_1197a720();
  /* 11976a5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976a60:;
  /* 11976a60 jmp 0x11976a78 */
  goto L_11976a78;
L_11976a62:;
  /* 11976a62 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11976a68 push edx */
  push32((uint32_t)(EDX));
  /* 11976a69 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11976a6f push eax */
  push32((uint32_t)(EAX));
  /* 11976a70 call 0x1197a720 */
  push32(0x11976a75u); f_1197a720();
  /* 11976a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976a78:;
  /* 11976a78 cmp dword ptr [0x119a53a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a53a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976a7f je 0x11976abc */
  if (C.zf) goto L_11976abc;
  /* 11976a81 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11976a87 push ecx */
  push32((uint32_t)(ECX));
  /* 11976a88 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11976a8e push edx */
  push32((uint32_t)(EDX));
  /* 11976a8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976a92 push eax */
  push32((uint32_t)(EAX));
  /* 11976a93 call dword ptr [0x119a53a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a53a0))), 0x11976a99u);
  /* 11976a99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11976a9e je 0x11976abc */
  if (C.zf) goto L_11976abc;
  /* 11976aa0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976aa4 jne 0x11976ab1 */
  if (!C.zf) goto L_11976ab1;
  /* 11976aa6 push 0x119a1a34 */
  push32((uint32_t)(0x119a1a34u));
  /* 11976aab call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11976ab1u);
L_11976ab1:;
  /* 11976ab1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11976ab7 jmp 0x11976bbb */
  goto L_11976bbb;
L_11976abc:;
  /* 11976abc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976abf mov edx, dword ptr [ecx*4 + 0x119a1a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a38)));
  /* 11976ac6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11976ac9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11976acb je 0x11976b0b */
  if (C.zf) goto L_11976b0b;
  /* 11976acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976ad0 cmp dword ptr [eax*4 + 0x119a1a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x119a1a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ad8 je 0x11976b0b */
  if (C.zf) goto L_11976b0b;
  /* 11976ada push 0 */
  push32((uint32_t)(0x0u));
  /* 11976adc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11976ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 11976ae3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11976ae9 push edx */
  push32((uint32_t)(EDX));
  /* 11976aea call 0x1197a5a0 */
  push32(0x11976aefu); f_1197a5a0();
  /* 11976aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976af2 push eax */
  push32((uint32_t)(EAX));
  /* 11976af3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11976af9 push eax */
  push32((uint32_t)(EAX));
  /* 11976afa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976afd mov edx, dword ptr [ecx*4 + 0x119a1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a44)));
  /* 11976b04 push edx */
  push32((uint32_t)(EDX));
  /* 11976b05 call dword ptr [0x119a6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6398))), 0x11976b0bu);
L_11976b0b:;
  /* 11976b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976b0e mov ecx, dword ptr [eax*4 + 0x119a1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a1a38)));
  /* 11976b15 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11976b18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11976b1a je 0x11976b29 */
  if (C.zf) goto L_11976b29;
  /* 11976b1c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11976b22 push edx */
  push32((uint32_t)(EDX));
  /* 11976b23 call dword ptr [0x119a63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a0))), 0x11976b29u);
L_11976b29:;
  /* 11976b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976b2c mov ecx, dword ptr [eax*4 + 0x119a1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a1a38)));
  /* 11976b33 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11976b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11976b38 je 0x11976ba8 */
  if (C.zf) goto L_11976ba8;
  /* 11976b3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976b3e je 0x11976b5d */
  if (C.zf) goto L_11976b5d;
  /* 11976b40 push 0xa */
  push32((uint32_t)(0xau));
  /* 11976b42 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11976b48 push edx */
  push32((uint32_t)(EDX));
  /* 11976b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976b4c push eax */
  push32((uint32_t)(EAX));
  /* 11976b4d call 0x1197a2b0 */
  push32(0x11976b52u); f_1197a2b0();
  /* 11976b52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976b55 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11976b5b jmp 0x11976b67 */
  goto L_11976b67;
L_11976b5d:;
  /* 11976b5d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11976b67:;
  /* 11976b67 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11976b6d push ecx */
  push32((uint32_t)(ECX));
  /* 11976b6e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11976b71 push edx */
  push32((uint32_t)(EDX));
  /* 11976b72 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11976b78 push eax */
  push32((uint32_t)(EAX));
  /* 11976b79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976b7c push ecx */
  push32((uint32_t)(ECX));
  /* 11976b7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976b80 push edx */
  push32((uint32_t)(EDX));
  /* 11976b81 call 0x11976bc0 */
  push32(0x11976b86u); f_11976bc0();
  /* 11976b86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976b89 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11976b8f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976b93 jne 0x11976ba0 */
  if (!C.zf) goto L_11976ba0;
  /* 11976b95 push 0x119a1a34 */
  push32((uint32_t)(0x119a1a34u));
  /* 11976b9a call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11976ba0u);
L_11976ba0:;
  /* 11976ba0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11976ba6 jmp 0x11976bbb */
  goto L_11976bbb;
L_11976ba8:;
  /* 11976ba8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976bac jne 0x11976bb9 */
  if (!C.zf) goto L_11976bb9;
  /* 11976bae push 0x119a1a34 */
  push32((uint32_t)(0x119a1a34u));
  /* 11976bb3 call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11976bb9u);
L_11976bb9:;
  /* 11976bb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11976bbb:;
  /* 11976bbb pop edi */
  EDI = (pop32());
  /* 11976bbc mov esp, ebp */
  ESP = (EBP);
  /* 11976bbe pop ebp */
  EBP = (pop32());
  /* 11976bbf ret  */
  ESPCHK(0x11976830u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x11976bc0 (780 bytes, 197 insns) */
void f_11976bc0(void) {
  FTRACE(0x11976bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11976bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11976bc3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11976bc8 call 0x1197a910 */
  push32(0x11976bcdu); f_1197a910();
L_11976bcd:;
  /* 11976bcd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976bd1 jne 0x11976bf8 */
  if (!C.zf) goto L_11976bf8;
  /* 11976bd3 push 0x1199f094 */
  push32((uint32_t)(0x1199f094u));
  /* 11976bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976bda push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11976bdf push 0x1199f088 */
  push32((uint32_t)(0x1199f088u));
  /* 11976be4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11976be6 call 0x11976830 */
  push32(0x11976bebu); f_11976830();
  /* 11976beb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976bee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976bf1 jne 0x11976bf8 */
  if (!C.zf) goto L_11976bf8;
  /* 11976bf3 call 0x11976720 */
  push32(0x11976bf8u); f_11976720();
L_11976bf8:;
  /* 11976bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11976bfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11976bfc jne 0x11976bcd */
  if (!C.zf) goto L_11976bcd;
  /* 11976bfe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11976c03 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11976c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11976c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11976c0c call dword ptr [0x119a63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b0))), 0x11976c12u);
  /* 11976c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11976c14 jne 0x11976c2a */
  if (!C.zf) goto L_11976c2a;
  /* 11976c16 push 0x1199f070 */
  push32((uint32_t)(0x1199f070u));
  /* 11976c1b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11976c21 push edx */
  push32((uint32_t)(EDX));
  /* 11976c22 call 0x1197a720 */
  push32(0x11976c27u); f_1197a720();
  /* 11976c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976c2a:;
  /* 11976c2a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11976c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11976c33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976c36 push ecx */
  push32((uint32_t)(ECX));
  /* 11976c37 call 0x1197a5a0 */
  push32(0x11976c3cu); f_1197a5a0();
  /* 11976c3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976c3f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976c42 jbe 0x11976c6d */
  if ((C.cf||C.zf)) goto L_11976c6d;
  /* 11976c44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976c47 push edx */
  push32((uint32_t)(EDX));
  /* 11976c48 call 0x1197a5a0 */
  push32(0x11976c4du); f_1197a5a0();
  /* 11976c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976c50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976c53 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11976c57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11976c5a push 3 */
  push32((uint32_t)(0x3u));
  /* 11976c5c push 0x1199f06c */
  push32((uint32_t)(0x1199f06cu));
  /* 11976c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976c64 push eax */
  push32((uint32_t)(EAX));
  /* 11976c65 call 0x1197af90 */
  push32(0x11976c6au); f_1197af90();
  /* 11976c6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976c6d:;
  /* 11976c6d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11976c70 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11976c76 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976c7d je 0x11976cc8 */
  if (C.zf) goto L_11976cc8;
  /* 11976c7f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11976c85 push edx */
  push32((uint32_t)(EDX));
  /* 11976c86 call 0x1197a5a0 */
  push32(0x11976c8bu); f_1197a5a0();
  /* 11976c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976c8e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976c91 jbe 0x11976cc8 */
  if ((C.cf||C.zf)) goto L_11976cc8;
  /* 11976c93 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11976c99 push eax */
  push32((uint32_t)(EAX));
  /* 11976c9a call 0x1197a5a0 */
  push32(0x11976c9fu); f_1197a5a0();
  /* 11976c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976ca2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11976ca8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11976cac mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11976cb2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11976cb4 push 0x1199f06c */
  push32((uint32_t)(0x1199f06cu));
  /* 11976cb9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11976cbf push eax */
  push32((uint32_t)(EAX));
  /* 11976cc0 call 0x1197af90 */
  push32(0x11976cc5u); f_1197af90();
  /* 11976cc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976cc8:;
  /* 11976cc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ccc jne 0x11976cda */
  if (!C.zf) goto L_11976cda;
  /* 11976cce mov dword ptr [ebp - 0x1114], 0x1199eff8 */
  w32((uint32_t)(EBP + -0x1114), (0x1199eff8u));
  /* 11976cd8 jmp 0x11976ce4 */
  goto L_11976ce4;
L_11976cda:;
  /* 11976cda mov dword ptr [ebp - 0x1114], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1114), (0x1199ed98u));
L_11976ce4:;
  /* 11976ce4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11976ce7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11976cea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11976cec je 0x11976cf9 */
  if (C.zf) goto L_11976cf9;
  /* 11976cee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11976cf1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11976cf7 jmp 0x11976d03 */
  goto L_11976d03;
L_11976cf9:;
  /* 11976cf9 mov dword ptr [ebp - 0x1118], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1118), (0x1199ed98u));
L_11976d03:;
  /* 11976d03 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11976d06 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11976d09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11976d0b je 0x11976d1f */
  if (C.zf) goto L_11976d1f;
  /* 11976d0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976d11 jne 0x11976d1f */
  if (!C.zf) goto L_11976d1f;
  /* 11976d13 mov dword ptr [ebp - 0x111c], 0x1199efe8 */
  w32((uint32_t)(EBP + -0x111c), (0x1199efe8u));
  /* 11976d1d jmp 0x11976d29 */
  goto L_11976d29;
L_11976d1f:;
  /* 11976d1f mov dword ptr [ebp - 0x111c], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x111c), (0x1199ed98u));
L_11976d29:;
  /* 11976d29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11976d2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11976d2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11976d31 je 0x11976d3f */
  if (C.zf) goto L_11976d3f;
  /* 11976d33 mov dword ptr [ebp - 0x1120], 0x1199efe4 */
  w32((uint32_t)(EBP + -0x1120), (0x1199efe4u));
  /* 11976d3d jmp 0x11976d49 */
  goto L_11976d49;
L_11976d3f:;
  /* 11976d3f mov dword ptr [ebp - 0x1120], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1120), (0x1199ed98u));
L_11976d49:;
  /* 11976d49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976d4d je 0x11976d5a */
  if (C.zf) goto L_11976d5a;
  /* 11976d4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11976d52 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11976d58 jmp 0x11976d64 */
  goto L_11976d64;
L_11976d5a:;
  /* 11976d5a mov dword ptr [ebp - 0x1124], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1124), (0x1199ed98u));
L_11976d64:;
  /* 11976d64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976d68 je 0x11976d76 */
  if (C.zf) goto L_11976d76;
  /* 11976d6a mov dword ptr [ebp - 0x1128], 0x1199efdc */
  w32((uint32_t)(EBP + -0x1128), (0x1199efdcu));
  /* 11976d74 jmp 0x11976d80 */
  goto L_11976d80;
L_11976d76:;
  /* 11976d76 mov dword ptr [ebp - 0x1128], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1128), (0x1199ed98u));
L_11976d80:;
  /* 11976d80 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976d84 je 0x11976d91 */
  if (C.zf) goto L_11976d91;
  /* 11976d86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11976d89 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11976d8f jmp 0x11976d9b */
  goto L_11976d9b;
L_11976d91:;
  /* 11976d91 mov dword ptr [ebp - 0x112c], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x112c), (0x1199ed98u));
L_11976d9b:;
  /* 11976d9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976d9f je 0x11976dad */
  if (C.zf) goto L_11976dad;
  /* 11976da1 mov dword ptr [ebp - 0x1130], 0x1199efd4 */
  w32((uint32_t)(EBP + -0x1130), (0x1199efd4u));
  /* 11976dab jmp 0x11976db7 */
  goto L_11976db7;
L_11976dad:;
  /* 11976dad mov dword ptr [ebp - 0x1130], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1130), (0x1199ed98u));
L_11976db7:;
  /* 11976db7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976dbe je 0x11976dce */
  if (C.zf) goto L_11976dce;
  /* 11976dc0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11976dc6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11976dcc jmp 0x11976dd8 */
  goto L_11976dd8;
L_11976dce:;
  /* 11976dce mov dword ptr [ebp - 0x1134], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1134), (0x1199ed98u));
L_11976dd8:;
  /* 11976dd8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ddf je 0x11976ded */
  if (C.zf) goto L_11976ded;
  /* 11976de1 mov dword ptr [ebp - 0x1138], 0x1199efc8 */
  w32((uint32_t)(EBP + -0x1138), (0x1199efc8u));
  /* 11976deb jmp 0x11976df7 */
  goto L_11976df7;
L_11976ded:;
  /* 11976ded mov dword ptr [ebp - 0x1138], 0x1199ed98 */
  w32((uint32_t)(EBP + -0x1138), (0x1199ed98u));
L_11976df7:;
  /* 11976df7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11976dfd push edx */
  push32((uint32_t)(EDX));
  /* 11976dfe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11976e04 push eax */
  push32((uint32_t)(EAX));
  /* 11976e05 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11976e0b push ecx */
  push32((uint32_t)(ECX));
  /* 11976e0c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11976e12 push edx */
  push32((uint32_t)(EDX));
  /* 11976e13 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11976e19 push eax */
  push32((uint32_t)(EAX));
  /* 11976e1a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11976e20 push ecx */
  push32((uint32_t)(ECX));
  /* 11976e21 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11976e27 push edx */
  push32((uint32_t)(EDX));
  /* 11976e28 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11976e2e push eax */
  push32((uint32_t)(EAX));
  /* 11976e2f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11976e35 push ecx */
  push32((uint32_t)(ECX));
  /* 11976e36 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11976e3c push edx */
  push32((uint32_t)(EDX));
  /* 11976e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976e40 push eax */
  push32((uint32_t)(EAX));
  /* 11976e41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976e44 mov edx, dword ptr [ecx*4 + 0x119a1a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a50)));
  /* 11976e4b push edx */
  push32((uint32_t)(EDX));
  /* 11976e4c push 0x1199ef74 */
  push32((uint32_t)(0x1199ef74u));
  /* 11976e51 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11976e56 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11976e5c push eax */
  push32((uint32_t)(EAX));
  /* 11976e5d call 0x1197a620 */
  push32(0x11976e62u); f_1197a620();
  /* 11976e62 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11976e67 jge 0x11976e7d */
  if ((C.sf==C.of)) goto L_11976e7d;
  /* 11976e69 push 0x1199eed8 */
  push32((uint32_t)(0x1199eed8u));
  /* 11976e6e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11976e74 push ecx */
  push32((uint32_t)(ECX));
  /* 11976e75 call 0x1197a720 */
  push32(0x11976e7au); f_1197a720();
  /* 11976e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11976e7d:;
  /* 11976e7d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11976e82 push 0x1199ef50 */
  push32((uint32_t)(0x1199ef50u));
  /* 11976e87 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11976e8d push edx */
  push32((uint32_t)(EDX));
  /* 11976e8e call 0x1197aed0 */
  push32(0x11976e93u); f_1197aed0();
  /* 11976e93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976e96 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11976e9c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ea3 jne 0x11976eb6 */
  if (!C.zf) goto L_11976eb6;
  /* 11976ea5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11976ea7 call 0x1197ac10 */
  push32(0x11976eacu); f_1197ac10();
  /* 11976eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976eaf push 3 */
  push32((uint32_t)(0x3u));
  /* 11976eb1 call 0x11976f30 */
  push32(0x11976eb6u); f_11976f30();
L_11976eb6:;
  /* 11976eb6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ebd jne 0x11976ec6 */
  if (!C.zf) goto L_11976ec6;
  /* 11976ebf mov eax, 1 */
  EAX = (0x1u);
  /* 11976ec4 jmp 0x11976ec8 */
  goto L_11976ec8;
L_11976ec6:;
  /* 11976ec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11976ec8:;
  /* 11976ec8 mov esp, ebp */
  ESP = (EBP);
  /* 11976eca pop ebp */
  EBP = (pop32());
  /* 11976ecb ret  */
  ESPCHK(0x11976bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x11976ed0 (56 bytes, 15 insns) */
void f_11976ed0(void) {
  FTRACE(0x11976ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11976ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11976ed3 cmp dword ptr [0x119a539c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a539c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976eda je 0x11976ee2 */
  if (C.zf) goto L_11976ee2;
  /* 11976edc call dword ptr [0x119a539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a539c))), 0x11976ee2u);
L_11976ee2:;
  /* 11976ee2 push 0x119a1418 */
  push32((uint32_t)(0x119a1418u));
  /* 11976ee7 push 0x119a1208 */
  push32((uint32_t)(0x119a1208u));
  /* 11976eec call 0x119770a0 */
  push32(0x11976ef1u); f_119770a0();
  /* 11976ef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976ef4 push 0x119a1104 */
  push32((uint32_t)(0x119a1104u));
  /* 11976ef9 push 0x119a1000 */
  push32((uint32_t)(0x119a1000u));
  /* 11976efe call 0x119770a0 */
  push32(0x11976f03u); f_119770a0();
  /* 11976f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976f06 pop ebp */
  EBP = (pop32());
  /* 11976f07 ret  */
  ESPCHK(0x11976ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x11976f10 (21 bytes, 10 insns) */
void f_11976f10(void) {
  FTRACE(0x11976f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11976f11 mov ebp, esp */
  EBP = (ESP);
  /* 11976f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976f1a push eax */
  push32((uint32_t)(EAX));
  /* 11976f1b call 0x11976f90 */
  push32(0x11976f20u); f_11976f90();
  /* 11976f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976f23 pop ebp */
  EBP = (pop32());
  /* 11976f24 ret  */
  ESPCHK(0x11976f10u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11976f30 (21 bytes, 10 insns) */
void f_11976f30(void) {
  FTRACE(0x11976f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11976f31 mov ebp, esp */
  EBP = (ESP);
  /* 11976f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976f35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11976f37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976f3a push eax */
  push32((uint32_t)(EAX));
  /* 11976f3b call 0x11976f90 */
  push32(0x11976f40u); f_11976f90();
  /* 11976f40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976f43 pop ebp */
  EBP = (pop32());
  /* 11976f44 ret  */
  ESPCHK(0x11976f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x11976f50 (19 bytes, 9 insns) */
void f_11976f50(void) {
  FTRACE(0x11976f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11976f51 mov ebp, esp */
  EBP = (ESP);
  /* 11976f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11976f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976f59 call 0x11976f90 */
  push32(0x11976f5eu); f_11976f90();
  /* 11976f5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976f61 pop ebp */
  EBP = (pop32());
  /* 11976f62 ret  */
  ESPCHK(0x11976f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f70 @ 0x11976f70 (19 bytes, 9 insns) */
void f_11976f70(void) {
  FTRACE(0x11976f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11976f71 mov ebp, esp */
  EBP = (ESP);
  /* 11976f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11976f75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11976f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11976f79 call 0x11976f90 */
  push32(0x11976f7eu); f_11976f90();
  /* 11976f7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11976f81 pop ebp */
  EBP = (pop32());
  /* 11976f82 ret  */
  ESPCHK(0x11976f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x11976f90 (227 bytes, 61 insns) */
void f_11976f90(void) {
  FTRACE(0x11976f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11976f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11976f91 mov ebp, esp */
  EBP = (ESP);
  /* 11976f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11976f94 call 0x11977080 */
  push32(0x11976f99u); f_11977080();
  /* 11976f99 cmp dword ptr [0x119a38ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a38ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976fa0 jne 0x11976fb3 */
  if (!C.zf) goto L_11976fb3;
  /* 11976fa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11976fa5 push eax */
  push32((uint32_t)(EAX));
  /* 11976fa6 call dword ptr [0x119a62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62d0))), 0x11976facu);
  /* 11976fac push eax */
  push32((uint32_t)(EAX));
  /* 11976fad call dword ptr [0x119a62cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62cc))), 0x11976fb3u);
L_11976fb3:;
  /* 11976fb3 mov dword ptr [0x119a38a8], 1 */
  w32((uint32_t)(0x119a38a8), (0x1u));
  /* 11976fbd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11976fc0 mov byte ptr [0x119a38a4], cl */
  w8((uint32_t)(0x119a38a4), (CL));
  /* 11976fc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976fca jne 0x11977013 */
  if (!C.zf) goto L_11977013;
  /* 11976fcc cmp dword ptr [0x119a5398], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5398))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976fd3 je 0x11977001 */
  if (C.zf) goto L_11977001;
  /* 11976fd5 mov edx, dword ptr [0x119a5394] */
  EDX = (r32((uint32_t)(0x119a5394)));
  /* 11976fdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11976fde:;
  /* 11976fde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976fe1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11976fe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11976fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976fea cmp ecx, dword ptr [0x119a5398] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a5398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ff0 jb 0x11977001 */
  if (C.cf) goto L_11977001;
  /* 11976ff2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976ff5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11976ff8 je 0x11976fff */
  if (C.zf) goto L_11976fff;
  /* 11976ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11976ffd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11976fffu);
L_11976fff:;
  /* 11976fff jmp 0x11976fde */
  goto L_11976fde;
L_11977001:;
  /* 11977001 push 0x119a1724 */
  push32((uint32_t)(0x119a1724u));
  /* 11977006 push 0x119a151c */
  push32((uint32_t)(0x119a151cu));
  /* 1197700b call 0x119770a0 */
  push32(0x11977010u); f_119770a0();
  /* 11977010 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977013:;
  /* 11977013 push 0x119a192c */
  push32((uint32_t)(0x119a192cu));
  /* 11977018 push 0x119a1828 */
  push32((uint32_t)(0x119a1828u));
  /* 1197701d call 0x119770a0 */
  push32(0x11977022u); f_119770a0();
  /* 11977022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977025 cmp dword ptr [0x119a38b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a38b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197702c jne 0x1197704e */
  if (!C.zf) goto L_1197704e;
  /* 1197702e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11977030 call 0x11978c80 */
  push32(0x11977035u); f_11978c80();
  /* 11977035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977038 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1197703b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197703d je 0x1197704e */
  if (C.zf) goto L_1197704e;
  /* 1197703f mov dword ptr [0x119a38b0], 1 */
  w32((uint32_t)(0x119a38b0), (0x1u));
  /* 11977049 call 0x11979590 */
  push32(0x1197704eu); f_11979590();
L_1197704e:;
  /* 1197704e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977052 je 0x1197705b */
  if (C.zf) goto L_1197705b;
  /* 11977054 call 0x11977090 */
  push32(0x11977059u); f_11977090();
  /* 11977059 jmp 0x1197706f */
  goto L_1197706f;
L_1197705b:;
  /* 1197705b mov dword ptr [0x119a38ac], 1 */
  w32((uint32_t)(0x119a38ac), (0x1u));
  /* 11977065 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977068 push ecx */
  push32((uint32_t)(ECX));
  /* 11977069 call dword ptr [0x119a63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b4))), 0x1197706fu);
L_1197706f:;
  /* 1197706f mov esp, ebp */
  ESP = (EBP);
  /* 11977071 pop ebp */
  EBP = (pop32());
  /* 11977072 ret  */
  ESPCHK(0x11976f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x11977080 (15 bytes, 7 insns) */
void f_11977080(void) {
  FTRACE(0x11977080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977080 push ebp */
  push32((uint32_t)(EBP));
  /* 11977081 mov ebp, esp */
  EBP = (ESP);
  /* 11977083 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11977085 call 0x1197b170 */
  push32(0x1197708au); f_1197b170();
  /* 1197708a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197708d pop ebp */
  EBP = (pop32());
  /* 1197708e ret  */
  ESPCHK(0x11977080u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x11977090 (15 bytes, 7 insns) */
void f_11977090(void) {
  FTRACE(0x11977090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977090 push ebp */
  push32((uint32_t)(EBP));
  /* 11977091 mov ebp, esp */
  EBP = (ESP);
  /* 11977093 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11977095 call 0x1197b210 */
  push32(0x1197709au); f_1197b210();
  /* 1197709a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197709d pop ebp */
  EBP = (pop32());
  /* 1197709e ret  */
  ESPCHK(0x11977090u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x119770a0 (37 bytes, 16 insns) */
void f_119770a0(void) {
  FTRACE(0x119770a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119770a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119770a1 mov ebp, esp */
  EBP = (ESP);
L_119770a3:;
  /* 119770a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119770a6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119770a9 jae 0x119770c3 */
  if (!C.cf) goto L_119770c3;
  /* 119770ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119770ae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119770b1 je 0x119770b8 */
  if (C.zf) goto L_119770b8;
  /* 119770b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119770b6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x119770b8u);
L_119770b8:;
  /* 119770b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119770bb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119770be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119770c1 jmp 0x119770a3 */
  goto L_119770a3;
L_119770c3:;
  /* 119770c3 pop ebp */
  EBP = (pop32());
  /* 119770c4 ret  */
  ESPCHK(0x119770a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x119770d0 (130 bytes, 42 insns) */
void f_119770d0(void) {
  FTRACE(0x119770d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119770d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119770d1 mov ebp, esp */
  EBP = (ESP);
  /* 119770d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119770d4 call 0x1197b090 */
  push32(0x119770d9u); f_1197b090();
  /* 119770d9 call dword ptr [0x119a63c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c8))), 0x119770dfu);
  /* 119770df mov dword ptr [0x119a1a5c], eax */
  w32((uint32_t)(0x119a1a5c), (EAX));
  /* 119770e4 cmp dword ptr [0x119a1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119770eb jne 0x119770f1 */
  if (!C.zf) goto L_119770f1;
  /* 119770ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119770ef jmp 0x1197714e */
  goto L_1197714e;
L_119770f1:;
  /* 119770f1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 119770f3 push 0x1199f0ac */
  push32((uint32_t)(0x1199f0acu));
  /* 119770f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119770fa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 119770fc push 1 */
  push32((uint32_t)(0x1u));
  /* 119770fe call 0x11977b80 */
  push32(0x11977103u); f_11977b80();
  /* 11977103 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977106 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11977109 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197710d je 0x11977124 */
  if (C.zf) goto L_11977124;
  /* 1197710f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977112 push eax */
  push32((uint32_t)(EAX));
  /* 11977113 mov ecx, dword ptr [0x119a1a5c] */
  ECX = (r32((uint32_t)(0x119a1a5c)));
  /* 11977119 push ecx */
  push32((uint32_t)(ECX));
  /* 1197711a call dword ptr [0x119a63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c4))), 0x11977120u);
  /* 11977120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977122 jne 0x11977128 */
  if (!C.zf) goto L_11977128;
L_11977124:;
  /* 11977124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977126 jmp 0x1197714e */
  goto L_1197714e;
L_11977128:;
  /* 11977128 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197712b push edx */
  push32((uint32_t)(EDX));
  /* 1197712c call 0x11977190 */
  push32(0x11977131u); f_11977190();
  /* 11977131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977134 call dword ptr [0x119a63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c0))), 0x1197713au);
  /* 1197713a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197713d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1197713f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977142 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11977149 mov eax, 1 */
  EAX = (0x1u);
L_1197714e:;
  /* 1197714e mov esp, ebp */
  ESP = (EBP);
  /* 11977150 pop ebp */
  EBP = (pop32());
  /* 11977151 ret  */
  ESPCHK(0x119770d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x11977160 (41 bytes, 11 insns) */
void f_11977160(void) {
  FTRACE(0x11977160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977160 push ebp */
  push32((uint32_t)(EBP));
  /* 11977161 mov ebp, esp */
  EBP = (ESP);
  /* 11977163 call 0x1197b0d0 */
  push32(0x11977168u); f_1197b0d0();
  /* 11977168 cmp dword ptr [0x119a1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197716f je 0x11977187 */
  if (C.zf) goto L_11977187;
  /* 11977171 mov eax, dword ptr [0x119a1a5c] */
  EAX = (r32((uint32_t)(0x119a1a5c)));
  /* 11977176 push eax */
  push32((uint32_t)(EAX));
  /* 11977177 call dword ptr [0x119a63cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63cc))), 0x1197717du);
  /* 1197717d mov dword ptr [0x119a1a5c], 0xffffffff */
  w32((uint32_t)(0x119a1a5c), (0xffffffffu));
L_11977187:;
  /* 11977187 pop ebp */
  EBP = (pop32());
  /* 11977188 ret  */
  ESPCHK(0x11977160u, _esp0);
  ESP += 4; return;
}

/* FUN_10007190 @ 0x11977190 (25 bytes, 8 insns) */
void f_11977190(void) {
  FTRACE(0x11977190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977190 push ebp */
  push32((uint32_t)(EBP));
  /* 11977191 mov ebp, esp */
  EBP = (ESP);
  /* 11977193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977196 mov dword ptr [eax + 0x50], 0x119a1c00 */
  w32((uint32_t)(EAX + 0x50), (0x119a1c00u));
  /* 1197719d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119771a0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 119771a7 pop ebp */
  EBP = (pop32());
  /* 119771a8 ret  */
  ESPCHK(0x11977190u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x119771b0 (152 bytes, 48 insns) */
void f_119771b0(void) {
  FTRACE(0x119771b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119771b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119771b1 mov ebp, esp */
  EBP = (ESP);
  /* 119771b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119771b6 call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x119771bcu);
  /* 119771bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119771bf mov eax, dword ptr [0x119a1a5c] */
  EAX = (r32((uint32_t)(0x119a1a5c)));
  /* 119771c4 push eax */
  push32((uint32_t)(EAX));
  /* 119771c5 call dword ptr [0x119a63d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d4))), 0x119771cbu);
  /* 119771cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119771ce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119771d2 jne 0x11977237 */
  if (!C.zf) goto L_11977237;
  /* 119771d4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 119771d9 push 0x1199f0ac */
  push32((uint32_t)(0x1199f0acu));
  /* 119771de push 2 */
  push32((uint32_t)(0x2u));
  /* 119771e0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 119771e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119771e4 call 0x11977b80 */
  push32(0x119771e9u); f_11977b80();
  /* 119771e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119771ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119771ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119771f3 je 0x1197722d */
  if (C.zf) goto L_1197722d;
  /* 119771f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119771f8 push ecx */
  push32((uint32_t)(ECX));
  /* 119771f9 mov edx, dword ptr [0x119a1a5c] */
  EDX = (r32((uint32_t)(0x119a1a5c)));
  /* 119771ff push edx */
  push32((uint32_t)(EDX));
  /* 11977200 call dword ptr [0x119a63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c4))), 0x11977206u);
  /* 11977206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977208 je 0x1197722d */
  if (C.zf) goto L_1197722d;
  /* 1197720a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197720d push eax */
  push32((uint32_t)(EAX));
  /* 1197720e call 0x11977190 */
  push32(0x11977213u); f_11977190();
  /* 11977213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977216 call dword ptr [0x119a63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c0))), 0x1197721cu);
  /* 1197721c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197721f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11977221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977224 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1197722b jmp 0x11977237 */
  goto L_11977237;
L_1197722d:;
  /* 1197722d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1197722f call 0x119766e0 */
  push32(0x11977234u); f_119766e0();
  /* 11977234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977237:;
  /* 11977237 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197723a push eax */
  push32((uint32_t)(EAX));
  /* 1197723b call dword ptr [0x119a63d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d0))), 0x11977241u);
  /* 11977241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977244 mov esp, ebp */
  ESP = (EBP);
  /* 11977246 pop ebp */
  EBP = (pop32());
  /* 11977247 ret  */
  ESPCHK(0x119771b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x11977250 (263 bytes, 86 insns) */
void f_11977250(void) {
  FTRACE(0x11977250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977250 push ebp */
  push32((uint32_t)(EBP));
  /* 11977251 mov ebp, esp */
  EBP = (ESP);
  /* 11977253 cmp dword ptr [0x119a1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197725a je 0x11977355 */
  if (C.zf) goto L_11977355;
  /* 11977260 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977264 jne 0x11977275 */
  if (!C.zf) goto L_11977275;
  /* 11977266 mov eax, dword ptr [0x119a1a5c] */
  EAX = (r32((uint32_t)(0x119a1a5c)));
  /* 1197726b push eax */
  push32((uint32_t)(EAX));
  /* 1197726c call dword ptr [0x119a63d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d4))), 0x11977272u);
  /* 11977272 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11977275:;
  /* 11977275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977279 je 0x11977346 */
  if (C.zf) goto L_11977346;
  /* 1197727f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977282 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977286 je 0x11977299 */
  if (C.zf) goto L_11977299;
  /* 11977288 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197728a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197728d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11977290 push eax */
  push32((uint32_t)(EAX));
  /* 11977291 call 0x11978200 */
  push32(0x11977296u); f_11978200();
  /* 11977296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977299:;
  /* 11977299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197729c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119772a0 je 0x119772b3 */
  if (C.zf) goto L_119772b3;
  /* 119772a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119772a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772a7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 119772aa push eax */
  push32((uint32_t)(EAX));
  /* 119772ab call 0x11978200 */
  push32(0x119772b0u); f_11978200();
  /* 119772b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119772b3:;
  /* 119772b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772b6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119772ba je 0x119772cd */
  if (C.zf) goto L_119772cd;
  /* 119772bc push 2 */
  push32((uint32_t)(0x2u));
  /* 119772be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772c1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 119772c4 push eax */
  push32((uint32_t)(EAX));
  /* 119772c5 call 0x11978200 */
  push32(0x119772cau); f_11978200();
  /* 119772ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119772cd:;
  /* 119772cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772d0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119772d4 je 0x119772e7 */
  if (C.zf) goto L_119772e7;
  /* 119772d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119772d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772db mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 119772de push eax */
  push32((uint32_t)(EAX));
  /* 119772df call 0x11978200 */
  push32(0x119772e4u); f_11978200();
  /* 119772e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119772e7:;
  /* 119772e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772ea cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119772ee je 0x11977301 */
  if (C.zf) goto L_11977301;
  /* 119772f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119772f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119772f5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 119772f8 push eax */
  push32((uint32_t)(EAX));
  /* 119772f9 call 0x11978200 */
  push32(0x119772feu); f_11978200();
  /* 119772fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977301:;
  /* 11977301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977304 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977308 je 0x1197731b */
  if (C.zf) goto L_1197731b;
  /* 1197730a push 2 */
  push32((uint32_t)(0x2u));
  /* 1197730c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197730f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11977312 push eax */
  push32((uint32_t)(EAX));
  /* 11977313 call 0x11978200 */
  push32(0x11977318u); f_11978200();
  /* 11977318 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197731b:;
  /* 1197731b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197731e cmp dword ptr [ecx + 0x50], 0x119a1c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x119a1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977325 je 0x11977338 */
  if (C.zf) goto L_11977338;
  /* 11977327 push 2 */
  push32((uint32_t)(0x2u));
  /* 11977329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197732c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1197732f push eax */
  push32((uint32_t)(EAX));
  /* 11977330 call 0x11978200 */
  push32(0x11977335u); f_11978200();
  /* 11977335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977338:;
  /* 11977338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197733a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197733d push ecx */
  push32((uint32_t)(ECX));
  /* 1197733e call 0x11978200 */
  push32(0x11977343u); f_11978200();
  /* 11977343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977346:;
  /* 11977346 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977348 mov edx, dword ptr [0x119a1a5c] */
  EDX = (r32((uint32_t)(0x119a1a5c)));
  /* 1197734e push edx */
  push32((uint32_t)(EDX));
  /* 1197734f call dword ptr [0x119a63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c4))), 0x11977355u);
L_11977355:;
  /* 11977355 pop ebp */
  EBP = (pop32());
  /* 11977356 ret  */
  ESPCHK(0x11977250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007360 @ 0x11977360 (11 bytes, 5 insns) */
void f_11977360(void) {
  FTRACE(0x11977360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977360 push ebp */
  push32((uint32_t)(EBP));
  /* 11977361 mov ebp, esp */
  EBP = (ESP);
  /* 11977363 call dword ptr [0x119a63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63c0))), 0x11977369u);
  /* 11977369 pop ebp */
  EBP = (pop32());
  /* 1197736a ret  */
  ESPCHK(0x11977360u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x11977370 (11 bytes, 5 insns) */
void f_11977370(void) {
  FTRACE(0x11977370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977370 push ebp */
  push32((uint32_t)(EBP));
  /* 11977371 mov ebp, esp */
  EBP = (ESP);
  /* 11977373 call dword ptr [0x119a63dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63dc))), 0x11977379u);
  /* 11977379 pop ebp */
  EBP = (pop32());
  /* 1197737a ret  */
  ESPCHK(0x11977370u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x11977380 (804 bytes, 236 insns) */
void f_11977380(void) {
  FTRACE(0x11977380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977380 push ebp */
  push32((uint32_t)(EBP));
  /* 11977381 mov ebp, esp */
  EBP = (ESP);
  /* 11977383 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977386 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1197738b push 0x1199f0b8 */
  push32((uint32_t)(0x1199f0b8u));
  /* 11977390 push 2 */
  push32((uint32_t)(0x2u));
  /* 11977392 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11977397 call 0x11977770 */
  push32(0x1197739cu); f_11977770();
  /* 1197739c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197739f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 119773a2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119773a6 jne 0x119773b2 */
  if (!C.zf) goto L_119773b2;
  /* 119773a8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 119773aa call 0x119766e0 */
  push32(0x119773afu); f_119766e0();
  /* 119773af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119773b2:;
  /* 119773b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119773b5 mov dword ptr [0x119a5240], eax */
  w32((uint32_t)(0x119a5240), (EAX));
  /* 119773ba mov dword ptr [0x119a537c], 0x20 */
  w32((uint32_t)(0x119a537c), (0x20u));
  /* 119773c4 jmp 0x119773cf */
  goto L_119773cf;
L_119773c6:;
  /* 119773c6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119773c9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119773cc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_119773cf:;
  /* 119773cf mov edx, dword ptr [0x119a5240] */
  EDX = (r32((uint32_t)(0x119a5240)));
  /* 119773d5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119773db cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119773de jae 0x11977403 */
  if (!C.cf) goto L_11977403;
  /* 119773e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119773e3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 119773e7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119773ea mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119773f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119773f3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 119773f7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119773fa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11977401 jmp 0x119773c6 */
  goto L_119773c6;
L_11977403:;
  /* 11977403 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11977406 push ecx */
  push32((uint32_t)(ECX));
  /* 11977407 call dword ptr [0x119a63e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63e8))), 0x1197740du);
  /* 1197740d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11977410 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11977416 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11977418 je 0x119775a5 */
  if (C.zf) goto L_119775a5;
  /* 1197741e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977422 je 0x119775a5 */
  if (C.zf) goto L_119775a5;
  /* 11977428 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197742b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197742d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11977430 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11977433 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977436 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11977439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197743c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197743f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11977442 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977449 jge 0x11977453 */
  if ((C.sf==C.of)) goto L_11977453;
  /* 1197744b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1197744e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11977451 jmp 0x1197745a */
  goto L_1197745a;
L_11977453:;
  /* 11977453 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1197745a:;
  /* 1197745a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1197745d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11977460 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11977467 jmp 0x11977472 */
  goto L_11977472;
L_11977469:;
  /* 11977469 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1197746c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197746f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11977472:;
  /* 11977472 mov ecx, dword ptr [0x119a537c] */
  ECX = (r32((uint32_t)(0x119a537c)));
  /* 11977478 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197747b jge 0x11977512 */
  if ((C.sf==C.of)) goto L_11977512;
  /* 11977481 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11977486 push 0x1199f0b8 */
  push32((uint32_t)(0x1199f0b8u));
  /* 1197748b push 2 */
  push32((uint32_t)(0x2u));
  /* 1197748d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11977492 call 0x11977770 */
  push32(0x11977497u); f_11977770();
  /* 11977497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197749a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1197749d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119774a1 jne 0x119774ae */
  if (!C.zf) goto L_119774ae;
  /* 119774a3 mov edx, dword ptr [0x119a537c] */
  EDX = (r32((uint32_t)(0x119a537c)));
  /* 119774a9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 119774ac jmp 0x11977512 */
  goto L_11977512;
L_119774ae:;
  /* 119774ae mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 119774b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119774b4 mov dword ptr [eax*4 + 0x119a5240], ecx */
  w32((uint32_t)(EAX*4 + 0x119a5240), (ECX));
  /* 119774bb mov edx, dword ptr [0x119a537c] */
  EDX = (r32((uint32_t)(0x119a537c)));
  /* 119774c1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119774c4 mov dword ptr [0x119a537c], edx */
  w32((uint32_t)(0x119a537c), (EDX));
  /* 119774ca jmp 0x119774d5 */
  goto L_119774d5;
L_119774cc:;
  /* 119774cc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119774cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119774d2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_119774d5:;
  /* 119774d5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 119774d8 mov edx, dword ptr [ecx*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 119774df add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119774e5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119774e8 jae 0x1197750d */
  if (!C.cf) goto L_1197750d;
  /* 119774ea mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119774ed mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 119774f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119774f4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119774fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119774fd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11977501 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11977504 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1197750b jmp 0x119774cc */
  goto L_119774cc;
L_1197750d:;
  /* 1197750d jmp 0x11977469 */
  goto L_11977469;
L_11977512:;
  /* 11977512 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11977519 jmp 0x11977536 */
  goto L_11977536;
L_1197751b:;
  /* 1197751b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1197751e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977521 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11977524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977527 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197752a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197752d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11977530 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977533 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11977536:;
  /* 11977536 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11977539 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197753c jge 0x119775a5 */
  if ((C.sf==C.of)) goto L_119775a5;
  /* 1197753e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11977541 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977544 je 0x119775a0 */
  if (C.zf) goto L_119775a0;
  /* 11977546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977549 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1197754c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1197754f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11977551 je 0x119775a0 */
  if (C.zf) goto L_119775a0;
  /* 11977553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977556 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11977559 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1197755c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197755e jne 0x11977570 */
  if (!C.zf) goto L_11977570;
  /* 11977560 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11977563 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11977565 push edx */
  push32((uint32_t)(EDX));
  /* 11977566 call dword ptr [0x119a63e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63e4))), 0x1197756cu);
  /* 1197756c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197756e je 0x119775a0 */
  if (C.zf) goto L_119775a0;
L_11977570:;
  /* 11977570 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11977573 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11977576 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11977579 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1197757c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197757f mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11977586 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977588 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1197758b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1197758e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11977591 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11977593 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11977595 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11977598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197759b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197759d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_119775a0:;
  /* 119775a0 jmp 0x1197751b */
  goto L_1197751b;
L_119775a5:;
  /* 119775a5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 119775ac jmp 0x119775b7 */
  goto L_119775b7;
L_119775ae:;
  /* 119775ae mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 119775b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119775b4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_119775b7:;
  /* 119775b7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119775bb jge 0x11977694 */
  if ((C.sf==C.of)) goto L_11977694;
  /* 119775c1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 119775c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119775c7 mov edx, dword ptr [0x119a5240] */
  EDX = (r32((uint32_t)(0x119a5240)));
  /* 119775cd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119775cf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 119775d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119775d5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119775d8 jne 0x11977680 */
  if (!C.zf) goto L_11977680;
  /* 119775de mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119775e1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 119775e5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119775e9 jne 0x119775f4 */
  if (!C.zf) goto L_119775f4;
  /* 119775eb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 119775f2 jmp 0x11977604 */
  goto L_11977604;
L_119775f4:;
  /* 119775f4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 119775f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119775fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119775fc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119775fe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977601 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11977604:;
  /* 11977604 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11977607 push eax */
  push32((uint32_t)(EAX));
  /* 11977608 call dword ptr [0x119a6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6394))), 0x1197760eu);
  /* 1197760e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11977611 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977615 je 0x1197766f */
  if (C.zf) goto L_1197766f;
  /* 11977617 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1197761a push ecx */
  push32((uint32_t)(ECX));
  /* 1197761b call dword ptr [0x119a63e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63e4))), 0x11977621u);
  /* 11977621 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11977624 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977628 je 0x1197766f */
  if (C.zf) goto L_1197766f;
  /* 1197762a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1197762d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11977630 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11977632 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11977635 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197763b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197763e jne 0x11977650 */
  if (!C.zf) goto L_11977650;
  /* 11977640 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11977643 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11977646 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11977648 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1197764b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1197764e jmp 0x1197766d */
  goto L_1197766d;
L_11977650:;
  /* 11977650 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11977653 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11977659 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197765c jne 0x1197766d */
  if (!C.zf) goto L_1197766d;
  /* 1197765e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11977661 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11977664 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11977667 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1197766a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1197766d:;
  /* 1197766d jmp 0x1197767e */
  goto L_1197767e;
L_1197766f:;
  /* 1197766f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11977672 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11977675 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11977678 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1197767b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1197767e:;
  /* 1197767e jmp 0x1197768f */
  goto L_1197768f;
L_11977680:;
  /* 11977680 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11977683 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11977686 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11977689 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1197768c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1197768f:;
  /* 1197768f jmp 0x119775ae */
  goto L_119775ae;
L_11977694:;
  /* 11977694 mov eax, dword ptr [0x119a537c] */
  EAX = (r32((uint32_t)(0x119a537c)));
  /* 11977699 push eax */
  push32((uint32_t)(EAX));
  /* 1197769a call dword ptr [0x119a63e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63e0))), 0x119776a0u);
  /* 119776a0 mov esp, ebp */
  ESP = (EBP);
  /* 119776a2 pop ebp */
  EBP = (pop32());
  /* 119776a3 ret  */
  ESPCHK(0x11977380u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x119776b0 (155 bytes, 45 insns) */
void f_119776b0(void) {
  FTRACE(0x119776b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119776b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119776b1 mov ebp, esp */
  EBP = (ESP);
  /* 119776b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119776b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119776bd jmp 0x119776c8 */
  goto L_119776c8;
L_119776bf:;
  /* 119776bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119776c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119776c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119776c8:;
  /* 119776c8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119776cc jge 0x11977747 */
  if ((C.sf==C.of)) goto L_11977747;
  /* 119776ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119776d1 cmp dword ptr [ecx*4 + 0x119a5240], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119a5240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119776d9 je 0x11977742 */
  if (C.zf) goto L_11977742;
  /* 119776db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119776de mov eax, dword ptr [edx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 119776e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119776e8 jmp 0x119776f3 */
  goto L_119776f3;
L_119776ea:;
  /* 119776ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119776ed add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119776f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119776f3:;
  /* 119776f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119776f6 mov eax, dword ptr [edx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 119776fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977702 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977705 jae 0x1197771f */
  if (!C.cf) goto L_1197771f;
  /* 11977707 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197770a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197770e je 0x1197771d */
  if (C.zf) goto L_1197771d;
  /* 11977710 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977713 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977716 push edx */
  push32((uint32_t)(EDX));
  /* 11977717 call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x1197771du);
L_1197771d:;
  /* 1197771d jmp 0x119776ea */
  goto L_119776ea;
L_1197771f:;
  /* 1197771f push 2 */
  push32((uint32_t)(0x2u));
  /* 11977721 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977724 mov ecx, dword ptr [eax*4 + 0x119a5240] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 1197772b push ecx */
  push32((uint32_t)(ECX));
  /* 1197772c call 0x11978200 */
  push32(0x11977731u); f_11978200();
  /* 11977731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977734 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977737 mov dword ptr [edx*4 + 0x119a5240], 0 */
  w32((uint32_t)(EDX*4 + 0x119a5240), (0x0u));
L_11977742:;
  /* 11977742 jmp 0x119776bf */
  goto L_119776bf;
L_11977747:;
  /* 11977747 mov esp, ebp */
  ESP = (EBP);
  /* 11977749 pop ebp */
  EBP = (pop32());
  /* 1197774a ret  */
  ESPCHK(0x119776b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007750 @ 0x11977750 (29 bytes, 13 insns) */
void f_11977750(void) {
  FTRACE(0x11977750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977750 push ebp */
  push32((uint32_t)(EBP));
  /* 11977751 mov ebp, esp */
  EBP = (ESP);
  /* 11977753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977755 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977757 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977759 mov eax, dword ptr [0x119a3a58] */
  EAX = (r32((uint32_t)(0x119a3a58)));
  /* 1197775e push eax */
  push32((uint32_t)(EAX));
  /* 1197775f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977762 push ecx */
  push32((uint32_t)(ECX));
  /* 11977763 call 0x119777c0 */
  push32(0x11977768u); f_119777c0();
  /* 11977768 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197776b pop ebp */
  EBP = (pop32());
  /* 1197776c ret  */
  ESPCHK(0x11977750u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x11977770 (35 bytes, 16 insns) */
void f_11977770(void) {
  FTRACE(0x11977770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977770 push ebp */
  push32((uint32_t)(EBP));
  /* 11977771 mov ebp, esp */
  EBP = (ESP);
  /* 11977773 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977776 push eax */
  push32((uint32_t)(EAX));
  /* 11977777 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197777a push ecx */
  push32((uint32_t)(ECX));
  /* 1197777b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197777e push edx */
  push32((uint32_t)(EDX));
  /* 1197777f mov eax, dword ptr [0x119a3a58] */
  EAX = (r32((uint32_t)(0x119a3a58)));
  /* 11977784 push eax */
  push32((uint32_t)(EAX));
  /* 11977785 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977788 push ecx */
  push32((uint32_t)(ECX));
  /* 11977789 call 0x119777c0 */
  push32(0x1197778eu); f_119777c0();
  /* 1197778e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977791 pop ebp */
  EBP = (pop32());
  /* 11977792 ret  */
  ESPCHK(0x11977770u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x119777a0 (27 bytes, 13 insns) */
void f_119777a0(void) {
  FTRACE(0x119777a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119777a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119777a1 mov ebp, esp */
  EBP = (ESP);
  /* 119777a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119777a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119777a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119777a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119777ac push eax */
  push32((uint32_t)(EAX));
  /* 119777ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119777b0 push ecx */
  push32((uint32_t)(ECX));
  /* 119777b1 call 0x119777c0 */
  push32(0x119777b6u); f_119777c0();
  /* 119777b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119777b9 pop ebp */
  EBP = (pop32());
  /* 119777ba ret  */
  ESPCHK(0x119777a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x119777c0 (94 bytes, 38 insns) */
void f_119777c0(void) {
  FTRACE(0x119777c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119777c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119777c1 mov ebp, esp */
  EBP = (ESP);
  /* 119777c3 push ecx */
  push32((uint32_t)(ECX));
L_119777c4:;
  /* 119777c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 119777c6 call 0x1197b170 */
  push32(0x119777cbu); f_1197b170();
  /* 119777cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119777ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119777d1 push eax */
  push32((uint32_t)(EAX));
  /* 119777d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119777d5 push ecx */
  push32((uint32_t)(ECX));
  /* 119777d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119777d9 push edx */
  push32((uint32_t)(EDX));
  /* 119777da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119777dd push eax */
  push32((uint32_t)(EAX));
  /* 119777de call 0x11977840 */
  push32(0x119777e3u); f_11977840();
  /* 119777e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119777e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119777e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 119777eb call 0x1197b210 */
  push32(0x119777f0u); f_1197b210();
  /* 119777f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119777f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119777f7 jne 0x119777ff */
  if (!C.zf) goto L_119777ff;
  /* 119777f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119777fd jne 0x11977804 */
  if (!C.zf) goto L_11977804;
L_119777ff:;
  /* 119777ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977802 jmp 0x1197781a */
  goto L_1197781a;
L_11977804:;
  /* 11977804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977807 push ecx */
  push32((uint32_t)(ECX));
  /* 11977808 call 0x1197b4b0 */
  push32(0x1197780du); f_1197b4b0();
  /* 1197780d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977812 jne 0x11977818 */
  if (!C.zf) goto L_11977818;
  /* 11977814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977816 jmp 0x1197781a */
  goto L_1197781a;
L_11977818:;
  /* 11977818 jmp 0x119777c4 */
  goto L_119777c4;
L_1197781a:;
  /* 1197781a mov esp, ebp */
  ESP = (EBP);
  /* 1197781c pop ebp */
  EBP = (pop32());
  /* 1197781d ret  */
  ESPCHK(0x119777c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x11977820 (23 bytes, 11 insns) */
void f_11977820(void) {
  FTRACE(0x11977820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977820 push ebp */
  push32((uint32_t)(EBP));
  /* 11977821 mov ebp, esp */
  EBP = (ESP);
  /* 11977823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977827 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197782c push eax */
  push32((uint32_t)(EAX));
  /* 1197782d call 0x11977840 */
  push32(0x11977832u); f_11977840();
  /* 11977832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977835 pop ebp */
  EBP = (pop32());
  /* 11977836 ret  */
  ESPCHK(0x11977820u, _esp0);
  ESP += 4; return;
}

/* FUN_10007840 @ 0x11977840 (787 bytes, 254 insns) */
void f_11977840(void) {
  FTRACE(0x11977840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977840 push ebp */
  push32((uint32_t)(EBP));
  /* 11977841 mov ebp, esp */
  EBP = (ESP);
  /* 11977843 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977846 push ebx */
  push32((uint32_t)(EBX));
  /* 11977847 push esi */
  push32((uint32_t)(ESI));
  /* 11977848 push edi */
  push32((uint32_t)(EDI));
  /* 11977849 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11977850 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11977855 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11977858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197785a je 0x1197788c */
  if (C.zf) goto L_1197788c;
L_1197785c:;
  /* 1197785c call 0x11978910 */
  push32(0x11977861u); f_11978910();
  /* 11977861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977863 jne 0x11977886 */
  if (!C.zf) goto L_11977886;
  /* 11977865 push 0x1199f1ac */
  push32((uint32_t)(0x1199f1acu));
  /* 1197786a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197786c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11977871 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11977876 push 2 */
  push32((uint32_t)(0x2u));
  /* 11977878 call 0x11976830 */
  push32(0x1197787du); f_11976830();
  /* 1197787d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977880 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977883 jne 0x11977886 */
  if (!C.zf) goto L_11977886;
  /* 11977885 int3  */
  x86_unimpl("int3 @ 0x11977885");
L_11977886:;
  /* 11977886 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11977888 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197788a jne 0x1197785c */
  if (!C.zf) goto L_1197785c;
L_1197788c:;
  /* 1197788c mov edx, dword ptr [0x119a1a88] */
  EDX = (r32((uint32_t)(0x119a1a88)));
  /* 11977892 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11977895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977898 cmp eax, dword ptr [0x119a1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197789e jne 0x119778a1 */
  if (!C.zf) goto L_119778a1;
  /* 119778a0 int3  */
  x86_unimpl("int3 @ 0x119778a0");
L_119778a1:;
  /* 119778a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119778a4 push ecx */
  push32((uint32_t)(ECX));
  /* 119778a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119778a8 push edx */
  push32((uint32_t)(EDX));
  /* 119778a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119778ac push eax */
  push32((uint32_t)(EAX));
  /* 119778ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119778b0 push ecx */
  push32((uint32_t)(ECX));
  /* 119778b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119778b4 push edx */
  push32((uint32_t)(EDX));
  /* 119778b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119778b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119778b9 call dword ptr [0x119a1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a1c90))), 0x119778bfu);
  /* 119778bf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119778c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119778c4 jne 0x11977924 */
  if (!C.zf) goto L_11977924;
  /* 119778c6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119778ca je 0x119778f7 */
  if (C.zf) goto L_119778f7;
L_119778cc:;
  /* 119778cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119778cf push eax */
  push32((uint32_t)(EAX));
  /* 119778d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119778d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119778d4 push 0x1199f168 */
  push32((uint32_t)(0x1199f168u));
  /* 119778d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119778db push 0 */
  push32((uint32_t)(0x0u));
  /* 119778dd push 0 */
  push32((uint32_t)(0x0u));
  /* 119778df push 0 */
  push32((uint32_t)(0x0u));
  /* 119778e1 call 0x11976830 */
  push32(0x119778e6u); f_11976830();
  /* 119778e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119778e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119778ec jne 0x119778ef */
  if (!C.zf) goto L_119778ef;
  /* 119778ee int3  */
  x86_unimpl("int3 @ 0x119778ee");
L_119778ef:;
  /* 119778ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119778f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119778f3 jne 0x119778cc */
  if (!C.zf) goto L_119778cc;
  /* 119778f5 jmp 0x1197791d */
  goto L_1197791d;
L_119778f7:;
  /* 119778f7 push 0x1199f144 */
  push32((uint32_t)(0x1199f144u));
  /* 119778fc push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11977901 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977905 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977909 call 0x11976830 */
  push32(0x1197790eu); f_11976830();
  /* 1197790e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977911 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977914 jne 0x11977917 */
  if (!C.zf) goto L_11977917;
  /* 11977916 int3  */
  x86_unimpl("int3 @ 0x11977916");
L_11977917:;
  /* 11977917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197791b jne 0x119778f7 */
  if (!C.zf) goto L_119778f7;
L_1197791d:;
  /* 1197791d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197791f jmp 0x11977b4c */
  goto L_11977b4c;
L_11977924:;
  /* 11977924 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977927 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197792d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977930 je 0x11977946 */
  if (C.zf) goto L_11977946;
  /* 11977932 mov edx, dword ptr [0x119a1a84] */
  EDX = (r32((uint32_t)(0x119a1a84)));
  /* 11977938 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1197793b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197793d jne 0x11977946 */
  if (!C.zf) goto L_11977946;
  /* 1197793f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11977946:;
  /* 11977946 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197794a ja 0x11977957 */
  if ((!C.cf&&!C.zf)) goto L_11977957;
  /* 1197794c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197794f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977952 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977955 jbe 0x11977983 */
  if ((C.cf||C.zf)) goto L_11977983;
L_11977957:;
  /* 11977957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197795a push ecx */
  push32((uint32_t)(ECX));
  /* 1197795b push 0x1199f11c */
  push32((uint32_t)(0x1199f11cu));
  /* 11977960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977962 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977964 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977966 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977968 call 0x11976830 */
  push32(0x1197796du); f_11976830();
  /* 1197796d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977970 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977973 jne 0x11977976 */
  if (!C.zf) goto L_11977976;
  /* 11977975 int3  */
  x86_unimpl("int3 @ 0x11977975");
L_11977976:;
  /* 11977976 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11977978 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197797a jne 0x11977957 */
  if (!C.zf) goto L_11977957;
  /* 1197797c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197797e jmp 0x11977b4c */
  goto L_11977b4c;
L_11977983:;
  /* 11977983 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977986 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197798b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197798e je 0x119779d0 */
  if (C.zf) goto L_119779d0;
  /* 11977990 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977994 je 0x119779d0 */
  if (C.zf) goto L_119779d0;
  /* 11977996 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977999 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197799f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119779a2 je 0x119779d0 */
  if (C.zf) goto L_119779d0;
  /* 119779a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119779a8 je 0x119779d0 */
  if (C.zf) goto L_119779d0;
L_119779aa:;
  /* 119779aa push 0x1199f0e8 */
  push32((uint32_t)(0x1199f0e8u));
  /* 119779af push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119779b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119779b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119779b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119779ba push 1 */
  push32((uint32_t)(0x1u));
  /* 119779bc call 0x11976830 */
  push32(0x119779c1u); f_11976830();
  /* 119779c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119779c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119779c7 jne 0x119779ca */
  if (!C.zf) goto L_119779ca;
  /* 119779c9 int3  */
  x86_unimpl("int3 @ 0x119779c9");
L_119779ca:;
  /* 119779ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119779cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119779ce jne 0x119779aa */
  if (!C.zf) goto L_119779aa;
L_119779d0:;
  /* 119779d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119779d3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119779d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119779d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119779dc push ecx */
  push32((uint32_t)(ECX));
  /* 119779dd call 0x1197b5c0 */
  push32(0x119779e2u); f_1197b5c0();
  /* 119779e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119779e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119779e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119779ec jne 0x119779f5 */
  if (!C.zf) goto L_119779f5;
  /* 119779ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119779f0 jmp 0x11977b4c */
  goto L_11977b4c;
L_119779f5:;
  /* 119779f5 mov edx, dword ptr [0x119a1a88] */
  EDX = (r32((uint32_t)(0x119a1a88)));
  /* 119779fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119779fe mov dword ptr [0x119a1a88], edx */
  w32((uint32_t)(0x119a1a88), (EDX));
  /* 11977a04 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977a08 je 0x11977a53 */
  if (C.zf) goto L_11977a53;
  /* 11977a0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a0d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11977a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a16 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11977a1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a20 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11977a27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a2a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11977a31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977a37 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11977a3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a3d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11977a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a47 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11977a4e jmp 0x11977af3 */
  goto L_11977af3;
L_11977a53:;
  /* 11977a53 mov edx, dword ptr [0x119a38b8] */
  EDX = (r32((uint32_t)(0x119a38b8)));
  /* 11977a59 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977a5c mov dword ptr [0x119a38b8], edx */
  w32((uint32_t)(0x119a38b8), (EDX));
  /* 11977a62 mov eax, dword ptr [0x119a38c0] */
  EAX = (r32((uint32_t)(0x119a38c0)));
  /* 11977a67 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977a6a mov dword ptr [0x119a38c0], eax */
  w32((uint32_t)(0x119a38c0), (EAX));
  /* 11977a6f mov ecx, dword ptr [0x119a38c0] */
  ECX = (r32((uint32_t)(0x119a38c0)));
  /* 11977a75 cmp ecx, dword ptr [0x119a38c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a38c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977a7b jbe 0x11977a89 */
  if ((C.cf||C.zf)) goto L_11977a89;
  /* 11977a7d mov edx, dword ptr [0x119a38c0] */
  EDX = (r32((uint32_t)(0x119a38c0)));
  /* 11977a83 mov dword ptr [0x119a38c4], edx */
  w32((uint32_t)(0x119a38c4), (EDX));
L_11977a89:;
  /* 11977a89 cmp dword ptr [0x119a38bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a38bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977a90 je 0x11977a9f */
  if (C.zf) goto L_11977a9f;
  /* 11977a92 mov eax, dword ptr [0x119a38bc] */
  EAX = (r32((uint32_t)(0x119a38bc)));
  /* 11977a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977a9a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11977a9d jmp 0x11977aa8 */
  goto L_11977aa8;
L_11977a9f:;
  /* 11977a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977aa2 mov dword ptr [0x119a38b4], edx */
  w32((uint32_t)(0x119a38b4), (EDX));
L_11977aa8:;
  /* 11977aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977aab mov ecx, dword ptr [0x119a38bc] */
  ECX = (r32((uint32_t)(0x119a38bc)));
  /* 11977ab1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11977ab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977ab6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11977abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977ac0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977ac3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11977ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977ac9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977acc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11977acf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977ad2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977ad5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11977ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977adb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977ade mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11977ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977ae4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977ae7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11977aea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977aed mov dword ptr [0x119a38bc], ecx */
  w32((uint32_t)(0x119a38bc), (ECX));
L_11977af3:;
  /* 11977af3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11977af5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11977af7 mov dl, byte ptr [0x119a1a90] */
  DL = (r8((uint32_t)(0x119a1a90)));
  /* 11977afd push edx */
  push32((uint32_t)(EDX));
  /* 11977afe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977b01 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977b04 push eax */
  push32((uint32_t)(EAX));
  /* 11977b05 call 0x1197b4e0 */
  push32(0x11977b0au); f_1197b4e0();
  /* 11977b0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977b0d push 4 */
  push32((uint32_t)(0x4u));
  /* 11977b0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11977b11 mov cl, byte ptr [0x119a1a90] */
  CL = (r8((uint32_t)(0x119a1a90)));
  /* 11977b17 push ecx */
  push32((uint32_t)(ECX));
  /* 11977b18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977b1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977b1e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11977b22 push ecx */
  push32((uint32_t)(ECX));
  /* 11977b23 call 0x1197b4e0 */
  push32(0x11977b28u); f_1197b4e0();
  /* 11977b28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977b2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977b2e push edx */
  push32((uint32_t)(EDX));
  /* 11977b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977b31 mov al, byte ptr [0x119a1a92] */
  AL = (r8((uint32_t)(0x119a1a92)));
  /* 11977b36 push eax */
  push32((uint32_t)(EAX));
  /* 11977b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977b3a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977b3d push ecx */
  push32((uint32_t)(ECX));
  /* 11977b3e call 0x1197b4e0 */
  push32(0x11977b43u); f_1197b4e0();
  /* 11977b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977b49 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11977b4c:;
  /* 11977b4c pop edi */
  EDI = (pop32());
  /* 11977b4d pop esi */
  ESI = (pop32());
  /* 11977b4e pop ebx */
  EBX = (pop32());
  /* 11977b4f mov esp, ebp */
  ESP = (EBP);
  /* 11977b51 pop ebp */
  EBP = (pop32());
  /* 11977b52 ret  */
  ESPCHK(0x11977840u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x11977b60 (27 bytes, 13 insns) */
void f_11977b60(void) {
  FTRACE(0x11977b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11977b61 mov ebp, esp */
  EBP = (ESP);
  /* 11977b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977b67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977b69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977b6c push eax */
  push32((uint32_t)(EAX));
  /* 11977b6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977b70 push ecx */
  push32((uint32_t)(ECX));
  /* 11977b71 call 0x11977b80 */
  push32(0x11977b76u); f_11977b80();
  /* 11977b76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977b79 pop ebp */
  EBP = (pop32());
  /* 11977b7a ret  */
  ESPCHK(0x11977b60u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11977b80 (96 bytes, 37 insns) */
void f_11977b80(void) {
  FTRACE(0x11977b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11977b81 mov ebp, esp */
  EBP = (ESP);
  /* 11977b83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977b86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977b89 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11977b8d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11977b90 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11977b93 push ecx */
  push32((uint32_t)(ECX));
  /* 11977b94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977b97 push edx */
  push32((uint32_t)(EDX));
  /* 11977b98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977b9b push eax */
  push32((uint32_t)(EAX));
  /* 11977b9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977b9f push ecx */
  push32((uint32_t)(ECX));
  /* 11977ba0 call 0x11977770 */
  push32(0x11977ba5u); f_11977770();
  /* 11977ba5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977ba8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11977bab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977baf je 0x11977bd9 */
  if (C.zf) goto L_11977bd9;
  /* 11977bb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977bb4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11977bb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977bba add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977bbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11977bc0:;
  /* 11977bc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977bc3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977bc6 jae 0x11977bd9 */
  if (!C.cf) goto L_11977bd9;
  /* 11977bc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977bcb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11977bce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977bd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977bd4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11977bd7 jmp 0x11977bc0 */
  goto L_11977bc0;
L_11977bd9:;
  /* 11977bd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977bdc mov esp, ebp */
  ESP = (EBP);
  /* 11977bde pop ebp */
  EBP = (pop32());
  /* 11977bdf ret  */
  ESPCHK(0x11977b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007be0 @ 0x11977be0 (27 bytes, 13 insns) */
void f_11977be0(void) {
  FTRACE(0x11977be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11977be1 mov ebp, esp */
  EBP = (ESP);
  /* 11977be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977be7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977be9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977bec push eax */
  push32((uint32_t)(EAX));
  /* 11977bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11977bf1 call 0x11977c00 */
  push32(0x11977bf6u); f_11977c00();
  /* 11977bf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977bf9 pop ebp */
  EBP = (pop32());
  /* 11977bfa ret  */
  ESPCHK(0x11977be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x11977c00 (64 bytes, 27 insns) */
void f_11977c00(void) {
  FTRACE(0x11977c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11977c01 mov ebp, esp */
  EBP = (ESP);
  /* 11977c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11977c04 push 9 */
  push32((uint32_t)(0x9u));
  /* 11977c06 call 0x1197b170 */
  push32(0x11977c0bu); f_1197b170();
  /* 11977c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11977c10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11977c13 push eax */
  push32((uint32_t)(EAX));
  /* 11977c14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977c17 push ecx */
  push32((uint32_t)(ECX));
  /* 11977c18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977c1b push edx */
  push32((uint32_t)(EDX));
  /* 11977c1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977c1f push eax */
  push32((uint32_t)(EAX));
  /* 11977c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11977c24 call 0x11977c40 */
  push32(0x11977c29u); f_11977c40();
  /* 11977c29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977c2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11977c2f push 9 */
  push32((uint32_t)(0x9u));
  /* 11977c31 call 0x1197b210 */
  push32(0x11977c36u); f_1197b210();
  /* 11977c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977c39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977c3c mov esp, ebp */
  ESP = (EBP);
  /* 11977c3e pop ebp */
  EBP = (pop32());
  /* 11977c3f ret  */
  ESPCHK(0x11977c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c40 @ 0x11977c40 (1297 bytes, 431 insns) */
void f_11977c40(void) {
  FTRACE(0x11977c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11977c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11977c41 mov ebp, esp */
  EBP = (ESP);
  /* 11977c43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11977c47 push esi */
  push32((uint32_t)(ESI));
  /* 11977c48 push edi */
  push32((uint32_t)(EDI));
  /* 11977c49 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11977c50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977c54 jne 0x11977c73 */
  if (!C.zf) goto L_11977c73;
  /* 11977c56 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11977c59 push eax */
  push32((uint32_t)(EAX));
  /* 11977c5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977c5d push ecx */
  push32((uint32_t)(ECX));
  /* 11977c5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977c61 push edx */
  push32((uint32_t)(EDX));
  /* 11977c62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977c65 push eax */
  push32((uint32_t)(EAX));
  /* 11977c66 call 0x11977770 */
  push32(0x11977c6bu); f_11977770();
  /* 11977c6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977c6e jmp 0x1197814a */
  goto L_1197814a;
L_11977c73:;
  /* 11977c73 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977c77 je 0x11977c96 */
  if (C.zf) goto L_11977c96;
  /* 11977c79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977c7d jne 0x11977c96 */
  if (!C.zf) goto L_11977c96;
  /* 11977c7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11977c83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977c86 push edx */
  push32((uint32_t)(EDX));
  /* 11977c87 call 0x11978200 */
  push32(0x11977c8cu); f_11978200();
  /* 11977c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977c91 jmp 0x1197814a */
  goto L_1197814a;
L_11977c96:;
  /* 11977c96 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11977c9b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11977c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977ca0 je 0x11977cd2 */
  if (C.zf) goto L_11977cd2;
L_11977ca2:;
  /* 11977ca2 call 0x11978910 */
  push32(0x11977ca7u); f_11978910();
  /* 11977ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977ca9 jne 0x11977ccc */
  if (!C.zf) goto L_11977ccc;
  /* 11977cab push 0x1199f1ac */
  push32((uint32_t)(0x1199f1acu));
  /* 11977cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977cb2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11977cb7 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11977cbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11977cbe call 0x11976830 */
  push32(0x11977cc3u); f_11976830();
  /* 11977cc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977cc6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977cc9 jne 0x11977ccc */
  if (!C.zf) goto L_11977ccc;
  /* 11977ccb int3  */
  x86_unimpl("int3 @ 0x11977ccb");
L_11977ccc:;
  /* 11977ccc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11977cce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11977cd0 jne 0x11977ca2 */
  if (!C.zf) goto L_11977ca2;
L_11977cd2:;
  /* 11977cd2 mov edx, dword ptr [0x119a1a88] */
  EDX = (r32((uint32_t)(0x119a1a88)));
  /* 11977cd8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11977cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11977cde cmp eax, dword ptr [0x119a1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977ce4 jne 0x11977ce7 */
  if (!C.zf) goto L_11977ce7;
  /* 11977ce6 int3  */
  x86_unimpl("int3 @ 0x11977ce6");
L_11977ce7:;
  /* 11977ce7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11977cea push ecx */
  push32((uint32_t)(ECX));
  /* 11977ceb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977cee push edx */
  push32((uint32_t)(EDX));
  /* 11977cef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11977cf2 push eax */
  push32((uint32_t)(EAX));
  /* 11977cf3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11977cf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977cfa push edx */
  push32((uint32_t)(EDX));
  /* 11977cfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977cfe push eax */
  push32((uint32_t)(EAX));
  /* 11977cff push 2 */
  push32((uint32_t)(0x2u));
  /* 11977d01 call dword ptr [0x119a1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a1c90))), 0x11977d07u);
  /* 11977d07 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977d0c jne 0x11977d6c */
  if (!C.zf) goto L_11977d6c;
  /* 11977d0e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977d12 je 0x11977d3f */
  if (C.zf) goto L_11977d3f;
L_11977d14:;
  /* 11977d14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11977d17 push ecx */
  push32((uint32_t)(ECX));
  /* 11977d18 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977d1b push edx */
  push32((uint32_t)(EDX));
  /* 11977d1c push 0x1199f328 */
  push32((uint32_t)(0x1199f328u));
  /* 11977d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d29 call 0x11976830 */
  push32(0x11977d2eu); f_11976830();
  /* 11977d2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977d31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977d34 jne 0x11977d37 */
  if (!C.zf) goto L_11977d37;
  /* 11977d36 int3  */
  x86_unimpl("int3 @ 0x11977d36");
L_11977d37:;
  /* 11977d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977d3b jne 0x11977d14 */
  if (!C.zf) goto L_11977d14;
  /* 11977d3d jmp 0x11977d65 */
  goto L_11977d65;
L_11977d3f:;
  /* 11977d3f push 0x1199f304 */
  push32((uint32_t)(0x1199f304u));
  /* 11977d44 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11977d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d51 call 0x11976830 */
  push32(0x11977d56u); f_11976830();
  /* 11977d56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977d59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977d5c jne 0x11977d5f */
  if (!C.zf) goto L_11977d5f;
  /* 11977d5e int3  */
  x86_unimpl("int3 @ 0x11977d5e");
L_11977d5f:;
  /* 11977d5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11977d61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11977d63 jne 0x11977d3f */
  if (!C.zf) goto L_11977d3f;
L_11977d65:;
  /* 11977d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977d67 jmp 0x1197814a */
  goto L_1197814a;
L_11977d6c:;
  /* 11977d6c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977d70 jbe 0x11977d9e */
  if ((C.cf||C.zf)) goto L_11977d9e;
L_11977d72:;
  /* 11977d72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977d75 push edx */
  push32((uint32_t)(EDX));
  /* 11977d76 push 0x1199f2d4 */
  push32((uint32_t)(0x1199f2d4u));
  /* 11977d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11977d81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977d83 call 0x11976830 */
  push32(0x11977d88u); f_11976830();
  /* 11977d88 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977d8b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977d8e jne 0x11977d91 */
  if (!C.zf) goto L_11977d91;
  /* 11977d90 int3  */
  x86_unimpl("int3 @ 0x11977d90");
L_11977d91:;
  /* 11977d91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977d95 jne 0x11977d72 */
  if (!C.zf) goto L_11977d72;
  /* 11977d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977d99 jmp 0x1197814a */
  goto L_1197814a;
L_11977d9e:;
  /* 11977d9e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977da2 je 0x11977de6 */
  if (C.zf) goto L_11977de6;
  /* 11977da4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977da7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11977dad cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977db0 je 0x11977de6 */
  if (C.zf) goto L_11977de6;
  /* 11977db2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977db5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11977dbb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977dbe je 0x11977de6 */
  if (C.zf) goto L_11977de6;
L_11977dc0:;
  /* 11977dc0 push 0x1199f0e8 */
  push32((uint32_t)(0x1199f0e8u));
  /* 11977dc5 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11977dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11977dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11977dce push 0 */
  push32((uint32_t)(0x0u));
  /* 11977dd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11977dd2 call 0x11976830 */
  push32(0x11977dd7u); f_11976830();
  /* 11977dd7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977dda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977ddd jne 0x11977de0 */
  if (!C.zf) goto L_11977de0;
  /* 11977ddf int3  */
  x86_unimpl("int3 @ 0x11977ddf");
L_11977de0:;
  /* 11977de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977de4 jne 0x11977dc0 */
  if (!C.zf) goto L_11977dc0;
L_11977de6:;
  /* 11977de6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11977dea call 0x11978d70 */
  push32(0x11977defu); f_11978d70();
  /* 11977def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11977df4 jne 0x11977e17 */
  if (!C.zf) goto L_11977e17;
  /* 11977df6 push 0x1199f2b0 */
  push32((uint32_t)(0x1199f2b0u));
  /* 11977dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11977dfd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11977e02 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11977e07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11977e09 call 0x11976830 */
  push32(0x11977e0eu); f_11976830();
  /* 11977e0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977e11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e14 jne 0x11977e17 */
  if (!C.zf) goto L_11977e17;
  /* 11977e16 int3  */
  x86_unimpl("int3 @ 0x11977e16");
L_11977e17:;
  /* 11977e17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11977e19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11977e1b jne 0x11977de6 */
  if (!C.zf) goto L_11977de6;
  /* 11977e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11977e20 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977e23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11977e26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977e29 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e2d jne 0x11977e36 */
  if (!C.zf) goto L_11977e36;
  /* 11977e2f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11977e36:;
  /* 11977e36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e3a je 0x11977e7a */
  if (C.zf) goto L_11977e7a;
L_11977e3c:;
  /* 11977e3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977e3f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e46 jne 0x11977e51 */
  if (!C.zf) goto L_11977e51;
  /* 11977e48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977e4b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e4f je 0x11977e72 */
  if (C.zf) goto L_11977e72;
L_11977e51:;
  /* 11977e51 push 0x1199f268 */
  push32((uint32_t)(0x1199f268u));
  /* 11977e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11977e58 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11977e5d push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11977e62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11977e64 call 0x11976830 */
  push32(0x11977e69u); f_11976830();
  /* 11977e69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977e6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e6f jne 0x11977e72 */
  if (!C.zf) goto L_11977e72;
  /* 11977e71 int3  */
  x86_unimpl("int3 @ 0x11977e71");
L_11977e72:;
  /* 11977e72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11977e74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11977e76 jne 0x11977e3c */
  if (!C.zf) goto L_11977e3c;
  /* 11977e78 jmp 0x11977ede */
  goto L_11977ede;
L_11977e7a:;
  /* 11977e7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977e7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11977e80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11977e85 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e88 jne 0x11977e9f */
  if (!C.zf) goto L_11977e9f;
  /* 11977e8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977e8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11977e93 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977e96 jne 0x11977e9f */
  if (!C.zf) goto L_11977e9f;
  /* 11977e98 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11977e9f:;
  /* 11977e9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977ea2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11977ea5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11977eaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11977ead and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11977eb3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977eb5 je 0x11977ed8 */
  if (C.zf) goto L_11977ed8;
  /* 11977eb7 push 0x1199f22c */
  push32((uint32_t)(0x1199f22cu));
  /* 11977ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11977ebe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11977ec3 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11977ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11977eca call 0x11976830 */
  push32(0x11977ecfu); f_11976830();
  /* 11977ecf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977ed2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977ed5 jne 0x11977ed8 */
  if (!C.zf) goto L_11977ed8;
  /* 11977ed7 int3  */
  x86_unimpl("int3 @ 0x11977ed7");
L_11977ed8:;
  /* 11977ed8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11977eda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11977edc jne 0x11977e9f */
  if (!C.zf) goto L_11977e9f;
L_11977ede:;
  /* 11977ede cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977ee2 je 0x11977f09 */
  if (C.zf) goto L_11977f09;
  /* 11977ee4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977ee7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977eea push eax */
  push32((uint32_t)(EAX));
  /* 11977eeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977eee push ecx */
  push32((uint32_t)(ECX));
  /* 11977eef call 0x1197b6f0 */
  push32(0x11977ef4u); f_1197b6f0();
  /* 11977ef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977ef7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11977efa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977efe jne 0x11977f07 */
  if (!C.zf) goto L_11977f07;
  /* 11977f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977f02 jmp 0x1197814a */
  goto L_1197814a;
L_11977f07:;
  /* 11977f07 jmp 0x11977f2c */
  goto L_11977f2c;
L_11977f09:;
  /* 11977f09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977f0c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977f0f push edx */
  push32((uint32_t)(EDX));
  /* 11977f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11977f13 push eax */
  push32((uint32_t)(EAX));
  /* 11977f14 call 0x1197b640 */
  push32(0x11977f19u); f_1197b640();
  /* 11977f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977f1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11977f1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977f23 jne 0x11977f2c */
  if (!C.zf) goto L_11977f2c;
  /* 11977f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977f27 jmp 0x1197814a */
  goto L_1197814a;
L_11977f2c:;
  /* 11977f2c mov ecx, dword ptr [0x119a1a88] */
  ECX = (r32((uint32_t)(0x119a1a88)));
  /* 11977f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977f35 mov dword ptr [0x119a1a88], ecx */
  w32((uint32_t)(0x119a1a88), (ECX));
  /* 11977f3b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977f3f jne 0x11977f97 */
  if (!C.zf) goto L_11977f97;
  /* 11977f41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977f44 mov eax, dword ptr [0x119a38b8] */
  EAX = (r32((uint32_t)(0x119a38b8)));
  /* 11977f49 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977f4c mov dword ptr [0x119a38b8], eax */
  w32((uint32_t)(0x119a38b8), (EAX));
  /* 11977f51 mov ecx, dword ptr [0x119a38b8] */
  ECX = (r32((uint32_t)(0x119a38b8)));
  /* 11977f57 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977f5a mov dword ptr [0x119a38b8], ecx */
  w32((uint32_t)(0x119a38b8), (ECX));
  /* 11977f60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977f63 mov eax, dword ptr [0x119a38c0] */
  EAX = (r32((uint32_t)(0x119a38c0)));
  /* 11977f68 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977f6b mov dword ptr [0x119a38c0], eax */
  w32((uint32_t)(0x119a38c0), (EAX));
  /* 11977f70 mov ecx, dword ptr [0x119a38c0] */
  ECX = (r32((uint32_t)(0x119a38c0)));
  /* 11977f76 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977f79 mov dword ptr [0x119a38c0], ecx */
  w32((uint32_t)(0x119a38c0), (ECX));
  /* 11977f7f mov edx, dword ptr [0x119a38c0] */
  EDX = (r32((uint32_t)(0x119a38c0)));
  /* 11977f85 cmp edx, dword ptr [0x119a38c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a38c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977f8b jbe 0x11977f97 */
  if ((C.cf||C.zf)) goto L_11977f97;
  /* 11977f8d mov eax, dword ptr [0x119a38c0] */
  EAX = (r32((uint32_t)(0x119a38c0)));
  /* 11977f92 mov dword ptr [0x119a38c4], eax */
  w32((uint32_t)(0x119a38c4), (EAX));
L_11977f97:;
  /* 11977f97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977f9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977f9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11977fa0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977fa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977fa6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977fa9 jbe 0x11977fcf */
  if ((C.cf||C.zf)) goto L_11977fcf;
  /* 11977fab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977fae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11977fb1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11977fb4 push edx */
  push32((uint32_t)(EDX));
  /* 11977fb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977fb7 mov al, byte ptr [0x119a1a92] */
  AL = (r8((uint32_t)(0x119a1a92)));
  /* 11977fbc push eax */
  push32((uint32_t)(EAX));
  /* 11977fbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977fc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977fc3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977fc6 push edx */
  push32((uint32_t)(EDX));
  /* 11977fc7 call 0x1197b4e0 */
  push32(0x11977fccu); f_1197b4e0();
  /* 11977fcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11977fcf:;
  /* 11977fcf push 4 */
  push32((uint32_t)(0x4u));
  /* 11977fd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11977fd3 mov al, byte ptr [0x119a1a90] */
  AL = (r8((uint32_t)(0x119a1a90)));
  /* 11977fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11977fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11977fdc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11977fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11977fe0 call 0x1197b4e0 */
  push32(0x11977fe5u); f_1197b4e0();
  /* 11977fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11977fe8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11977fec jne 0x11978009 */
  if (!C.zf) goto L_11978009;
  /* 11977fee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977ff1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11977ff4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11977ff7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11977ffa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11977ffd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11978000 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978003 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11978006 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11978009:;
  /* 11978009 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197800c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197800f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11978012:;
  /* 11978012 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978016 jne 0x11978047 */
  if (!C.zf) goto L_11978047;
  /* 11978018 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197801c jne 0x11978026 */
  if (!C.zf) goto L_11978026;
  /* 1197801e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978021 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978024 je 0x11978047 */
  if (C.zf) goto L_11978047;
L_11978026:;
  /* 11978026 push 0x1199f1f8 */
  push32((uint32_t)(0x1199f1f8u));
  /* 1197802b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197802d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11978032 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11978037 push 2 */
  push32((uint32_t)(0x2u));
  /* 11978039 call 0x11976830 */
  push32(0x1197803eu); f_11976830();
  /* 1197803e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978041 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978044 jne 0x11978047 */
  if (!C.zf) goto L_11978047;
  /* 11978046 int3  */
  x86_unimpl("int3 @ 0x11978046");
L_11978047:;
  /* 11978047 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11978049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197804b jne 0x11978012 */
  if (!C.zf) goto L_11978012;
  /* 1197804d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978050 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978053 je 0x1197805b */
  if (C.zf) goto L_1197805b;
  /* 11978055 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978059 je 0x11978063 */
  if (C.zf) goto L_11978063;
L_1197805b:;
  /* 1197805b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197805e jmp 0x1197814a */
  goto L_1197814a;
L_11978063:;
  /* 11978063 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978066 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978069 je 0x1197807b */
  if (C.zf) goto L_1197807b;
  /* 1197806b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197806e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11978070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978073 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11978076 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11978079 jmp 0x119780b7 */
  goto L_119780b7;
L_1197807b:;
  /* 1197807b mov eax, dword ptr [0x119a38b4] */
  EAX = (r32((uint32_t)(0x119a38b4)));
  /* 11978080 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978083 je 0x119780a6 */
  if (C.zf) goto L_119780a6;
  /* 11978085 push 0x1199f1dc */
  push32((uint32_t)(0x1199f1dcu));
  /* 1197808a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197808c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11978091 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11978096 push 2 */
  push32((uint32_t)(0x2u));
  /* 11978098 call 0x11976830 */
  push32(0x1197809du); f_11976830();
  /* 1197809d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119780a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119780a3 jne 0x119780a6 */
  if (!C.zf) goto L_119780a6;
  /* 119780a5 int3  */
  x86_unimpl("int3 @ 0x119780a5");
L_119780a6:;
  /* 119780a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119780a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119780aa jne 0x1197807b */
  if (!C.zf) goto L_1197807b;
  /* 119780ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119780af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119780b2 mov dword ptr [0x119a38b4], eax */
  w32((uint32_t)(0x119a38b4), (EAX));
L_119780b7:;
  /* 119780b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119780ba cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119780be je 0x119780cf */
  if (C.zf) goto L_119780cf;
  /* 119780c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119780c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119780c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119780c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119780cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119780cd jmp 0x1197810a */
  goto L_1197810a;
L_119780cf:;
  /* 119780cf mov eax, dword ptr [0x119a38bc] */
  EAX = (r32((uint32_t)(0x119a38bc)));
  /* 119780d4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119780d7 je 0x119780fa */
  if (C.zf) goto L_119780fa;
  /* 119780d9 push 0x1199f1c0 */
  push32((uint32_t)(0x1199f1c0u));
  /* 119780de push 0 */
  push32((uint32_t)(0x0u));
  /* 119780e0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 119780e5 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 119780ea push 2 */
  push32((uint32_t)(0x2u));
  /* 119780ec call 0x11976830 */
  push32(0x119780f1u); f_11976830();
  /* 119780f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119780f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119780f7 jne 0x119780fa */
  if (!C.zf) goto L_119780fa;
  /* 119780f9 int3  */
  x86_unimpl("int3 @ 0x119780f9");
L_119780fa:;
  /* 119780fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119780fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119780fe jne 0x119780cf */
  if (!C.zf) goto L_119780cf;
  /* 11978100 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978103 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11978105 mov dword ptr [0x119a38bc], eax */
  w32((uint32_t)(0x119a38bc), (EAX));
L_1197810a:;
  /* 1197810a cmp dword ptr [0x119a38bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a38bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978111 je 0x11978121 */
  if (C.zf) goto L_11978121;
  /* 11978113 mov ecx, dword ptr [0x119a38bc] */
  ECX = (r32((uint32_t)(0x119a38bc)));
  /* 11978119 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197811c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1197811f jmp 0x11978129 */
  goto L_11978129;
L_11978121:;
  /* 11978121 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978124 mov dword ptr [0x119a38b4], eax */
  w32((uint32_t)(0x119a38b4), (EAX));
L_11978129:;
  /* 11978129 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197812c mov edx, dword ptr [0x119a38bc] */
  EDX = (r32((uint32_t)(0x119a38bc)));
  /* 11978132 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11978134 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978137 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1197813e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11978141 mov dword ptr [0x119a38bc], ecx */
  w32((uint32_t)(0x119a38bc), (ECX));
  /* 11978147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1197814a:;
  /* 1197814a pop edi */
  EDI = (pop32());
  /* 1197814b pop esi */
  ESI = (pop32());
  /* 1197814c pop ebx */
  EBX = (pop32());
  /* 1197814d mov esp, ebp */
  ESP = (EBP);
  /* 1197814f pop ebp */
  EBP = (pop32());
  /* 11978150 ret  */
  ESPCHK(0x11977c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008160 @ 0x11978160 (27 bytes, 13 insns) */
void f_11978160(void) {
  FTRACE(0x11978160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978160 push ebp */
  push32((uint32_t)(EBP));
  /* 11978161 mov ebp, esp */
  EBP = (ESP);
  /* 11978163 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978167 push 1 */
  push32((uint32_t)(0x1u));
  /* 11978169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197816c push eax */
  push32((uint32_t)(EAX));
  /* 1197816d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978170 push ecx */
  push32((uint32_t)(ECX));
  /* 11978171 call 0x11978180 */
  push32(0x11978176u); f_11978180();
  /* 11978176 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978179 pop ebp */
  EBP = (pop32());
  /* 1197817a ret  */
  ESPCHK(0x11978160u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x11978180 (64 bytes, 27 insns) */
void f_11978180(void) {
  FTRACE(0x11978180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978180 push ebp */
  push32((uint32_t)(EBP));
  /* 11978181 mov ebp, esp */
  EBP = (ESP);
  /* 11978183 push ecx */
  push32((uint32_t)(ECX));
  /* 11978184 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978186 call 0x1197b170 */
  push32(0x1197818bu); f_1197b170();
  /* 1197818b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197818e push 0 */
  push32((uint32_t)(0x0u));
  /* 11978190 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11978193 push eax */
  push32((uint32_t)(EAX));
  /* 11978194 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11978197 push ecx */
  push32((uint32_t)(ECX));
  /* 11978198 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197819b push edx */
  push32((uint32_t)(EDX));
  /* 1197819c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197819f push eax */
  push32((uint32_t)(EAX));
  /* 119781a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119781a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119781a4 call 0x11977c40 */
  push32(0x119781a9u); f_11977c40();
  /* 119781a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119781ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119781af push 9 */
  push32((uint32_t)(0x9u));
  /* 119781b1 call 0x1197b210 */
  push32(0x119781b6u); f_1197b210();
  /* 119781b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119781b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119781bc mov esp, ebp */
  ESP = (EBP);
  /* 119781be pop ebp */
  EBP = (pop32());
  /* 119781bf ret  */
  ESPCHK(0x11978180u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x119781c0 (19 bytes, 9 insns) */
void f_119781c0(void) {
  FTRACE(0x119781c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119781c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119781c1 mov ebp, esp */
  EBP = (ESP);
  /* 119781c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119781c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119781c8 push eax */
  push32((uint32_t)(EAX));
  /* 119781c9 call 0x11978200 */
  push32(0x119781ceu); f_11978200();
  /* 119781ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119781d1 pop ebp */
  EBP = (pop32());
  /* 119781d2 ret  */
  ESPCHK(0x119781c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x119781e0 (19 bytes, 9 insns) */
void f_119781e0(void) {
  FTRACE(0x119781e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119781e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119781e1 mov ebp, esp */
  EBP = (ESP);
  /* 119781e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119781e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119781e8 push eax */
  push32((uint32_t)(EAX));
  /* 119781e9 call 0x11978230 */
  push32(0x119781eeu); f_11978230();
  /* 119781ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119781f1 pop ebp */
  EBP = (pop32());
  /* 119781f2 ret  */
  ESPCHK(0x119781e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008200 @ 0x11978200 (41 bytes, 16 insns) */
void f_11978200(void) {
  FTRACE(0x11978200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978200 push ebp */
  push32((uint32_t)(EBP));
  /* 11978201 mov ebp, esp */
  EBP = (ESP);
  /* 11978203 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978205 call 0x1197b170 */
  push32(0x1197820au); f_1197b170();
  /* 1197820a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197820d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978210 push eax */
  push32((uint32_t)(EAX));
  /* 11978211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978214 push ecx */
  push32((uint32_t)(ECX));
  /* 11978215 call 0x11978230 */
  push32(0x1197821au); f_11978230();
  /* 1197821a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197821d push 9 */
  push32((uint32_t)(0x9u));
  /* 1197821f call 0x1197b210 */
  push32(0x11978224u); f_1197b210();
  /* 11978224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978227 pop ebp */
  EBP = (pop32());
  /* 11978228 ret  */
  ESPCHK(0x11978200u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x11978230 (1004 bytes, 342 insns) */
void f_11978230(void) {
  FTRACE(0x11978230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978230 push ebp */
  push32((uint32_t)(EBP));
  /* 11978231 mov ebp, esp */
  EBP = (ESP);
  /* 11978233 push ecx */
  push32((uint32_t)(ECX));
  /* 11978234 push ebx */
  push32((uint32_t)(EBX));
  /* 11978235 push esi */
  push32((uint32_t)(ESI));
  /* 11978236 push edi */
  push32((uint32_t)(EDI));
  /* 11978237 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 1197823c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1197823f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978241 je 0x11978273 */
  if (C.zf) goto L_11978273;
L_11978243:;
  /* 11978243 call 0x11978910 */
  push32(0x11978248u); f_11978910();
  /* 11978248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197824a jne 0x1197826d */
  if (!C.zf) goto L_1197826d;
  /* 1197824c push 0x1199f1ac */
  push32((uint32_t)(0x1199f1acu));
  /* 11978251 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978253 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11978258 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 1197825d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197825f call 0x11976830 */
  push32(0x11978264u); f_11976830();
  /* 11978264 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978267 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197826a jne 0x1197826d */
  if (!C.zf) goto L_1197826d;
  /* 1197826c int3  */
  x86_unimpl("int3 @ 0x1197826c");
L_1197826d:;
  /* 1197826d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197826f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978271 jne 0x11978243 */
  if (!C.zf) goto L_11978243;
L_11978273:;
  /* 11978273 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978277 jne 0x1197827e */
  if (!C.zf) goto L_1197827e;
  /* 11978279 jmp 0x11978615 */
  goto L_11978615;
L_1197827e:;
  /* 1197827e push 0 */
  push32((uint32_t)(0x0u));
  /* 11978280 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978282 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978287 push edx */
  push32((uint32_t)(EDX));
  /* 11978288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197828a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197828d push eax */
  push32((uint32_t)(EAX));
  /* 1197828e push 3 */
  push32((uint32_t)(0x3u));
  /* 11978290 call dword ptr [0x119a1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a1c90))), 0x11978296u);
  /* 11978296 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197829b jne 0x119782c8 */
  if (!C.zf) goto L_119782c8;
L_1197829d:;
  /* 1197829d push 0x1199f470 */
  push32((uint32_t)(0x1199f470u));
  /* 119782a2 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119782a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119782a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119782ab push 0 */
  push32((uint32_t)(0x0u));
  /* 119782ad push 0 */
  push32((uint32_t)(0x0u));
  /* 119782af call 0x11976830 */
  push32(0x119782b4u); f_11976830();
  /* 119782b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119782b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119782ba jne 0x119782bd */
  if (!C.zf) goto L_119782bd;
  /* 119782bc int3  */
  x86_unimpl("int3 @ 0x119782bc");
L_119782bd:;
  /* 119782bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119782bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119782c1 jne 0x1197829d */
  if (!C.zf) goto L_1197829d;
  /* 119782c3 jmp 0x11978615 */
  goto L_11978615;
L_119782c8:;
  /* 119782c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119782cb push edx */
  push32((uint32_t)(EDX));
  /* 119782cc call 0x11978d70 */
  push32(0x119782d1u); f_11978d70();
  /* 119782d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119782d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119782d6 jne 0x119782f9 */
  if (!C.zf) goto L_119782f9;
  /* 119782d8 push 0x1199f2b0 */
  push32((uint32_t)(0x1199f2b0u));
  /* 119782dd push 0 */
  push32((uint32_t)(0x0u));
  /* 119782df push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 119782e4 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 119782e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119782eb call 0x11976830 */
  push32(0x119782f0u); f_11976830();
  /* 119782f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119782f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119782f6 jne 0x119782f9 */
  if (!C.zf) goto L_119782f9;
  /* 119782f8 int3  */
  x86_unimpl("int3 @ 0x119782f8");
L_119782f9:;
  /* 119782f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119782fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119782fd jne 0x119782c8 */
  if (!C.zf) goto L_119782c8;
  /* 119782ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978302 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978305 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11978308:;
  /* 11978308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197830b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1197830e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11978313 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978316 je 0x1197835b */
  if (C.zf) goto L_1197835b;
  /* 11978318 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197831b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197831f je 0x1197835b */
  if (C.zf) goto L_1197835b;
  /* 11978321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978324 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11978327 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197832c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197832f je 0x1197835b */
  if (C.zf) goto L_1197835b;
  /* 11978331 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978334 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978338 je 0x1197835b */
  if (C.zf) goto L_1197835b;
  /* 1197833a push 0x1199f448 */
  push32((uint32_t)(0x1199f448u));
  /* 1197833f push 0 */
  push32((uint32_t)(0x0u));
  /* 11978341 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11978346 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 1197834b push 2 */
  push32((uint32_t)(0x2u));
  /* 1197834d call 0x11976830 */
  push32(0x11978352u); f_11976830();
  /* 11978352 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978358 jne 0x1197835b */
  if (!C.zf) goto L_1197835b;
  /* 1197835a int3  */
  x86_unimpl("int3 @ 0x1197835a");
L_1197835b:;
  /* 1197835b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197835d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197835f jne 0x11978308 */
  if (!C.zf) goto L_11978308;
  /* 11978361 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11978366 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11978369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197836b jne 0x11978436 */
  if (!C.zf) goto L_11978436;
  /* 11978371 push 4 */
  push32((uint32_t)(0x4u));
  /* 11978373 mov cl, byte ptr [0x119a1a90] */
  CL = (r8((uint32_t)(0x119a1a90)));
  /* 11978379 push ecx */
  push32((uint32_t)(ECX));
  /* 1197837a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197837d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978380 push edx */
  push32((uint32_t)(EDX));
  /* 11978381 call 0x11978880 */
  push32(0x11978386u); f_11978880();
  /* 11978386 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197838b jne 0x119783d0 */
  if (!C.zf) goto L_119783d0;
L_1197838d:;
  /* 1197838d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978390 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978393 push eax */
  push32((uint32_t)(EAX));
  /* 11978394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978397 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1197839a push edx */
  push32((uint32_t)(EDX));
  /* 1197839b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197839e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119783a1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119783a7 mov edx, dword ptr [ecx*4 + 0x119a1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a94)));
  /* 119783ae push edx */
  push32((uint32_t)(EDX));
  /* 119783af push 0x1199f41c */
  push32((uint32_t)(0x1199f41cu));
  /* 119783b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119783b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119783b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119783ba push 1 */
  push32((uint32_t)(0x1u));
  /* 119783bc call 0x11976830 */
  push32(0x119783c1u); f_11976830();
  /* 119783c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119783c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119783c7 jne 0x119783ca */
  if (!C.zf) goto L_119783ca;
  /* 119783c9 int3  */
  x86_unimpl("int3 @ 0x119783c9");
L_119783ca:;
  /* 119783ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119783cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119783ce jne 0x1197838d */
  if (!C.zf) goto L_1197838d;
L_119783d0:;
  /* 119783d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 119783d2 mov cl, byte ptr [0x119a1a90] */
  CL = (r8((uint32_t)(0x119a1a90)));
  /* 119783d8 push ecx */
  push32((uint32_t)(ECX));
  /* 119783d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119783dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119783df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119783e2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 119783e6 push edx */
  push32((uint32_t)(EDX));
  /* 119783e7 call 0x11978880 */
  push32(0x119783ecu); f_11978880();
  /* 119783ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119783ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119783f1 jne 0x11978436 */
  if (!C.zf) goto L_11978436;
L_119783f3:;
  /* 119783f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119783f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119783f9 push eax */
  push32((uint32_t)(EAX));
  /* 119783fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119783fd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11978400 push edx */
  push32((uint32_t)(EDX));
  /* 11978401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978404 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11978407 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197840d mov edx, dword ptr [ecx*4 + 0x119a1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a94)));
  /* 11978414 push edx */
  push32((uint32_t)(EDX));
  /* 11978415 push 0x1199f3f0 */
  push32((uint32_t)(0x1199f3f0u));
  /* 1197841a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197841c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197841e push 0 */
  push32((uint32_t)(0x0u));
  /* 11978420 push 1 */
  push32((uint32_t)(0x1u));
  /* 11978422 call 0x11976830 */
  push32(0x11978427u); f_11976830();
  /* 11978427 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197842a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197842d jne 0x11978430 */
  if (!C.zf) goto L_11978430;
  /* 1197842f int3  */
  x86_unimpl("int3 @ 0x1197842f");
L_11978430:;
  /* 11978430 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978434 jne 0x119783f3 */
  if (!C.zf) goto L_119783f3;
L_11978436:;
  /* 11978436 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978439 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197843d jne 0x119784ab */
  if (!C.zf) goto L_119784ab;
L_1197843f:;
  /* 1197843f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978442 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978449 jne 0x11978454 */
  if (!C.zf) goto L_11978454;
  /* 1197844b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197844e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978452 je 0x11978475 */
  if (C.zf) goto L_11978475;
L_11978454:;
  /* 11978454 push 0x1199f3b0 */
  push32((uint32_t)(0x1199f3b0u));
  /* 11978459 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197845b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11978460 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11978465 push 2 */
  push32((uint32_t)(0x2u));
  /* 11978467 call 0x11976830 */
  push32(0x1197846cu); f_11976830();
  /* 1197846c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197846f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978472 jne 0x11978475 */
  if (!C.zf) goto L_11978475;
  /* 11978474 int3  */
  x86_unimpl("int3 @ 0x11978474");
L_11978475:;
  /* 11978475 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11978477 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978479 jne 0x1197843f */
  if (!C.zf) goto L_1197843f;
  /* 1197847b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197847e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11978481 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978484 push eax */
  push32((uint32_t)(EAX));
  /* 11978485 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11978487 mov cl, byte ptr [0x119a1a91] */
  CL = (r8((uint32_t)(0x119a1a91)));
  /* 1197848d push ecx */
  push32((uint32_t)(ECX));
  /* 1197848e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978491 push edx */
  push32((uint32_t)(EDX));
  /* 11978492 call 0x1197b4e0 */
  push32(0x11978497u); f_1197b4e0();
  /* 11978497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197849d push eax */
  push32((uint32_t)(EAX));
  /* 1197849e call 0x1197b8e0 */
  push32(0x119784a3u); f_1197b8e0();
  /* 119784a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119784a6 jmp 0x11978615 */
  goto L_11978615;
L_119784ab:;
  /* 119784ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119784ae cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119784b2 jne 0x119784c1 */
  if (!C.zf) goto L_119784c1;
  /* 119784b4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119784b8 jne 0x119784c1 */
  if (!C.zf) goto L_119784c1;
  /* 119784ba mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_119784c1:;
  /* 119784c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119784c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119784c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119784ca je 0x119784ed */
  if (C.zf) goto L_119784ed;
  /* 119784cc push 0x1199f390 */
  push32((uint32_t)(0x1199f390u));
  /* 119784d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119784d3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 119784d8 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 119784dd push 2 */
  push32((uint32_t)(0x2u));
  /* 119784df call 0x11976830 */
  push32(0x119784e4u); f_11976830();
  /* 119784e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119784e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119784ea jne 0x119784ed */
  if (!C.zf) goto L_119784ed;
  /* 119784ec int3  */
  x86_unimpl("int3 @ 0x119784ec");
L_119784ed:;
  /* 119784ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119784ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119784f1 jne 0x119784c1 */
  if (!C.zf) goto L_119784c1;
  /* 119784f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119784f6 mov eax, dword ptr [0x119a38c0] */
  EAX = (r32((uint32_t)(0x119a38c0)));
  /* 119784fb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119784fe mov dword ptr [0x119a38c0], eax */
  w32((uint32_t)(0x119a38c0), (EAX));
  /* 11978503 mov ecx, dword ptr [0x119a1a84] */
  ECX = (r32((uint32_t)(0x119a1a84)));
  /* 11978509 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1197850c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197850e jne 0x119785ec */
  if (!C.zf) goto L_119785ec;
  /* 11978514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978517 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197851a je 0x1197852c */
  if (C.zf) goto L_1197852c;
  /* 1197851c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197851f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11978521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978524 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11978527 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1197852a jmp 0x1197856a */
  goto L_1197856a;
L_1197852c:;
  /* 1197852c mov ecx, dword ptr [0x119a38b4] */
  ECX = (r32((uint32_t)(0x119a38b4)));
  /* 11978532 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978535 je 0x11978558 */
  if (C.zf) goto L_11978558;
  /* 11978537 push 0x1199f378 */
  push32((uint32_t)(0x1199f378u));
  /* 1197853c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197853e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11978543 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11978548 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197854a call 0x11976830 */
  push32(0x1197854fu); f_11976830();
  /* 1197854f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978552 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978555 jne 0x11978558 */
  if (!C.zf) goto L_11978558;
  /* 11978557 int3  */
  x86_unimpl("int3 @ 0x11978557");
L_11978558:;
  /* 11978558 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197855a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197855c jne 0x1197852c */
  if (!C.zf) goto L_1197852c;
  /* 1197855e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978561 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11978564 mov dword ptr [0x119a38b4], ecx */
  w32((uint32_t)(0x119a38b4), (ECX));
L_1197856a:;
  /* 1197856a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197856d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978571 je 0x11978582 */
  if (C.zf) goto L_11978582;
  /* 11978573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978576 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11978579 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197857c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197857e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11978580 jmp 0x119785bf */
  goto L_119785bf;
L_11978582:;
  /* 11978582 mov ecx, dword ptr [0x119a38bc] */
  ECX = (r32((uint32_t)(0x119a38bc)));
  /* 11978588 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197858b je 0x119785ae */
  if (C.zf) goto L_119785ae;
  /* 1197858d push 0x1199f360 */
  push32((uint32_t)(0x1199f360u));
  /* 11978592 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978594 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11978599 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 1197859e push 2 */
  push32((uint32_t)(0x2u));
  /* 119785a0 call 0x11976830 */
  push32(0x119785a5u); f_11976830();
  /* 119785a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119785a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119785ab jne 0x119785ae */
  if (!C.zf) goto L_119785ae;
  /* 119785ad int3  */
  x86_unimpl("int3 @ 0x119785ad");
L_119785ae:;
  /* 119785ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119785b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119785b2 jne 0x11978582 */
  if (!C.zf) goto L_11978582;
  /* 119785b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119785b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119785b9 mov dword ptr [0x119a38bc], ecx */
  w32((uint32_t)(0x119a38bc), (ECX));
L_119785bf:;
  /* 119785bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119785c2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119785c5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119785c8 push eax */
  push32((uint32_t)(EAX));
  /* 119785c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119785cb mov cl, byte ptr [0x119a1a91] */
  CL = (r8((uint32_t)(0x119a1a91)));
  /* 119785d1 push ecx */
  push32((uint32_t)(ECX));
  /* 119785d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119785d5 push edx */
  push32((uint32_t)(EDX));
  /* 119785d6 call 0x1197b4e0 */
  push32(0x119785dbu); f_1197b4e0();
  /* 119785db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119785de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119785e1 push eax */
  push32((uint32_t)(EAX));
  /* 119785e2 call 0x1197b8e0 */
  push32(0x119785e7u); f_1197b8e0();
  /* 119785e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119785ea jmp 0x11978615 */
  goto L_11978615;
L_119785ec:;
  /* 119785ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119785ef mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 119785f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119785f9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119785fc push eax */
  push32((uint32_t)(EAX));
  /* 119785fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119785ff mov cl, byte ptr [0x119a1a91] */
  CL = (r8((uint32_t)(0x119a1a91)));
  /* 11978605 push ecx */
  push32((uint32_t)(ECX));
  /* 11978606 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978609 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197860c push edx */
  push32((uint32_t)(EDX));
  /* 1197860d call 0x1197b4e0 */
  push32(0x11978612u); f_1197b4e0();
  /* 11978612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11978615:;
  /* 11978615 pop edi */
  EDI = (pop32());
  /* 11978616 pop esi */
  ESI = (pop32());
  /* 11978617 pop ebx */
  EBX = (pop32());
  /* 11978618 mov esp, ebp */
  ESP = (EBP);
  /* 1197861a pop ebp */
  EBP = (pop32());
  /* 1197861b ret  */
  ESPCHK(0x11978230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008620 @ 0x11978620 (19 bytes, 9 insns) */
void f_11978620(void) {
  FTRACE(0x11978620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978620 push ebp */
  push32((uint32_t)(EBP));
  /* 11978621 mov ebp, esp */
  EBP = (ESP);
  /* 11978623 push 1 */
  push32((uint32_t)(0x1u));
  /* 11978625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978628 push eax */
  push32((uint32_t)(EAX));
  /* 11978629 call 0x11978640 */
  push32(0x1197862eu); f_11978640();
  /* 1197862e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978631 pop ebp */
  EBP = (pop32());
  /* 11978632 ret  */
  ESPCHK(0x11978620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008640 @ 0x11978640 (342 bytes, 119 insns) */
void f_11978640(void) {
  FTRACE(0x11978640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978640 push ebp */
  push32((uint32_t)(EBP));
  /* 11978641 mov ebp, esp */
  EBP = (ESP);
  /* 11978643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978646 push ebx */
  push32((uint32_t)(EBX));
  /* 11978647 push esi */
  push32((uint32_t)(ESI));
  /* 11978648 push edi */
  push32((uint32_t)(EDI));
  /* 11978649 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 1197864e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11978651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978653 je 0x11978685 */
  if (C.zf) goto L_11978685;
L_11978655:;
  /* 11978655 call 0x11978910 */
  push32(0x1197865au); f_11978910();
  /* 1197865a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197865c jne 0x1197867f */
  if (!C.zf) goto L_1197867f;
  /* 1197865e push 0x1199f1ac */
  push32((uint32_t)(0x1199f1acu));
  /* 11978663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978665 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1197866a push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 1197866f push 2 */
  push32((uint32_t)(0x2u));
  /* 11978671 call 0x11976830 */
  push32(0x11978676u); f_11976830();
  /* 11978676 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978679 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197867c jne 0x1197867f */
  if (!C.zf) goto L_1197867f;
  /* 1197867e int3  */
  x86_unimpl("int3 @ 0x1197867e");
L_1197867f:;
  /* 1197867f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11978681 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978683 jne 0x11978655 */
  if (!C.zf) goto L_11978655;
L_11978685:;
  /* 11978685 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978687 call 0x1197b170 */
  push32(0x1197868cu); f_1197b170();
  /* 1197868c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197868f:;
  /* 1197868f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978692 push edx */
  push32((uint32_t)(EDX));
  /* 11978693 call 0x11978d70 */
  push32(0x11978698u); f_11978d70();
  /* 11978698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197869b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197869d jne 0x119786c0 */
  if (!C.zf) goto L_119786c0;
  /* 1197869f push 0x1199f2b0 */
  push32((uint32_t)(0x1199f2b0u));
  /* 119786a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119786a6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 119786ab push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 119786b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119786b2 call 0x11976830 */
  push32(0x119786b7u); f_11976830();
  /* 119786b7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119786ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119786bd jne 0x119786c0 */
  if (!C.zf) goto L_119786c0;
  /* 119786bf int3  */
  x86_unimpl("int3 @ 0x119786bf");
L_119786c0:;
  /* 119786c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119786c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119786c4 jne 0x1197868f */
  if (!C.zf) goto L_1197868f;
  /* 119786c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119786c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119786cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119786cf:;
  /* 119786cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119786d2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119786d5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119786da cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119786dd je 0x11978722 */
  if (C.zf) goto L_11978722;
  /* 119786df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119786e2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119786e6 je 0x11978722 */
  if (C.zf) goto L_11978722;
  /* 119786e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119786eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119786ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119786f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119786f6 je 0x11978722 */
  if (C.zf) goto L_11978722;
  /* 119786f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119786fb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119786ff je 0x11978722 */
  if (C.zf) goto L_11978722;
  /* 11978701 push 0x1199f448 */
  push32((uint32_t)(0x1199f448u));
  /* 11978706 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978708 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1197870d push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11978712 push 2 */
  push32((uint32_t)(0x2u));
  /* 11978714 call 0x11976830 */
  push32(0x11978719u); f_11976830();
  /* 11978719 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197871c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197871f jne 0x11978722 */
  if (!C.zf) goto L_11978722;
  /* 11978721 int3  */
  x86_unimpl("int3 @ 0x11978721");
L_11978722:;
  /* 11978722 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11978724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11978726 jne 0x119786cf */
  if (!C.zf) goto L_119786cf;
  /* 11978728 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197872b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197872f jne 0x1197873e */
  if (!C.zf) goto L_1197873e;
  /* 11978731 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978735 jne 0x1197873e */
  if (!C.zf) goto L_1197873e;
  /* 11978737 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1197873e:;
  /* 1197873e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978741 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978745 je 0x11978779 */
  if (C.zf) goto L_11978779;
L_11978747:;
  /* 11978747 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197874a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1197874d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978750 je 0x11978773 */
  if (C.zf) goto L_11978773;
  /* 11978752 push 0x1199f390 */
  push32((uint32_t)(0x1199f390u));
  /* 11978757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978759 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1197875e push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 11978763 push 2 */
  push32((uint32_t)(0x2u));
  /* 11978765 call 0x11976830 */
  push32(0x1197876au); f_11976830();
  /* 1197876a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197876d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978770 jne 0x11978773 */
  if (!C.zf) goto L_11978773;
  /* 11978772 int3  */
  x86_unimpl("int3 @ 0x11978772");
L_11978773:;
  /* 11978773 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11978775 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978777 jne 0x11978747 */
  if (!C.zf) goto L_11978747;
L_11978779:;
  /* 11978779 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197877c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197877f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11978782 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978784 call 0x1197b210 */
  push32(0x11978789u); f_1197b210();
  /* 11978789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197878c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197878f pop edi */
  EDI = (pop32());
  /* 11978790 pop esi */
  ESI = (pop32());
  /* 11978791 pop ebx */
  EBX = (pop32());
  /* 11978792 mov esp, ebp */
  ESP = (EBP);
  /* 11978794 pop ebp */
  EBP = (pop32());
  /* 11978795 ret  */
  ESPCHK(0x11978640u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x119787a0 (28 bytes, 11 insns) */
void f_119787a0(void) {
  FTRACE(0x119787a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119787a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119787a1 mov ebp, esp */
  EBP = (ESP);
  /* 119787a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119787a4 mov eax, dword ptr [0x119a1a8c] */
  EAX = (r32((uint32_t)(0x119a1a8c)));
  /* 119787a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119787ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119787af mov dword ptr [0x119a1a8c], ecx */
  w32((uint32_t)(0x119a1a8c), (ECX));
  /* 119787b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119787b8 mov esp, ebp */
  ESP = (EBP);
  /* 119787ba pop ebp */
  EBP = (pop32());
  /* 119787bb ret  */
  ESPCHK(0x119787a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x119787c0 (157 bytes, 59 insns) */
void f_119787c0(void) {
  FTRACE(0x119787c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119787c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119787c1 mov ebp, esp */
  EBP = (ESP);
  /* 119787c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119787c4 push ebx */
  push32((uint32_t)(EBX));
  /* 119787c5 push esi */
  push32((uint32_t)(ESI));
  /* 119787c6 push edi */
  push32((uint32_t)(EDI));
  /* 119787c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 119787c9 call 0x1197b170 */
  push32(0x119787ceu); f_1197b170();
  /* 119787ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119787d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119787d4 push eax */
  push32((uint32_t)(EAX));
  /* 119787d5 call 0x11978d70 */
  push32(0x119787dau); f_11978d70();
  /* 119787da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119787dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119787df je 0x1197884c */
  if (C.zf) goto L_1197884c;
  /* 119787e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119787e4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119787e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119787ea:;
  /* 119787ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119787ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119787f0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119787f5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119787f8 je 0x1197883d */
  if (C.zf) goto L_1197883d;
  /* 119787fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119787fd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978801 je 0x1197883d */
  if (C.zf) goto L_1197883d;
  /* 11978803 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978806 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11978809 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197880e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978811 je 0x1197883d */
  if (C.zf) goto L_1197883d;
  /* 11978813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978816 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197881a je 0x1197883d */
  if (C.zf) goto L_1197883d;
  /* 1197881c push 0x1199f448 */
  push32((uint32_t)(0x1199f448u));
  /* 11978821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978823 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11978828 push 0x1199f1a0 */
  push32((uint32_t)(0x1199f1a0u));
  /* 1197882d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197882f call 0x11976830 */
  push32(0x11978834u); f_11976830();
  /* 11978834 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978837 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197883a jne 0x1197883d */
  if (!C.zf) goto L_1197883d;
  /* 1197883c int3  */
  x86_unimpl("int3 @ 0x1197883c");
L_1197883d:;
  /* 1197883d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197883f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11978841 jne 0x119787ea */
  if (!C.zf) goto L_119787ea;
  /* 11978843 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978846 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978849 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1197884c:;
  /* 1197884c push 9 */
  push32((uint32_t)(0x9u));
  /* 1197884e call 0x1197b210 */
  push32(0x11978853u); f_1197b210();
  /* 11978853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978856 pop edi */
  EDI = (pop32());
  /* 11978857 pop esi */
  ESI = (pop32());
  /* 11978858 pop ebx */
  EBX = (pop32());
  /* 11978859 mov esp, ebp */
  ESP = (EBP);
  /* 1197885b pop ebp */
  EBP = (pop32());
  /* 1197885c ret  */
  ESPCHK(0x119787c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x11978860 (28 bytes, 11 insns) */
void f_11978860(void) {
  FTRACE(0x11978860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978860 push ebp */
  push32((uint32_t)(EBP));
  /* 11978861 mov ebp, esp */
  EBP = (ESP);
  /* 11978863 push ecx */
  push32((uint32_t)(ECX));
  /* 11978864 mov eax, dword ptr [0x119a1c90] */
  EAX = (r32((uint32_t)(0x119a1c90)));
  /* 11978869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197886c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197886f mov dword ptr [0x119a1c90], ecx */
  w32((uint32_t)(0x119a1c90), (ECX));
  /* 11978875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978878 mov esp, ebp */
  ESP = (EBP);
  /* 1197887a pop ebp */
  EBP = (pop32());
  /* 1197887b ret  */
  ESPCHK(0x11978860u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x11978880 (136 bytes, 55 insns) */
void f_11978880(void) {
  FTRACE(0x11978880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978880 push ebp */
  push32((uint32_t)(EBP));
  /* 11978881 mov ebp, esp */
  EBP = (ESP);
  /* 11978883 push ecx */
  push32((uint32_t)(ECX));
  /* 11978884 push ebx */
  push32((uint32_t)(EBX));
  /* 11978885 push esi */
  push32((uint32_t)(ESI));
  /* 11978886 push edi */
  push32((uint32_t)(EDI));
  /* 11978887 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1197888e:;
  /* 1197888e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11978891 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11978894 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978897 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1197889a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197889c je 0x119788fe */
  if (C.zf) goto L_119788fe;
  /* 1197889e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119788a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119788a3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119788a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119788a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119788ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119788b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119788b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119788b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119788b9 je 0x119788fc */
  if (C.zf) goto L_119788fc;
L_119788bb:;
  /* 119788bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119788be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119788c3 push eax */
  push32((uint32_t)(EAX));
  /* 119788c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119788c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119788c9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 119788cc push edx */
  push32((uint32_t)(EDX));
  /* 119788cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119788d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119788d3 push eax */
  push32((uint32_t)(EAX));
  /* 119788d4 push 0x1199f48c */
  push32((uint32_t)(0x1199f48cu));
  /* 119788d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119788db push 0 */
  push32((uint32_t)(0x0u));
  /* 119788dd push 0 */
  push32((uint32_t)(0x0u));
  /* 119788df push 0 */
  push32((uint32_t)(0x0u));
  /* 119788e1 call 0x11976830 */
  push32(0x119788e6u); f_11976830();
  /* 119788e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119788e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119788ec jne 0x119788ef */
  if (!C.zf) goto L_119788ef;
  /* 119788ee int3  */
  x86_unimpl("int3 @ 0x119788ee");
L_119788ef:;
  /* 119788ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119788f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119788f3 jne 0x119788bb */
  if (!C.zf) goto L_119788bb;
  /* 119788f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119788fc:;
  /* 119788fc jmp 0x1197888e */
  goto L_1197888e;
L_119788fe:;
  /* 119788fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978901 pop edi */
  EDI = (pop32());
  /* 11978902 pop esi */
  ESI = (pop32());
  /* 11978903 pop ebx */
  EBX = (pop32());
  /* 11978904 mov esp, ebp */
  ESP = (EBP);
  /* 11978906 pop ebp */
  EBP = (pop32());
  /* 11978907 ret  */
  ESPCHK(0x11978880u, _esp0);
  ESP += 4; return;
}

/* FUN_10008910 @ 0x11978910 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11978910(void) {
  FTRACE(0x11978910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978910 push ebp */
  push32((uint32_t)(EBP));
  /* 11978911 mov ebp, esp */
  EBP = (ESP);
  /* 11978913 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978916 push ebx */
  push32((uint32_t)(EBX));
  /* 11978917 push esi */
  push32((uint32_t)(ESI));
  /* 11978918 push edi */
  push32((uint32_t)(EDI));
  /* 11978919 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11978920 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11978925 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11978928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197892a jne 0x11978936 */
  if (!C.zf) goto L_11978936;
  /* 1197892c mov eax, 1 */
  EAX = (0x1u);
  /* 11978931 jmp 0x11978c68 */
  goto L_11978c68;
L_11978936:;
  /* 11978936 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978938 call 0x1197b170 */
  push32(0x1197893du); f_1197b170();
  /* 1197893d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978940 call 0x1197b950 */
  push32(0x11978945u); f_1197b950();
  /* 11978945 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11978948 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197894c je 0x11978a59 */
  if (C.zf) goto L_11978a59;
  /* 11978952 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978956 je 0x11978a59 */
  if (C.zf) goto L_11978a59;
  /* 1197895c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197895f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11978962 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11978965 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978968 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1197896b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197896f ja 0x11978a22 */
  if ((!C.cf&&!C.zf)) goto L_11978a22;
  /* 11978975 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11978978 jmp dword ptr [eax*4 + 0x11978c6f] */
  switch (EAX) {
    case 0: goto L_119789fa;
    case 1: goto L_119789d2;
    case 2: goto L_119789aa;
    case 3: goto L_1197897f;
    default: x86_unimpl("switch@0x11978978 out of table"); return;
  }
L_1197897f:;
  /* 1197897f push 0x1199f5e0 */
  push32((uint32_t)(0x1199f5e0u));
  /* 11978984 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11978989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197898b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197898d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197898f push 0 */
  push32((uint32_t)(0x0u));
  /* 11978991 call 0x11976830 */
  push32(0x11978996u); f_11976830();
  /* 11978996 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197899c jne 0x1197899f */
  if (!C.zf) goto L_1197899f;
  /* 1197899e int3  */
  x86_unimpl("int3 @ 0x1197899e");
L_1197899f:;
  /* 1197899f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119789a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119789a3 jne 0x1197897f */
  if (!C.zf) goto L_1197897f;
  /* 119789a5 jmp 0x11978a48 */
  goto L_11978a48;
L_119789aa:;
  /* 119789aa push 0x1199f5bc */
  push32((uint32_t)(0x1199f5bcu));
  /* 119789af push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119789b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119789b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119789b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119789ba push 0 */
  push32((uint32_t)(0x0u));
  /* 119789bc call 0x11976830 */
  push32(0x119789c1u); f_11976830();
  /* 119789c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119789c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119789c7 jne 0x119789ca */
  if (!C.zf) goto L_119789ca;
  /* 119789c9 int3  */
  x86_unimpl("int3 @ 0x119789c9");
L_119789ca:;
  /* 119789ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119789cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119789ce jne 0x119789aa */
  if (!C.zf) goto L_119789aa;
  /* 119789d0 jmp 0x11978a48 */
  goto L_11978a48;
L_119789d2:;
  /* 119789d2 push 0x1199f598 */
  push32((uint32_t)(0x1199f598u));
  /* 119789d7 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119789dc push 0 */
  push32((uint32_t)(0x0u));
  /* 119789de push 0 */
  push32((uint32_t)(0x0u));
  /* 119789e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119789e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119789e4 call 0x11976830 */
  push32(0x119789e9u); f_11976830();
  /* 119789e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119789ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119789ef jne 0x119789f2 */
  if (!C.zf) goto L_119789f2;
  /* 119789f1 int3  */
  x86_unimpl("int3 @ 0x119789f1");
L_119789f2:;
  /* 119789f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119789f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119789f6 jne 0x119789d2 */
  if (!C.zf) goto L_119789d2;
  /* 119789f8 jmp 0x11978a48 */
  goto L_11978a48;
L_119789fa:;
  /* 119789fa push 0x1199f574 */
  push32((uint32_t)(0x1199f574u));
  /* 119789ff push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11978a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a0c call 0x11976830 */
  push32(0x11978a11u); f_11976830();
  /* 11978a11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978a14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978a17 jne 0x11978a1a */
  if (!C.zf) goto L_11978a1a;
  /* 11978a19 int3  */
  x86_unimpl("int3 @ 0x11978a19");
L_11978a1a:;
  /* 11978a1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11978a1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978a1e jne 0x119789fa */
  if (!C.zf) goto L_119789fa;
  /* 11978a20 jmp 0x11978a48 */
  goto L_11978a48;
L_11978a22:;
  /* 11978a22 push 0x1199f548 */
  push32((uint32_t)(0x1199f548u));
  /* 11978a27 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11978a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978a34 call 0x11976830 */
  push32(0x11978a39u); f_11976830();
  /* 11978a39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978a3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978a3f jne 0x11978a42 */
  if (!C.zf) goto L_11978a42;
  /* 11978a41 int3  */
  x86_unimpl("int3 @ 0x11978a41");
L_11978a42:;
  /* 11978a42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11978a44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11978a46 jne 0x11978a22 */
  if (!C.zf) goto L_11978a22;
L_11978a48:;
  /* 11978a48 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978a4a call 0x1197b210 */
  push32(0x11978a4fu); f_1197b210();
  /* 11978a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978a54 jmp 0x11978c68 */
  goto L_11978c68;
L_11978a59:;
  /* 11978a59 mov eax, dword ptr [0x119a38bc] */
  EAX = (r32((uint32_t)(0x119a38bc)));
  /* 11978a5e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11978a61 jmp 0x11978a6b */
  goto L_11978a6b;
L_11978a63:;
  /* 11978a63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978a66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11978a68 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11978a6b:;
  /* 11978a6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978a6f je 0x11978c5b */
  if (C.zf) goto L_11978c5b;
  /* 11978a75 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11978a7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978a7f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11978a82 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11978a88 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978a8b je 0x11978ab0 */
  if (C.zf) goto L_11978ab0;
  /* 11978a8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978a90 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978a94 je 0x11978ab0 */
  if (C.zf) goto L_11978ab0;
  /* 11978a96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978a99 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11978a9c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11978aa2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978aa5 je 0x11978ab0 */
  if (C.zf) goto L_11978ab0;
  /* 11978aa7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978aaa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978aae jne 0x11978ac8 */
  if (!C.zf) goto L_11978ac8;
L_11978ab0:;
  /* 11978ab0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978ab3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11978ab6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11978abc mov edx, dword ptr [ecx*4 + 0x119a1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a94)));
  /* 11978ac3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11978ac6 jmp 0x11978acf */
  goto L_11978acf;
L_11978ac8:;
  /* 11978ac8 mov dword ptr [ebp - 0x14], 0x1199f540 */
  w32((uint32_t)(EBP + -0x14), (0x1199f540u));
L_11978acf:;
  /* 11978acf push 4 */
  push32((uint32_t)(0x4u));
  /* 11978ad1 mov al, byte ptr [0x119a1a90] */
  AL = (r8((uint32_t)(0x119a1a90)));
  /* 11978ad6 push eax */
  push32((uint32_t)(EAX));
  /* 11978ad7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978ada add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978add push ecx */
  push32((uint32_t)(ECX));
  /* 11978ade call 0x11978880 */
  push32(0x11978ae3u); f_11978880();
  /* 11978ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978ae8 jne 0x11978b24 */
  if (!C.zf) goto L_11978b24;
L_11978aea:;
  /* 11978aea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978aed add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978af0 push edx */
  push32((uint32_t)(EDX));
  /* 11978af1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978af4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11978af7 push ecx */
  push32((uint32_t)(ECX));
  /* 11978af8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11978afb push edx */
  push32((uint32_t)(EDX));
  /* 11978afc push 0x1199f41c */
  push32((uint32_t)(0x1199f41cu));
  /* 11978b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b09 call 0x11976830 */
  push32(0x11978b0eu); f_11976830();
  /* 11978b0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978b11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978b14 jne 0x11978b17 */
  if (!C.zf) goto L_11978b17;
  /* 11978b16 int3  */
  x86_unimpl("int3 @ 0x11978b16");
L_11978b17:;
  /* 11978b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978b19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978b1b jne 0x11978aea */
  if (!C.zf) goto L_11978aea;
  /* 11978b1d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11978b24:;
  /* 11978b24 push 4 */
  push32((uint32_t)(0x4u));
  /* 11978b26 mov cl, byte ptr [0x119a1a90] */
  CL = (r8((uint32_t)(0x119a1a90)));
  /* 11978b2c push ecx */
  push32((uint32_t)(ECX));
  /* 11978b2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b30 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11978b33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b36 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11978b3a push edx */
  push32((uint32_t)(EDX));
  /* 11978b3b call 0x11978880 */
  push32(0x11978b40u); f_11978880();
  /* 11978b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978b43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978b45 jne 0x11978b81 */
  if (!C.zf) goto L_11978b81;
L_11978b47:;
  /* 11978b47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b4a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978b4d push eax */
  push32((uint32_t)(EAX));
  /* 11978b4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b51 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11978b54 push edx */
  push32((uint32_t)(EDX));
  /* 11978b55 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11978b58 push eax */
  push32((uint32_t)(EAX));
  /* 11978b59 push 0x1199f3f0 */
  push32((uint32_t)(0x1199f3f0u));
  /* 11978b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978b66 call 0x11976830 */
  push32(0x11978b6bu); f_11976830();
  /* 11978b6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978b6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978b71 jne 0x11978b74 */
  if (!C.zf) goto L_11978b74;
  /* 11978b73 int3  */
  x86_unimpl("int3 @ 0x11978b73");
L_11978b74:;
  /* 11978b74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11978b76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978b78 jne 0x11978b47 */
  if (!C.zf) goto L_11978b47;
  /* 11978b7a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11978b81:;
  /* 11978b81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b84 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978b88 jne 0x11978bda */
  if (!C.zf) goto L_11978bda;
  /* 11978b8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11978b90 push ecx */
  push32((uint32_t)(ECX));
  /* 11978b91 mov dl, byte ptr [0x119a1a91] */
  DL = (r8((uint32_t)(0x119a1a91)));
  /* 11978b97 push edx */
  push32((uint32_t)(EDX));
  /* 11978b98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978b9b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978b9e push eax */
  push32((uint32_t)(EAX));
  /* 11978b9f call 0x11978880 */
  push32(0x11978ba4u); f_11978880();
  /* 11978ba4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978ba9 jne 0x11978bda */
  if (!C.zf) goto L_11978bda;
L_11978bab:;
  /* 11978bab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978bae add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11978bb2 push 0x1199f514 */
  push32((uint32_t)(0x1199f514u));
  /* 11978bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11978bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11978bbf call 0x11976830 */
  push32(0x11978bc4u); f_11976830();
  /* 11978bc4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978bc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978bca jne 0x11978bcd */
  if (!C.zf) goto L_11978bcd;
  /* 11978bcc int3  */
  x86_unimpl("int3 @ 0x11978bcc");
L_11978bcd:;
  /* 11978bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11978bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11978bd1 jne 0x11978bab */
  if (!C.zf) goto L_11978bab;
  /* 11978bd3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11978bda:;
  /* 11978bda cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978bde jne 0x11978c56 */
  if (!C.zf) goto L_11978c56;
  /* 11978be0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978be3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978be7 je 0x11978c1c */
  if (C.zf) goto L_11978c1c;
L_11978be9:;
  /* 11978be9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978bec mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11978bef push edx */
  push32((uint32_t)(EDX));
  /* 11978bf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978bf3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11978bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11978bf7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11978bfa push edx */
  push32((uint32_t)(EDX));
  /* 11978bfb push 0x1199f4f4 */
  push32((uint32_t)(0x1199f4f4u));
  /* 11978c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c08 call 0x11976830 */
  push32(0x11978c0du); f_11976830();
  /* 11978c0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978c10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978c13 jne 0x11978c16 */
  if (!C.zf) goto L_11978c16;
  /* 11978c15 int3  */
  x86_unimpl("int3 @ 0x11978c15");
L_11978c16:;
  /* 11978c16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978c1a jne 0x11978be9 */
  if (!C.zf) goto L_11978be9;
L_11978c1c:;
  /* 11978c1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978c1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11978c22 push edx */
  push32((uint32_t)(EDX));
  /* 11978c23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978c26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978c29 push eax */
  push32((uint32_t)(EAX));
  /* 11978c2a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11978c2d push ecx */
  push32((uint32_t)(ECX));
  /* 11978c2e push 0x1199f4c8 */
  push32((uint32_t)(0x1199f4c8u));
  /* 11978c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978c3b call 0x11976830 */
  push32(0x11978c40u); f_11976830();
  /* 11978c40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978c43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978c46 jne 0x11978c49 */
  if (!C.zf) goto L_11978c49;
  /* 11978c48 int3  */
  x86_unimpl("int3 @ 0x11978c48");
L_11978c49:;
  /* 11978c49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11978c4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11978c4d jne 0x11978c1c */
  if (!C.zf) goto L_11978c1c;
  /* 11978c4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11978c56:;
  /* 11978c56 jmp 0x11978a63 */
  goto L_11978a63;
L_11978c5b:;
  /* 11978c5b push 9 */
  push32((uint32_t)(0x9u));
  /* 11978c5d call 0x1197b210 */
  push32(0x11978c62u); f_1197b210();
  /* 11978c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11978c68:;
  /* 11978c68 pop edi */
  EDI = (pop32());
  /* 11978c69 pop esi */
  ESI = (pop32());
  /* 11978c6a pop ebx */
  EBX = (pop32());
  /* 11978c6b mov esp, ebp */
  ESP = (EBP);
  /* 11978c6d pop ebp */
  EBP = (pop32());
  /* 11978c6e ret  */
  ESPCHK(0x11978910u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c80 @ 0x11978c80 (34 bytes, 13 insns) */
void f_11978c80(void) {
  FTRACE(0x11978c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11978c81 mov ebp, esp */
  EBP = (ESP);
  /* 11978c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11978c84 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11978c89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11978c8c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978c90 je 0x11978c9b */
  if (C.zf) goto L_11978c9b;
  /* 11978c92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978c95 mov dword ptr [0x119a1a84], ecx */
  w32((uint32_t)(0x119a1a84), (ECX));
L_11978c9b:;
  /* 11978c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978c9e mov esp, ebp */
  ESP = (EBP);
  /* 11978ca0 pop ebp */
  EBP = (pop32());
  /* 11978ca1 ret  */
  ESPCHK(0x11978c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x11978cb0 (103 bytes, 38 insns) */
void f_11978cb0(void) {
  FTRACE(0x11978cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11978cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11978cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11978cb4 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11978cb9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11978cbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978cbe jne 0x11978cc2 */
  if (!C.zf) goto L_11978cc2;
  /* 11978cc0 jmp 0x11978d13 */
  goto L_11978d13;
L_11978cc2:;
  /* 11978cc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978cc4 call 0x1197b170 */
  push32(0x11978cc9u); f_1197b170();
  /* 11978cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978ccc mov ecx, dword ptr [0x119a38bc] */
  ECX = (r32((uint32_t)(0x119a38bc)));
  /* 11978cd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11978cd5 jmp 0x11978cdf */
  goto L_11978cdf;
L_11978cd7:;
  /* 11978cd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978cda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11978cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11978cdf:;
  /* 11978cdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978ce3 je 0x11978d09 */
  if (C.zf) goto L_11978d09;
  /* 11978ce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978ce8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11978ceb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11978cf1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978cf4 jne 0x11978d07 */
  if (!C.zf) goto L_11978d07;
  /* 11978cf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11978cfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978cfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978d00 push ecx */
  push32((uint32_t)(ECX));
  /* 11978d01 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11978d04u);
  /* 11978d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11978d07:;
  /* 11978d07 jmp 0x11978cd7 */
  goto L_11978cd7;
L_11978d09:;
  /* 11978d09 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978d0b call 0x1197b210 */
  push32(0x11978d10u); f_1197b210();
  /* 11978d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11978d13:;
  /* 11978d13 mov esp, ebp */
  ESP = (EBP);
  /* 11978d15 pop ebp */
  EBP = (pop32());
  /* 11978d16 ret  */
  ESPCHK(0x11978cb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11978d20 (75 bytes, 28 insns) */
void f_11978d20(void) {
  FTRACE(0x11978d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11978d21 mov ebp, esp */
  EBP = (ESP);
  /* 11978d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11978d24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978d28 je 0x11978d5d */
  if (C.zf) goto L_11978d5d;
  /* 11978d2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978d2d push eax */
  push32((uint32_t)(EAX));
  /* 11978d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978d31 push ecx */
  push32((uint32_t)(ECX));
  /* 11978d32 call dword ptr [0x119a63bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63bc))), 0x11978d38u);
  /* 11978d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978d3a jne 0x11978d5d */
  if (!C.zf) goto L_11978d5d;
  /* 11978d3c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978d40 je 0x11978d54 */
  if (C.zf) goto L_11978d54;
  /* 11978d42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978d45 push edx */
  push32((uint32_t)(EDX));
  /* 11978d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978d49 push eax */
  push32((uint32_t)(EAX));
  /* 11978d4a call dword ptr [0x119a6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6384))), 0x11978d50u);
  /* 11978d50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978d52 jne 0x11978d5d */
  if (!C.zf) goto L_11978d5d;
L_11978d54:;
  /* 11978d54 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11978d5b jmp 0x11978d64 */
  goto L_11978d64;
L_11978d5d:;
  /* 11978d5d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11978d64:;
  /* 11978d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978d67 mov esp, ebp */
  ESP = (EBP);
  /* 11978d69 pop ebp */
  EBP = (pop32());
  /* 11978d6a ret  */
  ESPCHK(0x11978d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d70 @ 0x11978d70 (134 bytes, 50 insns) */
void f_11978d70(void) {
  FTRACE(0x11978d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11978d71 mov ebp, esp */
  EBP = (ESP);
  /* 11978d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11978d74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978d78 jne 0x11978d7e */
  if (!C.zf) goto L_11978d7e;
  /* 11978d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978d7c jmp 0x11978df2 */
  goto L_11978df2;
L_11978d7e:;
  /* 11978d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11978d80 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11978d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978d85 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978d88 push eax */
  push32((uint32_t)(EAX));
  /* 11978d89 call 0x11978d20 */
  push32(0x11978d8eu); f_11978d20();
  /* 11978d8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978d91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978d93 jne 0x11978d99 */
  if (!C.zf) goto L_11978d99;
  /* 11978d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978d97 jmp 0x11978df2 */
  goto L_11978df2;
L_11978d99:;
  /* 11978d99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978d9c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978d9f push ecx */
  push32((uint32_t)(ECX));
  /* 11978da0 call 0x1197ba70 */
  push32(0x11978da5u); f_1197ba70();
  /* 11978da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978da8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11978dab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978daf je 0x11978dc6 */
  if (C.zf) goto L_11978dc6;
  /* 11978db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978db4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978db7 push edx */
  push32((uint32_t)(EDX));
  /* 11978db8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978dbb push eax */
  push32((uint32_t)(EAX));
  /* 11978dbc call 0x1197bad0 */
  push32(0x11978dc1u); f_1197bad0();
  /* 11978dc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978dc4 jmp 0x11978df2 */
  goto L_11978df2;
L_11978dc6:;
  /* 11978dc6 mov ecx, dword ptr [0x119a3870] */
  ECX = (r32((uint32_t)(0x119a3870)));
  /* 11978dcc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11978dd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11978dd4 je 0x11978ddd */
  if (C.zf) goto L_11978ddd;
  /* 11978dd6 mov eax, 1 */
  EAX = (0x1u);
  /* 11978ddb jmp 0x11978df2 */
  goto L_11978df2;
L_11978ddd:;
  /* 11978ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978de0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978de3 push edx */
  push32((uint32_t)(EDX));
  /* 11978de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978de6 mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 11978deb push eax */
  push32((uint32_t)(EAX));
  /* 11978dec call dword ptr [0x119a637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a637c))), 0x11978df2u);
L_11978df2:;
  /* 11978df2 mov esp, ebp */
  ESP = (EBP);
  /* 11978df4 pop ebp */
  EBP = (pop32());
  /* 11978df5 ret  */
  ESPCHK(0x11978d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x11978e00 (227 bytes, 80 insns) */
void f_11978e00(void) {
  FTRACE(0x11978e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11978e01 mov ebp, esp */
  EBP = (ESP);
  /* 11978e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11978e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978e07 push eax */
  push32((uint32_t)(EAX));
  /* 11978e08 call 0x11978d70 */
  push32(0x11978e0du); f_11978d70();
  /* 11978e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978e12 jne 0x11978e1b */
  if (!C.zf) goto L_11978e1b;
  /* 11978e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978e16 jmp 0x11978edf */
  goto L_11978edf;
L_11978e1b:;
  /* 11978e1b push 9 */
  push32((uint32_t)(0x9u));
  /* 11978e1d call 0x1197b170 */
  push32(0x11978e22u); f_1197b170();
  /* 11978e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978e25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978e28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978e2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11978e2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11978e34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11978e39 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e3c je 0x11978e60 */
  if (C.zf) goto L_11978e60;
  /* 11978e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e41 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e45 je 0x11978e60 */
  if (C.zf) goto L_11978e60;
  /* 11978e47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11978e4d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11978e52 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e55 je 0x11978e60 */
  if (C.zf) goto L_11978e60;
  /* 11978e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e5a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e5e jne 0x11978ed3 */
  if (!C.zf) goto L_11978ed3;
L_11978e60:;
  /* 11978e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11978e62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11978e65 push edx */
  push32((uint32_t)(EDX));
  /* 11978e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978e69 push eax */
  push32((uint32_t)(EAX));
  /* 11978e6a call 0x11978d20 */
  push32(0x11978e6fu); f_11978d20();
  /* 11978e6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978e74 je 0x11978ed3 */
  if (C.zf) goto L_11978ed3;
  /* 11978e76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11978e7c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e7f jne 0x11978ed3 */
  if (!C.zf) goto L_11978ed3;
  /* 11978e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11978e87 cmp ecx, dword ptr [0x119a1a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a1a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e8d jg 0x11978ed3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11978ed3;
  /* 11978e8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978e93 je 0x11978ea0 */
  if (C.zf) goto L_11978ea0;
  /* 11978e95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11978e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978e9b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11978e9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11978ea0:;
  /* 11978ea0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978ea4 je 0x11978eb1 */
  if (C.zf) goto L_11978eb1;
  /* 11978ea6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11978ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978eac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11978eaf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11978eb1:;
  /* 11978eb1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978eb5 je 0x11978ec2 */
  if (C.zf) goto L_11978ec2;
  /* 11978eb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11978eba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978ebd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11978ec0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11978ec2:;
  /* 11978ec2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978ec4 call 0x1197b210 */
  push32(0x11978ec9u); f_1197b210();
  /* 11978ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978ecc mov eax, 1 */
  EAX = (0x1u);
  /* 11978ed1 jmp 0x11978edf */
  goto L_11978edf;
L_11978ed3:;
  /* 11978ed3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11978ed5 call 0x1197b210 */
  push32(0x11978edau); f_1197b210();
  /* 11978eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11978edf:;
  /* 11978edf mov esp, ebp */
  ESP = (EBP);
  /* 11978ee1 pop ebp */
  EBP = (pop32());
  /* 11978ee2 ret  */
  ESPCHK(0x11978e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x11978ef0 (28 bytes, 11 insns) */
void f_11978ef0(void) {
  FTRACE(0x11978ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11978ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11978ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11978ef4 mov eax, dword ptr [0x119a5218] */
  EAX = (r32((uint32_t)(0x119a5218)));
  /* 11978ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11978efc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978eff mov dword ptr [0x119a5218], ecx */
  w32((uint32_t)(0x119a5218), (ECX));
  /* 11978f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978f08 mov esp, ebp */
  ESP = (EBP);
  /* 11978f0a pop ebp */
  EBP = (pop32());
  /* 11978f0b ret  */
  ESPCHK(0x11978ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f10 @ 0x11978f10 (362 bytes, 116 insns) */
void f_11978f10(void) {
  FTRACE(0x11978f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11978f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11978f11 mov ebp, esp */
  EBP = (ESP);
  /* 11978f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11978f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11978f17 push esi */
  push32((uint32_t)(ESI));
  /* 11978f18 push edi */
  push32((uint32_t)(EDI));
  /* 11978f19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978f1d jne 0x11978f4a */
  if (!C.zf) goto L_11978f4a;
L_11978f1f:;
  /* 11978f1f push 0x1199f628 */
  push32((uint32_t)(0x1199f628u));
  /* 11978f24 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11978f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11978f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11978f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11978f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11978f31 call 0x11976830 */
  push32(0x11978f36u); f_11976830();
  /* 11978f36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978f39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978f3c jne 0x11978f3f */
  if (!C.zf) goto L_11978f3f;
  /* 11978f3e int3  */
  x86_unimpl("int3 @ 0x11978f3e");
L_11978f3f:;
  /* 11978f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11978f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978f43 jne 0x11978f1f */
  if (!C.zf) goto L_11978f1f;
  /* 11978f45 jmp 0x11979073 */
  goto L_11979073;
L_11978f4a:;
  /* 11978f4a push 9 */
  push32((uint32_t)(0x9u));
  /* 11978f4c call 0x1197b170 */
  push32(0x11978f51u); f_1197b170();
  /* 11978f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11978f54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978f57 mov edx, dword ptr [0x119a38bc] */
  EDX = (r32((uint32_t)(0x119a38bc)));
  /* 11978f5d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11978f5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11978f66 jmp 0x11978f71 */
  goto L_11978f71;
L_11978f68:;
  /* 11978f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978f6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978f6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11978f71:;
  /* 11978f71 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978f75 jge 0x11978f95 */
  if ((C.sf==C.of)) goto L_11978f95;
  /* 11978f77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978f7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978f7d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11978f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11978f88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978f8b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11978f93 jmp 0x11978f68 */
  goto L_11978f68;
L_11978f95:;
  /* 11978f95 mov edx, dword ptr [0x119a38bc] */
  EDX = (r32((uint32_t)(0x119a38bc)));
  /* 11978f9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11978f9e jmp 0x11978fa8 */
  goto L_11978fa8;
L_11978fa0:;
  /* 11978fa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978fa3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11978fa5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11978fa8:;
  /* 11978fa8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978fac je 0x11979051 */
  if (C.zf) goto L_11979051;
  /* 11978fb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978fb5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11978fb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11978fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11978fbf jl 0x11979027 */
  if ((C.sf!=C.of)) goto L_11979027;
  /* 11978fc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978fc4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11978fc7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11978fcd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11978fd0 jge 0x11979027 */
  if ((C.sf==C.of)) goto L_11979027;
  /* 11978fd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978fd5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11978fd8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11978fde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978fe1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11978fe5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11978fe8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978feb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11978fee and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11978ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11978ff7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11978ffb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11978ffe mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11979001 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11979006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979009 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1197900d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979010 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979013 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979016 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11979019 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197901e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979021 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11979025 jmp 0x1197904c */
  goto L_1197904c;
L_11979027:;
  /* 11979027 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197902a push edx */
  push32((uint32_t)(EDX));
  /* 1197902b push 0x1199f604 */
  push32((uint32_t)(0x1199f604u));
  /* 11979030 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979032 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979034 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979036 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979038 call 0x11976830 */
  push32(0x1197903du); f_11976830();
  /* 1197903d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979040 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979043 jne 0x11979046 */
  if (!C.zf) goto L_11979046;
  /* 11979045 int3  */
  x86_unimpl("int3 @ 0x11979045");
L_11979046:;
  /* 11979046 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197904a jne 0x11979027 */
  if (!C.zf) goto L_11979027;
L_1197904c:;
  /* 1197904c jmp 0x11978fa0 */
  goto L_11978fa0;
L_11979051:;
  /* 11979051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979054 mov edx, dword ptr [0x119a38c4] */
  EDX = (r32((uint32_t)(0x119a38c4)));
  /* 1197905a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1197905d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979060 mov ecx, dword ptr [0x119a38b8] */
  ECX = (r32((uint32_t)(0x119a38b8)));
  /* 11979066 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11979069 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197906b call 0x1197b210 */
  push32(0x11979070u); f_1197b210();
  /* 11979070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11979073:;
  /* 11979073 pop edi */
  EDI = (pop32());
  /* 11979074 pop esi */
  ESI = (pop32());
  /* 11979075 pop ebx */
  EBX = (pop32());
  /* 11979076 mov esp, ebp */
  ESP = (EBP);
  /* 11979078 pop ebp */
  EBP = (pop32());
  /* 11979079 ret  */
  ESPCHK(0x11978f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x11979080 (291 bytes, 95 insns) */
void f_11979080(void) {
  FTRACE(0x11979080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979080 push ebp */
  push32((uint32_t)(EBP));
  /* 11979081 mov ebp, esp */
  EBP = (ESP);
  /* 11979083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979086 push ebx */
  push32((uint32_t)(EBX));
  /* 11979087 push esi */
  push32((uint32_t)(ESI));
  /* 11979088 push edi */
  push32((uint32_t)(EDI));
  /* 11979089 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11979090 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979094 je 0x119790a2 */
  if (C.zf) goto L_119790a2;
  /* 11979096 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197909a je 0x119790a2 */
  if (C.zf) goto L_119790a2;
  /* 1197909c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119790a0 jne 0x119790d0 */
  if (!C.zf) goto L_119790d0;
L_119790a2:;
  /* 119790a2 push 0x1199f650 */
  push32((uint32_t)(0x1199f650u));
  /* 119790a7 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119790ac push 0 */
  push32((uint32_t)(0x0u));
  /* 119790ae push 0 */
  push32((uint32_t)(0x0u));
  /* 119790b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119790b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119790b4 call 0x11976830 */
  push32(0x119790b9u); f_11976830();
  /* 119790b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119790bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119790bf jne 0x119790c2 */
  if (!C.zf) goto L_119790c2;
  /* 119790c1 int3  */
  x86_unimpl("int3 @ 0x119790c1");
L_119790c2:;
  /* 119790c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119790c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119790c6 jne 0x119790a2 */
  if (!C.zf) goto L_119790a2;
  /* 119790c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119790cb jmp 0x1197919c */
  goto L_1197919c;
L_119790d0:;
  /* 119790d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119790d7 jmp 0x119790e2 */
  goto L_119790e2;
L_119790d9:;
  /* 119790d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119790dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119790df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119790e2:;
  /* 119790e2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119790e6 jge 0x1197916c */
  if ((C.sf==C.of)) goto L_1197916c;
  /* 119790ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119790ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119790f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119790f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119790f8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 119790fc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979106 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1197910a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197910d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979110 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979113 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11979116 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1197911a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197911e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979121 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979124 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11979128 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197912b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197912e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979133 jne 0x11979142 */
  if (!C.zf) goto L_11979142;
  /* 11979135 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197913b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979140 je 0x11979167 */
  if (C.zf) goto L_11979167;
L_11979142:;
  /* 11979142 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979146 je 0x11979167 */
  if (C.zf) goto L_11979167;
  /* 11979148 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197914c jne 0x11979160 */
  if (!C.zf) goto L_11979160;
  /* 1197914e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979152 jne 0x11979167 */
  if (!C.zf) goto L_11979167;
  /* 11979154 mov eax, dword ptr [0x119a1a84] */
  EAX = (r32((uint32_t)(0x119a1a84)));
  /* 11979159 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1197915c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197915e je 0x11979167 */
  if (C.zf) goto L_11979167;
L_11979160:;
  /* 11979160 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11979167:;
  /* 11979167 jmp 0x119790d9 */
  goto L_119790d9;
L_1197916c:;
  /* 1197916c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197916f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979172 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11979175 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979178 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197917b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1197917e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979181 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979184 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11979187 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197918a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197918d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11979190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979193 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11979199 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1197919c:;
  /* 1197919c pop edi */
  EDI = (pop32());
  /* 1197919d pop esi */
  ESI = (pop32());
  /* 1197919e pop ebx */
  EBX = (pop32());
  /* 1197919f mov esp, ebp */
  ESP = (EBP);
  /* 119791a1 pop ebp */
  EBP = (pop32());
  /* 119791a2 ret  */
  ESPCHK(0x11979080u, _esp0);
  ESP += 4; return;
}

/* FUN_100091b0 @ 0x119791b0 (697 bytes, 253 insns) */
void f_119791b0(void) {
  FTRACE(0x119791b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119791b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119791b1 mov ebp, esp */
  EBP = (ESP);
  /* 119791b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119791b6 push ebx */
  push32((uint32_t)(EBX));
  /* 119791b7 push esi */
  push32((uint32_t)(ESI));
  /* 119791b8 push edi */
  push32((uint32_t)(EDI));
  /* 119791b9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119791c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 119791c2 call 0x1197b170 */
  push32(0x119791c7u); f_1197b170();
  /* 119791c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119791ca:;
  /* 119791ca push 0x1199f748 */
  push32((uint32_t)(0x1199f748u));
  /* 119791cf push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119791d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119791d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119791d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119791da push 0 */
  push32((uint32_t)(0x0u));
  /* 119791dc call 0x11976830 */
  push32(0x119791e1u); f_11976830();
  /* 119791e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119791e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119791e7 jne 0x119791ea */
  if (!C.zf) goto L_119791ea;
  /* 119791e9 int3  */
  x86_unimpl("int3 @ 0x119791e9");
L_119791ea:;
  /* 119791ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119791ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119791ee jne 0x119791ca */
  if (!C.zf) goto L_119791ca;
  /* 119791f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119791f4 je 0x119791fe */
  if (C.zf) goto L_119791fe;
  /* 119791f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119791f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119791fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119791fe:;
  /* 119791fe mov eax, dword ptr [0x119a38bc] */
  EAX = (r32((uint32_t)(0x119a38bc)));
  /* 11979203 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11979206 jmp 0x11979210 */
  goto L_11979210;
L_11979208:;
  /* 11979208 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197920b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197920d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11979210:;
  /* 11979210 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979214 je 0x11979432 */
  if (C.zf) goto L_11979432;
  /* 1197921a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197921d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979220 je 0x11979432 */
  if (C.zf) goto L_11979432;
  /* 11979226 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979229 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1197922c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11979232 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979235 je 0x11979264 */
  if (C.zf) goto L_11979264;
  /* 11979237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197923a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1197923d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11979243 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979245 je 0x11979264 */
  if (C.zf) goto L_11979264;
  /* 11979247 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197924a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1197924d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11979252 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979255 jne 0x11979269 */
  if (!C.zf) goto L_11979269;
  /* 11979257 mov ecx, dword ptr [0x119a1a84] */
  ECX = (r32((uint32_t)(0x119a1a84)));
  /* 1197925d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11979260 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979262 jne 0x11979269 */
  if (!C.zf) goto L_11979269;
L_11979264:;
  /* 11979264 jmp 0x1197942d */
  goto L_1197942d;
L_11979269:;
  /* 11979269 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197926c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979270 je 0x119792e2 */
  if (C.zf) goto L_119792e2;
  /* 11979272 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979274 push 1 */
  push32((uint32_t)(0x1u));
  /* 11979276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979279 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197927c push ecx */
  push32((uint32_t)(ECX));
  /* 1197927d call 0x11978d20 */
  push32(0x11979282u); f_11978d20();
  /* 11979282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979287 jne 0x119792b3 */
  if (!C.zf) goto L_119792b3;
L_11979289:;
  /* 11979289 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197928c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1197928f push eax */
  push32((uint32_t)(EAX));
  /* 11979290 push 0x1199f734 */
  push32((uint32_t)(0x1199f734u));
  /* 11979295 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979297 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197929b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197929d call 0x11976830 */
  push32(0x119792a2u); f_11976830();
  /* 119792a2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119792a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119792a8 jne 0x119792ab */
  if (!C.zf) goto L_119792ab;
  /* 119792aa int3  */
  x86_unimpl("int3 @ 0x119792aa");
L_119792ab:;
  /* 119792ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119792ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119792af jne 0x11979289 */
  if (!C.zf) goto L_11979289;
  /* 119792b1 jmp 0x119792e2 */
  goto L_119792e2;
L_119792b3:;
  /* 119792b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119792b6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119792b9 push eax */
  push32((uint32_t)(EAX));
  /* 119792ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119792bd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119792c0 push edx */
  push32((uint32_t)(EDX));
  /* 119792c1 push 0x1199f728 */
  push32((uint32_t)(0x1199f728u));
  /* 119792c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119792c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119792ca push 0 */
  push32((uint32_t)(0x0u));
  /* 119792cc push 0 */
  push32((uint32_t)(0x0u));
  /* 119792ce call 0x11976830 */
  push32(0x119792d3u); f_11976830();
  /* 119792d3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119792d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119792d9 jne 0x119792dc */
  if (!C.zf) goto L_119792dc;
  /* 119792db int3  */
  x86_unimpl("int3 @ 0x119792db");
L_119792dc:;
  /* 119792dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119792de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119792e0 jne 0x119792b3 */
  if (!C.zf) goto L_119792b3;
L_119792e2:;
  /* 119792e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119792e5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119792e8 push edx */
  push32((uint32_t)(EDX));
  /* 119792e9 push 0x1199f720 */
  push32((uint32_t)(0x1199f720u));
  /* 119792ee push 0 */
  push32((uint32_t)(0x0u));
  /* 119792f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119792f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119792f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119792f6 call 0x11976830 */
  push32(0x119792fbu); f_11976830();
  /* 119792fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119792fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979301 jne 0x11979304 */
  if (!C.zf) goto L_11979304;
  /* 11979303 int3  */
  x86_unimpl("int3 @ 0x11979303");
L_11979304:;
  /* 11979304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979308 jne 0x119792e2 */
  if (!C.zf) goto L_119792e2;
  /* 1197930a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197930d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11979310 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11979316 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979319 jne 0x1197938c */
  if (!C.zf) goto L_1197938c;
L_1197931b:;
  /* 1197931b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197931e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11979321 push ecx */
  push32((uint32_t)(ECX));
  /* 11979322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979325 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11979328 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1197932b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11979330 push eax */
  push32((uint32_t)(EAX));
  /* 11979331 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979334 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979337 push ecx */
  push32((uint32_t)(ECX));
  /* 11979338 push 0x1199f6ec */
  push32((uint32_t)(0x1199f6ecu));
  /* 1197933d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197933f push 0 */
  push32((uint32_t)(0x0u));
  /* 11979341 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979345 call 0x11976830 */
  push32(0x1197934au); f_11976830();
  /* 1197934a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197934d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979350 jne 0x11979353 */
  if (!C.zf) goto L_11979353;
  /* 11979352 int3  */
  x86_unimpl("int3 @ 0x11979352");
L_11979353:;
  /* 11979353 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979355 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979357 jne 0x1197931b */
  if (!C.zf) goto L_1197931b;
  /* 11979359 cmp dword ptr [0x119a5218], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5218))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979360 je 0x1197937b */
  if (C.zf) goto L_1197937b;
  /* 11979362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979365 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11979368 push ecx */
  push32((uint32_t)(ECX));
  /* 11979369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197936c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197936f push edx */
  push32((uint32_t)(EDX));
  /* 11979370 call dword ptr [0x119a5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a5218))), 0x11979376u);
  /* 11979376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979379 jmp 0x11979387 */
  goto L_11979387;
L_1197937b:;
  /* 1197937b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197937e push eax */
  push32((uint32_t)(EAX));
  /* 1197937f call 0x11979470 */
  push32(0x11979384u); f_11979470();
  /* 11979384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11979387:;
  /* 11979387 jmp 0x1197942d */
  goto L_1197942d;
L_1197938c:;
  /* 1197938c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197938f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979393 jne 0x119793d2 */
  if (!C.zf) goto L_119793d2;
L_11979395:;
  /* 11979395 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979398 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197939b push eax */
  push32((uint32_t)(EAX));
  /* 1197939c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197939f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119793a2 push ecx */
  push32((uint32_t)(ECX));
  /* 119793a3 push 0x1199f6c4 */
  push32((uint32_t)(0x1199f6c4u));
  /* 119793a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119793aa push 0 */
  push32((uint32_t)(0x0u));
  /* 119793ac push 0 */
  push32((uint32_t)(0x0u));
  /* 119793ae push 0 */
  push32((uint32_t)(0x0u));
  /* 119793b0 call 0x11976830 */
  push32(0x119793b5u); f_11976830();
  /* 119793b5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119793b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119793bb jne 0x119793be */
  if (!C.zf) goto L_119793be;
  /* 119793bd int3  */
  x86_unimpl("int3 @ 0x119793bd");
L_119793be:;
  /* 119793be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119793c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119793c2 jne 0x11979395 */
  if (!C.zf) goto L_11979395;
  /* 119793c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119793c7 push eax */
  push32((uint32_t)(EAX));
  /* 119793c8 call 0x11979470 */
  push32(0x119793cdu); f_11979470();
  /* 119793cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119793d0 jmp 0x1197942d */
  goto L_1197942d;
L_119793d2:;
  /* 119793d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119793d5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119793d8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119793de cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119793e1 jne 0x1197942d */
  if (!C.zf) goto L_1197942d;
L_119793e3:;
  /* 119793e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119793e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119793e9 push ecx */
  push32((uint32_t)(ECX));
  /* 119793ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119793ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119793f0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119793f3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119793f8 push eax */
  push32((uint32_t)(EAX));
  /* 119793f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119793fc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119793ff push ecx */
  push32((uint32_t)(ECX));
  /* 11979400 push 0x1199f690 */
  push32((uint32_t)(0x1199f690u));
  /* 11979405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197940b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197940d call 0x11976830 */
  push32(0x11979412u); f_11976830();
  /* 11979412 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979415 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979418 jne 0x1197941b */
  if (!C.zf) goto L_1197941b;
  /* 1197941a int3  */
  x86_unimpl("int3 @ 0x1197941a");
L_1197941b:;
  /* 1197941b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197941d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197941f jne 0x119793e3 */
  if (!C.zf) goto L_119793e3;
  /* 11979421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979424 push eax */
  push32((uint32_t)(EAX));
  /* 11979425 call 0x11979470 */
  push32(0x1197942au); f_11979470();
  /* 1197942a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197942d:;
  /* 1197942d jmp 0x11979208 */
  goto L_11979208;
L_11979432:;
  /* 11979432 push 9 */
  push32((uint32_t)(0x9u));
  /* 11979434 call 0x1197b210 */
  push32(0x11979439u); f_1197b210();
  /* 11979439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197943c:;
  /* 1197943c push 0x1199f678 */
  push32((uint32_t)(0x1199f678u));
  /* 11979441 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 11979446 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197944a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197944c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197944e call 0x11976830 */
  push32(0x11979453u); f_11976830();
  /* 11979453 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979456 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979459 jne 0x1197945c */
  if (!C.zf) goto L_1197945c;
  /* 1197945b int3  */
  x86_unimpl("int3 @ 0x1197945b");
L_1197945c:;
  /* 1197945c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197945e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979460 jne 0x1197943c */
  if (!C.zf) goto L_1197943c;
  /* 11979462 pop edi */
  EDI = (pop32());
  /* 11979463 pop esi */
  ESI = (pop32());
  /* 11979464 pop ebx */
  EBX = (pop32());
  /* 11979465 mov esp, ebp */
  ESP = (EBP);
  /* 11979467 pop ebp */
  EBP = (pop32());
  /* 11979468 ret  */
  ESPCHK(0x119791b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009470 @ 0x11979470 (276 bytes, 89 insns) */
void f_11979470(void) {
  FTRACE(0x11979470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979470 push ebp */
  push32((uint32_t)(EBP));
  /* 11979471 mov ebp, esp */
  EBP = (ESP);
  /* 11979473 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979476 push ebx */
  push32((uint32_t)(EBX));
  /* 11979477 push esi */
  push32((uint32_t)(ESI));
  /* 11979478 push edi */
  push32((uint32_t)(EDI));
  /* 11979479 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11979480 jmp 0x1197948b */
  goto L_1197948b;
L_11979482:;
  /* 11979482 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11979485 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979488 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1197948b:;
  /* 1197948b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197948e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979492 jge 0x1197949f */
  if ((C.sf==C.of)) goto L_1197949f;
  /* 11979494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979497 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197949a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1197949d jmp 0x119794a6 */
  goto L_119794a6;
L_1197949f:;
  /* 1197949f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_119794a6:;
  /* 119794a6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119794a9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119794ac jge 0x1197954c */
  if ((C.sf==C.of)) goto L_1197954c;
  /* 119794b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119794b5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119794b8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 119794bb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 119794be cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119794c5 jle 0x119794e3 */
  if ((C.zf||C.sf!=C.of)) goto L_119794e3;
  /* 119794c7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 119794cc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 119794cf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119794d5 push ecx */
  push32((uint32_t)(ECX));
  /* 119794d6 call 0x1197d780 */
  push32(0x119794dbu); f_1197d780();
  /* 119794db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119794de mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 119794e1 jmp 0x11979500 */
  goto L_11979500;
L_119794e3:;
  /* 119794e3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119794e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119794ec mov eax, dword ptr [0x119a1c98] */
  EAX = (r32((uint32_t)(0x119a1c98)));
  /* 119794f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119794f3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119794f7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 119794fd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11979500:;
  /* 11979500 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979504 je 0x11979514 */
  if (C.zf) goto L_11979514;
  /* 11979506 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11979509 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197950f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11979512 jmp 0x1197951b */
  goto L_1197951b;
L_11979514:;
  /* 11979514 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1197951b:;
  /* 1197951b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1197951e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11979521 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11979525 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11979528 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197952e push edx */
  push32((uint32_t)(EDX));
  /* 1197952f push 0x1199f76c */
  push32((uint32_t)(0x1199f76cu));
  /* 11979534 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11979537 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197953a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1197953e push ecx */
  push32((uint32_t)(ECX));
  /* 1197953f call 0x1197d680 */
  push32(0x11979544u); f_1197d680();
  /* 11979544 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979547 jmp 0x11979482 */
  goto L_11979482;
L_1197954c:;
  /* 1197954c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1197954f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11979554:;
  /* 11979554 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11979557 push eax */
  push32((uint32_t)(EAX));
  /* 11979558 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1197955b push ecx */
  push32((uint32_t)(ECX));
  /* 1197955c push 0x1199f75c */
  push32((uint32_t)(0x1199f75cu));
  /* 11979561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979563 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979567 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979569 call 0x11976830 */
  push32(0x1197956eu); f_11976830();
  /* 1197956e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979571 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979574 jne 0x11979577 */
  if (!C.zf) goto L_11979577;
  /* 11979576 int3  */
  x86_unimpl("int3 @ 0x11979576");
L_11979577:;
  /* 11979577 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197957b jne 0x11979554 */
  if (!C.zf) goto L_11979554;
  /* 1197957d pop edi */
  EDI = (pop32());
  /* 1197957e pop esi */
  ESI = (pop32());
  /* 1197957f pop ebx */
  EBX = (pop32());
  /* 11979580 mov esp, ebp */
  ESP = (EBP);
  /* 11979582 pop ebp */
  EBP = (pop32());
  /* 11979583 ret  */
  ESPCHK(0x11979470u, _esp0);
  ESP += 4; return;
}

/* FUN_10009590 @ 0x11979590 (116 bytes, 46 insns) */
void f_11979590(void) {
  FTRACE(0x11979590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979590 push ebp */
  push32((uint32_t)(EBP));
  /* 11979591 mov ebp, esp */
  EBP = (ESP);
  /* 11979593 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979596 push ebx */
  push32((uint32_t)(EBX));
  /* 11979597 push esi */
  push32((uint32_t)(ESI));
  /* 11979598 push edi */
  push32((uint32_t)(EDI));
  /* 11979599 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1197959c push eax */
  push32((uint32_t)(EAX));
  /* 1197959d call 0x11978f10 */
  push32(0x119795a2u); f_11978f10();
  /* 119795a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119795a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119795a9 jne 0x119795c4 */
  if (!C.zf) goto L_119795c4;
  /* 119795ab cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119795af jne 0x119795c4 */
  if (!C.zf) goto L_119795c4;
  /* 119795b1 mov ecx, dword ptr [0x119a1a84] */
  ECX = (r32((uint32_t)(0x119a1a84)));
  /* 119795b7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 119795ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119795bc je 0x119795fb */
  if (C.zf) goto L_119795fb;
  /* 119795be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119795c2 je 0x119795fb */
  if (C.zf) goto L_119795fb;
L_119795c4:;
  /* 119795c4 push 0x1199f774 */
  push32((uint32_t)(0x1199f774u));
  /* 119795c9 push 0x1199f140 */
  push32((uint32_t)(0x1199f140u));
  /* 119795ce push 0 */
  push32((uint32_t)(0x0u));
  /* 119795d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119795d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119795d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119795d6 call 0x11976830 */
  push32(0x119795dbu); f_11976830();
  /* 119795db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119795de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119795e1 jne 0x119795e4 */
  if (!C.zf) goto L_119795e4;
  /* 119795e3 int3  */
  x86_unimpl("int3 @ 0x119795e3");
L_119795e4:;
  /* 119795e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119795e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119795e8 jne 0x119795c4 */
  if (!C.zf) goto L_119795c4;
  /* 119795ea push 0 */
  push32((uint32_t)(0x0u));
  /* 119795ec call 0x119791b0 */
  push32(0x119795f1u); f_119791b0();
  /* 119795f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119795f4 mov eax, 1 */
  EAX = (0x1u);
  /* 119795f9 jmp 0x119795fd */
  goto L_119795fd;
L_119795fb:;
  /* 119795fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119795fd:;
  /* 119795fd pop edi */
  EDI = (pop32());
  /* 119795fe pop esi */
  ESI = (pop32());
  /* 119795ff pop ebx */
  EBX = (pop32());
  /* 11979600 mov esp, ebp */
  ESP = (EBP);
  /* 11979602 pop ebp */
  EBP = (pop32());
  /* 11979603 ret  */
  ESPCHK(0x11979590u, _esp0);
  ESP += 4; return;
}

/* FUN_10009610 @ 0x11979610 (197 bytes, 79 insns) */
void f_11979610(void) {
  FTRACE(0x11979610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979610 push ebp */
  push32((uint32_t)(EBP));
  /* 11979611 mov ebp, esp */
  EBP = (ESP);
  /* 11979613 push ecx */
  push32((uint32_t)(ECX));
  /* 11979614 push ebx */
  push32((uint32_t)(EBX));
  /* 11979615 push esi */
  push32((uint32_t)(ESI));
  /* 11979616 push edi */
  push32((uint32_t)(EDI));
  /* 11979617 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197961b jne 0x11979622 */
  if (!C.zf) goto L_11979622;
  /* 1197961d jmp 0x119796ce */
  goto L_119796ce;
L_11979622:;
  /* 11979622 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11979629 jmp 0x11979634 */
  goto L_11979634;
L_1197962b:;
  /* 1197962b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197962e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979631 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11979634:;
  /* 11979634 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979638 jge 0x1197967e */
  if ((C.sf==C.of)) goto L_1197967e;
L_1197963a:;
  /* 1197963a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197963d mov edx, dword ptr [ecx*4 + 0x119a1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1a94)));
  /* 11979644 push edx */
  push32((uint32_t)(EDX));
  /* 11979645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197964b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1197964f push edx */
  push32((uint32_t)(EDX));
  /* 11979650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979656 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1197965a push edx */
  push32((uint32_t)(EDX));
  /* 1197965b push 0x1199f7d0 */
  push32((uint32_t)(0x1199f7d0u));
  /* 11979660 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979666 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979668 call 0x11976830 */
  push32(0x1197966du); f_11976830();
  /* 1197966d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979670 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979673 jne 0x11979676 */
  if (!C.zf) goto L_11979676;
  /* 11979675 int3  */
  x86_unimpl("int3 @ 0x11979675");
L_11979676:;
  /* 11979676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197967a jne 0x1197963a */
  if (!C.zf) goto L_1197963a;
  /* 1197967c jmp 0x1197962b */
  goto L_1197962b;
L_1197967e:;
  /* 1197967e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11979681 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11979684 push edx */
  push32((uint32_t)(EDX));
  /* 11979685 push 0x1199f7ac */
  push32((uint32_t)(0x1199f7acu));
  /* 1197968a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197968c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197968e push 0 */
  push32((uint32_t)(0x0u));
  /* 11979690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979692 call 0x11976830 */
  push32(0x11979697u); f_11976830();
  /* 11979697 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197969a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197969d jne 0x119796a0 */
  if (!C.zf) goto L_119796a0;
  /* 1197969f int3  */
  x86_unimpl("int3 @ 0x1197969f");
L_119796a0:;
  /* 119796a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119796a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119796a4 jne 0x1197967e */
  if (!C.zf) goto L_1197967e;
L_119796a6:;
  /* 119796a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119796a9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 119796ac push edx */
  push32((uint32_t)(EDX));
  /* 119796ad push 0x1199f78c */
  push32((uint32_t)(0x1199f78cu));
  /* 119796b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119796b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119796b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119796b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119796ba call 0x11976830 */
  push32(0x119796bfu); f_11976830();
  /* 119796bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119796c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119796c5 jne 0x119796c8 */
  if (!C.zf) goto L_119796c8;
  /* 119796c7 int3  */
  x86_unimpl("int3 @ 0x119796c7");
L_119796c8:;
  /* 119796c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119796ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119796cc jne 0x119796a6 */
  if (!C.zf) goto L_119796a6;
L_119796ce:;
  /* 119796ce pop edi */
  EDI = (pop32());
  /* 119796cf pop esi */
  ESI = (pop32());
  /* 119796d0 pop ebx */
  EBX = (pop32());
  /* 119796d1 mov esp, ebp */
  ESP = (EBP);
  /* 119796d3 pop ebp */
  EBP = (pop32());
  /* 119796d4 ret  */
  ESPCHK(0x11979610u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e0 @ 0x119796e0 (329 bytes, 102 insns) */
void f_119796e0(void) {
  FTRACE(0x119796e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119796e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119796e1 mov ebp, esp */
  EBP = (ESP);
  /* 119796e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119796e6 cmp dword ptr [0x119a5390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119796ed jne 0x119796f4 */
  if (!C.zf) goto L_119796f4;
  /* 119796ef call 0x1197e020 */
  push32(0x119796f4u); f_1197e020();
L_119796f4:;
  /* 119796f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119796fb mov eax, dword ptr [0x119a3858] */
  EAX = (r32((uint32_t)(0x119a3858)));
  /* 11979700 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11979703:;
  /* 11979703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979706 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11979709 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197970b je 0x11979739 */
  if (C.zf) goto L_11979739;
  /* 1197970d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979710 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979713 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979716 je 0x11979721 */
  if (C.zf) goto L_11979721;
  /* 11979718 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197971b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197971e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11979721:;
  /* 11979721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979724 push eax */
  push32((uint32_t)(EAX));
  /* 11979725 call 0x1197a5a0 */
  push32(0x1197972au); f_1197a5a0();
  /* 1197972a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197972d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979730 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11979734 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11979737 jmp 0x11979703 */
  goto L_11979703;
L_11979739:;
  /* 11979739 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1197973b push 0x1199f7f0 */
  push32((uint32_t)(0x1199f7f0u));
  /* 11979740 push 2 */
  push32((uint32_t)(0x2u));
  /* 11979742 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979745 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1197974c push ecx */
  push32((uint32_t)(ECX));
  /* 1197974d call 0x11977770 */
  push32(0x11979752u); f_11977770();
  /* 11979752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979755 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11979758 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197975b mov dword ptr [0x119a388c], edx */
  w32((uint32_t)(0x119a388c), (EDX));
  /* 11979761 cmp dword ptr [0x119a388c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a388c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979768 jne 0x11979774 */
  if (!C.zf) goto L_11979774;
  /* 1197976a push 9 */
  push32((uint32_t)(0x9u));
  /* 1197976c call 0x119766e0 */
  push32(0x11979771u); f_119766e0();
  /* 11979771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11979774:;
  /* 11979774 mov eax, dword ptr [0x119a3858] */
  EAX = (r32((uint32_t)(0x119a3858)));
  /* 11979779 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197977c jmp 0x11979787 */
  goto L_11979787;
L_1197977e:;
  /* 1197977e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979781 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979784 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11979787:;
  /* 11979787 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197978a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1197978d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197978f je 0x119797f7 */
  if (C.zf) goto L_119797f7;
  /* 11979791 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979794 push ecx */
  push32((uint32_t)(ECX));
  /* 11979795 call 0x1197a5a0 */
  push32(0x1197979au); f_1197a5a0();
  /* 1197979a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197979d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119797a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119797a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119797a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119797a9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119797ac je 0x119797f5 */
  if (C.zf) goto L_119797f5;
  /* 119797ae push 0x79 */
  push32((uint32_t)(0x79u));
  /* 119797b0 push 0x1199f7f0 */
  push32((uint32_t)(0x1199f7f0u));
  /* 119797b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119797b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119797ba push ecx */
  push32((uint32_t)(ECX));
  /* 119797bb call 0x11977770 */
  push32(0x119797c0u); f_11977770();
  /* 119797c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119797c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119797c6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119797c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119797cb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119797ce jne 0x119797da */
  if (!C.zf) goto L_119797da;
  /* 119797d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 119797d2 call 0x119766e0 */
  push32(0x119797d7u); f_119766e0();
  /* 119797d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119797da:;
  /* 119797da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119797dd push ecx */
  push32((uint32_t)(ECX));
  /* 119797de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119797e1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119797e3 push eax */
  push32((uint32_t)(EAX));
  /* 119797e4 call 0x1197a720 */
  push32(0x119797e9u); f_1197a720();
  /* 119797e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119797ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119797ef add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119797f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119797f5:;
  /* 119797f5 jmp 0x1197977e */
  goto L_1197977e;
L_119797f7:;
  /* 119797f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119797f9 mov edx, dword ptr [0x119a3858] */
  EDX = (r32((uint32_t)(0x119a3858)));
  /* 119797ff push edx */
  push32((uint32_t)(EDX));
  /* 11979800 call 0x11978200 */
  push32(0x11979805u); f_11978200();
  /* 11979805 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979808 mov dword ptr [0x119a3858], 0 */
  w32((uint32_t)(0x119a3858), (0x0u));
  /* 11979812 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979815 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1197981b mov dword ptr [0x119a5380], 1 */
  w32((uint32_t)(0x119a5380), (0x1u));
  /* 11979825 mov esp, ebp */
  ESP = (EBP);
  /* 11979827 pop ebp */
  EBP = (pop32());
  /* 11979828 ret  */
  ESPCHK(0x119796e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x11979830 (216 bytes, 69 insns) */
void f_11979830(void) {
  FTRACE(0x11979830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979830 push ebp */
  push32((uint32_t)(EBP));
  /* 11979831 mov ebp, esp */
  EBP = (ESP);
  /* 11979833 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979836 cmp dword ptr [0x119a5390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197983d jne 0x11979844 */
  if (!C.zf) goto L_11979844;
  /* 1197983f call 0x1197e020 */
  push32(0x11979844u); f_1197e020();
L_11979844:;
  /* 11979844 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11979849 push 0x119a38c8 */
  push32((uint32_t)(0x119a38c8u));
  /* 1197984e push 0 */
  push32((uint32_t)(0x0u));
  /* 11979850 call dword ptr [0x119a63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b0))), 0x11979856u);
  /* 11979856 mov dword ptr [0x119a389c], 0x119a38c8 */
  w32((uint32_t)(0x119a389c), (0x119a38c8u));
  /* 11979860 mov eax, dword ptr [0x119a53ac] */
  EAX = (r32((uint32_t)(0x119a53ac)));
  /* 11979865 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979868 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197986a jne 0x11979877 */
  if (!C.zf) goto L_11979877;
  /* 1197986c mov edx, dword ptr [0x119a389c] */
  EDX = (r32((uint32_t)(0x119a389c)));
  /* 11979872 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11979875 jmp 0x1197987f */
  goto L_1197987f;
L_11979877:;
  /* 11979877 mov eax, dword ptr [0x119a53ac] */
  EAX = (r32((uint32_t)(0x119a53ac)));
  /* 1197987c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1197987f:;
  /* 1197987f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11979882 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11979885 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11979888 push edx */
  push32((uint32_t)(EDX));
  /* 11979889 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1197988c push eax */
  push32((uint32_t)(EAX));
  /* 1197988d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197988f push 0 */
  push32((uint32_t)(0x0u));
  /* 11979891 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979894 push ecx */
  push32((uint32_t)(ECX));
  /* 11979895 call 0x11979910 */
  push32(0x1197989au); f_11979910();
  /* 1197989a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197989d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 119798a2 push 0x1199f7fc */
  push32((uint32_t)(0x1199f7fcu));
  /* 119798a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119798a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119798ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119798af lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 119798b2 push ecx */
  push32((uint32_t)(ECX));
  /* 119798b3 call 0x11977770 */
  push32(0x119798b8u); f_11977770();
  /* 119798b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119798bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119798be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119798c2 jne 0x119798ce */
  if (!C.zf) goto L_119798ce;
  /* 119798c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 119798c6 call 0x119766e0 */
  push32(0x119798cbu); f_119766e0();
  /* 119798cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119798ce:;
  /* 119798ce lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 119798d1 push edx */
  push32((uint32_t)(EDX));
  /* 119798d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 119798d5 push eax */
  push32((uint32_t)(EAX));
  /* 119798d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119798d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119798dc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 119798df push eax */
  push32((uint32_t)(EAX));
  /* 119798e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119798e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119798e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119798e7 push edx */
  push32((uint32_t)(EDX));
  /* 119798e8 call 0x11979910 */
  push32(0x119798edu); f_11979910();
  /* 119798ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119798f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119798f3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119798f6 mov dword ptr [0x119a3880], eax */
  w32((uint32_t)(0x119a3880), (EAX));
  /* 119798fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119798fe mov dword ptr [0x119a3884], ecx */
  w32((uint32_t)(0x119a3884), (ECX));
  /* 11979904 mov esp, ebp */
  ESP = (EBP);
  /* 11979906 pop ebp */
  EBP = (pop32());
  /* 11979907 ret  */
  ESPCHK(0x11979830u, _esp0);
  ESP += 4; return;
}

/* FUN_10009910 @ 0x11979910 (1060 bytes, 360 insns) */
void f_11979910(void) {
  FTRACE(0x11979910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979910 push ebp */
  push32((uint32_t)(EBP));
  /* 11979911 mov ebp, esp */
  EBP = (ESP);
  /* 11979913 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979916 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979919 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1197991f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11979922 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11979928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197992b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197992e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979932 je 0x11979945 */
  if (C.zf) goto L_11979945;
  /* 11979934 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979937 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197993a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1197993c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197993f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979942 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11979945:;
  /* 11979945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979948 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1197994b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197994e jne 0x11979a1d */
  if (!C.zf) goto L_11979a1d;
L_11979954:;
  /* 11979954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979957 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197995a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197995d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979960 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979963 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979966 je 0x119799e2 */
  if (C.zf) goto L_119799e2;
  /* 11979968 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197996b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1197996e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979970 je 0x119799e2 */
  if (C.zf) goto L_119799e2;
  /* 11979972 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979975 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979977 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11979979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197997b mov al, byte ptr [edx + 0x119a50e1] */
  AL = (r8((uint32_t)(EDX + 0x119a50e1)));
  /* 11979981 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11979984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979986 je 0x119799b7 */
  if (C.zf) goto L_119799b7;
  /* 11979988 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1197998b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197998d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979990 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979993 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11979995 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979999 je 0x119799b7 */
  if (C.zf) goto L_119799b7;
  /* 1197999b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197999e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119799a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119799a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119799a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119799a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119799ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119799ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119799b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119799b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119799b7:;
  /* 119799b7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119799ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119799bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119799bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119799c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119799c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119799c8 je 0x119799dd */
  if (C.zf) goto L_119799dd;
  /* 119799ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119799cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119799d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119799d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119799d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119799d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119799da mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_119799dd:;
  /* 119799dd jmp 0x11979954 */
  goto L_11979954;
L_119799e2:;
  /* 119799e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119799e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119799e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119799ea mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119799ed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119799ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119799f3 je 0x11979a04 */
  if (C.zf) goto L_11979a04;
  /* 119799f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119799f8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 119799fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119799fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a01 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11979a04:;
  /* 11979a04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979a0a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979a0d jne 0x11979a18 */
  if (!C.zf) goto L_11979a18;
  /* 11979a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a15 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11979a18:;
  /* 11979a18 jmp 0x11979aec */
  goto L_11979aec;
L_11979a1d:;
  /* 11979a1d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979a20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11979a22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a25 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979a28 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11979a2a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979a2e je 0x11979a43 */
  if (C.zf) goto L_11979a43;
  /* 11979a30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979a33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11979a38 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11979a3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979a3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a40 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11979a43:;
  /* 11979a43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11979a48 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11979a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11979a54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979a57 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11979a5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979a5f mov dl, byte ptr [ecx + 0x119a50e1] */
  DL = (r8((uint32_t)(ECX + 0x119a50e1)));
  /* 11979a65 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11979a68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979a6a je 0x11979a9b */
  if (C.zf) goto L_11979a9b;
  /* 11979a6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11979a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979a77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11979a79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979a7d je 0x11979a92 */
  if (C.zf) goto L_11979a92;
  /* 11979a7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a85 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11979a87 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11979a89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979a8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a8f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11979a92:;
  /* 11979a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979a95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979a98 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11979a9b:;
  /* 11979a9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979a9e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11979aa4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979aa7 je 0x11979ac7 */
  if (C.zf) goto L_11979ac7;
  /* 11979aa9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979aac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11979ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979ab3 je 0x11979ac7 */
  if (C.zf) goto L_11979ac7;
  /* 11979ab5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979ab8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11979abe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979ac1 jne 0x11979a1d */
  if (!C.zf) goto L_11979a1d;
L_11979ac7:;
  /* 11979ac7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979aca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11979ad0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979ad2 jne 0x11979adf */
  if (!C.zf) goto L_11979adf;
  /* 11979ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979ad7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11979add jmp 0x11979aec */
  goto L_11979aec;
L_11979adf:;
  /* 11979adf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979ae3 je 0x11979aec */
  if (C.zf) goto L_11979aec;
  /* 11979ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979ae8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11979aec:;
  /* 11979aec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11979af3:;
  /* 11979af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979af6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11979af9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979afb je 0x11979b1e */
  if (C.zf) goto L_11979b1e;
L_11979afd:;
  /* 11979afd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11979b03 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979b06 je 0x11979b13 */
  if (C.zf) goto L_11979b13;
  /* 11979b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979b0e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979b11 jne 0x11979b1e */
  if (!C.zf) goto L_11979b1e;
L_11979b13:;
  /* 11979b13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979b19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11979b1c jmp 0x11979afd */
  goto L_11979afd;
L_11979b1e:;
  /* 11979b1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979b24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979b26 jne 0x11979b2d */
  if (!C.zf) goto L_11979b2d;
  /* 11979b28 jmp 0x11979d0b */
  goto L_11979d0b;
L_11979b2d:;
  /* 11979b2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979b31 je 0x11979b44 */
  if (C.zf) goto L_11979b44;
  /* 11979b33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979b39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11979b3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979b3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979b41 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11979b44:;
  /* 11979b44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11979b47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11979b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979b4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11979b4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11979b51:;
  /* 11979b51 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11979b58 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11979b5f:;
  /* 11979b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b62 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11979b65 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979b68 jne 0x11979b7e */
  if (!C.zf) goto L_11979b7e;
  /* 11979b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979b70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11979b73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979b76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979b79 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11979b7c jmp 0x11979b5f */
  goto L_11979b5f;
L_11979b7e:;
  /* 11979b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979b81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979b84 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979b87 jne 0x11979bda */
  if (!C.zf) goto L_11979bda;
  /* 11979b89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979b8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979b8e mov ecx, 2 */
  ECX = (0x2u);
  /* 11979b93 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11979b95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979b97 jne 0x11979bd2 */
  if (!C.zf) goto L_11979bd2;
  /* 11979b99 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979b9d je 0x11979bbf */
  if (C.zf) goto L_11979bbf;
  /* 11979b9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979ba2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11979ba6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979ba9 jne 0x11979bb6 */
  if (!C.zf) goto L_11979bb6;
  /* 11979bab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979bae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979bb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11979bb4 jmp 0x11979bbd */
  goto L_11979bbd;
L_11979bb6:;
  /* 11979bb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11979bbd:;
  /* 11979bbd jmp 0x11979bc6 */
  goto L_11979bc6;
L_11979bbf:;
  /* 11979bbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11979bc6:;
  /* 11979bc6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979bc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979bcc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11979bcf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11979bd2:;
  /* 11979bd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979bd5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11979bd7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11979bda:;
  /* 11979bda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979bdd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979be0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979be3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11979be6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979be8 je 0x11979c0e */
  if (C.zf) goto L_11979c0e;
  /* 11979bea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979bee je 0x11979bff */
  if (C.zf) goto L_11979bff;
  /* 11979bf0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979bf3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11979bf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979bf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979bfc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11979bff:;
  /* 11979bff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979c02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11979c04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979c07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979c0a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11979c0c jmp 0x11979bda */
  goto L_11979bda;
L_11979c0e:;
  /* 11979c0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11979c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979c16 je 0x11979c34 */
  if (C.zf) goto L_11979c34;
  /* 11979c18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979c1c jne 0x11979c39 */
  if (!C.zf) goto L_11979c39;
  /* 11979c1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c21 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11979c24 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979c27 je 0x11979c34 */
  if (C.zf) goto L_11979c34;
  /* 11979c29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11979c2f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979c32 jne 0x11979c39 */
  if (!C.zf) goto L_11979c39;
L_11979c34:;
  /* 11979c34 jmp 0x11979ce4 */
  goto L_11979ce4;
L_11979c39:;
  /* 11979c39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979c3d je 0x11979cd6 */
  if (C.zf) goto L_11979cd6;
  /* 11979c43 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979c47 je 0x11979c9d */
  if (C.zf) goto L_11979c9d;
  /* 11979c49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979c4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11979c50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11979c52 mov cl, byte ptr [eax + 0x119a50e1] */
  CL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 11979c58 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11979c5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979c5d je 0x11979c88 */
  if (C.zf) goto L_11979c88;
  /* 11979c5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c65 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11979c67 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11979c69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979c6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979c6f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11979c72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979c78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11979c7b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979c7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11979c80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979c83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979c86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11979c88:;
  /* 11979c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979c8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979c8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11979c90 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11979c92 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979c95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979c98 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11979c9b jmp 0x11979cc9 */
  goto L_11979cc9;
L_11979c9d:;
  /* 11979c9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979ca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979ca2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11979ca4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11979ca6 mov cl, byte ptr [eax + 0x119a50e1] */
  CL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 11979cac and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11979caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11979cb1 je 0x11979cc9 */
  if (C.zf) goto L_11979cc9;
  /* 11979cb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979cb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979cb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11979cbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979cbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11979cc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979cc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979cc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11979cc9:;
  /* 11979cc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979ccc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11979cce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979cd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979cd4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11979cd6:;
  /* 11979cd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979cd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11979cdf jmp 0x11979b51 */
  goto L_11979b51;
L_11979ce4:;
  /* 11979ce4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979ce8 je 0x11979cf9 */
  if (C.zf) goto L_11979cf9;
  /* 11979cea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979ced mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11979cf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11979cf3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979cf6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11979cf9:;
  /* 11979cf9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979cfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11979cfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979d01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11979d04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11979d06 jmp 0x11979af3 */
  goto L_11979af3;
L_11979d0b:;
  /* 11979d0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979d0f je 0x11979d23 */
  if (C.zf) goto L_11979d23;
  /* 11979d11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979d14 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11979d1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11979d1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979d20 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11979d23:;
  /* 11979d23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11979d26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11979d28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979d2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11979d2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11979d30 mov esp, ebp */
  ESP = (EBP);
  /* 11979d32 pop ebp */
  EBP = (pop32());
  /* 11979d33 ret  */
  ESPCHK(0x11979910u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d40 @ 0x11979d40 (537 bytes, 173 insns) */
void f_11979d40(void) {
  FTRACE(0x11979d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11979d41 mov ebp, esp */
  EBP = (ESP);
  /* 11979d43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979d46 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11979d4d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11979d54 cmp dword ptr [0x119a39cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979d5b jne 0x11979d9a */
  if (!C.zf) goto L_11979d9a;
  /* 11979d5d call dword ptr [0x119a6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6374))), 0x11979d63u);
  /* 11979d63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11979d66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979d6a je 0x11979d78 */
  if (C.zf) goto L_11979d78;
  /* 11979d6c mov dword ptr [0x119a39cc], 1 */
  w32((uint32_t)(0x119a39cc), (0x1u));
  /* 11979d76 jmp 0x11979d9a */
  goto L_11979d9a;
L_11979d78:;
  /* 11979d78 call dword ptr [0x119a636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a636c))), 0x11979d7eu);
  /* 11979d7e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11979d81 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979d85 je 0x11979d93 */
  if (C.zf) goto L_11979d93;
  /* 11979d87 mov dword ptr [0x119a39cc], 2 */
  w32((uint32_t)(0x119a39cc), (0x2u));
  /* 11979d91 jmp 0x11979d9a */
  goto L_11979d9a;
L_11979d93:;
  /* 11979d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979d95 jmp 0x11979f55 */
  goto L_11979f55;
L_11979d9a:;
  /* 11979d9a cmp dword ptr [0x119a39cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a39cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979da1 jne 0x11979e9e */
  if (!C.zf) goto L_11979e9e;
  /* 11979da7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979dab jne 0x11979dc3 */
  if (!C.zf) goto L_11979dc3;
  /* 11979dad call dword ptr [0x119a6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6374))), 0x11979db3u);
  /* 11979db3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11979db6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979dba jne 0x11979dc3 */
  if (!C.zf) goto L_11979dc3;
  /* 11979dbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979dbe jmp 0x11979f55 */
  goto L_11979f55;
L_11979dc3:;
  /* 11979dc3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11979dc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11979dc9:;
  /* 11979dc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979dcc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979dce mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11979dd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979dd3 je 0x11979df5 */
  if (C.zf) goto L_11979df5;
  /* 11979dd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979dd8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979ddb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11979dde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979de1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11979de3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11979de6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979de8 jne 0x11979df3 */
  if (!C.zf) goto L_11979df3;
  /* 11979dea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979ded add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979df0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11979df3:;
  /* 11979df3 jmp 0x11979dc9 */
  goto L_11979dc9;
L_11979df5:;
  /* 11979df5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979df8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979dfb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11979dfd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979e00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11979e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979e0e push edx */
  push32((uint32_t)(EDX));
  /* 11979e0f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11979e12 push eax */
  push32((uint32_t)(EAX));
  /* 11979e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e17 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11979e1du);
  /* 11979e1d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11979e20 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979e24 je 0x11979e44 */
  if (C.zf) goto L_11979e44;
  /* 11979e26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11979e28 push 0x1199f808 */
  push32((uint32_t)(0x1199f808u));
  /* 11979e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11979e2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979e32 push ecx */
  push32((uint32_t)(ECX));
  /* 11979e33 call 0x11977770 */
  push32(0x11979e38u); f_11977770();
  /* 11979e38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11979e3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979e42 jne 0x11979e55 */
  if (!C.zf) goto L_11979e55;
L_11979e44:;
  /* 11979e44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11979e47 push edx */
  push32((uint32_t)(EDX));
  /* 11979e48 call dword ptr [0x119a6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6380))), 0x11979e4eu);
  /* 11979e4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979e50 jmp 0x11979f55 */
  goto L_11979f55;
L_11979e55:;
  /* 11979e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979e5c push eax */
  push32((uint32_t)(EAX));
  /* 11979e5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979e60 push ecx */
  push32((uint32_t)(ECX));
  /* 11979e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979e64 push edx */
  push32((uint32_t)(EDX));
  /* 11979e65 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11979e68 push eax */
  push32((uint32_t)(EAX));
  /* 11979e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11979e6d call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11979e73u);
  /* 11979e73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979e75 jne 0x11979e8c */
  if (!C.zf) goto L_11979e8c;
  /* 11979e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11979e79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979e7c push ecx */
  push32((uint32_t)(ECX));
  /* 11979e7d call 0x11978200 */
  push32(0x11979e82u); f_11978200();
  /* 11979e82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979e85 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11979e8c:;
  /* 11979e8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11979e8f push edx */
  push32((uint32_t)(EDX));
  /* 11979e90 call dword ptr [0x119a6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6380))), 0x11979e96u);
  /* 11979e96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979e99 jmp 0x11979f55 */
  goto L_11979f55;
L_11979e9e:;
  /* 11979e9e cmp dword ptr [0x119a39cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a39cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979ea5 jne 0x11979f53 */
  if (!C.zf) goto L_11979f53;
  /* 11979eab cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979eaf jne 0x11979ec7 */
  if (!C.zf) goto L_11979ec7;
  /* 11979eb1 call dword ptr [0x119a636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a636c))), 0x11979eb7u);
  /* 11979eb7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11979eba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979ebe jne 0x11979ec7 */
  if (!C.zf) goto L_11979ec7;
  /* 11979ec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979ec2 jmp 0x11979f55 */
  goto L_11979f55;
L_11979ec7:;
  /* 11979ec7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979eca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11979ecd:;
  /* 11979ecd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979ed0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11979ed3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979ed5 je 0x11979ef5 */
  if (C.zf) goto L_11979ef5;
  /* 11979ed7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979eda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979edd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11979ee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979ee3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11979ee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11979ee8 jne 0x11979ef3 */
  if (!C.zf) goto L_11979ef3;
  /* 11979eea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979eed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979ef0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11979ef3:;
  /* 11979ef3 jmp 0x11979ecd */
  goto L_11979ecd;
L_11979ef5:;
  /* 11979ef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979ef8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979efb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979efe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11979f01 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11979f06 push 0x1199f808 */
  push32((uint32_t)(0x1199f808u));
  /* 11979f0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11979f0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979f10 push edx */
  push32((uint32_t)(EDX));
  /* 11979f11 call 0x11977770 */
  push32(0x11979f16u); f_11977770();
  /* 11979f16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979f19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11979f1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979f20 jne 0x11979f30 */
  if (!C.zf) goto L_11979f30;
  /* 11979f22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979f25 push eax */
  push32((uint32_t)(EAX));
  /* 11979f26 call dword ptr [0x119a6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6378))), 0x11979f2cu);
  /* 11979f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979f2e jmp 0x11979f55 */
  goto L_11979f55;
L_11979f30:;
  /* 11979f30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11979f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11979f34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979f37 push edx */
  push32((uint32_t)(EDX));
  /* 11979f38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979f3b push eax */
  push32((uint32_t)(EAX));
  /* 11979f3c call 0x1197e050 */
  push32(0x11979f41u); f_1197e050();
  /* 11979f41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11979f44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11979f47 push ecx */
  push32((uint32_t)(ECX));
  /* 11979f48 call dword ptr [0x119a6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6378))), 0x11979f4eu);
  /* 11979f4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11979f51 jmp 0x11979f55 */
  goto L_11979f55;
L_11979f53:;
  /* 11979f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11979f55:;
  /* 11979f55 mov esp, ebp */
  ESP = (EBP);
  /* 11979f57 pop ebp */
  EBP = (pop32());
  /* 11979f58 ret  */
  ESPCHK(0x11979d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f60 @ 0x11979f60 (77 bytes, 25 insns) */
void f_11979f60(void) {
  FTRACE(0x11979f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11979f61 mov ebp, esp */
  EBP = (ESP);
  /* 11979f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979f65 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11979f6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979f6c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979f70 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11979f73 push eax */
  push32((uint32_t)(EAX));
  /* 11979f74 call dword ptr [0x119a6360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6360))), 0x11979f7au);
  /* 11979f7a mov dword ptr [0x119a520c], eax */
  w32((uint32_t)(0x119a520c), (EAX));
  /* 11979f7f cmp dword ptr [0x119a520c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a520c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979f86 jne 0x11979f8c */
  if (!C.zf) goto L_11979f8c;
  /* 11979f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979f8a jmp 0x11979fab */
  goto L_11979fab;
L_11979f8c:;
  /* 11979f8c call 0x1197ba10 */
  push32(0x11979f91u); f_1197ba10();
  /* 11979f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11979f93 jne 0x11979fa6 */
  if (!C.zf) goto L_11979fa6;
  /* 11979f95 mov ecx, dword ptr [0x119a520c] */
  ECX = (r32((uint32_t)(0x119a520c)));
  /* 11979f9b push ecx */
  push32((uint32_t)(ECX));
  /* 11979f9c call dword ptr [0x119a6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6364))), 0x11979fa2u);
  /* 11979fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11979fa4 jmp 0x11979fab */
  goto L_11979fab;
L_11979fa6:;
  /* 11979fa6 mov eax, 1 */
  EAX = (0x1u);
L_11979fab:;
  /* 11979fab pop ebp */
  EBP = (pop32());
  /* 11979fac ret  */
  ESPCHK(0x11979f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x11979fb0 (156 bytes, 48 insns) */
void f_11979fb0(void) {
  FTRACE(0x11979fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11979fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11979fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11979fb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11979fb6 mov eax, dword ptr [0x119a5208] */
  EAX = (r32((uint32_t)(0x119a5208)));
  /* 11979fbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11979fbe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11979fc5 jmp 0x11979fd0 */
  goto L_11979fd0;
L_11979fc7:;
  /* 11979fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979fca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11979fcd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11979fd0:;
  /* 11979fd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11979fd3 cmp edx, dword ptr [0x119a5204] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a5204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11979fd9 jge 0x1197a026 */
  if ((C.sf==C.of)) goto L_1197a026;
  /* 11979fdb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11979fe0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11979fe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979fe8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11979feb push ecx */
  push32((uint32_t)(ECX));
  /* 11979fec call dword ptr [0x119a6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6358))), 0x11979ff2u);
  /* 11979ff2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11979ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11979ff9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11979ffc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11979fff push eax */
  push32((uint32_t)(EAX));
  /* 1197a000 call dword ptr [0x119a6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6358))), 0x1197a006u);
  /* 1197a006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a009 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1197a00c push edx */
  push32((uint32_t)(EDX));
  /* 1197a00d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a00f mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197a014 push eax */
  push32((uint32_t)(EAX));
  /* 1197a015 call dword ptr [0x119a6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6368))), 0x1197a01bu);
  /* 1197a01b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a01e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a021 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197a024 jmp 0x11979fc7 */
  goto L_11979fc7;
L_1197a026:;
  /* 1197a026 mov edx, dword ptr [0x119a5208] */
  EDX = (r32((uint32_t)(0x119a5208)));
  /* 1197a02c push edx */
  push32((uint32_t)(EDX));
  /* 1197a02d push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a02f mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197a034 push eax */
  push32((uint32_t)(EAX));
  /* 1197a035 call dword ptr [0x119a6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6368))), 0x1197a03bu);
  /* 1197a03b mov ecx, dword ptr [0x119a520c] */
  ECX = (r32((uint32_t)(0x119a520c)));
  /* 1197a041 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a042 call dword ptr [0x119a6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6364))), 0x1197a048u);
  /* 1197a048 mov esp, ebp */
  ESP = (EBP);
  /* 1197a04a pop ebp */
  EBP = (pop32());
  /* 1197a04b ret  */
  ESPCHK(0x11979fb0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1197a050 (73 bytes, 19 insns) */
void f_1197a050(void) {
  FTRACE(0x1197a050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a050 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a051 mov ebp, esp */
  EBP = (ESP);
  /* 1197a053 cmp dword ptr [0x119a3860], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3860))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a05a je 0x1197a06e */
  if (C.zf) goto L_1197a06e;
  /* 1197a05c cmp dword ptr [0x119a3860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a063 jne 0x1197a097 */
  if (!C.zf) goto L_1197a097;
  /* 1197a065 cmp dword ptr [0x119a3864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a06c jne 0x1197a097 */
  if (!C.zf) goto L_1197a097;
L_1197a06e:;
  /* 1197a06e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1197a073 call 0x1197a0a0 */
  push32(0x1197a078u); f_1197a0a0();
  /* 1197a078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a07b cmp dword ptr [0x119a39d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a082 je 0x1197a08a */
  if (C.zf) goto L_1197a08a;
  /* 1197a084 call dword ptr [0x119a39d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a39d0))), 0x1197a08au);
L_1197a08a:;
  /* 1197a08a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1197a08f call 0x1197a0a0 */
  push32(0x1197a094u); f_1197a0a0();
  /* 1197a094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197a097:;
  /* 1197a097 pop ebp */
  EBP = (pop32());
  /* 1197a098 ret  */
  ESPCHK(0x1197a050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a0 @ 0x1197a0a0 (447 bytes, 131 insns) */
void f_1197a0a0(void) {
  FTRACE(0x1197a0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1197a0a3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1197a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1197a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1197a0ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1197a0b3 jmp 0x1197a0be */
  goto L_1197a0be;
L_1197a0b5:;
  /* 1197a0b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a0b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a0bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1197a0be:;
  /* 1197a0be cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a0c2 jae 0x1197a0d7 */
  if (!C.cf) goto L_1197a0d7;
  /* 1197a0c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a0c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a0ca cmp edx, dword ptr [ecx*8 + 0x119a1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x119a1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a0d1 jne 0x1197a0d5 */
  if (!C.zf) goto L_1197a0d5;
  /* 1197a0d3 jmp 0x1197a0d7 */
  goto L_1197a0d7;
L_1197a0d5:;
  /* 1197a0d5 jmp 0x1197a0b5 */
  goto L_1197a0b5;
L_1197a0d7:;
  /* 1197a0d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a0da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a0dd cmp ecx, dword ptr [eax*8 + 0x119a1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x119a1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a0e4 jne 0x1197a258 */
  if (!C.zf) goto L_1197a258;
  /* 1197a0ea cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a0f1 je 0x1197a114 */
  if (C.zf) goto L_1197a114;
  /* 1197a0f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a0f6 mov eax, dword ptr [edx*8 + 0x119a1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x119a1ab4)));
  /* 1197a0fd push eax */
  push32((uint32_t)(EAX));
  /* 1197a0fe push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a100 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a102 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a104 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197a106 call 0x11976830 */
  push32(0x1197a10bu); f_11976830();
  /* 1197a10b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a10e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a111 jne 0x1197a114 */
  if (!C.zf) goto L_1197a114;
  /* 1197a113 int3  */
  x86_unimpl("int3 @ 0x1197a113");
L_1197a114:;
  /* 1197a114 cmp dword ptr [0x119a3860], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3860))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a11b je 0x1197a12f */
  if (C.zf) goto L_1197a12f;
  /* 1197a11d cmp dword ptr [0x119a3860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a124 jne 0x1197a168 */
  if (!C.zf) goto L_1197a168;
  /* 1197a126 cmp dword ptr [0x119a3864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a12d jne 0x1197a168 */
  if (!C.zf) goto L_1197a168;
L_1197a12f:;
  /* 1197a12f push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a131 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1197a134 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a135 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a138 mov eax, dword ptr [edx*8 + 0x119a1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x119a1ab4)));
  /* 1197a13f push eax */
  push32((uint32_t)(EAX));
  /* 1197a140 call 0x1197a5a0 */
  push32(0x1197a145u); f_1197a5a0();
  /* 1197a145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a148 push eax */
  push32((uint32_t)(EAX));
  /* 1197a149 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a14c mov edx, dword ptr [ecx*8 + 0x119a1ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x119a1ab4)));
  /* 1197a153 push edx */
  push32((uint32_t)(EDX));
  /* 1197a154 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1197a156 call dword ptr [0x119a6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6394))), 0x1197a15cu);
  /* 1197a15c push eax */
  push32((uint32_t)(EAX));
  /* 1197a15d call dword ptr [0x119a6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6398))), 0x1197a163u);
  /* 1197a163 jmp 0x1197a258 */
  goto L_1197a258;
L_1197a168:;
  /* 1197a168 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a16f je 0x1197a258 */
  if (C.zf) goto L_1197a258;
  /* 1197a175 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1197a17a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1197a180 push eax */
  push32((uint32_t)(EAX));
  /* 1197a181 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a183 call dword ptr [0x119a63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b0))), 0x1197a189u);
  /* 1197a189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197a18b jne 0x1197a1a1 */
  if (!C.zf) goto L_1197a1a1;
  /* 1197a18d push 0x1199f070 */
  push32((uint32_t)(0x1199f070u));
  /* 1197a192 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1197a198 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a199 call 0x1197a720 */
  push32(0x1197a19eu); f_1197a720();
  /* 1197a19e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197a1a1:;
  /* 1197a1a1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1197a1a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1197a1aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a1ad push eax */
  push32((uint32_t)(EAX));
  /* 1197a1ae call 0x1197a5a0 */
  push32(0x1197a1b3u); f_1197a5a0();
  /* 1197a1b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a1b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a1b9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a1bc jbe 0x1197a1ea */
  if ((C.cf||C.zf)) goto L_1197a1ea;
  /* 1197a1be lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1197a1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a1c5 call 0x1197a5a0 */
  push32(0x1197a1cau); f_1197a5a0();
  /* 1197a1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a1cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a1d0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1197a1d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197a1d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 1197a1d9 push 0x1199f06c */
  push32((uint32_t)(0x1199f06cu));
  /* 1197a1de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a1e2 call 0x1197af90 */
  push32(0x1197a1e7u); f_1197af90();
  /* 1197a1e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197a1ea:;
  /* 1197a1ea push 0x1199fac4 */
  push32((uint32_t)(0x1199fac4u));
  /* 1197a1ef lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1197a1f5 push edx */
  push32((uint32_t)(EDX));
  /* 1197a1f6 call 0x1197a720 */
  push32(0x1197a1fbu); f_1197a720();
  /* 1197a1fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a1fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a201 push eax */
  push32((uint32_t)(EAX));
  /* 1197a202 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1197a208 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a209 call 0x1197a730 */
  push32(0x1197a20eu); f_1197a730();
  /* 1197a20e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a211 push 0x1199efe4 */
  push32((uint32_t)(0x1199efe4u));
  /* 1197a216 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1197a21c push edx */
  push32((uint32_t)(EDX));
  /* 1197a21d call 0x1197a730 */
  push32(0x1197a222u); f_1197a730();
  /* 1197a222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a225 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a228 mov ecx, dword ptr [eax*8 + 0x119a1ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x119a1ab4)));
  /* 1197a22f push ecx */
  push32((uint32_t)(ECX));
  /* 1197a230 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1197a236 push edx */
  push32((uint32_t)(EDX));
  /* 1197a237 call 0x1197a730 */
  push32(0x1197a23cu); f_1197a730();
  /* 1197a23c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a23f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1197a244 push 0x1199fa9c */
  push32((uint32_t)(0x1199fa9cu));
  /* 1197a249 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1197a24f push eax */
  push32((uint32_t)(EAX));
  /* 1197a250 call 0x1197aed0 */
  push32(0x1197a255u); f_1197aed0();
  /* 1197a255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197a258:;
  /* 1197a258 pop edi */
  EDI = (pop32());
  /* 1197a259 pop esi */
  ESI = (pop32());
  /* 1197a25a pop ebx */
  EBX = (pop32());
  /* 1197a25b mov esp, ebp */
  ESP = (EBP);
  /* 1197a25d pop ebp */
  EBP = (pop32());
  /* 1197a25e ret  */
  ESPCHK(0x1197a0a0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1197a260 (80 bytes, 27 insns) */
void f_1197a260(void) {
  FTRACE(0x1197a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a260 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a261 mov ebp, esp */
  EBP = (ESP);
  /* 1197a263 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197a26b jmp 0x1197a276 */
  goto L_1197a276;
L_1197a26d:;
  /* 1197a26d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197a276:;
  /* 1197a276 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a27a jae 0x1197a28f */
  if (!C.cf) goto L_1197a28f;
  /* 1197a27c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a27f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a282 cmp edx, dword ptr [ecx*8 + 0x119a1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x119a1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a289 jne 0x1197a28d */
  if (!C.zf) goto L_1197a28d;
  /* 1197a28b jmp 0x1197a28f */
  goto L_1197a28f;
L_1197a28d:;
  /* 1197a28d jmp 0x1197a26d */
  goto L_1197a26d;
L_1197a28f:;
  /* 1197a28f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a295 cmp ecx, dword ptr [eax*8 + 0x119a1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x119a1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a29c jne 0x1197a2aa */
  if (!C.zf) goto L_1197a2aa;
  /* 1197a29e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a2a1 mov eax, dword ptr [edx*8 + 0x119a1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x119a1ab4)));
  /* 1197a2a8 jmp 0x1197a2ac */
  goto L_1197a2ac;
L_1197a2aa:;
  /* 1197a2aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197a2ac:;
  /* 1197a2ac mov esp, ebp */
  ESP = (EBP);
  /* 1197a2ae pop ebp */
  EBP = (pop32());
  /* 1197a2af ret  */
  ESPCHK(0x1197a260u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1197a2b0 (66 bytes, 28 insns) */
void f_1197a2b0(void) {
  FTRACE(0x1197a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1197a2b3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a2b7 jne 0x1197a2d7 */
  if (!C.zf) goto L_1197a2d7;
  /* 1197a2b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a2bd jge 0x1197a2d7 */
  if ((C.sf==C.of)) goto L_1197a2d7;
  /* 1197a2bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1197a2c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a2c4 push eax */
  push32((uint32_t)(EAX));
  /* 1197a2c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a2c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a2cc push edx */
  push32((uint32_t)(EDX));
  /* 1197a2cd call 0x1197a300 */
  push32(0x1197a2d2u); f_1197a300();
  /* 1197a2d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a2d5 jmp 0x1197a2ed */
  goto L_1197a2ed;
L_1197a2d7:;
  /* 1197a2d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a2d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a2dc push eax */
  push32((uint32_t)(EAX));
  /* 1197a2dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a2e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a2e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a2e4 push edx */
  push32((uint32_t)(EDX));
  /* 1197a2e5 call 0x1197a300 */
  push32(0x1197a2eau); f_1197a300();
  /* 1197a2ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197a2ed:;
  /* 1197a2ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a2f0 pop ebp */
  EBP = (pop32());
  /* 1197a2f1 ret  */
  ESPCHK(0x1197a2b0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1197a300 (194 bytes, 71 insns) */
void f_1197a300(void) {
  FTRACE(0x1197a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a300 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a301 mov ebp, esp */
  EBP = (ESP);
  /* 1197a303 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a306 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197a30c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a310 je 0x1197a329 */
  if (C.zf) goto L_1197a329;
  /* 1197a312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a315 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1197a318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a31b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a31e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197a321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a324 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197a326 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1197a329:;
  /* 1197a329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a32c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1197a32f:;
  /* 1197a32f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a332 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a334 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197a337 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1197a33a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a33d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a33f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197a342 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1197a345 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a349 jbe 0x1197a361 */
  if ((C.cf||C.zf)) goto L_1197a361;
  /* 1197a34b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a34e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a354 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1197a356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a359 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a35c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197a35f jmp 0x1197a375 */
  goto L_1197a375;
L_1197a361:;
  /* 1197a361 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a364 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a367 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a36a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1197a36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a36f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a372 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1197a375:;
  /* 1197a375 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a379 ja 0x1197a32f */
  if ((!C.cf&&!C.zf)) goto L_1197a32f;
  /* 1197a37b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a37e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1197a381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a384 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a387 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197a38a:;
  /* 1197a38a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a38d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197a38f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1197a392 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a395 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a398 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197a39a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1197a39c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a39f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1197a3a2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1197a3a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a3a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a3aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197a3ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a3b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a3b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197a3b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a3b9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a3bc jb 0x1197a38a */
  if (C.cf) goto L_1197a38a;
  /* 1197a3be mov esp, ebp */
  ESP = (EBP);
  /* 1197a3c0 pop ebp */
  EBP = (pop32());
  /* 1197a3c1 ret  */
  ESPCHK(0x1197a300u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1197a3d0 (63 bytes, 24 insns) */
void f_1197a3d0(void) {
  FTRACE(0x1197a3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1197a3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a3d4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a3d8 jne 0x1197a3e9 */
  if (!C.zf) goto L_1197a3e9;
  /* 1197a3da cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a3de jge 0x1197a3e9 */
  if ((C.sf==C.of)) goto L_1197a3e9;
  /* 1197a3e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1197a3e7 jmp 0x1197a3f0 */
  goto L_1197a3f0;
L_1197a3e9:;
  /* 1197a3e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1197a3f0:;
  /* 1197a3f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a3f3 push eax */
  push32((uint32_t)(EAX));
  /* 1197a3f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a3f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a3fb push edx */
  push32((uint32_t)(EDX));
  /* 1197a3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a3ff push eax */
  push32((uint32_t)(EAX));
  /* 1197a400 call 0x1197a300 */
  push32(0x1197a405u); f_1197a300();
  /* 1197a405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a40b mov esp, ebp */
  ESP = (EBP);
  /* 1197a40d pop ebp */
  EBP = (pop32());
  /* 1197a40e ret  */
  ESPCHK(0x1197a3d0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1197a410 (30 bytes, 14 insns) */
void f_1197a410(void) {
  FTRACE(0x1197a410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a410 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a411 mov ebp, esp */
  EBP = (ESP);
  /* 1197a413 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a415 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a418 push eax */
  push32((uint32_t)(EAX));
  /* 1197a419 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a41c push ecx */
  push32((uint32_t)(ECX));
  /* 1197a41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a420 push edx */
  push32((uint32_t)(EDX));
  /* 1197a421 call 0x1197a300 */
  push32(0x1197a426u); f_1197a300();
  /* 1197a426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a42c pop ebp */
  EBP = (pop32());
  /* 1197a42d ret  */
  ESPCHK(0x1197a410u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1197a430 (72 bytes, 28 insns) */
void f_1197a430(void) {
  FTRACE(0x1197a430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a430 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a431 mov ebp, esp */
  EBP = (ESP);
  /* 1197a433 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a434 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a438 jne 0x1197a451 */
  if (!C.zf) goto L_1197a451;
  /* 1197a43a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a43e jg 0x1197a451 */
  if ((!C.zf&&C.sf==C.of)) goto L_1197a451;
  /* 1197a440 jl 0x1197a448 */
  if ((C.sf!=C.of)) goto L_1197a448;
  /* 1197a442 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a446 jae 0x1197a451 */
  if (!C.cf) goto L_1197a451;
L_1197a448:;
  /* 1197a448 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1197a44f jmp 0x1197a458 */
  goto L_1197a458;
L_1197a451:;
  /* 1197a451 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1197a458:;
  /* 1197a458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a45b push eax */
  push32((uint32_t)(EAX));
  /* 1197a45c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197a45f push ecx */
  push32((uint32_t)(ECX));
  /* 1197a460 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a463 push edx */
  push32((uint32_t)(EDX));
  /* 1197a464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a467 push eax */
  push32((uint32_t)(EAX));
  /* 1197a468 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a46b push ecx */
  push32((uint32_t)(ECX));
  /* 1197a46c call 0x1197a480 */
  push32(0x1197a471u); f_1197a480();
  /* 1197a471 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a474 mov esp, ebp */
  ESP = (EBP);
  /* 1197a476 pop ebp */
  EBP = (pop32());
  /* 1197a477 ret  */
  ESPCHK(0x1197a430u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1197a480 (242 bytes, 91 insns) */
void f_1197a480(void) {
  FTRACE(0x1197a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a480 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a481 mov ebp, esp */
  EBP = (ESP);
  /* 1197a483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a486 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197a48c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a490 je 0x1197a4b4 */
  if (C.zf) goto L_1197a4b4;
  /* 1197a492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a495 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1197a498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a49b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a49e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197a4a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a4a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197a4a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a4a9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a4ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197a4ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1197a4b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1197a4b4:;
  /* 1197a4b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a4b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1197a4ba:;
  /* 1197a4ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197a4bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197a4bf push ecx */
  push32((uint32_t)(ECX));
  /* 1197a4c0 push eax */
  push32((uint32_t)(EAX));
  /* 1197a4c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a4c4 push edx */
  push32((uint32_t)(EDX));
  /* 1197a4c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1197a4c9 call 0x1197e400 */
  push32(0x1197a4ceu); f_1197e400();
  /* 1197a4ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197a4d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197a4d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a4d6 push edx */
  push32((uint32_t)(EDX));
  /* 1197a4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a4d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a4db push eax */
  push32((uint32_t)(EAX));
  /* 1197a4dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a4df push ecx */
  push32((uint32_t)(ECX));
  /* 1197a4e0 call 0x1197e390 */
  push32(0x1197a4e5u); f_1197e390();
  /* 1197a4e5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1197a4e8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1197a4eb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a4ef jbe 0x1197a507 */
  if ((C.cf||C.zf)) goto L_1197a507;
  /* 1197a4f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a4f4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a4f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a4fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1197a4fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a4ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a502 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197a505 jmp 0x1197a51b */
  goto L_1197a51b;
L_1197a507:;
  /* 1197a507 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197a50a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a50d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a510 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1197a512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a518 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1197a51b:;
  /* 1197a51b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a51f ja 0x1197a4ba */
  if ((!C.cf&&!C.zf)) goto L_1197a4ba;
  /* 1197a521 jb 0x1197a529 */
  if (C.cf) goto L_1197a529;
  /* 1197a523 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a527 ja 0x1197a4ba */
  if ((!C.cf&&!C.zf)) goto L_1197a4ba;
L_1197a529:;
  /* 1197a529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a52c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1197a52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a532 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a535 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197a538:;
  /* 1197a538 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a53b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197a53d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1197a540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a543 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a546 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197a548 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1197a54a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a54d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1197a550 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1197a552 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197a555 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a558 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197a55b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a55e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a561 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197a564 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197a567 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a56a jb 0x1197a538 */
  if (C.cf) goto L_1197a538;
  /* 1197a56c mov esp, ebp */
  ESP = (EBP);
  /* 1197a56e pop ebp */
  EBP = (pop32());
  /* 1197a56f ret 0x14 */
  ESPCHK(0x1197a480u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1197a580 (31 bytes, 15 insns) */
void f_1197a580(void) {
  FTRACE(0x1197a580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a580 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a581 mov ebp, esp */
  EBP = (ESP);
  /* 1197a583 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a585 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197a588 push eax */
  push32((uint32_t)(EAX));
  /* 1197a589 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a58c push ecx */
  push32((uint32_t)(ECX));
  /* 1197a58d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a590 push edx */
  push32((uint32_t)(EDX));
  /* 1197a591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a594 push eax */
  push32((uint32_t)(EAX));
  /* 1197a595 call 0x1197a480 */
  push32(0x1197a59au); f_1197a480();
  /* 1197a59a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a59d pop ebp */
  EBP = (pop32());
  /* 1197a59e ret  */
  ESPCHK(0x1197a580u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1197a5a0 (123 bytes, 44 insns) */
void f_1197a5a0(void) {
  FTRACE(0x1197a5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a5a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197a5a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1197a5aa je 0x1197a5c0 */
  if (C.zf) goto L_1197a5c0;
L_1197a5ac:;
  /* 1197a5ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1197a5ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1197a5af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1197a5b1 je 0x1197a5f3 */
  if (C.zf) goto L_1197a5f3;
  /* 1197a5b3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1197a5b9 jne 0x1197a5ac */
  if (!C.zf) goto L_1197a5ac;
  /* 1197a5bb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1197a5c0:;
  /* 1197a5c0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1197a5c2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1197a5c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a5c9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197a5cc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197a5ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a5d1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1197a5d6 je 0x1197a5c0 */
  if (C.zf) goto L_1197a5c0;
  /* 1197a5d8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1197a5db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1197a5dd je 0x1197a611 */
  if (C.zf) goto L_1197a611;
  /* 1197a5df test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1197a5e1 je 0x1197a607 */
  if (C.zf) goto L_1197a607;
  /* 1197a5e3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1197a5e8 je 0x1197a5fd */
  if (C.zf) goto L_1197a5fd;
  /* 1197a5ea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1197a5ef je 0x1197a5f3 */
  if (C.zf) goto L_1197a5f3;
  /* 1197a5f1 jmp 0x1197a5c0 */
  goto L_1197a5c0;
L_1197a5f3:;
  /* 1197a5f3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1197a5f6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197a5fa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a5fc ret  */
  ESPCHK(0x1197a5a0u, _esp0);
  ESP += 4; return;
L_1197a5fd:;
  /* 1197a5fd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1197a600 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197a604 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a606 ret  */
  ESPCHK(0x1197a5a0u, _esp0);
  ESP += 4; return;
L_1197a607:;
  /* 1197a607 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1197a60a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197a60e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a610 ret  */
  ESPCHK(0x1197a5a0u, _esp0);
  ESP += 4; return;
L_1197a611:;
  /* 1197a611 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1197a614 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197a618 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a61a ret  */
  ESPCHK(0x1197a5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x1197a620 (249 bytes, 93 insns) */
void f_1197a620(void) {
  FTRACE(0x1197a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a620 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a621 mov ebp, esp */
  EBP = (ESP);
  /* 1197a623 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a626 push ebx */
  push32((uint32_t)(EBX));
  /* 1197a627 push esi */
  push32((uint32_t)(ESI));
  /* 1197a628 push edi */
  push32((uint32_t)(EDI));
  /* 1197a629 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1197a62c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1197a62f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1197a632 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1197a635:;
  /* 1197a635 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a639 jne 0x1197a659 */
  if (!C.zf) goto L_1197a659;
  /* 1197a63b push 0x1199fafc */
  push32((uint32_t)(0x1199fafcu));
  /* 1197a640 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a642 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1197a644 push 0x1199faf0 */
  push32((uint32_t)(0x1199faf0u));
  /* 1197a649 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197a64b call 0x11976830 */
  push32(0x1197a650u); f_11976830();
  /* 1197a650 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a653 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a656 jne 0x1197a659 */
  if (!C.zf) goto L_1197a659;
  /* 1197a658 int3  */
  x86_unimpl("int3 @ 0x1197a658");
L_1197a659:;
  /* 1197a659 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a65b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197a65d jne 0x1197a635 */
  if (!C.zf) goto L_1197a635;
L_1197a65f:;
  /* 1197a65f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a663 jne 0x1197a683 */
  if (!C.zf) goto L_1197a683;
  /* 1197a665 push 0x1199fae0 */
  push32((uint32_t)(0x1199fae0u));
  /* 1197a66a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a66c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1197a66e push 0x1199faf0 */
  push32((uint32_t)(0x1199faf0u));
  /* 1197a673 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197a675 call 0x11976830 */
  push32(0x1197a67au); f_11976830();
  /* 1197a67a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a67d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a680 jne 0x1197a683 */
  if (!C.zf) goto L_1197a683;
  /* 1197a682 int3  */
  x86_unimpl("int3 @ 0x1197a682");
L_1197a683:;
  /* 1197a683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197a685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197a687 jne 0x1197a65f */
  if (!C.zf) goto L_1197a65f;
  /* 1197a689 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a68c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1197a693 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a699 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197a69c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a69f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a6a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1197a6a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a6aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1197a6ad mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197a6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1197a6b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a6b4 push eax */
  push32((uint32_t)(EAX));
  /* 1197a6b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a6b9 call 0x1197e700 */
  push32(0x1197a6beu); f_1197e700();
  /* 1197a6be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a6c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197a6c4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6c7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197a6ca sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a6cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6d0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1197a6d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6d6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a6da jl 0x1197a6fe */
  if ((C.sf!=C.of)) goto L_1197a6fe;
  /* 1197a6dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197a6e1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1197a6e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a6e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197a6ec mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1197a6ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6f2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197a6f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a6f7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a6fa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1197a6fc jmp 0x1197a70f */
  goto L_1197a70f;
L_1197a6fe:;
  /* 1197a6fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a701 push eax */
  push32((uint32_t)(EAX));
  /* 1197a702 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a704 call 0x1197e480 */
  push32(0x1197a709u); f_1197e480();
  /* 1197a709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a70c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1197a70f:;
  /* 1197a70f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197a712 pop edi */
  EDI = (pop32());
  /* 1197a713 pop esi */
  ESI = (pop32());
  /* 1197a714 pop ebx */
  EBX = (pop32());
  /* 1197a715 mov esp, ebp */
  ESP = (EBP);
  /* 1197a717 pop ebp */
  EBP = (pop32());
  /* 1197a718 ret  */
  ESPCHK(0x1197a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a720 @ 0x1197a720 (7 bytes, 3 insns) */
void f_1197a720(void) {
  FTRACE(0x1197a720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a720 push edi */
  push32((uint32_t)(EDI));
  /* 1197a721 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1197a725 jmp 0x1197a791 */
  jmp_ind(0x1197a791u); return;
}

/* FUN_1000a730 @ 0x1197a730 (224 bytes, 84 insns) */
void f_1197a730(void) {
  FTRACE(0x1197a730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a730 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197a734 push edi */
  push32((uint32_t)(EDI));
  /* 1197a735 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1197a73b je 0x1197a74c */
  if (C.zf) goto L_1197a74c;
L_1197a73d:;
  /* 1197a73d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1197a73f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1197a740 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1197a742 je 0x1197a77f */
  if (C.zf) goto L_1197a77f;
  /* 1197a744 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1197a74a jne 0x1197a73d */
  if (!C.zf) goto L_1197a73d;
L_1197a74c:;
  /* 1197a74c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1197a74e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1197a753 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a755 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197a758 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197a75a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a75d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1197a762 je 0x1197a74c */
  if (C.zf) goto L_1197a74c;
  /* 1197a764 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1197a767 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1197a769 je 0x1197a78e */
  if (C.zf) goto L_1197a78e;
  /* 1197a76b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1197a76d je 0x1197a789 */
  if (C.zf) goto L_1197a789;
  /* 1197a76f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1197a774 je 0x1197a784 */
  if (C.zf) goto L_1197a784;
  /* 1197a776 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1197a77b je 0x1197a77f */
  if (C.zf) goto L_1197a77f;
  /* 1197a77d jmp 0x1197a74c */
  goto L_1197a74c;
L_1197a77f:;
  /* 1197a77f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1197a782 jmp 0x1197a791 */
  goto L_1197a791;
L_1197a784:;
  /* 1197a784 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1197a787 jmp 0x1197a791 */
  goto L_1197a791;
L_1197a789:;
  /* 1197a789 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1197a78c jmp 0x1197a791 */
  goto L_1197a791;
L_1197a78e:;
  /* 1197a78e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1197a791:;
  /* 1197a791 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1197a795 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1197a79b je 0x1197a7b6 */
  if (C.zf) goto L_1197a7b6;
L_1197a79d:;
  /* 1197a79d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197a79f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1197a7a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1197a7a2 je 0x1197a808 */
  if (C.zf) goto L_1197a808;
  /* 1197a7a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1197a7a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197a7a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1197a7ad jne 0x1197a79d */
  if (!C.zf) goto L_1197a79d;
  /* 1197a7af jmp 0x1197a7b6 */
  goto L_1197a7b6;
L_1197a7b1:;
  /* 1197a7b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1197a7b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1197a7b6:;
  /* 1197a7b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1197a7bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1197a7bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a7bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197a7c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197a7c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197a7c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a7c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1197a7ce je 0x1197a7b1 */
  if (C.zf) goto L_1197a7b1;
  /* 1197a7d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1197a7d2 je 0x1197a808 */
  if (C.zf) goto L_1197a808;
  /* 1197a7d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1197a7d6 je 0x1197a7ff */
  if (C.zf) goto L_1197a7ff;
  /* 1197a7d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1197a7de je 0x1197a7f2 */
  if (C.zf) goto L_1197a7f2;
  /* 1197a7e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1197a7e6 je 0x1197a7ea */
  if (C.zf) goto L_1197a7ea;
  /* 1197a7e8 jmp 0x1197a7b1 */
  goto L_1197a7b1;
L_1197a7ea:;
  /* 1197a7ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1197a7ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197a7f0 pop edi */
  EDI = (pop32());
  /* 1197a7f1 ret  */
  ESPCHK(0x1197a730u, _esp0);
  ESP += 4; return;
L_1197a7f2:;
  /* 1197a7f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1197a7f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197a7f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1197a7fd pop edi */
  EDI = (pop32());
  /* 1197a7fe ret  */
  ESPCHK(0x1197a730u, _esp0);
  ESP += 4; return;
L_1197a7ff:;
  /* 1197a7ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1197a802 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197a806 pop edi */
  EDI = (pop32());
  /* 1197a807 ret  */
  ESPCHK(0x1197a730u, _esp0);
  ESP += 4; return;
L_1197a808:;
  /* 1197a808 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1197a80a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197a80e pop edi */
  EDI = (pop32());
  /* 1197a80f ret  */
  ESPCHK(0x1197a730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x1197a810 (243 bytes, 91 insns) */
void f_1197a810(void) {
  FTRACE(0x1197a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a811 mov ebp, esp */
  EBP = (ESP);
  /* 1197a813 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a816 push ebx */
  push32((uint32_t)(EBX));
  /* 1197a817 push esi */
  push32((uint32_t)(ESI));
  /* 1197a818 push edi */
  push32((uint32_t)(EDI));
  /* 1197a819 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1197a81c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1197a81f:;
  /* 1197a81f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a823 jne 0x1197a843 */
  if (!C.zf) goto L_1197a843;
  /* 1197a825 push 0x1199fafc */
  push32((uint32_t)(0x1199fafcu));
  /* 1197a82a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a82c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1197a82e push 0x1199fb0c */
  push32((uint32_t)(0x1199fb0cu));
  /* 1197a833 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197a835 call 0x11976830 */
  push32(0x1197a83au); f_11976830();
  /* 1197a83a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a83d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a840 jne 0x1197a843 */
  if (!C.zf) goto L_1197a843;
  /* 1197a842 int3  */
  x86_unimpl("int3 @ 0x1197a842");
L_1197a843:;
  /* 1197a843 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197a845 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197a847 jne 0x1197a81f */
  if (!C.zf) goto L_1197a81f;
L_1197a849:;
  /* 1197a849 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a84d jne 0x1197a86d */
  if (!C.zf) goto L_1197a86d;
  /* 1197a84f push 0x1199fae0 */
  push32((uint32_t)(0x1199fae0u));
  /* 1197a854 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a856 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1197a858 push 0x1199fb0c */
  push32((uint32_t)(0x1199fb0cu));
  /* 1197a85d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197a85f call 0x11976830 */
  push32(0x1197a864u); f_11976830();
  /* 1197a864 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a867 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a86a jne 0x1197a86d */
  if (!C.zf) goto L_1197a86d;
  /* 1197a86c int3  */
  x86_unimpl("int3 @ 0x1197a86c");
L_1197a86d:;
  /* 1197a86d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a86f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197a871 jne 0x1197a849 */
  if (!C.zf) goto L_1197a849;
  /* 1197a873 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a876 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1197a87d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a880 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a883 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1197a886 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a88c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1197a88e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a891 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197a894 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1197a897 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197a89a push ecx */
  push32((uint32_t)(ECX));
  /* 1197a89b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197a89e push edx */
  push32((uint32_t)(EDX));
  /* 1197a89f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8a2 push eax */
  push32((uint32_t)(EAX));
  /* 1197a8a3 call 0x1197e700 */
  push32(0x1197a8a8u); f_1197e700();
  /* 1197a8a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a8ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197a8ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197a8b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a8b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1197a8bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8c0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a8c4 jl 0x1197a8e8 */
  if ((C.sf!=C.of)) goto L_1197a8e8;
  /* 1197a8c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197a8cb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1197a8ce xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197a8d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197a8d6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1197a8d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197a8de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a8e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1197a8e6 jmp 0x1197a8f9 */
  goto L_1197a8f9;
L_1197a8e8:;
  /* 1197a8e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197a8eb push edx */
  push32((uint32_t)(EDX));
  /* 1197a8ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1197a8ee call 0x1197e480 */
  push32(0x1197a8f3u); f_1197e480();
  /* 1197a8f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a8f6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1197a8f9:;
  /* 1197a8f9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197a8fc pop edi */
  EDI = (pop32());
  /* 1197a8fd pop esi */
  ESI = (pop32());
  /* 1197a8fe pop ebx */
  EBX = (pop32());
  /* 1197a8ff mov esp, ebp */
  ESP = (EBP);
  /* 1197a901 pop ebp */
  EBP = (pop32());
  /* 1197a902 ret  */
  ESPCHK(0x1197a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x1197a910 (47 bytes, 17 insns) */
void f_1197a910(void) {
  FTRACE(0x1197a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a910 push ecx */
  push32((uint32_t)(ECX));
  /* 1197a911 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a916 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1197a91a jb 0x1197a930 */
  if (C.cf) goto L_1197a930;
L_1197a91c:;
  /* 1197a91c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a922 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a927 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1197a929 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a92e jae 0x1197a91c */
  if (!C.cf) goto L_1197a91c;
L_1197a930:;
  /* 1197a930 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a932 mov eax, esp */
  EAX = (ESP);
  /* 1197a934 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1197a936 mov esp, ecx */
  ESP = (ECX);
  /* 1197a938 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197a93a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197a93d push eax */
  push32((uint32_t)(EAX));
  /* 1197a93e ret  */
  ESPCHK(0x1197a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a940 @ 0x1197a940 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1197a940(void) {
  FTRACE(0x1197a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197a940 push ebp */
  push32((uint32_t)(EBP));
  /* 1197a941 mov ebp, esp */
  EBP = (ESP);
  /* 1197a943 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a946 push esi */
  push32((uint32_t)(ESI));
  /* 1197a947 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a94b je 0x1197a953 */
  if (C.zf) goto L_1197a953;
  /* 1197a94d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a951 jne 0x1197a958 */
  if (!C.zf) goto L_1197a958;
L_1197a953:;
  /* 1197a953 jmp 0x1197ab28 */
  goto L_1197ab28;
L_1197a958:;
  /* 1197a958 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a95c je 0x1197a974 */
  if (C.zf) goto L_1197a974;
  /* 1197a95e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a962 je 0x1197a974 */
  if (C.zf) goto L_1197a974;
  /* 1197a964 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a968 je 0x1197a974 */
  if (C.zf) goto L_1197a974;
  /* 1197a96a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a96e jne 0x1197aa51 */
  if (!C.zf) goto L_1197aa51;
L_1197a974:;
  /* 1197a974 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197a976 call 0x1197b170 */
  push32(0x1197a97bu); f_1197b170();
  /* 1197a97b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a97e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a982 je 0x1197a98a */
  if (C.zf) goto L_1197a98a;
  /* 1197a984 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a988 jne 0x1197a9cf */
  if (!C.zf) goto L_1197a9cf;
L_1197a98a:;
  /* 1197a98a cmp dword ptr [0x119a39e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a991 jne 0x1197a9cf */
  if (!C.zf) goto L_1197a9cf;
  /* 1197a993 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197a995 push 0x1197ab70 */
  push32((uint32_t)(0x1197ab70u));
  /* 1197a99a call dword ptr [0x119a6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6354))), 0x1197a9a0u);
  /* 1197a9a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a9a3 jne 0x1197a9b1 */
  if (!C.zf) goto L_1197a9b1;
  /* 1197a9a5 mov dword ptr [0x119a39e4], 1 */
  w32((uint32_t)(0x119a39e4), (0x1u));
  /* 1197a9af jmp 0x1197a9cf */
  goto L_1197a9cf;
L_1197a9b1:;
  /* 1197a9b1 call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x1197a9b7u);
  /* 1197a9b7 mov esi, eax */
  ESI = (EAX);
  /* 1197a9b9 call 0x1197f650 */
  push32(0x1197a9beu); f_1197f650();
  /* 1197a9be mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1197a9c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197a9c2 call 0x1197b210 */
  push32(0x1197a9c7u); f_1197b210();
  /* 1197a9c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197a9ca jmp 0x1197ab28 */
  goto L_1197ab28;
L_1197a9cf:;
  /* 1197a9cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197a9d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197a9d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197a9d8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197a9db mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1197a9de cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197a9e2 ja 0x1197aa42 */
  if ((!C.cf&&!C.zf)) goto L_1197aa42;
  /* 1197a9e4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197a9e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197a9e9 mov dl, byte ptr [eax + 0x1197ab4f] */
  DL = (r8((uint32_t)(EAX + 0x1197ab4f)));
  /* 1197a9ef jmp dword ptr [edx*4 + 0x1197ab3b] */
  switch (EDX) {
    case 0: goto L_1197a9f6;
    case 1: goto L_1197aa30;
    case 2: goto L_1197aa0a;
    case 3: goto L_1197aa1d;
    case 4: goto L_1197aa42;
    default: x86_unimpl("switch@0x1197a9ef out of table"); return;
  }
L_1197a9f6:;
  /* 1197a9f6 mov ecx, dword ptr [0x119a39d4] */
  ECX = (r32((uint32_t)(0x119a39d4)));
  /* 1197a9fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197a9ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197aa02 mov dword ptr [0x119a39d4], edx */
  w32((uint32_t)(0x119a39d4), (EDX));
  /* 1197aa08 jmp 0x1197aa42 */
  goto L_1197aa42;
L_1197aa0a:;
  /* 1197aa0a mov eax, dword ptr [0x119a39d8] */
  EAX = (r32((uint32_t)(0x119a39d8)));
  /* 1197aa0f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197aa12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197aa15 mov dword ptr [0x119a39d8], ecx */
  w32((uint32_t)(0x119a39d8), (ECX));
  /* 1197aa1b jmp 0x1197aa42 */
  goto L_1197aa42;
L_1197aa1d:;
  /* 1197aa1d mov edx, dword ptr [0x119a39dc] */
  EDX = (r32((uint32_t)(0x119a39dc)));
  /* 1197aa23 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1197aa26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197aa29 mov dword ptr [0x119a39dc], eax */
  w32((uint32_t)(0x119a39dc), (EAX));
  /* 1197aa2e jmp 0x1197aa42 */
  goto L_1197aa42;
L_1197aa30:;
  /* 1197aa30 mov ecx, dword ptr [0x119a39e0] */
  ECX = (r32((uint32_t)(0x119a39e0)));
  /* 1197aa36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197aa39 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197aa3c mov dword ptr [0x119a39e0], edx */
  w32((uint32_t)(0x119a39e0), (EDX));
L_1197aa42:;
  /* 1197aa42 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197aa44 call 0x1197b210 */
  push32(0x1197aa49u); f_1197b210();
  /* 1197aa49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197aa4c jmp 0x1197ab23 */
  goto L_1197ab23;
L_1197aa51:;
  /* 1197aa51 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aa55 je 0x1197aa68 */
  if (C.zf) goto L_1197aa68;
  /* 1197aa57 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aa5b je 0x1197aa68 */
  if (C.zf) goto L_1197aa68;
  /* 1197aa5d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aa61 je 0x1197aa68 */
  if (C.zf) goto L_1197aa68;
  /* 1197aa63 jmp 0x1197ab28 */
  goto L_1197ab28;
L_1197aa68:;
  /* 1197aa68 call 0x119771b0 */
  push32(0x1197aa6du); f_119771b0();
  /* 1197aa6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197aa70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197aa73 cmp dword ptr [eax + 0x50], 0x119a1c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x119a1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aa7a jne 0x1197aac5 */
  if (!C.zf) goto L_1197aac5;
  /* 1197aa7c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1197aa81 push 0x1199fb18 */
  push32((uint32_t)(0x1199fb18u));
  /* 1197aa86 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197aa88 mov ecx, dword ptr [0x119a1c80] */
  ECX = (r32((uint32_t)(0x119a1c80)));
  /* 1197aa8e push ecx */
  push32((uint32_t)(ECX));
  /* 1197aa8f call 0x11977770 */
  push32(0x1197aa94u); f_11977770();
  /* 1197aa94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197aa97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197aa9a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1197aa9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197aaa0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aaa4 je 0x1197aac3 */
  if (C.zf) goto L_1197aac3;
  /* 1197aaa6 mov ecx, dword ptr [0x119a1c80] */
  ECX = (r32((uint32_t)(0x119a1c80)));
  /* 1197aaac push ecx */
  push32((uint32_t)(ECX));
  /* 1197aaad push 0x119a1c00 */
  push32((uint32_t)(0x119a1c00u));
  /* 1197aab2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197aab5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1197aab8 push eax */
  push32((uint32_t)(EAX));
  /* 1197aab9 call 0x1197e050 */
  push32(0x1197aabeu); f_1197e050();
  /* 1197aabe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197aac1 jmp 0x1197aac5 */
  goto L_1197aac5;
L_1197aac3:;
  /* 1197aac3 jmp 0x1197ab28 */
  goto L_1197ab28;
L_1197aac5:;
  /* 1197aac5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197aac8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1197aacb push edx */
  push32((uint32_t)(EDX));
  /* 1197aacc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197aacf push eax */
  push32((uint32_t)(EAX));
  /* 1197aad0 call 0x1197ae50 */
  push32(0x1197aad5u); f_1197ae50();
  /* 1197aad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197aad8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197aadb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aadf jne 0x1197aae3 */
  if (!C.zf) goto L_1197aae3;
  /* 1197aae1 jmp 0x1197ab28 */
  goto L_1197ab28;
L_1197aae3:;
  /* 1197aae3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197aae6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197aae9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1197aaec:;
  /* 1197aaec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197aaef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197aaf2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aaf5 jne 0x1197ab23 */
  if (!C.zf) goto L_1197ab23;
  /* 1197aaf7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197aafa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197aafd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197ab00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ab03 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ab06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197ab09 mov edx, dword ptr [0x119a1c84] */
  EDX = (r32((uint32_t)(0x119a1c84)));
  /* 1197ab0f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197ab12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ab15 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1197ab18 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ab1a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ab1d jb 0x1197ab21 */
  if (C.cf) goto L_1197ab21;
  /* 1197ab1f jmp 0x1197ab23 */
  goto L_1197ab23;
L_1197ab21:;
  /* 1197ab21 jmp 0x1197aaec */
  goto L_1197aaec;
L_1197ab23:;
  /* 1197ab23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197ab26 jmp 0x1197ab36 */
  goto L_1197ab36;
L_1197ab28:;
  /* 1197ab28 call 0x1197f640 */
  push32(0x1197ab2du); f_1197f640();
  /* 1197ab2d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1197ab33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1197ab36:;
  /* 1197ab36 pop esi */
  ESI = (pop32());
  /* 1197ab37 mov esp, ebp */
  ESP = (EBP);
  /* 1197ab39 pop ebp */
  EBP = (pop32());
  /* 1197ab3a ret  */
  ESPCHK(0x1197a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab70 @ 0x1197ab70 (146 bytes, 45 insns) */
void f_1197ab70(void) {
  FTRACE(0x1197ab70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197ab70 push ebp */
  push32((uint32_t)(EBP));
  /* 1197ab71 mov ebp, esp */
  EBP = (ESP);
  /* 1197ab73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ab76 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197ab78 call 0x1197b170 */
  push32(0x1197ab7du); f_1197b170();
  /* 1197ab7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ab80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ab84 jne 0x1197ab9e */
  if (!C.zf) goto L_1197ab9e;
  /* 1197ab86 mov dword ptr [ebp - 8], 0x119a39d4 */
  w32((uint32_t)(EBP + -0x8), (0x119a39d4u));
  /* 1197ab8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ab90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197ab92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197ab95 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1197ab9c jmp 0x1197abb4 */
  goto L_1197abb4;
L_1197ab9e:;
  /* 1197ab9e mov dword ptr [ebp - 8], 0x119a39d8 */
  w32((uint32_t)(EBP + -0x8), (0x119a39d8u));
  /* 1197aba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197aba8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197abaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197abad mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1197abb4:;
  /* 1197abb4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197abb8 jne 0x1197abc8 */
  if (!C.zf) goto L_1197abc8;
  /* 1197abba push 1 */
  push32((uint32_t)(0x1u));
  /* 1197abbc call 0x1197b210 */
  push32(0x1197abc1u); f_1197b210();
  /* 1197abc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197abc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197abc6 jmp 0x1197abfc */
  goto L_1197abfc;
L_1197abc8:;
  /* 1197abc8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197abcc je 0x1197abed */
  if (C.zf) goto L_1197abed;
  /* 1197abce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197abd1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1197abd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197abd9 call 0x1197b210 */
  push32(0x1197abdeu); f_1197b210();
  /* 1197abde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197abe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197abe4 push edx */
  push32((uint32_t)(EDX));
  /* 1197abe5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1197abe8u);
  /* 1197abe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197abeb jmp 0x1197abf7 */
  goto L_1197abf7;
L_1197abed:;
  /* 1197abed push 1 */
  push32((uint32_t)(0x1u));
  /* 1197abef call 0x1197b210 */
  push32(0x1197abf4u); f_1197b210();
  /* 1197abf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197abf7:;
  /* 1197abf7 mov eax, 1 */
  EAX = (0x1u);
L_1197abfc:;
  /* 1197abfc mov esp, ebp */
  ESP = (EBP);
  /* 1197abfe pop ebp */
  EBP = (pop32());
  /* 1197abff ret 4 */
  ESPCHK(0x1197ab70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ac10 @ 0x1197ac10 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1197ac10(void) {
  FTRACE(0x1197ac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197ac10 push ebp */
  push32((uint32_t)(EBP));
  /* 1197ac11 mov ebp, esp */
  EBP = (ESP);
  /* 1197ac13 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ac16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1197ac1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ac20 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197ac23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ac26 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ac29 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1197ac2c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ac30 ja 0x1197acde */
  if ((!C.cf&&!C.zf)) goto L_1197acde;
  /* 1197ac36 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ac39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197ac3b mov dl, byte ptr [eax + 0x1197ae32] */
  DL = (r8((uint32_t)(EAX + 0x1197ae32)));
  /* 1197ac41 jmp dword ptr [edx*4 + 0x1197ae1a] */
  switch (EDX) {
    case 0: goto L_1197ac48;
    case 1: goto L_1197acb3;
    case 2: goto L_1197ac99;
    case 3: goto L_1197ac65;
    case 4: goto L_1197ac7f;
    case 5: goto L_1197acde;
    default: x86_unimpl("switch@0x1197ac41 out of table"); return;
  }
L_1197ac48:;
  /* 1197ac48 mov dword ptr [ebp - 0x18], 0x119a39d4 */
  w32((uint32_t)(EBP + -0x18), (0x119a39d4u));
  /* 1197ac4f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197ac52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197ac54 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197ac57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197ac5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ac5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197ac60 jmp 0x1197ace6 */
  goto L_1197ace6;
L_1197ac65:;
  /* 1197ac65 mov dword ptr [ebp - 0x18], 0x119a39d8 */
  w32((uint32_t)(EBP + -0x18), (0x119a39d8u));
  /* 1197ac6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197ac6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197ac71 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197ac74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197ac77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ac7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197ac7d jmp 0x1197ace6 */
  goto L_1197ace6;
L_1197ac7f:;
  /* 1197ac7f mov dword ptr [ebp - 0x18], 0x119a39dc */
  w32((uint32_t)(EBP + -0x18), (0x119a39dcu));
  /* 1197ac86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197ac89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197ac8b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197ac8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197ac91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ac94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197ac97 jmp 0x1197ace6 */
  goto L_1197ace6;
L_1197ac99:;
  /* 1197ac99 mov dword ptr [ebp - 0x18], 0x119a39e0 */
  w32((uint32_t)(EBP + -0x18), (0x119a39e0u));
  /* 1197aca0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197aca3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197aca5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197aca8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197acab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197acae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197acb1 jmp 0x1197ace6 */
  goto L_1197ace6;
L_1197acb3:;
  /* 1197acb3 call 0x119771b0 */
  push32(0x1197acb8u); f_119771b0();
  /* 1197acb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197acbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197acbe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1197acc1 push edx */
  push32((uint32_t)(EDX));
  /* 1197acc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197acc5 push eax */
  push32((uint32_t)(EAX));
  /* 1197acc6 call 0x1197ae50 */
  push32(0x1197accbu); f_1197ae50();
  /* 1197accb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197acce add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197acd1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197acd4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197acd7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197acd9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197acdc jmp 0x1197ace6 */
  goto L_1197ace6;
L_1197acde:;
  /* 1197acde or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197ace1 jmp 0x1197ae16 */
  goto L_1197ae16;
L_1197ace6:;
  /* 1197ace6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197acea je 0x1197acf6 */
  if (C.zf) goto L_1197acf6;
  /* 1197acec push 1 */
  push32((uint32_t)(0x1u));
  /* 1197acee call 0x1197b170 */
  push32(0x1197acf3u); f_1197b170();
  /* 1197acf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197acf6:;
  /* 1197acf6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197acfa jne 0x1197ad13 */
  if (!C.zf) goto L_1197ad13;
  /* 1197acfc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad00 je 0x1197ad0c */
  if (C.zf) goto L_1197ad0c;
  /* 1197ad02 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197ad04 call 0x1197b210 */
  push32(0x1197ad09u); f_1197b210();
  /* 1197ad09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197ad0c:;
  /* 1197ad0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197ad0e jmp 0x1197ae16 */
  goto L_1197ae16;
L_1197ad13:;
  /* 1197ad13 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad17 jne 0x1197ad30 */
  if (!C.zf) goto L_1197ad30;
  /* 1197ad19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad1d je 0x1197ad29 */
  if (C.zf) goto L_1197ad29;
  /* 1197ad1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1197ad21 call 0x1197b210 */
  push32(0x1197ad26u); f_1197b210();
  /* 1197ad26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197ad29:;
  /* 1197ad29 push 3 */
  push32((uint32_t)(0x3u));
  /* 1197ad2b call 0x11976f30 */
  push32(0x1197ad30u); f_11976f30();
L_1197ad30:;
  /* 1197ad30 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad34 je 0x1197ad42 */
  if (C.zf) goto L_1197ad42;
  /* 1197ad36 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad3a je 0x1197ad42 */
  if (C.zf) goto L_1197ad42;
  /* 1197ad3c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad40 jne 0x1197ad6e */
  if (!C.zf) goto L_1197ad6e;
L_1197ad42:;
  /* 1197ad42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ad45 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1197ad48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1197ad4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ad4e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1197ad55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad59 jne 0x1197ad6e */
  if (!C.zf) goto L_1197ad6e;
  /* 1197ad5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ad5e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1197ad61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197ad64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ad67 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1197ad6e:;
  /* 1197ad6e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad72 jne 0x1197adb0 */
  if (!C.zf) goto L_1197adb0;
  /* 1197ad74 mov eax, dword ptr [0x119a1c78] */
  EAX = (r32((uint32_t)(0x119a1c78)));
  /* 1197ad79 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197ad7c jmp 0x1197ad87 */
  goto L_1197ad87;
L_1197ad7e:;
  /* 1197ad7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197ad81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ad84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1197ad87:;
  /* 1197ad87 mov edx, dword ptr [0x119a1c78] */
  EDX = (r32((uint32_t)(0x119a1c78)));
  /* 1197ad8d add edx, dword ptr [0x119a1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ad93 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ad96 jge 0x1197adae */
  if ((C.sf==C.of)) goto L_1197adae;
  /* 1197ad98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197ad9b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197ad9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ada1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1197ada4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1197adac jmp 0x1197ad7e */
  goto L_1197ad7e;
L_1197adae:;
  /* 1197adae jmp 0x1197adb9 */
  goto L_1197adb9;
L_1197adb0:;
  /* 1197adb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197adb3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1197adb9:;
  /* 1197adb9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197adbd je 0x1197adc9 */
  if (C.zf) goto L_1197adc9;
  /* 1197adbf push 1 */
  push32((uint32_t)(0x1u));
  /* 1197adc1 call 0x1197b210 */
  push32(0x1197adc6u); f_1197b210();
  /* 1197adc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197adc9:;
  /* 1197adc9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197adcd jne 0x1197ade0 */
  if (!C.zf) goto L_1197ade0;
  /* 1197adcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197add2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1197add5 push edx */
  push32((uint32_t)(EDX));
  /* 1197add6 push 8 */
  push32((uint32_t)(0x8u));
  /* 1197add8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1197addbu);
  /* 1197addb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197adde jmp 0x1197adea */
  goto L_1197adea;
L_1197ade0:;
  /* 1197ade0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ade3 push eax */
  push32((uint32_t)(EAX));
  /* 1197ade4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1197ade7u);
  /* 1197ade7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197adea:;
  /* 1197adea cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197adee je 0x1197adfc */
  if (C.zf) goto L_1197adfc;
  /* 1197adf0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197adf4 je 0x1197adfc */
  if (C.zf) goto L_1197adfc;
  /* 1197adf6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197adfa jne 0x1197ae14 */
  if (!C.zf) goto L_1197ae14;
L_1197adfc:;
  /* 1197adfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197adff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ae02 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1197ae05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ae09 jne 0x1197ae14 */
  if (!C.zf) goto L_1197ae14;
  /* 1197ae0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ae0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ae11 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1197ae14:;
  /* 1197ae14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197ae16:;
  /* 1197ae16 mov esp, ebp */
  ESP = (EBP);
  /* 1197ae18 pop ebp */
  EBP = (pop32());
  /* 1197ae19 ret  */
  ESPCHK(0x1197ac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae50 @ 0x1197ae50 (91 bytes, 35 insns) */
void f_1197ae50(void) {
  FTRACE(0x1197ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197ae50 push ebp */
  push32((uint32_t)(EBP));
  /* 1197ae51 mov ebp, esp */
  EBP = (ESP);
  /* 1197ae53 push ecx */
  push32((uint32_t)(ECX));
  /* 1197ae54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ae57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197ae5a:;
  /* 1197ae5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ae5d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197ae60 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ae63 je 0x1197ae83 */
  if (C.zf) goto L_1197ae83;
  /* 1197ae65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ae68 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ae6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197ae6e mov ecx, dword ptr [0x119a1c84] */
  ECX = (r32((uint32_t)(0x119a1c84)));
  /* 1197ae74 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197ae77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ae7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ae7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ae7f jae 0x1197ae83 */
  if (!C.cf) goto L_1197ae83;
  /* 1197ae81 jmp 0x1197ae5a */
  goto L_1197ae5a;
L_1197ae83:;
  /* 1197ae83 mov eax, dword ptr [0x119a1c84] */
  EAX = (r32((uint32_t)(0x119a1c84)));
  /* 1197ae88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197ae8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ae8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ae90 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ae93 jae 0x1197aea5 */
  if (!C.cf) goto L_1197aea5;
  /* 1197ae95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ae98 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197ae9b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ae9e jne 0x1197aea5 */
  if (!C.zf) goto L_1197aea5;
  /* 1197aea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197aea3 jmp 0x1197aea7 */
  goto L_1197aea7;
L_1197aea5:;
  /* 1197aea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197aea7:;
  /* 1197aea7 mov esp, ebp */
  ESP = (EBP);
  /* 1197aea9 pop ebp */
  EBP = (pop32());
  /* 1197aeaa ret  */
  ESPCHK(0x1197ae50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeb0 @ 0x1197aeb0 (13 bytes, 6 insns) */
void f_1197aeb0(void) {
  FTRACE(0x1197aeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197aeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197aeb1 mov ebp, esp */
  EBP = (ESP);
  /* 1197aeb3 call 0x119771b0 */
  push32(0x1197aeb8u); f_119771b0();
  /* 1197aeb8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197aebb pop ebp */
  EBP = (pop32());
  /* 1197aebc ret  */
  ESPCHK(0x1197aeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x1197aec0 (13 bytes, 6 insns) */
void f_1197aec0(void) {
  FTRACE(0x1197aec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197aec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197aec1 mov ebp, esp */
  EBP = (ESP);
  /* 1197aec3 call 0x119771b0 */
  push32(0x1197aec8u); f_119771b0();
  /* 1197aec8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197aecb pop ebp */
  EBP = (pop32());
  /* 1197aecc ret  */
  ESPCHK(0x1197aec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1197aed0 (187 bytes, 54 insns) */
void f_1197aed0(void) {
  FTRACE(0x1197aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197aed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197aed1 mov ebp, esp */
  EBP = (ESP);
  /* 1197aed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197aed6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197aedd cmp dword ptr [0x119a39e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aee4 jne 0x1197af43 */
  if (!C.zf) goto L_1197af43;
  /* 1197aee6 push 0x1199ef44 */
  push32((uint32_t)(0x1199ef44u));
  /* 1197aeeb call dword ptr [0x119a63a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a8))), 0x1197aef1u);
  /* 1197aef1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197aef4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197aef8 je 0x1197af17 */
  if (C.zf) goto L_1197af17;
  /* 1197aefa push 0x1199fb48 */
  push32((uint32_t)(0x1199fb48u));
  /* 1197aeff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197af02 push eax */
  push32((uint32_t)(EAX));
  /* 1197af03 call dword ptr [0x119a63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a4))), 0x1197af09u);
  /* 1197af09 mov dword ptr [0x119a39e8], eax */
  w32((uint32_t)(0x119a39e8), (EAX));
  /* 1197af0e cmp dword ptr [0x119a39e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197af15 jne 0x1197af1b */
  if (!C.zf) goto L_1197af1b;
L_1197af17:;
  /* 1197af17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197af19 jmp 0x1197af87 */
  goto L_1197af87;
L_1197af1b:;
  /* 1197af1b push 0x1199fb38 */
  push32((uint32_t)(0x1199fb38u));
  /* 1197af20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197af23 push ecx */
  push32((uint32_t)(ECX));
  /* 1197af24 call dword ptr [0x119a63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a4))), 0x1197af2au);
  /* 1197af2a mov dword ptr [0x119a39ec], eax */
  w32((uint32_t)(0x119a39ec), (EAX));
  /* 1197af2f push 0x1199fb24 */
  push32((uint32_t)(0x1199fb24u));
  /* 1197af34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197af37 push edx */
  push32((uint32_t)(EDX));
  /* 1197af38 call dword ptr [0x119a63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63a4))), 0x1197af3eu);
  /* 1197af3e mov dword ptr [0x119a39f0], eax */
  w32((uint32_t)(0x119a39f0), (EAX));
L_1197af43:;
  /* 1197af43 cmp dword ptr [0x119a39ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197af4a je 0x1197af55 */
  if (C.zf) goto L_1197af55;
  /* 1197af4c call dword ptr [0x119a39ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a39ec))), 0x1197af52u);
  /* 1197af52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197af55:;
  /* 1197af55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197af59 je 0x1197af71 */
  if (C.zf) goto L_1197af71;
  /* 1197af5b cmp dword ptr [0x119a39f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a39f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197af62 je 0x1197af71 */
  if (C.zf) goto L_1197af71;
  /* 1197af64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197af67 push eax */
  push32((uint32_t)(EAX));
  /* 1197af68 call dword ptr [0x119a39f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a39f0))), 0x1197af6eu);
  /* 1197af6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197af71:;
  /* 1197af71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197af74 push ecx */
  push32((uint32_t)(ECX));
  /* 1197af75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197af78 push edx */
  push32((uint32_t)(EDX));
  /* 1197af79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197af7c push eax */
  push32((uint32_t)(EAX));
  /* 1197af7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197af80 push ecx */
  push32((uint32_t)(ECX));
  /* 1197af81 call dword ptr [0x119a39e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a39e8))), 0x1197af87u);
L_1197af87:;
  /* 1197af87 mov esp, ebp */
  ESP = (EBP);
  /* 1197af89 pop ebp */
  EBP = (pop32());
  /* 1197af8a ret  */
  ESPCHK(0x1197aed0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1197af90 (254 bytes, 109 insns) */
void f_1197af90(void) {
  FTRACE(0x1197af90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197af90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1197af94 push edi */
  push32((uint32_t)(EDI));
  /* 1197af95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197af97 je 0x1197b013 */
  if (C.zf) goto L_1197b013;
  /* 1197af99 push esi */
  push32((uint32_t)(ESI));
  /* 1197af9a push ebx */
  push32((uint32_t)(EBX));
  /* 1197af9b mov ebx, ecx */
  EBX = (ECX);
  /* 1197af9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1197afa1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1197afa7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1197afab jne 0x1197afb4 */
  if (!C.zf) goto L_1197afb4;
  /* 1197afad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197afb0 jne 0x1197b021 */
  if (!C.zf) goto L_1197b021;
  /* 1197afb2 jmp 0x1197afd5 */
  goto L_1197afd5;
L_1197afb4:;
  /* 1197afb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197afb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1197afb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197afb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197afba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1197afbb je 0x1197afe2 */
  if (C.zf) goto L_1197afe2;
  /* 1197afbd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1197afbf je 0x1197afea */
  if (C.zf) goto L_1197afea;
  /* 1197afc1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1197afc7 jne 0x1197afb4 */
  if (!C.zf) goto L_1197afb4;
  /* 1197afc9 mov ebx, ecx */
  EBX = (ECX);
  /* 1197afcb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197afce jne 0x1197b021 */
  if (!C.zf) goto L_1197b021;
L_1197afd0:;
  /* 1197afd0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1197afd3 je 0x1197afe2 */
  if (C.zf) goto L_1197afe2;
L_1197afd5:;
  /* 1197afd5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197afd7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1197afd8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197afda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197afdb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1197afdd je 0x1197b00e */
  if (C.zf) goto L_1197b00e;
  /* 1197afdf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1197afe0 jne 0x1197afd5 */
  if (!C.zf) goto L_1197afd5;
L_1197afe2:;
  /* 1197afe2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1197afe6 pop ebx */
  EBX = (pop32());
  /* 1197afe7 pop esi */
  ESI = (pop32());
  /* 1197afe8 pop edi */
  EDI = (pop32());
  /* 1197afe9 ret  */
  ESPCHK(0x1197af90u, _esp0);
  ESP += 4; return;
L_1197afea:;
  /* 1197afea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1197aff0 je 0x1197b004 */
  if (C.zf) goto L_1197b004;
L_1197aff2:;
  /* 1197aff2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197aff4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197aff5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1197aff6 je 0x1197b086 */
  if (C.zf) goto L_1197b086;
  /* 1197affc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1197b002 jne 0x1197aff2 */
  if (!C.zf) goto L_1197aff2;
L_1197b004:;
  /* 1197b004 mov ebx, ecx */
  EBX = (ECX);
  /* 1197b006 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197b009 jne 0x1197b077 */
  if (!C.zf) goto L_1197b077;
L_1197b00b:;
  /* 1197b00b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197b00d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1197b00e:;
  /* 1197b00e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1197b00f jne 0x1197b00b */
  if (!C.zf) goto L_1197b00b;
  /* 1197b011 pop ebx */
  EBX = (pop32());
  /* 1197b012 pop esi */
  ESI = (pop32());
L_1197b013:;
  /* 1197b013 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197b017 pop edi */
  EDI = (pop32());
  /* 1197b018 ret  */
  ESPCHK(0x1197af90u, _esp0);
  ESP += 4; return;
L_1197b019:;
  /* 1197b019 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1197b01b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b01e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1197b01f je 0x1197afd0 */
  if (C.zf) goto L_1197afd0;
L_1197b021:;
  /* 1197b021 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1197b026 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1197b028 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b02a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197b02d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b02f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1197b031 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b034 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1197b039 je 0x1197b019 */
  if (C.zf) goto L_1197b019;
  /* 1197b03b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1197b03d je 0x1197b06b */
  if (C.zf) goto L_1197b06b;
  /* 1197b03f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1197b041 je 0x1197b061 */
  if (C.zf) goto L_1197b061;
  /* 1197b043 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1197b049 je 0x1197b057 */
  if (C.zf) goto L_1197b057;
  /* 1197b04b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1197b051 jne 0x1197b019 */
  if (!C.zf) goto L_1197b019;
  /* 1197b053 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1197b055 jmp 0x1197b06f */
  goto L_1197b06f;
L_1197b057:;
  /* 1197b057 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197b05d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1197b05f jmp 0x1197b06f */
  goto L_1197b06f;
L_1197b061:;
  /* 1197b061 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197b067 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1197b069 jmp 0x1197b06f */
  goto L_1197b06f;
L_1197b06b:;
  /* 1197b06b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197b06d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1197b06f:;
  /* 1197b06f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b074 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1197b075 je 0x1197b081 */
  if (C.zf) goto L_1197b081;
L_1197b077:;
  /* 1197b077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197b079:;
  /* 1197b079 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1197b07b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b07e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1197b07f jne 0x1197b079 */
  if (!C.zf) goto L_1197b079;
L_1197b081:;
  /* 1197b081 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1197b084 jne 0x1197b00b */
  if (!C.zf) goto L_1197b00b;
L_1197b086:;
  /* 1197b086 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1197b08a pop ebx */
  EBX = (pop32());
  /* 1197b08b pop esi */
  ESI = (pop32());
  /* 1197b08c pop edi */
  EDI = (pop32());
  /* 1197b08d ret  */
  ESPCHK(0x1197af90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b090 @ 0x1197b090 (55 bytes, 16 insns) */
void f_1197b090(void) {
  FTRACE(0x1197b090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b090 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b091 mov ebp, esp */
  EBP = (ESP);
  /* 1197b093 mov eax, dword ptr [0x119a1b84] */
  EAX = (r32((uint32_t)(0x119a1b84)));
  /* 1197b098 push eax */
  push32((uint32_t)(EAX));
  /* 1197b099 call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x1197b09fu);
  /* 1197b09f mov ecx, dword ptr [0x119a1b74] */
  ECX = (r32((uint32_t)(0x119a1b74)));
  /* 1197b0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b0a6 call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x1197b0acu);
  /* 1197b0ac mov edx, dword ptr [0x119a1b64] */
  EDX = (r32((uint32_t)(0x119a1b64)));
  /* 1197b0b2 push edx */
  push32((uint32_t)(EDX));
  /* 1197b0b3 call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x1197b0b9u);
  /* 1197b0b9 mov eax, dword ptr [0x119a1b44] */
  EAX = (r32((uint32_t)(0x119a1b44)));
  /* 1197b0be push eax */
  push32((uint32_t)(EAX));
  /* 1197b0bf call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x1197b0c5u);
  /* 1197b0c5 pop ebp */
  EBP = (pop32());
  /* 1197b0c6 ret  */
  ESPCHK(0x1197b090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x1197b0d0 (159 bytes, 47 insns) */
void f_1197b0d0(void) {
  FTRACE(0x1197b0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b0d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197b0db jmp 0x1197b0e6 */
  goto L_1197b0e6;
L_1197b0dd:;
  /* 1197b0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b0e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b0e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197b0e6:;
  /* 1197b0e6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b0ea jge 0x1197b139 */
  if ((C.sf==C.of)) goto L_1197b139;
  /* 1197b0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b0ef cmp dword ptr [ecx*4 + 0x119a1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119a1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b0f7 je 0x1197b137 */
  if (C.zf) goto L_1197b137;
  /* 1197b0f9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b0fd je 0x1197b137 */
  if (C.zf) goto L_1197b137;
  /* 1197b0ff cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b103 je 0x1197b137 */
  if (C.zf) goto L_1197b137;
  /* 1197b105 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b109 je 0x1197b137 */
  if (C.zf) goto L_1197b137;
  /* 1197b10b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b10f je 0x1197b137 */
  if (C.zf) goto L_1197b137;
  /* 1197b111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b114 mov eax, dword ptr [edx*4 + 0x119a1b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a1b40)));
  /* 1197b11b push eax */
  push32((uint32_t)(EAX));
  /* 1197b11c call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x1197b122u);
  /* 1197b122 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197b124 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b127 mov edx, dword ptr [ecx*4 + 0x119a1b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a1b40)));
  /* 1197b12e push edx */
  push32((uint32_t)(EDX));
  /* 1197b12f call 0x11978200 */
  push32(0x1197b134u); f_11978200();
  /* 1197b134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b137:;
  /* 1197b137 jmp 0x1197b0dd */
  goto L_1197b0dd;
L_1197b139:;
  /* 1197b139 mov eax, dword ptr [0x119a1b64] */
  EAX = (r32((uint32_t)(0x119a1b64)));
  /* 1197b13e push eax */
  push32((uint32_t)(EAX));
  /* 1197b13f call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x1197b145u);
  /* 1197b145 mov ecx, dword ptr [0x119a1b74] */
  ECX = (r32((uint32_t)(0x119a1b74)));
  /* 1197b14b push ecx */
  push32((uint32_t)(ECX));
  /* 1197b14c call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x1197b152u);
  /* 1197b152 mov edx, dword ptr [0x119a1b84] */
  EDX = (r32((uint32_t)(0x119a1b84)));
  /* 1197b158 push edx */
  push32((uint32_t)(EDX));
  /* 1197b159 call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x1197b15fu);
  /* 1197b15f mov eax, dword ptr [0x119a1b44] */
  EAX = (r32((uint32_t)(0x119a1b44)));
  /* 1197b164 push eax */
  push32((uint32_t)(EAX));
  /* 1197b165 call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x1197b16bu);
  /* 1197b16b mov esp, ebp */
  ESP = (EBP);
  /* 1197b16d pop ebp */
  EBP = (pop32());
  /* 1197b16e ret  */
  ESPCHK(0x1197b0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b170 @ 0x1197b170 (151 bytes, 46 insns) */
void f_1197b170(void) {
  FTRACE(0x1197b170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b170 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b171 mov ebp, esp */
  EBP = (ESP);
  /* 1197b173 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b177 cmp dword ptr [eax*4 + 0x119a1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x119a1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b17f jne 0x1197b1f2 */
  if (!C.zf) goto L_1197b1f2;
  /* 1197b181 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1197b186 push 0x1199fb54 */
  push32((uint32_t)(0x1199fb54u));
  /* 1197b18b push 2 */
  push32((uint32_t)(0x2u));
  /* 1197b18d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1197b18f call 0x11977770 */
  push32(0x1197b194u); f_11977770();
  /* 1197b194 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b197 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b19a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b19e jne 0x1197b1aa */
  if (!C.zf) goto L_1197b1aa;
  /* 1197b1a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1197b1a2 call 0x119766e0 */
  push32(0x1197b1a7u); f_119766e0();
  /* 1197b1a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b1aa:;
  /* 1197b1aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1197b1ac call 0x1197b170 */
  push32(0x1197b1b1u); f_1197b170();
  /* 1197b1b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b1b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b1b7 cmp dword ptr [ecx*4 + 0x119a1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119a1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b1bf jne 0x1197b1da */
  if (!C.zf) goto L_1197b1da;
  /* 1197b1c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b1c4 push edx */
  push32((uint32_t)(EDX));
  /* 1197b1c5 call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x1197b1cbu);
  /* 1197b1cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b1ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b1d1 mov dword ptr [eax*4 + 0x119a1b40], ecx */
  w32((uint32_t)(EAX*4 + 0x119a1b40), (ECX));
  /* 1197b1d8 jmp 0x1197b1e8 */
  goto L_1197b1e8;
L_1197b1da:;
  /* 1197b1da push 2 */
  push32((uint32_t)(0x2u));
  /* 1197b1dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b1df push edx */
  push32((uint32_t)(EDX));
  /* 1197b1e0 call 0x11978200 */
  push32(0x1197b1e5u); f_11978200();
  /* 1197b1e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b1e8:;
  /* 1197b1e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1197b1ea call 0x1197b210 */
  push32(0x1197b1efu); f_1197b210();
  /* 1197b1ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b1f2:;
  /* 1197b1f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b1f5 mov ecx, dword ptr [eax*4 + 0x119a1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a1b40)));
  /* 1197b1fc push ecx */
  push32((uint32_t)(ECX));
  /* 1197b1fd call dword ptr [0x119a634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a634c))), 0x1197b203u);
  /* 1197b203 mov esp, ebp */
  ESP = (EBP);
  /* 1197b205 pop ebp */
  EBP = (pop32());
  /* 1197b206 ret  */
  ESPCHK(0x1197b170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x1197b210 (22 bytes, 8 insns) */
void f_1197b210(void) {
  FTRACE(0x1197b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b210 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b211 mov ebp, esp */
  EBP = (ESP);
  /* 1197b213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b216 mov ecx, dword ptr [eax*4 + 0x119a1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a1b40)));
  /* 1197b21d push ecx */
  push32((uint32_t)(ECX));
  /* 1197b21e call dword ptr [0x119a6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6348))), 0x1197b224u);
  /* 1197b224 pop ebp */
  EBP = (pop32());
  /* 1197b225 ret  */
  ESPCHK(0x1197b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b230 @ 0x1197b230 (26 bytes, 10 insns) */
void f_1197b230(void) {
  FTRACE(0x1197b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b230 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b231 mov ebp, esp */
  EBP = (ESP);
  /* 1197b233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b236 push eax */
  push32((uint32_t)(EAX));
  /* 1197b237 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b239 call dword ptr [0x119a6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6350))), 0x1197b23fu);
  /* 1197b23f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1197b244 call dword ptr [0x119a63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b4))), 0x1197b24au);
  /* 1197b24a pop ebp */
  EBP = (pop32());
  /* 1197b24b ret  */
  ESPCHK(0x1197b230u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1197b250 (446 bytes, 130 insns) */
void f_1197b250(void) {
  FTRACE(0x1197b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b250 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b251 mov ebp, esp */
  EBP = (ESP);
  /* 1197b253 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197b256 call 0x119771b0 */
  push32(0x1197b25bu); f_119771b0();
  /* 1197b25b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197b25e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b261 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1197b264 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b268 push edx */
  push32((uint32_t)(EDX));
  /* 1197b269 call 0x1197b410 */
  push32(0x1197b26eu); f_1197b410();
  /* 1197b26e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b271 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197b274 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b278 je 0x1197b283 */
  if (C.zf) goto L_1197b283;
  /* 1197b27a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b27d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b281 jne 0x1197b292 */
  if (!C.zf) goto L_1197b292;
L_1197b283:;
  /* 1197b283 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b286 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b287 call dword ptr [0x119a6340] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6340))), 0x1197b28du);
  /* 1197b28d jmp 0x1197b40a */
  goto L_1197b40a;
L_1197b292:;
  /* 1197b292 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b295 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b299 jne 0x1197b2af */
  if (!C.zf) goto L_1197b2af;
  /* 1197b29b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b29e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1197b2a5 mov eax, 1 */
  EAX = (0x1u);
  /* 1197b2aa jmp 0x1197b40a */
  goto L_1197b40a;
L_1197b2af:;
  /* 1197b2af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b2b2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b2b6 jne 0x1197b2c0 */
  if (!C.zf) goto L_1197b2c0;
  /* 1197b2b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197b2bb jmp 0x1197b40a */
  goto L_1197b40a;
L_1197b2c0:;
  /* 1197b2c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b2c3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197b2c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b2c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b2cc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1197b2cf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1197b2d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b2d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b2d8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1197b2db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b2de cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b2e2 jne 0x1197b3e7 */
  if (!C.zf) goto L_1197b3e7;
  /* 1197b2e8 mov eax, dword ptr [0x119a1c78] */
  EAX = (r32((uint32_t)(0x119a1c78)));
  /* 1197b2ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1197b2f0 jmp 0x1197b2fb */
  goto L_1197b2fb;
L_1197b2f2:;
  /* 1197b2f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197b2f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b2f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1197b2fb:;
  /* 1197b2fb mov edx, dword ptr [0x119a1c78] */
  EDX = (r32((uint32_t)(0x119a1c78)));
  /* 1197b301 add edx, dword ptr [0x119a1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b307 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b30a jge 0x1197b322 */
  if ((C.sf==C.of)) goto L_1197b322;
  /* 1197b30c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197b30f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197b312 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b315 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1197b318 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1197b320 jmp 0x1197b2f2 */
  goto L_1197b2f2;
L_1197b322:;
  /* 1197b322 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b325 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1197b328 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197b32b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b32e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b334 jne 0x1197b345 */
  if (!C.zf) goto L_1197b345;
  /* 1197b336 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b339 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1197b340 jmp 0x1197b3cd */
  goto L_1197b3cd;
L_1197b345:;
  /* 1197b345 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b348 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b34e jne 0x1197b35c */
  if (!C.zf) goto L_1197b35c;
  /* 1197b350 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b353 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1197b35a jmp 0x1197b3cd */
  goto L_1197b3cd;
L_1197b35c:;
  /* 1197b35c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b35f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b365 jne 0x1197b373 */
  if (!C.zf) goto L_1197b373;
  /* 1197b367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b36a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1197b371 jmp 0x1197b3cd */
  goto L_1197b3cd;
L_1197b373:;
  /* 1197b373 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b376 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b37c jne 0x1197b38a */
  if (!C.zf) goto L_1197b38a;
  /* 1197b37e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b381 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1197b388 jmp 0x1197b3cd */
  goto L_1197b3cd;
L_1197b38a:;
  /* 1197b38a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b38d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b393 jne 0x1197b3a1 */
  if (!C.zf) goto L_1197b3a1;
  /* 1197b395 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b398 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1197b39f jmp 0x1197b3cd */
  goto L_1197b3cd;
L_1197b3a1:;
  /* 1197b3a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b3a4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b3aa jne 0x1197b3b8 */
  if (!C.zf) goto L_1197b3b8;
  /* 1197b3ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b3af mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1197b3b6 jmp 0x1197b3cd */
  goto L_1197b3cd;
L_1197b3b8:;
  /* 1197b3b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b3bb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b3c1 jne 0x1197b3cd */
  if (!C.zf) goto L_1197b3cd;
  /* 1197b3c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b3c6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1197b3cd:;
  /* 1197b3cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b3d0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1197b3d3 push edx */
  push32((uint32_t)(EDX));
  /* 1197b3d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1197b3d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1197b3d9u);
  /* 1197b3d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b3dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b3df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197b3e2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1197b3e5 jmp 0x1197b3fe */
  goto L_1197b3fe;
L_1197b3e7:;
  /* 1197b3e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b3ea mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1197b3f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b3f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197b3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b3f8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1197b3fbu);
  /* 1197b3fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b3fe:;
  /* 1197b3fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b401 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197b404 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1197b407 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1197b40a:;
  /* 1197b40a mov esp, ebp */
  ESP = (EBP);
  /* 1197b40c pop ebp */
  EBP = (pop32());
  /* 1197b40d ret  */
  ESPCHK(0x1197b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b410 @ 0x1197b410 (89 bytes, 35 insns) */
void f_1197b410(void) {
  FTRACE(0x1197b410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b410 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b411 mov ebp, esp */
  EBP = (ESP);
  /* 1197b413 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b414 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b417 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197b41a:;
  /* 1197b41a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b41d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197b41f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b422 je 0x1197b442 */
  if (C.zf) goto L_1197b442;
  /* 1197b424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b427 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b42a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b42d mov ecx, dword ptr [0x119a1c84] */
  ECX = (r32((uint32_t)(0x119a1c84)));
  /* 1197b433 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197b436 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b439 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b43b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b43e jae 0x1197b442 */
  if (!C.cf) goto L_1197b442;
  /* 1197b440 jmp 0x1197b41a */
  goto L_1197b41a;
L_1197b442:;
  /* 1197b442 mov eax, dword ptr [0x119a1c84] */
  EAX = (r32((uint32_t)(0x119a1c84)));
  /* 1197b447 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197b44a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b44d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b44f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b452 jae 0x1197b45e */
  if (!C.cf) goto L_1197b45e;
  /* 1197b454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b457 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197b459 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b45c je 0x1197b462 */
  if (C.zf) goto L_1197b462;
L_1197b45e:;
  /* 1197b45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b460 jmp 0x1197b465 */
  goto L_1197b465;
L_1197b462:;
  /* 1197b462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1197b465:;
  /* 1197b465 mov esp, ebp */
  ESP = (EBP);
  /* 1197b467 pop ebp */
  EBP = (pop32());
  /* 1197b468 ret  */
  ESPCHK(0x1197b410u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1197b470 (48 bytes, 17 insns) */
void f_1197b470(void) {
  FTRACE(0x1197b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b470 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b471 mov ebp, esp */
  EBP = (ESP);
  /* 1197b473 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b474 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b476 call 0x1197b170 */
  push32(0x1197b47bu); f_1197b170();
  /* 1197b47b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b47e mov eax, dword ptr [0x119a3a5c] */
  EAX = (r32((uint32_t)(0x119a3a5c)));
  /* 1197b483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b486 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b489 mov dword ptr [0x119a3a5c], ecx */
  w32((uint32_t)(0x119a3a5c), (ECX));
  /* 1197b48f push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b491 call 0x1197b210 */
  push32(0x1197b496u); f_1197b210();
  /* 1197b496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b49c mov esp, ebp */
  ESP = (EBP);
  /* 1197b49e pop ebp */
  EBP = (pop32());
  /* 1197b49f ret  */
  ESPCHK(0x1197b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4a0 @ 0x1197b4a0 (10 bytes, 5 insns) */
void f_1197b4a0(void) {
  FTRACE(0x1197b4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b4a3 mov eax, dword ptr [0x119a3a5c] */
  EAX = (r32((uint32_t)(0x119a3a5c)));
  /* 1197b4a8 pop ebp */
  EBP = (pop32());
  /* 1197b4a9 ret  */
  ESPCHK(0x1197b4a0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1197b4b0 (45 bytes, 19 insns) */
void f_1197b4b0(void) {
  FTRACE(0x1197b4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b4b4 mov eax, dword ptr [0x119a3a5c] */
  EAX = (r32((uint32_t)(0x119a3a5c)));
  /* 1197b4b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b4bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b4c0 je 0x1197b4d0 */
  if (C.zf) goto L_1197b4d0;
  /* 1197b4c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b4c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1197b4c9u);
  /* 1197b4c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b4cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b4ce jne 0x1197b4d4 */
  if (!C.zf) goto L_1197b4d4;
L_1197b4d0:;
  /* 1197b4d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b4d2 jmp 0x1197b4d9 */
  goto L_1197b4d9;
L_1197b4d4:;
  /* 1197b4d4 mov eax, 1 */
  EAX = (0x1u);
L_1197b4d9:;
  /* 1197b4d9 mov esp, ebp */
  ESP = (EBP);
  /* 1197b4db pop ebp */
  EBP = (pop32());
  /* 1197b4dc ret  */
  ESPCHK(0x1197b4b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1197b4e0 (88 bytes, 40 insns) */
void f_1197b4e0(void) {
  FTRACE(0x1197b4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b4e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1197b4e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197b4e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197b4ea je 0x1197b533 */
  if (C.zf) goto L_1197b533;
  /* 1197b4ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b4ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1197b4f2 push edi */
  push32((uint32_t)(EDI));
  /* 1197b4f3 mov edi, ecx */
  EDI = (ECX);
  /* 1197b4f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b4f8 jb 0x1197b527 */
  if (C.cf) goto L_1197b527;
  /* 1197b4fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197b4fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1197b4ff je 0x1197b509 */
  if (C.zf) goto L_1197b509;
  /* 1197b501 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1197b503:;
  /* 1197b503 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197b505 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197b506 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1197b507 jne 0x1197b503 */
  if (!C.zf) goto L_1197b503;
L_1197b509:;
  /* 1197b509 mov ecx, eax */
  ECX = (EAX);
  /* 1197b50b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1197b50e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b510 mov ecx, eax */
  ECX = (EAX);
  /* 1197b512 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1197b515 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b517 mov ecx, edx */
  ECX = (EDX);
  /* 1197b519 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1197b51c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197b51f je 0x1197b527 */
  if (C.zf) goto L_1197b527;
  /* 1197b521 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1197b523 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197b525 je 0x1197b52d */
  if (C.zf) goto L_1197b52d;
L_1197b527:;
  /* 1197b527 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197b529 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197b52a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1197b52b jne 0x1197b527 */
  if (!C.zf) goto L_1197b527;
L_1197b52d:;
  /* 1197b52d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197b531 pop edi */
  EDI = (pop32());
  /* 1197b532 ret  */
  ESPCHK(0x1197b4e0u, _esp0);
  ESP += 4; return;
L_1197b533:;
  /* 1197b533 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1197b537 ret  */
  ESPCHK(0x1197b4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b540 @ 0x1197b540 (23 bytes, 10 insns) */
void f_1197b540(void) {
  FTRACE(0x1197b540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b540 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b541 mov ebp, esp */
  EBP = (ESP);
  /* 1197b543 mov eax, dword ptr [0x119a3a58] */
  EAX = (r32((uint32_t)(0x119a3a58)));
  /* 1197b548 push eax */
  push32((uint32_t)(EAX));
  /* 1197b549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b54c push ecx */
  push32((uint32_t)(ECX));
  /* 1197b54d call 0x1197b560 */
  push32(0x1197b552u); f_1197b560();
  /* 1197b552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b555 pop ebp */
  EBP = (pop32());
  /* 1197b556 ret  */
  ESPCHK(0x1197b540u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1197b560 (87 bytes, 34 insns) */
void f_1197b560(void) {
  FTRACE(0x1197b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b560 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b561 mov ebp, esp */
  EBP = (ESP);
  /* 1197b563 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b564 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b568 jbe 0x1197b56e */
  if ((C.cf||C.zf)) goto L_1197b56e;
  /* 1197b56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b56c jmp 0x1197b5b3 */
  goto L_1197b5b3;
L_1197b56e:;
  /* 1197b56e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b572 ja 0x1197b585 */
  if ((!C.cf&&!C.zf)) goto L_1197b585;
  /* 1197b574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b577 push eax */
  push32((uint32_t)(EAX));
  /* 1197b578 call 0x1197b5c0 */
  push32(0x1197b57du); f_1197b5c0();
  /* 1197b57d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b580 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b583 jmp 0x1197b58c */
  goto L_1197b58c;
L_1197b585:;
  /* 1197b585 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1197b58c:;
  /* 1197b58c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b590 jne 0x1197b598 */
  if (!C.zf) goto L_1197b598;
  /* 1197b592 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b596 jne 0x1197b59d */
  if (!C.zf) goto L_1197b59d;
L_1197b598:;
  /* 1197b598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b59b jmp 0x1197b5b3 */
  goto L_1197b5b3;
L_1197b59d:;
  /* 1197b59d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b5a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b5a1 call 0x1197b4b0 */
  push32(0x1197b5a6u); f_1197b4b0();
  /* 1197b5a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b5a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b5ab jne 0x1197b5b1 */
  if (!C.zf) goto L_1197b5b1;
  /* 1197b5ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b5af jmp 0x1197b5b3 */
  goto L_1197b5b3;
L_1197b5b1:;
  /* 1197b5b1 jmp 0x1197b56e */
  goto L_1197b56e;
L_1197b5b3:;
  /* 1197b5b3 mov esp, ebp */
  ESP = (EBP);
  /* 1197b5b5 pop ebp */
  EBP = (pop32());
  /* 1197b5b6 ret  */
  ESPCHK(0x1197b560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c0 @ 0x1197b5c0 (109 bytes, 37 insns) */
void f_1197b5c0(void) {
  FTRACE(0x1197b5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b5c7 cmp eax, dword ptr [0x119a1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b5cd ja 0x1197b5fd */
  if ((!C.cf&&!C.zf)) goto L_1197b5fd;
  /* 1197b5cf push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b5d1 call 0x1197b170 */
  push32(0x1197b5d6u); f_1197b170();
  /* 1197b5d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b5d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b5dc push ecx */
  push32((uint32_t)(ECX));
  /* 1197b5dd call 0x1197c100 */
  push32(0x1197b5e2u); f_1197c100();
  /* 1197b5e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b5e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b5e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b5ea call 0x1197b210 */
  push32(0x1197b5efu); f_1197b210();
  /* 1197b5ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b5f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b5f6 je 0x1197b5fd */
  if (C.zf) goto L_1197b5fd;
  /* 1197b5f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b5fb jmp 0x1197b629 */
  goto L_1197b629;
L_1197b5fd:;
  /* 1197b5fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b601 jne 0x1197b60a */
  if (!C.zf) goto L_1197b60a;
  /* 1197b603 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1197b60a:;
  /* 1197b60a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b60d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b610 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1197b613 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1197b616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b619 push eax */
  push32((uint32_t)(EAX));
  /* 1197b61a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b61c mov ecx, dword ptr [0x119a520c] */
  ECX = (r32((uint32_t)(0x119a520c)));
  /* 1197b622 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b623 call dword ptr [0x119a633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a633c))), 0x1197b629u);
L_1197b629:;
  /* 1197b629 mov esp, ebp */
  ESP = (EBP);
  /* 1197b62b pop ebp */
  EBP = (pop32());
  /* 1197b62c ret  */
  ESPCHK(0x1197b5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b630 @ 0x1197b630 (10 bytes, 5 insns) */
void f_1197b630(void) {
  FTRACE(0x1197b630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b630 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b631 mov ebp, esp */
  EBP = (ESP);
  /* 1197b633 mov eax, 1 */
  EAX = (0x1u);
  /* 1197b638 pop ebp */
  EBP = (pop32());
  /* 1197b639 ret  */
  ESPCHK(0x1197b630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b640 @ 0x1197b640 (173 bytes, 59 insns) */
void f_1197b640(void) {
  FTRACE(0x1197b640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b640 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b641 mov ebp, esp */
  EBP = (ESP);
  /* 1197b643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197b646 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b64a jbe 0x1197b653 */
  if ((C.cf||C.zf)) goto L_1197b653;
  /* 1197b64c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b64e jmp 0x1197b6e9 */
  goto L_1197b6e9;
L_1197b653:;
  /* 1197b653 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b655 call 0x1197b170 */
  push32(0x1197b65au); f_1197b170();
  /* 1197b65a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b65d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b660 push eax */
  push32((uint32_t)(EAX));
  /* 1197b661 call 0x1197ba70 */
  push32(0x1197b666u); f_1197ba70();
  /* 1197b666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b669 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197b66c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b670 je 0x1197b6b1 */
  if (C.zf) goto L_1197b6b1;
  /* 1197b672 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197b679 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b67c cmp ecx, dword ptr [0x119a1c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b682 ja 0x1197b6a2 */
  if ((!C.cf&&!C.zf)) goto L_1197b6a2;
  /* 1197b684 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b687 push edx */
  push32((uint32_t)(EDX));
  /* 1197b688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b68b push eax */
  push32((uint32_t)(EAX));
  /* 1197b68c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b68f push ecx */
  push32((uint32_t)(ECX));
  /* 1197b690 call 0x1197c940 */
  push32(0x1197b695u); f_1197c940();
  /* 1197b695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b69a je 0x1197b6a2 */
  if (C.zf) goto L_1197b6a2;
  /* 1197b69c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b69f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197b6a2:;
  /* 1197b6a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b6a4 call 0x1197b210 */
  push32(0x1197b6a9u); f_1197b210();
  /* 1197b6a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b6ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b6af jmp 0x1197b6e9 */
  goto L_1197b6e9;
L_1197b6b1:;
  /* 1197b6b1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b6b3 call 0x1197b210 */
  push32(0x1197b6b8u); f_1197b210();
  /* 1197b6b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b6bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b6bf jne 0x1197b6c8 */
  if (!C.zf) goto L_1197b6c8;
  /* 1197b6c1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1197b6c8:;
  /* 1197b6c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b6cb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b6ce and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1197b6d0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1197b6d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b6d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b6da push edx */
  push32((uint32_t)(EDX));
  /* 1197b6db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1197b6dd mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197b6e2 push eax */
  push32((uint32_t)(EAX));
  /* 1197b6e3 call dword ptr [0x119a6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6344))), 0x1197b6e9u);
L_1197b6e9:;
  /* 1197b6e9 mov esp, ebp */
  ESP = (EBP);
  /* 1197b6eb pop ebp */
  EBP = (pop32());
  /* 1197b6ec ret  */
  ESPCHK(0x1197b640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x1197b6f0 (490 bytes, 165 insns) */
void f_1197b6f0(void) {
  FTRACE(0x1197b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b6f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197b6f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b6fa jne 0x1197b70d */
  if (!C.zf) goto L_1197b70d;
  /* 1197b6fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b6ff push eax */
  push32((uint32_t)(EAX));
  /* 1197b700 call 0x1197b540 */
  push32(0x1197b705u); f_1197b540();
  /* 1197b705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b708 jmp 0x1197b8d6 */
  goto L_1197b8d6;
L_1197b70d:;
  /* 1197b70d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b711 jne 0x1197b726 */
  if (!C.zf) goto L_1197b726;
  /* 1197b713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b716 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b717 call 0x1197b8e0 */
  push32(0x1197b71cu); f_1197b8e0();
  /* 1197b71c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b71f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b721 jmp 0x1197b8d6 */
  goto L_1197b8d6;
L_1197b726:;
  /* 1197b726 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1197b72d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b731 ja 0x1197b8a9 */
  if ((!C.cf&&!C.zf)) goto L_1197b8a9;
  /* 1197b737 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b739 call 0x1197b170 */
  push32(0x1197b73eu); f_1197b170();
  /* 1197b73e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b744 push edx */
  push32((uint32_t)(EDX));
  /* 1197b745 call 0x1197ba70 */
  push32(0x1197b74au); f_1197ba70();
  /* 1197b74a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b74d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197b750 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b754 je 0x1197b86c */
  if (C.zf) goto L_1197b86c;
  /* 1197b75a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b75d cmp eax, dword ptr [0x119a1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b763 ja 0x1197b7e0 */
  if ((!C.cf&&!C.zf)) goto L_1197b7e0;
  /* 1197b765 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b768 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b76c push edx */
  push32((uint32_t)(EDX));
  /* 1197b76d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197b770 push eax */
  push32((uint32_t)(EAX));
  /* 1197b771 call 0x1197c940 */
  push32(0x1197b776u); f_1197c940();
  /* 1197b776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b77b je 0x1197b785 */
  if (C.zf) goto L_1197b785;
  /* 1197b77d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b780 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197b783 jmp 0x1197b7e0 */
  goto L_1197b7e0;
L_1197b785:;
  /* 1197b785 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b788 push edx */
  push32((uint32_t)(EDX));
  /* 1197b789 call 0x1197c100 */
  push32(0x1197b78eu); f_1197c100();
  /* 1197b78e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b791 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197b794 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b798 je 0x1197b7e0 */
  if (C.zf) goto L_1197b7e0;
  /* 1197b79a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b79d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1197b7a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197b7a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197b7a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b7a9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b7ac jae 0x1197b7b6 */
  if (!C.cf) goto L_1197b7b6;
  /* 1197b7ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b7b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197b7b4 jmp 0x1197b7bc */
  goto L_1197b7bc;
L_1197b7b6:;
  /* 1197b7b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b7b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1197b7bc:;
  /* 1197b7bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197b7bf push edx */
  push32((uint32_t)(EDX));
  /* 1197b7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b7c3 push eax */
  push32((uint32_t)(EAX));
  /* 1197b7c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b7c8 call 0x1197e050 */
  push32(0x1197b7cdu); f_1197e050();
  /* 1197b7cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b7d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b7d3 push edx */
  push32((uint32_t)(EDX));
  /* 1197b7d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197b7d7 push eax */
  push32((uint32_t)(EAX));
  /* 1197b7d8 call 0x1197bb30 */
  push32(0x1197b7ddu); f_1197bb30();
  /* 1197b7dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b7e0:;
  /* 1197b7e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b7e4 jne 0x1197b860 */
  if (!C.zf) goto L_1197b860;
  /* 1197b7e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b7ea jne 0x1197b7f3 */
  if (!C.zf) goto L_1197b7f3;
  /* 1197b7ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1197b7f3:;
  /* 1197b7f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b7f6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b7f9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1197b7fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1197b7ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b802 push edx */
  push32((uint32_t)(EDX));
  /* 1197b803 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b805 mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197b80a push eax */
  push32((uint32_t)(EAX));
  /* 1197b80b call dword ptr [0x119a633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a633c))), 0x1197b811u);
  /* 1197b811 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197b814 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b818 je 0x1197b860 */
  if (C.zf) goto L_1197b860;
  /* 1197b81a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b81d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1197b820 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197b823 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197b826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b829 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b82c jae 0x1197b836 */
  if (!C.cf) goto L_1197b836;
  /* 1197b82e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b831 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1197b834 jmp 0x1197b83c */
  goto L_1197b83c;
L_1197b836:;
  /* 1197b836 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b839 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1197b83c:;
  /* 1197b83c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197b83f push eax */
  push32((uint32_t)(EAX));
  /* 1197b840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b843 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b844 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b847 push edx */
  push32((uint32_t)(EDX));
  /* 1197b848 call 0x1197e050 */
  push32(0x1197b84du); f_1197e050();
  /* 1197b84d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b853 push eax */
  push32((uint32_t)(EAX));
  /* 1197b854 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197b857 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b858 call 0x1197bb30 */
  push32(0x1197b85du); f_1197bb30();
  /* 1197b85d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197b860:;
  /* 1197b860 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b862 call 0x1197b210 */
  push32(0x1197b867u); f_1197b210();
  /* 1197b867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b86a jmp 0x1197b8a9 */
  goto L_1197b8a9;
L_1197b86c:;
  /* 1197b86c push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b86e call 0x1197b210 */
  push32(0x1197b873u); f_1197b210();
  /* 1197b873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b876 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b87a jne 0x1197b883 */
  if (!C.zf) goto L_1197b883;
  /* 1197b87c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1197b883:;
  /* 1197b883 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b886 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b889 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1197b88c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1197b88f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b892 push eax */
  push32((uint32_t)(EAX));
  /* 1197b893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b896 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b897 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b899 mov edx, dword ptr [0x119a520c] */
  EDX = (r32((uint32_t)(0x119a520c)));
  /* 1197b89f push edx */
  push32((uint32_t)(EDX));
  /* 1197b8a0 call dword ptr [0x119a6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6344))), 0x1197b8a6u);
  /* 1197b8a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1197b8a9:;
  /* 1197b8a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b8ad jne 0x1197b8b8 */
  if (!C.zf) goto L_1197b8b8;
  /* 1197b8af cmp dword ptr [0x119a3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b8b6 jne 0x1197b8bd */
  if (!C.zf) goto L_1197b8bd;
L_1197b8b8:;
  /* 1197b8b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197b8bb jmp 0x1197b8d6 */
  goto L_1197b8d6;
L_1197b8bd:;
  /* 1197b8bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197b8c0 push eax */
  push32((uint32_t)(EAX));
  /* 1197b8c1 call 0x1197b4b0 */
  push32(0x1197b8c6u); f_1197b4b0();
  /* 1197b8c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b8c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b8cb jne 0x1197b8d1 */
  if (!C.zf) goto L_1197b8d1;
  /* 1197b8cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b8cf jmp 0x1197b8d6 */
  goto L_1197b8d6;
L_1197b8d1:;
  /* 1197b8d1 jmp 0x1197b726 */
  goto L_1197b726;
L_1197b8d6:;
  /* 1197b8d6 mov esp, ebp */
  ESP = (EBP);
  /* 1197b8d8 pop ebp */
  EBP = (pop32());
  /* 1197b8d9 ret  */
  ESPCHK(0x1197b6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x1197b8e0 (104 bytes, 38 insns) */
void f_1197b8e0(void) {
  FTRACE(0x1197b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b8e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b8e8 jne 0x1197b8ec */
  if (!C.zf) goto L_1197b8ec;
  /* 1197b8ea jmp 0x1197b944 */
  goto L_1197b944;
L_1197b8ec:;
  /* 1197b8ec push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b8ee call 0x1197b170 */
  push32(0x1197b8f3u); f_1197b170();
  /* 1197b8f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b8f9 push eax */
  push32((uint32_t)(EAX));
  /* 1197b8fa call 0x1197ba70 */
  push32(0x1197b8ffu); f_1197ba70();
  /* 1197b8ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b902 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197b905 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b909 je 0x1197b927 */
  if (C.zf) goto L_1197b927;
  /* 1197b90b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b90e push ecx */
  push32((uint32_t)(ECX));
  /* 1197b90f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b912 push edx */
  push32((uint32_t)(EDX));
  /* 1197b913 call 0x1197bb30 */
  push32(0x1197b918u); f_1197bb30();
  /* 1197b918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b91b push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b91d call 0x1197b210 */
  push32(0x1197b922u); f_1197b210();
  /* 1197b922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b925 jmp 0x1197b944 */
  goto L_1197b944;
L_1197b927:;
  /* 1197b927 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b929 call 0x1197b210 */
  push32(0x1197b92eu); f_1197b210();
  /* 1197b92e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197b934 push eax */
  push32((uint32_t)(EAX));
  /* 1197b935 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b937 mov ecx, dword ptr [0x119a520c] */
  ECX = (r32((uint32_t)(0x119a520c)));
  /* 1197b93d push ecx */
  push32((uint32_t)(ECX));
  /* 1197b93e call dword ptr [0x119a6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6368))), 0x1197b944u);
L_1197b944:;
  /* 1197b944 mov esp, ebp */
  ESP = (EBP);
  /* 1197b946 pop ebp */
  EBP = (pop32());
  /* 1197b947 ret  */
  ESPCHK(0x1197b8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x1197b950 (116 bytes, 34 insns) */
void f_1197b950(void) {
  FTRACE(0x1197b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b950 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b951 mov ebp, esp */
  EBP = (ESP);
  /* 1197b953 push ecx */
  push32((uint32_t)(ECX));
  /* 1197b954 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1197b95b push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b95d call 0x1197b170 */
  push32(0x1197b962u); f_1197b170();
  /* 1197b962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b965 call 0x1197d060 */
  push32(0x1197b96au); f_1197d060();
  /* 1197b96a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b96c jge 0x1197b975 */
  if ((C.sf==C.of)) goto L_1197b975;
  /* 1197b96e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1197b975:;
  /* 1197b975 push 9 */
  push32((uint32_t)(0x9u));
  /* 1197b977 call 0x1197b210 */
  push32(0x1197b97cu); f_1197b210();
  /* 1197b97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197b97f push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b981 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197b983 mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197b988 push eax */
  push32((uint32_t)(EAX));
  /* 1197b989 call dword ptr [0x119a637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a637c))), 0x1197b98fu);
  /* 1197b98f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197b991 jne 0x1197b9bd */
  if (!C.zf) goto L_1197b9bd;
  /* 1197b993 call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x1197b999u);
  /* 1197b999 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b99c jne 0x1197b9b6 */
  if (!C.zf) goto L_1197b9b6;
  /* 1197b99e call 0x1197f650 */
  push32(0x1197b9a3u); f_1197f650();
  /* 1197b9a3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1197b9a9 call 0x1197f640 */
  push32(0x1197b9aeu); f_1197f640();
  /* 1197b9ae mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1197b9b4 jmp 0x1197b9bd */
  goto L_1197b9bd;
L_1197b9b6:;
  /* 1197b9b6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1197b9bd:;
  /* 1197b9bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197b9c0 mov esp, ebp */
  ESP = (EBP);
  /* 1197b9c2 pop ebp */
  EBP = (pop32());
  /* 1197b9c3 ret  */
  ESPCHK(0x1197b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x1197b9d0 (10 bytes, 5 insns) */
void f_1197b9d0(void) {
  FTRACE(0x1197b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b9d3 call 0x1197b950 */
  push32(0x1197b9d8u); f_1197b950();
  /* 1197b9d8 pop ebp */
  EBP = (pop32());
  /* 1197b9d9 ret  */
  ESPCHK(0x1197b9d0u, _esp0);
  ESP += 4; return;
}

