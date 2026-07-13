#include "recomp.h"

/* FUN_10001000 @ 0x11f51000 (20 bytes, 6 insns) */
void f_11f51000(void) {
  FTRACE(0x11f51000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f51000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f51004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f51005 jne 0x11f5100c */
  if (!C.zf) goto L_11f5100c;
  /* 11f51007 call 0x11f51020 */
  push32(0x11f5100cu); f_11f51020();
L_11f5100c:;
  /* 11f5100c mov eax, 1 */
  EAX = (0x1u);
  /* 11f51011 ret 0xc */
  ESPCHK(0x11f51000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11f51020 (823 bytes, 223 insns) */
void f_11f51020(void) {
  FTRACE(0x11f51020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f51020 push ebx */
  push32((uint32_t)(EBX));
  /* 11f51021 push ebp */
  push32((uint32_t)(EBP));
  /* 11f51022 push esi */
  push32((uint32_t)(ESI));
  /* 11f51023 push edi */
  push32((uint32_t)(EDI));
  /* 11f51024 mov edi, dword ptr [0x11f5c174] */
  EDI = (r32((uint32_t)(0x11f5c174)));
  /* 11f5102a push 8 */
  push32((uint32_t)(0x8u));
  /* 11f5102c push 0x11f5e040 */
  push32((uint32_t)(0x11f5e040u));
  /* 11f51031 call edi */
  call_ind((uint32_t)(EDI), 0x11f51033u);
  /* 11f51033 mov ebx, dword ptr [0x11f5c178] */
  EBX = (r32((uint32_t)(0x11f5c178)));
  /* 11f51039 push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f5103e call ebx */
  call_ind((uint32_t)(EBX), 0x11f51040u);
  /* 11f51040 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f51042 push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f51047 call edi */
  call_ind((uint32_t)(EDI), 0x11f51049u);
  /* 11f51049 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f5104e call ebx */
  call_ind((uint32_t)(EBX), 0x11f51050u);
  /* 11f51050 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f51052 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51057 call edi */
  call_ind((uint32_t)(EDI), 0x11f51059u);
  /* 11f51059 push 0x1ce */
  push32((uint32_t)(0x1ceu));
  /* 11f5105e push 0x11f62840 */
  push32((uint32_t)(0x11f62840u));
  /* 11f51063 call edi */
  call_ind((uint32_t)(EDI), 0x11f51065u);
  /* 11f51065 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51068 mov esi, 0x11f62849 */
  ESI = (0x11f62849u);
  /* 11f5106d mov ebp, 0xffff */
  EBP = (0xffffu);
L_11f51072:;
  /* 11f51072 lea eax, [esi - 9] */
  EAX = ((uint32_t)(ESI + -0x9));
  /* 11f51075 push eax */
  push32((uint32_t)(EAX));
  /* 11f51076 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51078u);
  /* 11f51078 mov byte ptr [esi - 1], 1 */
  w8((uint32_t)(ESI + -0x1), (0x1u));
  /* 11f5107c mov byte ptr [esi], 1 */
  w8((uint32_t)(ESI), (0x1u));
  /* 11f5107f mov dword ptr [esi + 5], 0x640 */
  w32((uint32_t)(ESI + 0x5), (0x640u));
  /* 11f51086 mov dword ptr [esi + 9], ebp */
  w32((uint32_t)(ESI + 0x9), (EBP));
  /* 11f51089 mov dword ptr [esi + 1], 0 */
  w32((uint32_t)(ESI + 0x1), (0x0u));
  /* 11f51090 add esi, 0x16 */
  { uint32_t _a=(ESI),_b=(0x16u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51096 cmp esi, 0x11f62a17 */
  { uint32_t _a=(ESI),_b=(0x11f62a17u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5109c jl 0x11f51072 */
  if ((C.sf!=C.of)) goto L_11f51072;
  /* 11f5109e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f510a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f510a2 push 0x11f62a58 */
  push32((uint32_t)(0x11f62a58u));
  /* 11f510a7 call 0x11f52820 */
  push32(0x11f510acu); f_11f52820();
  /* 11f510ac push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f510ae push 9 */
  push32((uint32_t)(0x9u));
  /* 11f510b0 push 0x11f62a10 */
  push32((uint32_t)(0x11f62a10u));
  /* 11f510b5 call 0x11f537e0 */
  push32(0x11f510bau); f_11f537e0();
  /* 11f510ba push 0x11f5e1f0 */
  push32((uint32_t)(0x11f5e1f0u));
  /* 11f510bf push 0x11f62758 */
  push32((uint32_t)(0x11f62758u));
  /* 11f510c4 call dword ptr [0x11f5c17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c17c))), 0x11f510cau);
  /* 11f510ca mov esi, dword ptr [0x11f5c180] */
  ESI = (r32((uint32_t)(0x11f5c180)));
  /* 11f510d0 push 0x11f5e1e4 */
  push32((uint32_t)(0x11f5e1e4u));
  /* 11f510d5 push 0x11f62770 */
  push32((uint32_t)(0x11f62770u));
  /* 11f510da call esi */
  call_ind((uint32_t)(ESI), 0x11f510dcu);
  /* 11f510dc push 0x11f5e1d4 */
  push32((uint32_t)(0x11f5e1d4u));
  /* 11f510e1 push 0x11f62768 */
  push32((uint32_t)(0x11f62768u));
  /* 11f510e6 call esi */
  call_ind((uint32_t)(ESI), 0x11f510e8u);
  /* 11f510e8 push 0x11f5e1c8 */
  push32((uint32_t)(0x11f5e1c8u));
  /* 11f510ed push 0x11f62760 */
  push32((uint32_t)(0x11f62760u));
  /* 11f510f2 call esi */
  call_ind((uint32_t)(ESI), 0x11f510f4u);
  /* 11f510f4 mov ebp, dword ptr [0x11f5c184] */
  EBP = (r32((uint32_t)(0x11f5c184)));
  /* 11f510fa push 0x11f5e1bc */
  push32((uint32_t)(0x11f5e1bcu));
  /* 11f510ff push 0x11f627c0 */
  push32((uint32_t)(0x11f627c0u));
  /* 11f51104 call ebp */
  call_ind((uint32_t)(EBP), 0x11f51106u);
  /* 11f51106 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51109 push 0x11f5e1b0 */
  push32((uint32_t)(0x11f5e1b0u));
  /* 11f5110e push 0x11f627b0 */
  push32((uint32_t)(0x11f627b0u));
  /* 11f51113 call ebp */
  call_ind((uint32_t)(EBP), 0x11f51115u);
  /* 11f51115 push 0x11f5e1a4 */
  push32((uint32_t)(0x11f5e1a4u));
  /* 11f5111a push 0x11f627a0 */
  push32((uint32_t)(0x11f627a0u));
  /* 11f5111f call ebp */
  call_ind((uint32_t)(EBP), 0x11f51121u);
  /* 11f51121 push 0x11f5e198 */
  push32((uint32_t)(0x11f5e198u));
  /* 11f51126 push 0x11f62790 */
  push32((uint32_t)(0x11f62790u));
  /* 11f5112b call ebp */
  call_ind((uint32_t)(EBP), 0x11f5112du);
  /* 11f5112d push 0x11f5e18c */
  push32((uint32_t)(0x11f5e18cu));
  /* 11f51132 push 0x11f62780 */
  push32((uint32_t)(0x11f62780u));
  /* 11f51137 call ebp */
  call_ind((uint32_t)(EBP), 0x11f51139u);
  /* 11f51139 mov esi, dword ptr [0x11f5c188] */
  ESI = (r32((uint32_t)(0x11f5c188)));
  /* 11f5113f push 0x11f5e180 */
  push32((uint32_t)(0x11f5e180u));
  /* 11f51144 push 0x11f627b8 */
  push32((uint32_t)(0x11f627b8u));
  /* 11f51149 call esi */
  call_ind((uint32_t)(ESI), 0x11f5114bu);
  /* 11f5114b push 0x11f5e174 */
  push32((uint32_t)(0x11f5e174u));
  /* 11f51150 push 0x11f627a8 */
  push32((uint32_t)(0x11f627a8u));
  /* 11f51155 call esi */
  call_ind((uint32_t)(ESI), 0x11f51157u);
  /* 11f51157 push 0x11f5e168 */
  push32((uint32_t)(0x11f5e168u));
  /* 11f5115c push 0x11f62798 */
  push32((uint32_t)(0x11f62798u));
  /* 11f51161 call esi */
  call_ind((uint32_t)(ESI), 0x11f51163u);
  /* 11f51163 push 0x11f5e15c */
  push32((uint32_t)(0x11f5e15cu));
  /* 11f51168 push 0x11f62788 */
  push32((uint32_t)(0x11f62788u));
  /* 11f5116d call esi */
  call_ind((uint32_t)(ESI), 0x11f5116fu);
  /* 11f5116f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51172 push 0x11f5e150 */
  push32((uint32_t)(0x11f5e150u));
  /* 11f51177 push 0x11f62778 */
  push32((uint32_t)(0x11f62778u));
  /* 11f5117c call esi */
  call_ind((uint32_t)(ESI), 0x11f5117eu);
  /* 11f5117e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f51180 push 0x11f62828 */
  push32((uint32_t)(0x11f62828u));
  /* 11f51185 call edi */
  call_ind((uint32_t)(EDI), 0x11f51187u);
  /* 11f51187 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f51189 push 0x11f62810 */
  push32((uint32_t)(0x11f62810u));
  /* 11f5118e call edi */
  call_ind((uint32_t)(EDI), 0x11f51190u);
  /* 11f51190 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f51192 push 0x11f627f8 */
  push32((uint32_t)(0x11f627f8u));
  /* 11f51197 call edi */
  call_ind((uint32_t)(EDI), 0x11f51199u);
  /* 11f51199 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f5119b push 0x11f627c8 */
  push32((uint32_t)(0x11f627c8u));
  /* 11f511a0 call edi */
  call_ind((uint32_t)(EDI), 0x11f511a2u);
  /* 11f511a2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f511a4 push 0x11f627e0 */
  push32((uint32_t)(0x11f627e0u));
  /* 11f511a9 call edi */
  call_ind((uint32_t)(EDI), 0x11f511abu);
  /* 11f511ab push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f511b0 call ebx */
  call_ind((uint32_t)(EBX), 0x11f511b2u);
  /* 11f511b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f511b4 push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f511b9 call edi */
  call_ind((uint32_t)(EDI), 0x11f511bbu);
  /* 11f511bb push 4 */
  push32((uint32_t)(0x4u));
  /* 11f511bd push 0x11f62afc */
  push32((uint32_t)(0x11f62afcu));
  /* 11f511c2 call edi */
  call_ind((uint32_t)(EDI), 0x11f511c4u);
  /* 11f511c4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f511c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f511c9 push 0x11f62b00 */
  push32((uint32_t)(0x11f62b00u));
  /* 11f511ce call edi */
  call_ind((uint32_t)(EDI), 0x11f511d0u);
  /* 11f511d0 push 0x11f5e144 */
  push32((uint32_t)(0x11f5e144u));
  /* 11f511d5 push 0x11f62720 */
  push32((uint32_t)(0x11f62720u));
  /* 11f511da call esi */
  call_ind((uint32_t)(ESI), 0x11f511dcu);
  /* 11f511dc push 0x11f5e138 */
  push32((uint32_t)(0x11f5e138u));
  /* 11f511e1 push 0x11f62728 */
  push32((uint32_t)(0x11f62728u));
  /* 11f511e6 call esi */
  call_ind((uint32_t)(ESI), 0x11f511e8u);
  /* 11f511e8 push 0x11f5e12c */
  push32((uint32_t)(0x11f5e12cu));
  /* 11f511ed push 0x11f62730 */
  push32((uint32_t)(0x11f62730u));
  /* 11f511f2 call esi */
  call_ind((uint32_t)(ESI), 0x11f511f4u);
  /* 11f511f4 push 0x11f5e120 */
  push32((uint32_t)(0x11f5e120u));
  /* 11f511f9 push 0x11f62738 */
  push32((uint32_t)(0x11f62738u));
  /* 11f511fe call esi */
  call_ind((uint32_t)(ESI), 0x11f51200u);
  /* 11f51200 push 0x11f5e114 */
  push32((uint32_t)(0x11f5e114u));
  /* 11f51205 push 0x11f62740 */
  push32((uint32_t)(0x11f62740u));
  /* 11f5120a call esi */
  call_ind((uint32_t)(ESI), 0x11f5120cu);
  /* 11f5120c push 0x11f5e108 */
  push32((uint32_t)(0x11f5e108u));
  /* 11f51211 push 0x11f62748 */
  push32((uint32_t)(0x11f62748u));
  /* 11f51216 call esi */
  call_ind((uint32_t)(ESI), 0x11f51218u);
  /* 11f51218 push 0x11f5e100 */
  push32((uint32_t)(0x11f5e100u));
  /* 11f5121d push 0x11f62700 */
  push32((uint32_t)(0x11f62700u));
  /* 11f51222 call esi */
  call_ind((uint32_t)(ESI), 0x11f51224u);
  /* 11f51224 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51227 push 0x11f5e0f8 */
  push32((uint32_t)(0x11f5e0f8u));
  /* 11f5122c push 0x11f62708 */
  push32((uint32_t)(0x11f62708u));
  /* 11f51231 call esi */
  call_ind((uint32_t)(ESI), 0x11f51233u);
  /* 11f51233 push 0x11f5e0f0 */
  push32((uint32_t)(0x11f5e0f0u));
  /* 11f51238 push 0x11f62710 */
  push32((uint32_t)(0x11f62710u));
  /* 11f5123d call esi */
  call_ind((uint32_t)(ESI), 0x11f5123fu);
  /* 11f5123f push 0x11f5e0e8 */
  push32((uint32_t)(0x11f5e0e8u));
  /* 11f51244 push 0x11f62718 */
  push32((uint32_t)(0x11f62718u));
  /* 11f51249 call esi */
  call_ind((uint32_t)(ESI), 0x11f5124bu);
  /* 11f5124b push 0x11f5e0e0 */
  push32((uint32_t)(0x11f5e0e0u));
  /* 11f51250 push 0x11f626e8 */
  push32((uint32_t)(0x11f626e8u));
  /* 11f51255 call esi */
  call_ind((uint32_t)(ESI), 0x11f51257u);
  /* 11f51257 push 0x11f5e0d8 */
  push32((uint32_t)(0x11f5e0d8u));
  /* 11f5125c push 0x11f626f0 */
  push32((uint32_t)(0x11f626f0u));
  /* 11f51261 call esi */
  call_ind((uint32_t)(ESI), 0x11f51263u);
  /* 11f51263 push 0x11f5e0d0 */
  push32((uint32_t)(0x11f5e0d0u));
  /* 11f51268 push 0x11f626f8 */
  push32((uint32_t)(0x11f626f8u));
  /* 11f5126d call esi */
  call_ind((uint32_t)(ESI), 0x11f5126fu);
  /* 11f5126f push 0x11f5e0c4 */
  push32((uint32_t)(0x11f5e0c4u));
  /* 11f51274 push 0x11f626d0 */
  push32((uint32_t)(0x11f626d0u));
  /* 11f51279 call esi */
  call_ind((uint32_t)(ESI), 0x11f5127bu);
  /* 11f5127b push 0x11f5e0b8 */
  push32((uint32_t)(0x11f5e0b8u));
  /* 11f51280 push 0x11f626d8 */
  push32((uint32_t)(0x11f626d8u));
  /* 11f51285 call esi */
  call_ind((uint32_t)(ESI), 0x11f51287u);
  /* 11f51287 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5128a push 0x11f5e0ac */
  push32((uint32_t)(0x11f5e0acu));
  /* 11f5128f push 0x11f626e0 */
  push32((uint32_t)(0x11f626e0u));
  /* 11f51294 call esi */
  call_ind((uint32_t)(ESI), 0x11f51296u);
  /* 11f51296 push 0x11f5e0a4 */
  push32((uint32_t)(0x11f5e0a4u));
  /* 11f5129b push 0x11f626b8 */
  push32((uint32_t)(0x11f626b8u));
  /* 11f512a0 call esi */
  call_ind((uint32_t)(ESI), 0x11f512a2u);
  /* 11f512a2 push 0x11f5e09c */
  push32((uint32_t)(0x11f5e09cu));
  /* 11f512a7 push 0x11f626c0 */
  push32((uint32_t)(0x11f626c0u));
  /* 11f512ac call esi */
  call_ind((uint32_t)(ESI), 0x11f512aeu);
  /* 11f512ae push 0x11f5e094 */
  push32((uint32_t)(0x11f5e094u));
  /* 11f512b3 push 0x11f626c8 */
  push32((uint32_t)(0x11f626c8u));
  /* 11f512b8 call esi */
  call_ind((uint32_t)(ESI), 0x11f512bau);
  /* 11f512ba push 4 */
  push32((uint32_t)(0x4u));
  /* 11f512bc push 0x11f62b04 */
  push32((uint32_t)(0x11f62b04u));
  /* 11f512c1 call edi */
  call_ind((uint32_t)(EDI), 0x11f512c3u);
  /* 11f512c3 push 0x11f626b0 */
  push32((uint32_t)(0x11f626b0u));
  /* 11f512c8 call ebx */
  call_ind((uint32_t)(EBX), 0x11f512cau);
  /* 11f512ca push 0x11f626a8 */
  push32((uint32_t)(0x11f626a8u));
  /* 11f512cf call ebx */
  call_ind((uint32_t)(EBX), 0x11f512d1u);
  /* 11f512d1 push 0x11f5e08c */
  push32((uint32_t)(0x11f5e08cu));
  /* 11f512d6 push 0x11f626a0 */
  push32((uint32_t)(0x11f626a0u));
  /* 11f512db call ebp */
  call_ind((uint32_t)(EBP), 0x11f512ddu);
  /* 11f512dd push 0x11f5e084 */
  push32((uint32_t)(0x11f5e084u));
  /* 11f512e2 push 0x11f62698 */
  push32((uint32_t)(0x11f62698u));
  /* 11f512e7 call ebp */
  call_ind((uint32_t)(EBP), 0x11f512e9u);
  /* 11f512e9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f512ec push 0x11f5e07c */
  push32((uint32_t)(0x11f5e07cu));
  /* 11f512f1 push 0x11f62690 */
  push32((uint32_t)(0x11f62690u));
  /* 11f512f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11f512f8u);
  /* 11f512f8 push 0x11f5e074 */
  push32((uint32_t)(0x11f5e074u));
  /* 11f512fd push 0x11f62688 */
  push32((uint32_t)(0x11f62688u));
  /* 11f51302 call ebp */
  call_ind((uint32_t)(EBP), 0x11f51304u);
  /* 11f51304 push 0x11f5e06c */
  push32((uint32_t)(0x11f5e06cu));
  /* 11f51309 push 0x11f62680 */
  push32((uint32_t)(0x11f62680u));
  /* 11f5130e call ebp */
  call_ind((uint32_t)(EBP), 0x11f51310u);
  /* 11f51310 push 0x11f5e064 */
  push32((uint32_t)(0x11f5e064u));
  /* 11f51315 push 0x11f62678 */
  push32((uint32_t)(0x11f62678u));
  /* 11f5131a call ebp */
  call_ind((uint32_t)(EBP), 0x11f5131cu);
  /* 11f5131c push 0x11f5e058 */
  push32((uint32_t)(0x11f5e058u));
  /* 11f51321 push 0x11f62670 */
  push32((uint32_t)(0x11f62670u));
  /* 11f51326 call dword ptr [0x11f5c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c180))), 0x11f5132cu);
  /* 11f5132c push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5132e push 0x11f5e048 */
  push32((uint32_t)(0x11f5e048u));
  /* 11f51333 call edi */
  call_ind((uint32_t)(EDI), 0x11f51335u);
  /* 11f51335 push 0x11f5e04c */
  push32((uint32_t)(0x11f5e04cu));
  /* 11f5133a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5133c call dword ptr [0x11f5c18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c18c))), 0x11f51342u);
  /* 11f51342 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51344 call 0x11f5392f */
  push32(0x11f51349u); f_11f5392f();
  /* 11f51349 push eax */
  push32((uint32_t)(EAX));
  /* 11f5134a call 0x11f53900 */
  push32(0x11f5134fu); f_11f53900();
  /* 11f5134f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51352 pop edi */
  EDI = (pop32());
  /* 11f51353 pop esi */
  ESI = (pop32());
  /* 11f51354 pop ebp */
  EBP = (pop32());
  /* 11f51355 pop ebx */
  EBX = (pop32());
  /* 11f51356 ret  */
  ESPCHK(0x11f51020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11f51360 (2666 bytes, 790 insns) [1 switch table(s)] */
void f_11f51360(void) {
  FTRACE(0x11f51360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f51360 push ebp */
  push32((uint32_t)(EBP));
  /* 11f51361 mov ebp, esp */
  EBP = (ESP);
  /* 11f51363 sub esp, 0x68 */
  { uint32_t _a=(ESP),_b=(0x68u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51366 push ebx */
  push32((uint32_t)(EBX));
  /* 11f51367 push esi */
  push32((uint32_t)(ESI));
  /* 11f51368 push edi */
  push32((uint32_t)(EDI));
  /* 11f51369 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5136b mov dword ptr [0x11f62828], 0x11f62790 */
  w32((uint32_t)(0x11f62828), (0x11f62790u));
  /* 11f51375 mov dword ptr [0x11f6282c], 0x11f62788 */
  w32((uint32_t)(0x11f6282c), (0x11f62788u));
  /* 11f5137f mov dword ptr [0x11f62810], 0x11f62780 */
  w32((uint32_t)(0x11f62810), (0x11f62780u));
  /* 11f51389 mov dword ptr [0x11f62814], 0x11f62778 */
  w32((uint32_t)(0x11f62814), (0x11f62778u));
  /* 11f51393 mov dword ptr [0x11f627f8], 0x11f627c0 */
  w32((uint32_t)(0x11f627f8), (0x11f627c0u));
  /* 11f5139d mov dword ptr [0x11f627fc], 0x11f627b8 */
  w32((uint32_t)(0x11f627fc), (0x11f627b8u));
  /* 11f513a7 mov dword ptr [0x11f627e0], 0x11f627a0 */
  w32((uint32_t)(0x11f627e0), (0x11f627a0u));
  /* 11f513b1 mov dword ptr [0x11f627e4], 0x11f62798 */
  w32((uint32_t)(0x11f627e4), (0x11f62798u));
  /* 11f513bb mov dword ptr [0x11f627c8], 0x11f627b0 */
  w32((uint32_t)(0x11f627c8), (0x11f627b0u));
  /* 11f513c5 mov dword ptr [0x11f627cc], 0x11f627a8 */
  w32((uint32_t)(0x11f627cc), (0x11f627a8u));
  /* 11f513cf call dword ptr [0x11f5c128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c128))), 0x11f513d5u);
  /* 11f513d5 mov esi, dword ptr [0x11f5c12c] */
  ESI = (r32((uint32_t)(0x11f5c12c)));
  /* 11f513db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f513de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f513e0 je 0x11f51643 */
  if (C.zf) goto L_11f51643;
  /* 11f513e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f513e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f513ea call dword ptr [0x11f5c130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c130))), 0x11f513f0u);
  /* 11f513f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f513f2 call esi */
  call_ind((uint32_t)(ESI), 0x11f513f4u);
  /* 11f513f4 mov ecx, 5 */
  ECX = (0x5u);
  /* 11f513f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f513fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f513fd mov byte ptr [0x11f62830], 1 */
  w8((uint32_t)(0x11f62830), (0x1u));
  /* 11f51404 mov dword ptr [0x11f62831], 0xa */
  w32((uint32_t)(0x11f62831), (0xau));
  /* 11f5140e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f51411 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51414 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51417 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f5141a mov dword ptr [0x11f62835], eax */
  w32((uint32_t)(0x11f62835), (EAX));
  /* 11f5141f call esi */
  call_ind((uint32_t)(ESI), 0x11f51421u);
  /* 11f51421 mov ecx, 5 */
  ECX = (0x5u);
  /* 11f51426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51428 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5142a mov byte ptr [0x11f62818], 1 */
  w8((uint32_t)(0x11f62818), (0x1u));
  /* 11f51431 mov dword ptr [0x11f62819], 0xb */
  w32((uint32_t)(0x11f62819), (0xbu));
  /* 11f5143b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f5143e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51441 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51444 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f51447 mov dword ptr [0x11f6281d], eax */
  w32((uint32_t)(0x11f6281d), (EAX));
  /* 11f5144c call esi */
  call_ind((uint32_t)(ESI), 0x11f5144eu);
  /* 11f5144e mov ecx, 5 */
  ECX = (0x5u);
  /* 11f51453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51455 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51457 mov byte ptr [0x11f62800], 1 */
  w8((uint32_t)(0x11f62800), (0x1u));
  /* 11f5145e mov dword ptr [0x11f62801], 0xc */
  w32((uint32_t)(0x11f62801), (0xcu));
  /* 11f51468 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f5146b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f5146e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51471 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f51474 mov dword ptr [0x11f62805], eax */
  w32((uint32_t)(0x11f62805), (EAX));
  /* 11f51479 call esi */
  call_ind((uint32_t)(ESI), 0x11f5147bu);
  /* 11f5147b mov ecx, 5 */
  ECX = (0x5u);
  /* 11f51480 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51482 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51484 mov byte ptr [0x11f627e8], 1 */
  w8((uint32_t)(0x11f627e8), (0x1u));
  /* 11f5148b mov dword ptr [0x11f627e9], 0xd */
  w32((uint32_t)(0x11f627e9), (0xdu));
  /* 11f51495 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f51498 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f5149b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f5149e shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f514a1 mov dword ptr [0x11f627ed], eax */
  w32((uint32_t)(0x11f627ed), (EAX));
  /* 11f514a6 call esi */
  call_ind((uint32_t)(ESI), 0x11f514a8u);
  /* 11f514a8 mov ecx, 5 */
  ECX = (0x5u);
  /* 11f514ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11f514af sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f514b1 mov byte ptr [0x11f627d0], 1 */
  w8((uint32_t)(0x11f627d0), (0x1u));
  /* 11f514b8 mov dword ptr [0x11f627d1], 0xe */
  w32((uint32_t)(0x11f627d1), (0xeu));
  /* 11f514c2 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f514c5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f514c8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f514cb shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f514ce mov dword ptr [0x11f627d5], eax */
  w32((uint32_t)(0x11f627d5), (EAX));
  /* 11f514d3 call esi */
  call_ind((uint32_t)(ESI), 0x11f514d5u);
  /* 11f514d5 mov ecx, 8 */
  ECX = (0x8u);
  /* 11f514da mov ebx, dword ptr [0x11f5c134] */
  EBX = (r32((uint32_t)(0x11f5c134)));
  /* 11f514e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f514e2 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f514e5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f514e8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f514eb shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f514ee push eax */
  push32((uint32_t)(EAX));
  /* 11f514ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11f514f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f514f3 call ebx */
  call_ind((uint32_t)(EBX), 0x11f514f5u);
  /* 11f514f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f514f7 call esi */
  call_ind((uint32_t)(ESI), 0x11f514f9u);
  /* 11f514f9 mov ecx, 5 */
  ECX = (0x5u);
  /* 11f514fe sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51500 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f51503 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51506 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f51509 shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f5150c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5150d push 3 */
  push32((uint32_t)(0x3u));
  /* 11f5150f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51511 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51513u);
  /* 11f51513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51515 call esi */
  call_ind((uint32_t)(ESI), 0x11f51517u);
  /* 11f51517 mov ecx, 8 */
  ECX = (0x8u);
  /* 11f5151c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5151f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51521 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f51524 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51527 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f5152a shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11f5152d push edx */
  push32((uint32_t)(EDX));
  /* 11f5152e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f51530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51532 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51534u);
  /* 11f51534 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51536 call esi */
  call_ind((uint32_t)(ESI), 0x11f51538u);
  /* 11f51538 mov ecx, 5 */
  ECX = (0x5u);
  /* 11f5153d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5153f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f51542 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51545 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51548 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f5154b push eax */
  push32((uint32_t)(EAX));
  /* 11f5154c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5154e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51550 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51552u);
  /* 11f51552 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51554 call esi */
  call_ind((uint32_t)(ESI), 0x11f51556u);
  /* 11f51556 mov ecx, 6 */
  ECX = (0x6u);
  /* 11f5155b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5155d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f51560 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51563 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f51566 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11f51569 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5156a push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5156c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5156e call ebx */
  call_ind((uint32_t)(EBX), 0x11f51570u);
  /* 11f51570 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51572 call esi */
  call_ind((uint32_t)(ESI), 0x11f51574u);
  /* 11f51574 mov ecx, 6 */
  ECX = (0x6u);
  /* 11f51579 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5157b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11f5157e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51581 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f51584 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11f51587 push edx */
  push32((uint32_t)(EDX));
  /* 11f51588 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f5158a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5158c call ebx */
  call_ind((uint32_t)(EBX), 0x11f5158eu);
  /* 11f5158e mov eax, dword ptr [0x11f62835] */
  EAX = (r32((uint32_t)(0x11f62835)));
  /* 11f51593 mov cl, byte ptr [0x11f62831] */
  CL = (r8((uint32_t)(0x11f62831)));
  /* 11f51599 mov ebx, dword ptr [0x11f5c138] */
  EBX = (r32((uint32_t)(0x11f5c138)));
  /* 11f5159f push eax */
  push32((uint32_t)(EAX));
  /* 11f515a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f515a1 call ebx */
  call_ind((uint32_t)(EBX), 0x11f515a3u);
  /* 11f515a3 mov edx, dword ptr [0x11f6281d] */
  EDX = (r32((uint32_t)(0x11f6281d)));
  /* 11f515a9 mov al, byte ptr [0x11f62819] */
  AL = (r8((uint32_t)(0x11f62819)));
  /* 11f515ae add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f515b1 push edx */
  push32((uint32_t)(EDX));
  /* 11f515b2 push eax */
  push32((uint32_t)(EAX));
  /* 11f515b3 call ebx */
  call_ind((uint32_t)(EBX), 0x11f515b5u);
  /* 11f515b5 mov ecx, dword ptr [0x11f62805] */
  ECX = (r32((uint32_t)(0x11f62805)));
  /* 11f515bb mov dl, byte ptr [0x11f62801] */
  DL = (r8((uint32_t)(0x11f62801)));
  /* 11f515c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f515c2 push edx */
  push32((uint32_t)(EDX));
  /* 11f515c3 call ebx */
  call_ind((uint32_t)(EBX), 0x11f515c5u);
  /* 11f515c5 mov eax, dword ptr [0x11f627ed] */
  EAX = (r32((uint32_t)(0x11f627ed)));
  /* 11f515ca mov cl, byte ptr [0x11f627e9] */
  CL = (r8((uint32_t)(0x11f627e9)));
  /* 11f515d0 push eax */
  push32((uint32_t)(EAX));
  /* 11f515d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f515d2 call ebx */
  call_ind((uint32_t)(EBX), 0x11f515d4u);
  /* 11f515d4 mov edx, dword ptr [0x11f627d5] */
  EDX = (r32((uint32_t)(0x11f627d5)));
  /* 11f515da mov al, byte ptr [0x11f627d1] */
  AL = (r8((uint32_t)(0x11f627d1)));
  /* 11f515df push edx */
  push32((uint32_t)(EDX));
  /* 11f515e0 push eax */
  push32((uint32_t)(EAX));
  /* 11f515e1 call ebx */
  call_ind((uint32_t)(EBX), 0x11f515e3u);
  /* 11f515e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f515e5 call esi */
  call_ind((uint32_t)(ESI), 0x11f515e7u);
  /* 11f515e7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f515ea lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f515ed mov edx, 0x96 */
  EDX = (0x96u);
  /* 11f515f2 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f515f5 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f515f7 push edx */
  push32((uint32_t)(EDX));
  /* 11f515f8 push 0x11f5e234 */
  push32((uint32_t)(0x11f5e234u));
  /* 11f515fd call dword ptr [0x11f5c13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c13c))), 0x11f51603u);
  /* 11f51603 mov ebx, dword ptr [0x11f5c140] */
  EBX = (r32((uint32_t)(0x11f5c140)));
  /* 11f51609 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11f5160b call ebx */
  call_ind((uint32_t)(EBX), 0x11f5160du);
  /* 11f5160d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11f5160f call ebx */
  call_ind((uint32_t)(EBX), 0x11f51611u);
  /* 11f51611 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11f51613 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51615u);
  /* 11f51615 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11f51617 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51619u);
  /* 11f51619 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5161b call esi */
  call_ind((uint32_t)(ESI), 0x11f5161du);
  /* 11f5161d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51620 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51623 ja 0x11f51643 */
  if ((!C.cf&&!C.zf)) goto L_11f51643;
  /* 11f51625 jmp dword ptr [eax*4 + 0x11f51dcc] */
  switch (EAX) {
    case 0: goto L_11f5162c;
    case 1: goto L_11f51630;
    case 2: goto L_11f51634;
    case 3: goto L_11f51638;
    default: x86_unimpl("switch@0x11f51625 out of table"); return;
  }
L_11f5162c:;
  /* 11f5162c push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11f5162e jmp 0x11f5163a */
  goto L_11f5163a;
L_11f51630:;
  /* 11f51630 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11f51632 jmp 0x11f5163a */
  goto L_11f5163a;
L_11f51634:;
  /* 11f51634 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11f51636 jmp 0x11f5163a */
  goto L_11f5163a;
L_11f51638:;
  /* 11f51638 push 0x47 */
  push32((uint32_t)(0x47u));
L_11f5163a:;
  /* 11f5163a call dword ptr [0x11f5c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c144))), 0x11f51640u);
  /* 11f51640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51643:;
  /* 11f51643 mov eax, dword ptr [0x11f62b04] */
  EAX = (r32((uint32_t)(0x11f62b04)));
  /* 11f51648 mov ecx, 3 */
  ECX = (0x3u);
  /* 11f5164d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5164e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51650 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f51651 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f51653 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51658 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5165a mov dword ptr [0x11f62b04], edx */
  w32((uint32_t)(0x11f62b04), (EDX));
  /* 11f51660 call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51666u);
  /* 11f51666 mov eax, dword ptr [0x11f62b04] */
  EAX = (r32((uint32_t)(0x11f62b04)));
  /* 11f5166b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5166e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51670 jne 0x11f516b5 */
  if (!C.zf) goto L_11f516b5;
  /* 11f51672 mov ebx, 0x11f62948 */
  EBX = (0x11f62948u);
L_11f51677:;
  /* 11f51677 cmp ebx, 0x11f62a0e */
  { uint32_t _a=(EBX),_b=(0x11f62a0eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5167d jge 0x11f516b5 */
  if ((C.sf==C.of)) goto L_11f516b5;
  /* 11f5167f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51681 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51683 push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f51688 push ebx */
  push32((uint32_t)(EBX));
  /* 11f51689 call 0x11f52440 */
  push32(0x11f5168eu); f_11f52440();
  /* 11f5168e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51691 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51693 jne 0x11f516a9 */
  if (!C.zf) goto L_11f516a9;
  /* 11f51695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51697 push 6 */
  push32((uint32_t)(0x6u));
  /* 11f51699 push 0x11f62720 */
  push32((uint32_t)(0x11f62720u));
  /* 11f5169e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f516a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f516a1 call 0x11f51f00 */
  push32(0x11f516a6u); f_11f51f00();
  /* 11f516a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f516a9:;
  /* 11f516a9 mov eax, dword ptr [0x11f62b04] */
  EAX = (r32((uint32_t)(0x11f62b04)));
  /* 11f516ae add ebx, 0x16 */
  { uint32_t _a=(EBX),_b=(0x16u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f516b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f516b3 je 0x11f51677 */
  if (C.zf) goto L_11f51677;
L_11f516b5:;
  /* 11f516b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f516b8 jne 0x11f51794 */
  if (!C.zf) goto L_11f51794;
  /* 11f516be mov ebx, 0x11f62882 */
  EBX = (0x11f62882u);
L_11f516c3:;
  /* 11f516c3 cmp ebx, 0x11f628c4 */
  { uint32_t _a=(EBX),_b=(0x11f628c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f516c9 jge 0x11f51794 */
  if ((C.sf==C.of)) goto L_11f51794;
  /* 11f516cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f516d1 lea edi, [ebx - 0x42] */
  EDI = ((uint32_t)(EBX + -0x42));
  /* 11f516d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f516d6 push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f516db push edi */
  push32((uint32_t)(EDI));
  /* 11f516dc call 0x11f52440 */
  push32(0x11f516e1u); f_11f52440();
  /* 11f516e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f516e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f516e6 jne 0x11f516fc */
  if (!C.zf) goto L_11f516fc;
  /* 11f516e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f516ea push 4 */
  push32((uint32_t)(0x4u));
  /* 11f516ec push 0x11f62700 */
  push32((uint32_t)(0x11f62700u));
  /* 11f516f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f516f3 push edi */
  push32((uint32_t)(EDI));
  /* 11f516f4 call 0x11f51f00 */
  push32(0x11f516f9u); f_11f51f00();
  /* 11f516f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f516fc:;
  /* 11f516fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f516fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51700 push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f51705 push ebx */
  push32((uint32_t)(EBX));
  /* 11f51706 call 0x11f52440 */
  push32(0x11f5170bu); f_11f52440();
  /* 11f5170b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5170e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51710 jne 0x11f51726 */
  if (!C.zf) goto L_11f51726;
  /* 11f51712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51714 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f51716 push 0x11f626e8 */
  push32((uint32_t)(0x11f626e8u));
  /* 11f5171b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5171d push ebx */
  push32((uint32_t)(EBX));
  /* 11f5171e call 0x11f51f00 */
  push32(0x11f51723u); f_11f51f00();
  /* 11f51723 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51726:;
  /* 11f51726 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51728 lea edi, [ebx + 0x42] */
  EDI = ((uint32_t)(EBX + 0x42));
  /* 11f5172b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5172d push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f51732 push edi */
  push32((uint32_t)(EDI));
  /* 11f51733 call 0x11f52440 */
  push32(0x11f51738u); f_11f52440();
  /* 11f51738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5173b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5173d jne 0x11f51753 */
  if (!C.zf) goto L_11f51753;
  /* 11f5173f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51741 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f51743 push 0x11f626d0 */
  push32((uint32_t)(0x11f626d0u));
  /* 11f51748 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5174a push edi */
  push32((uint32_t)(EDI));
  /* 11f5174b call 0x11f51f00 */
  push32(0x11f51750u); f_11f51f00();
  /* 11f51750 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51753:;
  /* 11f51753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51755 lea edi, [ebx + 0x84] */
  EDI = ((uint32_t)(EBX + 0x84));
  /* 11f5175b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5175d push 0x11f62af0 */
  push32((uint32_t)(0x11f62af0u));
  /* 11f51762 push edi */
  push32((uint32_t)(EDI));
  /* 11f51763 call 0x11f52440 */
  push32(0x11f51768u); f_11f52440();
  /* 11f51768 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5176b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5176d jne 0x11f51783 */
  if (!C.zf) goto L_11f51783;
  /* 11f5176f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51771 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f51773 push 0x11f626b8 */
  push32((uint32_t)(0x11f626b8u));
  /* 11f51778 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5177a push edi */
  push32((uint32_t)(EDI));
  /* 11f5177b call 0x11f51f00 */
  push32(0x11f51780u); f_11f51f00();
  /* 11f51780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51783:;
  /* 11f51783 mov eax, dword ptr [0x11f62b04] */
  EAX = (r32((uint32_t)(0x11f62b04)));
  /* 11f51788 add ebx, 0x16 */
  { uint32_t _a=(EBX),_b=(0x16u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5178b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5178e je 0x11f516c3 */
  if (C.zf) goto L_11f516c3;
L_11f51794:;
  /* 11f51794 mov edi, dword ptr [0x11f5c14c] */
  EDI = (r32((uint32_t)(0x11f5c14c)));
  /* 11f5179a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5179c call edi */
  call_ind((uint32_t)(EDI), 0x11f5179eu);
  /* 11f5179e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f517a0 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f517a5 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f517abu);
  /* 11f517ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f517ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11f517b0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f517b2 push 0x11f62840 */
  push32((uint32_t)(0x11f62840u));
  /* 11f517b7 call 0x11f51eb0 */
  push32(0x11f517bcu); f_11f51eb0();
  /* 11f517bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f517bf mov ecx, 0x11f62828 */
  ECX = (0x11f62828u);
  /* 11f517c4 push eax */
  push32((uint32_t)(EAX));
  /* 11f517c5 call 0x11f51de0 */
  push32(0x11f517cau); f_11f51de0();
  /* 11f517ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f517cc push 3 */
  push32((uint32_t)(0x3u));
  /* 11f517ce push 0x11f62882 */
  push32((uint32_t)(0x11f62882u));
  /* 11f517d3 call 0x11f51eb0 */
  push32(0x11f517d8u); f_11f51eb0();
  /* 11f517d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f517db mov ecx, 0x11f62810 */
  ECX = (0x11f62810u);
  /* 11f517e0 push eax */
  push32((uint32_t)(EAX));
  /* 11f517e1 call 0x11f51de0 */
  push32(0x11f517e6u); f_11f51de0();
  /* 11f517e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f517e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f517ea push 0x11f628c4 */
  push32((uint32_t)(0x11f628c4u));
  /* 11f517ef call 0x11f51eb0 */
  push32(0x11f517f4u); f_11f51eb0();
  /* 11f517f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f517f7 mov ecx, 0x11f627f8 */
  ECX = (0x11f627f8u);
  /* 11f517fc push eax */
  push32((uint32_t)(EAX));
  /* 11f517fd call 0x11f51de0 */
  push32(0x11f51802u); f_11f51de0();
  /* 11f51802 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51804 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f51806 push 0x11f628f0 */
  push32((uint32_t)(0x11f628f0u));
  /* 11f5180b call 0x11f51eb0 */
  push32(0x11f51810u); f_11f51eb0();
  /* 11f51810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51813 mov ecx, 0x11f627c8 */
  ECX = (0x11f627c8u);
  /* 11f51818 push eax */
  push32((uint32_t)(EAX));
  /* 11f51819 call 0x11f51de0 */
  push32(0x11f5181eu); f_11f51de0();
  /* 11f5181e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51820 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f51822 push 0x11f6291c */
  push32((uint32_t)(0x11f6291cu));
  /* 11f51827 call 0x11f51eb0 */
  push32(0x11f5182cu); f_11f51eb0();
  /* 11f5182c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5182f mov ecx, 0x11f627e0 */
  ECX = (0x11f627e0u);
  /* 11f51834 push eax */
  push32((uint32_t)(EAX));
  /* 11f51835 call 0x11f51de0 */
  push32(0x11f5183au); f_11f51de0();
  /* 11f5183a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5183c push 3 */
  push32((uint32_t)(0x3u));
  /* 11f5183e push 0x11f62948 */
  push32((uint32_t)(0x11f62948u));
  /* 11f51843 call 0x11f51eb0 */
  push32(0x11f51848u); f_11f51eb0();
  /* 11f51848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5184b mov ecx, 0x11f627f8 */
  ECX = (0x11f627f8u);
  /* 11f51850 push eax */
  push32((uint32_t)(EAX));
  /* 11f51851 call 0x11f51de0 */
  push32(0x11f51856u); f_11f51de0();
  /* 11f51856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51858 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f5185a push 0x11f6298a */
  push32((uint32_t)(0x11f6298au));
  /* 11f5185f call 0x11f51eb0 */
  push32(0x11f51864u); f_11f51eb0();
  /* 11f51864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51867 mov ecx, 0x11f627c8 */
  ECX = (0x11f627c8u);
  /* 11f5186c push eax */
  push32((uint32_t)(EAX));
  /* 11f5186d call 0x11f51de0 */
  push32(0x11f51872u); f_11f51de0();
  /* 11f51872 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51874 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f51876 push 0x11f629cc */
  push32((uint32_t)(0x11f629ccu));
  /* 11f5187b call 0x11f51eb0 */
  push32(0x11f51880u); f_11f51eb0();
  /* 11f51880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51883 mov ecx, 0x11f627e0 */
  ECX = (0x11f627e0u);
  /* 11f51888 push eax */
  push32((uint32_t)(EAX));
  /* 11f51889 call 0x11f51de0 */
  push32(0x11f5188eu); f_11f51de0();
  /* 11f5188e mov ebx, dword ptr [0x11f5c148] */
  EBX = (r32((uint32_t)(0x11f5c148)));
  /* 11f51894 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51896 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f5189b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5189d call ebx */
  call_ind((uint32_t)(EBX), 0x11f5189fu);
  /* 11f5189f mov eax, dword ptr [0x11f62b04] */
  EAX = (r32((uint32_t)(0x11f62b04)));
  /* 11f518a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f518a7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f518aa jne 0x11f51a46 */
  if (!C.zf) goto L_11f51a46;
  /* 11f518b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518b2 call edi */
  call_ind((uint32_t)(EDI), 0x11f518b4u);
  /* 11f518b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518b8 push 0x11f62ae0 */
  push32((uint32_t)(0x11f62ae0u));
  /* 11f518bd call dword ptr [0x11f5c154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c154))), 0x11f518c3u);
  /* 11f518c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518c5 push 0x11f626a8 */
  push32((uint32_t)(0x11f626a8u));
  /* 11f518ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518cc call ebx */
  call_ind((uint32_t)(EBX), 0x11f518ceu);
  /* 11f518ce push 0x11f626a8 */
  push32((uint32_t)(0x11f626a8u));
  /* 11f518d3 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f518d9u);
  /* 11f518d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f518dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f518de je 0x11f51a46 */
  if (C.zf) goto L_11f51a46;
  /* 11f518e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518e6 call edi */
  call_ind((uint32_t)(EDI), 0x11f518e8u);
  /* 11f518e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f518eb mov ebx, 0x11f62a10 */
  EBX = (0x11f62a10u);
L_11f518f0:;
  /* 11f518f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f518f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f518f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f518f5 call dword ptr [0x11f5c154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c154))), 0x11f518fbu);
  /* 11f518fb add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f518fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51901 cmp ebx, 0x11f62a58 */
  { uint32_t _a=(EBX),_b=(0x11f62a58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51907 jl 0x11f518f0 */
  if ((C.sf!=C.of)) goto L_11f518f0;
  /* 11f51909 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5190b push 0x11f626b0 */
  push32((uint32_t)(0x11f626b0u));
  /* 11f51910 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51912 call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51918u);
  /* 11f51918 push 0x11f626b0 */
  push32((uint32_t)(0x11f626b0u));
  /* 11f5191d call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f51923u);
  /* 11f51923 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51928 je 0x11f51a46 */
  if (C.zf) goto L_11f51a46;
  /* 11f5192e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f51930 push 0x11f626b0 */
  push32((uint32_t)(0x11f626b0u));
  /* 11f51935 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11f51938 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f5193eu);
  /* 11f5193e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51943 jle 0x11f51a46 */
  if ((C.zf||C.sf!=C.of)) goto L_11f51a46;
L_11f51949:;
  /* 11f51949 lea edx, [ebp - 0x3c] */
  EDX = ((uint32_t)(EBP + -0x3c));
  /* 11f5194c push edx */
  push32((uint32_t)(EDX));
  /* 11f5194d push ebx */
  push32((uint32_t)(EBX));
  /* 11f5194e push 0x11f626b0 */
  push32((uint32_t)(0x11f626b0u));
  /* 11f51953 call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f51959u);
  /* 11f51959 push 0x11f626a8 */
  push32((uint32_t)(0x11f626a8u));
  /* 11f5195e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f51960 mov byte ptr [ebp - 1], 0 */
  w8((uint32_t)(EBP + -0x1), (0x0u));
  /* 11f51964 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f5196au);
  /* 11f5196a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5196d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5196f jle 0x11f51a23 */
  if ((C.zf||C.sf!=C.of)) goto L_11f51a23;
L_11f51975:;
  /* 11f51975 mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11f51978 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5197a jne 0x11f51a23 */
  if (!C.zf) goto L_11f51a23;
  /* 11f51980 lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11f51983 push eax */
  push32((uint32_t)(EAX));
  /* 11f51984 push edi */
  push32((uint32_t)(EDI));
  /* 11f51985 push 0x11f626a8 */
  push32((uint32_t)(0x11f626a8u));
  /* 11f5198a call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f51990u);
  /* 11f51990 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11f51993 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f51996 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11f51999 mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f5199c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5199e sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f519a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f519a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f519a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f519a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f519ac cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f519af jge 0x11f519b3 */
  if ((C.sf==C.of)) goto L_11f519b3;
  /* 11f519b1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f519b3:;
  /* 11f519b3 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f519b6 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f519b9 jge 0x11f519bd */
  if ((C.sf==C.of)) goto L_11f519bd;
  /* 11f519bb neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f519bd:;
  /* 11f519bd mov ecx, eax */
  ECX = (EAX);
  /* 11f519bf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f519c1 ja 0x11f519c5 */
  if ((!C.cf&&!C.zf)) goto L_11f519c5;
  /* 11f519c3 mov ecx, ebx */
  ECX = (EBX);
L_11f519c5:;
  /* 11f519c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f519c7 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f519c9 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f519cb mov eax, ecx */
  EAX = (ECX);
  /* 11f519cd cmp eax, 0x258 */
  { uint32_t _a=(EAX),_b=(0x258u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f519d2 jge 0x11f51a0c */
  if ((C.sf==C.of)) goto L_11f51a0c;
  /* 11f519d4 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f519d7 mov ecx, dword ptr [ebp - 0x36] */
  ECX = (r32((uint32_t)(EBP + -0x36)));
  /* 11f519da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f519df and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f519e5 add eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f519e8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f519ea jle 0x11f519f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f519f6;
  /* 11f519ec mov dx, word ptr [ebp - 0x36] */
  DX = (r16((uint32_t)(EBP + -0x36)));
  /* 11f519f0 mov word ptr [ebp - 0x38], dx */
  w16((uint32_t)(EBP + -0x38), (DX));
  /* 11f519f4 jmp 0x11f519fb */
  goto L_11f519fb;
L_11f519f6:;
  /* 11f519f6 add word ptr [ebp - 0x38], 0x32 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x38))),_b=(0x32u),_r=_a+_b; w16((uint32_t)(EBP + -0x38), (_r)); fl_add(_a,_b,_r,16); }
L_11f519fb:;
  /* 11f519fb lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11f519fe push eax */
  push32((uint32_t)(EAX));
  /* 11f519ff call dword ptr [0x11f5c160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c160))), 0x11f51a05u);
  /* 11f51a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51a08 mov byte ptr [ebp - 1], 1 */
  w8((uint32_t)(EBP + -0x1), (0x1u));
L_11f51a0c:;
  /* 11f51a0c push 0x11f626a8 */
  push32((uint32_t)(0x11f626a8u));
  /* 11f51a11 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f51a12 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f51a18u);
  /* 11f51a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51a1b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51a1d jl 0x11f51975 */
  if ((C.sf!=C.of)) goto L_11f51975;
L_11f51a23:;
  /* 11f51a23 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f51a26 push 0x11f626b0 */
  push32((uint32_t)(0x11f626b0u));
  /* 11f51a2b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f51a2c mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11f51a2f call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f51a35u);
  /* 11f51a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51a38 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51a3a jl 0x11f51949 */
  if ((C.sf!=C.of)) goto L_11f51949;
  /* 11f51a40 mov edi, dword ptr [0x11f5c14c] */
  EDI = (r32((uint32_t)(0x11f5c14c)));
L_11f51a46:;
  /* 11f51a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51a48 call edi */
  call_ind((uint32_t)(EDI), 0x11f51a4au);
  /* 11f51a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51a4c push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51a51 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f51a57u);
  /* 11f51a57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a59 call edi */
  call_ind((uint32_t)(EDI), 0x11f51a5bu);
  /* 11f51a5b mov ebx, dword ptr [0x11f5c164] */
  EBX = (r32((uint32_t)(0x11f5c164)));
  /* 11f51a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51a63 push 0x11f626a0 */
  push32((uint32_t)(0x11f626a0u));
  /* 11f51a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a6a call ebx */
  call_ind((uint32_t)(EBX), 0x11f51a6cu);
  /* 11f51a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a6e push 0x11f62698 */
  push32((uint32_t)(0x11f62698u));
  /* 11f51a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a75 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51a77u);
  /* 11f51a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a79 push 0x11f62690 */
  push32((uint32_t)(0x11f62690u));
  /* 11f51a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a80 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51a82u);
  /* 11f51a82 mov ecx, dword ptr [0x11f62828] */
  ECX = (r32((uint32_t)(0x11f62828)));
  /* 11f51a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a8a push ecx */
  push32((uint32_t)(ECX));
  /* 11f51a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a8d call ebx */
  call_ind((uint32_t)(EBX), 0x11f51a8fu);
  /* 11f51a8f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51a94 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51a99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51a9b call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51aa1u);
  /* 11f51aa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f51aa3 call dword ptr [0x11f5c128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c128))), 0x11f51aa9u);
  /* 11f51aa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51aac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51aae je 0x11f51b68 */
  if (C.zf) goto L_11f51b68;
  /* 11f51ab4 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51ab9 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f51abfu);
  /* 11f51abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51ac4 jne 0x11f51b68 */
  if (!C.zf) goto L_11f51b68;
  /* 11f51aca push eax */
  push32((uint32_t)(EAX));
  /* 11f51acb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f51acd call dword ptr [0x11f5c130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c130))), 0x11f51ad3u);
  /* 11f51ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51ad5 call esi */
  call_ind((uint32_t)(ESI), 0x11f51ad7u);
  /* 11f51ad7 add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ada push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51adc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51adf lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f51ae2 mov eax, dword ptr [0x11f62835] */
  EAX = (r32((uint32_t)(0x11f62835)));
  /* 11f51ae7 lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11f51aea mov dword ptr [0x11f62835], ecx */
  w32((uint32_t)(0x11f62835), (ECX));
  /* 11f51af0 call esi */
  call_ind((uint32_t)(ESI), 0x11f51af2u);
  /* 11f51af2 add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51af7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51afa lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f51afd mov eax, dword ptr [0x11f6281d] */
  EAX = (r32((uint32_t)(0x11f6281d)));
  /* 11f51b02 lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11f51b05 mov dword ptr [0x11f6281d], ecx */
  w32((uint32_t)(0x11f6281d), (ECX));
  /* 11f51b0b call esi */
  call_ind((uint32_t)(ESI), 0x11f51b0du);
  /* 11f51b0d add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51b12 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51b15 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f51b18 mov eax, dword ptr [0x11f62805] */
  EAX = (r32((uint32_t)(0x11f62805)));
  /* 11f51b1d lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11f51b20 mov dword ptr [0x11f62805], ecx */
  w32((uint32_t)(0x11f62805), (ECX));
  /* 11f51b26 call esi */
  call_ind((uint32_t)(ESI), 0x11f51b28u);
  /* 11f51b28 add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51b2d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51b30 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f51b33 mov eax, dword ptr [0x11f627ed] */
  EAX = (r32((uint32_t)(0x11f627ed)));
  /* 11f51b38 lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11f51b3b mov dword ptr [0x11f627ed], ecx */
  w32((uint32_t)(0x11f627ed), (ECX));
  /* 11f51b41 call esi */
  call_ind((uint32_t)(ESI), 0x11f51b43u);
  /* 11f51b43 add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51b46 push 0x11f5e228 */
  push32((uint32_t)(0x11f5e228u));
  /* 11f51b4b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51b4e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11f51b51 mov eax, dword ptr [0x11f627d5] */
  EAX = (r32((uint32_t)(0x11f627d5)));
  /* 11f51b56 lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11f51b59 mov dword ptr [0x11f627d5], ecx */
  w32((uint32_t)(0x11f627d5), (ECX));
  /* 11f51b5f call dword ptr [0x11f5c168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c168))), 0x11f51b65u);
  /* 11f51b65 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51b68:;
  /* 11f51b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b6a call edi */
  call_ind((uint32_t)(EDI), 0x11f51b6cu);
  /* 11f51b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51b6e push 0x11f62688 */
  push32((uint32_t)(0x11f62688u));
  /* 11f51b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b75 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51b77u);
  /* 11f51b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b79 push 0x11f62680 */
  push32((uint32_t)(0x11f62680u));
  /* 11f51b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b80 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51b82u);
  /* 11f51b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b84 push 0x11f62678 */
  push32((uint32_t)(0x11f62678u));
  /* 11f51b89 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b8b call ebx */
  call_ind((uint32_t)(EBX), 0x11f51b8du);
  /* 11f51b8d mov edx, dword ptr [0x11f62810] */
  EDX = (r32((uint32_t)(0x11f62810)));
  /* 11f51b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b95 push edx */
  push32((uint32_t)(EDX));
  /* 11f51b96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51b98 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51b9au);
  /* 11f51b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51b9c push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51ba3 call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51ba9u);
  /* 11f51ba9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51bac push 3 */
  push32((uint32_t)(0x3u));
  /* 11f51bae call dword ptr [0x11f5c128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c128))), 0x11f51bb4u);
  /* 11f51bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51bb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51bb9 je 0x11f51c7c */
  if (C.zf) goto L_11f51c7c;
  /* 11f51bbf mov ebx, dword ptr [0x11f5c158] */
  EBX = (r32((uint32_t)(0x11f5c158)));
  /* 11f51bc5 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51bca call ebx */
  call_ind((uint32_t)(EBX), 0x11f51bccu);
  /* 11f51bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51bd1 jne 0x11f51c82 */
  if (!C.zf) goto L_11f51c82;
  /* 11f51bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11f51bd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f51bda call dword ptr [0x11f5c130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c130))), 0x11f51be0u);
  /* 11f51be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51be2 call esi */
  call_ind((uint32_t)(ESI), 0x11f51be4u);
  /* 11f51be4 mov ecx, dword ptr [0x11f62835] */
  ECX = (r32((uint32_t)(0x11f62835)));
  /* 11f51bea add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51bef lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51bf2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51bf5 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f51bf8 mov dword ptr [0x11f62835], edx */
  w32((uint32_t)(0x11f62835), (EDX));
  /* 11f51bfe call esi */
  call_ind((uint32_t)(ESI), 0x11f51c00u);
  /* 11f51c00 mov ecx, dword ptr [0x11f6281d] */
  ECX = (r32((uint32_t)(0x11f6281d)));
  /* 11f51c06 add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51c0b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c0e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c11 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f51c14 mov dword ptr [0x11f6281d], edx */
  w32((uint32_t)(0x11f6281d), (EDX));
  /* 11f51c1a call esi */
  call_ind((uint32_t)(ESI), 0x11f51c1cu);
  /* 11f51c1c mov ecx, dword ptr [0x11f62805] */
  ECX = (r32((uint32_t)(0x11f62805)));
  /* 11f51c22 add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51c27 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c2a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c2d lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f51c30 mov dword ptr [0x11f62805], edx */
  w32((uint32_t)(0x11f62805), (EDX));
  /* 11f51c36 call esi */
  call_ind((uint32_t)(ESI), 0x11f51c38u);
  /* 11f51c38 mov ecx, dword ptr [0x11f627ed] */
  ECX = (r32((uint32_t)(0x11f627ed)));
  /* 11f51c3e add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51c43 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c46 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c49 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f51c4c mov dword ptr [0x11f627ed], edx */
  w32((uint32_t)(0x11f627ed), (EDX));
  /* 11f51c52 call esi */
  call_ind((uint32_t)(ESI), 0x11f51c54u);
  /* 11f51c54 mov ecx, dword ptr [0x11f627d5] */
  ECX = (r32((uint32_t)(0x11f627d5)));
  /* 11f51c5a add eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51c5d push 0x11f5e21c */
  push32((uint32_t)(0x11f5e21cu));
  /* 11f51c62 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c65 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51c68 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f51c6b mov dword ptr [0x11f627d5], edx */
  w32((uint32_t)(0x11f627d5), (EDX));
  /* 11f51c71 call dword ptr [0x11f5c168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c168))), 0x11f51c77u);
  /* 11f51c77 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51c7a jmp 0x11f51c82 */
  goto L_11f51c82;
L_11f51c7c:;
  /* 11f51c7c mov ebx, dword ptr [0x11f5c158] */
  EBX = (r32((uint32_t)(0x11f5c158)));
L_11f51c82:;
  /* 11f51c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51c84 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51c8b call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51c91u);
  /* 11f51c91 push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f51c96 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51c98u);
  /* 11f51c98 push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f51c9d call ebx */
  call_ind((uint32_t)(EBX), 0x11f51c9fu);
  /* 11f51c9f mov ecx, dword ptr [0x11f62afc] */
  ECX = (r32((uint32_t)(0x11f62afc)));
  /* 11f51ca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ca8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51caa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f51cac jle 0x11f51ccc */
  if ((C.zf||C.sf!=C.of)) goto L_11f51ccc;
  /* 11f51cae push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f51cb3 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51cb5u);
  /* 11f51cb5 mov edx, dword ptr [0x11f62afc] */
  EDX = (r32((uint32_t)(0x11f62afc)));
  /* 11f51cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51cbe sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51cc0 mov eax, dword ptr [0x11f62b00] */
  EAX = (r32((uint32_t)(0x11f62b00)));
  /* 11f51cc5 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51cc7 mov dword ptr [0x11f62b00], eax */
  w32((uint32_t)(0x11f62b00), (EAX));
L_11f51ccc:;
  /* 11f51ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51cce call edi */
  call_ind((uint32_t)(EDI), 0x11f51cd0u);
  /* 11f51cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51cd3 mov ebx, 0x11f62a10 */
  EBX = (0x11f62a10u);
L_11f51cd8:;
  /* 11f51cd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51cda push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51cdc push ebx */
  push32((uint32_t)(EBX));
  /* 11f51cdd call dword ptr [0x11f5c154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c154))), 0x11f51ce3u);
  /* 11f51ce3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ce6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ce9 cmp ebx, 0x11f62a58 */
  { uint32_t _a=(EBX),_b=(0x11f62a58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51cef jl 0x11f51cd8 */
  if ((C.sf!=C.of)) goto L_11f51cd8;
  /* 11f51cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51cf3 push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f51cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51cfa call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51d00u);
  /* 11f51d00 mov ebx, dword ptr [0x11f5c158] */
  EBX = (r32((uint32_t)(0x11f5c158)));
  /* 11f51d06 push 0x11f62750 */
  push32((uint32_t)(0x11f62750u));
  /* 11f51d0b call ebx */
  call_ind((uint32_t)(EBX), 0x11f51d0du);
  /* 11f51d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51d0f mov dword ptr [0x11f62afc], eax */
  w32((uint32_t)(0x11f62afc), (EAX));
  /* 11f51d14 call edi */
  call_ind((uint32_t)(EDI), 0x11f51d16u);
  /* 11f51d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51d18 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51d1d call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f51d23u);
  /* 11f51d23 mov eax, dword ptr [0x11f62b00] */
  EAX = (r32((uint32_t)(0x11f62b00)));
  /* 11f51d28 mov ecx, dword ptr [0x11f5e048] */
  ECX = (r32((uint32_t)(0x11f5e048)));
  /* 11f51d2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51d31 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51d33 jle 0x11f51d4d */
  if ((C.zf||C.sf!=C.of)) goto L_11f51d4d;
  /* 11f51d35 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51d38 push eax */
  push32((uint32_t)(EAX));
  /* 11f51d39 push 0x11f5e210 */
  push32((uint32_t)(0x11f5e210u));
  /* 11f51d3e mov dword ptr [0x11f5e048], ecx */
  w32((uint32_t)(0x11f5e048), (ECX));
  /* 11f51d44 call dword ptr [0x11f5c13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c13c))), 0x11f51d4au);
  /* 11f51d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51d4d:;
  /* 11f51d4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51d4f call edi */
  call_ind((uint32_t)(EDI), 0x11f51d51u);
  /* 11f51d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51d55 push 0x11f62670 */
  push32((uint32_t)(0x11f62670u));
  /* 11f51d5a call dword ptr [0x11f5c154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c154))), 0x11f51d60u);
  /* 11f51d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51d62 push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51d69 call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f51d6fu);
  /* 11f51d6f push 0x11f62ae8 */
  push32((uint32_t)(0x11f62ae8u));
  /* 11f51d74 call ebx */
  call_ind((uint32_t)(EBX), 0x11f51d76u);
  /* 11f51d76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51d7b jne 0x11f51d91 */
  if (!C.zf) goto L_11f51d91;
  /* 11f51d7d push 0x11f5e204 */
  push32((uint32_t)(0x11f5e204u));
  /* 11f51d82 call dword ptr [0x11f5c168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c168))), 0x11f51d88u);
  /* 11f51d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51d8b call dword ptr [0x11f5c16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c16c))), 0x11f51d91u);
L_11f51d91:;
  /* 11f51d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51d93 call esi */
  call_ind((uint32_t)(ESI), 0x11f51d95u);
  /* 11f51d95 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f51d98 mov ecx, 0x96 */
  ECX = (0x96u);
  /* 11f51d9d shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f51da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51da3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51da5 mov eax, dword ptr [0x11f62b00] */
  EAX = (r32((uint32_t)(0x11f62b00)));
  /* 11f51daa pop edi */
  EDI = (pop32());
  /* 11f51dab pop esi */
  ESI = (pop32());
  /* 11f51dac cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51dae pop ebx */
  EBX = (pop32());
  /* 11f51daf jle 0x11f51dc6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f51dc6;
  /* 11f51db1 push eax */
  push32((uint32_t)(EAX));
  /* 11f51db2 push 0x11f5e1f8 */
  push32((uint32_t)(0x11f5e1f8u));
  /* 11f51db7 call dword ptr [0x11f5c13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c13c))), 0x11f51dbdu);
  /* 11f51dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51dc0 call dword ptr [0x11f5c170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c170))), 0x11f51dc6u);
L_11f51dc6:;
  /* 11f51dc6 mov esp, ebp */
  ESP = (EBP);
  /* 11f51dc8 pop ebp */
  EBP = (pop32());
  /* 11f51dc9 ret  */
  ESPCHK(0x11f51360u, _esp0);
  ESP += 4; return;
}

/* FUN_10001de0 @ 0x11f51de0 (206 bytes, 73 insns) */
void f_11f51de0(void) {
  FTRACE(0x11f51de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f51de0 push esi */
  push32((uint32_t)(ESI));
  /* 11f51de1 mov esi, ecx */
  ESI = (ECX);
  /* 11f51de3 push edi */
  push32((uint32_t)(EDI));
  /* 11f51de4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f51de6 push eax */
  push32((uint32_t)(EAX));
  /* 11f51de7 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f51dedu);
  /* 11f51ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51df2 je 0x11f51ea9 */
  if (C.zf) goto L_11f51ea9;
  /* 11f51df8 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f51dfc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f51dfe je 0x11f51ea9 */
  if (C.zf) goto L_11f51ea9;
  /* 11f51e04 mov cl, byte ptr [esi + 9] */
  CL = (r8((uint32_t)(ESI + 0x9)));
  /* 11f51e07 push ecx */
  push32((uint32_t)(ECX));
  /* 11f51e08 call dword ptr [0x11f5c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c120))), 0x11f51e0eu);
  /* 11f51e0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51e11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51e13 je 0x11f51ea9 */
  if (C.zf) goto L_11f51ea9;
  /* 11f51e19 mov edx, dword ptr [esi + 0xd] */
  EDX = (r32((uint32_t)(ESI + 0xd)));
  /* 11f51e1c mov al, byte ptr [esi + 9] */
  AL = (r8((uint32_t)(ESI + 0x9)));
  /* 11f51e1f push edx */
  push32((uint32_t)(EDX));
  /* 11f51e20 push eax */
  push32((uint32_t)(EAX));
  /* 11f51e21 call dword ptr [0x11f5c138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c138))), 0x11f51e27u);
  /* 11f51e27 mov al, byte ptr [esp + 0x18] */
  AL = (r8((uint32_t)(ESP + 0x18)));
  /* 11f51e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51e2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51e30 je 0x11f51e53 */
  if (C.zf) goto L_11f51e53;
  /* 11f51e32 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f51e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51e37 push ecx */
  push32((uint32_t)(ECX));
  /* 11f51e38 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51e3a push 0x11f62768 */
  push32((uint32_t)(0x11f62768u));
  /* 11f51e3f push 0x11f62758 */
  push32((uint32_t)(0x11f62758u));
  /* 11f51e44 push edi */
  push32((uint32_t)(EDI));
  /* 11f51e45 call dword ptr [0x11f5c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c124))), 0x11f51e4bu);
  /* 11f51e4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51e4e pop edi */
  EDI = (pop32());
  /* 11f51e4f pop esi */
  ESI = (pop32());
  /* 11f51e50 ret 8 */
  ESPCHK(0x11f51de0u, _esp0);
  ESP += 12; return;
L_11f51e53:;
  /* 11f51e53 call 0x11f5390d */
  push32(0x11f51e58u); f_11f5390d();
  /* 11f51e58 and eax, 0x80000001 */
  { uint32_t _r=(EAX)&(0x80000001u); EAX = (_r); fl_logic(_r,32); }
  /* 11f51e5d jns 0x11f51e64 */
  if (!C.sf) goto L_11f51e64;
  /* 11f51e5f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f51e60 or eax, 0xfffffffe */
  { uint32_t _r=(EAX)|(0xfffffffeu); EAX = (_r); fl_logic(_r,32); }
  /* 11f51e63 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f51e64:;
  /* 11f51e64 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51e67 je 0x11f51e8d */
  if (C.zf) goto L_11f51e8d;
  /* 11f51e69 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f51e6a jne 0x11f51ea9 */
  if (!C.zf) goto L_11f51ea9;
  /* 11f51e6c mov edx, dword ptr [esi + 4] */
  EDX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f51e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51e71 push edx */
  push32((uint32_t)(EDX));
  /* 11f51e72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51e74 push 0x11f62760 */
  push32((uint32_t)(0x11f62760u));
  /* 11f51e79 push 0x11f62758 */
  push32((uint32_t)(0x11f62758u));
  /* 11f51e7e push edi */
  push32((uint32_t)(EDI));
  /* 11f51e7f call dword ptr [0x11f5c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c124))), 0x11f51e85u);
  /* 11f51e85 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51e88 pop edi */
  EDI = (pop32());
  /* 11f51e89 pop esi */
  ESI = (pop32());
  /* 11f51e8a ret 8 */
  ESPCHK(0x11f51de0u, _esp0);
  ESP += 12; return;
L_11f51e8d:;
  /* 11f51e8d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f51e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51e92 push eax */
  push32((uint32_t)(EAX));
  /* 11f51e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f51e95 push 0x11f62770 */
  push32((uint32_t)(0x11f62770u));
  /* 11f51e9a push 0x11f62758 */
  push32((uint32_t)(0x11f62758u));
  /* 11f51e9f push edi */
  push32((uint32_t)(EDI));
  /* 11f51ea0 call dword ptr [0x11f5c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c124))), 0x11f51ea6u);
  /* 11f51ea6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f51ea9:;
  /* 11f51ea9 pop edi */
  EDI = (pop32());
  /* 11f51eaa pop esi */
  ESI = (pop32());
  /* 11f51eab ret 8 */
  ESPCHK(0x11f51de0u, _esp0);
  ESP += 12; return;
}

/* FUN_10001eb0 @ 0x11f51eb0 (67 bytes, 34 insns) */
void f_11f51eb0(void) {
  FTRACE(0x11f51eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f51eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f51eb1 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f51eb5 push ebp */
  push32((uint32_t)(EBP));
  /* 11f51eb6 push esi */
  push32((uint32_t)(ESI));
  /* 11f51eb7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f51eb9 push edi */
  push32((uint32_t)(EDI));
  /* 11f51eba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f51ebc jle 0x11f51eda */
  if ((C.zf||C.sf!=C.of)) goto L_11f51eda;
  /* 11f51ebe mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f51ec2 mov ebp, dword ptr [0x11f5c158] */
  EBP = (r32((uint32_t)(0x11f5c158)));
L_11f51ec8:;
  /* 11f51ec8 push edi */
  push32((uint32_t)(EDI));
  /* 11f51ec9 call ebp */
  call_ind((uint32_t)(EBP), 0x11f51ecbu);
  /* 11f51ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51ed0 je 0x11f51ee1 */
  if (C.zf) goto L_11f51ee1;
  /* 11f51ed2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f51ed3 add edi, 0x16 */
  { uint32_t _a=(EDI),_b=(0x16u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ed6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51ed8 jl 0x11f51ec8 */
  if ((C.sf!=C.of)) goto L_11f51ec8;
L_11f51eda:;
  /* 11f51eda pop edi */
  EDI = (pop32());
  /* 11f51edb pop esi */
  ESI = (pop32());
  /* 11f51edc pop ebp */
  EBP = (pop32());
  /* 11f51edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f51edf pop ebx */
  EBX = (pop32());
  /* 11f51ee0 ret  */
  ESPCHK(0x11f51eb0u, _esp0);
  ESP += 4; return;
L_11f51ee1:;
  /* 11f51ee1 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f51ee5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11f51ee8 pop edi */
  EDI = (pop32());
  /* 11f51ee9 lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 11f51eec pop esi */
  ESI = (pop32());
  /* 11f51eed pop ebp */
  EBP = (pop32());
  /* 11f51eee pop ebx */
  EBX = (pop32());
  /* 11f51eef lea eax, [edx + ecx*2] */
  EAX = ((uint32_t)(EDX + ECX*2));
  /* 11f51ef2 ret  */
  ESPCHK(0x11f51eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f00 @ 0x11f51f00 (518 bytes, 204 insns) */
void f_11f51f00(void) {
  FTRACE(0x11f51f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f51f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f51f01 mov ebp, esp */
  EBP = (ESP);
  /* 11f51f03 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51f06 push ebx */
  push32((uint32_t)(EBX));
  /* 11f51f07 push esi */
  push32((uint32_t)(ESI));
  /* 11f51f08 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f51f0b push edi */
  push32((uint32_t)(EDI));
  /* 11f51f0c push esi */
  push32((uint32_t)(ESI));
  /* 11f51f0d call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f51f13u);
  /* 11f51f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51f16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f51f18 je 0x11f520ff */
  if (C.zf) goto L_11f520ff;
  /* 11f51f1e mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f51f21 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f51f23 je 0x11f520ff */
  if (C.zf) goto L_11f520ff;
  /* 11f51f29 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f51f2c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f51f2e jle 0x11f520ff */
  if ((C.zf||C.sf!=C.of)) goto L_11f520ff;
  /* 11f51f34 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11f51f37 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f51f3e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f51f40 je 0x11f52090 */
  if (C.zf) goto L_11f52090;
  /* 11f51f46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f51f49 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11f51f4c push eax */
  push32((uint32_t)(EAX));
  /* 11f51f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11f51f4e push ebx */
  push32((uint32_t)(EBX));
  /* 11f51f4f call dword ptr [0x11f5c114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c114))), 0x11f51f55u);
  /* 11f51f55 lea edx, [ebp - 0x3c] */
  EDX = ((uint32_t)(EBP + -0x3c));
  /* 11f51f58 push edx */
  push32((uint32_t)(EDX));
  /* 11f51f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f51f5b push esi */
  push32((uint32_t)(ESI));
  /* 11f51f5c call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f51f62u);
  /* 11f51f62 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f51f65 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f51f68 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f51f6b mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f51f6e sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51f70 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51f72 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51f75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f51f78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f51f7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f51f7e cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51f81 jge 0x11f51f85 */
  if ((C.sf==C.of)) goto L_11f51f85;
  /* 11f51f83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f51f85:;
  /* 11f51f85 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f51f88 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51f8b jge 0x11f51f8f */
  if ((C.sf==C.of)) goto L_11f51f8f;
  /* 11f51f8d neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f51f8f:;
  /* 11f51f8f mov ecx, eax */
  ECX = (EAX);
  /* 11f51f91 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51f93 ja 0x11f51f97 */
  if ((!C.cf&&!C.zf)) goto L_11f51f97;
  /* 11f51f95 mov ecx, ebx */
  ECX = (EBX);
L_11f51f97:;
  /* 11f51f97 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51f99 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51f9b shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f51f9d mov eax, ecx */
  EAX = (ECX);
  /* 11f51f9f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f51fa2 mov edi, eax */
  EDI = (EAX);
  /* 11f51fa4 mov eax, 1 */
  EAX = (0x1u);
  /* 11f51fa9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51fab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f51fae jle 0x11f5205b */
  if ((C.zf||C.sf!=C.of)) goto L_11f5205b;
L_11f51fb4:;
  /* 11f51fb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f51fb7 lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11f51fba lea eax, [ebp + 0x18] */
  EAX = ((uint32_t)(EBP + 0x18));
  /* 11f51fbd push edx */
  push32((uint32_t)(EDX));
  /* 11f51fbe push eax */
  push32((uint32_t)(EAX));
  /* 11f51fbf push ecx */
  push32((uint32_t)(ECX));
  /* 11f51fc0 call dword ptr [0x11f5c114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c114))), 0x11f51fc6u);
  /* 11f51fc6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f51fc9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f51fcc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f51fcf sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51fd1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f51fd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f51fd7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f51fd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51fdc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f51fdf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f51fe2 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51fe5 jge 0x11f51fe9 */
  if ((C.sf==C.of)) goto L_11f51fe9;
  /* 11f51fe7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f51fe9:;
  /* 11f51fe9 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f51fec cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51fef jge 0x11f51ff3 */
  if ((C.sf==C.of)) goto L_11f51ff3;
  /* 11f51ff1 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f51ff3:;
  /* 11f51ff3 mov ecx, eax */
  ECX = (EAX);
  /* 11f51ff5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f51ff7 ja 0x11f51ffb */
  if ((!C.cf&&!C.zf)) goto L_11f51ffb;
  /* 11f51ff9 mov ecx, ebx */
  ECX = (EBX);
L_11f51ffb:;
  /* 11f51ffb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51ffd add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f51fff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f52001 mov eax, ecx */
  EAX = (ECX);
  /* 11f52003 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52005 jge 0x11f52049 */
  if ((C.sf==C.of)) goto L_11f52049;
  /* 11f52007 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f5200a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5200d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f52010 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52012 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f52015 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f52018 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5201a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f5201d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f52020 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52023 jge 0x11f52027 */
  if ((C.sf==C.of)) goto L_11f52027;
  /* 11f52025 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f52027:;
  /* 11f52027 mov ebx, dword ptr [ebp - 0x10] */
  EBX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f5202a cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5202d jge 0x11f52031 */
  if ((C.sf==C.of)) goto L_11f52031;
  /* 11f5202f neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f52031:;
  /* 11f52031 mov ecx, eax */
  ECX = (EAX);
  /* 11f52033 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52035 ja 0x11f52039 */
  if ((!C.cf&&!C.zf)) goto L_11f52039;
  /* 11f52037 mov ecx, ebx */
  ECX = (EBX);
L_11f52039:;
  /* 11f52039 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5203b add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5203d shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f5203f mov eax, ecx */
  EAX = (ECX);
  /* 11f52041 mov edi, eax */
  EDI = (EAX);
  /* 11f52043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f52046 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f52049:;
  /* 11f52049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5204c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f5204f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f52050 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f52055 jl 0x11f51fb4 */
  if ((C.sf!=C.of)) goto L_11f51fb4;
L_11f5205b:;
  /* 11f5205b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f5205e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f52060 push esi */
  push32((uint32_t)(ESI));
  /* 11f52061 mov byte ptr [esi + 8], 0 */
  w8((uint32_t)(ESI + 0x8), (0x0u));
  /* 11f52065 mov dword ptr [esi + 0xa], ecx */
  w32((uint32_t)(ESI + 0xa), (ECX));
  /* 11f52068 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f5206eu);
  /* 11f5206e mov edx, dword ptr [esi + 0xa] */
  EDX = (r32((uint32_t)(ESI + 0xa)));
  /* 11f52071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f52074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f52076 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f52078 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11f5207b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5207e push ecx */
  push32((uint32_t)(ECX));
  /* 11f5207f push edx */
  push32((uint32_t)(EDX));
  /* 11f52080 call dword ptr [0x11f5c118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c118))), 0x11f52086u);
  /* 11f52086 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52089 pop edi */
  EDI = (pop32());
  /* 11f5208a pop esi */
  ESI = (pop32());
  /* 11f5208b pop ebx */
  EBX = (pop32());
  /* 11f5208c mov esp, ebp */
  ESP = (EBP);
  /* 11f5208e pop ebp */
  EBP = (pop32());
  /* 11f5208f ret  */
  ESPCHK(0x11f51f00u, _esp0);
  ESP += 4; return;
L_11f52090:;
  /* 11f52090 mov eax, dword ptr [esi + 0xa] */
  EAX = (r32((uint32_t)(ESI + 0xa)));
  /* 11f52093 push esi */
  push32((uint32_t)(ESI));
  /* 11f52094 lea ecx, [ebx + eax*8] */
  ECX = ((uint32_t)(EBX + EAX*8));
  /* 11f52097 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52098 call dword ptr [0x11f5c11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c11c))), 0x11f5209eu);
  /* 11f5209e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f520a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f520a3 je 0x11f520ff */
  if (C.zf) goto L_11f520ff;
  /* 11f520a5 mov al, byte ptr [ebp + 0x18] */
  AL = (r8((uint32_t)(EBP + 0x18)));
  /* 11f520a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f520aa je 0x11f520b8 */
  if (C.zf) goto L_11f520b8;
  /* 11f520ac mov eax, dword ptr [esi + 0xa] */
  EAX = (r32((uint32_t)(ESI + 0xa)));
  /* 11f520af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f520b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f520b1 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f520b3 mov dword ptr [esi + 0xa], edx */
  w32((uint32_t)(ESI + 0xa), (EDX));
  /* 11f520b6 jmp 0x11f520de */
  goto L_11f520de;
L_11f520b8:;
  /* 11f520b8 mov ecx, dword ptr [esi + 0xa] */
  ECX = (r32((uint32_t)(ESI + 0xa)));
  /* 11f520bb dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f520bc cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f520be jne 0x11f520c4 */
  if (!C.zf) goto L_11f520c4;
  /* 11f520c0 mov byte ptr [esi + 9], 0 */
  w8((uint32_t)(ESI + 0x9), (0x0u));
L_11f520c4:;
  /* 11f520c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f520c6 jne 0x11f520cc */
  if (!C.zf) goto L_11f520cc;
  /* 11f520c8 mov byte ptr [esi + 9], 1 */
  w8((uint32_t)(ESI + 0x9), (0x1u));
L_11f520cc:;
  /* 11f520cc mov al, byte ptr [esi + 9] */
  AL = (r8((uint32_t)(ESI + 0x9)));
  /* 11f520cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f520d1 je 0x11f520db */
  if (C.zf) goto L_11f520db;
  /* 11f520d3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f520d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f520d6 mov dword ptr [esi + 0xa], ecx */
  w32((uint32_t)(ESI + 0xa), (ECX));
  /* 11f520d9 jne 0x11f520de */
  if (!C.zf) goto L_11f520de;
L_11f520db:;
  /* 11f520db dec dword ptr [esi + 0xa] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xa)))-1; w32((uint32_t)(ESI + 0xa), (_r)); fl_dec(_r,32); }
L_11f520de:;
  /* 11f520de push 0 */
  push32((uint32_t)(0x0u));
  /* 11f520e0 push esi */
  push32((uint32_t)(ESI));
  /* 11f520e1 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f520e7u);
  /* 11f520e7 mov edx, dword ptr [esi + 0xa] */
  EDX = (r32((uint32_t)(ESI + 0xa)));
  /* 11f520ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f520ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11f520ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11f520f1 lea eax, [ebx + edx*8] */
  EAX = ((uint32_t)(EBX + EDX*8));
  /* 11f520f4 push eax */
  push32((uint32_t)(EAX));
  /* 11f520f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f520f6 call dword ptr [0x11f5c118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c118))), 0x11f520fcu);
  /* 11f520fc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f520ff:;
  /* 11f520ff pop edi */
  EDI = (pop32());
  /* 11f52100 pop esi */
  ESI = (pop32());
  /* 11f52101 pop ebx */
  EBX = (pop32());
  /* 11f52102 mov esp, ebp */
  ESP = (EBP);
  /* 11f52104 pop ebp */
  EBP = (pop32());
  /* 11f52105 ret  */
  ESPCHK(0x11f51f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002110 @ 0x11f52110 (59 bytes, 29 insns) */
void f_11f52110(void) {
  FTRACE(0x11f52110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f52110 push esi */
  push32((uint32_t)(ESI));
  /* 11f52111 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f52115 push edi */
  push32((uint32_t)(EDI));
  /* 11f52116 mov edi, dword ptr [0x11f5c158] */
  EDI = (r32((uint32_t)(0x11f5c158)));
  /* 11f5211c push esi */
  push32((uint32_t)(ESI));
  /* 11f5211d call edi */
  call_ind((uint32_t)(EDI), 0x11f5211fu);
  /* 11f5211f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f52124 je 0x11f5213d */
  if (C.zf) goto L_11f5213d;
  /* 11f52126 push ebx */
  push32((uint32_t)(EBX));
  /* 11f52127 mov ebx, dword ptr [0x11f5c110] */
  EBX = (r32((uint32_t)(0x11f5c110)));
L_11f5212d:;
  /* 11f5212d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5212f push esi */
  push32((uint32_t)(ESI));
  /* 11f52130 call ebx */
  call_ind((uint32_t)(EBX), 0x11f52132u);
  /* 11f52132 push esi */
  push32((uint32_t)(ESI));
  /* 11f52133 call edi */
  call_ind((uint32_t)(EDI), 0x11f52135u);
  /* 11f52135 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5213a jne 0x11f5212d */
  if (!C.zf) goto L_11f5212d;
  /* 11f5213c pop ebx */
  EBX = (pop32());
L_11f5213d:;
  /* 11f5213d push esi */
  push32((uint32_t)(ESI));
  /* 11f5213e call edi */
  call_ind((uint32_t)(EDI), 0x11f52140u);
  /* 11f52140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52143 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f52145 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52147 pop edi */
  EDI = (pop32());
  /* 11f52148 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f52149 pop esi */
  ESI = (pop32());
  /* 11f5214a ret  */
  ESPCHK(0x11f52110u, _esp0);
  ESP += 4; return;
}

/* FUN_10002150 @ 0x11f52150 (362 bytes, 134 insns) */
void f_11f52150(void) {
  FTRACE(0x11f52150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f52150 push ebp */
  push32((uint32_t)(EBP));
  /* 11f52151 mov ebp, esp */
  EBP = (ESP);
  /* 11f52153 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f52155 push 0x11f5bdd8 */
  push32((uint32_t)(0x11f5bdd8u));
  /* 11f5215a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f52160 push eax */
  push32((uint32_t)(EAX));
  /* 11f52161 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f52168 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5216b push ebx */
  push32((uint32_t)(EBX));
  /* 11f5216c push esi */
  push32((uint32_t)(ESI));
  /* 11f5216d push edi */
  push32((uint32_t)(EDI));
  /* 11f5216e mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f52171 push edi */
  push32((uint32_t)(EDI));
  /* 11f52172 call dword ptr [0x11f5c14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c14c))), 0x11f52178u);
  /* 11f52178 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f5217b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5217e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f52180 jle 0x11f52198 */
  if ((C.zf||C.sf!=C.of)) goto L_11f52198;
  /* 11f52182 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
L_11f52185:;
  /* 11f52185 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f52187 push edi */
  push32((uint32_t)(EDI));
  /* 11f52188 push esi */
  push32((uint32_t)(ESI));
  /* 11f52189 call dword ptr [0x11f5c154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c154))), 0x11f5218fu);
  /* 11f5218f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52192 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52195 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f52196 jne 0x11f52185 */
  if (!C.zf) goto L_11f52185;
L_11f52198:;
  /* 11f52198 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5219b push esi */
  push32((uint32_t)(ESI));
  /* 11f5219c call 0x11f52110 */
  push32(0x11f521a1u); f_11f52110();
  /* 11f521a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f521a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11f521a4 push esi */
  push32((uint32_t)(ESI));
  /* 11f521a5 push edi */
  push32((uint32_t)(EDI));
  /* 11f521a6 call dword ptr [0x11f5c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c148))), 0x11f521acu);
  /* 11f521ac push edi */
  push32((uint32_t)(EDI));
  /* 11f521ad call dword ptr [0x11f5c14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c14c))), 0x11f521b3u);
  /* 11f521b3 mov al, byte ptr [ebp + 0xf] */
  AL = (r8((uint32_t)(EBP + 0xf)));
  /* 11f521b6 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 11f521b9 mov byte ptr [ebp - 0x1c], al */
  w8((uint32_t)(EBP + -0x1c), (AL));
  /* 11f521bc mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f521bf mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11f521c2 push esi */
  push32((uint32_t)(ESI));
  /* 11f521c3 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f521c6 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11f521c9 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f521cfu);
  /* 11f521cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f521d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f521d4 jle 0x11f5226f */
  if ((C.zf||C.sf!=C.of)) goto L_11f5226f;
  /* 11f521da mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_11f521dd:;
  /* 11f521dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f521e0 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11f521e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f521e4 push edx */
  push32((uint32_t)(EDX));
  /* 11f521e5 push esi */
  push32((uint32_t)(ESI));
  /* 11f521e6 call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f521ecu);
  /* 11f521ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f521ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f521f1 mov ax, word ptr [edi + 2] */
  AX = (r16((uint32_t)(EDI + 0x2)));
  /* 11f521f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f521f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f521fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f521fc mov cx, word ptr [edi] */
  CX = (r16((uint32_t)(EDI)));
  /* 11f521ff mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
  /* 11f52202 sub ecx, dword ptr [ebp - 0x34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x34))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52205 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
  /* 11f52208 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f5220b cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5220e jge 0x11f52212 */
  if ((C.sf==C.of)) goto L_11f52212;
  /* 11f52210 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f52212:;
  /* 11f52212 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f52215 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52218 jge 0x11f5221c */
  if ((C.sf==C.of)) goto L_11f5221c;
  /* 11f5221a neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f5221c:;
  /* 11f5221c mov ecx, eax */
  ECX = (EAX);
  /* 11f5221e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52220 ja 0x11f52224 */
  if ((!C.cf&&!C.zf)) goto L_11f52224;
  /* 11f52222 mov ecx, ebx */
  ECX = (EBX);
L_11f52224:;
  /* 11f52224 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52226 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52228 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f5222a mov eax, ecx */
  EAX = (ECX);
  /* 11f5222c mov edx, dword ptr [edi + 4] */
  EDX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f5222f and edx, 0xffffff */
  { uint32_t _r=(EDX)&(0xffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f52235 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52237 jg 0x11f52256 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f52256;
  /* 11f52239 mov eax, dword ptr [ebp - 0x48] */
  EAX = (r32((uint32_t)(EBP + -0x48)));
  /* 11f5223c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f5223f lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11f52242 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f52247 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52248 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5224a push edx */
  push32((uint32_t)(EDX));
  /* 11f5224b lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11f5224e mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
  /* 11f52251 call 0x11f52610 */
  push32(0x11f52256u); f_11f52610();
L_11f52256:;
  /* 11f52256 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f52259 push esi */
  push32((uint32_t)(ESI));
  /* 11f5225a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f5225b mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11f5225e call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f52264u);
  /* 11f52264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52267 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52269 jl 0x11f521dd */
  if ((C.sf!=C.of)) goto L_11f521dd;
L_11f5226f:;
  /* 11f5226f push esi */
  push32((uint32_t)(ESI));
  /* 11f52270 call 0x11f52110 */
  push32(0x11f52275u); f_11f52110();
  /* 11f52275 mov ebx, dword ptr [ebp - 0x18] */
  EBX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f52278 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f5227b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5227e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52280 je 0x11f522a0 */
  if (C.zf) goto L_11f522a0;
  /* 11f52282 mov edi, dword ptr [0x11f5c10c] */
  EDI = (r32((uint32_t)(0x11f5c10c)));
L_11f52288:;
  /* 11f52288 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f5228a push eax */
  push32((uint32_t)(EAX));
  /* 11f5228b push esi */
  push32((uint32_t)(ESI));
  /* 11f5228c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5228e call edi */
  call_ind((uint32_t)(EDI), 0x11f52290u);
  /* 11f52290 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f52293 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52296 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52299 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5229b jne 0x11f52288 */
  if (!C.zf) goto L_11f52288;
  /* 11f5229d mov ebx, dword ptr [ebp - 0x18] */
  EBX = (r32((uint32_t)(EBP + -0x18)));
L_11f522a0:;
  /* 11f522a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f522a1 call 0x11f53a0b */
  push32(0x11f522a6u); f_11f53a0b();
  /* 11f522a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f522a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f522ac mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f522b3 pop edi */
  EDI = (pop32());
  /* 11f522b4 pop esi */
  ESI = (pop32());
  /* 11f522b5 pop ebx */
  EBX = (pop32());
  /* 11f522b6 mov esp, ebp */
  ESP = (EBP);
  /* 11f522b8 pop ebp */
  EBP = (pop32());
  /* 11f522b9 ret  */
  ESPCHK(0x11f52150u, _esp0);
  ESP += 4; return;
}

/* FUN_100022c0 @ 0x11f522c0 (376 bytes, 146 insns) */
void f_11f522c0(void) {
  FTRACE(0x11f522c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f522c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f522c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f522c3 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f522c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f522c7 push esi */
  push32((uint32_t)(ESI));
  /* 11f522c8 mov esi, dword ptr [0x11f5c158] */
  ESI = (r32((uint32_t)(0x11f5c158)));
  /* 11f522ce push edi */
  push32((uint32_t)(EDI));
  /* 11f522cf mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f522d2 push edi */
  push32((uint32_t)(EDI));
  /* 11f522d3 call esi */
  call_ind((uint32_t)(ESI), 0x11f522d5u);
  /* 11f522d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f522d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f522da je 0x11f52431 */
  if (C.zf) goto L_11f52431;
  /* 11f522e0 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f522e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11f522e4 call esi */
  call_ind((uint32_t)(ESI), 0x11f522e6u);
  /* 11f522e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f522e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f522ec jne 0x11f52431 */
  if (!C.zf) goto L_11f52431;
  /* 11f522f2 mov esi, dword ptr [0x11f5c15c] */
  ESI = (r32((uint32_t)(0x11f5c15c)));
  /* 11f522f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f522fb lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11f522fe push eax */
  push32((uint32_t)(EAX));
  /* 11f522ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11f52301 push edi */
  push32((uint32_t)(EDI));
  /* 11f52302 call esi */
  call_ind((uint32_t)(ESI), 0x11f52304u);
  /* 11f52304 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11f52307 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52308 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5230a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5230b call esi */
  call_ind((uint32_t)(ESI), 0x11f5230du);
  /* 11f5230d mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f52310 mov esi, dword ptr [ebp - 0x48] */
  ESI = (r32((uint32_t)(EBP + -0x48)));
  /* 11f52313 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f52316 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11f52319 sub edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5231b sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5231d mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f52320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f52323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f52326 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52329 jge 0x11f5232d */
  if ((C.sf==C.of)) goto L_11f5232d;
  /* 11f5232b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f5232d:;
  /* 11f5232d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f52330 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52333 jge 0x11f52337 */
  if ((C.sf==C.of)) goto L_11f52337;
  /* 11f52335 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f52337:;
  /* 11f52337 mov ecx, eax */
  ECX = (EAX);
  /* 11f52339 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5233b ja 0x11f5233f */
  if ((!C.cf&&!C.zf)) goto L_11f5233f;
  /* 11f5233d mov ecx, ebx */
  ECX = (EBX);
L_11f5233f:;
  /* 11f5233f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52341 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52343 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f52345 mov eax, ecx */
  EAX = (ECX);
  /* 11f52347 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11f5234a push edi */
  push32((uint32_t)(EDI));
  /* 11f5234b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f5234e and esi, 0xffff */
  { uint32_t _r=(ESI)&(0xffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f52354 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f5235au);
  /* 11f5235a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5235d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52360 jle 0x11f52416 */
  if ((C.zf||C.sf!=C.of)) goto L_11f52416;
L_11f52366:;
  /* 11f52366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f52369 lea ecx, [ebp - 0x34] */
  ECX = ((uint32_t)(EBP + -0x34));
  /* 11f5236c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5236d push edx */
  push32((uint32_t)(EDX));
  /* 11f5236e push edi */
  push32((uint32_t)(EDI));
  /* 11f5236f call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f52375u);
  /* 11f52375 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f52378 mov ebx, dword ptr [ebp - 0x48] */
  EBX = (r32((uint32_t)(EBP + -0x48)));
  /* 11f5237b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f5237e mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11f52381 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52383 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52388 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f5238b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f5238e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f52391 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52394 jge 0x11f52398 */
  if ((C.sf==C.of)) goto L_11f52398;
  /* 11f52396 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f52398:;
  /* 11f52398 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5239b cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5239e jge 0x11f523a2 */
  if ((C.sf==C.of)) goto L_11f523a2;
  /* 11f523a0 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f523a2:;
  /* 11f523a2 mov ecx, eax */
  ECX = (EAX);
  /* 11f523a4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f523a6 ja 0x11f523aa */
  if ((!C.cf&&!C.zf)) goto L_11f523aa;
  /* 11f523a8 mov ecx, ebx */
  ECX = (EBX);
L_11f523aa:;
  /* 11f523aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f523ac add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f523ae shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f523b0 mov eax, ecx */
  EAX = (ECX);
  /* 11f523b2 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f523b5 jge 0x11f523fd */
  if ((C.sf==C.of)) goto L_11f523fd;
  /* 11f523b7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f523ba mov esi, dword ptr [ebp - 0x48] */
  ESI = (r32((uint32_t)(EBP + -0x48)));
  /* 11f523bd mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f523c0 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11f523c3 sub edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f523c5 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f523c7 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f523ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f523cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f523d0 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f523d3 jge 0x11f523d7 */
  if ((C.sf==C.of)) goto L_11f523d7;
  /* 11f523d5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f523d7:;
  /* 11f523d7 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f523da cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f523dd jge 0x11f523e1 */
  if ((C.sf==C.of)) goto L_11f523e1;
  /* 11f523df neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11f523e1:;
  /* 11f523e1 mov ecx, eax */
  ECX = (EAX);
  /* 11f523e3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f523e5 ja 0x11f523e9 */
  if ((!C.cf&&!C.zf)) goto L_11f523e9;
  /* 11f523e7 mov ecx, ebx */
  ECX = (EBX);
L_11f523e9:;
  /* 11f523e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f523eb add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f523ed shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f523ef mov eax, ecx */
  EAX = (ECX);
  /* 11f523f1 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11f523f4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f523f7 and esi, 0xffff */
  { uint32_t _r=(ESI)&(0xffffu); ESI = (_r); fl_logic(_r,32); }
L_11f523fd:;
  /* 11f523fd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f52400 push edi */
  push32((uint32_t)(EDI));
  /* 11f52401 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f52402 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f52405 call dword ptr [0x11f5c158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c158))), 0x11f5240bu);
  /* 11f5240b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5240e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52410 jl 0x11f52366 */
  if ((C.sf!=C.of)) goto L_11f52366;
L_11f52416:;
  /* 11f52416 cmp esi, 0xffff */
  { uint32_t _a=(ESI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5241c jge 0x11f52431 */
  if ((C.sf==C.of)) goto L_11f52431;
  /* 11f5241e push edi */
  push32((uint32_t)(EDI));
  /* 11f5241f call 0x11f52110 */
  push32(0x11f52424u); f_11f52110();
  /* 11f52424 push esi */
  push32((uint32_t)(ESI));
  /* 11f52425 push edi */
  push32((uint32_t)(EDI));
  /* 11f52426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f52428 call dword ptr [0x11f5c10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c10c))), 0x11f5242eu);
  /* 11f5242e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f52431:;
  /* 11f52431 pop edi */
  EDI = (pop32());
  /* 11f52432 pop esi */
  ESI = (pop32());
  /* 11f52433 pop ebx */
  EBX = (pop32());
  /* 11f52434 mov esp, ebp */
  ESP = (EBP);
  /* 11f52436 pop ebp */
  EBP = (pop32());
  /* 11f52437 ret  */
  ESPCHK(0x11f522c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002440 @ 0x11f52440 (347 bytes, 139 insns) */
void f_11f52440(void) {
  FTRACE(0x11f52440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f52440 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52443 push ebx */
  push32((uint32_t)(EBX));
  /* 11f52444 push ebp */
  push32((uint32_t)(EBP));
  /* 11f52445 mov ebp, dword ptr [0x11f5c158] */
  EBP = (r32((uint32_t)(0x11f5c158)));
  /* 11f5244b push esi */
  push32((uint32_t)(ESI));
  /* 11f5244c mov esi, dword ptr [esp + 0x44] */
  ESI = (r32((uint32_t)(ESP + 0x44)));
  /* 11f52450 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11f52452 push esi */
  push32((uint32_t)(ESI));
  /* 11f52453 call ebp */
  call_ind((uint32_t)(EBP), 0x11f52455u);
  /* 11f52455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5245a je 0x11f52592 */
  if (C.zf) goto L_11f52592;
  /* 11f52460 mov ax, word ptr [esi + 0xe] */
  AX = (r16((uint32_t)(ESI + 0xe)));
  /* 11f52464 push edi */
  push32((uint32_t)(EDI));
  /* 11f52465 push eax */
  push32((uint32_t)(EAX));
  /* 11f52466 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11f5246a push esi */
  push32((uint32_t)(ESI));
  /* 11f5246b push ecx */
  push32((uint32_t)(ECX));
  /* 11f5246c call dword ptr [0x11f5c108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c108))), 0x11f52472u);
  /* 11f52472 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 11f52476 mov edi, dword ptr [esp + 0x58] */
  EDI = (r32((uint32_t)(ESP + 0x58)));
  /* 11f5247a push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5247c lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 11f52480 push 0x11f62a10 */
  push32((uint32_t)(0x11f62a10u));
  /* 11f52485 push edx */
  push32((uint32_t)(EDX));
  /* 11f52486 push eax */
  push32((uint32_t)(EAX));
  /* 11f52487 push edi */
  push32((uint32_t)(EDI));
  /* 11f52488 call 0x11f52150 */
  push32(0x11f5248du); f_11f52150();
  /* 11f5248d push edi */
  push32((uint32_t)(EDI));
  /* 11f5248e call ebp */
  call_ind((uint32_t)(EBP), 0x11f52490u);
  /* 11f52490 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f52495 je 0x11f524f7 */
  if (C.zf) goto L_11f524f7;
  /* 11f52497 push esi */
  push32((uint32_t)(ESI));
  /* 11f52498 push edi */
  push32((uint32_t)(EDI));
  /* 11f52499 call 0x11f522c0 */
  push32(0x11f5249eu); f_11f522c0();
  /* 11f5249e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f524a0 push esi */
  push32((uint32_t)(ESI));
  /* 11f524a1 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f524a7u);
  /* 11f524a7 lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 11f524ab push ecx */
  push32((uint32_t)(ECX));
  /* 11f524ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11f524ae push edi */
  push32((uint32_t)(EDI));
  /* 11f524af call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f524b5u);
  /* 11f524b5 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11f524b9 mov ebx, dword ptr [esp + 0x6c] */
  EBX = (r32((uint32_t)(ESP + 0x6c)));
  /* 11f524bd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f524c3 lea eax, [esi + 0x12] */
  EAX = ((uint32_t)(ESI + 0x12));
  /* 11f524c6 push edx */
  push32((uint32_t)(EDX));
  /* 11f524c7 push eax */
  push32((uint32_t)(EAX));
  /* 11f524c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f524c9 lea ecx, [esp + 0x38] */
  ECX = ((uint32_t)(ESP + 0x38));
  /* 11f524cd push esi */
  push32((uint32_t)(ESI));
  /* 11f524ce push ecx */
  push32((uint32_t)(ECX));
  /* 11f524cf call 0x11f525a0 */
  push32(0x11f524d4u); f_11f525a0();
  /* 11f524d4 push edi */
  push32((uint32_t)(EDI));
  /* 11f524d5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f524d6 call dword ptr [0x11f5c104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c104))), 0x11f524dcu);
  /* 11f524dc add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f524df mov bl, 1 */
  BL = (0x1u);
  /* 11f524e1 mov byte ptr [esi + 8], bl */
  w8((uint32_t)(ESI + 0x8), (BL));
  /* 11f524e4 push edi */
  push32((uint32_t)(EDI));
  /* 11f524e5 call 0x11f52110 */
  push32(0x11f524eau); f_11f52110();
  /* 11f524ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f524ed mov al, bl */
  AL = (BL);
  /* 11f524ef pop edi */
  EDI = (pop32());
  /* 11f524f0 pop esi */
  ESI = (pop32());
  /* 11f524f1 pop ebp */
  EBP = (pop32());
  /* 11f524f2 pop ebx */
  EBX = (pop32());
  /* 11f524f3 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f524f6 ret  */
  ESPCHK(0x11f52440u, _esp0);
  ESP += 4; return;
L_11f524f7:;
  /* 11f524f7 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 11f524fb push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f524fd lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 11f52501 push 0x11f62a58 */
  push32((uint32_t)(0x11f62a58u));
  /* 11f52506 push edx */
  push32((uint32_t)(EDX));
  /* 11f52507 push eax */
  push32((uint32_t)(EAX));
  /* 11f52508 push edi */
  push32((uint32_t)(EDI));
  /* 11f52509 call 0x11f52150 */
  push32(0x11f5250eu); f_11f52150();
  /* 11f5250e push edi */
  push32((uint32_t)(EDI));
  /* 11f5250f call ebp */
  call_ind((uint32_t)(EBP), 0x11f52511u);
  /* 11f52511 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f52516 je 0x11f52578 */
  if (C.zf) goto L_11f52578;
  /* 11f52518 push esi */
  push32((uint32_t)(ESI));
  /* 11f52519 push edi */
  push32((uint32_t)(EDI));
  /* 11f5251a call 0x11f522c0 */
  push32(0x11f5251fu); f_11f522c0();
  /* 11f5251f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f52521 push esi */
  push32((uint32_t)(ESI));
  /* 11f52522 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f52528u);
  /* 11f52528 lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 11f5252c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5252d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5252f push esi */
  push32((uint32_t)(ESI));
  /* 11f52530 call dword ptr [0x11f5c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c15c))), 0x11f52536u);
  /* 11f52536 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11f5253a mov ebx, dword ptr [esp + 0x6c] */
  EBX = (r32((uint32_t)(ESP + 0x6c)));
  /* 11f5253e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f52544 lea eax, [esi + 0x12] */
  EAX = ((uint32_t)(ESI + 0x12));
  /* 11f52547 push edx */
  push32((uint32_t)(EDX));
  /* 11f52548 push eax */
  push32((uint32_t)(EAX));
  /* 11f52549 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5254a lea ecx, [esp + 0x38] */
  ECX = ((uint32_t)(ESP + 0x38));
  /* 11f5254e push edi */
  push32((uint32_t)(EDI));
  /* 11f5254f push ecx */
  push32((uint32_t)(ECX));
  /* 11f52550 call 0x11f525a0 */
  push32(0x11f52555u); f_11f525a0();
  /* 11f52555 push edi */
  push32((uint32_t)(EDI));
  /* 11f52556 push ebx */
  push32((uint32_t)(EBX));
  /* 11f52557 call dword ptr [0x11f5c104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c104))), 0x11f5255du);
  /* 11f5255d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52560 mov bl, 1 */
  BL = (0x1u);
  /* 11f52562 mov byte ptr [esi + 8], bl */
  w8((uint32_t)(ESI + 0x8), (BL));
  /* 11f52565 push edi */
  push32((uint32_t)(EDI));
  /* 11f52566 call 0x11f52110 */
  push32(0x11f5256bu); f_11f52110();
  /* 11f5256b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5256e mov al, bl */
  AL = (BL);
  /* 11f52570 pop edi */
  EDI = (pop32());
  /* 11f52571 pop esi */
  ESI = (pop32());
  /* 11f52572 pop ebp */
  EBP = (pop32());
  /* 11f52573 pop ebx */
  EBX = (pop32());
  /* 11f52574 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52577 ret  */
  ESPCHK(0x11f52440u, _esp0);
  ESP += 4; return;
L_11f52578:;
  /* 11f52578 push edi */
  push32((uint32_t)(EDI));
  /* 11f52579 mov dword ptr [esi + 0x12], 0xffff */
  w32((uint32_t)(ESI + 0x12), (0xffffu));
  /* 11f52580 call 0x11f52110 */
  push32(0x11f52585u); f_11f52110();
  /* 11f52585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52588 mov al, bl */
  AL = (BL);
  /* 11f5258a pop edi */
  EDI = (pop32());
  /* 11f5258b pop esi */
  ESI = (pop32());
  /* 11f5258c pop ebp */
  EBP = (pop32());
  /* 11f5258d pop ebx */
  EBX = (pop32());
  /* 11f5258e add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52591 ret  */
  ESPCHK(0x11f52440u, _esp0);
  ESP += 4; return;
L_11f52592:;
  /* 11f52592 pop esi */
  ESI = (pop32());
  /* 11f52593 mov al, bl */
  AL = (BL);
  /* 11f52595 pop ebp */
  EBP = (pop32());
  /* 11f52596 pop ebx */
  EBX = (pop32());
  /* 11f52597 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5259a ret  */
  ESPCHK(0x11f52440u, _esp0);
  ESP += 4; return;
}

/* FUN_100025a0 @ 0x11f525a0 (51 bytes, 18 insns) */
void f_11f525a0(void) {
  FTRACE(0x11f525a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f525a0 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f525a4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f525a8 cmp eax, dword ptr [ecx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f525aa je 0x11f525d2 */
  if (C.zf) goto L_11f525d2;
  /* 11f525ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f525ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f525b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f525b4 push eax */
  push32((uint32_t)(EAX));
  /* 11f525b5 call dword ptr [0x11f5c150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c150))), 0x11f525bbu);
  /* 11f525bb mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f525bf mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f525c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f525c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f525c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f525c8 push edx */
  push32((uint32_t)(EDX));
  /* 11f525c9 call dword ptr [0x11f5c118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c118))), 0x11f525cfu);
  /* 11f525cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f525d2:;
  /* 11f525d2 ret  */
  ESPCHK(0x11f525a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025e0 @ 0x11f525e0 (34 bytes, 15 insns) */
void f_11f525e0(void) {
  FTRACE(0x11f525e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f525e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f525e1 push esi */
  push32((uint32_t)(ESI));
  /* 11f525e2 mov esi, ecx */
  ESI = (ECX);
  /* 11f525e4 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f525e7 push eax */
  push32((uint32_t)(EAX));
  /* 11f525e8 mov dword ptr [esp + 8], eax */
  w32((uint32_t)(ESP + 0x8), (EAX));
  /* 11f525ec call 0x11f53a0b */
  push32(0x11f525f1u); f_11f53a0b();
  /* 11f525f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f525f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f525f6 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11f525f9 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f525fc mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11f525ff pop esi */
  ESI = (pop32());
  /* 11f52600 pop ecx */
  ECX = (pop32());
  /* 11f52601 ret  */
  ESPCHK(0x11f525e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x11f52610 (521 bytes, 216 insns) */
void f_11f52610(void) {
  FTRACE(0x11f52610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f52610 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52613 push ebx */
  push32((uint32_t)(EBX));
  /* 11f52614 push ebp */
  push32((uint32_t)(EBP));
  /* 11f52615 push esi */
  push32((uint32_t)(ESI));
  /* 11f52616 push edi */
  push32((uint32_t)(EDI));
  /* 11f52617 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11f5261b mov edi, ecx */
  EDI = (ECX);
  /* 11f5261d mov dword ptr [esp + 0x10], edi */
  w32((uint32_t)(ESP + 0x10), (EDI));
  /* 11f52621 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f52624 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 11f52627 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52629 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5262c cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5262e jae 0x11f5273a */
  if (!C.cf) goto L_11f5273a;
  /* 11f52634 mov edx, dword ptr [edi + 4] */
  EDX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f52637 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f52639 je 0x11f52646 */
  if (C.zf) goto L_11f52646;
  /* 11f5263b mov ecx, eax */
  ECX = (EAX);
  /* 11f5263d sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5263f sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f52642 cmp ebp, ecx */
  { uint32_t _a=(EBP),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52644 jb 0x11f52648 */
  if (C.cf) goto L_11f52648;
L_11f52646:;
  /* 11f52646 mov ecx, ebp */
  ECX = (EBP);
L_11f52648:;
  /* 11f52648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f5264a jne 0x11f52650 */
  if (!C.zf) goto L_11f52650;
  /* 11f5264c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5264e jmp 0x11f52655 */
  goto L_11f52655;
L_11f52650:;
  /* 11f52650 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52652 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_11f52655:;
  /* 11f52655 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f52659 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11f5265d jge 0x11f52661 */
  if ((C.sf==C.of)) goto L_11f52661;
  /* 11f5265f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f52661:;
  /* 11f52661 lea edx, [eax*4] */
  EDX = ((uint32_t)(EAX*4));
  /* 11f52668 push edx */
  push32((uint32_t)(EDX));
  /* 11f52669 call 0x11f53dea */
  push32(0x11f5266eu); f_11f53dea();
  /* 11f5266e mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f52672 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 11f52676 mov ecx, eax */
  ECX = (EAX);
  /* 11f52678 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f5267b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5267e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52680 je 0x11f52694 */
  if (C.zf) goto L_11f52694;
L_11f52682:;
  /* 11f52682 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f52684 je 0x11f5268a */
  if (C.zf) goto L_11f5268a;
  /* 11f52686 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f52688 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11f5268a:;
  /* 11f5268a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5268d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52690 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52692 jne 0x11f52682 */
  if (!C.zf) goto L_11f52682;
L_11f52694:;
  /* 11f52694 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11f52696 mov eax, ecx */
  EAX = (ECX);
  /* 11f52698 jbe 0x11f526b2 */
  if ((C.cf||C.zf)) goto L_11f526b2;
  /* 11f5269a mov esi, dword ptr [esp + 0x24] */
  ESI = (r32((uint32_t)(ESP + 0x24)));
  /* 11f5269e mov edx, ebp */
  EDX = (EBP);
L_11f526a0:;
  /* 11f526a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f526a2 je 0x11f526ac */
  if (C.zf) goto L_11f526ac;
  /* 11f526a4 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11f526a6 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11f526a8 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11f526ac:;
  /* 11f526ac add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f526af dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f526b0 jne 0x11f526a0 */
  if (!C.zf) goto L_11f526a0;
L_11f526b2:;
  /* 11f526b2 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11f526b5 lea esi, [ebp*4] */
  ESI = ((uint32_t)(EBP*4));
  /* 11f526bc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f526be lea edx, [esi + ecx] */
  EDX = ((uint32_t)(ESI + ECX*1));
  /* 11f526c1 je 0x11f526dd */
  if (C.zf) goto L_11f526dd;
  /* 11f526c3 mov eax, edx */
  EAX = (EDX);
  /* 11f526c5 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f526c7 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f526c9 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f526cb:;
  /* 11f526cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f526cd je 0x11f526d3 */
  if (C.zf) goto L_11f526d3;
  /* 11f526cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f526d1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f526d3:;
  /* 11f526d3 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f526d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f526d9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f526db jne 0x11f526cb */
  if (!C.zf) goto L_11f526cb;
L_11f526dd:;
  /* 11f526dd mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f526e1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f526e4 push eax */
  push32((uint32_t)(EAX));
  /* 11f526e5 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 11f526e9 call 0x11f53a0b */
  push32(0x11f526eeu); f_11f53a0b();
  /* 11f526ee mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 11f526f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11f526f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f526f9 lea ecx, [edx + eax*4] */
  ECX = ((uint32_t)(EDX + EAX*4));
  /* 11f526fc mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11f526ff mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f52702 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f52704 jne 0x11f5271d */
  if (!C.zf) goto L_11f5271d;
  /* 11f52706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f52708 mov dword ptr [esi + 4], edx */
  w32((uint32_t)(ESI + 0x4), (EDX));
  /* 11f5270b mov eax, ebp */
  EAX = (EBP);
  /* 11f5270d pop edi */
  EDI = (pop32());
  /* 11f5270e lea eax, [edx + eax*4] */
  EAX = ((uint32_t)(EDX + EAX*4));
  /* 11f52711 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f52714 pop esi */
  ESI = (pop32());
  /* 11f52715 pop ebp */
  EBP = (pop32());
  /* 11f52716 pop ebx */
  EBX = (pop32());
  /* 11f52717 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5271a ret 0xc */
  ESPCHK(0x11f52610u, _esp0);
  ESP += 16; return;
L_11f5271d:;
  /* 11f5271d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11f52720 mov dword ptr [esi + 4], edx */
  w32((uint32_t)(ESI + 0x4), (EDX));
  /* 11f52723 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52725 pop edi */
  EDI = (pop32());
  /* 11f52726 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f52729 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5272b lea eax, [edx + eax*4] */
  EAX = ((uint32_t)(EDX + EAX*4));
  /* 11f5272e mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f52731 pop esi */
  ESI = (pop32());
  /* 11f52732 pop ebp */
  EBP = (pop32());
  /* 11f52733 pop ebx */
  EBX = (pop32());
  /* 11f52734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52737 ret 0xc */
  ESPCHK(0x11f52610u, _esp0);
  ESP += 16; return;
L_11f5273a:;
  /* 11f5273a mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f5273e mov ecx, eax */
  ECX = (EAX);
  /* 11f52740 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52742 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f52745 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52747 jae 0x11f527b7 */
  if (!C.cf) goto L_11f527b7;
  /* 11f52749 lea ebx, [ebp*4] */
  EBX = ((uint32_t)(EBP*4));
  /* 11f52750 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52752 lea esi, [ebx + edx] */
  ESI = ((uint32_t)(EBX + EDX*1));
  /* 11f52755 je 0x11f52771 */
  if (C.zf) goto L_11f52771;
  /* 11f52757 mov ecx, esi */
  ECX = (ESI);
  /* 11f52759 sub ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11f5275b:;
  /* 11f5275b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5275d je 0x11f52767 */
  if (C.zf) goto L_11f52767;
  /* 11f5275f mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11f52761 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f52763 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11f52767:;
  /* 11f52767 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5276a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5276d cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5276f jne 0x11f5275b */
  if (!C.zf) goto L_11f5275b;
L_11f52771:;
  /* 11f52771 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f52774 mov esi, dword ptr [esp + 0x24] */
  ESI = (r32((uint32_t)(ESP + 0x24)));
  /* 11f52778 mov ecx, eax */
  ECX = (EAX);
  /* 11f5277a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5277c sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5277f sub ebp, ecx */
  { uint32_t _a=(EBP),_b=(ECX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f52781 je 0x11f52791 */
  if (C.zf) goto L_11f52791;
L_11f52783:;
  /* 11f52783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f52785 je 0x11f5278b */
  if (C.zf) goto L_11f5278b;
  /* 11f52787 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f52789 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11f5278b:;
  /* 11f5278b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5278e dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 11f5278f jne 0x11f52783 */
  if (!C.zf) goto L_11f52783;
L_11f52791:;
  /* 11f52791 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f52794 mov eax, edx */
  EAX = (EDX);
  /* 11f52796 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f52798 je 0x11f527a5 */
  if (C.zf) goto L_11f527a5;
L_11f5279a:;
  /* 11f5279a mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f5279c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f5279e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f527a1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f527a3 jne 0x11f5279a */
  if (!C.zf) goto L_11f5279a;
L_11f527a5:;
  /* 11f527a5 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f527a8 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f527aa mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 11f527ad pop edi */
  EDI = (pop32());
  /* 11f527ae pop esi */
  ESI = (pop32());
  /* 11f527af pop ebp */
  EBP = (pop32());
  /* 11f527b0 pop ebx */
  EBX = (pop32());
  /* 11f527b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f527b4 ret 0xc */
  ESPCHK(0x11f52610u, _esp0);
  ESP += 16; return;
L_11f527b7:;
  /* 11f527b7 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11f527b9 jbe 0x11f5280f */
  if ((C.cf||C.zf)) goto L_11f5280f;
  /* 11f527bb shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 11f527be mov ecx, eax */
  ECX = (EAX);
  /* 11f527c0 mov esi, eax */
  ESI = (EAX);
  /* 11f527c2 sub ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f527c4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f527c6 je 0x11f527da */
  if (C.zf) goto L_11f527da;
L_11f527c8:;
  /* 11f527c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f527ca je 0x11f527d0 */
  if (C.zf) goto L_11f527d0;
  /* 11f527cc mov ebx, dword ptr [ecx] */
  EBX = (r32((uint32_t)(ECX)));
  /* 11f527ce mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
L_11f527d0:;
  /* 11f527d0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f527d3 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f527d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f527d8 jne 0x11f527c8 */
  if (!C.zf) goto L_11f527c8;
L_11f527da:;
  /* 11f527da mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f527dd mov eax, ecx */
  EAX = (ECX);
  /* 11f527df sub eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f527e1 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f527e3 je 0x11f527f4 */
  if (C.zf) goto L_11f527f4;
L_11f527e5:;
  /* 11f527e5 mov esi, dword ptr [eax - 4] */
  ESI = (r32((uint32_t)(EAX + -0x4)));
  /* 11f527e8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f527eb sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f527ee cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f527f0 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11f527f2 jne 0x11f527e5 */
  if (!C.zf) goto L_11f527e5;
L_11f527f4:;
  /* 11f527f4 lea ecx, [edx + ebp] */
  ECX = ((uint32_t)(EDX + EBP*1));
  /* 11f527f7 mov eax, edx */
  EAX = (EDX);
  /* 11f527f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f527fb je 0x11f5280c */
  if (C.zf) goto L_11f5280c;
  /* 11f527fd mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
L_11f52801:;
  /* 11f52801 mov esi, dword ptr [edx] */
  ESI = (r32((uint32_t)(EDX)));
  /* 11f52803 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11f52805 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52808 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5280a jne 0x11f52801 */
  if (!C.zf) goto L_11f52801;
L_11f5280c:;
  /* 11f5280c add dword ptr [edi + 8], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x8))),_b=(EBP),_r=_a+_b; w32((uint32_t)(EDI + 0x8), (_r)); fl_add(_a,_b,_r,32); }
L_11f5280f:;
  /* 11f5280f pop edi */
  EDI = (pop32());
  /* 11f52810 pop esi */
  ESI = (pop32());
  /* 11f52811 pop ebp */
  EBP = (pop32());
  /* 11f52812 pop ebx */
  EBX = (pop32());
  /* 11f52813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52816 ret 0xc */
  ESPCHK(0x11f52610u, _esp0);
  ESP += 16; return;
}

/* FUN_10002820 @ 0x11f52820 (3949 bytes, 1403 insns) [1 switch table(s)] */
void f_11f52820(void) {
  FTRACE(0x11f52820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f52820 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52824 push esi */
  push32((uint32_t)(ESI));
  /* 11f52825 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5282a push edi */
  push32((uint32_t)(EDI));
  /* 11f5282b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5282c cmp eax, 0x11 */
  { uint32_t _a=(EAX),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5282f ja 0x11f5378a */
  if ((!C.cf&&!C.zf)) goto L_11f5378a;
  /* 11f52835 jmp dword ptr [eax*4 + 0x11f53790] */
  switch (EAX) {
    case 0: goto L_11f5283c;
    case 1: goto L_11f5291b;
    case 2: goto L_11f529fa;
    case 3: goto L_11f52ad9;
    case 4: goto L_11f52b99;
    case 5: goto L_11f52c78;
    case 6: goto L_11f52d57;
    case 7: goto L_11f52e36;
    case 8: goto L_11f52f15;
    case 9: goto L_11f52ff4;
    case 10: goto L_11f530d3;
    case 11: goto L_11f531b2;
    case 12: goto L_11f53291;
    case 13: goto L_11f53370;
    case 14: goto L_11f5344f;
    case 15: goto L_11f5352e;
    case 16: goto L_11f535ee;
    case 17: goto L_11f536ae;
    default: x86_unimpl("switch@0x11f52835 out of table"); return;
  }
L_11f5283c:;
  /* 11f5283c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52840 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52846 push 0x11f5f5c4 */
  push32((uint32_t)(0x11f5f5c4u));
  /* 11f5284b push esi */
  push32((uint32_t)(ESI));
  /* 11f5284c call edi */
  call_ind((uint32_t)(EDI), 0x11f5284eu);
  /* 11f5284e lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f52851 push 0x11f5f5b4 */
  push32((uint32_t)(0x11f5f5b4u));
  /* 11f52856 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52857 call edi */
  call_ind((uint32_t)(EDI), 0x11f52859u);
  /* 11f52859 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f5285c push 0x11f5f5a8 */
  push32((uint32_t)(0x11f5f5a8u));
  /* 11f52861 push edx */
  push32((uint32_t)(EDX));
  /* 11f52862 call edi */
  call_ind((uint32_t)(EDI), 0x11f52864u);
  /* 11f52864 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f52867 push 0x11f5f59c */
  push32((uint32_t)(0x11f5f59cu));
  /* 11f5286c push eax */
  push32((uint32_t)(EAX));
  /* 11f5286d call edi */
  call_ind((uint32_t)(EDI), 0x11f5286fu);
  /* 11f5286f lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f52872 push 0x11f5f590 */
  push32((uint32_t)(0x11f5f590u));
  /* 11f52877 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52878 call edi */
  call_ind((uint32_t)(EDI), 0x11f5287au);
  /* 11f5287a lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f5287d push 0x11f5f580 */
  push32((uint32_t)(0x11f5f580u));
  /* 11f52882 push edx */
  push32((uint32_t)(EDX));
  /* 11f52883 call edi */
  call_ind((uint32_t)(EDI), 0x11f52885u);
  /* 11f52885 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f52888 push 0x11f5f570 */
  push32((uint32_t)(0x11f5f570u));
  /* 11f5288d push eax */
  push32((uint32_t)(EAX));
  /* 11f5288e call edi */
  call_ind((uint32_t)(EDI), 0x11f52890u);
  /* 11f52890 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f52893 push 0x11f5f564 */
  push32((uint32_t)(0x11f5f564u));
  /* 11f52898 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52899 call edi */
  call_ind((uint32_t)(EDI), 0x11f5289bu);
  /* 11f5289b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5289e lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f528a1 push 0x11f5f54c */
  push32((uint32_t)(0x11f5f54cu));
  /* 11f528a6 push edx */
  push32((uint32_t)(EDX));
  /* 11f528a7 call edi */
  call_ind((uint32_t)(EDI), 0x11f528a9u);
  /* 11f528a9 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f528ac push 0x11f5f538 */
  push32((uint32_t)(0x11f5f538u));
  /* 11f528b1 push eax */
  push32((uint32_t)(EAX));
  /* 11f528b2 call edi */
  call_ind((uint32_t)(EDI), 0x11f528b4u);
  /* 11f528b4 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f528b7 push 0x11f5f528 */
  push32((uint32_t)(0x11f5f528u));
  /* 11f528bc push ecx */
  push32((uint32_t)(ECX));
  /* 11f528bd call edi */
  call_ind((uint32_t)(EDI), 0x11f528bfu);
  /* 11f528bf lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f528c2 push 0x11f5f518 */
  push32((uint32_t)(0x11f5f518u));
  /* 11f528c7 push edx */
  push32((uint32_t)(EDX));
  /* 11f528c8 call edi */
  call_ind((uint32_t)(EDI), 0x11f528cau);
  /* 11f528ca lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f528cd push 0x11f5f504 */
  push32((uint32_t)(0x11f5f504u));
  /* 11f528d2 push eax */
  push32((uint32_t)(EAX));
  /* 11f528d3 call edi */
  call_ind((uint32_t)(EDI), 0x11f528d5u);
  /* 11f528d5 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f528d8 push 0x11f5f4f8 */
  push32((uint32_t)(0x11f5f4f8u));
  /* 11f528dd push ecx */
  push32((uint32_t)(ECX));
  /* 11f528de call edi */
  call_ind((uint32_t)(EDI), 0x11f528e0u);
  /* 11f528e0 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f528e3 push 0x11f5f4e4 */
  push32((uint32_t)(0x11f5f4e4u));
  /* 11f528e8 push edx */
  push32((uint32_t)(EDX));
  /* 11f528e9 call edi */
  call_ind((uint32_t)(EDI), 0x11f528ebu);
  /* 11f528eb lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 11f528ee push 0x11f5f4d8 */
  push32((uint32_t)(0x11f5f4d8u));
  /* 11f528f3 push eax */
  push32((uint32_t)(EAX));
  /* 11f528f4 call edi */
  call_ind((uint32_t)(EDI), 0x11f528f6u);
  /* 11f528f6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f528f9 lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 11f528ff push 0x11f5f4cc */
  push32((uint32_t)(0x11f5f4ccu));
  /* 11f52904 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52905 call edi */
  call_ind((uint32_t)(EDI), 0x11f52907u);
  /* 11f52907 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5290d push 0x11f5f4c0 */
  push32((uint32_t)(0x11f5f4c0u));
  /* 11f52912 push esi */
  push32((uint32_t)(ESI));
  /* 11f52913 call edi */
  call_ind((uint32_t)(EDI), 0x11f52915u);
  /* 11f52915 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52918 pop edi */
  EDI = (pop32());
  /* 11f52919 pop esi */
  ESI = (pop32());
  /* 11f5291a ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f5291b:;
  /* 11f5291b mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f5291f mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52925 push 0x11f5f4b4 */
  push32((uint32_t)(0x11f5f4b4u));
  /* 11f5292a push esi */
  push32((uint32_t)(ESI));
  /* 11f5292b call edi */
  call_ind((uint32_t)(EDI), 0x11f5292du);
  /* 11f5292d lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11f52930 push 0x11f5f4a4 */
  push32((uint32_t)(0x11f5f4a4u));
  /* 11f52935 push edx */
  push32((uint32_t)(EDX));
  /* 11f52936 call edi */
  call_ind((uint32_t)(EDI), 0x11f52938u);
  /* 11f52938 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11f5293b push 0x11f5f498 */
  push32((uint32_t)(0x11f5f498u));
  /* 11f52940 push eax */
  push32((uint32_t)(EAX));
  /* 11f52941 call edi */
  call_ind((uint32_t)(EDI), 0x11f52943u);
  /* 11f52943 lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 11f52946 push 0x11f5f48c */
  push32((uint32_t)(0x11f5f48cu));
  /* 11f5294b push ecx */
  push32((uint32_t)(ECX));
  /* 11f5294c call edi */
  call_ind((uint32_t)(EDI), 0x11f5294eu);
  /* 11f5294e lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 11f52951 push 0x11f5f480 */
  push32((uint32_t)(0x11f5f480u));
  /* 11f52956 push edx */
  push32((uint32_t)(EDX));
  /* 11f52957 call edi */
  call_ind((uint32_t)(EDI), 0x11f52959u);
  /* 11f52959 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11f5295c push 0x11f5f470 */
  push32((uint32_t)(0x11f5f470u));
  /* 11f52961 push eax */
  push32((uint32_t)(EAX));
  /* 11f52962 call edi */
  call_ind((uint32_t)(EDI), 0x11f52964u);
  /* 11f52964 lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 11f52967 push 0x11f5f460 */
  push32((uint32_t)(0x11f5f460u));
  /* 11f5296c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5296d call edi */
  call_ind((uint32_t)(EDI), 0x11f5296fu);
  /* 11f5296f lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 11f52972 push 0x11f5f454 */
  push32((uint32_t)(0x11f5f454u));
  /* 11f52977 push edx */
  push32((uint32_t)(EDX));
  /* 11f52978 call edi */
  call_ind((uint32_t)(EDI), 0x11f5297au);
  /* 11f5297a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5297d lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 11f52980 push 0x11f5f43c */
  push32((uint32_t)(0x11f5f43cu));
  /* 11f52985 push eax */
  push32((uint32_t)(EAX));
  /* 11f52986 call edi */
  call_ind((uint32_t)(EDI), 0x11f52988u);
  /* 11f52988 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 11f5298b push 0x11f5f428 */
  push32((uint32_t)(0x11f5f428u));
  /* 11f52990 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52991 call edi */
  call_ind((uint32_t)(EDI), 0x11f52993u);
  /* 11f52993 lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 11f52996 push 0x11f5f418 */
  push32((uint32_t)(0x11f5f418u));
  /* 11f5299b push edx */
  push32((uint32_t)(EDX));
  /* 11f5299c call edi */
  call_ind((uint32_t)(EDI), 0x11f5299eu);
  /* 11f5299e lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 11f529a1 push 0x11f5f408 */
  push32((uint32_t)(0x11f5f408u));
  /* 11f529a6 push eax */
  push32((uint32_t)(EAX));
  /* 11f529a7 call edi */
  call_ind((uint32_t)(EDI), 0x11f529a9u);
  /* 11f529a9 lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 11f529ac push 0x11f5f3f4 */
  push32((uint32_t)(0x11f5f3f4u));
  /* 11f529b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f529b2 call edi */
  call_ind((uint32_t)(EDI), 0x11f529b4u);
  /* 11f529b4 lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 11f529b7 push 0x11f5f3e8 */
  push32((uint32_t)(0x11f5f3e8u));
  /* 11f529bc push edx */
  push32((uint32_t)(EDX));
  /* 11f529bd call edi */
  call_ind((uint32_t)(EDI), 0x11f529bfu);
  /* 11f529bf lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 11f529c2 push 0x11f5f3d4 */
  push32((uint32_t)(0x11f5f3d4u));
  /* 11f529c7 push eax */
  push32((uint32_t)(EAX));
  /* 11f529c8 call edi */
  call_ind((uint32_t)(EDI), 0x11f529cau);
  /* 11f529ca lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 11f529cd push 0x11f5f3c8 */
  push32((uint32_t)(0x11f5f3c8u));
  /* 11f529d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f529d3 call edi */
  call_ind((uint32_t)(EDI), 0x11f529d5u);
  /* 11f529d5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f529d8 lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 11f529de push 0x11f5f3bc */
  push32((uint32_t)(0x11f5f3bcu));
  /* 11f529e3 push edx */
  push32((uint32_t)(EDX));
  /* 11f529e4 call edi */
  call_ind((uint32_t)(EDI), 0x11f529e6u);
  /* 11f529e6 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f529ec push 0x11f5f3b0 */
  push32((uint32_t)(0x11f5f3b0u));
  /* 11f529f1 push esi */
  push32((uint32_t)(ESI));
  /* 11f529f2 call edi */
  call_ind((uint32_t)(EDI), 0x11f529f4u);
  /* 11f529f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f529f7 pop edi */
  EDI = (pop32());
  /* 11f529f8 pop esi */
  ESI = (pop32());
  /* 11f529f9 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f529fa:;
  /* 11f529fa mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f529fe mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52a04 push 0x11f5f39c */
  push32((uint32_t)(0x11f5f39cu));
  /* 11f52a09 push esi */
  push32((uint32_t)(ESI));
  /* 11f52a0a call edi */
  call_ind((uint32_t)(EDI), 0x11f52a0cu);
  /* 11f52a0c lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f52a0f push 0x11f5f38c */
  push32((uint32_t)(0x11f5f38cu));
  /* 11f52a14 push eax */
  push32((uint32_t)(EAX));
  /* 11f52a15 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a17u);
  /* 11f52a17 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f52a1a push 0x11f5f380 */
  push32((uint32_t)(0x11f5f380u));
  /* 11f52a1f push ecx */
  push32((uint32_t)(ECX));
  /* 11f52a20 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a22u);
  /* 11f52a22 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f52a25 push 0x11f5f374 */
  push32((uint32_t)(0x11f5f374u));
  /* 11f52a2a push edx */
  push32((uint32_t)(EDX));
  /* 11f52a2b call edi */
  call_ind((uint32_t)(EDI), 0x11f52a2du);
  /* 11f52a2d lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f52a30 push 0x11f5f368 */
  push32((uint32_t)(0x11f5f368u));
  /* 11f52a35 push eax */
  push32((uint32_t)(EAX));
  /* 11f52a36 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a38u);
  /* 11f52a38 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f52a3b push 0x11f5f358 */
  push32((uint32_t)(0x11f5f358u));
  /* 11f52a40 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52a41 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a43u);
  /* 11f52a43 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f52a46 push 0x11f5f348 */
  push32((uint32_t)(0x11f5f348u));
  /* 11f52a4b push edx */
  push32((uint32_t)(EDX));
  /* 11f52a4c call edi */
  call_ind((uint32_t)(EDI), 0x11f52a4eu);
  /* 11f52a4e lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f52a51 push 0x11f5f33c */
  push32((uint32_t)(0x11f5f33cu));
  /* 11f52a56 push eax */
  push32((uint32_t)(EAX));
  /* 11f52a57 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a59u);
  /* 11f52a59 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52a5c lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 11f52a5f push 0x11f5f324 */
  push32((uint32_t)(0x11f5f324u));
  /* 11f52a64 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52a65 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a67u);
  /* 11f52a67 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 11f52a6a push 0x11f5f310 */
  push32((uint32_t)(0x11f5f310u));
  /* 11f52a6f push edx */
  push32((uint32_t)(EDX));
  /* 11f52a70 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a72u);
  /* 11f52a72 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 11f52a75 push 0x11f5f300 */
  push32((uint32_t)(0x11f5f300u));
  /* 11f52a7a push eax */
  push32((uint32_t)(EAX));
  /* 11f52a7b call edi */
  call_ind((uint32_t)(EDI), 0x11f52a7du);
  /* 11f52a7d lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 11f52a80 push 0x11f5f2f0 */
  push32((uint32_t)(0x11f5f2f0u));
  /* 11f52a85 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52a86 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a88u);
  /* 11f52a88 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 11f52a8b push 0x11f5f2dc */
  push32((uint32_t)(0x11f5f2dcu));
  /* 11f52a90 push edx */
  push32((uint32_t)(EDX));
  /* 11f52a91 call edi */
  call_ind((uint32_t)(EDI), 0x11f52a93u);
  /* 11f52a93 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 11f52a96 push 0x11f5f2d0 */
  push32((uint32_t)(0x11f5f2d0u));
  /* 11f52a9b push eax */
  push32((uint32_t)(EAX));
  /* 11f52a9c call edi */
  call_ind((uint32_t)(EDI), 0x11f52a9eu);
  /* 11f52a9e lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 11f52aa1 push 0x11f5f2bc */
  push32((uint32_t)(0x11f5f2bcu));
  /* 11f52aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52aa7 call edi */
  call_ind((uint32_t)(EDI), 0x11f52aa9u);
  /* 11f52aa9 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 11f52aac push 0x11f5f2b0 */
  push32((uint32_t)(0x11f5f2b0u));
  /* 11f52ab1 push edx */
  push32((uint32_t)(EDX));
  /* 11f52ab2 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ab4u);
  /* 11f52ab4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52ab7 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 11f52abd push 0x11f5f2a4 */
  push32((uint32_t)(0x11f5f2a4u));
  /* 11f52ac2 push eax */
  push32((uint32_t)(EAX));
  /* 11f52ac3 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ac5u);
  /* 11f52ac5 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52acb push 0x11f5f298 */
  push32((uint32_t)(0x11f5f298u));
  /* 11f52ad0 push esi */
  push32((uint32_t)(ESI));
  /* 11f52ad1 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ad3u);
  /* 11f52ad3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52ad6 pop edi */
  EDI = (pop32());
  /* 11f52ad7 pop esi */
  ESI = (pop32());
  /* 11f52ad8 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52ad9:;
  /* 11f52ad9 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52add mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52ae3 push 0x11f5f284 */
  push32((uint32_t)(0x11f5f284u));
  /* 11f52ae8 push esi */
  push32((uint32_t)(ESI));
  /* 11f52ae9 call edi */
  call_ind((uint32_t)(EDI), 0x11f52aebu);
  /* 11f52aeb lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f52aee push 0x11f5f274 */
  push32((uint32_t)(0x11f5f274u));
  /* 11f52af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52af4 call edi */
  call_ind((uint32_t)(EDI), 0x11f52af6u);
  /* 11f52af6 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f52af9 push 0x11f5f264 */
  push32((uint32_t)(0x11f5f264u));
  /* 11f52afe push edx */
  push32((uint32_t)(EDX));
  /* 11f52aff call edi */
  call_ind((uint32_t)(EDI), 0x11f52b01u);
  /* 11f52b01 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f52b04 push 0x11f5f258 */
  push32((uint32_t)(0x11f5f258u));
  /* 11f52b09 push eax */
  push32((uint32_t)(EAX));
  /* 11f52b0a call edi */
  call_ind((uint32_t)(EDI), 0x11f52b0cu);
  /* 11f52b0c lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f52b0f push 0x11f5f24c */
  push32((uint32_t)(0x11f5f24cu));
  /* 11f52b14 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52b15 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b17u);
  /* 11f52b17 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f52b1a push 0x11f5f23c */
  push32((uint32_t)(0x11f5f23cu));
  /* 11f52b1f push edx */
  push32((uint32_t)(EDX));
  /* 11f52b20 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b22u);
  /* 11f52b22 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f52b25 push 0x11f5f22c */
  push32((uint32_t)(0x11f5f22cu));
  /* 11f52b2a push eax */
  push32((uint32_t)(EAX));
  /* 11f52b2b call edi */
  call_ind((uint32_t)(EDI), 0x11f52b2du);
  /* 11f52b2d lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f52b30 push 0x11f5f218 */
  push32((uint32_t)(0x11f5f218u));
  /* 11f52b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52b36 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b38u);
  /* 11f52b38 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52b3b lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f52b3e push 0x11f5f204 */
  push32((uint32_t)(0x11f5f204u));
  /* 11f52b43 push edx */
  push32((uint32_t)(EDX));
  /* 11f52b44 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b46u);
  /* 11f52b46 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f52b49 push 0x11f5f1f8 */
  push32((uint32_t)(0x11f5f1f8u));
  /* 11f52b4e push eax */
  push32((uint32_t)(EAX));
  /* 11f52b4f call edi */
  call_ind((uint32_t)(EDI), 0x11f52b51u);
  /* 11f52b51 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f52b54 push 0x11f5f1e0 */
  push32((uint32_t)(0x11f5f1e0u));
  /* 11f52b59 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52b5a call edi */
  call_ind((uint32_t)(EDI), 0x11f52b5cu);
  /* 11f52b5c lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f52b5f push 0x11f5f1cc */
  push32((uint32_t)(0x11f5f1ccu));
  /* 11f52b64 push edx */
  push32((uint32_t)(EDX));
  /* 11f52b65 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b67u);
  /* 11f52b67 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f52b6a push 0x11f5f1b8 */
  push32((uint32_t)(0x11f5f1b8u));
  /* 11f52b6f push eax */
  push32((uint32_t)(EAX));
  /* 11f52b70 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b72u);
  /* 11f52b72 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f52b75 push 0x11f5f1a4 */
  push32((uint32_t)(0x11f5f1a4u));
  /* 11f52b7a push ecx */
  push32((uint32_t)(ECX));
  /* 11f52b7b call edi */
  call_ind((uint32_t)(EDI), 0x11f52b7du);
  /* 11f52b7d lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f52b80 push 0x11f5f194 */
  push32((uint32_t)(0x11f5f194u));
  /* 11f52b85 push edx */
  push32((uint32_t)(EDX));
  /* 11f52b86 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b88u);
  /* 11f52b88 add esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52b8b push 0x11f5f188 */
  push32((uint32_t)(0x11f5f188u));
  /* 11f52b90 push esi */
  push32((uint32_t)(ESI));
  /* 11f52b91 call edi */
  call_ind((uint32_t)(EDI), 0x11f52b93u);
  /* 11f52b93 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52b96 pop edi */
  EDI = (pop32());
  /* 11f52b97 pop esi */
  ESI = (pop32());
  /* 11f52b98 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52b99:;
  /* 11f52b99 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52b9d mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52ba3 push 0x11f5f174 */
  push32((uint32_t)(0x11f5f174u));
  /* 11f52ba8 push esi */
  push32((uint32_t)(ESI));
  /* 11f52ba9 call edi */
  call_ind((uint32_t)(EDI), 0x11f52babu);
  /* 11f52bab lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f52bae push 0x11f5f164 */
  push32((uint32_t)(0x11f5f164u));
  /* 11f52bb3 push eax */
  push32((uint32_t)(EAX));
  /* 11f52bb4 call edi */
  call_ind((uint32_t)(EDI), 0x11f52bb6u);
  /* 11f52bb6 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f52bb9 push 0x11f5f158 */
  push32((uint32_t)(0x11f5f158u));
  /* 11f52bbe push ecx */
  push32((uint32_t)(ECX));
  /* 11f52bbf call edi */
  call_ind((uint32_t)(EDI), 0x11f52bc1u);
  /* 11f52bc1 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f52bc4 push 0x11f5f14c */
  push32((uint32_t)(0x11f5f14cu));
  /* 11f52bc9 push edx */
  push32((uint32_t)(EDX));
  /* 11f52bca call edi */
  call_ind((uint32_t)(EDI), 0x11f52bccu);
  /* 11f52bcc lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f52bcf push 0x11f5f140 */
  push32((uint32_t)(0x11f5f140u));
  /* 11f52bd4 push eax */
  push32((uint32_t)(EAX));
  /* 11f52bd5 call edi */
  call_ind((uint32_t)(EDI), 0x11f52bd7u);
  /* 11f52bd7 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f52bda push 0x11f5f130 */
  push32((uint32_t)(0x11f5f130u));
  /* 11f52bdf push ecx */
  push32((uint32_t)(ECX));
  /* 11f52be0 call edi */
  call_ind((uint32_t)(EDI), 0x11f52be2u);
  /* 11f52be2 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f52be5 push 0x11f5f120 */
  push32((uint32_t)(0x11f5f120u));
  /* 11f52bea push edx */
  push32((uint32_t)(EDX));
  /* 11f52beb call edi */
  call_ind((uint32_t)(EDI), 0x11f52bedu);
  /* 11f52bed lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f52bf0 push 0x11f5f110 */
  push32((uint32_t)(0x11f5f110u));
  /* 11f52bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11f52bf6 call edi */
  call_ind((uint32_t)(EDI), 0x11f52bf8u);
  /* 11f52bf8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52bfb lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 11f52bfe push 0x11f5f0fc */
  push32((uint32_t)(0x11f5f0fcu));
  /* 11f52c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52c04 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c06u);
  /* 11f52c06 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 11f52c09 push 0x11f5f0ec */
  push32((uint32_t)(0x11f5f0ecu));
  /* 11f52c0e push edx */
  push32((uint32_t)(EDX));
  /* 11f52c0f call edi */
  call_ind((uint32_t)(EDI), 0x11f52c11u);
  /* 11f52c11 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 11f52c14 push 0x11f5f0dc */
  push32((uint32_t)(0x11f5f0dcu));
  /* 11f52c19 push eax */
  push32((uint32_t)(EAX));
  /* 11f52c1a call edi */
  call_ind((uint32_t)(EDI), 0x11f52c1cu);
  /* 11f52c1c lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 11f52c1f push 0x11f5f0c8 */
  push32((uint32_t)(0x11f5f0c8u));
  /* 11f52c24 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52c25 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c27u);
  /* 11f52c27 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 11f52c2a push 0x11f5f0b4 */
  push32((uint32_t)(0x11f5f0b4u));
  /* 11f52c2f push edx */
  push32((uint32_t)(EDX));
  /* 11f52c30 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c32u);
  /* 11f52c32 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 11f52c35 push 0x11f5f0a4 */
  push32((uint32_t)(0x11f5f0a4u));
  /* 11f52c3a push eax */
  push32((uint32_t)(EAX));
  /* 11f52c3b call edi */
  call_ind((uint32_t)(EDI), 0x11f52c3du);
  /* 11f52c3d lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 11f52c40 push 0x11f5f08c */
  push32((uint32_t)(0x11f5f08cu));
  /* 11f52c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52c46 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c48u);
  /* 11f52c48 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 11f52c4b push 0x11f5f080 */
  push32((uint32_t)(0x11f5f080u));
  /* 11f52c50 push edx */
  push32((uint32_t)(EDX));
  /* 11f52c51 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c53u);
  /* 11f52c53 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52c56 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 11f52c5c push 0x11f5f074 */
  push32((uint32_t)(0x11f5f074u));
  /* 11f52c61 push eax */
  push32((uint32_t)(EAX));
  /* 11f52c62 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c64u);
  /* 11f52c64 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52c6a push 0x11f5f068 */
  push32((uint32_t)(0x11f5f068u));
  /* 11f52c6f push esi */
  push32((uint32_t)(ESI));
  /* 11f52c70 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c72u);
  /* 11f52c72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52c75 pop edi */
  EDI = (pop32());
  /* 11f52c76 pop esi */
  ESI = (pop32());
  /* 11f52c77 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52c78:;
  /* 11f52c78 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52c7c mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52c82 push 0x11f5f054 */
  push32((uint32_t)(0x11f5f054u));
  /* 11f52c87 push esi */
  push32((uint32_t)(ESI));
  /* 11f52c88 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c8au);
  /* 11f52c8a lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f52c8d push 0x11f5f044 */
  push32((uint32_t)(0x11f5f044u));
  /* 11f52c92 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52c93 call edi */
  call_ind((uint32_t)(EDI), 0x11f52c95u);
  /* 11f52c95 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f52c98 push 0x11f5f038 */
  push32((uint32_t)(0x11f5f038u));
  /* 11f52c9d push edx */
  push32((uint32_t)(EDX));
  /* 11f52c9e call edi */
  call_ind((uint32_t)(EDI), 0x11f52ca0u);
  /* 11f52ca0 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f52ca3 push 0x11f5f02c */
  push32((uint32_t)(0x11f5f02cu));
  /* 11f52ca8 push eax */
  push32((uint32_t)(EAX));
  /* 11f52ca9 call edi */
  call_ind((uint32_t)(EDI), 0x11f52cabu);
  /* 11f52cab lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f52cae push 0x11f5f020 */
  push32((uint32_t)(0x11f5f020u));
  /* 11f52cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52cb4 call edi */
  call_ind((uint32_t)(EDI), 0x11f52cb6u);
  /* 11f52cb6 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f52cb9 push 0x11f5f010 */
  push32((uint32_t)(0x11f5f010u));
  /* 11f52cbe push edx */
  push32((uint32_t)(EDX));
  /* 11f52cbf call edi */
  call_ind((uint32_t)(EDI), 0x11f52cc1u);
  /* 11f52cc1 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f52cc4 push 0x11f5f000 */
  push32((uint32_t)(0x11f5f000u));
  /* 11f52cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11f52cca call edi */
  call_ind((uint32_t)(EDI), 0x11f52cccu);
  /* 11f52ccc lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f52ccf push 0x11f5eff0 */
  push32((uint32_t)(0x11f5eff0u));
  /* 11f52cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52cd5 call edi */
  call_ind((uint32_t)(EDI), 0x11f52cd7u);
  /* 11f52cd7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52cda lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f52cdd push 0x11f5efdc */
  push32((uint32_t)(0x11f5efdcu));
  /* 11f52ce2 push edx */
  push32((uint32_t)(EDX));
  /* 11f52ce3 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ce5u);
  /* 11f52ce5 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f52ce8 push 0x11f5efd0 */
  push32((uint32_t)(0x11f5efd0u));
  /* 11f52ced push eax */
  push32((uint32_t)(EAX));
  /* 11f52cee call edi */
  call_ind((uint32_t)(EDI), 0x11f52cf0u);
  /* 11f52cf0 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f52cf3 push 0x11f5efc0 */
  push32((uint32_t)(0x11f5efc0u));
  /* 11f52cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52cf9 call edi */
  call_ind((uint32_t)(EDI), 0x11f52cfbu);
  /* 11f52cfb lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f52cfe push 0x11f5efac */
  push32((uint32_t)(0x11f5efacu));
  /* 11f52d03 push edx */
  push32((uint32_t)(EDX));
  /* 11f52d04 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d06u);
  /* 11f52d06 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f52d09 push 0x11f5ef98 */
  push32((uint32_t)(0x11f5ef98u));
  /* 11f52d0e push eax */
  push32((uint32_t)(EAX));
  /* 11f52d0f call edi */
  call_ind((uint32_t)(EDI), 0x11f52d11u);
  /* 11f52d11 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f52d14 push 0x11f5ef88 */
  push32((uint32_t)(0x11f5ef88u));
  /* 11f52d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52d1a call edi */
  call_ind((uint32_t)(EDI), 0x11f52d1cu);
  /* 11f52d1c lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f52d1f push 0x11f5ef70 */
  push32((uint32_t)(0x11f5ef70u));
  /* 11f52d24 push edx */
  push32((uint32_t)(EDX));
  /* 11f52d25 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d27u);
  /* 11f52d27 lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 11f52d2a push 0x11f5ef64 */
  push32((uint32_t)(0x11f5ef64u));
  /* 11f52d2f push eax */
  push32((uint32_t)(EAX));
  /* 11f52d30 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d32u);
  /* 11f52d32 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52d35 lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 11f52d3b push 0x11f5ef58 */
  push32((uint32_t)(0x11f5ef58u));
  /* 11f52d40 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52d41 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d43u);
  /* 11f52d43 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52d49 push 0x11f5ef4c */
  push32((uint32_t)(0x11f5ef4cu));
  /* 11f52d4e push esi */
  push32((uint32_t)(ESI));
  /* 11f52d4f call edi */
  call_ind((uint32_t)(EDI), 0x11f52d51u);
  /* 11f52d51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52d54 pop edi */
  EDI = (pop32());
  /* 11f52d55 pop esi */
  ESI = (pop32());
  /* 11f52d56 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52d57:;
  /* 11f52d57 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52d5b mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52d61 push 0x11f5ef40 */
  push32((uint32_t)(0x11f5ef40u));
  /* 11f52d66 push esi */
  push32((uint32_t)(ESI));
  /* 11f52d67 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d69u);
  /* 11f52d69 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11f52d6c push 0x11f5ef30 */
  push32((uint32_t)(0x11f5ef30u));
  /* 11f52d71 push edx */
  push32((uint32_t)(EDX));
  /* 11f52d72 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d74u);
  /* 11f52d74 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11f52d77 push 0x11f5ef24 */
  push32((uint32_t)(0x11f5ef24u));
  /* 11f52d7c push eax */
  push32((uint32_t)(EAX));
  /* 11f52d7d call edi */
  call_ind((uint32_t)(EDI), 0x11f52d7fu);
  /* 11f52d7f lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 11f52d82 push 0x11f5ef18 */
  push32((uint32_t)(0x11f5ef18u));
  /* 11f52d87 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52d88 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d8au);
  /* 11f52d8a lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 11f52d8d push 0x11f5ef0c */
  push32((uint32_t)(0x11f5ef0cu));
  /* 11f52d92 push edx */
  push32((uint32_t)(EDX));
  /* 11f52d93 call edi */
  call_ind((uint32_t)(EDI), 0x11f52d95u);
  /* 11f52d95 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11f52d98 push 0x11f5eefc */
  push32((uint32_t)(0x11f5eefcu));
  /* 11f52d9d push eax */
  push32((uint32_t)(EAX));
  /* 11f52d9e call edi */
  call_ind((uint32_t)(EDI), 0x11f52da0u);
  /* 11f52da0 lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 11f52da3 push 0x11f5eeec */
  push32((uint32_t)(0x11f5eeecu));
  /* 11f52da8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52da9 call edi */
  call_ind((uint32_t)(EDI), 0x11f52dabu);
  /* 11f52dab lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 11f52dae push 0x11f5eee0 */
  push32((uint32_t)(0x11f5eee0u));
  /* 11f52db3 push edx */
  push32((uint32_t)(EDX));
  /* 11f52db4 call edi */
  call_ind((uint32_t)(EDI), 0x11f52db6u);
  /* 11f52db6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52db9 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 11f52dbc push 0x11f5eec8 */
  push32((uint32_t)(0x11f5eec8u));
  /* 11f52dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11f52dc2 call edi */
  call_ind((uint32_t)(EDI), 0x11f52dc4u);
  /* 11f52dc4 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 11f52dc7 push 0x11f5eeb4 */
  push32((uint32_t)(0x11f5eeb4u));
  /* 11f52dcc push ecx */
  push32((uint32_t)(ECX));
  /* 11f52dcd call edi */
  call_ind((uint32_t)(EDI), 0x11f52dcfu);
  /* 11f52dcf lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 11f52dd2 push 0x11f5eea4 */
  push32((uint32_t)(0x11f5eea4u));
  /* 11f52dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11f52dd8 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ddau);
  /* 11f52dda lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 11f52ddd push 0x11f5ee94 */
  push32((uint32_t)(0x11f5ee94u));
  /* 11f52de2 push eax */
  push32((uint32_t)(EAX));
  /* 11f52de3 call edi */
  call_ind((uint32_t)(EDI), 0x11f52de5u);
  /* 11f52de5 lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 11f52de8 push 0x11f5ee80 */
  push32((uint32_t)(0x11f5ee80u));
  /* 11f52ded push ecx */
  push32((uint32_t)(ECX));
  /* 11f52dee call edi */
  call_ind((uint32_t)(EDI), 0x11f52df0u);
  /* 11f52df0 lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 11f52df3 push 0x11f5ee74 */
  push32((uint32_t)(0x11f5ee74u));
  /* 11f52df8 push edx */
  push32((uint32_t)(EDX));
  /* 11f52df9 call edi */
  call_ind((uint32_t)(EDI), 0x11f52dfbu);
  /* 11f52dfb lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 11f52dfe push 0x11f5ee60 */
  push32((uint32_t)(0x11f5ee60u));
  /* 11f52e03 push eax */
  push32((uint32_t)(EAX));
  /* 11f52e04 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e06u);
  /* 11f52e06 lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 11f52e09 push 0x11f5ee54 */
  push32((uint32_t)(0x11f5ee54u));
  /* 11f52e0e push ecx */
  push32((uint32_t)(ECX));
  /* 11f52e0f call edi */
  call_ind((uint32_t)(EDI), 0x11f52e11u);
  /* 11f52e11 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52e14 lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 11f52e1a push 0x11f5ee48 */
  push32((uint32_t)(0x11f5ee48u));
  /* 11f52e1f push edx */
  push32((uint32_t)(EDX));
  /* 11f52e20 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e22u);
  /* 11f52e22 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52e28 push 0x11f5ee3c */
  push32((uint32_t)(0x11f5ee3cu));
  /* 11f52e2d push esi */
  push32((uint32_t)(ESI));
  /* 11f52e2e call edi */
  call_ind((uint32_t)(EDI), 0x11f52e30u);
  /* 11f52e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52e33 pop edi */
  EDI = (pop32());
  /* 11f52e34 pop esi */
  ESI = (pop32());
  /* 11f52e35 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52e36:;
  /* 11f52e36 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52e3a mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52e40 push 0x11f5ee28 */
  push32((uint32_t)(0x11f5ee28u));
  /* 11f52e45 push esi */
  push32((uint32_t)(ESI));
  /* 11f52e46 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e48u);
  /* 11f52e48 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f52e4b push 0x11f5ee18 */
  push32((uint32_t)(0x11f5ee18u));
  /* 11f52e50 push eax */
  push32((uint32_t)(EAX));
  /* 11f52e51 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e53u);
  /* 11f52e53 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f52e56 push 0x11f5ee0c */
  push32((uint32_t)(0x11f5ee0cu));
  /* 11f52e5b push ecx */
  push32((uint32_t)(ECX));
  /* 11f52e5c call edi */
  call_ind((uint32_t)(EDI), 0x11f52e5eu);
  /* 11f52e5e lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f52e61 push 0x11f5ee00 */
  push32((uint32_t)(0x11f5ee00u));
  /* 11f52e66 push edx */
  push32((uint32_t)(EDX));
  /* 11f52e67 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e69u);
  /* 11f52e69 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f52e6c push 0x11f5edf4 */
  push32((uint32_t)(0x11f5edf4u));
  /* 11f52e71 push eax */
  push32((uint32_t)(EAX));
  /* 11f52e72 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e74u);
  /* 11f52e74 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f52e77 push 0x11f5ede4 */
  push32((uint32_t)(0x11f5ede4u));
  /* 11f52e7c push ecx */
  push32((uint32_t)(ECX));
  /* 11f52e7d call edi */
  call_ind((uint32_t)(EDI), 0x11f52e7fu);
  /* 11f52e7f lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f52e82 push 0x11f5edd4 */
  push32((uint32_t)(0x11f5edd4u));
  /* 11f52e87 push edx */
  push32((uint32_t)(EDX));
  /* 11f52e88 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e8au);
  /* 11f52e8a lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f52e8d push 0x11f5edc4 */
  push32((uint32_t)(0x11f5edc4u));
  /* 11f52e92 push eax */
  push32((uint32_t)(EAX));
  /* 11f52e93 call edi */
  call_ind((uint32_t)(EDI), 0x11f52e95u);
  /* 11f52e95 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52e98 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 11f52e9b push 0x11f5edb0 */
  push32((uint32_t)(0x11f5edb0u));
  /* 11f52ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52ea1 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ea3u);
  /* 11f52ea3 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 11f52ea6 push 0x11f5eda0 */
  push32((uint32_t)(0x11f5eda0u));
  /* 11f52eab push edx */
  push32((uint32_t)(EDX));
  /* 11f52eac call edi */
  call_ind((uint32_t)(EDI), 0x11f52eaeu);
  /* 11f52eae lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 11f52eb1 push 0x11f5ed90 */
  push32((uint32_t)(0x11f5ed90u));
  /* 11f52eb6 push eax */
  push32((uint32_t)(EAX));
  /* 11f52eb7 call edi */
  call_ind((uint32_t)(EDI), 0x11f52eb9u);
  /* 11f52eb9 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 11f52ebc push 0x11f5ed7c */
  push32((uint32_t)(0x11f5ed7cu));
  /* 11f52ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52ec2 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ec4u);
  /* 11f52ec4 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 11f52ec7 push 0x11f5ed68 */
  push32((uint32_t)(0x11f5ed68u));
  /* 11f52ecc push edx */
  push32((uint32_t)(EDX));
  /* 11f52ecd call edi */
  call_ind((uint32_t)(EDI), 0x11f52ecfu);
  /* 11f52ecf lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 11f52ed2 push 0x11f5ed54 */
  push32((uint32_t)(0x11f5ed54u));
  /* 11f52ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11f52ed8 call edi */
  call_ind((uint32_t)(EDI), 0x11f52edau);
  /* 11f52eda lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 11f52edd push 0x11f5ed3c */
  push32((uint32_t)(0x11f5ed3cu));
  /* 11f52ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52ee3 call edi */
  call_ind((uint32_t)(EDI), 0x11f52ee5u);
  /* 11f52ee5 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 11f52ee8 push 0x11f5ed30 */
  push32((uint32_t)(0x11f5ed30u));
  /* 11f52eed push edx */
  push32((uint32_t)(EDX));
  /* 11f52eee call edi */
  call_ind((uint32_t)(EDI), 0x11f52ef0u);
  /* 11f52ef0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52ef3 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 11f52ef9 push 0x11f5ed24 */
  push32((uint32_t)(0x11f5ed24u));
  /* 11f52efe push eax */
  push32((uint32_t)(EAX));
  /* 11f52eff call edi */
  call_ind((uint32_t)(EDI), 0x11f52f01u);
  /* 11f52f01 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52f07 push 0x11f5ed18 */
  push32((uint32_t)(0x11f5ed18u));
  /* 11f52f0c push esi */
  push32((uint32_t)(ESI));
  /* 11f52f0d call edi */
  call_ind((uint32_t)(EDI), 0x11f52f0fu);
  /* 11f52f0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52f12 pop edi */
  EDI = (pop32());
  /* 11f52f13 pop esi */
  ESI = (pop32());
  /* 11f52f14 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52f15:;
  /* 11f52f15 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52f19 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52f1f push 0x11f5ed04 */
  push32((uint32_t)(0x11f5ed04u));
  /* 11f52f24 push esi */
  push32((uint32_t)(ESI));
  /* 11f52f25 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f27u);
  /* 11f52f27 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f52f2a push 0x11f5ecf4 */
  push32((uint32_t)(0x11f5ecf4u));
  /* 11f52f2f push ecx */
  push32((uint32_t)(ECX));
  /* 11f52f30 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f32u);
  /* 11f52f32 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f52f35 push 0x11f5ece8 */
  push32((uint32_t)(0x11f5ece8u));
  /* 11f52f3a push edx */
  push32((uint32_t)(EDX));
  /* 11f52f3b call edi */
  call_ind((uint32_t)(EDI), 0x11f52f3du);
  /* 11f52f3d lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f52f40 push 0x11f5ecdc */
  push32((uint32_t)(0x11f5ecdcu));
  /* 11f52f45 push eax */
  push32((uint32_t)(EAX));
  /* 11f52f46 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f48u);
  /* 11f52f48 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f52f4b push 0x11f5ecd0 */
  push32((uint32_t)(0x11f5ecd0u));
  /* 11f52f50 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52f51 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f53u);
  /* 11f52f53 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f52f56 push 0x11f5ecc0 */
  push32((uint32_t)(0x11f5ecc0u));
  /* 11f52f5b push edx */
  push32((uint32_t)(EDX));
  /* 11f52f5c call edi */
  call_ind((uint32_t)(EDI), 0x11f52f5eu);
  /* 11f52f5e lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f52f61 push 0x11f5ecb0 */
  push32((uint32_t)(0x11f5ecb0u));
  /* 11f52f66 push eax */
  push32((uint32_t)(EAX));
  /* 11f52f67 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f69u);
  /* 11f52f69 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f52f6c push 0x11f5eca4 */
  push32((uint32_t)(0x11f5eca4u));
  /* 11f52f71 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52f72 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f74u);
  /* 11f52f74 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52f77 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f52f7a push 0x11f5ec8c */
  push32((uint32_t)(0x11f5ec8cu));
  /* 11f52f7f push edx */
  push32((uint32_t)(EDX));
  /* 11f52f80 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f82u);
  /* 11f52f82 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f52f85 push 0x11f5ec80 */
  push32((uint32_t)(0x11f5ec80u));
  /* 11f52f8a push eax */
  push32((uint32_t)(EAX));
  /* 11f52f8b call edi */
  call_ind((uint32_t)(EDI), 0x11f52f8du);
  /* 11f52f8d lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f52f90 push 0x11f5ec70 */
  push32((uint32_t)(0x11f5ec70u));
  /* 11f52f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52f96 call edi */
  call_ind((uint32_t)(EDI), 0x11f52f98u);
  /* 11f52f98 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f52f9b push 0x11f5ec60 */
  push32((uint32_t)(0x11f5ec60u));
  /* 11f52fa0 push edx */
  push32((uint32_t)(EDX));
  /* 11f52fa1 call edi */
  call_ind((uint32_t)(EDI), 0x11f52fa3u);
  /* 11f52fa3 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f52fa6 push 0x11f5ec4c */
  push32((uint32_t)(0x11f5ec4cu));
  /* 11f52fab push eax */
  push32((uint32_t)(EAX));
  /* 11f52fac call edi */
  call_ind((uint32_t)(EDI), 0x11f52faeu);
  /* 11f52fae lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f52fb1 push 0x11f5ec40 */
  push32((uint32_t)(0x11f5ec40u));
  /* 11f52fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f52fb7 call edi */
  call_ind((uint32_t)(EDI), 0x11f52fb9u);
  /* 11f52fb9 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f52fbc push 0x11f5ec2c */
  push32((uint32_t)(0x11f5ec2cu));
  /* 11f52fc1 push edx */
  push32((uint32_t)(EDX));
  /* 11f52fc2 call edi */
  call_ind((uint32_t)(EDI), 0x11f52fc4u);
  /* 11f52fc4 lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 11f52fc7 push 0x11f5ec20 */
  push32((uint32_t)(0x11f5ec20u));
  /* 11f52fcc push eax */
  push32((uint32_t)(EAX));
  /* 11f52fcd call edi */
  call_ind((uint32_t)(EDI), 0x11f52fcfu);
  /* 11f52fcf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52fd2 lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 11f52fd8 push 0x11f5ec14 */
  push32((uint32_t)(0x11f5ec14u));
  /* 11f52fdd push ecx */
  push32((uint32_t)(ECX));
  /* 11f52fde call edi */
  call_ind((uint32_t)(EDI), 0x11f52fe0u);
  /* 11f52fe0 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52fe6 push 0x11f5ec08 */
  push32((uint32_t)(0x11f5ec08u));
  /* 11f52feb push esi */
  push32((uint32_t)(ESI));
  /* 11f52fec call edi */
  call_ind((uint32_t)(EDI), 0x11f52feeu);
  /* 11f52fee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f52ff1 pop edi */
  EDI = (pop32());
  /* 11f52ff2 pop esi */
  ESI = (pop32());
  /* 11f52ff3 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f52ff4:;
  /* 11f52ff4 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f52ff8 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f52ffe push 0x11f5ebf4 */
  push32((uint32_t)(0x11f5ebf4u));
  /* 11f53003 push esi */
  push32((uint32_t)(ESI));
  /* 11f53004 call edi */
  call_ind((uint32_t)(EDI), 0x11f53006u);
  /* 11f53006 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11f53009 push 0x11f5ebe4 */
  push32((uint32_t)(0x11f5ebe4u));
  /* 11f5300e push edx */
  push32((uint32_t)(EDX));
  /* 11f5300f call edi */
  call_ind((uint32_t)(EDI), 0x11f53011u);
  /* 11f53011 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11f53014 push 0x11f5ebd8 */
  push32((uint32_t)(0x11f5ebd8u));
  /* 11f53019 push eax */
  push32((uint32_t)(EAX));
  /* 11f5301a call edi */
  call_ind((uint32_t)(EDI), 0x11f5301cu);
  /* 11f5301c lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 11f5301f push 0x11f5ebcc */
  push32((uint32_t)(0x11f5ebccu));
  /* 11f53024 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53025 call edi */
  call_ind((uint32_t)(EDI), 0x11f53027u);
  /* 11f53027 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 11f5302a push 0x11f5ebc0 */
  push32((uint32_t)(0x11f5ebc0u));
  /* 11f5302f push edx */
  push32((uint32_t)(EDX));
  /* 11f53030 call edi */
  call_ind((uint32_t)(EDI), 0x11f53032u);
  /* 11f53032 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11f53035 push 0x11f5ebb0 */
  push32((uint32_t)(0x11f5ebb0u));
  /* 11f5303a push eax */
  push32((uint32_t)(EAX));
  /* 11f5303b call edi */
  call_ind((uint32_t)(EDI), 0x11f5303du);
  /* 11f5303d lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 11f53040 push 0x11f5eba0 */
  push32((uint32_t)(0x11f5eba0u));
  /* 11f53045 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53046 call edi */
  call_ind((uint32_t)(EDI), 0x11f53048u);
  /* 11f53048 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 11f5304b push 0x11f5eb94 */
  push32((uint32_t)(0x11f5eb94u));
  /* 11f53050 push edx */
  push32((uint32_t)(EDX));
  /* 11f53051 call edi */
  call_ind((uint32_t)(EDI), 0x11f53053u);
  /* 11f53053 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53056 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 11f53059 push 0x11f5eb7c */
  push32((uint32_t)(0x11f5eb7cu));
  /* 11f5305e push eax */
  push32((uint32_t)(EAX));
  /* 11f5305f call edi */
  call_ind((uint32_t)(EDI), 0x11f53061u);
  /* 11f53061 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 11f53064 push 0x11f5eb68 */
  push32((uint32_t)(0x11f5eb68u));
  /* 11f53069 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5306a call edi */
  call_ind((uint32_t)(EDI), 0x11f5306cu);
  /* 11f5306c lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 11f5306f push 0x11f5eb58 */
  push32((uint32_t)(0x11f5eb58u));
  /* 11f53074 push edx */
  push32((uint32_t)(EDX));
  /* 11f53075 call edi */
  call_ind((uint32_t)(EDI), 0x11f53077u);
  /* 11f53077 lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 11f5307a push 0x11f5eb48 */
  push32((uint32_t)(0x11f5eb48u));
  /* 11f5307f push eax */
  push32((uint32_t)(EAX));
  /* 11f53080 call edi */
  call_ind((uint32_t)(EDI), 0x11f53082u);
  /* 11f53082 lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 11f53085 push 0x11f5eb34 */
  push32((uint32_t)(0x11f5eb34u));
  /* 11f5308a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5308b call edi */
  call_ind((uint32_t)(EDI), 0x11f5308du);
  /* 11f5308d lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 11f53090 push 0x11f5eb28 */
  push32((uint32_t)(0x11f5eb28u));
  /* 11f53095 push edx */
  push32((uint32_t)(EDX));
  /* 11f53096 call edi */
  call_ind((uint32_t)(EDI), 0x11f53098u);
  /* 11f53098 lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 11f5309b push 0x11f5eb14 */
  push32((uint32_t)(0x11f5eb14u));
  /* 11f530a0 push eax */
  push32((uint32_t)(EAX));
  /* 11f530a1 call edi */
  call_ind((uint32_t)(EDI), 0x11f530a3u);
  /* 11f530a3 lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 11f530a6 push 0x11f5eb08 */
  push32((uint32_t)(0x11f5eb08u));
  /* 11f530ab push ecx */
  push32((uint32_t)(ECX));
  /* 11f530ac call edi */
  call_ind((uint32_t)(EDI), 0x11f530aeu);
  /* 11f530ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f530b1 lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 11f530b7 push 0x11f5eafc */
  push32((uint32_t)(0x11f5eafcu));
  /* 11f530bc push edx */
  push32((uint32_t)(EDX));
  /* 11f530bd call edi */
  call_ind((uint32_t)(EDI), 0x11f530bfu);
  /* 11f530bf add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f530c5 push 0x11f5eaf0 */
  push32((uint32_t)(0x11f5eaf0u));
  /* 11f530ca push esi */
  push32((uint32_t)(ESI));
  /* 11f530cb call edi */
  call_ind((uint32_t)(EDI), 0x11f530cdu);
  /* 11f530cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f530d0 pop edi */
  EDI = (pop32());
  /* 11f530d1 pop esi */
  ESI = (pop32());
  /* 11f530d2 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f530d3:;
  /* 11f530d3 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f530d7 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f530dd push 0x11f5eadc */
  push32((uint32_t)(0x11f5eadcu));
  /* 11f530e2 push esi */
  push32((uint32_t)(ESI));
  /* 11f530e3 call edi */
  call_ind((uint32_t)(EDI), 0x11f530e5u);
  /* 11f530e5 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f530e8 push 0x11f5eac8 */
  push32((uint32_t)(0x11f5eac8u));
  /* 11f530ed push eax */
  push32((uint32_t)(EAX));
  /* 11f530ee call edi */
  call_ind((uint32_t)(EDI), 0x11f530f0u);
  /* 11f530f0 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f530f3 push 0x11f5eabc */
  push32((uint32_t)(0x11f5eabcu));
  /* 11f530f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f530f9 call edi */
  call_ind((uint32_t)(EDI), 0x11f530fbu);
  /* 11f530fb lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f530fe push 0x11f5eab0 */
  push32((uint32_t)(0x11f5eab0u));
  /* 11f53103 push edx */
  push32((uint32_t)(EDX));
  /* 11f53104 call edi */
  call_ind((uint32_t)(EDI), 0x11f53106u);
  /* 11f53106 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f53109 push 0x11f5eaa4 */
  push32((uint32_t)(0x11f5eaa4u));
  /* 11f5310e push eax */
  push32((uint32_t)(EAX));
  /* 11f5310f call edi */
  call_ind((uint32_t)(EDI), 0x11f53111u);
  /* 11f53111 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f53114 push 0x11f5ea94 */
  push32((uint32_t)(0x11f5ea94u));
  /* 11f53119 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5311a call edi */
  call_ind((uint32_t)(EDI), 0x11f5311cu);
  /* 11f5311c lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f5311f push 0x11f5ea84 */
  push32((uint32_t)(0x11f5ea84u));
  /* 11f53124 push edx */
  push32((uint32_t)(EDX));
  /* 11f53125 call edi */
  call_ind((uint32_t)(EDI), 0x11f53127u);
  /* 11f53127 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f5312a push 0x11f5ea74 */
  push32((uint32_t)(0x11f5ea74u));
  /* 11f5312f push eax */
  push32((uint32_t)(EAX));
  /* 11f53130 call edi */
  call_ind((uint32_t)(EDI), 0x11f53132u);
  /* 11f53132 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53135 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 11f53138 push 0x11f5ea60 */
  push32((uint32_t)(0x11f5ea60u));
  /* 11f5313d push ecx */
  push32((uint32_t)(ECX));
  /* 11f5313e call edi */
  call_ind((uint32_t)(EDI), 0x11f53140u);
  /* 11f53140 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 11f53143 push 0x11f5ea50 */
  push32((uint32_t)(0x11f5ea50u));
  /* 11f53148 push edx */
  push32((uint32_t)(EDX));
  /* 11f53149 call edi */
  call_ind((uint32_t)(EDI), 0x11f5314bu);
  /* 11f5314b lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 11f5314e push 0x11f5ea40 */
  push32((uint32_t)(0x11f5ea40u));
  /* 11f53153 push eax */
  push32((uint32_t)(EAX));
  /* 11f53154 call edi */
  call_ind((uint32_t)(EDI), 0x11f53156u);
  /* 11f53156 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 11f53159 push 0x11f5ea2c */
  push32((uint32_t)(0x11f5ea2cu));
  /* 11f5315e push ecx */
  push32((uint32_t)(ECX));
  /* 11f5315f call edi */
  call_ind((uint32_t)(EDI), 0x11f53161u);
  /* 11f53161 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 11f53164 push 0x11f5ea18 */
  push32((uint32_t)(0x11f5ea18u));
  /* 11f53169 push edx */
  push32((uint32_t)(EDX));
  /* 11f5316a call edi */
  call_ind((uint32_t)(EDI), 0x11f5316cu);
  /* 11f5316c lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 11f5316f push 0x11f5ea04 */
  push32((uint32_t)(0x11f5ea04u));
  /* 11f53174 push eax */
  push32((uint32_t)(EAX));
  /* 11f53175 call edi */
  call_ind((uint32_t)(EDI), 0x11f53177u);
  /* 11f53177 lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 11f5317a push 0x11f5e9ec */
  push32((uint32_t)(0x11f5e9ecu));
  /* 11f5317f push ecx */
  push32((uint32_t)(ECX));
  /* 11f53180 call edi */
  call_ind((uint32_t)(EDI), 0x11f53182u);
  /* 11f53182 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 11f53185 push 0x11f5e9e0 */
  push32((uint32_t)(0x11f5e9e0u));
  /* 11f5318a push edx */
  push32((uint32_t)(EDX));
  /* 11f5318b call edi */
  call_ind((uint32_t)(EDI), 0x11f5318du);
  /* 11f5318d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53190 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 11f53196 push 0x11f5e9d4 */
  push32((uint32_t)(0x11f5e9d4u));
  /* 11f5319b push eax */
  push32((uint32_t)(EAX));
  /* 11f5319c call edi */
  call_ind((uint32_t)(EDI), 0x11f5319eu);
  /* 11f5319e add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f531a4 push 0x11f5e058 */
  push32((uint32_t)(0x11f5e058u));
  /* 11f531a9 push esi */
  push32((uint32_t)(ESI));
  /* 11f531aa call edi */
  call_ind((uint32_t)(EDI), 0x11f531acu);
  /* 11f531ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f531af pop edi */
  EDI = (pop32());
  /* 11f531b0 pop esi */
  ESI = (pop32());
  /* 11f531b1 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f531b2:;
  /* 11f531b2 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f531b6 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f531bc push 0x11f5e9c0 */
  push32((uint32_t)(0x11f5e9c0u));
  /* 11f531c1 push esi */
  push32((uint32_t)(ESI));
  /* 11f531c2 call edi */
  call_ind((uint32_t)(EDI), 0x11f531c4u);
  /* 11f531c4 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f531c7 push 0x11f5e9ac */
  push32((uint32_t)(0x11f5e9acu));
  /* 11f531cc push ecx */
  push32((uint32_t)(ECX));
  /* 11f531cd call edi */
  call_ind((uint32_t)(EDI), 0x11f531cfu);
  /* 11f531cf lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f531d2 push 0x11f5e99c */
  push32((uint32_t)(0x11f5e99cu));
  /* 11f531d7 push edx */
  push32((uint32_t)(EDX));
  /* 11f531d8 call edi */
  call_ind((uint32_t)(EDI), 0x11f531dau);
  /* 11f531da lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f531dd push 0x11f5e990 */
  push32((uint32_t)(0x11f5e990u));
  /* 11f531e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f531e3 call edi */
  call_ind((uint32_t)(EDI), 0x11f531e5u);
  /* 11f531e5 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f531e8 push 0x11f5e984 */
  push32((uint32_t)(0x11f5e984u));
  /* 11f531ed push ecx */
  push32((uint32_t)(ECX));
  /* 11f531ee call edi */
  call_ind((uint32_t)(EDI), 0x11f531f0u);
  /* 11f531f0 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f531f3 push 0x11f5e974 */
  push32((uint32_t)(0x11f5e974u));
  /* 11f531f8 push edx */
  push32((uint32_t)(EDX));
  /* 11f531f9 call edi */
  call_ind((uint32_t)(EDI), 0x11f531fbu);
  /* 11f531fb lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f531fe push 0x11f5e964 */
  push32((uint32_t)(0x11f5e964u));
  /* 11f53203 push eax */
  push32((uint32_t)(EAX));
  /* 11f53204 call edi */
  call_ind((uint32_t)(EDI), 0x11f53206u);
  /* 11f53206 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f53209 push 0x11f5e958 */
  push32((uint32_t)(0x11f5e958u));
  /* 11f5320e push ecx */
  push32((uint32_t)(ECX));
  /* 11f5320f call edi */
  call_ind((uint32_t)(EDI), 0x11f53211u);
  /* 11f53211 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53214 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f53217 push 0x11f5e948 */
  push32((uint32_t)(0x11f5e948u));
  /* 11f5321c push edx */
  push32((uint32_t)(EDX));
  /* 11f5321d call edi */
  call_ind((uint32_t)(EDI), 0x11f5321fu);
  /* 11f5321f lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f53222 push 0x11f5e938 */
  push32((uint32_t)(0x11f5e938u));
  /* 11f53227 push eax */
  push32((uint32_t)(EAX));
  /* 11f53228 call edi */
  call_ind((uint32_t)(EDI), 0x11f5322au);
  /* 11f5322a lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f5322d push 0x11f5e928 */
  push32((uint32_t)(0x11f5e928u));
  /* 11f53232 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53233 call edi */
  call_ind((uint32_t)(EDI), 0x11f53235u);
  /* 11f53235 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f53238 push 0x11f5e914 */
  push32((uint32_t)(0x11f5e914u));
  /* 11f5323d push edx */
  push32((uint32_t)(EDX));
  /* 11f5323e call edi */
  call_ind((uint32_t)(EDI), 0x11f53240u);
  /* 11f53240 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f53243 push 0x11f5e900 */
  push32((uint32_t)(0x11f5e900u));
  /* 11f53248 push eax */
  push32((uint32_t)(EAX));
  /* 11f53249 call edi */
  call_ind((uint32_t)(EDI), 0x11f5324bu);
  /* 11f5324b lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f5324e push 0x11f5e8f4 */
  push32((uint32_t)(0x11f5e8f4u));
  /* 11f53253 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53254 call edi */
  call_ind((uint32_t)(EDI), 0x11f53256u);
  /* 11f53256 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f53259 push 0x11f5e8e0 */
  push32((uint32_t)(0x11f5e8e0u));
  /* 11f5325e push edx */
  push32((uint32_t)(EDX));
  /* 11f5325f call edi */
  call_ind((uint32_t)(EDI), 0x11f53261u);
  /* 11f53261 lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 11f53264 push 0x11f5e8d4 */
  push32((uint32_t)(0x11f5e8d4u));
  /* 11f53269 push eax */
  push32((uint32_t)(EAX));
  /* 11f5326a call edi */
  call_ind((uint32_t)(EDI), 0x11f5326cu);
  /* 11f5326c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5326f lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 11f53275 push 0x11f5e8c4 */
  push32((uint32_t)(0x11f5e8c4u));
  /* 11f5327a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5327b call edi */
  call_ind((uint32_t)(EDI), 0x11f5327du);
  /* 11f5327d add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53283 push 0x11f5e8b8 */
  push32((uint32_t)(0x11f5e8b8u));
  /* 11f53288 push esi */
  push32((uint32_t)(ESI));
  /* 11f53289 call edi */
  call_ind((uint32_t)(EDI), 0x11f5328bu);
  /* 11f5328b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5328e pop edi */
  EDI = (pop32());
  /* 11f5328f pop esi */
  ESI = (pop32());
  /* 11f53290 ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f53291:;
  /* 11f53291 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f53295 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f5329b push 0x11f5e8a4 */
  push32((uint32_t)(0x11f5e8a4u));
  /* 11f532a0 push esi */
  push32((uint32_t)(ESI));
  /* 11f532a1 call edi */
  call_ind((uint32_t)(EDI), 0x11f532a3u);
  /* 11f532a3 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11f532a6 push 0x11f5e894 */
  push32((uint32_t)(0x11f5e894u));
  /* 11f532ab push edx */
  push32((uint32_t)(EDX));
  /* 11f532ac call edi */
  call_ind((uint32_t)(EDI), 0x11f532aeu);
  /* 11f532ae lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11f532b1 push 0x11f5e888 */
  push32((uint32_t)(0x11f5e888u));
  /* 11f532b6 push eax */
  push32((uint32_t)(EAX));
  /* 11f532b7 call edi */
  call_ind((uint32_t)(EDI), 0x11f532b9u);
  /* 11f532b9 lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 11f532bc push 0x11f5e87c */
  push32((uint32_t)(0x11f5e87cu));
  /* 11f532c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f532c2 call edi */
  call_ind((uint32_t)(EDI), 0x11f532c4u);
  /* 11f532c4 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 11f532c7 push 0x11f5e870 */
  push32((uint32_t)(0x11f5e870u));
  /* 11f532cc push edx */
  push32((uint32_t)(EDX));
  /* 11f532cd call edi */
  call_ind((uint32_t)(EDI), 0x11f532cfu);
  /* 11f532cf lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11f532d2 push 0x11f5e860 */
  push32((uint32_t)(0x11f5e860u));
  /* 11f532d7 push eax */
  push32((uint32_t)(EAX));
  /* 11f532d8 call edi */
  call_ind((uint32_t)(EDI), 0x11f532dau);
  /* 11f532da lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 11f532dd push 0x11f5e850 */
  push32((uint32_t)(0x11f5e850u));
  /* 11f532e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f532e3 call edi */
  call_ind((uint32_t)(EDI), 0x11f532e5u);
  /* 11f532e5 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 11f532e8 push 0x11f5e844 */
  push32((uint32_t)(0x11f5e844u));
  /* 11f532ed push edx */
  push32((uint32_t)(EDX));
  /* 11f532ee call edi */
  call_ind((uint32_t)(EDI), 0x11f532f0u);
  /* 11f532f0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f532f3 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 11f532f6 push 0x11f5e82c */
  push32((uint32_t)(0x11f5e82cu));
  /* 11f532fb push eax */
  push32((uint32_t)(EAX));
  /* 11f532fc call edi */
  call_ind((uint32_t)(EDI), 0x11f532feu);
  /* 11f532fe lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 11f53301 push 0x11f5e818 */
  push32((uint32_t)(0x11f5e818u));
  /* 11f53306 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53307 call edi */
  call_ind((uint32_t)(EDI), 0x11f53309u);
  /* 11f53309 lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 11f5330c push 0x11f5e808 */
  push32((uint32_t)(0x11f5e808u));
  /* 11f53311 push edx */
  push32((uint32_t)(EDX));
  /* 11f53312 call edi */
  call_ind((uint32_t)(EDI), 0x11f53314u);
  /* 11f53314 lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 11f53317 push 0x11f5e7f8 */
  push32((uint32_t)(0x11f5e7f8u));
  /* 11f5331c push eax */
  push32((uint32_t)(EAX));
  /* 11f5331d call edi */
  call_ind((uint32_t)(EDI), 0x11f5331fu);
  /* 11f5331f lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 11f53322 push 0x11f5e7e4 */
  push32((uint32_t)(0x11f5e7e4u));
  /* 11f53327 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53328 call edi */
  call_ind((uint32_t)(EDI), 0x11f5332au);
  /* 11f5332a lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 11f5332d push 0x11f5e7d8 */
  push32((uint32_t)(0x11f5e7d8u));
  /* 11f53332 push edx */
  push32((uint32_t)(EDX));
  /* 11f53333 call edi */
  call_ind((uint32_t)(EDI), 0x11f53335u);
  /* 11f53335 lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 11f53338 push 0x11f5e7c4 */
  push32((uint32_t)(0x11f5e7c4u));
  /* 11f5333d push eax */
  push32((uint32_t)(EAX));
  /* 11f5333e call edi */
  call_ind((uint32_t)(EDI), 0x11f53340u);
  /* 11f53340 lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 11f53343 push 0x11f5e7b8 */
  push32((uint32_t)(0x11f5e7b8u));
  /* 11f53348 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53349 call edi */
  call_ind((uint32_t)(EDI), 0x11f5334bu);
  /* 11f5334b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5334e lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 11f53354 push 0x11f5e7ac */
  push32((uint32_t)(0x11f5e7acu));
  /* 11f53359 push edx */
  push32((uint32_t)(EDX));
  /* 11f5335a call edi */
  call_ind((uint32_t)(EDI), 0x11f5335cu);
  /* 11f5335c add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53362 push 0x11f5e7a0 */
  push32((uint32_t)(0x11f5e7a0u));
  /* 11f53367 push esi */
  push32((uint32_t)(ESI));
  /* 11f53368 call edi */
  call_ind((uint32_t)(EDI), 0x11f5336au);
  /* 11f5336a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5336d pop edi */
  EDI = (pop32());
  /* 11f5336e pop esi */
  ESI = (pop32());
  /* 11f5336f ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f53370:;
  /* 11f53370 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f53374 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f5337a push 0x11f5e78c */
  push32((uint32_t)(0x11f5e78cu));
  /* 11f5337f push esi */
  push32((uint32_t)(ESI));
  /* 11f53380 call edi */
  call_ind((uint32_t)(EDI), 0x11f53382u);
  /* 11f53382 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f53385 push 0x11f5e77c */
  push32((uint32_t)(0x11f5e77cu));
  /* 11f5338a push eax */
  push32((uint32_t)(EAX));
  /* 11f5338b call edi */
  call_ind((uint32_t)(EDI), 0x11f5338du);
  /* 11f5338d lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f53390 push 0x11f5e770 */
  push32((uint32_t)(0x11f5e770u));
  /* 11f53395 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53396 call edi */
  call_ind((uint32_t)(EDI), 0x11f53398u);
  /* 11f53398 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f5339b push 0x11f5e764 */
  push32((uint32_t)(0x11f5e764u));
  /* 11f533a0 push edx */
  push32((uint32_t)(EDX));
  /* 11f533a1 call edi */
  call_ind((uint32_t)(EDI), 0x11f533a3u);
  /* 11f533a3 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f533a6 push 0x11f5e758 */
  push32((uint32_t)(0x11f5e758u));
  /* 11f533ab push eax */
  push32((uint32_t)(EAX));
  /* 11f533ac call edi */
  call_ind((uint32_t)(EDI), 0x11f533aeu);
  /* 11f533ae lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f533b1 push 0x11f5e748 */
  push32((uint32_t)(0x11f5e748u));
  /* 11f533b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f533b7 call edi */
  call_ind((uint32_t)(EDI), 0x11f533b9u);
  /* 11f533b9 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f533bc push 0x11f5e738 */
  push32((uint32_t)(0x11f5e738u));
  /* 11f533c1 push edx */
  push32((uint32_t)(EDX));
  /* 11f533c2 call edi */
  call_ind((uint32_t)(EDI), 0x11f533c4u);
  /* 11f533c4 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f533c7 push 0x11f5e728 */
  push32((uint32_t)(0x11f5e728u));
  /* 11f533cc push eax */
  push32((uint32_t)(EAX));
  /* 11f533cd call edi */
  call_ind((uint32_t)(EDI), 0x11f533cfu);
  /* 11f533cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f533d2 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 11f533d5 push 0x11f5e714 */
  push32((uint32_t)(0x11f5e714u));
  /* 11f533da push ecx */
  push32((uint32_t)(ECX));
  /* 11f533db call edi */
  call_ind((uint32_t)(EDI), 0x11f533ddu);
  /* 11f533dd lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 11f533e0 push 0x11f5e704 */
  push32((uint32_t)(0x11f5e704u));
  /* 11f533e5 push edx */
  push32((uint32_t)(EDX));
  /* 11f533e6 call edi */
  call_ind((uint32_t)(EDI), 0x11f533e8u);
  /* 11f533e8 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 11f533eb push 0x11f5e6f4 */
  push32((uint32_t)(0x11f5e6f4u));
  /* 11f533f0 push eax */
  push32((uint32_t)(EAX));
  /* 11f533f1 call edi */
  call_ind((uint32_t)(EDI), 0x11f533f3u);
  /* 11f533f3 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 11f533f6 push 0x11f5e6e0 */
  push32((uint32_t)(0x11f5e6e0u));
  /* 11f533fb push ecx */
  push32((uint32_t)(ECX));
  /* 11f533fc call edi */
  call_ind((uint32_t)(EDI), 0x11f533feu);
  /* 11f533fe lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 11f53401 push 0x11f5e6cc */
  push32((uint32_t)(0x11f5e6ccu));
  /* 11f53406 push edx */
  push32((uint32_t)(EDX));
  /* 11f53407 call edi */
  call_ind((uint32_t)(EDI), 0x11f53409u);
  /* 11f53409 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 11f5340c push 0x11f5e6bc */
  push32((uint32_t)(0x11f5e6bcu));
  /* 11f53411 push eax */
  push32((uint32_t)(EAX));
  /* 11f53412 call edi */
  call_ind((uint32_t)(EDI), 0x11f53414u);
  /* 11f53414 lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 11f53417 push 0x11f5e6a4 */
  push32((uint32_t)(0x11f5e6a4u));
  /* 11f5341c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5341d call edi */
  call_ind((uint32_t)(EDI), 0x11f5341fu);
  /* 11f5341f lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 11f53422 push 0x11f5e698 */
  push32((uint32_t)(0x11f5e698u));
  /* 11f53427 push edx */
  push32((uint32_t)(EDX));
  /* 11f53428 call edi */
  call_ind((uint32_t)(EDI), 0x11f5342au);
  /* 11f5342a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5342d lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 11f53433 push 0x11f5e68c */
  push32((uint32_t)(0x11f5e68cu));
  /* 11f53438 push eax */
  push32((uint32_t)(EAX));
  /* 11f53439 call edi */
  call_ind((uint32_t)(EDI), 0x11f5343bu);
  /* 11f5343b add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53441 push 0x11f5e680 */
  push32((uint32_t)(0x11f5e680u));
  /* 11f53446 push esi */
  push32((uint32_t)(ESI));
  /* 11f53447 call edi */
  call_ind((uint32_t)(EDI), 0x11f53449u);
  /* 11f53449 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5344c pop edi */
  EDI = (pop32());
  /* 11f5344d pop esi */
  ESI = (pop32());
  /* 11f5344e ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f5344f:;
  /* 11f5344f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f53453 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f53459 push 0x11f5e66c */
  push32((uint32_t)(0x11f5e66cu));
  /* 11f5345e push esi */
  push32((uint32_t)(ESI));
  /* 11f5345f call edi */
  call_ind((uint32_t)(EDI), 0x11f53461u);
  /* 11f53461 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f53464 push 0x11f5e65c */
  push32((uint32_t)(0x11f5e65cu));
  /* 11f53469 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5346a call edi */
  call_ind((uint32_t)(EDI), 0x11f5346cu);
  /* 11f5346c lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f5346f push 0x11f5e650 */
  push32((uint32_t)(0x11f5e650u));
  /* 11f53474 push edx */
  push32((uint32_t)(EDX));
  /* 11f53475 call edi */
  call_ind((uint32_t)(EDI), 0x11f53477u);
  /* 11f53477 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f5347a push 0x11f5e644 */
  push32((uint32_t)(0x11f5e644u));
  /* 11f5347f push eax */
  push32((uint32_t)(EAX));
  /* 11f53480 call edi */
  call_ind((uint32_t)(EDI), 0x11f53482u);
  /* 11f53482 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f53485 push 0x11f5e638 */
  push32((uint32_t)(0x11f5e638u));
  /* 11f5348a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5348b call edi */
  call_ind((uint32_t)(EDI), 0x11f5348du);
  /* 11f5348d lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f53490 push 0x11f5e628 */
  push32((uint32_t)(0x11f5e628u));
  /* 11f53495 push edx */
  push32((uint32_t)(EDX));
  /* 11f53496 call edi */
  call_ind((uint32_t)(EDI), 0x11f53498u);
  /* 11f53498 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f5349b push 0x11f5e618 */
  push32((uint32_t)(0x11f5e618u));
  /* 11f534a0 push eax */
  push32((uint32_t)(EAX));
  /* 11f534a1 call edi */
  call_ind((uint32_t)(EDI), 0x11f534a3u);
  /* 11f534a3 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f534a6 push 0x11f5e60c */
  push32((uint32_t)(0x11f5e60cu));
  /* 11f534ab push ecx */
  push32((uint32_t)(ECX));
  /* 11f534ac call edi */
  call_ind((uint32_t)(EDI), 0x11f534aeu);
  /* 11f534ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f534b1 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f534b4 push 0x11f5e5f4 */
  push32((uint32_t)(0x11f5e5f4u));
  /* 11f534b9 push edx */
  push32((uint32_t)(EDX));
  /* 11f534ba call edi */
  call_ind((uint32_t)(EDI), 0x11f534bcu);
  /* 11f534bc lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f534bf push 0x11f5e5e8 */
  push32((uint32_t)(0x11f5e5e8u));
  /* 11f534c4 push eax */
  push32((uint32_t)(EAX));
  /* 11f534c5 call edi */
  call_ind((uint32_t)(EDI), 0x11f534c7u);
  /* 11f534c7 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f534ca push 0x11f5e5d8 */
  push32((uint32_t)(0x11f5e5d8u));
  /* 11f534cf push ecx */
  push32((uint32_t)(ECX));
  /* 11f534d0 call edi */
  call_ind((uint32_t)(EDI), 0x11f534d2u);
  /* 11f534d2 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f534d5 push 0x11f5e5c8 */
  push32((uint32_t)(0x11f5e5c8u));
  /* 11f534da push edx */
  push32((uint32_t)(EDX));
  /* 11f534db call edi */
  call_ind((uint32_t)(EDI), 0x11f534ddu);
  /* 11f534dd lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f534e0 push 0x11f5e5b4 */
  push32((uint32_t)(0x11f5e5b4u));
  /* 11f534e5 push eax */
  push32((uint32_t)(EAX));
  /* 11f534e6 call edi */
  call_ind((uint32_t)(EDI), 0x11f534e8u);
  /* 11f534e8 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f534eb push 0x11f5e5a8 */
  push32((uint32_t)(0x11f5e5a8u));
  /* 11f534f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f534f1 call edi */
  call_ind((uint32_t)(EDI), 0x11f534f3u);
  /* 11f534f3 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f534f6 push 0x11f5e594 */
  push32((uint32_t)(0x11f5e594u));
  /* 11f534fb push edx */
  push32((uint32_t)(EDX));
  /* 11f534fc call edi */
  call_ind((uint32_t)(EDI), 0x11f534feu);
  /* 11f534fe lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 11f53501 push 0x11f5e588 */
  push32((uint32_t)(0x11f5e588u));
  /* 11f53506 push eax */
  push32((uint32_t)(EAX));
  /* 11f53507 call edi */
  call_ind((uint32_t)(EDI), 0x11f53509u);
  /* 11f53509 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5350c lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 11f53512 push 0x11f5e57c */
  push32((uint32_t)(0x11f5e57cu));
  /* 11f53517 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53518 call edi */
  call_ind((uint32_t)(EDI), 0x11f5351au);
  /* 11f5351a add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53520 push 0x11f5e570 */
  push32((uint32_t)(0x11f5e570u));
  /* 11f53525 push esi */
  push32((uint32_t)(ESI));
  /* 11f53526 call edi */
  call_ind((uint32_t)(EDI), 0x11f53528u);
  /* 11f53528 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5352b pop edi */
  EDI = (pop32());
  /* 11f5352c pop esi */
  ESI = (pop32());
  /* 11f5352d ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f5352e:;
  /* 11f5352e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f53532 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f53538 push 0x11f5e55c */
  push32((uint32_t)(0x11f5e55cu));
  /* 11f5353d push esi */
  push32((uint32_t)(ESI));
  /* 11f5353e call edi */
  call_ind((uint32_t)(EDI), 0x11f53540u);
  /* 11f53540 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11f53543 push 0x11f5e54c */
  push32((uint32_t)(0x11f5e54cu));
  /* 11f53548 push edx */
  push32((uint32_t)(EDX));
  /* 11f53549 call edi */
  call_ind((uint32_t)(EDI), 0x11f5354bu);
  /* 11f5354b lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11f5354e push 0x11f5e53c */
  push32((uint32_t)(0x11f5e53cu));
  /* 11f53553 push eax */
  push32((uint32_t)(EAX));
  /* 11f53554 call edi */
  call_ind((uint32_t)(EDI), 0x11f53556u);
  /* 11f53556 lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 11f53559 push 0x11f5e530 */
  push32((uint32_t)(0x11f5e530u));
  /* 11f5355e push ecx */
  push32((uint32_t)(ECX));
  /* 11f5355f call edi */
  call_ind((uint32_t)(EDI), 0x11f53561u);
  /* 11f53561 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 11f53564 push 0x11f5e524 */
  push32((uint32_t)(0x11f5e524u));
  /* 11f53569 push edx */
  push32((uint32_t)(EDX));
  /* 11f5356a call edi */
  call_ind((uint32_t)(EDI), 0x11f5356cu);
  /* 11f5356c lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11f5356f push 0x11f5e514 */
  push32((uint32_t)(0x11f5e514u));
  /* 11f53574 push eax */
  push32((uint32_t)(EAX));
  /* 11f53575 call edi */
  call_ind((uint32_t)(EDI), 0x11f53577u);
  /* 11f53577 lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 11f5357a push 0x11f5e504 */
  push32((uint32_t)(0x11f5e504u));
  /* 11f5357f push ecx */
  push32((uint32_t)(ECX));
  /* 11f53580 call edi */
  call_ind((uint32_t)(EDI), 0x11f53582u);
  /* 11f53582 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 11f53585 push 0x11f5e4f0 */
  push32((uint32_t)(0x11f5e4f0u));
  /* 11f5358a push edx */
  push32((uint32_t)(EDX));
  /* 11f5358b call edi */
  call_ind((uint32_t)(EDI), 0x11f5358du);
  /* 11f5358d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53590 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 11f53593 push 0x11f5e4dc */
  push32((uint32_t)(0x11f5e4dcu));
  /* 11f53598 push eax */
  push32((uint32_t)(EAX));
  /* 11f53599 call edi */
  call_ind((uint32_t)(EDI), 0x11f5359bu);
  /* 11f5359b lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 11f5359e push 0x11f5e4d0 */
  push32((uint32_t)(0x11f5e4d0u));
  /* 11f535a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f535a4 call edi */
  call_ind((uint32_t)(EDI), 0x11f535a6u);
  /* 11f535a6 lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 11f535a9 push 0x11f5e4b8 */
  push32((uint32_t)(0x11f5e4b8u));
  /* 11f535ae push edx */
  push32((uint32_t)(EDX));
  /* 11f535af call edi */
  call_ind((uint32_t)(EDI), 0x11f535b1u);
  /* 11f535b1 lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 11f535b4 push 0x11f5e4a4 */
  push32((uint32_t)(0x11f5e4a4u));
  /* 11f535b9 push eax */
  push32((uint32_t)(EAX));
  /* 11f535ba call edi */
  call_ind((uint32_t)(EDI), 0x11f535bcu);
  /* 11f535bc lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 11f535bf push 0x11f5e490 */
  push32((uint32_t)(0x11f5e490u));
  /* 11f535c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f535c5 call edi */
  call_ind((uint32_t)(EDI), 0x11f535c7u);
  /* 11f535c7 lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 11f535ca push 0x11f5e47c */
  push32((uint32_t)(0x11f5e47cu));
  /* 11f535cf push edx */
  push32((uint32_t)(EDX));
  /* 11f535d0 call edi */
  call_ind((uint32_t)(EDI), 0x11f535d2u);
  /* 11f535d2 lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 11f535d5 push 0x11f5e46c */
  push32((uint32_t)(0x11f5e46cu));
  /* 11f535da push eax */
  push32((uint32_t)(EAX));
  /* 11f535db call edi */
  call_ind((uint32_t)(EDI), 0x11f535ddu);
  /* 11f535dd add esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f535e0 push 0x11f5e460 */
  push32((uint32_t)(0x11f5e460u));
  /* 11f535e5 push esi */
  push32((uint32_t)(ESI));
  /* 11f535e6 call edi */
  call_ind((uint32_t)(EDI), 0x11f535e8u);
  /* 11f535e8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f535eb pop edi */
  EDI = (pop32());
  /* 11f535ec pop esi */
  ESI = (pop32());
  /* 11f535ed ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f535ee:;
  /* 11f535ee mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f535f2 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f535f8 push 0x11f5e450 */
  push32((uint32_t)(0x11f5e450u));
  /* 11f535fd push esi */
  push32((uint32_t)(ESI));
  /* 11f535fe call edi */
  call_ind((uint32_t)(EDI), 0x11f53600u);
  /* 11f53600 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f53603 push 0x11f5e43c */
  push32((uint32_t)(0x11f5e43cu));
  /* 11f53608 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53609 call edi */
  call_ind((uint32_t)(EDI), 0x11f5360bu);
  /* 11f5360b lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f5360e push 0x11f5e42c */
  push32((uint32_t)(0x11f5e42cu));
  /* 11f53613 push edx */
  push32((uint32_t)(EDX));
  /* 11f53614 call edi */
  call_ind((uint32_t)(EDI), 0x11f53616u);
  /* 11f53616 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f53619 push 0x11f5e420 */
  push32((uint32_t)(0x11f5e420u));
  /* 11f5361e push eax */
  push32((uint32_t)(EAX));
  /* 11f5361f call edi */
  call_ind((uint32_t)(EDI), 0x11f53621u);
  /* 11f53621 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f53624 push 0x11f5e414 */
  push32((uint32_t)(0x11f5e414u));
  /* 11f53629 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5362a call edi */
  call_ind((uint32_t)(EDI), 0x11f5362cu);
  /* 11f5362c lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f5362f push 0x11f5e404 */
  push32((uint32_t)(0x11f5e404u));
  /* 11f53634 push edx */
  push32((uint32_t)(EDX));
  /* 11f53635 call edi */
  call_ind((uint32_t)(EDI), 0x11f53637u);
  /* 11f53637 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f5363a push 0x11f5e3f4 */
  push32((uint32_t)(0x11f5e3f4u));
  /* 11f5363f push eax */
  push32((uint32_t)(EAX));
  /* 11f53640 call edi */
  call_ind((uint32_t)(EDI), 0x11f53642u);
  /* 11f53642 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f53645 push 0x11f5e3e4 */
  push32((uint32_t)(0x11f5e3e4u));
  /* 11f5364a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5364b call edi */
  call_ind((uint32_t)(EDI), 0x11f5364du);
  /* 11f5364d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53650 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 11f53653 push 0x11f5e3d0 */
  push32((uint32_t)(0x11f5e3d0u));
  /* 11f53658 push edx */
  push32((uint32_t)(EDX));
  /* 11f53659 call edi */
  call_ind((uint32_t)(EDI), 0x11f5365bu);
  /* 11f5365b lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 11f5365e push 0x11f5e3c0 */
  push32((uint32_t)(0x11f5e3c0u));
  /* 11f53663 push eax */
  push32((uint32_t)(EAX));
  /* 11f53664 call edi */
  call_ind((uint32_t)(EDI), 0x11f53666u);
  /* 11f53666 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 11f53669 push 0x11f5e3b0 */
  push32((uint32_t)(0x11f5e3b0u));
  /* 11f5366e push ecx */
  push32((uint32_t)(ECX));
  /* 11f5366f call edi */
  call_ind((uint32_t)(EDI), 0x11f53671u);
  /* 11f53671 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 11f53674 push 0x11f5e39c */
  push32((uint32_t)(0x11f5e39cu));
  /* 11f53679 push edx */
  push32((uint32_t)(EDX));
  /* 11f5367a call edi */
  call_ind((uint32_t)(EDI), 0x11f5367cu);
  /* 11f5367c lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 11f5367f push 0x11f5e390 */
  push32((uint32_t)(0x11f5e390u));
  /* 11f53684 push eax */
  push32((uint32_t)(EAX));
  /* 11f53685 call edi */
  call_ind((uint32_t)(EDI), 0x11f53687u);
  /* 11f53687 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 11f5368a push 0x11f5e378 */
  push32((uint32_t)(0x11f5e378u));
  /* 11f5368f push ecx */
  push32((uint32_t)(ECX));
  /* 11f53690 call edi */
  call_ind((uint32_t)(EDI), 0x11f53692u);
  /* 11f53692 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 11f53695 push 0x11f5e360 */
  push32((uint32_t)(0x11f5e360u));
  /* 11f5369a push edx */
  push32((uint32_t)(EDX));
  /* 11f5369b call edi */
  call_ind((uint32_t)(EDI), 0x11f5369du);
  /* 11f5369d add esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f536a0 push 0x11f5e354 */
  push32((uint32_t)(0x11f5e354u));
  /* 11f536a5 push esi */
  push32((uint32_t)(ESI));
  /* 11f536a6 call edi */
  call_ind((uint32_t)(EDI), 0x11f536a8u);
  /* 11f536a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f536ab pop edi */
  EDI = (pop32());
  /* 11f536ac pop esi */
  ESI = (pop32());
  /* 11f536ad ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
L_11f536ae:;
  /* 11f536ae mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f536b2 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f536b8 push 0x11f5e340 */
  push32((uint32_t)(0x11f5e340u));
  /* 11f536bd push esi */
  push32((uint32_t)(ESI));
  /* 11f536be call edi */
  call_ind((uint32_t)(EDI), 0x11f536c0u);
  /* 11f536c0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f536c3 push 0x11f5e330 */
  push32((uint32_t)(0x11f5e330u));
  /* 11f536c8 push eax */
  push32((uint32_t)(EAX));
  /* 11f536c9 call edi */
  call_ind((uint32_t)(EDI), 0x11f536cbu);
  /* 11f536cb lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f536ce push 0x11f5e324 */
  push32((uint32_t)(0x11f5e324u));
  /* 11f536d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f536d4 call edi */
  call_ind((uint32_t)(EDI), 0x11f536d6u);
  /* 11f536d6 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f536d9 push 0x11f5e318 */
  push32((uint32_t)(0x11f5e318u));
  /* 11f536de push edx */
  push32((uint32_t)(EDX));
  /* 11f536df call edi */
  call_ind((uint32_t)(EDI), 0x11f536e1u);
  /* 11f536e1 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f536e4 push 0x11f5e30c */
  push32((uint32_t)(0x11f5e30cu));
  /* 11f536e9 push eax */
  push32((uint32_t)(EAX));
  /* 11f536ea call edi */
  call_ind((uint32_t)(EDI), 0x11f536ecu);
  /* 11f536ec lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f536ef push 0x11f5e2fc */
  push32((uint32_t)(0x11f5e2fcu));
  /* 11f536f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f536f5 call edi */
  call_ind((uint32_t)(EDI), 0x11f536f7u);
  /* 11f536f7 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f536fa push 0x11f5e2ec */
  push32((uint32_t)(0x11f5e2ecu));
  /* 11f536ff push edx */
  push32((uint32_t)(EDX));
  /* 11f53700 call edi */
  call_ind((uint32_t)(EDI), 0x11f53702u);
  /* 11f53702 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f53705 push 0x11f5e2e0 */
  push32((uint32_t)(0x11f5e2e0u));
  /* 11f5370a push eax */
  push32((uint32_t)(EAX));
  /* 11f5370b call edi */
  call_ind((uint32_t)(EDI), 0x11f5370du);
  /* 11f5370d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53710 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 11f53713 push 0x11f5e2c8 */
  push32((uint32_t)(0x11f5e2c8u));
  /* 11f53718 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53719 call edi */
  call_ind((uint32_t)(EDI), 0x11f5371bu);
  /* 11f5371b lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 11f5371e push 0x11f5e2bc */
  push32((uint32_t)(0x11f5e2bcu));
  /* 11f53723 push edx */
  push32((uint32_t)(EDX));
  /* 11f53724 call edi */
  call_ind((uint32_t)(EDI), 0x11f53726u);
  /* 11f53726 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 11f53729 push 0x11f5e2ac */
  push32((uint32_t)(0x11f5e2acu));
  /* 11f5372e push eax */
  push32((uint32_t)(EAX));
  /* 11f5372f call edi */
  call_ind((uint32_t)(EDI), 0x11f53731u);
  /* 11f53731 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 11f53734 push 0x11f5e29c */
  push32((uint32_t)(0x11f5e29cu));
  /* 11f53739 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5373a call edi */
  call_ind((uint32_t)(EDI), 0x11f5373cu);
  /* 11f5373c lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 11f5373f push 0x11f5e288 */
  push32((uint32_t)(0x11f5e288u));
  /* 11f53744 push edx */
  push32((uint32_t)(EDX));
  /* 11f53745 call edi */
  call_ind((uint32_t)(EDI), 0x11f53747u);
  /* 11f53747 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 11f5374a push 0x11f5e27c */
  push32((uint32_t)(0x11f5e27cu));
  /* 11f5374f push eax */
  push32((uint32_t)(EAX));
  /* 11f53750 call edi */
  call_ind((uint32_t)(EDI), 0x11f53752u);
  /* 11f53752 lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 11f53755 push 0x11f5e268 */
  push32((uint32_t)(0x11f5e268u));
  /* 11f5375a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5375b call edi */
  call_ind((uint32_t)(EDI), 0x11f5375du);
  /* 11f5375d lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 11f53760 push 0x11f5e25c */
  push32((uint32_t)(0x11f5e25cu));
  /* 11f53765 push edx */
  push32((uint32_t)(EDX));
  /* 11f53766 call edi */
  call_ind((uint32_t)(EDI), 0x11f53768u);
  /* 11f53768 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5376b lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 11f53771 push 0x11f5e250 */
  push32((uint32_t)(0x11f5e250u));
  /* 11f53776 push eax */
  push32((uint32_t)(EAX));
  /* 11f53777 call edi */
  call_ind((uint32_t)(EDI), 0x11f53779u);
  /* 11f53779 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5377f push 0x11f5e244 */
  push32((uint32_t)(0x11f5e244u));
  /* 11f53784 push esi */
  push32((uint32_t)(ESI));
  /* 11f53785 call edi */
  call_ind((uint32_t)(EDI), 0x11f53787u);
  /* 11f53787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5378a:;
  /* 11f5378a pop edi */
  EDI = (pop32());
  /* 11f5378b pop esi */
  ESI = (pop32());
  /* 11f5378c ret  */
  ESPCHK(0x11f52820u, _esp0);
  ESP += 4; return;
}

/* FUN_100037e0 @ 0x11f537e0 (275 bytes, 96 insns) */
void f_11f537e0(void) {
  FTRACE(0x11f537e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f537e0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f537e4 push esi */
  push32((uint32_t)(ESI));
  /* 11f537e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f537ea push edi */
  push32((uint32_t)(EDI));
  /* 11f537eb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f537ec je 0x11f53879 */
  if (C.zf) goto L_11f53879;
  /* 11f537f2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f537f5 jne 0x11f538f0 */
  if (!C.zf) goto L_11f538f0;
  /* 11f537fb cmp dword ptr [esp + 0x10], 9 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53800 jne 0x11f538f0 */
  if (!C.zf) goto L_11f538f0;
  /* 11f53806 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f5380a mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f53810 push 0x11f5f6b4 */
  push32((uint32_t)(0x11f5f6b4u));
  /* 11f53815 push esi */
  push32((uint32_t)(ESI));
  /* 11f53816 call edi */
  call_ind((uint32_t)(EDI), 0x11f53818u);
  /* 11f53818 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f5381b push 0x11f5f6a8 */
  push32((uint32_t)(0x11f5f6a8u));
  /* 11f53820 push eax */
  push32((uint32_t)(EAX));
  /* 11f53821 call edi */
  call_ind((uint32_t)(EDI), 0x11f53823u);
  /* 11f53823 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11f53826 push 0x11f5f698 */
  push32((uint32_t)(0x11f5f698u));
  /* 11f5382b push ecx */
  push32((uint32_t)(ECX));
  /* 11f5382c call edi */
  call_ind((uint32_t)(EDI), 0x11f5382eu);
  /* 11f5382e lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11f53831 push 0x11f5f68c */
  push32((uint32_t)(0x11f5f68cu));
  /* 11f53836 push edx */
  push32((uint32_t)(EDX));
  /* 11f53837 call edi */
  call_ind((uint32_t)(EDI), 0x11f53839u);
  /* 11f53839 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11f5383c push 0x11f5f680 */
  push32((uint32_t)(0x11f5f680u));
  /* 11f53841 push eax */
  push32((uint32_t)(EAX));
  /* 11f53842 call edi */
  call_ind((uint32_t)(EDI), 0x11f53844u);
  /* 11f53844 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11f53847 push 0x11f5f670 */
  push32((uint32_t)(0x11f5f670u));
  /* 11f5384c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5384d call edi */
  call_ind((uint32_t)(EDI), 0x11f5384fu);
  /* 11f5384f lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 11f53852 push 0x11f5f660 */
  push32((uint32_t)(0x11f5f660u));
  /* 11f53857 push edx */
  push32((uint32_t)(EDX));
  /* 11f53858 call edi */
  call_ind((uint32_t)(EDI), 0x11f5385au);
  /* 11f5385a lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11f5385d push 0x11f5f654 */
  push32((uint32_t)(0x11f5f654u));
  /* 11f53862 push eax */
  push32((uint32_t)(EAX));
  /* 11f53863 call edi */
  call_ind((uint32_t)(EDI), 0x11f53865u);
  /* 11f53865 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53868 add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5386b push 0x11f5f648 */
  push32((uint32_t)(0x11f5f648u));
  /* 11f53870 push esi */
  push32((uint32_t)(ESI));
  /* 11f53871 call edi */
  call_ind((uint32_t)(EDI), 0x11f53873u);
  /* 11f53873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53876 pop edi */
  EDI = (pop32());
  /* 11f53877 pop esi */
  ESI = (pop32());
  /* 11f53878 ret  */
  ESPCHK(0x11f537e0u, _esp0);
  ESP += 4; return;
L_11f53879:;
  /* 11f53879 cmp dword ptr [esp + 0x10], 9 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5387e jne 0x11f538f0 */
  if (!C.zf) goto L_11f538f0;
  /* 11f53880 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f53884 mov edi, dword ptr [0x11f5c180] */
  EDI = (r32((uint32_t)(0x11f5c180)));
  /* 11f5388a push 0x11f5f63c */
  push32((uint32_t)(0x11f5f63cu));
  /* 11f5388f push esi */
  push32((uint32_t)(ESI));
  /* 11f53890 call edi */
  call_ind((uint32_t)(EDI), 0x11f53892u);
  /* 11f53892 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11f53895 push 0x11f5f630 */
  push32((uint32_t)(0x11f5f630u));
  /* 11f5389a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5389b call edi */
  call_ind((uint32_t)(EDI), 0x11f5389du);
  /* 11f5389d lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11f538a0 push 0x11f5f620 */
  push32((uint32_t)(0x11f5f620u));
  /* 11f538a5 push edx */
  push32((uint32_t)(EDX));
  /* 11f538a6 call edi */
  call_ind((uint32_t)(EDI), 0x11f538a8u);
  /* 11f538a8 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f538ab push 0x11f5f614 */
  push32((uint32_t)(0x11f5f614u));
  /* 11f538b0 push eax */
  push32((uint32_t)(EAX));
  /* 11f538b1 call edi */
  call_ind((uint32_t)(EDI), 0x11f538b3u);
  /* 11f538b3 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11f538b6 push 0x11f5f608 */
  push32((uint32_t)(0x11f5f608u));
  /* 11f538bb push ecx */
  push32((uint32_t)(ECX));
  /* 11f538bc call edi */
  call_ind((uint32_t)(EDI), 0x11f538beu);
  /* 11f538be lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 11f538c1 push 0x11f5f5f8 */
  push32((uint32_t)(0x11f5f5f8u));
  /* 11f538c6 push edx */
  push32((uint32_t)(EDX));
  /* 11f538c7 call edi */
  call_ind((uint32_t)(EDI), 0x11f538c9u);
  /* 11f538c9 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 11f538cc push 0x11f5f5e8 */
  push32((uint32_t)(0x11f5f5e8u));
  /* 11f538d1 push eax */
  push32((uint32_t)(EAX));
  /* 11f538d2 call edi */
  call_ind((uint32_t)(EDI), 0x11f538d4u);
  /* 11f538d4 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 11f538d7 push 0x11f5f5dc */
  push32((uint32_t)(0x11f5f5dcu));
  /* 11f538dc push ecx */
  push32((uint32_t)(ECX));
  /* 11f538dd call edi */
  call_ind((uint32_t)(EDI), 0x11f538dfu);
  /* 11f538df add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f538e2 add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f538e5 push 0x11f5f5d0 */
  push32((uint32_t)(0x11f5f5d0u));
  /* 11f538ea push esi */
  push32((uint32_t)(ESI));
  /* 11f538eb call edi */
  call_ind((uint32_t)(EDI), 0x11f538edu);
  /* 11f538ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f538f0:;
  /* 11f538f0 pop edi */
  EDI = (pop32());
  /* 11f538f1 pop esi */
  ESI = (pop32());
  /* 11f538f2 ret  */
  ESPCHK(0x11f537e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x11f53900 (13 bytes, 4 insns) */
void f_11f53900(void) {
  FTRACE(0x11f53900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53900 call 0x11f540f3 */
  push32(0x11f53905u); f_11f540f3();
  /* 11f53905 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f53909 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11f5390c ret  */
  ESPCHK(0x11f53900u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11f5390d (34 bytes, 9 insns) */
void f_11f5390d(void) {
  FTRACE(0x11f5390du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5390d call 0x11f540f3 */
  push32(0x11f53912u); f_11f540f3();
  /* 11f53912 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f53915 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5391b add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53921 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11f53924 mov eax, ecx */
  EAX = (ECX);
  /* 11f53926 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f53929 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5392e ret  */
  ESPCHK(0x11f5390du, _esp0);
  ESP += 4; return;
}

/* FUN_1000392f @ 0x11f5392f (220 bytes, 75 insns) */
void f_11f5392f(void) {
  FTRACE(0x11f5392fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5392f push ebp */
  push32((uint32_t)(EBP));
  /* 11f53930 mov ebp, esp */
  EBP = (ESP);
  /* 11f53932 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f53938 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5393b push eax */
  push32((uint32_t)(EAX));
  /* 11f5393c call dword ptr [0x11f5c074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c074))), 0x11f53942u);
  /* 11f53942 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f53945 push eax */
  push32((uint32_t)(EAX));
  /* 11f53946 call dword ptr [0x11f5c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c070))), 0x11f5394cu);
  /* 11f5394c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11f53950 cmp ax, word ptr [0x11f62b1a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11f62b1a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f53957 jne 0x11f53994 */
  if (!C.zf) goto L_11f53994;
  /* 11f53959 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11f5395d cmp ax, word ptr [0x11f62b18] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11f62b18))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f53964 jne 0x11f53994 */
  if (!C.zf) goto L_11f53994;
  /* 11f53966 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11f5396a cmp ax, word ptr [0x11f62b16] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11f62b16))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f53971 jne 0x11f53994 */
  if (!C.zf) goto L_11f53994;
  /* 11f53973 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11f53977 cmp ax, word ptr [0x11f62b12] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11f62b12))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5397e jne 0x11f53994 */
  if (!C.zf) goto L_11f53994;
  /* 11f53980 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11f53984 cmp ax, word ptr [0x11f62b10] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11f62b10))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5398b jne 0x11f53994 */
  if (!C.zf) goto L_11f53994;
  /* 11f5398d mov eax, dword ptr [0x11f62b08] */
  EAX = (r32((uint32_t)(0x11f62b08)));
  /* 11f53992 jmp 0x11f539d9 */
  goto L_11f539d9;
L_11f53994:;
  /* 11f53994 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11f5399a push eax */
  push32((uint32_t)(EAX));
  /* 11f5399b call dword ptr [0x11f5c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c06c))), 0x11f539a1u);
  /* 11f539a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f539a4 je 0x11f539c1 */
  if (C.zf) goto L_11f539c1;
  /* 11f539a6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f539a9 jne 0x11f539bd */
  if (!C.zf) goto L_11f539bd;
  /* 11f539ab cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f539b0 je 0x11f539bd */
  if (C.zf) goto L_11f539bd;
  /* 11f539b2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f539b6 je 0x11f539bd */
  if (C.zf) goto L_11f539bd;
  /* 11f539b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f539ba pop eax */
  EAX = (pop32());
  /* 11f539bb jmp 0x11f539c4 */
  goto L_11f539c4;
L_11f539bd:;
  /* 11f539bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f539bf jmp 0x11f539c4 */
  goto L_11f539c4;
L_11f539c1:;
  /* 11f539c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f539c4:;
  /* 11f539c4 push esi */
  push32((uint32_t)(ESI));
  /* 11f539c5 push edi */
  push32((uint32_t)(EDI));
  /* 11f539c6 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11f539c9 mov edi, 0x11f62b10 */
  EDI = (0x11f62b10u);
  /* 11f539ce movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f539cf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f539d0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f539d1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f539d2 pop edi */
  EDI = (pop32());
  /* 11f539d3 mov dword ptr [0x11f62b08], eax */
  w32((uint32_t)(0x11f62b08), (EAX));
  /* 11f539d8 pop esi */
  ESI = (pop32());
L_11f539d9:;
  /* 11f539d9 push eax */
  push32((uint32_t)(EAX));
  /* 11f539da movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11f539de push eax */
  push32((uint32_t)(EAX));
  /* 11f539df movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11f539e3 push eax */
  push32((uint32_t)(EAX));
  /* 11f539e4 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11f539e8 push eax */
  push32((uint32_t)(EAX));
  /* 11f539e9 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11f539ed push eax */
  push32((uint32_t)(EAX));
  /* 11f539ee movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11f539f2 push eax */
  push32((uint32_t)(EAX));
  /* 11f539f3 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11f539f7 push eax */
  push32((uint32_t)(EAX));
  /* 11f539f8 call 0x11f541fa */
  push32(0x11f539fdu); f_11f541fa();
  /* 11f539fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53a00 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53a03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f53a05 je 0x11f53a09 */
  if (C.zf) goto L_11f53a09;
  /* 11f53a07 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f53a09:;
  /* 11f53a09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f53a0a ret  */
  ESPCHK(0x11f5392fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003a0b @ 0x11f53a0b (11 bytes, 4 insns) */
void f_11f53a0b(void) {
  FTRACE(0x11f53a0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53a0b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f53a0f call 0x11f542bc */
  push32(0x11f53a14u); f_11f542bc();
  /* 11f53a14 pop ecx */
  ECX = (pop32());
  /* 11f53a15 ret  */
  ESPCHK(0x11f53a0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003a16 @ 0x11f53a16 (45 bytes, 17 insns) */
void f_11f53a16(void) {
  FTRACE(0x11f53a16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53a16 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53a17 mov ebp, esp */
  EBP = (ESP);
  /* 11f53a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53a1a push ebx */
  push32((uint32_t)(EBX));
  /* 11f53a1b push esi */
  push32((uint32_t)(ESI));
  /* 11f53a1c push edi */
  push32((uint32_t)(EDI));
  /* 11f53a1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53a20 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53a23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f53a26 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11f53a2d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f53a2f mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11f53a35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53a38 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53a3b mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11f53a3e mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11f53a41 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10003a4a @ 0x11f53a4a (7 bytes, 4 insns) */
void f_11f53a4a(void) {
  FTRACE(0x11f53a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53a4a pop eax */
  EAX = (pop32());
  /* 11f53a4b pop ecx */
  ECX = (pop32());
  /* 11f53a4c xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11f53a4f jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10003a51 @ 0x11f53a51 (7 bytes, 4 insns) */
void f_11f53a51(void) {
  FTRACE(0x11f53a51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53a51 pop eax */
  EAX = (pop32());
  /* 11f53a52 pop ecx */
  ECX = (pop32());
  /* 11f53a53 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11f53a56 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10003a58 @ 0x11f53a58 (79 bytes, 29 insns) */
void f_11f53a58(void) {
  FTRACE(0x11f53a58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53a58 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53a59 mov ebp, esp */
  EBP = (ESP);
  /* 11f53a5b push ecx */
  push32((uint32_t)(ECX));
  /* 11f53a5c push ecx */
  push32((uint32_t)(ECX));
  /* 11f53a5d push ebx */
  push32((uint32_t)(EBX));
  /* 11f53a5e push esi */
  push32((uint32_t)(ESI));
  /* 11f53a5f push edi */
  push32((uint32_t)(EDI));
  /* 11f53a60 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f53a66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f53a69 mov dword ptr [ebp - 4], 0x11f53a80 */
  w32((uint32_t)(EBP + -0x4), (0x11f53a80u));
  /* 11f53a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f53a72 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f53a75 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11f53a78 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f53a7b call 0x11f5bdc2 */
  push32(0x11f53a80u); f_11f5bdc2();
  /* 11f53a80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53a83 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f53a86 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11f53a88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53a8b mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f53a8e mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f53a94 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f53a97 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11f53a99 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11f53aa0 pop edi */
  EDI = (pop32());
  /* 11f53aa1 pop esi */
  ESI = (pop32());
  /* 11f53aa2 pop ebx */
  EBX = (pop32());
  /* 11f53aa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f53aa4 ret 8 */
  ESPCHK(0x11f53a58u, _esp0);
  ESP += 12; return;
}

/* FUN_10003aa7 @ 0x11f53aa7 (54 bytes, 27 insns) */
void f_11f53aa7(void) {
  FTRACE(0x11f53aa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53aa7 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53aa8 mov ebp, esp */
  EBP = (ESP);
  /* 11f53aaa sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f53aad push ebx */
  push32((uint32_t)(EBX));
  /* 11f53aae push esi */
  push32((uint32_t)(ESI));
  /* 11f53aaf push edi */
  push32((uint32_t)(EDI));
  /* 11f53ab0 cld  */
  C.df=0;
  /* 11f53ab1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f53ab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f53ab6 push eax */
  push32((uint32_t)(EAX));
  /* 11f53ab7 push eax */
  push32((uint32_t)(EAX));
  /* 11f53ab8 push eax */
  push32((uint32_t)(EAX));
  /* 11f53ab9 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11f53abc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f53abf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f53ac2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f53ac5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f53ac8 call 0x11f543a5 */
  push32(0x11f53acdu); f_11f543a5();
  /* 11f53acd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53ad0 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11f53ad3 pop edi */
  EDI = (pop32());
  /* 11f53ad4 pop esi */
  ESI = (pop32());
  /* 11f53ad5 pop ebx */
  EBX = (pop32());
  /* 11f53ad6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f53ad9 mov esp, ebp */
  ESP = (EBP);
  /* 11f53adb pop ebp */
  EBP = (pop32());
  /* 11f53adc ret  */
  ESPCHK(0x11f53aa7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003add @ 0x11f53add (84 bytes, 26 insns) */
void f_11f53add(void) {
  FTRACE(0x11f53addu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53add push ebp */
  push32((uint32_t)(EBP));
  /* 11f53ade mov ebp, esp */
  EBP = (ESP);
  /* 11f53ae0 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f53ae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53ae6 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 11f53aea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53aed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f53af0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f53af3 mov dword ptr [ebp - 0x10], 0x11f53b31 */
  w32((uint32_t)(EBP + -0x10), (0x11f53b31u));
  /* 11f53afa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f53afb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f53afe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f53b01 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f53b07 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f53b0a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f53b10 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11f53b16 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f53b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53b1a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f53b1d call 0x11f54bc0 */
  push32(0x11f53b22u); f_11f54bc0();
  /* 11f53b22 mov ecx, eax */
  ECX = (EAX);
  /* 11f53b24 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f53b27 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11f53b2d mov eax, ecx */
  EAX = (ECX);
  /* 11f53b2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f53b30 ret  */
  ESPCHK(0x11f53addu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b31 @ 0x11f53b31 (37 bytes, 16 insns) */
void f_11f53b31(void) {
  FTRACE(0x11f53b31u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53b31 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53b32 mov ebp, esp */
  EBP = (ESP);
  /* 11f53b34 cld  */
  C.df=0;
  /* 11f53b35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f53b3a push eax */
  push32((uint32_t)(EAX));
  /* 11f53b3b push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11f53b3e push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11f53b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f53b43 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f53b46 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11f53b49 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f53b4c call 0x11f543a5 */
  push32(0x11f53b51u); f_11f543a5();
  /* 11f53b51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53b54 pop ebp */
  EBP = (pop32());
  /* 11f53b55 ret  */
  ESPCHK(0x11f53b31u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b56 @ 0x11f53b56 (182 bytes, 57 insns) */
void f_11f53b56(void) {
  FTRACE(0x11f53b56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53b56 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53b57 mov ebp, esp */
  EBP = (ESP);
  /* 11f53b59 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f53b5c push ebx */
  push32((uint32_t)(EBX));
  /* 11f53b5d push esi */
  push32((uint32_t)(ESI));
  /* 11f53b5e push edi */
  push32((uint32_t)(EDI));
  /* 11f53b5f and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11f53b63 mov dword ptr [ebp - 0x24], 0x11f53c0c */
  w32((uint32_t)(EBP + -0x24), (0x11f53c0cu));
  /* 11f53b6a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f53b6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f53b70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53b73 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f53b76 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f53b79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f53b7c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f53b7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f53b82 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11f53b86 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11f53b8a and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f53b8e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f53b92 mov dword ptr [ebp - 0x10], 0x11f53bde */
  w32((uint32_t)(EBP + -0x10), (0x11f53bdeu));
  /* 11f53b99 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11f53b9c mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11f53b9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f53ba5 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f53ba8 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11f53bae mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11f53bb4 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11f53bbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53bbe mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f53bc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f53bc4 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f53bc7 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11f53bca push eax */
  push32((uint32_t)(EAX));
  /* 11f53bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53bce push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11f53bd0 call 0x11f540f3 */
  push32(0x11f53bd5u); f_11f540f3();
  /* 11f53bd5 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11f53bd8u);
  /* 11f53bd8 pop ecx */
  ECX = (pop32());
  /* 11f53bd9 pop ecx */
  ECX = (pop32());
  /* 11f53bda and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 11f53bde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53be2 je 0x11f53bfb */
  if (C.zf) goto L_11f53bfb;
  /* 11f53be4 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11f53beb mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f53bed mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f53bf0 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11f53bf2 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11f53bf9 jmp 0x11f53c04 */
  goto L_11f53c04;
L_11f53bfb:;
  /* 11f53bfb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f53bfe mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11f53c04:;
  /* 11f53c04 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f53c07 pop edi */
  EDI = (pop32());
  /* 11f53c08 pop esi */
  ESI = (pop32());
  /* 11f53c09 pop ebx */
  EBX = (pop32());
  /* 11f53c0a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f53c0b ret  */
  ESPCHK(0x11f53b56u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c0c @ 0x11f53c0c (114 bytes, 47 insns) */
void f_11f53c0c(void) {
  FTRACE(0x11f53c0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53c0c push ebp */
  push32((uint32_t)(EBP));
  /* 11f53c0d mov ebp, esp */
  EBP = (ESP);
  /* 11f53c0f push ebx */
  push32((uint32_t)(EBX));
  /* 11f53c10 push esi */
  push32((uint32_t)(ESI));
  /* 11f53c11 push edi */
  push32((uint32_t)(EDI));
  /* 11f53c12 cld  */
  C.df=0;
  /* 11f53c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53c16 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f53c19 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 11f53c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53c1e je 0x11f53c2f */
  if (C.zf) goto L_11f53c2f;
  /* 11f53c20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c23 mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 11f53c2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f53c2c pop eax */
  EAX = (pop32());
  /* 11f53c2d jmp 0x11f53c7c */
  goto L_11f53c7c;
L_11f53c2f:;
  /* 11f53c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f53c31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c34 push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 11f53c37 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c3a push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11f53c3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c40 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11f53c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f53c45 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f53c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c4b push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11f53c4e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f53c51 call 0x11f543a5 */
  push32(0x11f53c56u); f_11f543a5();
  /* 11f53c56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53c59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c5c cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53c60 jne 0x11f53c6d */
  if (!C.zf) goto L_11f53c6d;
  /* 11f53c62 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f53c65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f53c68 call 0x11f53a58 */
  push32(0x11f53c6du); f_11f53a58();
L_11f53c6d:;
  /* 11f53c6d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53c70 mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11f53c73 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11f53c76 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11f53c79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f53c7b pop eax */
  EAX = (pop32());
L_11f53c7c:;
  /* 11f53c7c pop edi */
  EDI = (pop32());
  /* 11f53c7d pop esi */
  ESI = (pop32());
  /* 11f53c7e pop ebx */
  EBX = (pop32());
  /* 11f53c7f pop ebp */
  EBP = (pop32());
  /* 11f53c80 ret  */
  ESPCHK(0x11f53c0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c81 @ 0x11f53c81 (123 bytes, 51 insns) */
void f_11f53c81(void) {
  FTRACE(0x11f53c81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53c81 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53c82 mov ebp, esp */
  EBP = (ESP);
  /* 11f53c84 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53c85 push ebx */
  push32((uint32_t)(EBX));
  /* 11f53c86 push esi */
  push32((uint32_t)(ESI));
  /* 11f53c87 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53c8b push edi */
  push32((uint32_t)(EDI));
  /* 11f53c8c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53c8f mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 11f53c92 mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 11f53c95 mov eax, esi */
  EAX = (ESI);
  /* 11f53c97 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11f53c9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f53c9d jl 0x11f53cd8 */
  if ((C.sf!=C.of)) goto L_11f53cd8;
L_11f53c9f:;
  /* 11f53c9f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53ca2 jne 0x11f53ca9 */
  if (!C.zf) goto L_11f53ca9;
  /* 11f53ca4 call 0x11f54c6d */
  push32(0x11f53ca9u); f_11f54c6d();
L_11f53ca9:;
  /* 11f53ca9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f53cac dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f53cad lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11f53cb0 cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53cb4 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11f53cb7 jge 0x11f53cbe */
  if ((C.sf==C.of)) goto L_11f53cbe;
  /* 11f53cb9 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53cbc jle 0x11f53cc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f53cc3;
L_11f53cbe:;
  /* 11f53cbe cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53cc1 jne 0x11f53ccf */
  if (!C.zf) goto L_11f53ccf;
L_11f53cc3:;
  /* 11f53cc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53cc6 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11f53cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f53ccc mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_11f53ccf:;
  /* 11f53ccf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53cd3 jge 0x11f53c9f */
  if ((C.sf==C.of)) goto L_11f53c9f;
  /* 11f53cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f53cd8:;
  /* 11f53cd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f53cdb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f53cdc mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11f53cde mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f53ce1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f53ce3 cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53ce6 ja 0x11f53cec */
  if ((!C.cf&&!C.zf)) goto L_11f53cec;
  /* 11f53ce8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53cea jbe 0x11f53cf1 */
  if ((C.cf||C.zf)) goto L_11f53cf1;
L_11f53cec:;
  /* 11f53cec call 0x11f54c6d */
  push32(0x11f53cf1u); f_11f54c6d();
L_11f53cf1:;
  /* 11f53cf1 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11f53cf4 pop edi */
  EDI = (pop32());
  /* 11f53cf5 pop esi */
  ESI = (pop32());
  /* 11f53cf6 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11f53cf9 pop ebx */
  EBX = (pop32());
  /* 11f53cfa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f53cfb ret  */
  ESPCHK(0x11f53c81u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11f53cfc (32 bytes, 18 insns) */
void f_11f53cfc(void) {
  FTRACE(0x11f53cfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53cfc push ebp */
  push32((uint32_t)(EBP));
  /* 11f53cfd mov ebp, esp */
  EBP = (ESP);
  /* 11f53cff push ebx */
  push32((uint32_t)(EBX));
  /* 11f53d00 push esi */
  push32((uint32_t)(ESI));
  /* 11f53d01 push edi */
  push32((uint32_t)(EDI));
  /* 11f53d02 push ebp */
  push32((uint32_t)(EBP));
  /* 11f53d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f53d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f53d07 push 0x11f53d14 */
  push32((uint32_t)(0x11f53d14u));
  /* 11f53d0c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f53d0f call 0x11f5bdc2 */
  push32(0x11f53d14u); f_11f5bdc2();
  /* 11f53d14 pop ebp */
  EBP = (pop32());
  /* 11f53d15 pop edi */
  EDI = (pop32());
  /* 11f53d16 pop esi */
  ESI = (pop32());
  /* 11f53d17 pop ebx */
  EBX = (pop32());
  /* 11f53d18 mov esp, ebp */
  ESP = (EBP);
  /* 11f53d1a pop ebp */
  EBP = (pop32());
  /* 11f53d1b ret  */
  ESPCHK(0x11f53cfcu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11f53d3e (104 bytes, 33 insns) */
void f_11f53d3e(void) {
  FTRACE(0x11f53d3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53d3e push ebx */
  push32((uint32_t)(EBX));
  /* 11f53d3f push esi */
  push32((uint32_t)(ESI));
  /* 11f53d40 push edi */
  push32((uint32_t)(EDI));
  /* 11f53d41 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f53d45 push eax */
  push32((uint32_t)(EAX));
  /* 11f53d46 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11f53d48 push 0x11f53d1c */
  push32((uint32_t)(0x11f53d1cu));
  /* 11f53d4d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11f53d54 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11f53d5b:;
  /* 11f53d5b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f53d5f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f53d62 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11f53d65 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53d68 je 0x11f53d98 */
  if (C.zf) goto L_11f53d98;
  /* 11f53d6a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53d6e je 0x11f53d98 */
  if (C.zf) goto L_11f53d98;
  /* 11f53d70 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11f53d73 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11f53d76 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11f53d7a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11f53d7d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53d82 jne 0x11f53d96 */
  if (!C.zf) goto L_11f53d96;
  /* 11f53d84 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11f53d89 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11f53d8d call 0x11f53dd2 */
  push32(0x11f53d92u); f_11f53dd2();
  /* 11f53d92 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11f53d96u);
L_11f53d96:;
  /* 11f53d96 jmp 0x11f53d5b */
  goto L_11f53d5b;
L_11f53d98:;
  /* 11f53d98 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11f53d9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53da2 pop edi */
  EDI = (pop32());
  /* 11f53da3 pop esi */
  ESI = (pop32());
  /* 11f53da4 pop ebx */
  EBX = (pop32());
  /* 11f53da5 ret  */
  ESPCHK(0x11f53d3eu, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11f53da6 (35 bytes, 10 insns) */
void f_11f53da6(void) {
  FTRACE(0x11f53da6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53da6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f53da8 mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11f53daf cmp dword ptr [ecx + 4], 0x11f53d1c */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11f53d1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53db6 jne 0x11f53dc8 */
  if (!C.zf) goto L_11f53dc8;
  /* 11f53db8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f53dbb mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f53dbe cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53dc1 jne 0x11f53dc8 */
  if (!C.zf) goto L_11f53dc8;
  /* 11f53dc3 mov eax, 1 */
  EAX = (0x1u);
L_11f53dc8:;
  /* 11f53dc8 ret  */
  ESPCHK(0x11f53da6u, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11f53dc9 (9 bytes, 4 insns) */
void f_11f53dc9(void) {
  FTRACE(0x11f53dc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53dc9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f53dca push ecx */
  push32((uint32_t)(ECX));
  /* 11f53dcb mov ebx, 0x11f5f6c0 */
  EBX = (0x11f5f6c0u);
  /* 11f53dd0 jmp 0x11f53ddc */
  jmp_ind(0x11f53ddcu); return;
}

/* FUN_10003dd2 @ 0x11f53dd2 (24 bytes, 10 insns) */
void f_11f53dd2(void) {
  FTRACE(0x11f53dd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53dd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11f53dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53dd4 mov ebx, 0x11f5f6c0 */
  EBX = (0x11f5f6c0u);
  /* 11f53dd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53ddc mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f53ddf mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11f53de2 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11f53de5 pop ecx */
  ECX = (pop32());
  /* 11f53de6 pop ebx */
  EBX = (pop32());
  /* 11f53de7 ret 4 */
  ESPCHK(0x11f53dd2u, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x11f53dea (14 bytes, 6 insns) */
void f_11f53dea(void) {
  FTRACE(0x11f53deau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53dea push 1 */
  push32((uint32_t)(0x1u));
  /* 11f53dec push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f53df0 call 0x11f54cd5 */
  push32(0x11f53df5u); f_11f54cd5();
  /* 11f53df5 pop ecx */
  ECX = (pop32());
  /* 11f53df6 pop ecx */
  ECX = (pop32());
  /* 11f53df7 ret  */
  ESPCHK(0x11f53deau, _esp0);
  ESP += 4; return;
}

/* FUN_10003df8 @ 0x11f53df8 (49 bytes, 20 insns) */
void f_11f53df8(void) {
  FTRACE(0x11f53df8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53df8 push esi */
  push32((uint32_t)(ESI));
  /* 11f53df9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f53dfd push edi */
  push32((uint32_t)(EDI));
  /* 11f53dfe or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11f53e01 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11f53e05 je 0x11f53e0d */
  if (C.zf) goto L_11f53e0d;
  /* 11f53e07 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11f53e0b jmp 0x11f53e24 */
  goto L_11f53e24;
L_11f53e0d:;
  /* 11f53e0d push esi */
  push32((uint32_t)(ESI));
  /* 11f53e0e call 0x11f54eb9 */
  push32(0x11f53e13u); f_11f54eb9();
  /* 11f53e13 push esi */
  push32((uint32_t)(ESI));
  /* 11f53e14 call 0x11f53e29 */
  push32(0x11f53e19u); f_11f53e29();
  /* 11f53e19 push esi */
  push32((uint32_t)(ESI));
  /* 11f53e1a mov edi, eax */
  EDI = (EAX);
  /* 11f53e1c call 0x11f54f0b */
  push32(0x11f53e21u); f_11f54f0b();
  /* 11f53e21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f53e24:;
  /* 11f53e24 mov eax, edi */
  EAX = (EDI);
  /* 11f53e26 pop edi */
  EDI = (pop32());
  /* 11f53e27 pop esi */
  ESI = (pop32());
  /* 11f53e28 ret  */
  ESPCHK(0x11f53df8u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11f53e29 (76 bytes, 30 insns) */
void f_11f53e29(void) {
  FTRACE(0x11f53e29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53e29 push esi */
  push32((uint32_t)(ESI));
  /* 11f53e2a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f53e2e push edi */
  push32((uint32_t)(EDI));
  /* 11f53e2f or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11f53e32 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11f53e36 je 0x11f53e6c */
  if (C.zf) goto L_11f53e6c;
  /* 11f53e38 push esi */
  push32((uint32_t)(ESI));
  /* 11f53e39 call 0x11f55096 */
  push32(0x11f53e3eu); f_11f55096();
  /* 11f53e3e push esi */
  push32((uint32_t)(ESI));
  /* 11f53e3f mov edi, eax */
  EDI = (EAX);
  /* 11f53e41 call 0x11f5503d */
  push32(0x11f53e46u); f_11f5503d();
  /* 11f53e46 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f53e49 call 0x11f54f5d */
  push32(0x11f53e4eu); f_11f54f5d();
  /* 11f53e4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53e53 jge 0x11f53e5a */
  if ((C.sf==C.of)) goto L_11f53e5a;
  /* 11f53e55 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11f53e58 jmp 0x11f53e6c */
  goto L_11f53e6c;
L_11f53e5a:;
  /* 11f53e5a mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11f53e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53e5f je 0x11f53e6c */
  if (C.zf) goto L_11f53e6c;
  /* 11f53e61 push eax */
  push32((uint32_t)(EAX));
  /* 11f53e62 call 0x11f542bc */
  push32(0x11f53e67u); f_11f542bc();
  /* 11f53e67 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11f53e6b pop ecx */
  ECX = (pop32());
L_11f53e6c:;
  /* 11f53e6c and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11f53e70 mov eax, edi */
  EAX = (EDI);
  /* 11f53e72 pop edi */
  EDI = (pop32());
  /* 11f53e73 pop esi */
  ESI = (pop32());
  /* 11f53e74 ret  */
  ESPCHK(0x11f53e29u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e75 @ 0x11f53e75 (23 bytes, 6 insns) */
void f_11f53e75(void) {
  FTRACE(0x11f53e75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53e75 call 0x11f53e8d */
  push32(0x11f53e7au); f_11f53e8d();
  /* 11f53e7a call 0x11f551ef */
  push32(0x11f53e7fu); f_11f551ef();
  /* 11f53e7f mov dword ptr [0x11f62b24], eax */
  w32((uint32_t)(0x11f62b24), (EAX));
  /* 11f53e84 call 0x11f5519f */
  push32(0x11f53e89u); f_11f5519f();
  /* 11f53e89 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11f53e8b ret  */
  ESPCHK(0x11f53e75u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e8d @ 0x11f53e8d (56 bytes, 8 insns) */
void f_11f53e8d(void) {
  FTRACE(0x11f53e8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53e8d mov eax, 0x11f555c8 */
  EAX = (0x11f555c8u);
  /* 11f53e92 mov dword ptr [0x11f5f984], 0x11f55272 */
  w32((uint32_t)(0x11f5f984), (0x11f55272u));
  /* 11f53e9c mov dword ptr [0x11f5f980], eax */
  w32((uint32_t)(0x11f5f980), (EAX));
  /* 11f53ea1 mov dword ptr [0x11f5f988], 0x11f552d8 */
  w32((uint32_t)(0x11f5f988), (0x11f552d8u));
  /* 11f53eab mov dword ptr [0x11f5f98c], 0x11f55218 */
  w32((uint32_t)(0x11f5f98c), (0x11f55218u));
  /* 11f53eb5 mov dword ptr [0x11f5f990], 0x11f552c0 */
  w32((uint32_t)(0x11f5f990), (0x11f552c0u));
  /* 11f53ebf mov dword ptr [0x11f5f994], eax */
  w32((uint32_t)(0x11f5f994), (EAX));
  /* 11f53ec4 ret  */
  ESPCHK(0x11f53e8du, _esp0);
  ESP += 4; return;
}

/* FUN_10003ec5 @ 0x11f53ec5 (217 bytes, 57 insns) */
void f_11f53ec5(void) {
  FTRACE(0x11f53ec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53ec5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f53ec9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53ecc jne 0x11f53f5a */
  if (!C.zf) goto L_11f53f5a;
  /* 11f53ed2 call dword ptr [0x11f5c080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c080))), 0x11f53ed8u);
  /* 11f53ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f53eda mov dword ptr [0x11f62b4c], eax */
  w32((uint32_t)(0x11f62b4c), (EAX));
  /* 11f53edf call 0x11f55f19 */
  push32(0x11f53ee4u); f_11f55f19();
  /* 11f53ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53ee6 pop ecx */
  ECX = (pop32());
  /* 11f53ee7 je 0x11f53f25 */
  if (C.zf) goto L_11f53f25;
  /* 11f53ee9 mov eax, dword ptr [0x11f62b4c] */
  EAX = (r32((uint32_t)(0x11f62b4c)));
  /* 11f53eee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f53ef0 mov cl, byte ptr [0x11f62b4d] */
  CL = (r8((uint32_t)(0x11f62b4d)));
  /* 11f53ef6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f53efb shr dword ptr [0x11f62b4c], 0x10 */
  w32((uint32_t)(0x11f62b4c), (sh_shr((uint32_t)(r32((uint32_t)(0x11f62b4c))), (0x10u)&0x1f, 32)));
  /* 11f53f02 mov dword ptr [0x11f62b54], eax */
  w32((uint32_t)(0x11f62b54), (EAX));
  /* 11f53f07 mov dword ptr [0x11f62b58], ecx */
  w32((uint32_t)(0x11f62b58), (ECX));
  /* 11f53f0d shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f53f10 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f53f12 mov dword ptr [0x11f62b50], eax */
  w32((uint32_t)(0x11f62b50), (EAX));
  /* 11f53f17 call 0x11f5406e */
  push32(0x11f53f1cu); f_11f5406e();
  /* 11f53f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53f1e jne 0x11f53f29 */
  if (!C.zf) goto L_11f53f29;
  /* 11f53f20 call 0x11f55f76 */
  push32(0x11f53f25u); f_11f55f76();
L_11f53f25:;
  /* 11f53f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f53f27 jmp 0x11f53f9b */
  goto L_11f53f9b;
L_11f53f29:;
  /* 11f53f29 call dword ptr [0x11f5c07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c07c))), 0x11f53f2fu);
  /* 11f53f2f mov dword ptr [0x11f64224], eax */
  w32((uint32_t)(0x11f64224), (EAX));
  /* 11f53f34 call 0x11f55c72 */
  push32(0x11f53f39u); f_11f55c72();
  /* 11f53f39 mov dword ptr [0x11f62b2c], eax */
  w32((uint32_t)(0x11f62b2c), (EAX));
  /* 11f53f3e call 0x11f5575c */
  push32(0x11f53f43u); f_11f5575c();
  /* 11f53f43 call 0x11f55a25 */
  push32(0x11f53f48u); f_11f55a25();
  /* 11f53f48 call 0x11f5596c */
  push32(0x11f53f4du); f_11f5596c();
  /* 11f53f4d call 0x11f5563e */
  push32(0x11f53f52u); f_11f5563e();
  /* 11f53f52 inc dword ptr [0x11f62b28] */
  { uint32_t _r=(r32((uint32_t)(0x11f62b28)))+1; w32((uint32_t)(0x11f62b28), (_r)); fl_inc(_r,32); }
  /* 11f53f58 jmp 0x11f53f98 */
  goto L_11f53f98;
L_11f53f5a:;
  /* 11f53f5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f53f5c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53f5e jne 0x11f53f8c */
  if (!C.zf) goto L_11f53f8c;
  /* 11f53f60 cmp dword ptr [0x11f62b28], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f62b28))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53f66 jle 0x11f53f25 */
  if ((C.zf||C.sf!=C.of)) goto L_11f53f25;
  /* 11f53f68 dec dword ptr [0x11f62b28] */
  { uint32_t _r=(r32((uint32_t)(0x11f62b28)))-1; w32((uint32_t)(0x11f62b28), (_r)); fl_dec(_r,32); }
  /* 11f53f6e cmp dword ptr [0x11f62b84], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f62b84))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53f74 jne 0x11f53f7b */
  if (!C.zf) goto L_11f53f7b;
  /* 11f53f76 call 0x11f5567c */
  push32(0x11f53f7bu); f_11f5567c();
L_11f53f7b:;
  /* 11f53f7b call 0x11f55918 */
  push32(0x11f53f80u); f_11f55918();
  /* 11f53f80 call 0x11f540c2 */
  push32(0x11f53f85u); f_11f540c2();
  /* 11f53f85 call 0x11f55f76 */
  push32(0x11f53f8au); f_11f55f76();
  /* 11f53f8a jmp 0x11f53f98 */
  goto L_11f53f98;
L_11f53f8c:;
  /* 11f53f8c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53f8f jne 0x11f53f98 */
  if (!C.zf) goto L_11f53f98;
  /* 11f53f91 push ecx */
  push32((uint32_t)(ECX));
  /* 11f53f92 call 0x11f5415a */
  push32(0x11f53f97u); f_11f5415a();
  /* 11f53f97 pop ecx */
  ECX = (pop32());
L_11f53f98:;
  /* 11f53f98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f53f9a pop eax */
  EAX = (pop32());
L_11f53f9b:;
  /* 11f53f9b ret 0xc */
  ESPCHK(0x11f53ec5u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11f53f9e (157 bytes, 73 insns) */
void f_11f53f9e(void) {
  FTRACE(0x11f53f9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f53f9e push ebp */
  push32((uint32_t)(EBP));
  /* 11f53f9f mov ebp, esp */
  EBP = (ESP);
  /* 11f53fa1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f53fa2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f53fa5 push esi */
  push32((uint32_t)(ESI));
  /* 11f53fa6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f53fa9 push edi */
  push32((uint32_t)(EDI));
  /* 11f53faa mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f53fad test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f53faf jne 0x11f53fba */
  if (!C.zf) goto L_11f53fba;
  /* 11f53fb1 cmp dword ptr [0x11f62b28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62b28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53fb8 jmp 0x11f53fe0 */
  goto L_11f53fe0;
L_11f53fba:;
  /* 11f53fba cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53fbd je 0x11f53fc4 */
  if (C.zf) goto L_11f53fc4;
  /* 11f53fbf cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53fc2 jne 0x11f53fe6 */
  if (!C.zf) goto L_11f53fe6;
L_11f53fc4:;
  /* 11f53fc4 mov eax, dword ptr [0x11f64228] */
  EAX = (r32((uint32_t)(0x11f64228)));
  /* 11f53fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53fcb je 0x11f53fd6 */
  if (C.zf) goto L_11f53fd6;
  /* 11f53fcd push edi */
  push32((uint32_t)(EDI));
  /* 11f53fce push esi */
  push32((uint32_t)(ESI));
  /* 11f53fcf push ebx */
  push32((uint32_t)(EBX));
  /* 11f53fd0 call eax */
  call_ind((uint32_t)(EAX), 0x11f53fd2u);
  /* 11f53fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53fd4 je 0x11f53fe2 */
  if (C.zf) goto L_11f53fe2;
L_11f53fd6:;
  /* 11f53fd6 push edi */
  push32((uint32_t)(EDI));
  /* 11f53fd7 push esi */
  push32((uint32_t)(ESI));
  /* 11f53fd8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f53fd9 call 0x11f53ec5 */
  push32(0x11f53fdeu); f_11f53ec5();
  /* 11f53fde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11f53fe0:;
  /* 11f53fe0 jne 0x11f53fe6 */
  if (!C.zf) goto L_11f53fe6;
L_11f53fe2:;
  /* 11f53fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f53fe4 jmp 0x11f54034 */
  goto L_11f54034;
L_11f53fe6:;
  /* 11f53fe6 push edi */
  push32((uint32_t)(EDI));
  /* 11f53fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11f53fe8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f53fe9 call 0x11f51000 */
  push32(0x11f53feeu); f_11f51000();
  /* 11f53fee cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f53ff1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f53ff4 jne 0x11f54002 */
  if (!C.zf) goto L_11f54002;
  /* 11f53ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f53ff8 jne 0x11f54031 */
  if (!C.zf) goto L_11f54031;
  /* 11f53ffa push edi */
  push32((uint32_t)(EDI));
  /* 11f53ffb push eax */
  push32((uint32_t)(EAX));
  /* 11f53ffc push ebx */
  push32((uint32_t)(EBX));
  /* 11f53ffd call 0x11f53ec5 */
  push32(0x11f54002u); f_11f53ec5();
L_11f54002:;
  /* 11f54002 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f54004 je 0x11f5400b */
  if (C.zf) goto L_11f5400b;
  /* 11f54006 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54009 jne 0x11f54031 */
  if (!C.zf) goto L_11f54031;
L_11f5400b:;
  /* 11f5400b push edi */
  push32((uint32_t)(EDI));
  /* 11f5400c push esi */
  push32((uint32_t)(ESI));
  /* 11f5400d push ebx */
  push32((uint32_t)(EBX));
  /* 11f5400e call 0x11f53ec5 */
  push32(0x11f54013u); f_11f53ec5();
  /* 11f54013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54015 jne 0x11f5401a */
  if (!C.zf) goto L_11f5401a;
  /* 11f54017 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11f5401a:;
  /* 11f5401a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5401e je 0x11f54031 */
  if (C.zf) goto L_11f54031;
  /* 11f54020 mov eax, dword ptr [0x11f64228] */
  EAX = (r32((uint32_t)(0x11f64228)));
  /* 11f54025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54027 je 0x11f54031 */
  if (C.zf) goto L_11f54031;
  /* 11f54029 push edi */
  push32((uint32_t)(EDI));
  /* 11f5402a push esi */
  push32((uint32_t)(ESI));
  /* 11f5402b push ebx */
  push32((uint32_t)(EBX));
  /* 11f5402c call eax */
  call_ind((uint32_t)(EAX), 0x11f5402eu);
  /* 11f5402e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11f54031:;
  /* 11f54031 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f54034:;
  /* 11f54034 pop edi */
  EDI = (pop32());
  /* 11f54035 pop esi */
  ESI = (pop32());
  /* 11f54036 pop ebx */
  EBX = (pop32());
  /* 11f54037 pop ebp */
  EBP = (pop32());
  /* 11f54038 ret 0xc */
  ESPCHK(0x11f53f9eu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11f5403b (48 bytes, 15 insns) */
void f_11f5403b(void) {
  FTRACE(0x11f5403bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5403b mov eax, dword ptr [0x11f62b34] */
  EAX = (r32((uint32_t)(0x11f62b34)));
  /* 11f54040 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54043 je 0x11f54052 */
  if (C.zf) goto L_11f54052;
  /* 11f54045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54047 jne 0x11f54057 */
  if (!C.zf) goto L_11f54057;
  /* 11f54049 cmp dword ptr [0x11f62b38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62b38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54050 jne 0x11f54057 */
  if (!C.zf) goto L_11f54057;
L_11f54052:;
  /* 11f54052 call 0x11f5601e */
  push32(0x11f54057u); f_11f5601e();
L_11f54057:;
  /* 11f54057 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f5405b call 0x11f56057 */
  push32(0x11f54060u); f_11f56057();
  /* 11f54060 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f54065 call dword ptr [0x11f5f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5f6e4))), 0x11f5406bu);
  /* 11f5406b pop ecx */
  ECX = (pop32());
  /* 11f5406c pop ecx */
  ECX = (pop32());
  /* 11f5406d ret  */
  ESPCHK(0x11f5403bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000406e @ 0x11f5406e (84 bytes, 32 insns) */
void f_11f5406e(void) {
  FTRACE(0x11f5406eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5406e push esi */
  push32((uint32_t)(ESI));
  /* 11f5406f call 0x11f562e7 */
  push32(0x11f54074u); f_11f562e7();
  /* 11f54074 call dword ptr [0x11f5c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c08c))), 0x11f5407au);
  /* 11f5407a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5407d mov dword ptr [0x11f5f6e8], eax */
  w32((uint32_t)(0x11f5f6e8), (EAX));
  /* 11f54082 je 0x11f540be */
  if (C.zf) goto L_11f540be;
  /* 11f54084 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11f54086 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54088 call 0x11f561aa */
  push32(0x11f5408du); f_11f561aa();
  /* 11f5408d mov esi, eax */
  ESI = (EAX);
  /* 11f5408f pop ecx */
  ECX = (pop32());
  /* 11f54090 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f54092 pop ecx */
  ECX = (pop32());
  /* 11f54093 je 0x11f540be */
  if (C.zf) goto L_11f540be;
  /* 11f54095 push esi */
  push32((uint32_t)(ESI));
  /* 11f54096 push dword ptr [0x11f5f6e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f5f6e8))));
  /* 11f5409c call dword ptr [0x11f5c088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c088))), 0x11f540a2u);
  /* 11f540a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f540a4 je 0x11f540be */
  if (C.zf) goto L_11f540be;
  /* 11f540a6 push esi */
  push32((uint32_t)(ESI));
  /* 11f540a7 call 0x11f540e0 */
  push32(0x11f540acu); f_11f540e0();
  /* 11f540ac pop ecx */
  ECX = (pop32());
  /* 11f540ad call dword ptr [0x11f5c084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c084))), 0x11f540b3u);
  /* 11f540b3 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f540b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f540b9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f540bb pop eax */
  EAX = (pop32());
  /* 11f540bc pop esi */
  ESI = (pop32());
  /* 11f540bd ret  */
  ESPCHK(0x11f5406eu, _esp0);
  ESP += 4; return;
L_11f540be:;
  /* 11f540be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f540c0 pop esi */
  ESI = (pop32());
  /* 11f540c1 ret  */
  ESPCHK(0x11f5406eu, _esp0);
  ESP += 4; return;
}

/* FUN_100040c2 @ 0x11f540c2 (30 bytes, 8 insns) */
void f_11f540c2(void) {
  FTRACE(0x11f540c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f540c2 call 0x11f56310 */
  push32(0x11f540c7u); f_11f56310();
  /* 11f540c7 mov eax, dword ptr [0x11f5f6e8] */
  EAX = (r32((uint32_t)(0x11f5f6e8)));
  /* 11f540cc cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f540cf je 0x11f540df */
  if (C.zf) goto L_11f540df;
  /* 11f540d1 push eax */
  push32((uint32_t)(EAX));
  /* 11f540d2 call dword ptr [0x11f5c090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c090))), 0x11f540d8u);
  /* 11f540d8 or dword ptr [0x11f5f6e8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f5f6e8)))|(0xffffffffu); w32((uint32_t)(0x11f5f6e8), (_r)); fl_logic(_r,32); }
L_11f540df:;
  /* 11f540df ret  */
  ESPCHK(0x11f540c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x11f540e0 (19 bytes, 4 insns) */
void f_11f540e0(void) {
  FTRACE(0x11f540e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f540e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f540e4 mov dword ptr [eax + 0x50], 0x11f5fb10 */
  w32((uint32_t)(EAX + 0x50), (0x11f5fb10u));
  /* 11f540eb mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11f540f2 ret  */
  ESPCHK(0x11f540e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040f3 @ 0x11f540f3 (103 bytes, 38 insns) */
void f_11f540f3(void) {
  FTRACE(0x11f540f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f540f3 push esi */
  push32((uint32_t)(ESI));
  /* 11f540f4 push edi */
  push32((uint32_t)(EDI));
  /* 11f540f5 call dword ptr [0x11f5c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c09c))), 0x11f540fbu);
  /* 11f540fb push dword ptr [0x11f5f6e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f5f6e8))));
  /* 11f54101 mov edi, eax */
  EDI = (EAX);
  /* 11f54103 call dword ptr [0x11f5c098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c098))), 0x11f54109u);
  /* 11f54109 mov esi, eax */
  ESI = (EAX);
  /* 11f5410b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5410d jne 0x11f5414e */
  if (!C.zf) goto L_11f5414e;
  /* 11f5410f push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11f54111 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54113 call 0x11f561aa */
  push32(0x11f54118u); f_11f561aa();
  /* 11f54118 mov esi, eax */
  ESI = (EAX);
  /* 11f5411a pop ecx */
  ECX = (pop32());
  /* 11f5411b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5411d pop ecx */
  ECX = (pop32());
  /* 11f5411e je 0x11f54146 */
  if (C.zf) goto L_11f54146;
  /* 11f54120 push esi */
  push32((uint32_t)(ESI));
  /* 11f54121 push dword ptr [0x11f5f6e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f5f6e8))));
  /* 11f54127 call dword ptr [0x11f5c088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c088))), 0x11f5412du);
  /* 11f5412d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5412f je 0x11f54146 */
  if (C.zf) goto L_11f54146;
  /* 11f54131 push esi */
  push32((uint32_t)(ESI));
  /* 11f54132 call 0x11f540e0 */
  push32(0x11f54137u); f_11f540e0();
  /* 11f54137 pop ecx */
  ECX = (pop32());
  /* 11f54138 call dword ptr [0x11f5c084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c084))), 0x11f5413eu);
  /* 11f5413e or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f54142 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f54144 jmp 0x11f5414e */
  goto L_11f5414e;
L_11f54146:;
  /* 11f54146 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f54148 call 0x11f5403b */
  push32(0x11f5414du); f_11f5403b();
  /* 11f5414d pop ecx */
  ECX = (pop32());
L_11f5414e:;
  /* 11f5414e push edi */
  push32((uint32_t)(EDI));
  /* 11f5414f call dword ptr [0x11f5c094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c094))), 0x11f54155u);
  /* 11f54155 mov eax, esi */
  EAX = (ESI);
  /* 11f54157 pop edi */
  EDI = (pop32());
  /* 11f54158 pop esi */
  ESI = (pop32());
  /* 11f54159 ret  */
  ESPCHK(0x11f540f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000415a @ 0x11f5415a (160 bytes, 62 insns) */
void f_11f5415a(void) {
  FTRACE(0x11f5415au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5415a mov eax, dword ptr [0x11f5f6e8] */
  EAX = (r32((uint32_t)(0x11f5f6e8)));
  /* 11f5415f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54162 je 0x11f541f9 */
  if (C.zf) goto L_11f541f9;
  /* 11f54168 push esi */
  push32((uint32_t)(ESI));
  /* 11f54169 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5416d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5416f jne 0x11f5417e */
  if (!C.zf) goto L_11f5417e;
  /* 11f54171 push eax */
  push32((uint32_t)(EAX));
  /* 11f54172 call dword ptr [0x11f5c098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c098))), 0x11f54178u);
  /* 11f54178 mov esi, eax */
  ESI = (EAX);
  /* 11f5417a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5417c je 0x11f541ea */
  if (C.zf) goto L_11f541ea;
L_11f5417e:;
  /* 11f5417e mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11f54181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54183 je 0x11f5418c */
  if (C.zf) goto L_11f5418c;
  /* 11f54185 push eax */
  push32((uint32_t)(EAX));
  /* 11f54186 call 0x11f542bc */
  push32(0x11f5418bu); f_11f542bc();
  /* 11f5418b pop ecx */
  ECX = (pop32());
L_11f5418c:;
  /* 11f5418c mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11f5418f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54191 je 0x11f5419a */
  if (C.zf) goto L_11f5419a;
  /* 11f54193 push eax */
  push32((uint32_t)(EAX));
  /* 11f54194 call 0x11f542bc */
  push32(0x11f54199u); f_11f542bc();
  /* 11f54199 pop ecx */
  ECX = (pop32());
L_11f5419a:;
  /* 11f5419a mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11f5419d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5419f je 0x11f541a8 */
  if (C.zf) goto L_11f541a8;
  /* 11f541a1 push eax */
  push32((uint32_t)(EAX));
  /* 11f541a2 call 0x11f542bc */
  push32(0x11f541a7u); f_11f542bc();
  /* 11f541a7 pop ecx */
  ECX = (pop32());
L_11f541a8:;
  /* 11f541a8 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11f541ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f541ad je 0x11f541b6 */
  if (C.zf) goto L_11f541b6;
  /* 11f541af push eax */
  push32((uint32_t)(EAX));
  /* 11f541b0 call 0x11f542bc */
  push32(0x11f541b5u); f_11f542bc();
  /* 11f541b5 pop ecx */
  ECX = (pop32());
L_11f541b6:;
  /* 11f541b6 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11f541b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f541bb je 0x11f541c4 */
  if (C.zf) goto L_11f541c4;
  /* 11f541bd push eax */
  push32((uint32_t)(EAX));
  /* 11f541be call 0x11f542bc */
  push32(0x11f541c3u); f_11f542bc();
  /* 11f541c3 pop ecx */
  ECX = (pop32());
L_11f541c4:;
  /* 11f541c4 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11f541c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f541c9 je 0x11f541d2 */
  if (C.zf) goto L_11f541d2;
  /* 11f541cb push eax */
  push32((uint32_t)(EAX));
  /* 11f541cc call 0x11f542bc */
  push32(0x11f541d1u); f_11f542bc();
  /* 11f541d1 pop ecx */
  ECX = (pop32());
L_11f541d2:;
  /* 11f541d2 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11f541d5 cmp eax, 0x11f5fb10 */
  { uint32_t _a=(EAX),_b=(0x11f5fb10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f541da je 0x11f541e3 */
  if (C.zf) goto L_11f541e3;
  /* 11f541dc push eax */
  push32((uint32_t)(EAX));
  /* 11f541dd call 0x11f542bc */
  push32(0x11f541e2u); f_11f542bc();
  /* 11f541e2 pop ecx */
  ECX = (pop32());
L_11f541e3:;
  /* 11f541e3 push esi */
  push32((uint32_t)(ESI));
  /* 11f541e4 call 0x11f542bc */
  push32(0x11f541e9u); f_11f542bc();
  /* 11f541e9 pop ecx */
  ECX = (pop32());
L_11f541ea:;
  /* 11f541ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11f541ec push dword ptr [0x11f5f6e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f5f6e8))));
  /* 11f541f2 call dword ptr [0x11f5c088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c088))), 0x11f541f8u);
  /* 11f541f8 pop esi */
  ESI = (pop32());
L_11f541f9:;
  /* 11f541f9 ret  */
  ESPCHK(0x11f5415au, _esp0);
  ESP += 4; return;
}

/* FUN_100041fa @ 0x11f541fa (194 bytes, 65 insns) */
void f_11f541fa(void) {
  FTRACE(0x11f541fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f541fa push ebp */
  push32((uint32_t)(EBP));
  /* 11f541fb mov ebp, esp */
  EBP = (ESP);
  /* 11f541fd sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54200 push ebx */
  push32((uint32_t)(EBX));
  /* 11f54201 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54204 sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5420a cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5420d jl 0x11f542b6 */
  if ((C.sf!=C.of)) goto L_11f542b6;
  /* 11f54213 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54219 jg 0x11f542b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f542b6;
  /* 11f5421f push esi */
  push32((uint32_t)(ESI));
  /* 11f54220 push edi */
  push32((uint32_t)(EDI));
  /* 11f54221 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f54224 mov esi, dword ptr [edi*4 + 0x11f5fc7c] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11f5fc7c)));
  /* 11f5422b add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5422e test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11f54231 jne 0x11f54239 */
  if (!C.zf) goto L_11f54239;
  /* 11f54233 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54236 jle 0x11f54239 */
  if ((C.zf||C.sf!=C.of)) goto L_11f54239;
  /* 11f54238 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f54239:;
  /* 11f54239 call 0x11f563f2 */
  push32(0x11f5423eu); f_11f563f2();
  /* 11f5423e mov eax, ebx */
  EAX = (EBX);
  /* 11f54240 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11f54243 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f54249 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5424c mov edx, esi */
  EDX = (ESI);
  /* 11f5424e mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11f54251 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54253 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11f54256 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54258 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f5425b lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11f5425e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f54261 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f54264 lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11f54267 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5426a add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5426d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f54270 add ecx, dword ptr [0x11f5fb98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f5fb98))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54276 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f54277 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5427b mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11f5427e pop edi */
  EDI = (pop32());
  /* 11f5427f pop esi */
  ESI = (pop32());
  /* 11f54280 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11f54287 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f5428a je 0x11f542ac */
  if (C.zf) goto L_11f542ac;
  /* 11f5428c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54290 jne 0x11f542b2 */
  if (!C.zf) goto L_11f542b2;
  /* 11f54292 cmp dword ptr [0x11f5fb9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f5fb9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54299 je 0x11f542b2 */
  if (C.zf) goto L_11f542b2;
  /* 11f5429b lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11f5429e push eax */
  push32((uint32_t)(EAX));
  /* 11f5429f call 0x11f566a7 */
  push32(0x11f542a4u); f_11f566a7();
  /* 11f542a4 pop ecx */
  ECX = (pop32());
  /* 11f542a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f542a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f542aa je 0x11f542b2 */
  if (C.zf) goto L_11f542b2;
L_11f542ac:;
  /* 11f542ac add ecx, dword ptr [0x11f5fba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f5fba0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11f542b2:;
  /* 11f542b2 mov eax, ecx */
  EAX = (ECX);
  /* 11f542b4 jmp 0x11f542b9 */
  goto L_11f542b9;
L_11f542b6:;
  /* 11f542b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f542b9:;
  /* 11f542b9 pop ebx */
  EBX = (pop32());
  /* 11f542ba leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f542bb ret  */
  ESPCHK(0x11f541fau, _esp0);
  ESP += 4; return;
}

/* FUN_100042bc @ 0x11f542bc (215 bytes, 75 insns) */
void f_11f542bc(void) {
  FTRACE(0x11f542bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f542bc push ebp */
  push32((uint32_t)(EBP));
  /* 11f542bd mov ebp, esp */
  EBP = (ESP);
  /* 11f542bf push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f542c1 push 0x11f5c198 */
  push32((uint32_t)(0x11f5c198u));
  /* 11f542c6 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f542cb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f542d1 push eax */
  push32((uint32_t)(EAX));
  /* 11f542d2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f542d9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f542dc push ebx */
  push32((uint32_t)(EBX));
  /* 11f542dd push esi */
  push32((uint32_t)(ESI));
  /* 11f542de push edi */
  push32((uint32_t)(EDI));
  /* 11f542df mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f542e2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f542e4 je 0x11f54396 */
  if (C.zf) { jmp_ind(0x11f54396u); return; }
  /* 11f542ea mov eax, dword ptr [0x11f630e8] */
  EAX = (r32((uint32_t)(0x11f630e8)));
  /* 11f542ef cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f542f2 jne 0x11f5432f */
  if (!C.zf) goto L_11f5432f;
  /* 11f542f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f542f6 call 0x11f5637c */
  push32(0x11f542fbu); f_11f5637c();
  /* 11f542fb pop ecx */
  ECX = (pop32());
  /* 11f542fc and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54300 push esi */
  push32((uint32_t)(ESI));
  /* 11f54301 call 0x11f569fc */
  push32(0x11f54306u); f_11f569fc();
  /* 11f54306 pop ecx */
  ECX = (pop32());
  /* 11f54307 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f5430a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5430c je 0x11f54317 */
  if (C.zf) goto L_11f54317;
  /* 11f5430e push esi */
  push32((uint32_t)(ESI));
  /* 11f5430f push eax */
  push32((uint32_t)(EAX));
  /* 11f54310 call 0x11f56a27 */
  push32(0x11f54315u); f_11f56a27();
  /* 11f54315 pop ecx */
  ECX = (pop32());
  /* 11f54316 pop ecx */
  ECX = (pop32());
L_11f54317:;
  /* 11f54317 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5431b call 0x11f54326 */
  push32(0x11f54320u); f_11f54326();
  /* 11f54320 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54324 jmp 0x11f54377 */
  goto L_11f54377;
  /* 11f54326 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54328 call 0x11f563dd */
  push32(0x11f5432du); f_11f563dd();
  /* 11f5432d pop ecx */
  ECX = (pop32());
  /* 11f5432e ret  */
  ESPCHK(0x11f542bcu, _esp0);
  ESP += 4; return;
L_11f5432f:;
  /* 11f5432f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54332 jne 0x11f54387 */
  if (!C.zf) goto L_11f54387;
  /* 11f54334 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54336 call 0x11f5637c */
  push32(0x11f5433bu); f_11f5637c();
  /* 11f5433b pop ecx */
  ECX = (pop32());
  /* 11f5433c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f54343 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f54346 push eax */
  push32((uint32_t)(EAX));
  /* 11f54347 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11f5434a push eax */
  push32((uint32_t)(EAX));
  /* 11f5434b push esi */
  push32((uint32_t)(ESI));
  /* 11f5434c call 0x11f57757 */
  push32(0x11f54351u); f_11f57757();
  /* 11f54351 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54354 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f54357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54359 je 0x11f5436a */
  if (C.zf) goto L_11f5436a;
  /* 11f5435b push eax */
  push32((uint32_t)(EAX));
  /* 11f5435c push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11f5435f push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11f54362 call 0x11f577ae */
  push32(0x11f54367u); f_11f577ae();
  /* 11f54367 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5436a:;
  /* 11f5436a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5436e call 0x11f5437e */
  push32(0x11f54373u); f_11f5437e();
  /* 11f54373 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f54377:;
  /* 11f54377 jne 0x11f54396 */
  if (!C.zf) { jmp_ind(0x11f54396u); return; }
  /* 11f54379 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5437c jmp 0x11f54388 */
  goto L_11f54388;
  /* 11f5437e push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54380 call 0x11f563dd */
  push32(0x11f54385u); f_11f563dd();
  /* 11f54385 pop ecx */
  ECX = (pop32());
  /* 11f54386 ret  */
  ESPCHK(0x11f542bcu, _esp0);
  ESP += 4; return;
L_11f54387:;
  /* 11f54387 push esi */
  push32((uint32_t)(ESI));
L_11f54388:;
  /* 11f54388 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5438a push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
}

/* FUN_10004326 @ 0x11f54326 (9 bytes, 4 insns) */
void f_11f54326(void) {
  FTRACE(0x11f54326u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54326 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54328 call 0x11f563dd */
  push32(0x11f5432du); f_11f563dd();
  /* 11f5432d pop ecx */
  ECX = (pop32());
  /* 11f5432e ret  */
  ESPCHK(0x11f54326u, _esp0);
  ESP += 4; return;
}

/* FUN_1000437e @ 0x11f5437e (9 bytes, 4 insns) */
void f_11f5437e(void) {
  FTRACE(0x11f5437eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5437e push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54380 call 0x11f563dd */
  push32(0x11f54385u); f_11f563dd();
  /* 11f54385 pop ecx */
  ECX = (pop32());
  /* 11f54386 ret  */
  ESPCHK(0x11f5437eu, _esp0);
  ESP += 4; return;
}

/* FUN_100043a5 @ 0x11f543a5 (155 bytes, 61 insns) */
void f_11f543a5(void) {
  FTRACE(0x11f543a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f543a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11f543a6 mov ebp, esp */
  EBP = (ESP);
  /* 11f543a8 push esi */
  push32((uint32_t)(ESI));
  /* 11f543a9 mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 11f543ac push edi */
  push32((uint32_t)(EDI));
  /* 11f543ad mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11f543b2 cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f543b4 je 0x11f543bb */
  if (C.zf) goto L_11f543bb;
  /* 11f543b6 call 0x11f54c6d */
  push32(0x11f543bbu); f_11f54c6d();
L_11f543bb:;
  /* 11f543bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f543be test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 11f543c2 je 0x11f543e3 */
  if (C.zf) goto L_11f543e3;
  /* 11f543c4 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f543c8 je 0x11f54439 */
  if (C.zf) goto L_11f54439;
  /* 11f543ca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f543ce jne 0x11f54439 */
  if (!C.zf) goto L_11f54439;
  /* 11f543d0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f543d2 push esi */
  push32((uint32_t)(ESI));
  /* 11f543d3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f543d6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f543d9 call 0x11f546fa */
  push32(0x11f543deu); f_11f546fa();
  /* 11f543de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f543e1 jmp 0x11f54439 */
  goto L_11f54439;
L_11f543e3:;
  /* 11f543e3 cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f543e7 je 0x11f54439 */
  if (C.zf) goto L_11f54439;
  /* 11f543e9 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f543ef jne 0x11f5441d */
  if (!C.zf) goto L_11f5441d;
  /* 11f543f1 cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f543f4 jbe 0x11f5441d */
  if ((C.cf||C.zf)) goto L_11f5441d;
  /* 11f543f6 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f543f9 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f543fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f543fe je 0x11f5441d */
  if (C.zf) goto L_11f5441d;
  /* 11f54400 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 11f54404 push edx */
  push32((uint32_t)(EDX));
  /* 11f54405 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f54408 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5440b push esi */
  push32((uint32_t)(ESI));
  /* 11f5440c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5440f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f54412 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f54415 push eax */
  push32((uint32_t)(EAX));
  /* 11f54416 call ecx */
  call_ind((uint32_t)(ECX), 0x11f54418u);
  /* 11f54418 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5441b jmp 0x11f5443c */
  goto L_11f5443c;
L_11f5441d:;
  /* 11f5441d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f54420 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f54423 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11f54426 push esi */
  push32((uint32_t)(ESI));
  /* 11f54427 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5442a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5442d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f54430 push eax */
  push32((uint32_t)(EAX));
  /* 11f54431 call 0x11f54440 */
  push32(0x11f54436u); f_11f54440();
  /* 11f54436 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f54439:;
  /* 11f54439 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5443b pop eax */
  EAX = (pop32());
L_11f5443c:;
  /* 11f5443c pop edi */
  EDI = (pop32());
  /* 11f5443d pop esi */
  ESI = (pop32());
  /* 11f5443e pop ebp */
  EBP = (pop32());
  /* 11f5443f ret  */
  ESPCHK(0x11f543a5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004440 @ 0x11f54440 (435 bytes, 149 insns) */
void f_11f54440(void) {
  FTRACE(0x11f54440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54440 push ebp */
  push32((uint32_t)(EBP));
  /* 11f54441 mov ebp, esp */
  EBP = (ESP);
  /* 11f54443 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54446 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f54449 and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 11f5444d mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f54450 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54453 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f54456 jl 0x11f54460 */
  if ((C.sf!=C.of)) goto L_11f54460;
  /* 11f54458 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f5445b cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5445e jl 0x11f54465 */
  if ((C.sf!=C.of)) goto L_11f54465;
L_11f54460:;
  /* 11f54460 call 0x11f54c6d */
  push32(0x11f54465u); f_11f54c6d();
L_11f54465:;
  /* 11f54465 push ebx */
  push32((uint32_t)(EBX));
  /* 11f54466 push esi */
  push32((uint32_t)(ESI));
  /* 11f54467 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5446a mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 11f5446f push edi */
  push32((uint32_t)(EDI));
  /* 11f54470 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11f54475 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54477 jne 0x11f545c8 */
  if (!C.zf) goto L_11f545c8;
  /* 11f5447d cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54481 jne 0x11f544e5 */
  if (!C.zf) goto L_11f544e5;
  /* 11f54483 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54486 jne 0x11f544e5 */
  if (!C.zf) goto L_11f544e5;
  /* 11f54488 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5448c jne 0x11f544e5 */
  if (!C.zf) goto L_11f544e5;
  /* 11f5448e call 0x11f540f3 */
  push32(0x11f54493u); f_11f540f3();
  /* 11f54493 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54497 je 0x11f545c3 */
  if (C.zf) goto L_11f545c3;
  /* 11f5449d call 0x11f540f3 */
  push32(0x11f544a2u); f_11f540f3();
  /* 11f544a2 mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 11f544a5 call 0x11f540f3 */
  push32(0x11f544aau); f_11f540f3();
  /* 11f544aa mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11f544ad push 1 */
  push32((uint32_t)(0x1u));
  /* 11f544af push esi */
  push32((uint32_t)(ESI));
  /* 11f544b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11f544b3 mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 11f544b7 call 0x11f57d0c */
  push32(0x11f544bcu); f_11f57d0c();
  /* 11f544bc pop ecx */
  ECX = (pop32());
  /* 11f544bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f544bf pop ecx */
  ECX = (pop32());
  /* 11f544c0 jne 0x11f544c7 */
  if (!C.zf) goto L_11f544c7;
  /* 11f544c2 call 0x11f54c6d */
  push32(0x11f544c7u); f_11f54c6d();
L_11f544c7:;
  /* 11f544c7 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544c9 jne 0x11f545c8 */
  if (!C.zf) goto L_11f545c8;
  /* 11f544cf cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544d3 jne 0x11f544e5 */
  if (!C.zf) goto L_11f544e5;
  /* 11f544d5 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544d8 jne 0x11f544e5 */
  if (!C.zf) goto L_11f544e5;
  /* 11f544da cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544de jne 0x11f544e5 */
  if (!C.zf) goto L_11f544e5;
  /* 11f544e0 call 0x11f54c6d */
  push32(0x11f544e5u); f_11f54c6d();
L_11f544e5:;
  /* 11f544e5 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544e7 jne 0x11f545c8 */
  if (!C.zf) goto L_11f545c8;
  /* 11f544ed cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544f1 jne 0x11f545c8 */
  if (!C.zf) goto L_11f545c8;
  /* 11f544f7 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f544fa jne 0x11f545c8 */
  if (!C.zf) goto L_11f545c8;
  /* 11f54500 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 11f54503 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f54506 push eax */
  push32((uint32_t)(EAX));
  /* 11f54507 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f5450a push eax */
  push32((uint32_t)(EAX));
  /* 11f5450b push edi */
  push32((uint32_t)(EDI));
  /* 11f5450c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5450f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f54512 call 0x11f53c81 */
  push32(0x11f54517u); f_11f53c81();
  /* 11f54517 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5451a mov ebx, eax */
  EBX = (EAX);
L_11f5451c:;
  /* 11f5451c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5451f cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54522 jae 0x11f545b3 */
  if (!C.cf) goto L_11f545b3;
  /* 11f54528 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5452a jg 0x11f545a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f545a8;
  /* 11f5452c cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5452f jg 0x11f545a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f545a8;
  /* 11f54531 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f54534 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f54537 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 11f5453a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5453c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f5453f jle 0x11f545a5 */
  if ((C.zf||C.sf!=C.of)) goto L_11f545a5;
L_11f54541:;
  /* 11f54541 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11f54544 mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f54547 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 11f5454a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11f5454c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5454e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f54551 jle 0x11f54572 */
  if ((C.zf||C.sf!=C.of)) goto L_11f54572;
L_11f54553:;
  /* 11f54553 push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 11f54556 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11f54558 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5455b call 0x11f5469d */
  push32(0x11f54560u); f_11f5469d();
  /* 11f54560 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54565 jne 0x11f54581 */
  if (!C.zf) goto L_11f54581;
  /* 11f54567 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11f5456a add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5456d cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54570 jg 0x11f54553 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f54553;
L_11f54572:;
  /* 11f54572 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 11f54575 add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f54579 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5457d jg 0x11f54541 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f54541;
  /* 11f5457f jmp 0x11f545a5 */
  goto L_11f545a5;
L_11f54581:;
  /* 11f54581 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11f54584 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11f54587 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5458a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5458b push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11f5458d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f54590 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f54593 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f54596 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f54599 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5459c push esi */
  push32((uint32_t)(ESI));
  /* 11f5459d call 0x11f547ae */
  push32(0x11f545a2u); f_11f547ae();
  /* 11f545a2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f545a5:;
  /* 11f545a5 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_11f545a8:;
  /* 11f545a8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f545ab add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f545ae jmp 0x11f5451c */
  goto L_11f5451c;
L_11f545b3:;
  /* 11f545b3 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f545b7 je 0x11f545c3 */
  if (C.zf) goto L_11f545c3;
  /* 11f545b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f545bb push esi */
  push32((uint32_t)(ESI));
  /* 11f545bc call 0x11f54b32 */
  push32(0x11f545c1u); f_11f54b32();
  /* 11f545c1 pop ecx */
  ECX = (pop32());
  /* 11f545c2 pop ecx */
  ECX = (pop32());
L_11f545c3:;
  /* 11f545c3 pop edi */
  EDI = (pop32());
  /* 11f545c4 pop esi */
  ESI = (pop32());
  /* 11f545c5 pop ebx */
  EBX = (pop32());
  /* 11f545c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f545c7 ret  */
  ESPCHK(0x11f54440u, _esp0);
  ESP += 4; return;
L_11f545c8:;
  /* 11f545c8 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f545cc jne 0x11f545ee */
  if (!C.zf) goto L_11f545ee;
  /* 11f545ce push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11f545d1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f545d4 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11f545d7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f545da push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f545dd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f545e0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f545e3 push esi */
  push32((uint32_t)(ESI));
  /* 11f545e4 call 0x11f545f3 */
  push32(0x11f545e9u); f_11f545f3();
  /* 11f545e9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f545ec jmp 0x11f545c3 */
  goto L_11f545c3;
L_11f545ee:;
  /* 11f545ee jmp 0x11f54c0c */
  f_11f54c0c(); return;
}

/* FUN_100045f3 @ 0x11f545f3 (170 bytes, 68 insns) */
void f_11f545f3(void) {
  FTRACE(0x11f545f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f545f3 push ebp */
  push32((uint32_t)(EBP));
  /* 11f545f4 mov ebp, esp */
  EBP = (ESP);
  /* 11f545f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f545f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f545f8 push esi */
  push32((uint32_t)(ESI));
  /* 11f545f9 push edi */
  push32((uint32_t)(EDI));
  /* 11f545fa call 0x11f540f3 */
  push32(0x11f545ffu); f_11f540f3();
  /* 11f545ff cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54603 je 0x11f54626 */
  if (C.zf) goto L_11f54626;
  /* 11f54605 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11f54608 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5460b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5460e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f54611 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f54614 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f54617 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5461a call 0x11f53b56 */
  push32(0x11f5461fu); f_11f53b56();
  /* 11f5461f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54624 jne 0x11f54699 */
  if (!C.zf) goto L_11f54699;
L_11f54626:;
  /* 11f54626 mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f54629 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f5462c push eax */
  push32((uint32_t)(EAX));
  /* 11f5462d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f54630 push eax */
  push32((uint32_t)(EAX));
  /* 11f54631 push edi */
  push32((uint32_t)(EDI));
  /* 11f54632 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f54635 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f54638 call 0x11f53c81 */
  push32(0x11f5463du); f_11f53c81();
  /* 11f5463d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54640 mov esi, eax */
  ESI = (EAX);
L_11f54642:;
  /* 11f54642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f54645 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54648 jae 0x11f54699 */
  if (!C.cf) goto L_11f54699;
  /* 11f5464a cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5464c jl 0x11f54691 */
  if ((C.sf!=C.of)) goto L_11f54691;
  /* 11f5464e cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54651 jg 0x11f54691 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f54691;
  /* 11f54653 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11f54656 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f54659 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f5465c add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5465e mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 11f54661 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f54663 je 0x11f5466b */
  if (C.zf) goto L_11f5466b;
  /* 11f54665 cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f54669 jne 0x11f54691 */
  if (!C.zf) goto L_11f54691;
L_11f5466b:;
  /* 11f5466b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5466d add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54670 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11f54673 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f54676 push esi */
  push32((uint32_t)(ESI));
  /* 11f54677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f54679 push eax */
  push32((uint32_t)(EAX));
  /* 11f5467a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5467d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f54680 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f54683 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f54686 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f54689 call 0x11f547ae */
  push32(0x11f5468eu); f_11f547ae();
  /* 11f5468e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f54691:;
  /* 11f54691 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f54694 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54697 jmp 0x11f54642 */
  goto L_11f54642;
L_11f54699:;
  /* 11f54699 pop edi */
  EDI = (pop32());
  /* 11f5469a pop esi */
  ESI = (pop32());
  /* 11f5469b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5469c ret  */
  ESPCHK(0x11f545f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000469d @ 0x11f5469d (93 bytes, 42 insns) */
void f_11f5469d(void) {
  FTRACE(0x11f5469du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5469d push esi */
  push32((uint32_t)(ESI));
  /* 11f5469e push edi */
  push32((uint32_t)(EDI));
  /* 11f5469f mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f546a3 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f546a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f546a8 je 0x11f546f4 */
  if (C.zf) goto L_11f546f4;
  /* 11f546aa cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f546ae lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 11f546b1 je 0x11f546f4 */
  if (C.zf) goto L_11f546f4;
  /* 11f546b3 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f546b7 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f546ba cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f546bc je 0x11f546ce */
  if (C.zf) goto L_11f546ce;
  /* 11f546be add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f546c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f546c2 push edx */
  push32((uint32_t)(EDX));
  /* 11f546c3 call 0x11f57d60 */
  push32(0x11f546c8u); f_11f57d60();
  /* 11f546c8 pop ecx */
  ECX = (pop32());
  /* 11f546c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f546cb pop ecx */
  ECX = (pop32());
  /* 11f546cc jne 0x11f546f0 */
  if (!C.zf) goto L_11f546f0;
L_11f546ce:;
  /* 11f546ce test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 11f546d1 je 0x11f546d8 */
  if (C.zf) goto L_11f546d8;
  /* 11f546d3 test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 11f546d6 je 0x11f546f0 */
  if (C.zf) goto L_11f546f0;
L_11f546d8:;
  /* 11f546d8 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f546dc mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11f546de test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11f546e0 je 0x11f546e7 */
  if (C.zf) goto L_11f546e7;
  /* 11f546e2 test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 11f546e5 je 0x11f546f0 */
  if (C.zf) goto L_11f546f0;
L_11f546e7:;
  /* 11f546e7 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11f546e9 je 0x11f546f4 */
  if (C.zf) goto L_11f546f4;
  /* 11f546eb test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 11f546ee jne 0x11f546f4 */
  if (!C.zf) goto L_11f546f4;
L_11f546f0:;
  /* 11f546f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f546f2 jmp 0x11f546f7 */
  goto L_11f546f7;
L_11f546f4:;
  /* 11f546f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f546f6 pop eax */
  EAX = (pop32());
L_11f546f7:;
  /* 11f546f7 pop edi */
  EDI = (pop32());
  /* 11f546f8 pop esi */
  ESI = (pop32());
  /* 11f546f9 ret  */
  ESPCHK(0x11f5469du, _esp0);
  ESP += 4; return;
}

/* FUN_100046fa @ 0x11f546fa (132 bytes, 56 insns) */
void f_11f546fa(void) {
  FTRACE(0x11f546fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f546fa push ebp */
  push32((uint32_t)(EBP));
  /* 11f546fb mov ebp, esp */
  EBP = (ESP);
  /* 11f546fd push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f546ff push 0x11f5c1b0 */
  push32((uint32_t)(0x11f5c1b0u));
  /* 11f54704 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f54709 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f5470f push eax */
  push32((uint32_t)(EAX));
  /* 11f54710 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f54717 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5471a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5471b push esi */
  push32((uint32_t)(ESI));
  /* 11f5471c push edi */
  push32((uint32_t)(EDI));
  /* 11f5471d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f54720 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54723 mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 11f54726 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11f54729 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_11f5472c:;
  /* 11f5472c cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5472f je 0x11f54786 */
  if (C.zf) goto L_11f54786;
  /* 11f54731 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54734 jle 0x11f5473b */
  if ((C.zf||C.sf!=C.of)) goto L_11f5473b;
  /* 11f54736 cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54739 jl 0x11f54740 */
  if ((C.sf!=C.of)) goto L_11f54740;
L_11f5473b:;
  /* 11f5473b call 0x11f54c6d */
  push32(0x11f54740u); f_11f54c6d();
L_11f54740:;
  /* 11f54740 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54744 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f54747 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 11f5474b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5474d je 0x11f5475b */
  if (C.zf) goto L_11f5475b;
  /* 11f5474f push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11f54754 push ebx */
  push32((uint32_t)(EBX));
  /* 11f54755 push eax */
  push32((uint32_t)(EAX));
  /* 11f54756 call 0x11f54bc0 */
  push32(0x11f5475bu); f_11f54bc0();
L_11f5475b:;
  /* 11f5475b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5475f jmp 0x11f5477b */
  goto L_11f5477b;
  /* 11f54761 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11f54764 call 0x11f54798 */
  push32(0x11f54769u); f_11f54798();
  /* 11f54769 pop ecx */
  ECX = (pop32());
  /* 11f5476a ret  */
  ESPCHK(0x11f546fau, _esp0);
  ESP += 4; return;
  /* 11f5476b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f5476e or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54772 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f54775 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54778 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_11f5477b:;
  /* 11f5477b mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f5477e mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 11f54781 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11f54784 jmp 0x11f5472c */
  goto L_11f5472c;
L_11f54786:;
  /* 11f54786 mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 11f54789 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f5478c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f54793 pop edi */
  EDI = (pop32());
  /* 11f54794 pop esi */
  ESI = (pop32());
  /* 11f54795 pop ebx */
  EBX = (pop32());
  /* 11f54796 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f54797 ret  */
  ESPCHK(0x11f546fau, _esp0);
  ESP += 4; return;
}

/* FUN_10004798 @ 0x11f54798 (22 bytes, 7 insns) */
void f_11f54798(void) {
  FTRACE(0x11f54798u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54798 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5479c mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11f5479e cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f547a4 je 0x11f547a9 */
  if (C.zf) goto L_11f547a9;
  /* 11f547a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f547a8 ret  */
  ESPCHK(0x11f54798u, _esp0);
  ESP += 4; return;
L_11f547a9:;
  /* 11f547a9 jmp 0x11f54c0c */
  f_11f54c0c(); return;
}

/* FUN_100047ae @ 0x11f547ae (123 bytes, 50 insns) */
void f_11f547ae(void) {
  FTRACE(0x11f547aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f547ae push ebp */
  push32((uint32_t)(EBP));
  /* 11f547af mov ebp, esp */
  EBP = (ESP);
  /* 11f547b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f547b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f547b6 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f547b9 push esi */
  push32((uint32_t)(ESI));
  /* 11f547ba push edi */
  push32((uint32_t)(EDI));
  /* 11f547bb mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f547be je 0x11f547d0 */
  if (C.zf) goto L_11f547d0;
  /* 11f547c0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f547c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11f547c4 push edi */
  push32((uint32_t)(EDI));
  /* 11f547c5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f547c8 call 0x11f5496e */
  push32(0x11f547cdu); f_11f5496e();
  /* 11f547cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f547d0:;
  /* 11f547d0 cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f547d4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f547d7 jne 0x11f547dc */
  if (!C.zf) goto L_11f547dc;
  /* 11f547d9 push edi */
  push32((uint32_t)(EDI));
  /* 11f547da jmp 0x11f547df */
  goto L_11f547df;
L_11f547dc:;
  /* 11f547dc push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_11f547df:;
  /* 11f547df call 0x11f53a58 */
  push32(0x11f547e4u); f_11f53a58();
  /* 11f547e4 mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 11f547e7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f547e9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f547ec push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f547ef push edi */
  push32((uint32_t)(EDI));
  /* 11f547f0 call 0x11f546fa */
  push32(0x11f547f5u); f_11f546fa();
  /* 11f547f5 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f547f8 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f547fd push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 11f54800 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f54801 mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 11f54804 push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 11f54807 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5480a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5480d push edi */
  push32((uint32_t)(EDI));
  /* 11f5480e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f54811 call 0x11f54829 */
  push32(0x11f54816u); f_11f54829();
  /* 11f54816 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5481b je 0x11f54824 */
  if (C.zf) goto L_11f54824;
  /* 11f5481d push edi */
  push32((uint32_t)(EDI));
  /* 11f5481e push eax */
  push32((uint32_t)(EAX));
  /* 11f5481f call 0x11f53a16 */
  push32(0x11f54824u); f_11f53a16();
L_11f54824:;
  /* 11f54824 pop edi */
  EDI = (pop32());
  /* 11f54825 pop esi */
  ESI = (pop32());
  /* 11f54826 pop ebx */
  EBX = (pop32());
  /* 11f54827 pop ebp */
  EBP = (pop32());
  /* 11f54828 ret  */
  ESPCHK(0x11f547aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004829 @ 0x11f54829 (165 bytes, 52 insns) */
void f_11f54829(void) {
  FTRACE(0x11f54829u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54829 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5482a mov ebp, esp */
  EBP = (ESP);
  /* 11f5482c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5482e push 0x11f5c1c0 */
  push32((uint32_t)(0x11f5c1c0u));
  /* 11f54833 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f54838 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f5483e push eax */
  push32((uint32_t)(EAX));
  /* 11f5483f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f54846 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54849 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5484a push esi */
  push32((uint32_t)(ESI));
  /* 11f5484b push edi */
  push32((uint32_t)(EDI));
  /* 11f5484c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5484f mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f54852 mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 11f54855 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 11f54859 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5485c mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 11f5485f mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f54862 call 0x11f540f3 */
  push32(0x11f54867u); f_11f540f3();
  /* 11f54867 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11f5486a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f5486d call 0x11f540f3 */
  push32(0x11f54872u); f_11f540f3();
  /* 11f54872 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11f54875 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f54878 call 0x11f540f3 */
  push32(0x11f5487du); f_11f540f3();
  /* 11f5487d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54880 mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 11f54883 call 0x11f540f3 */
  push32(0x11f54888u); f_11f540f3();
  /* 11f54888 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5488b mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11f5488e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54892 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f54899 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5489c push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5489f push ebx */
  push32((uint32_t)(EBX));
  /* 11f548a0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f548a3 push esi */
  push32((uint32_t)(ESI));
  /* 11f548a4 call 0x11f53add */
  push32(0x11f548a9u); f_11f53add();
  /* 11f548a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f548ac mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f548af and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f548b3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f548b7 call 0x11f548f6 */
  push32(0x11f548bcu); f_11f548f6();
  /* 11f548bc mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f548bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f548c2 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f548c9 pop edi */
  EDI = (pop32());
  /* 11f548ca pop esi */
  ESI = (pop32());
  /* 11f548cb pop ebx */
  EBX = (pop32());
  /* 11f548cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f548cd ret  */
  ESPCHK(0x11f54829u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f6 @ 0x11f548f6 (78 bytes, 25 insns) */
void f_11f548f6(void) {
  FTRACE(0x11f548f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f548f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f548f9 mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 11f548fc call 0x11f540f3 */
  push32(0x11f54901u); f_11f540f3();
  /* 11f54901 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f54904 mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 11f54907 call 0x11f540f3 */
  push32(0x11f5490cu); f_11f540f3();
  /* 11f5490c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f5490f mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11f54912 cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54918 jne 0x11f54943 */
  if (!C.zf) goto L_11f54943;
  /* 11f5491a cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5491e jne 0x11f54943 */
  if (!C.zf) goto L_11f54943;
  /* 11f54920 cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54927 jne 0x11f54943 */
  if (!C.zf) goto L_11f54943;
  /* 11f54929 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5492d jne 0x11f54943 */
  if (!C.zf) goto L_11f54943;
  /* 11f5492f cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54933 je 0x11f54943 */
  if (C.zf) goto L_11f54943;
  /* 11f54935 call 0x11f53da6 */
  push32(0x11f5493au); f_11f53da6();
  /* 11f5493a push eax */
  push32((uint32_t)(EAX));
  /* 11f5493b push edi */
  push32((uint32_t)(EDI));
  /* 11f5493c call 0x11f54b32 */
  push32(0x11f54941u); f_11f54b32();
  /* 11f54941 pop ecx */
  ECX = (pop32());
  /* 11f54942 pop ecx */
  ECX = (pop32());
L_11f54943:;
  /* 11f54943 ret  */
  ESPCHK(0x11f548f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004944 @ 0x11f54944 (42 bytes, 15 insns) */
void f_11f54944(void) {
  FTRACE(0x11f54944u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54944 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f54948 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11f5494a cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54950 jne 0x11f5496b */
  if (!C.zf) goto L_11f5496b;
  /* 11f54952 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54956 jne 0x11f5496b */
  if (!C.zf) goto L_11f5496b;
  /* 11f54958 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5495f jne 0x11f5496b */
  if (!C.zf) goto L_11f5496b;
  /* 11f54961 cmp dword ptr [eax + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54965 jne 0x11f5496b */
  if (!C.zf) goto L_11f5496b;
  /* 11f54967 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54969 pop eax */
  EAX = (pop32());
  /* 11f5496a ret  */
  ESPCHK(0x11f54944u, _esp0);
  ESP += 4; return;
L_11f5496b:;
  /* 11f5496b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5496d ret  */
  ESPCHK(0x11f54944u, _esp0);
  ESP += 4; return;
}

/* FUN_1000496e @ 0x11f5496e (440 bytes, 164 insns) */
void f_11f5496e(void) {
  FTRACE(0x11f5496eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5496e push ebp */
  push32((uint32_t)(EBP));
  /* 11f5496f mov ebp, esp */
  EBP = (ESP);
  /* 11f54971 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f54973 push 0x11f5c1d8 */
  push32((uint32_t)(0x11f5c1d8u));
  /* 11f54978 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f5497d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f54983 push eax */
  push32((uint32_t)(EAX));
  /* 11f54984 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f5498b sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5498e push ebx */
  push32((uint32_t)(EBX));
  /* 11f5498f push esi */
  push32((uint32_t)(ESI));
  /* 11f54990 push edi */
  push32((uint32_t)(EDI));
  /* 11f54991 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f54994 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f54997 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f5499a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5499c je 0x11f54b17 */
  if (C.zf) goto L_11f54b17;
  /* 11f549a2 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f549a6 je 0x11f54b17 */
  if (C.zf) goto L_11f54b17;
  /* 11f549ac mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f549af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f549b1 je 0x11f54b17 */
  if (C.zf) goto L_11f54b17;
  /* 11f549b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f549ba lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 11f549be and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f549c2 test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 11f549c5 je 0x11f54a0b */
  if (C.zf) goto L_11f54a0b;
  /* 11f549c7 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f549ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11f549cc push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11f549cf call 0x11f57d0c */
  push32(0x11f549d4u); f_11f57d0c();
  /* 11f549d4 pop ecx */
  ECX = (pop32());
  /* 11f549d5 pop ecx */
  ECX = (pop32());
  /* 11f549d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f549d8 je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f549de push 1 */
  push32((uint32_t)(0x1u));
  /* 11f549e0 push edi */
  push32((uint32_t)(EDI));
  /* 11f549e1 call 0x11f57d28 */
  push32(0x11f549e6u); f_11f57d28();
  /* 11f549e6 pop ecx */
  ECX = (pop32());
  /* 11f549e7 pop ecx */
  ECX = (pop32());
  /* 11f549e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f549ea je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f549f0 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11f549f3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f549f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f549f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f549fb push ecx */
  push32((uint32_t)(ECX));
L_11f549fc:;
  /* 11f549fc push eax */
  push32((uint32_t)(EAX));
  /* 11f549fd call 0x11f54b99 */
  push32(0x11f54a02u); f_11f54b99();
  /* 11f54a02 pop ecx */
  ECX = (pop32());
  /* 11f54a03 pop ecx */
  ECX = (pop32());
  /* 11f54a04 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f54a06 jmp 0x11f54b13 */
  goto L_11f54b13;
L_11f54a0b:;
  /* 11f54a0b mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f54a0e test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 11f54a11 je 0x11f54a65 */
  if (C.zf) goto L_11f54a65;
  /* 11f54a13 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54a18 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11f54a1b call 0x11f57d0c */
  push32(0x11f54a20u); f_11f57d0c();
  /* 11f54a20 pop ecx */
  ECX = (pop32());
  /* 11f54a21 pop ecx */
  ECX = (pop32());
  /* 11f54a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54a24 je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54a2c push edi */
  push32((uint32_t)(EDI));
  /* 11f54a2d call 0x11f57d28 */
  push32(0x11f54a32u); f_11f57d28();
  /* 11f54a32 pop ecx */
  ECX = (pop32());
  /* 11f54a33 pop ecx */
  ECX = (pop32());
  /* 11f54a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54a36 je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54a3c push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11f54a3f push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11f54a42 push edi */
  push32((uint32_t)(EDI));
  /* 11f54a43 call 0x11f57df0 */
  push32(0x11f54a48u); f_11f57df0();
  /* 11f54a48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54a4b cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54a4f jne 0x11f54b13 */
  if (!C.zf) goto L_11f54b13;
  /* 11f54a55 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f54a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54a59 je 0x11f54b13 */
  if (C.zf) goto L_11f54b13;
  /* 11f54a5f add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54a62 push esi */
  push32((uint32_t)(ESI));
  /* 11f54a63 jmp 0x11f549fc */
  goto L_11f549fc;
L_11f54a65:;
  /* 11f54a65 cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54a69 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54a6e push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11f54a71 jne 0x11f54aad */
  if (!C.zf) goto L_11f54aad;
  /* 11f54a73 call 0x11f57d0c */
  push32(0x11f54a78u); f_11f57d0c();
  /* 11f54a78 pop ecx */
  ECX = (pop32());
  /* 11f54a79 pop ecx */
  ECX = (pop32());
  /* 11f54a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54a7c je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54a82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54a84 push edi */
  push32((uint32_t)(EDI));
  /* 11f54a85 call 0x11f57d28 */
  push32(0x11f54a8au); f_11f57d28();
  /* 11f54a8a pop ecx */
  ECX = (pop32());
  /* 11f54a8b pop ecx */
  ECX = (pop32());
  /* 11f54a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54a8e je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54a90 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11f54a93 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54a96 push esi */
  push32((uint32_t)(ESI));
  /* 11f54a97 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11f54a9a call 0x11f54b99 */
  push32(0x11f54a9fu); f_11f54b99();
  /* 11f54a9f pop ecx */
  ECX = (pop32());
  /* 11f54aa0 pop ecx */
  ECX = (pop32());
  /* 11f54aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11f54aa2 push edi */
  push32((uint32_t)(EDI));
  /* 11f54aa3 call 0x11f57df0 */
  push32(0x11f54aa8u); f_11f57df0();
  /* 11f54aa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54aab jmp 0x11f54b13 */
  goto L_11f54b13;
L_11f54aad:;
  /* 11f54aad call 0x11f57d0c */
  push32(0x11f54ab2u); f_11f57d0c();
  /* 11f54ab2 pop ecx */
  ECX = (pop32());
  /* 11f54ab3 pop ecx */
  ECX = (pop32());
  /* 11f54ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54ab6 je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54aba push edi */
  push32((uint32_t)(EDI));
  /* 11f54abb call 0x11f57d28 */
  push32(0x11f54ac0u); f_11f57d28();
  /* 11f54ac0 pop ecx */
  ECX = (pop32());
  /* 11f54ac1 pop ecx */
  ECX = (pop32());
  /* 11f54ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54ac4 je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54ac6 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11f54ac9 call 0x11f57d44 */
  push32(0x11f54aceu); f_11f57d44();
  /* 11f54ace pop ecx */
  ECX = (pop32());
  /* 11f54acf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54ad1 je 0x11f54b0e */
  if (C.zf) goto L_11f54b0e;
  /* 11f54ad3 test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 11f54ad6 je 0x11f54af4 */
  if (C.zf) goto L_11f54af4;
  /* 11f54ad8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54ada lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f54add push eax */
  push32((uint32_t)(EAX));
  /* 11f54ade push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11f54ae1 call 0x11f54b99 */
  push32(0x11f54ae6u); f_11f54b99();
  /* 11f54ae6 pop ecx */
  ECX = (pop32());
  /* 11f54ae7 pop ecx */
  ECX = (pop32());
  /* 11f54ae8 push eax */
  push32((uint32_t)(EAX));
  /* 11f54ae9 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11f54aec push edi */
  push32((uint32_t)(EDI));
  /* 11f54aed call 0x11f53a51 */
  push32(0x11f54af2u); f_11f53a51();
  /* 11f54af2 jmp 0x11f54b13 */
  goto L_11f54b13;
L_11f54af4:;
  /* 11f54af4 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f54af7 push eax */
  push32((uint32_t)(EAX));
  /* 11f54af8 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11f54afb call 0x11f54b99 */
  push32(0x11f54b00u); f_11f54b99();
  /* 11f54b00 pop ecx */
  ECX = (pop32());
  /* 11f54b01 pop ecx */
  ECX = (pop32());
  /* 11f54b02 push eax */
  push32((uint32_t)(EAX));
  /* 11f54b03 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11f54b06 push edi */
  push32((uint32_t)(EDI));
  /* 11f54b07 call 0x11f53a4a */
  push32(0x11f54b0cu); f_11f53a4a();
  /* 11f54b0c jmp 0x11f54b13 */
  goto L_11f54b13;
L_11f54b0e:;
  /* 11f54b0e call 0x11f54c6d */
  push32(0x11f54b13u); f_11f54c6d();
L_11f54b13:;
  /* 11f54b13 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11f54b17:;
  /* 11f54b17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f54b1a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f54b21 pop edi */
  EDI = (pop32());
  /* 11f54b22 pop esi */
  ESI = (pop32());
  /* 11f54b23 pop ebx */
  EBX = (pop32());
  /* 11f54b24 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f54b25 ret  */
  ESPCHK(0x11f5496eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b32 @ 0x11f54b32 (86 bytes, 33 insns) */
void f_11f54b32(void) {
  FTRACE(0x11f54b32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54b32 push ebp */
  push32((uint32_t)(EBP));
  /* 11f54b33 mov ebp, esp */
  EBP = (ESP);
  /* 11f54b35 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f54b37 push 0x11f5c1e8 */
  push32((uint32_t)(0x11f5c1e8u));
  /* 11f54b3c push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f54b41 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f54b47 push eax */
  push32((uint32_t)(EAX));
  /* 11f54b48 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f54b4f push ecx */
  push32((uint32_t)(ECX));
  /* 11f54b50 push ecx */
  push32((uint32_t)(ECX));
  /* 11f54b51 push ebx */
  push32((uint32_t)(EBX));
  /* 11f54b52 push esi */
  push32((uint32_t)(ESI));
  /* 11f54b53 push edi */
  push32((uint32_t)(EDI));
  /* 11f54b54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f54b57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54b5c je 0x11f54b79 */
  if (C.zf) goto L_11f54b79;
  /* 11f54b5e mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f54b61 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f54b64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f54b66 je 0x11f54b79 */
  if (C.zf) goto L_11f54b79;
  /* 11f54b68 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54b6c push ecx */
  push32((uint32_t)(ECX));
  /* 11f54b6d push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 11f54b70 call 0x11f53a4a */
  push32(0x11f54b75u); f_11f53a4a();
  /* 11f54b75 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11f54b79:;
  /* 11f54b79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f54b7c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f54b83 pop edi */
  EDI = (pop32());
  /* 11f54b84 pop esi */
  ESI = (pop32());
  /* 11f54b85 pop ebx */
  EBX = (pop32());
  /* 11f54b86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f54b87 ret  */
  ESPCHK(0x11f54b32u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b99 @ 0x11f54b99 (35 bytes, 15 insns) */
void f_11f54b99(void) {
  FTRACE(0x11f54b99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54b99 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f54b9d push esi */
  push32((uint32_t)(ESI));
  /* 11f54b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f54ba2 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f54ba4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f54ba7 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54ba9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f54bab jl 0x11f54bba */
  if ((C.sf!=C.of)) goto L_11f54bba;
  /* 11f54bad mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 11f54bb0 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f54bb3 mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 11f54bb6 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54bb8 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f54bba:;
  /* 11f54bba pop esi */
  ESI = (pop32());
  /* 11f54bbb ret  */
  ESPCHK(0x11f54b99u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11f54bc0 (76 bytes, 34 insns) */
void f_11f54bc0(void) {
  FTRACE(0x11f54bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f54bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f54bc3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f54bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f54bc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f54bcb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54bce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f54bd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54bd4 push ebp */
  push32((uint32_t)(EBP));
  /* 11f54bd5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f54bd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f54bdb mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11f54bde call 0x11f53dc9 */
  push32(0x11f54be3u); f_11f53dc9();
  /* 11f54be3 push esi */
  push32((uint32_t)(ESI));
  /* 11f54be4 push edi */
  push32((uint32_t)(EDI));
  /* 11f54be5 call eax */
  call_ind((uint32_t)(EAX), 0x11f54be7u);
  /* 11f54be7 pop edi */
  EDI = (pop32());
  /* 11f54be8 pop esi */
  ESI = (pop32());
  /* 11f54be9 mov ebx, ebp */
  EBX = (EBP);
  /* 11f54beb pop ebp */
  EBP = (pop32());
  /* 11f54bec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f54bef push ebp */
  push32((uint32_t)(EBP));
  /* 11f54bf0 mov ebp, ebx */
  EBP = (EBX);
  /* 11f54bf2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54bf8 jne 0x11f54bff */
  if (!C.zf) goto L_11f54bff;
  /* 11f54bfa mov ecx, 2 */
  ECX = (0x2u);
L_11f54bff:;
  /* 11f54bff push ecx */
  push32((uint32_t)(ECX));
  /* 11f54c00 call 0x11f53dc9 */
  push32(0x11f54c05u); f_11f53dc9();
  /* 11f54c05 pop ebp */
  EBP = (pop32());
  /* 11f54c06 pop ecx */
  ECX = (pop32());
  /* 11f54c07 pop ebx */
  EBX = (pop32());
  /* 11f54c08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f54c09 ret 0xc */
  ESPCHK(0x11f54bc0u, _esp0);
  ESP += 16; return;
}

/* FUN_10004c0c @ 0x11f54c0c (86 bytes, 32 insns) */
void f_11f54c0c(void) {
  FTRACE(0x11f54c0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54c0c push ebp */
  push32((uint32_t)(EBP));
  /* 11f54c0d mov ebp, esp */
  EBP = (ESP);
  /* 11f54c0f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f54c11 push 0x11f5c1f8 */
  push32((uint32_t)(0x11f5c1f8u));
  /* 11f54c16 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f54c1b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f54c21 push eax */
  push32((uint32_t)(EAX));
  /* 11f54c22 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f54c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11f54c2a push ecx */
  push32((uint32_t)(ECX));
  /* 11f54c2b push ebx */
  push32((uint32_t)(EBX));
  /* 11f54c2c push esi */
  push32((uint32_t)(ESI));
  /* 11f54c2d push edi */
  push32((uint32_t)(EDI));
  /* 11f54c2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f54c31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f54c33 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11f54c36 call 0x11f540f3 */
  push32(0x11f54c3bu); f_11f540f3();
  /* 11f54c3b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54c3e je 0x11f54c5f */
  if (C.zf) goto L_11f54c5f;
  /* 11f54c40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f54c47 call 0x11f540f3 */
  push32(0x11f54c4cu); f_11f540f3();
  /* 11f54c4c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11f54c4fu);
  /* 11f54c4f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11f54c52 jmp 0x11f54c5f */
  goto L_11f54c5f;
  /* 11f54c54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54c56 pop eax */
  EAX = (pop32());
  /* 11f54c57 ret  */
  ESPCHK(0x11f54c0cu, _esp0);
  ESP += 4; return;
  /* 11f54c58 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f54c5b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11f54c5f:;
  /* 11f54c5f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54c63 call 0x11f54c68 */
  call_ind(0x11f54c68u, 0x11f54c68u);
  /* 11f54c68 jmp 0x11f58125 */
  f_11f58125(); return;
}

/* FUN_10004c6d @ 0x11f54c6d (79 bytes, 29 insns) */
void f_11f54c6d(void) {
  FTRACE(0x11f54c6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54c6d push ebp */
  push32((uint32_t)(EBP));
  /* 11f54c6e mov ebp, esp */
  EBP = (ESP);
  /* 11f54c70 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f54c72 push 0x11f5c210 */
  push32((uint32_t)(0x11f5c210u));
  /* 11f54c77 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f54c7c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f54c82 push eax */
  push32((uint32_t)(EAX));
  /* 11f54c83 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f54c8a push ecx */
  push32((uint32_t)(ECX));
  /* 11f54c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11f54c8c push ebx */
  push32((uint32_t)(EBX));
  /* 11f54c8d push esi */
  push32((uint32_t)(ESI));
  /* 11f54c8e push edi */
  push32((uint32_t)(EDI));
  /* 11f54c8f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f54c92 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54c96 mov eax, dword ptr [0x11f5f6f0] */
  EAX = (r32((uint32_t)(0x11f5f6f0)));
  /* 11f54c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54c9d je 0x11f54cb5 */
  if (C.zf) goto L_11f54cb5;
  /* 11f54c9f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f54ca6 call eax */
  call_ind((uint32_t)(EAX), 0x11f54ca8u);
  /* 11f54ca8 jmp 0x11f54cb1 */
  goto L_11f54cb1;
  /* 11f54caa push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54cac pop eax */
  EAX = (pop32());
  /* 11f54cad ret  */
  ESPCHK(0x11f54c6du, _esp0);
  ESP += 4; return;
  /* 11f54cae mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_11f54cb1:;
  /* 11f54cb1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11f54cb5:;
  /* 11f54cb5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54cb9 call 0x11f54cbe */
  call_ind(0x11f54cbeu, 0x11f54cbeu);
  /* 11f54cbe jmp 0x11f54c0c */
  f_11f54c0c(); return;
}

/* _malloc @ 0x11f54cc3 (18 bytes, 6 insns) */
void f_11f54cc3(void) {
  FTRACE(0x11f54cc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54cc3 push dword ptr [0x11f62dbc] */
  push32((uint32_t)(r32((uint32_t)(0x11f62dbc))));
  /* 11f54cc9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f54ccd call 0x11f54cd5 */
  push32(0x11f54cd2u); f_11f54cd5();
  /* 11f54cd2 pop ecx */
  ECX = (pop32());
  /* 11f54cd3 pop ecx */
  ECX = (pop32());
  /* 11f54cd4 ret  */
  ESPCHK(0x11f54cc3u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11f54cd5 (44 bytes, 16 insns) */
void f_11f54cd5(void) {
  FTRACE(0x11f54cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54cd5 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54cda ja 0x11f54cfe */
  if ((!C.cf&&!C.zf)) goto L_11f54cfe;
L_11f54cdc:;
  /* 11f54cdc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f54ce0 call 0x11f54d01 */
  push32(0x11f54ce5u); f_11f54d01();
  /* 11f54ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54ce7 pop ecx */
  ECX = (pop32());
  /* 11f54ce8 jne 0x11f54d00 */
  if (!C.zf) goto L_11f54d00;
  /* 11f54cea cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54cee je 0x11f54d00 */
  if (C.zf) goto L_11f54d00;
  /* 11f54cf0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f54cf4 call 0x11f5813c */
  push32(0x11f54cf9u); f_11f5813c();
  /* 11f54cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54cfb pop ecx */
  ECX = (pop32());
  /* 11f54cfc jne 0x11f54cdc */
  if (!C.zf) goto L_11f54cdc;
L_11f54cfe:;
  /* 11f54cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f54d00:;
  /* 11f54d00 ret  */
  ESPCHK(0x11f54cd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d01 @ 0x11f54d01 (231 bytes, 81 insns) */
void f_11f54d01(void) {
  FTRACE(0x11f54d01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54d01 push ebp */
  push32((uint32_t)(EBP));
  /* 11f54d02 mov ebp, esp */
  EBP = (ESP);
  /* 11f54d04 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f54d06 push 0x11f5c228 */
  push32((uint32_t)(0x11f5c228u));
  /* 11f54d0b push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f54d10 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f54d16 push eax */
  push32((uint32_t)(EAX));
  /* 11f54d17 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f54d1e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54d21 push ebx */
  push32((uint32_t)(EBX));
  /* 11f54d22 push esi */
  push32((uint32_t)(ESI));
  /* 11f54d23 push edi */
  push32((uint32_t)(EDI));
  /* 11f54d24 mov eax, dword ptr [0x11f630e8] */
  EAX = (r32((uint32_t)(0x11f630e8)));
  /* 11f54d29 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54d2c jne 0x11f54d71 */
  if (!C.zf) goto L_11f54d71;
  /* 11f54d2e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54d31 cmp esi, dword ptr [0x11f630e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f630e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54d37 ja 0x11f54dd0 */
  if ((!C.cf&&!C.zf)) goto L_11f54dd0;
  /* 11f54d3d push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54d3f call 0x11f5637c */
  push32(0x11f54d44u); f_11f5637c();
  /* 11f54d44 pop ecx */
  ECX = (pop32());
  /* 11f54d45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54d49 push esi */
  push32((uint32_t)(ESI));
  /* 11f54d4a call 0x11f56d50 */
  push32(0x11f54d4fu); f_11f56d50();
  /* 11f54d4f pop ecx */
  ECX = (pop32());
  /* 11f54d50 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f54d53 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54d57 call 0x11f54d68 */
  push32(0x11f54d5cu); f_11f54d68();
  /* 11f54d5c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f54d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54d61 je 0x11f54dd0 */
  if (C.zf) goto L_11f54dd0;
  /* 11f54d63 jmp 0x11f54dee */
  jmp_ind(0x11f54deeu); return;
  /* 11f54d68 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54d6a call 0x11f563dd */
  push32(0x11f54d6fu); f_11f563dd();
  /* 11f54d6f pop ecx */
  ECX = (pop32());
  /* 11f54d70 ret  */
  ESPCHK(0x11f54d01u, _esp0);
  ESP += 4; return;
L_11f54d71:;
  /* 11f54d71 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54d74 jne 0x11f54dd0 */
  if (!C.zf) goto L_11f54dd0;
  /* 11f54d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54d7b je 0x11f54d85 */
  if (C.zf) goto L_11f54d85;
  /* 11f54d7d lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11f54d80 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f54d83 jmp 0x11f54d88 */
  goto L_11f54d88;
L_11f54d85:;
  /* 11f54d85 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f54d87 pop esi */
  ESI = (pop32());
L_11f54d88:;
  /* 11f54d88 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11f54d8b cmp esi, dword ptr [0x11f61cdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f61cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54d91 ja 0x11f54dc1 */
  if ((!C.cf&&!C.zf)) goto L_11f54dc1;
  /* 11f54d93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54d95 call 0x11f5637c */
  push32(0x11f54d9au); f_11f5637c();
  /* 11f54d9a pop ecx */
  ECX = (pop32());
  /* 11f54d9b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f54da2 mov eax, esi */
  EAX = (ESI);
  /* 11f54da4 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f54da7 push eax */
  push32((uint32_t)(EAX));
  /* 11f54da8 call 0x11f577f3 */
  push32(0x11f54dadu); f_11f577f3();
  /* 11f54dad pop ecx */
  ECX = (pop32());
  /* 11f54dae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f54db1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f54db5 call 0x11f54dc7 */
  push32(0x11f54dbau); f_11f54dc7();
  /* 11f54dba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f54dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54dbf jne 0x11f54dee */
  if (!C.zf) { jmp_ind(0x11f54deeu); return; }
L_11f54dc1:;
  /* 11f54dc1 push esi */
  push32((uint32_t)(ESI));
  /* 11f54dc2 jmp 0x11f54de0 */
  goto L_11f54de0;
  /* 11f54dc4 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54dc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54dc9 call 0x11f563dd */
  push32(0x11f54dceu); f_11f563dd();
  /* 11f54dce pop ecx */
  ECX = (pop32());
  /* 11f54dcf ret  */
  ESPCHK(0x11f54d01u, _esp0);
  ESP += 4; return;
L_11f54dd0:;
  /* 11f54dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f54dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54dd5 jne 0x11f54dda */
  if (!C.zf) goto L_11f54dda;
  /* 11f54dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54dd9 pop eax */
  EAX = (pop32());
L_11f54dda:;
  /* 11f54dda add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54ddd and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11f54ddf push eax */
  push32((uint32_t)(EAX));
L_11f54de0:;
  /* 11f54de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f54de2 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
}

/* FUN_10004d68 @ 0x11f54d68 (9 bytes, 4 insns) */
void f_11f54d68(void) {
  FTRACE(0x11f54d68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54d68 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54d6a call 0x11f563dd */
  push32(0x11f54d6fu); f_11f563dd();
  /* 11f54d6f pop ecx */
  ECX = (pop32());
  /* 11f54d70 ret  */
  ESPCHK(0x11f54d68u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dc7 @ 0x11f54dc7 (9 bytes, 4 insns) */
void f_11f54dc7(void) {
  FTRACE(0x11f54dc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54dc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f54dc9 call 0x11f563dd */
  push32(0x11f54dceu); f_11f563dd();
  /* 11f54dce pop ecx */
  ECX = (pop32());
  /* 11f54dcf ret  */
  ESPCHK(0x11f54dc7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eb9 @ 0x11f54eb9 (47 bytes, 17 insns) */
void f_11f54eb9(void) {
  FTRACE(0x11f54eb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54eb9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f54ebd mov ecx, 0x11f5f6f8 */
  ECX = (0x11f5f6f8u);
  /* 11f54ec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54ec4 jb 0x11f54edd */
  if (C.cf) goto L_11f54edd;
  /* 11f54ec6 cmp eax, 0x11f5f958 */
  { uint32_t _a=(EAX),_b=(0x11f5f958u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54ecb ja 0x11f54edd */
  if ((!C.cf&&!C.zf)) goto L_11f54edd;
  /* 11f54ecd sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54ecf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f54ed2 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54ed5 push eax */
  push32((uint32_t)(EAX));
  /* 11f54ed6 call 0x11f5637c */
  push32(0x11f54edbu); f_11f5637c();
  /* 11f54edb pop ecx */
  ECX = (pop32());
  /* 11f54edc ret  */
  ESPCHK(0x11f54eb9u, _esp0);
  ESP += 4; return;
L_11f54edd:;
  /* 11f54edd add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11f54ee1 call dword ptr [0x11f5c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a8))), 0x11f54ee7u);
  /* 11f54ee7 ret  */
  ESPCHK(0x11f54eb9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee8 @ 0x11f54ee8 (35 bytes, 13 insns) */
void f_11f54ee8(void) {
  FTRACE(0x11f54ee8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54ee8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f54eec cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54eef jge 0x11f54efc */
  if ((C.sf==C.of)) goto L_11f54efc;
  /* 11f54ef1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11f54ef5 call 0x11f5637c */
  push32(0x11f54efau); f_11f5637c();
  /* 11f54efa pop ecx */
  ECX = (pop32());
  /* 11f54efb ret  */
  ESPCHK(0x11f54ee8u, _esp0);
  ESP += 4; return;
L_11f54efc:;
  /* 11f54efc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f54f00 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54f03 push eax */
  push32((uint32_t)(EAX));
  /* 11f54f04 call dword ptr [0x11f5c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a8))), 0x11f54f0au);
  /* 11f54f0a ret  */
  ESPCHK(0x11f54ee8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f0b @ 0x11f54f0b (47 bytes, 17 insns) */
void f_11f54f0b(void) {
  FTRACE(0x11f54f0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54f0b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f54f0f mov ecx, 0x11f5f6f8 */
  ECX = (0x11f5f6f8u);
  /* 11f54f14 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54f16 jb 0x11f54f2f */
  if (C.cf) goto L_11f54f2f;
  /* 11f54f18 cmp eax, 0x11f5f958 */
  { uint32_t _a=(EAX),_b=(0x11f5f958u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54f1d ja 0x11f54f2f */
  if ((!C.cf&&!C.zf)) goto L_11f54f2f;
  /* 11f54f1f sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f54f21 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f54f24 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54f27 push eax */
  push32((uint32_t)(EAX));
  /* 11f54f28 call 0x11f563dd */
  push32(0x11f54f2du); f_11f563dd();
  /* 11f54f2d pop ecx */
  ECX = (pop32());
  /* 11f54f2e ret  */
  ESPCHK(0x11f54f0bu, _esp0);
  ESP += 4; return;
L_11f54f2f:;
  /* 11f54f2f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54f32 push eax */
  push32((uint32_t)(EAX));
  /* 11f54f33 call dword ptr [0x11f5c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0ac))), 0x11f54f39u);
  /* 11f54f39 ret  */
  ESPCHK(0x11f54f0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f3a @ 0x11f54f3a (35 bytes, 13 insns) */
void f_11f54f3a(void) {
  FTRACE(0x11f54f3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54f3a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f54f3e cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54f41 jge 0x11f54f4e */
  if ((C.sf==C.of)) goto L_11f54f4e;
  /* 11f54f43 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54f46 push eax */
  push32((uint32_t)(EAX));
  /* 11f54f47 call 0x11f563dd */
  push32(0x11f54f4cu); f_11f563dd();
  /* 11f54f4c pop ecx */
  ECX = (pop32());
  /* 11f54f4d ret  */
  ESPCHK(0x11f54f3au, _esp0);
  ESP += 4; return;
L_11f54f4e:;
  /* 11f54f4e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f54f52 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54f55 push eax */
  push32((uint32_t)(EAX));
  /* 11f54f56 call dword ptr [0x11f5c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0ac))), 0x11f54f5cu);
  /* 11f54f5c ret  */
  ESPCHK(0x11f54f3au, _esp0);
  ESP += 4; return;
}

/* FUN_10004f5d @ 0x11f54f5d (93 bytes, 32 insns) */
void f_11f54f5d(void) {
  FTRACE(0x11f54f5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54f5d push esi */
  push32((uint32_t)(ESI));
  /* 11f54f5e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f54f62 cmp esi, dword ptr [0x11f63200] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f63200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54f68 jae 0x11f54fa2 */
  if (!C.cf) goto L_11f54fa2;
  /* 11f54f6a mov ecx, esi */
  ECX = (ESI);
  /* 11f54f6c mov eax, esi */
  EAX = (ESI);
  /* 11f54f6e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f54f71 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f54f74 mov ecx, dword ptr [ecx*4 + 0x11f63100] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f54f7b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f54f7e test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f54f83 je 0x11f54fa2 */
  if (C.zf) goto L_11f54fa2;
  /* 11f54f85 push edi */
  push32((uint32_t)(EDI));
  /* 11f54f86 push esi */
  push32((uint32_t)(ESI));
  /* 11f54f87 call 0x11f5831e */
  push32(0x11f54f8cu); f_11f5831e();
  /* 11f54f8c push esi */
  push32((uint32_t)(ESI));
  /* 11f54f8d call 0x11f54fba */
  push32(0x11f54f92u); f_11f54fba();
  /* 11f54f92 push esi */
  push32((uint32_t)(ESI));
  /* 11f54f93 mov edi, eax */
  EDI = (EAX);
  /* 11f54f95 call 0x11f5837d */
  push32(0x11f54f9au); f_11f5837d();
  /* 11f54f9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f54f9d mov eax, edi */
  EAX = (EDI);
  /* 11f54f9f pop edi */
  EDI = (pop32());
  /* 11f54fa0 pop esi */
  ESI = (pop32());
  /* 11f54fa1 ret  */
  ESPCHK(0x11f54f5du, _esp0);
  ESP += 4; return;
L_11f54fa2:;
  /* 11f54fa2 call 0x11f5824b */
  push32(0x11f54fa7u); f_11f5824b();
  /* 11f54fa7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f54fad call 0x11f58254 */
  push32(0x11f54fb2u); f_11f58254();
  /* 11f54fb2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f54fb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f54fb8 pop esi */
  ESI = (pop32());
  /* 11f54fb9 ret  */
  ESPCHK(0x11f54f5du, _esp0);
  ESP += 4; return;
}

/* FUN_10004fba @ 0x11f54fba (131 bytes, 52 insns) */
void f_11f54fba(void) {
  FTRACE(0x11f54fbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f54fba push esi */
  push32((uint32_t)(ESI));
  /* 11f54fbb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f54fbf push edi */
  push32((uint32_t)(EDI));
  /* 11f54fc0 push esi */
  push32((uint32_t)(ESI));
  /* 11f54fc1 call 0x11f582dc */
  push32(0x11f54fc6u); f_11f582dc();
  /* 11f54fc6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54fc9 pop ecx */
  ECX = (pop32());
  /* 11f54fca je 0x11f55008 */
  if (C.zf) goto L_11f55008;
  /* 11f54fcc cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54fcf je 0x11f54fd6 */
  if (C.zf) goto L_11f54fd6;
  /* 11f54fd1 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54fd4 jne 0x11f54fec */
  if (!C.zf) goto L_11f54fec;
L_11f54fd6:;
  /* 11f54fd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f54fd8 call 0x11f582dc */
  push32(0x11f54fddu); f_11f582dc();
  /* 11f54fdd push 1 */
  push32((uint32_t)(0x1u));
  /* 11f54fdf mov edi, eax */
  EDI = (EAX);
  /* 11f54fe1 call 0x11f582dc */
  push32(0x11f54fe6u); f_11f582dc();
  /* 11f54fe6 pop ecx */
  ECX = (pop32());
  /* 11f54fe7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f54fe9 pop ecx */
  ECX = (pop32());
  /* 11f54fea je 0x11f55008 */
  if (C.zf) goto L_11f55008;
L_11f54fec:;
  /* 11f54fec push esi */
  push32((uint32_t)(ESI));
  /* 11f54fed call 0x11f582dc */
  push32(0x11f54ff2u); f_11f582dc();
  /* 11f54ff2 pop ecx */
  ECX = (pop32());
  /* 11f54ff3 push eax */
  push32((uint32_t)(EAX));
  /* 11f54ff4 call dword ptr [0x11f5c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c004))), 0x11f54ffau);
  /* 11f54ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f54ffc jne 0x11f55008 */
  if (!C.zf) goto L_11f55008;
  /* 11f54ffe call dword ptr [0x11f5c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c09c))), 0x11f55004u);
  /* 11f55004 mov edi, eax */
  EDI = (EAX);
  /* 11f55006 jmp 0x11f5500a */
  goto L_11f5500a;
L_11f55008:;
  /* 11f55008 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11f5500a:;
  /* 11f5500a push esi */
  push32((uint32_t)(ESI));
  /* 11f5500b call 0x11f5825d */
  push32(0x11f55010u); f_11f5825d();
  /* 11f55010 mov eax, esi */
  EAX = (ESI);
  /* 11f55012 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11f55015 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f55018 pop ecx */
  ECX = (pop32());
  /* 11f55019 mov eax, dword ptr [eax*4 + 0x11f63100] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11f63100)));
  /* 11f55020 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11f55023 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f55028 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f5502a je 0x11f55038 */
  if (C.zf) goto L_11f55038;
  /* 11f5502c push edi */
  push32((uint32_t)(EDI));
  /* 11f5502d call 0x11f581d8 */
  push32(0x11f55032u); f_11f581d8();
  /* 11f55032 pop ecx */
  ECX = (pop32());
  /* 11f55033 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f55036 jmp 0x11f5503a */
  goto L_11f5503a;
L_11f55038:;
  /* 11f55038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5503a:;
  /* 11f5503a pop edi */
  EDI = (pop32());
  /* 11f5503b pop esi */
  ESI = (pop32());
  /* 11f5503c ret  */
  ESPCHK(0x11f54fbau, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11f5503d (43 bytes, 17 insns) */
void f_11f5503d(void) {
  FTRACE(0x11f5503du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5503d push esi */
  push32((uint32_t)(ESI));
  /* 11f5503e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f55042 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11f55045 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11f55047 je 0x11f55066 */
  if (C.zf) goto L_11f55066;
  /* 11f55049 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11f5504b je 0x11f55066 */
  if (C.zf) goto L_11f55066;
  /* 11f5504d push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11f55050 call 0x11f542bc */
  push32(0x11f55055u); f_11f542bc();
  /* 11f55055 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11f5505b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5505d pop ecx */
  ECX = (pop32());
  /* 11f5505e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f55060 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f55063 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11f55066:;
  /* 11f55066 pop esi */
  ESI = (pop32());
  /* 11f55067 ret  */
  ESPCHK(0x11f5503du, _esp0);
  ESP += 4; return;
}

/* FUN_10005068 @ 0x11f55068 (46 bytes, 22 insns) */
void f_11f55068(void) {
  FTRACE(0x11f55068u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55068 push esi */
  push32((uint32_t)(ESI));
  /* 11f55069 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5506d push esi */
  push32((uint32_t)(ESI));
  /* 11f5506e call 0x11f55096 */
  push32(0x11f55073u); f_11f55096();
  /* 11f55073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55075 pop ecx */
  ECX = (pop32());
  /* 11f55076 je 0x11f5507d */
  if (C.zf) goto L_11f5507d;
  /* 11f55078 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5507b pop esi */
  ESI = (pop32());
  /* 11f5507c ret  */
  ESPCHK(0x11f55068u, _esp0);
  ESP += 4; return;
L_11f5507d:;
  /* 11f5507d test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11f55081 je 0x11f55092 */
  if (C.zf) goto L_11f55092;
  /* 11f55083 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f55086 call 0x11f5839f */
  push32(0x11f5508bu); f_11f5839f();
  /* 11f5508b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5508d pop ecx */
  ECX = (pop32());
  /* 11f5508e pop esi */
  ESI = (pop32());
  /* 11f5508f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f55091 ret  */
  ESPCHK(0x11f55068u, _esp0);
  ESP += 4; return;
L_11f55092:;
  /* 11f55092 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55094 pop esi */
  ESI = (pop32());
  /* 11f55095 ret  */
  ESPCHK(0x11f55068u, _esp0);
  ESP += 4; return;
}

/* FUN_10005096 @ 0x11f55096 (92 bytes, 40 insns) */
void f_11f55096(void) {
  FTRACE(0x11f55096u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55096 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55097 push esi */
  push32((uint32_t)(ESI));
  /* 11f55098 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f5509c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5509e push edi */
  push32((uint32_t)(EDI));
  /* 11f5509f mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11f550a2 mov ecx, eax */
  ECX = (EAX);
  /* 11f550a4 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f550a7 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f550aa jne 0x11f550e3 */
  if (!C.zf) goto L_11f550e3;
  /* 11f550ac test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11f550b0 je 0x11f550e3 */
  if (C.zf) goto L_11f550e3;
  /* 11f550b2 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11f550b5 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11f550b7 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f550b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f550bb jle 0x11f550e3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f550e3;
  /* 11f550bd push edi */
  push32((uint32_t)(EDI));
  /* 11f550be push eax */
  push32((uint32_t)(EAX));
  /* 11f550bf push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f550c2 call 0x11f58432 */
  push32(0x11f550c7u); f_11f58432();
  /* 11f550c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f550ca cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f550cc jne 0x11f550dc */
  if (!C.zf) goto L_11f550dc;
  /* 11f550ce mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11f550d1 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11f550d3 je 0x11f550e3 */
  if (C.zf) goto L_11f550e3;
  /* 11f550d5 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11f550d7 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11f550da jmp 0x11f550e3 */
  goto L_11f550e3;
L_11f550dc:;
  /* 11f550dc or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11f550e0 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11f550e3:;
  /* 11f550e3 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11f550e6 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f550ea mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f550ec pop edi */
  EDI = (pop32());
  /* 11f550ed mov eax, ebx */
  EAX = (EBX);
  /* 11f550ef pop esi */
  ESI = (pop32());
  /* 11f550f0 pop ebx */
  EBX = (pop32());
  /* 11f550f1 ret  */
  ESPCHK(0x11f55096u, _esp0);
  ESP += 4; return;
}

/* FUN_100050fb @ 0x11f550fb (164 bytes, 66 insns) */
void f_11f550fb(void) {
  FTRACE(0x11f550fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f550fb push ebx */
  push32((uint32_t)(EBX));
  /* 11f550fc push esi */
  push32((uint32_t)(ESI));
  /* 11f550fd push edi */
  push32((uint32_t)(EDI));
  /* 11f550fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11f55100 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f55102 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f55104 call 0x11f5637c */
  push32(0x11f55109u); f_11f5637c();
  /* 11f55109 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f5510b pop ecx */
  ECX = (pop32());
  /* 11f5510c cmp dword ptr [0x11f64220], esi */
  { uint32_t _a=(r32((uint32_t)(0x11f64220))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55112 jle 0x11f55188 */
  if ((C.zf||C.sf!=C.of)) goto L_11f55188;
L_11f55114:;
  /* 11f55114 mov eax, dword ptr [0x11f63214] */
  EAX = (r32((uint32_t)(0x11f63214)));
  /* 11f55119 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11f5511c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5511e je 0x11f5517f */
  if (C.zf) goto L_11f5517f;
  /* 11f55120 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11f55124 je 0x11f5517f */
  if (C.zf) goto L_11f5517f;
  /* 11f55126 push eax */
  push32((uint32_t)(EAX));
  /* 11f55127 push esi */
  push32((uint32_t)(ESI));
  /* 11f55128 call 0x11f54ee8 */
  push32(0x11f5512du); f_11f54ee8();
  /* 11f5512d mov eax, dword ptr [0x11f63214] */
  EAX = (r32((uint32_t)(0x11f63214)));
  /* 11f55132 pop ecx */
  ECX = (pop32());
  /* 11f55133 pop ecx */
  ECX = (pop32());
  /* 11f55134 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11f55137 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f5513a test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11f5513d je 0x11f5516f */
  if (C.zf) goto L_11f5516f;
  /* 11f5513f cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55144 jne 0x11f55155 */
  if (!C.zf) goto L_11f55155;
  /* 11f55146 push eax */
  push32((uint32_t)(EAX));
  /* 11f55147 call 0x11f55068 */
  push32(0x11f5514cu); f_11f55068();
  /* 11f5514c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5514f pop ecx */
  ECX = (pop32());
  /* 11f55150 je 0x11f5516f */
  if (C.zf) goto L_11f5516f;
  /* 11f55152 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f55153 jmp 0x11f5516f */
  goto L_11f5516f;
L_11f55155:;
  /* 11f55155 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5515a jne 0x11f5516f */
  if (!C.zf) goto L_11f5516f;
  /* 11f5515c test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11f5515f je 0x11f5516f */
  if (C.zf) goto L_11f5516f;
  /* 11f55161 push eax */
  push32((uint32_t)(EAX));
  /* 11f55162 call 0x11f55068 */
  push32(0x11f55167u); f_11f55068();
  /* 11f55167 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5516a pop ecx */
  ECX = (pop32());
  /* 11f5516b jne 0x11f5516f */
  if (!C.zf) goto L_11f5516f;
  /* 11f5516d or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11f5516f:;
  /* 11f5516f mov eax, dword ptr [0x11f63214] */
  EAX = (r32((uint32_t)(0x11f63214)));
  /* 11f55174 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11f55177 push esi */
  push32((uint32_t)(ESI));
  /* 11f55178 call 0x11f54f3a */
  push32(0x11f5517du); f_11f54f3a();
  /* 11f5517d pop ecx */
  ECX = (pop32());
  /* 11f5517e pop ecx */
  ECX = (pop32());
L_11f5517f:;
  /* 11f5517f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f55180 cmp esi, dword ptr [0x11f64220] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f64220))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55186 jl 0x11f55114 */
  if ((C.sf!=C.of)) goto L_11f55114;
L_11f55188:;
  /* 11f55188 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5518a call 0x11f563dd */
  push32(0x11f5518fu); f_11f563dd();
  /* 11f5518f cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55194 pop ecx */
  ECX = (pop32());
  /* 11f55195 mov eax, ebx */
  EAX = (EBX);
  /* 11f55197 je 0x11f5519b */
  if (C.zf) goto L_11f5519b;
  /* 11f55199 mov eax, edi */
  EAX = (EDI);
L_11f5519b:;
  /* 11f5519b pop edi */
  EDI = (pop32());
  /* 11f5519c pop esi */
  ESI = (pop32());
  /* 11f5519d pop ebx */
  EBX = (pop32());
  /* 11f5519e ret  */
  ESPCHK(0x11f550fbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000519f @ 0x11f5519f (18 bytes, 6 insns) */
void f_11f5519f(void) {
  FTRACE(0x11f5519fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5519f push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11f551a4 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11f551a9 call 0x11f587ca */
  push32(0x11f551aeu); f_11f587ca();
  /* 11f551ae pop ecx */
  ECX = (pop32());
  /* 11f551af pop ecx */
  ECX = (pop32());
  /* 11f551b0 ret  */
  ESPCHK(0x11f5519fu, _esp0);
  ESP += 4; return;
}

/* FUN_100051b1 @ 0x11f551b1 (62 bytes, 24 insns) */
void f_11f551b1(void) {
  FTRACE(0x11f551b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f551b1 push ebp */
  push32((uint32_t)(EBP));
  /* 11f551b2 mov ebp, esp */
  EBP = (ESP);
  /* 11f551b4 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f551b7 fld qword ptr [0x11f5c2c8] */
  fpu_push(rf64((uint32_t)(0x11f5c2c8)));
  /* 11f551bd fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11f551c0 fld qword ptr [0x11f5c2c0] */
  fpu_push(rf64((uint32_t)(0x11f5c2c0)));
  /* 11f551c6 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11f551c9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11f551cc fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11f551cf fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11f551d2 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11f551d5 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11f551d8 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11f551db fcomp qword ptr [0x11f5c2b8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f5c2b8)));
  (void)fpu_pop();
  /* 11f551e1 fnstsw ax */
  AX = fpu_status();
  /* 11f551e3 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11f551e4 jbe 0x11f551eb */
  if ((C.cf||C.zf)) goto L_11f551eb;
  /* 11f551e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f551e8 pop eax */
  EAX = (pop32());
  /* 11f551e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f551ea ret  */
  ESPCHK(0x11f551b1u, _esp0);
  ESP += 4; return;
L_11f551eb:;
  /* 11f551eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f551ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f551ee ret  */
  ESPCHK(0x11f551b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100051ef @ 0x11f551ef (41 bytes, 13 insns) */
void f_11f551ef(void) {
  FTRACE(0x11f551efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f551ef push 0x11f5c2ec */
  push32((uint32_t)(0x11f5c2ecu));
  /* 11f551f4 call dword ptr [0x11f5c0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0bc))), 0x11f551fau);
  /* 11f551fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f551fc je 0x11f55213 */
  if (C.zf) goto L_11f55213;
  /* 11f551fe push 0x11f5c2d0 */
  push32((uint32_t)(0x11f5c2d0u));
  /* 11f55203 push eax */
  push32((uint32_t)(EAX));
  /* 11f55204 call dword ptr [0x11f5c0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0b8))), 0x11f5520au);
  /* 11f5520a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5520c je 0x11f55213 */
  if (C.zf) goto L_11f55213;
  /* 11f5520e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55210 call eax */
  call_ind((uint32_t)(EAX), 0x11f55212u);
  /* 11f55212 ret  */
  ESPCHK(0x11f551efu, _esp0);
  ESP += 4; return;
L_11f55213:;
  /* 11f55213 jmp 0x11f551b1 */
  f_11f551b1(); return;
}

/* FUN_10005218 @ 0x11f55218 (90 bytes, 37 insns) */
void f_11f55218(void) {
  FTRACE(0x11f55218u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55218 push esi */
  push32((uint32_t)(ESI));
  /* 11f55219 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5521d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11f55220 push eax */
  push32((uint32_t)(EAX));
  /* 11f55221 call 0x11f58970 */
  push32(0x11f55226u); f_11f58970();
  /* 11f55226 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55229 pop ecx */
  ECX = (pop32());
  /* 11f5522a je 0x11f55258 */
  if (C.zf) goto L_11f55258;
L_11f5522c:;
  /* 11f5522c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5522d cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55234 jle 0x11f55245 */
  if ((C.zf||C.sf!=C.of)) goto L_11f55245;
  /* 11f55236 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11f55239 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5523b push eax */
  push32((uint32_t)(EAX));
  /* 11f5523c call 0x11f588fb */
  push32(0x11f55241u); f_11f588fb();
  /* 11f55241 pop ecx */
  ECX = (pop32());
  /* 11f55242 pop ecx */
  ECX = (pop32());
  /* 11f55243 jmp 0x11f55254 */
  goto L_11f55254;
L_11f55245:;
  /* 11f55245 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11f55248 mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5524e mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f55251 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11f55254:;
  /* 11f55254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55256 jne 0x11f5522c */
  if (!C.zf) goto L_11f5522c;
L_11f55258:;
  /* 11f55258 mov cl, byte ptr [0x11f62064] */
  CL = (r8((uint32_t)(0x11f62064)));
  /* 11f5525e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f55260 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11f55262 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f55263:;
  /* 11f55263 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11f55265 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11f55267 mov al, cl */
  AL = (CL);
  /* 11f55269 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11f5526b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5526c test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11f5526e jne 0x11f55263 */
  if (!C.zf) goto L_11f55263;
  /* 11f55270 pop esi */
  ESI = (pop32());
  /* 11f55271 ret  */
  ESPCHK(0x11f55218u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11f552d8 (62 bytes, 29 insns) */
void f_11f552d8(void) {
  FTRACE(0x11f552d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f552d8 push ebp */
  push32((uint32_t)(EBP));
  /* 11f552d9 mov ebp, esp */
  EBP = (ESP);
  /* 11f552db push ecx */
  push32((uint32_t)(ECX));
  /* 11f552dc push ecx */
  push32((uint32_t)(ECX));
  /* 11f552dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f552e1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f552e4 je 0x11f55301 */
  if (C.zf) goto L_11f55301;
  /* 11f552e6 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f552e9 push eax */
  push32((uint32_t)(EAX));
  /* 11f552ea call 0x11f58e3c */
  push32(0x11f552efu); f_11f58e3c();
  /* 11f552ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f552f2 pop ecx */
  ECX = (pop32());
  /* 11f552f3 pop ecx */
  ECX = (pop32());
  /* 11f552f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f552f7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f552f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f552fc mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f552ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f55300 ret  */
  ESPCHK(0x11f552d8u, _esp0);
  ESP += 4; return;
L_11f55301:;
  /* 11f55301 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f55304 push eax */
  push32((uint32_t)(EAX));
  /* 11f55305 call 0x11f58e69 */
  push32(0x11f5530au); f_11f58e69();
  /* 11f5530a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5530d pop ecx */
  ECX = (pop32());
  /* 11f5530e pop ecx */
  ECX = (pop32());
  /* 11f5530f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f55312 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f55314 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f55315 ret  */
  ESPCHK(0x11f552d8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005316 @ 0x11f55316 (97 bytes, 42 insns) */
void f_11f55316(void) {
  FTRACE(0x11f55316u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55316 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55317 mov ebp, esp */
  EBP = (ESP);
  /* 11f55319 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5531c lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11f5531f push esi */
  push32((uint32_t)(ESI));
  /* 11f55320 push eax */
  push32((uint32_t)(EAX));
  /* 11f55321 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f55324 push eax */
  push32((uint32_t)(EAX));
  /* 11f55325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f55328 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55329 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5532a fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11f5532c fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11f5532f call 0x11f58f0d */
  push32(0x11f55334u); f_11f58f0d();
  /* 11f55334 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f55337 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5533a push eax */
  push32((uint32_t)(EAX));
  /* 11f5533b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5533e lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11f55341 push eax */
  push32((uint32_t)(EAX));
  /* 11f55342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55344 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55348 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f5534b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5534d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5534f setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11f55352 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55354 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55356 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55357 call 0x11f58e96 */
  push32(0x11f5535cu); f_11f58e96();
  /* 11f5535c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5535f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55361 push eax */
  push32((uint32_t)(EAX));
  /* 11f55362 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f55365 push esi */
  push32((uint32_t)(ESI));
  /* 11f55366 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f55369 call 0x11f55377 */
  push32(0x11f5536eu); f_11f55377();
  /* 11f5536e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f55371 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55374 pop esi */
  ESI = (pop32());
  /* 11f55375 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f55376 ret  */
  ESPCHK(0x11f55316u, _esp0);
  ESP += 4; return;
}

/* FUN_10005377 @ 0x11f55377 (194 bytes, 91 insns) */
void f_11f55377(void) {
  FTRACE(0x11f55377u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55377 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55378 mov ebp, esp */
  EBP = (ESP);
  /* 11f5537a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5537b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5537d cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55380 push esi */
  push32((uint32_t)(ESI));
  /* 11f55381 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f55384 push edi */
  push32((uint32_t)(EDI));
  /* 11f55385 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f55388 je 0x11f553a5 */
  if (C.zf) goto L_11f553a5;
  /* 11f5538a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5538c cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5538f setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11f55392 push eax */
  push32((uint32_t)(EAX));
  /* 11f55393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55395 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55398 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f5539b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5539d push eax */
  push32((uint32_t)(EAX));
  /* 11f5539e call 0x11f55619 */
  push32(0x11f553a3u); f_11f55619();
  /* 11f553a3 pop ecx */
  ECX = (pop32());
  /* 11f553a4 pop ecx */
  ECX = (pop32());
L_11f553a5:;
  /* 11f553a5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f553a8 mov eax, edi */
  EAX = (EDI);
  /* 11f553aa jne 0x11f553b2 */
  if (!C.zf) goto L_11f553b2;
  /* 11f553ac mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11f553af lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11f553b2:;
  /* 11f553b2 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f553b5 jle 0x11f553c9 */
  if ((C.zf||C.sf!=C.of)) goto L_11f553c9;
  /* 11f553b7 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f553ba lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11f553bd mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f553bf mov eax, ecx */
  EAX = (ECX);
  /* 11f553c1 mov cl, byte ptr [0x11f62064] */
  CL = (r8((uint32_t)(0x11f62064)));
  /* 11f553c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_11f553c9:;
  /* 11f553c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f553cb cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f553ce push 0x11f5c300 */
  push32((uint32_t)(0x11f5c300u));
  /* 11f553d3 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11f553d6 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f553d8 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f553db push ecx */
  push32((uint32_t)(ECX));
  /* 11f553dc call 0x11f59020 */
  push32(0x11f553e1u); f_11f59020();
  /* 11f553e1 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f553e4 pop ecx */
  ECX = (pop32());
  /* 11f553e5 pop ecx */
  ECX = (pop32());
  /* 11f553e6 mov ecx, eax */
  ECX = (EAX);
  /* 11f553e8 je 0x11f553ed */
  if (C.zf) goto L_11f553ed;
  /* 11f553ea mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11f553ed:;
  /* 11f553ed mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11f553f0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f553f1 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f553f4 je 0x11f55432 */
  if (C.zf) goto L_11f55432;
  /* 11f553f6 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f553f9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f553fa jns 0x11f55401 */
  if (!C.sf) goto L_11f55401;
  /* 11f553fc neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f553fe mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11f55401:;
  /* 11f55401 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f55402 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55405 jl 0x11f55418 */
  if ((C.sf!=C.of)) goto L_11f55418;
  /* 11f55407 mov eax, ebx */
  EAX = (EBX);
  /* 11f55409 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11f5540b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f5540c pop esi */
  ESI = (pop32());
  /* 11f5540d idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f5540f add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11f55411 mov eax, ebx */
  EAX = (EBX);
  /* 11f55413 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f55414 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f55416 mov ebx, edx */
  EBX = (EDX);
L_11f55418:;
  /* 11f55418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f55419 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5541c jl 0x11f5542f */
  if ((C.sf!=C.of)) goto L_11f5542f;
  /* 11f5541e mov eax, ebx */
  EAX = (EBX);
  /* 11f55420 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f55422 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f55423 pop esi */
  ESI = (pop32());
  /* 11f55424 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f55426 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11f55428 mov eax, ebx */
  EAX = (EBX);
  /* 11f5542a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f5542b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f5542d mov ebx, edx */
  EBX = (EDX);
L_11f5542f:;
  /* 11f5542f add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_11f55432:;
  /* 11f55432 mov eax, edi */
  EAX = (EDI);
  /* 11f55434 pop edi */
  EDI = (pop32());
  /* 11f55435 pop esi */
  ESI = (pop32());
  /* 11f55436 pop ebx */
  EBX = (pop32());
  /* 11f55437 pop ebp */
  EBP = (pop32());
  /* 11f55438 ret  */
  ESPCHK(0x11f55377u, _esp0);
  ESP += 4; return;
}

/* FUN_10005439 @ 0x11f55439 (85 bytes, 37 insns) */
void f_11f55439(void) {
  FTRACE(0x11f55439u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55439 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5543a mov ebp, esp */
  EBP = (ESP);
  /* 11f5543c sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5543f lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11f55442 push esi */
  push32((uint32_t)(ESI));
  /* 11f55443 push eax */
  push32((uint32_t)(EAX));
  /* 11f55444 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f55447 push eax */
  push32((uint32_t)(EAX));
  /* 11f55448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5544b push ecx */
  push32((uint32_t)(ECX));
  /* 11f5544c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5544d fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11f5544f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11f55452 call 0x11f58f0d */
  push32(0x11f55457u); f_11f58f0d();
  /* 11f55457 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5545a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5545d push eax */
  push32((uint32_t)(EAX));
  /* 11f5545e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f55461 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55463 push eax */
  push32((uint32_t)(EAX));
  /* 11f55464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55466 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5546a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f5546d add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55470 push eax */
  push32((uint32_t)(EAX));
  /* 11f55471 call 0x11f58e96 */
  push32(0x11f55476u); f_11f58e96();
  /* 11f55476 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f55479 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5547b push eax */
  push32((uint32_t)(EAX));
  /* 11f5547c push esi */
  push32((uint32_t)(ESI));
  /* 11f5547d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f55480 call 0x11f5548e */
  push32(0x11f55485u); f_11f5548e();
  /* 11f55485 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f55488 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5548b pop esi */
  ESI = (pop32());
  /* 11f5548c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5548d ret  */
  ESPCHK(0x11f55439u, _esp0);
  ESP += 4; return;
}

/* FUN_1000548e @ 0x11f5548e (167 bytes, 73 insns) */
void f_11f5548e(void) {
  FTRACE(0x11f5548eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5548e push ebp */
  push32((uint32_t)(EBP));
  /* 11f5548f mov ebp, esp */
  EBP = (ESP);
  /* 11f55491 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55492 push esi */
  push32((uint32_t)(ESI));
  /* 11f55493 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f55496 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f55499 push edi */
  push32((uint32_t)(EDI));
  /* 11f5549a mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5549d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5549e cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f554a2 je 0x11f554be */
  if (C.zf) goto L_11f554be;
  /* 11f554a4 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f554a7 jne 0x11f554be */
  if (!C.zf) goto L_11f554be;
  /* 11f554a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f554ab cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f554ae sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11f554b1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f554b3 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f554b5 mov eax, ecx */
  EAX = (ECX);
  /* 11f554b7 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11f554ba and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11f554be:;
  /* 11f554be cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f554c1 mov edi, ebx */
  EDI = (EBX);
  /* 11f554c3 jne 0x11f554cb */
  if (!C.zf) goto L_11f554cb;
  /* 11f554c5 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 11f554c8 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11f554cb:;
  /* 11f554cb mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f554ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f554d0 jg 0x11f554e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f554e2;
  /* 11f554d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f554d4 push edi */
  push32((uint32_t)(EDI));
  /* 11f554d5 call 0x11f55619 */
  push32(0x11f554dau); f_11f55619();
  /* 11f554da pop ecx */
  ECX = (pop32());
  /* 11f554db mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11f554de pop ecx */
  ECX = (pop32());
  /* 11f554df inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f554e0 jmp 0x11f554e4 */
  goto L_11f554e4;
L_11f554e2:;
  /* 11f554e2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f554e4:;
  /* 11f554e4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f554e8 jle 0x11f5552e */
  if ((C.zf||C.sf!=C.of)) goto L_11f5552e;
  /* 11f554ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11f554ec push edi */
  push32((uint32_t)(EDI));
  /* 11f554ed call 0x11f55619 */
  push32(0x11f554f2u); f_11f55619();
  /* 11f554f2 mov al, byte ptr [0x11f62064] */
  AL = (r8((uint32_t)(0x11f62064)));
  /* 11f554f7 pop ecx */
  ECX = (pop32());
  /* 11f554f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f554fa mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11f554fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f554fe pop ecx */
  ECX = (pop32());
  /* 11f554ff test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55501 jge 0x11f5552e */
  if ((C.sf==C.of)) goto L_11f5552e;
  /* 11f55503 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55507 je 0x11f5550d */
  if (C.zf) goto L_11f5550d;
  /* 11f55509 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5550b jmp 0x11f55514 */
  goto L_11f55514;
L_11f5550d:;
  /* 11f5550d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5550f cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55512 jl 0x11f55517 */
  if ((C.sf!=C.of)) goto L_11f55517;
L_11f55514:;
  /* 11f55514 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11f55517:;
  /* 11f55517 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5551a push edi */
  push32((uint32_t)(EDI));
  /* 11f5551b call 0x11f55619 */
  push32(0x11f55520u); f_11f55619();
  /* 11f55520 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f55523 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f55525 push edi */
  push32((uint32_t)(EDI));
  /* 11f55526 call 0x11f59110 */
  push32(0x11f5552bu); f_11f59110();
  /* 11f5552b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5552e:;
  /* 11f5552e pop edi */
  EDI = (pop32());
  /* 11f5552f mov eax, ebx */
  EAX = (EBX);
  /* 11f55531 pop esi */
  ESI = (pop32());
  /* 11f55532 pop ebx */
  EBX = (pop32());
  /* 11f55533 pop ebp */
  EBP = (pop32());
  /* 11f55534 ret  */
  ESPCHK(0x11f5548eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005535 @ 0x11f55535 (147 bytes, 66 insns) */
void f_11f55535(void) {
  FTRACE(0x11f55535u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55535 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55536 mov ebp, esp */
  EBP = (ESP);
  /* 11f55538 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5553b push ebx */
  push32((uint32_t)(EBX));
  /* 11f5553c push esi */
  push32((uint32_t)(ESI));
  /* 11f5553d lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11f55540 push edi */
  push32((uint32_t)(EDI));
  /* 11f55541 push eax */
  push32((uint32_t)(EAX));
  /* 11f55542 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f55545 push eax */
  push32((uint32_t)(EAX));
  /* 11f55546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f55549 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5554a push ecx */
  push32((uint32_t)(ECX));
  /* 11f5554b fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11f5554d fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11f55550 call 0x11f58f0d */
  push32(0x11f55555u); f_11f58f0d();
  /* 11f55555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f55558 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5555b lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11f5555e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55560 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55564 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f55567 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5556a mov edi, eax */
  EDI = (EAX);
  /* 11f5556c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5556f push eax */
  push32((uint32_t)(EAX));
  /* 11f55570 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55571 push edi */
  push32((uint32_t)(EDI));
  /* 11f55572 call 0x11f58e96 */
  push32(0x11f55577u); f_11f58e96();
  /* 11f55577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5557a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5557d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5557e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55580 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11f55583 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55586 jl 0x11f555ae */
  if ((C.sf!=C.of)) goto L_11f555ae;
  /* 11f55588 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5558a jge 0x11f555ae */
  if ((C.sf==C.of)) goto L_11f555ae;
  /* 11f5558c test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11f5558e je 0x11f5559a */
  if (C.zf) goto L_11f5559a;
L_11f55590:;
  /* 11f55590 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11f55592 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f55593 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f55595 jne 0x11f55590 */
  if (!C.zf) goto L_11f55590;
  /* 11f55597 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_11f5559a:;
  /* 11f5559a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5559d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5559f push eax */
  push32((uint32_t)(EAX));
  /* 11f555a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f555a1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f555a4 call 0x11f5548e */
  push32(0x11f555a9u); f_11f5548e();
  /* 11f555a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f555ac jmp 0x11f555c3 */
  goto L_11f555c3;
L_11f555ae:;
  /* 11f555ae lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f555b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f555b3 push eax */
  push32((uint32_t)(EAX));
  /* 11f555b4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f555b7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f555b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f555bb call 0x11f55377 */
  push32(0x11f555c0u); f_11f55377();
  /* 11f555c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f555c3:;
  /* 11f555c3 pop edi */
  EDI = (pop32());
  /* 11f555c4 pop esi */
  ESI = (pop32());
  /* 11f555c5 pop ebx */
  EBX = (pop32());
  /* 11f555c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f555c7 ret  */
  ESPCHK(0x11f55535u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11f555c8 (81 bytes, 29 insns) */
void f_11f555c8(void) {
  FTRACE(0x11f555c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f555c8 push ebp */
  push32((uint32_t)(EBP));
  /* 11f555c9 mov ebp, esp */
  EBP = (ESP);
  /* 11f555cb cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f555cf je 0x11f55603 */
  if (C.zf) goto L_11f55603;
  /* 11f555d1 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f555d5 je 0x11f55603 */
  if (C.zf) goto L_11f55603;
  /* 11f555d7 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f555db jne 0x11f555f0 */
  if (!C.zf) goto L_11f555f0;
  /* 11f555dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f555e0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f555e3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f555e6 call 0x11f55439 */
  push32(0x11f555ebu); f_11f55439();
  /* 11f555eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f555ee pop ebp */
  EBP = (pop32());
  /* 11f555ef ret  */
  ESPCHK(0x11f555c8u, _esp0);
  ESP += 4; return;
L_11f555f0:;
  /* 11f555f0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f555f3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f555f6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f555f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f555fc call 0x11f55535 */
  push32(0x11f55601u); f_11f55535();
  /* 11f55601 jmp 0x11f55614 */
  goto L_11f55614;
L_11f55603:;
  /* 11f55603 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f55606 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f55609 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5560c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5560f call 0x11f55316 */
  push32(0x11f55614u); f_11f55316();
L_11f55614:;
  /* 11f55614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55617 pop ebp */
  EBP = (pop32());
  /* 11f55618 ret  */
  ESPCHK(0x11f555c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005619 @ 0x11f55619 (37 bytes, 18 insns) */
void f_11f55619(void) {
  FTRACE(0x11f55619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55619 push edi */
  push32((uint32_t)(EDI));
  /* 11f5561a mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f5561e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f55620 je 0x11f5563c */
  if (C.zf) goto L_11f5563c;
  /* 11f55622 push esi */
  push32((uint32_t)(ESI));
  /* 11f55623 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f55627 push esi */
  push32((uint32_t)(ESI));
  /* 11f55628 call 0x11f58630 */
  push32(0x11f5562du); f_11f58630();
  /* 11f5562d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5562e push eax */
  push32((uint32_t)(EAX));
  /* 11f5562f push esi */
  push32((uint32_t)(ESI));
  /* 11f55630 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55632 push esi */
  push32((uint32_t)(ESI));
  /* 11f55633 call 0x11f57df0 */
  push32(0x11f55638u); f_11f57df0();
  /* 11f55638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5563b pop esi */
  ESI = (pop32());
L_11f5563c:;
  /* 11f5563c pop edi */
  EDI = (pop32());
  /* 11f5563d ret  */
  ESPCHK(0x11f55619u, _esp0);
  ESP += 4; return;
}

/* FUN_1000563e @ 0x11f5563e (45 bytes, 12 insns) */
void f_11f5563e(void) {
  FTRACE(0x11f5563eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5563e mov eax, dword ptr [0x11f5f6d8] */
  EAX = (r32((uint32_t)(0x11f5f6d8)));
  /* 11f55643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55645 je 0x11f55649 */
  if (C.zf) goto L_11f55649;
  /* 11f55647 call eax */
  call_ind((uint32_t)(EAX), 0x11f55649u);
L_11f55649:;
  /* 11f55649 push 0x11f5e018 */
  push32((uint32_t)(0x11f5e018u));
  /* 11f5564e push 0x11f5e008 */
  push32((uint32_t)(0x11f5e008u));
  /* 11f55653 call 0x11f55742 */
  push32(0x11f55658u); f_11f55742();
  /* 11f55658 push 0x11f5e004 */
  push32((uint32_t)(0x11f5e004u));
  /* 11f5565d push 0x11f5e000 */
  push32((uint32_t)(0x11f5e000u));
  /* 11f55662 call 0x11f55742 */
  push32(0x11f55667u); f_11f55742();
  /* 11f55667 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5566a ret  */
  ESPCHK(0x11f5563eu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11f5566b (17 bytes, 6 insns) */
void f_11f5566b(void) {
  FTRACE(0x11f5566bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5566b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5566d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5566f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f55673 call 0x11f5568b */
  push32(0x11f55678u); f_11f5568b();
  /* 11f55678 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5567b ret  */
  ESPCHK(0x11f5566bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000567c @ 0x11f5567c (15 bytes, 6 insns) */
void f_11f5567c(void) {
  FTRACE(0x11f5567cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5567c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5567e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55680 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55682 call 0x11f5568b */
  push32(0x11f55687u); f_11f5568b();
  /* 11f55687 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5568a ret  */
  ESPCHK(0x11f5567cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000568b @ 0x11f5568b (163 bytes, 53 insns) */
void f_11f5568b(void) {
  FTRACE(0x11f5568bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5568b push edi */
  push32((uint32_t)(EDI));
  /* 11f5568c call 0x11f55730 */
  push32(0x11f55691u); f_11f55730();
  /* 11f55691 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f55693 pop edi */
  EDI = (pop32());
  /* 11f55694 cmp dword ptr [0x11f62b88], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62b88))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5569a jne 0x11f556ad */
  if (!C.zf) goto L_11f556ad;
  /* 11f5569c push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f556a0 call dword ptr [0x11f5c0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0c8))), 0x11f556a6u);
  /* 11f556a6 push eax */
  push32((uint32_t)(EAX));
  /* 11f556a7 call dword ptr [0x11f5c0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0c4))), 0x11f556adu);
L_11f556ad:;
  /* 11f556ad cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f556b2 push ebx */
  push32((uint32_t)(EBX));
  /* 11f556b3 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f556b7 mov dword ptr [0x11f62b84], edi */
  w32((uint32_t)(0x11f62b84), (EDI));
  /* 11f556bd mov byte ptr [0x11f62b80], bl */
  w8((uint32_t)(0x11f62b80), (BL));
  /* 11f556c3 jne 0x11f55701 */
  if (!C.zf) goto L_11f55701;
  /* 11f556c5 mov eax, dword ptr [0x11f63210] */
  EAX = (r32((uint32_t)(0x11f63210)));
  /* 11f556ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f556cc je 0x11f556f0 */
  if (C.zf) goto L_11f556f0;
  /* 11f556ce mov ecx, dword ptr [0x11f6320c] */
  ECX = (r32((uint32_t)(0x11f6320c)));
  /* 11f556d4 push esi */
  push32((uint32_t)(ESI));
  /* 11f556d5 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11f556d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f556da jb 0x11f556ef */
  if (C.cf) goto L_11f556ef;
L_11f556dc:;
  /* 11f556dc mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f556de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f556e0 je 0x11f556e4 */
  if (C.zf) goto L_11f556e4;
  /* 11f556e2 call eax */
  call_ind((uint32_t)(EAX), 0x11f556e4u);
L_11f556e4:;
  /* 11f556e4 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f556e7 cmp esi, dword ptr [0x11f63210] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f63210))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f556ed jae 0x11f556dc */
  if (!C.cf) goto L_11f556dc;
L_11f556ef:;
  /* 11f556ef pop esi */
  ESI = (pop32());
L_11f556f0:;
  /* 11f556f0 push 0x11f5e024 */
  push32((uint32_t)(0x11f5e024u));
  /* 11f556f5 push 0x11f5e01c */
  push32((uint32_t)(0x11f5e01cu));
  /* 11f556fa call 0x11f55742 */
  push32(0x11f556ffu); f_11f55742();
  /* 11f556ff pop ecx */
  ECX = (pop32());
  /* 11f55700 pop ecx */
  ECX = (pop32());
L_11f55701:;
  /* 11f55701 push 0x11f5e030 */
  push32((uint32_t)(0x11f5e030u));
  /* 11f55706 push 0x11f5e028 */
  push32((uint32_t)(0x11f5e028u));
  /* 11f5570b call 0x11f55742 */
  push32(0x11f55710u); f_11f55742();
  /* 11f55710 pop ecx */
  ECX = (pop32());
  /* 11f55711 pop ecx */
  ECX = (pop32());
  /* 11f55712 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f55714 pop ebx */
  EBX = (pop32());
  /* 11f55715 je 0x11f5571e */
  if (C.zf) goto L_11f5571e;
  /* 11f55717 call 0x11f55739 */
  push32(0x11f5571cu); f_11f55739();
  /* 11f5571c pop edi */
  EDI = (pop32());
  /* 11f5571d ret  */
  ESPCHK(0x11f5568bu, _esp0);
  ESP += 4; return;
L_11f5571e:;
  /* 11f5571e push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f55722 mov dword ptr [0x11f62b88], edi */
  w32((uint32_t)(0x11f62b88), (EDI));
  /* 11f55728 call dword ptr [0x11f5c0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0c0))), 0x11f5572eu);
  /* 11f5572e pop edi */
  EDI = (pop32());
  /* 11f5572f ret  */
  ESPCHK(0x11f5568bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005730 @ 0x11f55730 (9 bytes, 4 insns) */
void f_11f55730(void) {
  FTRACE(0x11f55730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55730 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f55732 call 0x11f5637c */
  push32(0x11f55737u); f_11f5637c();
  /* 11f55737 pop ecx */
  ECX = (pop32());
  /* 11f55738 ret  */
  ESPCHK(0x11f55730u, _esp0);
  ESP += 4; return;
}

/* FUN_10005739 @ 0x11f55739 (9 bytes, 4 insns) */
void f_11f55739(void) {
  FTRACE(0x11f55739u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55739 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f5573b call 0x11f563dd */
  push32(0x11f55740u); f_11f563dd();
  /* 11f55740 pop ecx */
  ECX = (pop32());
  /* 11f55741 ret  */
  ESPCHK(0x11f55739u, _esp0);
  ESP += 4; return;
}

/* FUN_10005742 @ 0x11f55742 (26 bytes, 12 insns) */
void f_11f55742(void) {
  FTRACE(0x11f55742u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55742 push esi */
  push32((uint32_t)(ESI));
  /* 11f55743 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11f55747:;
  /* 11f55747 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5574b jae 0x11f5575a */
  if (!C.cf) goto L_11f5575a;
  /* 11f5574d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f5574f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55751 je 0x11f55755 */
  if (C.zf) goto L_11f55755;
  /* 11f55753 call eax */
  call_ind((uint32_t)(EAX), 0x11f55755u);
L_11f55755:;
  /* 11f55755 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55758 jmp 0x11f55747 */
  goto L_11f55747;
L_11f5575a:;
  /* 11f5575a pop esi */
  ESI = (pop32());
  /* 11f5575b ret  */
  ESPCHK(0x11f55742u, _esp0);
  ESP += 4; return;
}

/* FUN_1000575c @ 0x11f5575c (444 bytes, 150 insns) */
void f_11f5575c(void) {
  FTRACE(0x11f5575cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5575c push ebp */
  push32((uint32_t)(EBP));
  /* 11f5575d mov ebp, esp */
  EBP = (ESP);
  /* 11f5575f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f55762 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55763 push esi */
  push32((uint32_t)(ESI));
  /* 11f55764 push edi */
  push32((uint32_t)(EDI));
  /* 11f55765 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f5576a call 0x11f54cc3 */
  push32(0x11f5576fu); f_11f54cc3();
  /* 11f5576f mov esi, eax */
  ESI = (EAX);
  /* 11f55771 pop ecx */
  ECX = (pop32());
  /* 11f55772 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55774 jne 0x11f5577e */
  if (!C.zf) goto L_11f5577e;
  /* 11f55776 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11f55778 call 0x11f5403b */
  push32(0x11f5577du); f_11f5403b();
  /* 11f5577d pop ecx */
  ECX = (pop32());
L_11f5577e:;
  /* 11f5577e mov dword ptr [0x11f63100], esi */
  w32((uint32_t)(0x11f63100), (ESI));
  /* 11f55784 mov dword ptr [0x11f63200], 0x20 */
  w32((uint32_t)(0x11f63200), (0x20u));
  /* 11f5578e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11f55794:;
  /* 11f55794 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55796 jae 0x11f557b6 */
  if (!C.cf) goto L_11f557b6;
  /* 11f55798 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f5579c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f5579f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f557a3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11f557a7 mov eax, dword ptr [0x11f63100] */
  EAX = (r32((uint32_t)(0x11f63100)));
  /* 11f557ac add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f557af add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f557b4 jmp 0x11f55794 */
  goto L_11f55794;
L_11f557b6:;
  /* 11f557b6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11f557b9 push eax */
  push32((uint32_t)(EAX));
  /* 11f557ba call dword ptr [0x11f5c0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0d8))), 0x11f557c0u);
  /* 11f557c0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f557c5 je 0x11f5589c */
  if (C.zf) goto L_11f5589c;
  /* 11f557cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f557ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f557d0 je 0x11f5589c */
  if (C.zf) goto L_11f5589c;
  /* 11f557d6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11f557d8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11f557db lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11f557de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f557e1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11f557e6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f557e8 jl 0x11f557ec */
  if ((C.sf!=C.of)) goto L_11f557ec;
  /* 11f557ea mov edi, eax */
  EDI = (EAX);
L_11f557ec:;
  /* 11f557ec cmp dword ptr [0x11f63200], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f63200))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f557f2 jge 0x11f5584a */
  if ((C.sf==C.of)) goto L_11f5584a;
  /* 11f557f4 mov esi, 0x11f63104 */
  ESI = (0x11f63104u);
L_11f557f9:;
  /* 11f557f9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f557fe call 0x11f54cc3 */
  push32(0x11f55803u); f_11f54cc3();
  /* 11f55803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55805 pop ecx */
  ECX = (pop32());
  /* 11f55806 je 0x11f55844 */
  if (C.zf) goto L_11f55844;
  /* 11f55808 add dword ptr [0x11f63200], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11f63200))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11f63200), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5580f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f55811 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11f55817:;
  /* 11f55817 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55819 jae 0x11f55837 */
  if (!C.cf) goto L_11f55837;
  /* 11f5581b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f5581f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f55822 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f55826 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11f5582a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f5582c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5582f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55835 jmp 0x11f55817 */
  goto L_11f55817;
L_11f55837:;
  /* 11f55837 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5583a cmp dword ptr [0x11f63200], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f63200))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55840 jl 0x11f557f9 */
  if ((C.sf!=C.of)) goto L_11f557f9;
  /* 11f55842 jmp 0x11f5584a */
  goto L_11f5584a;
L_11f55844:;
  /* 11f55844 mov edi, dword ptr [0x11f63200] */
  EDI = (r32((uint32_t)(0x11f63200)));
L_11f5584a:;
  /* 11f5584a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f5584c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f5584e jle 0x11f5589c */
  if ((C.zf||C.sf!=C.of)) goto L_11f5589c;
L_11f55850:;
  /* 11f55850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f55853 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f55855 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55858 je 0x11f55892 */
  if (C.zf) goto L_11f55892;
  /* 11f5585a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11f5585c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11f5585e je 0x11f55892 */
  if (C.zf) goto L_11f55892;
  /* 11f55860 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11f55862 jne 0x11f5586f */
  if (!C.zf) goto L_11f5586f;
  /* 11f55864 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55865 call dword ptr [0x11f5c0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0d4))), 0x11f5586bu);
  /* 11f5586b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5586d je 0x11f55892 */
  if (C.zf) goto L_11f55892;
L_11f5586f:;
  /* 11f5586f mov ecx, esi */
  ECX = (ESI);
  /* 11f55871 mov eax, esi */
  EAX = (ESI);
  /* 11f55873 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f55876 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f55879 mov ecx, dword ptr [ecx*4 + 0x11f63100] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f55880 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f55883 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11f55886 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f55889 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11f5588b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f5588d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11f5588f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11f55892:;
  /* 11f55892 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f55896 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f55897 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f55898 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5589a jl 0x11f55850 */
  if ((C.sf!=C.of)) goto L_11f55850;
L_11f5589c:;
  /* 11f5589c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f5589e:;
  /* 11f5589e mov ecx, dword ptr [0x11f63100] */
  ECX = (r32((uint32_t)(0x11f63100)));
  /* 11f558a4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11f558a7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f558ab lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f558ae jne 0x11f558fd */
  if (!C.zf) goto L_11f558fd;
  /* 11f558b0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f558b2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11f558b6 jne 0x11f558bd */
  if (!C.zf) goto L_11f558bd;
  /* 11f558b8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f558ba pop eax */
  EAX = (pop32());
  /* 11f558bb jmp 0x11f558c7 */
  goto L_11f558c7;
L_11f558bd:;
  /* 11f558bd mov eax, ebx */
  EAX = (EBX);
  /* 11f558bf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f558c0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f558c2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f558c4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f558c7:;
  /* 11f558c7 push eax */
  push32((uint32_t)(EAX));
  /* 11f558c8 call dword ptr [0x11f5c0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0d0))), 0x11f558ceu);
  /* 11f558ce mov edi, eax */
  EDI = (EAX);
  /* 11f558d0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f558d3 je 0x11f558ec */
  if (C.zf) goto L_11f558ec;
  /* 11f558d5 push edi */
  push32((uint32_t)(EDI));
  /* 11f558d6 call dword ptr [0x11f5c0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0d4))), 0x11f558dcu);
  /* 11f558dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f558de je 0x11f558ec */
  if (C.zf) goto L_11f558ec;
  /* 11f558e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f558e5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f558e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f558ea jne 0x11f558f2 */
  if (!C.zf) goto L_11f558f2;
L_11f558ec:;
  /* 11f558ec or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f558f0 jmp 0x11f55901 */
  goto L_11f55901;
L_11f558f2:;
  /* 11f558f2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f558f5 jne 0x11f55901 */
  if (!C.zf) goto L_11f55901;
  /* 11f558f7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f558fb jmp 0x11f55901 */
  goto L_11f55901;
L_11f558fd:;
  /* 11f558fd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11f55901:;
  /* 11f55901 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f55902 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55905 jl 0x11f5589e */
  if ((C.sf!=C.of)) goto L_11f5589e;
  /* 11f55907 push dword ptr [0x11f63200] */
  push32((uint32_t)(r32((uint32_t)(0x11f63200))));
  /* 11f5590d call dword ptr [0x11f5c0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0cc))), 0x11f55913u);
  /* 11f55913 pop edi */
  EDI = (pop32());
  /* 11f55914 pop esi */
  ESI = (pop32());
  /* 11f55915 pop ebx */
  EBX = (pop32());
  /* 11f55916 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f55917 ret  */
  ESPCHK(0x11f5575cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005918 @ 0x11f55918 (84 bytes, 33 insns) */
void f_11f55918(void) {
  FTRACE(0x11f55918u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55918 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55919 push esi */
  push32((uint32_t)(ESI));
  /* 11f5591a push edi */
  push32((uint32_t)(EDI));
  /* 11f5591b mov esi, 0x11f63100 */
  ESI = (0x11f63100u);
L_11f55920:;
  /* 11f55920 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f55922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55924 je 0x11f5595d */
  if (C.zf) goto L_11f5595d;
  /* 11f55926 mov edi, eax */
  EDI = (EAX);
  /* 11f55928 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5592d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5592f jae 0x11f55952 */
  if (!C.cf) goto L_11f55952;
  /* 11f55931 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11f55934:;
  /* 11f55934 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55938 je 0x11f55941 */
  if (C.zf) goto L_11f55941;
  /* 11f5593a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5593b call dword ptr [0x11f5c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0b4))), 0x11f55941u);
L_11f55941:;
  /* 11f55941 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f55943 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55946 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5594b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5594e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55950 jb 0x11f55934 */
  if (C.cf) goto L_11f55934;
L_11f55952:;
  /* 11f55952 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f55954 call 0x11f542bc */
  push32(0x11f55959u); f_11f542bc();
  /* 11f55959 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f5595c pop ecx */
  ECX = (pop32());
L_11f5595d:;
  /* 11f5595d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55960 cmp esi, 0x11f63200 */
  { uint32_t _a=(ESI),_b=(0x11f63200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55966 jl 0x11f55920 */
  if ((C.sf!=C.of)) goto L_11f55920;
  /* 11f55968 pop edi */
  EDI = (pop32());
  /* 11f55969 pop esi */
  ESI = (pop32());
  /* 11f5596a pop ebx */
  EBX = (pop32());
  /* 11f5596b ret  */
  ESPCHK(0x11f55918u, _esp0);
  ESP += 4; return;
}

/* FUN_1000596c @ 0x11f5596c (185 bytes, 71 insns) */
void f_11f5596c(void) {
  FTRACE(0x11f5596cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5596c push ebx */
  push32((uint32_t)(EBX));
  /* 11f5596d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5596f cmp dword ptr [0x11f63208], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f63208))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55975 push esi */
  push32((uint32_t)(ESI));
  /* 11f55976 push edi */
  push32((uint32_t)(EDI));
  /* 11f55977 jne 0x11f5597e */
  if (!C.zf) goto L_11f5597e;
  /* 11f55979 call 0x11f59549 */
  push32(0x11f5597eu); f_11f59549();
L_11f5597e:;
  /* 11f5597e mov esi, dword ptr [0x11f62b2c] */
  ESI = (r32((uint32_t)(0x11f62b2c)));
  /* 11f55984 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11f55986:;
  /* 11f55986 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f55988 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5598a je 0x11f5599e */
  if (C.zf) goto L_11f5599e;
  /* 11f5598c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5598e je 0x11f55991 */
  if (C.zf) goto L_11f55991;
  /* 11f55990 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f55991:;
  /* 11f55991 push esi */
  push32((uint32_t)(ESI));
  /* 11f55992 call 0x11f58630 */
  push32(0x11f55997u); f_11f58630();
  /* 11f55997 pop ecx */
  ECX = (pop32());
  /* 11f55998 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11f5599c jmp 0x11f55986 */
  goto L_11f55986;
L_11f5599e:;
  /* 11f5599e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11f559a5 push eax */
  push32((uint32_t)(EAX));
  /* 11f559a6 call 0x11f54cc3 */
  push32(0x11f559abu); f_11f54cc3();
  /* 11f559ab mov esi, eax */
  ESI = (EAX);
  /* 11f559ad pop ecx */
  ECX = (pop32());
  /* 11f559ae cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f559b0 mov dword ptr [0x11f62b68], esi */
  w32((uint32_t)(0x11f62b68), (ESI));
  /* 11f559b6 jne 0x11f559c0 */
  if (!C.zf) goto L_11f559c0;
  /* 11f559b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f559ba call 0x11f5403b */
  push32(0x11f559bfu); f_11f5403b();
  /* 11f559bf pop ecx */
  ECX = (pop32());
L_11f559c0:;
  /* 11f559c0 mov edi, dword ptr [0x11f62b2c] */
  EDI = (r32((uint32_t)(0x11f62b2c)));
  /* 11f559c6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f559c8 je 0x11f55a03 */
  if (C.zf) goto L_11f55a03;
  /* 11f559ca push ebp */
  push32((uint32_t)(EBP));
L_11f559cb:;
  /* 11f559cb push edi */
  push32((uint32_t)(EDI));
  /* 11f559cc call 0x11f58630 */
  push32(0x11f559d1u); f_11f58630();
  /* 11f559d1 mov ebp, eax */
  EBP = (EAX);
  /* 11f559d3 pop ecx */
  ECX = (pop32());
  /* 11f559d4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11f559d5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f559d8 je 0x11f559fc */
  if (C.zf) goto L_11f559fc;
  /* 11f559da push ebp */
  push32((uint32_t)(EBP));
  /* 11f559db call 0x11f54cc3 */
  push32(0x11f559e0u); f_11f54cc3();
  /* 11f559e0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f559e2 pop ecx */
  ECX = (pop32());
  /* 11f559e3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f559e5 jne 0x11f559ef */
  if (!C.zf) goto L_11f559ef;
  /* 11f559e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f559e9 call 0x11f5403b */
  push32(0x11f559eeu); f_11f5403b();
  /* 11f559ee pop ecx */
  ECX = (pop32());
L_11f559ef:;
  /* 11f559ef push edi */
  push32((uint32_t)(EDI));
  /* 11f559f0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f559f2 call 0x11f59020 */
  push32(0x11f559f7u); f_11f59020();
  /* 11f559f7 pop ecx */
  ECX = (pop32());
  /* 11f559f8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f559fb pop ecx */
  ECX = (pop32());
L_11f559fc:;
  /* 11f559fc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f559fe cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55a00 jne 0x11f559cb */
  if (!C.zf) goto L_11f559cb;
  /* 11f55a02 pop ebp */
  EBP = (pop32());
L_11f55a03:;
  /* 11f55a03 push dword ptr [0x11f62b2c] */
  push32((uint32_t)(r32((uint32_t)(0x11f62b2c))));
  /* 11f55a09 call 0x11f542bc */
  push32(0x11f55a0eu); f_11f542bc();
  /* 11f55a0e pop ecx */
  ECX = (pop32());
  /* 11f55a0f mov dword ptr [0x11f62b2c], ebx */
  w32((uint32_t)(0x11f62b2c), (EBX));
  /* 11f55a15 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11f55a17 pop edi */
  EDI = (pop32());
  /* 11f55a18 pop esi */
  ESI = (pop32());
  /* 11f55a19 mov dword ptr [0x11f63204], 1 */
  w32((uint32_t)(0x11f63204), (0x1u));
  /* 11f55a23 pop ebx */
  EBX = (pop32());
  /* 11f55a24 ret  */
  ESPCHK(0x11f5596cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005a25 @ 0x11f55a25 (153 bytes, 62 insns) */
void f_11f55a25(void) {
  FTRACE(0x11f55a25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55a25 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55a26 mov ebp, esp */
  EBP = (ESP);
  /* 11f55a28 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55a29 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55a2a push ebx */
  push32((uint32_t)(EBX));
  /* 11f55a2b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f55a2d cmp dword ptr [0x11f63208], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f63208))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55a33 push esi */
  push32((uint32_t)(ESI));
  /* 11f55a34 push edi */
  push32((uint32_t)(EDI));
  /* 11f55a35 jne 0x11f55a3c */
  if (!C.zf) goto L_11f55a3c;
  /* 11f55a37 call 0x11f59549 */
  push32(0x11f55a3cu); f_11f59549();
L_11f55a3c:;
  /* 11f55a3c mov esi, 0x11f62b8c */
  ESI = (0x11f62b8cu);
  /* 11f55a41 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f55a46 push esi */
  push32((uint32_t)(ESI));
  /* 11f55a47 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55a48 call dword ptr [0x11f5c0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0e0))), 0x11f55a4eu);
  /* 11f55a4e mov eax, dword ptr [0x11f64224] */
  EAX = (r32((uint32_t)(0x11f64224)));
  /* 11f55a53 mov dword ptr [0x11f62b78], esi */
  w32((uint32_t)(0x11f62b78), (ESI));
  /* 11f55a59 mov edi, esi */
  EDI = (ESI);
  /* 11f55a5b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55a5d je 0x11f55a61 */
  if (C.zf) goto L_11f55a61;
  /* 11f55a5f mov edi, eax */
  EDI = (EAX);
L_11f55a61:;
  /* 11f55a61 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f55a64 push eax */
  push32((uint32_t)(EAX));
  /* 11f55a65 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f55a68 push eax */
  push32((uint32_t)(EAX));
  /* 11f55a69 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55a6a push ebx */
  push32((uint32_t)(EBX));
  /* 11f55a6b push edi */
  push32((uint32_t)(EDI));
  /* 11f55a6c call 0x11f55abe */
  push32(0x11f55a71u); f_11f55abe();
  /* 11f55a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f55a74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f55a77 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11f55a7a push eax */
  push32((uint32_t)(EAX));
  /* 11f55a7b call 0x11f54cc3 */
  push32(0x11f55a80u); f_11f54cc3();
  /* 11f55a80 mov esi, eax */
  ESI = (EAX);
  /* 11f55a82 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55a85 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55a87 jne 0x11f55a91 */
  if (!C.zf) goto L_11f55a91;
  /* 11f55a89 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f55a8b call 0x11f5403b */
  push32(0x11f55a90u); f_11f5403b();
  /* 11f55a90 pop ecx */
  ECX = (pop32());
L_11f55a91:;
  /* 11f55a91 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f55a94 push eax */
  push32((uint32_t)(EAX));
  /* 11f55a95 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f55a98 push eax */
  push32((uint32_t)(EAX));
  /* 11f55a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f55a9c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11f55a9f push eax */
  push32((uint32_t)(EAX));
  /* 11f55aa0 push esi */
  push32((uint32_t)(ESI));
  /* 11f55aa1 push edi */
  push32((uint32_t)(EDI));
  /* 11f55aa2 call 0x11f55abe */
  push32(0x11f55aa7u); f_11f55abe();
  /* 11f55aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f55aaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55aad dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f55aae mov dword ptr [0x11f62b60], esi */
  w32((uint32_t)(0x11f62b60), (ESI));
  /* 11f55ab4 pop edi */
  EDI = (pop32());
  /* 11f55ab5 pop esi */
  ESI = (pop32());
  /* 11f55ab6 mov dword ptr [0x11f62b5c], eax */
  w32((uint32_t)(0x11f62b5c), (EAX));
  /* 11f55abb pop ebx */
  EBX = (pop32());
  /* 11f55abc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f55abd ret  */
  ESPCHK(0x11f55a25u, _esp0);
  ESP += 4; return;
}

/* FUN_10005abe @ 0x11f55abe (436 bytes, 187 insns) */
void f_11f55abe(void) {
  FTRACE(0x11f55abeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55abe push ebp */
  push32((uint32_t)(EBP));
  /* 11f55abf mov ebp, esp */
  EBP = (ESP);
  /* 11f55ac1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f55ac4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f55ac7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55ac8 push esi */
  push32((uint32_t)(ESI));
  /* 11f55ac9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f55acc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f55acf push edi */
  push32((uint32_t)(EDI));
  /* 11f55ad0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f55ad3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11f55ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f55adc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f55ade je 0x11f55ae8 */
  if (C.zf) goto L_11f55ae8;
  /* 11f55ae0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f55ae2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55ae5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f55ae8:;
  /* 11f55ae8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55aeb jne 0x11f55b31 */
  if (!C.zf) goto L_11f55b31;
L_11f55aed:;
  /* 11f55aed mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f55af0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55af1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55af4 je 0x11f55b1f */
  if (C.zf) goto L_11f55b1f;
  /* 11f55af6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f55af8 je 0x11f55b1f */
  if (C.zf) goto L_11f55b1f;
  /* 11f55afa movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f55afd test byte ptr [edx + 0x11f62fc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f62fc1)))&(0x4u); fl_logic(_r,8); }
  /* 11f55b04 je 0x11f55b12 */
  if (C.zf) goto L_11f55b12;
  /* 11f55b06 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55b08 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55b0a je 0x11f55b12 */
  if (C.zf) goto L_11f55b12;
  /* 11f55b0c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55b0e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f55b10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f55b11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f55b12:;
  /* 11f55b12 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55b14 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55b16 je 0x11f55aed */
  if (C.zf) goto L_11f55aed;
  /* 11f55b18 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55b1a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f55b1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f55b1d jmp 0x11f55aed */
  goto L_11f55aed;
L_11f55b1f:;
  /* 11f55b1f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55b21 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55b23 je 0x11f55b29 */
  if (C.zf) goto L_11f55b29;
  /* 11f55b25 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f55b28 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f55b29:;
  /* 11f55b29 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b2c jne 0x11f55b74 */
  if (!C.zf) goto L_11f55b74;
  /* 11f55b2e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55b2f jmp 0x11f55b74 */
  goto L_11f55b74;
L_11f55b31:;
  /* 11f55b31 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55b33 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55b35 je 0x11f55b3c */
  if (C.zf) goto L_11f55b3c;
  /* 11f55b37 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55b39 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f55b3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f55b3c:;
  /* 11f55b3c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55b3e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55b3f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f55b42 test byte ptr [ebx + 0x11f62fc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f62fc1)))&(0x4u); fl_logic(_r,8); }
  /* 11f55b49 je 0x11f55b57 */
  if (C.zf) goto L_11f55b57;
  /* 11f55b4b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55b4d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55b4f je 0x11f55b56 */
  if (C.zf) goto L_11f55b56;
  /* 11f55b51 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11f55b53 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11f55b55 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f55b56:;
  /* 11f55b56 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f55b57:;
  /* 11f55b57 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b5a je 0x11f55b65 */
  if (C.zf) goto L_11f55b65;
  /* 11f55b5c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f55b5e je 0x11f55b69 */
  if (C.zf) goto L_11f55b69;
  /* 11f55b60 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b63 jne 0x11f55b31 */
  if (!C.zf) goto L_11f55b31;
L_11f55b65:;
  /* 11f55b65 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f55b67 jne 0x11f55b6c */
  if (!C.zf) goto L_11f55b6c;
L_11f55b69:;
  /* 11f55b69 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f55b6a jmp 0x11f55b74 */
  goto L_11f55b74;
L_11f55b6c:;
  /* 11f55b6c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55b6e je 0x11f55b74 */
  if (C.zf) goto L_11f55b74;
  /* 11f55b70 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11f55b74:;
  /* 11f55b74 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11f55b78:;
  /* 11f55b78 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b7b je 0x11f55c61 */
  if (C.zf) goto L_11f55c61;
L_11f55b81:;
  /* 11f55b81 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55b83 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b86 je 0x11f55b8d */
  if (C.zf) goto L_11f55b8d;
  /* 11f55b88 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b8b jne 0x11f55b90 */
  if (!C.zf) goto L_11f55b90;
L_11f55b8d:;
  /* 11f55b8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55b8e jmp 0x11f55b81 */
  goto L_11f55b81;
L_11f55b90:;
  /* 11f55b90 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55b93 je 0x11f55c61 */
  if (C.zf) goto L_11f55c61;
  /* 11f55b99 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f55b9b je 0x11f55ba5 */
  if (C.zf) goto L_11f55ba5;
  /* 11f55b9d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f55b9f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55ba2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f55ba5:;
  /* 11f55ba5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f55ba8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11f55baa:;
  /* 11f55baa mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11f55bb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f55bb3:;
  /* 11f55bb3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55bb6 jne 0x11f55bbc */
  if (!C.zf) goto L_11f55bbc;
  /* 11f55bb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55bb9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f55bba jmp 0x11f55bb3 */
  goto L_11f55bb3;
L_11f55bbc:;
  /* 11f55bbc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55bbf jne 0x11f55bed */
  if (!C.zf) goto L_11f55bed;
  /* 11f55bc1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f55bc4 jne 0x11f55beb */
  if (!C.zf) goto L_11f55beb;
  /* 11f55bc6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f55bc8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55bcb je 0x11f55bda */
  if (C.zf) goto L_11f55bda;
  /* 11f55bcd cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55bd1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11f55bd4 jne 0x11f55bda */
  if (!C.zf) goto L_11f55bda;
  /* 11f55bd6 mov eax, edx */
  EAX = (EDX);
  /* 11f55bd8 jmp 0x11f55bdd */
  goto L_11f55bdd;
L_11f55bda:;
  /* 11f55bda mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11f55bdd:;
  /* 11f55bdd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f55be0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f55be2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55be5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11f55be8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11f55beb:;
  /* 11f55beb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11f55bed:;
  /* 11f55bed mov edx, ebx */
  EDX = (EBX);
  /* 11f55bef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f55bf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f55bf2 je 0x11f55c02 */
  if (C.zf) goto L_11f55c02;
  /* 11f55bf4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11f55bf5:;
  /* 11f55bf5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55bf7 je 0x11f55bfd */
  if (C.zf) goto L_11f55bfd;
  /* 11f55bf9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11f55bfc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f55bfd:;
  /* 11f55bfd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55bff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f55c00 jne 0x11f55bf5 */
  if (!C.zf) goto L_11f55bf5;
L_11f55c02:;
  /* 11f55c02 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55c04 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f55c06 je 0x11f55c52 */
  if (C.zf) goto L_11f55c52;
  /* 11f55c08 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55c0c jne 0x11f55c18 */
  if (!C.zf) goto L_11f55c18;
  /* 11f55c0e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55c11 je 0x11f55c52 */
  if (C.zf) goto L_11f55c52;
  /* 11f55c13 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55c16 je 0x11f55c52 */
  if (C.zf) goto L_11f55c52;
L_11f55c18:;
  /* 11f55c18 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55c1c je 0x11f55c4c */
  if (C.zf) goto L_11f55c4c;
  /* 11f55c1e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55c20 je 0x11f55c3b */
  if (C.zf) goto L_11f55c3b;
  /* 11f55c22 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f55c25 test byte ptr [ebx + 0x11f62fc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f62fc1)))&(0x4u); fl_logic(_r,8); }
  /* 11f55c2c je 0x11f55c34 */
  if (C.zf) goto L_11f55c34;
  /* 11f55c2e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f55c30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f55c31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55c32 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f55c34:;
  /* 11f55c34 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f55c36 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f55c38 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f55c39 jmp 0x11f55c4a */
  goto L_11f55c4a;
L_11f55c3b:;
  /* 11f55c3b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f55c3e test byte ptr [edx + 0x11f62fc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f62fc1)))&(0x4u); fl_logic(_r,8); }
  /* 11f55c45 je 0x11f55c4a */
  if (C.zf) goto L_11f55c4a;
  /* 11f55c47 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55c48 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f55c4a:;
  /* 11f55c4a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f55c4c:;
  /* 11f55c4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55c4d jmp 0x11f55baa */
  goto L_11f55baa;
L_11f55c52:;
  /* 11f55c52 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f55c54 je 0x11f55c5a */
  if (C.zf) goto L_11f55c5a;
  /* 11f55c56 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f55c59 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f55c5a:;
  /* 11f55c5a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f55c5c jmp 0x11f55b78 */
  goto L_11f55b78;
L_11f55c61:;
  /* 11f55c61 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f55c63 je 0x11f55c68 */
  if (C.zf) goto L_11f55c68;
  /* 11f55c65 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f55c68:;
  /* 11f55c68 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f55c6b pop edi */
  EDI = (pop32());
  /* 11f55c6c pop esi */
  ESI = (pop32());
  /* 11f55c6d pop ebx */
  EBX = (pop32());
  /* 11f55c6e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11f55c70 pop ebp */
  EBP = (pop32());
  /* 11f55c71 ret  */
  ESPCHK(0x11f55abeu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c72 @ 0x11f55c72 (306 bytes, 132 insns) */
void f_11f55c72(void) {
  FTRACE(0x11f55c72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55c72 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55c73 push ecx */
  push32((uint32_t)(ECX));
  /* 11f55c74 mov eax, dword ptr [0x11f62c90] */
  EAX = (r32((uint32_t)(0x11f62c90)));
  /* 11f55c79 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55c7a push ebp */
  push32((uint32_t)(EBP));
  /* 11f55c7b mov ebp, dword ptr [0x11f5c0f0] */
  EBP = (r32((uint32_t)(0x11f5c0f0)));
  /* 11f55c81 push esi */
  push32((uint32_t)(ESI));
  /* 11f55c82 push edi */
  push32((uint32_t)(EDI));
  /* 11f55c83 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f55c85 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f55c87 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f55c89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55c8b jne 0x11f55cc0 */
  if (!C.zf) goto L_11f55cc0;
  /* 11f55c8d call ebp */
  call_ind((uint32_t)(EBP), 0x11f55c8fu);
  /* 11f55c8f mov esi, eax */
  ESI = (EAX);
  /* 11f55c91 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55c93 je 0x11f55ca1 */
  if (C.zf) goto L_11f55ca1;
  /* 11f55c95 mov dword ptr [0x11f62c90], 1 */
  w32((uint32_t)(0x11f62c90), (0x1u));
  /* 11f55c9f jmp 0x11f55cc9 */
  goto L_11f55cc9;
L_11f55ca1:;
  /* 11f55ca1 call dword ptr [0x11f5c0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0dc))), 0x11f55ca7u);
  /* 11f55ca7 mov edi, eax */
  EDI = (EAX);
  /* 11f55ca9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55cab je 0x11f55d9b */
  if (C.zf) goto L_11f55d9b;
  /* 11f55cb1 mov dword ptr [0x11f62c90], 2 */
  w32((uint32_t)(0x11f62c90), (0x2u));
  /* 11f55cbb jmp 0x11f55d4f */
  goto L_11f55d4f;
L_11f55cc0:;
  /* 11f55cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55cc3 jne 0x11f55d4a */
  if (!C.zf) goto L_11f55d4a;
L_11f55cc9:;
  /* 11f55cc9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55ccb jne 0x11f55cd9 */
  if (!C.zf) goto L_11f55cd9;
  /* 11f55ccd call ebp */
  call_ind((uint32_t)(EBP), 0x11f55ccfu);
  /* 11f55ccf mov esi, eax */
  ESI = (EAX);
  /* 11f55cd1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55cd3 je 0x11f55d9b */
  if (C.zf) goto L_11f55d9b;
L_11f55cd9:;
  /* 11f55cd9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f55cdc mov eax, esi */
  EAX = (ESI);
  /* 11f55cde je 0x11f55cee */
  if (C.zf) goto L_11f55cee;
L_11f55ce0:;
  /* 11f55ce0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55ce1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55ce2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f55ce5 jne 0x11f55ce0 */
  if (!C.zf) goto L_11f55ce0;
  /* 11f55ce7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55ce8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55ce9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f55cec jne 0x11f55ce0 */
  if (!C.zf) goto L_11f55ce0;
L_11f55cee:;
  /* 11f55cee sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f55cf0 mov edi, dword ptr [0x11f5c0ec] */
  EDI = (r32((uint32_t)(0x11f5c0ec)));
  /* 11f55cf6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f55cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55cf9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55cfa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55cfb push ebx */
  push32((uint32_t)(EBX));
  /* 11f55cfc push ebx */
  push32((uint32_t)(EBX));
  /* 11f55cfd push eax */
  push32((uint32_t)(EAX));
  /* 11f55cfe push esi */
  push32((uint32_t)(ESI));
  /* 11f55cff push ebx */
  push32((uint32_t)(EBX));
  /* 11f55d00 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55d01 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11f55d05 call edi */
  call_ind((uint32_t)(EDI), 0x11f55d07u);
  /* 11f55d07 mov ebp, eax */
  EBP = (EAX);
  /* 11f55d09 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55d0b je 0x11f55d3f */
  if (C.zf) goto L_11f55d3f;
  /* 11f55d0d push ebp */
  push32((uint32_t)(EBP));
  /* 11f55d0e call 0x11f54cc3 */
  push32(0x11f55d13u); f_11f54cc3();
  /* 11f55d13 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55d15 pop ecx */
  ECX = (pop32());
  /* 11f55d16 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f55d1a je 0x11f55d3f */
  if (C.zf) goto L_11f55d3f;
  /* 11f55d1c push ebx */
  push32((uint32_t)(EBX));
  /* 11f55d1d push ebx */
  push32((uint32_t)(EBX));
  /* 11f55d1e push ebp */
  push32((uint32_t)(EBP));
  /* 11f55d1f push eax */
  push32((uint32_t)(EAX));
  /* 11f55d20 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11f55d24 push esi */
  push32((uint32_t)(ESI));
  /* 11f55d25 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55d26 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55d27 call edi */
  call_ind((uint32_t)(EDI), 0x11f55d29u);
  /* 11f55d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55d2b jne 0x11f55d3b */
  if (!C.zf) goto L_11f55d3b;
  /* 11f55d2d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f55d31 call 0x11f542bc */
  push32(0x11f55d36u); f_11f542bc();
  /* 11f55d36 pop ecx */
  ECX = (pop32());
  /* 11f55d37 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11f55d3b:;
  /* 11f55d3b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11f55d3f:;
  /* 11f55d3f push esi */
  push32((uint32_t)(ESI));
  /* 11f55d40 call dword ptr [0x11f5c0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0e8))), 0x11f55d46u);
  /* 11f55d46 mov eax, ebx */
  EAX = (EBX);
  /* 11f55d48 jmp 0x11f55d9d */
  goto L_11f55d9d;
L_11f55d4a:;
  /* 11f55d4a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55d4d jne 0x11f55d9b */
  if (!C.zf) goto L_11f55d9b;
L_11f55d4f:;
  /* 11f55d4f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55d51 jne 0x11f55d5f */
  if (!C.zf) goto L_11f55d5f;
  /* 11f55d53 call dword ptr [0x11f5c0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0dc))), 0x11f55d59u);
  /* 11f55d59 mov edi, eax */
  EDI = (EAX);
  /* 11f55d5b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55d5d je 0x11f55d9b */
  if (C.zf) goto L_11f55d9b;
L_11f55d5f:;
  /* 11f55d5f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55d61 mov eax, edi */
  EAX = (EDI);
  /* 11f55d63 je 0x11f55d6f */
  if (C.zf) goto L_11f55d6f;
L_11f55d65:;
  /* 11f55d65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55d66 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55d68 jne 0x11f55d65 */
  if (!C.zf) goto L_11f55d65;
  /* 11f55d6a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55d6b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55d6d jne 0x11f55d65 */
  if (!C.zf) goto L_11f55d65;
L_11f55d6f:;
  /* 11f55d6f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f55d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55d72 mov ebp, eax */
  EBP = (EAX);
  /* 11f55d74 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55d75 call 0x11f54cc3 */
  push32(0x11f55d7au); f_11f54cc3();
  /* 11f55d7a mov esi, eax */
  ESI = (EAX);
  /* 11f55d7c pop ecx */
  ECX = (pop32());
  /* 11f55d7d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55d7f jne 0x11f55d85 */
  if (!C.zf) goto L_11f55d85;
  /* 11f55d81 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f55d83 jmp 0x11f55d90 */
  goto L_11f55d90;
L_11f55d85:;
  /* 11f55d85 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55d86 push edi */
  push32((uint32_t)(EDI));
  /* 11f55d87 push esi */
  push32((uint32_t)(ESI));
  /* 11f55d88 call 0x11f59570 */
  push32(0x11f55d8du); f_11f59570();
  /* 11f55d8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f55d90:;
  /* 11f55d90 push edi */
  push32((uint32_t)(EDI));
  /* 11f55d91 call dword ptr [0x11f5c0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0e4))), 0x11f55d97u);
  /* 11f55d97 mov eax, esi */
  EAX = (ESI);
  /* 11f55d99 jmp 0x11f55d9d */
  goto L_11f55d9d;
L_11f55d9b:;
  /* 11f55d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f55d9d:;
  /* 11f55d9d pop edi */
  EDI = (pop32());
  /* 11f55d9e pop esi */
  ESI = (pop32());
  /* 11f55d9f pop ebp */
  EBP = (pop32());
  /* 11f55da0 pop ebx */
  EBX = (pop32());
  /* 11f55da1 pop ecx */
  ECX = (pop32());
  /* 11f55da2 pop ecx */
  ECX = (pop32());
  /* 11f55da3 ret  */
  ESPCHK(0x11f55c72u, _esp0);
  ESP += 4; return;
}

/* FUN_10005da4 @ 0x11f55da4 (45 bytes, 17 insns) */
void f_11f55da4(void) {
  FTRACE(0x11f55da4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55da4 push esi */
  push32((uint32_t)(ESI));
  /* 11f55da5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f55da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55dab and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f55dae call dword ptr [0x11f5c0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0bc))), 0x11f55db4u);
  /* 11f55db4 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f55db9 jne 0x11f55dcf */
  if (!C.zf) goto L_11f55dcf;
  /* 11f55dbb mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11f55dbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f55dc0 je 0x11f55dcf */
  if (C.zf) goto L_11f55dcf;
  /* 11f55dc2 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55dc4 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11f55dc7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11f55dc9 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11f55dcc mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11f55dcf:;
  /* 11f55dcf pop esi */
  ESI = (pop32());
  /* 11f55dd0 ret  */
  ESPCHK(0x11f55da4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd1 @ 0x11f55dd1 (328 bytes, 115 insns) */
void f_11f55dd1(void) {
  FTRACE(0x11f55dd1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55dd1 push ebp */
  push32((uint32_t)(EBP));
  /* 11f55dd2 mov ebp, esp */
  EBP = (ESP);
  /* 11f55dd4 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11f55dd9 call 0x11f59c60 */
  push32(0x11f55ddeu); f_11f59c60();
  /* 11f55dde lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11f55de4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55de5 push eax */
  push32((uint32_t)(EAX));
  /* 11f55de6 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11f55df0 call dword ptr [0x11f5c0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0f8))), 0x11f55df6u);
  /* 11f55df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55df8 je 0x11f55e14 */
  if (C.zf) goto L_11f55e14;
  /* 11f55dfa cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55e01 jne 0x11f55e14 */
  if (!C.zf) goto L_11f55e14;
  /* 11f55e03 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55e0a jb 0x11f55e14 */
  if (C.cf) goto L_11f55e14;
  /* 11f55e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f55e0e pop eax */
  EAX = (pop32());
  /* 11f55e0f jmp 0x11f55f16 */
  goto L_11f55f16;
L_11f55e14:;
  /* 11f55e14 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11f55e1a push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11f55e1f push eax */
  push32((uint32_t)(EAX));
  /* 11f55e20 push 0x11f5c320 */
  push32((uint32_t)(0x11f5c320u));
  /* 11f55e25 call dword ptr [0x11f5c0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0f4))), 0x11f55e2bu);
  /* 11f55e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55e2d je 0x11f55f03 */
  if (C.zf) goto L_11f55f03;
  /* 11f55e33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f55e35 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11f55e3b cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55e41 je 0x11f55e56 */
  if (C.zf) goto L_11f55e56;
L_11f55e43:;
  /* 11f55e43 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f55e45 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55e47 jl 0x11f55e51 */
  if ((C.sf!=C.of)) goto L_11f55e51;
  /* 11f55e49 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55e4b jg 0x11f55e51 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f55e51;
  /* 11f55e4d sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f55e4f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11f55e51:;
  /* 11f55e51 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f55e52 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55e54 jne 0x11f55e43 */
  if (!C.zf) goto L_11f55e43;
L_11f55e56:;
  /* 11f55e56 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11f55e5c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f55e5e push eax */
  push32((uint32_t)(EAX));
  /* 11f55e5f push 0x11f5c308 */
  push32((uint32_t)(0x11f5c308u));
  /* 11f55e64 call 0x11f59c20 */
  push32(0x11f55e69u); f_11f59c20();
  /* 11f55e69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55e6e jne 0x11f55e78 */
  if (!C.zf) goto L_11f55e78;
  /* 11f55e70 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11f55e76 jmp 0x11f55ec1 */
  goto L_11f55ec1;
L_11f55e78:;
  /* 11f55e78 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11f55e7e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f55e83 push eax */
  push32((uint32_t)(EAX));
  /* 11f55e84 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55e85 call dword ptr [0x11f5c0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0e0))), 0x11f55e8bu);
  /* 11f55e8b cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55e91 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11f55e97 je 0x11f55eac */
  if (C.zf) goto L_11f55eac;
L_11f55e99:;
  /* 11f55e99 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f55e9b cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55e9d jl 0x11f55ea7 */
  if ((C.sf!=C.of)) goto L_11f55ea7;
  /* 11f55e9f cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55ea1 jg 0x11f55ea7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f55ea7;
  /* 11f55ea3 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f55ea5 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11f55ea7:;
  /* 11f55ea7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f55ea8 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55eaa jne 0x11f55e99 */
  if (!C.zf) goto L_11f55e99;
L_11f55eac:;
  /* 11f55eac lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11f55eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11f55eb3 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11f55eb9 push eax */
  push32((uint32_t)(EAX));
  /* 11f55eba call 0x11f59ba0 */
  push32(0x11f55ebfu); f_11f59ba0();
  /* 11f55ebf pop ecx */
  ECX = (pop32());
  /* 11f55ec0 pop ecx */
  ECX = (pop32());
L_11f55ec1:;
  /* 11f55ec1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55ec3 je 0x11f55f03 */
  if (C.zf) goto L_11f55f03;
  /* 11f55ec5 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11f55ec7 push eax */
  push32((uint32_t)(EAX));
  /* 11f55ec8 call 0x11f59ae0 */
  push32(0x11f55ecdu); f_11f59ae0();
  /* 11f55ecd pop ecx */
  ECX = (pop32());
  /* 11f55ece cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55ed0 pop ecx */
  ECX = (pop32());
  /* 11f55ed1 je 0x11f55f03 */
  if (C.zf) goto L_11f55f03;
  /* 11f55ed3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f55ed4 mov ecx, eax */
  ECX = (EAX);
  /* 11f55ed6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55ed8 je 0x11f55ee8 */
  if (C.zf) goto L_11f55ee8;
L_11f55eda:;
  /* 11f55eda cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55edd jne 0x11f55ee3 */
  if (!C.zf) goto L_11f55ee3;
  /* 11f55edf mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11f55ee1 jmp 0x11f55ee4 */
  goto L_11f55ee4;
L_11f55ee3:;
  /* 11f55ee3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11f55ee4:;
  /* 11f55ee4 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55ee6 jne 0x11f55eda */
  if (!C.zf) goto L_11f55eda;
L_11f55ee8:;
  /* 11f55ee8 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f55eea push ebx */
  push32((uint32_t)(EBX));
  /* 11f55eeb push eax */
  push32((uint32_t)(EAX));
  /* 11f55eec call 0x11f598a5 */
  push32(0x11f55ef1u); f_11f598a5();
  /* 11f55ef1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55ef4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55ef7 je 0x11f55f16 */
  if (C.zf) goto L_11f55f16;
  /* 11f55ef9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55efc je 0x11f55f16 */
  if (C.zf) goto L_11f55f16;
  /* 11f55efe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55f01 je 0x11f55f16 */
  if (C.zf) goto L_11f55f16;
L_11f55f03:;
  /* 11f55f03 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f55f06 push eax */
  push32((uint32_t)(EAX));
  /* 11f55f07 call 0x11f55da4 */
  push32(0x11f55f0cu); f_11f55da4();
  /* 11f55f0c cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f55f10 pop ecx */
  ECX = (pop32());
  /* 11f55f11 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f55f13 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f55f16:;
  /* 11f55f16 pop ebx */
  EBX = (pop32());
  /* 11f55f17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f55f18 ret  */
  ESPCHK(0x11f55dd1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f19 @ 0x11f55f19 (93 bytes, 30 insns) */
void f_11f55f19(void) {
  FTRACE(0x11f55f19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55f19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55f1d cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55f21 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f55f26 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f55f29 push eax */
  push32((uint32_t)(EAX));
  /* 11f55f2a call dword ptr [0x11f5c0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0b0))), 0x11f55f30u);
  /* 11f55f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55f32 mov dword ptr [0x11f630e4], eax */
  w32((uint32_t)(0x11f630e4), (EAX));
  /* 11f55f37 je 0x11f55f6f */
  if (C.zf) goto L_11f55f6f;
  /* 11f55f39 call 0x11f55dd1 */
  push32(0x11f55f3eu); f_11f55dd1();
  /* 11f55f3e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55f41 mov dword ptr [0x11f630e8], eax */
  w32((uint32_t)(0x11f630e8), (EAX));
  /* 11f55f46 jne 0x11f55f55 */
  if (!C.zf) goto L_11f55f55;
  /* 11f55f48 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11f55f4d call 0x11f569b4 */
  push32(0x11f55f52u); f_11f569b4();
  /* 11f55f52 pop ecx */
  ECX = (pop32());
  /* 11f55f53 jmp 0x11f55f5f */
  goto L_11f55f5f;
L_11f55f55:;
  /* 11f55f55 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55f58 jne 0x11f55f72 */
  if (!C.zf) goto L_11f55f72;
  /* 11f55f5a call 0x11f574fb */
  push32(0x11f55f5fu); f_11f574fb();
L_11f55f5f:;
  /* 11f55f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55f61 jne 0x11f55f72 */
  if (!C.zf) goto L_11f55f72;
  /* 11f55f63 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f55f69 call dword ptr [0x11f5c0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0fc))), 0x11f55f6fu);
L_11f55f6f:;
  /* 11f55f6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f55f71 ret  */
  ESPCHK(0x11f55f19u, _esp0);
  ESP += 4; return;
L_11f55f72:;
  /* 11f55f72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f55f74 pop eax */
  EAX = (pop32());
  /* 11f55f75 ret  */
  ESPCHK(0x11f55f19u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f76 @ 0x11f55f76 (168 bytes, 56 insns) */
void f_11f55f76(void) {
  FTRACE(0x11f55f76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f55f76 mov eax, dword ptr [0x11f630e8] */
  EAX = (r32((uint32_t)(0x11f630e8)));
  /* 11f55f7b push esi */
  push32((uint32_t)(ESI));
  /* 11f55f7c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55f7f push edi */
  push32((uint32_t)(EDI));
  /* 11f55f80 jne 0x11f55fe8 */
  if (!C.zf) goto L_11f55fe8;
  /* 11f55f82 push ebx */
  push32((uint32_t)(EBX));
  /* 11f55f83 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f55f85 cmp dword ptr [0x11f630d8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f630d8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55f8b push ebp */
  push32((uint32_t)(EBP));
  /* 11f55f8c mov ebp, dword ptr [0x11f5c0a0] */
  EBP = (r32((uint32_t)(0x11f5c0a0)));
  /* 11f55f92 jle 0x11f55fd4 */
  if ((C.zf||C.sf!=C.of)) goto L_11f55fd4;
  /* 11f55f94 mov eax, dword ptr [0x11f630dc] */
  EAX = (r32((uint32_t)(0x11f630dc)));
  /* 11f55f99 mov edi, dword ptr [0x11f5c068] */
  EDI = (r32((uint32_t)(0x11f5c068)));
  /* 11f55f9f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11f55fa2:;
  /* 11f55fa2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f55fa7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f55fac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f55fae call edi */
  call_ind((uint32_t)(EDI), 0x11f55fb0u);
  /* 11f55fb0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f55fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55fb7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f55fb9 call edi */
  call_ind((uint32_t)(EDI), 0x11f55fbbu);
  /* 11f55fbb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11f55fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55fc0 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f55fc6 call ebp */
  call_ind((uint32_t)(EBP), 0x11f55fc8u);
  /* 11f55fc8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f55fcb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f55fcc cmp ebx, dword ptr [0x11f630d8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f630d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55fd2 jl 0x11f55fa2 */
  if ((C.sf!=C.of)) goto L_11f55fa2;
L_11f55fd4:;
  /* 11f55fd4 push dword ptr [0x11f630dc] */
  push32((uint32_t)(r32((uint32_t)(0x11f630dc))));
  /* 11f55fda push 0 */
  push32((uint32_t)(0x0u));
  /* 11f55fdc push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f55fe2 call ebp */
  call_ind((uint32_t)(EBP), 0x11f55fe4u);
  /* 11f55fe4 pop ebp */
  EBP = (pop32());
  /* 11f55fe5 pop ebx */
  EBX = (pop32());
  /* 11f55fe6 jmp 0x11f5600f */
  goto L_11f5600f;
L_11f55fe8:;
  /* 11f55fe8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f55feb jne 0x11f5600f */
  if (!C.zf) goto L_11f5600f;
  /* 11f55fed mov edi, 0x11f5fcb8 */
  EDI = (0x11f5fcb8u);
  /* 11f55ff2 mov esi, edi */
  ESI = (EDI);
L_11f55ff4:;
  /* 11f55ff4 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f55ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f55ff9 je 0x11f56009 */
  if (C.zf) goto L_11f56009;
  /* 11f55ffb push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f56000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f56002 push eax */
  push32((uint32_t)(EAX));
  /* 11f56003 call dword ptr [0x11f5c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c068))), 0x11f56009u);
L_11f56009:;
  /* 11f56009 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11f5600b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5600d jne 0x11f55ff4 */
  if (!C.zf) goto L_11f55ff4;
L_11f5600f:;
  /* 11f5600f push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f56015 call dword ptr [0x11f5c0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0fc))), 0x11f5601bu);
  /* 11f5601b pop edi */
  EDI = (pop32());
  /* 11f5601c pop esi */
  ESI = (pop32());
  /* 11f5601d ret  */
  ESPCHK(0x11f55f76u, _esp0);
  ESP += 4; return;
}

/* FUN_1000601e @ 0x11f5601e (57 bytes, 18 insns) */
void f_11f5601e(void) {
  FTRACE(0x11f5601eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5601e mov eax, dword ptr [0x11f62b34] */
  EAX = (r32((uint32_t)(0x11f62b34)));
  /* 11f56023 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56026 je 0x11f56035 */
  if (C.zf) goto L_11f56035;
  /* 11f56028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5602a jne 0x11f56056 */
  if (!C.zf) goto L_11f56056;
  /* 11f5602c cmp dword ptr [0x11f62b38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62b38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56033 jne 0x11f56056 */
  if (!C.zf) goto L_11f56056;
L_11f56035:;
  /* 11f56035 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11f5603a call 0x11f56057 */
  push32(0x11f5603fu); f_11f56057();
  /* 11f5603f mov eax, dword ptr [0x11f62c94] */
  EAX = (r32((uint32_t)(0x11f62c94)));
  /* 11f56044 pop ecx */
  ECX = (pop32());
  /* 11f56045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f56047 je 0x11f5604b */
  if (C.zf) goto L_11f5604b;
  /* 11f56049 call eax */
  call_ind((uint32_t)(EAX), 0x11f5604bu);
L_11f5604b:;
  /* 11f5604b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f56050 call 0x11f56057 */
  push32(0x11f56055u); f_11f56057();
  /* 11f56055 pop ecx */
  ECX = (pop32());
L_11f56056:;
  /* 11f56056 ret  */
  ESPCHK(0x11f5601eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006057 @ 0x11f56057 (339 bytes, 100 insns) */
void f_11f56057(void) {
  FTRACE(0x11f56057u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56057 push ebp */
  push32((uint32_t)(EBP));
  /* 11f56058 mov ebp, esp */
  EBP = (ESP);
  /* 11f5605a sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56063 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f56065 mov eax, 0x11f5f9c0 */
  EAX = (0x11f5f9c0u);
L_11f5606a:;
  /* 11f5606a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5606c je 0x11f56079 */
  if (C.zf) goto L_11f56079;
  /* 11f5606e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56071 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f56072 cmp eax, 0x11f5fa50 */
  { uint32_t _a=(EAX),_b=(0x11f5fa50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56077 jl 0x11f5606a */
  if ((C.sf!=C.of)) goto L_11f5606a;
L_11f56079:;
  /* 11f56079 push esi */
  push32((uint32_t)(ESI));
  /* 11f5607a mov esi, ecx */
  ESI = (ECX);
  /* 11f5607c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11f5607f cmp edx, dword ptr [esi + 0x11f5f9c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11f5f9c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56085 jne 0x11f561a7 */
  if (!C.zf) goto L_11f561a7;
  /* 11f5608b mov eax, dword ptr [0x11f62b34] */
  EAX = (r32((uint32_t)(0x11f62b34)));
  /* 11f56090 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56093 je 0x11f56181 */
  if (C.zf) goto L_11f56181;
  /* 11f56099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5609b jne 0x11f560aa */
  if (!C.zf) goto L_11f560aa;
  /* 11f5609d cmp dword ptr [0x11f62b38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62b38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f560a4 je 0x11f56181 */
  if (C.zf) goto L_11f56181;
L_11f560aa:;
  /* 11f560aa cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f560b0 je 0x11f561a7 */
  if (C.zf) goto L_11f561a7;
  /* 11f560b6 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f560bc push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f560c1 push eax */
  push32((uint32_t)(EAX));
  /* 11f560c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f560c4 call dword ptr [0x11f5c0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0e0))), 0x11f560cau);
  /* 11f560ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f560cc jne 0x11f560e1 */
  if (!C.zf) goto L_11f560e1;
  /* 11f560ce lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f560d4 push 0x11f5c60c */
  push32((uint32_t)(0x11f5c60cu));
  /* 11f560d9 push eax */
  push32((uint32_t)(EAX));
  /* 11f560da call 0x11f59020 */
  push32(0x11f560dfu); f_11f59020();
  /* 11f560df pop ecx */
  ECX = (pop32());
  /* 11f560e0 pop ecx */
  ECX = (pop32());
L_11f560e1:;
  /* 11f560e1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f560e7 push edi */
  push32((uint32_t)(EDI));
  /* 11f560e8 push eax */
  push32((uint32_t)(EAX));
  /* 11f560e9 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11f560ef call 0x11f58630 */
  push32(0x11f560f4u); f_11f58630();
  /* 11f560f4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f560f5 pop ecx */
  ECX = (pop32());
  /* 11f560f6 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f560f9 jbe 0x11f56124 */
  if ((C.cf||C.zf)) goto L_11f56124;
  /* 11f560fb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f56101 push eax */
  push32((uint32_t)(EAX));
  /* 11f56102 call 0x11f58630 */
  push32(0x11f56107u); f_11f58630();
  /* 11f56107 mov edi, eax */
  EDI = (EAX);
  /* 11f56109 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f5610f sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56112 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f56114 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56116 push 0x11f5c608 */
  push32((uint32_t)(0x11f5c608u));
  /* 11f5611b push edi */
  push32((uint32_t)(EDI));
  /* 11f5611c call 0x11f59d20 */
  push32(0x11f56121u); f_11f59d20();
  /* 11f56121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f56124:;
  /* 11f56124 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f5612a push 0x11f5c5ec */
  push32((uint32_t)(0x11f5c5ecu));
  /* 11f5612f push eax */
  push32((uint32_t)(EAX));
  /* 11f56130 call 0x11f59020 */
  push32(0x11f56135u); f_11f59020();
  /* 11f56135 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f5613b push edi */
  push32((uint32_t)(EDI));
  /* 11f5613c push eax */
  push32((uint32_t)(EAX));
  /* 11f5613d call 0x11f59030 */
  push32(0x11f56142u); f_11f59030();
  /* 11f56142 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f56148 push 0x11f5e240 */
  push32((uint32_t)(0x11f5e240u));
  /* 11f5614d push eax */
  push32((uint32_t)(EAX));
  /* 11f5614e call 0x11f59030 */
  push32(0x11f56153u); f_11f59030();
  /* 11f56153 push dword ptr [esi + 0x11f5f9c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11f5f9c4))));
  /* 11f56159 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f5615f push eax */
  push32((uint32_t)(EAX));
  /* 11f56160 call 0x11f59030 */
  push32(0x11f56165u); f_11f59030();
  /* 11f56165 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11f5616a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f56170 push 0x11f5c5c4 */
  push32((uint32_t)(0x11f5c5c4u));
  /* 11f56175 push eax */
  push32((uint32_t)(EAX));
  /* 11f56176 call 0x11f59c8f */
  push32(0x11f5617bu); f_11f59c8f();
  /* 11f5617b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5617e pop edi */
  EDI = (pop32());
  /* 11f5617f jmp 0x11f561a7 */
  goto L_11f561a7;
L_11f56181:;
  /* 11f56181 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f56184 lea esi, [esi + 0x11f5f9c4] */
  ESI = ((uint32_t)(ESI + 0x11f5f9c4));
  /* 11f5618a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5618c push eax */
  push32((uint32_t)(EAX));
  /* 11f5618d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f5618f call 0x11f58630 */
  push32(0x11f56194u); f_11f58630();
  /* 11f56194 pop ecx */
  ECX = (pop32());
  /* 11f56195 push eax */
  push32((uint32_t)(EAX));
  /* 11f56196 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f56198 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f5619a call dword ptr [0x11f5c0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0d0))), 0x11f561a0u);
  /* 11f561a0 push eax */
  push32((uint32_t)(EAX));
  /* 11f561a1 call dword ptr [0x11f5c064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c064))), 0x11f561a7u);
L_11f561a7:;
  /* 11f561a7 pop esi */
  ESI = (pop32());
  /* 11f561a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f561a9 ret  */
  ESPCHK(0x11f56057u, _esp0);
  ESP += 4; return;
}

/* FUN_100061aa @ 0x11f561aa (289 bytes, 98 insns) */
void f_11f561aa(void) {
  FTRACE(0x11f561aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f561aa push ebp */
  push32((uint32_t)(EBP));
  /* 11f561ab mov ebp, esp */
  EBP = (ESP);
  /* 11f561ad push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f561af push 0x11f5c628 */
  push32((uint32_t)(0x11f5c628u));
  /* 11f561b4 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f561b9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f561bf push eax */
  push32((uint32_t)(EAX));
  /* 11f561c0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f561c7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f561ca push ebx */
  push32((uint32_t)(EBX));
  /* 11f561cb push esi */
  push32((uint32_t)(ESI));
  /* 11f561cc push edi */
  push32((uint32_t)(EDI));
  /* 11f561cd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f561d0 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f561d4 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11f561d7 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11f561da cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f561dd ja 0x11f561f3 */
  if ((!C.cf&&!C.zf)) goto L_11f561f3;
  /* 11f561df xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f561e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f561e3 jne 0x11f561e8 */
  if (!C.zf) goto L_11f561e8;
  /* 11f561e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f561e7 pop esi */
  ESI = (pop32());
L_11f561e8:;
  /* 11f561e8 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f561eb and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f561ee mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11f561f1 jmp 0x11f561f5 */
  goto L_11f561f5;
L_11f561f3:;
  /* 11f561f3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f561f5:;
  /* 11f561f5 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11f561f8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f561fb ja 0x11f562a9 */
  if ((!C.cf&&!C.zf)) goto L_11f562a9;
  /* 11f56201 mov eax, dword ptr [0x11f630e8] */
  EAX = (r32((uint32_t)(0x11f630e8)));
  /* 11f56206 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56209 jne 0x11f5624c */
  if (!C.zf) goto L_11f5624c;
  /* 11f5620b mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f5620e cmp edi, dword ptr [0x11f630e0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11f630e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56214 ja 0x11f56292 */
  if ((!C.cf&&!C.zf)) goto L_11f56292;
  /* 11f56216 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f56218 call 0x11f5637c */
  push32(0x11f5621du); f_11f5637c();
  /* 11f5621d pop ecx */
  ECX = (pop32());
  /* 11f5621e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f56221 push edi */
  push32((uint32_t)(EDI));
  /* 11f56222 call 0x11f56d50 */
  push32(0x11f56227u); f_11f56d50();
  /* 11f56227 pop ecx */
  ECX = (pop32());
  /* 11f56228 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f5622b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5622f call 0x11f56243 */
  push32(0x11f56234u); f_11f56243();
  /* 11f56234 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56237 je 0x11f56297 */
  if (C.zf) goto L_11f56297;
  /* 11f56239 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f5623c jmp 0x11f56286 */
  goto L_11f56286;
  /* 11f5623e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f56240 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56243 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f56245 call 0x11f563dd */
  push32(0x11f5624au); f_11f563dd();
  /* 11f5624a pop ecx */
  ECX = (pop32());
  /* 11f5624b ret  */
  ESPCHK(0x11f561aau, _esp0);
  ESP += 4; return;
L_11f5624c:;
  /* 11f5624c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5624f jne 0x11f56292 */
  if (!C.zf) goto L_11f56292;
  /* 11f56251 cmp esi, dword ptr [0x11f61cdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f61cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56257 ja 0x11f56292 */
  if ((!C.cf&&!C.zf)) goto L_11f56292;
  /* 11f56259 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5625b call 0x11f5637c */
  push32(0x11f56260u); f_11f5637c();
  /* 11f56260 pop ecx */
  ECX = (pop32());
  /* 11f56261 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f56268 mov eax, esi */
  EAX = (ESI);
  /* 11f5626a shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f5626d push eax */
  push32((uint32_t)(EAX));
  /* 11f5626e call 0x11f577f3 */
  push32(0x11f56273u); f_11f577f3();
  /* 11f56273 pop ecx */
  ECX = (pop32());
  /* 11f56274 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f56277 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5627b call 0x11f562cc */
  push32(0x11f56280u); f_11f562cc();
  /* 11f56280 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56283 je 0x11f56297 */
  if (C.zf) goto L_11f56297;
  /* 11f56285 push esi */
  push32((uint32_t)(ESI));
L_11f56286:;
  /* 11f56286 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56287 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11f5628a call 0x11f59110 */
  push32(0x11f5628fu); f_11f59110();
  /* 11f5628f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f56292:;
  /* 11f56292 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56295 jne 0x11f562d5 */
  if (!C.zf) { jmp_ind(0x11f562d5u); return; }
L_11f56297:;
  /* 11f56297 push esi */
  push32((uint32_t)(ESI));
  /* 11f56298 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f5629a push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f562a0 call dword ptr [0x11f5c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a4))), 0x11f562a6u);
  /* 11f562a6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11f562a9:;
  /* 11f562a9 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f562ac jne 0x11f562d5 */
  if (!C.zf) { jmp_ind(0x11f562d5u); return; }
  /* 11f562ae cmp dword ptr [0x11f62dbc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62dbc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f562b4 je 0x11f562d5 */
  if (C.zf) { jmp_ind(0x11f562d5u); return; }
  /* 11f562b6 push esi */
  push32((uint32_t)(ESI));
  /* 11f562b7 call 0x11f5813c */
  push32(0x11f562bcu); f_11f5813c();
  /* 11f562bc pop ecx */
  ECX = (pop32());
  /* 11f562bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f562bf jne 0x11f561f5 */
  if (!C.zf) goto L_11f561f5;
  /* 11f562c5 jmp 0x11f562d8 */
  jmp_ind(0x11f562d8u); return;
  /* 11f562c7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10006243 @ 0x11f56243 (9 bytes, 4 insns) */
void f_11f56243(void) {
  FTRACE(0x11f56243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56243 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f56245 call 0x11f563dd */
  push32(0x11f5624au); f_11f563dd();
  /* 11f5624a pop ecx */
  ECX = (pop32());
  /* 11f5624b ret  */
  ESPCHK(0x11f56243u, _esp0);
  ESP += 4; return;
}

/* FUN_100062cc @ 0x11f562cc (9 bytes, 4 insns) */
void f_11f562cc(void) {
  FTRACE(0x11f562ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f562cc push 9 */
  push32((uint32_t)(0x9u));
  /* 11f562ce call 0x11f563dd */
  push32(0x11f562d3u); f_11f563dd();
  /* 11f562d3 pop ecx */
  ECX = (pop32());
  /* 11f562d4 ret  */
  ESPCHK(0x11f562ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100062e7 @ 0x11f562e7 (41 bytes, 12 insns) */
void f_11f562e7(void) {
  FTRACE(0x11f562e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f562e7 push esi */
  push32((uint32_t)(ESI));
  /* 11f562e8 mov esi, dword ptr [0x11f5c000] */
  ESI = (r32((uint32_t)(0x11f5c000)));
  /* 11f562ee push dword ptr [0x11f5fa94] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa94))));
  /* 11f562f4 call esi */
  call_ind((uint32_t)(ESI), 0x11f562f6u);
  /* 11f562f6 push dword ptr [0x11f5fa84] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa84))));
  /* 11f562fc call esi */
  call_ind((uint32_t)(ESI), 0x11f562feu);
  /* 11f562fe push dword ptr [0x11f5fa74] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa74))));
  /* 11f56304 call esi */
  call_ind((uint32_t)(ESI), 0x11f56306u);
  /* 11f56306 push dword ptr [0x11f5fa54] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa54))));
  /* 11f5630c call esi */
  call_ind((uint32_t)(ESI), 0x11f5630eu);
  /* 11f5630e pop esi */
  ESI = (pop32());
  /* 11f5630f ret  */
  ESPCHK(0x11f562e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006310 @ 0x11f56310 (108 bytes, 34 insns) */
void f_11f56310(void) {
  FTRACE(0x11f56310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56310 push esi */
  push32((uint32_t)(ESI));
  /* 11f56311 push edi */
  push32((uint32_t)(EDI));
  /* 11f56312 mov edi, dword ptr [0x11f5c0b4] */
  EDI = (r32((uint32_t)(0x11f5c0b4)));
  /* 11f56318 mov esi, 0x11f5fa50 */
  ESI = (0x11f5fa50u);
L_11f5631d:;
  /* 11f5631d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f5631f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f56321 je 0x11f5634e */
  if (C.zf) goto L_11f5634e;
  /* 11f56323 cmp esi, 0x11f5fa94 */
  { uint32_t _a=(ESI),_b=(0x11f5fa94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56329 je 0x11f5634e */
  if (C.zf) goto L_11f5634e;
  /* 11f5632b cmp esi, 0x11f5fa84 */
  { uint32_t _a=(ESI),_b=(0x11f5fa84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56331 je 0x11f5634e */
  if (C.zf) goto L_11f5634e;
  /* 11f56333 cmp esi, 0x11f5fa74 */
  { uint32_t _a=(ESI),_b=(0x11f5fa74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56339 je 0x11f5634e */
  if (C.zf) goto L_11f5634e;
  /* 11f5633b cmp esi, 0x11f5fa54 */
  { uint32_t _a=(ESI),_b=(0x11f5fa54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56341 je 0x11f5634e */
  if (C.zf) goto L_11f5634e;
  /* 11f56343 push eax */
  push32((uint32_t)(EAX));
  /* 11f56344 call edi */
  call_ind((uint32_t)(EDI), 0x11f56346u);
  /* 11f56346 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f56348 call 0x11f542bc */
  push32(0x11f5634du); f_11f542bc();
  /* 11f5634d pop ecx */
  ECX = (pop32());
L_11f5634e:;
  /* 11f5634e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56351 cmp esi, 0x11f5fb10 */
  { uint32_t _a=(ESI),_b=(0x11f5fb10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56357 jl 0x11f5631d */
  if ((C.sf!=C.of)) goto L_11f5631d;
  /* 11f56359 push dword ptr [0x11f5fa74] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa74))));
  /* 11f5635f call edi */
  call_ind((uint32_t)(EDI), 0x11f56361u);
  /* 11f56361 push dword ptr [0x11f5fa84] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa84))));
  /* 11f56367 call edi */
  call_ind((uint32_t)(EDI), 0x11f56369u);
  /* 11f56369 push dword ptr [0x11f5fa94] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa94))));
  /* 11f5636f call edi */
  call_ind((uint32_t)(EDI), 0x11f56371u);
  /* 11f56371 push dword ptr [0x11f5fa54] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fa54))));
  /* 11f56377 call edi */
  call_ind((uint32_t)(EDI), 0x11f56379u);
  /* 11f56379 pop edi */
  EDI = (pop32());
  /* 11f5637a pop esi */
  ESI = (pop32());
  /* 11f5637b ret  */
  ESPCHK(0x11f56310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000637c @ 0x11f5637c (97 bytes, 37 insns) */
void f_11f5637c(void) {
  FTRACE(0x11f5637cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5637c push ebp */
  push32((uint32_t)(EBP));
  /* 11f5637d mov ebp, esp */
  EBP = (ESP);
  /* 11f5637f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56382 push esi */
  push32((uint32_t)(ESI));
  /* 11f56383 cmp dword ptr [eax*4 + 0x11f5fa50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11f5fa50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5638b lea esi, [eax*4 + 0x11f5fa50] */
  ESI = ((uint32_t)(EAX*4 + 0x11f5fa50));
  /* 11f56392 jne 0x11f563d2 */
  if (!C.zf) goto L_11f563d2;
  /* 11f56394 push edi */
  push32((uint32_t)(EDI));
  /* 11f56395 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f56397 call 0x11f54cc3 */
  push32(0x11f5639cu); f_11f54cc3();
  /* 11f5639c mov edi, eax */
  EDI = (EAX);
  /* 11f5639e pop ecx */
  ECX = (pop32());
  /* 11f5639f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f563a1 jne 0x11f563ab */
  if (!C.zf) goto L_11f563ab;
  /* 11f563a3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f563a5 call 0x11f5403b */
  push32(0x11f563aau); f_11f5403b();
  /* 11f563aa pop ecx */
  ECX = (pop32());
L_11f563ab:;
  /* 11f563ab push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f563ad call 0x11f5637c */
  push32(0x11f563b2u); f_11f5637c();
  /* 11f563b2 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f563b5 pop ecx */
  ECX = (pop32());
  /* 11f563b6 push edi */
  push32((uint32_t)(EDI));
  /* 11f563b7 jne 0x11f563c3 */
  if (!C.zf) goto L_11f563c3;
  /* 11f563b9 call dword ptr [0x11f5c000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c000))), 0x11f563bfu);
  /* 11f563bf mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f563c1 jmp 0x11f563c9 */
  goto L_11f563c9;
L_11f563c3:;
  /* 11f563c3 call 0x11f542bc */
  push32(0x11f563c8u); f_11f542bc();
  /* 11f563c8 pop ecx */
  ECX = (pop32());
L_11f563c9:;
  /* 11f563c9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f563cb call 0x11f563dd */
  push32(0x11f563d0u); f_11f563dd();
  /* 11f563d0 pop ecx */
  ECX = (pop32());
  /* 11f563d1 pop edi */
  EDI = (pop32());
L_11f563d2:;
  /* 11f563d2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f563d4 call dword ptr [0x11f5c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a8))), 0x11f563dau);
  /* 11f563da pop esi */
  ESI = (pop32());
  /* 11f563db pop ebp */
  EBP = (pop32());
  /* 11f563dc ret  */
  ESPCHK(0x11f5637cu, _esp0);
  ESP += 4; return;
}

/* FUN_100063dd @ 0x11f563dd (21 bytes, 7 insns) */
void f_11f563dd(void) {
  FTRACE(0x11f563ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f563dd push ebp */
  push32((uint32_t)(EBP));
  /* 11f563de mov ebp, esp */
  EBP = (ESP);
  /* 11f563e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f563e3 push dword ptr [eax*4 + 0x11f5fa50] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11f5fa50))));
  /* 11f563ea call dword ptr [0x11f5c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0ac))), 0x11f563f0u);
  /* 11f563f0 pop ebp */
  EBP = (pop32());
  /* 11f563f1 ret  */
  ESPCHK(0x11f563ddu, _esp0);
  ESP += 4; return;
}

