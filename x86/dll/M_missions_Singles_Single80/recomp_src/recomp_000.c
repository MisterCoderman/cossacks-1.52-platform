#include "recomp.h"

/* OnInit @ 0x11d81005 (5 bytes, 1 insns) */
void f_11d81005(void) {
  FTRACE(0x11d81005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d81005 jmp 0x11d81030 */
  f_11d81030(); return;
}

/* thunk_FUN_10001e30 @ 0x11d8100a (5 bytes, 1 insns) */
void f_11d8100a(void) {
  FTRACE(0x11d8100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8100a jmp 0x11d81e30 */
  f_11d81e30(); return;
}

/* ProcessScenary @ 0x11d8100f (5 bytes, 1 insns) */
void f_11d8100f(void) {
  FTRACE(0x11d8100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8100f jmp 0x11d81e90 */
  f_11d81e90(); return;
}

/* FUN_10001030 @ 0x11d81030 (2857 bytes, 768 insns) */
void f_11d81030(void) {
  FTRACE(0x11d81030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d81030 push ebp */
  push32((uint32_t)(EBP));
  /* 11d81031 mov ebp, esp */
  EBP = (ESP);
  /* 11d81033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d81036 push ebx */
  push32((uint32_t)(EBX));
  /* 11d81037 push esi */
  push32((uint32_t)(ESI));
  /* 11d81038 push edi */
  push32((uint32_t)(EDI));
  /* 11d81039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11d8103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11d81041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11d81046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d81048 mov esi, esp */
  ESI = (ESP);
  /* 11d8104a push 0x11dac258 */
  push32((uint32_t)(0x11dac258u));
  /* 11d8104f push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d81054 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d8105au);
  /* 11d8105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8105f call 0x11d846d0 */
  push32(0x11d81064u); f_11d846d0();
  /* 11d81064 mov esi, esp */
  ESI = (ESP);
  /* 11d81066 push 0x11dac250 */
  push32((uint32_t)(0x11dac250u));
  /* 11d8106b push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d81070 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d81076u);
  /* 11d81076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8107b call 0x11d846d0 */
  push32(0x11d81080u); f_11d846d0();
  /* 11d81080 mov esi, esp */
  ESI = (ESP);
  /* 11d81082 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d81087 push 0x11db14a8 */
  push32((uint32_t)(0x11db14a8u));
  /* 11d8108c call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d81092u);
  /* 11d81092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81097 call 0x11d846d0 */
  push32(0x11d8109cu); f_11d846d0();
  /* 11d8109c mov esi, esp */
  ESI = (ESP);
  /* 11d8109e push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d810a3 push 0x11db14a0 */
  push32((uint32_t)(0x11db14a0u));
  /* 11d810a8 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d810aeu);
  /* 11d810ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d810b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d810b3 call 0x11d846d0 */
  push32(0x11d810b8u); f_11d846d0();
  /* 11d810b8 mov esi, esp */
  ESI = (ESP);
  /* 11d810ba push 0x11dac230 */
  push32((uint32_t)(0x11dac230u));
  /* 11d810bf push 0x11db1578 */
  push32((uint32_t)(0x11db1578u));
  /* 11d810c4 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d810cau);
  /* 11d810ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d810cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d810cf call 0x11d846d0 */
  push32(0x11d810d4u); f_11d846d0();
  /* 11d810d4 mov esi, esp */
  ESI = (ESP);
  /* 11d810d6 push 0x11dac228 */
  push32((uint32_t)(0x11dac228u));
  /* 11d810db push 0x11db1580 */
  push32((uint32_t)(0x11db1580u));
  /* 11d810e0 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d810e6u);
  /* 11d810e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d810e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d810eb call 0x11d846d0 */
  push32(0x11d810f0u); f_11d846d0();
  /* 11d810f0 mov esi, esp */
  ESI = (ESP);
  /* 11d810f2 push 0x11dac220 */
  push32((uint32_t)(0x11dac220u));
  /* 11d810f7 push 0x11db1588 */
  push32((uint32_t)(0x11db1588u));
  /* 11d810fc call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d81102u);
  /* 11d81102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81107 call 0x11d846d0 */
  push32(0x11d8110cu); f_11d846d0();
  /* 11d8110c mov esi, esp */
  ESI = (ESP);
  /* 11d8110e push 0x11dac218 */
  push32((uint32_t)(0x11dac218u));
  /* 11d81113 push 0x11db1590 */
  push32((uint32_t)(0x11db1590u));
  /* 11d81118 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d8111eu);
  /* 11d8111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81123 call 0x11d846d0 */
  push32(0x11d81128u); f_11d846d0();
  /* 11d81128 mov esi, esp */
  ESI = (ESP);
  /* 11d8112a push 0x11dac210 */
  push32((uint32_t)(0x11dac210u));
  /* 11d8112f push 0x11db14c0 */
  push32((uint32_t)(0x11db14c0u));
  /* 11d81134 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d8113au);
  /* 11d8113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8113f call 0x11d846d0 */
  push32(0x11d81144u); f_11d846d0();
  /* 11d81144 mov esi, esp */
  ESI = (ESP);
  /* 11d81146 push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d8114b push 0x11db1458 */
  push32((uint32_t)(0x11db1458u));
  /* 11d81150 call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d81156u);
  /* 11d81156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8115b call 0x11d846d0 */
  push32(0x11d81160u); f_11d846d0();
  /* 11d81160 mov esi, esp */
  ESI = (ESP);
  /* 11d81162 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d81167 push 0x11db1460 */
  push32((uint32_t)(0x11db1460u));
  /* 11d8116c call dword ptr [0x11db44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d8))), 0x11d81172u);
  /* 11d81172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81177 call 0x11d846d0 */
  push32(0x11d8117cu); f_11d846d0();
  /* 11d8117c mov esi, esp */
  ESI = (ESP);
  /* 11d8117e push 0x11dac1f8 */
  push32((uint32_t)(0x11dac1f8u));
  /* 11d81183 push 0x11db15b0 */
  push32((uint32_t)(0x11db15b0u));
  /* 11d81188 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d8118eu);
  /* 11d8118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81193 call 0x11d846d0 */
  push32(0x11d81198u); f_11d846d0();
  /* 11d81198 mov esi, esp */
  ESI = (ESP);
  /* 11d8119a push 0x11dac1ec */
  push32((uint32_t)(0x11dac1ecu));
  /* 11d8119f push 0x11db15f8 */
  push32((uint32_t)(0x11db15f8u));
  /* 11d811a4 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d811aau);
  /* 11d811aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d811ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d811af call 0x11d846d0 */
  push32(0x11d811b4u); f_11d846d0();
  /* 11d811b4 mov esi, esp */
  ESI = (ESP);
  /* 11d811b6 push 0x11dac1e4 */
  push32((uint32_t)(0x11dac1e4u));
  /* 11d811bb push 0x11db15a0 */
  push32((uint32_t)(0x11db15a0u));
  /* 11d811c0 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d811c6u);
  /* 11d811c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d811c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d811cb call 0x11d846d0 */
  push32(0x11d811d0u); f_11d846d0();
  /* 11d811d0 mov esi, esp */
  ESI = (ESP);
  /* 11d811d2 push 0x11dac1d8 */
  push32((uint32_t)(0x11dac1d8u));
  /* 11d811d7 push 0x11db1608 */
  push32((uint32_t)(0x11db1608u));
  /* 11d811dc call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d811e2u);
  /* 11d811e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d811e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d811e7 call 0x11d846d0 */
  push32(0x11d811ecu); f_11d846d0();
  /* 11d811ec mov esi, esp */
  ESI = (ESP);
  /* 11d811ee push 0x11dac1cc */
  push32((uint32_t)(0x11dac1ccu));
  /* 11d811f3 push 0x11db1610 */
  push32((uint32_t)(0x11db1610u));
  /* 11d811f8 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d811feu);
  /* 11d811fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81203 call 0x11d846d0 */
  push32(0x11d81208u); f_11d846d0();
  /* 11d81208 mov esi, esp */
  ESI = (ESP);
  /* 11d8120a push 0x11dac1c4 */
  push32((uint32_t)(0x11dac1c4u));
  /* 11d8120f push 0x11db15a8 */
  push32((uint32_t)(0x11db15a8u));
  /* 11d81214 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d8121au);
  /* 11d8121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8121f call 0x11d846d0 */
  push32(0x11d81224u); f_11d846d0();
  /* 11d81224 mov esi, esp */
  ESI = (ESP);
  /* 11d81226 push 0x11dac1b8 */
  push32((uint32_t)(0x11dac1b8u));
  /* 11d8122b push 0x11db1618 */
  push32((uint32_t)(0x11db1618u));
  /* 11d81230 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d81236u);
  /* 11d81236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8123b call 0x11d846d0 */
  push32(0x11d81240u); f_11d846d0();
  /* 11d81240 mov esi, esp */
  ESI = (ESP);
  /* 11d81242 push 0x11dac1ac */
  push32((uint32_t)(0x11dac1acu));
  /* 11d81247 push 0x11db1620 */
  push32((uint32_t)(0x11db1620u));
  /* 11d8124c call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d81252u);
  /* 11d81252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81257 call 0x11d846d0 */
  push32(0x11d8125cu); f_11d846d0();
  /* 11d8125c mov esi, esp */
  ESI = (ESP);
  /* 11d8125e push 0x11dac1a0 */
  push32((uint32_t)(0x11dac1a0u));
  /* 11d81263 push 0x11db15c0 */
  push32((uint32_t)(0x11db15c0u));
  /* 11d81268 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d8126eu);
  /* 11d8126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81273 call 0x11d846d0 */
  push32(0x11d81278u); f_11d846d0();
  /* 11d81278 mov esi, esp */
  ESI = (ESP);
  /* 11d8127a push 0x11dac194 */
  push32((uint32_t)(0x11dac194u));
  /* 11d8127f push 0x11db15c8 */
  push32((uint32_t)(0x11db15c8u));
  /* 11d81284 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d8128au);
  /* 11d8128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8128f call 0x11d846d0 */
  push32(0x11d81294u); f_11d846d0();
  /* 11d81294 mov esi, esp */
  ESI = (ESP);
  /* 11d81296 push 0x11dac188 */
  push32((uint32_t)(0x11dac188u));
  /* 11d8129b push 0x11db1418 */
  push32((uint32_t)(0x11db1418u));
  /* 11d812a0 call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d812a6u);
  /* 11d812a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d812a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d812ab call 0x11d846d0 */
  push32(0x11d812b0u); f_11d846d0();
  /* 11d812b0 mov esi, esp */
  ESI = (ESP);
  /* 11d812b2 push 0x11dac17c */
  push32((uint32_t)(0x11dac17cu));
  /* 11d812b7 push 0x11db1420 */
  push32((uint32_t)(0x11db1420u));
  /* 11d812bc call dword ptr [0x11db44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44dc))), 0x11d812c2u);
  /* 11d812c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d812c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d812c7 call 0x11d846d0 */
  push32(0x11d812ccu); f_11d846d0();
  /* 11d812cc mov esi, esp */
  ESI = (ESP);
  /* 11d812ce push 0x11dac16c */
  push32((uint32_t)(0x11dac16cu));
  /* 11d812d3 push 0x11db15d0 */
  push32((uint32_t)(0x11db15d0u));
  /* 11d812d8 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d812deu);
  /* 11d812de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d812e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d812e3 call 0x11d846d0 */
  push32(0x11d812e8u); f_11d846d0();
  /* 11d812e8 mov esi, esp */
  ESI = (ESP);
  /* 11d812ea push 0x11dac15c */
  push32((uint32_t)(0x11dac15cu));
  /* 11d812ef push 0x11db15d8 */
  push32((uint32_t)(0x11db15d8u));
  /* 11d812f4 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d812fau);
  /* 11d812fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d812fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d812ff call 0x11d846d0 */
  push32(0x11d81304u); f_11d846d0();
  /* 11d81304 mov esi, esp */
  ESI = (ESP);
  /* 11d81306 push 0x11dac14c */
  push32((uint32_t)(0x11dac14cu));
  /* 11d8130b push 0x11db1440 */
  push32((uint32_t)(0x11db1440u));
  /* 11d81310 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d81316u);
  /* 11d81316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8131b call 0x11d846d0 */
  push32(0x11d81320u); f_11d846d0();
  /* 11d81320 mov esi, esp */
  ESI = (ESP);
  /* 11d81322 push 0x11dac134 */
  push32((uint32_t)(0x11dac134u));
  /* 11d81327 push 0x11db1450 */
  push32((uint32_t)(0x11db1450u));
  /* 11d8132c call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d81332u);
  /* 11d81332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81337 call 0x11d846d0 */
  push32(0x11d8133cu); f_11d846d0();
  /* 11d8133c mov esi, esp */
  ESI = (ESP);
  /* 11d8133e push 0x11dac124 */
  push32((uint32_t)(0x11dac124u));
  /* 11d81343 push 0x11db1470 */
  push32((uint32_t)(0x11db1470u));
  /* 11d81348 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d8134eu);
  /* 11d8134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81353 call 0x11d846d0 */
  push32(0x11d81358u); f_11d846d0();
  /* 11d81358 mov esi, esp */
  ESI = (ESP);
  /* 11d8135a push 0x11dac114 */
  push32((uint32_t)(0x11dac114u));
  /* 11d8135f push 0x11db1560 */
  push32((uint32_t)(0x11db1560u));
  /* 11d81364 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d8136au);
  /* 11d8136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8136f call 0x11d846d0 */
  push32(0x11d81374u); f_11d846d0();
  /* 11d81374 mov esi, esp */
  ESI = (ESP);
  /* 11d81376 push 0x11dac104 */
  push32((uint32_t)(0x11dac104u));
  /* 11d8137b push 0x11db1478 */
  push32((uint32_t)(0x11db1478u));
  /* 11d81380 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d81386u);
  /* 11d81386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8138b call 0x11d846d0 */
  push32(0x11d81390u); f_11d846d0();
  /* 11d81390 mov esi, esp */
  ESI = (ESP);
  /* 11d81392 push 0x11dac0f4 */
  push32((uint32_t)(0x11dac0f4u));
  /* 11d81397 push 0x11db1568 */
  push32((uint32_t)(0x11db1568u));
  /* 11d8139c call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d813a2u);
  /* 11d813a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d813a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d813a7 call 0x11d846d0 */
  push32(0x11d813acu); f_11d846d0();
  /* 11d813ac mov esi, esp */
  ESI = (ESP);
  /* 11d813ae push 0x11dac0dc */
  push32((uint32_t)(0x11dac0dcu));
  /* 11d813b3 push 0x11db14b0 */
  push32((uint32_t)(0x11db14b0u));
  /* 11d813b8 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d813beu);
  /* 11d813be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d813c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d813c3 call 0x11d846d0 */
  push32(0x11d813c8u); f_11d846d0();
  /* 11d813c8 mov esi, esp */
  ESI = (ESP);
  /* 11d813ca push 0x11dac0c4 */
  push32((uint32_t)(0x11dac0c4u));
  /* 11d813cf push 0x11db14b8 */
  push32((uint32_t)(0x11db14b8u));
  /* 11d813d4 call dword ptr [0x11db44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e0))), 0x11d813dau);
  /* 11d813da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d813dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d813df call 0x11d846d0 */
  push32(0x11d813e4u); f_11d846d0();
  /* 11d813e4 mov esi, esp */
  ESI = (ESP);
  /* 11d813e6 push 0x11dac0b8 */
  push32((uint32_t)(0x11dac0b8u));
  /* 11d813eb push 0x11db1480 */
  push32((uint32_t)(0x11db1480u));
  /* 11d813f0 call dword ptr [0x11db44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e4))), 0x11d813f6u);
  /* 11d813f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d813f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d813fb call 0x11d846d0 */
  push32(0x11d81400u); f_11d846d0();
  /* 11d81400 mov esi, esp */
  ESI = (ESP);
  /* 11d81402 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81404 push 0x11db1430 */
  push32((uint32_t)(0x11db1430u));
  /* 11d81409 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8140fu);
  /* 11d8140f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81414 call 0x11d846d0 */
  push32(0x11d81419u); f_11d846d0();
  /* 11d81419 mov esi, esp */
  ESI = (ESP);
  /* 11d8141b push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8141d push 0x11db1428 */
  push32((uint32_t)(0x11db1428u));
  /* 11d81422 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81428u);
  /* 11d81428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8142b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8142d call 0x11d846d0 */
  push32(0x11d81432u); f_11d846d0();
  /* 11d81432 mov esi, esp */
  ESI = (ESP);
  /* 11d81434 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81436 push 0x11db1448 */
  push32((uint32_t)(0x11db1448u));
  /* 11d8143b call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81441u);
  /* 11d81441 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81444 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81446 call 0x11d846d0 */
  push32(0x11d8144bu); f_11d846d0();
  /* 11d8144b mov esi, esp */
  ESI = (ESP);
  /* 11d8144d push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8144f push 0x11db1438 */
  push32((uint32_t)(0x11db1438u));
  /* 11d81454 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8145au);
  /* 11d8145a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8145d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8145f call 0x11d846d0 */
  push32(0x11d81464u); f_11d846d0();
  /* 11d81464 mov esi, esp */
  ESI = (ESP);
  /* 11d81466 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81468 push 0x11db13f8 */
  push32((uint32_t)(0x11db13f8u));
  /* 11d8146d call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81473u);
  /* 11d81473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81476 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81478 call 0x11d846d0 */
  push32(0x11d8147du); f_11d846d0();
  /* 11d8147d mov esi, esp */
  ESI = (ESP);
  /* 11d8147f push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81481 push 0x11db13f0 */
  push32((uint32_t)(0x11db13f0u));
  /* 11d81486 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8148cu);
  /* 11d8148c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8148f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81491 call 0x11d846d0 */
  push32(0x11d81496u); f_11d846d0();
  /* 11d81496 mov esi, esp */
  ESI = (ESP);
  /* 11d81498 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8149a push 0x11db1408 */
  push32((uint32_t)(0x11db1408u));
  /* 11d8149f call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d814a5u);
  /* 11d814a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d814a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d814aa call 0x11d846d0 */
  push32(0x11d814afu); f_11d846d0();
  /* 11d814af mov esi, esp */
  ESI = (ESP);
  /* 11d814b1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d814b3 push 0x11db1400 */
  push32((uint32_t)(0x11db1400u));
  /* 11d814b8 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d814beu);
  /* 11d814be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d814c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d814c3 call 0x11d846d0 */
  push32(0x11d814c8u); f_11d846d0();
  /* 11d814c8 mov esi, esp */
  ESI = (ESP);
  /* 11d814ca push 8 */
  push32((uint32_t)(0x8u));
  /* 11d814cc push 0x11db1410 */
  push32((uint32_t)(0x11db1410u));
  /* 11d814d1 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d814d7u);
  /* 11d814d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d814da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d814dc call 0x11d846d0 */
  push32(0x11d814e1u); f_11d846d0();
  /* 11d814e1 mov esi, esp */
  ESI = (ESP);
  /* 11d814e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d814e5 push 0x11db14d0 */
  push32((uint32_t)(0x11db14d0u));
  /* 11d814ea call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d814f0u);
  /* 11d814f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d814f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d814f5 call 0x11d846d0 */
  push32(0x11d814fau); f_11d846d0();
  /* 11d814fa mov esi, esp */
  ESI = (ESP);
  /* 11d814fc push 8 */
  push32((uint32_t)(0x8u));
  /* 11d814fe push 0x11db14c8 */
  push32((uint32_t)(0x11db14c8u));
  /* 11d81503 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81509u);
  /* 11d81509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8150c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8150e call 0x11d846d0 */
  push32(0x11d81513u); f_11d846d0();
  /* 11d81513 mov esi, esp */
  ESI = (ESP);
  /* 11d81515 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81517 push 0x11db1508 */
  push32((uint32_t)(0x11db1508u));
  /* 11d8151c call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81522u);
  /* 11d81522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81525 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81527 call 0x11d846d0 */
  push32(0x11d8152cu); f_11d846d0();
  /* 11d8152c mov esi, esp */
  ESI = (ESP);
  /* 11d8152e push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81530 push 0x11db1500 */
  push32((uint32_t)(0x11db1500u));
  /* 11d81535 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8153bu);
  /* 11d8153b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8153e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81540 call 0x11d846d0 */
  push32(0x11d81545u); f_11d846d0();
  /* 11d81545 mov esi, esp */
  ESI = (ESP);
  /* 11d81547 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81549 push 0x11db1520 */
  push32((uint32_t)(0x11db1520u));
  /* 11d8154e call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81554u);
  /* 11d81554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81559 call 0x11d846d0 */
  push32(0x11d8155eu); f_11d846d0();
  /* 11d8155e mov esi, esp */
  ESI = (ESP);
  /* 11d81560 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81562 push 0x11db1510 */
  push32((uint32_t)(0x11db1510u));
  /* 11d81567 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8156du);
  /* 11d8156d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81570 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81572 call 0x11d846d0 */
  push32(0x11d81577u); f_11d846d0();
  /* 11d81577 mov esi, esp */
  ESI = (ESP);
  /* 11d81579 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8157b push 0x11db14e8 */
  push32((uint32_t)(0x11db14e8u));
  /* 11d81580 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81586u);
  /* 11d81586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8158b call 0x11d846d0 */
  push32(0x11d81590u); f_11d846d0();
  /* 11d81590 mov esi, esp */
  ESI = (ESP);
  /* 11d81592 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d81594 push 0x11db14e0 */
  push32((uint32_t)(0x11db14e0u));
  /* 11d81599 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8159fu);
  /* 11d8159f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d815a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d815a4 call 0x11d846d0 */
  push32(0x11d815a9u); f_11d846d0();
  /* 11d815a9 mov esi, esp */
  ESI = (ESP);
  /* 11d815ab push 8 */
  push32((uint32_t)(0x8u));
  /* 11d815ad push 0x11db14f8 */
  push32((uint32_t)(0x11db14f8u));
  /* 11d815b2 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d815b8u);
  /* 11d815b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d815bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d815bd call 0x11d846d0 */
  push32(0x11d815c2u); f_11d846d0();
  /* 11d815c2 mov esi, esp */
  ESI = (ESP);
  /* 11d815c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d815c6 push 0x11db14f0 */
  push32((uint32_t)(0x11db14f0u));
  /* 11d815cb call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d815d1u);
  /* 11d815d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d815d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d815d6 call 0x11d846d0 */
  push32(0x11d815dbu); f_11d846d0();
  /* 11d815db mov esi, esp */
  ESI = (ESP);
  /* 11d815dd push 8 */
  push32((uint32_t)(0x8u));
  /* 11d815df push 0x11db1518 */
  push32((uint32_t)(0x11db1518u));
  /* 11d815e4 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d815eau);
  /* 11d815ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d815ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d815ef call 0x11d846d0 */
  push32(0x11d815f4u); f_11d846d0();
  /* 11d815f4 mov esi, esp */
  ESI = (ESP);
  /* 11d815f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d815f8 push 0x11db14d8 */
  push32((uint32_t)(0x11db14d8u));
  /* 11d815fd call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81603u);
  /* 11d81603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81608 call 0x11d846d0 */
  push32(0x11d8160du); f_11d846d0();
  /* 11d8160d mov esi, esp */
  ESI = (ESP);
  /* 11d8160f push 4 */
  push32((uint32_t)(0x4u));
  /* 11d81611 push 0x11db1528 */
  push32((uint32_t)(0x11db1528u));
  /* 11d81616 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8161cu);
  /* 11d8161c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8161f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81621 call 0x11d846d0 */
  push32(0x11d81626u); f_11d846d0();
  /* 11d81626 mov esi, esp */
  ESI = (ESP);
  /* 11d81628 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8162a push 0x11db1558 */
  push32((uint32_t)(0x11db1558u));
  /* 11d8162f call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81635u);
  /* 11d81635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8163a call 0x11d846d0 */
  push32(0x11d8163fu); f_11d846d0();
  /* 11d8163f mov esi, esp */
  ESI = (ESP);
  /* 11d81641 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d81643 push 0x11db1570 */
  push32((uint32_t)(0x11db1570u));
  /* 11d81648 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d8164eu);
  /* 11d8164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81653 call 0x11d846d0 */
  push32(0x11d81658u); f_11d846d0();
  /* 11d81658 mov esi, esp */
  ESI = (ESP);
  /* 11d8165a push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8165c push 0x11db1598 */
  push32((uint32_t)(0x11db1598u));
  /* 11d81661 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81667u);
  /* 11d81667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8166a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8166c call 0x11d846d0 */
  push32(0x11d81671u); f_11d846d0();
  /* 11d81671 mov esi, esp */
  ESI = (ESP);
  /* 11d81673 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d81675 push 0x11db15b8 */
  push32((uint32_t)(0x11db15b8u));
  /* 11d8167a call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81680u);
  /* 11d81680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81685 call 0x11d846d0 */
  push32(0x11d8168au); f_11d846d0();
  /* 11d8168a mov esi, esp */
  ESI = (ESP);
  /* 11d8168c push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8168e push 0x11db152c */
  push32((uint32_t)(0x11db152cu));
  /* 11d81693 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d81699u);
  /* 11d81699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8169c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8169e call 0x11d846d0 */
  push32(0x11d816a3u); f_11d846d0();
  /* 11d816a3 mov esi, esp */
  ESI = (ESP);
  /* 11d816a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d816a7 push 0x11db1600 */
  push32((uint32_t)(0x11db1600u));
  /* 11d816ac call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d816b2u);
  /* 11d816b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d816b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d816b7 call 0x11d846d0 */
  push32(0x11d816bcu); f_11d846d0();
  /* 11d816bc mov esi, esp */
  ESI = (ESP);
  /* 11d816be push 4 */
  push32((uint32_t)(0x4u));
  /* 11d816c0 push 0x11db1498 */
  push32((uint32_t)(0x11db1498u));
  /* 11d816c5 call dword ptr [0x11db44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44e8))), 0x11d816cbu);
  /* 11d816cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d816ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d816d0 call 0x11d846d0 */
  push32(0x11d816d5u); f_11d846d0();
  /* 11d816d5 mov esi, esp */
  ESI = (ESP);
  /* 11d816d7 push 0x11dac0b0 */
  push32((uint32_t)(0x11dac0b0u));
  /* 11d816dc push 0x11db15f0 */
  push32((uint32_t)(0x11db15f0u));
  /* 11d816e1 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d816e7u);
  /* 11d816e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d816ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d816ec call 0x11d846d0 */
  push32(0x11d816f1u); f_11d846d0();
  /* 11d816f1 mov esi, esp */
  ESI = (ESP);
  /* 11d816f3 push 0x11dac0a0 */
  push32((uint32_t)(0x11dac0a0u));
  /* 11d816f8 push 0x11db1538 */
  push32((uint32_t)(0x11db1538u));
  /* 11d816fd call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d81703u);
  /* 11d81703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81708 call 0x11d846d0 */
  push32(0x11d8170du); f_11d846d0();
  /* 11d8170d mov esi, esp */
  ESI = (ESP);
  /* 11d8170f push 0x11dac090 */
  push32((uint32_t)(0x11dac090u));
  /* 11d81714 push 0x11db1548 */
  push32((uint32_t)(0x11db1548u));
  /* 11d81719 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d8171fu);
  /* 11d8171f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81724 call 0x11d846d0 */
  push32(0x11d81729u); f_11d846d0();
  /* 11d81729 mov esi, esp */
  ESI = (ESP);
  /* 11d8172b push 0x11dac080 */
  push32((uint32_t)(0x11dac080u));
  /* 11d81730 push 0x11db1550 */
  push32((uint32_t)(0x11db1550u));
  /* 11d81735 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d8173bu);
  /* 11d8173b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8173e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81740 call 0x11d846d0 */
  push32(0x11d81745u); f_11d846d0();
  /* 11d81745 mov esi, esp */
  ESI = (ESP);
  /* 11d81747 push 0x11dac070 */
  push32((uint32_t)(0x11dac070u));
  /* 11d8174c push 0x11db1540 */
  push32((uint32_t)(0x11db1540u));
  /* 11d81751 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d81757u);
  /* 11d81757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8175c call 0x11d846d0 */
  push32(0x11d81761u); f_11d846d0();
  /* 11d81761 mov esi, esp */
  ESI = (ESP);
  /* 11d81763 push 0x11dac060 */
  push32((uint32_t)(0x11dac060u));
  /* 11d81768 push 0x11db1530 */
  push32((uint32_t)(0x11db1530u));
  /* 11d8176d call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d81773u);
  /* 11d81773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81778 call 0x11d846d0 */
  push32(0x11d8177du); f_11d846d0();
  /* 11d8177d mov esi, esp */
  ESI = (ESP);
  /* 11d8177f push 0x11dac058 */
  push32((uint32_t)(0x11dac058u));
  /* 11d81784 push 0x11db15e8 */
  push32((uint32_t)(0x11db15e8u));
  /* 11d81789 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d8178fu);
  /* 11d8178f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81794 call 0x11d846d0 */
  push32(0x11d81799u); f_11d846d0();
  /* 11d81799 mov esi, esp */
  ESI = (ESP);
  /* 11d8179b push 0x11dac04c */
  push32((uint32_t)(0x11dac04cu));
  /* 11d817a0 push 0x11db13e0 */
  push32((uint32_t)(0x11db13e0u));
  /* 11d817a5 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d817abu);
  /* 11d817ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d817ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d817b0 call 0x11d846d0 */
  push32(0x11d817b5u); f_11d846d0();
  /* 11d817b5 mov esi, esp */
  ESI = (ESP);
  /* 11d817b7 push 0x11dac040 */
  push32((uint32_t)(0x11dac040u));
  /* 11d817bc push 0x11db13e8 */
  push32((uint32_t)(0x11db13e8u));
  /* 11d817c1 call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d817c7u);
  /* 11d817c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d817ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d817cc call 0x11d846d0 */
  push32(0x11d817d1u); f_11d846d0();
  /* 11d817d1 mov esi, esp */
  ESI = (ESP);
  /* 11d817d3 push 0x11dac038 */
  push32((uint32_t)(0x11dac038u));
  /* 11d817d8 push 0x11db1468 */
  push32((uint32_t)(0x11db1468u));
  /* 11d817dd call dword ptr [0x11db44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ec))), 0x11d817e3u);
  /* 11d817e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d817e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d817e8 call 0x11d846d0 */
  push32(0x11d817edu); f_11d846d0();
  /* 11d817ed mov esi, esp */
  ESI = (ESP);
  /* 11d817ef push 0x11db1430 */
  push32((uint32_t)(0x11db1430u));
  /* 11d817f4 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d817fau);
  /* 11d817fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d817fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d817ff call 0x11d846d0 */
  push32(0x11d81804u); f_11d846d0();
  /* 11d81804 mov esi, esp */
  ESI = (ESP);
  /* 11d81806 push 0x11db1428 */
  push32((uint32_t)(0x11db1428u));
  /* 11d8180b call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81811u);
  /* 11d81811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81816 call 0x11d846d0 */
  push32(0x11d8181bu); f_11d846d0();
  /* 11d8181b mov esi, esp */
  ESI = (ESP);
  /* 11d8181d push 0x11db1448 */
  push32((uint32_t)(0x11db1448u));
  /* 11d81822 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81828u);
  /* 11d81828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8182b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8182d call 0x11d846d0 */
  push32(0x11d81832u); f_11d846d0();
  /* 11d81832 mov esi, esp */
  ESI = (ESP);
  /* 11d81834 push 0x11db1438 */
  push32((uint32_t)(0x11db1438u));
  /* 11d81839 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d8183fu);
  /* 11d8183f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81842 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81844 call 0x11d846d0 */
  push32(0x11d81849u); f_11d846d0();
  /* 11d81849 mov esi, esp */
  ESI = (ESP);
  /* 11d8184b push 0x11db13f8 */
  push32((uint32_t)(0x11db13f8u));
  /* 11d81850 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81856u);
  /* 11d81856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8185b call 0x11d846d0 */
  push32(0x11d81860u); f_11d846d0();
  /* 11d81860 mov esi, esp */
  ESI = (ESP);
  /* 11d81862 push 0x11db13f0 */
  push32((uint32_t)(0x11db13f0u));
  /* 11d81867 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d8186du);
  /* 11d8186d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81872 call 0x11d846d0 */
  push32(0x11d81877u); f_11d846d0();
  /* 11d81877 mov esi, esp */
  ESI = (ESP);
  /* 11d81879 push 0x11db1408 */
  push32((uint32_t)(0x11db1408u));
  /* 11d8187e call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81884u);
  /* 11d81884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81887 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81889 call 0x11d846d0 */
  push32(0x11d8188eu); f_11d846d0();
  /* 11d8188e mov esi, esp */
  ESI = (ESP);
  /* 11d81890 push 0x11db1400 */
  push32((uint32_t)(0x11db1400u));
  /* 11d81895 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d8189bu);
  /* 11d8189b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8189e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d818a0 call 0x11d846d0 */
  push32(0x11d818a5u); f_11d846d0();
  /* 11d818a5 mov esi, esp */
  ESI = (ESP);
  /* 11d818a7 push 0x11db1410 */
  push32((uint32_t)(0x11db1410u));
  /* 11d818ac call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d818b2u);
  /* 11d818b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d818b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d818b7 call 0x11d846d0 */
  push32(0x11d818bcu); f_11d846d0();
  /* 11d818bc mov esi, esp */
  ESI = (ESP);
  /* 11d818be push 0x11db14d0 */
  push32((uint32_t)(0x11db14d0u));
  /* 11d818c3 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d818c9u);
  /* 11d818c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d818cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d818ce call 0x11d846d0 */
  push32(0x11d818d3u); f_11d846d0();
  /* 11d818d3 mov esi, esp */
  ESI = (ESP);
  /* 11d818d5 push 0x11db14c8 */
  push32((uint32_t)(0x11db14c8u));
  /* 11d818da call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d818e0u);
  /* 11d818e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d818e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d818e5 call 0x11d846d0 */
  push32(0x11d818eau); f_11d846d0();
  /* 11d818ea mov esi, esp */
  ESI = (ESP);
  /* 11d818ec push 0x11db1508 */
  push32((uint32_t)(0x11db1508u));
  /* 11d818f1 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d818f7u);
  /* 11d818f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d818fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d818fc call 0x11d846d0 */
  push32(0x11d81901u); f_11d846d0();
  /* 11d81901 mov esi, esp */
  ESI = (ESP);
  /* 11d81903 push 0x11db1500 */
  push32((uint32_t)(0x11db1500u));
  /* 11d81908 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d8190eu);
  /* 11d8190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81913 call 0x11d846d0 */
  push32(0x11d81918u); f_11d846d0();
  /* 11d81918 mov esi, esp */
  ESI = (ESP);
  /* 11d8191a push 0x11db1520 */
  push32((uint32_t)(0x11db1520u));
  /* 11d8191f call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81925u);
  /* 11d81925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81928 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8192a call 0x11d846d0 */
  push32(0x11d8192fu); f_11d846d0();
  /* 11d8192f mov esi, esp */
  ESI = (ESP);
  /* 11d81931 push 0x11db1510 */
  push32((uint32_t)(0x11db1510u));
  /* 11d81936 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d8193cu);
  /* 11d8193c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8193f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81941 call 0x11d846d0 */
  push32(0x11d81946u); f_11d846d0();
  /* 11d81946 mov esi, esp */
  ESI = (ESP);
  /* 11d81948 push 0x11db14e8 */
  push32((uint32_t)(0x11db14e8u));
  /* 11d8194d call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81953u);
  /* 11d81953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81956 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81958 call 0x11d846d0 */
  push32(0x11d8195du); f_11d846d0();
  /* 11d8195d mov esi, esp */
  ESI = (ESP);
  /* 11d8195f push 0x11db14e0 */
  push32((uint32_t)(0x11db14e0u));
  /* 11d81964 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d8196au);
  /* 11d8196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8196d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8196f call 0x11d846d0 */
  push32(0x11d81974u); f_11d846d0();
  /* 11d81974 mov esi, esp */
  ESI = (ESP);
  /* 11d81976 push 0x11db14f8 */
  push32((uint32_t)(0x11db14f8u));
  /* 11d8197b call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81981u);
  /* 11d81981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81986 call 0x11d846d0 */
  push32(0x11d8198bu); f_11d846d0();
  /* 11d8198b mov esi, esp */
  ESI = (ESP);
  /* 11d8198d push 0x11db14f0 */
  push32((uint32_t)(0x11db14f0u));
  /* 11d81992 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d81998u);
  /* 11d81998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8199b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8199d call 0x11d846d0 */
  push32(0x11d819a2u); f_11d846d0();
  /* 11d819a2 mov esi, esp */
  ESI = (ESP);
  /* 11d819a4 push 0x11db1518 */
  push32((uint32_t)(0x11db1518u));
  /* 11d819a9 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d819afu);
  /* 11d819af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d819b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d819b4 call 0x11d846d0 */
  push32(0x11d819b9u); f_11d846d0();
  /* 11d819b9 mov esi, esp */
  ESI = (ESP);
  /* 11d819bb push 0x11db15e0 */
  push32((uint32_t)(0x11db15e0u));
  /* 11d819c0 call dword ptr [0x11db44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f0))), 0x11d819c6u);
  /* 11d819c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d819c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d819cb call 0x11d846d0 */
  push32(0x11d819d0u); f_11d846d0();
  /* 11d819d0 mov esi, esp */
  ESI = (ESP);
  /* 11d819d2 push 0x11dac030 */
  push32((uint32_t)(0x11dac030u));
  /* 11d819d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d819d9 call dword ptr [0x11db44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f4))), 0x11d819dfu);
  /* 11d819df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d819e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d819e4 call 0x11d846d0 */
  push32(0x11d819e9u); f_11d846d0();
  /* 11d819e9 mov esi, esp */
  ESI = (ESP);
  /* 11d819eb push 0x11dac028 */
  push32((uint32_t)(0x11dac028u));
  /* 11d819f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d819f2 call dword ptr [0x11db44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f4))), 0x11d819f8u);
  /* 11d819f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d819fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d819fd call 0x11d846d0 */
  push32(0x11d81a02u); f_11d846d0();
  /* 11d81a02 mov esi, esp */
  ESI = (ESP);
  /* 11d81a04 push 0x11dac01c */
  push32((uint32_t)(0x11dac01cu));
  /* 11d81a09 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d81a0b call dword ptr [0x11db44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f4))), 0x11d81a11u);
  /* 11d81a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81a14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81a16 call 0x11d846d0 */
  push32(0x11d81a1bu); f_11d846d0();
  /* 11d81a1b mov esi, esp */
  ESI = (ESP);
  /* 11d81a1d push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11d81a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d81a21 call dword ptr [0x11db44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f8))), 0x11d81a27u);
  /* 11d81a27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81a2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81a2c call 0x11d846d0 */
  push32(0x11d81a31u); f_11d846d0();
  /* 11d81a31 mov esi, esp */
  ESI = (ESP);
  /* 11d81a33 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11d81a35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d81a37 call dword ptr [0x11db44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f8))), 0x11d81a3du);
  /* 11d81a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81a40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81a42 call 0x11d846d0 */
  push32(0x11d81a47u); f_11d846d0();
  /* 11d81a47 mov esi, esp */
  ESI = (ESP);
  /* 11d81a49 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11d81a4b push 5 */
  push32((uint32_t)(0x5u));
  /* 11d81a4d call dword ptr [0x11db44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44f8))), 0x11d81a53u);
  /* 11d81a53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81a56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81a58 call 0x11d846d0 */
  push32(0x11d81a5du); f_11d846d0();
  /* 11d81a5d mov esi, esp */
  ESI = (ESP);
  /* 11d81a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81a61 push 0x11db1470 */
  push32((uint32_t)(0x11db1470u));
  /* 11d81a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81a68 call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81a6eu);
  /* 11d81a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81a73 call 0x11d846d0 */
  push32(0x11d81a78u); f_11d846d0();
  /* 11d81a78 mov esi, esp */
  ESI = (ESP);
  /* 11d81a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81a7c push 0x11db1560 */
  push32((uint32_t)(0x11db1560u));
  /* 11d81a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81a83 call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81a89u);
  /* 11d81a89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81a8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81a8e call 0x11d846d0 */
  push32(0x11d81a93u); f_11d846d0();
  /* 11d81a93 mov esi, esp */
  ESI = (ESP);
  /* 11d81a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81a97 push 0x11db1478 */
  push32((uint32_t)(0x11db1478u));
  /* 11d81a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81a9e call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81aa4u);
  /* 11d81aa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81aa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81aa9 call 0x11d846d0 */
  push32(0x11d81aaeu); f_11d846d0();
  /* 11d81aae mov esi, esp */
  ESI = (ESP);
  /* 11d81ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81ab2 push 0x11db1568 */
  push32((uint32_t)(0x11db1568u));
  /* 11d81ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81ab9 call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81abfu);
  /* 11d81abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81ac4 call 0x11d846d0 */
  push32(0x11d81ac9u); f_11d846d0();
  /* 11d81ac9 mov esi, esp */
  ESI = (ESP);
  /* 11d81acb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81acd push 0x11db1440 */
  push32((uint32_t)(0x11db1440u));
  /* 11d81ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81ad4 call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81adau);
  /* 11d81ada add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81adf call 0x11d846d0 */
  push32(0x11d81ae4u); f_11d846d0();
  /* 11d81ae4 mov esi, esp */
  ESI = (ESP);
  /* 11d81ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81ae8 push 0x11db1450 */
  push32((uint32_t)(0x11db1450u));
  /* 11d81aed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81aef call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81af5u);
  /* 11d81af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81af8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81afa call 0x11d846d0 */
  push32(0x11d81affu); f_11d846d0();
  /* 11d81aff mov esi, esp */
  ESI = (ESP);
  /* 11d81b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81b03 push 0x11db14b0 */
  push32((uint32_t)(0x11db14b0u));
  /* 11d81b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81b0a call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81b10u);
  /* 11d81b10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81b13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81b15 call 0x11d846d0 */
  push32(0x11d81b1au); f_11d846d0();
  /* 11d81b1a mov esi, esp */
  ESI = (ESP);
  /* 11d81b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81b1e push 0x11db14b8 */
  push32((uint32_t)(0x11db14b8u));
  /* 11d81b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81b25 call dword ptr [0x11db44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44fc))), 0x11d81b2bu);
  /* 11d81b2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81b30 call 0x11d846d0 */
  push32(0x11d81b35u); f_11d846d0();
  /* 11d81b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81b37 call 0x11d84540 */
  push32(0x11d81b3cu); f_11d84540();
  /* 11d81b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81b3f push eax */
  push32((uint32_t)(EAX));
  /* 11d81b40 call 0x11d844f0 */
  push32(0x11d81b45u); f_11d844f0();
  /* 11d81b45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81b48 pop edi */
  EDI = (pop32());
  /* 11d81b49 pop esi */
  ESI = (pop32());
  /* 11d81b4a pop ebx */
  EBX = (pop32());
  /* 11d81b4b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81b4e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81b50 call 0x11d846d0 */
  push32(0x11d81b55u); f_11d846d0();
  /* 11d81b55 mov esp, ebp */
  ESP = (EBP);
  /* 11d81b57 pop ebp */
  EBP = (pop32());
  /* 11d81b58 ret  */
  ESPCHK(0x11d81030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e30 @ 0x11d81e30 (67 bytes, 26 insns) */
void f_11d81e30(void) {
  FTRACE(0x11d81e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d81e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d81e31 mov ebp, esp */
  EBP = (ESP);
  /* 11d81e33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d81e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11d81e37 push esi */
  push32((uint32_t)(ESI));
  /* 11d81e38 push edi */
  push32((uint32_t)(EDI));
  /* 11d81e39 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11d81e3c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11d81e41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11d81e46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d81e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d81e4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d81e4e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81e52 je 0x11d81e56 */
  if (C.zf) goto L_11d81e56;
  /* 11d81e54 jmp 0x11d81e5b */
  goto L_11d81e5b;
L_11d81e56:;
  /* 11d81e56 call 0x11d81005 */
  push32(0x11d81e5bu); f_11d81005();
L_11d81e5b:;
  /* 11d81e5b mov eax, 1 */
  EAX = (0x1u);
  /* 11d81e60 pop edi */
  EDI = (pop32());
  /* 11d81e61 pop esi */
  ESI = (pop32());
  /* 11d81e62 pop ebx */
  EBX = (pop32());
  /* 11d81e63 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81e66 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81e68 call 0x11d846d0 */
  push32(0x11d81e6du); f_11d846d0();
  /* 11d81e6d mov esp, ebp */
  ESP = (EBP);
  /* 11d81e6f pop ebp */
  EBP = (pop32());
  /* 11d81e70 ret 0xc */
  ESPCHK(0x11d81e30u, _esp0);
  ESP += 16; return;
}

/* FUN_10001e90 @ 0x11d81e90 (7610 bytes, 2102 insns) [2 switch table(s)] */
void f_11d81e90(void) {
  FTRACE(0x11d81e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d81e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d81e91 mov ebp, esp */
  EBP = (ESP);
  /* 11d81e93 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d81e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11d81e97 push esi */
  push32((uint32_t)(ESI));
  /* 11d81e98 push edi */
  push32((uint32_t)(EDI));
  /* 11d81e99 lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 11d81e9c mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11d81ea1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11d81ea6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d81ea8 mov esi, esp */
  ESI = (ESP);
  /* 11d81eaa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11d81eac call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d81eb2u);
  /* 11d81eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81eb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81eb7 call 0x11d846d0 */
  push32(0x11d81ebcu); f_11d846d0();
  /* 11d81ebc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d81ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d81ec3 je 0x11d82a61 */
  if (C.zf) goto L_11d82a61;
  /* 11d81ec9 mov esi, esp */
  ESI = (ESP);
  /* 11d81ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81ecd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11d81ecf call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d81ed5u);
  /* 11d81ed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81ed8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81eda call 0x11d846d0 */
  push32(0x11d81edfu); f_11d846d0();
  /* 11d81edf mov esi, esp */
  ESI = (ESP);
  /* 11d81ee1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11d81ee3 call dword ptr [0x11db4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4458))), 0x11d81ee9u);
  /* 11d81ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81eee call 0x11d846d0 */
  push32(0x11d81ef3u); f_11d846d0();
  /* 11d81ef3 mov esi, esp */
  ESI = (ESP);
  /* 11d81ef5 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11d81ef7 call dword ptr [0x11db445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db445c))), 0x11d81efdu);
  /* 11d81efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f02 call 0x11d846d0 */
  push32(0x11d81f07u); f_11d846d0();
  /* 11d81f07 mov esi, esp */
  ESI = (ESP);
  /* 11d81f09 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11d81f0b call dword ptr [0x11db445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db445c))), 0x11d81f11u);
  /* 11d81f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f16 call 0x11d846d0 */
  push32(0x11d81f1bu); f_11d846d0();
  /* 11d81f1b mov esi, esp */
  ESI = (ESP);
  /* 11d81f1d push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11d81f1f call dword ptr [0x11db445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db445c))), 0x11d81f25u);
  /* 11d81f25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f2a call 0x11d846d0 */
  push32(0x11d81f2fu); f_11d846d0();
  /* 11d81f2f mov esi, esp */
  ESI = (ESP);
  /* 11d81f31 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11d81f33 call dword ptr [0x11db445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db445c))), 0x11d81f39u);
  /* 11d81f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f3e call 0x11d846d0 */
  push32(0x11d81f43u); f_11d846d0();
  /* 11d81f43 mov esi, esp */
  ESI = (ESP);
  /* 11d81f45 push 0x11db1418 */
  push32((uint32_t)(0x11db1418u));
  /* 11d81f4a push 0x11db1458 */
  push32((uint32_t)(0x11db1458u));
  /* 11d81f4f call dword ptr [0x11db4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4460))), 0x11d81f55u);
  /* 11d81f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f5a call 0x11d846d0 */
  push32(0x11d81f5fu); f_11d846d0();
  /* 11d81f5f mov esi, esp */
  ESI = (ESP);
  /* 11d81f61 push 0x11db1420 */
  push32((uint32_t)(0x11db1420u));
  /* 11d81f66 push 0x11db1460 */
  push32((uint32_t)(0x11db1460u));
  /* 11d81f6b call dword ptr [0x11db4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4460))), 0x11d81f71u);
  /* 11d81f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f76 call 0x11d846d0 */
  push32(0x11d81f7bu); f_11d846d0();
  /* 11d81f7b mov esi, esp */
  ESI = (ESP);
  /* 11d81f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81f7f call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d81f85u);
  /* 11d81f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f8a call 0x11d846d0 */
  push32(0x11d81f8fu); f_11d846d0();
  /* 11d81f8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d81f92 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81f96 ja 0x11d82604 */
  if ((!C.cf&&!C.zf)) goto L_11d82604;
  /* 11d81f9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d81f9f jmp dword ptr [eax*4 + 0x11d83c4a] */
  switch (EAX) {
    case 0: goto L_11d81fa6;
    case 1: goto L_11d8211a;
    case 2: goto L_11d822ad;
    case 3: goto L_11d82446;
    case 4: goto L_11d838e7;
    case 5: goto L_11d83942;
    case 6: goto L_11d8399d;
    case 7: goto L_11d839f5;
    default: x86_unimpl("switch@0x11d81f9f out of table"); return;
  }
L_11d81fa6:;
  /* 11d81fa6 mov esi, esp */
  ESI = (ESP);
  /* 11d81fa8 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11d81fad push 3 */
  push32((uint32_t)(0x3u));
  /* 11d81faf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81fb1 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d81fb7u);
  /* 11d81fb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81fba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81fbc call 0x11d846d0 */
  push32(0x11d81fc1u); f_11d846d0();
  /* 11d81fc1 mov esi, esp */
  ESI = (ESP);
  /* 11d81fc3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11d81fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81fca push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81fcc call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d81fd2u);
  /* 11d81fd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81fd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81fd7 call 0x11d846d0 */
  push32(0x11d81fdcu); f_11d846d0();
  /* 11d81fdc mov esi, esp */
  ESI = (ESP);
  /* 11d81fde push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11d81fe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d81fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d81fe7 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d81fedu);
  /* 11d81fed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d81ff0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d81ff2 call 0x11d846d0 */
  push32(0x11d81ff7u); f_11d846d0();
  /* 11d81ff7 mov esi, esp */
  ESI = (ESP);
  /* 11d81ff9 push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 11d81ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82002 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82008u);
  /* 11d82008 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8200b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8200d call 0x11d846d0 */
  push32(0x11d82012u); f_11d846d0();
  /* 11d82012 mov esi, esp */
  ESI = (ESP);
  /* 11d82014 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11d82019 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d8201b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8201d call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82023u);
  /* 11d82023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82026 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82028 call 0x11d846d0 */
  push32(0x11d8202du); f_11d846d0();
  /* 11d8202d mov esi, esp */
  ESI = (ESP);
  /* 11d8202f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11d82034 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d82036 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82038 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8203eu);
  /* 11d8203e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82041 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82043 call 0x11d846d0 */
  push32(0x11d82048u); f_11d846d0();
  /* 11d82048 mov esi, esp */
  ESI = (ESP);
  /* 11d8204a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8204c push 0x11db14c0 */
  push32((uint32_t)(0x11db14c0u));
  /* 11d82051 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82057u);
  /* 11d82057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8205a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8205c call 0x11d846d0 */
  push32(0x11d82061u); f_11d846d0();
  /* 11d82061 mov esi, esp */
  ESI = (ESP);
  /* 11d82063 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82065 push 0x11db1578 */
  push32((uint32_t)(0x11db1578u));
  /* 11d8206a call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82070u);
  /* 11d82070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82073 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82075 call 0x11d846d0 */
  push32(0x11d8207au); f_11d846d0();
  /* 11d8207a mov esi, esp */
  ESI = (ESP);
  /* 11d8207c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8207e push 0x11db1580 */
  push32((uint32_t)(0x11db1580u));
  /* 11d82083 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82089u);
  /* 11d82089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8208c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8208e call 0x11d846d0 */
  push32(0x11d82093u); f_11d846d0();
  /* 11d82093 mov esi, esp */
  ESI = (ESP);
  /* 11d82095 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82097 push 0x11db1588 */
  push32((uint32_t)(0x11db1588u));
  /* 11d8209c call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d820a2u);
  /* 11d820a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d820a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d820a7 call 0x11d846d0 */
  push32(0x11d820acu); f_11d846d0();
  /* 11d820ac mov esi, esp */
  ESI = (ESP);
  /* 11d820ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11d820b0 push 0x11db1590 */
  push32((uint32_t)(0x11db1590u));
  /* 11d820b5 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d820bbu);
  /* 11d820bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d820be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d820c0 call 0x11d846d0 */
  push32(0x11d820c5u); f_11d846d0();
  /* 11d820c5 mov esi, esp */
  ESI = (ESP);
  /* 11d820c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d820c9 call dword ptr [0x11db4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4470))), 0x11d820cfu);
  /* 11d820cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d820d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d820d4 call 0x11d846d0 */
  push32(0x11d820d9u); f_11d846d0();
  /* 11d820d9 mov dword ptr [0x11db14d8], 1 */
  w32((uint32_t)(0x11db14d8), (0x1u));
  /* 11d820e3 mov dword ptr [0x11db1528], 1 */
  w32((uint32_t)(0x11db1528), (0x1u));
  /* 11d820ed mov dword ptr [0x11db1558], 1 */
  w32((uint32_t)(0x11db1558), (0x1u));
  /* 11d820f7 mov dword ptr [0x11db1570], 1 */
  w32((uint32_t)(0x11db1570), (0x1u));
  /* 11d82101 mov dword ptr [0x11db1598], 1 */
  w32((uint32_t)(0x11db1598), (0x1u));
  /* 11d8210b mov dword ptr [0x11db15b8], 1 */
  w32((uint32_t)(0x11db15b8), (0x1u));
  /* 11d82115 jmp 0x11d82604 */
  goto L_11d82604;
L_11d8211a:;
  /* 11d8211a mov esi, esp */
  ESI = (ESP);
  /* 11d8211c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11d82121 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d82123 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82125 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8212bu);
  /* 11d8212b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8212e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82130 call 0x11d846d0 */
  push32(0x11d82135u); f_11d846d0();
  /* 11d82135 mov esi, esp */
  ESI = (ESP);
  /* 11d82137 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11d8213c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8213e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82140 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82146u);
  /* 11d82146 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8214b call 0x11d846d0 */
  push32(0x11d82150u); f_11d846d0();
  /* 11d82150 mov esi, esp */
  ESI = (ESP);
  /* 11d82152 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11d82157 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82159 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8215b call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82161u);
  /* 11d82161 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82166 call 0x11d846d0 */
  push32(0x11d8216bu); f_11d846d0();
  /* 11d8216b mov esi, esp */
  ESI = (ESP);
  /* 11d8216d push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11d82172 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82174 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82176 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8217cu);
  /* 11d8217c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8217f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82181 call 0x11d846d0 */
  push32(0x11d82186u); f_11d846d0();
  /* 11d82186 mov esi, esp */
  ESI = (ESP);
  /* 11d82188 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11d8218d push 5 */
  push32((uint32_t)(0x5u));
  /* 11d8218f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82191 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82197u);
  /* 11d82197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8219a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8219c call 0x11d846d0 */
  push32(0x11d821a1u); f_11d846d0();
  /* 11d821a1 mov esi, esp */
  ESI = (ESP);
  /* 11d821a3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11d821a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d821aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d821ac call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d821b2u);
  /* 11d821b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d821b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d821b7 call 0x11d846d0 */
  push32(0x11d821bcu); f_11d846d0();
  /* 11d821bc mov esi, esp */
  ESI = (ESP);
  /* 11d821be push 0 */
  push32((uint32_t)(0x0u));
  /* 11d821c0 push 0x11db1578 */
  push32((uint32_t)(0x11db1578u));
  /* 11d821c5 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d821cbu);
  /* 11d821cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d821ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d821d0 call 0x11d846d0 */
  push32(0x11d821d5u); f_11d846d0();
  /* 11d821d5 mov esi, esp */
  ESI = (ESP);
  /* 11d821d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d821d9 push 0x11db1580 */
  push32((uint32_t)(0x11db1580u));
  /* 11d821de call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d821e4u);
  /* 11d821e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d821e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d821e9 call 0x11d846d0 */
  push32(0x11d821eeu); f_11d846d0();
  /* 11d821ee mov esi, esp */
  ESI = (ESP);
  /* 11d821f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d821f2 push 0x11db1588 */
  push32((uint32_t)(0x11db1588u));
  /* 11d821f7 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d821fdu);
  /* 11d821fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82202 call 0x11d846d0 */
  push32(0x11d82207u); f_11d846d0();
  /* 11d82207 mov esi, esp */
  ESI = (ESP);
  /* 11d82209 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8220b push 0x11db1590 */
  push32((uint32_t)(0x11db1590u));
  /* 11d82210 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82216u);
  /* 11d82216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8221b call 0x11d846d0 */
  push32(0x11d82220u); f_11d846d0();
  /* 11d82220 mov esi, esp */
  ESI = (ESP);
  /* 11d82222 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82224 call dword ptr [0x11db4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4470))), 0x11d8222au);
  /* 11d8222a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8222d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8222f call 0x11d846d0 */
  push32(0x11d82234u); f_11d846d0();
  /* 11d82234 mov esi, esp */
  ESI = (ESP);
  /* 11d82236 push 0x11dac480 */
  push32((uint32_t)(0x11dac480u));
  /* 11d8223b push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d82240 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82246u);
  /* 11d82246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8224b call 0x11d846d0 */
  push32(0x11d82250u); f_11d846d0();
  /* 11d82250 mov esi, esp */
  ESI = (ESP);
  /* 11d82252 push 0x11dac474 */
  push32((uint32_t)(0x11dac474u));
  /* 11d82257 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d8225c call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82262u);
  /* 11d82262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82265 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82267 call 0x11d846d0 */
  push32(0x11d8226cu); f_11d846d0();
  /* 11d8226c mov dword ptr [0x11db14d8], 3 */
  w32((uint32_t)(0x11db14d8), (0x3u));
  /* 11d82276 mov dword ptr [0x11db1528], 3 */
  w32((uint32_t)(0x11db1528), (0x3u));
  /* 11d82280 mov dword ptr [0x11db1558], 1 */
  w32((uint32_t)(0x11db1558), (0x1u));
  /* 11d8228a mov dword ptr [0x11db1570], 1 */
  w32((uint32_t)(0x11db1570), (0x1u));
  /* 11d82294 mov dword ptr [0x11db1598], 1 */
  w32((uint32_t)(0x11db1598), (0x1u));
  /* 11d8229e mov dword ptr [0x11db15b8], 1 */
  w32((uint32_t)(0x11db15b8), (0x1u));
  /* 11d822a8 jmp 0x11d82604 */
  goto L_11d82604;
L_11d822ad:;
  /* 11d822ad mov esi, esp */
  ESI = (ESP);
  /* 11d822af push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d822b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d822b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d822b8 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d822beu);
  /* 11d822be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d822c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d822c3 call 0x11d846d0 */
  push32(0x11d822c8u); f_11d846d0();
  /* 11d822c8 mov esi, esp */
  ESI = (ESP);
  /* 11d822ca push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d822cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d822d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d822d3 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d822d9u);
  /* 11d822d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d822dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d822de call 0x11d846d0 */
  push32(0x11d822e3u); f_11d846d0();
  /* 11d822e3 mov esi, esp */
  ESI = (ESP);
  /* 11d822e5 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d822ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11d822ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11d822ee call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d822f4u);
  /* 11d822f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d822f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d822f9 call 0x11d846d0 */
  push32(0x11d822feu); f_11d846d0();
  /* 11d822fe mov esi, esp */
  ESI = (ESP);
  /* 11d82300 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11d82305 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82307 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82309 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8230fu);
  /* 11d8230f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82312 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82314 call 0x11d846d0 */
  push32(0x11d82319u); f_11d846d0();
  /* 11d82319 mov esi, esp */
  ESI = (ESP);
  /* 11d8231b push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d82320 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82324 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8232au);
  /* 11d8232a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8232d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8232f call 0x11d846d0 */
  push32(0x11d82334u); f_11d846d0();
  /* 11d82334 mov esi, esp */
  ESI = (ESP);
  /* 11d82336 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d8233b push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8233d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8233f call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82345u);
  /* 11d82345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82348 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8234a call 0x11d846d0 */
  push32(0x11d8234fu); f_11d846d0();
  /* 11d8234f mov esi, esp */
  ESI = (ESP);
  /* 11d82351 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82353 push 0x11db1578 */
  push32((uint32_t)(0x11db1578u));
  /* 11d82358 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d8235eu);
  /* 11d8235e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82363 call 0x11d846d0 */
  push32(0x11d82368u); f_11d846d0();
  /* 11d82368 mov esi, esp */
  ESI = (ESP);
  /* 11d8236a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8236c push 0x11db1588 */
  push32((uint32_t)(0x11db1588u));
  /* 11d82371 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82377u);
  /* 11d82377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8237a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8237c call 0x11d846d0 */
  push32(0x11d82381u); f_11d846d0();
  /* 11d82381 mov esi, esp */
  ESI = (ESP);
  /* 11d82383 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82385 call dword ptr [0x11db4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4470))), 0x11d8238bu);
  /* 11d8238b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8238e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82390 call 0x11d846d0 */
  push32(0x11d82395u); f_11d846d0();
  /* 11d82395 mov esi, esp */
  ESI = (ESP);
  /* 11d82397 push 0x11dac480 */
  push32((uint32_t)(0x11dac480u));
  /* 11d8239c push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d823a1 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d823a7u);
  /* 11d823a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d823aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d823ac call 0x11d846d0 */
  push32(0x11d823b1u); f_11d846d0();
  /* 11d823b1 mov esi, esp */
  ESI = (ESP);
  /* 11d823b3 push 0x11dac468 */
  push32((uint32_t)(0x11dac468u));
  /* 11d823b8 push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d823bd call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d823c3u);
  /* 11d823c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d823c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d823c8 call 0x11d846d0 */
  push32(0x11d823cdu); f_11d846d0();
  /* 11d823cd mov esi, esp */
  ESI = (ESP);
  /* 11d823cf push 0x11dac474 */
  push32((uint32_t)(0x11dac474u));
  /* 11d823d4 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d823d9 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d823dfu);
  /* 11d823df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d823e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d823e4 call 0x11d846d0 */
  push32(0x11d823e9u); f_11d846d0();
  /* 11d823e9 mov esi, esp */
  ESI = (ESP);
  /* 11d823eb push 0x11dac45c */
  push32((uint32_t)(0x11dac45cu));
  /* 11d823f0 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d823f5 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d823fbu);
  /* 11d823fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d823fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82400 call 0x11d846d0 */
  push32(0x11d82405u); f_11d846d0();
  /* 11d82405 mov dword ptr [0x11db14d8], 5 */
  w32((uint32_t)(0x11db14d8), (0x5u));
  /* 11d8240f mov dword ptr [0x11db1528], 5 */
  w32((uint32_t)(0x11db1528), (0x5u));
  /* 11d82419 mov dword ptr [0x11db1558], 5 */
  w32((uint32_t)(0x11db1558), (0x5u));
  /* 11d82423 mov dword ptr [0x11db1570], 3 */
  w32((uint32_t)(0x11db1570), (0x3u));
  /* 11d8242d mov dword ptr [0x11db1598], 2 */
  w32((uint32_t)(0x11db1598), (0x2u));
  /* 11d82437 mov dword ptr [0x11db15b8], 1 */
  w32((uint32_t)(0x11db15b8), (0x1u));
  /* 11d82441 jmp 0x11d82604 */
  goto L_11d82604;
L_11d82446:;
  /* 11d82446 mov esi, esp */
  ESI = (ESP);
  /* 11d82448 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d8244d push 3 */
  push32((uint32_t)(0x3u));
  /* 11d8244f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82451 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82457u);
  /* 11d82457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8245a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8245c call 0x11d846d0 */
  push32(0x11d82461u); f_11d846d0();
  /* 11d82461 mov esi, esp */
  ESI = (ESP);
  /* 11d82463 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d82468 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8246a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8246c call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82472u);
  /* 11d82472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82477 call 0x11d846d0 */
  push32(0x11d8247cu); f_11d846d0();
  /* 11d8247c mov esi, esp */
  ESI = (ESP);
  /* 11d8247e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d82483 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82485 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82487 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8248du);
  /* 11d8248d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82492 call 0x11d846d0 */
  push32(0x11d82497u); f_11d846d0();
  /* 11d82497 mov esi, esp */
  ESI = (ESP);
  /* 11d82499 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d8249e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d824a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d824a2 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d824a8u);
  /* 11d824a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d824ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d824ad call 0x11d846d0 */
  push32(0x11d824b2u); f_11d846d0();
  /* 11d824b2 mov esi, esp */
  ESI = (ESP);
  /* 11d824b4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d824b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d824bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d824bd call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d824c3u);
  /* 11d824c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d824c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d824c8 call 0x11d846d0 */
  push32(0x11d824cdu); f_11d846d0();
  /* 11d824cd mov esi, esp */
  ESI = (ESP);
  /* 11d824cf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d824d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d824d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d824d8 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d824deu);
  /* 11d824de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d824e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d824e3 call 0x11d846d0 */
  push32(0x11d824e8u); f_11d846d0();
  /* 11d824e8 mov esi, esp */
  ESI = (ESP);
  /* 11d824ea push 0x11dac480 */
  push32((uint32_t)(0x11dac480u));
  /* 11d824ef push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d824f4 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d824fau);
  /* 11d824fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d824fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d824ff call 0x11d846d0 */
  push32(0x11d82504u); f_11d846d0();
  /* 11d82504 mov esi, esp */
  ESI = (ESP);
  /* 11d82506 push 0x11dac468 */
  push32((uint32_t)(0x11dac468u));
  /* 11d8250b push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d82510 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82516u);
  /* 11d82516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82519 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8251b call 0x11d846d0 */
  push32(0x11d82520u); f_11d846d0();
  /* 11d82520 mov esi, esp */
  ESI = (ESP);
  /* 11d82522 push 0x11dac450 */
  push32((uint32_t)(0x11dac450u));
  /* 11d82527 push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d8252c call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82532u);
  /* 11d82532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82537 call 0x11d846d0 */
  push32(0x11d8253cu); f_11d846d0();
  /* 11d8253c mov esi, esp */
  ESI = (ESP);
  /* 11d8253e push 0x11dac444 */
  push32((uint32_t)(0x11dac444u));
  /* 11d82543 push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d82548 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8254eu);
  /* 11d8254e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82551 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82553 call 0x11d846d0 */
  push32(0x11d82558u); f_11d846d0();
  /* 11d82558 mov esi, esp */
  ESI = (ESP);
  /* 11d8255a push 0x11dac474 */
  push32((uint32_t)(0x11dac474u));
  /* 11d8255f push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d82564 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8256au);
  /* 11d8256a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8256d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8256f call 0x11d846d0 */
  push32(0x11d82574u); f_11d846d0();
  /* 11d82574 mov esi, esp */
  ESI = (ESP);
  /* 11d82576 push 0x11dac45c */
  push32((uint32_t)(0x11dac45cu));
  /* 11d8257b push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d82580 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82586u);
  /* 11d82586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8258b call 0x11d846d0 */
  push32(0x11d82590u); f_11d846d0();
  /* 11d82590 mov esi, esp */
  ESI = (ESP);
  /* 11d82592 push 0x11dac438 */
  push32((uint32_t)(0x11dac438u));
  /* 11d82597 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d8259c call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d825a2u);
  /* 11d825a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d825a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d825a7 call 0x11d846d0 */
  push32(0x11d825acu); f_11d846d0();
  /* 11d825ac mov esi, esp */
  ESI = (ESP);
  /* 11d825ae push 0x11dac42c */
  push32((uint32_t)(0x11dac42cu));
  /* 11d825b3 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d825b8 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d825beu);
  /* 11d825be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d825c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d825c3 call 0x11d846d0 */
  push32(0x11d825c8u); f_11d846d0();
  /* 11d825c8 mov dword ptr [0x11db14d8], 8 */
  w32((uint32_t)(0x11db14d8), (0x8u));
  /* 11d825d2 mov dword ptr [0x11db1528], 8 */
  w32((uint32_t)(0x11db1528), (0x8u));
  /* 11d825dc mov dword ptr [0x11db1558], 6 */
  w32((uint32_t)(0x11db1558), (0x6u));
  /* 11d825e6 mov dword ptr [0x11db1570], 4 */
  w32((uint32_t)(0x11db1570), (0x4u));
  /* 11d825f0 mov dword ptr [0x11db1598], 2 */
  w32((uint32_t)(0x11db1598), (0x2u));
  /* 11d825fa mov dword ptr [0x11db15b8], 2 */
  w32((uint32_t)(0x11db15b8), (0x2u));
L_11d82604:;
  /* 11d82604 mov esi, esp */
  ESI = (ESP);
  /* 11d82606 push 0x11dac420 */
  push32((uint32_t)(0x11dac420u));
  /* 11d8260b push 0x11dac208 */
  push32((uint32_t)(0x11dac208u));
  /* 11d82610 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82616u);
  /* 11d82616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8261b call 0x11d846d0 */
  push32(0x11d82620u); f_11d846d0();
  /* 11d82620 mov esi, esp */
  ESI = (ESP);
  /* 11d82622 push 0x11dac414 */
  push32((uint32_t)(0x11dac414u));
  /* 11d82627 push 0x11dac200 */
  push32((uint32_t)(0x11dac200u));
  /* 11d8262c call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82632u);
  /* 11d82632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82637 call 0x11d846d0 */
  push32(0x11d8263cu); f_11d846d0();
  /* 11d8263c mov esi, esp */
  ESI = (ESP);
  /* 11d8263e push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11d82643 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82645 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d8264bu);
  /* 11d8264b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8264e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82650 call 0x11d846d0 */
  push32(0x11d82655u); f_11d846d0();
  /* 11d82655 mov esi, esp */
  ESI = (ESP);
  /* 11d82657 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11d8265c push 0xe */
  push32((uint32_t)(0xeu));
  /* 11d8265e call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d82664u);
  /* 11d82664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82667 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82669 call 0x11d846d0 */
  push32(0x11d8266eu); f_11d846d0();
  /* 11d8266e mov esi, esp */
  ESI = (ESP);
  /* 11d82670 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82672 call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82678u);
  /* 11d82678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8267b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8267d call 0x11d846d0 */
  push32(0x11d82682u); f_11d846d0();
  /* 11d82682 mov ecx, 5 */
  ECX = (0x5u);
  /* 11d82687 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d82689 imul ecx, ecx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2710u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8268f mov esi, esp */
  ESI = (ESP);
  /* 11d82691 push ecx */
  push32((uint32_t)(ECX));
  /* 11d82692 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d82694 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d8269au);
  /* 11d8269a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8269d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8269f call 0x11d846d0 */
  push32(0x11d826a4u); f_11d846d0();
  /* 11d826a4 call 0x11d84500 */
  push32(0x11d826a9u); f_11d84500();
  /* 11d826a9 and eax, 0x80000001 */
  { uint32_t _r=(EAX)&(0x80000001u); EAX = (_r); fl_logic(_r,32); }
  /* 11d826ae jns 0x11d826b5 */
  if (!C.sf) goto L_11d826b5;
  /* 11d826b0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d826b1 or eax, 0xfffffffe */
  { uint32_t _r=(EAX)|(0xfffffffeu); EAX = (_r); fl_logic(_r,32); }
  /* 11d826b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d826b5:;
  /* 11d826b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d826b8 mov dword ptr [0x11db1498], eax */
  w32((uint32_t)(0x11db1498), (EAX));
  /* 11d826bd mov esi, esp */
  ESI = (ESP);
  /* 11d826bf push 0x11dac3f8 */
  push32((uint32_t)(0x11dac3f8u));
  /* 11d826c4 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d826c9 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d826cfu);
  /* 11d826cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d826d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d826d4 call 0x11d846d0 */
  push32(0x11d826d9u); f_11d846d0();
  /* 11d826d9 mov esi, esp */
  ESI = (ESP);
  /* 11d826db push 0x11dac3f0 */
  push32((uint32_t)(0x11dac3f0u));
  /* 11d826e0 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d826e5 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d826ebu);
  /* 11d826eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d826ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d826f0 call 0x11d846d0 */
  push32(0x11d826f5u); f_11d846d0();
  /* 11d826f5 mov esi, esp */
  ESI = (ESP);
  /* 11d826f7 push 0x11dac3d4 */
  push32((uint32_t)(0x11dac3d4u));
  /* 11d826fc push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d82701 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82707u);
  /* 11d82707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8270a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8270c call 0x11d846d0 */
  push32(0x11d82711u); f_11d846d0();
  /* 11d82711 mov esi, esp */
  ESI = (ESP);
  /* 11d82713 push 0x11dac3c8 */
  push32((uint32_t)(0x11dac3c8u));
  /* 11d82718 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d8271d call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82723u);
  /* 11d82723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82728 call 0x11d846d0 */
  push32(0x11d8272du); f_11d846d0();
  /* 11d8272d mov esi, esp */
  ESI = (ESP);
  /* 11d8272f push 0x11dac3bc */
  push32((uint32_t)(0x11dac3bcu));
  /* 11d82734 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d82739 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8273fu);
  /* 11d8273f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82742 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82744 call 0x11d846d0 */
  push32(0x11d82749u); f_11d846d0();
  /* 11d82749 mov esi, esp */
  ESI = (ESP);
  /* 11d8274b push 0x11dac3b0 */
  push32((uint32_t)(0x11dac3b0u));
  /* 11d82750 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d82755 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8275bu);
  /* 11d8275b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8275e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82760 call 0x11d846d0 */
  push32(0x11d82765u); f_11d846d0();
  /* 11d82765 mov esi, esp */
  ESI = (ESP);
  /* 11d82767 push 0x11dac3a4 */
  push32((uint32_t)(0x11dac3a4u));
  /* 11d8276c push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d82771 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82777u);
  /* 11d82777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8277a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8277c call 0x11d846d0 */
  push32(0x11d82781u); f_11d846d0();
  /* 11d82781 mov esi, esp */
  ESI = (ESP);
  /* 11d82783 push 0x11dac398 */
  push32((uint32_t)(0x11dac398u));
  /* 11d82788 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d8278d call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82793u);
  /* 11d82793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82796 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82798 call 0x11d846d0 */
  push32(0x11d8279du); f_11d846d0();
  /* 11d8279d mov esi, esp */
  ESI = (ESP);
  /* 11d8279f push 0x11dac38c */
  push32((uint32_t)(0x11dac38cu));
  /* 11d827a4 push 0x11dac244 */
  push32((uint32_t)(0x11dac244u));
  /* 11d827a9 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d827afu);
  /* 11d827af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d827b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d827b4 call 0x11d846d0 */
  push32(0x11d827b9u); f_11d846d0();
  /* 11d827b9 mov esi, esp */
  ESI = (ESP);
  /* 11d827bb push 0x11dac374 */
  push32((uint32_t)(0x11dac374u));
  /* 11d827c0 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d827c5 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d827cbu);
  /* 11d827cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d827ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d827d0 call 0x11d846d0 */
  push32(0x11d827d5u); f_11d846d0();
  /* 11d827d5 mov esi, esp */
  ESI = (ESP);
  /* 11d827d7 push 0x11dac36c */
  push32((uint32_t)(0x11dac36cu));
  /* 11d827dc push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d827e1 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d827e7u);
  /* 11d827e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d827ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d827ec call 0x11d846d0 */
  push32(0x11d827f1u); f_11d846d0();
  /* 11d827f1 mov esi, esp */
  ESI = (ESP);
  /* 11d827f3 push 0x11dac354 */
  push32((uint32_t)(0x11dac354u));
  /* 11d827f8 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d827fd call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82803u);
  /* 11d82803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82806 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82808 call 0x11d846d0 */
  push32(0x11d8280du); f_11d846d0();
  /* 11d8280d mov esi, esp */
  ESI = (ESP);
  /* 11d8280f push 0x11dac348 */
  push32((uint32_t)(0x11dac348u));
  /* 11d82814 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d82819 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8281fu);
  /* 11d8281f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82824 call 0x11d846d0 */
  push32(0x11d82829u); f_11d846d0();
  /* 11d82829 mov esi, esp */
  ESI = (ESP);
  /* 11d8282b push 0x11dac33c */
  push32((uint32_t)(0x11dac33cu));
  /* 11d82830 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d82835 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8283bu);
  /* 11d8283b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8283e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82840 call 0x11d846d0 */
  push32(0x11d82845u); f_11d846d0();
  /* 11d82845 mov esi, esp */
  ESI = (ESP);
  /* 11d82847 push 0x11dac330 */
  push32((uint32_t)(0x11dac330u));
  /* 11d8284c push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d82851 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82857u);
  /* 11d82857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8285a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8285c call 0x11d846d0 */
  push32(0x11d82861u); f_11d846d0();
  /* 11d82861 mov esi, esp */
  ESI = (ESP);
  /* 11d82863 push 0x11dac324 */
  push32((uint32_t)(0x11dac324u));
  /* 11d82868 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d8286d call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d82873u);
  /* 11d82873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82878 call 0x11d846d0 */
  push32(0x11d8287du); f_11d846d0();
  /* 11d8287d mov esi, esp */
  ESI = (ESP);
  /* 11d8287f push 0x11dac318 */
  push32((uint32_t)(0x11dac318u));
  /* 11d82884 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d82889 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d8288fu);
  /* 11d8288f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82894 call 0x11d846d0 */
  push32(0x11d82899u); f_11d846d0();
  /* 11d82899 mov esi, esp */
  ESI = (ESP);
  /* 11d8289b push 0x11dac30c */
  push32((uint32_t)(0x11dac30cu));
  /* 11d828a0 push 0x11dac238 */
  push32((uint32_t)(0x11dac238u));
  /* 11d828a5 call dword ptr [0x11db4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4474))), 0x11d828abu);
  /* 11d828ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d828ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d828b0 call 0x11d846d0 */
  push32(0x11d828b5u); f_11d846d0();
  /* 11d828b5 mov esi, esp */
  ESI = (ESP);
  /* 11d828b7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d828bc push 3 */
  push32((uint32_t)(0x3u));
  /* 11d828be push 1 */
  push32((uint32_t)(0x1u));
  /* 11d828c0 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d828c6u);
  /* 11d828c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d828c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d828cb call 0x11d846d0 */
  push32(0x11d828d0u); f_11d846d0();
  /* 11d828d0 mov esi, esp */
  ESI = (ESP);
  /* 11d828d2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d828d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d828d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d828db call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d828e1u);
  /* 11d828e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d828e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d828e6 call 0x11d846d0 */
  push32(0x11d828ebu); f_11d846d0();
  /* 11d828eb mov esi, esp */
  ESI = (ESP);
  /* 11d828ed push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d828f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d828f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d828f6 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d828fcu);
  /* 11d828fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d828ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82901 call 0x11d846d0 */
  push32(0x11d82906u); f_11d846d0();
  /* 11d82906 mov esi, esp */
  ESI = (ESP);
  /* 11d82908 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d8290d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8290f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82911 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82917u);
  /* 11d82917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8291a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8291c call 0x11d846d0 */
  push32(0x11d82921u); f_11d846d0();
  /* 11d82921 mov esi, esp */
  ESI = (ESP);
  /* 11d82923 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d82928 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d8292a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8292c call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82932u);
  /* 11d82932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82937 call 0x11d846d0 */
  push32(0x11d8293cu); f_11d846d0();
  /* 11d8293c mov esi, esp */
  ESI = (ESP);
  /* 11d8293e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d82943 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d82945 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82947 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8294du);
  /* 11d8294d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82950 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82952 call 0x11d846d0 */
  push32(0x11d82957u); f_11d846d0();
  /* 11d82957 mov esi, esp */
  ESI = (ESP);
  /* 11d82959 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8295b call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82961u);
  /* 11d82961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82964 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82966 call 0x11d846d0 */
  push32(0x11d8296bu); f_11d846d0();
  /* 11d8296b mov esi, esp */
  ESI = (ESP);
  /* 11d8296d push eax */
  push32((uint32_t)(EAX));
  /* 11d8296e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82970 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82972 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82974 push 0x11dac300 */
  push32((uint32_t)(0x11dac300u));
  /* 11d82979 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8297b call dword ptr [0x11db447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db447c))), 0x11d82981u);
  /* 11d82981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82986 call 0x11d846d0 */
  push32(0x11d8298bu); f_11d846d0();
  /* 11d8298b mov esi, esp */
  ESI = (ESP);
  /* 11d8298d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d82992 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d82994 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82996 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d8299cu);
  /* 11d8299c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8299f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d829a1 call 0x11d846d0 */
  push32(0x11d829a6u); f_11d846d0();
  /* 11d829a6 mov esi, esp */
  ESI = (ESP);
  /* 11d829a8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d829ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11d829af push 2 */
  push32((uint32_t)(0x2u));
  /* 11d829b1 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d829b7u);
  /* 11d829b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d829ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d829bc call 0x11d846d0 */
  push32(0x11d829c1u); f_11d846d0();
  /* 11d829c1 mov esi, esp */
  ESI = (ESP);
  /* 11d829c3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d829c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d829ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11d829cc call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d829d2u);
  /* 11d829d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d829d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d829d7 call 0x11d846d0 */
  push32(0x11d829dcu); f_11d846d0();
  /* 11d829dc mov esi, esp */
  ESI = (ESP);
  /* 11d829de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d829e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d829e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d829e7 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d829edu);
  /* 11d829ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d829f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d829f2 call 0x11d846d0 */
  push32(0x11d829f7u); f_11d846d0();
  /* 11d829f7 mov esi, esp */
  ESI = (ESP);
  /* 11d829f9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d829fe push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82a02 call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82a08u);
  /* 11d82a08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82a0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82a0d call 0x11d846d0 */
  push32(0x11d82a12u); f_11d846d0();
  /* 11d82a12 mov esi, esp */
  ESI = (ESP);
  /* 11d82a14 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d82a19 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d82a1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82a1d call dword ptr [0x11db4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4468))), 0x11d82a23u);
  /* 11d82a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82a28 call 0x11d846d0 */
  push32(0x11d82a2du); f_11d846d0();
  /* 11d82a2d mov esi, esp */
  ESI = (ESP);
  /* 11d82a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82a31 call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82a37u);
  /* 11d82a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82a3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82a3c call 0x11d846d0 */
  push32(0x11d82a41u); f_11d846d0();
  /* 11d82a41 mov esi, esp */
  ESI = (ESP);
  /* 11d82a43 push eax */
  push32((uint32_t)(EAX));
  /* 11d82a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82a4a push 0x11dac2f4 */
  push32((uint32_t)(0x11dac2f4u));
  /* 11d82a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82a51 call dword ptr [0x11db447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db447c))), 0x11d82a57u);
  /* 11d82a57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82a5c call 0x11d846d0 */
  push32(0x11d82a61u); f_11d846d0();
L_11d82a61:;
  /* 11d82a61 mov esi, esp */
  ESI = (ESP);
  /* 11d82a63 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d82a65 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82a6bu);
  /* 11d82a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82a6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82a70 call 0x11d846d0 */
  push32(0x11d82a75u); f_11d846d0();
  /* 11d82a75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82a7c je 0x11d82b06 */
  if (C.zf) goto L_11d82b06;
  /* 11d82a82 mov esi, esp */
  ESI = (ESP);
  /* 11d82a84 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11d82a86 call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d82a8cu);
  /* 11d82a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82a8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82a91 call 0x11d846d0 */
  push32(0x11d82a96u); f_11d846d0();
  /* 11d82a96 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82a9d jne 0x11d82ad9 */
  if (!C.zf) goto L_11d82ad9;
  /* 11d82a9f mov esi, esp */
  ESI = (ESP);
  /* 11d82aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82aa3 push 0x11db15b0 */
  push32((uint32_t)(0x11db15b0u));
  /* 11d82aa8 call dword ptr [0x11db4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4484))), 0x11d82aaeu);
  /* 11d82aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82ab3 call 0x11d846d0 */
  push32(0x11d82ab8u); f_11d846d0();
  /* 11d82ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82aba jg 0x11d82ad9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d82ad9;
  /* 11d82abc mov esi, esp */
  ESI = (ESP);
  /* 11d82abe push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82ac0 push 0x11db15f8 */
  push32((uint32_t)(0x11db15f8u));
  /* 11d82ac5 call dword ptr [0x11db4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4484))), 0x11d82acbu);
  /* 11d82acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82ad0 call 0x11d846d0 */
  push32(0x11d82ad5u); f_11d846d0();
  /* 11d82ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82ad7 jle 0x11d82b06 */
  if ((C.zf||C.sf!=C.of)) goto L_11d82b06;
L_11d82ad9:;
  /* 11d82ad9 mov esi, esp */
  ESI = (ESP);
  /* 11d82adb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82add push 3 */
  push32((uint32_t)(0x3u));
  /* 11d82adf call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82ae5u);
  /* 11d82ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ae8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82aea call 0x11d846d0 */
  push32(0x11d82aefu); f_11d846d0();
  /* 11d82aef mov esi, esp */
  ESI = (ESP);
  /* 11d82af1 push 0x11dac2e8 */
  push32((uint32_t)(0x11dac2e8u));
  /* 11d82af6 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d82afcu);
  /* 11d82afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82aff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b01 call 0x11d846d0 */
  push32(0x11d82b06u); f_11d846d0();
L_11d82b06:;
  /* 11d82b06 mov esi, esp */
  ESI = (ESP);
  /* 11d82b08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82b0a call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82b10u);
  /* 11d82b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82b13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b15 call 0x11d846d0 */
  push32(0x11d82b1au); f_11d846d0();
  /* 11d82b1a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82b21 jne 0x11d82baf */
  if (!C.zf) goto L_11d82baf;
  /* 11d82b27 mov esi, esp */
  ESI = (ESP);
  /* 11d82b29 push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82b2e push 0x11db15a0 */
  push32((uint32_t)(0x11db15a0u));
  /* 11d82b33 call dword ptr [0x11db448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db448c))), 0x11d82b39u);
  /* 11d82b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b3e call 0x11d846d0 */
  push32(0x11d82b43u); f_11d846d0();
  /* 11d82b43 mov esi, eax */
  ESI = (EAX);
  /* 11d82b45 mov edi, esp */
  EDI = (ESP);
  /* 11d82b47 push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82b4c call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d82b52u);
  /* 11d82b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82b55 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b57 call 0x11d846d0 */
  push32(0x11d82b5cu); f_11d846d0();
  /* 11d82b5c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b5e jge 0x11d82baf */
  if ((C.sf==C.of)) goto L_11d82baf;
  /* 11d82b60 mov esi, esp */
  ESI = (ESP);
  /* 11d82b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82b64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82b66 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82b6cu);
  /* 11d82b6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b71 call 0x11d846d0 */
  push32(0x11d82b76u); f_11d846d0();
  /* 11d82b76 mov esi, esp */
  ESI = (ESP);
  /* 11d82b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82b7a push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82b7f call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82b85u);
  /* 11d82b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82b8a call 0x11d846d0 */
  push32(0x11d82b8fu); f_11d846d0();
  /* 11d82b8f mov esi, esp */
  ESI = (ESP);
  /* 11d82b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82b93 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11d82b98 push 0x11db1610 */
  push32((uint32_t)(0x11db1610u));
  /* 11d82b9d push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82b9f call dword ptr [0x11db4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4494))), 0x11d82ba5u);
  /* 11d82ba5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ba8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82baa call 0x11d846d0 */
  push32(0x11d82bafu); f_11d846d0();
L_11d82baf:;
  /* 11d82baf mov esi, esp */
  ESI = (ESP);
  /* 11d82bb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82bb3 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82bb9u);
  /* 11d82bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82bbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82bbe call 0x11d846d0 */
  push32(0x11d82bc3u); f_11d846d0();
  /* 11d82bc3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82bc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82bca je 0x11d82c53 */
  if (C.zf) goto L_11d82c53;
  /* 11d82bd0 mov esi, esp */
  ESI = (ESP);
  /* 11d82bd2 push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82bd7 push 0x11db15a0 */
  push32((uint32_t)(0x11db15a0u));
  /* 11d82bdc call dword ptr [0x11db448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db448c))), 0x11d82be2u);
  /* 11d82be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82be7 call 0x11d846d0 */
  push32(0x11d82becu); f_11d846d0();
  /* 11d82bec mov esi, eax */
  ESI = (EAX);
  /* 11d82bee mov edi, esp */
  EDI = (ESP);
  /* 11d82bf0 push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82bf5 call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d82bfbu);
  /* 11d82bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82bfe cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c00 call 0x11d846d0 */
  push32(0x11d82c05u); f_11d846d0();
  /* 11d82c05 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c07 jne 0x11d82c53 */
  if (!C.zf) goto L_11d82c53;
  /* 11d82c09 mov esi, esp */
  ESI = (ESP);
  /* 11d82c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82c0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82c0f call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82c15u);
  /* 11d82c15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82c18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c1a call 0x11d846d0 */
  push32(0x11d82c1fu); f_11d846d0();
  /* 11d82c1f mov esi, esp */
  ESI = (ESP);
  /* 11d82c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82c23 push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82c28 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82c2eu);
  /* 11d82c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82c31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c33 call 0x11d846d0 */
  push32(0x11d82c38u); f_11d846d0();
  /* 11d82c38 mov esi, esp */
  ESI = (ESP);
  /* 11d82c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82c3c push 0x11db1608 */
  push32((uint32_t)(0x11db1608u));
  /* 11d82c41 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82c43 call dword ptr [0x11db4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4498))), 0x11d82c49u);
  /* 11d82c49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c4e call 0x11d846d0 */
  push32(0x11d82c53u); f_11d846d0();
L_11d82c53:;
  /* 11d82c53 mov esi, esp */
  ESI = (ESP);
  /* 11d82c55 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82c57 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82c5du);
  /* 11d82c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c62 call 0x11d846d0 */
  push32(0x11d82c67u); f_11d846d0();
  /* 11d82c67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82c6e je 0x11d82d3b */
  if (C.zf) goto L_11d82d3b;
  /* 11d82c74 mov esi, esp */
  ESI = (ESP);
  /* 11d82c76 push 0x11db1490 */
  push32((uint32_t)(0x11db1490u));
  /* 11d82c7b call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d82c81u);
  /* 11d82c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82c86 call 0x11d846d0 */
  push32(0x11d82c8bu); f_11d846d0();
  /* 11d82c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82c8d jne 0x11d82d3b */
  if (!C.zf) goto L_11d82d3b;
  /* 11d82c93 mov esi, esp */
  ESI = (ESP);
  /* 11d82c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82c97 push 0x11db15a0 */
  push32((uint32_t)(0x11db15a0u));
  /* 11d82c9c call dword ptr [0x11db4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4484))), 0x11d82ca2u);
  /* 11d82ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ca5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82ca7 call 0x11d846d0 */
  push32(0x11d82cacu); f_11d846d0();
  /* 11d82cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82cae jle 0x11d82d3b */
  if ((C.zf||C.sf!=C.of)) goto L_11d82d3b;
  /* 11d82cb4 mov esi, esp */
  ESI = (ESP);
  /* 11d82cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82cb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d82cba call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82cc0u);
  /* 11d82cc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82cc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82cc5 call 0x11d846d0 */
  push32(0x11d82ccau); f_11d846d0();
  /* 11d82cca mov esi, esp */
  ESI = (ESP);
  /* 11d82ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82cce call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82cd4u);
  /* 11d82cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82cd9 call 0x11d846d0 */
  push32(0x11d82cdeu); f_11d846d0();
  /* 11d82cde imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d82ce4 mov edx, 0x4e20 */
  EDX = (0x4e20u);
  /* 11d82ce9 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d82ceb mov esi, esp */
  ESI = (ESP);
  /* 11d82ced push edx */
  push32((uint32_t)(EDX));
  /* 11d82cee push 0x11dac2e0 */
  push32((uint32_t)(0x11dac2e0u));
  /* 11d82cf3 call dword ptr [0x11db449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db449c))), 0x11d82cf9u);
  /* 11d82cf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82cfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82cfe call 0x11d846d0 */
  push32(0x11d82d03u); f_11d846d0();
  /* 11d82d03 mov esi, esp */
  ESI = (ESP);
  /* 11d82d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82d07 call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82d0du);
  /* 11d82d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82d10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82d12 call 0x11d846d0 */
  push32(0x11d82d17u); f_11d846d0();
  /* 11d82d17 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d82d1d mov ecx, 0x4e20 */
  ECX = (0x4e20u);
  /* 11d82d22 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d82d24 mov esi, esp */
  ESI = (ESP);
  /* 11d82d26 push ecx */
  push32((uint32_t)(ECX));
  /* 11d82d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82d2b call dword ptr [0x11db44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a0))), 0x11d82d31u);
  /* 11d82d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82d34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82d36 call 0x11d846d0 */
  push32(0x11d82d3bu); f_11d846d0();
L_11d82d3b:;
  /* 11d82d3b mov esi, esp */
  ESI = (ESP);
  /* 11d82d3d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11d82d3f call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82d45u);
  /* 11d82d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82d4a call 0x11d846d0 */
  push32(0x11d82d4fu); f_11d846d0();
  /* 11d82d4f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82d56 jne 0x11d82de4 */
  if (!C.zf) goto L_11d82de4;
  /* 11d82d5c mov esi, esp */
  ESI = (ESP);
  /* 11d82d5e push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82d63 push 0x11db15a8 */
  push32((uint32_t)(0x11db15a8u));
  /* 11d82d68 call dword ptr [0x11db448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db448c))), 0x11d82d6eu);
  /* 11d82d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82d73 call 0x11d846d0 */
  push32(0x11d82d78u); f_11d846d0();
  /* 11d82d78 mov esi, eax */
  ESI = (EAX);
  /* 11d82d7a mov edi, esp */
  EDI = (ESP);
  /* 11d82d7c push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82d81 call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d82d87u);
  /* 11d82d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82d8a cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82d8c call 0x11d846d0 */
  push32(0x11d82d91u); f_11d846d0();
  /* 11d82d91 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82d93 jge 0x11d82de4 */
  if ((C.sf==C.of)) goto L_11d82de4;
  /* 11d82d95 mov esi, esp */
  ESI = (ESP);
  /* 11d82d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82d99 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11d82d9b call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82da1u);
  /* 11d82da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82da6 call 0x11d846d0 */
  push32(0x11d82dabu); f_11d846d0();
  /* 11d82dab mov esi, esp */
  ESI = (ESP);
  /* 11d82dad push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82daf push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82db4 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82dbau);
  /* 11d82dba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82dbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82dbf call 0x11d846d0 */
  push32(0x11d82dc4u); f_11d846d0();
  /* 11d82dc4 mov esi, esp */
  ESI = (ESP);
  /* 11d82dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82dc8 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11d82dcd push 0x11db1620 */
  push32((uint32_t)(0x11db1620u));
  /* 11d82dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82dd4 call dword ptr [0x11db4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4494))), 0x11d82ddau);
  /* 11d82dda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ddd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82ddf call 0x11d846d0 */
  push32(0x11d82de4u); f_11d846d0();
L_11d82de4:;
  /* 11d82de4 mov esi, esp */
  ESI = (ESP);
  /* 11d82de6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11d82de8 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82deeu);
  /* 11d82dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82df3 call 0x11d846d0 */
  push32(0x11d82df8u); f_11d846d0();
  /* 11d82df8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82dff je 0x11d82e88 */
  if (C.zf) goto L_11d82e88;
  /* 11d82e05 mov esi, esp */
  ESI = (ESP);
  /* 11d82e07 push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82e0c push 0x11db15a8 */
  push32((uint32_t)(0x11db15a8u));
  /* 11d82e11 call dword ptr [0x11db448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db448c))), 0x11d82e17u);
  /* 11d82e17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82e1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e1c call 0x11d846d0 */
  push32(0x11d82e21u); f_11d846d0();
  /* 11d82e21 mov esi, eax */
  ESI = (EAX);
  /* 11d82e23 mov edi, esp */
  EDI = (ESP);
  /* 11d82e25 push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82e2a call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d82e30u);
  /* 11d82e30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82e33 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e35 call 0x11d846d0 */
  push32(0x11d82e3au); f_11d846d0();
  /* 11d82e3a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e3c jne 0x11d82e88 */
  if (!C.zf) goto L_11d82e88;
  /* 11d82e3e mov esi, esp */
  ESI = (ESP);
  /* 11d82e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82e42 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11d82e44 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82e4au);
  /* 11d82e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e4f call 0x11d846d0 */
  push32(0x11d82e54u); f_11d846d0();
  /* 11d82e54 mov esi, esp */
  ESI = (ESP);
  /* 11d82e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82e58 push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82e5d call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d82e63u);
  /* 11d82e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e68 call 0x11d846d0 */
  push32(0x11d82e6du); f_11d846d0();
  /* 11d82e6d mov esi, esp */
  ESI = (ESP);
  /* 11d82e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82e71 push 0x11db1618 */
  push32((uint32_t)(0x11db1618u));
  /* 11d82e76 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d82e78 call dword ptr [0x11db4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4498))), 0x11d82e7eu);
  /* 11d82e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e83 call 0x11d846d0 */
  push32(0x11d82e88u); f_11d846d0();
L_11d82e88:;
  /* 11d82e88 mov esi, esp */
  ESI = (ESP);
  /* 11d82e8a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d82e8c call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82e92u);
  /* 11d82e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82e95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82e97 call 0x11d846d0 */
  push32(0x11d82e9cu); f_11d846d0();
  /* 11d82e9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82ea3 je 0x11d82f70 */
  if (C.zf) goto L_11d82f70;
  /* 11d82ea9 mov esi, esp */
  ESI = (ESP);
  /* 11d82eab push 0x11db1488 */
  push32((uint32_t)(0x11db1488u));
  /* 11d82eb0 call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d82eb6u);
  /* 11d82eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82ebb call 0x11d846d0 */
  push32(0x11d82ec0u); f_11d846d0();
  /* 11d82ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82ec2 jne 0x11d82f70 */
  if (!C.zf) goto L_11d82f70;
  /* 11d82ec8 mov esi, esp */
  ESI = (ESP);
  /* 11d82eca push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82ecc push 0x11db15a8 */
  push32((uint32_t)(0x11db15a8u));
  /* 11d82ed1 call dword ptr [0x11db4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4484))), 0x11d82ed7u);
  /* 11d82ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82edc call 0x11d846d0 */
  push32(0x11d82ee1u); f_11d846d0();
  /* 11d82ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82ee3 jle 0x11d82f70 */
  if ((C.zf||C.sf!=C.of)) goto L_11d82f70;
  /* 11d82ee9 mov esi, esp */
  ESI = (ESP);
  /* 11d82eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82eed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d82eef call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82ef5u);
  /* 11d82ef5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82efa call 0x11d846d0 */
  push32(0x11d82effu); f_11d846d0();
  /* 11d82eff mov esi, esp */
  ESI = (ESP);
  /* 11d82f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82f03 call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82f09u);
  /* 11d82f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82f0e call 0x11d846d0 */
  push32(0x11d82f13u); f_11d846d0();
  /* 11d82f13 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d82f19 mov edx, 0x5dc0 */
  EDX = (0x5dc0u);
  /* 11d82f1e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d82f20 mov esi, esp */
  ESI = (ESP);
  /* 11d82f22 push edx */
  push32((uint32_t)(EDX));
  /* 11d82f23 push 0x11dac2e0 */
  push32((uint32_t)(0x11dac2e0u));
  /* 11d82f28 call dword ptr [0x11db449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db449c))), 0x11d82f2eu);
  /* 11d82f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82f33 call 0x11d846d0 */
  push32(0x11d82f38u); f_11d846d0();
  /* 11d82f38 mov esi, esp */
  ESI = (ESP);
  /* 11d82f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82f3c call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d82f42u);
  /* 11d82f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82f47 call 0x11d846d0 */
  push32(0x11d82f4cu); f_11d846d0();
  /* 11d82f4c imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d82f52 mov ecx, 0x5dc0 */
  ECX = (0x5dc0u);
  /* 11d82f57 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d82f59 mov esi, esp */
  ESI = (ESP);
  /* 11d82f5b push ecx */
  push32((uint32_t)(ECX));
  /* 11d82f5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82f60 call dword ptr [0x11db44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a0))), 0x11d82f66u);
  /* 11d82f66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82f69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82f6b call 0x11d846d0 */
  push32(0x11d82f70u); f_11d846d0();
L_11d82f70:;
  /* 11d82f70 mov esi, esp */
  ESI = (ESP);
  /* 11d82f72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d82f74 call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d82f7au);
  /* 11d82f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82f7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82f7f call 0x11d846d0 */
  push32(0x11d82f84u); f_11d846d0();
  /* 11d82f84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82f89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82f8b je 0x11d83051 */
  if (C.zf) goto L_11d83051;
  /* 11d82f91 mov esi, esp */
  ESI = (ESP);
  /* 11d82f93 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d82f95 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d82f9bu);
  /* 11d82f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82fa0 call 0x11d846d0 */
  push32(0x11d82fa5u); f_11d846d0();
  /* 11d82fa5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d82faa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d82fac je 0x11d83051 */
  if (C.zf) goto L_11d83051;
  /* 11d82fb2 mov esi, esp */
  ESI = (ESP);
  /* 11d82fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d82fb6 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d82fb8 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d82fbeu);
  /* 11d82fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82fc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82fc3 call 0x11d846d0 */
  push32(0x11d82fc8u); f_11d846d0();
  /* 11d82fc8 mov dword ptr [0x11db1600], 0x3c */
  w32((uint32_t)(0x11db1600), (0x3cu));
  /* 11d82fd2 mov esi, esp */
  ESI = (ESP);
  /* 11d82fd4 mov edx, dword ptr [0x11db1600] */
  EDX = (r32((uint32_t)(0x11db1600)));
  /* 11d82fda push edx */
  push32((uint32_t)(EDX));
  /* 11d82fdb push 0x11dac2d4 */
  push32((uint32_t)(0x11dac2d4u));
  /* 11d82fe0 call dword ptr [0x11db449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db449c))), 0x11d82fe6u);
  /* 11d82fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82fe9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82feb call 0x11d846d0 */
  push32(0x11d82ff0u); f_11d846d0();
  /* 11d82ff0 mov esi, esp */
  ESI = (ESP);
  /* 11d82ff2 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11d82ff4 call dword ptr [0x11db4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4458))), 0x11d82ffau);
  /* 11d82ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d82ffd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d82fff call 0x11d846d0 */
  push32(0x11d83004u); f_11d846d0();
  /* 11d83004 mov esi, esp */
  ESI = (ESP);
  /* 11d83006 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11d83008 call dword ptr [0x11db4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4458))), 0x11d8300eu);
  /* 11d8300e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83011 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83013 call 0x11d846d0 */
  push32(0x11d83018u); f_11d846d0();
  /* 11d83018 mov eax, dword ptr [0x11db1600] */
  EAX = (r32((uint32_t)(0x11db1600)));
  /* 11d8301d imul eax, eax, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x8fcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d83023 mov esi, esp */
  ESI = (ESP);
  /* 11d83025 push eax */
  push32((uint32_t)(EAX));
  /* 11d83026 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d83028 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d8302eu);
  /* 11d8302e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83031 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83033 call 0x11d846d0 */
  push32(0x11d83038u); f_11d846d0();
  /* 11d83038 mov esi, esp */
  ESI = (ESP);
  /* 11d8303a push 0x2cec */
  push32((uint32_t)(0x2cecu));
  /* 11d8303f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11d83041 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d83047u);
  /* 11d83047 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8304a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8304c call 0x11d846d0 */
  push32(0x11d83051u); f_11d846d0();
L_11d83051:;
  /* 11d83051 mov esi, esp */
  ESI = (ESP);
  /* 11d83053 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11d83055 call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d8305bu);
  /* 11d8305b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8305e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83060 call 0x11d846d0 */
  push32(0x11d83065u); f_11d846d0();
  /* 11d83065 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8306a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8306c je 0x11d830d3 */
  if (C.zf) goto L_11d830d3;
  /* 11d8306e mov ecx, dword ptr [0x11db1600] */
  ECX = (r32((uint32_t)(0x11db1600)));
  /* 11d83074 sub ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d83077 mov dword ptr [0x11db1600], ecx */
  w32((uint32_t)(0x11db1600), (ECX));
  /* 11d8307d mov esi, esp */
  ESI = (ESP);
  /* 11d8307f mov edx, dword ptr [0x11db1600] */
  EDX = (r32((uint32_t)(0x11db1600)));
  /* 11d83085 push edx */
  push32((uint32_t)(EDX));
  /* 11d83086 push 0x11dac2c8 */
  push32((uint32_t)(0x11dac2c8u));
  /* 11d8308b call dword ptr [0x11db449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db449c))), 0x11d83091u);
  /* 11d83091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83096 call 0x11d846d0 */
  push32(0x11d8309bu); f_11d846d0();
  /* 11d8309b cmp dword ptr [0x11db1600], 5 */
  { uint32_t _a=(r32((uint32_t)(0x11db1600))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d830a2 jne 0x11d830ba */
  if (!C.zf) goto L_11d830ba;
  /* 11d830a4 mov esi, esp */
  ESI = (ESP);
  /* 11d830a6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11d830a8 call dword ptr [0x11db44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a4))), 0x11d830aeu);
  /* 11d830ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d830b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d830b3 call 0x11d846d0 */
  push32(0x11d830b8u); f_11d846d0();
  /* 11d830b8 jmp 0x11d830d3 */
  goto L_11d830d3;
L_11d830ba:;
  /* 11d830ba mov esi, esp */
  ESI = (ESP);
  /* 11d830bc push 0x2cec */
  push32((uint32_t)(0x2cecu));
  /* 11d830c1 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11d830c3 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d830c9u);
  /* 11d830c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d830cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d830ce call 0x11d846d0 */
  push32(0x11d830d3u); f_11d846d0();
L_11d830d3:;
  /* 11d830d3 mov esi, esp */
  ESI = (ESP);
  /* 11d830d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d830d7 push 0x11db1480 */
  push32((uint32_t)(0x11db1480u));
  /* 11d830dc call dword ptr [0x11db44a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a8))), 0x11d830e2u);
  /* 11d830e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d830e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d830e7 call 0x11d846d0 */
  push32(0x11d830ecu); f_11d846d0();
  /* 11d830ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d830f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d830f3 je 0x11d83141 */
  if (C.zf) goto L_11d83141;
  /* 11d830f5 mov esi, esp */
  ESI = (ESP);
  /* 11d830f7 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d830f9 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d830ffu);
  /* 11d830ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83104 call 0x11d846d0 */
  push32(0x11d83109u); f_11d846d0();
  /* 11d83109 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8310e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83110 je 0x11d83141 */
  if (C.zf) goto L_11d83141;
  /* 11d83112 mov esi, esp */
  ESI = (ESP);
  /* 11d83114 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83116 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d83118 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d8311eu);
  /* 11d8311e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83123 call 0x11d846d0 */
  push32(0x11d83128u); f_11d846d0();
  /* 11d83128 mov esi, esp */
  ESI = (ESP);
  /* 11d8312a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11d8312f push 6 */
  push32((uint32_t)(0x6u));
  /* 11d83131 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d83137u);
  /* 11d83137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8313a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8313c call 0x11d846d0 */
  push32(0x11d83141u); f_11d846d0();
L_11d83141:;
  /* 11d83141 mov esi, esp */
  ESI = (ESP);
  /* 11d83143 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d83145 call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d8314bu);
  /* 11d8314b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8314e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83150 call 0x11d846d0 */
  push32(0x11d83155u); f_11d846d0();
  /* 11d83155 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8315a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8315c je 0x11d831dc */
  if (C.zf) goto L_11d831dc;
  /* 11d8315e mov esi, esp */
  ESI = (ESP);
  /* 11d83160 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11d83162 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83168u);
  /* 11d83168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8316b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8316d call 0x11d846d0 */
  push32(0x11d83172u); f_11d846d0();
  /* 11d83172 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83177 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83179 je 0x11d831dc */
  if (C.zf) goto L_11d831dc;
  /* 11d8317b cmp dword ptr [0x11db1498], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1498))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83182 jne 0x11d8319d */
  if (!C.zf) goto L_11d8319d;
  /* 11d83184 mov esi, esp */
  ESI = (ESP);
  /* 11d83186 push 0x11dac2c0 */
  push32((uint32_t)(0x11dac2c0u));
  /* 11d8318b call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83191u);
  /* 11d83191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83196 call 0x11d846d0 */
  push32(0x11d8319bu); f_11d846d0();
  /* 11d8319b jmp 0x11d831b4 */
  goto L_11d831b4;
L_11d8319d:;
  /* 11d8319d mov esi, esp */
  ESI = (ESP);
  /* 11d8319f push 0x11dac2b8 */
  push32((uint32_t)(0x11dac2b8u));
  /* 11d831a4 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d831aau);
  /* 11d831aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d831ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d831af call 0x11d846d0 */
  push32(0x11d831b4u); f_11d846d0();
L_11d831b4:;
  /* 11d831b4 mov esi, esp */
  ESI = (ESP);
  /* 11d831b6 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11d831b8 call dword ptr [0x11db445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db445c))), 0x11d831beu);
  /* 11d831be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d831c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d831c3 call 0x11d846d0 */
  push32(0x11d831c8u); f_11d846d0();
  /* 11d831c8 mov esi, esp */
  ESI = (ESP);
  /* 11d831ca push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11d831cc call dword ptr [0x11db4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4458))), 0x11d831d2u);
  /* 11d831d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d831d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d831d7 call 0x11d846d0 */
  push32(0x11d831dcu); f_11d846d0();
L_11d831dc:;
  /* 11d831dc mov esi, esp */
  ESI = (ESP);
  /* 11d831de push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d831e0 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d831e6u);
  /* 11d831e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d831e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d831eb call 0x11d846d0 */
  push32(0x11d831f0u); f_11d846d0();
  /* 11d831f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d831f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d831f7 je 0x11d83289 */
  if (C.zf) goto L_11d83289;
  /* 11d831fd mov esi, esp */
  ESI = (ESP);
  /* 11d831ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83201 call dword ptr [0x11db44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ac))), 0x11d83207u);
  /* 11d83207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8320a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8320c call 0x11d846d0 */
  push32(0x11d83211u); f_11d846d0();
  /* 11d83211 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83218 je 0x11d83289 */
  if (C.zf) goto L_11d83289;
  /* 11d8321a mov esi, esp */
  ESI = (ESP);
  /* 11d8321c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8321e push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d83220 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83226u);
  /* 11d83226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8322b call 0x11d846d0 */
  push32(0x11d83230u); f_11d846d0();
  /* 11d83230 mov esi, esp */
  ESI = (ESP);
  /* 11d83232 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d83234 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83236 call dword ptr [0x11db44b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44b0))), 0x11d8323cu);
  /* 11d8323c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8323f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83241 call 0x11d846d0 */
  push32(0x11d83246u); f_11d846d0();
  /* 11d83246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83248 jle 0x11d83263 */
  if ((C.zf||C.sf!=C.of)) goto L_11d83263;
  /* 11d8324a mov esi, esp */
  ESI = (ESP);
  /* 11d8324c push 0x11dac2b0 */
  push32((uint32_t)(0x11dac2b0u));
  /* 11d83251 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83257u);
  /* 11d83257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8325a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8325c call 0x11d846d0 */
  push32(0x11d83261u); f_11d846d0();
  /* 11d83261 jmp 0x11d8327a */
  goto L_11d8327a;
L_11d83263:;
  /* 11d83263 mov esi, esp */
  ESI = (ESP);
  /* 11d83265 push 0x11dac2a4 */
  push32((uint32_t)(0x11dac2a4u));
  /* 11d8326a call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83270u);
  /* 11d83270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83275 call 0x11d846d0 */
  push32(0x11d8327au); f_11d846d0();
L_11d8327a:;
  /* 11d8327a mov esi, esp */
  ESI = (ESP);
  /* 11d8327c call dword ptr [0x11db44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44b4))), 0x11d83282u);
  /* 11d83282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83284 call 0x11d846d0 */
  push32(0x11d83289u); f_11d846d0();
L_11d83289:;
  /* 11d83289 mov esi, esp */
  ESI = (ESP);
  /* 11d8328b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d8328d call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83293u);
  /* 11d83293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83298 call 0x11d846d0 */
  push32(0x11d8329du); f_11d846d0();
  /* 11d8329d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d832a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d832a4 je 0x11d832ff */
  if (C.zf) goto L_11d832ff;
  /* 11d832a6 mov esi, esp */
  ESI = (ESP);
  /* 11d832a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d832aa call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d832b0u);
  /* 11d832b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d832b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d832b5 call 0x11d846d0 */
  push32(0x11d832bau); f_11d846d0();
  /* 11d832ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d832bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d832c1 je 0x11d832ff */
  if (C.zf) goto L_11d832ff;
  /* 11d832c3 mov esi, esp */
  ESI = (ESP);
  /* 11d832c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d832c7 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d832c9 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d832cfu);
  /* 11d832cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d832d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d832d4 call 0x11d846d0 */
  push32(0x11d832d9u); f_11d846d0();
  /* 11d832d9 mov esi, esp */
  ESI = (ESP);
  /* 11d832db push 0x11dac298 */
  push32((uint32_t)(0x11dac298u));
  /* 11d832e0 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d832e6u);
  /* 11d832e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d832e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d832eb call 0x11d846d0 */
  push32(0x11d832f0u); f_11d846d0();
  /* 11d832f0 mov esi, esp */
  ESI = (ESP);
  /* 11d832f2 call dword ptr [0x11db44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44b4))), 0x11d832f8u);
  /* 11d832f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d832fa call 0x11d846d0 */
  push32(0x11d832ffu); f_11d846d0();
L_11d832ff:;
  /* 11d832ff mov esi, esp */
  ESI = (ESP);
  /* 11d83301 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d83303 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83309u);
  /* 11d83309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8330c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8330e call 0x11d846d0 */
  push32(0x11d83313u); f_11d846d0();
  /* 11d83313 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8331a je 0x11d835ae */
  if (C.zf) goto L_11d835ae;
  /* 11d83320 mov esi, esp */
  ESI = (ESP);
  /* 11d83322 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d83324 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d8332au);
  /* 11d8332a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8332d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8332f call 0x11d846d0 */
  push32(0x11d83334u); f_11d846d0();
  /* 11d83334 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8333b je 0x11d83395 */
  if (C.zf) goto L_11d83395;
  /* 11d8333d mov esi, esp */
  ESI = (ESP);
  /* 11d8333f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83341 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d83343 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83349u);
  /* 11d83349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8334c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8334e call 0x11d846d0 */
  push32(0x11d83353u); f_11d846d0();
  /* 11d83353 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8335a jmp 0x11d83365 */
  goto L_11d83365;
L_11d8335c:;
  /* 11d8335c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8335f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83362 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d83365:;
  /* 11d83365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d83368 cmp ecx, dword ptr [0x11db14d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db14d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8336e jge 0x11d83395 */
  if ((C.sf==C.of)) goto L_11d83395;
  /* 11d83370 mov esi, esp */
  ESI = (ESP);
  /* 11d83372 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d83374 push 0x11db1430 */
  push32((uint32_t)(0x11db1430u));
  /* 11d83379 push 0x11db15d0 */
  push32((uint32_t)(0x11db15d0u));
  /* 11d8337e push 0x11db1458 */
  push32((uint32_t)(0x11db1458u));
  /* 11d83383 call dword ptr [0x11db44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44b8))), 0x11d83389u);
  /* 11d83389 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8338c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8338e call 0x11d846d0 */
  push32(0x11d83393u); f_11d846d0();
  /* 11d83393 jmp 0x11d8335c */
  goto L_11d8335c;
L_11d83395:;
  /* 11d83395 mov esi, esp */
  ESI = (ESP);
  /* 11d83397 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d83399 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d8339fu);
  /* 11d8339f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d833a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d833a4 call 0x11d846d0 */
  push32(0x11d833a9u); f_11d846d0();
  /* 11d833a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d833ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d833b0 je 0x11d83401 */
  if (C.zf) goto L_11d83401;
  /* 11d833b2 mov esi, esp */
  ESI = (ESP);
  /* 11d833b4 push 0x11db1458 */
  push32((uint32_t)(0x11db1458u));
  /* 11d833b9 call dword ptr [0x11db44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44bc))), 0x11d833bfu);
  /* 11d833bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d833c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d833c4 call 0x11d846d0 */
  push32(0x11d833c9u); f_11d846d0();
  /* 11d833c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d833ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d833d0 je 0x11d83401 */
  if (C.zf) goto L_11d83401;
  /* 11d833d2 mov esi, esp */
  ESI = (ESP);
  /* 11d833d4 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11d833d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d833db call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d833e1u);
  /* 11d833e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d833e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d833e6 call 0x11d846d0 */
  push32(0x11d833ebu); f_11d846d0();
  /* 11d833eb mov esi, esp */
  ESI = (ESP);
  /* 11d833ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d833ef push 0xa */
  push32((uint32_t)(0xau));
  /* 11d833f1 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d833f7u);
  /* 11d833f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d833fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d833fc call 0x11d846d0 */
  push32(0x11d83401u); f_11d846d0();
L_11d83401:;
  /* 11d83401 mov esi, esp */
  ESI = (ESP);
  /* 11d83403 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d83405 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d8340bu);
  /* 11d8340b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8340e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83410 call 0x11d846d0 */
  push32(0x11d83415u); f_11d846d0();
  /* 11d83415 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8341a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8341c je 0x11d83511 */
  if (C.zf) goto L_11d83511;
  /* 11d83422 mov esi, esp */
  ESI = (ESP);
  /* 11d83424 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d83426 call dword ptr [0x11db44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44c0))), 0x11d8342cu);
  /* 11d8342c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8342f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83431 call 0x11d846d0 */
  push32(0x11d83436u); f_11d846d0();
  /* 11d83436 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8343b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8343d je 0x11d83511 */
  if (C.zf) goto L_11d83511;
  /* 11d83443 mov esi, esp */
  ESI = (ESP);
  /* 11d83445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83447 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d83449 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d8344fu);
  /* 11d8344f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83454 call 0x11d846d0 */
  push32(0x11d83459u); f_11d846d0();
  /* 11d83459 mov esi, esp */
  ESI = (ESP);
  /* 11d8345b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8345d push 0xa */
  push32((uint32_t)(0xau));
  /* 11d8345f call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83465u);
  /* 11d83465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8346a call 0x11d846d0 */
  push32(0x11d8346fu); f_11d846d0();
  /* 11d8346f mov esi, esp */
  ESI = (ESP);
  /* 11d83471 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d83473 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d83475 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d8347bu);
  /* 11d8347b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8347e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83480 call 0x11d846d0 */
  push32(0x11d83485u); f_11d846d0();
  /* 11d83485 mov esi, esp */
  ESI = (ESP);
  /* 11d83487 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d83489 call dword ptr [0x11db44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a4))), 0x11d8348fu);
  /* 11d8348f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83492 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83494 call 0x11d846d0 */
  push32(0x11d83499u); f_11d846d0();
  /* 11d83499 mov esi, esp */
  ESI = (ESP);
  /* 11d8349b push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 11d834a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d834a2 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d834a8u);
  /* 11d834a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d834ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d834ad call 0x11d846d0 */
  push32(0x11d834b2u); f_11d846d0();
  /* 11d834b2 mov esi, esp */
  ESI = (ESP);
  /* 11d834b4 push 0x11db1448 */
  push32((uint32_t)(0x11db1448u));
  /* 11d834b9 push 0x11db1430 */
  push32((uint32_t)(0x11db1430u));
  /* 11d834be call dword ptr [0x11db44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44c4))), 0x11d834c4u);
  /* 11d834c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d834c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d834c9 call 0x11d846d0 */
  push32(0x11d834ceu); f_11d846d0();
  /* 11d834ce mov esi, esp */
  ESI = (ESP);
  /* 11d834d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d834d2 push 0x11db1448 */
  push32((uint32_t)(0x11db1448u));
  /* 11d834d7 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d834ddu);
  /* 11d834dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d834e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d834e2 call 0x11d846d0 */
  push32(0x11d834e7u); f_11d846d0();
  /* 11d834e7 mov esi, esp */
  ESI = (ESP);
  /* 11d834e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d834eb push 5 */
  push32((uint32_t)(0x5u));
  /* 11d834ed call dword ptr [0x11db44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44c8))), 0x11d834f3u);
  /* 11d834f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d834f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d834f8 call 0x11d846d0 */
  push32(0x11d834fdu); f_11d846d0();
  /* 11d834fd mov esi, esp */
  ESI = (ESP);
  /* 11d834ff push 5 */
  push32((uint32_t)(0x5u));
  /* 11d83501 call dword ptr [0x11db44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44cc))), 0x11d83507u);
  /* 11d83507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8350a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8350c call 0x11d846d0 */
  push32(0x11d83511u); f_11d846d0();
L_11d83511:;
  /* 11d83511 mov esi, esp */
  ESI = (ESP);
  /* 11d83513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83515 push 0x11db15c0 */
  push32((uint32_t)(0x11db15c0u));
  /* 11d8351a push 0x11db1448 */
  push32((uint32_t)(0x11db1448u));
  /* 11d8351f call dword ptr [0x11db44d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d0))), 0x11d83525u);
  /* 11d83525 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83528 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8352a call 0x11d846d0 */
  push32(0x11d8352fu); f_11d846d0();
  /* 11d8352f mov esi, esp */
  ESI = (ESP);
  /* 11d83531 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d83533 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83539u);
  /* 11d83539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8353c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8353e call 0x11d846d0 */
  push32(0x11d83543u); f_11d846d0();
  /* 11d83543 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8354a jne 0x11d835ae */
  if (!C.zf) goto L_11d835ae;
  /* 11d8354c mov esi, esp */
  ESI = (ESP);
  /* 11d8354e push 0x11db1448 */
  push32((uint32_t)(0x11db1448u));
  /* 11d83553 call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d83559u);
  /* 11d83559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8355c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8355e call 0x11d846d0 */
  push32(0x11d83563u); f_11d846d0();
  /* 11d83563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83565 je 0x11d83584 */
  if (C.zf) goto L_11d83584;
  /* 11d83567 mov esi, esp */
  ESI = (ESP);
  /* 11d83569 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8356b call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d83571u);
  /* 11d83571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83576 call 0x11d846d0 */
  push32(0x11d8357bu); f_11d846d0();
  /* 11d8357b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83582 je 0x11d835ae */
  if (C.zf) goto L_11d835ae;
L_11d83584:;
  /* 11d83584 mov esi, esp */
  ESI = (ESP);
  /* 11d83586 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d83588 call dword ptr [0x11db44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a4))), 0x11d8358eu);
  /* 11d8358e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83593 call 0x11d846d0 */
  push32(0x11d83598u); f_11d846d0();
  /* 11d83598 mov esi, esp */
  ESI = (ESP);
  /* 11d8359a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8359c push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8359e call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d835a4u);
  /* 11d835a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d835a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d835a9 call 0x11d846d0 */
  push32(0x11d835aeu); f_11d846d0();
L_11d835ae:;
  /* 11d835ae mov esi, esp */
  ESI = (ESP);
  /* 11d835b0 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d835b2 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d835b8u);
  /* 11d835b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d835bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d835bd call 0x11d846d0 */
  push32(0x11d835c2u); f_11d846d0();
  /* 11d835c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d835c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d835c9 je 0x11d8385d */
  if (C.zf) goto L_11d8385d;
  /* 11d835cf mov esi, esp */
  ESI = (ESP);
  /* 11d835d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d835d3 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d835d9u);
  /* 11d835d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d835dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d835de call 0x11d846d0 */
  push32(0x11d835e3u); f_11d846d0();
  /* 11d835e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d835e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d835ea je 0x11d83644 */
  if (C.zf) goto L_11d83644;
  /* 11d835ec mov esi, esp */
  ESI = (ESP);
  /* 11d835ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d835f0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d835f2 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d835f8u);
  /* 11d835f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d835fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d835fd call 0x11d846d0 */
  push32(0x11d83602u); f_11d846d0();
  /* 11d83602 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d83609 jmp 0x11d83614 */
  goto L_11d83614;
L_11d8360b:;
  /* 11d8360b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8360e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83611 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d83614:;
  /* 11d83614 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d83617 cmp eax, dword ptr [0x11db1528] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db1528))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8361d jge 0x11d83644 */
  if ((C.sf==C.of)) goto L_11d83644;
  /* 11d8361f mov esi, esp */
  ESI = (ESP);
  /* 11d83621 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d83623 push 0x11db1428 */
  push32((uint32_t)(0x11db1428u));
  /* 11d83628 push 0x11db15d8 */
  push32((uint32_t)(0x11db15d8u));
  /* 11d8362d push 0x11db1460 */
  push32((uint32_t)(0x11db1460u));
  /* 11d83632 call dword ptr [0x11db44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44b8))), 0x11d83638u);
  /* 11d83638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8363b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8363d call 0x11d846d0 */
  push32(0x11d83642u); f_11d846d0();
  /* 11d83642 jmp 0x11d8360b */
  goto L_11d8360b;
L_11d83644:;
  /* 11d83644 mov esi, esp */
  ESI = (ESP);
  /* 11d83646 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d83648 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d8364eu);
  /* 11d8364e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83653 call 0x11d846d0 */
  push32(0x11d83658u); f_11d846d0();
  /* 11d83658 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8365d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8365f je 0x11d836b0 */
  if (C.zf) goto L_11d836b0;
  /* 11d83661 mov esi, esp */
  ESI = (ESP);
  /* 11d83663 push 0x11db1460 */
  push32((uint32_t)(0x11db1460u));
  /* 11d83668 call dword ptr [0x11db44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44bc))), 0x11d8366eu);
  /* 11d8366e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83673 call 0x11d846d0 */
  push32(0x11d83678u); f_11d846d0();
  /* 11d83678 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8367d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8367f je 0x11d836b0 */
  if (C.zf) goto L_11d836b0;
  /* 11d83681 mov esi, esp */
  ESI = (ESP);
  /* 11d83683 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11d83688 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8368a call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d83690u);
  /* 11d83690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83695 call 0x11d846d0 */
  push32(0x11d8369au); f_11d846d0();
  /* 11d8369a mov esi, esp */
  ESI = (ESP);
  /* 11d8369c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8369e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d836a0 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d836a6u);
  /* 11d836a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d836a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d836ab call 0x11d846d0 */
  push32(0x11d836b0u); f_11d846d0();
L_11d836b0:;
  /* 11d836b0 mov esi, esp */
  ESI = (ESP);
  /* 11d836b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d836b4 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d836bau);
  /* 11d836ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d836bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d836bf call 0x11d846d0 */
  push32(0x11d836c4u); f_11d846d0();
  /* 11d836c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d836c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d836cb je 0x11d837c0 */
  if (C.zf) goto L_11d837c0;
  /* 11d836d1 mov esi, esp */
  ESI = (ESP);
  /* 11d836d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d836d5 call dword ptr [0x11db44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44c0))), 0x11d836dbu);
  /* 11d836db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d836de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d836e0 call 0x11d846d0 */
  push32(0x11d836e5u); f_11d846d0();
  /* 11d836e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d836ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d836ec je 0x11d837c0 */
  if (C.zf) goto L_11d837c0;
  /* 11d836f2 mov esi, esp */
  ESI = (ESP);
  /* 11d836f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d836f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d836f8 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d836feu);
  /* 11d836fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83701 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83703 call 0x11d846d0 */
  push32(0x11d83708u); f_11d846d0();
  /* 11d83708 mov esi, esp */
  ESI = (ESP);
  /* 11d8370a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8370c push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d8370e call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83714u);
  /* 11d83714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83719 call 0x11d846d0 */
  push32(0x11d8371eu); f_11d846d0();
  /* 11d8371e mov esi, esp */
  ESI = (ESP);
  /* 11d83720 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d83722 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d83724 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d8372au);
  /* 11d8372a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8372d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8372f call 0x11d846d0 */
  push32(0x11d83734u); f_11d846d0();
  /* 11d83734 mov esi, esp */
  ESI = (ESP);
  /* 11d83736 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d83738 call dword ptr [0x11db44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a4))), 0x11d8373eu);
  /* 11d8373e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83743 call 0x11d846d0 */
  push32(0x11d83748u); f_11d846d0();
  /* 11d83748 mov esi, esp */
  ESI = (ESP);
  /* 11d8374a push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 11d8374f push 5 */
  push32((uint32_t)(0x5u));
  /* 11d83751 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d83757u);
  /* 11d83757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8375a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8375c call 0x11d846d0 */
  push32(0x11d83761u); f_11d846d0();
  /* 11d83761 mov esi, esp */
  ESI = (ESP);
  /* 11d83763 push 0x11db1438 */
  push32((uint32_t)(0x11db1438u));
  /* 11d83768 push 0x11db1428 */
  push32((uint32_t)(0x11db1428u));
  /* 11d8376d call dword ptr [0x11db44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44c4))), 0x11d83773u);
  /* 11d83773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83778 call 0x11d846d0 */
  push32(0x11d8377du); f_11d846d0();
  /* 11d8377d mov esi, esp */
  ESI = (ESP);
  /* 11d8377f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83781 push 0x11db1438 */
  push32((uint32_t)(0x11db1438u));
  /* 11d83786 call dword ptr [0x11db446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db446c))), 0x11d8378cu);
  /* 11d8378c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8378f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83791 call 0x11d846d0 */
  push32(0x11d83796u); f_11d846d0();
  /* 11d83796 mov esi, esp */
  ESI = (ESP);
  /* 11d83798 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8379a push 5 */
  push32((uint32_t)(0x5u));
  /* 11d8379c call dword ptr [0x11db44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44c8))), 0x11d837a2u);
  /* 11d837a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d837a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d837a7 call 0x11d846d0 */
  push32(0x11d837acu); f_11d846d0();
  /* 11d837ac mov esi, esp */
  ESI = (ESP);
  /* 11d837ae push 5 */
  push32((uint32_t)(0x5u));
  /* 11d837b0 call dword ptr [0x11db44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44cc))), 0x11d837b6u);
  /* 11d837b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d837b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d837bb call 0x11d846d0 */
  push32(0x11d837c0u); f_11d846d0();
L_11d837c0:;
  /* 11d837c0 mov esi, esp */
  ESI = (ESP);
  /* 11d837c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d837c4 push 0x11db15c8 */
  push32((uint32_t)(0x11db15c8u));
  /* 11d837c9 push 0x11db1438 */
  push32((uint32_t)(0x11db1438u));
  /* 11d837ce call dword ptr [0x11db44d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d0))), 0x11d837d4u);
  /* 11d837d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d837d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d837d9 call 0x11d846d0 */
  push32(0x11d837deu); f_11d846d0();
  /* 11d837de mov esi, esp */
  ESI = (ESP);
  /* 11d837e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d837e2 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d837e8u);
  /* 11d837e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d837eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d837ed call 0x11d846d0 */
  push32(0x11d837f2u); f_11d846d0();
  /* 11d837f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d837f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d837f9 jne 0x11d8385d */
  if (!C.zf) goto L_11d8385d;
  /* 11d837fb mov esi, esp */
  ESI = (ESP);
  /* 11d837fd push 0x11db1438 */
  push32((uint32_t)(0x11db1438u));
  /* 11d83802 call dword ptr [0x11db4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4490))), 0x11d83808u);
  /* 11d83808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8380b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8380d call 0x11d846d0 */
  push32(0x11d83812u); f_11d846d0();
  /* 11d83812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83814 je 0x11d83833 */
  if (C.zf) goto L_11d83833;
  /* 11d83816 mov esi, esp */
  ESI = (ESP);
  /* 11d83818 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d8381a call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d83820u);
  /* 11d83820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83825 call 0x11d846d0 */
  push32(0x11d8382au); f_11d846d0();
  /* 11d8382a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8382f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83831 je 0x11d8385d */
  if (C.zf) goto L_11d8385d;
L_11d83833:;
  /* 11d83833 mov esi, esp */
  ESI = (ESP);
  /* 11d83835 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d83837 call dword ptr [0x11db44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44a4))), 0x11d8383du);
  /* 11d8383d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83842 call 0x11d846d0 */
  push32(0x11d83847u); f_11d846d0();
  /* 11d83847 mov esi, esp */
  ESI = (ESP);
  /* 11d83849 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8384b push 5 */
  push32((uint32_t)(0x5u));
  /* 11d8384d call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83853u);
  /* 11d83853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83856 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83858 call 0x11d846d0 */
  push32(0x11d8385du); f_11d846d0();
L_11d8385d:;
  /* 11d8385d mov esi, esp */
  ESI = (ESP);
  /* 11d8385f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d83861 call dword ptr [0x11db4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4480))), 0x11d83867u);
  /* 11d83867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8386a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8386c call 0x11d846d0 */
  push32(0x11d83871u); f_11d846d0();
  /* 11d83871 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83878 je 0x11d83a81 */
  if (C.zf) goto L_11d83a81;
  /* 11d8387e mov esi, esp */
  ESI = (ESP);
  /* 11d83880 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d83882 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83888u);
  /* 11d83888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8388b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8388d call 0x11d846d0 */
  push32(0x11d83892u); f_11d846d0();
  /* 11d83892 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83899 jne 0x11d838bc */
  if (!C.zf) goto L_11d838bc;
  /* 11d8389b mov esi, esp */
  ESI = (ESP);
  /* 11d8389d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d8389f call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d838a5u);
  /* 11d838a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d838a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d838aa call 0x11d846d0 */
  push32(0x11d838afu); f_11d846d0();
  /* 11d838af and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d838b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d838b6 je 0x11d83a81 */
  if (C.zf) goto L_11d83a81;
L_11d838bc:;
  /* 11d838bc mov esi, esp */
  ESI = (ESP);
  /* 11d838be push 0 */
  push32((uint32_t)(0x0u));
  /* 11d838c0 call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d838c6u);
  /* 11d838c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d838c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d838cb call 0x11d846d0 */
  push32(0x11d838d0u); f_11d846d0();
  /* 11d838d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d838d3 cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d838d7 ja 0x11d83a4b */
  if ((!C.cf&&!C.zf)) goto L_11d83a4b;
  /* 11d838dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d838e0 jmp dword ptr [ecx*4 + 0x11d83c5a] */
  switch (ECX) {
    case 0: goto L_11d838e7;
    case 1: goto L_11d83942;
    case 2: goto L_11d8399d;
    case 3: goto L_11d839f5;
    default: x86_unimpl("switch@0x11d838e0 out of table"); return;
  }
L_11d838e7:;
  /* 11d838e7 mov edx, dword ptr [0x11db14d8] */
  EDX = (r32((uint32_t)(0x11db14d8)));
  /* 11d838ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d838f0 mov dword ptr [0x11db14d8], edx */
  w32((uint32_t)(0x11db14d8), (EDX));
  /* 11d838f6 mov eax, dword ptr [0x11db1528] */
  EAX = (r32((uint32_t)(0x11db1528)));
  /* 11d838fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d838fe mov dword ptr [0x11db1528], eax */
  w32((uint32_t)(0x11db1528), (EAX));
  /* 11d83903 mov ecx, dword ptr [0x11db1558] */
  ECX = (r32((uint32_t)(0x11db1558)));
  /* 11d83909 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8390c mov dword ptr [0x11db1558], ecx */
  w32((uint32_t)(0x11db1558), (ECX));
  /* 11d83912 mov edx, dword ptr [0x11db1570] */
  EDX = (r32((uint32_t)(0x11db1570)));
  /* 11d83918 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8391b mov dword ptr [0x11db1570], edx */
  w32((uint32_t)(0x11db1570), (EDX));
  /* 11d83921 mov eax, dword ptr [0x11db1598] */
  EAX = (r32((uint32_t)(0x11db1598)));
  /* 11d83926 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83929 mov dword ptr [0x11db1598], eax */
  w32((uint32_t)(0x11db1598), (EAX));
  /* 11d8392e mov ecx, dword ptr [0x11db15b8] */
  ECX = (r32((uint32_t)(0x11db15b8)));
  /* 11d83934 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83937 mov dword ptr [0x11db15b8], ecx */
  w32((uint32_t)(0x11db15b8), (ECX));
  /* 11d8393d jmp 0x11d83a4b */
  goto L_11d83a4b;
L_11d83942:;
  /* 11d83942 mov edx, dword ptr [0x11db14d8] */
  EDX = (r32((uint32_t)(0x11db14d8)));
  /* 11d83948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8394b mov dword ptr [0x11db14d8], edx */
  w32((uint32_t)(0x11db14d8), (EDX));
  /* 11d83951 mov eax, dword ptr [0x11db1528] */
  EAX = (r32((uint32_t)(0x11db1528)));
  /* 11d83956 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83959 mov dword ptr [0x11db1528], eax */
  w32((uint32_t)(0x11db1528), (EAX));
  /* 11d8395e mov ecx, dword ptr [0x11db1558] */
  ECX = (r32((uint32_t)(0x11db1558)));
  /* 11d83964 add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83967 mov dword ptr [0x11db1558], ecx */
  w32((uint32_t)(0x11db1558), (ECX));
  /* 11d8396d mov edx, dword ptr [0x11db1570] */
  EDX = (r32((uint32_t)(0x11db1570)));
  /* 11d83973 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83976 mov dword ptr [0x11db1570], edx */
  w32((uint32_t)(0x11db1570), (EDX));
  /* 11d8397c mov eax, dword ptr [0x11db1598] */
  EAX = (r32((uint32_t)(0x11db1598)));
  /* 11d83981 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83984 mov dword ptr [0x11db1598], eax */
  w32((uint32_t)(0x11db1598), (EAX));
  /* 11d83989 mov ecx, dword ptr [0x11db15b8] */
  ECX = (r32((uint32_t)(0x11db15b8)));
  /* 11d8398f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83992 mov dword ptr [0x11db15b8], ecx */
  w32((uint32_t)(0x11db15b8), (ECX));
  /* 11d83998 jmp 0x11d83a4b */
  goto L_11d83a4b;
L_11d8399d:;
  /* 11d8399d mov edx, dword ptr [0x11db14d8] */
  EDX = (r32((uint32_t)(0x11db14d8)));
  /* 11d839a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839a6 mov dword ptr [0x11db14d8], edx */
  w32((uint32_t)(0x11db14d8), (EDX));
  /* 11d839ac mov eax, dword ptr [0x11db1528] */
  EAX = (r32((uint32_t)(0x11db1528)));
  /* 11d839b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839b4 mov dword ptr [0x11db1528], eax */
  w32((uint32_t)(0x11db1528), (EAX));
  /* 11d839b9 mov ecx, dword ptr [0x11db1558] */
  ECX = (r32((uint32_t)(0x11db1558)));
  /* 11d839bf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839c2 mov dword ptr [0x11db1558], ecx */
  w32((uint32_t)(0x11db1558), (ECX));
  /* 11d839c8 mov edx, dword ptr [0x11db1570] */
  EDX = (r32((uint32_t)(0x11db1570)));
  /* 11d839ce add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839d1 mov dword ptr [0x11db1570], edx */
  w32((uint32_t)(0x11db1570), (EDX));
  /* 11d839d7 mov eax, dword ptr [0x11db1598] */
  EAX = (r32((uint32_t)(0x11db1598)));
  /* 11d839dc add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839df mov dword ptr [0x11db1598], eax */
  w32((uint32_t)(0x11db1598), (EAX));
  /* 11d839e4 mov ecx, dword ptr [0x11db15b8] */
  ECX = (r32((uint32_t)(0x11db15b8)));
  /* 11d839ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839ed mov dword ptr [0x11db15b8], ecx */
  w32((uint32_t)(0x11db15b8), (ECX));
  /* 11d839f3 jmp 0x11d83a4b */
  goto L_11d83a4b;
L_11d839f5:;
  /* 11d839f5 mov edx, dword ptr [0x11db14d8] */
  EDX = (r32((uint32_t)(0x11db14d8)));
  /* 11d839fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d839fe mov dword ptr [0x11db14d8], edx */
  w32((uint32_t)(0x11db14d8), (EDX));
  /* 11d83a04 mov eax, dword ptr [0x11db1528] */
  EAX = (r32((uint32_t)(0x11db1528)));
  /* 11d83a09 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a0c mov dword ptr [0x11db1528], eax */
  w32((uint32_t)(0x11db1528), (EAX));
  /* 11d83a11 mov ecx, dword ptr [0x11db1558] */
  ECX = (r32((uint32_t)(0x11db1558)));
  /* 11d83a17 add ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a1a mov dword ptr [0x11db1558], ecx */
  w32((uint32_t)(0x11db1558), (ECX));
  /* 11d83a20 mov edx, dword ptr [0x11db1570] */
  EDX = (r32((uint32_t)(0x11db1570)));
  /* 11d83a26 add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a29 mov dword ptr [0x11db1570], edx */
  w32((uint32_t)(0x11db1570), (EDX));
  /* 11d83a2f mov eax, dword ptr [0x11db1598] */
  EAX = (r32((uint32_t)(0x11db1598)));
  /* 11d83a34 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a37 mov dword ptr [0x11db1598], eax */
  w32((uint32_t)(0x11db1598), (EAX));
  /* 11d83a3c mov ecx, dword ptr [0x11db15b8] */
  ECX = (r32((uint32_t)(0x11db15b8)));
  /* 11d83a42 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a45 mov dword ptr [0x11db15b8], ecx */
  w32((uint32_t)(0x11db15b8), (ECX));
L_11d83a4b:;
  /* 11d83a4b mov esi, esp */
  ESI = (ESP);
  /* 11d83a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83a4f call dword ptr [0x11db4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4464))), 0x11d83a55u);
  /* 11d83a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83a5a call 0x11d846d0 */
  push32(0x11d83a5fu); f_11d846d0();
  /* 11d83a5f mov edx, 5 */
  EDX = (0x5u);
  /* 11d83a64 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d83a66 imul edx, edx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2710u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d83a6c mov esi, esp */
  ESI = (ESP);
  /* 11d83a6e push edx */
  push32((uint32_t)(EDX));
  /* 11d83a6f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d83a71 call dword ptr [0x11db4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4478))), 0x11d83a77u);
  /* 11d83a77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83a7c call 0x11d846d0 */
  push32(0x11d83a81u); f_11d846d0();
L_11d83a81:;
  /* 11d83a81 mov esi, esp */
  ESI = (ESP);
  /* 11d83a83 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d83a85 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83a8bu);
  /* 11d83a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83a90 call 0x11d846d0 */
  push32(0x11d83a95u); f_11d846d0();
  /* 11d83a95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83a9c je 0x11d83b0a */
  if (C.zf) goto L_11d83b0a;
  /* 11d83a9e mov esi, esp */
  ESI = (ESP);
  /* 11d83aa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d83aa2 call dword ptr [0x11db44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ac))), 0x11d83aa8u);
  /* 11d83aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83aad call 0x11d846d0 */
  push32(0x11d83ab2u); f_11d846d0();
  /* 11d83ab2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83ab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83ab9 je 0x11d83b0a */
  if (C.zf) goto L_11d83b0a;
  /* 11d83abb mov esi, esp */
  ESI = (ESP);
  /* 11d83abd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83abf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d83ac1 call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83ac7u);
  /* 11d83ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83aca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83acc call 0x11d846d0 */
  push32(0x11d83ad1u); f_11d846d0();
  /* 11d83ad1 cmp dword ptr [0x11db1498], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1498))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83ad8 jne 0x11d83af3 */
  if (!C.zf) goto L_11d83af3;
  /* 11d83ada mov esi, esp */
  ESI = (ESP);
  /* 11d83adc push 0x11dac28c */
  push32((uint32_t)(0x11dac28cu));
  /* 11d83ae1 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83ae7u);
  /* 11d83ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83aec call 0x11d846d0 */
  push32(0x11d83af1u); f_11d846d0();
  /* 11d83af1 jmp 0x11d83b0a */
  goto L_11d83b0a;
L_11d83af3:;
  /* 11d83af3 mov esi, esp */
  ESI = (ESP);
  /* 11d83af5 push 0x11dac280 */
  push32((uint32_t)(0x11dac280u));
  /* 11d83afa call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83b00u);
  /* 11d83b00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83b03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b05 call 0x11d846d0 */
  push32(0x11d83b0au); f_11d846d0();
L_11d83b0a:;
  /* 11d83b0a mov esi, esp */
  ESI = (ESP);
  /* 11d83b0c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d83b0e call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83b14u);
  /* 11d83b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b19 call 0x11d846d0 */
  push32(0x11d83b1eu); f_11d846d0();
  /* 11d83b1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83b25 je 0x11d83b93 */
  if (C.zf) goto L_11d83b93;
  /* 11d83b27 mov esi, esp */
  ESI = (ESP);
  /* 11d83b29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d83b2b call dword ptr [0x11db44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ac))), 0x11d83b31u);
  /* 11d83b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83b34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b36 call 0x11d846d0 */
  push32(0x11d83b3bu); f_11d846d0();
  /* 11d83b3b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83b40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83b42 je 0x11d83b93 */
  if (C.zf) goto L_11d83b93;
  /* 11d83b44 mov esi, esp */
  ESI = (ESP);
  /* 11d83b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83b48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d83b4a call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83b50u);
  /* 11d83b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b55 call 0x11d846d0 */
  push32(0x11d83b5au); f_11d846d0();
  /* 11d83b5a cmp dword ptr [0x11db1498], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db1498))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b61 jne 0x11d83b7c */
  if (!C.zf) goto L_11d83b7c;
  /* 11d83b63 mov esi, esp */
  ESI = (ESP);
  /* 11d83b65 push 0x11dac274 */
  push32((uint32_t)(0x11dac274u));
  /* 11d83b6a call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83b70u);
  /* 11d83b70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b75 call 0x11d846d0 */
  push32(0x11d83b7au); f_11d846d0();
  /* 11d83b7a jmp 0x11d83b93 */
  goto L_11d83b93;
L_11d83b7c:;
  /* 11d83b7c mov esi, esp */
  ESI = (ESP);
  /* 11d83b7e push 0x11dac268 */
  push32((uint32_t)(0x11dac268u));
  /* 11d83b83 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83b89u);
  /* 11d83b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83b8e call 0x11d846d0 */
  push32(0x11d83b93u); f_11d846d0();
L_11d83b93:;
  /* 11d83b93 mov esi, esp */
  ESI = (ESP);
  /* 11d83b95 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11d83b97 call dword ptr [0x11db4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4450))), 0x11d83b9du);
  /* 11d83b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83ba0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83ba2 call 0x11d846d0 */
  push32(0x11d83ba7u); f_11d846d0();
  /* 11d83ba7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83bae je 0x11d83c39 */
  if (C.zf) goto L_11d83c39;
  /* 11d83bb4 mov esi, esp */
  ESI = (ESP);
  /* 11d83bb6 mov al, byte ptr [0x11db1498] */
  AL = (r8((uint32_t)(0x11db1498)));
  /* 11d83bbb push eax */
  push32((uint32_t)(EAX));
  /* 11d83bbc call dword ptr [0x11db44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44ac))), 0x11d83bc2u);
  /* 11d83bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83bc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83bc7 call 0x11d846d0 */
  push32(0x11d83bccu); f_11d846d0();
  /* 11d83bcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d83bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d83bd3 je 0x11d83c39 */
  if (C.zf) goto L_11d83c39;
  /* 11d83bd5 mov esi, esp */
  ESI = (ESP);
  /* 11d83bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d83bd9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11d83bdb call dword ptr [0x11db4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4454))), 0x11d83be1u);
  /* 11d83be1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83be4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83be6 call 0x11d846d0 */
  push32(0x11d83bebu); f_11d846d0();
  /* 11d83beb mov esi, esp */
  ESI = (ESP);
  /* 11d83bed push 0x11dac260 */
  push32((uint32_t)(0x11dac260u));
  /* 11d83bf2 call dword ptr [0x11db4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4488))), 0x11d83bf8u);
  /* 11d83bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83bfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83bfd call 0x11d846d0 */
  push32(0x11d83c02u); f_11d846d0();
  /* 11d83c02 mov esi, esp */
  ESI = (ESP);
  /* 11d83c04 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11d83c06 call dword ptr [0x11db445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db445c))), 0x11d83c0cu);
  /* 11d83c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83c11 call 0x11d846d0 */
  push32(0x11d83c16u); f_11d846d0();
  /* 11d83c16 mov esi, esp */
  ESI = (ESP);
  /* 11d83c18 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11d83c1a call dword ptr [0x11db4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4458))), 0x11d83c20u);
  /* 11d83c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83c25 call 0x11d846d0 */
  push32(0x11d83c2au); f_11d846d0();
  /* 11d83c2a mov esi, esp */
  ESI = (ESP);
  /* 11d83c2c call dword ptr [0x11db44d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db44d4))), 0x11d83c32u);
  /* 11d83c32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83c34 call 0x11d846d0 */
  push32(0x11d83c39u); f_11d846d0();
L_11d83c39:;
  /* 11d83c39 pop edi */
  EDI = (pop32());
  /* 11d83c3a pop esi */
  ESI = (pop32());
  /* 11d83c3b pop ebx */
  EBX = (pop32());
  /* 11d83c3c add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d83c3f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d83c41 call 0x11d846d0 */
  push32(0x11d83c46u); f_11d846d0();
  /* 11d83c46 mov esp, ebp */
  ESP = (EBP);
  /* 11d83c48 pop ebp */
  EBP = (pop32());
  /* 11d83c49 ret  */
  ESPCHK(0x11d81e90u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f0 @ 0x11d844f0 (16 bytes, 7 insns) */
void f_11d844f0(void) {
  FTRACE(0x11d844f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d844f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d844f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d844f3 call 0x11d84a70 */
  push32(0x11d844f8u); f_11d84a70();
  /* 11d844f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d844fb mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11d844fe pop ebp */
  EBP = (pop32());
  /* 11d844ff ret  */
  ESPCHK(0x11d844f0u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11d84500 (54 bytes, 18 insns) */
void f_11d84500(void) {
  FTRACE(0x11d84500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84500 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84501 mov ebp, esp */
  EBP = (ESP);
  /* 11d84503 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84504 call 0x11d84a70 */
  push32(0x11d84509u); f_11d84a70();
  /* 11d84509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8450c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8450f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d84512 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d84518 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8451e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84521 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 11d84524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84527 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d8452a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d8452d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84532 mov esp, ebp */
  ESP = (EBP);
  /* 11d84534 pop ebp */
  EBP = (pop32());
  /* 11d84535 ret  */
  ESPCHK(0x11d84500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x11d84540 (385 bytes, 103 insns) */
void f_11d84540(void) {
  FTRACE(0x11d84540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84540 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84541 mov ebp, esp */
  EBP = (ESP);
  /* 11d84543 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84549 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11d8454c push eax */
  push32((uint32_t)(EAX));
  /* 11d8454d call dword ptr [0x11db437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db437c))), 0x11d84553u);
  /* 11d84553 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11d84556 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84557 call dword ptr [0x11db4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4378))), 0x11d8455du);
  /* 11d8455d mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 11d84560 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d84566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d84568 mov ax, word ptr [0x11db16ba] */
  AX = (r16((uint32_t)(0x11db16ba)));
  /* 11d8456e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84570 jne 0x11d845d8 */
  if (!C.zf) goto L_11d845d8;
  /* 11d84572 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d84575 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8457b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8457d mov dx, word ptr [0x11db16b8] */
  DX = (r16((uint32_t)(0x11db16b8)));
  /* 11d84584 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84586 jne 0x11d845d8 */
  if (!C.zf) goto L_11d845d8;
  /* 11d84588 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 11d8458b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84590 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d84592 mov cx, word ptr [0x11db16b6] */
  CX = (r16((uint32_t)(0x11db16b6)));
  /* 11d84599 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8459b jne 0x11d845d8 */
  if (!C.zf) goto L_11d845d8;
  /* 11d8459d mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11d845a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d845a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d845a8 mov ax, word ptr [0x11db16b2] */
  AX = (r16((uint32_t)(0x11db16b2)));
  /* 11d845ae cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d845b0 jne 0x11d845d8 */
  if (!C.zf) goto L_11d845d8;
  /* 11d845b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d845b5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d845bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d845bd mov dx, word ptr [0x11db16b0] */
  DX = (r16((uint32_t)(0x11db16b0)));
  /* 11d845c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d845c6 jne 0x11d845d8 */
  if (!C.zf) goto L_11d845d8;
  /* 11d845c8 mov eax, dword ptr [0x11db16a8] */
  EAX = (r32((uint32_t)(0x11db16a8)));
  /* 11d845cd mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 11d845d3 jmp 0x11d84660 */
  goto L_11d84660;
L_11d845d8:;
  /* 11d845d8 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 11d845de push ecx */
  push32((uint32_t)(ECX));
  /* 11d845df call dword ptr [0x11db4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4374))), 0x11d845e5u);
  /* 11d845e5 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 11d845eb cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d845f2 je 0x11d84628 */
  if (C.zf) goto L_11d84628;
  /* 11d845f4 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d845fb jne 0x11d8461c */
  if (!C.zf) goto L_11d8461c;
  /* 11d845fd mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 11d84600 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d84606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d84608 je 0x11d8461c */
  if (C.zf) goto L_11d8461c;
  /* 11d8460a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8460e je 0x11d8461c */
  if (C.zf) goto L_11d8461c;
  /* 11d84610 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 11d8461a jmp 0x11d84626 */
  goto L_11d84626;
L_11d8461c:;
  /* 11d8461c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_11d84626:;
  /* 11d84626 jmp 0x11d84632 */
  goto L_11d84632;
L_11d84628:;
  /* 11d84628 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_11d84632:;
  /* 11d84632 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11d84638 mov dword ptr [0x11db16a8], eax */
  w32((uint32_t)(0x11db16a8), (EAX));
  /* 11d8463d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d84640 mov dword ptr [0x11db16b0], ecx */
  w32((uint32_t)(0x11db16b0), (ECX));
  /* 11d84646 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d84649 mov dword ptr [0x11db16b4], edx */
  w32((uint32_t)(0x11db16b4), (EDX));
  /* 11d8464f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d84652 mov dword ptr [0x11db16b8], eax */
  w32((uint32_t)(0x11db16b8), (EAX));
  /* 11d84657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8465a mov dword ptr [0x11db16bc], ecx */
  w32((uint32_t)(0x11db16bc), (ECX));
L_11d84660:;
  /* 11d84660 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11d84666 push edx */
  push32((uint32_t)(EDX));
  /* 11d84667 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8466a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8466f push eax */
  push32((uint32_t)(EAX));
  /* 11d84670 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 11d84673 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d84679 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8467a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8467d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d84683 push edx */
  push32((uint32_t)(EDX));
  /* 11d84684 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 11d84687 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8468c push eax */
  push32((uint32_t)(EAX));
  /* 11d8468d mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 11d84690 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d84696 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84697 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8469a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d846a0 push edx */
  push32((uint32_t)(EDX));
  /* 11d846a1 call 0x11d84c40 */
  push32(0x11d846a6u); f_11d84c40();
  /* 11d846a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d846a9 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d846ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d846b0 je 0x11d846ba */
  if (C.zf) goto L_11d846ba;
  /* 11d846b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d846b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d846b8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11d846ba:;
  /* 11d846ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d846bd mov esp, ebp */
  ESP = (EBP);
  /* 11d846bf pop ebp */
  EBP = (pop32());
  /* 11d846c0 ret  */
  ESPCHK(0x11d84540u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11d846d0 (56 bytes, 28 insns) */
void f_11d846d0(void) {
  FTRACE(0x11d846d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d846d0 jne 0x11d846d3 */
  if (!C.zf) goto L_11d846d3;
  /* 11d846d2 ret  */
  ESPCHK(0x11d846d0u, _esp0);
  ESP += 4; return;
L_11d846d3:;
  /* 11d846d3 push ebp */
  push32((uint32_t)(EBP));
  /* 11d846d4 mov ebp, esp */
  EBP = (ESP);
  /* 11d846d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d846d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d846da push edx */
  push32((uint32_t)(EDX));
  /* 11d846db push ebx */
  push32((uint32_t)(EBX));
  /* 11d846dc push esi */
  push32((uint32_t)(ESI));
  /* 11d846dd push edi */
  push32((uint32_t)(EDI));
  /* 11d846de push 0x11dac4a0 */
  push32((uint32_t)(0x11dac4a0u));
  /* 11d846e3 push 0x11dac49c */
  push32((uint32_t)(0x11dac49cu));
  /* 11d846e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11d846ea push 0x11dac48c */
  push32((uint32_t)(0x11dac48cu));
  /* 11d846ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11d846f1 call 0x11d84e40 */
  push32(0x11d846f6u); f_11d84e40();
  /* 11d846f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d846f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d846fc jne 0x11d846ff */
  if (!C.zf) goto L_11d846ff;
  /* 11d846fe int3  */
  x86_unimpl("int3 @ 0x11d846fe");
L_11d846ff:;
  /* 11d846ff pop edi */
  EDI = (pop32());
  /* 11d84700 pop esi */
  ESI = (pop32());
  /* 11d84701 pop ebx */
  EBX = (pop32());
  /* 11d84702 pop edx */
  EDX = (pop32());
  /* 11d84703 pop eax */
  EAX = (pop32());
  /* 11d84704 mov esp, ebp */
  ESP = (EBP);
  /* 11d84706 pop ebp */
  EBP = (pop32());
  /* 11d84707 ret  */
  ESPCHK(0x11d846d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004710 @ 0x11d84710 (313 bytes, 78 insns) */
void f_11d84710(void) {
  FTRACE(0x11d84710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84710 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84711 mov ebp, esp */
  EBP = (ESP);
  /* 11d84713 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84717 jne 0x11d847d7 */
  if (!C.zf) goto L_11d847d7;
  /* 11d8471d call dword ptr [0x11db4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4384))), 0x11d84723u);
  /* 11d84723 mov dword ptr [0x11db16dc], eax */
  w32((uint32_t)(0x11db16dc), (EAX));
  /* 11d84728 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8472a call 0x11d882c0 */
  push32(0x11d8472fu); f_11d882c0();
  /* 11d8472f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84734 jne 0x11d8473d */
  if (!C.zf) goto L_11d8473d;
  /* 11d84736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d84738 jmp 0x11d84845 */
  goto L_11d84845;
L_11d8473d:;
  /* 11d8473d mov eax, dword ptr [0x11db16dc] */
  EAX = (r32((uint32_t)(0x11db16dc)));
  /* 11d84742 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d84745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8474a mov dword ptr [0x11db16e8], eax */
  w32((uint32_t)(0x11db16e8), (EAX));
  /* 11d8474f mov ecx, dword ptr [0x11db16dc] */
  ECX = (r32((uint32_t)(0x11db16dc)));
  /* 11d84755 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8475b mov dword ptr [0x11db16e4], ecx */
  w32((uint32_t)(0x11db16e4), (ECX));
  /* 11d84761 mov edx, dword ptr [0x11db16e4] */
  EDX = (r32((uint32_t)(0x11db16e4)));
  /* 11d84767 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d8476a add edx, dword ptr [0x11db16e8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11db16e8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84770 mov dword ptr [0x11db16e0], edx */
  w32((uint32_t)(0x11db16e0), (EDX));
  /* 11d84776 mov eax, dword ptr [0x11db16dc] */
  EAX = (r32((uint32_t)(0x11db16dc)));
  /* 11d8477b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d8477e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84783 mov dword ptr [0x11db16dc], eax */
  w32((uint32_t)(0x11db16dc), (EAX));
  /* 11d84788 call 0x11d84990 */
  push32(0x11d8478du); f_11d84990();
  /* 11d8478d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8478f jne 0x11d8479d */
  if (!C.zf) goto L_11d8479d;
  /* 11d84791 call 0x11d88310 */
  push32(0x11d84796u); f_11d88310();
  /* 11d84796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d84798 jmp 0x11d84845 */
  goto L_11d84845;
L_11d8479d:;
  /* 11d8479d call dword ptr [0x11db4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4380))), 0x11d847a3u);
  /* 11d847a3 mov dword ptr [0x11db322c], eax */
  w32((uint32_t)(0x11db322c), (EAX));
  /* 11d847a8 call 0x11d880a0 */
  push32(0x11d847adu); f_11d880a0();
  /* 11d847ad mov dword ptr [0x11db16c4], eax */
  w32((uint32_t)(0x11db16c4), (EAX));
  /* 11d847b2 call 0x11d856e0 */
  push32(0x11d847b7u); f_11d856e0();
  /* 11d847b7 call 0x11d87b90 */
  push32(0x11d847bcu); f_11d87b90();
  /* 11d847bc call 0x11d87a40 */
  push32(0x11d847c1u); f_11d87a40();
  /* 11d847c1 call 0x11d854e0 */
  push32(0x11d847c6u); f_11d854e0();
  /* 11d847c6 mov ecx, dword ptr [0x11db16c0] */
  ECX = (r32((uint32_t)(0x11db16c0)));
  /* 11d847cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d847cf mov dword ptr [0x11db16c0], ecx */
  w32((uint32_t)(0x11db16c0), (ECX));
  /* 11d847d5 jmp 0x11d84840 */
  goto L_11d84840;
L_11d847d7:;
  /* 11d847d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d847db jne 0x11d84830 */
  if (!C.zf) goto L_11d84830;
  /* 11d847dd cmp dword ptr [0x11db16c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d847e4 jle 0x11d8482a */
  if ((C.zf||C.sf!=C.of)) goto L_11d8482a;
  /* 11d847e6 mov edx, dword ptr [0x11db16c0] */
  EDX = (r32((uint32_t)(0x11db16c0)));
  /* 11d847ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d847ef mov dword ptr [0x11db16c0], edx */
  w32((uint32_t)(0x11db16c0), (EDX));
  /* 11d847f5 cmp dword ptr [0x11db1714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d847fc jne 0x11d84803 */
  if (!C.zf) goto L_11d84803;
  /* 11d847fe call 0x11d85560 */
  push32(0x11d84803u); f_11d85560();
L_11d84803:;
  /* 11d84803 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d84805 call 0x11d86fe0 */
  push32(0x11d8480au); f_11d86fe0();
  /* 11d8480a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8480d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d84810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84812 je 0x11d84819 */
  if (C.zf) goto L_11d84819;
  /* 11d84814 call 0x11d878f0 */
  push32(0x11d84819u); f_11d878f0();
L_11d84819:;
  /* 11d84819 call 0x11d85a10 */
  push32(0x11d8481eu); f_11d85a10();
  /* 11d8481e call 0x11d84a20 */
  push32(0x11d84823u); f_11d84a20();
  /* 11d84823 call 0x11d88310 */
  push32(0x11d84828u); f_11d88310();
  /* 11d84828 jmp 0x11d8482e */
  goto L_11d8482e;
L_11d8482a:;
  /* 11d8482a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8482c jmp 0x11d84845 */
  goto L_11d84845;
L_11d8482e:;
  /* 11d8482e jmp 0x11d84840 */
  goto L_11d84840;
L_11d84830:;
  /* 11d84830 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84834 jne 0x11d84840 */
  if (!C.zf) goto L_11d84840;
  /* 11d84836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d84838 call 0x11d84b10 */
  push32(0x11d8483du); f_11d84b10();
  /* 11d8483d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84840:;
  /* 11d84840 mov eax, 1 */
  EAX = (0x1u);
L_11d84845:;
  /* 11d84845 pop ebp */
  EBP = (pop32());
  /* 11d84846 ret 0xc */
  ESPCHK(0x11d84710u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11d84850 (243 bytes, 86 insns) */
void f_11d84850(void) {
  FTRACE(0x11d84850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84850 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84851 mov ebp, esp */
  EBP = (ESP);
  /* 11d84853 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84854 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d8485b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8485f jne 0x11d84871 */
  if (!C.zf) goto L_11d84871;
  /* 11d84861 cmp dword ptr [0x11db16c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84868 jne 0x11d84871 */
  if (!C.zf) goto L_11d84871;
  /* 11d8486a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8486c jmp 0x11d8493d */
  goto L_11d8493d;
L_11d84871:;
  /* 11d84871 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84875 je 0x11d8487d */
  if (C.zf) goto L_11d8487d;
  /* 11d84877 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8487b jne 0x11d848bf */
  if (!C.zf) goto L_11d848bf;
L_11d8487d:;
  /* 11d8487d cmp dword ptr [0x11db323c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db323c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84884 je 0x11d8489b */
  if (C.zf) goto L_11d8489b;
  /* 11d84886 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d84889 push eax */
  push32((uint32_t)(EAX));
  /* 11d8488a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8488d push ecx */
  push32((uint32_t)(ECX));
  /* 11d8488e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84891 push edx */
  push32((uint32_t)(EDX));
  /* 11d84892 call dword ptr [0x11db323c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db323c))), 0x11d84898u);
  /* 11d84898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8489b:;
  /* 11d8489b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8489f je 0x11d848b5 */
  if (C.zf) goto L_11d848b5;
  /* 11d848a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d848a4 push eax */
  push32((uint32_t)(EAX));
  /* 11d848a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d848a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d848a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d848ac push edx */
  push32((uint32_t)(EDX));
  /* 11d848ad call 0x11d84710 */
  push32(0x11d848b2u); f_11d84710();
  /* 11d848b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d848b5:;
  /* 11d848b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d848b9 jne 0x11d848bf */
  if (!C.zf) goto L_11d848bf;
  /* 11d848bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d848bd jmp 0x11d8493d */
  goto L_11d8493d;
L_11d848bf:;
  /* 11d848bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d848c2 push eax */
  push32((uint32_t)(EAX));
  /* 11d848c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d848c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d848c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d848ca push edx */
  push32((uint32_t)(EDX));
  /* 11d848cb call 0x11d8100a */
  push32(0x11d848d0u); f_11d8100a();
  /* 11d848d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d848d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d848d7 jne 0x11d848ee */
  if (!C.zf) goto L_11d848ee;
  /* 11d848d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d848dd jne 0x11d848ee */
  if (!C.zf) goto L_11d848ee;
  /* 11d848df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d848e2 push eax */
  push32((uint32_t)(EAX));
  /* 11d848e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d848e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d848e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d848e9 call 0x11d84710 */
  push32(0x11d848eeu); f_11d84710();
L_11d848ee:;
  /* 11d848ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d848f2 je 0x11d848fa */
  if (C.zf) goto L_11d848fa;
  /* 11d848f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d848f8 jne 0x11d8493a */
  if (!C.zf) goto L_11d8493a;
L_11d848fa:;
  /* 11d848fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d848fd push edx */
  push32((uint32_t)(EDX));
  /* 11d848fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84901 push eax */
  push32((uint32_t)(EAX));
  /* 11d84902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84905 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84906 call 0x11d84710 */
  push32(0x11d8490bu); f_11d84710();
  /* 11d8490b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8490d jne 0x11d84916 */
  if (!C.zf) goto L_11d84916;
  /* 11d8490f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d84916:;
  /* 11d84916 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8491a je 0x11d8493a */
  if (C.zf) goto L_11d8493a;
  /* 11d8491c cmp dword ptr [0x11db323c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db323c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84923 je 0x11d8493a */
  if (C.zf) goto L_11d8493a;
  /* 11d84925 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d84928 push edx */
  push32((uint32_t)(EDX));
  /* 11d84929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8492c push eax */
  push32((uint32_t)(EAX));
  /* 11d8492d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84930 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84931 call dword ptr [0x11db323c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db323c))), 0x11d84937u);
  /* 11d84937 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8493a:;
  /* 11d8493a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d8493d:;
  /* 11d8493d mov esp, ebp */
  ESP = (EBP);
  /* 11d8493f pop ebp */
  EBP = (pop32());
  /* 11d84940 ret 0xc */
  ESPCHK(0x11d84850u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11d84950 (58 bytes, 18 insns) */
void f_11d84950(void) {
  FTRACE(0x11d84950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84950 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84951 mov ebp, esp */
  EBP = (ESP);
  /* 11d84953 cmp dword ptr [0x11db16cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8495a je 0x11d8496e */
  if (C.zf) goto L_11d8496e;
  /* 11d8495c cmp dword ptr [0x11db16cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84963 jne 0x11d84973 */
  if (!C.zf) goto L_11d84973;
  /* 11d84965 cmp dword ptr [0x11db16d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8496c jne 0x11d84973 */
  if (!C.zf) goto L_11d84973;
L_11d8496e:;
  /* 11d8496e call 0x11d883b0 */
  push32(0x11d84973u); f_11d883b0();
L_11d84973:;
  /* 11d84973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84976 push eax */
  push32((uint32_t)(EAX));
  /* 11d84977 call 0x11d88400 */
  push32(0x11d8497cu); f_11d88400();
  /* 11d8497c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8497f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d84984 call dword ptr [0x11dafa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dafa30))), 0x11d8498au);
  /* 11d8498a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8498d pop ebp */
  EBP = (pop32());
  /* 11d8498e ret  */
  ESPCHK(0x11d84950u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x11d84990 (130 bytes, 42 insns) */
void f_11d84990(void) {
  FTRACE(0x11d84990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84990 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84991 mov ebp, esp */
  EBP = (ESP);
  /* 11d84993 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84994 call 0x11d88610 */
  push32(0x11d84999u); f_11d88610();
  /* 11d84999 call dword ptr [0x11db4390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4390))), 0x11d8499fu);
  /* 11d8499f mov dword ptr [0x11dafa34], eax */
  w32((uint32_t)(0x11dafa34), (EAX));
  /* 11d849a4 cmp dword ptr [0x11dafa34], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11dafa34))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d849ab jne 0x11d849b1 */
  if (!C.zf) goto L_11d849b1;
  /* 11d849ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d849af jmp 0x11d84a0e */
  goto L_11d84a0e;
L_11d849b1:;
  /* 11d849b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11d849b3 push 0x11dac57c */
  push32((uint32_t)(0x11dac57cu));
  /* 11d849b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d849ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d849bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d849be call 0x11d85ee0 */
  push32(0x11d849c3u); f_11d85ee0();
  /* 11d849c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d849c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d849c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d849cd je 0x11d849e4 */
  if (C.zf) goto L_11d849e4;
  /* 11d849cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d849d2 push eax */
  push32((uint32_t)(EAX));
  /* 11d849d3 mov ecx, dword ptr [0x11dafa34] */
  ECX = (r32((uint32_t)(0x11dafa34)));
  /* 11d849d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d849da call dword ptr [0x11db438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db438c))), 0x11d849e0u);
  /* 11d849e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d849e2 jne 0x11d849e8 */
  if (!C.zf) goto L_11d849e8;
L_11d849e4:;
  /* 11d849e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d849e6 jmp 0x11d84a0e */
  goto L_11d84a0e;
L_11d849e8:;
  /* 11d849e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d849eb push edx */
  push32((uint32_t)(EDX));
  /* 11d849ec call 0x11d84a50 */
  push32(0x11d849f1u); f_11d84a50();
  /* 11d849f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d849f4 call dword ptr [0x11db4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4388))), 0x11d849fau);
  /* 11d849fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d849fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d849ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84a02 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11d84a09 mov eax, 1 */
  EAX = (0x1u);
L_11d84a0e:;
  /* 11d84a0e mov esp, ebp */
  ESP = (EBP);
  /* 11d84a10 pop ebp */
  EBP = (pop32());
  /* 11d84a11 ret  */
  ESPCHK(0x11d84990u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a20 @ 0x11d84a20 (41 bytes, 11 insns) */
void f_11d84a20(void) {
  FTRACE(0x11d84a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84a21 mov ebp, esp */
  EBP = (ESP);
  /* 11d84a23 call 0x11d88650 */
  push32(0x11d84a28u); f_11d88650();
  /* 11d84a28 cmp dword ptr [0x11dafa34], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11dafa34))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84a2f je 0x11d84a47 */
  if (C.zf) goto L_11d84a47;
  /* 11d84a31 mov eax, dword ptr [0x11dafa34] */
  EAX = (r32((uint32_t)(0x11dafa34)));
  /* 11d84a36 push eax */
  push32((uint32_t)(EAX));
  /* 11d84a37 call dword ptr [0x11db4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4394))), 0x11d84a3du);
  /* 11d84a3d mov dword ptr [0x11dafa34], 0xffffffff */
  w32((uint32_t)(0x11dafa34), (0xffffffffu));
L_11d84a47:;
  /* 11d84a47 pop ebp */
  EBP = (pop32());
  /* 11d84a48 ret  */
  ESPCHK(0x11d84a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x11d84a50 (25 bytes, 8 insns) */
void f_11d84a50(void) {
  FTRACE(0x11d84a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84a51 mov ebp, esp */
  EBP = (ESP);
  /* 11d84a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84a56 mov dword ptr [eax + 0x50], 0x11dafc00 */
  w32((uint32_t)(EAX + 0x50), (0x11dafc00u));
  /* 11d84a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84a60 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11d84a67 pop ebp */
  EBP = (pop32());
  /* 11d84a68 ret  */
  ESPCHK(0x11d84a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x11d84a70 (152 bytes, 48 insns) */
void f_11d84a70(void) {
  FTRACE(0x11d84a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84a71 mov ebp, esp */
  EBP = (ESP);
  /* 11d84a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84a76 call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d84a7cu);
  /* 11d84a7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d84a7f mov eax, dword ptr [0x11dafa34] */
  EAX = (r32((uint32_t)(0x11dafa34)));
  /* 11d84a84 push eax */
  push32((uint32_t)(EAX));
  /* 11d84a85 call dword ptr [0x11db439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db439c))), 0x11d84a8bu);
  /* 11d84a8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d84a8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84a92 jne 0x11d84af7 */
  if (!C.zf) goto L_11d84af7;
  /* 11d84a94 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11d84a99 push 0x11dac57c */
  push32((uint32_t)(0x11dac57cu));
  /* 11d84a9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84aa0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d84aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d84aa4 call 0x11d85ee0 */
  push32(0x11d84aa9u); f_11d85ee0();
  /* 11d84aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84aac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d84aaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84ab3 je 0x11d84aed */
  if (C.zf) goto L_11d84aed;
  /* 11d84ab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84ab9 mov edx, dword ptr [0x11dafa34] */
  EDX = (r32((uint32_t)(0x11dafa34)));
  /* 11d84abf push edx */
  push32((uint32_t)(EDX));
  /* 11d84ac0 call dword ptr [0x11db438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db438c))), 0x11d84ac6u);
  /* 11d84ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84ac8 je 0x11d84aed */
  if (C.zf) goto L_11d84aed;
  /* 11d84aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84acd push eax */
  push32((uint32_t)(EAX));
  /* 11d84ace call 0x11d84a50 */
  push32(0x11d84ad3u); f_11d84a50();
  /* 11d84ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84ad6 call dword ptr [0x11db4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4388))), 0x11d84adcu);
  /* 11d84adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84adf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d84ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84ae4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11d84aeb jmp 0x11d84af7 */
  goto L_11d84af7;
L_11d84aed:;
  /* 11d84aed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d84aef call 0x11d84950 */
  push32(0x11d84af4u); f_11d84950();
  /* 11d84af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84af7:;
  /* 11d84af7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d84afa push eax */
  push32((uint32_t)(EAX));
  /* 11d84afb call dword ptr [0x11db4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4398))), 0x11d84b01u);
  /* 11d84b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84b04 mov esp, ebp */
  ESP = (EBP);
  /* 11d84b06 pop ebp */
  EBP = (pop32());
  /* 11d84b07 ret  */
  ESPCHK(0x11d84a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b10 @ 0x11d84b10 (263 bytes, 86 insns) */
void f_11d84b10(void) {
  FTRACE(0x11d84b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84b11 mov ebp, esp */
  EBP = (ESP);
  /* 11d84b13 cmp dword ptr [0x11dafa34], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11dafa34))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b1a je 0x11d84c15 */
  if (C.zf) goto L_11d84c15;
  /* 11d84b20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b24 jne 0x11d84b35 */
  if (!C.zf) goto L_11d84b35;
  /* 11d84b26 mov eax, dword ptr [0x11dafa34] */
  EAX = (r32((uint32_t)(0x11dafa34)));
  /* 11d84b2b push eax */
  push32((uint32_t)(EAX));
  /* 11d84b2c call dword ptr [0x11db439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db439c))), 0x11d84b32u);
  /* 11d84b32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d84b35:;
  /* 11d84b35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b39 je 0x11d84c06 */
  if (C.zf) goto L_11d84c06;
  /* 11d84b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b42 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b46 je 0x11d84b59 */
  if (C.zf) goto L_11d84b59;
  /* 11d84b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b4d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11d84b50 push eax */
  push32((uint32_t)(EAX));
  /* 11d84b51 call 0x11d86560 */
  push32(0x11d84b56u); f_11d86560();
  /* 11d84b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84b59:;
  /* 11d84b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b5c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b60 je 0x11d84b73 */
  if (C.zf) goto L_11d84b73;
  /* 11d84b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b67 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11d84b6a push eax */
  push32((uint32_t)(EAX));
  /* 11d84b6b call 0x11d86560 */
  push32(0x11d84b70u); f_11d86560();
  /* 11d84b70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84b73:;
  /* 11d84b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b76 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b7a je 0x11d84b8d */
  if (C.zf) goto L_11d84b8d;
  /* 11d84b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b81 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11d84b84 push eax */
  push32((uint32_t)(EAX));
  /* 11d84b85 call 0x11d86560 */
  push32(0x11d84b8au); f_11d86560();
  /* 11d84b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84b8d:;
  /* 11d84b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b90 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84b94 je 0x11d84ba7 */
  if (C.zf) goto L_11d84ba7;
  /* 11d84b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84b98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84b9b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11d84b9e push eax */
  push32((uint32_t)(EAX));
  /* 11d84b9f call 0x11d86560 */
  push32(0x11d84ba4u); f_11d86560();
  /* 11d84ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84ba7:;
  /* 11d84ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84baa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84bae je 0x11d84bc1 */
  if (C.zf) goto L_11d84bc1;
  /* 11d84bb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84bb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84bb5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11d84bb8 push eax */
  push32((uint32_t)(EAX));
  /* 11d84bb9 call 0x11d86560 */
  push32(0x11d84bbeu); f_11d86560();
  /* 11d84bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84bc1:;
  /* 11d84bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84bc4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84bc8 je 0x11d84bdb */
  if (C.zf) goto L_11d84bdb;
  /* 11d84bca push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84bcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84bcf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11d84bd2 push eax */
  push32((uint32_t)(EAX));
  /* 11d84bd3 call 0x11d86560 */
  push32(0x11d84bd8u); f_11d86560();
  /* 11d84bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84bdb:;
  /* 11d84bdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84bde cmp dword ptr [ecx + 0x50], 0x11dafc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11dafc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84be5 je 0x11d84bf8 */
  if (C.zf) goto L_11d84bf8;
  /* 11d84be7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84be9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84bec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11d84bef push eax */
  push32((uint32_t)(EAX));
  /* 11d84bf0 call 0x11d86560 */
  push32(0x11d84bf5u); f_11d86560();
  /* 11d84bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84bf8:;
  /* 11d84bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d84bfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84bfd push ecx */
  push32((uint32_t)(ECX));
  /* 11d84bfe call 0x11d86560 */
  push32(0x11d84c03u); f_11d86560();
  /* 11d84c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84c06:;
  /* 11d84c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d84c08 mov edx, dword ptr [0x11dafa34] */
  EDX = (r32((uint32_t)(0x11dafa34)));
  /* 11d84c0e push edx */
  push32((uint32_t)(EDX));
  /* 11d84c0f call dword ptr [0x11db438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db438c))), 0x11d84c15u);
L_11d84c15:;
  /* 11d84c15 pop ebp */
  EBP = (pop32());
  /* 11d84c16 ret  */
  ESPCHK(0x11d84b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x11d84c20 (11 bytes, 5 insns) */
void f_11d84c20(void) {
  FTRACE(0x11d84c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84c21 mov ebp, esp */
  EBP = (ESP);
  /* 11d84c23 call dword ptr [0x11db4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4388))), 0x11d84c29u);
  /* 11d84c29 pop ebp */
  EBP = (pop32());
  /* 11d84c2a ret  */
  ESPCHK(0x11d84c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c30 @ 0x11d84c30 (11 bytes, 5 insns) */
void f_11d84c30(void) {
  FTRACE(0x11d84c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84c31 mov ebp, esp */
  EBP = (ESP);
  /* 11d84c33 call dword ptr [0x11db43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a4))), 0x11d84c39u);
  /* 11d84c39 pop ebp */
  EBP = (pop32());
  /* 11d84c3a ret  */
  ESPCHK(0x11d84c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x11d84c40 (238 bytes, 75 insns) */
void f_11d84c40(void) {
  FTRACE(0x11d84c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84c41 mov ebp, esp */
  EBP = (ESP);
  /* 11d84c43 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84c49 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84c4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d84c51 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84c55 jl 0x11d84c60 */
  if ((C.sf!=C.of)) goto L_11d84c60;
  /* 11d84c57 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84c5e jle 0x11d84c68 */
  if ((C.zf||C.sf!=C.of)) goto L_11d84c68;
L_11d84c60:;
  /* 11d84c60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84c63 jmp 0x11d84d2a */
  goto L_11d84d2a;
L_11d84c68:;
  /* 11d84c68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84c6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d84c6e add edx, dword ptr [ecx*4 + 0x11dafd6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x11dafd6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84c75 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11d84c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84c7b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d84c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84c80 jne 0x11d84c91 */
  if (!C.zf) goto L_11d84c91;
  /* 11d84c82 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84c86 jle 0x11d84c91 */
  if ((C.zf||C.sf!=C.of)) goto L_11d84c91;
  /* 11d84c88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d84c8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84c8e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11d84c91:;
  /* 11d84c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84c94 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84c97 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d84c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84ca0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84ca3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d84ca6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d84ca9 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84cab lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 11d84caf imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d84cb2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84cb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d84cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84cbb imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d84cbe add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84cc1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d84cc4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d84cca call 0x11d889f0 */
  push32(0x11d84ccfu); f_11d889f0();
  /* 11d84ccf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84cd2 add ecx, dword ptr [0x11dafc88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafc88))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84cd8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d84cdb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d84cde mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d84ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84ce4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d84ce7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84cea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d84ced mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d84cf0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d84cf3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d84cf6 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84cfa je 0x11d84d1b */
  if (C.zf) goto L_11d84d1b;
  /* 11d84cfc cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84d00 jne 0x11d84d27 */
  if (!C.zf) goto L_11d84d27;
  /* 11d84d02 cmp dword ptr [0x11dafc8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dafc8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84d09 je 0x11d84d27 */
  if (C.zf) goto L_11d84d27;
  /* 11d84d0b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d84d0e push eax */
  push32((uint32_t)(EAX));
  /* 11d84d0f call 0x11d88e00 */
  push32(0x11d84d14u); f_11d88e00();
  /* 11d84d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84d19 je 0x11d84d27 */
  if (C.zf) goto L_11d84d27;
L_11d84d1b:;
  /* 11d84d1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84d1e add ecx, dword ptr [0x11dafc90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafc90))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84d24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d84d27:;
  /* 11d84d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d84d2a:;
  /* 11d84d2a mov esp, ebp */
  ESP = (EBP);
  /* 11d84d2c pop ebp */
  EBP = (pop32());
  /* 11d84d2d ret  */
  ESPCHK(0x11d84c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x11d84d30 (11 bytes, 5 insns) */
void f_11d84d30(void) {
  FTRACE(0x11d84d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84d31 mov ebp, esp */
  EBP = (ESP);
  /* 11d84d33 call dword ptr [0x11db43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a8))), 0x11d84d39u);
  /* 11d84d39 pop ebp */
  EBP = (pop32());
  /* 11d84d3a ret  */
  ESPCHK(0x11d84d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d40 @ 0x11d84d40 (87 bytes, 30 insns) */
void f_11d84d40(void) {
  FTRACE(0x11d84d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84d41 mov ebp, esp */
  EBP = (ESP);
  /* 11d84d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84d44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84d48 jl 0x11d84d50 */
  if ((C.sf!=C.of)) goto L_11d84d50;
  /* 11d84d4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84d4e jl 0x11d84d55 */
  if ((C.sf!=C.of)) goto L_11d84d55;
L_11d84d50:;
  /* 11d84d50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84d53 jmp 0x11d84d93 */
  goto L_11d84d93;
L_11d84d55:;
  /* 11d84d55 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84d59 jne 0x11d84d67 */
  if (!C.zf) goto L_11d84d67;
  /* 11d84d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84d5e mov eax, dword ptr [eax*4 + 0x11dafa3c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11dafa3c)));
  /* 11d84d65 jmp 0x11d84d93 */
  goto L_11d84d93;
L_11d84d67:;
  /* 11d84d67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84d6a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d84d6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d84d6f je 0x11d84d76 */
  if (C.zf) goto L_11d84d76;
  /* 11d84d71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84d74 jmp 0x11d84d93 */
  goto L_11d84d93;
L_11d84d76:;
  /* 11d84d76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84d79 mov eax, dword ptr [edx*4 + 0x11dafa3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11dafa3c)));
  /* 11d84d80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d84d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84d86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84d89 mov dword ptr [ecx*4 + 0x11dafa3c], edx */
  w32((uint32_t)(ECX*4 + 0x11dafa3c), (EDX));
  /* 11d84d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d84d93:;
  /* 11d84d93 mov esp, ebp */
  ESP = (EBP);
  /* 11d84d95 pop ebp */
  EBP = (pop32());
  /* 11d84d96 ret  */
  ESPCHK(0x11d84d40u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11d84da0 (126 bytes, 38 insns) */
void f_11d84da0(void) {
  FTRACE(0x11d84da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84da1 mov ebp, esp */
  EBP = (ESP);
  /* 11d84da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84da4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84da8 jl 0x11d84db0 */
  if ((C.sf!=C.of)) goto L_11d84db0;
  /* 11d84daa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84dae jl 0x11d84db7 */
  if ((C.sf!=C.of)) goto L_11d84db7;
L_11d84db0:;
  /* 11d84db0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11d84db5 jmp 0x11d84e1a */
  goto L_11d84e1a;
L_11d84db7:;
  /* 11d84db7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84dbb jne 0x11d84dc9 */
  if (!C.zf) goto L_11d84dc9;
  /* 11d84dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84dc0 mov eax, dword ptr [eax*4 + 0x11dafa48] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11dafa48)));
  /* 11d84dc7 jmp 0x11d84e1a */
  goto L_11d84e1a;
L_11d84dc9:;
  /* 11d84dc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84dcc mov edx, dword ptr [ecx*4 + 0x11dafa48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa48)));
  /* 11d84dd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d84dd6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84dda jne 0x11d84df0 */
  if (!C.zf) goto L_11d84df0;
  /* 11d84ddc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d84dde call dword ptr [0x11db42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c8))), 0x11d84de4u);
  /* 11d84de4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84de7 mov dword ptr [ecx*4 + 0x11dafa48], eax */
  w32((uint32_t)(ECX*4 + 0x11dafa48), (EAX));
  /* 11d84dee jmp 0x11d84e17 */
  goto L_11d84e17;
L_11d84df0:;
  /* 11d84df0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84df4 jne 0x11d84e0a */
  if (!C.zf) goto L_11d84e0a;
  /* 11d84df6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d84df8 call dword ptr [0x11db42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c8))), 0x11d84dfeu);
  /* 11d84dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84e01 mov dword ptr [edx*4 + 0x11dafa48], eax */
  w32((uint32_t)(EDX*4 + 0x11dafa48), (EAX));
  /* 11d84e08 jmp 0x11d84e17 */
  goto L_11d84e17;
L_11d84e0a:;
  /* 11d84e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84e0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84e10 mov dword ptr [eax*4 + 0x11dafa48], ecx */
  w32((uint32_t)(EAX*4 + 0x11dafa48), (ECX));
L_11d84e17:;
  /* 11d84e17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d84e1a:;
  /* 11d84e1a mov esp, ebp */
  ESP = (EBP);
  /* 11d84e1c pop ebp */
  EBP = (pop32());
  /* 11d84e1d ret  */
  ESPCHK(0x11d84da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e20 @ 0x11d84e20 (28 bytes, 11 insns) */
void f_11d84e20(void) {
  FTRACE(0x11d84e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84e21 mov ebp, esp */
  EBP = (ESP);
  /* 11d84e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84e24 mov eax, dword ptr [0x11db3220] */
  EAX = (r32((uint32_t)(0x11db3220)));
  /* 11d84e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d84e2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84e2f mov dword ptr [0x11db3220], ecx */
  w32((uint32_t)(0x11db3220), (ECX));
  /* 11d84e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d84e38 mov esp, ebp */
  ESP = (EBP);
  /* 11d84e3a pop ebp */
  EBP = (pop32());
  /* 11d84e3b ret  */
  ESPCHK(0x11d84e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x11d84e40 (912 bytes, 248 insns) */
void f_11d84e40(void) {
  FTRACE(0x11d84e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d84e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d84e41 mov ebp, esp */
  EBP = (ESP);
  /* 11d84e43 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11d84e48 call 0x11d89990 */
  push32(0x11d84e4du); f_11d89990();
  /* 11d84e4d push edi */
  push32((uint32_t)(EDI));
  /* 11d84e4e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11d84e55 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11d84e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d84e5c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11d84e62 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d84e64 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11d84e66 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d84e67 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11d84e6e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11d84e73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d84e75 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11d84e7b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d84e7d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11d84e7f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d84e80 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11d84e87 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11d84e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d84e8e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11d84e94 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d84e96 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11d84e98 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d84e99 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11d84e9c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11d84ea2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84ea6 jl 0x11d84eae */
  if ((C.sf!=C.of)) goto L_11d84eae;
  /* 11d84ea8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84eac jl 0x11d84eb6 */
  if ((C.sf!=C.of)) goto L_11d84eb6;
L_11d84eae:;
  /* 11d84eae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84eb1 jmp 0x11d851cb */
  goto L_11d851cb;
L_11d84eb6:;
  /* 11d84eb6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84eba jne 0x11d84f60 */
  if (!C.zf) goto L_11d84f60;
  /* 11d84ec0 push 0x11dafa38 */
  push32((uint32_t)(0x11dafa38u));
  /* 11d84ec5 call dword ptr [0x11db43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c4))), 0x11d84ecbu);
  /* 11d84ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84ecd jle 0x11d84f60 */
  if ((C.zf||C.sf!=C.of)) goto L_11d84f60;
  /* 11d84ed3 cmp dword ptr [0x11db16d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84eda jne 0x11d84f1e */
  if (!C.zf) goto L_11d84f1e;
  /* 11d84edc push 0x11dac654 */
  push32((uint32_t)(0x11dac654u));
  /* 11d84ee1 call dword ptr [0x11db43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c0))), 0x11d84ee7u);
  /* 11d84ee7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11d84eed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84ef4 je 0x11d84f16 */
  if (C.zf) goto L_11d84f16;
  /* 11d84ef6 push 0x11dac648 */
  push32((uint32_t)(0x11dac648u));
  /* 11d84efb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11d84f01 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84f02 call dword ptr [0x11db43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43bc))), 0x11d84f08u);
  /* 11d84f08 mov dword ptr [0x11db16d4], eax */
  w32((uint32_t)(0x11db16d4), (EAX));
  /* 11d84f0d cmp dword ptr [0x11db16d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84f14 jne 0x11d84f1e */
  if (!C.zf) goto L_11d84f1e;
L_11d84f16:;
  /* 11d84f16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84f19 jmp 0x11d851cb */
  goto L_11d851cb;
L_11d84f1e:;
  /* 11d84f1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d84f21 push edx */
  push32((uint32_t)(EDX));
  /* 11d84f22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d84f25 push eax */
  push32((uint32_t)(EAX));
  /* 11d84f26 push 0x11dac614 */
  push32((uint32_t)(0x11dac614u));
  /* 11d84f2b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11d84f31 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84f32 call dword ptr [0x11db16d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db16d4))), 0x11d84f38u);
  /* 11d84f38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84f3b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d84f41 push edx */
  push32((uint32_t)(EDX));
  /* 11d84f42 call dword ptr [0x11db43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b8))), 0x11d84f48u);
  /* 11d84f48 push 0x11dafa38 */
  push32((uint32_t)(0x11dafa38u));
  /* 11d84f4d call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d84f53u);
  /* 11d84f53 call 0x11d84d30 */
  push32(0x11d84f58u); f_11d84d30();
  /* 11d84f58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d84f5b jmp 0x11d851cb */
  goto L_11d851cb;
L_11d84f60:;
  /* 11d84f60 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84f64 je 0x11d84f9d */
  if (C.zf) goto L_11d84f9d;
  /* 11d84f66 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11d84f6c push eax */
  push32((uint32_t)(EAX));
  /* 11d84f6d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d84f70 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84f71 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11d84f76 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11d84f7c push edx */
  push32((uint32_t)(EDX));
  /* 11d84f7d call 0x11d89890 */
  push32(0x11d84f82u); f_11d89890();
  /* 11d84f82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d84f87 jge 0x11d84f9d */
  if ((C.sf==C.of)) goto L_11d84f9d;
  /* 11d84f89 push 0x11dac5e8 */
  push32((uint32_t)(0x11dac5e8u));
  /* 11d84f8e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11d84f94 push eax */
  push32((uint32_t)(EAX));
  /* 11d84f95 call 0x11d897a0 */
  push32(0x11d84f9au); f_11d897a0();
  /* 11d84f9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84f9d:;
  /* 11d84f9d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84fa1 jne 0x11d84fd5 */
  if (!C.zf) goto L_11d84fd5;
  /* 11d84fa3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84fa7 je 0x11d84fb5 */
  if (C.zf) goto L_11d84fb5;
  /* 11d84fa9 mov dword ptr [ebp - 0x3028], 0x11dac5d4 */
  w32((uint32_t)(EBP + -0x3028), (0x11dac5d4u));
  /* 11d84fb3 jmp 0x11d84fbf */
  goto L_11d84fbf;
L_11d84fb5:;
  /* 11d84fb5 mov dword ptr [ebp - 0x3028], 0x11dac5c0 */
  w32((uint32_t)(EBP + -0x3028), (0x11dac5c0u));
L_11d84fbf:;
  /* 11d84fbf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11d84fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84fc6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11d84fcc push edx */
  push32((uint32_t)(EDX));
  /* 11d84fcd call 0x11d897a0 */
  push32(0x11d84fd2u); f_11d897a0();
  /* 11d84fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d84fd5:;
  /* 11d84fd5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11d84fdb push eax */
  push32((uint32_t)(EAX));
  /* 11d84fdc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11d84fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d84fe3 call 0x11d897b0 */
  push32(0x11d84fe8u); f_11d897b0();
  /* 11d84fe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d84feb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d84fef jne 0x11d8502a */
  if (!C.zf) goto L_11d8502a;
  /* 11d84ff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d84ff4 mov eax, dword ptr [edx*4 + 0x11dafa3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11dafa3c)));
  /* 11d84ffb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d84ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85000 je 0x11d85016 */
  if (C.zf) goto L_11d85016;
  /* 11d85002 push 0x11dac5bc */
  push32((uint32_t)(0x11dac5bcu));
  /* 11d85007 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11d8500d push ecx */
  push32((uint32_t)(ECX));
  /* 11d8500e call 0x11d897b0 */
  push32(0x11d85013u); f_11d897b0();
  /* 11d85013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d85016:;
  /* 11d85016 push 0x11dac5b8 */
  push32((uint32_t)(0x11dac5b8u));
  /* 11d8501b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11d85021 push edx */
  push32((uint32_t)(EDX));
  /* 11d85022 call 0x11d897b0 */
  push32(0x11d85027u); f_11d897b0();
  /* 11d85027 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8502a:;
  /* 11d8502a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8502e je 0x11d85072 */
  if (C.zf) goto L_11d85072;
  /* 11d85030 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11d85036 push eax */
  push32((uint32_t)(EAX));
  /* 11d85037 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8503a push ecx */
  push32((uint32_t)(ECX));
  /* 11d8503b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8503e push edx */
  push32((uint32_t)(EDX));
  /* 11d8503f push 0x11dac5ac */
  push32((uint32_t)(0x11dac5acu));
  /* 11d85044 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d85049 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11d8504f push eax */
  push32((uint32_t)(EAX));
  /* 11d85050 call 0x11d896a0 */
  push32(0x11d85055u); f_11d896a0();
  /* 11d85055 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8505a jge 0x11d85070 */
  if ((C.sf==C.of)) goto L_11d85070;
  /* 11d8505c push 0x11dac5e8 */
  push32((uint32_t)(0x11dac5e8u));
  /* 11d85061 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11d85067 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85068 call 0x11d897a0 */
  push32(0x11d8506du); f_11d897a0();
  /* 11d8506d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d85070:;
  /* 11d85070 jmp 0x11d85088 */
  goto L_11d85088;
L_11d85072:;
  /* 11d85072 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11d85078 push edx */
  push32((uint32_t)(EDX));
  /* 11d85079 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11d8507f push eax */
  push32((uint32_t)(EAX));
  /* 11d85080 call 0x11d897a0 */
  push32(0x11d85085u); f_11d897a0();
  /* 11d85085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d85088:;
  /* 11d85088 cmp dword ptr [0x11db3220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8508f je 0x11d850cc */
  if (C.zf) goto L_11d850cc;
  /* 11d85091 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11d85097 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85098 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d8509e push edx */
  push32((uint32_t)(EDX));
  /* 11d8509f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d850a2 push eax */
  push32((uint32_t)(EAX));
  /* 11d850a3 call dword ptr [0x11db3220] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db3220))), 0x11d850a9u);
  /* 11d850a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d850ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d850ae je 0x11d850cc */
  if (C.zf) goto L_11d850cc;
  /* 11d850b0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d850b4 jne 0x11d850c1 */
  if (!C.zf) goto L_11d850c1;
  /* 11d850b6 push 0x11dafa38 */
  push32((uint32_t)(0x11dafa38u));
  /* 11d850bb call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d850c1u);
L_11d850c1:;
  /* 11d850c1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11d850c7 jmp 0x11d851cb */
  goto L_11d851cb;
L_11d850cc:;
  /* 11d850cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d850cf mov edx, dword ptr [ecx*4 + 0x11dafa3c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa3c)));
  /* 11d850d6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d850d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d850db je 0x11d8511b */
  if (C.zf) goto L_11d8511b;
  /* 11d850dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d850e0 cmp dword ptr [eax*4 + 0x11dafa48], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11dafa48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d850e8 je 0x11d8511b */
  if (C.zf) goto L_11d8511b;
  /* 11d850ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d850ec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11d850f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d850f3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d850f9 push edx */
  push32((uint32_t)(EDX));
  /* 11d850fa call 0x11d89620 */
  push32(0x11d850ffu); f_11d89620();
  /* 11d850ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85102 push eax */
  push32((uint32_t)(EAX));
  /* 11d85103 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11d85109 push eax */
  push32((uint32_t)(EAX));
  /* 11d8510a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8510d mov edx, dword ptr [ecx*4 + 0x11dafa48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa48)));
  /* 11d85114 push edx */
  push32((uint32_t)(EDX));
  /* 11d85115 call dword ptr [0x11db42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c4))), 0x11d8511bu);
L_11d8511b:;
  /* 11d8511b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8511e mov ecx, dword ptr [eax*4 + 0x11dafa3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafa3c)));
  /* 11d85125 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d85128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8512a je 0x11d85139 */
  if (C.zf) goto L_11d85139;
  /* 11d8512c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d85132 push edx */
  push32((uint32_t)(EDX));
  /* 11d85133 call dword ptr [0x11db43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b8))), 0x11d85139u);
L_11d85139:;
  /* 11d85139 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8513c mov ecx, dword ptr [eax*4 + 0x11dafa3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafa3c)));
  /* 11d85143 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d85146 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d85148 je 0x11d851b8 */
  if (C.zf) goto L_11d851b8;
  /* 11d8514a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8514e je 0x11d8516d */
  if (C.zf) goto L_11d8516d;
  /* 11d85150 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d85152 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11d85158 push edx */
  push32((uint32_t)(EDX));
  /* 11d85159 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8515c push eax */
  push32((uint32_t)(EAX));
  /* 11d8515d call 0x11d89330 */
  push32(0x11d85162u); f_11d89330();
  /* 11d85162 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85165 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11d8516b jmp 0x11d85177 */
  goto L_11d85177;
L_11d8516d:;
  /* 11d8516d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11d85177:;
  /* 11d85177 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11d8517d push ecx */
  push32((uint32_t)(ECX));
  /* 11d8517e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85181 push edx */
  push32((uint32_t)(EDX));
  /* 11d85182 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11d85188 push eax */
  push32((uint32_t)(EAX));
  /* 11d85189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8518c push ecx */
  push32((uint32_t)(ECX));
  /* 11d8518d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85190 push edx */
  push32((uint32_t)(EDX));
  /* 11d85191 call 0x11d851d0 */
  push32(0x11d85196u); f_11d851d0();
  /* 11d85196 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85199 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11d8519f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d851a3 jne 0x11d851b0 */
  if (!C.zf) goto L_11d851b0;
  /* 11d851a5 push 0x11dafa38 */
  push32((uint32_t)(0x11dafa38u));
  /* 11d851aa call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d851b0u);
L_11d851b0:;
  /* 11d851b0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11d851b6 jmp 0x11d851cb */
  goto L_11d851cb;
L_11d851b8:;
  /* 11d851b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d851bc jne 0x11d851c9 */
  if (!C.zf) goto L_11d851c9;
  /* 11d851be push 0x11dafa38 */
  push32((uint32_t)(0x11dafa38u));
  /* 11d851c3 call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d851c9u);
L_11d851c9:;
  /* 11d851c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d851cb:;
  /* 11d851cb pop edi */
  EDI = (pop32());
  /* 11d851cc mov esp, ebp */
  ESP = (EBP);
  /* 11d851ce pop ebp */
  EBP = (pop32());
  /* 11d851cf ret  */
  ESPCHK(0x11d84e40u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x11d851d0 (780 bytes, 197 insns) */
void f_11d851d0(void) {
  FTRACE(0x11d851d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d851d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d851d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d851d3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11d851d8 call 0x11d89990 */
  push32(0x11d851ddu); f_11d89990();
L_11d851dd:;
  /* 11d851dd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d851e1 jne 0x11d85208 */
  if (!C.zf) goto L_11d85208;
  /* 11d851e3 push 0x11dac7a4 */
  push32((uint32_t)(0x11dac7a4u));
  /* 11d851e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d851ea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11d851ef push 0x11dac798 */
  push32((uint32_t)(0x11dac798u));
  /* 11d851f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d851f6 call 0x11d84e40 */
  push32(0x11d851fbu); f_11d84e40();
  /* 11d851fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d851fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85201 jne 0x11d85208 */
  if (!C.zf) goto L_11d85208;
  /* 11d85203 call 0x11d84d30 */
  push32(0x11d85208u); f_11d84d30();
L_11d85208:;
  /* 11d85208 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8520a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8520c jne 0x11d851dd */
  if (!C.zf) goto L_11d851dd;
  /* 11d8520e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d85213 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11d85219 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8521a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8521c call dword ptr [0x11db43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c8))), 0x11d85222u);
  /* 11d85222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85224 jne 0x11d8523a */
  if (!C.zf) goto L_11d8523a;
  /* 11d85226 push 0x11dac780 */
  push32((uint32_t)(0x11dac780u));
  /* 11d8522b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11d85231 push edx */
  push32((uint32_t)(EDX));
  /* 11d85232 call 0x11d897a0 */
  push32(0x11d85237u); f_11d897a0();
  /* 11d85237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8523a:;
  /* 11d8523a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11d85240 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d85243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85246 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85247 call 0x11d89620 */
  push32(0x11d8524cu); f_11d89620();
  /* 11d8524c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8524f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85252 jbe 0x11d8527d */
  if ((C.cf||C.zf)) goto L_11d8527d;
  /* 11d85254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85257 push edx */
  push32((uint32_t)(EDX));
  /* 11d85258 call 0x11d89620 */
  push32(0x11d8525du); f_11d89620();
  /* 11d8525d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85263 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11d85267 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8526a push 3 */
  push32((uint32_t)(0x3u));
  /* 11d8526c push 0x11dac77c */
  push32((uint32_t)(0x11dac77cu));
  /* 11d85271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85274 push eax */
  push32((uint32_t)(EAX));
  /* 11d85275 call 0x11d8a010 */
  push32(0x11d8527au); f_11d8a010();
  /* 11d8527a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8527d:;
  /* 11d8527d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85280 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11d85286 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8528d je 0x11d852d8 */
  if (C.zf) goto L_11d852d8;
  /* 11d8528f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d85295 push edx */
  push32((uint32_t)(EDX));
  /* 11d85296 call 0x11d89620 */
  push32(0x11d8529bu); f_11d89620();
  /* 11d8529b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8529e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d852a1 jbe 0x11d852d8 */
  if ((C.cf||C.zf)) goto L_11d852d8;
  /* 11d852a3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d852a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d852aa call 0x11d89620 */
  push32(0x11d852afu); f_11d89620();
  /* 11d852af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d852b2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d852b8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11d852bc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11d852c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d852c4 push 0x11dac77c */
  push32((uint32_t)(0x11dac77cu));
  /* 11d852c9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d852cf push eax */
  push32((uint32_t)(EAX));
  /* 11d852d0 call 0x11d8a010 */
  push32(0x11d852d5u); f_11d8a010();
  /* 11d852d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d852d8:;
  /* 11d852d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d852dc jne 0x11d852ea */
  if (!C.zf) goto L_11d852ea;
  /* 11d852de mov dword ptr [ebp - 0x1114], 0x11dac708 */
  w32((uint32_t)(EBP + -0x1114), (0x11dac708u));
  /* 11d852e8 jmp 0x11d852f4 */
  goto L_11d852f4;
L_11d852ea:;
  /* 11d852ea mov dword ptr [ebp - 0x1114], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1114), (0x11dac49cu));
L_11d852f4:;
  /* 11d852f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d852f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d852fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d852fc je 0x11d85309 */
  if (C.zf) goto L_11d85309;
  /* 11d852fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d85301 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11d85307 jmp 0x11d85313 */
  goto L_11d85313;
L_11d85309:;
  /* 11d85309 mov dword ptr [ebp - 0x1118], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1118), (0x11dac49cu));
L_11d85313:;
  /* 11d85313 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d85316 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d85319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8531b je 0x11d8532f */
  if (C.zf) goto L_11d8532f;
  /* 11d8531d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85321 jne 0x11d8532f */
  if (!C.zf) goto L_11d8532f;
  /* 11d85323 mov dword ptr [ebp - 0x111c], 0x11dac6f8 */
  w32((uint32_t)(EBP + -0x111c), (0x11dac6f8u));
  /* 11d8532d jmp 0x11d85339 */
  goto L_11d85339;
L_11d8532f:;
  /* 11d8532f mov dword ptr [ebp - 0x111c], 0x11dac49c */
  w32((uint32_t)(EBP + -0x111c), (0x11dac49cu));
L_11d85339:;
  /* 11d85339 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8533c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d8533f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d85341 je 0x11d8534f */
  if (C.zf) goto L_11d8534f;
  /* 11d85343 mov dword ptr [ebp - 0x1120], 0x11dac6f4 */
  w32((uint32_t)(EBP + -0x1120), (0x11dac6f4u));
  /* 11d8534d jmp 0x11d85359 */
  goto L_11d85359;
L_11d8534f:;
  /* 11d8534f mov dword ptr [ebp - 0x1120], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1120), (0x11dac49cu));
L_11d85359:;
  /* 11d85359 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8535d je 0x11d8536a */
  if (C.zf) goto L_11d8536a;
  /* 11d8535f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85362 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11d85368 jmp 0x11d85374 */
  goto L_11d85374;
L_11d8536a:;
  /* 11d8536a mov dword ptr [ebp - 0x1124], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1124), (0x11dac49cu));
L_11d85374:;
  /* 11d85374 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85378 je 0x11d85386 */
  if (C.zf) goto L_11d85386;
  /* 11d8537a mov dword ptr [ebp - 0x1128], 0x11dac6ec */
  w32((uint32_t)(EBP + -0x1128), (0x11dac6ecu));
  /* 11d85384 jmp 0x11d85390 */
  goto L_11d85390;
L_11d85386:;
  /* 11d85386 mov dword ptr [ebp - 0x1128], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1128), (0x11dac49cu));
L_11d85390:;
  /* 11d85390 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85394 je 0x11d853a1 */
  if (C.zf) goto L_11d853a1;
  /* 11d85396 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85399 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11d8539f jmp 0x11d853ab */
  goto L_11d853ab;
L_11d853a1:;
  /* 11d853a1 mov dword ptr [ebp - 0x112c], 0x11dac49c */
  w32((uint32_t)(EBP + -0x112c), (0x11dac49cu));
L_11d853ab:;
  /* 11d853ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d853af je 0x11d853bd */
  if (C.zf) goto L_11d853bd;
  /* 11d853b1 mov dword ptr [ebp - 0x1130], 0x11dac6e4 */
  w32((uint32_t)(EBP + -0x1130), (0x11dac6e4u));
  /* 11d853bb jmp 0x11d853c7 */
  goto L_11d853c7;
L_11d853bd:;
  /* 11d853bd mov dword ptr [ebp - 0x1130], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1130), (0x11dac49cu));
L_11d853c7:;
  /* 11d853c7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d853ce je 0x11d853de */
  if (C.zf) goto L_11d853de;
  /* 11d853d0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d853d6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11d853dc jmp 0x11d853e8 */
  goto L_11d853e8;
L_11d853de:;
  /* 11d853de mov dword ptr [ebp - 0x1134], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1134), (0x11dac49cu));
L_11d853e8:;
  /* 11d853e8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d853ef je 0x11d853fd */
  if (C.zf) goto L_11d853fd;
  /* 11d853f1 mov dword ptr [ebp - 0x1138], 0x11dac6d8 */
  w32((uint32_t)(EBP + -0x1138), (0x11dac6d8u));
  /* 11d853fb jmp 0x11d85407 */
  goto L_11d85407;
L_11d853fd:;
  /* 11d853fd mov dword ptr [ebp - 0x1138], 0x11dac49c */
  w32((uint32_t)(EBP + -0x1138), (0x11dac49cu));
L_11d85407:;
  /* 11d85407 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11d8540d push edx */
  push32((uint32_t)(EDX));
  /* 11d8540e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11d85414 push eax */
  push32((uint32_t)(EAX));
  /* 11d85415 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11d8541b push ecx */
  push32((uint32_t)(ECX));
  /* 11d8541c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11d85422 push edx */
  push32((uint32_t)(EDX));
  /* 11d85423 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11d85429 push eax */
  push32((uint32_t)(EAX));
  /* 11d8542a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11d85430 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85431 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11d85437 push edx */
  push32((uint32_t)(EDX));
  /* 11d85438 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11d8543e push eax */
  push32((uint32_t)(EAX));
  /* 11d8543f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11d85445 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85446 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11d8544c push edx */
  push32((uint32_t)(EDX));
  /* 11d8544d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85450 push eax */
  push32((uint32_t)(EAX));
  /* 11d85451 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85454 mov edx, dword ptr [ecx*4 + 0x11dafa54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa54)));
  /* 11d8545b push edx */
  push32((uint32_t)(EDX));
  /* 11d8545c push 0x11dac684 */
  push32((uint32_t)(0x11dac684u));
  /* 11d85461 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d85466 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11d8546c push eax */
  push32((uint32_t)(EAX));
  /* 11d8546d call 0x11d896a0 */
  push32(0x11d85472u); f_11d896a0();
  /* 11d85472 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85477 jge 0x11d8548d */
  if ((C.sf==C.of)) goto L_11d8548d;
  /* 11d85479 push 0x11dac5e8 */
  push32((uint32_t)(0x11dac5e8u));
  /* 11d8547e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11d85484 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85485 call 0x11d897a0 */
  push32(0x11d8548au); f_11d897a0();
  /* 11d8548a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8548d:;
  /* 11d8548d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11d85492 push 0x11dac660 */
  push32((uint32_t)(0x11dac660u));
  /* 11d85497 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11d8549d push edx */
  push32((uint32_t)(EDX));
  /* 11d8549e call 0x11d89f50 */
  push32(0x11d854a3u); f_11d89f50();
  /* 11d854a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d854a6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11d854ac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d854b3 jne 0x11d854c6 */
  if (!C.zf) goto L_11d854c6;
  /* 11d854b5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d854b7 call 0x11d89c90 */
  push32(0x11d854bcu); f_11d89c90();
  /* 11d854bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d854bf push 3 */
  push32((uint32_t)(0x3u));
  /* 11d854c1 call 0x11d85540 */
  push32(0x11d854c6u); f_11d85540();
L_11d854c6:;
  /* 11d854c6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d854cd jne 0x11d854d6 */
  if (!C.zf) goto L_11d854d6;
  /* 11d854cf mov eax, 1 */
  EAX = (0x1u);
  /* 11d854d4 jmp 0x11d854d8 */
  goto L_11d854d8;
L_11d854d6:;
  /* 11d854d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d854d8:;
  /* 11d854d8 mov esp, ebp */
  ESP = (EBP);
  /* 11d854da pop ebp */
  EBP = (pop32());
  /* 11d854db ret  */
  ESPCHK(0x11d851d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x11d854e0 (56 bytes, 15 insns) */
void f_11d854e0(void) {
  FTRACE(0x11d854e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d854e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d854e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d854e3 cmp dword ptr [0x11db321c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db321c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d854ea je 0x11d854f2 */
  if (C.zf) goto L_11d854f2;
  /* 11d854ec call dword ptr [0x11db321c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db321c))), 0x11d854f2u);
L_11d854f2:;
  /* 11d854f2 push 0x11daf418 */
  push32((uint32_t)(0x11daf418u));
  /* 11d854f7 push 0x11daf208 */
  push32((uint32_t)(0x11daf208u));
  /* 11d854fc call 0x11d856b0 */
  push32(0x11d85501u); f_11d856b0();
  /* 11d85501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85504 push 0x11daf104 */
  push32((uint32_t)(0x11daf104u));
  /* 11d85509 push 0x11daf000 */
  push32((uint32_t)(0x11daf000u));
  /* 11d8550e call 0x11d856b0 */
  push32(0x11d85513u); f_11d856b0();
  /* 11d85513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85516 pop ebp */
  EBP = (pop32());
  /* 11d85517 ret  */
  ESPCHK(0x11d854e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x11d85520 (21 bytes, 10 insns) */
void f_11d85520(void) {
  FTRACE(0x11d85520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85520 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85521 mov ebp, esp */
  EBP = (ESP);
  /* 11d85523 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8552a push eax */
  push32((uint32_t)(EAX));
  /* 11d8552b call 0x11d855a0 */
  push32(0x11d85530u); f_11d855a0();
  /* 11d85530 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85533 pop ebp */
  EBP = (pop32());
  /* 11d85534 ret  */
  ESPCHK(0x11d85520u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11d85540 (21 bytes, 10 insns) */
void f_11d85540(void) {
  FTRACE(0x11d85540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85540 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85541 mov ebp, esp */
  EBP = (ESP);
  /* 11d85543 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85545 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8554a push eax */
  push32((uint32_t)(EAX));
  /* 11d8554b call 0x11d855a0 */
  push32(0x11d85550u); f_11d855a0();
  /* 11d85550 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85553 pop ebp */
  EBP = (pop32());
  /* 11d85554 ret  */
  ESPCHK(0x11d85540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x11d85560 (19 bytes, 9 insns) */
void f_11d85560(void) {
  FTRACE(0x11d85560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85560 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85561 mov ebp, esp */
  EBP = (ESP);
  /* 11d85563 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85567 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85569 call 0x11d855a0 */
  push32(0x11d8556eu); f_11d855a0();
  /* 11d8556e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85571 pop ebp */
  EBP = (pop32());
  /* 11d85572 ret  */
  ESPCHK(0x11d85560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005580 @ 0x11d85580 (19 bytes, 9 insns) */
void f_11d85580(void) {
  FTRACE(0x11d85580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85580 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85581 mov ebp, esp */
  EBP = (ESP);
  /* 11d85583 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85585 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85587 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85589 call 0x11d855a0 */
  push32(0x11d8558eu); f_11d855a0();
  /* 11d8558e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85591 pop ebp */
  EBP = (pop32());
  /* 11d85592 ret  */
  ESPCHK(0x11d85580u, _esp0);
  ESP += 4; return;
}

/* FUN_100055a0 @ 0x11d855a0 (227 bytes, 61 insns) */
void f_11d855a0(void) {
  FTRACE(0x11d855a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d855a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d855a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d855a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d855a4 call 0x11d85690 */
  push32(0x11d855a9u); f_11d85690();
  /* 11d855a9 cmp dword ptr [0x11db1718], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1718))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d855b0 jne 0x11d855c3 */
  if (!C.zf) goto L_11d855c3;
  /* 11d855b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d855b5 push eax */
  push32((uint32_t)(EAX));
  /* 11d855b6 call dword ptr [0x11db43d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43d0))), 0x11d855bcu);
  /* 11d855bc push eax */
  push32((uint32_t)(EAX));
  /* 11d855bd call dword ptr [0x11db43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b0))), 0x11d855c3u);
L_11d855c3:;
  /* 11d855c3 mov dword ptr [0x11db1714], 1 */
  w32((uint32_t)(0x11db1714), (0x1u));
  /* 11d855cd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11d855d0 mov byte ptr [0x11db1710], cl */
  w8((uint32_t)(0x11db1710), (CL));
  /* 11d855d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d855da jne 0x11d85623 */
  if (!C.zf) goto L_11d85623;
  /* 11d855dc cmp dword ptr [0x11db3218], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3218))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d855e3 je 0x11d85611 */
  if (C.zf) goto L_11d85611;
  /* 11d855e5 mov edx, dword ptr [0x11db3214] */
  EDX = (r32((uint32_t)(0x11db3214)));
  /* 11d855eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d855ee:;
  /* 11d855ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d855f1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d855f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d855f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d855fa cmp ecx, dword ptr [0x11db3218] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db3218))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85600 jb 0x11d85611 */
  if (C.cf) goto L_11d85611;
  /* 11d85602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85605 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85608 je 0x11d8560f */
  if (C.zf) goto L_11d8560f;
  /* 11d8560a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8560d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11d8560fu);
L_11d8560f:;
  /* 11d8560f jmp 0x11d855ee */
  goto L_11d855ee;
L_11d85611:;
  /* 11d85611 push 0x11daf724 */
  push32((uint32_t)(0x11daf724u));
  /* 11d85616 push 0x11daf51c */
  push32((uint32_t)(0x11daf51cu));
  /* 11d8561b call 0x11d856b0 */
  push32(0x11d85620u); f_11d856b0();
  /* 11d85620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d85623:;
  /* 11d85623 push 0x11daf92c */
  push32((uint32_t)(0x11daf92cu));
  /* 11d85628 push 0x11daf828 */
  push32((uint32_t)(0x11daf828u));
  /* 11d8562d call 0x11d856b0 */
  push32(0x11d85632u); f_11d856b0();
  /* 11d85632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85635 cmp dword ptr [0x11db171c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db171c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8563c jne 0x11d8565e */
  if (!C.zf) goto L_11d8565e;
  /* 11d8563e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d85640 call 0x11d86fe0 */
  push32(0x11d85645u); f_11d86fe0();
  /* 11d85645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85648 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8564b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8564d je 0x11d8565e */
  if (C.zf) goto L_11d8565e;
  /* 11d8564f mov dword ptr [0x11db171c], 1 */
  w32((uint32_t)(0x11db171c), (0x1u));
  /* 11d85659 call 0x11d878f0 */
  push32(0x11d8565eu); f_11d878f0();
L_11d8565e:;
  /* 11d8565e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85662 je 0x11d8566b */
  if (C.zf) goto L_11d8566b;
  /* 11d85664 call 0x11d856a0 */
  push32(0x11d85669u); f_11d856a0();
  /* 11d85669 jmp 0x11d8567f */
  goto L_11d8567f;
L_11d8566b:;
  /* 11d8566b mov dword ptr [0x11db1718], 1 */
  w32((uint32_t)(0x11db1718), (0x1u));
  /* 11d85675 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85678 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85679 call dword ptr [0x11db43cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43cc))), 0x11d8567fu);
L_11d8567f:;
  /* 11d8567f mov esp, ebp */
  ESP = (EBP);
  /* 11d85681 pop ebp */
  EBP = (pop32());
  /* 11d85682 ret  */
  ESPCHK(0x11d855a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005690 @ 0x11d85690 (15 bytes, 7 insns) */
void f_11d85690(void) {
  FTRACE(0x11d85690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85690 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85691 mov ebp, esp */
  EBP = (ESP);
  /* 11d85693 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d85695 call 0x11d886f0 */
  push32(0x11d8569au); f_11d886f0();
  /* 11d8569a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8569d pop ebp */
  EBP = (pop32());
  /* 11d8569e ret  */
  ESPCHK(0x11d85690u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x11d856a0 (15 bytes, 7 insns) */
void f_11d856a0(void) {
  FTRACE(0x11d856a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d856a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d856a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d856a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d856a5 call 0x11d88790 */
  push32(0x11d856aau); f_11d88790();
  /* 11d856aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d856ad pop ebp */
  EBP = (pop32());
  /* 11d856ae ret  */
  ESPCHK(0x11d856a0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11d856b0 (37 bytes, 16 insns) */
void f_11d856b0(void) {
  FTRACE(0x11d856b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d856b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d856b1 mov ebp, esp */
  EBP = (ESP);
L_11d856b3:;
  /* 11d856b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d856b6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d856b9 jae 0x11d856d3 */
  if (!C.cf) goto L_11d856d3;
  /* 11d856bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d856be cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d856c1 je 0x11d856c8 */
  if (C.zf) goto L_11d856c8;
  /* 11d856c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d856c6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11d856c8u);
L_11d856c8:;
  /* 11d856c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d856cb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d856ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d856d1 jmp 0x11d856b3 */
  goto L_11d856b3;
L_11d856d3:;
  /* 11d856d3 pop ebp */
  EBP = (pop32());
  /* 11d856d4 ret  */
  ESPCHK(0x11d856b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056e0 @ 0x11d856e0 (804 bytes, 236 insns) */
void f_11d856e0(void) {
  FTRACE(0x11d856e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d856e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d856e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d856e3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d856e6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11d856eb push 0x11dac7bc */
  push32((uint32_t)(0x11dac7bcu));
  /* 11d856f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d856f2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d856f7 call 0x11d85ad0 */
  push32(0x11d856fcu); f_11d85ad0();
  /* 11d856fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d856ff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11d85702 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85706 jne 0x11d85712 */
  if (!C.zf) goto L_11d85712;
  /* 11d85708 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11d8570a call 0x11d84950 */
  push32(0x11d8570fu); f_11d84950();
  /* 11d8570f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d85712:;
  /* 11d85712 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85715 mov dword ptr [0x11db30c0], eax */
  w32((uint32_t)(0x11db30c0), (EAX));
  /* 11d8571a mov dword ptr [0x11db31fc], 0x20 */
  w32((uint32_t)(0x11db31fc), (0x20u));
  /* 11d85724 jmp 0x11d8572f */
  goto L_11d8572f;
L_11d85726:;
  /* 11d85726 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85729 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8572c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11d8572f:;
  /* 11d8572f mov edx, dword ptr [0x11db30c0] */
  EDX = (r32((uint32_t)(0x11db30c0)));
  /* 11d85735 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8573b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8573e jae 0x11d85763 */
  if (!C.cf) goto L_11d85763;
  /* 11d85740 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85743 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d85747 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8574a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d85750 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85753 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11d85757 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8575a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d85761 jmp 0x11d85726 */
  goto L_11d85726;
L_11d85763:;
  /* 11d85763 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11d85766 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85767 call dword ptr [0x11db43dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43dc))), 0x11d8576du);
  /* 11d8576d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11d85770 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d85776 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d85778 je 0x11d85905 */
  if (C.zf) goto L_11d85905;
  /* 11d8577e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85782 je 0x11d85905 */
  if (C.zf) goto L_11d85905;
  /* 11d85788 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8578b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8578d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11d85790 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d85793 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85796 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d85799 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8579c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8579f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11d857a2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d857a9 jge 0x11d857b3 */
  if ((C.sf==C.of)) goto L_11d857b3;
  /* 11d857ab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11d857ae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11d857b1 jmp 0x11d857ba */
  goto L_11d857ba;
L_11d857b3:;
  /* 11d857b3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11d857ba:;
  /* 11d857ba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11d857bd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11d857c0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11d857c7 jmp 0x11d857d2 */
  goto L_11d857d2;
L_11d857c9:;
  /* 11d857c9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11d857cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d857cf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11d857d2:;
  /* 11d857d2 mov ecx, dword ptr [0x11db31fc] */
  ECX = (r32((uint32_t)(0x11db31fc)));
  /* 11d857d8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d857db jge 0x11d85872 */
  if ((C.sf==C.of)) goto L_11d85872;
  /* 11d857e1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11d857e6 push 0x11dac7bc */
  push32((uint32_t)(0x11dac7bcu));
  /* 11d857eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d857ed push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d857f2 call 0x11d85ad0 */
  push32(0x11d857f7u); f_11d85ad0();
  /* 11d857f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d857fa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11d857fd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85801 jne 0x11d8580e */
  if (!C.zf) goto L_11d8580e;
  /* 11d85803 mov edx, dword ptr [0x11db31fc] */
  EDX = (r32((uint32_t)(0x11db31fc)));
  /* 11d85809 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11d8580c jmp 0x11d85872 */
  goto L_11d85872;
L_11d8580e:;
  /* 11d8580e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11d85811 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85814 mov dword ptr [eax*4 + 0x11db30c0], ecx */
  w32((uint32_t)(EAX*4 + 0x11db30c0), (ECX));
  /* 11d8581b mov edx, dword ptr [0x11db31fc] */
  EDX = (r32((uint32_t)(0x11db31fc)));
  /* 11d85821 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85824 mov dword ptr [0x11db31fc], edx */
  w32((uint32_t)(0x11db31fc), (EDX));
  /* 11d8582a jmp 0x11d85835 */
  goto L_11d85835;
L_11d8582c:;
  /* 11d8582c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8582f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85832 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11d85835:;
  /* 11d85835 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11d85838 mov edx, dword ptr [ecx*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8583f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85845 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85848 jae 0x11d8586d */
  if (!C.cf) goto L_11d8586d;
  /* 11d8584a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8584d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d85851 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85854 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d8585a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8585d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11d85861 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85864 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d8586b jmp 0x11d8582c */
  goto L_11d8582c;
L_11d8586d:;
  /* 11d8586d jmp 0x11d857c9 */
  goto L_11d857c9;
L_11d85872:;
  /* 11d85872 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11d85879 jmp 0x11d85896 */
  goto L_11d85896;
L_11d8587b:;
  /* 11d8587b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d8587e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85881 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11d85884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85887 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8588a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8588d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d85890 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85893 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11d85896:;
  /* 11d85896 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d85899 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8589c jge 0x11d85905 */
  if ((C.sf==C.of)) goto L_11d85905;
  /* 11d8589e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d858a1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d858a4 je 0x11d85900 */
  if (C.zf) goto L_11d85900;
  /* 11d858a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d858a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d858ac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d858af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d858b1 je 0x11d85900 */
  if (C.zf) goto L_11d85900;
  /* 11d858b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d858b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d858b9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11d858bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d858be jne 0x11d858d0 */
  if (!C.zf) goto L_11d858d0;
  /* 11d858c0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d858c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d858c5 push edx */
  push32((uint32_t)(EDX));
  /* 11d858c6 call dword ptr [0x11db43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43d8))), 0x11d858ccu);
  /* 11d858cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d858ce je 0x11d85900 */
  if (C.zf) goto L_11d85900;
L_11d858d0:;
  /* 11d858d0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d858d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d858d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d858d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d858dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d858df mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d858e6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d858e8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11d858eb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d858ee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d858f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d858f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d858f5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d858f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d858fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d858fd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11d85900:;
  /* 11d85900 jmp 0x11d8587b */
  goto L_11d8587b;
L_11d85905:;
  /* 11d85905 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11d8590c jmp 0x11d85917 */
  goto L_11d85917;
L_11d8590e:;
  /* 11d8590e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d85911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85914 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11d85917:;
  /* 11d85917 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8591b jge 0x11d859f4 */
  if ((C.sf==C.of)) goto L_11d859f4;
  /* 11d85921 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d85924 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d85927 mov edx, dword ptr [0x11db30c0] */
  EDX = (r32((uint32_t)(0x11db30c0)));
  /* 11d8592d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8592f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11d85932 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85935 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85938 jne 0x11d859e0 */
  if (!C.zf) goto L_11d859e0;
  /* 11d8593e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d85941 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11d85945 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85949 jne 0x11d85954 */
  if (!C.zf) goto L_11d85954;
  /* 11d8594b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11d85952 jmp 0x11d85964 */
  goto L_11d85964;
L_11d85954:;
  /* 11d85954 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d85957 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8595a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8595c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8595e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85961 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11d85964:;
  /* 11d85964 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11d85967 push eax */
  push32((uint32_t)(EAX));
  /* 11d85968 call dword ptr [0x11db42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c8))), 0x11d8596eu);
  /* 11d8596e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11d85971 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85975 je 0x11d859cf */
  if (C.zf) goto L_11d859cf;
  /* 11d85977 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d8597a push ecx */
  push32((uint32_t)(ECX));
  /* 11d8597b call dword ptr [0x11db43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43d8))), 0x11d85981u);
  /* 11d85981 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11d85984 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85988 je 0x11d859cf */
  if (C.zf) goto L_11d859cf;
  /* 11d8598a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8598d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d85990 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d85992 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11d85995 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8599b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8599e jne 0x11d859b0 */
  if (!C.zf) goto L_11d859b0;
  /* 11d859a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859a3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d859a6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11d859a8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859ab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11d859ae jmp 0x11d859cd */
  goto L_11d859cd;
L_11d859b0:;
  /* 11d859b0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11d859b3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d859b9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d859bc jne 0x11d859cd */
  if (!C.zf) goto L_11d859cd;
  /* 11d859be mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d859c4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11d859c7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11d859cd:;
  /* 11d859cd jmp 0x11d859de */
  goto L_11d859de;
L_11d859cf:;
  /* 11d859cf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859d2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d859d5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11d859d8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859db mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11d859de:;
  /* 11d859de jmp 0x11d859ef */
  goto L_11d859ef;
L_11d859e0:;
  /* 11d859e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859e3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d859e6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11d859e9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d859ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11d859ef:;
  /* 11d859ef jmp 0x11d8590e */
  goto L_11d8590e;
L_11d859f4:;
  /* 11d859f4 mov eax, dword ptr [0x11db31fc] */
  EAX = (r32((uint32_t)(0x11db31fc)));
  /* 11d859f9 push eax */
  push32((uint32_t)(EAX));
  /* 11d859fa call dword ptr [0x11db43d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43d4))), 0x11d85a00u);
  /* 11d85a00 mov esp, ebp */
  ESP = (EBP);
  /* 11d85a02 pop ebp */
  EBP = (pop32());
  /* 11d85a03 ret  */
  ESPCHK(0x11d856e0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11d85a10 (155 bytes, 45 insns) */
void f_11d85a10(void) {
  FTRACE(0x11d85a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85a11 mov ebp, esp */
  EBP = (ESP);
  /* 11d85a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d85a16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d85a1d jmp 0x11d85a28 */
  goto L_11d85a28;
L_11d85a1f:;
  /* 11d85a1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85a22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85a25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d85a28:;
  /* 11d85a28 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85a2c jge 0x11d85aa7 */
  if ((C.sf==C.of)) goto L_11d85aa7;
  /* 11d85a2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85a31 cmp dword ptr [ecx*4 + 0x11db30c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11db30c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85a39 je 0x11d85aa2 */
  if (C.zf) goto L_11d85aa2;
  /* 11d85a3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85a3e mov eax, dword ptr [edx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d85a45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d85a48 jmp 0x11d85a53 */
  goto L_11d85a53;
L_11d85a4a:;
  /* 11d85a4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85a4d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85a50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d85a53:;
  /* 11d85a53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85a56 mov eax, dword ptr [edx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d85a5d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85a62 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85a65 jae 0x11d85a7f */
  if (!C.cf) goto L_11d85a7f;
  /* 11d85a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85a6a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85a6e je 0x11d85a7d */
  if (C.zf) goto L_11d85a7d;
  /* 11d85a70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85a73 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85a76 push edx */
  push32((uint32_t)(EDX));
  /* 11d85a77 call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d85a7du);
L_11d85a7d:;
  /* 11d85a7d jmp 0x11d85a4a */
  goto L_11d85a4a;
L_11d85a7f:;
  /* 11d85a7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d85a81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85a84 mov ecx, dword ptr [eax*4 + 0x11db30c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d85a8b push ecx */
  push32((uint32_t)(ECX));
  /* 11d85a8c call 0x11d86560 */
  push32(0x11d85a91u); f_11d86560();
  /* 11d85a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85a94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85a97 mov dword ptr [edx*4 + 0x11db30c0], 0 */
  w32((uint32_t)(EDX*4 + 0x11db30c0), (0x0u));
L_11d85aa2:;
  /* 11d85aa2 jmp 0x11d85a1f */
  goto L_11d85a1f;
L_11d85aa7:;
  /* 11d85aa7 mov esp, ebp */
  ESP = (EBP);
  /* 11d85aa9 pop ebp */
  EBP = (pop32());
  /* 11d85aaa ret  */
  ESPCHK(0x11d85a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x11d85ab0 (29 bytes, 13 insns) */
void f_11d85ab0(void) {
  FTRACE(0x11d85ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11d85ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85ab9 mov eax, dword ptr [0x11db197c] */
  EAX = (r32((uint32_t)(0x11db197c)));
  /* 11d85abe push eax */
  push32((uint32_t)(EAX));
  /* 11d85abf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85ac3 call 0x11d85b20 */
  push32(0x11d85ac8u); f_11d85b20();
  /* 11d85ac8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85acb pop ebp */
  EBP = (pop32());
  /* 11d85acc ret  */
  ESPCHK(0x11d85ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ad0 @ 0x11d85ad0 (35 bytes, 16 insns) */
void f_11d85ad0(void) {
  FTRACE(0x11d85ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11d85ad3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85ad6 push eax */
  push32((uint32_t)(EAX));
  /* 11d85ad7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85ada push ecx */
  push32((uint32_t)(ECX));
  /* 11d85adb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85ade push edx */
  push32((uint32_t)(EDX));
  /* 11d85adf mov eax, dword ptr [0x11db197c] */
  EAX = (r32((uint32_t)(0x11db197c)));
  /* 11d85ae4 push eax */
  push32((uint32_t)(EAX));
  /* 11d85ae5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85ae9 call 0x11d85b20 */
  push32(0x11d85aeeu); f_11d85b20();
  /* 11d85aee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85af1 pop ebp */
  EBP = (pop32());
  /* 11d85af2 ret  */
  ESPCHK(0x11d85ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x11d85b00 (27 bytes, 13 insns) */
void f_11d85b00(void) {
  FTRACE(0x11d85b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85b01 mov ebp, esp */
  EBP = (ESP);
  /* 11d85b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85b07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85b0c push eax */
  push32((uint32_t)(EAX));
  /* 11d85b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85b10 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85b11 call 0x11d85b20 */
  push32(0x11d85b16u); f_11d85b20();
  /* 11d85b16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85b19 pop ebp */
  EBP = (pop32());
  /* 11d85b1a ret  */
  ESPCHK(0x11d85b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x11d85b20 (94 bytes, 38 insns) */
void f_11d85b20(void) {
  FTRACE(0x11d85b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85b21 mov ebp, esp */
  EBP = (ESP);
  /* 11d85b23 push ecx */
  push32((uint32_t)(ECX));
L_11d85b24:;
  /* 11d85b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d85b26 call 0x11d886f0 */
  push32(0x11d85b2bu); f_11d886f0();
  /* 11d85b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85b2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d85b31 push eax */
  push32((uint32_t)(EAX));
  /* 11d85b32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85b36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85b39 push edx */
  push32((uint32_t)(EDX));
  /* 11d85b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85b3d push eax */
  push32((uint32_t)(EAX));
  /* 11d85b3e call 0x11d85ba0 */
  push32(0x11d85b43u); f_11d85ba0();
  /* 11d85b43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85b46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d85b49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d85b4b call 0x11d88790 */
  push32(0x11d85b50u); f_11d88790();
  /* 11d85b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85b53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85b57 jne 0x11d85b5f */
  if (!C.zf) goto L_11d85b5f;
  /* 11d85b59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85b5d jne 0x11d85b64 */
  if (!C.zf) goto L_11d85b64;
L_11d85b5f:;
  /* 11d85b5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85b62 jmp 0x11d85b7a */
  goto L_11d85b7a;
L_11d85b64:;
  /* 11d85b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85b67 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85b68 call 0x11d8a150 */
  push32(0x11d85b6du); f_11d8a150();
  /* 11d85b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85b72 jne 0x11d85b78 */
  if (!C.zf) goto L_11d85b78;
  /* 11d85b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85b76 jmp 0x11d85b7a */
  goto L_11d85b7a;
L_11d85b78:;
  /* 11d85b78 jmp 0x11d85b24 */
  goto L_11d85b24;
L_11d85b7a:;
  /* 11d85b7a mov esp, ebp */
  ESP = (EBP);
  /* 11d85b7c pop ebp */
  EBP = (pop32());
  /* 11d85b7d ret  */
  ESPCHK(0x11d85b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x11d85b80 (23 bytes, 11 insns) */
void f_11d85b80(void) {
  FTRACE(0x11d85b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85b81 mov ebp, esp */
  EBP = (ESP);
  /* 11d85b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85b8c push eax */
  push32((uint32_t)(EAX));
  /* 11d85b8d call 0x11d85ba0 */
  push32(0x11d85b92u); f_11d85ba0();
  /* 11d85b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85b95 pop ebp */
  EBP = (pop32());
  /* 11d85b96 ret  */
  ESPCHK(0x11d85b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x11d85ba0 (787 bytes, 254 insns) */
void f_11d85ba0(void) {
  FTRACE(0x11d85ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11d85ba3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d85ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d85ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11d85ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11d85ba9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d85bb0 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d85bb5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d85bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85bba je 0x11d85bec */
  if (C.zf) goto L_11d85bec;
L_11d85bbc:;
  /* 11d85bbc call 0x11d86c70 */
  push32(0x11d85bc1u); f_11d86c70();
  /* 11d85bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85bc3 jne 0x11d85be6 */
  if (!C.zf) goto L_11d85be6;
  /* 11d85bc5 push 0x11dac8b0 */
  push32((uint32_t)(0x11dac8b0u));
  /* 11d85bca push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85bcc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11d85bd1 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d85bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d85bd8 call 0x11d84e40 */
  push32(0x11d85bddu); f_11d84e40();
  /* 11d85bdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85be0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85be3 jne 0x11d85be6 */
  if (!C.zf) goto L_11d85be6;
  /* 11d85be5 int3  */
  x86_unimpl("int3 @ 0x11d85be5");
L_11d85be6:;
  /* 11d85be6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d85be8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d85bea jne 0x11d85bbc */
  if (!C.zf) goto L_11d85bbc;
L_11d85bec:;
  /* 11d85bec mov edx, dword ptr [0x11dafa88] */
  EDX = (r32((uint32_t)(0x11dafa88)));
  /* 11d85bf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d85bf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85bf8 cmp eax, dword ptr [0x11dafa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85bfe jne 0x11d85c01 */
  if (!C.zf) goto L_11d85c01;
  /* 11d85c00 int3  */
  x86_unimpl("int3 @ 0x11d85c00");
L_11d85c01:;
  /* 11d85c01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85c04 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85c05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85c08 push edx */
  push32((uint32_t)(EDX));
  /* 11d85c09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85c0c push eax */
  push32((uint32_t)(EAX));
  /* 11d85c0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85c14 push edx */
  push32((uint32_t)(EDX));
  /* 11d85c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85c19 call dword ptr [0x11dafdb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dafdb0))), 0x11d85c1fu);
  /* 11d85c1f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85c24 jne 0x11d85c84 */
  if (!C.zf) goto L_11d85c84;
  /* 11d85c26 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85c2a je 0x11d85c57 */
  if (C.zf) goto L_11d85c57;
L_11d85c2c:;
  /* 11d85c2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85c2f push eax */
  push32((uint32_t)(EAX));
  /* 11d85c30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85c34 push 0x11dac86c */
  push32((uint32_t)(0x11dac86cu));
  /* 11d85c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c41 call 0x11d84e40 */
  push32(0x11d85c46u); f_11d84e40();
  /* 11d85c46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85c49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85c4c jne 0x11d85c4f */
  if (!C.zf) goto L_11d85c4f;
  /* 11d85c4e int3  */
  x86_unimpl("int3 @ 0x11d85c4e");
L_11d85c4f:;
  /* 11d85c4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d85c51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d85c53 jne 0x11d85c2c */
  if (!C.zf) goto L_11d85c2c;
  /* 11d85c55 jmp 0x11d85c7d */
  goto L_11d85c7d;
L_11d85c57:;
  /* 11d85c57 push 0x11dac848 */
  push32((uint32_t)(0x11dac848u));
  /* 11d85c5c push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d85c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85c69 call 0x11d84e40 */
  push32(0x11d85c6eu); f_11d84e40();
  /* 11d85c6e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85c71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85c74 jne 0x11d85c77 */
  if (!C.zf) goto L_11d85c77;
  /* 11d85c76 int3  */
  x86_unimpl("int3 @ 0x11d85c76");
L_11d85c77:;
  /* 11d85c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d85c7b jne 0x11d85c57 */
  if (!C.zf) goto L_11d85c57;
L_11d85c7d:;
  /* 11d85c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85c7f jmp 0x11d85eac */
  goto L_11d85eac;
L_11d85c84:;
  /* 11d85c84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85c87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d85c8d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85c90 je 0x11d85ca6 */
  if (C.zf) goto L_11d85ca6;
  /* 11d85c92 mov edx, dword ptr [0x11dafa84] */
  EDX = (r32((uint32_t)(0x11dafa84)));
  /* 11d85c98 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d85c9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d85c9d jne 0x11d85ca6 */
  if (!C.zf) goto L_11d85ca6;
  /* 11d85c9f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11d85ca6:;
  /* 11d85ca6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85caa ja 0x11d85cb7 */
  if ((!C.cf&&!C.zf)) goto L_11d85cb7;
  /* 11d85cac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85caf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85cb2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85cb5 jbe 0x11d85ce3 */
  if ((C.cf||C.zf)) goto L_11d85ce3;
L_11d85cb7:;
  /* 11d85cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85cba push ecx */
  push32((uint32_t)(ECX));
  /* 11d85cbb push 0x11dac820 */
  push32((uint32_t)(0x11dac820u));
  /* 11d85cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85cc8 call 0x11d84e40 */
  push32(0x11d85ccdu); f_11d84e40();
  /* 11d85ccd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85cd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85cd3 jne 0x11d85cd6 */
  if (!C.zf) goto L_11d85cd6;
  /* 11d85cd5 int3  */
  x86_unimpl("int3 @ 0x11d85cd5");
L_11d85cd6:;
  /* 11d85cd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d85cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d85cda jne 0x11d85cb7 */
  if (!C.zf) goto L_11d85cb7;
  /* 11d85cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85cde jmp 0x11d85eac */
  goto L_11d85eac;
L_11d85ce3:;
  /* 11d85ce3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85ce6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d85ceb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85cee je 0x11d85d30 */
  if (C.zf) goto L_11d85d30;
  /* 11d85cf0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85cf4 je 0x11d85d30 */
  if (C.zf) goto L_11d85d30;
  /* 11d85cf6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85cf9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d85cff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85d02 je 0x11d85d30 */
  if (C.zf) goto L_11d85d30;
  /* 11d85d04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85d08 je 0x11d85d30 */
  if (C.zf) goto L_11d85d30;
L_11d85d0a:;
  /* 11d85d0a push 0x11dac7ec */
  push32((uint32_t)(0x11dac7ecu));
  /* 11d85d0f push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d85d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85d1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85d1c call 0x11d84e40 */
  push32(0x11d85d21u); f_11d84e40();
  /* 11d85d21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85d24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85d27 jne 0x11d85d2a */
  if (!C.zf) goto L_11d85d2a;
  /* 11d85d29 int3  */
  x86_unimpl("int3 @ 0x11d85d29");
L_11d85d2a:;
  /* 11d85d2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d85d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d85d2e jne 0x11d85d0a */
  if (!C.zf) goto L_11d85d0a;
L_11d85d30:;
  /* 11d85d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85d33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85d36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d85d39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d85d3c push ecx */
  push32((uint32_t)(ECX));
  /* 11d85d3d call 0x11d8a260 */
  push32(0x11d85d42u); f_11d8a260();
  /* 11d85d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85d45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d85d48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85d4c jne 0x11d85d55 */
  if (!C.zf) goto L_11d85d55;
  /* 11d85d4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85d50 jmp 0x11d85eac */
  goto L_11d85eac;
L_11d85d55:;
  /* 11d85d55 mov edx, dword ptr [0x11dafa88] */
  EDX = (r32((uint32_t)(0x11dafa88)));
  /* 11d85d5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85d5e mov dword ptr [0x11dafa88], edx */
  w32((uint32_t)(0x11dafa88), (EDX));
  /* 11d85d64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85d68 je 0x11d85db3 */
  if (C.zf) goto L_11d85db3;
  /* 11d85d6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85d6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d85d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85d76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d85d7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85d80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11d85d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85d8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11d85d91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85d94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85d97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11d85d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85d9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11d85da4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85da7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11d85dae jmp 0x11d85e53 */
  goto L_11d85e53;
L_11d85db3:;
  /* 11d85db3 mov edx, dword ptr [0x11db1724] */
  EDX = (r32((uint32_t)(0x11db1724)));
  /* 11d85db9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85dbc mov dword ptr [0x11db1724], edx */
  w32((uint32_t)(0x11db1724), (EDX));
  /* 11d85dc2 mov eax, dword ptr [0x11db172c] */
  EAX = (r32((uint32_t)(0x11db172c)));
  /* 11d85dc7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85dca mov dword ptr [0x11db172c], eax */
  w32((uint32_t)(0x11db172c), (EAX));
  /* 11d85dcf mov ecx, dword ptr [0x11db172c] */
  ECX = (r32((uint32_t)(0x11db172c)));
  /* 11d85dd5 cmp ecx, dword ptr [0x11db1730] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db1730))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85ddb jbe 0x11d85de9 */
  if ((C.cf||C.zf)) goto L_11d85de9;
  /* 11d85ddd mov edx, dword ptr [0x11db172c] */
  EDX = (r32((uint32_t)(0x11db172c)));
  /* 11d85de3 mov dword ptr [0x11db1730], edx */
  w32((uint32_t)(0x11db1730), (EDX));
L_11d85de9:;
  /* 11d85de9 cmp dword ptr [0x11db1728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85df0 je 0x11d85dff */
  if (C.zf) goto L_11d85dff;
  /* 11d85df2 mov eax, dword ptr [0x11db1728] */
  EAX = (r32((uint32_t)(0x11db1728)));
  /* 11d85df7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85dfa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d85dfd jmp 0x11d85e08 */
  goto L_11d85e08;
L_11d85dff:;
  /* 11d85dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e02 mov dword ptr [0x11db1720], edx */
  w32((uint32_t)(0x11db1720), (EDX));
L_11d85e08:;
  /* 11d85e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e0b mov ecx, dword ptr [0x11db1728] */
  ECX = (r32((uint32_t)(0x11db1728)));
  /* 11d85e11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d85e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11d85e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85e23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d85e26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85e2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11d85e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85e35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11d85e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85e3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11d85e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85e47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11d85e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e4d mov dword ptr [0x11db1728], ecx */
  w32((uint32_t)(0x11db1728), (ECX));
L_11d85e53:;
  /* 11d85e53 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d85e55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d85e57 mov dl, byte ptr [0x11dafa90] */
  DL = (r8((uint32_t)(0x11dafa90)));
  /* 11d85e5d push edx */
  push32((uint32_t)(EDX));
  /* 11d85e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85e64 push eax */
  push32((uint32_t)(EAX));
  /* 11d85e65 call 0x11d8a180 */
  push32(0x11d85e6au); f_11d8a180();
  /* 11d85e6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85e6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11d85e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d85e71 mov cl, byte ptr [0x11dafa90] */
  CL = (r8((uint32_t)(0x11dafa90)));
  /* 11d85e77 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11d85e82 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85e83 call 0x11d8a180 */
  push32(0x11d85e88u); f_11d8a180();
  /* 11d85e88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85e8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85e8e push edx */
  push32((uint32_t)(EDX));
  /* 11d85e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85e91 mov al, byte ptr [0x11dafa92] */
  AL = (r8((uint32_t)(0x11dafa92)));
  /* 11d85e96 push eax */
  push32((uint32_t)(EAX));
  /* 11d85e97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85e9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85e9d push ecx */
  push32((uint32_t)(ECX));
  /* 11d85e9e call 0x11d8a180 */
  push32(0x11d85ea3u); f_11d8a180();
  /* 11d85ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85ea9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d85eac:;
  /* 11d85eac pop edi */
  EDI = (pop32());
  /* 11d85ead pop esi */
  ESI = (pop32());
  /* 11d85eae pop ebx */
  EBX = (pop32());
  /* 11d85eaf mov esp, ebp */
  ESP = (EBP);
  /* 11d85eb1 pop ebp */
  EBP = (pop32());
  /* 11d85eb2 ret  */
  ESPCHK(0x11d85ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x11d85ec0 (27 bytes, 13 insns) */
void f_11d85ec0(void) {
  FTRACE(0x11d85ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11d85ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85ec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85ecc push eax */
  push32((uint32_t)(EAX));
  /* 11d85ecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85ed1 call 0x11d85ee0 */
  push32(0x11d85ed6u); f_11d85ee0();
  /* 11d85ed6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85ed9 pop ebp */
  EBP = (pop32());
  /* 11d85eda ret  */
  ESPCHK(0x11d85ec0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11d85ee0 (96 bytes, 37 insns) */
void f_11d85ee0(void) {
  FTRACE(0x11d85ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11d85ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d85ee6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85ee9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d85eed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d85ef0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d85ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85ef4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11d85ef8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85efb push eax */
  push32((uint32_t)(EAX));
  /* 11d85efc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85eff push ecx */
  push32((uint32_t)(ECX));
  /* 11d85f00 call 0x11d85ad0 */
  push32(0x11d85f05u); f_11d85ad0();
  /* 11d85f05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d85f0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85f0f je 0x11d85f39 */
  if (C.zf) goto L_11d85f39;
  /* 11d85f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85f14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d85f17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d85f1a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d85f20:;
  /* 11d85f20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d85f23 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85f26 jae 0x11d85f39 */
  if (!C.cf) goto L_11d85f39;
  /* 11d85f28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d85f2b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d85f2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d85f31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d85f37 jmp 0x11d85f20 */
  goto L_11d85f20;
L_11d85f39:;
  /* 11d85f39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d85f3c mov esp, ebp */
  ESP = (EBP);
  /* 11d85f3e pop ebp */
  EBP = (pop32());
  /* 11d85f3f ret  */
  ESPCHK(0x11d85ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x11d85f40 (27 bytes, 13 insns) */
void f_11d85f40(void) {
  FTRACE(0x11d85f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85f41 mov ebp, esp */
  EBP = (ESP);
  /* 11d85f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d85f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85f4c push eax */
  push32((uint32_t)(EAX));
  /* 11d85f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85f50 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85f51 call 0x11d85f60 */
  push32(0x11d85f56u); f_11d85f60();
  /* 11d85f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f59 pop ebp */
  EBP = (pop32());
  /* 11d85f5a ret  */
  ESPCHK(0x11d85f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f60 @ 0x11d85f60 (64 bytes, 27 insns) */
void f_11d85f60(void) {
  FTRACE(0x11d85f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85f61 mov ebp, esp */
  EBP = (ESP);
  /* 11d85f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85f64 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d85f66 call 0x11d886f0 */
  push32(0x11d85f6bu); f_11d886f0();
  /* 11d85f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d85f70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d85f73 push eax */
  push32((uint32_t)(EAX));
  /* 11d85f74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85f77 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85f78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85f7b push edx */
  push32((uint32_t)(EDX));
  /* 11d85f7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85f7f push eax */
  push32((uint32_t)(EAX));
  /* 11d85f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85f84 call 0x11d85fa0 */
  push32(0x11d85f89u); f_11d85fa0();
  /* 11d85f89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d85f8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d85f91 call 0x11d88790 */
  push32(0x11d85f96u); f_11d88790();
  /* 11d85f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d85f9c mov esp, ebp */
  ESP = (EBP);
  /* 11d85f9e pop ebp */
  EBP = (pop32());
  /* 11d85f9f ret  */
  ESPCHK(0x11d85f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x11d85fa0 (1297 bytes, 431 insns) */
void f_11d85fa0(void) {
  FTRACE(0x11d85fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d85fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d85fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11d85fa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d85fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d85fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11d85fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11d85fa9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11d85fb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85fb4 jne 0x11d85fd3 */
  if (!C.zf) goto L_11d85fd3;
  /* 11d85fb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d85fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11d85fba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d85fbd push ecx */
  push32((uint32_t)(ECX));
  /* 11d85fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85fc1 push edx */
  push32((uint32_t)(EDX));
  /* 11d85fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d85fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11d85fc6 call 0x11d85ad0 */
  push32(0x11d85fcbu); f_11d85ad0();
  /* 11d85fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85fce jmp 0x11d864aa */
  goto L_11d864aa;
L_11d85fd3:;
  /* 11d85fd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85fd7 je 0x11d85ff6 */
  if (C.zf) goto L_11d85ff6;
  /* 11d85fd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d85fdd jne 0x11d85ff6 */
  if (!C.zf) goto L_11d85ff6;
  /* 11d85fdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d85fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d85fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d85fe6 push edx */
  push32((uint32_t)(EDX));
  /* 11d85fe7 call 0x11d86560 */
  push32(0x11d85fecu); f_11d86560();
  /* 11d85fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d85fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d85ff1 jmp 0x11d864aa */
  goto L_11d864aa;
L_11d85ff6:;
  /* 11d85ff6 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d85ffb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d85ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86000 je 0x11d86032 */
  if (C.zf) goto L_11d86032;
L_11d86002:;
  /* 11d86002 call 0x11d86c70 */
  push32(0x11d86007u); f_11d86c70();
  /* 11d86007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86009 jne 0x11d8602c */
  if (!C.zf) goto L_11d8602c;
  /* 11d8600b push 0x11dac8b0 */
  push32((uint32_t)(0x11dac8b0u));
  /* 11d86010 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86012 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11d86017 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d8601c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8601e call 0x11d84e40 */
  push32(0x11d86023u); f_11d84e40();
  /* 11d86023 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86026 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86029 jne 0x11d8602c */
  if (!C.zf) goto L_11d8602c;
  /* 11d8602b int3  */
  x86_unimpl("int3 @ 0x11d8602b");
L_11d8602c:;
  /* 11d8602c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8602e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86030 jne 0x11d86002 */
  if (!C.zf) goto L_11d86002;
L_11d86032:;
  /* 11d86032 mov edx, dword ptr [0x11dafa88] */
  EDX = (r32((uint32_t)(0x11dafa88)));
  /* 11d86038 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d8603b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8603e cmp eax, dword ptr [0x11dafa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86044 jne 0x11d86047 */
  if (!C.zf) goto L_11d86047;
  /* 11d86046 int3  */
  x86_unimpl("int3 @ 0x11d86046");
L_11d86047:;
  /* 11d86047 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8604a push ecx */
  push32((uint32_t)(ECX));
  /* 11d8604b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8604e push edx */
  push32((uint32_t)(EDX));
  /* 11d8604f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d86052 push eax */
  push32((uint32_t)(EAX));
  /* 11d86053 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d86056 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86057 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8605a push edx */
  push32((uint32_t)(EDX));
  /* 11d8605b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8605e push eax */
  push32((uint32_t)(EAX));
  /* 11d8605f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86061 call dword ptr [0x11dafdb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dafdb0))), 0x11d86067u);
  /* 11d86067 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8606a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8606c jne 0x11d860cc */
  if (!C.zf) goto L_11d860cc;
  /* 11d8606e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86072 je 0x11d8609f */
  if (C.zf) goto L_11d8609f;
L_11d86074:;
  /* 11d86074 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d86077 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86078 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8607b push edx */
  push32((uint32_t)(EDX));
  /* 11d8607c push 0x11daca2c */
  push32((uint32_t)(0x11daca2cu));
  /* 11d86081 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86085 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86087 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86089 call 0x11d84e40 */
  push32(0x11d8608eu); f_11d84e40();
  /* 11d8608e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86091 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86094 jne 0x11d86097 */
  if (!C.zf) goto L_11d86097;
  /* 11d86096 int3  */
  x86_unimpl("int3 @ 0x11d86096");
L_11d86097:;
  /* 11d86097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8609b jne 0x11d86074 */
  if (!C.zf) goto L_11d86074;
  /* 11d8609d jmp 0x11d860c5 */
  goto L_11d860c5;
L_11d8609f:;
  /* 11d8609f push 0x11daca08 */
  push32((uint32_t)(0x11daca08u));
  /* 11d860a4 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d860a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860af push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860b1 call 0x11d84e40 */
  push32(0x11d860b6u); f_11d84e40();
  /* 11d860b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d860b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d860bc jne 0x11d860bf */
  if (!C.zf) goto L_11d860bf;
  /* 11d860be int3  */
  x86_unimpl("int3 @ 0x11d860be");
L_11d860bf:;
  /* 11d860bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d860c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d860c3 jne 0x11d8609f */
  if (!C.zf) goto L_11d8609f;
L_11d860c5:;
  /* 11d860c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d860c7 jmp 0x11d864aa */
  goto L_11d864aa;
L_11d860cc:;
  /* 11d860cc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d860d0 jbe 0x11d860fe */
  if ((C.cf||C.zf)) goto L_11d860fe;
L_11d860d2:;
  /* 11d860d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d860d5 push edx */
  push32((uint32_t)(EDX));
  /* 11d860d6 push 0x11dac9d8 */
  push32((uint32_t)(0x11dac9d8u));
  /* 11d860db push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860df push 0 */
  push32((uint32_t)(0x0u));
  /* 11d860e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d860e3 call 0x11d84e40 */
  push32(0x11d860e8u); f_11d84e40();
  /* 11d860e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d860eb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d860ee jne 0x11d860f1 */
  if (!C.zf) goto L_11d860f1;
  /* 11d860f0 int3  */
  x86_unimpl("int3 @ 0x11d860f0");
L_11d860f1:;
  /* 11d860f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d860f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d860f5 jne 0x11d860d2 */
  if (!C.zf) goto L_11d860d2;
  /* 11d860f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d860f9 jmp 0x11d864aa */
  goto L_11d864aa;
L_11d860fe:;
  /* 11d860fe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86102 je 0x11d86146 */
  if (C.zf) goto L_11d86146;
  /* 11d86104 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d86107 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8610d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86110 je 0x11d86146 */
  if (C.zf) goto L_11d86146;
  /* 11d86112 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d86115 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8611b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8611e je 0x11d86146 */
  if (C.zf) goto L_11d86146;
L_11d86120:;
  /* 11d86120 push 0x11dac7ec */
  push32((uint32_t)(0x11dac7ecu));
  /* 11d86125 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d8612a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8612c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8612e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86130 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d86132 call 0x11d84e40 */
  push32(0x11d86137u); f_11d84e40();
  /* 11d86137 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8613a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8613d jne 0x11d86140 */
  if (!C.zf) goto L_11d86140;
  /* 11d8613f int3  */
  x86_unimpl("int3 @ 0x11d8613f");
L_11d86140:;
  /* 11d86140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86144 jne 0x11d86120 */
  if (!C.zf) goto L_11d86120;
L_11d86146:;
  /* 11d86146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86149 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8614a call 0x11d870d0 */
  push32(0x11d8614fu); f_11d870d0();
  /* 11d8614f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86154 jne 0x11d86177 */
  if (!C.zf) goto L_11d86177;
  /* 11d86156 push 0x11dac9b4 */
  push32((uint32_t)(0x11dac9b4u));
  /* 11d8615b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8615d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11d86162 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86167 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86169 call 0x11d84e40 */
  push32(0x11d8616eu); f_11d84e40();
  /* 11d8616e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86171 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86174 jne 0x11d86177 */
  if (!C.zf) goto L_11d86177;
  /* 11d86176 int3  */
  x86_unimpl("int3 @ 0x11d86176");
L_11d86177:;
  /* 11d86177 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8617b jne 0x11d86146 */
  if (!C.zf) goto L_11d86146;
  /* 11d8617d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86180 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86183 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d86186 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86189 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8618d jne 0x11d86196 */
  if (!C.zf) goto L_11d86196;
  /* 11d8618f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11d86196:;
  /* 11d86196 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8619a je 0x11d861da */
  if (C.zf) goto L_11d861da;
L_11d8619c:;
  /* 11d8619c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8619f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d861a6 jne 0x11d861b1 */
  if (!C.zf) goto L_11d861b1;
  /* 11d861a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d861ab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d861af je 0x11d861d2 */
  if (C.zf) goto L_11d861d2;
L_11d861b1:;
  /* 11d861b1 push 0x11dac96c */
  push32((uint32_t)(0x11dac96cu));
  /* 11d861b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d861b8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11d861bd push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d861c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d861c4 call 0x11d84e40 */
  push32(0x11d861c9u); f_11d84e40();
  /* 11d861c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d861cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d861cf jne 0x11d861d2 */
  if (!C.zf) goto L_11d861d2;
  /* 11d861d1 int3  */
  x86_unimpl("int3 @ 0x11d861d1");
L_11d861d2:;
  /* 11d861d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d861d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d861d6 jne 0x11d8619c */
  if (!C.zf) goto L_11d8619c;
  /* 11d861d8 jmp 0x11d8623e */
  goto L_11d8623e;
L_11d861da:;
  /* 11d861da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d861dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d861e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d861e5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d861e8 jne 0x11d861ff */
  if (!C.zf) goto L_11d861ff;
  /* 11d861ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d861ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d861f3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d861f6 jne 0x11d861ff */
  if (!C.zf) goto L_11d861ff;
  /* 11d861f8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11d861ff:;
  /* 11d861ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86202 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86205 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8620a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8620d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d86213 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86215 je 0x11d86238 */
  if (C.zf) goto L_11d86238;
  /* 11d86217 push 0x11dac930 */
  push32((uint32_t)(0x11dac930u));
  /* 11d8621c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8621e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11d86223 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86228 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8622a call 0x11d84e40 */
  push32(0x11d8622fu); f_11d84e40();
  /* 11d8622f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86232 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86235 jne 0x11d86238 */
  if (!C.zf) goto L_11d86238;
  /* 11d86237 int3  */
  x86_unimpl("int3 @ 0x11d86237");
L_11d86238:;
  /* 11d86238 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8623a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8623c jne 0x11d861ff */
  if (!C.zf) goto L_11d861ff;
L_11d8623e:;
  /* 11d8623e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86242 je 0x11d86269 */
  if (C.zf) goto L_11d86269;
  /* 11d86244 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86247 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8624a push eax */
  push32((uint32_t)(EAX));
  /* 11d8624b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8624e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8624f call 0x11d8a390 */
  push32(0x11d86254u); f_11d8a390();
  /* 11d86254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86257 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8625a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8625e jne 0x11d86267 */
  if (!C.zf) goto L_11d86267;
  /* 11d86260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86262 jmp 0x11d864aa */
  goto L_11d864aa;
L_11d86267:;
  /* 11d86267 jmp 0x11d8628c */
  goto L_11d8628c;
L_11d86269:;
  /* 11d86269 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8626c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8626f push edx */
  push32((uint32_t)(EDX));
  /* 11d86270 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86273 push eax */
  push32((uint32_t)(EAX));
  /* 11d86274 call 0x11d8a2e0 */
  push32(0x11d86279u); f_11d8a2e0();
  /* 11d86279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8627c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8627f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86283 jne 0x11d8628c */
  if (!C.zf) goto L_11d8628c;
  /* 11d86285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86287 jmp 0x11d864aa */
  goto L_11d864aa;
L_11d8628c:;
  /* 11d8628c mov ecx, dword ptr [0x11dafa88] */
  ECX = (r32((uint32_t)(0x11dafa88)));
  /* 11d86292 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86295 mov dword ptr [0x11dafa88], ecx */
  w32((uint32_t)(0x11dafa88), (ECX));
  /* 11d8629b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8629f jne 0x11d862f7 */
  if (!C.zf) goto L_11d862f7;
  /* 11d862a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d862a4 mov eax, dword ptr [0x11db1724] */
  EAX = (r32((uint32_t)(0x11db1724)));
  /* 11d862a9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d862ac mov dword ptr [0x11db1724], eax */
  w32((uint32_t)(0x11db1724), (EAX));
  /* 11d862b1 mov ecx, dword ptr [0x11db1724] */
  ECX = (r32((uint32_t)(0x11db1724)));
  /* 11d862b7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d862ba mov dword ptr [0x11db1724], ecx */
  w32((uint32_t)(0x11db1724), (ECX));
  /* 11d862c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d862c3 mov eax, dword ptr [0x11db172c] */
  EAX = (r32((uint32_t)(0x11db172c)));
  /* 11d862c8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d862cb mov dword ptr [0x11db172c], eax */
  w32((uint32_t)(0x11db172c), (EAX));
  /* 11d862d0 mov ecx, dword ptr [0x11db172c] */
  ECX = (r32((uint32_t)(0x11db172c)));
  /* 11d862d6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d862d9 mov dword ptr [0x11db172c], ecx */
  w32((uint32_t)(0x11db172c), (ECX));
  /* 11d862df mov edx, dword ptr [0x11db172c] */
  EDX = (r32((uint32_t)(0x11db172c)));
  /* 11d862e5 cmp edx, dword ptr [0x11db1730] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11db1730))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d862eb jbe 0x11d862f7 */
  if ((C.cf||C.zf)) goto L_11d862f7;
  /* 11d862ed mov eax, dword ptr [0x11db172c] */
  EAX = (r32((uint32_t)(0x11db172c)));
  /* 11d862f2 mov dword ptr [0x11db1730], eax */
  w32((uint32_t)(0x11db1730), (EAX));
L_11d862f7:;
  /* 11d862f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d862fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d862fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d86300 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86306 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86309 jbe 0x11d8632f */
  if ((C.cf||C.zf)) goto L_11d8632f;
  /* 11d8630b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8630e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86311 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86314 push edx */
  push32((uint32_t)(EDX));
  /* 11d86315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86317 mov al, byte ptr [0x11dafa92] */
  AL = (r8((uint32_t)(0x11dafa92)));
  /* 11d8631c push eax */
  push32((uint32_t)(EAX));
  /* 11d8631d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86323 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86326 push edx */
  push32((uint32_t)(EDX));
  /* 11d86327 call 0x11d8a180 */
  push32(0x11d8632cu); f_11d8a180();
  /* 11d8632c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8632f:;
  /* 11d8632f push 4 */
  push32((uint32_t)(0x4u));
  /* 11d86331 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86333 mov al, byte ptr [0x11dafa90] */
  AL = (r8((uint32_t)(0x11dafa90)));
  /* 11d86338 push eax */
  push32((uint32_t)(EAX));
  /* 11d86339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8633c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8633f push ecx */
  push32((uint32_t)(ECX));
  /* 11d86340 call 0x11d8a180 */
  push32(0x11d86345u); f_11d8a180();
  /* 11d86345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86348 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8634c jne 0x11d86369 */
  if (!C.zf) goto L_11d86369;
  /* 11d8634e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86351 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d86354 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d86357 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8635a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8635d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11d86360 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86363 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d86366 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11d86369:;
  /* 11d86369 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8636c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8636f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11d86372:;
  /* 11d86372 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86376 jne 0x11d863a7 */
  if (!C.zf) goto L_11d863a7;
  /* 11d86378 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8637c jne 0x11d86386 */
  if (!C.zf) goto L_11d86386;
  /* 11d8637e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86381 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86384 je 0x11d863a7 */
  if (C.zf) goto L_11d863a7;
L_11d86386:;
  /* 11d86386 push 0x11dac8fc */
  push32((uint32_t)(0x11dac8fcu));
  /* 11d8638b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8638d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11d86392 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86397 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86399 call 0x11d84e40 */
  push32(0x11d8639eu); f_11d84e40();
  /* 11d8639e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d863a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d863a4 jne 0x11d863a7 */
  if (!C.zf) goto L_11d863a7;
  /* 11d863a6 int3  */
  x86_unimpl("int3 @ 0x11d863a6");
L_11d863a7:;
  /* 11d863a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d863a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d863ab jne 0x11d86372 */
  if (!C.zf) goto L_11d86372;
  /* 11d863ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d863b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d863b3 je 0x11d863bb */
  if (C.zf) goto L_11d863bb;
  /* 11d863b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d863b9 je 0x11d863c3 */
  if (C.zf) goto L_11d863c3;
L_11d863bb:;
  /* 11d863bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d863be jmp 0x11d864aa */
  goto L_11d864aa;
L_11d863c3:;
  /* 11d863c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d863c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d863c9 je 0x11d863db */
  if (C.zf) goto L_11d863db;
  /* 11d863cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d863ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d863d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d863d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d863d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d863d9 jmp 0x11d86417 */
  goto L_11d86417;
L_11d863db:;
  /* 11d863db mov eax, dword ptr [0x11db1720] */
  EAX = (r32((uint32_t)(0x11db1720)));
  /* 11d863e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d863e3 je 0x11d86406 */
  if (C.zf) goto L_11d86406;
  /* 11d863e5 push 0x11dac8e0 */
  push32((uint32_t)(0x11dac8e0u));
  /* 11d863ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d863ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11d863f1 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d863f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d863f8 call 0x11d84e40 */
  push32(0x11d863fdu); f_11d84e40();
  /* 11d863fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86400 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86403 jne 0x11d86406 */
  if (!C.zf) goto L_11d86406;
  /* 11d86405 int3  */
  x86_unimpl("int3 @ 0x11d86405");
L_11d86406:;
  /* 11d86406 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d86408 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8640a jne 0x11d863db */
  if (!C.zf) goto L_11d863db;
  /* 11d8640c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8640f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d86412 mov dword ptr [0x11db1720], eax */
  w32((uint32_t)(0x11db1720), (EAX));
L_11d86417:;
  /* 11d86417 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8641a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8641e je 0x11d8642f */
  if (C.zf) goto L_11d8642f;
  /* 11d86420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86423 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d86426 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86429 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8642b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d8642d jmp 0x11d8646a */
  goto L_11d8646a;
L_11d8642f:;
  /* 11d8642f mov eax, dword ptr [0x11db1728] */
  EAX = (r32((uint32_t)(0x11db1728)));
  /* 11d86434 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86437 je 0x11d8645a */
  if (C.zf) goto L_11d8645a;
  /* 11d86439 push 0x11dac8c4 */
  push32((uint32_t)(0x11dac8c4u));
  /* 11d8643e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86440 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11d86445 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d8644a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8644c call 0x11d84e40 */
  push32(0x11d86451u); f_11d84e40();
  /* 11d86451 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86457 jne 0x11d8645a */
  if (!C.zf) goto L_11d8645a;
  /* 11d86459 int3  */
  x86_unimpl("int3 @ 0x11d86459");
L_11d8645a:;
  /* 11d8645a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8645c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8645e jne 0x11d8642f */
  if (!C.zf) goto L_11d8642f;
  /* 11d86460 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86463 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d86465 mov dword ptr [0x11db1728], eax */
  w32((uint32_t)(0x11db1728), (EAX));
L_11d8646a:;
  /* 11d8646a cmp dword ptr [0x11db1728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86471 je 0x11d86481 */
  if (C.zf) goto L_11d86481;
  /* 11d86473 mov ecx, dword ptr [0x11db1728] */
  ECX = (r32((uint32_t)(0x11db1728)));
  /* 11d86479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8647c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d8647f jmp 0x11d86489 */
  goto L_11d86489;
L_11d86481:;
  /* 11d86481 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86484 mov dword ptr [0x11db1720], eax */
  w32((uint32_t)(0x11db1720), (EAX));
L_11d86489:;
  /* 11d86489 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8648c mov edx, dword ptr [0x11db1728] */
  EDX = (r32((uint32_t)(0x11db1728)));
  /* 11d86492 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d86494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86497 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d8649e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d864a1 mov dword ptr [0x11db1728], ecx */
  w32((uint32_t)(0x11db1728), (ECX));
  /* 11d864a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d864aa:;
  /* 11d864aa pop edi */
  EDI = (pop32());
  /* 11d864ab pop esi */
  ESI = (pop32());
  /* 11d864ac pop ebx */
  EBX = (pop32());
  /* 11d864ad mov esp, ebp */
  ESP = (EBP);
  /* 11d864af pop ebp */
  EBP = (pop32());
  /* 11d864b0 ret  */
  ESPCHK(0x11d85fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x11d864c0 (27 bytes, 13 insns) */
void f_11d864c0(void) {
  FTRACE(0x11d864c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d864c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d864c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d864c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d864c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d864c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d864c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d864cc push eax */
  push32((uint32_t)(EAX));
  /* 11d864cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d864d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d864d1 call 0x11d864e0 */
  push32(0x11d864d6u); f_11d864e0();
  /* 11d864d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d864d9 pop ebp */
  EBP = (pop32());
  /* 11d864da ret  */
  ESPCHK(0x11d864c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x11d864e0 (64 bytes, 27 insns) */
void f_11d864e0(void) {
  FTRACE(0x11d864e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d864e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d864e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d864e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d864e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d864e6 call 0x11d886f0 */
  push32(0x11d864ebu); f_11d886f0();
  /* 11d864eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d864ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d864f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d864f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d864f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d864f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d864f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d864fb push edx */
  push32((uint32_t)(EDX));
  /* 11d864fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d864ff push eax */
  push32((uint32_t)(EAX));
  /* 11d86500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86503 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86504 call 0x11d85fa0 */
  push32(0x11d86509u); f_11d85fa0();
  /* 11d86509 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8650c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8650f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86511 call 0x11d88790 */
  push32(0x11d86516u); f_11d88790();
  /* 11d86516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8651c mov esp, ebp */
  ESP = (EBP);
  /* 11d8651e pop ebp */
  EBP = (pop32());
  /* 11d8651f ret  */
  ESPCHK(0x11d864e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x11d86520 (19 bytes, 9 insns) */
void f_11d86520(void) {
  FTRACE(0x11d86520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86520 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86521 mov ebp, esp */
  EBP = (ESP);
  /* 11d86523 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d86525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86528 push eax */
  push32((uint32_t)(EAX));
  /* 11d86529 call 0x11d86560 */
  push32(0x11d8652eu); f_11d86560();
  /* 11d8652e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86531 pop ebp */
  EBP = (pop32());
  /* 11d86532 ret  */
  ESPCHK(0x11d86520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x11d86540 (19 bytes, 9 insns) */
void f_11d86540(void) {
  FTRACE(0x11d86540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86540 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86541 mov ebp, esp */
  EBP = (ESP);
  /* 11d86543 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d86545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86548 push eax */
  push32((uint32_t)(EAX));
  /* 11d86549 call 0x11d86590 */
  push32(0x11d8654eu); f_11d86590();
  /* 11d8654e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86551 pop ebp */
  EBP = (pop32());
  /* 11d86552 ret  */
  ESPCHK(0x11d86540u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x11d86560 (41 bytes, 16 insns) */
void f_11d86560(void) {
  FTRACE(0x11d86560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86560 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86561 mov ebp, esp */
  EBP = (ESP);
  /* 11d86563 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86565 call 0x11d886f0 */
  push32(0x11d8656au); f_11d886f0();
  /* 11d8656a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8656d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86570 push eax */
  push32((uint32_t)(EAX));
  /* 11d86571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86574 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86575 call 0x11d86590 */
  push32(0x11d8657au); f_11d86590();
  /* 11d8657a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8657d push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8657f call 0x11d88790 */
  push32(0x11d86584u); f_11d88790();
  /* 11d86584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86587 pop ebp */
  EBP = (pop32());
  /* 11d86588 ret  */
  ESPCHK(0x11d86560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006590 @ 0x11d86590 (1004 bytes, 342 insns) */
void f_11d86590(void) {
  FTRACE(0x11d86590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86590 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86591 mov ebp, esp */
  EBP = (ESP);
  /* 11d86593 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86594 push ebx */
  push32((uint32_t)(EBX));
  /* 11d86595 push esi */
  push32((uint32_t)(ESI));
  /* 11d86596 push edi */
  push32((uint32_t)(EDI));
  /* 11d86597 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d8659c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8659f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d865a1 je 0x11d865d3 */
  if (C.zf) goto L_11d865d3;
L_11d865a3:;
  /* 11d865a3 call 0x11d86c70 */
  push32(0x11d865a8u); f_11d86c70();
  /* 11d865a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d865aa jne 0x11d865cd */
  if (!C.zf) goto L_11d865cd;
  /* 11d865ac push 0x11dac8b0 */
  push32((uint32_t)(0x11dac8b0u));
  /* 11d865b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d865b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11d865b8 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d865bd push 2 */
  push32((uint32_t)(0x2u));
  /* 11d865bf call 0x11d84e40 */
  push32(0x11d865c4u); f_11d84e40();
  /* 11d865c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d865c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d865ca jne 0x11d865cd */
  if (!C.zf) goto L_11d865cd;
  /* 11d865cc int3  */
  x86_unimpl("int3 @ 0x11d865cc");
L_11d865cd:;
  /* 11d865cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d865cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d865d1 jne 0x11d865a3 */
  if (!C.zf) goto L_11d865a3;
L_11d865d3:;
  /* 11d865d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d865d7 jne 0x11d865de */
  if (!C.zf) goto L_11d865de;
  /* 11d865d9 jmp 0x11d86975 */
  goto L_11d86975;
L_11d865de:;
  /* 11d865de push 0 */
  push32((uint32_t)(0x0u));
  /* 11d865e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d865e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d865e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d865e7 push edx */
  push32((uint32_t)(EDX));
  /* 11d865e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d865ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d865ed push eax */
  push32((uint32_t)(EAX));
  /* 11d865ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11d865f0 call dword ptr [0x11dafdb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dafdb0))), 0x11d865f6u);
  /* 11d865f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d865f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d865fb jne 0x11d86628 */
  if (!C.zf) goto L_11d86628;
L_11d865fd:;
  /* 11d865fd push 0x11dacb74 */
  push32((uint32_t)(0x11dacb74u));
  /* 11d86602 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d86607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86609 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8660b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8660d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8660f call 0x11d84e40 */
  push32(0x11d86614u); f_11d84e40();
  /* 11d86614 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8661a jne 0x11d8661d */
  if (!C.zf) goto L_11d8661d;
  /* 11d8661c int3  */
  x86_unimpl("int3 @ 0x11d8661c");
L_11d8661d:;
  /* 11d8661d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8661f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86621 jne 0x11d865fd */
  if (!C.zf) goto L_11d865fd;
  /* 11d86623 jmp 0x11d86975 */
  goto L_11d86975;
L_11d86628:;
  /* 11d86628 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8662b push edx */
  push32((uint32_t)(EDX));
  /* 11d8662c call 0x11d870d0 */
  push32(0x11d86631u); f_11d870d0();
  /* 11d86631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86636 jne 0x11d86659 */
  if (!C.zf) goto L_11d86659;
  /* 11d86638 push 0x11dac9b4 */
  push32((uint32_t)(0x11dac9b4u));
  /* 11d8663d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8663f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11d86644 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86649 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8664b call 0x11d84e40 */
  push32(0x11d86650u); f_11d84e40();
  /* 11d86650 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86653 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86656 jne 0x11d86659 */
  if (!C.zf) goto L_11d86659;
  /* 11d86658 int3  */
  x86_unimpl("int3 @ 0x11d86658");
L_11d86659:;
  /* 11d86659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8665b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8665d jne 0x11d86628 */
  if (!C.zf) goto L_11d86628;
  /* 11d8665f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86662 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86665 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d86668:;
  /* 11d86668 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8666b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d8666e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d86673 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86676 je 0x11d866bb */
  if (C.zf) goto L_11d866bb;
  /* 11d86678 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8667b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8667f je 0x11d866bb */
  if (C.zf) goto L_11d866bb;
  /* 11d86681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86684 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86687 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8668c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8668f je 0x11d866bb */
  if (C.zf) goto L_11d866bb;
  /* 11d86691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86694 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86698 je 0x11d866bb */
  if (C.zf) goto L_11d866bb;
  /* 11d8669a push 0x11dacb4c */
  push32((uint32_t)(0x11dacb4cu));
  /* 11d8669f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d866a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11d866a6 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d866ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11d866ad call 0x11d84e40 */
  push32(0x11d866b2u); f_11d84e40();
  /* 11d866b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d866b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d866b8 jne 0x11d866bb */
  if (!C.zf) goto L_11d866bb;
  /* 11d866ba int3  */
  x86_unimpl("int3 @ 0x11d866ba");
L_11d866bb:;
  /* 11d866bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d866bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d866bf jne 0x11d86668 */
  if (!C.zf) goto L_11d86668;
  /* 11d866c1 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d866c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d866c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d866cb jne 0x11d86796 */
  if (!C.zf) goto L_11d86796;
  /* 11d866d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d866d3 mov cl, byte ptr [0x11dafa90] */
  CL = (r8((uint32_t)(0x11dafa90)));
  /* 11d866d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d866da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d866dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d866e0 push edx */
  push32((uint32_t)(EDX));
  /* 11d866e1 call 0x11d86be0 */
  push32(0x11d866e6u); f_11d86be0();
  /* 11d866e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d866e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d866eb jne 0x11d86730 */
  if (!C.zf) goto L_11d86730;
L_11d866ed:;
  /* 11d866ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d866f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d866f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d866f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d866f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d866fa push edx */
  push32((uint32_t)(EDX));
  /* 11d866fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d866fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d86701 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d86707 mov edx, dword ptr [ecx*4 + 0x11dafa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa94)));
  /* 11d8670e push edx */
  push32((uint32_t)(EDX));
  /* 11d8670f push 0x11dacb20 */
  push32((uint32_t)(0x11dacb20u));
  /* 11d86714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86716 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86718 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8671a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8671c call 0x11d84e40 */
  push32(0x11d86721u); f_11d84e40();
  /* 11d86721 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86724 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86727 jne 0x11d8672a */
  if (!C.zf) goto L_11d8672a;
  /* 11d86729 int3  */
  x86_unimpl("int3 @ 0x11d86729");
L_11d8672a:;
  /* 11d8672a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8672c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8672e jne 0x11d866ed */
  if (!C.zf) goto L_11d866ed;
L_11d86730:;
  /* 11d86730 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d86732 mov cl, byte ptr [0x11dafa90] */
  CL = (r8((uint32_t)(0x11dafa90)));
  /* 11d86738 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8673c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8673f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86742 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11d86746 push edx */
  push32((uint32_t)(EDX));
  /* 11d86747 call 0x11d86be0 */
  push32(0x11d8674cu); f_11d86be0();
  /* 11d8674c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8674f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86751 jne 0x11d86796 */
  if (!C.zf) goto L_11d86796;
L_11d86753:;
  /* 11d86753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86756 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86759 push eax */
  push32((uint32_t)(EAX));
  /* 11d8675a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8675d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d86760 push edx */
  push32((uint32_t)(EDX));
  /* 11d86761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86764 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d86767 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8676d mov edx, dword ptr [ecx*4 + 0x11dafa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa94)));
  /* 11d86774 push edx */
  push32((uint32_t)(EDX));
  /* 11d86775 push 0x11dacaf4 */
  push32((uint32_t)(0x11dacaf4u));
  /* 11d8677a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8677c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8677e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86780 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d86782 call 0x11d84e40 */
  push32(0x11d86787u); f_11d84e40();
  /* 11d86787 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8678a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8678d jne 0x11d86790 */
  if (!C.zf) goto L_11d86790;
  /* 11d8678f int3  */
  x86_unimpl("int3 @ 0x11d8678f");
L_11d86790:;
  /* 11d86790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86794 jne 0x11d86753 */
  if (!C.zf) goto L_11d86753;
L_11d86796:;
  /* 11d86796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86799 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8679d jne 0x11d8680b */
  if (!C.zf) goto L_11d8680b;
L_11d8679f:;
  /* 11d8679f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d867a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d867a9 jne 0x11d867b4 */
  if (!C.zf) goto L_11d867b4;
  /* 11d867ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d867ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d867b2 je 0x11d867d5 */
  if (C.zf) goto L_11d867d5;
L_11d867b4:;
  /* 11d867b4 push 0x11dacab4 */
  push32((uint32_t)(0x11dacab4u));
  /* 11d867b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d867bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11d867c0 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d867c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d867c7 call 0x11d84e40 */
  push32(0x11d867ccu); f_11d84e40();
  /* 11d867cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d867cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d867d2 jne 0x11d867d5 */
  if (!C.zf) goto L_11d867d5;
  /* 11d867d4 int3  */
  x86_unimpl("int3 @ 0x11d867d4");
L_11d867d5:;
  /* 11d867d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d867d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d867d9 jne 0x11d8679f */
  if (!C.zf) goto L_11d8679f;
  /* 11d867db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d867de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d867e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d867e4 push eax */
  push32((uint32_t)(EAX));
  /* 11d867e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d867e7 mov cl, byte ptr [0x11dafa91] */
  CL = (r8((uint32_t)(0x11dafa91)));
  /* 11d867ed push ecx */
  push32((uint32_t)(ECX));
  /* 11d867ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d867f1 push edx */
  push32((uint32_t)(EDX));
  /* 11d867f2 call 0x11d8a180 */
  push32(0x11d867f7u); f_11d8a180();
  /* 11d867f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d867fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d867fd push eax */
  push32((uint32_t)(EAX));
  /* 11d867fe call 0x11d8a580 */
  push32(0x11d86803u); f_11d8a580();
  /* 11d86803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86806 jmp 0x11d86975 */
  goto L_11d86975;
L_11d8680b:;
  /* 11d8680b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8680e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86812 jne 0x11d86821 */
  if (!C.zf) goto L_11d86821;
  /* 11d86814 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86818 jne 0x11d86821 */
  if (!C.zf) goto L_11d86821;
  /* 11d8681a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11d86821:;
  /* 11d86821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86824 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86827 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8682a je 0x11d8684d */
  if (C.zf) goto L_11d8684d;
  /* 11d8682c push 0x11daca94 */
  push32((uint32_t)(0x11daca94u));
  /* 11d86831 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86833 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11d86838 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d8683d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8683f call 0x11d84e40 */
  push32(0x11d86844u); f_11d84e40();
  /* 11d86844 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8684a jne 0x11d8684d */
  if (!C.zf) goto L_11d8684d;
  /* 11d8684c int3  */
  x86_unimpl("int3 @ 0x11d8684c");
L_11d8684d:;
  /* 11d8684d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8684f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86851 jne 0x11d86821 */
  if (!C.zf) goto L_11d86821;
  /* 11d86853 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86856 mov eax, dword ptr [0x11db172c] */
  EAX = (r32((uint32_t)(0x11db172c)));
  /* 11d8685b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8685e mov dword ptr [0x11db172c], eax */
  w32((uint32_t)(0x11db172c), (EAX));
  /* 11d86863 mov ecx, dword ptr [0x11dafa84] */
  ECX = (r32((uint32_t)(0x11dafa84)));
  /* 11d86869 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8686c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8686e jne 0x11d8694c */
  if (!C.zf) goto L_11d8694c;
  /* 11d86874 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86877 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8687a je 0x11d8688c */
  if (C.zf) goto L_11d8688c;
  /* 11d8687c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8687f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d86881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86884 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d86887 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d8688a jmp 0x11d868ca */
  goto L_11d868ca;
L_11d8688c:;
  /* 11d8688c mov ecx, dword ptr [0x11db1720] */
  ECX = (r32((uint32_t)(0x11db1720)));
  /* 11d86892 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86895 je 0x11d868b8 */
  if (C.zf) goto L_11d868b8;
  /* 11d86897 push 0x11daca7c */
  push32((uint32_t)(0x11daca7cu));
  /* 11d8689c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8689e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11d868a3 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d868a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d868aa call 0x11d84e40 */
  push32(0x11d868afu); f_11d84e40();
  /* 11d868af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d868b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d868b5 jne 0x11d868b8 */
  if (!C.zf) goto L_11d868b8;
  /* 11d868b7 int3  */
  x86_unimpl("int3 @ 0x11d868b7");
L_11d868b8:;
  /* 11d868b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d868ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d868bc jne 0x11d8688c */
  if (!C.zf) goto L_11d8688c;
  /* 11d868be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d868c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d868c4 mov dword ptr [0x11db1720], ecx */
  w32((uint32_t)(0x11db1720), (ECX));
L_11d868ca:;
  /* 11d868ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d868cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d868d1 je 0x11d868e2 */
  if (C.zf) goto L_11d868e2;
  /* 11d868d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d868d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d868d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d868dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d868de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d868e0 jmp 0x11d8691f */
  goto L_11d8691f;
L_11d868e2:;
  /* 11d868e2 mov ecx, dword ptr [0x11db1728] */
  ECX = (r32((uint32_t)(0x11db1728)));
  /* 11d868e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d868eb je 0x11d8690e */
  if (C.zf) goto L_11d8690e;
  /* 11d868ed push 0x11daca64 */
  push32((uint32_t)(0x11daca64u));
  /* 11d868f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d868f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11d868f9 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d868fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86900 call 0x11d84e40 */
  push32(0x11d86905u); f_11d84e40();
  /* 11d86905 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86908 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8690b jne 0x11d8690e */
  if (!C.zf) goto L_11d8690e;
  /* 11d8690d int3  */
  x86_unimpl("int3 @ 0x11d8690d");
L_11d8690e:;
  /* 11d8690e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86912 jne 0x11d868e2 */
  if (!C.zf) goto L_11d868e2;
  /* 11d86914 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86917 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d86919 mov dword ptr [0x11db1728], ecx */
  w32((uint32_t)(0x11db1728), (ECX));
L_11d8691f:;
  /* 11d8691f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86922 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d86925 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86928 push eax */
  push32((uint32_t)(EAX));
  /* 11d86929 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8692b mov cl, byte ptr [0x11dafa91] */
  CL = (r8((uint32_t)(0x11dafa91)));
  /* 11d86931 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86935 push edx */
  push32((uint32_t)(EDX));
  /* 11d86936 call 0x11d8a180 */
  push32(0x11d8693bu); f_11d8a180();
  /* 11d8693b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8693e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86941 push eax */
  push32((uint32_t)(EAX));
  /* 11d86942 call 0x11d8a580 */
  push32(0x11d86947u); f_11d8a580();
  /* 11d86947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8694a jmp 0x11d86975 */
  goto L_11d86975;
L_11d8694c:;
  /* 11d8694c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8694f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11d86956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86959 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8695c push eax */
  push32((uint32_t)(EAX));
  /* 11d8695d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8695f mov cl, byte ptr [0x11dafa91] */
  CL = (r8((uint32_t)(0x11dafa91)));
  /* 11d86965 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86966 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86969 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8696c push edx */
  push32((uint32_t)(EDX));
  /* 11d8696d call 0x11d8a180 */
  push32(0x11d86972u); f_11d8a180();
  /* 11d86972 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d86975:;
  /* 11d86975 pop edi */
  EDI = (pop32());
  /* 11d86976 pop esi */
  ESI = (pop32());
  /* 11d86977 pop ebx */
  EBX = (pop32());
  /* 11d86978 mov esp, ebp */
  ESP = (EBP);
  /* 11d8697a pop ebp */
  EBP = (pop32());
  /* 11d8697b ret  */
  ESPCHK(0x11d86590u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x11d86980 (19 bytes, 9 insns) */
void f_11d86980(void) {
  FTRACE(0x11d86980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86980 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86981 mov ebp, esp */
  EBP = (ESP);
  /* 11d86983 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d86985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86988 push eax */
  push32((uint32_t)(EAX));
  /* 11d86989 call 0x11d869a0 */
  push32(0x11d8698eu); f_11d869a0();
  /* 11d8698e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86991 pop ebp */
  EBP = (pop32());
  /* 11d86992 ret  */
  ESPCHK(0x11d86980u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x11d869a0 (342 bytes, 119 insns) */
void f_11d869a0(void) {
  FTRACE(0x11d869a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d869a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d869a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d869a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d869a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d869a7 push esi */
  push32((uint32_t)(ESI));
  /* 11d869a8 push edi */
  push32((uint32_t)(EDI));
  /* 11d869a9 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d869ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d869b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d869b3 je 0x11d869e5 */
  if (C.zf) goto L_11d869e5;
L_11d869b5:;
  /* 11d869b5 call 0x11d86c70 */
  push32(0x11d869bau); f_11d86c70();
  /* 11d869ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d869bc jne 0x11d869df */
  if (!C.zf) goto L_11d869df;
  /* 11d869be push 0x11dac8b0 */
  push32((uint32_t)(0x11dac8b0u));
  /* 11d869c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d869c5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11d869ca push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d869cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11d869d1 call 0x11d84e40 */
  push32(0x11d869d6u); f_11d84e40();
  /* 11d869d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d869d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d869dc jne 0x11d869df */
  if (!C.zf) goto L_11d869df;
  /* 11d869de int3  */
  x86_unimpl("int3 @ 0x11d869de");
L_11d869df:;
  /* 11d869df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d869e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d869e3 jne 0x11d869b5 */
  if (!C.zf) goto L_11d869b5;
L_11d869e5:;
  /* 11d869e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d869e7 call 0x11d886f0 */
  push32(0x11d869ecu); f_11d886f0();
  /* 11d869ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d869ef:;
  /* 11d869ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d869f2 push edx */
  push32((uint32_t)(EDX));
  /* 11d869f3 call 0x11d870d0 */
  push32(0x11d869f8u); f_11d870d0();
  /* 11d869f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d869fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d869fd jne 0x11d86a20 */
  if (!C.zf) goto L_11d86a20;
  /* 11d869ff push 0x11dac9b4 */
  push32((uint32_t)(0x11dac9b4u));
  /* 11d86a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86a06 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11d86a0b push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86a10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86a12 call 0x11d84e40 */
  push32(0x11d86a17u); f_11d84e40();
  /* 11d86a17 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86a1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a1d jne 0x11d86a20 */
  if (!C.zf) goto L_11d86a20;
  /* 11d86a1f int3  */
  x86_unimpl("int3 @ 0x11d86a1f");
L_11d86a20:;
  /* 11d86a20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86a24 jne 0x11d869ef */
  if (!C.zf) goto L_11d869ef;
  /* 11d86a26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86a29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86a2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d86a2f:;
  /* 11d86a2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86a32 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86a35 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d86a3a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a3d je 0x11d86a82 */
  if (C.zf) goto L_11d86a82;
  /* 11d86a3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86a42 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a46 je 0x11d86a82 */
  if (C.zf) goto L_11d86a82;
  /* 11d86a48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86a4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86a4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d86a53 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a56 je 0x11d86a82 */
  if (C.zf) goto L_11d86a82;
  /* 11d86a58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86a5b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a5f je 0x11d86a82 */
  if (C.zf) goto L_11d86a82;
  /* 11d86a61 push 0x11dacb4c */
  push32((uint32_t)(0x11dacb4cu));
  /* 11d86a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86a68 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11d86a6d push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86a72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86a74 call 0x11d84e40 */
  push32(0x11d86a79u); f_11d84e40();
  /* 11d86a79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86a7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a7f jne 0x11d86a82 */
  if (!C.zf) goto L_11d86a82;
  /* 11d86a81 int3  */
  x86_unimpl("int3 @ 0x11d86a81");
L_11d86a82:;
  /* 11d86a82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86a84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86a86 jne 0x11d86a2f */
  if (!C.zf) goto L_11d86a2f;
  /* 11d86a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86a8b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a8f jne 0x11d86a9e */
  if (!C.zf) goto L_11d86a9e;
  /* 11d86a91 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86a95 jne 0x11d86a9e */
  if (!C.zf) goto L_11d86a9e;
  /* 11d86a97 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11d86a9e:;
  /* 11d86a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86aa1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86aa5 je 0x11d86ad9 */
  if (C.zf) goto L_11d86ad9;
L_11d86aa7:;
  /* 11d86aa7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86aaa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86aad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86ab0 je 0x11d86ad3 */
  if (C.zf) goto L_11d86ad3;
  /* 11d86ab2 push 0x11daca94 */
  push32((uint32_t)(0x11daca94u));
  /* 11d86ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ab9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11d86abe push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86ac5 call 0x11d84e40 */
  push32(0x11d86acau); f_11d84e40();
  /* 11d86aca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86acd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86ad0 jne 0x11d86ad3 */
  if (!C.zf) goto L_11d86ad3;
  /* 11d86ad2 int3  */
  x86_unimpl("int3 @ 0x11d86ad2");
L_11d86ad3:;
  /* 11d86ad3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d86ad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86ad7 jne 0x11d86aa7 */
  if (!C.zf) goto L_11d86aa7;
L_11d86ad9:;
  /* 11d86ad9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86adc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d86adf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d86ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86ae4 call 0x11d88790 */
  push32(0x11d86ae9u); f_11d88790();
  /* 11d86ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86aef pop edi */
  EDI = (pop32());
  /* 11d86af0 pop esi */
  ESI = (pop32());
  /* 11d86af1 pop ebx */
  EBX = (pop32());
  /* 11d86af2 mov esp, ebp */
  ESP = (EBP);
  /* 11d86af4 pop ebp */
  EBP = (pop32());
  /* 11d86af5 ret  */
  ESPCHK(0x11d869a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x11d86b00 (28 bytes, 11 insns) */
void f_11d86b00(void) {
  FTRACE(0x11d86b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86b01 mov ebp, esp */
  EBP = (ESP);
  /* 11d86b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86b04 mov eax, dword ptr [0x11dafa8c] */
  EAX = (r32((uint32_t)(0x11dafa8c)));
  /* 11d86b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d86b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86b0f mov dword ptr [0x11dafa8c], ecx */
  w32((uint32_t)(0x11dafa8c), (ECX));
  /* 11d86b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86b18 mov esp, ebp */
  ESP = (EBP);
  /* 11d86b1a pop ebp */
  EBP = (pop32());
  /* 11d86b1b ret  */
  ESPCHK(0x11d86b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x11d86b20 (157 bytes, 59 insns) */
void f_11d86b20(void) {
  FTRACE(0x11d86b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86b21 mov ebp, esp */
  EBP = (ESP);
  /* 11d86b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86b24 push ebx */
  push32((uint32_t)(EBX));
  /* 11d86b25 push esi */
  push32((uint32_t)(ESI));
  /* 11d86b26 push edi */
  push32((uint32_t)(EDI));
  /* 11d86b27 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86b29 call 0x11d886f0 */
  push32(0x11d86b2eu); f_11d886f0();
  /* 11d86b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86b34 push eax */
  push32((uint32_t)(EAX));
  /* 11d86b35 call 0x11d870d0 */
  push32(0x11d86b3au); f_11d870d0();
  /* 11d86b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86b3f je 0x11d86bac */
  if (C.zf) goto L_11d86bac;
  /* 11d86b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86b44 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86b47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d86b4a:;
  /* 11d86b4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86b4d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86b50 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d86b55 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86b58 je 0x11d86b9d */
  if (C.zf) goto L_11d86b9d;
  /* 11d86b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86b5d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86b61 je 0x11d86b9d */
  if (C.zf) goto L_11d86b9d;
  /* 11d86b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86b66 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d86b69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d86b6e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86b71 je 0x11d86b9d */
  if (C.zf) goto L_11d86b9d;
  /* 11d86b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86b76 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86b7a je 0x11d86b9d */
  if (C.zf) goto L_11d86b9d;
  /* 11d86b7c push 0x11dacb4c */
  push32((uint32_t)(0x11dacb4cu));
  /* 11d86b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86b83 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11d86b88 push 0x11dac8a4 */
  push32((uint32_t)(0x11dac8a4u));
  /* 11d86b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d86b8f call 0x11d84e40 */
  push32(0x11d86b94u); f_11d84e40();
  /* 11d86b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86b9a jne 0x11d86b9d */
  if (!C.zf) goto L_11d86b9d;
  /* 11d86b9c int3  */
  x86_unimpl("int3 @ 0x11d86b9c");
L_11d86b9d:;
  /* 11d86b9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86b9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86ba1 jne 0x11d86b4a */
  if (!C.zf) goto L_11d86b4a;
  /* 11d86ba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86ba6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86ba9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11d86bac:;
  /* 11d86bac push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86bae call 0x11d88790 */
  push32(0x11d86bb3u); f_11d88790();
  /* 11d86bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86bb6 pop edi */
  EDI = (pop32());
  /* 11d86bb7 pop esi */
  ESI = (pop32());
  /* 11d86bb8 pop ebx */
  EBX = (pop32());
  /* 11d86bb9 mov esp, ebp */
  ESP = (EBP);
  /* 11d86bbb pop ebp */
  EBP = (pop32());
  /* 11d86bbc ret  */
  ESPCHK(0x11d86b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x11d86bc0 (28 bytes, 11 insns) */
void f_11d86bc0(void) {
  FTRACE(0x11d86bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d86bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86bc4 mov eax, dword ptr [0x11dafdb0] */
  EAX = (r32((uint32_t)(0x11dafdb0)));
  /* 11d86bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d86bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86bcf mov dword ptr [0x11dafdb0], ecx */
  w32((uint32_t)(0x11dafdb0), (ECX));
  /* 11d86bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86bd8 mov esp, ebp */
  ESP = (EBP);
  /* 11d86bda pop ebp */
  EBP = (pop32());
  /* 11d86bdb ret  */
  ESPCHK(0x11d86bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x11d86be0 (136 bytes, 55 insns) */
void f_11d86be0(void) {
  FTRACE(0x11d86be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86be1 mov ebp, esp */
  EBP = (ESP);
  /* 11d86be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86be4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d86be5 push esi */
  push32((uint32_t)(ESI));
  /* 11d86be6 push edi */
  push32((uint32_t)(EDI));
  /* 11d86be7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11d86bee:;
  /* 11d86bee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d86bf1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d86bf4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86bf7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d86bfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86bfc je 0x11d86c5e */
  if (C.zf) goto L_11d86c5e;
  /* 11d86bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86c01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86c03 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d86c05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86c08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d86c0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86c11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86c14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d86c17 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86c19 je 0x11d86c5c */
  if (C.zf) goto L_11d86c5c;
L_11d86c1b:;
  /* 11d86c1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d86c1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d86c23 push eax */
  push32((uint32_t)(EAX));
  /* 11d86c24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86c29 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11d86c2c push edx */
  push32((uint32_t)(EDX));
  /* 11d86c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86c30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86c33 push eax */
  push32((uint32_t)(EAX));
  /* 11d86c34 push 0x11dacb90 */
  push32((uint32_t)(0x11dacb90u));
  /* 11d86c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86c41 call 0x11d84e40 */
  push32(0x11d86c46u); f_11d84e40();
  /* 11d86c46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86c49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86c4c jne 0x11d86c4f */
  if (!C.zf) goto L_11d86c4f;
  /* 11d86c4e int3  */
  x86_unimpl("int3 @ 0x11d86c4e");
L_11d86c4f:;
  /* 11d86c4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d86c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86c53 jne 0x11d86c1b */
  if (!C.zf) goto L_11d86c1b;
  /* 11d86c55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d86c5c:;
  /* 11d86c5c jmp 0x11d86bee */
  goto L_11d86bee;
L_11d86c5e:;
  /* 11d86c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86c61 pop edi */
  EDI = (pop32());
  /* 11d86c62 pop esi */
  ESI = (pop32());
  /* 11d86c63 pop ebx */
  EBX = (pop32());
  /* 11d86c64 mov esp, ebp */
  ESP = (EBP);
  /* 11d86c66 pop ebp */
  EBP = (pop32());
  /* 11d86c67 ret  */
  ESPCHK(0x11d86be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x11d86c70 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11d86c70(void) {
  FTRACE(0x11d86c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86c71 mov ebp, esp */
  EBP = (ESP);
  /* 11d86c73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d86c76 push ebx */
  push32((uint32_t)(EBX));
  /* 11d86c77 push esi */
  push32((uint32_t)(ESI));
  /* 11d86c78 push edi */
  push32((uint32_t)(EDI));
  /* 11d86c79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d86c80 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d86c85 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d86c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86c8a jne 0x11d86c96 */
  if (!C.zf) goto L_11d86c96;
  /* 11d86c8c mov eax, 1 */
  EAX = (0x1u);
  /* 11d86c91 jmp 0x11d86fc8 */
  goto L_11d86fc8;
L_11d86c96:;
  /* 11d86c96 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86c98 call 0x11d886f0 */
  push32(0x11d86c9du); f_11d886f0();
  /* 11d86c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86ca0 call 0x11d8a5f0 */
  push32(0x11d86ca5u); f_11d8a5f0();
  /* 11d86ca5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d86ca8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86cac je 0x11d86db9 */
  if (C.zf) goto L_11d86db9;
  /* 11d86cb2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86cb6 je 0x11d86db9 */
  if (C.zf) goto L_11d86db9;
  /* 11d86cbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d86cbf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d86cc2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d86cc5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86cc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d86ccb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86ccf ja 0x11d86d82 */
  if ((!C.cf&&!C.zf)) goto L_11d86d82;
  /* 11d86cd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d86cd8 jmp dword ptr [eax*4 + 0x11d86fcf] */
  switch (EAX) {
    case 0: goto L_11d86d5a;
    case 1: goto L_11d86d32;
    case 2: goto L_11d86d0a;
    case 3: goto L_11d86cdf;
    default: x86_unimpl("switch@0x11d86cd8 out of table"); return;
  }
L_11d86cdf:;
  /* 11d86cdf push 0x11dacce4 */
  push32((uint32_t)(0x11dacce4u));
  /* 11d86ce4 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d86ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ced push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86cef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86cf1 call 0x11d84e40 */
  push32(0x11d86cf6u); f_11d84e40();
  /* 11d86cf6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86cf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86cfc jne 0x11d86cff */
  if (!C.zf) goto L_11d86cff;
  /* 11d86cfe int3  */
  x86_unimpl("int3 @ 0x11d86cfe");
L_11d86cff:;
  /* 11d86cff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d86d01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86d03 jne 0x11d86cdf */
  if (!C.zf) goto L_11d86cdf;
  /* 11d86d05 jmp 0x11d86da8 */
  goto L_11d86da8;
L_11d86d0a:;
  /* 11d86d0a push 0x11daccc0 */
  push32((uint32_t)(0x11daccc0u));
  /* 11d86d0f push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d86d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d1c call 0x11d84e40 */
  push32(0x11d86d21u); f_11d84e40();
  /* 11d86d21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86d24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86d27 jne 0x11d86d2a */
  if (!C.zf) goto L_11d86d2a;
  /* 11d86d29 int3  */
  x86_unimpl("int3 @ 0x11d86d29");
L_11d86d2a:;
  /* 11d86d2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86d2e jne 0x11d86d0a */
  if (!C.zf) goto L_11d86d0a;
  /* 11d86d30 jmp 0x11d86da8 */
  goto L_11d86da8;
L_11d86d32:;
  /* 11d86d32 push 0x11dacc9c */
  push32((uint32_t)(0x11dacc9cu));
  /* 11d86d37 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d86d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d44 call 0x11d84e40 */
  push32(0x11d86d49u); f_11d84e40();
  /* 11d86d49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86d4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86d4f jne 0x11d86d52 */
  if (!C.zf) goto L_11d86d52;
  /* 11d86d51 int3  */
  x86_unimpl("int3 @ 0x11d86d51");
L_11d86d52:;
  /* 11d86d52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86d56 jne 0x11d86d32 */
  if (!C.zf) goto L_11d86d32;
  /* 11d86d58 jmp 0x11d86da8 */
  goto L_11d86da8;
L_11d86d5a:;
  /* 11d86d5a push 0x11dacc78 */
  push32((uint32_t)(0x11dacc78u));
  /* 11d86d5f push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d86d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d6c call 0x11d84e40 */
  push32(0x11d86d71u); f_11d84e40();
  /* 11d86d71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86d74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86d77 jne 0x11d86d7a */
  if (!C.zf) goto L_11d86d7a;
  /* 11d86d79 int3  */
  x86_unimpl("int3 @ 0x11d86d79");
L_11d86d7a:;
  /* 11d86d7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d86d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86d7e jne 0x11d86d5a */
  if (!C.zf) goto L_11d86d5a;
  /* 11d86d80 jmp 0x11d86da8 */
  goto L_11d86da8;
L_11d86d82:;
  /* 11d86d82 push 0x11dacc4c */
  push32((uint32_t)(0x11dacc4cu));
  /* 11d86d87 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d86d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86d94 call 0x11d84e40 */
  push32(0x11d86d99u); f_11d84e40();
  /* 11d86d99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86d9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86d9f jne 0x11d86da2 */
  if (!C.zf) goto L_11d86da2;
  /* 11d86da1 int3  */
  x86_unimpl("int3 @ 0x11d86da1");
L_11d86da2:;
  /* 11d86da2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86da4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86da6 jne 0x11d86d82 */
  if (!C.zf) goto L_11d86d82;
L_11d86da8:;
  /* 11d86da8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86daa call 0x11d88790 */
  push32(0x11d86dafu); f_11d88790();
  /* 11d86daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86db4 jmp 0x11d86fc8 */
  goto L_11d86fc8;
L_11d86db9:;
  /* 11d86db9 mov eax, dword ptr [0x11db1728] */
  EAX = (r32((uint32_t)(0x11db1728)));
  /* 11d86dbe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d86dc1 jmp 0x11d86dcb */
  goto L_11d86dcb;
L_11d86dc3:;
  /* 11d86dc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86dc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d86dc8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d86dcb:;
  /* 11d86dcb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86dcf je 0x11d86fbb */
  if (C.zf) goto L_11d86fbb;
  /* 11d86dd5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d86ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86ddf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d86de2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d86de8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86deb je 0x11d86e10 */
  if (C.zf) goto L_11d86e10;
  /* 11d86ded mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86df0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86df4 je 0x11d86e10 */
  if (C.zf) goto L_11d86e10;
  /* 11d86df6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86df9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d86dfc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d86e02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86e05 je 0x11d86e10 */
  if (C.zf) goto L_11d86e10;
  /* 11d86e07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86e0e jne 0x11d86e28 */
  if (!C.zf) goto L_11d86e28;
L_11d86e10:;
  /* 11d86e10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d86e16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d86e1c mov edx, dword ptr [ecx*4 + 0x11dafa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa94)));
  /* 11d86e23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d86e26 jmp 0x11d86e2f */
  goto L_11d86e2f;
L_11d86e28:;
  /* 11d86e28 mov dword ptr [ebp - 0x14], 0x11dacc44 */
  w32((uint32_t)(EBP + -0x14), (0x11dacc44u));
L_11d86e2f:;
  /* 11d86e2f push 4 */
  push32((uint32_t)(0x4u));
  /* 11d86e31 mov al, byte ptr [0x11dafa90] */
  AL = (r8((uint32_t)(0x11dafa90)));
  /* 11d86e36 push eax */
  push32((uint32_t)(EAX));
  /* 11d86e37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86e3d push ecx */
  push32((uint32_t)(ECX));
  /* 11d86e3e call 0x11d86be0 */
  push32(0x11d86e43u); f_11d86be0();
  /* 11d86e43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86e48 jne 0x11d86e84 */
  if (!C.zf) goto L_11d86e84;
L_11d86e4a:;
  /* 11d86e4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86e50 push edx */
  push32((uint32_t)(EDX));
  /* 11d86e51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d86e57 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86e58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d86e5b push edx */
  push32((uint32_t)(EDX));
  /* 11d86e5c push 0x11dacb20 */
  push32((uint32_t)(0x11dacb20u));
  /* 11d86e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86e69 call 0x11d84e40 */
  push32(0x11d86e6eu); f_11d84e40();
  /* 11d86e6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86e71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86e74 jne 0x11d86e77 */
  if (!C.zf) goto L_11d86e77;
  /* 11d86e76 int3  */
  x86_unimpl("int3 @ 0x11d86e76");
L_11d86e77:;
  /* 11d86e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86e7b jne 0x11d86e4a */
  if (!C.zf) goto L_11d86e4a;
  /* 11d86e7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d86e84:;
  /* 11d86e84 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d86e86 mov cl, byte ptr [0x11dafa90] */
  CL = (r8((uint32_t)(0x11dafa90)));
  /* 11d86e8c push ecx */
  push32((uint32_t)(ECX));
  /* 11d86e8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d86e93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86e96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11d86e9a push edx */
  push32((uint32_t)(EDX));
  /* 11d86e9b call 0x11d86be0 */
  push32(0x11d86ea0u); f_11d86be0();
  /* 11d86ea0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86ea5 jne 0x11d86ee1 */
  if (!C.zf) goto L_11d86ee1;
L_11d86ea7:;
  /* 11d86ea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86eaa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86ead push eax */
  push32((uint32_t)(EAX));
  /* 11d86eae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86eb1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d86eb4 push edx */
  push32((uint32_t)(EDX));
  /* 11d86eb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d86eb8 push eax */
  push32((uint32_t)(EAX));
  /* 11d86eb9 push 0x11dacaf4 */
  push32((uint32_t)(0x11dacaf4u));
  /* 11d86ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86ec6 call 0x11d84e40 */
  push32(0x11d86ecbu); f_11d84e40();
  /* 11d86ecb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86ece cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86ed1 jne 0x11d86ed4 */
  if (!C.zf) goto L_11d86ed4;
  /* 11d86ed3 int3  */
  x86_unimpl("int3 @ 0x11d86ed3");
L_11d86ed4:;
  /* 11d86ed4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d86ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d86ed8 jne 0x11d86ea7 */
  if (!C.zf) goto L_11d86ea7;
  /* 11d86eda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d86ee1:;
  /* 11d86ee1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86ee4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86ee8 jne 0x11d86f3a */
  if (!C.zf) goto L_11d86f3a;
  /* 11d86eea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86eed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d86ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86ef1 mov dl, byte ptr [0x11dafa91] */
  DL = (r8((uint32_t)(0x11dafa91)));
  /* 11d86ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11d86ef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86efb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86efe push eax */
  push32((uint32_t)(EAX));
  /* 11d86eff call 0x11d86be0 */
  push32(0x11d86f04u); f_11d86be0();
  /* 11d86f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86f09 jne 0x11d86f3a */
  if (!C.zf) goto L_11d86f3a;
L_11d86f0b:;
  /* 11d86f0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86f0e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86f11 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86f12 push 0x11dacc18 */
  push32((uint32_t)(0x11dacc18u));
  /* 11d86f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f1f call 0x11d84e40 */
  push32(0x11d86f24u); f_11d84e40();
  /* 11d86f24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86f27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86f2a jne 0x11d86f2d */
  if (!C.zf) goto L_11d86f2d;
  /* 11d86f2c int3  */
  x86_unimpl("int3 @ 0x11d86f2c");
L_11d86f2d:;
  /* 11d86f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86f2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86f31 jne 0x11d86f0b */
  if (!C.zf) goto L_11d86f0b;
  /* 11d86f33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d86f3a:;
  /* 11d86f3a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86f3e jne 0x11d86fb6 */
  if (!C.zf) goto L_11d86fb6;
  /* 11d86f40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86f43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86f47 je 0x11d86f7c */
  if (C.zf) goto L_11d86f7c;
L_11d86f49:;
  /* 11d86f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86f4c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d86f4f push edx */
  push32((uint32_t)(EDX));
  /* 11d86f50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86f53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d86f56 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86f57 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d86f5a push edx */
  push32((uint32_t)(EDX));
  /* 11d86f5b push 0x11dacbf8 */
  push32((uint32_t)(0x11dacbf8u));
  /* 11d86f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f68 call 0x11d84e40 */
  push32(0x11d86f6du); f_11d84e40();
  /* 11d86f6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86f70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86f73 jne 0x11d86f76 */
  if (!C.zf) goto L_11d86f76;
  /* 11d86f75 int3  */
  x86_unimpl("int3 @ 0x11d86f75");
L_11d86f76:;
  /* 11d86f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d86f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d86f7a jne 0x11d86f49 */
  if (!C.zf) goto L_11d86f49;
L_11d86f7c:;
  /* 11d86f7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86f7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d86f82 push edx */
  push32((uint32_t)(EDX));
  /* 11d86f83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d86f86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86f89 push eax */
  push32((uint32_t)(EAX));
  /* 11d86f8a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d86f8d push ecx */
  push32((uint32_t)(ECX));
  /* 11d86f8e push 0x11dacbcc */
  push32((uint32_t)(0x11dacbccu));
  /* 11d86f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d86f9b call 0x11d84e40 */
  push32(0x11d86fa0u); f_11d84e40();
  /* 11d86fa0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86fa3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86fa6 jne 0x11d86fa9 */
  if (!C.zf) goto L_11d86fa9;
  /* 11d86fa8 int3  */
  x86_unimpl("int3 @ 0x11d86fa8");
L_11d86fa9:;
  /* 11d86fa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d86fab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d86fad jne 0x11d86f7c */
  if (!C.zf) goto L_11d86f7c;
  /* 11d86faf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d86fb6:;
  /* 11d86fb6 jmp 0x11d86dc3 */
  goto L_11d86dc3;
L_11d86fbb:;
  /* 11d86fbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11d86fbd call 0x11d88790 */
  push32(0x11d86fc2u); f_11d88790();
  /* 11d86fc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d86fc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d86fc8:;
  /* 11d86fc8 pop edi */
  EDI = (pop32());
  /* 11d86fc9 pop esi */
  ESI = (pop32());
  /* 11d86fca pop ebx */
  EBX = (pop32());
  /* 11d86fcb mov esp, ebp */
  ESP = (EBP);
  /* 11d86fcd pop ebp */
  EBP = (pop32());
  /* 11d86fce ret  */
  ESPCHK(0x11d86c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x11d86fe0 (34 bytes, 13 insns) */
void f_11d86fe0(void) {
  FTRACE(0x11d86fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d86fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d86fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11d86fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d86fe4 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d86fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d86fec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d86ff0 je 0x11d86ffb */
  if (C.zf) goto L_11d86ffb;
  /* 11d86ff2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d86ff5 mov dword ptr [0x11dafa84], ecx */
  w32((uint32_t)(0x11dafa84), (ECX));
L_11d86ffb:;
  /* 11d86ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d86ffe mov esp, ebp */
  ESP = (EBP);
  /* 11d87000 pop ebp */
  EBP = (pop32());
  /* 11d87001 ret  */
  ESPCHK(0x11d86fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007010 @ 0x11d87010 (103 bytes, 38 insns) */
void f_11d87010(void) {
  FTRACE(0x11d87010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87010 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87011 mov ebp, esp */
  EBP = (ESP);
  /* 11d87013 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87014 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d87019 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8701c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8701e jne 0x11d87022 */
  if (!C.zf) goto L_11d87022;
  /* 11d87020 jmp 0x11d87073 */
  goto L_11d87073;
L_11d87022:;
  /* 11d87022 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87024 call 0x11d886f0 */
  push32(0x11d87029u); f_11d886f0();
  /* 11d87029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8702c mov ecx, dword ptr [0x11db1728] */
  ECX = (r32((uint32_t)(0x11db1728)));
  /* 11d87032 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d87035 jmp 0x11d8703f */
  goto L_11d8703f;
L_11d87037:;
  /* 11d87037 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8703a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8703c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8703f:;
  /* 11d8703f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87043 je 0x11d87069 */
  if (C.zf) goto L_11d87069;
  /* 11d87045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87048 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d8704b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d87051 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87054 jne 0x11d87067 */
  if (!C.zf) goto L_11d87067;
  /* 11d87056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87059 push eax */
  push32((uint32_t)(EAX));
  /* 11d8705a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8705d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87060 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87061 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11d87064u);
  /* 11d87064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d87067:;
  /* 11d87067 jmp 0x11d87037 */
  goto L_11d87037;
L_11d87069:;
  /* 11d87069 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8706b call 0x11d88790 */
  push32(0x11d87070u); f_11d88790();
  /* 11d87070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d87073:;
  /* 11d87073 mov esp, ebp */
  ESP = (EBP);
  /* 11d87075 pop ebp */
  EBP = (pop32());
  /* 11d87076 ret  */
  ESPCHK(0x11d87010u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11d87080 (75 bytes, 28 insns) */
void f_11d87080(void) {
  FTRACE(0x11d87080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87080 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87081 mov ebp, esp */
  EBP = (ESP);
  /* 11d87083 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87084 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87088 je 0x11d870bd */
  if (C.zf) goto L_11d870bd;
  /* 11d8708a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8708d push eax */
  push32((uint32_t)(EAX));
  /* 11d8708e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87091 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87092 call dword ptr [0x11db43e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e8))), 0x11d87098u);
  /* 11d87098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8709a jne 0x11d870bd */
  if (!C.zf) goto L_11d870bd;
  /* 11d8709c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d870a0 je 0x11d870b4 */
  if (C.zf) goto L_11d870b4;
  /* 11d870a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d870a5 push edx */
  push32((uint32_t)(EDX));
  /* 11d870a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d870a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d870aa call dword ptr [0x11db43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e4))), 0x11d870b0u);
  /* 11d870b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d870b2 jne 0x11d870bd */
  if (!C.zf) goto L_11d870bd;
L_11d870b4:;
  /* 11d870b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d870bb jmp 0x11d870c4 */
  goto L_11d870c4;
L_11d870bd:;
  /* 11d870bd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d870c4:;
  /* 11d870c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d870c7 mov esp, ebp */
  ESP = (EBP);
  /* 11d870c9 pop ebp */
  EBP = (pop32());
  /* 11d870ca ret  */
  ESPCHK(0x11d87080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x11d870d0 (134 bytes, 50 insns) */
void f_11d870d0(void) {
  FTRACE(0x11d870d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d870d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d870d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d870d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d870d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d870d8 jne 0x11d870de */
  if (!C.zf) goto L_11d870de;
  /* 11d870da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d870dc jmp 0x11d87152 */
  goto L_11d87152;
L_11d870de:;
  /* 11d870de push 1 */
  push32((uint32_t)(0x1u));
  /* 11d870e0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d870e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d870e5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d870e8 push eax */
  push32((uint32_t)(EAX));
  /* 11d870e9 call 0x11d87080 */
  push32(0x11d870eeu); f_11d87080();
  /* 11d870ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d870f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d870f3 jne 0x11d870f9 */
  if (!C.zf) goto L_11d870f9;
  /* 11d870f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d870f7 jmp 0x11d87152 */
  goto L_11d87152;
L_11d870f9:;
  /* 11d870f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d870fc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d870ff push ecx */
  push32((uint32_t)(ECX));
  /* 11d87100 call 0x11d8a710 */
  push32(0x11d87105u); f_11d8a710();
  /* 11d87105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87108 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8710b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8710f je 0x11d87126 */
  if (C.zf) goto L_11d87126;
  /* 11d87111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87114 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87117 push edx */
  push32((uint32_t)(EDX));
  /* 11d87118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8711b push eax */
  push32((uint32_t)(EAX));
  /* 11d8711c call 0x11d8a770 */
  push32(0x11d87121u); f_11d8a770();
  /* 11d87121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87124 jmp 0x11d87152 */
  goto L_11d87152;
L_11d87126:;
  /* 11d87126 mov ecx, dword ptr [0x11db16dc] */
  ECX = (r32((uint32_t)(0x11db16dc)));
  /* 11d8712c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d87132 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d87134 je 0x11d8713d */
  if (C.zf) goto L_11d8713d;
  /* 11d87136 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8713b jmp 0x11d87152 */
  goto L_11d87152;
L_11d8713d:;
  /* 11d8713d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87140 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87143 push edx */
  push32((uint32_t)(EDX));
  /* 11d87144 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87146 mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d8714b push eax */
  push32((uint32_t)(EAX));
  /* 11d8714c call dword ptr [0x11db43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43ac))), 0x11d87152u);
L_11d87152:;
  /* 11d87152 mov esp, ebp */
  ESP = (EBP);
  /* 11d87154 pop ebp */
  EBP = (pop32());
  /* 11d87155 ret  */
  ESPCHK(0x11d870d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x11d87160 (227 bytes, 80 insns) */
void f_11d87160(void) {
  FTRACE(0x11d87160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87160 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87161 mov ebp, esp */
  EBP = (ESP);
  /* 11d87163 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87167 push eax */
  push32((uint32_t)(EAX));
  /* 11d87168 call 0x11d870d0 */
  push32(0x11d8716du); f_11d870d0();
  /* 11d8716d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87172 jne 0x11d8717b */
  if (!C.zf) goto L_11d8717b;
  /* 11d87174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87176 jmp 0x11d8723f */
  goto L_11d8723f;
L_11d8717b:;
  /* 11d8717b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8717d call 0x11d886f0 */
  push32(0x11d87182u); f_11d886f0();
  /* 11d87182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87185 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87188 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8718b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8718e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87191 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d87194 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d87199 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8719c je 0x11d871c0 */
  if (C.zf) goto L_11d871c0;
  /* 11d8719e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d871a1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d871a5 je 0x11d871c0 */
  if (C.zf) goto L_11d871c0;
  /* 11d871a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d871aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d871ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d871b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d871b5 je 0x11d871c0 */
  if (C.zf) goto L_11d871c0;
  /* 11d871b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d871ba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d871be jne 0x11d87233 */
  if (!C.zf) goto L_11d87233;
L_11d871c0:;
  /* 11d871c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d871c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d871c5 push edx */
  push32((uint32_t)(EDX));
  /* 11d871c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d871c9 push eax */
  push32((uint32_t)(EAX));
  /* 11d871ca call 0x11d87080 */
  push32(0x11d871cfu); f_11d87080();
  /* 11d871cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d871d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d871d4 je 0x11d87233 */
  if (C.zf) goto L_11d87233;
  /* 11d871d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d871d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d871dc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d871df jne 0x11d87233 */
  if (!C.zf) goto L_11d87233;
  /* 11d871e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d871e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d871e7 cmp ecx, dword ptr [0x11dafa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d871ed jg 0x11d87233 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d87233;
  /* 11d871ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d871f3 je 0x11d87200 */
  if (C.zf) goto L_11d87200;
  /* 11d871f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d871f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d871fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d871fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d87200:;
  /* 11d87200 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87204 je 0x11d87211 */
  if (C.zf) goto L_11d87211;
  /* 11d87206 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d87209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8720c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8720f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d87211:;
  /* 11d87211 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87215 je 0x11d87222 */
  if (C.zf) goto L_11d87222;
  /* 11d87217 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8721a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8721d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d87220 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d87222:;
  /* 11d87222 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87224 call 0x11d88790 */
  push32(0x11d87229u); f_11d88790();
  /* 11d87229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8722c mov eax, 1 */
  EAX = (0x1u);
  /* 11d87231 jmp 0x11d8723f */
  goto L_11d8723f;
L_11d87233:;
  /* 11d87233 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87235 call 0x11d88790 */
  push32(0x11d8723au); f_11d88790();
  /* 11d8723a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8723d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8723f:;
  /* 11d8723f mov esp, ebp */
  ESP = (EBP);
  /* 11d87241 pop ebp */
  EBP = (pop32());
  /* 11d87242 ret  */
  ESPCHK(0x11d87160u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x11d87250 (28 bytes, 11 insns) */
void f_11d87250(void) {
  FTRACE(0x11d87250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87250 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87251 mov ebp, esp */
  EBP = (ESP);
  /* 11d87253 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87254 mov eax, dword ptr [0x11db3098] */
  EAX = (r32((uint32_t)(0x11db3098)));
  /* 11d87259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8725c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8725f mov dword ptr [0x11db3098], ecx */
  w32((uint32_t)(0x11db3098), (ECX));
  /* 11d87265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87268 mov esp, ebp */
  ESP = (EBP);
  /* 11d8726a pop ebp */
  EBP = (pop32());
  /* 11d8726b ret  */
  ESPCHK(0x11d87250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x11d87270 (362 bytes, 116 insns) */
void f_11d87270(void) {
  FTRACE(0x11d87270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87270 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87271 mov ebp, esp */
  EBP = (ESP);
  /* 11d87273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87276 push ebx */
  push32((uint32_t)(EBX));
  /* 11d87277 push esi */
  push32((uint32_t)(ESI));
  /* 11d87278 push edi */
  push32((uint32_t)(EDI));
  /* 11d87279 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8727d jne 0x11d872aa */
  if (!C.zf) goto L_11d872aa;
L_11d8727f:;
  /* 11d8727f push 0x11dacd2c */
  push32((uint32_t)(0x11dacd2cu));
  /* 11d87284 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d87289 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8728b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8728d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8728f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87291 call 0x11d84e40 */
  push32(0x11d87296u); f_11d84e40();
  /* 11d87296 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87299 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8729c jne 0x11d8729f */
  if (!C.zf) goto L_11d8729f;
  /* 11d8729e int3  */
  x86_unimpl("int3 @ 0x11d8729e");
L_11d8729f:;
  /* 11d8729f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d872a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d872a3 jne 0x11d8727f */
  if (!C.zf) goto L_11d8727f;
  /* 11d872a5 jmp 0x11d873d3 */
  goto L_11d873d3;
L_11d872aa:;
  /* 11d872aa push 9 */
  push32((uint32_t)(0x9u));
  /* 11d872ac call 0x11d886f0 */
  push32(0x11d872b1u); f_11d886f0();
  /* 11d872b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d872b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d872b7 mov edx, dword ptr [0x11db1728] */
  EDX = (r32((uint32_t)(0x11db1728)));
  /* 11d872bd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d872bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d872c6 jmp 0x11d872d1 */
  goto L_11d872d1;
L_11d872c8:;
  /* 11d872c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d872cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d872ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d872d1:;
  /* 11d872d1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d872d5 jge 0x11d872f5 */
  if ((C.sf==C.of)) goto L_11d872f5;
  /* 11d872d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d872da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d872dd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11d872e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d872e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d872eb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11d872f3 jmp 0x11d872c8 */
  goto L_11d872c8;
L_11d872f5:;
  /* 11d872f5 mov edx, dword ptr [0x11db1728] */
  EDX = (r32((uint32_t)(0x11db1728)));
  /* 11d872fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d872fe jmp 0x11d87308 */
  goto L_11d87308;
L_11d87300:;
  /* 11d87300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87303 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d87305 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d87308:;
  /* 11d87308 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8730c je 0x11d873b1 */
  if (C.zf) goto L_11d873b1;
  /* 11d87312 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87315 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d87318 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8731d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8731f jl 0x11d87387 */
  if ((C.sf!=C.of)) goto L_11d87387;
  /* 11d87321 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87324 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d87327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8732d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87330 jge 0x11d87387 */
  if ((C.sf==C.of)) goto L_11d87387;
  /* 11d87332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87335 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d87338 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8733e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87341 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11d87345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87348 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8734b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d8734e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d87354 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87357 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11d8735b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8735e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d87361 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d87366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87369 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11d8736d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87370 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87373 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87376 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d87379 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8737e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87381 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11d87385 jmp 0x11d873ac */
  goto L_11d873ac;
L_11d87387:;
  /* 11d87387 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8738a push edx */
  push32((uint32_t)(EDX));
  /* 11d8738b push 0x11dacd08 */
  push32((uint32_t)(0x11dacd08u));
  /* 11d87390 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87392 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87394 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87396 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87398 call 0x11d84e40 */
  push32(0x11d8739du); f_11d84e40();
  /* 11d8739d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d873a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d873a3 jne 0x11d873a6 */
  if (!C.zf) goto L_11d873a6;
  /* 11d873a5 int3  */
  x86_unimpl("int3 @ 0x11d873a5");
L_11d873a6:;
  /* 11d873a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d873a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d873aa jne 0x11d87387 */
  if (!C.zf) goto L_11d87387;
L_11d873ac:;
  /* 11d873ac jmp 0x11d87300 */
  goto L_11d87300;
L_11d873b1:;
  /* 11d873b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d873b4 mov edx, dword ptr [0x11db1730] */
  EDX = (r32((uint32_t)(0x11db1730)));
  /* 11d873ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11d873bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d873c0 mov ecx, dword ptr [0x11db1724] */
  ECX = (r32((uint32_t)(0x11db1724)));
  /* 11d873c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11d873c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d873cb call 0x11d88790 */
  push32(0x11d873d0u); f_11d88790();
  /* 11d873d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d873d3:;
  /* 11d873d3 pop edi */
  EDI = (pop32());
  /* 11d873d4 pop esi */
  ESI = (pop32());
  /* 11d873d5 pop ebx */
  EBX = (pop32());
  /* 11d873d6 mov esp, ebp */
  ESP = (EBP);
  /* 11d873d8 pop ebp */
  EBP = (pop32());
  /* 11d873d9 ret  */
  ESPCHK(0x11d87270u, _esp0);
  ESP += 4; return;
}

/* FUN_100073e0 @ 0x11d873e0 (291 bytes, 95 insns) */
void f_11d873e0(void) {
  FTRACE(0x11d873e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d873e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d873e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d873e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d873e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d873e7 push esi */
  push32((uint32_t)(ESI));
  /* 11d873e8 push edi */
  push32((uint32_t)(EDI));
  /* 11d873e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d873f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d873f4 je 0x11d87402 */
  if (C.zf) goto L_11d87402;
  /* 11d873f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d873fa je 0x11d87402 */
  if (C.zf) goto L_11d87402;
  /* 11d873fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87400 jne 0x11d87430 */
  if (!C.zf) goto L_11d87430;
L_11d87402:;
  /* 11d87402 push 0x11dacd54 */
  push32((uint32_t)(0x11dacd54u));
  /* 11d87407 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d8740c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8740e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87412 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87414 call 0x11d84e40 */
  push32(0x11d87419u); f_11d84e40();
  /* 11d87419 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8741c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8741f jne 0x11d87422 */
  if (!C.zf) goto L_11d87422;
  /* 11d87421 int3  */
  x86_unimpl("int3 @ 0x11d87421");
L_11d87422:;
  /* 11d87422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87426 jne 0x11d87402 */
  if (!C.zf) goto L_11d87402;
  /* 11d87428 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8742b jmp 0x11d874fc */
  goto L_11d874fc;
L_11d87430:;
  /* 11d87430 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d87437 jmp 0x11d87442 */
  goto L_11d87442;
L_11d87439:;
  /* 11d87439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8743c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8743f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d87442:;
  /* 11d87442 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87446 jge 0x11d874cc */
  if ((C.sf==C.of)) goto L_11d874cc;
  /* 11d8744c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8744f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87455 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87458 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11d8745c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87463 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87466 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11d8746a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8746d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87473 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87476 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11d8747a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8747e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87484 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11d87488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8748b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8748e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87493 jne 0x11d874a2 */
  if (!C.zf) goto L_11d874a2;
  /* 11d87495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8749b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d874a0 je 0x11d874c7 */
  if (C.zf) goto L_11d874c7;
L_11d874a2:;
  /* 11d874a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d874a6 je 0x11d874c7 */
  if (C.zf) goto L_11d874c7;
  /* 11d874a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d874ac jne 0x11d874c0 */
  if (!C.zf) goto L_11d874c0;
  /* 11d874ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d874b2 jne 0x11d874c7 */
  if (!C.zf) goto L_11d874c7;
  /* 11d874b4 mov eax, dword ptr [0x11dafa84] */
  EAX = (r32((uint32_t)(0x11dafa84)));
  /* 11d874b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11d874bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d874be je 0x11d874c7 */
  if (C.zf) goto L_11d874c7;
L_11d874c0:;
  /* 11d874c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11d874c7:;
  /* 11d874c7 jmp 0x11d87439 */
  goto L_11d87439;
L_11d874cc:;
  /* 11d874cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d874cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d874d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11d874d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d874d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d874db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11d874de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d874e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d874e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11d874e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d874ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d874ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11d874f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d874f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d874f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d874fc:;
  /* 11d874fc pop edi */
  EDI = (pop32());
  /* 11d874fd pop esi */
  ESI = (pop32());
  /* 11d874fe pop ebx */
  EBX = (pop32());
  /* 11d874ff mov esp, ebp */
  ESP = (EBP);
  /* 11d87501 pop ebp */
  EBP = (pop32());
  /* 11d87502 ret  */
  ESPCHK(0x11d873e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007510 @ 0x11d87510 (697 bytes, 253 insns) */
void f_11d87510(void) {
  FTRACE(0x11d87510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87510 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87511 mov ebp, esp */
  EBP = (ESP);
  /* 11d87513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87516 push ebx */
  push32((uint32_t)(EBX));
  /* 11d87517 push esi */
  push32((uint32_t)(ESI));
  /* 11d87518 push edi */
  push32((uint32_t)(EDI));
  /* 11d87519 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d87520 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87522 call 0x11d886f0 */
  push32(0x11d87527u); f_11d886f0();
  /* 11d87527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8752a:;
  /* 11d8752a push 0x11dace4c */
  push32((uint32_t)(0x11dace4cu));
  /* 11d8752f push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d87534 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87536 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87538 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8753a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8753c call 0x11d84e40 */
  push32(0x11d87541u); f_11d84e40();
  /* 11d87541 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87544 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87547 jne 0x11d8754a */
  if (!C.zf) goto L_11d8754a;
  /* 11d87549 int3  */
  x86_unimpl("int3 @ 0x11d87549");
L_11d8754a:;
  /* 11d8754a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8754c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8754e jne 0x11d8752a */
  if (!C.zf) goto L_11d8752a;
  /* 11d87550 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87554 je 0x11d8755e */
  if (C.zf) goto L_11d8755e;
  /* 11d87556 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87559 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8755b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d8755e:;
  /* 11d8755e mov eax, dword ptr [0x11db1728] */
  EAX = (r32((uint32_t)(0x11db1728)));
  /* 11d87563 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d87566 jmp 0x11d87570 */
  goto L_11d87570;
L_11d87568:;
  /* 11d87568 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8756b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8756d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d87570:;
  /* 11d87570 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87574 je 0x11d87792 */
  if (C.zf) goto L_11d87792;
  /* 11d8757a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8757d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87580 je 0x11d87792 */
  if (C.zf) goto L_11d87792;
  /* 11d87586 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87589 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d8758c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d87592 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87595 je 0x11d875c4 */
  if (C.zf) goto L_11d875c4;
  /* 11d87597 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8759a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d8759d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d875a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d875a5 je 0x11d875c4 */
  if (C.zf) goto L_11d875c4;
  /* 11d875a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d875aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d875ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d875b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d875b5 jne 0x11d875c9 */
  if (!C.zf) goto L_11d875c9;
  /* 11d875b7 mov ecx, dword ptr [0x11dafa84] */
  ECX = (r32((uint32_t)(0x11dafa84)));
  /* 11d875bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11d875c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d875c2 jne 0x11d875c9 */
  if (!C.zf) goto L_11d875c9;
L_11d875c4:;
  /* 11d875c4 jmp 0x11d8778d */
  goto L_11d8778d;
L_11d875c9:;
  /* 11d875c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d875cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d875d0 je 0x11d87642 */
  if (C.zf) goto L_11d87642;
  /* 11d875d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d875d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d875d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d875d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d875dc push ecx */
  push32((uint32_t)(ECX));
  /* 11d875dd call 0x11d87080 */
  push32(0x11d875e2u); f_11d87080();
  /* 11d875e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d875e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d875e7 jne 0x11d87613 */
  if (!C.zf) goto L_11d87613;
L_11d875e9:;
  /* 11d875e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d875ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d875ef push eax */
  push32((uint32_t)(EAX));
  /* 11d875f0 push 0x11dace38 */
  push32((uint32_t)(0x11dace38u));
  /* 11d875f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d875f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d875f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d875fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d875fd call 0x11d84e40 */
  push32(0x11d87602u); f_11d84e40();
  /* 11d87602 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87605 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87608 jne 0x11d8760b */
  if (!C.zf) goto L_11d8760b;
  /* 11d8760a int3  */
  x86_unimpl("int3 @ 0x11d8760a");
L_11d8760b:;
  /* 11d8760b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8760d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8760f jne 0x11d875e9 */
  if (!C.zf) goto L_11d875e9;
  /* 11d87611 jmp 0x11d87642 */
  goto L_11d87642;
L_11d87613:;
  /* 11d87613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87616 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d87619 push eax */
  push32((uint32_t)(EAX));
  /* 11d8761a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8761d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d87620 push edx */
  push32((uint32_t)(EDX));
  /* 11d87621 push 0x11dace2c */
  push32((uint32_t)(0x11dace2cu));
  /* 11d87626 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87628 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8762a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8762c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8762e call 0x11d84e40 */
  push32(0x11d87633u); f_11d84e40();
  /* 11d87633 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87636 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87639 jne 0x11d8763c */
  if (!C.zf) goto L_11d8763c;
  /* 11d8763b int3  */
  x86_unimpl("int3 @ 0x11d8763b");
L_11d8763c:;
  /* 11d8763c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8763e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87640 jne 0x11d87613 */
  if (!C.zf) goto L_11d87613;
L_11d87642:;
  /* 11d87642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87645 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d87648 push edx */
  push32((uint32_t)(EDX));
  /* 11d87649 push 0x11dace24 */
  push32((uint32_t)(0x11dace24u));
  /* 11d8764e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87650 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87654 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87656 call 0x11d84e40 */
  push32(0x11d8765bu); f_11d84e40();
  /* 11d8765b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8765e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87661 jne 0x11d87664 */
  if (!C.zf) goto L_11d87664;
  /* 11d87663 int3  */
  x86_unimpl("int3 @ 0x11d87663");
L_11d87664:;
  /* 11d87664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87668 jne 0x11d87642 */
  if (!C.zf) goto L_11d87642;
  /* 11d8766a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8766d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d87670 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d87676 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87679 jne 0x11d876ec */
  if (!C.zf) goto L_11d876ec;
L_11d8767b:;
  /* 11d8767b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8767e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d87681 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87685 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d87688 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d8768b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d87690 push eax */
  push32((uint32_t)(EAX));
  /* 11d87691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87694 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87697 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87698 push 0x11dacdf0 */
  push32((uint32_t)(0x11dacdf0u));
  /* 11d8769d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8769f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d876a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d876a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d876a5 call 0x11d84e40 */
  push32(0x11d876aau); f_11d84e40();
  /* 11d876aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d876ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d876b0 jne 0x11d876b3 */
  if (!C.zf) goto L_11d876b3;
  /* 11d876b2 int3  */
  x86_unimpl("int3 @ 0x11d876b2");
L_11d876b3:;
  /* 11d876b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d876b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d876b7 jne 0x11d8767b */
  if (!C.zf) goto L_11d8767b;
  /* 11d876b9 cmp dword ptr [0x11db3098], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3098))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d876c0 je 0x11d876db */
  if (C.zf) goto L_11d876db;
  /* 11d876c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d876c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d876c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d876c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d876cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d876cf push edx */
  push32((uint32_t)(EDX));
  /* 11d876d0 call dword ptr [0x11db3098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db3098))), 0x11d876d6u);
  /* 11d876d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d876d9 jmp 0x11d876e7 */
  goto L_11d876e7;
L_11d876db:;
  /* 11d876db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d876de push eax */
  push32((uint32_t)(EAX));
  /* 11d876df call 0x11d877d0 */
  push32(0x11d876e4u); f_11d877d0();
  /* 11d876e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d876e7:;
  /* 11d876e7 jmp 0x11d8778d */
  goto L_11d8778d;
L_11d876ec:;
  /* 11d876ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d876ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d876f3 jne 0x11d87732 */
  if (!C.zf) goto L_11d87732;
L_11d876f5:;
  /* 11d876f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d876f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d876fb push eax */
  push32((uint32_t)(EAX));
  /* 11d876fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d876ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87702 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87703 push 0x11dacdc8 */
  push32((uint32_t)(0x11dacdc8u));
  /* 11d87708 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8770a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8770c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8770e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87710 call 0x11d84e40 */
  push32(0x11d87715u); f_11d84e40();
  /* 11d87715 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87718 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8771b jne 0x11d8771e */
  if (!C.zf) goto L_11d8771e;
  /* 11d8771d int3  */
  x86_unimpl("int3 @ 0x11d8771d");
L_11d8771e:;
  /* 11d8771e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d87720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d87722 jne 0x11d876f5 */
  if (!C.zf) goto L_11d876f5;
  /* 11d87724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87727 push eax */
  push32((uint32_t)(EAX));
  /* 11d87728 call 0x11d877d0 */
  push32(0x11d8772du); f_11d877d0();
  /* 11d8772d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87730 jmp 0x11d8778d */
  goto L_11d8778d;
L_11d87732:;
  /* 11d87732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87735 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d87738 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8773e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87741 jne 0x11d8778d */
  if (!C.zf) goto L_11d8778d;
L_11d87743:;
  /* 11d87743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87746 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d87749 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8774a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8774d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d87750 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d87753 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d87758 push eax */
  push32((uint32_t)(EAX));
  /* 11d87759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8775c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8775f push ecx */
  push32((uint32_t)(ECX));
  /* 11d87760 push 0x11dacd94 */
  push32((uint32_t)(0x11dacd94u));
  /* 11d87765 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87767 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87769 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8776b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8776d call 0x11d84e40 */
  push32(0x11d87772u); f_11d84e40();
  /* 11d87772 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87775 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87778 jne 0x11d8777b */
  if (!C.zf) goto L_11d8777b;
  /* 11d8777a int3  */
  x86_unimpl("int3 @ 0x11d8777a");
L_11d8777b:;
  /* 11d8777b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8777d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8777f jne 0x11d87743 */
  if (!C.zf) goto L_11d87743;
  /* 11d87781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87784 push eax */
  push32((uint32_t)(EAX));
  /* 11d87785 call 0x11d877d0 */
  push32(0x11d8778au); f_11d877d0();
  /* 11d8778a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8778d:;
  /* 11d8778d jmp 0x11d87568 */
  goto L_11d87568;
L_11d87792:;
  /* 11d87792 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87794 call 0x11d88790 */
  push32(0x11d87799u); f_11d88790();
  /* 11d87799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8779c:;
  /* 11d8779c push 0x11dacd7c */
  push32((uint32_t)(0x11dacd7cu));
  /* 11d877a1 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d877a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d877a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d877aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d877ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11d877ae call 0x11d84e40 */
  push32(0x11d877b3u); f_11d84e40();
  /* 11d877b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d877b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d877b9 jne 0x11d877bc */
  if (!C.zf) goto L_11d877bc;
  /* 11d877bb int3  */
  x86_unimpl("int3 @ 0x11d877bb");
L_11d877bc:;
  /* 11d877bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d877be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d877c0 jne 0x11d8779c */
  if (!C.zf) goto L_11d8779c;
  /* 11d877c2 pop edi */
  EDI = (pop32());
  /* 11d877c3 pop esi */
  ESI = (pop32());
  /* 11d877c4 pop ebx */
  EBX = (pop32());
  /* 11d877c5 mov esp, ebp */
  ESP = (EBP);
  /* 11d877c7 pop ebp */
  EBP = (pop32());
  /* 11d877c8 ret  */
  ESPCHK(0x11d87510u, _esp0);
  ESP += 4; return;
}

/* FUN_100077d0 @ 0x11d877d0 (276 bytes, 89 insns) */
void f_11d877d0(void) {
  FTRACE(0x11d877d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d877d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d877d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d877d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d877d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d877d7 push esi */
  push32((uint32_t)(ESI));
  /* 11d877d8 push edi */
  push32((uint32_t)(EDI));
  /* 11d877d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11d877e0 jmp 0x11d877eb */
  goto L_11d877eb;
L_11d877e2:;
  /* 11d877e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d877e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d877e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11d877eb:;
  /* 11d877eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d877ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d877f2 jge 0x11d877ff */
  if ((C.sf==C.of)) goto L_11d877ff;
  /* 11d877f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d877f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d877fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11d877fd jmp 0x11d87806 */
  goto L_11d87806;
L_11d877ff:;
  /* 11d877ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11d87806:;
  /* 11d87806 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d87809 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8780c jge 0x11d878ac */
  if ((C.sf==C.of)) goto L_11d878ac;
  /* 11d87812 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87815 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87818 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11d8781b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11d8781e cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87825 jle 0x11d87843 */
  if ((C.zf||C.sf!=C.of)) goto L_11d87843;
  /* 11d87827 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11d8782c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d8782f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d87835 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87836 call 0x11d8c420 */
  push32(0x11d8783bu); f_11d8c420();
  /* 11d8783b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8783e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11d87841 jmp 0x11d87860 */
  goto L_11d87860;
L_11d87843:;
  /* 11d87843 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d87846 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8784c mov eax, dword ptr [0x11dafdb8] */
  EAX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d87851 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d87853 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d87857 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8785d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11d87860:;
  /* 11d87860 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87864 je 0x11d87874 */
  if (C.zf) goto L_11d87874;
  /* 11d87866 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d87869 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8786f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11d87872 jmp 0x11d8787b */
  goto L_11d8787b;
L_11d87874:;
  /* 11d87874 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11d8787b:;
  /* 11d8787b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d8787e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11d87881 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11d87885 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d87888 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8788e push edx */
  push32((uint32_t)(EDX));
  /* 11d8788f push 0x11dace70 */
  push32((uint32_t)(0x11dace70u));
  /* 11d87894 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d87897 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8789a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11d8789e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8789f call 0x11d8c320 */
  push32(0x11d878a4u); f_11d8c320();
  /* 11d878a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d878a7 jmp 0x11d877e2 */
  goto L_11d877e2;
L_11d878ac:;
  /* 11d878ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d878af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11d878b4:;
  /* 11d878b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11d878b7 push eax */
  push32((uint32_t)(EAX));
  /* 11d878b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11d878bb push ecx */
  push32((uint32_t)(ECX));
  /* 11d878bc push 0x11dace60 */
  push32((uint32_t)(0x11dace60u));
  /* 11d878c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d878c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d878c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d878c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d878c9 call 0x11d84e40 */
  push32(0x11d878ceu); f_11d84e40();
  /* 11d878ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d878d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d878d4 jne 0x11d878d7 */
  if (!C.zf) goto L_11d878d7;
  /* 11d878d6 int3  */
  x86_unimpl("int3 @ 0x11d878d6");
L_11d878d7:;
  /* 11d878d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d878d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d878db jne 0x11d878b4 */
  if (!C.zf) goto L_11d878b4;
  /* 11d878dd pop edi */
  EDI = (pop32());
  /* 11d878de pop esi */
  ESI = (pop32());
  /* 11d878df pop ebx */
  EBX = (pop32());
  /* 11d878e0 mov esp, ebp */
  ESP = (EBP);
  /* 11d878e2 pop ebp */
  EBP = (pop32());
  /* 11d878e3 ret  */
  ESPCHK(0x11d877d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x11d878f0 (116 bytes, 46 insns) */
void f_11d878f0(void) {
  FTRACE(0x11d878f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d878f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d878f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d878f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d878f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d878f7 push esi */
  push32((uint32_t)(ESI));
  /* 11d878f8 push edi */
  push32((uint32_t)(EDI));
  /* 11d878f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11d878fc push eax */
  push32((uint32_t)(EAX));
  /* 11d878fd call 0x11d87270 */
  push32(0x11d87902u); f_11d87270();
  /* 11d87902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87905 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87909 jne 0x11d87924 */
  if (!C.zf) goto L_11d87924;
  /* 11d8790b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8790f jne 0x11d87924 */
  if (!C.zf) goto L_11d87924;
  /* 11d87911 mov ecx, dword ptr [0x11dafa84] */
  ECX = (r32((uint32_t)(0x11dafa84)));
  /* 11d87917 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8791a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8791c je 0x11d8795b */
  if (C.zf) goto L_11d8795b;
  /* 11d8791e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87922 je 0x11d8795b */
  if (C.zf) goto L_11d8795b;
L_11d87924:;
  /* 11d87924 push 0x11dace78 */
  push32((uint32_t)(0x11dace78u));
  /* 11d87929 push 0x11dac844 */
  push32((uint32_t)(0x11dac844u));
  /* 11d8792e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87930 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87936 call 0x11d84e40 */
  push32(0x11d8793bu); f_11d84e40();
  /* 11d8793b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8793e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87941 jne 0x11d87944 */
  if (!C.zf) goto L_11d87944;
  /* 11d87943 int3  */
  x86_unimpl("int3 @ 0x11d87943");
L_11d87944:;
  /* 11d87944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d87946 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d87948 jne 0x11d87924 */
  if (!C.zf) goto L_11d87924;
  /* 11d8794a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8794c call 0x11d87510 */
  push32(0x11d87951u); f_11d87510();
  /* 11d87951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87954 mov eax, 1 */
  EAX = (0x1u);
  /* 11d87959 jmp 0x11d8795d */
  goto L_11d8795d;
L_11d8795b:;
  /* 11d8795b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8795d:;
  /* 11d8795d pop edi */
  EDI = (pop32());
  /* 11d8795e pop esi */
  ESI = (pop32());
  /* 11d8795f pop ebx */
  EBX = (pop32());
  /* 11d87960 mov esp, ebp */
  ESP = (EBP);
  /* 11d87962 pop ebp */
  EBP = (pop32());
  /* 11d87963 ret  */
  ESPCHK(0x11d878f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x11d87970 (197 bytes, 79 insns) */
void f_11d87970(void) {
  FTRACE(0x11d87970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87970 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87971 mov ebp, esp */
  EBP = (ESP);
  /* 11d87973 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87974 push ebx */
  push32((uint32_t)(EBX));
  /* 11d87975 push esi */
  push32((uint32_t)(ESI));
  /* 11d87976 push edi */
  push32((uint32_t)(EDI));
  /* 11d87977 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8797b jne 0x11d87982 */
  if (!C.zf) goto L_11d87982;
  /* 11d8797d jmp 0x11d87a2e */
  goto L_11d87a2e;
L_11d87982:;
  /* 11d87982 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d87989 jmp 0x11d87994 */
  goto L_11d87994;
L_11d8798b:;
  /* 11d8798b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8798e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87991 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d87994:;
  /* 11d87994 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87998 jge 0x11d879de */
  if ((C.sf==C.of)) goto L_11d879de;
L_11d8799a:;
  /* 11d8799a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8799d mov edx, dword ptr [ecx*4 + 0x11dafa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafa94)));
  /* 11d879a4 push edx */
  push32((uint32_t)(EDX));
  /* 11d879a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d879a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d879ab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11d879af push edx */
  push32((uint32_t)(EDX));
  /* 11d879b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d879b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d879b6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11d879ba push edx */
  push32((uint32_t)(EDX));
  /* 11d879bb push 0x11daced4 */
  push32((uint32_t)(0x11daced4u));
  /* 11d879c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879c8 call 0x11d84e40 */
  push32(0x11d879cdu); f_11d84e40();
  /* 11d879cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d879d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d879d3 jne 0x11d879d6 */
  if (!C.zf) goto L_11d879d6;
  /* 11d879d5 int3  */
  x86_unimpl("int3 @ 0x11d879d5");
L_11d879d6:;
  /* 11d879d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d879d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d879da jne 0x11d8799a */
  if (!C.zf) goto L_11d8799a;
  /* 11d879dc jmp 0x11d8798b */
  goto L_11d8798b;
L_11d879de:;
  /* 11d879de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d879e1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11d879e4 push edx */
  push32((uint32_t)(EDX));
  /* 11d879e5 push 0x11daceb0 */
  push32((uint32_t)(0x11daceb0u));
  /* 11d879ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d879f2 call 0x11d84e40 */
  push32(0x11d879f7u); f_11d84e40();
  /* 11d879f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d879fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d879fd jne 0x11d87a00 */
  if (!C.zf) goto L_11d87a00;
  /* 11d879ff int3  */
  x86_unimpl("int3 @ 0x11d879ff");
L_11d87a00:;
  /* 11d87a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87a04 jne 0x11d879de */
  if (!C.zf) goto L_11d879de;
L_11d87a06:;
  /* 11d87a06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87a09 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11d87a0c push edx */
  push32((uint32_t)(EDX));
  /* 11d87a0d push 0x11dace90 */
  push32((uint32_t)(0x11dace90u));
  /* 11d87a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87a1a call 0x11d84e40 */
  push32(0x11d87a1fu); f_11d84e40();
  /* 11d87a1f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87a22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87a25 jne 0x11d87a28 */
  if (!C.zf) goto L_11d87a28;
  /* 11d87a27 int3  */
  x86_unimpl("int3 @ 0x11d87a27");
L_11d87a28:;
  /* 11d87a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87a2c jne 0x11d87a06 */
  if (!C.zf) goto L_11d87a06;
L_11d87a2e:;
  /* 11d87a2e pop edi */
  EDI = (pop32());
  /* 11d87a2f pop esi */
  ESI = (pop32());
  /* 11d87a30 pop ebx */
  EBX = (pop32());
  /* 11d87a31 mov esp, ebp */
  ESP = (EBP);
  /* 11d87a33 pop ebp */
  EBP = (pop32());
  /* 11d87a34 ret  */
  ESPCHK(0x11d87970u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a40 @ 0x11d87a40 (329 bytes, 102 insns) */
void f_11d87a40(void) {
  FTRACE(0x11d87a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87a41 mov ebp, esp */
  EBP = (ESP);
  /* 11d87a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87a46 cmp dword ptr [0x11db3210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87a4d jne 0x11d87a54 */
  if (!C.zf) goto L_11d87a54;
  /* 11d87a4f call 0x11d8ccc0 */
  push32(0x11d87a54u); f_11d8ccc0();
L_11d87a54:;
  /* 11d87a54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d87a5b mov eax, dword ptr [0x11db16c4] */
  EAX = (r32((uint32_t)(0x11db16c4)));
  /* 11d87a60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d87a63:;
  /* 11d87a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87a66 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d87a69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d87a6b je 0x11d87a99 */
  if (C.zf) goto L_11d87a99;
  /* 11d87a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87a70 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87a73 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87a76 je 0x11d87a81 */
  if (C.zf) goto L_11d87a81;
  /* 11d87a78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87a7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87a7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d87a81:;
  /* 11d87a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87a84 push eax */
  push32((uint32_t)(EAX));
  /* 11d87a85 call 0x11d89620 */
  push32(0x11d87a8au); f_11d89620();
  /* 11d87a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87a8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87a90 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d87a94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d87a97 jmp 0x11d87a63 */
  goto L_11d87a63;
L_11d87a99:;
  /* 11d87a99 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11d87a9b push 0x11dacef4 */
  push32((uint32_t)(0x11dacef4u));
  /* 11d87aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d87aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87aa5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11d87aac push ecx */
  push32((uint32_t)(ECX));
  /* 11d87aad call 0x11d85ad0 */
  push32(0x11d87ab2u); f_11d85ad0();
  /* 11d87ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ab5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d87ab8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87abb mov dword ptr [0x11db16f8], edx */
  w32((uint32_t)(0x11db16f8), (EDX));
  /* 11d87ac1 cmp dword ptr [0x11db16f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87ac8 jne 0x11d87ad4 */
  if (!C.zf) goto L_11d87ad4;
  /* 11d87aca push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87acc call 0x11d84950 */
  push32(0x11d87ad1u); f_11d84950();
  /* 11d87ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d87ad4:;
  /* 11d87ad4 mov eax, dword ptr [0x11db16c4] */
  EAX = (r32((uint32_t)(0x11db16c4)));
  /* 11d87ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d87adc jmp 0x11d87ae7 */
  goto L_11d87ae7;
L_11d87ade:;
  /* 11d87ade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87ae1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ae4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d87ae7:;
  /* 11d87ae7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87aea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d87aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87aef je 0x11d87b57 */
  if (C.zf) goto L_11d87b57;
  /* 11d87af1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87af4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87af5 call 0x11d89620 */
  push32(0x11d87afau); f_11d89620();
  /* 11d87afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87afd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87b00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d87b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d87b09 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87b0c je 0x11d87b55 */
  if (C.zf) goto L_11d87b55;
  /* 11d87b0e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11d87b10 push 0x11dacef4 */
  push32((uint32_t)(0x11dacef4u));
  /* 11d87b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d87b17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87b1a push ecx */
  push32((uint32_t)(ECX));
  /* 11d87b1b call 0x11d85ad0 */
  push32(0x11d87b20u); f_11d85ad0();
  /* 11d87b20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87b23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87b26 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d87b28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87b2b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87b2e jne 0x11d87b3a */
  if (!C.zf) goto L_11d87b3a;
  /* 11d87b30 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d87b32 call 0x11d84950 */
  push32(0x11d87b37u); f_11d84950();
  /* 11d87b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d87b3a:;
  /* 11d87b3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87b3d push ecx */
  push32((uint32_t)(ECX));
  /* 11d87b3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87b41 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d87b43 push eax */
  push32((uint32_t)(EAX));
  /* 11d87b44 call 0x11d897a0 */
  push32(0x11d87b49u); f_11d897a0();
  /* 11d87b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87b4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87b4f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87b52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d87b55:;
  /* 11d87b55 jmp 0x11d87ade */
  goto L_11d87ade;
L_11d87b57:;
  /* 11d87b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d87b59 mov edx, dword ptr [0x11db16c4] */
  EDX = (r32((uint32_t)(0x11db16c4)));
  /* 11d87b5f push edx */
  push32((uint32_t)(EDX));
  /* 11d87b60 call 0x11d86560 */
  push32(0x11d87b65u); f_11d86560();
  /* 11d87b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87b68 mov dword ptr [0x11db16c4], 0 */
  w32((uint32_t)(0x11db16c4), (0x0u));
  /* 11d87b72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87b75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d87b7b mov dword ptr [0x11db3200], 1 */
  w32((uint32_t)(0x11db3200), (0x1u));
  /* 11d87b85 mov esp, ebp */
  ESP = (EBP);
  /* 11d87b87 pop ebp */
  EBP = (pop32());
  /* 11d87b88 ret  */
  ESPCHK(0x11d87a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b90 @ 0x11d87b90 (216 bytes, 69 insns) */
void f_11d87b90(void) {
  FTRACE(0x11d87b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87b91 mov ebp, esp */
  EBP = (ESP);
  /* 11d87b93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87b96 cmp dword ptr [0x11db3210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87b9d jne 0x11d87ba4 */
  if (!C.zf) goto L_11d87ba4;
  /* 11d87b9f call 0x11d8ccc0 */
  push32(0x11d87ba4u); f_11d8ccc0();
L_11d87ba4:;
  /* 11d87ba4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d87ba9 push 0x11db1734 */
  push32((uint32_t)(0x11db1734u));
  /* 11d87bae push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87bb0 call dword ptr [0x11db43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c8))), 0x11d87bb6u);
  /* 11d87bb6 mov dword ptr [0x11db1708], 0x11db1734 */
  w32((uint32_t)(0x11db1708), (0x11db1734u));
  /* 11d87bc0 mov eax, dword ptr [0x11db322c] */
  EAX = (r32((uint32_t)(0x11db322c)));
  /* 11d87bc5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87bc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d87bca jne 0x11d87bd7 */
  if (!C.zf) goto L_11d87bd7;
  /* 11d87bcc mov edx, dword ptr [0x11db1708] */
  EDX = (r32((uint32_t)(0x11db1708)));
  /* 11d87bd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d87bd5 jmp 0x11d87bdf */
  goto L_11d87bdf;
L_11d87bd7:;
  /* 11d87bd7 mov eax, dword ptr [0x11db322c] */
  EAX = (r32((uint32_t)(0x11db322c)));
  /* 11d87bdc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11d87bdf:;
  /* 11d87bdf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d87be2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d87be5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11d87be8 push edx */
  push32((uint32_t)(EDX));
  /* 11d87be9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d87bec push eax */
  push32((uint32_t)(EAX));
  /* 11d87bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d87bf1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87bf5 call 0x11d87c70 */
  push32(0x11d87bfau); f_11d87c70();
  /* 11d87bfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87bfd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11d87c02 push 0x11dacf00 */
  push32((uint32_t)(0x11dacf00u));
  /* 11d87c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d87c09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87c0f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11d87c12 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87c13 call 0x11d85ad0 */
  push32(0x11d87c18u); f_11d85ad0();
  /* 11d87c18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87c1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d87c1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87c22 jne 0x11d87c2e */
  if (!C.zf) goto L_11d87c2e;
  /* 11d87c24 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d87c26 call 0x11d84950 */
  push32(0x11d87c2bu); f_11d84950();
  /* 11d87c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d87c2e:;
  /* 11d87c2e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11d87c31 push edx */
  push32((uint32_t)(EDX));
  /* 11d87c32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d87c35 push eax */
  push32((uint32_t)(EAX));
  /* 11d87c36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87c39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87c3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11d87c3f push eax */
  push32((uint32_t)(EAX));
  /* 11d87c40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11d87c44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87c47 push edx */
  push32((uint32_t)(EDX));
  /* 11d87c48 call 0x11d87c70 */
  push32(0x11d87c4du); f_11d87c70();
  /* 11d87c4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87c50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87c53 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87c56 mov dword ptr [0x11db16ec], eax */
  w32((uint32_t)(0x11db16ec), (EAX));
  /* 11d87c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d87c5e mov dword ptr [0x11db16f0], ecx */
  w32((uint32_t)(0x11db16f0), (ECX));
  /* 11d87c64 mov esp, ebp */
  ESP = (EBP);
  /* 11d87c66 pop ebp */
  EBP = (pop32());
  /* 11d87c67 ret  */
  ESPCHK(0x11d87b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x11d87c70 (1060 bytes, 360 insns) */
void f_11d87c70(void) {
  FTRACE(0x11d87c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d87c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d87c71 mov ebp, esp */
  EBP = (ESP);
  /* 11d87c73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87c76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87c79 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d87c7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d87c82 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11d87c88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d87c8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d87c8e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87c92 je 0x11d87ca5 */
  if (C.zf) goto L_11d87ca5;
  /* 11d87c94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87c97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87c9a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d87c9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87c9f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ca2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11d87ca5:;
  /* 11d87ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87ca8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87cab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87cae jne 0x11d87d7d */
  if (!C.zf) goto L_11d87d7d;
L_11d87cb4:;
  /* 11d87cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87cb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87cba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d87cbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87cc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87cc3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87cc6 je 0x11d87d42 */
  if (C.zf) goto L_11d87d42;
  /* 11d87cc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87ccb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d87cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87cd0 je 0x11d87d42 */
  if (C.zf) goto L_11d87d42;
  /* 11d87cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87cd5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d87cd7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d87cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87cdb mov al, byte ptr [edx + 0x11db2f61] */
  AL = (r8((uint32_t)(EDX + 0x11db2f61)));
  /* 11d87ce1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d87ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87ce6 je 0x11d87d17 */
  if (C.zf) goto L_11d87d17;
  /* 11d87ce8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87ceb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d87ced add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87cf0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87cf3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d87cf5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87cf9 je 0x11d87d17 */
  if (C.zf) goto L_11d87d17;
  /* 11d87cfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87cfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87d01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d87d03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d87d05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d87d0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87d11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d87d17:;
  /* 11d87d17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87d1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d87d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87d22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d87d24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87d28 je 0x11d87d3d */
  if (C.zf) goto L_11d87d3d;
  /* 11d87d2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87d30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d87d32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d87d34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d3a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d87d3d:;
  /* 11d87d3d jmp 0x11d87cb4 */
  goto L_11d87cb4;
L_11d87d42:;
  /* 11d87d42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87d45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d87d47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d4a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87d4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d87d4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87d53 je 0x11d87d64 */
  if (C.zf) goto L_11d87d64;
  /* 11d87d55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d58 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d87d5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d61 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11d87d64:;
  /* 11d87d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87d67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87d6a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87d6d jne 0x11d87d78 */
  if (!C.zf) goto L_11d87d78;
  /* 11d87d6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87d72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d87d78:;
  /* 11d87d78 jmp 0x11d87e4c */
  goto L_11d87e4c;
L_11d87d7d:;
  /* 11d87d7d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87d80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d87d82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87d85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87d88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d87d8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87d8e je 0x11d87da3 */
  if (C.zf) goto L_11d87da3;
  /* 11d87d90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87d96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d87d98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d87d9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87d9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87da0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d87da3:;
  /* 11d87da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d87da8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11d87dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87dae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87db1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d87db4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87db7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d87dbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d87dbf mov dl, byte ptr [ecx + 0x11db2f61] */
  DL = (r8((uint32_t)(ECX + 0x11db2f61)));
  /* 11d87dc5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d87dc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d87dca je 0x11d87dfb */
  if (C.zf) goto L_11d87dfb;
  /* 11d87dcc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87dcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d87dd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87dd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87dd7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d87dd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87ddd je 0x11d87df2 */
  if (C.zf) goto L_11d87df2;
  /* 11d87ddf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87de2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87de5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d87de7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d87de9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87dec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87def mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d87df2:;
  /* 11d87df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87df5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87df8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d87dfb:;
  /* 11d87dfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87dfe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d87e04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87e07 je 0x11d87e27 */
  if (C.zf) goto L_11d87e27;
  /* 11d87e09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87e0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d87e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87e13 je 0x11d87e27 */
  if (C.zf) goto L_11d87e27;
  /* 11d87e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87e18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d87e1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87e21 jne 0x11d87d7d */
  if (!C.zf) goto L_11d87d7d;
L_11d87e27:;
  /* 11d87e27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d87e2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d87e30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d87e32 jne 0x11d87e3f */
  if (!C.zf) goto L_11d87e3f;
  /* 11d87e34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87e37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87e3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d87e3d jmp 0x11d87e4c */
  goto L_11d87e4c;
L_11d87e3f:;
  /* 11d87e3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87e43 je 0x11d87e4c */
  if (C.zf) goto L_11d87e4c;
  /* 11d87e45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87e48 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11d87e4c:;
  /* 11d87e4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11d87e53:;
  /* 11d87e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d87e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87e5b je 0x11d87e7e */
  if (C.zf) goto L_11d87e7e;
L_11d87e5d:;
  /* 11d87e5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87e60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d87e63 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87e66 je 0x11d87e73 */
  if (C.zf) goto L_11d87e73;
  /* 11d87e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87e6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87e6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87e71 jne 0x11d87e7e */
  if (!C.zf) goto L_11d87e7e;
L_11d87e73:;
  /* 11d87e73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87e76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87e79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d87e7c jmp 0x11d87e5d */
  goto L_11d87e5d;
L_11d87e7e:;
  /* 11d87e7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87e81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87e84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d87e86 jne 0x11d87e8d */
  if (!C.zf) goto L_11d87e8d;
  /* 11d87e88 jmp 0x11d8806b */
  goto L_11d8806b;
L_11d87e8d:;
  /* 11d87e8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87e91 je 0x11d87ea4 */
  if (C.zf) goto L_11d87ea4;
  /* 11d87e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87e96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87e99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d87e9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d87e9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ea1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d87ea4:;
  /* 11d87ea4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d87ea7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d87ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87eac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d87eaf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d87eb1:;
  /* 11d87eb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d87eb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d87ebf:;
  /* 11d87ebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87ec2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d87ec5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87ec8 jne 0x11d87ede */
  if (!C.zf) goto L_11d87ede;
  /* 11d87eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87ecd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ed0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d87ed3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87ed6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ed9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d87edc jmp 0x11d87ebf */
  goto L_11d87ebf;
L_11d87ede:;
  /* 11d87ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87ee1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87ee4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87ee7 jne 0x11d87f3a */
  if (!C.zf) goto L_11d87f3a;
  /* 11d87ee9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87eec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d87eee mov ecx, 2 */
  ECX = (0x2u);
  /* 11d87ef3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d87ef5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d87ef7 jne 0x11d87f32 */
  if (!C.zf) goto L_11d87f32;
  /* 11d87ef9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87efd je 0x11d87f1f */
  if (C.zf) goto L_11d87f1f;
  /* 11d87eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87f02 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d87f06 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f09 jne 0x11d87f16 */
  if (!C.zf) goto L_11d87f16;
  /* 11d87f0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87f0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87f11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d87f14 jmp 0x11d87f1d */
  goto L_11d87f1d;
L_11d87f16:;
  /* 11d87f16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d87f1d:;
  /* 11d87f1d jmp 0x11d87f26 */
  goto L_11d87f26;
L_11d87f1f:;
  /* 11d87f1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d87f26:;
  /* 11d87f26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d87f28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f2c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11d87f2f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d87f32:;
  /* 11d87f32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87f35 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d87f37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d87f3a:;
  /* 11d87f3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87f3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d87f40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d87f43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d87f46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d87f48 je 0x11d87f6e */
  if (C.zf) goto L_11d87f6e;
  /* 11d87f4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f4e je 0x11d87f5f */
  if (C.zf) goto L_11d87f5f;
  /* 11d87f50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87f53 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11d87f56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87f59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87f5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11d87f5f:;
  /* 11d87f5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87f62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d87f64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87f67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87f6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d87f6c jmp 0x11d87f3a */
  goto L_11d87f3a;
L_11d87f6e:;
  /* 11d87f6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87f71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d87f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d87f76 je 0x11d87f94 */
  if (C.zf) goto L_11d87f94;
  /* 11d87f78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f7c jne 0x11d87f99 */
  if (!C.zf) goto L_11d87f99;
  /* 11d87f7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87f81 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d87f84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f87 je 0x11d87f94 */
  if (C.zf) goto L_11d87f94;
  /* 11d87f89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87f8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d87f8f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f92 jne 0x11d87f99 */
  if (!C.zf) goto L_11d87f99;
L_11d87f94:;
  /* 11d87f94 jmp 0x11d88044 */
  goto L_11d88044;
L_11d87f99:;
  /* 11d87f99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87f9d je 0x11d88036 */
  if (C.zf) goto L_11d88036;
  /* 11d87fa3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d87fa7 je 0x11d87ffd */
  if (C.zf) goto L_11d87ffd;
  /* 11d87fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d87fae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d87fb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d87fb2 mov cl, byte ptr [eax + 0x11db2f61] */
  CL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d87fb8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d87fbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d87fbd je 0x11d87fe8 */
  if (C.zf) goto L_11d87fe8;
  /* 11d87fbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87fc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87fc5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d87fc7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d87fc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87fcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87fcf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11d87fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87fd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d87fdb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87fde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d87fe0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87fe3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d87fe6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d87fe8:;
  /* 11d87fe8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87feb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d87fee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d87ff0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d87ff2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d87ff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d87ff8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d87ffb jmp 0x11d88029 */
  goto L_11d88029;
L_11d87ffd:;
  /* 11d87ffd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88002 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d88004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88006 mov cl, byte ptr [eax + 0x11db2f61] */
  CL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d8800c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8800f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d88011 je 0x11d88029 */
  if (C.zf) goto L_11d88029;
  /* 11d88013 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88016 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88019 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8801c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8801f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d88021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88024 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d88027 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d88029:;
  /* 11d88029 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8802c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8802e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88031 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d88034 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d88036:;
  /* 11d88036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88039 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8803c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8803f jmp 0x11d87eb1 */
  goto L_11d87eb1;
L_11d88044:;
  /* 11d88044 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88048 je 0x11d88059 */
  if (C.zf) goto L_11d88059;
  /* 11d8804a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8804d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d88050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d88053 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88056 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11d88059:;
  /* 11d88059 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8805c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8805e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d88064 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d88066 jmp 0x11d87e53 */
  goto L_11d87e53;
L_11d8806b:;
  /* 11d8806b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8806f je 0x11d88083 */
  if (C.zf) goto L_11d88083;
  /* 11d88071 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d88074 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d8807a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8807d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88080 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d88083:;
  /* 11d88083 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d88086 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d88088 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8808b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8808e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d88090 mov esp, ebp */
  ESP = (EBP);
  /* 11d88092 pop ebp */
  EBP = (pop32());
  /* 11d88093 ret  */
  ESPCHK(0x11d87c70u, _esp0);
  ESP += 4; return;
}

/* FUN_100080a0 @ 0x11d880a0 (537 bytes, 173 insns) */
void f_11d880a0(void) {
  FTRACE(0x11d880a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d880a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d880a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d880a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d880a6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11d880ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11d880b4 cmp dword ptr [0x11db1838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d880bb jne 0x11d880fa */
  if (!C.zf) goto L_11d880fa;
  /* 11d880bd call dword ptr [0x11db4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4360))), 0x11d880c3u);
  /* 11d880c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d880c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d880ca je 0x11d880d8 */
  if (C.zf) goto L_11d880d8;
  /* 11d880cc mov dword ptr [0x11db1838], 1 */
  w32((uint32_t)(0x11db1838), (0x1u));
  /* 11d880d6 jmp 0x11d880fa */
  goto L_11d880fa;
L_11d880d8:;
  /* 11d880d8 call dword ptr [0x11db4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4364))), 0x11d880deu);
  /* 11d880de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d880e1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d880e5 je 0x11d880f3 */
  if (C.zf) goto L_11d880f3;
  /* 11d880e7 mov dword ptr [0x11db1838], 2 */
  w32((uint32_t)(0x11db1838), (0x2u));
  /* 11d880f1 jmp 0x11d880fa */
  goto L_11d880fa;
L_11d880f3:;
  /* 11d880f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d880f5 jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d880fa:;
  /* 11d880fa cmp dword ptr [0x11db1838], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1838))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88101 jne 0x11d881fe */
  if (!C.zf) goto L_11d881fe;
  /* 11d88107 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8810b jne 0x11d88123 */
  if (!C.zf) goto L_11d88123;
  /* 11d8810d call dword ptr [0x11db4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4360))), 0x11d88113u);
  /* 11d88113 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d88116 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8811a jne 0x11d88123 */
  if (!C.zf) goto L_11d88123;
  /* 11d8811c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8811e jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d88123:;
  /* 11d88123 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d88126 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d88129:;
  /* 11d88129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8812c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8812e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d88131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d88133 je 0x11d88155 */
  if (C.zf) goto L_11d88155;
  /* 11d88135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88138 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8813b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8813e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88141 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88143 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d88146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d88148 jne 0x11d88153 */
  if (!C.zf) goto L_11d88153;
  /* 11d8814a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8814d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88150 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d88153:;
  /* 11d88153 jmp 0x11d88129 */
  goto L_11d88129;
L_11d88155:;
  /* 11d88155 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88158 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8815b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d8815d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88160 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d88163 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88167 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88169 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8816b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8816e push edx */
  push32((uint32_t)(EDX));
  /* 11d8816f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d88172 push eax */
  push32((uint32_t)(EAX));
  /* 11d88173 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88177 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d8817du);
  /* 11d8817d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d88180 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88184 je 0x11d881a4 */
  if (C.zf) goto L_11d881a4;
  /* 11d88186 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d88188 push 0x11dacf0c */
  push32((uint32_t)(0x11dacf0cu));
  /* 11d8818d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8818f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88192 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88193 call 0x11d85ad0 */
  push32(0x11d88198u); f_11d85ad0();
  /* 11d88198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8819b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8819e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d881a2 jne 0x11d881b5 */
  if (!C.zf) goto L_11d881b5;
L_11d881a4:;
  /* 11d881a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d881a7 push edx */
  push32((uint32_t)(EDX));
  /* 11d881a8 call dword ptr [0x11db436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db436c))), 0x11d881aeu);
  /* 11d881ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d881b0 jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d881b5:;
  /* 11d881b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d881b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d881b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d881bc push eax */
  push32((uint32_t)(EAX));
  /* 11d881bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d881c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d881c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d881c4 push edx */
  push32((uint32_t)(EDX));
  /* 11d881c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d881c8 push eax */
  push32((uint32_t)(EAX));
  /* 11d881c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d881cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d881cd call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d881d3u);
  /* 11d881d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d881d5 jne 0x11d881ec */
  if (!C.zf) goto L_11d881ec;
  /* 11d881d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d881d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d881dc push ecx */
  push32((uint32_t)(ECX));
  /* 11d881dd call 0x11d86560 */
  push32(0x11d881e2u); f_11d86560();
  /* 11d881e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d881e5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11d881ec:;
  /* 11d881ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d881ef push edx */
  push32((uint32_t)(EDX));
  /* 11d881f0 call dword ptr [0x11db436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db436c))), 0x11d881f6u);
  /* 11d881f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d881f9 jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d881fe:;
  /* 11d881fe cmp dword ptr [0x11db1838], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db1838))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88205 jne 0x11d882b3 */
  if (!C.zf) goto L_11d882b3;
  /* 11d8820b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8820f jne 0x11d88227 */
  if (!C.zf) goto L_11d88227;
  /* 11d88211 call dword ptr [0x11db4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4364))), 0x11d88217u);
  /* 11d88217 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8821a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8821e jne 0x11d88227 */
  if (!C.zf) goto L_11d88227;
  /* 11d88220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88222 jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d88227:;
  /* 11d88227 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8822a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d8822d:;
  /* 11d8822d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88230 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d88233 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d88235 je 0x11d88255 */
  if (C.zf) goto L_11d88255;
  /* 11d88237 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8823a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8823d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d88240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88243 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d88246 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d88248 jne 0x11d88253 */
  if (!C.zf) goto L_11d88253;
  /* 11d8824a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8824d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88250 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d88253:;
  /* 11d88253 jmp 0x11d8822d */
  goto L_11d8822d;
L_11d88255:;
  /* 11d88255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88258 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8825b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8825e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d88261 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11d88266 push 0x11dacf0c */
  push32((uint32_t)(0x11dacf0cu));
  /* 11d8826b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8826d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88270 push edx */
  push32((uint32_t)(EDX));
  /* 11d88271 call 0x11d85ad0 */
  push32(0x11d88276u); f_11d85ad0();
  /* 11d88276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88279 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8827c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88280 jne 0x11d88290 */
  if (!C.zf) goto L_11d88290;
  /* 11d88282 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d88285 push eax */
  push32((uint32_t)(EAX));
  /* 11d88286 call dword ptr [0x11db4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4370))), 0x11d8828cu);
  /* 11d8828c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8828e jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d88290:;
  /* 11d88290 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88293 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88294 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d88297 push edx */
  push32((uint32_t)(EDX));
  /* 11d88298 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8829b push eax */
  push32((uint32_t)(EAX));
  /* 11d8829c call 0x11d8ccf0 */
  push32(0x11d882a1u); f_11d8ccf0();
  /* 11d882a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d882a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d882a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d882a8 call dword ptr [0x11db4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4370))), 0x11d882aeu);
  /* 11d882ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d882b1 jmp 0x11d882b5 */
  goto L_11d882b5;
L_11d882b3:;
  /* 11d882b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d882b5:;
  /* 11d882b5 mov esp, ebp */
  ESP = (EBP);
  /* 11d882b7 pop ebp */
  EBP = (pop32());
  /* 11d882b8 ret  */
  ESPCHK(0x11d880a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082c0 @ 0x11d882c0 (77 bytes, 25 insns) */
void f_11d882c0(void) {
  FTRACE(0x11d882c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d882c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d882c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d882c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d882c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d882ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d882cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d882d0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d882d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d882d4 call dword ptr [0x11db4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4358))), 0x11d882dau);
  /* 11d882da mov dword ptr [0x11db308c], eax */
  w32((uint32_t)(0x11db308c), (EAX));
  /* 11d882df cmp dword ptr [0x11db308c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db308c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d882e6 jne 0x11d882ec */
  if (!C.zf) goto L_11d882ec;
  /* 11d882e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d882ea jmp 0x11d8830b */
  goto L_11d8830b;
L_11d882ec:;
  /* 11d882ec call 0x11d8a6b0 */
  push32(0x11d882f1u); f_11d8a6b0();
  /* 11d882f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d882f3 jne 0x11d88306 */
  if (!C.zf) goto L_11d88306;
  /* 11d882f5 mov ecx, dword ptr [0x11db308c] */
  ECX = (r32((uint32_t)(0x11db308c)));
  /* 11d882fb push ecx */
  push32((uint32_t)(ECX));
  /* 11d882fc call dword ptr [0x11db435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db435c))), 0x11d88302u);
  /* 11d88302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88304 jmp 0x11d8830b */
  goto L_11d8830b;
L_11d88306:;
  /* 11d88306 mov eax, 1 */
  EAX = (0x1u);
L_11d8830b:;
  /* 11d8830b pop ebp */
  EBP = (pop32());
  /* 11d8830c ret  */
  ESPCHK(0x11d882c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x11d88310 (156 bytes, 48 insns) */
void f_11d88310(void) {
  FTRACE(0x11d88310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88310 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88311 mov ebp, esp */
  EBP = (ESP);
  /* 11d88313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d88316 mov eax, dword ptr [0x11db3088] */
  EAX = (r32((uint32_t)(0x11db3088)));
  /* 11d8831b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8831e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d88325 jmp 0x11d88330 */
  goto L_11d88330;
L_11d88327:;
  /* 11d88327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8832a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8832d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d88330:;
  /* 11d88330 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88333 cmp edx, dword ptr [0x11db3084] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11db3084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88339 jge 0x11d88386 */
  if ((C.sf==C.of)) goto L_11d88386;
  /* 11d8833b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d88340 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11d88345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88348 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8834b push ecx */
  push32((uint32_t)(ECX));
  /* 11d8834c call dword ptr [0x11db4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4350))), 0x11d88352u);
  /* 11d88352 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d88357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88359 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8835c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d8835f push eax */
  push32((uint32_t)(EAX));
  /* 11d88360 call dword ptr [0x11db4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4350))), 0x11d88366u);
  /* 11d88366 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88369 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d8836c push edx */
  push32((uint32_t)(EDX));
  /* 11d8836d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8836f mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d88374 push eax */
  push32((uint32_t)(EAX));
  /* 11d88375 call dword ptr [0x11db4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4354))), 0x11d8837bu);
  /* 11d8837b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8837e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88381 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d88384 jmp 0x11d88327 */
  goto L_11d88327;
L_11d88386:;
  /* 11d88386 mov edx, dword ptr [0x11db3088] */
  EDX = (r32((uint32_t)(0x11db3088)));
  /* 11d8838c push edx */
  push32((uint32_t)(EDX));
  /* 11d8838d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8838f mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d88394 push eax */
  push32((uint32_t)(EAX));
  /* 11d88395 call dword ptr [0x11db4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4354))), 0x11d8839bu);
  /* 11d8839b mov ecx, dword ptr [0x11db308c] */
  ECX = (r32((uint32_t)(0x11db308c)));
  /* 11d883a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d883a2 call dword ptr [0x11db435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db435c))), 0x11d883a8u);
  /* 11d883a8 mov esp, ebp */
  ESP = (EBP);
  /* 11d883aa pop ebp */
  EBP = (pop32());
  /* 11d883ab ret  */
  ESPCHK(0x11d88310u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11d883b0 (73 bytes, 19 insns) */
void f_11d883b0(void) {
  FTRACE(0x11d883b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d883b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d883b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d883b3 cmp dword ptr [0x11db16cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d883ba je 0x11d883ce */
  if (C.zf) goto L_11d883ce;
  /* 11d883bc cmp dword ptr [0x11db16cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d883c3 jne 0x11d883f7 */
  if (!C.zf) goto L_11d883f7;
  /* 11d883c5 cmp dword ptr [0x11db16d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d883cc jne 0x11d883f7 */
  if (!C.zf) goto L_11d883f7;
L_11d883ce:;
  /* 11d883ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11d883d3 call 0x11d88400 */
  push32(0x11d883d8u); f_11d88400();
  /* 11d883d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d883db cmp dword ptr [0x11db183c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db183c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d883e2 je 0x11d883ea */
  if (C.zf) goto L_11d883ea;
  /* 11d883e4 call dword ptr [0x11db183c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db183c))), 0x11d883eau);
L_11d883ea:;
  /* 11d883ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d883ef call 0x11d88400 */
  push32(0x11d883f4u); f_11d88400();
  /* 11d883f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d883f7:;
  /* 11d883f7 pop ebp */
  EBP = (pop32());
  /* 11d883f8 ret  */
  ESPCHK(0x11d883b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008400 @ 0x11d88400 (447 bytes, 131 insns) */
void f_11d88400(void) {
  FTRACE(0x11d88400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88400 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88401 mov ebp, esp */
  EBP = (ESP);
  /* 11d88403 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d88409 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8840a push esi */
  push32((uint32_t)(ESI));
  /* 11d8840b push edi */
  push32((uint32_t)(EDI));
  /* 11d8840c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d88413 jmp 0x11d8841e */
  goto L_11d8841e;
L_11d88415:;
  /* 11d88415 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88418 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8841b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d8841e:;
  /* 11d8841e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88422 jae 0x11d88437 */
  if (!C.cf) goto L_11d88437;
  /* 11d88424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8842a cmp edx, dword ptr [ecx*8 + 0x11dafab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11dafab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88431 jne 0x11d88435 */
  if (!C.zf) goto L_11d88435;
  /* 11d88433 jmp 0x11d88437 */
  goto L_11d88437;
L_11d88435:;
  /* 11d88435 jmp 0x11d88415 */
  goto L_11d88415;
L_11d88437:;
  /* 11d88437 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8843a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8843d cmp ecx, dword ptr [eax*8 + 0x11dafab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11dafab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88444 jne 0x11d885b8 */
  if (!C.zf) goto L_11d885b8;
  /* 11d8844a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88451 je 0x11d88474 */
  if (C.zf) goto L_11d88474;
  /* 11d88453 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88456 mov eax, dword ptr [edx*8 + 0x11dafab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11dafab4)));
  /* 11d8845d push eax */
  push32((uint32_t)(EAX));
  /* 11d8845e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88460 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88462 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88464 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88466 call 0x11d84e40 */
  push32(0x11d8846bu); f_11d84e40();
  /* 11d8846b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8846e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88471 jne 0x11d88474 */
  if (!C.zf) goto L_11d88474;
  /* 11d88473 int3  */
  x86_unimpl("int3 @ 0x11d88473");
L_11d88474:;
  /* 11d88474 cmp dword ptr [0x11db16cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8847b je 0x11d8848f */
  if (C.zf) goto L_11d8848f;
  /* 11d8847d cmp dword ptr [0x11db16cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88484 jne 0x11d884c8 */
  if (!C.zf) goto L_11d884c8;
  /* 11d88486 cmp dword ptr [0x11db16d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8848d jne 0x11d884c8 */
  if (!C.zf) goto L_11d884c8;
L_11d8848f:;
  /* 11d8848f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88491 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11d88494 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88495 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88498 mov eax, dword ptr [edx*8 + 0x11dafab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11dafab4)));
  /* 11d8849f push eax */
  push32((uint32_t)(EAX));
  /* 11d884a0 call 0x11d89620 */
  push32(0x11d884a5u); f_11d89620();
  /* 11d884a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d884a8 push eax */
  push32((uint32_t)(EAX));
  /* 11d884a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d884ac mov edx, dword ptr [ecx*8 + 0x11dafab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11dafab4)));
  /* 11d884b3 push edx */
  push32((uint32_t)(EDX));
  /* 11d884b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d884b6 call dword ptr [0x11db42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c8))), 0x11d884bcu);
  /* 11d884bc push eax */
  push32((uint32_t)(EAX));
  /* 11d884bd call dword ptr [0x11db42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c4))), 0x11d884c3u);
  /* 11d884c3 jmp 0x11d885b8 */
  goto L_11d885b8;
L_11d884c8:;
  /* 11d884c8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d884cf je 0x11d885b8 */
  if (C.zf) goto L_11d885b8;
  /* 11d884d5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d884da lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11d884e0 push eax */
  push32((uint32_t)(EAX));
  /* 11d884e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d884e3 call dword ptr [0x11db43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c8))), 0x11d884e9u);
  /* 11d884e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d884eb jne 0x11d88501 */
  if (!C.zf) goto L_11d88501;
  /* 11d884ed push 0x11dac780 */
  push32((uint32_t)(0x11dac780u));
  /* 11d884f2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11d884f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d884f9 call 0x11d897a0 */
  push32(0x11d884feu); f_11d897a0();
  /* 11d884fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d88501:;
  /* 11d88501 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11d88507 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d8850a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8850d push eax */
  push32((uint32_t)(EAX));
  /* 11d8850e call 0x11d89620 */
  push32(0x11d88513u); f_11d89620();
  /* 11d88513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88516 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88519 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8851c jbe 0x11d8854a */
  if ((C.cf||C.zf)) goto L_11d8854a;
  /* 11d8851e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11d88524 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88525 call 0x11d89620 */
  push32(0x11d8852au); f_11d89620();
  /* 11d8852a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8852d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88530 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11d88534 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d88537 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d88539 push 0x11dac77c */
  push32((uint32_t)(0x11dac77cu));
  /* 11d8853e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88541 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88542 call 0x11d8a010 */
  push32(0x11d88547u); f_11d8a010();
  /* 11d88547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8854a:;
  /* 11d8854a push 0x11dad1c8 */
  push32((uint32_t)(0x11dad1c8u));
  /* 11d8854f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11d88555 push edx */
  push32((uint32_t)(EDX));
  /* 11d88556 call 0x11d897a0 */
  push32(0x11d8855bu); f_11d897a0();
  /* 11d8855b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8855e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88561 push eax */
  push32((uint32_t)(EAX));
  /* 11d88562 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11d88568 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88569 call 0x11d897b0 */
  push32(0x11d8856eu); f_11d897b0();
  /* 11d8856e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88571 push 0x11dac6f4 */
  push32((uint32_t)(0x11dac6f4u));
  /* 11d88576 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11d8857c push edx */
  push32((uint32_t)(EDX));
  /* 11d8857d call 0x11d897b0 */
  push32(0x11d88582u); f_11d897b0();
  /* 11d88582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88585 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88588 mov ecx, dword ptr [eax*8 + 0x11dafab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11dafab4)));
  /* 11d8858f push ecx */
  push32((uint32_t)(ECX));
  /* 11d88590 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11d88596 push edx */
  push32((uint32_t)(EDX));
  /* 11d88597 call 0x11d897b0 */
  push32(0x11d8859cu); f_11d897b0();
  /* 11d8859c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8859f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11d885a4 push 0x11dad1a0 */
  push32((uint32_t)(0x11dad1a0u));
  /* 11d885a9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11d885af push eax */
  push32((uint32_t)(EAX));
  /* 11d885b0 call 0x11d89f50 */
  push32(0x11d885b5u); f_11d89f50();
  /* 11d885b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d885b8:;
  /* 11d885b8 pop edi */
  EDI = (pop32());
  /* 11d885b9 pop esi */
  ESI = (pop32());
  /* 11d885ba pop ebx */
  EBX = (pop32());
  /* 11d885bb mov esp, ebp */
  ESP = (EBP);
  /* 11d885bd pop ebp */
  EBP = (pop32());
  /* 11d885be ret  */
  ESPCHK(0x11d88400u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11d885c0 (80 bytes, 27 insns) */
void f_11d885c0(void) {
  FTRACE(0x11d885c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d885c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d885c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d885c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d885c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d885cb jmp 0x11d885d6 */
  goto L_11d885d6;
L_11d885cd:;
  /* 11d885cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d885d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d885d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d885d6:;
  /* 11d885d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d885da jae 0x11d885ef */
  if (!C.cf) goto L_11d885ef;
  /* 11d885dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d885df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d885e2 cmp edx, dword ptr [ecx*8 + 0x11dafab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11dafab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d885e9 jne 0x11d885ed */
  if (!C.zf) goto L_11d885ed;
  /* 11d885eb jmp 0x11d885ef */
  goto L_11d885ef;
L_11d885ed:;
  /* 11d885ed jmp 0x11d885cd */
  goto L_11d885cd;
L_11d885ef:;
  /* 11d885ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d885f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d885f5 cmp ecx, dword ptr [eax*8 + 0x11dafab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11dafab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d885fc jne 0x11d8860a */
  if (!C.zf) goto L_11d8860a;
  /* 11d885fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88601 mov eax, dword ptr [edx*8 + 0x11dafab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11dafab4)));
  /* 11d88608 jmp 0x11d8860c */
  goto L_11d8860c;
L_11d8860a:;
  /* 11d8860a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8860c:;
  /* 11d8860c mov esp, ebp */
  ESP = (EBP);
  /* 11d8860e pop ebp */
  EBP = (pop32());
  /* 11d8860f ret  */
  ESPCHK(0x11d885c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008610 @ 0x11d88610 (55 bytes, 16 insns) */
void f_11d88610(void) {
  FTRACE(0x11d88610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88610 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88611 mov ebp, esp */
  EBP = (ESP);
  /* 11d88613 mov eax, dword ptr [0x11dafb84] */
  EAX = (r32((uint32_t)(0x11dafb84)));
  /* 11d88618 push eax */
  push32((uint32_t)(EAX));
  /* 11d88619 call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d8861fu);
  /* 11d8861f mov ecx, dword ptr [0x11dafb74] */
  ECX = (r32((uint32_t)(0x11dafb74)));
  /* 11d88625 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88626 call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d8862cu);
  /* 11d8862c mov edx, dword ptr [0x11dafb64] */
  EDX = (r32((uint32_t)(0x11dafb64)));
  /* 11d88632 push edx */
  push32((uint32_t)(EDX));
  /* 11d88633 call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d88639u);
  /* 11d88639 mov eax, dword ptr [0x11dafb44] */
  EAX = (r32((uint32_t)(0x11dafb44)));
  /* 11d8863e push eax */
  push32((uint32_t)(EAX));
  /* 11d8863f call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d88645u);
  /* 11d88645 pop ebp */
  EBP = (pop32());
  /* 11d88646 ret  */
  ESPCHK(0x11d88610u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x11d88650 (159 bytes, 47 insns) */
void f_11d88650(void) {
  FTRACE(0x11d88650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88650 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88651 mov ebp, esp */
  EBP = (ESP);
  /* 11d88653 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88654 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8865b jmp 0x11d88666 */
  goto L_11d88666;
L_11d8865d:;
  /* 11d8865d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88660 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88663 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d88666:;
  /* 11d88666 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8866a jge 0x11d886b9 */
  if ((C.sf==C.of)) goto L_11d886b9;
  /* 11d8866c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8866f cmp dword ptr [ecx*4 + 0x11dafb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11dafb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88677 je 0x11d886b7 */
  if (C.zf) goto L_11d886b7;
  /* 11d88679 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8867d je 0x11d886b7 */
  if (C.zf) goto L_11d886b7;
  /* 11d8867f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88683 je 0x11d886b7 */
  if (C.zf) goto L_11d886b7;
  /* 11d88685 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88689 je 0x11d886b7 */
  if (C.zf) goto L_11d886b7;
  /* 11d8868b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8868f je 0x11d886b7 */
  if (C.zf) goto L_11d886b7;
  /* 11d88691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88694 mov eax, dword ptr [edx*4 + 0x11dafb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11dafb40)));
  /* 11d8869b push eax */
  push32((uint32_t)(EAX));
  /* 11d8869c call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d886a2u);
  /* 11d886a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d886a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d886a7 mov edx, dword ptr [ecx*4 + 0x11dafb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafb40)));
  /* 11d886ae push edx */
  push32((uint32_t)(EDX));
  /* 11d886af call 0x11d86560 */
  push32(0x11d886b4u); f_11d86560();
  /* 11d886b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d886b7:;
  /* 11d886b7 jmp 0x11d8865d */
  goto L_11d8865d;
L_11d886b9:;
  /* 11d886b9 mov eax, dword ptr [0x11dafb64] */
  EAX = (r32((uint32_t)(0x11dafb64)));
  /* 11d886be push eax */
  push32((uint32_t)(EAX));
  /* 11d886bf call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d886c5u);
  /* 11d886c5 mov ecx, dword ptr [0x11dafb74] */
  ECX = (r32((uint32_t)(0x11dafb74)));
  /* 11d886cb push ecx */
  push32((uint32_t)(ECX));
  /* 11d886cc call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d886d2u);
  /* 11d886d2 mov edx, dword ptr [0x11dafb84] */
  EDX = (r32((uint32_t)(0x11dafb84)));
  /* 11d886d8 push edx */
  push32((uint32_t)(EDX));
  /* 11d886d9 call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d886dfu);
  /* 11d886df mov eax, dword ptr [0x11dafb44] */
  EAX = (r32((uint32_t)(0x11dafb44)));
  /* 11d886e4 push eax */
  push32((uint32_t)(EAX));
  /* 11d886e5 call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d886ebu);
  /* 11d886eb mov esp, ebp */
  ESP = (EBP);
  /* 11d886ed pop ebp */
  EBP = (pop32());
  /* 11d886ee ret  */
  ESPCHK(0x11d88650u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x11d886f0 (151 bytes, 46 insns) */
void f_11d886f0(void) {
  FTRACE(0x11d886f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d886f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d886f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d886f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d886f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d886f7 cmp dword ptr [eax*4 + 0x11dafb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11dafb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d886ff jne 0x11d88772 */
  if (!C.zf) goto L_11d88772;
  /* 11d88701 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11d88706 push 0x11dad1e4 */
  push32((uint32_t)(0x11dad1e4u));
  /* 11d8870b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8870d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11d8870f call 0x11d85ad0 */
  push32(0x11d88714u); f_11d85ad0();
  /* 11d88714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8871a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8871e jne 0x11d8872a */
  if (!C.zf) goto L_11d8872a;
  /* 11d88720 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d88722 call 0x11d84950 */
  push32(0x11d88727u); f_11d84950();
  /* 11d88727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8872a:;
  /* 11d8872a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d8872c call 0x11d886f0 */
  push32(0x11d88731u); f_11d886f0();
  /* 11d88731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88734 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88737 cmp dword ptr [ecx*4 + 0x11dafb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11dafb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8873f jne 0x11d8875a */
  if (!C.zf) goto L_11d8875a;
  /* 11d88741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88744 push edx */
  push32((uint32_t)(EDX));
  /* 11d88745 call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d8874bu);
  /* 11d8874b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8874e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88751 mov dword ptr [eax*4 + 0x11dafb40], ecx */
  w32((uint32_t)(EAX*4 + 0x11dafb40), (ECX));
  /* 11d88758 jmp 0x11d88768 */
  goto L_11d88768;
L_11d8875a:;
  /* 11d8875a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8875c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8875f push edx */
  push32((uint32_t)(EDX));
  /* 11d88760 call 0x11d86560 */
  push32(0x11d88765u); f_11d86560();
  /* 11d88765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d88768:;
  /* 11d88768 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d8876a call 0x11d88790 */
  push32(0x11d8876fu); f_11d88790();
  /* 11d8876f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d88772:;
  /* 11d88772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88775 mov ecx, dword ptr [eax*4 + 0x11dafb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafb40)));
  /* 11d8877c push ecx */
  push32((uint32_t)(ECX));
  /* 11d8877d call dword ptr [0x11db4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4348))), 0x11d88783u);
  /* 11d88783 mov esp, ebp */
  ESP = (EBP);
  /* 11d88785 pop ebp */
  EBP = (pop32());
  /* 11d88786 ret  */
  ESPCHK(0x11d886f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x11d88790 (22 bytes, 8 insns) */
void f_11d88790(void) {
  FTRACE(0x11d88790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88790 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88791 mov ebp, esp */
  EBP = (ESP);
  /* 11d88793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88796 mov ecx, dword ptr [eax*4 + 0x11dafb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafb40)));
  /* 11d8879d push ecx */
  push32((uint32_t)(ECX));
  /* 11d8879e call dword ptr [0x11db4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4344))), 0x11d887a4u);
  /* 11d887a4 pop ebp */
  EBP = (pop32());
  /* 11d887a5 ret  */
  ESPCHK(0x11d88790u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x11d887b0 (26 bytes, 10 insns) */
void f_11d887b0(void) {
  FTRACE(0x11d887b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d887b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d887b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d887b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d887b6 push eax */
  push32((uint32_t)(EAX));
  /* 11d887b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d887b9 call dword ptr [0x11db4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4340))), 0x11d887bfu);
  /* 11d887bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d887c4 call dword ptr [0x11db43cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43cc))), 0x11d887cau);
  /* 11d887ca pop ebp */
  EBP = (pop32());
  /* 11d887cb ret  */
  ESPCHK(0x11d887b0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11d887d0 (446 bytes, 130 insns) */
void f_11d887d0(void) {
  FTRACE(0x11d887d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d887d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d887d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d887d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d887d6 call 0x11d84a70 */
  push32(0x11d887dbu); f_11d84a70();
  /* 11d887db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d887de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d887e1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11d887e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d887e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d887e8 push edx */
  push32((uint32_t)(EDX));
  /* 11d887e9 call 0x11d88990 */
  push32(0x11d887eeu); f_11d88990();
  /* 11d887ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d887f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d887f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d887f8 je 0x11d88803 */
  if (C.zf) goto L_11d88803;
  /* 11d887fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d887fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88801 jne 0x11d88812 */
  if (!C.zf) goto L_11d88812;
L_11d88803:;
  /* 11d88803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d88806 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88807 call dword ptr [0x11db433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db433c))), 0x11d8880du);
  /* 11d8880d jmp 0x11d8898a */
  goto L_11d8898a;
L_11d88812:;
  /* 11d88812 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88815 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88819 jne 0x11d8882f */
  if (!C.zf) goto L_11d8882f;
  /* 11d8881b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8881e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d88825 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8882a jmp 0x11d8898a */
  goto L_11d8898a;
L_11d8882f:;
  /* 11d8882f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88832 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88836 jne 0x11d88840 */
  if (!C.zf) goto L_11d88840;
  /* 11d88838 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8883b jmp 0x11d8898a */
  goto L_11d8898a;
L_11d88840:;
  /* 11d88840 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88843 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d88846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d88849 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8884c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11d8884f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d88852 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88855 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d88858 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11d8885b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8885e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88862 jne 0x11d88967 */
  if (!C.zf) goto L_11d88967;
  /* 11d88868 mov eax, dword ptr [0x11dafc78] */
  EAX = (r32((uint32_t)(0x11dafc78)));
  /* 11d8886d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d88870 jmp 0x11d8887b */
  goto L_11d8887b;
L_11d88872:;
  /* 11d88872 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d88875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88878 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d8887b:;
  /* 11d8887b mov edx, dword ptr [0x11dafc78] */
  EDX = (r32((uint32_t)(0x11dafc78)));
  /* 11d88881 add edx, dword ptr [0x11dafc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11dafc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88887 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8888a jge 0x11d888a2 */
  if ((C.sf==C.of)) goto L_11d888a2;
  /* 11d8888c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8888f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d88892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88895 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d88898 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11d888a0 jmp 0x11d88872 */
  goto L_11d88872;
L_11d888a2:;
  /* 11d888a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d888a5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11d888a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d888ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d888ae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d888b4 jne 0x11d888c5 */
  if (!C.zf) goto L_11d888c5;
  /* 11d888b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d888b9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11d888c0 jmp 0x11d8894d */
  goto L_11d8894d;
L_11d888c5:;
  /* 11d888c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d888c8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d888ce jne 0x11d888dc */
  if (!C.zf) goto L_11d888dc;
  /* 11d888d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d888d3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11d888da jmp 0x11d8894d */
  goto L_11d8894d;
L_11d888dc:;
  /* 11d888dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d888df cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d888e5 jne 0x11d888f3 */
  if (!C.zf) goto L_11d888f3;
  /* 11d888e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d888ea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11d888f1 jmp 0x11d8894d */
  goto L_11d8894d;
L_11d888f3:;
  /* 11d888f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d888f6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d888fc jne 0x11d8890a */
  if (!C.zf) goto L_11d8890a;
  /* 11d888fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88901 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11d88908 jmp 0x11d8894d */
  goto L_11d8894d;
L_11d8890a:;
  /* 11d8890a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8890d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88913 jne 0x11d88921 */
  if (!C.zf) goto L_11d88921;
  /* 11d88915 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88918 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11d8891f jmp 0x11d8894d */
  goto L_11d8894d;
L_11d88921:;
  /* 11d88921 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88924 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8892a jne 0x11d88938 */
  if (!C.zf) goto L_11d88938;
  /* 11d8892c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8892f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11d88936 jmp 0x11d8894d */
  goto L_11d8894d;
L_11d88938:;
  /* 11d88938 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8893b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88941 jne 0x11d8894d */
  if (!C.zf) goto L_11d8894d;
  /* 11d88943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88946 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11d8894d:;
  /* 11d8894d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88950 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11d88953 push edx */
  push32((uint32_t)(EDX));
  /* 11d88954 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d88956 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11d88959u);
  /* 11d88959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8895c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8895f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88962 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11d88965 jmp 0x11d8897e */
  goto L_11d8897e;
L_11d88967:;
  /* 11d88967 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8896a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11d88971 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d88974 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d88977 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88978 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11d8897bu);
  /* 11d8897b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8897e:;
  /* 11d8897e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d88981 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d88984 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11d88987 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d8898a:;
  /* 11d8898a mov esp, ebp */
  ESP = (EBP);
  /* 11d8898c pop ebp */
  EBP = (pop32());
  /* 11d8898d ret  */
  ESPCHK(0x11d887d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008990 @ 0x11d88990 (89 bytes, 35 insns) */
void f_11d88990(void) {
  FTRACE(0x11d88990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88990 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88991 mov ebp, esp */
  EBP = (ESP);
  /* 11d88993 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d88997 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8899a:;
  /* 11d8899a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8899d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8899f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d889a2 je 0x11d889c2 */
  if (C.zf) goto L_11d889c2;
  /* 11d889a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d889a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d889aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d889ad mov ecx, dword ptr [0x11dafc84] */
  ECX = (r32((uint32_t)(0x11dafc84)));
  /* 11d889b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d889b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d889b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d889bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d889be jae 0x11d889c2 */
  if (!C.cf) goto L_11d889c2;
  /* 11d889c0 jmp 0x11d8899a */
  goto L_11d8899a;
L_11d889c2:;
  /* 11d889c2 mov eax, dword ptr [0x11dafc84] */
  EAX = (r32((uint32_t)(0x11dafc84)));
  /* 11d889c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d889ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d889cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d889cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d889d2 jae 0x11d889de */
  if (!C.cf) goto L_11d889de;
  /* 11d889d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d889d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d889d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d889dc je 0x11d889e2 */
  if (C.zf) goto L_11d889e2;
L_11d889de:;
  /* 11d889de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d889e0 jmp 0x11d889e5 */
  goto L_11d889e5;
L_11d889e2:;
  /* 11d889e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d889e5:;
  /* 11d889e5 mov esp, ebp */
  ESP = (EBP);
  /* 11d889e7 pop ebp */
  EBP = (pop32());
  /* 11d889e8 ret  */
  ESPCHK(0x11d88990u, _esp0);
  ESP += 4; return;
}

/* FUN_100089f0 @ 0x11d889f0 (61 bytes, 18 insns) */
void f_11d889f0(void) {
  FTRACE(0x11d889f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d889f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d889f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d889f3 cmp dword ptr [0x11db1958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d889fa jne 0x11d88a2b */
  if (!C.zf) goto L_11d88a2b;
  /* 11d889fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d889fe call 0x11d886f0 */
  push32(0x11d88a03u); f_11d886f0();
  /* 11d88a03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88a06 cmp dword ptr [0x11db1958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88a0d jne 0x11d88a21 */
  if (!C.zf) goto L_11d88a21;
  /* 11d88a0f call 0x11d88a50 */
  push32(0x11d88a14u); f_11d88a50();
  /* 11d88a14 mov eax, dword ptr [0x11db1958] */
  EAX = (r32((uint32_t)(0x11db1958)));
  /* 11d88a19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88a1c mov dword ptr [0x11db1958], eax */
  w32((uint32_t)(0x11db1958), (EAX));
L_11d88a21:;
  /* 11d88a21 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d88a23 call 0x11d88790 */
  push32(0x11d88a28u); f_11d88790();
  /* 11d88a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d88a2b:;
  /* 11d88a2b pop ebp */
  EBP = (pop32());
  /* 11d88a2c ret  */
  ESPCHK(0x11d889f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a30 @ 0x11d88a30 (30 bytes, 11 insns) */
void f_11d88a30(void) {
  FTRACE(0x11d88a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88a31 mov ebp, esp */
  EBP = (ESP);
  /* 11d88a33 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d88a35 call 0x11d886f0 */
  push32(0x11d88a3au); f_11d886f0();
  /* 11d88a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88a3d call 0x11d88a50 */
  push32(0x11d88a42u); f_11d88a50();
  /* 11d88a42 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d88a44 call 0x11d88790 */
  push32(0x11d88a49u); f_11d88790();
  /* 11d88a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88a4c pop ebp */
  EBP = (pop32());
  /* 11d88a4d ret  */
  ESPCHK(0x11d88a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x11d88a50 (939 bytes, 266 insns) */
void f_11d88a50(void) {
  FTRACE(0x11d88a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88a51 mov ebp, esp */
  EBP = (ESP);
  /* 11d88a53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d88a56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d88a5d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d88a5f call 0x11d886f0 */
  push32(0x11d88a64u); f_11d886f0();
  /* 11d88a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88a67 mov dword ptr [0x11db18a0], 0 */
  w32((uint32_t)(0x11db18a0), (0x0u));
  /* 11d88a71 mov dword ptr [0x11dafd30], 0xffffffff */
  w32((uint32_t)(0x11dafd30), (0xffffffffu));
  /* 11d88a7b mov eax, dword ptr [0x11dafd30] */
  EAX = (r32((uint32_t)(0x11dafd30)));
  /* 11d88a80 mov dword ptr [0x11dafd20], eax */
  w32((uint32_t)(0x11dafd20), (EAX));
  /* 11d88a85 push 0x11dad234 */
  push32((uint32_t)(0x11dad234u));
  /* 11d88a8a call 0x11d8d340 */
  push32(0x11d88a8fu); f_11d8d340();
  /* 11d88a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88a92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d88a95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88a99 jne 0x11d88bd3 */
  if (!C.zf) goto L_11d88bd3;
  /* 11d88a9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d88aa1 call 0x11d88790 */
  push32(0x11d88aa6u); f_11d88790();
  /* 11d88aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88aa9 push 0x11db18a8 */
  push32((uint32_t)(0x11db18a8u));
  /* 11d88aae call dword ptr [0x11db4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4374))), 0x11d88ab4u);
  /* 11d88ab4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88ab7 je 0x11d88bce */
  if (C.zf) goto L_11d88bce;
  /* 11d88abd mov dword ptr [0x11db18a0], 1 */
  w32((uint32_t)(0x11db18a0), (0x1u));
  /* 11d88ac7 mov ecx, dword ptr [0x11db18a8] */
  ECX = (r32((uint32_t)(0x11db18a8)));
  /* 11d88acd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d88ad0 mov dword ptr [0x11dafc88], ecx */
  w32((uint32_t)(0x11dafc88), (ECX));
  /* 11d88ad6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88ad8 mov dx, word ptr [0x11db18ee] */
  DX = (r16((uint32_t)(0x11db18ee)));
  /* 11d88adf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d88ae1 je 0x11d88af9 */
  if (C.zf) goto L_11d88af9;
  /* 11d88ae3 mov eax, dword ptr [0x11db18fc] */
  EAX = (r32((uint32_t)(0x11db18fc)));
  /* 11d88ae8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d88aeb mov ecx, dword ptr [0x11dafc88] */
  ECX = (r32((uint32_t)(0x11dafc88)));
  /* 11d88af1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88af3 mov dword ptr [0x11dafc88], ecx */
  w32((uint32_t)(0x11dafc88), (ECX));
L_11d88af9:;
  /* 11d88af9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88afb mov dx, word ptr [0x11db1942] */
  DX = (r16((uint32_t)(0x11db1942)));
  /* 11d88b02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d88b04 je 0x11d88b2e */
  if (C.zf) goto L_11d88b2e;
  /* 11d88b06 cmp dword ptr [0x11db1950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88b0d je 0x11d88b2e */
  if (C.zf) goto L_11d88b2e;
  /* 11d88b0f mov dword ptr [0x11dafc8c], 1 */
  w32((uint32_t)(0x11dafc8c), (0x1u));
  /* 11d88b19 mov eax, dword ptr [0x11db1950] */
  EAX = (r32((uint32_t)(0x11db1950)));
  /* 11d88b1e sub eax, dword ptr [0x11db18fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db18fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d88b24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d88b27 mov dword ptr [0x11dafc90], eax */
  w32((uint32_t)(0x11dafc90), (EAX));
  /* 11d88b2c jmp 0x11d88b42 */
  goto L_11d88b42;
L_11d88b2e:;
  /* 11d88b2e mov dword ptr [0x11dafc8c], 0 */
  w32((uint32_t)(0x11dafc8c), (0x0u));
  /* 11d88b38 mov dword ptr [0x11dafc90], 0 */
  w32((uint32_t)(0x11dafc90), (0x0u));
L_11d88b42:;
  /* 11d88b42 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11d88b45 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88b48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d88b4a mov edx, dword ptr [0x11dafd14] */
  EDX = (r32((uint32_t)(0x11dafd14)));
  /* 11d88b50 push edx */
  push32((uint32_t)(EDX));
  /* 11d88b51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d88b53 push 0x11db18ac */
  push32((uint32_t)(0x11db18acu));
  /* 11d88b58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d88b5d mov eax, dword ptr [0x11db19a0] */
  EAX = (r32((uint32_t)(0x11db19a0)));
  /* 11d88b62 push eax */
  push32((uint32_t)(EAX));
  /* 11d88b63 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d88b69u);
  /* 11d88b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d88b6b je 0x11d88b7f */
  if (C.zf) goto L_11d88b7f;
  /* 11d88b6d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88b71 jne 0x11d88b7f */
  if (!C.zf) goto L_11d88b7f;
  /* 11d88b73 mov ecx, dword ptr [0x11dafd14] */
  ECX = (r32((uint32_t)(0x11dafd14)));
  /* 11d88b79 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11d88b7d jmp 0x11d88b88 */
  goto L_11d88b88;
L_11d88b7f:;
  /* 11d88b7f mov edx, dword ptr [0x11dafd14] */
  EDX = (r32((uint32_t)(0x11dafd14)));
  /* 11d88b85 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11d88b88:;
  /* 11d88b88 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d88b8b push eax */
  push32((uint32_t)(EAX));
  /* 11d88b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88b8e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d88b90 mov ecx, dword ptr [0x11dafd18] */
  ECX = (r32((uint32_t)(0x11dafd18)));
  /* 11d88b96 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88b97 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d88b99 push 0x11db1900 */
  push32((uint32_t)(0x11db1900u));
  /* 11d88b9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d88ba3 mov edx, dword ptr [0x11db19a0] */
  EDX = (r32((uint32_t)(0x11db19a0)));
  /* 11d88ba9 push edx */
  push32((uint32_t)(EDX));
  /* 11d88baa call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d88bb0u);
  /* 11d88bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d88bb2 je 0x11d88bc5 */
  if (C.zf) goto L_11d88bc5;
  /* 11d88bb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88bb8 jne 0x11d88bc5 */
  if (!C.zf) goto L_11d88bc5;
  /* 11d88bba mov eax, dword ptr [0x11dafd18] */
  EAX = (r32((uint32_t)(0x11dafd18)));
  /* 11d88bbf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11d88bc3 jmp 0x11d88bce */
  goto L_11d88bce;
L_11d88bc5:;
  /* 11d88bc5 mov ecx, dword ptr [0x11dafd18] */
  ECX = (r32((uint32_t)(0x11dafd18)));
  /* 11d88bcb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11d88bce:;
  /* 11d88bce jmp 0x11d88df7 */
  goto L_11d88df7;
L_11d88bd3:;
  /* 11d88bd3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88bd6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d88bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d88bdb je 0x11d88bfd */
  if (C.zf) goto L_11d88bfd;
  /* 11d88bdd cmp dword ptr [0x11db1954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88be4 je 0x11d88c0c */
  if (C.zf) goto L_11d88c0c;
  /* 11d88be6 mov ecx, dword ptr [0x11db1954] */
  ECX = (r32((uint32_t)(0x11db1954)));
  /* 11d88bec push ecx */
  push32((uint32_t)(ECX));
  /* 11d88bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88bf0 push edx */
  push32((uint32_t)(EDX));
  /* 11d88bf1 call 0x11d8d280 */
  push32(0x11d88bf6u); f_11d8d280();
  /* 11d88bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d88bfb jne 0x11d88c0c */
  if (!C.zf) goto L_11d88c0c;
L_11d88bfd:;
  /* 11d88bfd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d88bff call 0x11d88790 */
  push32(0x11d88c04u); f_11d88790();
  /* 11d88c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c07 jmp 0x11d88df7 */
  goto L_11d88df7;
L_11d88c0c:;
  /* 11d88c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d88c0e mov eax, dword ptr [0x11db1954] */
  EAX = (r32((uint32_t)(0x11db1954)));
  /* 11d88c13 push eax */
  push32((uint32_t)(EAX));
  /* 11d88c14 call 0x11d86560 */
  push32(0x11d88c19u); f_11d86560();
  /* 11d88c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c1c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11d88c21 push 0x11dad22c */
  push32((uint32_t)(0x11dad22cu));
  /* 11d88c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d88c28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88c2b push ecx */
  push32((uint32_t)(ECX));
  /* 11d88c2c call 0x11d89620 */
  push32(0x11d88c31u); f_11d89620();
  /* 11d88c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c37 push eax */
  push32((uint32_t)(EAX));
  /* 11d88c38 call 0x11d85ad0 */
  push32(0x11d88c3du); f_11d85ad0();
  /* 11d88c3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c40 mov dword ptr [0x11db1954], eax */
  w32((uint32_t)(0x11db1954), (EAX));
  /* 11d88c45 cmp dword ptr [0x11db1954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88c4c jne 0x11d88c5d */
  if (!C.zf) goto L_11d88c5d;
  /* 11d88c4e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d88c50 call 0x11d88790 */
  push32(0x11d88c55u); f_11d88790();
  /* 11d88c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c58 jmp 0x11d88df7 */
  goto L_11d88df7;
L_11d88c5d:;
  /* 11d88c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88c60 push edx */
  push32((uint32_t)(EDX));
  /* 11d88c61 mov eax, dword ptr [0x11db1954] */
  EAX = (r32((uint32_t)(0x11db1954)));
  /* 11d88c66 push eax */
  push32((uint32_t)(EAX));
  /* 11d88c67 call 0x11d897a0 */
  push32(0x11d88c6cu); f_11d897a0();
  /* 11d88c6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d88c71 call 0x11d88790 */
  push32(0x11d88c76u); f_11d88790();
  /* 11d88c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c79 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d88c7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88c7e push ecx */
  push32((uint32_t)(ECX));
  /* 11d88c7f mov edx, dword ptr [0x11dafd14] */
  EDX = (r32((uint32_t)(0x11dafd14)));
  /* 11d88c85 push edx */
  push32((uint32_t)(EDX));
  /* 11d88c86 call 0x11d8a010 */
  push32(0x11d88c8bu); f_11d8a010();
  /* 11d88c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c8e mov eax, dword ptr [0x11dafd14] */
  EAX = (r32((uint32_t)(0x11dafd14)));
  /* 11d88c93 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11d88c97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88c9a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88c9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d88ca0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88ca3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d88ca6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88ca9 jne 0x11d88cbd */
  if (!C.zf) goto L_11d88cbd;
  /* 11d88cab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88cae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88cb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d88cb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88cb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88cba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d88cbd:;
  /* 11d88cbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88cc0 push eax */
  push32((uint32_t)(EAX));
  /* 11d88cc1 call 0x11d8d030 */
  push32(0x11d88cc6u); f_11d8d030();
  /* 11d88cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88cc9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d88ccf mov dword ptr [0x11dafc88], eax */
  w32((uint32_t)(0x11dafc88), (EAX));
L_11d88cd4:;
  /* 11d88cd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88cd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d88cda cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88cdd je 0x11d88cf5 */
  if (C.zf) goto L_11d88cf5;
  /* 11d88cdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88ce2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d88ce5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88ce8 jl 0x11d88d00 */
  if ((C.sf!=C.of)) goto L_11d88d00;
  /* 11d88cea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88ced movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d88cf0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88cf3 jg 0x11d88d00 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d88d00;
L_11d88cf5:;
  /* 11d88cf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88cf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88cfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d88cfe jmp 0x11d88cd4 */
  goto L_11d88cd4;
L_11d88d00:;
  /* 11d88d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d88d06 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88d09 jne 0x11d88da5 */
  if (!C.zf) goto L_11d88da5;
  /* 11d88d0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d88d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d1b push edx */
  push32((uint32_t)(EDX));
  /* 11d88d1c call 0x11d8d030 */
  push32(0x11d88d21u); f_11d8d030();
  /* 11d88d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d88d27 mov ecx, dword ptr [0x11dafc88] */
  ECX = (r32((uint32_t)(0x11dafc88)));
  /* 11d88d2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d2f mov dword ptr [0x11dafc88], ecx */
  w32((uint32_t)(0x11dafc88), (ECX));
L_11d88d35:;
  /* 11d88d35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d38 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d88d3b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88d3e jl 0x11d88d56 */
  if ((C.sf!=C.of)) goto L_11d88d56;
  /* 11d88d40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d88d46 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88d49 jg 0x11d88d56 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d88d56;
  /* 11d88d4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d88d54 jmp 0x11d88d35 */
  goto L_11d88d35;
L_11d88d56:;
  /* 11d88d56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d59 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d88d5c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88d5f jne 0x11d88da5 */
  if (!C.zf) goto L_11d88da5;
  /* 11d88d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d88d6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d6d push ecx */
  push32((uint32_t)(ECX));
  /* 11d88d6e call 0x11d8d030 */
  push32(0x11d88d73u); f_11d8d030();
  /* 11d88d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d76 mov edx, dword ptr [0x11dafc88] */
  EDX = (r32((uint32_t)(0x11dafc88)));
  /* 11d88d7c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88d7e mov dword ptr [0x11dafc88], edx */
  w32((uint32_t)(0x11dafc88), (EDX));
L_11d88d84:;
  /* 11d88d84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d88d8a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88d8d jl 0x11d88da5 */
  if ((C.sf!=C.of)) goto L_11d88da5;
  /* 11d88d8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d88d95 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88d98 jg 0x11d88da5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d88da5;
  /* 11d88d9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88d9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88da0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d88da3 jmp 0x11d88d84 */
  goto L_11d88d84;
L_11d88da5:;
  /* 11d88da5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88da9 je 0x11d88db9 */
  if (C.zf) goto L_11d88db9;
  /* 11d88dab mov edx, dword ptr [0x11dafc88] */
  EDX = (r32((uint32_t)(0x11dafc88)));
  /* 11d88db1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d88db3 mov dword ptr [0x11dafc88], edx */
  w32((uint32_t)(0x11dafc88), (EDX));
L_11d88db9:;
  /* 11d88db9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88dbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d88dbf mov dword ptr [0x11dafc8c], ecx */
  w32((uint32_t)(0x11dafc8c), (ECX));
  /* 11d88dc5 cmp dword ptr [0x11dafc8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dafc8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88dcc je 0x11d88dee */
  if (C.zf) goto L_11d88dee;
  /* 11d88dce push 3 */
  push32((uint32_t)(0x3u));
  /* 11d88dd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d88dd3 push edx */
  push32((uint32_t)(EDX));
  /* 11d88dd4 mov eax, dword ptr [0x11dafd18] */
  EAX = (r32((uint32_t)(0x11dafd18)));
  /* 11d88dd9 push eax */
  push32((uint32_t)(EAX));
  /* 11d88dda call 0x11d8a010 */
  push32(0x11d88ddfu); f_11d8a010();
  /* 11d88ddf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88de2 mov ecx, dword ptr [0x11dafd18] */
  ECX = (r32((uint32_t)(0x11dafd18)));
  /* 11d88de8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11d88dec jmp 0x11d88df7 */
  goto L_11d88df7;
L_11d88dee:;
  /* 11d88dee mov edx, dword ptr [0x11dafd18] */
  EDX = (r32((uint32_t)(0x11dafd18)));
  /* 11d88df4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11d88df7:;
  /* 11d88df7 mov esp, ebp */
  ESP = (EBP);
  /* 11d88df9 pop ebp */
  EBP = (pop32());
  /* 11d88dfa ret  */
  ESPCHK(0x11d88a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x11d88e00 (46 bytes, 18 insns) */
void f_11d88e00(void) {
  FTRACE(0x11d88e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88e01 mov ebp, esp */
  EBP = (ESP);
  /* 11d88e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88e04 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d88e06 call 0x11d886f0 */
  push32(0x11d88e0bu); f_11d886f0();
  /* 11d88e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88e0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88e11 push eax */
  push32((uint32_t)(EAX));
  /* 11d88e12 call 0x11d88e30 */
  push32(0x11d88e17u); f_11d88e30();
  /* 11d88e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88e1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d88e1d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d88e1f call 0x11d88790 */
  push32(0x11d88e24u); f_11d88790();
  /* 11d88e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d88e2a mov esp, ebp */
  ESP = (EBP);
  /* 11d88e2c pop ebp */
  EBP = (pop32());
  /* 11d88e2d ret  */
  ESPCHK(0x11d88e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x11d88e30 (762 bytes, 246 insns) */
void f_11d88e30(void) {
  FTRACE(0x11d88e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d88e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d88e31 mov ebp, esp */
  EBP = (ESP);
  /* 11d88e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88e34 cmp dword ptr [0x11dafc8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dafc8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88e3b jne 0x11d88e44 */
  if (!C.zf) goto L_11d88e44;
  /* 11d88e3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88e3f jmp 0x11d89126 */
  goto L_11d89126;
L_11d88e44:;
  /* 11d88e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88e47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d88e4a cmp ecx, dword ptr [0x11dafd20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafd20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88e50 jne 0x11d88e64 */
  if (!C.zf) goto L_11d88e64;
  /* 11d88e52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88e55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d88e58 cmp eax, dword ptr [0x11dafd30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafd30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88e5e je 0x11d8902b */
  if (C.zf) goto L_11d8902b;
L_11d88e64:;
  /* 11d88e64 cmp dword ptr [0x11db18a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db18a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d88e6b je 0x11d88fe5 */
  if (C.zf) goto L_11d88fe5;
  /* 11d88e71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88e73 mov cx, word ptr [0x11db1940] */
  CX = (r16((uint32_t)(0x11db1940)));
  /* 11d88e7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d88e7c jne 0x11d88ed9 */
  if (!C.zf) goto L_11d88ed9;
  /* 11d88e7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88e80 mov dx, word ptr [0x11db194e] */
  DX = (r16((uint32_t)(0x11db194e)));
  /* 11d88e87 push edx */
  push32((uint32_t)(EDX));
  /* 11d88e88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88e8a mov ax, word ptr [0x11db194c] */
  AX = (r16((uint32_t)(0x11db194c)));
  /* 11d88e90 push eax */
  push32((uint32_t)(EAX));
  /* 11d88e91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88e93 mov cx, word ptr [0x11db194a] */
  CX = (r16((uint32_t)(0x11db194a)));
  /* 11d88e9a push ecx */
  push32((uint32_t)(ECX));
  /* 11d88e9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88e9d mov dx, word ptr [0x11db1948] */
  DX = (r16((uint32_t)(0x11db1948)));
  /* 11d88ea4 push edx */
  push32((uint32_t)(EDX));
  /* 11d88ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88ea9 mov ax, word ptr [0x11db1944] */
  AX = (r16((uint32_t)(0x11db1944)));
  /* 11d88eaf push eax */
  push32((uint32_t)(EAX));
  /* 11d88eb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88eb2 mov cx, word ptr [0x11db1946] */
  CX = (r16((uint32_t)(0x11db1946)));
  /* 11d88eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88eba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88ebc mov dx, word ptr [0x11db1942] */
  DX = (r16((uint32_t)(0x11db1942)));
  /* 11d88ec3 push edx */
  push32((uint32_t)(EDX));
  /* 11d88ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88ec7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d88eca push ecx */
  push32((uint32_t)(ECX));
  /* 11d88ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88ecd push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88ecf call 0x11d89130 */
  push32(0x11d88ed4u); f_11d89130();
  /* 11d88ed4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88ed7 jmp 0x11d88f2a */
  goto L_11d88f2a;
L_11d88ed9:;
  /* 11d88ed9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88edb mov dx, word ptr [0x11db194e] */
  DX = (r16((uint32_t)(0x11db194e)));
  /* 11d88ee2 push edx */
  push32((uint32_t)(EDX));
  /* 11d88ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88ee5 mov ax, word ptr [0x11db194c] */
  AX = (r16((uint32_t)(0x11db194c)));
  /* 11d88eeb push eax */
  push32((uint32_t)(EAX));
  /* 11d88eec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88eee mov cx, word ptr [0x11db194a] */
  CX = (r16((uint32_t)(0x11db194a)));
  /* 11d88ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88ef6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88ef8 mov dx, word ptr [0x11db1948] */
  DX = (r16((uint32_t)(0x11db1948)));
  /* 11d88eff push edx */
  push32((uint32_t)(EDX));
  /* 11d88f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88f02 mov ax, word ptr [0x11db1946] */
  AX = (r16((uint32_t)(0x11db1946)));
  /* 11d88f08 push eax */
  push32((uint32_t)(EAX));
  /* 11d88f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88f0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88f0f mov cx, word ptr [0x11db1942] */
  CX = (r16((uint32_t)(0x11db1942)));
  /* 11d88f16 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88f1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d88f1d push eax */
  push32((uint32_t)(EAX));
  /* 11d88f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88f22 call 0x11d89130 */
  push32(0x11d88f27u); f_11d89130();
  /* 11d88f27 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d88f2a:;
  /* 11d88f2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88f2c mov cx, word ptr [0x11db18ec] */
  CX = (r16((uint32_t)(0x11db18ec)));
  /* 11d88f33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d88f35 jne 0x11d88f92 */
  if (!C.zf) goto L_11d88f92;
  /* 11d88f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88f39 mov dx, word ptr [0x11db18fa] */
  DX = (r16((uint32_t)(0x11db18fa)));
  /* 11d88f40 push edx */
  push32((uint32_t)(EDX));
  /* 11d88f41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88f43 mov ax, word ptr [0x11db18f8] */
  AX = (r16((uint32_t)(0x11db18f8)));
  /* 11d88f49 push eax */
  push32((uint32_t)(EAX));
  /* 11d88f4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88f4c mov cx, word ptr [0x11db18f6] */
  CX = (r16((uint32_t)(0x11db18f6)));
  /* 11d88f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88f54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88f56 mov dx, word ptr [0x11db18f4] */
  DX = (r16((uint32_t)(0x11db18f4)));
  /* 11d88f5d push edx */
  push32((uint32_t)(EDX));
  /* 11d88f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88f62 mov ax, word ptr [0x11db18f0] */
  AX = (r16((uint32_t)(0x11db18f0)));
  /* 11d88f68 push eax */
  push32((uint32_t)(EAX));
  /* 11d88f69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88f6b mov cx, word ptr [0x11db18f2] */
  CX = (r16((uint32_t)(0x11db18f2)));
  /* 11d88f72 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88f73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88f75 mov dx, word ptr [0x11db18ee] */
  DX = (r16((uint32_t)(0x11db18ee)));
  /* 11d88f7c push edx */
  push32((uint32_t)(EDX));
  /* 11d88f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88f80 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d88f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d88f84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88f88 call 0x11d89130 */
  push32(0x11d88f8du); f_11d89130();
  /* 11d88f8d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d88f90 jmp 0x11d88fe3 */
  goto L_11d88fe3;
L_11d88f92:;
  /* 11d88f92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88f94 mov dx, word ptr [0x11db18fa] */
  DX = (r16((uint32_t)(0x11db18fa)));
  /* 11d88f9b push edx */
  push32((uint32_t)(EDX));
  /* 11d88f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88f9e mov ax, word ptr [0x11db18f8] */
  AX = (r16((uint32_t)(0x11db18f8)));
  /* 11d88fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11d88fa5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88fa7 mov cx, word ptr [0x11db18f6] */
  CX = (r16((uint32_t)(0x11db18f6)));
  /* 11d88fae push ecx */
  push32((uint32_t)(ECX));
  /* 11d88faf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d88fb1 mov dx, word ptr [0x11db18f4] */
  DX = (r16((uint32_t)(0x11db18f4)));
  /* 11d88fb8 push edx */
  push32((uint32_t)(EDX));
  /* 11d88fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d88fbb mov ax, word ptr [0x11db18f2] */
  AX = (r16((uint32_t)(0x11db18f2)));
  /* 11d88fc1 push eax */
  push32((uint32_t)(EAX));
  /* 11d88fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d88fc8 mov cx, word ptr [0x11db18ee] */
  CX = (r16((uint32_t)(0x11db18ee)));
  /* 11d88fcf push ecx */
  push32((uint32_t)(ECX));
  /* 11d88fd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88fd3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d88fd6 push eax */
  push32((uint32_t)(EAX));
  /* 11d88fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fdb call 0x11d89130 */
  push32(0x11d88fe0u); f_11d89130();
  /* 11d88fe0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d88fe3:;
  /* 11d88fe3 jmp 0x11d8902b */
  goto L_11d8902b;
L_11d88fe5:;
  /* 11d88fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88feb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d88fed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d88ff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88ff3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d88ff5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d88ff8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d88ffb push edx */
  push32((uint32_t)(EDX));
  /* 11d88ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d88ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89000 call 0x11d89130 */
  push32(0x11d89005u); f_11d89130();
  /* 11d89005 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89008 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8900a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8900c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8900e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d89010 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89012 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89014 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d89016 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d89018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8901b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d8901e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8901f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89021 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89023 call 0x11d89130 */
  push32(0x11d89028u); f_11d89130();
  /* 11d89028 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8902b:;
  /* 11d8902b mov edx, dword ptr [0x11dafd24] */
  EDX = (r32((uint32_t)(0x11dafd24)));
  /* 11d89031 cmp edx, dword ptr [0x11dafd34] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11dafd34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89037 jge 0x11d89084 */
  if ((C.sf==C.of)) goto L_11d89084;
  /* 11d89039 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8903c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d8903f cmp ecx, dword ptr [0x11dafd24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafd24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89045 jl 0x11d89055 */
  if ((C.sf!=C.of)) goto L_11d89055;
  /* 11d89047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8904a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d8904d cmp eax, dword ptr [0x11dafd34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafd34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89053 jle 0x11d8905c */
  if ((C.zf||C.sf!=C.of)) goto L_11d8905c;
L_11d89055:;
  /* 11d89055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89057 jmp 0x11d89126 */
  goto L_11d89126;
L_11d8905c:;
  /* 11d8905c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8905f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d89062 cmp edx, dword ptr [0x11dafd24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11dafd24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89068 jle 0x11d89082 */
  if ((C.zf||C.sf!=C.of)) goto L_11d89082;
  /* 11d8906a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8906d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d89070 cmp ecx, dword ptr [0x11dafd34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafd34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89076 jge 0x11d89082 */
  if ((C.sf==C.of)) goto L_11d89082;
  /* 11d89078 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8907d jmp 0x11d89126 */
  goto L_11d89126;
L_11d89082:;
  /* 11d89082 jmp 0x11d890c7 */
  goto L_11d890c7;
L_11d89084:;
  /* 11d89084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89087 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d8908a cmp eax, dword ptr [0x11dafd34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafd34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89090 jl 0x11d890a0 */
  if ((C.sf!=C.of)) goto L_11d890a0;
  /* 11d89092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89095 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d89098 cmp edx, dword ptr [0x11dafd24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11dafd24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8909e jle 0x11d890a7 */
  if ((C.zf||C.sf!=C.of)) goto L_11d890a7;
L_11d890a0:;
  /* 11d890a0 mov eax, 1 */
  EAX = (0x1u);
  /* 11d890a5 jmp 0x11d89126 */
  goto L_11d89126;
L_11d890a7:;
  /* 11d890a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d890aa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d890ad cmp ecx, dword ptr [0x11dafd34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafd34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d890b3 jle 0x11d890c7 */
  if ((C.zf||C.sf!=C.of)) goto L_11d890c7;
  /* 11d890b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d890b8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d890bb cmp eax, dword ptr [0x11dafd24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafd24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d890c1 jge 0x11d890c7 */
  if ((C.sf==C.of)) goto L_11d890c7;
  /* 11d890c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d890c5 jmp 0x11d89126 */
  goto L_11d89126;
L_11d890c7:;
  /* 11d890c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d890ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d890cd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d890d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d890d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d890d5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d890d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d890da mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d890dd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d890e3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d890e5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d890eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d890ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d890f1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d890f4 cmp edx, dword ptr [0x11dafd24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11dafd24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d890fa jne 0x11d89112 */
  if (!C.zf) goto L_11d89112;
  /* 11d890fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d890ff cmp eax, dword ptr [0x11dafd28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafd28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89105 jl 0x11d8910e */
  if ((C.sf!=C.of)) goto L_11d8910e;
  /* 11d89107 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8910c jmp 0x11d89126 */
  goto L_11d89126;
L_11d8910e:;
  /* 11d8910e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89110 jmp 0x11d89126 */
  goto L_11d89126;
L_11d89112:;
  /* 11d89112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89115 cmp ecx, dword ptr [0x11dafd38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafd38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8911b jge 0x11d89124 */
  if ((C.sf==C.of)) goto L_11d89124;
  /* 11d8911d mov eax, 1 */
  EAX = (0x1u);
  /* 11d89122 jmp 0x11d89126 */
  goto L_11d89126;
L_11d89124:;
  /* 11d89124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d89126:;
  /* 11d89126 mov esp, ebp */
  ESP = (EBP);
  /* 11d89128 pop ebp */
  EBP = (pop32());
  /* 11d89129 ret  */
  ESPCHK(0x11d88e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x11d89130 (504 bytes, 145 insns) */
void f_11d89130(void) {
  FTRACE(0x11d89130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89130 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89131 mov ebp, esp */
  EBP = (ESP);
  /* 11d89133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89136 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8913a jne 0x11d8920c */
  if (!C.zf) goto L_11d8920c;
  /* 11d89140 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89143 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d89146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d89148 jne 0x11d89159 */
  if (!C.zf) goto L_11d89159;
  /* 11d8914a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8914d mov edx, dword ptr [ecx*4 + 0x11dafd38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafd38)));
  /* 11d89154 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d89157 jmp 0x11d89166 */
  goto L_11d89166;
L_11d89159:;
  /* 11d89159 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8915c mov ecx, dword ptr [eax*4 + 0x11dafd6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafd6c)));
  /* 11d89163 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d89166:;
  /* 11d89166 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89169 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8916c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d8916f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89172 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89175 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8917b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8917e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89180 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89183 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89186 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11d89189 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11d8918d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8918e mov ecx, 7 */
  ECX = (0x7u);
  /* 11d89193 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d89195 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d89198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8919b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8919e jge 0x11d891b9 */
  if ((C.sf==C.of)) goto L_11d891b9;
  /* 11d891a0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d891a3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d891a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d891a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d891ac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d891af add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d891b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d891b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d891b7 jmp 0x11d891cd */
  goto L_11d891cd;
L_11d891b9:;
  /* 11d891b9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d891bc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d891bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d891c2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d891c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d891c8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d891ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d891cd:;
  /* 11d891cd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d891d1 jne 0x11d8920a */
  if (!C.zf) goto L_11d8920a;
  /* 11d891d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d891d6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d891d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d891db jne 0x11d891ec */
  if (!C.zf) goto L_11d891ec;
  /* 11d891dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d891e0 mov eax, dword ptr [edx*4 + 0x11dafd3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11dafd3c)));
  /* 11d891e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d891ea jmp 0x11d891f9 */
  goto L_11d891f9;
L_11d891ec:;
  /* 11d891ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d891ef mov edx, dword ptr [ecx*4 + 0x11dafd70] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11dafd70)));
  /* 11d891f6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d891f9:;
  /* 11d891f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d891fc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d891ff jle 0x11d8920a */
  if ((C.zf||C.sf!=C.of)) goto L_11d8920a;
  /* 11d89201 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89204 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89207 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d8920a:;
  /* 11d8920a jmp 0x11d89241 */
  goto L_11d89241;
L_11d8920c:;
  /* 11d8920c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8920f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d89212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d89214 jne 0x11d89225 */
  if (!C.zf) goto L_11d89225;
  /* 11d89216 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d89219 mov ecx, dword ptr [eax*4 + 0x11dafd38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafd38)));
  /* 11d89220 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d89223 jmp 0x11d89232 */
  goto L_11d89232;
L_11d89225:;
  /* 11d89225 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d89228 mov eax, dword ptr [edx*4 + 0x11dafd6c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11dafd6c)));
  /* 11d8922f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11d89232:;
  /* 11d89232 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d89235 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d89238 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8923b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8923e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d89241:;
  /* 11d89241 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89245 jne 0x11d89281 */
  if (!C.zf) goto L_11d89281;
  /* 11d89247 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8924a mov dword ptr [0x11dafd24], eax */
  w32((uint32_t)(0x11dafd24), (EAX));
  /* 11d8924f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d89252 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89255 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11d89258 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8925a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8925d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11d89260 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89262 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89268 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11d8926b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8926d mov dword ptr [0x11dafd28], ecx */
  w32((uint32_t)(0x11dafd28), (ECX));
  /* 11d89273 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89276 mov dword ptr [0x11dafd20], edx */
  w32((uint32_t)(0x11dafd20), (EDX));
  /* 11d8927c jmp 0x11d89324 */
  goto L_11d89324;
L_11d89281:;
  /* 11d89281 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89284 mov dword ptr [0x11dafd34], eax */
  w32((uint32_t)(0x11dafd34), (EAX));
  /* 11d89289 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d8928c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8928f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11d89292 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89294 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89297 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11d8929a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8929c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d892a2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11d892a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d892a7 mov dword ptr [0x11dafd38], ecx */
  w32((uint32_t)(0x11dafd38), (ECX));
  /* 11d892ad mov edx, dword ptr [0x11dafc90] */
  EDX = (r32((uint32_t)(0x11dafc90)));
  /* 11d892b3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d892b9 mov eax, dword ptr [0x11dafd38] */
  EAX = (r32((uint32_t)(0x11dafd38)));
  /* 11d892be add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d892c0 mov dword ptr [0x11dafd38], eax */
  w32((uint32_t)(0x11dafd38), (EAX));
  /* 11d892c5 cmp dword ptr [0x11dafd38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dafd38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d892cc jge 0x11d892f1 */
  if ((C.sf==C.of)) goto L_11d892f1;
  /* 11d892ce mov ecx, dword ptr [0x11dafd38] */
  ECX = (r32((uint32_t)(0x11dafd38)));
  /* 11d892d4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d892da mov dword ptr [0x11dafd38], ecx */
  w32((uint32_t)(0x11dafd38), (ECX));
  /* 11d892e0 mov edx, dword ptr [0x11dafd34] */
  EDX = (r32((uint32_t)(0x11dafd34)));
  /* 11d892e6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d892e9 mov dword ptr [0x11dafd34], edx */
  w32((uint32_t)(0x11dafd34), (EDX));
  /* 11d892ef jmp 0x11d8931b */
  goto L_11d8931b;
L_11d892f1:;
  /* 11d892f1 cmp dword ptr [0x11dafd38], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11dafd38))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d892fb jl 0x11d8931b */
  if ((C.sf!=C.of)) goto L_11d8931b;
  /* 11d892fd mov eax, dword ptr [0x11dafd38] */
  EAX = (r32((uint32_t)(0x11dafd38)));
  /* 11d89302 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89307 mov dword ptr [0x11dafd38], eax */
  w32((uint32_t)(0x11dafd38), (EAX));
  /* 11d8930c mov ecx, dword ptr [0x11dafd34] */
  ECX = (r32((uint32_t)(0x11dafd34)));
  /* 11d89312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89315 mov dword ptr [0x11dafd34], ecx */
  w32((uint32_t)(0x11dafd34), (ECX));
L_11d8931b:;
  /* 11d8931b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8931e mov dword ptr [0x11dafd30], edx */
  w32((uint32_t)(0x11dafd30), (EDX));
L_11d89324:;
  /* 11d89324 mov esp, ebp */
  ESP = (EBP);
  /* 11d89326 pop ebp */
  EBP = (pop32());
  /* 11d89327 ret  */
  ESPCHK(0x11d89130u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11d89330 (66 bytes, 28 insns) */
void f_11d89330(void) {
  FTRACE(0x11d89330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89330 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89331 mov ebp, esp */
  EBP = (ESP);
  /* 11d89333 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89337 jne 0x11d89357 */
  if (!C.zf) goto L_11d89357;
  /* 11d89339 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8933d jge 0x11d89357 */
  if ((C.sf==C.of)) goto L_11d89357;
  /* 11d8933f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89341 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89344 push eax */
  push32((uint32_t)(EAX));
  /* 11d89345 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89348 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8934c push edx */
  push32((uint32_t)(EDX));
  /* 11d8934d call 0x11d89380 */
  push32(0x11d89352u); f_11d89380();
  /* 11d89352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89355 jmp 0x11d8936d */
  goto L_11d8936d;
L_11d89357:;
  /* 11d89357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89359 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8935c push eax */
  push32((uint32_t)(EAX));
  /* 11d8935d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89360 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89364 push edx */
  push32((uint32_t)(EDX));
  /* 11d89365 call 0x11d89380 */
  push32(0x11d8936au); f_11d89380();
  /* 11d8936a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8936d:;
  /* 11d8936d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89370 pop ebp */
  EBP = (pop32());
  /* 11d89371 ret  */
  ESPCHK(0x11d89330u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11d89380 (194 bytes, 71 insns) */
void f_11d89380(void) {
  FTRACE(0x11d89380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89380 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89381 mov ebp, esp */
  EBP = (ESP);
  /* 11d89383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89386 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8938c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89390 je 0x11d893a9 */
  if (C.zf) goto L_11d893a9;
  /* 11d89392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89395 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11d89398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8939b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8939e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d893a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d893a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d893a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d893a9:;
  /* 11d893a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d893ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d893af:;
  /* 11d893af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d893b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d893b4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d893b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d893ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d893bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d893bf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d893c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d893c5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d893c9 jbe 0x11d893e1 */
  if ((C.cf||C.zf)) goto L_11d893e1;
  /* 11d893cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d893ce add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d893d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d893d4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d893d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d893d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d893dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d893df jmp 0x11d893f5 */
  goto L_11d893f5;
L_11d893e1:;
  /* 11d893e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d893e4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d893e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d893ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d893ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d893ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d893f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d893f5:;
  /* 11d893f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d893f9 ja 0x11d893af */
  if ((!C.cf&&!C.zf)) goto L_11d893af;
  /* 11d893fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d893fe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d89401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89404 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89407 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8940a:;
  /* 11d8940a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8940d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8940f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11d89412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89415 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89418 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8941a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d8941c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8941f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11d89422 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d89424 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89427 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8942a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8942d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89430 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89433 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d89436 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89439 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8943c jb 0x11d8940a */
  if (C.cf) goto L_11d8940a;
  /* 11d8943e mov esp, ebp */
  ESP = (EBP);
  /* 11d89440 pop ebp */
  EBP = (pop32());
  /* 11d89441 ret  */
  ESPCHK(0x11d89380u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11d89450 (63 bytes, 24 insns) */
void f_11d89450(void) {
  FTRACE(0x11d89450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89450 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89451 mov ebp, esp */
  EBP = (ESP);
  /* 11d89453 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89454 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89458 jne 0x11d89469 */
  if (!C.zf) goto L_11d89469;
  /* 11d8945a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8945e jge 0x11d89469 */
  if ((C.sf==C.of)) goto L_11d89469;
  /* 11d89460 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d89467 jmp 0x11d89470 */
  goto L_11d89470;
L_11d89469:;
  /* 11d89469 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d89470:;
  /* 11d89470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89473 push eax */
  push32((uint32_t)(EAX));
  /* 11d89474 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89477 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89478 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8947b push edx */
  push32((uint32_t)(EDX));
  /* 11d8947c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8947f push eax */
  push32((uint32_t)(EAX));
  /* 11d89480 call 0x11d89380 */
  push32(0x11d89485u); f_11d89380();
  /* 11d89485 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89488 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8948b mov esp, ebp */
  ESP = (EBP);
  /* 11d8948d pop ebp */
  EBP = (pop32());
  /* 11d8948e ret  */
  ESPCHK(0x11d89450u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11d89490 (30 bytes, 14 insns) */
void f_11d89490(void) {
  FTRACE(0x11d89490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89490 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89491 mov ebp, esp */
  EBP = (ESP);
  /* 11d89493 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89495 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89498 push eax */
  push32((uint32_t)(EAX));
  /* 11d89499 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8949c push ecx */
  push32((uint32_t)(ECX));
  /* 11d8949d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d894a0 push edx */
  push32((uint32_t)(EDX));
  /* 11d894a1 call 0x11d89380 */
  push32(0x11d894a6u); f_11d89380();
  /* 11d894a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d894a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d894ac pop ebp */
  EBP = (pop32());
  /* 11d894ad ret  */
  ESPCHK(0x11d89490u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11d894b0 (72 bytes, 28 insns) */
void f_11d894b0(void) {
  FTRACE(0x11d894b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d894b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d894b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d894b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d894b4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d894b8 jne 0x11d894d1 */
  if (!C.zf) goto L_11d894d1;
  /* 11d894ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d894be jg 0x11d894d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d894d1;
  /* 11d894c0 jl 0x11d894c8 */
  if ((C.sf!=C.of)) goto L_11d894c8;
  /* 11d894c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d894c6 jae 0x11d894d1 */
  if (!C.cf) goto L_11d894d1;
L_11d894c8:;
  /* 11d894c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d894cf jmp 0x11d894d8 */
  goto L_11d894d8;
L_11d894d1:;
  /* 11d894d1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d894d8:;
  /* 11d894d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d894db push eax */
  push32((uint32_t)(EAX));
  /* 11d894dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d894df push ecx */
  push32((uint32_t)(ECX));
  /* 11d894e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d894e3 push edx */
  push32((uint32_t)(EDX));
  /* 11d894e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d894e7 push eax */
  push32((uint32_t)(EAX));
  /* 11d894e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d894eb push ecx */
  push32((uint32_t)(ECX));
  /* 11d894ec call 0x11d89500 */
  push32(0x11d894f1u); f_11d89500();
  /* 11d894f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d894f4 mov esp, ebp */
  ESP = (EBP);
  /* 11d894f6 pop ebp */
  EBP = (pop32());
  /* 11d894f7 ret  */
  ESPCHK(0x11d894b0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11d89500 (242 bytes, 91 insns) */
void f_11d89500(void) {
  FTRACE(0x11d89500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89500 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89501 mov ebp, esp */
  EBP = (ESP);
  /* 11d89503 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89506 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8950c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89510 je 0x11d89534 */
  if (C.zf) goto L_11d89534;
  /* 11d89512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89515 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11d89518 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8951b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8951e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d89521 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89524 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d89526 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89529 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8952c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8952e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d89531 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d89534:;
  /* 11d89534 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89537 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d8953a:;
  /* 11d8953a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8953d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8953f push ecx */
  push32((uint32_t)(ECX));
  /* 11d89540 push eax */
  push32((uint32_t)(EAX));
  /* 11d89541 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89544 push edx */
  push32((uint32_t)(EDX));
  /* 11d89545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89548 push eax */
  push32((uint32_t)(EAX));
  /* 11d89549 call 0x11d8d480 */
  push32(0x11d8954eu); f_11d8d480();
  /* 11d8954e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89551 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d89554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d89556 push edx */
  push32((uint32_t)(EDX));
  /* 11d89557 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89558 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8955b push eax */
  push32((uint32_t)(EAX));
  /* 11d8955c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8955f push ecx */
  push32((uint32_t)(ECX));
  /* 11d89560 call 0x11d8d410 */
  push32(0x11d89565u); f_11d8d410();
  /* 11d89565 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d89568 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11d8956b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8956f jbe 0x11d89587 */
  if ((C.cf||C.zf)) goto L_11d89587;
  /* 11d89571 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89574 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8957a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d8957c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8957f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89582 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d89585 jmp 0x11d8959b */
  goto L_11d8959b;
L_11d89587:;
  /* 11d89587 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8958a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8958d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89590 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d89592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89598 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d8959b:;
  /* 11d8959b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8959f ja 0x11d8953a */
  if ((!C.cf&&!C.zf)) goto L_11d8953a;
  /* 11d895a1 jb 0x11d895a9 */
  if (C.cf) goto L_11d895a9;
  /* 11d895a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d895a7 ja 0x11d8953a */
  if ((!C.cf&&!C.zf)) goto L_11d8953a;
L_11d895a9:;
  /* 11d895a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d895ac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d895af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d895b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d895b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d895b8:;
  /* 11d895b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d895bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d895bd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11d895c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d895c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d895c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d895c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d895ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d895cd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11d895d0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d895d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d895d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d895d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d895db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d895de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d895e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d895e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d895e7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d895ea jb 0x11d895b8 */
  if (C.cf) goto L_11d895b8;
  /* 11d895ec mov esp, ebp */
  ESP = (EBP);
  /* 11d895ee pop ebp */
  EBP = (pop32());
  /* 11d895ef ret 0x14 */
  ESPCHK(0x11d89500u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11d89600 (31 bytes, 15 insns) */
void f_11d89600(void) {
  FTRACE(0x11d89600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89600 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89601 mov ebp, esp */
  EBP = (ESP);
  /* 11d89603 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89605 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d89608 push eax */
  push32((uint32_t)(EAX));
  /* 11d89609 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8960c push ecx */
  push32((uint32_t)(ECX));
  /* 11d8960d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89610 push edx */
  push32((uint32_t)(EDX));
  /* 11d89611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89614 push eax */
  push32((uint32_t)(EAX));
  /* 11d89615 call 0x11d89500 */
  push32(0x11d8961au); f_11d89500();
  /* 11d8961a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8961d pop ebp */
  EBP = (pop32());
  /* 11d8961e ret  */
  ESPCHK(0x11d89600u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11d89620 (123 bytes, 44 insns) */
void f_11d89620(void) {
  FTRACE(0x11d89620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89620 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d89624 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d8962a je 0x11d89640 */
  if (C.zf) goto L_11d89640;
L_11d8962c:;
  /* 11d8962c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d8962e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d8962f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d89631 je 0x11d89673 */
  if (C.zf) goto L_11d89673;
  /* 11d89633 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d89639 jne 0x11d8962c */
  if (!C.zf) goto L_11d8962c;
  /* 11d8963b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d89640:;
  /* 11d89640 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d89642 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d89647 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89649 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8964c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8964e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89651 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d89656 je 0x11d89640 */
  if (C.zf) goto L_11d89640;
  /* 11d89658 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d8965b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d8965d je 0x11d89691 */
  if (C.zf) goto L_11d89691;
  /* 11d8965f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d89661 je 0x11d89687 */
  if (C.zf) goto L_11d89687;
  /* 11d89663 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d89668 je 0x11d8967d */
  if (C.zf) goto L_11d8967d;
  /* 11d8966a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d8966f je 0x11d89673 */
  if (C.zf) goto L_11d89673;
  /* 11d89671 jmp 0x11d89640 */
  goto L_11d89640;
L_11d89673:;
  /* 11d89673 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11d89676 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d8967a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8967c ret  */
  ESPCHK(0x11d89620u, _esp0);
  ESP += 4; return;
L_11d8967d:;
  /* 11d8967d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11d89680 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d89684 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89686 ret  */
  ESPCHK(0x11d89620u, _esp0);
  ESP += 4; return;
L_11d89687:;
  /* 11d89687 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11d8968a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d8968e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89690 ret  */
  ESPCHK(0x11d89620u, _esp0);
  ESP += 4; return;
L_11d89691:;
  /* 11d89691 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11d89694 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d89698 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8969a ret  */
  ESPCHK(0x11d89620u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x11d896a0 (249 bytes, 93 insns) */
void f_11d896a0(void) {
  FTRACE(0x11d896a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d896a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d896a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d896a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d896a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d896a7 push esi */
  push32((uint32_t)(ESI));
  /* 11d896a8 push edi */
  push32((uint32_t)(EDI));
  /* 11d896a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d896ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d896af lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11d896b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11d896b5:;
  /* 11d896b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d896b9 jne 0x11d896d9 */
  if (!C.zf) goto L_11d896d9;
  /* 11d896bb push 0x11dad254 */
  push32((uint32_t)(0x11dad254u));
  /* 11d896c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d896c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11d896c4 push 0x11dad248 */
  push32((uint32_t)(0x11dad248u));
  /* 11d896c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d896cb call 0x11d84e40 */
  push32(0x11d896d0u); f_11d84e40();
  /* 11d896d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d896d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d896d6 jne 0x11d896d9 */
  if (!C.zf) goto L_11d896d9;
  /* 11d896d8 int3  */
  x86_unimpl("int3 @ 0x11d896d8");
L_11d896d9:;
  /* 11d896d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d896db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d896dd jne 0x11d896b5 */
  if (!C.zf) goto L_11d896b5;
L_11d896df:;
  /* 11d896df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d896e3 jne 0x11d89703 */
  if (!C.zf) goto L_11d89703;
  /* 11d896e5 push 0x11dad238 */
  push32((uint32_t)(0x11dad238u));
  /* 11d896ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d896ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d896ee push 0x11dad248 */
  push32((uint32_t)(0x11dad248u));
  /* 11d896f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d896f5 call 0x11d84e40 */
  push32(0x11d896fau); f_11d84e40();
  /* 11d896fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d896fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89700 jne 0x11d89703 */
  if (!C.zf) goto L_11d89703;
  /* 11d89702 int3  */
  x86_unimpl("int3 @ 0x11d89702");
L_11d89703:;
  /* 11d89703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d89707 jne 0x11d896df */
  if (!C.zf) goto L_11d896df;
  /* 11d89709 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8970c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11d89713 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89719 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d8971c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8971f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89722 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d89724 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89727 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8972a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d8972d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d89730 push edx */
  push32((uint32_t)(EDX));
  /* 11d89731 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89734 push eax */
  push32((uint32_t)(EAX));
  /* 11d89735 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89738 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89739 call 0x11d8d780 */
  push32(0x11d8973eu); f_11d8d780();
  /* 11d8973e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89741 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d89744 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89747 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8974a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8974d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89750 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d89753 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89756 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8975a jl 0x11d8977e */
  if ((C.sf!=C.of)) goto L_11d8977e;
  /* 11d8975c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8975f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d89761 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d89764 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d89766 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8976c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11d8976f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89772 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d89774 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89777 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8977a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d8977c jmp 0x11d8978f */
  goto L_11d8978f;
L_11d8977e:;
  /* 11d8977e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89781 push eax */
  push32((uint32_t)(EAX));
  /* 11d89782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d89784 call 0x11d8d500 */
  push32(0x11d89789u); f_11d8d500();
  /* 11d89789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8978c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11d8978f:;
  /* 11d8978f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d89792 pop edi */
  EDI = (pop32());
  /* 11d89793 pop esi */
  ESI = (pop32());
  /* 11d89794 pop ebx */
  EBX = (pop32());
  /* 11d89795 mov esp, ebp */
  ESP = (EBP);
  /* 11d89797 pop ebp */
  EBP = (pop32());
  /* 11d89798 ret  */
  ESPCHK(0x11d896a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x11d897a0 (7 bytes, 3 insns) */
void f_11d897a0(void) {
  FTRACE(0x11d897a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d897a0 push edi */
  push32((uint32_t)(EDI));
  /* 11d897a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d897a5 jmp 0x11d89811 */
  jmp_ind(0x11d89811u); return;
}

/* FUN_100097b0 @ 0x11d897b0 (224 bytes, 84 insns) */
void f_11d897b0(void) {
  FTRACE(0x11d897b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d897b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d897b4 push edi */
  push32((uint32_t)(EDI));
  /* 11d897b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d897bb je 0x11d897cc */
  if (C.zf) goto L_11d897cc;
L_11d897bd:;
  /* 11d897bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d897bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d897c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d897c2 je 0x11d897ff */
  if (C.zf) goto L_11d897ff;
  /* 11d897c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d897ca jne 0x11d897bd */
  if (!C.zf) goto L_11d897bd;
L_11d897cc:;
  /* 11d897cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d897ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d897d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d897d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d897d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d897da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d897dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d897e2 je 0x11d897cc */
  if (C.zf) goto L_11d897cc;
  /* 11d897e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d897e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d897e9 je 0x11d8980e */
  if (C.zf) goto L_11d8980e;
  /* 11d897eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d897ed je 0x11d89809 */
  if (C.zf) goto L_11d89809;
  /* 11d897ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d897f4 je 0x11d89804 */
  if (C.zf) goto L_11d89804;
  /* 11d897f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d897fb je 0x11d897ff */
  if (C.zf) goto L_11d897ff;
  /* 11d897fd jmp 0x11d897cc */
  goto L_11d897cc;
L_11d897ff:;
  /* 11d897ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11d89802 jmp 0x11d89811 */
  goto L_11d89811;
L_11d89804:;
  /* 11d89804 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11d89807 jmp 0x11d89811 */
  goto L_11d89811;
L_11d89809:;
  /* 11d89809 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11d8980c jmp 0x11d89811 */
  goto L_11d89811;
L_11d8980e:;
  /* 11d8980e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11d89811:;
  /* 11d89811 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d89815 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d8981b je 0x11d89836 */
  if (C.zf) goto L_11d89836;
L_11d8981d:;
  /* 11d8981d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8981f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d89820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d89822 je 0x11d89888 */
  if (C.zf) goto L_11d89888;
  /* 11d89824 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d89826 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d89827 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d8982d jne 0x11d8981d */
  if (!C.zf) goto L_11d8981d;
  /* 11d8982f jmp 0x11d89836 */
  goto L_11d89836;
L_11d89831:;
  /* 11d89831 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d89833 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d89836:;
  /* 11d89836 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d8983b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d8983d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8983f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d89842 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d89846 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89849 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d8984e je 0x11d89831 */
  if (C.zf) goto L_11d89831;
  /* 11d89850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d89852 je 0x11d89888 */
  if (C.zf) goto L_11d89888;
  /* 11d89854 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d89856 je 0x11d8987f */
  if (C.zf) goto L_11d8987f;
  /* 11d89858 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d8985e je 0x11d89872 */
  if (C.zf) goto L_11d89872;
  /* 11d89860 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d89866 je 0x11d8986a */
  if (C.zf) goto L_11d8986a;
  /* 11d89868 jmp 0x11d89831 */
  goto L_11d89831;
L_11d8986a:;
  /* 11d8986a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d8986c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d89870 pop edi */
  EDI = (pop32());
  /* 11d89871 ret  */
  ESPCHK(0x11d897b0u, _esp0);
  ESP += 4; return;
L_11d89872:;
  /* 11d89872 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11d89875 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d89879 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11d8987d pop edi */
  EDI = (pop32());
  /* 11d8987e ret  */
  ESPCHK(0x11d897b0u, _esp0);
  ESP += 4; return;
L_11d8987f:;
  /* 11d8987f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11d89882 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d89886 pop edi */
  EDI = (pop32());
  /* 11d89887 ret  */
  ESPCHK(0x11d897b0u, _esp0);
  ESP += 4; return;
L_11d89888:;
  /* 11d89888 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d8988a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8988e pop edi */
  EDI = (pop32());
  /* 11d8988f ret  */
  ESPCHK(0x11d897b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x11d89890 (243 bytes, 91 insns) */
void f_11d89890(void) {
  FTRACE(0x11d89890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89890 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89891 mov ebp, esp */
  EBP = (ESP);
  /* 11d89893 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89896 push ebx */
  push32((uint32_t)(EBX));
  /* 11d89897 push esi */
  push32((uint32_t)(ESI));
  /* 11d89898 push edi */
  push32((uint32_t)(EDI));
  /* 11d89899 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d8989c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d8989f:;
  /* 11d8989f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d898a3 jne 0x11d898c3 */
  if (!C.zf) goto L_11d898c3;
  /* 11d898a5 push 0x11dad254 */
  push32((uint32_t)(0x11dad254u));
  /* 11d898aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d898ac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11d898ae push 0x11dad264 */
  push32((uint32_t)(0x11dad264u));
  /* 11d898b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d898b5 call 0x11d84e40 */
  push32(0x11d898bau); f_11d84e40();
  /* 11d898ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d898bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d898c0 jne 0x11d898c3 */
  if (!C.zf) goto L_11d898c3;
  /* 11d898c2 int3  */
  x86_unimpl("int3 @ 0x11d898c2");
L_11d898c3:;
  /* 11d898c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d898c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d898c7 jne 0x11d8989f */
  if (!C.zf) goto L_11d8989f;
L_11d898c9:;
  /* 11d898c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d898cd jne 0x11d898ed */
  if (!C.zf) goto L_11d898ed;
  /* 11d898cf push 0x11dad238 */
  push32((uint32_t)(0x11dad238u));
  /* 11d898d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d898d6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11d898d8 push 0x11dad264 */
  push32((uint32_t)(0x11dad264u));
  /* 11d898dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11d898df call 0x11d84e40 */
  push32(0x11d898e4u); f_11d84e40();
  /* 11d898e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d898e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d898ea jne 0x11d898ed */
  if (!C.zf) goto L_11d898ed;
  /* 11d898ec int3  */
  x86_unimpl("int3 @ 0x11d898ec");
L_11d898ed:;
  /* 11d898ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d898ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d898f1 jne 0x11d898c9 */
  if (!C.zf) goto L_11d898c9;
  /* 11d898f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d898f6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11d898fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89900 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89903 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d89906 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8990c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d8990e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89911 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89914 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d89917 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8991a push ecx */
  push32((uint32_t)(ECX));
  /* 11d8991b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8991e push edx */
  push32((uint32_t)(EDX));
  /* 11d8991f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89922 push eax */
  push32((uint32_t)(EAX));
  /* 11d89923 call 0x11d8d780 */
  push32(0x11d89928u); f_11d8d780();
  /* 11d89928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8992b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8992e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89931 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d89934 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89937 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8993a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d8993d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89940 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89944 jl 0x11d89968 */
  if ((C.sf!=C.of)) goto L_11d89968;
  /* 11d89946 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89949 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8994b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d8994e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d89950 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d89956 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d89959 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8995c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8995e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89961 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d89964 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d89966 jmp 0x11d89979 */
  goto L_11d89979;
L_11d89968:;
  /* 11d89968 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8996b push edx */
  push32((uint32_t)(EDX));
  /* 11d8996c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8996e call 0x11d8d500 */
  push32(0x11d89973u); f_11d8d500();
  /* 11d89973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89976 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11d89979:;
  /* 11d89979 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8997c pop edi */
  EDI = (pop32());
  /* 11d8997d pop esi */
  ESI = (pop32());
  /* 11d8997e pop ebx */
  EBX = (pop32());
  /* 11d8997f mov esp, ebp */
  ESP = (EBP);
  /* 11d89981 pop ebp */
  EBP = (pop32());
  /* 11d89982 ret  */
  ESPCHK(0x11d89890u, _esp0);
  ESP += 4; return;
}

/* FUN_10009990 @ 0x11d89990 (47 bytes, 17 insns) */
void f_11d89990(void) {
  FTRACE(0x11d89990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89990 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89991 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89996 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11d8999a jb 0x11d899b0 */
  if (C.cf) goto L_11d899b0;
L_11d8999c:;
  /* 11d8999c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d899a2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d899a7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11d899a9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899ae jae 0x11d8999c */
  if (!C.cf) goto L_11d8999c;
L_11d899b0:;
  /* 11d899b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d899b2 mov eax, esp */
  EAX = (ESP);
  /* 11d899b4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11d899b6 mov esp, ecx */
  ESP = (ECX);
  /* 11d899b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d899ba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d899bd push eax */
  push32((uint32_t)(EAX));
  /* 11d899be ret  */
  ESPCHK(0x11d89990u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x11d899c0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11d899c0(void) {
  FTRACE(0x11d899c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d899c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d899c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d899c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d899c6 push esi */
  push32((uint32_t)(ESI));
  /* 11d899c7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899cb je 0x11d899d3 */
  if (C.zf) goto L_11d899d3;
  /* 11d899cd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899d1 jne 0x11d899d8 */
  if (!C.zf) goto L_11d899d8;
L_11d899d3:;
  /* 11d899d3 jmp 0x11d89ba8 */
  goto L_11d89ba8;
L_11d899d8:;
  /* 11d899d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899dc je 0x11d899f4 */
  if (C.zf) goto L_11d899f4;
  /* 11d899de cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899e2 je 0x11d899f4 */
  if (C.zf) goto L_11d899f4;
  /* 11d899e4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899e8 je 0x11d899f4 */
  if (C.zf) goto L_11d899f4;
  /* 11d899ea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d899ee jne 0x11d89ad1 */
  if (!C.zf) goto L_11d89ad1;
L_11d899f4:;
  /* 11d899f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d899f6 call 0x11d886f0 */
  push32(0x11d899fbu); f_11d886f0();
  /* 11d899fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d899fe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89a02 je 0x11d89a0a */
  if (C.zf) goto L_11d89a0a;
  /* 11d89a04 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89a08 jne 0x11d89a4f */
  if (!C.zf) goto L_11d89a4f;
L_11d89a0a:;
  /* 11d89a0a cmp dword ptr [0x11db196c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db196c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89a11 jne 0x11d89a4f */
  if (!C.zf) goto L_11d89a4f;
  /* 11d89a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89a15 push 0x11d89bf0 */
  push32((uint32_t)(0x11d89bf0u));
  /* 11d89a1a call dword ptr [0x11db4338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4338))), 0x11d89a20u);
  /* 11d89a20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89a23 jne 0x11d89a31 */
  if (!C.zf) goto L_11d89a31;
  /* 11d89a25 mov dword ptr [0x11db196c], 1 */
  w32((uint32_t)(0x11db196c), (0x1u));
  /* 11d89a2f jmp 0x11d89a4f */
  goto L_11d89a4f;
L_11d89a31:;
  /* 11d89a31 call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d89a37u);
  /* 11d89a37 mov esi, eax */
  ESI = (EAX);
  /* 11d89a39 call 0x11d8e6d0 */
  push32(0x11d89a3eu); f_11d8e6d0();
  /* 11d89a3e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11d89a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89a42 call 0x11d88790 */
  push32(0x11d89a47u); f_11d88790();
  /* 11d89a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89a4a jmp 0x11d89ba8 */
  goto L_11d89ba8;
L_11d89a4f:;
  /* 11d89a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89a52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d89a55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d89a58 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89a5b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d89a5e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89a62 ja 0x11d89ac2 */
  if ((!C.cf&&!C.zf)) goto L_11d89ac2;
  /* 11d89a64 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d89a67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d89a69 mov dl, byte ptr [eax + 0x11d89bcf] */
  DL = (r8((uint32_t)(EAX + 0x11d89bcf)));
  /* 11d89a6f jmp dword ptr [edx*4 + 0x11d89bbb] */
  switch (EDX) {
    case 0: goto L_11d89a76;
    case 1: goto L_11d89ab0;
    case 2: goto L_11d89a8a;
    case 3: goto L_11d89a9d;
    case 4: goto L_11d89ac2;
    default: x86_unimpl("switch@0x11d89a6f out of table"); return;
  }
L_11d89a76:;
  /* 11d89a76 mov ecx, dword ptr [0x11db195c] */
  ECX = (r32((uint32_t)(0x11db195c)));
  /* 11d89a7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d89a7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89a82 mov dword ptr [0x11db195c], edx */
  w32((uint32_t)(0x11db195c), (EDX));
  /* 11d89a88 jmp 0x11d89ac2 */
  goto L_11d89ac2;
L_11d89a8a:;
  /* 11d89a8a mov eax, dword ptr [0x11db1960] */
  EAX = (r32((uint32_t)(0x11db1960)));
  /* 11d89a8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89a92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89a95 mov dword ptr [0x11db1960], ecx */
  w32((uint32_t)(0x11db1960), (ECX));
  /* 11d89a9b jmp 0x11d89ac2 */
  goto L_11d89ac2;
L_11d89a9d:;
  /* 11d89a9d mov edx, dword ptr [0x11db1964] */
  EDX = (r32((uint32_t)(0x11db1964)));
  /* 11d89aa3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d89aa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89aa9 mov dword ptr [0x11db1964], eax */
  w32((uint32_t)(0x11db1964), (EAX));
  /* 11d89aae jmp 0x11d89ac2 */
  goto L_11d89ac2;
L_11d89ab0:;
  /* 11d89ab0 mov ecx, dword ptr [0x11db1968] */
  ECX = (r32((uint32_t)(0x11db1968)));
  /* 11d89ab6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d89ab9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89abc mov dword ptr [0x11db1968], edx */
  w32((uint32_t)(0x11db1968), (EDX));
L_11d89ac2:;
  /* 11d89ac2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89ac4 call 0x11d88790 */
  push32(0x11d89ac9u); f_11d88790();
  /* 11d89ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89acc jmp 0x11d89ba3 */
  goto L_11d89ba3;
L_11d89ad1:;
  /* 11d89ad1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89ad5 je 0x11d89ae8 */
  if (C.zf) goto L_11d89ae8;
  /* 11d89ad7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89adb je 0x11d89ae8 */
  if (C.zf) goto L_11d89ae8;
  /* 11d89add cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89ae1 je 0x11d89ae8 */
  if (C.zf) goto L_11d89ae8;
  /* 11d89ae3 jmp 0x11d89ba8 */
  goto L_11d89ba8;
L_11d89ae8:;
  /* 11d89ae8 call 0x11d84a70 */
  push32(0x11d89aedu); f_11d84a70();
  /* 11d89aed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d89af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89af3 cmp dword ptr [eax + 0x50], 0x11dafc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11dafc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89afa jne 0x11d89b45 */
  if (!C.zf) goto L_11d89b45;
  /* 11d89afc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11d89b01 push 0x11dad270 */
  push32((uint32_t)(0x11dad270u));
  /* 11d89b06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d89b08 mov ecx, dword ptr [0x11dafc80] */
  ECX = (r32((uint32_t)(0x11dafc80)));
  /* 11d89b0e push ecx */
  push32((uint32_t)(ECX));
  /* 11d89b0f call 0x11d85ad0 */
  push32(0x11d89b14u); f_11d85ad0();
  /* 11d89b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89b1a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11d89b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89b20 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89b24 je 0x11d89b43 */
  if (C.zf) goto L_11d89b43;
  /* 11d89b26 mov ecx, dword ptr [0x11dafc80] */
  ECX = (r32((uint32_t)(0x11dafc80)));
  /* 11d89b2c push ecx */
  push32((uint32_t)(ECX));
  /* 11d89b2d push 0x11dafc00 */
  push32((uint32_t)(0x11dafc00u));
  /* 11d89b32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89b35 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11d89b38 push eax */
  push32((uint32_t)(EAX));
  /* 11d89b39 call 0x11d8ccf0 */
  push32(0x11d89b3eu); f_11d8ccf0();
  /* 11d89b3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89b41 jmp 0x11d89b45 */
  goto L_11d89b45;
L_11d89b43:;
  /* 11d89b43 jmp 0x11d89ba8 */
  goto L_11d89ba8;
L_11d89b45:;
  /* 11d89b45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89b48 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d89b4b push edx */
  push32((uint32_t)(EDX));
  /* 11d89b4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89b4f push eax */
  push32((uint32_t)(EAX));
  /* 11d89b50 call 0x11d89ed0 */
  push32(0x11d89b55u); f_11d89ed0();
  /* 11d89b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89b58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d89b5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89b5f jne 0x11d89b63 */
  if (!C.zf) goto L_11d89b63;
  /* 11d89b61 jmp 0x11d89ba8 */
  goto L_11d89ba8;
L_11d89b63:;
  /* 11d89b63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89b66 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d89b69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d89b6c:;
  /* 11d89b6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89b6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d89b72 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89b75 jne 0x11d89ba3 */
  if (!C.zf) goto L_11d89ba3;
  /* 11d89b77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89b7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89b7d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d89b80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89b83 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89b86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d89b89 mov edx, dword ptr [0x11dafc84] */
  EDX = (r32((uint32_t)(0x11dafc84)));
  /* 11d89b8f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89b92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89b95 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11d89b98 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89b9a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89b9d jb 0x11d89ba1 */
  if (C.cf) goto L_11d89ba1;
  /* 11d89b9f jmp 0x11d89ba3 */
  goto L_11d89ba3;
L_11d89ba1:;
  /* 11d89ba1 jmp 0x11d89b6c */
  goto L_11d89b6c;
L_11d89ba3:;
  /* 11d89ba3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89ba6 jmp 0x11d89bb6 */
  goto L_11d89bb6;
L_11d89ba8:;
  /* 11d89ba8 call 0x11d8e6c0 */
  push32(0x11d89badu); f_11d8e6c0();
  /* 11d89bad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11d89bb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d89bb6:;
  /* 11d89bb6 pop esi */
  ESI = (pop32());
  /* 11d89bb7 mov esp, ebp */
  ESP = (EBP);
  /* 11d89bb9 pop ebp */
  EBP = (pop32());
  /* 11d89bba ret  */
  ESPCHK(0x11d899c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bf0 @ 0x11d89bf0 (146 bytes, 45 insns) */
void f_11d89bf0(void) {
  FTRACE(0x11d89bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11d89bf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89bf8 call 0x11d886f0 */
  push32(0x11d89bfdu); f_11d886f0();
  /* 11d89bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89c00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89c04 jne 0x11d89c1e */
  if (!C.zf) goto L_11d89c1e;
  /* 11d89c06 mov dword ptr [ebp - 8], 0x11db195c */
  w32((uint32_t)(EBP + -0x8), (0x11db195cu));
  /* 11d89c0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89c10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d89c12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d89c15 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d89c1c jmp 0x11d89c34 */
  goto L_11d89c34;
L_11d89c1e:;
  /* 11d89c1e mov dword ptr [ebp - 8], 0x11db1960 */
  w32((uint32_t)(EBP + -0x8), (0x11db1960u));
  /* 11d89c25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89c28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d89c2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89c2d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11d89c34:;
  /* 11d89c34 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89c38 jne 0x11d89c48 */
  if (!C.zf) goto L_11d89c48;
  /* 11d89c3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89c3c call 0x11d88790 */
  push32(0x11d89c41u); f_11d88790();
  /* 11d89c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89c46 jmp 0x11d89c7c */
  goto L_11d89c7c;
L_11d89c48:;
  /* 11d89c48 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89c4c je 0x11d89c6d */
  if (C.zf) goto L_11d89c6d;
  /* 11d89c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89c51 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11d89c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89c59 call 0x11d88790 */
  push32(0x11d89c5eu); f_11d88790();
  /* 11d89c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89c64 push edx */
  push32((uint32_t)(EDX));
  /* 11d89c65 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11d89c68u);
  /* 11d89c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89c6b jmp 0x11d89c77 */
  goto L_11d89c77;
L_11d89c6d:;
  /* 11d89c6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89c6f call 0x11d88790 */
  push32(0x11d89c74u); f_11d88790();
  /* 11d89c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d89c77:;
  /* 11d89c77 mov eax, 1 */
  EAX = (0x1u);
L_11d89c7c:;
  /* 11d89c7c mov esp, ebp */
  ESP = (EBP);
  /* 11d89c7e pop ebp */
  EBP = (pop32());
  /* 11d89c7f ret 4 */
  ESPCHK(0x11d89bf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009c90 @ 0x11d89c90 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11d89c90(void) {
  FTRACE(0x11d89c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89c91 mov ebp, esp */
  EBP = (ESP);
  /* 11d89c93 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89c96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d89c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89ca0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d89ca3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d89ca6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89ca9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d89cac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89cb0 ja 0x11d89d5e */
  if ((!C.cf&&!C.zf)) goto L_11d89d5e;
  /* 11d89cb6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d89cb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d89cbb mov dl, byte ptr [eax + 0x11d89eb2] */
  DL = (r8((uint32_t)(EAX + 0x11d89eb2)));
  /* 11d89cc1 jmp dword ptr [edx*4 + 0x11d89e9a] */
  switch (EDX) {
    case 0: goto L_11d89cc8;
    case 1: goto L_11d89d33;
    case 2: goto L_11d89d19;
    case 3: goto L_11d89ce5;
    case 4: goto L_11d89cff;
    case 5: goto L_11d89d5e;
    default: x86_unimpl("switch@0x11d89cc1 out of table"); return;
  }
L_11d89cc8:;
  /* 11d89cc8 mov dword ptr [ebp - 0x18], 0x11db195c */
  w32((uint32_t)(EBP + -0x18), (0x11db195cu));
  /* 11d89ccf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d89cd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d89cd4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d89cd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89cda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89cdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89ce0 jmp 0x11d89d66 */
  goto L_11d89d66;
L_11d89ce5:;
  /* 11d89ce5 mov dword ptr [ebp - 0x18], 0x11db1960 */
  w32((uint32_t)(EBP + -0x18), (0x11db1960u));
  /* 11d89cec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d89cef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d89cf1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d89cf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89cf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89cfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89cfd jmp 0x11d89d66 */
  goto L_11d89d66;
L_11d89cff:;
  /* 11d89cff mov dword ptr [ebp - 0x18], 0x11db1964 */
  w32((uint32_t)(EBP + -0x18), (0x11db1964u));
  /* 11d89d06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d89d09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d89d0b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d89d0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89d11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89d14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89d17 jmp 0x11d89d66 */
  goto L_11d89d66;
L_11d89d19:;
  /* 11d89d19 mov dword ptr [ebp - 0x18], 0x11db1968 */
  w32((uint32_t)(EBP + -0x18), (0x11db1968u));
  /* 11d89d20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d89d23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d89d25 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d89d28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d89d2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89d2e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d89d31 jmp 0x11d89d66 */
  goto L_11d89d66;
L_11d89d33:;
  /* 11d89d33 call 0x11d84a70 */
  push32(0x11d89d38u); f_11d84a70();
  /* 11d89d38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d89d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89d3e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d89d41 push edx */
  push32((uint32_t)(EDX));
  /* 11d89d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89d45 push eax */
  push32((uint32_t)(EAX));
  /* 11d89d46 call 0x11d89ed0 */
  push32(0x11d89d4bu); f_11d89ed0();
  /* 11d89d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89d4e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89d51 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d89d54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d89d57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d89d59 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d89d5c jmp 0x11d89d66 */
  goto L_11d89d66;
L_11d89d5e:;
  /* 11d89d5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d89d61 jmp 0x11d89e96 */
  goto L_11d89e96;
L_11d89d66:;
  /* 11d89d66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89d6a je 0x11d89d76 */
  if (C.zf) goto L_11d89d76;
  /* 11d89d6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89d6e call 0x11d886f0 */
  push32(0x11d89d73u); f_11d886f0();
  /* 11d89d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d89d76:;
  /* 11d89d76 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89d7a jne 0x11d89d93 */
  if (!C.zf) goto L_11d89d93;
  /* 11d89d7c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89d80 je 0x11d89d8c */
  if (C.zf) goto L_11d89d8c;
  /* 11d89d82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89d84 call 0x11d88790 */
  push32(0x11d89d89u); f_11d88790();
  /* 11d89d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d89d8c:;
  /* 11d89d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89d8e jmp 0x11d89e96 */
  goto L_11d89e96;
L_11d89d93:;
  /* 11d89d93 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89d97 jne 0x11d89db0 */
  if (!C.zf) goto L_11d89db0;
  /* 11d89d99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89d9d je 0x11d89da9 */
  if (C.zf) goto L_11d89da9;
  /* 11d89d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89da1 call 0x11d88790 */
  push32(0x11d89da6u); f_11d88790();
  /* 11d89da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d89da9:;
  /* 11d89da9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d89dab call 0x11d85540 */
  push32(0x11d89db0u); f_11d85540();
L_11d89db0:;
  /* 11d89db0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89db4 je 0x11d89dc2 */
  if (C.zf) goto L_11d89dc2;
  /* 11d89db6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89dba je 0x11d89dc2 */
  if (C.zf) goto L_11d89dc2;
  /* 11d89dbc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89dc0 jne 0x11d89dee */
  if (!C.zf) goto L_11d89dee;
L_11d89dc2:;
  /* 11d89dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89dc5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11d89dc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d89dcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89dce mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11d89dd5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89dd9 jne 0x11d89dee */
  if (!C.zf) goto L_11d89dee;
  /* 11d89ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89dde mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11d89de1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d89de4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89de7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11d89dee:;
  /* 11d89dee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89df2 jne 0x11d89e30 */
  if (!C.zf) goto L_11d89e30;
  /* 11d89df4 mov eax, dword ptr [0x11dafc78] */
  EAX = (r32((uint32_t)(0x11dafc78)));
  /* 11d89df9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d89dfc jmp 0x11d89e07 */
  goto L_11d89e07;
L_11d89dfe:;
  /* 11d89dfe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d89e01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89e04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d89e07:;
  /* 11d89e07 mov edx, dword ptr [0x11dafc78] */
  EDX = (r32((uint32_t)(0x11dafc78)));
  /* 11d89e0d add edx, dword ptr [0x11dafc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11dafc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89e13 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e16 jge 0x11d89e2e */
  if ((C.sf==C.of)) goto L_11d89e2e;
  /* 11d89e18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d89e1b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89e1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89e21 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d89e24 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11d89e2c jmp 0x11d89dfe */
  goto L_11d89dfe;
L_11d89e2e:;
  /* 11d89e2e jmp 0x11d89e39 */
  goto L_11d89e39;
L_11d89e30:;
  /* 11d89e30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d89e33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d89e39:;
  /* 11d89e39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e3d je 0x11d89e49 */
  if (C.zf) goto L_11d89e49;
  /* 11d89e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d89e41 call 0x11d88790 */
  push32(0x11d89e46u); f_11d88790();
  /* 11d89e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d89e49:;
  /* 11d89e49 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e4d jne 0x11d89e60 */
  if (!C.zf) goto L_11d89e60;
  /* 11d89e4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89e52 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11d89e55 push edx */
  push32((uint32_t)(EDX));
  /* 11d89e56 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d89e58 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11d89e5bu);
  /* 11d89e5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89e5e jmp 0x11d89e6a */
  goto L_11d89e6a;
L_11d89e60:;
  /* 11d89e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89e63 push eax */
  push32((uint32_t)(EAX));
  /* 11d89e64 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11d89e67u);
  /* 11d89e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d89e6a:;
  /* 11d89e6a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e6e je 0x11d89e7c */
  if (C.zf) goto L_11d89e7c;
  /* 11d89e70 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e74 je 0x11d89e7c */
  if (C.zf) goto L_11d89e7c;
  /* 11d89e76 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e7a jne 0x11d89e94 */
  if (!C.zf) goto L_11d89e94;
L_11d89e7c:;
  /* 11d89e7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89e7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d89e82 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11d89e85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89e89 jne 0x11d89e94 */
  if (!C.zf) goto L_11d89e94;
  /* 11d89e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89e8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89e91 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11d89e94:;
  /* 11d89e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d89e96:;
  /* 11d89e96 mov esp, ebp */
  ESP = (EBP);
  /* 11d89e98 pop ebp */
  EBP = (pop32());
  /* 11d89e99 ret  */
  ESPCHK(0x11d89c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ed0 @ 0x11d89ed0 (91 bytes, 35 insns) */
void f_11d89ed0(void) {
  FTRACE(0x11d89ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11d89ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89ed4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89ed7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d89eda:;
  /* 11d89eda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89edd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d89ee0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89ee3 je 0x11d89f03 */
  if (C.zf) goto L_11d89f03;
  /* 11d89ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89ee8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89eeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d89eee mov ecx, dword ptr [0x11dafc84] */
  ECX = (r32((uint32_t)(0x11dafc84)));
  /* 11d89ef4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89ef7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89efa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89efc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89eff jae 0x11d89f03 */
  if (!C.cf) goto L_11d89f03;
  /* 11d89f01 jmp 0x11d89eda */
  goto L_11d89eda;
L_11d89f03:;
  /* 11d89f03 mov eax, dword ptr [0x11dafc84] */
  EAX = (r32((uint32_t)(0x11dafc84)));
  /* 11d89f08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d89f0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89f0e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89f10 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89f13 jae 0x11d89f25 */
  if (!C.cf) goto L_11d89f25;
  /* 11d89f15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89f18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d89f1b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89f1e jne 0x11d89f25 */
  if (!C.zf) goto L_11d89f25;
  /* 11d89f20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89f23 jmp 0x11d89f27 */
  goto L_11d89f27;
L_11d89f25:;
  /* 11d89f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d89f27:;
  /* 11d89f27 mov esp, ebp */
  ESP = (EBP);
  /* 11d89f29 pop ebp */
  EBP = (pop32());
  /* 11d89f2a ret  */
  ESPCHK(0x11d89ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f30 @ 0x11d89f30 (13 bytes, 6 insns) */
void f_11d89f30(void) {
  FTRACE(0x11d89f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89f31 mov ebp, esp */
  EBP = (ESP);
  /* 11d89f33 call 0x11d84a70 */
  push32(0x11d89f38u); f_11d84a70();
  /* 11d89f38 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89f3b pop ebp */
  EBP = (pop32());
  /* 11d89f3c ret  */
  ESPCHK(0x11d89f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f40 @ 0x11d89f40 (13 bytes, 6 insns) */
void f_11d89f40(void) {
  FTRACE(0x11d89f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89f41 mov ebp, esp */
  EBP = (ESP);
  /* 11d89f43 call 0x11d84a70 */
  push32(0x11d89f48u); f_11d84a70();
  /* 11d89f48 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d89f4b pop ebp */
  EBP = (pop32());
  /* 11d89f4c ret  */
  ESPCHK(0x11d89f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x11d89f50 (187 bytes, 54 insns) */
void f_11d89f50(void) {
  FTRACE(0x11d89f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d89f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d89f51 mov ebp, esp */
  EBP = (ESP);
  /* 11d89f53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d89f56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d89f5d cmp dword ptr [0x11db1970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89f64 jne 0x11d89fc3 */
  if (!C.zf) goto L_11d89fc3;
  /* 11d89f66 push 0x11dac654 */
  push32((uint32_t)(0x11dac654u));
  /* 11d89f6b call dword ptr [0x11db43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c0))), 0x11d89f71u);
  /* 11d89f71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d89f74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89f78 je 0x11d89f97 */
  if (C.zf) goto L_11d89f97;
  /* 11d89f7a push 0x11dad2a0 */
  push32((uint32_t)(0x11dad2a0u));
  /* 11d89f7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89f82 push eax */
  push32((uint32_t)(EAX));
  /* 11d89f83 call dword ptr [0x11db43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43bc))), 0x11d89f89u);
  /* 11d89f89 mov dword ptr [0x11db1970], eax */
  w32((uint32_t)(0x11db1970), (EAX));
  /* 11d89f8e cmp dword ptr [0x11db1970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89f95 jne 0x11d89f9b */
  if (!C.zf) goto L_11d89f9b;
L_11d89f97:;
  /* 11d89f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d89f99 jmp 0x11d8a007 */
  goto L_11d8a007;
L_11d89f9b:;
  /* 11d89f9b push 0x11dad290 */
  push32((uint32_t)(0x11dad290u));
  /* 11d89fa0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89fa4 call dword ptr [0x11db43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43bc))), 0x11d89faau);
  /* 11d89faa mov dword ptr [0x11db1974], eax */
  w32((uint32_t)(0x11db1974), (EAX));
  /* 11d89faf push 0x11dad27c */
  push32((uint32_t)(0x11dad27cu));
  /* 11d89fb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d89fb7 push edx */
  push32((uint32_t)(EDX));
  /* 11d89fb8 call dword ptr [0x11db43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43bc))), 0x11d89fbeu);
  /* 11d89fbe mov dword ptr [0x11db1978], eax */
  w32((uint32_t)(0x11db1978), (EAX));
L_11d89fc3:;
  /* 11d89fc3 cmp dword ptr [0x11db1974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89fca je 0x11d89fd5 */
  if (C.zf) goto L_11d89fd5;
  /* 11d89fcc call dword ptr [0x11db1974] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1974))), 0x11d89fd2u);
  /* 11d89fd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d89fd5:;
  /* 11d89fd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89fd9 je 0x11d89ff1 */
  if (C.zf) goto L_11d89ff1;
  /* 11d89fdb cmp dword ptr [0x11db1978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d89fe2 je 0x11d89ff1 */
  if (C.zf) goto L_11d89ff1;
  /* 11d89fe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d89fe7 push eax */
  push32((uint32_t)(EAX));
  /* 11d89fe8 call dword ptr [0x11db1978] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1978))), 0x11d89feeu);
  /* 11d89fee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d89ff1:;
  /* 11d89ff1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d89ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d89ff5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d89ff8 push edx */
  push32((uint32_t)(EDX));
  /* 11d89ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d89ffc push eax */
  push32((uint32_t)(EAX));
  /* 11d89ffd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a000 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a001 call dword ptr [0x11db1970] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1970))), 0x11d8a007u);
L_11d8a007:;
  /* 11d8a007 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a009 pop ebp */
  EBP = (pop32());
  /* 11d8a00a ret  */
  ESPCHK(0x11d89f50u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11d8a010 (254 bytes, 109 insns) */
void f_11d8a010(void) {
  FTRACE(0x11d8a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a010 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d8a014 push edi */
  push32((uint32_t)(EDI));
  /* 11d8a015 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8a017 je 0x11d8a093 */
  if (C.zf) goto L_11d8a093;
  /* 11d8a019 push esi */
  push32((uint32_t)(ESI));
  /* 11d8a01a push ebx */
  push32((uint32_t)(EBX));
  /* 11d8a01b mov ebx, ecx */
  EBX = (ECX);
  /* 11d8a01d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11d8a021 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11d8a027 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8a02b jne 0x11d8a034 */
  if (!C.zf) goto L_11d8a034;
  /* 11d8a02d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8a030 jne 0x11d8a0a1 */
  if (!C.zf) goto L_11d8a0a1;
  /* 11d8a032 jmp 0x11d8a055 */
  goto L_11d8a055;
L_11d8a034:;
  /* 11d8a034 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8a036 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d8a037 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8a039 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8a03a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d8a03b je 0x11d8a062 */
  if (C.zf) goto L_11d8a062;
  /* 11d8a03d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d8a03f je 0x11d8a06a */
  if (C.zf) goto L_11d8a06a;
  /* 11d8a041 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11d8a047 jne 0x11d8a034 */
  if (!C.zf) goto L_11d8a034;
  /* 11d8a049 mov ebx, ecx */
  EBX = (ECX);
  /* 11d8a04b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8a04e jne 0x11d8a0a1 */
  if (!C.zf) goto L_11d8a0a1;
L_11d8a050:;
  /* 11d8a050 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11d8a053 je 0x11d8a062 */
  if (C.zf) goto L_11d8a062;
L_11d8a055:;
  /* 11d8a055 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8a057 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d8a058 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8a05a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8a05b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d8a05d je 0x11d8a08e */
  if (C.zf) goto L_11d8a08e;
  /* 11d8a05f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d8a060 jne 0x11d8a055 */
  if (!C.zf) goto L_11d8a055;
L_11d8a062:;
  /* 11d8a062 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8a066 pop ebx */
  EBX = (pop32());
  /* 11d8a067 pop esi */
  ESI = (pop32());
  /* 11d8a068 pop edi */
  EDI = (pop32());
  /* 11d8a069 ret  */
  ESPCHK(0x11d8a010u, _esp0);
  ESP += 4; return;
L_11d8a06a:;
  /* 11d8a06a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d8a070 je 0x11d8a084 */
  if (C.zf) goto L_11d8a084;
L_11d8a072:;
  /* 11d8a072 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8a074 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8a075 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d8a076 je 0x11d8a106 */
  if (C.zf) goto L_11d8a106;
  /* 11d8a07c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d8a082 jne 0x11d8a072 */
  if (!C.zf) goto L_11d8a072;
L_11d8a084:;
  /* 11d8a084 mov ebx, ecx */
  EBX = (ECX);
  /* 11d8a086 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8a089 jne 0x11d8a0f7 */
  if (!C.zf) goto L_11d8a0f7;
L_11d8a08b:;
  /* 11d8a08b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8a08d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11d8a08e:;
  /* 11d8a08e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d8a08f jne 0x11d8a08b */
  if (!C.zf) goto L_11d8a08b;
  /* 11d8a091 pop ebx */
  EBX = (pop32());
  /* 11d8a092 pop esi */
  ESI = (pop32());
L_11d8a093:;
  /* 11d8a093 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8a097 pop edi */
  EDI = (pop32());
  /* 11d8a098 ret  */
  ESPCHK(0x11d8a010u, _esp0);
  ESP += 4; return;
L_11d8a099:;
  /* 11d8a099 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d8a09b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a09e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d8a09f je 0x11d8a050 */
  if (C.zf) goto L_11d8a050;
L_11d8a0a1:;
  /* 11d8a0a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d8a0a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d8a0a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a0aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a0ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a0af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11d8a0b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a0b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d8a0b9 je 0x11d8a099 */
  if (C.zf) goto L_11d8a099;
  /* 11d8a0bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d8a0bd je 0x11d8a0eb */
  if (C.zf) goto L_11d8a0eb;
  /* 11d8a0bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d8a0c1 je 0x11d8a0e1 */
  if (C.zf) goto L_11d8a0e1;
  /* 11d8a0c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d8a0c9 je 0x11d8a0d7 */
  if (C.zf) goto L_11d8a0d7;
  /* 11d8a0cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d8a0d1 jne 0x11d8a099 */
  if (!C.zf) goto L_11d8a099;
  /* 11d8a0d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d8a0d5 jmp 0x11d8a0ef */
  goto L_11d8a0ef;
L_11d8a0d7:;
  /* 11d8a0d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a0dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d8a0df jmp 0x11d8a0ef */
  goto L_11d8a0ef;
L_11d8a0e1:;
  /* 11d8a0e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a0e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d8a0e9 jmp 0x11d8a0ef */
  goto L_11d8a0ef;
L_11d8a0eb:;
  /* 11d8a0eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a0ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11d8a0ef:;
  /* 11d8a0ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a0f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a0f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d8a0f5 je 0x11d8a101 */
  if (C.zf) goto L_11d8a101;
L_11d8a0f7:;
  /* 11d8a0f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8a0f9:;
  /* 11d8a0f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d8a0fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a0fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d8a0ff jne 0x11d8a0f9 */
  if (!C.zf) goto L_11d8a0f9;
L_11d8a101:;
  /* 11d8a101 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11d8a104 jne 0x11d8a08b */
  if (!C.zf) goto L_11d8a08b;
L_11d8a106:;
  /* 11d8a106 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8a10a pop ebx */
  EBX = (pop32());
  /* 11d8a10b pop esi */
  ESI = (pop32());
  /* 11d8a10c pop edi */
  EDI = (pop32());
  /* 11d8a10d ret  */
  ESPCHK(0x11d8a010u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11d8a110 (48 bytes, 17 insns) */
void f_11d8a110(void) {
  FTRACE(0x11d8a110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a110 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a111 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a113 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a114 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a116 call 0x11d886f0 */
  push32(0x11d8a11bu); f_11d886f0();
  /* 11d8a11b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a11e mov eax, dword ptr [0x11db1980] */
  EAX = (r32((uint32_t)(0x11db1980)));
  /* 11d8a123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8a126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a129 mov dword ptr [0x11db1980], ecx */
  w32((uint32_t)(0x11db1980), (ECX));
  /* 11d8a12f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a131 call 0x11d88790 */
  push32(0x11d8a136u); f_11d88790();
  /* 11d8a136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a13c mov esp, ebp */
  ESP = (EBP);
  /* 11d8a13e pop ebp */
  EBP = (pop32());
  /* 11d8a13f ret  */
  ESPCHK(0x11d8a110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a140 @ 0x11d8a140 (10 bytes, 5 insns) */
void f_11d8a140(void) {
  FTRACE(0x11d8a140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a140 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a141 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a143 mov eax, dword ptr [0x11db1980] */
  EAX = (r32((uint32_t)(0x11db1980)));
  /* 11d8a148 pop ebp */
  EBP = (pop32());
  /* 11d8a149 ret  */
  ESPCHK(0x11d8a140u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11d8a150 (45 bytes, 19 insns) */
void f_11d8a150(void) {
  FTRACE(0x11d8a150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a150 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a151 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a153 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a154 mov eax, dword ptr [0x11db1980] */
  EAX = (r32((uint32_t)(0x11db1980)));
  /* 11d8a159 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8a15c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a160 je 0x11d8a170 */
  if (C.zf) goto L_11d8a170;
  /* 11d8a162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a165 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a166 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11d8a169u);
  /* 11d8a169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a16c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a16e jne 0x11d8a174 */
  if (!C.zf) goto L_11d8a174;
L_11d8a170:;
  /* 11d8a170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a172 jmp 0x11d8a179 */
  goto L_11d8a179;
L_11d8a174:;
  /* 11d8a174 mov eax, 1 */
  EAX = (0x1u);
L_11d8a179:;
  /* 11d8a179 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a17b pop ebp */
  EBP = (pop32());
  /* 11d8a17c ret  */
  ESPCHK(0x11d8a150u, _esp0);
  ESP += 4; return;
}

