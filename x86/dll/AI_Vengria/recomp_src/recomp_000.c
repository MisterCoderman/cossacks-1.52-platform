#include "recomp.h"

/* FUN_10001000 @ 0x10231000 (5627 bytes, 1465 insns) */
void f_10231000(void) {
  FTRACE(0x10231000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10231000 push esi */
  push32((uint32_t)(ESI));
  /* 10231001 push edi */
  push32((uint32_t)(EDI));
  /* 10231002 call 0x10232760 */
  push32(0x10231007u); f_10232760();
  /* 10231007 mov edx, eax */
  EDX = (EAX);
  /* 10231009 mov edi, 0x1023fe68 */
  EDI = (0x1023fe68u);
  /* 1023100e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10231011 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10231013 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10231016 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10231018 not ecx */
  ECX = (~(ECX));
  /* 1023101a sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023101c mov eax, ecx */
  EAX = (ECX);
  /* 1023101e mov esi, edi */
  ESI = (EDI);
  /* 10231020 mov edi, 0x10245ea8 */
  EDI = (0x10245ea8u);
  /* 10231025 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10231028 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023102a mov ecx, eax */
  ECX = (EAX);
  /* 1023102c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023102e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10231031 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10231033 mov ecx, edx */
  ECX = (EDX);
  /* 10231035 mov edi, 0x1023fe5c */
  EDI = (0x1023fe5cu);
  /* 1023103a and ecx, 6 */
  { uint32_t _r=(ECX)&(0x6u); ECX = (_r); fl_logic(_r,32); }
  /* 1023103d and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10231040 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10231043 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10231046 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10231048 not ecx */
  ECX = (~(ECX));
  /* 1023104a sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023104c mov eax, ecx */
  EAX = (ECX);
  /* 1023104e mov esi, edi */
  ESI = (EDI);
  /* 10231050 mov edi, 0x10246198 */
  EDI = (0x10246198u);
  /* 10231055 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10231058 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023105a mov ecx, eax */
  ECX = (EAX);
  /* 1023105c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1023105f cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10231062 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10231064 jne 0x10231088 */
  if (!C.zf) goto L_10231088;
  /* 10231066 mov edi, 0x1023fe4c */
  EDI = (0x1023fe4cu);
  /* 1023106b or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1023106e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10231070 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10231072 not ecx */
  ECX = (~(ECX));
  /* 10231074 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10231076 mov edx, ecx */
  EDX = (ECX);
  /* 10231078 mov esi, edi */
  ESI = (EDI);
  /* 1023107a mov edi, 0x10245fc8 */
  EDI = (0x10245fc8u);
  /* 1023107f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10231082 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10231084 mov ecx, edx */
  ECX = (EDX);
  /* 10231086 jmp 0x102310a8 */
  goto L_102310a8;
L_10231088:;
  /* 10231088 mov edi, 0x1023fe40 */
  EDI = (0x1023fe40u);
  /* 1023108d or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10231090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10231092 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10231094 not ecx */
  ECX = (~(ECX));
  /* 10231096 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10231098 mov eax, ecx */
  EAX = (ECX);
  /* 1023109a mov esi, edi */
  ESI = (EDI);
  /* 1023109c mov edi, 0x10245fc8 */
  EDI = (0x10245fc8u);
  /* 102310a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102310a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102310a6 mov ecx, eax */
  ECX = (EAX);
L_102310a8:;
  /* 102310a8 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 102310ad and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102310b0 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 102310b2 pop edi */
  EDI = (pop32());
  /* 102310b3 pop esi */
  ESI = (pop32());
  /* 102310b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102310b6 je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 102310bc push 0x1023fe34 */
  push32((uint32_t)(0x1023fe34u));
  /* 102310c1 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 102310c6 call eax */
  call_ind((uint32_t)(EAX), 0x102310c8u);
  /* 102310c8 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 102310cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102310d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102310d2 je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 102310d8 push 0x1023fe28 */
  push32((uint32_t)(0x1023fe28u));
  /* 102310dd push 0x10245f50 */
  push32((uint32_t)(0x10245f50u));
  /* 102310e2 call eax */
  call_ind((uint32_t)(EAX), 0x102310e4u);
  /* 102310e4 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 102310e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102310ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102310ee je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 102310f4 push 0x1023fe1c */
  push32((uint32_t)(0x1023fe1cu));
  /* 102310f9 push 0x10246078 */
  push32((uint32_t)(0x10246078u));
  /* 102310fe call eax */
  call_ind((uint32_t)(EAX), 0x10231100u);
  /* 10231100 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023110a je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 10231110 push 0x1023fe10 */
  push32((uint32_t)(0x1023fe10u));
  /* 10231115 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 1023111a call eax */
  call_ind((uint32_t)(EAX), 0x1023111cu);
  /* 1023111c mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231126 je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 1023112c push 0x1023fe04 */
  push32((uint32_t)(0x1023fe04u));
  /* 10231131 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10231136 call eax */
  call_ind((uint32_t)(EAX), 0x10231138u);
  /* 10231138 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 1023113d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231142 je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 10231144 push 0x1023fdf8 */
  push32((uint32_t)(0x1023fdf8u));
  /* 10231149 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 1023114e call eax */
  call_ind((uint32_t)(EAX), 0x10231150u);
  /* 10231150 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023115a je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 1023115c push 0x1023fdec */
  push32((uint32_t)(0x1023fdecu));
  /* 10231161 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10231166 call eax */
  call_ind((uint32_t)(EAX), 0x10231168u);
  /* 10231168 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 1023116d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231172 je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 10231174 push 0x1023fde0 */
  push32((uint32_t)(0x1023fde0u));
  /* 10231179 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 1023117e call eax */
  call_ind((uint32_t)(EAX), 0x10231180u);
  /* 10231180 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023118a je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 1023118c push 0x1023fdd4 */
  push32((uint32_t)(0x1023fdd4u));
  /* 10231191 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10231196 call eax */
  call_ind((uint32_t)(EAX), 0x10231198u);
  /* 10231198 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 1023119d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102311a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102311a2 je 0x102311b3 */
  if (C.zf) goto L_102311b3;
  /* 102311a4 push 0x1023fdc8 */
  push32((uint32_t)(0x1023fdc8u));
  /* 102311a9 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102311ae call eax */
  call_ind((uint32_t)(EAX), 0x102311b0u);
  /* 102311b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102311b3:;
  /* 102311b3 push 0x1023fdb4 */
  push32((uint32_t)(0x1023fdb4u));
  /* 102311b8 call dword ptr [0x102464e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464e0))), 0x102311beu);
  /* 102311be mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102311c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102311c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102311c9 je 0x102311f9 */
  if (C.zf) goto L_102311f9;
  /* 102311cb push 0x1023fdb4 */
  push32((uint32_t)(0x1023fdb4u));
  /* 102311d0 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 102311d5 call ecx */
  call_ind((uint32_t)(ECX), 0x102311d7u);
  /* 102311d7 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102311dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102311e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102311e2 je 0x102311f9 */
  if (C.zf) goto L_102311f9;
  /* 102311e4 push 0x1023fda8 */
  push32((uint32_t)(0x1023fda8u));
  /* 102311e9 push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 102311ee call ecx */
  call_ind((uint32_t)(ECX), 0x102311f0u);
  /* 102311f0 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102311f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102311f9:;
  /* 102311f9 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102311fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231200 je 0x1023121c */
  if (C.zf) goto L_1023121c;
  /* 10231202 push 0x1023fda0 */
  push32((uint32_t)(0x1023fda0u));
  /* 10231207 push 0x10246008 */
  push32((uint32_t)(0x10246008u));
  /* 1023120c call eax */
  call_ind((uint32_t)(EAX), 0x1023120eu);
  /* 1023120e mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 10231214 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023121c:;
  /* 1023121c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023121e je 0x1023123a */
  if (C.zf) goto L_1023123a;
  /* 10231220 push 0x1023fd94 */
  push32((uint32_t)(0x1023fd94u));
  /* 10231225 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 1023122a call ecx */
  call_ind((uint32_t)(ECX), 0x1023122cu);
  /* 1023122c mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 10231232 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023123a:;
  /* 1023123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023123c je 0x10231290 */
  if (C.zf) goto L_10231290;
  /* 1023123e push 0x1023fd8c */
  push32((uint32_t)(0x1023fd8cu));
  /* 10231243 push 0x10245fa8 */
  push32((uint32_t)(0x10245fa8u));
  /* 10231248 call eax */
  call_ind((uint32_t)(EAX), 0x1023124au);
  /* 1023124a mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023124f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231254 je 0x1023128a */
  if (C.zf) goto L_1023128a;
  /* 10231256 push 0x1023fd84 */
  push32((uint32_t)(0x1023fd84u));
  /* 1023125b push 0x10246000 */
  push32((uint32_t)(0x10246000u));
  /* 10231260 call eax */
  call_ind((uint32_t)(EAX), 0x10231262u);
  /* 10231262 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023126a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023126c je 0x1023128a */
  if (C.zf) goto L_1023128a;
  /* 1023126e push 0x1023fd7c */
  push32((uint32_t)(0x1023fd7cu));
  /* 10231273 push 0x10246010 */
  push32((uint32_t)(0x10246010u));
  /* 10231278 call eax */
  call_ind((uint32_t)(EAX), 0x1023127au);
  /* 1023127a mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 10231280 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231288 jmp 0x10231290 */
  goto L_10231290;
L_1023128a:;
  /* 1023128a mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
L_10231290:;
  /* 10231290 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10231292 je 0x102312f9 */
  if (C.zf) goto L_102312f9;
  /* 10231294 push 0x1023fd70 */
  push32((uint32_t)(0x1023fd70u));
  /* 10231299 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 1023129e call ecx */
  call_ind((uint32_t)(ECX), 0x102312a0u);
  /* 102312a0 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102312a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102312a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102312ab je 0x102312f4 */
  if (C.zf) goto L_102312f4;
  /* 102312ad push 0x10245ea8 */
  push32((uint32_t)(0x10245ea8u));
  /* 102312b2 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102312b7 call ecx */
  call_ind((uint32_t)(ECX), 0x102312b9u);
  /* 102312b9 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102312bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102312c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102312c4 je 0x102312f4 */
  if (C.zf) goto L_102312f4;
  /* 102312c6 push 0x1023fd64 */
  push32((uint32_t)(0x1023fd64u));
  /* 102312cb push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 102312d0 call ecx */
  call_ind((uint32_t)(ECX), 0x102312d2u);
  /* 102312d2 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102312d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102312db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102312dd je 0x102312f4 */
  if (C.zf) goto L_102312f4;
  /* 102312df push 0x1023fd50 */
  push32((uint32_t)(0x1023fd50u));
  /* 102312e4 push 0x10243680 */
  push32((uint32_t)(0x10243680u));
  /* 102312e9 call ecx */
  call_ind((uint32_t)(ECX), 0x102312ebu);
  /* 102312eb mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102312f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102312f4:;
  /* 102312f4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
L_102312f9:;
  /* 102312f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102312fb je 0x10231337 */
  if (C.zf) goto L_10231337;
  /* 102312fd push 0x1023fd38 */
  push32((uint32_t)(0x1023fd38u));
  /* 10231302 push 0x102461e0 */
  push32((uint32_t)(0x102461e0u));
  /* 10231307 call eax */
  call_ind((uint32_t)(EAX), 0x10231309u);
  /* 10231309 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023130e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231313 je 0x10231331 */
  if (C.zf) goto L_10231331;
  /* 10231315 push 0x1023fd20 */
  push32((uint32_t)(0x1023fd20u));
  /* 1023131a push 0x10245f48 */
  push32((uint32_t)(0x10245f48u));
  /* 1023131f call eax */
  call_ind((uint32_t)(EAX), 0x10231321u);
  /* 10231321 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 10231327 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023132c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023132f jmp 0x10231337 */
  goto L_10231337;
L_10231331:;
  /* 10231331 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
L_10231337:;
  /* 10231337 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10231339 je 0x10231355 */
  if (C.zf) goto L_10231355;
  /* 1023133b push 0x1023fd0c */
  push32((uint32_t)(0x1023fd0cu));
  /* 10231340 push 0x102435c0 */
  push32((uint32_t)(0x102435c0u));
  /* 10231345 call ecx */
  call_ind((uint32_t)(ECX), 0x10231347u);
  /* 10231347 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 1023134d mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10231355:;
  /* 10231355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231357 je 0x10231373 */
  if (C.zf) goto L_10231373;
  /* 10231359 push 0x1023fcf0 */
  push32((uint32_t)(0x1023fcf0u));
  /* 1023135e push 0x10246050 */
  push32((uint32_t)(0x10246050u));
  /* 10231363 call eax */
  call_ind((uint32_t)(EAX), 0x10231365u);
  /* 10231365 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 1023136b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10231373:;
  /* 10231373 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10231375 je 0x102313c3 */
  if (C.zf) goto L_102313c3;
  /* 10231377 push 0x1023fce4 */
  push32((uint32_t)(0x1023fce4u));
  /* 1023137c push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10231381 call ecx */
  call_ind((uint32_t)(ECX), 0x10231383u);
  /* 10231383 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 10231389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023138c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023138e je 0x102313be */
  if (C.zf) goto L_102313be;
  /* 10231390 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231395 push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 1023139a call ecx */
  call_ind((uint32_t)(ECX), 0x1023139cu);
  /* 1023139c mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102313a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102313a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102313a7 je 0x102313be */
  if (C.zf) goto L_102313be;
  /* 102313a9 push 0x1023fcd8 */
  push32((uint32_t)(0x1023fcd8u));
  /* 102313ae push 0x10243610 */
  push32((uint32_t)(0x10243610u));
  /* 102313b3 call ecx */
  call_ind((uint32_t)(ECX), 0x102313b5u);
  /* 102313b5 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 102313bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102313be:;
  /* 102313be mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
L_102313c3:;
  /* 102313c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102313c5 je 0x1023165d */
  if (C.zf) goto L_1023165d;
  /* 102313cb push 0x1023fcc4 */
  push32((uint32_t)(0x1023fcc4u));
  /* 102313d0 push 0x10243880 */
  push32((uint32_t)(0x10243880u));
  /* 102313d5 call eax */
  call_ind((uint32_t)(EAX), 0x102313d7u);
  /* 102313d7 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102313dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102313df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102313e1 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102313e7 push 0x1023fcb0 */
  push32((uint32_t)(0x1023fcb0u));
  /* 102313ec push 0x10243878 */
  push32((uint32_t)(0x10243878u));
  /* 102313f1 call eax */
  call_ind((uint32_t)(EAX), 0x102313f3u);
  /* 102313f3 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102313f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102313fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102313fd je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 10231403 push 0x1023fc9c */
  push32((uint32_t)(0x1023fc9cu));
  /* 10231408 push 0x10243870 */
  push32((uint32_t)(0x10243870u));
  /* 1023140d call eax */
  call_ind((uint32_t)(EAX), 0x1023140fu);
  /* 1023140f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231414 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231419 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023141f push 0x1023fc88 */
  push32((uint32_t)(0x1023fc88u));
  /* 10231424 push 0x102438b8 */
  push32((uint32_t)(0x102438b8u));
  /* 10231429 call eax */
  call_ind((uint32_t)(EAX), 0x1023142bu);
  /* 1023142b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231433 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231435 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023143b push 0x1023fc74 */
  push32((uint32_t)(0x1023fc74u));
  /* 10231440 push 0x102438a8 */
  push32((uint32_t)(0x102438a8u));
  /* 10231445 call eax */
  call_ind((uint32_t)(EAX), 0x10231447u);
  /* 10231447 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023144c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023144f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231451 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 10231457 push 0x1023fc60 */
  push32((uint32_t)(0x1023fc60u));
  /* 1023145c push 0x102438a0 */
  push32((uint32_t)(0x102438a0u));
  /* 10231461 call eax */
  call_ind((uint32_t)(EAX), 0x10231463u);
  /* 10231463 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023146b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023146d je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 10231473 push 0x1023fc4c */
  push32((uint32_t)(0x1023fc4cu));
  /* 10231478 push 0x10243658 */
  push32((uint32_t)(0x10243658u));
  /* 1023147d call eax */
  call_ind((uint32_t)(EAX), 0x1023147fu);
  /* 1023147f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231489 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023148f push 0x1023fc38 */
  push32((uint32_t)(0x1023fc38u));
  /* 10231494 push 0x10243648 */
  push32((uint32_t)(0x10243648u));
  /* 10231499 call eax */
  call_ind((uint32_t)(EAX), 0x1023149bu);
  /* 1023149b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102314a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102314a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102314a5 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102314ab push 0x1023fc24 */
  push32((uint32_t)(0x1023fc24u));
  /* 102314b0 push 0x10243840 */
  push32((uint32_t)(0x10243840u));
  /* 102314b5 call eax */
  call_ind((uint32_t)(EAX), 0x102314b7u);
  /* 102314b7 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102314bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102314bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102314c1 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102314c7 push 0x1023fc10 */
  push32((uint32_t)(0x1023fc10u));
  /* 102314cc push 0x10243838 */
  push32((uint32_t)(0x10243838u));
  /* 102314d1 call eax */
  call_ind((uint32_t)(EAX), 0x102314d3u);
  /* 102314d3 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102314d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102314db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102314dd je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102314e3 push 0x1023fbfc */
  push32((uint32_t)(0x1023fbfcu));
  /* 102314e8 push 0x10243830 */
  push32((uint32_t)(0x10243830u));
  /* 102314ed call eax */
  call_ind((uint32_t)(EAX), 0x102314efu);
  /* 102314ef mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102314f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102314f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102314f9 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102314ff push 0x1023fbe8 */
  push32((uint32_t)(0x1023fbe8u));
  /* 10231504 push 0x10243828 */
  push32((uint32_t)(0x10243828u));
  /* 10231509 call eax */
  call_ind((uint32_t)(EAX), 0x1023150bu);
  /* 1023150b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231515 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023151b push 0x1023fcc4 */
  push32((uint32_t)(0x1023fcc4u));
  /* 10231520 push 0x10243880 */
  push32((uint32_t)(0x10243880u));
  /* 10231525 call eax */
  call_ind((uint32_t)(EAX), 0x10231527u);
  /* 10231527 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023152c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023152f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231531 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 10231537 push 0x1023fcb0 */
  push32((uint32_t)(0x1023fcb0u));
  /* 1023153c push 0x10243878 */
  push32((uint32_t)(0x10243878u));
  /* 10231541 call eax */
  call_ind((uint32_t)(EAX), 0x10231543u);
  /* 10231543 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023154b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023154d je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 10231553 push 0x1023fc9c */
  push32((uint32_t)(0x1023fc9cu));
  /* 10231558 push 0x10243870 */
  push32((uint32_t)(0x10243870u));
  /* 1023155d call eax */
  call_ind((uint32_t)(EAX), 0x1023155fu);
  /* 1023155f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231569 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023156f push 0x1023fc88 */
  push32((uint32_t)(0x1023fc88u));
  /* 10231574 push 0x102438b8 */
  push32((uint32_t)(0x102438b8u));
  /* 10231579 call eax */
  call_ind((uint32_t)(EAX), 0x1023157bu);
  /* 1023157b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231585 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023158b push 0x1023fc74 */
  push32((uint32_t)(0x1023fc74u));
  /* 10231590 push 0x102438a8 */
  push32((uint32_t)(0x102438a8u));
  /* 10231595 call eax */
  call_ind((uint32_t)(EAX), 0x10231597u);
  /* 10231597 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023159c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023159f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102315a1 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102315a7 push 0x1023fc60 */
  push32((uint32_t)(0x1023fc60u));
  /* 102315ac push 0x102438a0 */
  push32((uint32_t)(0x102438a0u));
  /* 102315b1 call eax */
  call_ind((uint32_t)(EAX), 0x102315b3u);
  /* 102315b3 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102315b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102315bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102315bd je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102315c3 push 0x1023fc4c */
  push32((uint32_t)(0x1023fc4cu));
  /* 102315c8 push 0x10243658 */
  push32((uint32_t)(0x10243658u));
  /* 102315cd call eax */
  call_ind((uint32_t)(EAX), 0x102315cfu);
  /* 102315cf mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102315d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102315d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102315d9 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102315db push 0x1023fc38 */
  push32((uint32_t)(0x1023fc38u));
  /* 102315e0 push 0x10243648 */
  push32((uint32_t)(0x10243648u));
  /* 102315e5 call eax */
  call_ind((uint32_t)(EAX), 0x102315e7u);
  /* 102315e7 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102315ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102315ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102315f1 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 102315f3 push 0x1023fc24 */
  push32((uint32_t)(0x1023fc24u));
  /* 102315f8 push 0x10243840 */
  push32((uint32_t)(0x10243840u));
  /* 102315fd call eax */
  call_ind((uint32_t)(EAX), 0x102315ffu);
  /* 102315ff mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231609 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023160b push 0x1023fc10 */
  push32((uint32_t)(0x1023fc10u));
  /* 10231610 push 0x10243838 */
  push32((uint32_t)(0x10243838u));
  /* 10231615 call eax */
  call_ind((uint32_t)(EAX), 0x10231617u);
  /* 10231617 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023161c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023161f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231621 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 10231623 push 0x1023fbfc */
  push32((uint32_t)(0x1023fbfcu));
  /* 10231628 push 0x10243830 */
  push32((uint32_t)(0x10243830u));
  /* 1023162d call eax */
  call_ind((uint32_t)(EAX), 0x1023162fu);
  /* 1023162f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231639 je 0x10231657 */
  if (C.zf) goto L_10231657;
  /* 1023163b push 0x1023fbe8 */
  push32((uint32_t)(0x1023fbe8u));
  /* 10231640 push 0x10243828 */
  push32((uint32_t)(0x10243828u));
  /* 10231645 call eax */
  call_ind((uint32_t)(EAX), 0x10231647u);
  /* 10231647 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 1023164d mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231655 jmp 0x1023165d */
  goto L_1023165d;
L_10231657:;
  /* 10231657 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
L_1023165d:;
  /* 1023165d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023165f je 0x10231694 */
  if (C.zf) goto L_10231694;
  /* 10231661 push 0x1023fbdc */
  push32((uint32_t)(0x1023fbdcu));
  /* 10231666 push 0x102462b0 */
  push32((uint32_t)(0x102462b0u));
  /* 1023166b call ecx */
  call_ind((uint32_t)(ECX), 0x1023166du);
  /* 1023166d mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 10231673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231676 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10231678 je 0x1023168f */
  if (C.zf) goto L_1023168f;
  /* 1023167a push 0x1023fbcc */
  push32((uint32_t)(0x1023fbccu));
  /* 1023167f push 0x10243600 */
  push32((uint32_t)(0x10243600u));
  /* 10231684 call ecx */
  call_ind((uint32_t)(ECX), 0x10231686u);
  /* 10231686 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 1023168c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023168f:;
  /* 1023168f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
L_10231694:;
  /* 10231694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231696 je 0x1023192e */
  if (C.zf) goto L_1023192e;
  /* 1023169c push 0x1023fbb8 */
  push32((uint32_t)(0x1023fbb8u));
  /* 102316a1 push 0x102435d8 */
  push32((uint32_t)(0x102435d8u));
  /* 102316a6 call eax */
  call_ind((uint32_t)(EAX), 0x102316a8u);
  /* 102316a8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102316ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102316b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102316b2 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102316b8 push 0x1023fba0 */
  push32((uint32_t)(0x1023fba0u));
  /* 102316bd push 0x102435d0 */
  push32((uint32_t)(0x102435d0u));
  /* 102316c2 call eax */
  call_ind((uint32_t)(EAX), 0x102316c4u);
  /* 102316c4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102316c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102316cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102316ce je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102316d4 push 0x1023fb88 */
  push32((uint32_t)(0x1023fb88u));
  /* 102316d9 push 0x102435c8 */
  push32((uint32_t)(0x102435c8u));
  /* 102316de call eax */
  call_ind((uint32_t)(EAX), 0x102316e0u);
  /* 102316e0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102316e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102316e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102316ea je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102316f0 push 0x1023fb70 */
  push32((uint32_t)(0x1023fb70u));
  /* 102316f5 push 0x10246298 */
  push32((uint32_t)(0x10246298u));
  /* 102316fa call eax */
  call_ind((uint32_t)(EAX), 0x102316fcu);
  /* 102316fc mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231706 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 1023170c push 0x1023fb58 */
  push32((uint32_t)(0x1023fb58u));
  /* 10231711 push 0x10246290 */
  push32((uint32_t)(0x10246290u));
  /* 10231716 call eax */
  call_ind((uint32_t)(EAX), 0x10231718u);
  /* 10231718 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023171d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231722 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231728 push 0x1023fb40 */
  push32((uint32_t)(0x1023fb40u));
  /* 1023172d push 0x10246288 */
  push32((uint32_t)(0x10246288u));
  /* 10231732 call eax */
  call_ind((uint32_t)(EAX), 0x10231734u);
  /* 10231734 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023173c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023173e je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231744 push 0x1023fb2c */
  push32((uint32_t)(0x1023fb2cu));
  /* 10231749 push 0x10246310 */
  push32((uint32_t)(0x10246310u));
  /* 1023174e call eax */
  call_ind((uint32_t)(EAX), 0x10231750u);
  /* 10231750 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023175a je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231760 push 0x1023fb14 */
  push32((uint32_t)(0x1023fb14u));
  /* 10231765 push 0x10246308 */
  push32((uint32_t)(0x10246308u));
  /* 1023176a call eax */
  call_ind((uint32_t)(EAX), 0x1023176cu);
  /* 1023176c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231776 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 1023177c push 0x1023fafc */
  push32((uint32_t)(0x1023fafcu));
  /* 10231781 push 0x10246358 */
  push32((uint32_t)(0x10246358u));
  /* 10231786 call eax */
  call_ind((uint32_t)(EAX), 0x10231788u);
  /* 10231788 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023178d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231792 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231798 push 0x1023fae4 */
  push32((uint32_t)(0x1023fae4u));
  /* 1023179d push 0x10246350 */
  push32((uint32_t)(0x10246350u));
  /* 102317a2 call eax */
  call_ind((uint32_t)(EAX), 0x102317a4u);
  /* 102317a4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102317a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102317ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102317ae je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102317b4 push 0x1023facc */
  push32((uint32_t)(0x1023faccu));
  /* 102317b9 push 0x10246348 */
  push32((uint32_t)(0x10246348u));
  /* 102317be call eax */
  call_ind((uint32_t)(EAX), 0x102317c0u);
  /* 102317c0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102317c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102317c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102317ca je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102317d0 push 0x1023fab4 */
  push32((uint32_t)(0x1023fab4u));
  /* 102317d5 push 0x10246340 */
  push32((uint32_t)(0x10246340u));
  /* 102317da call eax */
  call_ind((uint32_t)(EAX), 0x102317dcu);
  /* 102317dc mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102317e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102317e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102317e6 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102317ec push 0x1023fbb8 */
  push32((uint32_t)(0x1023fbb8u));
  /* 102317f1 push 0x102435d8 */
  push32((uint32_t)(0x102435d8u));
  /* 102317f6 call eax */
  call_ind((uint32_t)(EAX), 0x102317f8u);
  /* 102317f8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102317fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231802 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231808 push 0x1023fba0 */
  push32((uint32_t)(0x1023fba0u));
  /* 1023180d push 0x102435d0 */
  push32((uint32_t)(0x102435d0u));
  /* 10231812 call eax */
  call_ind((uint32_t)(EAX), 0x10231814u);
  /* 10231814 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023181c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023181e je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231824 push 0x1023fb88 */
  push32((uint32_t)(0x1023fb88u));
  /* 10231829 push 0x102435c8 */
  push32((uint32_t)(0x102435c8u));
  /* 1023182e call eax */
  call_ind((uint32_t)(EAX), 0x10231830u);
  /* 10231830 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023183a je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231840 push 0x1023fb70 */
  push32((uint32_t)(0x1023fb70u));
  /* 10231845 push 0x10246298 */
  push32((uint32_t)(0x10246298u));
  /* 1023184a call eax */
  call_ind((uint32_t)(EAX), 0x1023184cu);
  /* 1023184c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231856 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 1023185c push 0x1023fb58 */
  push32((uint32_t)(0x1023fb58u));
  /* 10231861 push 0x10246290 */
  push32((uint32_t)(0x10246290u));
  /* 10231866 call eax */
  call_ind((uint32_t)(EAX), 0x10231868u);
  /* 10231868 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023186d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231872 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231878 push 0x1023fb40 */
  push32((uint32_t)(0x1023fb40u));
  /* 1023187d push 0x10246288 */
  push32((uint32_t)(0x10246288u));
  /* 10231882 call eax */
  call_ind((uint32_t)(EAX), 0x10231884u);
  /* 10231884 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023188c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023188e je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 10231894 push 0x1023fb2c */
  push32((uint32_t)(0x1023fb2cu));
  /* 10231899 push 0x10246310 */
  push32((uint32_t)(0x10246310u));
  /* 1023189e call eax */
  call_ind((uint32_t)(EAX), 0x102318a0u);
  /* 102318a0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102318a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102318a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102318aa je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102318ac push 0x1023fb14 */
  push32((uint32_t)(0x1023fb14u));
  /* 102318b1 push 0x10246308 */
  push32((uint32_t)(0x10246308u));
  /* 102318b6 call eax */
  call_ind((uint32_t)(EAX), 0x102318b8u);
  /* 102318b8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102318bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102318c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102318c2 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102318c4 push 0x1023fafc */
  push32((uint32_t)(0x1023fafcu));
  /* 102318c9 push 0x10246358 */
  push32((uint32_t)(0x10246358u));
  /* 102318ce call eax */
  call_ind((uint32_t)(EAX), 0x102318d0u);
  /* 102318d0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102318d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102318d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102318da je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102318dc push 0x1023fae4 */
  push32((uint32_t)(0x1023fae4u));
  /* 102318e1 push 0x10246350 */
  push32((uint32_t)(0x10246350u));
  /* 102318e6 call eax */
  call_ind((uint32_t)(EAX), 0x102318e8u);
  /* 102318e8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102318ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102318f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102318f2 je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 102318f4 push 0x1023facc */
  push32((uint32_t)(0x1023faccu));
  /* 102318f9 push 0x10246348 */
  push32((uint32_t)(0x10246348u));
  /* 102318fe call eax */
  call_ind((uint32_t)(EAX), 0x10231900u);
  /* 10231900 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023190a je 0x10231928 */
  if (C.zf) goto L_10231928;
  /* 1023190c push 0x1023fab4 */
  push32((uint32_t)(0x1023fab4u));
  /* 10231911 push 0x10246340 */
  push32((uint32_t)(0x10246340u));
  /* 10231916 call eax */
  call_ind((uint32_t)(EAX), 0x10231918u);
  /* 10231918 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
  /* 1023191e mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231926 jmp 0x1023192e */
  goto L_1023192e;
L_10231928:;
  /* 10231928 mov ecx, dword ptr [0x10246378] */
  ECX = (r32((uint32_t)(0x10246378)));
L_1023192e:;
  /* 1023192e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10231930 je 0x10231ada */
  if (C.zf) goto L_10231ada;
  /* 10231936 push 0x1023fa9c */
  push32((uint32_t)(0x1023fa9cu));
  /* 1023193b push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10231940 call ecx */
  call_ind((uint32_t)(ECX), 0x10231942u);
  /* 10231942 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023194a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023194c je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231952 push 0x1023fa88 */
  push32((uint32_t)(0x1023fa88u));
  /* 10231957 push 0x102460e0 */
  push32((uint32_t)(0x102460e0u));
  /* 1023195c call eax */
  call_ind((uint32_t)(EAX), 0x1023195eu);
  /* 1023195e mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231968 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 1023196e push 0x1023fa70 */
  push32((uint32_t)(0x1023fa70u));
  /* 10231973 push 0x102462a8 */
  push32((uint32_t)(0x102462a8u));
  /* 10231978 call eax */
  call_ind((uint32_t)(EAX), 0x1023197au);
  /* 1023197a mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 1023197f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231984 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 1023198a push 0x1023fa5c */
  push32((uint32_t)(0x1023fa5cu));
  /* 1023198f push 0x10243808 */
  push32((uint32_t)(0x10243808u));
  /* 10231994 call eax */
  call_ind((uint32_t)(EAX), 0x10231996u);
  /* 10231996 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 1023199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102319a0 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 102319a6 push 0x1023fa48 */
  push32((uint32_t)(0x1023fa48u));
  /* 102319ab push 0x10245f60 */
  push32((uint32_t)(0x10245f60u));
  /* 102319b0 call eax */
  call_ind((uint32_t)(EAX), 0x102319b2u);
  /* 102319b2 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 102319b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102319ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102319bc je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 102319c2 push 0x10245ea8 */
  push32((uint32_t)(0x10245ea8u));
  /* 102319c7 push 0x10245f00 */
  push32((uint32_t)(0x10245f00u));
  /* 102319cc call eax */
  call_ind((uint32_t)(EAX), 0x102319ceu);
  /* 102319ce mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 102319d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102319d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102319d8 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 102319de push 0x1023fa3c */
  push32((uint32_t)(0x1023fa3cu));
  /* 102319e3 push 0x102462f0 */
  push32((uint32_t)(0x102462f0u));
  /* 102319e8 call eax */
  call_ind((uint32_t)(EAX), 0x102319eau);
  /* 102319ea mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 102319ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102319f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102319f4 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 102319fa push 0x1023fa30 */
  push32((uint32_t)(0x1023fa30u));
  /* 102319ff push 0x102435e8 */
  push32((uint32_t)(0x102435e8u));
  /* 10231a04 call eax */
  call_ind((uint32_t)(EAX), 0x10231a06u);
  /* 10231a06 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231a10 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231a16 push 0x1023fa20 */
  push32((uint32_t)(0x1023fa20u));
  /* 10231a1b push 0x10243848 */
  push32((uint32_t)(0x10243848u));
  /* 10231a20 call eax */
  call_ind((uint32_t)(EAX), 0x10231a22u);
  /* 10231a22 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231a27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231a2c je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231a32 push 0x1023fa14 */
  push32((uint32_t)(0x1023fa14u));
  /* 10231a37 push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10231a3c call eax */
  call_ind((uint32_t)(EAX), 0x10231a3eu);
  /* 10231a3e mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231a43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231a48 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231a4e push 0x1023fe5c */
  push32((uint32_t)(0x1023fe5cu));
  /* 10231a53 push 0x10243810 */
  push32((uint32_t)(0x10243810u));
  /* 10231a58 call eax */
  call_ind((uint32_t)(EAX), 0x10231a5au);
  /* 10231a5a mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231a64 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231a66 push 0x1023fa08 */
  push32((uint32_t)(0x1023fa08u));
  /* 10231a6b push 0x10243868 */
  push32((uint32_t)(0x10243868u));
  /* 10231a70 call eax */
  call_ind((uint32_t)(EAX), 0x10231a72u);
  /* 10231a72 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231a77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231a7c je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231a7e push 0x1023f9fc */
  push32((uint32_t)(0x1023f9fcu));
  /* 10231a83 push 0x10245f10 */
  push32((uint32_t)(0x10245f10u));
  /* 10231a88 call eax */
  call_ind((uint32_t)(EAX), 0x10231a8au);
  /* 10231a8a mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231a94 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231a96 push 0x1023f9f0 */
  push32((uint32_t)(0x1023f9f0u));
  /* 10231a9b push 0x10246318 */
  push32((uint32_t)(0x10246318u));
  /* 10231aa0 call eax */
  call_ind((uint32_t)(EAX), 0x10231aa2u);
  /* 10231aa2 mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231aac je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231aae push 0x1023f9e4 */
  push32((uint32_t)(0x1023f9e4u));
  /* 10231ab3 push 0x10245f08 */
  push32((uint32_t)(0x10245f08u));
  /* 10231ab8 call eax */
  call_ind((uint32_t)(EAX), 0x10231abau);
  /* 10231aba mov eax, dword ptr [0x10246378] */
  EAX = (r32((uint32_t)(0x10246378)));
  /* 10231abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231ac4 je 0x10231ad5 */
  if (C.zf) goto L_10231ad5;
  /* 10231ac6 push 0x1023f9d4 */
  push32((uint32_t)(0x1023f9d4u));
  /* 10231acb push 0x10243820 */
  push32((uint32_t)(0x10243820u));
  /* 10231ad0 call eax */
  call_ind((uint32_t)(EAX), 0x10231ad2u);
  /* 10231ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10231ad5:;
  /* 10231ad5 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
L_10231ada:;
  /* 10231ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231adc je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231ae2 push 0x1023f9c0 */
  push32((uint32_t)(0x1023f9c0u));
  /* 10231ae7 push 0x102462f8 */
  push32((uint32_t)(0x102462f8u));
  /* 10231aec call eax */
  call_ind((uint32_t)(EAX), 0x10231aeeu);
  /* 10231aee mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231af8 je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231afe push 0x1023f9ac */
  push32((uint32_t)(0x1023f9acu));
  /* 10231b03 push 0x10246080 */
  push32((uint32_t)(0x10246080u));
  /* 10231b08 call eax */
  call_ind((uint32_t)(EAX), 0x10231b0au);
  /* 10231b0a mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231b14 je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231b1a push 0x1023f9a4 */
  push32((uint32_t)(0x1023f9a4u));
  /* 10231b1f push 0x102435e0 */
  push32((uint32_t)(0x102435e0u));
  /* 10231b24 call eax */
  call_ind((uint32_t)(EAX), 0x10231b26u);
  /* 10231b26 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231b30 je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231b36 push 0x1023f98c */
  push32((uint32_t)(0x1023f98cu));
  /* 10231b3b push 0x10246320 */
  push32((uint32_t)(0x10246320u));
  /* 10231b40 call eax */
  call_ind((uint32_t)(EAX), 0x10231b42u);
  /* 10231b42 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231b4c je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231b4e push 0x1023f974 */
  push32((uint32_t)(0x1023f974u));
  /* 10231b53 push 0x10246328 */
  push32((uint32_t)(0x10246328u));
  /* 10231b58 call eax */
  call_ind((uint32_t)(EAX), 0x10231b5au);
  /* 10231b5a mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231b64 je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231b66 push 0x1023f95c */
  push32((uint32_t)(0x1023f95cu));
  /* 10231b6b push 0x10246338 */
  push32((uint32_t)(0x10246338u));
  /* 10231b70 call eax */
  call_ind((uint32_t)(EAX), 0x10231b72u);
  /* 10231b72 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231b7c je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231b7e push 0x1023f944 */
  push32((uint32_t)(0x1023f944u));
  /* 10231b83 push 0x10246270 */
  push32((uint32_t)(0x10246270u));
  /* 10231b88 call eax */
  call_ind((uint32_t)(EAX), 0x10231b8au);
  /* 10231b8a mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231b94 je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231b96 push 0x1023f92c */
  push32((uint32_t)(0x1023f92cu));
  /* 10231b9b push 0x10246278 */
  push32((uint32_t)(0x10246278u));
  /* 10231ba0 call eax */
  call_ind((uint32_t)(EAX), 0x10231ba2u);
  /* 10231ba2 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231bac je 0x10231bbd */
  if (C.zf) goto L_10231bbd;
  /* 10231bae push 0x1023f914 */
  push32((uint32_t)(0x1023f914u));
  /* 10231bb3 push 0x10246280 */
  push32((uint32_t)(0x10246280u));
  /* 10231bb8 call eax */
  call_ind((uint32_t)(EAX), 0x10231bbau);
  /* 10231bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10231bbd:;
  /* 10231bbd push 0x1023f98c */
  push32((uint32_t)(0x1023f98cu));
  /* 10231bc2 push 0x102462d0 */
  push32((uint32_t)(0x102462d0u));
  /* 10231bc7 call 0x10232740 */
  push32(0x10231bccu); f_10232740();
  /* 10231bcc push 0x1023f974 */
  push32((uint32_t)(0x1023f974u));
  /* 10231bd1 push 0x102462d8 */
  push32((uint32_t)(0x102462d8u));
  /* 10231bd6 call 0x10232740 */
  push32(0x10231bdbu); f_10232740();
  /* 10231bdb push 0x1023f95c */
  push32((uint32_t)(0x1023f95cu));
  /* 10231be0 push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 10231be5 call 0x10232740 */
  push32(0x10231beau); f_10232740();
  /* 10231bea push 0x1023f8fc */
  push32((uint32_t)(0x1023f8fcu));
  /* 10231bef push 0x102462c8 */
  push32((uint32_t)(0x102462c8u));
  /* 10231bf4 call 0x10232740 */
  push32(0x10231bf9u); f_10232740();
  /* 10231bf9 push 0x1023f8e4 */
  push32((uint32_t)(0x1023f8e4u));
  /* 10231bfe push 0x102462e0 */
  push32((uint32_t)(0x102462e0u));
  /* 10231c03 call 0x10232740 */
  push32(0x10231c08u); f_10232740();
  /* 10231c08 push 0x1023f944 */
  push32((uint32_t)(0x1023f944u));
  /* 10231c0d push 0x10246218 */
  push32((uint32_t)(0x10246218u));
  /* 10231c12 call 0x10232740 */
  push32(0x10231c17u); f_10232740();
  /* 10231c17 push 0x1023f92c */
  push32((uint32_t)(0x1023f92cu));
  /* 10231c1c push 0x10246200 */
  push32((uint32_t)(0x10246200u));
  /* 10231c21 call 0x10232740 */
  push32(0x10231c26u); f_10232740();
  /* 10231c26 push 0x1023f914 */
  push32((uint32_t)(0x1023f914u));
  /* 10231c2b push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 10231c30 call 0x10232740 */
  push32(0x10231c35u); f_10232740();
  /* 10231c35 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231c38 push 0x1023f8cc */
  push32((uint32_t)(0x1023f8ccu));
  /* 10231c3d push 0x10246220 */
  push32((uint32_t)(0x10246220u));
  /* 10231c42 call 0x10232740 */
  push32(0x10231c47u); f_10232740();
  /* 10231c47 push 0x1023f8b4 */
  push32((uint32_t)(0x1023f8b4u));
  /* 10231c4c push 0x10246228 */
  push32((uint32_t)(0x10246228u));
  /* 10231c51 call 0x10232740 */
  push32(0x10231c56u); f_10232740();
  /* 10231c56 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231c5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231c60 je 0x10231ced */
  if (C.zf) goto L_10231ced;
  /* 10231c66 push 0x1023f8a0 */
  push32((uint32_t)(0x1023f8a0u));
  /* 10231c6b push 0x10243890 */
  push32((uint32_t)(0x10243890u));
  /* 10231c70 call eax */
  call_ind((uint32_t)(EAX), 0x10231c72u);
  /* 10231c72 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231c7c je 0x10231ced */
  if (C.zf) goto L_10231ced;
  /* 10231c7e push 0x1023f88c */
  push32((uint32_t)(0x1023f88cu));
  /* 10231c83 push 0x10243898 */
  push32((uint32_t)(0x10243898u));
  /* 10231c88 call eax */
  call_ind((uint32_t)(EAX), 0x10231c8au);
  /* 10231c8a mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231c8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231c94 je 0x10231ced */
  if (C.zf) goto L_10231ced;
  /* 10231c96 push 0x1023f878 */
  push32((uint32_t)(0x1023f878u));
  /* 10231c9b push 0x10243888 */
  push32((uint32_t)(0x10243888u));
  /* 10231ca0 call eax */
  call_ind((uint32_t)(EAX), 0x10231ca2u);
  /* 10231ca2 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231ca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231cac je 0x10231ced */
  if (C.zf) goto L_10231ced;
  /* 10231cae push 0x1023f864 */
  push32((uint32_t)(0x1023f864u));
  /* 10231cb3 push 0x10245ef8 */
  push32((uint32_t)(0x10245ef8u));
  /* 10231cb8 call eax */
  call_ind((uint32_t)(EAX), 0x10231cbau);
  /* 10231cba mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231cc4 je 0x10231ced */
  if (C.zf) goto L_10231ced;
  /* 10231cc6 push 0x1023f850 */
  push32((uint32_t)(0x1023f850u));
  /* 10231ccb push 0x10245ee8 */
  push32((uint32_t)(0x10245ee8u));
  /* 10231cd0 call eax */
  call_ind((uint32_t)(EAX), 0x10231cd2u);
  /* 10231cd2 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231cdc je 0x10231ced */
  if (C.zf) goto L_10231ced;
  /* 10231cde push 0x1023f83c */
  push32((uint32_t)(0x1023f83cu));
  /* 10231ce3 push 0x10245ef0 */
  push32((uint32_t)(0x10245ef0u));
  /* 10231ce8 call eax */
  call_ind((uint32_t)(EAX), 0x10231ceau);
  /* 10231cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10231ced:;
  /* 10231ced push 0x1023f834 */
  push32((uint32_t)(0x1023f834u));
  /* 10231cf2 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231cf7 call 0x10232fd0 */
  push32(0x10231cfcu); f_10232fd0();
  /* 10231cfc push eax */
  push32((uint32_t)(EAX));
  /* 10231cfd push 0x10245f98 */
  push32((uint32_t)(0x10245f98u));
  /* 10231d02 call 0x10232740 */
  push32(0x10231d07u); f_10232740();
  /* 10231d07 push 0x1023f82c */
  push32((uint32_t)(0x1023f82cu));
  /* 10231d0c push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231d11 call 0x10232fd0 */
  push32(0x10231d16u); f_10232fd0();
  /* 10231d16 push eax */
  push32((uint32_t)(EAX));
  /* 10231d17 push 0x10245f90 */
  push32((uint32_t)(0x10245f90u));
  /* 10231d1c call 0x10232740 */
  push32(0x10231d21u); f_10232740();
  /* 10231d21 push 0x1023f824 */
  push32((uint32_t)(0x1023f824u));
  /* 10231d26 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231d2b call 0x10232fd0 */
  push32(0x10231d30u); f_10232fd0();
  /* 10231d30 push eax */
  push32((uint32_t)(EAX));
  /* 10231d31 push 0x10245f88 */
  push32((uint32_t)(0x10245f88u));
  /* 10231d36 call 0x10232740 */
  push32(0x10231d3bu); f_10232740();
  /* 10231d3b push 0x1023f81c */
  push32((uint32_t)(0x1023f81cu));
  /* 10231d40 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231d45 call 0x10232fd0 */
  push32(0x10231d4au); f_10232fd0();
  /* 10231d4a push eax */
  push32((uint32_t)(EAX));
  /* 10231d4b push 0x10245f80 */
  push32((uint32_t)(0x10245f80u));
  /* 10231d50 call 0x10232740 */
  push32(0x10231d55u); f_10232740();
  /* 10231d55 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231d58 push 0x1023f814 */
  push32((uint32_t)(0x1023f814u));
  /* 10231d5d push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231d62 call 0x10232fd0 */
  push32(0x10231d67u); f_10232fd0();
  /* 10231d67 push eax */
  push32((uint32_t)(EAX));
  /* 10231d68 push 0x10245f78 */
  push32((uint32_t)(0x10245f78u));
  /* 10231d6d call 0x10232740 */
  push32(0x10231d72u); f_10232740();
  /* 10231d72 push 0x1023f80c */
  push32((uint32_t)(0x1023f80cu));
  /* 10231d77 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231d7c call 0x10232fd0 */
  push32(0x10231d81u); f_10232fd0();
  /* 10231d81 push eax */
  push32((uint32_t)(EAX));
  /* 10231d82 push 0x10245f70 */
  push32((uint32_t)(0x10245f70u));
  /* 10231d87 call 0x10232740 */
  push32(0x10231d8cu); f_10232740();
  /* 10231d8c push 0x1023f804 */
  push32((uint32_t)(0x1023f804u));
  /* 10231d91 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231d96 call 0x10232fd0 */
  push32(0x10231d9bu); f_10232fd0();
  /* 10231d9b push eax */
  push32((uint32_t)(EAX));
  /* 10231d9c push 0x102460b0 */
  push32((uint32_t)(0x102460b0u));
  /* 10231da1 call 0x10232740 */
  push32(0x10231da6u); f_10232740();
  /* 10231da6 push 0x1023f7fc */
  push32((uint32_t)(0x1023f7fcu));
  /* 10231dab push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231db0 call 0x10232fd0 */
  push32(0x10231db5u); f_10232fd0();
  /* 10231db5 push eax */
  push32((uint32_t)(EAX));
  /* 10231db6 push 0x102460a8 */
  push32((uint32_t)(0x102460a8u));
  /* 10231dbb call 0x10232740 */
  push32(0x10231dc0u); f_10232740();
  /* 10231dc0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231dc3 push 0x1023f7f4 */
  push32((uint32_t)(0x1023f7f4u));
  /* 10231dc8 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231dcd call 0x10232fd0 */
  push32(0x10231dd2u); f_10232fd0();
  /* 10231dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10231dd3 push 0x102460a0 */
  push32((uint32_t)(0x102460a0u));
  /* 10231dd8 call 0x10232740 */
  push32(0x10231dddu); f_10232740();
  /* 10231ddd push 0x1023f7ec */
  push32((uint32_t)(0x1023f7ecu));
  /* 10231de2 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231de7 call 0x10232fd0 */
  push32(0x10231decu); f_10232fd0();
  /* 10231dec push eax */
  push32((uint32_t)(EAX));
  /* 10231ded push 0x10246098 */
  push32((uint32_t)(0x10246098u));
  /* 10231df2 call 0x10232740 */
  push32(0x10231df7u); f_10232740();
  /* 10231df7 push 0x1023f7e4 */
  push32((uint32_t)(0x1023f7e4u));
  /* 10231dfc push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231e01 call 0x10232fd0 */
  push32(0x10231e06u); f_10232fd0();
  /* 10231e06 push eax */
  push32((uint32_t)(EAX));
  /* 10231e07 push 0x10246088 */
  push32((uint32_t)(0x10246088u));
  /* 10231e0c call 0x10232740 */
  push32(0x10231e11u); f_10232740();
  /* 10231e11 push 0x1023f7dc */
  push32((uint32_t)(0x1023f7dcu));
  /* 10231e16 push 0x10246198 */
  push32((uint32_t)(0x10246198u));
  /* 10231e1b call 0x10232fd0 */
  push32(0x10231e20u); f_10232fd0();
  /* 10231e20 push eax */
  push32((uint32_t)(EAX));
  /* 10231e21 push 0x102460d8 */
  push32((uint32_t)(0x102460d8u));
  /* 10231e26 call 0x10232740 */
  push32(0x10231e2bu); f_10232740();
  /* 10231e2b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231e30 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231e35 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231e3b push 0x1023f7c8 */
  push32((uint32_t)(0x1023f7c8u));
  /* 10231e40 push 0x10243638 */
  push32((uint32_t)(0x10243638u));
  /* 10231e45 call eax */
  call_ind((uint32_t)(EAX), 0x10231e47u);
  /* 10231e47 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231e51 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231e57 push 0x1023f7b4 */
  push32((uint32_t)(0x1023f7b4u));
  /* 10231e5c push 0x10243630 */
  push32((uint32_t)(0x10243630u));
  /* 10231e61 call eax */
  call_ind((uint32_t)(EAX), 0x10231e63u);
  /* 10231e63 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231e6d je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231e73 push 0x1023f7a0 */
  push32((uint32_t)(0x1023f7a0u));
  /* 10231e78 push 0x10243628 */
  push32((uint32_t)(0x10243628u));
  /* 10231e7d call eax */
  call_ind((uint32_t)(EAX), 0x10231e7fu);
  /* 10231e7f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231e89 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231e8f push 0x1023f78c */
  push32((uint32_t)(0x1023f78cu));
  /* 10231e94 push 0x10243620 */
  push32((uint32_t)(0x10243620u));
  /* 10231e99 call eax */
  call_ind((uint32_t)(EAX), 0x10231e9bu);
  /* 10231e9b mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231ea5 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231eab push 0x1023f778 */
  push32((uint32_t)(0x1023f778u));
  /* 10231eb0 push 0x102435f8 */
  push32((uint32_t)(0x102435f8u));
  /* 10231eb5 call eax */
  call_ind((uint32_t)(EAX), 0x10231eb7u);
  /* 10231eb7 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231ec1 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231ec7 push 0x1023f764 */
  push32((uint32_t)(0x1023f764u));
  /* 10231ecc push 0x102435f0 */
  push32((uint32_t)(0x102435f0u));
  /* 10231ed1 call eax */
  call_ind((uint32_t)(EAX), 0x10231ed3u);
  /* 10231ed3 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231ed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231edd je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231ee3 push 0x1023f750 */
  push32((uint32_t)(0x1023f750u));
  /* 10231ee8 push 0x102436c8 */
  push32((uint32_t)(0x102436c8u));
  /* 10231eed call eax */
  call_ind((uint32_t)(EAX), 0x10231eefu);
  /* 10231eef mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231ef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231ef7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231ef9 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231efb push 0x1023f73c */
  push32((uint32_t)(0x1023f73cu));
  /* 10231f00 push 0x102436c0 */
  push32((uint32_t)(0x102436c0u));
  /* 10231f05 call eax */
  call_ind((uint32_t)(EAX), 0x10231f07u);
  /* 10231f07 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231f0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231f11 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231f13 push 0x1023f728 */
  push32((uint32_t)(0x1023f728u));
  /* 10231f18 push 0x102436b8 */
  push32((uint32_t)(0x102436b8u));
  /* 10231f1d call eax */
  call_ind((uint32_t)(EAX), 0x10231f1fu);
  /* 10231f1f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231f29 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231f2b push 0x1023f714 */
  push32((uint32_t)(0x1023f714u));
  /* 10231f30 push 0x102436a0 */
  push32((uint32_t)(0x102436a0u));
  /* 10231f35 call eax */
  call_ind((uint32_t)(EAX), 0x10231f37u);
  /* 10231f37 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231f3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231f3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231f41 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231f43 push 0x1023f700 */
  push32((uint32_t)(0x1023f700u));
  /* 10231f48 push 0x10243698 */
  push32((uint32_t)(0x10243698u));
  /* 10231f4d call eax */
  call_ind((uint32_t)(EAX), 0x10231f4fu);
  /* 10231f4f mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10231f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10231f59 je 0x10231f6a */
  if (C.zf) goto L_10231f6a;
  /* 10231f5b push 0x1023f6ec */
  push32((uint32_t)(0x1023f6ecu));
  /* 10231f60 push 0x10243690 */
  push32((uint32_t)(0x10243690u));
  /* 10231f65 call eax */
  call_ind((uint32_t)(EAX), 0x10231f67u);
  /* 10231f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10231f6a:;
  /* 10231f6a push 0x1023f834 */
  push32((uint32_t)(0x1023f834u));
  /* 10231f6f push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10231f74 call 0x10232fd0 */
  push32(0x10231f79u); f_10232fd0();
  /* 10231f79 push eax */
  push32((uint32_t)(EAX));
  /* 10231f7a push 0x10243660 */
  push32((uint32_t)(0x10243660u));
  /* 10231f7f call 0x10232740 */
  push32(0x10231f84u); f_10232740();
  /* 10231f84 push 0x1023f82c */
  push32((uint32_t)(0x1023f82cu));
  /* 10231f89 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10231f8e call 0x10232fd0 */
  push32(0x10231f93u); f_10232fd0();
  /* 10231f93 push eax */
  push32((uint32_t)(EAX));
  /* 10231f94 push 0x10243668 */
  push32((uint32_t)(0x10243668u));
  /* 10231f99 call 0x10232740 */
  push32(0x10231f9eu); f_10232740();
  /* 10231f9e push 0x1023f824 */
  push32((uint32_t)(0x1023f824u));
  /* 10231fa3 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10231fa8 call 0x10232fd0 */
  push32(0x10231fadu); f_10232fd0();
  /* 10231fad push eax */
  push32((uint32_t)(EAX));
  /* 10231fae push 0x10243670 */
  push32((uint32_t)(0x10243670u));
  /* 10231fb3 call 0x10232740 */
  push32(0x10231fb8u); f_10232740();
  /* 10231fb8 push 0x1023f81c */
  push32((uint32_t)(0x1023f81cu));
  /* 10231fbd push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10231fc2 call 0x10232fd0 */
  push32(0x10231fc7u); f_10232fd0();
  /* 10231fc7 push eax */
  push32((uint32_t)(EAX));
  /* 10231fc8 push 0x10243678 */
  push32((uint32_t)(0x10243678u));
  /* 10231fcd call 0x10232740 */
  push32(0x10231fd2u); f_10232740();
  /* 10231fd2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10231fd5 push 0x1023f814 */
  push32((uint32_t)(0x1023f814u));
  /* 10231fda push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10231fdf call 0x10232fd0 */
  push32(0x10231fe4u); f_10232fd0();
  /* 10231fe4 push eax */
  push32((uint32_t)(EAX));
  /* 10231fe5 push 0x10243640 */
  push32((uint32_t)(0x10243640u));
  /* 10231fea call 0x10232740 */
  push32(0x10231fefu); f_10232740();
  /* 10231fef push 0x1023f80c */
  push32((uint32_t)(0x1023f80cu));
  /* 10231ff4 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10231ff9 call 0x10232fd0 */
  push32(0x10231ffeu); f_10232fd0();
  /* 10231ffe push eax */
  push32((uint32_t)(EAX));
  /* 10231fff push 0x10243650 */
  push32((uint32_t)(0x10243650u));
  /* 10232004 call 0x10232740 */
  push32(0x10232009u); f_10232740();
  /* 10232009 push 0x1023f804 */
  push32((uint32_t)(0x1023f804u));
  /* 1023200e push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10232013 call 0x10232fd0 */
  push32(0x10232018u); f_10232fd0();
  /* 10232018 push eax */
  push32((uint32_t)(EAX));
  /* 10232019 push 0x10243708 */
  push32((uint32_t)(0x10243708u));
  /* 1023201e call 0x10232740 */
  push32(0x10232023u); f_10232740();
  /* 10232023 push 0x1023f7fc */
  push32((uint32_t)(0x1023f7fcu));
  /* 10232028 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 1023202d call 0x10232fd0 */
  push32(0x10232032u); f_10232fd0();
  /* 10232032 push eax */
  push32((uint32_t)(EAX));
  /* 10232033 push 0x10243710 */
  push32((uint32_t)(0x10243710u));
  /* 10232038 call 0x10232740 */
  push32(0x1023203du); f_10232740();
  /* 1023203d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232040 push 0x1023f7f4 */
  push32((uint32_t)(0x1023f7f4u));
  /* 10232045 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 1023204a call 0x10232fd0 */
  push32(0x1023204fu); f_10232fd0();
  /* 1023204f push eax */
  push32((uint32_t)(EAX));
  /* 10232050 push 0x10243718 */
  push32((uint32_t)(0x10243718u));
  /* 10232055 call 0x10232740 */
  push32(0x1023205au); f_10232740();
  /* 1023205a push 0x1023f7ec */
  push32((uint32_t)(0x1023f7ecu));
  /* 1023205f push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10232064 call 0x10232fd0 */
  push32(0x10232069u); f_10232fd0();
  /* 10232069 push eax */
  push32((uint32_t)(EAX));
  /* 1023206a push 0x102436f0 */
  push32((uint32_t)(0x102436f0u));
  /* 1023206f call 0x10232740 */
  push32(0x10232074u); f_10232740();
  /* 10232074 push 0x1023f7e4 */
  push32((uint32_t)(0x1023f7e4u));
  /* 10232079 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 1023207e call 0x10232fd0 */
  push32(0x10232083u); f_10232fd0();
  /* 10232083 push eax */
  push32((uint32_t)(EAX));
  /* 10232084 push 0x102436f8 */
  push32((uint32_t)(0x102436f8u));
  /* 10232089 call 0x10232740 */
  push32(0x1023208eu); f_10232740();
  /* 1023208e push 0x1023f7dc */
  push32((uint32_t)(0x1023f7dcu));
  /* 10232093 push 0x10245fc8 */
  push32((uint32_t)(0x10245fc8u));
  /* 10232098 call 0x10232fd0 */
  push32(0x1023209du); f_10232fd0();
  /* 1023209d push eax */
  push32((uint32_t)(EAX));
  /* 1023209e push 0x10243700 */
  push32((uint32_t)(0x10243700u));
  /* 102320a3 call 0x10232740 */
  push32(0x102320a8u); f_10232740();
  /* 102320a8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102320ad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102320b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102320b2 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102320b8 push 0x1023f6dc */
  push32((uint32_t)(0x1023f6dcu));
  /* 102320bd push 0x10246158 */
  push32((uint32_t)(0x10246158u));
  /* 102320c2 call eax */
  call_ind((uint32_t)(EAX), 0x102320c4u);
  /* 102320c4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102320c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102320cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102320ce je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102320d4 push 0x1023f6c8 */
  push32((uint32_t)(0x1023f6c8u));
  /* 102320d9 push 0x10246150 */
  push32((uint32_t)(0x10246150u));
  /* 102320de call eax */
  call_ind((uint32_t)(EAX), 0x102320e0u);
  /* 102320e0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102320e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102320e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102320ea je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102320f0 push 0x1023f6b4 */
  push32((uint32_t)(0x1023f6b4u));
  /* 102320f5 push 0x10246120 */
  push32((uint32_t)(0x10246120u));
  /* 102320fa call eax */
  call_ind((uint32_t)(EAX), 0x102320fcu);
  /* 102320fc mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232106 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 1023210c push 0x1023f6a0 */
  push32((uint32_t)(0x1023f6a0u));
  /* 10232111 push 0x10246118 */
  push32((uint32_t)(0x10246118u));
  /* 10232116 call eax */
  call_ind((uint32_t)(EAX), 0x10232118u);
  /* 10232118 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023211d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232122 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232128 push 0x1023f68c */
  push32((uint32_t)(0x1023f68cu));
  /* 1023212d push 0x10246128 */
  push32((uint32_t)(0x10246128u));
  /* 10232132 call eax */
  call_ind((uint32_t)(EAX), 0x10232134u);
  /* 10232134 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023213c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023213e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232144 push 0x1023f678 */
  push32((uint32_t)(0x1023f678u));
  /* 10232149 push 0x10246018 */
  push32((uint32_t)(0x10246018u));
  /* 1023214e call eax */
  call_ind((uint32_t)(EAX), 0x10232150u);
  /* 10232150 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023215a je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232160 push 0x1023f664 */
  push32((uint32_t)(0x1023f664u));
  /* 10232165 push 0x10246020 */
  push32((uint32_t)(0x10246020u));
  /* 1023216a call eax */
  call_ind((uint32_t)(EAX), 0x1023216cu);
  /* 1023216c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232176 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 1023217c push 0x1023f650 */
  push32((uint32_t)(0x1023f650u));
  /* 10232181 push 0x10246028 */
  push32((uint32_t)(0x10246028u));
  /* 10232186 call eax */
  call_ind((uint32_t)(EAX), 0x10232188u);
  /* 10232188 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023218d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232192 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232198 push 0x1023f63c */
  push32((uint32_t)(0x1023f63cu));
  /* 1023219d push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 102321a2 call eax */
  call_ind((uint32_t)(EAX), 0x102321a4u);
  /* 102321a4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102321a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102321ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102321ae je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102321b4 push 0x1023f634 */
  push32((uint32_t)(0x1023f634u));
  /* 102321b9 push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 102321be call eax */
  call_ind((uint32_t)(EAX), 0x102321c0u);
  /* 102321c0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102321c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102321c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102321ca je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102321d0 push 0x1023f9c0 */
  push32((uint32_t)(0x1023f9c0u));
  /* 102321d5 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 102321da call eax */
  call_ind((uint32_t)(EAX), 0x102321dcu);
  /* 102321dc mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102321e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102321e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102321e6 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102321ec push 0x1023f62c */
  push32((uint32_t)(0x1023f62cu));
  /* 102321f1 push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 102321f6 call eax */
  call_ind((uint32_t)(EAX), 0x102321f8u);
  /* 102321f8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102321fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232202 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232208 push 0x1023f624 */
  push32((uint32_t)(0x1023f624u));
  /* 1023220d push 0x10245ff8 */
  push32((uint32_t)(0x10245ff8u));
  /* 10232212 call eax */
  call_ind((uint32_t)(EAX), 0x10232214u);
  /* 10232214 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023221c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023221e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232224 push 0x1023f61c */
  push32((uint32_t)(0x1023f61cu));
  /* 10232229 push 0x10245fb0 */
  push32((uint32_t)(0x10245fb0u));
  /* 1023222e call eax */
  call_ind((uint32_t)(EAX), 0x10232230u);
  /* 10232230 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023223a je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232240 push 0x1023f614 */
  push32((uint32_t)(0x1023f614u));
  /* 10232245 push 0x10245fb8 */
  push32((uint32_t)(0x10245fb8u));
  /* 1023224a call eax */
  call_ind((uint32_t)(EAX), 0x1023224cu);
  /* 1023224c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232256 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 1023225c push 0x1023f60c */
  push32((uint32_t)(0x1023f60cu));
  /* 10232261 push 0x10245fc0 */
  push32((uint32_t)(0x10245fc0u));
  /* 10232266 call eax */
  call_ind((uint32_t)(EAX), 0x10232268u);
  /* 10232268 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023226d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232272 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232278 push 0x1023f604 */
  push32((uint32_t)(0x1023f604u));
  /* 1023227d push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10232282 call eax */
  call_ind((uint32_t)(EAX), 0x10232284u);
  /* 10232284 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023228c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023228e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232294 push 0x1023f5fc */
  push32((uint32_t)(0x1023f5fcu));
  /* 10232299 push 0x10246090 */
  push32((uint32_t)(0x10246090u));
  /* 1023229e call eax */
  call_ind((uint32_t)(EAX), 0x102322a0u);
  /* 102322a0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102322a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102322a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102322aa je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102322b0 push 0x1023f5f4 */
  push32((uint32_t)(0x1023f5f4u));
  /* 102322b5 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 102322ba call eax */
  call_ind((uint32_t)(EAX), 0x102322bcu);
  /* 102322bc mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102322c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102322c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102322c6 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102322cc push 0x1023f5ec */
  push32((uint32_t)(0x1023f5ecu));
  /* 102322d1 push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 102322d6 call eax */
  call_ind((uint32_t)(EAX), 0x102322d8u);
  /* 102322d8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102322dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102322e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102322e2 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102322e8 push 0x1023f5e4 */
  push32((uint32_t)(0x1023f5e4u));
  /* 102322ed push 0x10246190 */
  push32((uint32_t)(0x10246190u));
  /* 102322f2 call eax */
  call_ind((uint32_t)(EAX), 0x102322f4u);
  /* 102322f4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102322f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102322fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102322fe je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232304 push 0x1023f5dc */
  push32((uint32_t)(0x1023f5dcu));
  /* 10232309 push 0x102460e8 */
  push32((uint32_t)(0x102460e8u));
  /* 1023230e call eax */
  call_ind((uint32_t)(EAX), 0x10232310u);
  /* 10232310 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023231a je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232320 push 0x1023f5d4 */
  push32((uint32_t)(0x1023f5d4u));
  /* 10232325 push 0x102460f8 */
  push32((uint32_t)(0x102460f8u));
  /* 1023232a call eax */
  call_ind((uint32_t)(EAX), 0x1023232cu);
  /* 1023232c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232336 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 1023233c push 0x1023f5cc */
  push32((uint32_t)(0x1023f5ccu));
  /* 10232341 push 0x10246100 */
  push32((uint32_t)(0x10246100u));
  /* 10232346 call eax */
  call_ind((uint32_t)(EAX), 0x10232348u);
  /* 10232348 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023234d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232352 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232358 push 0x1023f5c4 */
  push32((uint32_t)(0x1023f5c4u));
  /* 1023235d push 0x102460f0 */
  push32((uint32_t)(0x102460f0u));
  /* 10232362 call eax */
  call_ind((uint32_t)(EAX), 0x10232364u);
  /* 10232364 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023236c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023236e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232374 push 0x1023f5bc */
  push32((uint32_t)(0x1023f5bcu));
  /* 10232379 push 0x102438d0 */
  push32((uint32_t)(0x102438d0u));
  /* 1023237e call eax */
  call_ind((uint32_t)(EAX), 0x10232380u);
  /* 10232380 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023238a je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232390 push 0x1023f5b4 */
  push32((uint32_t)(0x1023f5b4u));
  /* 10232395 push 0x10243860 */
  push32((uint32_t)(0x10243860u));
  /* 1023239a call eax */
  call_ind((uint32_t)(EAX), 0x1023239cu);
  /* 1023239c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102323a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102323a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102323a6 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102323ac push 0x1023f5ac */
  push32((uint32_t)(0x1023f5acu));
  /* 102323b1 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 102323b6 call eax */
  call_ind((uint32_t)(EAX), 0x102323b8u);
  /* 102323b8 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102323bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102323c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102323c2 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102323c8 push 0x1023f5a4 */
  push32((uint32_t)(0x1023f5a4u));
  /* 102323cd push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 102323d2 call eax */
  call_ind((uint32_t)(EAX), 0x102323d4u);
  /* 102323d4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102323d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102323dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102323de je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102323e4 push 0x1023f59c */
  push32((uint32_t)(0x1023f59cu));
  /* 102323e9 push 0x102438c0 */
  push32((uint32_t)(0x102438c0u));
  /* 102323ee call eax */
  call_ind((uint32_t)(EAX), 0x102323f0u);
  /* 102323f0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102323f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102323f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102323fa je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232400 push 0x1023f594 */
  push32((uint32_t)(0x1023f594u));
  /* 10232405 push 0x10246178 */
  push32((uint32_t)(0x10246178u));
  /* 1023240a call eax */
  call_ind((uint32_t)(EAX), 0x1023240cu);
  /* 1023240c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232416 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 1023241c push 0x1023f58c */
  push32((uint32_t)(0x1023f58cu));
  /* 10232421 push 0x10246180 */
  push32((uint32_t)(0x10246180u));
  /* 10232426 call eax */
  call_ind((uint32_t)(EAX), 0x10232428u);
  /* 10232428 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023242d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232432 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232438 push 0x1023f584 */
  push32((uint32_t)(0x1023f584u));
  /* 1023243d push 0x102437f0 */
  push32((uint32_t)(0x102437f0u));
  /* 10232442 call eax */
  call_ind((uint32_t)(EAX), 0x10232444u);
  /* 10232444 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023244c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023244e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232454 push 0x1023f57c */
  push32((uint32_t)(0x1023f57cu));
  /* 10232459 push 0x10243800 */
  push32((uint32_t)(0x10243800u));
  /* 1023245e call eax */
  call_ind((uint32_t)(EAX), 0x10232460u);
  /* 10232460 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023246a je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232470 push 0x1023f574 */
  push32((uint32_t)(0x1023f574u));
  /* 10232475 push 0x102436e8 */
  push32((uint32_t)(0x102436e8u));
  /* 1023247a call eax */
  call_ind((uint32_t)(EAX), 0x1023247cu);
  /* 1023247c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232486 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 1023248c push 0x1023f56c */
  push32((uint32_t)(0x1023f56cu));
  /* 10232491 push 0x102435a8 */
  push32((uint32_t)(0x102435a8u));
  /* 10232496 call eax */
  call_ind((uint32_t)(EAX), 0x10232498u);
  /* 10232498 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 1023249d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102324a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102324a2 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102324a8 push 0x1023f564 */
  push32((uint32_t)(0x1023f564u));
  /* 102324ad push 0x10243688 */
  push32((uint32_t)(0x10243688u));
  /* 102324b2 call eax */
  call_ind((uint32_t)(EAX), 0x102324b4u);
  /* 102324b4 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102324b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102324bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102324be je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102324c4 push 0x1023f55c */
  push32((uint32_t)(0x1023f55cu));
  /* 102324c9 push 0x102435b0 */
  push32((uint32_t)(0x102435b0u));
  /* 102324ce call eax */
  call_ind((uint32_t)(EAX), 0x102324d0u);
  /* 102324d0 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102324d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102324d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102324da je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102324e0 push 0x1023f548 */
  push32((uint32_t)(0x1023f548u));
  /* 102324e5 push 0x10246268 */
  push32((uint32_t)(0x10246268u));
  /* 102324ea call eax */
  call_ind((uint32_t)(EAX), 0x102324ecu);
  /* 102324ec mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 102324f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102324f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102324f6 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 102324f8 push 0x1023f534 */
  push32((uint32_t)(0x1023f534u));
  /* 102324fd push 0x10246250 */
  push32((uint32_t)(0x10246250u));
  /* 10232502 call eax */
  call_ind((uint32_t)(EAX), 0x10232504u);
  /* 10232504 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023250c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023250e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232510 push 0x1023f520 */
  push32((uint32_t)(0x1023f520u));
  /* 10232515 push 0x10246260 */
  push32((uint32_t)(0x10246260u));
  /* 1023251a call eax */
  call_ind((uint32_t)(EAX), 0x1023251cu);
  /* 1023251c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232526 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232528 push 0x1023f50c */
  push32((uint32_t)(0x1023f50cu));
  /* 1023252d push 0x10246240 */
  push32((uint32_t)(0x10246240u));
  /* 10232532 call eax */
  call_ind((uint32_t)(EAX), 0x10232534u);
  /* 10232534 mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023253c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023253e je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232540 push 0x1023f4f8 */
  push32((uint32_t)(0x1023f4f8u));
  /* 10232545 push 0x10246248 */
  push32((uint32_t)(0x10246248u));
  /* 1023254a call eax */
  call_ind((uint32_t)(EAX), 0x1023254cu);
  /* 1023254c mov eax, dword ptr [0x1024637c] */
  EAX = (r32((uint32_t)(0x1024637c)));
  /* 10232551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10232556 je 0x10232567 */
  if (C.zf) goto L_10232567;
  /* 10232558 push 0x1023f4e4 */
  push32((uint32_t)(0x1023f4e4u));
  /* 1023255d push 0x10246238 */
  push32((uint32_t)(0x10246238u));
  /* 10232562 call eax */
  call_ind((uint32_t)(EAX), 0x10232564u);
  /* 10232564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10232567:;
  /* 10232567 push 6 */
  push32((uint32_t)(0x6u));
  /* 10232569 call dword ptr [0x102464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a0))), 0x1023256fu);
  /* 1023256f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10232571 push 0x1023f4d0 */
  push32((uint32_t)(0x1023f4d0u));
  /* 10232576 push 0 */
  push32((uint32_t)(0x0u));
  /* 10232578 call dword ptr [0x102464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a4))), 0x1023257eu);
  /* 1023257e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10232580 push 0x1023f4bc */
  push32((uint32_t)(0x1023f4bcu));
  /* 10232585 push 1 */
  push32((uint32_t)(0x1u));
  /* 10232587 call dword ptr [0x102464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a4))), 0x1023258du);
  /* 1023258d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023258f push 0x1023f4a8 */
  push32((uint32_t)(0x1023f4a8u));
  /* 10232594 push 2 */
  push32((uint32_t)(0x2u));
  /* 10232596 call dword ptr [0x102464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a4))), 0x1023259cu);
  /* 1023259c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023259e push 0x1023f494 */
  push32((uint32_t)(0x1023f494u));
  /* 102325a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 102325a5 call dword ptr [0x102464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a4))), 0x102325abu);
  /* 102325ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102325ad push 0x1023f480 */
  push32((uint32_t)(0x1023f480u));
  /* 102325b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 102325b4 call dword ptr [0x102464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a4))), 0x102325bau);
  /* 102325ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102325bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102325bf push 0x1023f46c */
  push32((uint32_t)(0x1023f46cu));
  /* 102325c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102325c6 call dword ptr [0x102464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a4))), 0x102325ccu);
  /* 102325cc push 0x10245ea8 */
  push32((uint32_t)(0x10245ea8u));
  /* 102325d1 call 0x10232730 */
  push32(0x102325d6u); f_10232730();
  /* 102325d6 push 0x1023f460 */
  push32((uint32_t)(0x1023f460u));
  /* 102325db call dword ptr [0x102464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464dc))), 0x102325e1u);
  /* 102325e1 push 0x1023f454 */
  push32((uint32_t)(0x1023f454u));
  /* 102325e6 call dword ptr [0x102464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464e4))), 0x102325ecu);
  /* 102325ec push 0x1023f448 */
  push32((uint32_t)(0x1023f448u));
  /* 102325f1 call dword ptr [0x102464ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464ec))), 0x102325f7u);
  /* 102325f7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102325fa ret  */
  ESPCHK(0x10231000u, _esp0);
  ESP += 4; return;
}

/* InitAI @ 0x10232600 (123 bytes, 28 insns) */
void f_10232600(void) {
  FTRACE(0x10232600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232600 call dword ptr [0x10246480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246480))), 0x10232606u);
  /* 10232606 mov dword ptr [0x10246234], eax */
  w32((uint32_t)(0x10246234), (EAX));
  /* 1023260b call 0x10231000 */
  push32(0x10232610u); f_10231000();
  /* 10232610 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10232615 call dword ptr [0x102464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a8))), 0x1023261bu);
  /* 1023261b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023261d call dword ptr [0x102464ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464ac))), 0x10232623u);
  /* 10232623 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10232625 call dword ptr [0x102464b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464b0))), 0x1023262bu);
  /* 1023262b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10232630 call dword ptr [0x102464b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464b4))), 0x10232636u);
  /* 10232636 push 5 */
  push32((uint32_t)(0x5u));
  /* 10232638 call dword ptr [0x102464b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464b8))), 0x1023263eu);
  /* 1023263e mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10232643 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232646 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10232649 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1023264c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1023264f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10232652 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10232654 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10232657 mov dword ptr [eax + 0x10243a70], ecx */
  w32((uint32_t)(EAX + 0x10243a70), (ECX));
  /* 1023265d mov dword ptr [eax + 0x10243c04], ecx */
  w32((uint32_t)(EAX + 0x10243c04), (ECX));
  /* 10232663 call 0x10232760 */
  push32(0x10232668u); f_10232760();
  /* 10232668 mov edx, dword ptr [0x10246234] */
  EDX = (r32((uint32_t)(0x10246234)));
  /* 1023266e and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10232673 mov dword ptr [edx*4 + 0x10245f18], eax */
  w32((uint32_t)(EDX*4 + 0x10245f18), (EAX));
  /* 1023267a ret  */
  ESPCHK(0x10232600u, _esp0);
  ESP += 4; return;
}

/* ProcessAI @ 0x10232680 (16 bytes, 3 insns) */
void f_10232680(void) {
  FTRACE(0x10232680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232680 call dword ptr [0x10246480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246480))), 0x10232686u);
  /* 10232686 mov dword ptr [0x10246234], eax */
  w32((uint32_t)(0x10246234), (EAX));
  /* 1023268b jmp 0x10236de0 */
  f_10236de0(); return;
}

/* FUN_10002690 @ 0x10232690 (20 bytes, 7 insns) */
void f_10232690(void) {
  FTRACE(0x10232690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232690 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10232694 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232698 push eax */
  push32((uint32_t)(EAX));
  /* 10232699 push ecx */
  push32((uint32_t)(ECX));
  /* 1023269a call dword ptr [0x10246490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246490))), 0x102326a0u);
  /* 102326a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102326a3 ret  */
  ESPCHK(0x10232690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b0 @ 0x102326b0 (25 bytes, 9 insns) */
void f_102326b0(void) {
  FTRACE(0x102326b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102326b0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 102326b4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102326b8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102326bc push eax */
  push32((uint32_t)(EAX));
  /* 102326bd push ecx */
  push32((uint32_t)(ECX));
  /* 102326be push edx */
  push32((uint32_t)(EDX));
  /* 102326bf call dword ptr [0x1024649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024649c))), 0x102326c5u);
  /* 102326c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102326c8 ret  */
  ESPCHK(0x102326b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d0 @ 0x102326d0 (6 bytes, 1 insns) */
void f_102326d0(void) {
  FTRACE(0x102326d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102326d0 jmp dword ptr [0x102464c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102464c8)))); return;
}

/* FUN_100026e0 @ 0x102326e0 (20 bytes, 7 insns) */
void f_102326e0(void) {
  FTRACE(0x102326e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102326e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102326e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102326e8 push eax */
  push32((uint32_t)(EAX));
  /* 102326e9 push ecx */
  push32((uint32_t)(ECX));
  /* 102326ea call dword ptr [0x102464e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464e8))), 0x102326f0u);
  /* 102326f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102326f3 ret  */
  ESPCHK(0x102326e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10232700 (6 bytes, 1 insns) */
void f_10232700(void) {
  FTRACE(0x10232700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232700 jmp dword ptr [0x102464f4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102464f4)))); return;
}

/* FUN_10002710 @ 0x10232710 (6 bytes, 1 insns) */
void f_10232710(void) {
  FTRACE(0x10232710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232710 jmp dword ptr [0x102464f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102464f8)))); return;
}

/* FUN_10002720 @ 0x10232720 (6 bytes, 1 insns) */
void f_10232720(void) {
  FTRACE(0x10232720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232720 jmp dword ptr [0x10246500] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10246500)))); return;
}

/* FUN_10002730 @ 0x10232730 (13 bytes, 5 insns) */
void f_10232730(void) {
  FTRACE(0x10232730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232734 push eax */
  push32((uint32_t)(EAX));
  /* 10232735 call dword ptr [0x10246504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246504))), 0x1023273bu);
  /* 1023273b pop ecx */
  ECX = (pop32());
  /* 1023273c ret  */
  ESPCHK(0x10232730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10232740 (20 bytes, 7 insns) */
void f_10232740(void) {
  FTRACE(0x10232740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232740 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10232744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232748 push eax */
  push32((uint32_t)(EAX));
  /* 10232749 push ecx */
  push32((uint32_t)(ECX));
  /* 1023274a call dword ptr [0x10246508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246508))), 0x10232750u);
  /* 10232750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232753 ret  */
  ESPCHK(0x10232740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10232760 (6 bytes, 1 insns) */
void f_10232760(void) {
  FTRACE(0x10232760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232760 jmp dword ptr [0x1024650c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1024650c)))); return;
}

/* FUN_10002770 @ 0x10232770 (20 bytes, 7 insns) */
void f_10232770(void) {
  FTRACE(0x10232770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232770 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10232774 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232778 push eax */
  push32((uint32_t)(EAX));
  /* 10232779 push ecx */
  push32((uint32_t)(ECX));
  /* 1023277a call dword ptr [0x102461e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102461e8))), 0x10232780u);
  /* 10232780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232783 ret  */
  ESPCHK(0x10232770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002790 @ 0x10232790 (15 bytes, 5 insns) */
void f_10232790(void) {
  FTRACE(0x10232790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232790 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232794 push eax */
  push32((uint32_t)(EAX));
  /* 10232795 call dword ptr [0x10246230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246230))), 0x1023279bu);
  /* 1023279b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023279e ret  */
  ESPCHK(0x10232790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x102327a0 (20 bytes, 7 insns) */
void f_102327a0(void) {
  FTRACE(0x102327a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102327a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102327a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102327a8 push eax */
  push32((uint32_t)(EAX));
  /* 102327a9 push ecx */
  push32((uint32_t)(ECX));
  /* 102327aa call dword ptr [0x102436b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102436b0))), 0x102327b0u);
  /* 102327b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102327b3 ret  */
  ESPCHK(0x102327a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x102327c0 (13 bytes, 5 insns) */
void f_102327c0(void) {
  FTRACE(0x102327c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102327c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102327c4 push eax */
  push32((uint32_t)(EAX));
  /* 102327c5 call dword ptr [0x10243850] */
  call_ind((uint32_t)(r32((uint32_t)(0x10243850))), 0x102327cbu);
  /* 102327cb pop ecx */
  ECX = (pop32());
  /* 102327cc ret  */
  ESPCHK(0x102327c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x102327d0 (15 bytes, 5 insns) */
void f_102327d0(void) {
  FTRACE(0x102327d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102327d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102327d4 push eax */
  push32((uint32_t)(EAX));
  /* 102327d5 call dword ptr [0x10246510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246510))), 0x102327dbu);
  /* 102327db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102327de ret  */
  ESPCHK(0x102327d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027e0 @ 0x102327e0 (25 bytes, 9 insns) */
void f_102327e0(void) {
  FTRACE(0x102327e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102327e0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 102327e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102327e8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102327ec push eax */
  push32((uint32_t)(EAX));
  /* 102327ed push ecx */
  push32((uint32_t)(ECX));
  /* 102327ee push edx */
  push32((uint32_t)(EDX));
  /* 102327ef call dword ptr [0x10245f40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10245f40))), 0x102327f5u);
  /* 102327f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102327f8 ret  */
  ESPCHK(0x102327e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002800 @ 0x10232800 (13 bytes, 5 insns) */
void f_10232800(void) {
  FTRACE(0x10232800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232800 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232804 push eax */
  push32((uint32_t)(EAX));
  /* 10232805 call dword ptr [0x102438b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102438b0))), 0x1023280bu);
  /* 1023280b pop ecx */
  ECX = (pop32());
  /* 1023280c ret  */
  ESPCHK(0x10232800u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x10232810 (6 bytes, 1 insns) */
void f_10232810(void) {
  FTRACE(0x10232810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232810 jmp dword ptr [0x102461c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102461c8)))); return;
}

/* FUN_10002820 @ 0x10232820 (6 bytes, 1 insns) */
void f_10232820(void) {
  FTRACE(0x10232820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232820 jmp dword ptr [0x102438c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102438c8)))); return;
}

/* FUN_10002830 @ 0x10232830 (82 bytes, 28 insns) */
void f_10232830(void) {
  FTRACE(0x10232830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232830 mov eax, dword ptr [0x10246360] */
  EAX = (r32((uint32_t)(0x10246360)));
  /* 10232835 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023283b push esi */
  push32((uint32_t)(ESI));
  /* 1023283c push edi */
  push32((uint32_t)(EDI));
  /* 1023283d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 10232844 push edi */
  push32((uint32_t)(EDI));
  /* 10232845 push eax */
  push32((uint32_t)(EAX));
  /* 10232846 call dword ptr [0x1023e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e088))), 0x1023284cu);
  /* 1023284c mov esi, eax */
  ESI = (EAX);
  /* 1023284e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10232850 jne 0x10232877 */
  if (!C.zf) goto L_10232877;
  /* 10232852 push edi */
  push32((uint32_t)(EDI));
  /* 10232853 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 10232857 push 0x1023fe8c */
  push32((uint32_t)(0x1023fe8cu));
  /* 1023285c push ecx */
  push32((uint32_t)(ECX));
  /* 1023285d call 0x10236f10 */
  push32(0x10232862u); f_10236f10();
  /* 10232862 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232865 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 10232869 push esi */
  push32((uint32_t)(ESI));
  /* 1023286a push 0x1023fe7c */
  push32((uint32_t)(0x1023fe7cu));
  /* 1023286f push edx */
  push32((uint32_t)(EDX));
  /* 10232870 push esi */
  push32((uint32_t)(ESI));
  /* 10232871 call dword ptr [0x1023e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0dc))), 0x10232877u);
L_10232877:;
  /* 10232877 mov eax, esi */
  EAX = (ESI);
  /* 10232879 pop edi */
  EDI = (pop32());
  /* 1023287a pop esi */
  ESI = (pop32());
  /* 1023287b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232881 ret  */
  ESPCHK(0x10232830u, _esp0);
  ESP += 4; return;
}

/* FUN_10002890 @ 0x10232890 (1844 bytes, 376 insns) */
void f_10232890(void) {
  FTRACE(0x10232890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232890 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10232894 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10232895 jne 0x10232fbc */
  if (!C.zf) goto L_10232fbc;
  /* 1023289b push 0x102405e0 */
  push32((uint32_t)(0x102405e0u));
  /* 102328a0 call dword ptr [0x1023e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e004))), 0x102328a6u);
  /* 102328a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102328a8 mov dword ptr [0x10246360], eax */
  w32((uint32_t)(0x10246360), (EAX));
  /* 102328ad jne 0x102328c9 */
  if (!C.zf) goto L_102328c9;
  /* 102328af push eax */
  push32((uint32_t)(EAX));
  /* 102328b0 push 0x102405d8 */
  push32((uint32_t)(0x102405d8u));
  /* 102328b5 push 0x102405c0 */
  push32((uint32_t)(0x102405c0u));
  /* 102328ba push eax */
  push32((uint32_t)(EAX));
  /* 102328bb call dword ptr [0x1023e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0dc))), 0x102328c1u);
  /* 102328c1 mov eax, 1 */
  EAX = (0x1u);
  /* 102328c6 ret 0xc */
  ESPCHK(0x10232890u, _esp0);
  ESP += 16; return;
L_102328c9:;
  /* 102328c9 push 0x102405b0 */
  push32((uint32_t)(0x102405b0u));
  /* 102328ce call 0x10232830 */
  push32(0x102328d3u); f_10232830();
  /* 102328d3 push 0x102405a0 */
  push32((uint32_t)(0x102405a0u));
  /* 102328d8 mov dword ptr [0x10246364], eax */
  w32((uint32_t)(0x10246364), (EAX));
  /* 102328dd call 0x10232830 */
  push32(0x102328e2u); f_10232830();
  /* 102328e2 push 0x10240590 */
  push32((uint32_t)(0x10240590u));
  /* 102328e7 mov dword ptr [0x10246368], eax */
  w32((uint32_t)(0x10246368), (EAX));
  /* 102328ec call 0x10232830 */
  push32(0x102328f1u); f_10232830();
  /* 102328f1 push 0x10240584 */
  push32((uint32_t)(0x10240584u));
  /* 102328f6 mov dword ptr [0x1024636c], eax */
  w32((uint32_t)(0x1024636c), (EAX));
  /* 102328fb call 0x10232830 */
  push32(0x10232900u); f_10232830();
  /* 10232900 push 0x10240574 */
  push32((uint32_t)(0x10240574u));
  /* 10232905 mov dword ptr [0x10246370], eax */
  w32((uint32_t)(0x10246370), (EAX));
  /* 1023290a call 0x10232830 */
  push32(0x1023290fu); f_10232830();
  /* 1023290f push 0x10240560 */
  push32((uint32_t)(0x10240560u));
  /* 10232914 mov dword ptr [0x10246374], eax */
  w32((uint32_t)(0x10246374), (EAX));
  /* 10232919 call 0x10232830 */
  push32(0x1023291eu); f_10232830();
  /* 1023291e push 0x10240550 */
  push32((uint32_t)(0x10240550u));
  /* 10232923 mov dword ptr [0x10246378], eax */
  w32((uint32_t)(0x10246378), (EAX));
  /* 10232928 call 0x10232830 */
  push32(0x1023292du); f_10232830();
  /* 1023292d push 0x10240540 */
  push32((uint32_t)(0x10240540u));
  /* 10232932 mov dword ptr [0x1024637c], eax */
  w32((uint32_t)(0x1024637c), (EAX));
  /* 10232937 call 0x10232830 */
  push32(0x1023293cu); f_10232830();
  /* 1023293c push 0x1024052c */
  push32((uint32_t)(0x1024052cu));
  /* 10232941 mov dword ptr [0x10246380], eax */
  w32((uint32_t)(0x10246380), (EAX));
  /* 10232946 call 0x10232830 */
  push32(0x1023294bu); f_10232830();
  /* 1023294b push 0x10240518 */
  push32((uint32_t)(0x10240518u));
  /* 10232950 mov dword ptr [0x10246384], eax */
  w32((uint32_t)(0x10246384), (EAX));
  /* 10232955 call 0x10232830 */
  push32(0x1023295au); f_10232830();
  /* 1023295a push 0x10240508 */
  push32((uint32_t)(0x10240508u));
  /* 1023295f mov dword ptr [0x10246388], eax */
  w32((uint32_t)(0x10246388), (EAX));
  /* 10232964 call 0x10232830 */
  push32(0x10232969u); f_10232830();
  /* 10232969 push 0x102404f8 */
  push32((uint32_t)(0x102404f8u));
  /* 1023296e mov dword ptr [0x1024638c], eax */
  w32((uint32_t)(0x1024638c), (EAX));
  /* 10232973 call 0x10232830 */
  push32(0x10232978u); f_10232830();
  /* 10232978 push 0x102404e8 */
  push32((uint32_t)(0x102404e8u));
  /* 1023297d mov dword ptr [0x10246390], eax */
  w32((uint32_t)(0x10246390), (EAX));
  /* 10232982 call 0x10232830 */
  push32(0x10232987u); f_10232830();
  /* 10232987 push 0x102404d8 */
  push32((uint32_t)(0x102404d8u));
  /* 1023298c mov dword ptr [0x10246394], eax */
  w32((uint32_t)(0x10246394), (EAX));
  /* 10232991 call 0x10232830 */
  push32(0x10232996u); f_10232830();
  /* 10232996 push 0x102404c8 */
  push32((uint32_t)(0x102404c8u));
  /* 1023299b mov dword ptr [0x10246398], eax */
  w32((uint32_t)(0x10246398), (EAX));
  /* 102329a0 call 0x10232830 */
  push32(0x102329a5u); f_10232830();
  /* 102329a5 push 0x102404b8 */
  push32((uint32_t)(0x102404b8u));
  /* 102329aa mov dword ptr [0x1024639c], eax */
  w32((uint32_t)(0x1024639c), (EAX));
  /* 102329af call 0x10232830 */
  push32(0x102329b4u); f_10232830();
  /* 102329b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102329b7 mov dword ptr [0x102463a0], eax */
  w32((uint32_t)(0x102463a0), (EAX));
  /* 102329bc push 0x102404a8 */
  push32((uint32_t)(0x102404a8u));
  /* 102329c1 call 0x10232830 */
  push32(0x102329c6u); f_10232830();
  /* 102329c6 push 0x10240498 */
  push32((uint32_t)(0x10240498u));
  /* 102329cb mov dword ptr [0x102463a4], eax */
  w32((uint32_t)(0x102463a4), (EAX));
  /* 102329d0 call 0x10232830 */
  push32(0x102329d5u); f_10232830();
  /* 102329d5 push 0x10240484 */
  push32((uint32_t)(0x10240484u));
  /* 102329da mov dword ptr [0x102463a8], eax */
  w32((uint32_t)(0x102463a8), (EAX));
  /* 102329df call 0x10232830 */
  push32(0x102329e4u); f_10232830();
  /* 102329e4 push 0x1024047c */
  push32((uint32_t)(0x1024047cu));
  /* 102329e9 mov dword ptr [0x102463ac], eax */
  w32((uint32_t)(0x102463ac), (EAX));
  /* 102329ee call 0x10232830 */
  push32(0x102329f3u); f_10232830();
  /* 102329f3 push 0x1024046c */
  push32((uint32_t)(0x1024046cu));
  /* 102329f8 mov dword ptr [0x102463b0], eax */
  w32((uint32_t)(0x102463b0), (EAX));
  /* 102329fd call 0x10232830 */
  push32(0x10232a02u); f_10232830();
  /* 10232a02 push 0x1024045c */
  push32((uint32_t)(0x1024045cu));
  /* 10232a07 mov dword ptr [0x102463b4], eax */
  w32((uint32_t)(0x102463b4), (EAX));
  /* 10232a0c call 0x10232830 */
  push32(0x10232a11u); f_10232830();
  /* 10232a11 push 0x10240450 */
  push32((uint32_t)(0x10240450u));
  /* 10232a16 mov dword ptr [0x102463b8], eax */
  w32((uint32_t)(0x102463b8), (EAX));
  /* 10232a1b call 0x10232830 */
  push32(0x10232a20u); f_10232830();
  /* 10232a20 push 0x10240440 */
  push32((uint32_t)(0x10240440u));
  /* 10232a25 mov dword ptr [0x102463bc], eax */
  w32((uint32_t)(0x102463bc), (EAX));
  /* 10232a2a call 0x10232830 */
  push32(0x10232a2fu); f_10232830();
  /* 10232a2f push 0x10240438 */
  push32((uint32_t)(0x10240438u));
  /* 10232a34 mov dword ptr [0x102463c0], eax */
  w32((uint32_t)(0x102463c0), (EAX));
  /* 10232a39 call 0x10232830 */
  push32(0x10232a3eu); f_10232830();
  /* 10232a3e push 0x10240428 */
  push32((uint32_t)(0x10240428u));
  /* 10232a43 mov dword ptr [0x102463d8], eax */
  w32((uint32_t)(0x102463d8), (EAX));
  /* 10232a48 call 0x10232830 */
  push32(0x10232a4du); f_10232830();
  /* 10232a4d push 0x10240418 */
  push32((uint32_t)(0x10240418u));
  /* 10232a52 mov dword ptr [0x102463dc], eax */
  w32((uint32_t)(0x102463dc), (EAX));
  /* 10232a57 call 0x10232830 */
  push32(0x10232a5cu); f_10232830();
  /* 10232a5c push 0x1024040c */
  push32((uint32_t)(0x1024040cu));
  /* 10232a61 mov dword ptr [0x102463e0], eax */
  w32((uint32_t)(0x102463e0), (EAX));
  /* 10232a66 call 0x10232830 */
  push32(0x10232a6bu); f_10232830();
  /* 10232a6b push 0x102403fc */
  push32((uint32_t)(0x102403fcu));
  /* 10232a70 mov dword ptr [0x102463e4], eax */
  w32((uint32_t)(0x102463e4), (EAX));
  /* 10232a75 call 0x10232830 */
  push32(0x10232a7au); f_10232830();
  /* 10232a7a push 0x102403f0 */
  push32((uint32_t)(0x102403f0u));
  /* 10232a7f mov dword ptr [0x102463e8], eax */
  w32((uint32_t)(0x102463e8), (EAX));
  /* 10232a84 call 0x10232830 */
  push32(0x10232a89u); f_10232830();
  /* 10232a89 push 0x102403e0 */
  push32((uint32_t)(0x102403e0u));
  /* 10232a8e mov dword ptr [0x10246404], eax */
  w32((uint32_t)(0x10246404), (EAX));
  /* 10232a93 call 0x10232830 */
  push32(0x10232a98u); f_10232830();
  /* 10232a98 push 0x102403d8 */
  push32((uint32_t)(0x102403d8u));
  /* 10232a9d mov dword ptr [0x102463ec], eax */
  w32((uint32_t)(0x102463ec), (EAX));
  /* 10232aa2 call 0x10232830 */
  push32(0x10232aa7u); f_10232830();
  /* 10232aa7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232aaa mov dword ptr [0x102463f0], eax */
  w32((uint32_t)(0x102463f0), (EAX));
  /* 10232aaf push 0x102403c8 */
  push32((uint32_t)(0x102403c8u));
  /* 10232ab4 call 0x10232830 */
  push32(0x10232ab9u); f_10232830();
  /* 10232ab9 push 0x102403b8 */
  push32((uint32_t)(0x102403b8u));
  /* 10232abe mov dword ptr [0x102463f4], eax */
  w32((uint32_t)(0x102463f4), (EAX));
  /* 10232ac3 call 0x10232830 */
  push32(0x10232ac8u); f_10232830();
  /* 10232ac8 push 0x102403a8 */
  push32((uint32_t)(0x102403a8u));
  /* 10232acd mov dword ptr [0x102463f8], eax */
  w32((uint32_t)(0x102463f8), (EAX));
  /* 10232ad2 call 0x10232830 */
  push32(0x10232ad7u); f_10232830();
  /* 10232ad7 push 0x1024039c */
  push32((uint32_t)(0x1024039cu));
  /* 10232adc mov dword ptr [0x102463fc], eax */
  w32((uint32_t)(0x102463fc), (EAX));
  /* 10232ae1 call 0x10232830 */
  push32(0x10232ae6u); f_10232830();
  /* 10232ae6 push 0x10240394 */
  push32((uint32_t)(0x10240394u));
  /* 10232aeb mov dword ptr [0x10246400], eax */
  w32((uint32_t)(0x10246400), (EAX));
  /* 10232af0 call 0x10232830 */
  push32(0x10232af5u); f_10232830();
  /* 10232af5 push 0x10240384 */
  push32((uint32_t)(0x10240384u));
  /* 10232afa mov dword ptr [0x10246408], eax */
  w32((uint32_t)(0x10246408), (EAX));
  /* 10232aff call 0x10232830 */
  push32(0x10232b04u); f_10232830();
  /* 10232b04 push 0x10240374 */
  push32((uint32_t)(0x10240374u));
  /* 10232b09 mov dword ptr [0x1024640c], eax */
  w32((uint32_t)(0x1024640c), (EAX));
  /* 10232b0e call 0x10232830 */
  push32(0x10232b13u); f_10232830();
  /* 10232b13 push 0x10240364 */
  push32((uint32_t)(0x10240364u));
  /* 10232b18 mov dword ptr [0x10246410], eax */
  w32((uint32_t)(0x10246410), (EAX));
  /* 10232b1d call 0x10232830 */
  push32(0x10232b22u); f_10232830();
  /* 10232b22 push 0x10240354 */
  push32((uint32_t)(0x10240354u));
  /* 10232b27 mov dword ptr [0x10246414], eax */
  w32((uint32_t)(0x10246414), (EAX));
  /* 10232b2c call 0x10232830 */
  push32(0x10232b31u); f_10232830();
  /* 10232b31 push 0x10240348 */
  push32((uint32_t)(0x10240348u));
  /* 10232b36 mov dword ptr [0x10246418], eax */
  w32((uint32_t)(0x10246418), (EAX));
  /* 10232b3b call 0x10232830 */
  push32(0x10232b40u); f_10232830();
  /* 10232b40 push 0x1024033c */
  push32((uint32_t)(0x1024033cu));
  /* 10232b45 mov dword ptr [0x1024641c], eax */
  w32((uint32_t)(0x1024641c), (EAX));
  /* 10232b4a call 0x10232830 */
  push32(0x10232b4fu); f_10232830();
  /* 10232b4f push 0x1024032c */
  push32((uint32_t)(0x1024032cu));
  /* 10232b54 mov dword ptr [0x10246420], eax */
  w32((uint32_t)(0x10246420), (EAX));
  /* 10232b59 call 0x10232830 */
  push32(0x10232b5eu); f_10232830();
  /* 10232b5e push 0x10240320 */
  push32((uint32_t)(0x10240320u));
  /* 10232b63 mov dword ptr [0x10246424], eax */
  w32((uint32_t)(0x10246424), (EAX));
  /* 10232b68 call 0x10232830 */
  push32(0x10232b6du); f_10232830();
  /* 10232b6d push 0x10240314 */
  push32((uint32_t)(0x10240314u));
  /* 10232b72 mov dword ptr [0x10246428], eax */
  w32((uint32_t)(0x10246428), (EAX));
  /* 10232b77 call 0x10232830 */
  push32(0x10232b7cu); f_10232830();
  /* 10232b7c push 0x10240308 */
  push32((uint32_t)(0x10240308u));
  /* 10232b81 mov dword ptr [0x1024642c], eax */
  w32((uint32_t)(0x1024642c), (EAX));
  /* 10232b86 call 0x10232830 */
  push32(0x10232b8bu); f_10232830();
  /* 10232b8b push 0x102402fc */
  push32((uint32_t)(0x102402fcu));
  /* 10232b90 mov dword ptr [0x10246160], eax */
  w32((uint32_t)(0x10246160), (EAX));
  /* 10232b95 call 0x10232830 */
  push32(0x10232b9au); f_10232830();
  /* 10232b9a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232b9d mov dword ptr [0x10246430], eax */
  w32((uint32_t)(0x10246430), (EAX));
  /* 10232ba2 push 0x102402f0 */
  push32((uint32_t)(0x102402f0u));
  /* 10232ba7 call 0x10232830 */
  push32(0x10232bacu); f_10232830();
  /* 10232bac push 0x102402e4 */
  push32((uint32_t)(0x102402e4u));
  /* 10232bb1 mov dword ptr [0x10246434], eax */
  w32((uint32_t)(0x10246434), (EAX));
  /* 10232bb6 call 0x10232830 */
  push32(0x10232bbbu); f_10232830();
  /* 10232bbb push 0x102402d4 */
  push32((uint32_t)(0x102402d4u));
  /* 10232bc0 mov dword ptr [0x10246438], eax */
  w32((uint32_t)(0x10246438), (EAX));
  /* 10232bc5 call 0x10232830 */
  push32(0x10232bcau); f_10232830();
  /* 10232bca push 0x102402c8 */
  push32((uint32_t)(0x102402c8u));
  /* 10232bcf mov dword ptr [0x1024643c], eax */
  w32((uint32_t)(0x1024643c), (EAX));
  /* 10232bd4 call 0x10232830 */
  push32(0x10232bd9u); f_10232830();
  /* 10232bd9 push 0x102402bc */
  push32((uint32_t)(0x102402bcu));
  /* 10232bde mov dword ptr [0x10246440], eax */
  w32((uint32_t)(0x10246440), (EAX));
  /* 10232be3 call 0x10232830 */
  push32(0x10232be8u); f_10232830();
  /* 10232be8 mov dword ptr [0x10246444], eax */
  w32((uint32_t)(0x10246444), (EAX));
  /* 10232bed push 0x102402ac */
  push32((uint32_t)(0x102402acu));
  /* 10232bf2 call 0x10232830 */
  push32(0x10232bf7u); f_10232830();
  /* 10232bf7 push 0x1024029c */
  push32((uint32_t)(0x1024029cu));
  /* 10232bfc mov dword ptr [0x10246448], eax */
  w32((uint32_t)(0x10246448), (EAX));
  /* 10232c01 call 0x10232830 */
  push32(0x10232c06u); f_10232830();
  /* 10232c06 push 0x10240290 */
  push32((uint32_t)(0x10240290u));
  /* 10232c0b mov dword ptr [0x1024644c], eax */
  w32((uint32_t)(0x1024644c), (EAX));
  /* 10232c10 call 0x10232830 */
  push32(0x10232c15u); f_10232830();
  /* 10232c15 push 0x10240288 */
  push32((uint32_t)(0x10240288u));
  /* 10232c1a mov dword ptr [0x10246450], eax */
  w32((uint32_t)(0x10246450), (EAX));
  /* 10232c1f call 0x10232830 */
  push32(0x10232c24u); f_10232830();
  /* 10232c24 push 0x10240278 */
  push32((uint32_t)(0x10240278u));
  /* 10232c29 mov dword ptr [0x10246454], eax */
  w32((uint32_t)(0x10246454), (EAX));
  /* 10232c2e call 0x10232830 */
  push32(0x10232c33u); f_10232830();
  /* 10232c33 push 0x10240270 */
  push32((uint32_t)(0x10240270u));
  /* 10232c38 mov dword ptr [0x10246458], eax */
  w32((uint32_t)(0x10246458), (EAX));
  /* 10232c3d call 0x10232830 */
  push32(0x10232c42u); f_10232830();
  /* 10232c42 push 0x10240264 */
  push32((uint32_t)(0x10240264u));
  /* 10232c47 mov dword ptr [0x1024645c], eax */
  w32((uint32_t)(0x1024645c), (EAX));
  /* 10232c4c call 0x10232830 */
  push32(0x10232c51u); f_10232830();
  /* 10232c51 push 0x1024025c */
  push32((uint32_t)(0x1024025cu));
  /* 10232c56 mov dword ptr [0x10246460], eax */
  w32((uint32_t)(0x10246460), (EAX));
  /* 10232c5b call 0x10232830 */
  push32(0x10232c60u); f_10232830();
  /* 10232c60 push 0x10240248 */
  push32((uint32_t)(0x10240248u));
  /* 10232c65 mov dword ptr [0x10246464], eax */
  w32((uint32_t)(0x10246464), (EAX));
  /* 10232c6a call 0x10232830 */
  push32(0x10232c6fu); f_10232830();
  /* 10232c6f push 0x1024023c */
  push32((uint32_t)(0x1024023cu));
  /* 10232c74 mov dword ptr [0x102435b8], eax */
  w32((uint32_t)(0x102435b8), (EAX));
  /* 10232c79 call 0x10232830 */
  push32(0x10232c7eu); f_10232830();
  /* 10232c7e push 0x10240230 */
  push32((uint32_t)(0x10240230u));
  /* 10232c83 mov dword ptr [0x10246470], eax */
  w32((uint32_t)(0x10246470), (EAX));
  /* 10232c88 call 0x10232830 */
  push32(0x10232c8du); f_10232830();
  /* 10232c8d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232c90 mov dword ptr [0x1024646c], eax */
  w32((uint32_t)(0x1024646c), (EAX));
  /* 10232c95 push 0x1024021c */
  push32((uint32_t)(0x1024021cu));
  /* 10232c9a call 0x10232830 */
  push32(0x10232c9fu); f_10232830();
  /* 10232c9f push 0x1024020c */
  push32((uint32_t)(0x1024020cu));
  /* 10232ca4 mov dword ptr [0x10246474], eax */
  w32((uint32_t)(0x10246474), (EAX));
  /* 10232ca9 call 0x10232830 */
  push32(0x10232caeu); f_10232830();
  /* 10232cae push 0x102401fc */
  push32((uint32_t)(0x102401fcu));
  /* 10232cb3 mov dword ptr [0x10246478], eax */
  w32((uint32_t)(0x10246478), (EAX));
  /* 10232cb8 call 0x10232830 */
  push32(0x10232cbdu); f_10232830();
  /* 10232cbd push 0x102401ec */
  push32((uint32_t)(0x102401ecu));
  /* 10232cc2 mov dword ptr [0x1024647c], eax */
  w32((uint32_t)(0x1024647c), (EAX));
  /* 10232cc7 call 0x10232830 */
  push32(0x10232cccu); f_10232830();
  /* 10232ccc push 0x102401e0 */
  push32((uint32_t)(0x102401e0u));
  /* 10232cd1 mov dword ptr [0x102463c8], eax */
  w32((uint32_t)(0x102463c8), (EAX));
  /* 10232cd6 call 0x10232830 */
  push32(0x10232cdbu); f_10232830();
  /* 10232cdb push 0x102401d0 */
  push32((uint32_t)(0x102401d0u));
  /* 10232ce0 mov dword ptr [0x102463c4], eax */
  w32((uint32_t)(0x102463c4), (EAX));
  /* 10232ce5 call 0x10232830 */
  push32(0x10232ceau); f_10232830();
  /* 10232cea push 0x102401bc */
  push32((uint32_t)(0x102401bcu));
  /* 10232cef mov dword ptr [0x102463cc], eax */
  w32((uint32_t)(0x102463cc), (EAX));
  /* 10232cf4 call 0x10232830 */
  push32(0x10232cf9u); f_10232830();
  /* 10232cf9 push 0x102401a4 */
  push32((uint32_t)(0x102401a4u));
  /* 10232cfe mov dword ptr [0x102463d0], eax */
  w32((uint32_t)(0x102463d0), (EAX));
  /* 10232d03 call 0x10232830 */
  push32(0x10232d08u); f_10232830();
  /* 10232d08 push 0x10240194 */
  push32((uint32_t)(0x10240194u));
  /* 10232d0d mov dword ptr [0x102463d4], eax */
  w32((uint32_t)(0x102463d4), (EAX));
  /* 10232d12 call 0x10232830 */
  push32(0x10232d17u); f_10232830();
  /* 10232d17 push 0x1024017c */
  push32((uint32_t)(0x1024017cu));
  /* 10232d1c mov dword ptr [0x10246498], eax */
  w32((uint32_t)(0x10246498), (EAX));
  /* 10232d21 call 0x10232830 */
  push32(0x10232d26u); f_10232830();
  /* 10232d26 push 0x1024016c */
  push32((uint32_t)(0x1024016cu));
  /* 10232d2b mov dword ptr [0x102464c8], eax */
  w32((uint32_t)(0x102464c8), (EAX));
  /* 10232d30 call 0x10232830 */
  push32(0x10232d35u); f_10232830();
  /* 10232d35 push 0x10240164 */
  push32((uint32_t)(0x10240164u));
  /* 10232d3a mov dword ptr [0x10246490], eax */
  w32((uint32_t)(0x10246490), (EAX));
  /* 10232d3f call 0x10232830 */
  push32(0x10232d44u); f_10232830();
  /* 10232d44 push 0x10240154 */
  push32((uint32_t)(0x10240154u));
  /* 10232d49 mov dword ptr [0x1024649c], eax */
  w32((uint32_t)(0x1024649c), (EAX));
  /* 10232d4e call 0x10232830 */
  push32(0x10232d53u); f_10232830();
  /* 10232d53 push 0x10240148 */
  push32((uint32_t)(0x10240148u));
  /* 10232d58 mov dword ptr [0x102464e8], eax */
  w32((uint32_t)(0x102464e8), (EAX));
  /* 10232d5d call 0x10232830 */
  push32(0x10232d62u); f_10232830();
  /* 10232d62 push 0x10240140 */
  push32((uint32_t)(0x10240140u));
  /* 10232d67 mov dword ptr [0x10246480], eax */
  w32((uint32_t)(0x10246480), (EAX));
  /* 10232d6c call 0x10232830 */
  push32(0x10232d71u); f_10232830();
  /* 10232d71 push 0x10240134 */
  push32((uint32_t)(0x10240134u));
  /* 10232d76 mov dword ptr [0x10246484], eax */
  w32((uint32_t)(0x10246484), (EAX));
  /* 10232d7b call 0x10232830 */
  push32(0x10232d80u); f_10232830();
  /* 10232d80 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232d83 mov dword ptr [0x10246488], eax */
  w32((uint32_t)(0x10246488), (EAX));
  /* 10232d88 push 0x10240124 */
  push32((uint32_t)(0x10240124u));
  /* 10232d8d call 0x10232830 */
  push32(0x10232d92u); f_10232830();
  /* 10232d92 push 0x10240110 */
  push32((uint32_t)(0x10240110u));
  /* 10232d97 mov dword ptr [0x1024648c], eax */
  w32((uint32_t)(0x1024648c), (EAX));
  /* 10232d9c call 0x10232830 */
  push32(0x10232da1u); f_10232830();
  /* 10232da1 push 0x102400f4 */
  push32((uint32_t)(0x102400f4u));
  /* 10232da6 mov dword ptr [0x10246494], eax */
  w32((uint32_t)(0x10246494), (EAX));
  /* 10232dab call 0x10232830 */
  push32(0x10232db0u); f_10232830();
  /* 10232db0 push 0x102400e0 */
  push32((uint32_t)(0x102400e0u));
  /* 10232db5 mov dword ptr [0x102464a0], eax */
  w32((uint32_t)(0x102464a0), (EAX));
  /* 10232dba call 0x10232830 */
  push32(0x10232dbfu); f_10232830();
  /* 10232dbf push 0x102400d4 */
  push32((uint32_t)(0x102400d4u));
  /* 10232dc4 mov dword ptr [0x102464a4], eax */
  w32((uint32_t)(0x102464a4), (EAX));
  /* 10232dc9 call 0x10232830 */
  push32(0x10232dceu); f_10232830();
  /* 10232dce push 0x102400c4 */
  push32((uint32_t)(0x102400c4u));
  /* 10232dd3 mov dword ptr [0x102464dc], eax */
  w32((uint32_t)(0x102464dc), (EAX));
  /* 10232dd8 call 0x10232830 */
  push32(0x10232dddu); f_10232830();
  /* 10232ddd push 0x102400b8 */
  push32((uint32_t)(0x102400b8u));
  /* 10232de2 mov dword ptr [0x102464e0], eax */
  w32((uint32_t)(0x102464e0), (EAX));
  /* 10232de7 call 0x10232830 */
  push32(0x10232decu); f_10232830();
  /* 10232dec push 0x102400ac */
  push32((uint32_t)(0x102400acu));
  /* 10232df1 mov dword ptr [0x102464e4], eax */
  w32((uint32_t)(0x102464e4), (EAX));
  /* 10232df6 call 0x10232830 */
  push32(0x10232dfbu); f_10232830();
  /* 10232dfb push 0x10240094 */
  push32((uint32_t)(0x10240094u));
  /* 10232e00 mov dword ptr [0x102464ec], eax */
  w32((uint32_t)(0x102464ec), (EAX));
  /* 10232e05 call 0x10232830 */
  push32(0x10232e0au); f_10232830();
  /* 10232e0a push 0x10240078 */
  push32((uint32_t)(0x10240078u));
  /* 10232e0f mov dword ptr [0x102464a8], eax */
  w32((uint32_t)(0x102464a8), (EAX));
  /* 10232e14 call 0x10232830 */
  push32(0x10232e19u); f_10232830();
  /* 10232e19 push 0x1024005c */
  push32((uint32_t)(0x1024005cu));
  /* 10232e1e mov dword ptr [0x102464ac], eax */
  w32((uint32_t)(0x102464ac), (EAX));
  /* 10232e23 call 0x10232830 */
  push32(0x10232e28u); f_10232830();
  /* 10232e28 push 0x10240044 */
  push32((uint32_t)(0x10240044u));
  /* 10232e2d mov dword ptr [0x102464b0], eax */
  w32((uint32_t)(0x102464b0), (EAX));
  /* 10232e32 call 0x10232830 */
  push32(0x10232e37u); f_10232830();
  /* 10232e37 push 0x1024002c */
  push32((uint32_t)(0x1024002cu));
  /* 10232e3c mov dword ptr [0x102464b4], eax */
  w32((uint32_t)(0x102464b4), (EAX));
  /* 10232e41 call 0x10232830 */
  push32(0x10232e46u); f_10232830();
  /* 10232e46 push 0x10240020 */
  push32((uint32_t)(0x10240020u));
  /* 10232e4b mov dword ptr [0x102464b8], eax */
  w32((uint32_t)(0x102464b8), (EAX));
  /* 10232e50 call 0x10232830 */
  push32(0x10232e55u); f_10232830();
  /* 10232e55 push 0x10240014 */
  push32((uint32_t)(0x10240014u));
  /* 10232e5a mov dword ptr [0x102464bc], eax */
  w32((uint32_t)(0x102464bc), (EAX));
  /* 10232e5f call 0x10232830 */
  push32(0x10232e64u); f_10232830();
  /* 10232e64 push 0x10240004 */
  push32((uint32_t)(0x10240004u));
  /* 10232e69 mov dword ptr [0x102464c0], eax */
  w32((uint32_t)(0x102464c0), (EAX));
  /* 10232e6e call 0x10232830 */
  push32(0x10232e73u); f_10232830();
  /* 10232e73 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232e76 mov dword ptr [0x102464c4], eax */
  w32((uint32_t)(0x102464c4), (EAX));
  /* 10232e7b push 0x1023fff8 */
  push32((uint32_t)(0x1023fff8u));
  /* 10232e80 call 0x10232830 */
  push32(0x10232e85u); f_10232830();
  /* 10232e85 push 0x1023ffec */
  push32((uint32_t)(0x1023ffecu));
  /* 10232e8a mov dword ptr [0x102464cc], eax */
  w32((uint32_t)(0x102464cc), (EAX));
  /* 10232e8f call 0x10232830 */
  push32(0x10232e94u); f_10232830();
  /* 10232e94 push 0x1023ffe0 */
  push32((uint32_t)(0x1023ffe0u));
  /* 10232e99 mov dword ptr [0x102464d0], eax */
  w32((uint32_t)(0x102464d0), (EAX));
  /* 10232e9e call 0x10232830 */
  push32(0x10232ea3u); f_10232830();
  /* 10232ea3 push 0x1023ffd0 */
  push32((uint32_t)(0x1023ffd0u));
  /* 10232ea8 mov dword ptr [0x102464f0], eax */
  w32((uint32_t)(0x102464f0), (EAX));
  /* 10232ead call 0x10232830 */
  push32(0x10232eb2u); f_10232830();
  /* 10232eb2 push 0x1023ffc4 */
  push32((uint32_t)(0x1023ffc4u));
  /* 10232eb7 mov dword ptr [0x102464f4], eax */
  w32((uint32_t)(0x102464f4), (EAX));
  /* 10232ebc call 0x10232830 */
  push32(0x10232ec1u); f_10232830();
  /* 10232ec1 push 0x1023ffb8 */
  push32((uint32_t)(0x1023ffb8u));
  /* 10232ec6 mov dword ptr [0x102464f8], eax */
  w32((uint32_t)(0x102464f8), (EAX));
  /* 10232ecb call 0x10232830 */
  push32(0x10232ed0u); f_10232830();
  /* 10232ed0 push 0x1023ffac */
  push32((uint32_t)(0x1023ffacu));
  /* 10232ed5 mov dword ptr [0x102464fc], eax */
  w32((uint32_t)(0x102464fc), (EAX));
  /* 10232eda call 0x10232830 */
  push32(0x10232edfu); f_10232830();
  /* 10232edf push 0x1023ff9c */
  push32((uint32_t)(0x1023ff9cu));
  /* 10232ee4 mov dword ptr [0x10246500], eax */
  w32((uint32_t)(0x10246500), (EAX));
  /* 10232ee9 call 0x10232830 */
  push32(0x10232eeeu); f_10232830();
  /* 10232eee push 0x1023ff8c */
  push32((uint32_t)(0x1023ff8cu));
  /* 10232ef3 mov dword ptr [0x10246504], eax */
  w32((uint32_t)(0x10246504), (EAX));
  /* 10232ef8 call 0x10232830 */
  push32(0x10232efdu); f_10232830();
  /* 10232efd push 0x1023ff78 */
  push32((uint32_t)(0x1023ff78u));
  /* 10232f02 mov dword ptr [0x1024650c], eax */
  w32((uint32_t)(0x1024650c), (EAX));
  /* 10232f07 call 0x10232830 */
  push32(0x10232f0cu); f_10232830();
  /* 10232f0c mov dword ptr [0x10246508], eax */
  w32((uint32_t)(0x10246508), (EAX));
  /* 10232f11 push 0x1023ff60 */
  push32((uint32_t)(0x1023ff60u));
  /* 10232f16 call 0x10232830 */
  push32(0x10232f1bu); f_10232830();
  /* 10232f1b push 0x1023ff48 */
  push32((uint32_t)(0x1023ff48u));
  /* 10232f20 mov dword ptr [0x10243850], eax */
  w32((uint32_t)(0x10243850), (EAX));
  /* 10232f25 call 0x10232830 */
  push32(0x10232f2au); f_10232830();
  /* 10232f2a push 0x1023ff38 */
  push32((uint32_t)(0x1023ff38u));
  /* 10232f2f mov dword ptr [0x102436b0], eax */
  w32((uint32_t)(0x102436b0), (EAX));
  /* 10232f34 call 0x10232830 */
  push32(0x10232f39u); f_10232830();
  /* 10232f39 push 0x1023ff28 */
  push32((uint32_t)(0x1023ff28u));
  /* 10232f3e mov dword ptr [0x10246510], eax */
  w32((uint32_t)(0x10246510), (EAX));
  /* 10232f43 call 0x10232830 */
  push32(0x10232f48u); f_10232830();
  /* 10232f48 push 0x1023ff18 */
  push32((uint32_t)(0x1023ff18u));
  /* 10232f4d mov dword ptr [0x102464d4], eax */
  w32((uint32_t)(0x102464d4), (EAX));
  /* 10232f52 call 0x10232830 */
  push32(0x10232f57u); f_10232830();
  /* 10232f57 push 0x1023ff08 */
  push32((uint32_t)(0x1023ff08u));
  /* 10232f5c mov dword ptr [0x102464d8], eax */
  w32((uint32_t)(0x102464d8), (EAX));
  /* 10232f61 call 0x10232830 */
  push32(0x10232f66u); f_10232830();
  /* 10232f66 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232f69 mov dword ptr [0x10246230], eax */
  w32((uint32_t)(0x10246230), (EAX));
  /* 10232f6e push 0x1023fef8 */
  push32((uint32_t)(0x1023fef8u));
  /* 10232f73 call 0x10232830 */
  push32(0x10232f78u); f_10232830();
  /* 10232f78 push 0x1023fee8 */
  push32((uint32_t)(0x1023fee8u));
  /* 10232f7d mov dword ptr [0x102461e8], eax */
  w32((uint32_t)(0x102461e8), (EAX));
  /* 10232f82 call 0x10232830 */
  push32(0x10232f87u); f_10232830();
  /* 10232f87 push 0x1023fed8 */
  push32((uint32_t)(0x1023fed8u));
  /* 10232f8c mov dword ptr [0x10245f40], eax */
  w32((uint32_t)(0x10245f40), (EAX));
  /* 10232f91 call 0x10232830 */
  push32(0x10232f96u); f_10232830();
  /* 10232f96 push 0x1023fec8 */
  push32((uint32_t)(0x1023fec8u));
  /* 10232f9b mov dword ptr [0x102438b0], eax */
  w32((uint32_t)(0x102438b0), (EAX));
  /* 10232fa0 call 0x10232830 */
  push32(0x10232fa5u); f_10232830();
  /* 10232fa5 push 0x1023feb4 */
  push32((uint32_t)(0x1023feb4u));
  /* 10232faa mov dword ptr [0x102461c8], eax */
  w32((uint32_t)(0x102461c8), (EAX));
  /* 10232faf call 0x10232830 */
  push32(0x10232fb4u); f_10232830();
  /* 10232fb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232fb7 mov dword ptr [0x102438c8], eax */
  w32((uint32_t)(0x102438c8), (EAX));
L_10232fbc:;
  /* 10232fbc mov eax, 1 */
  EAX = (0x1u);
  /* 10232fc1 ret 0xc */
  ESPCHK(0x10232890u, _esp0);
  ESP += 16; return;
}

/* FUN_10002fd0 @ 0x10232fd0 (34 bytes, 10 insns) */
void f_10232fd0(void) {
  FTRACE(0x10232fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10232fd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10232fd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10232fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10232fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10232fda push 0x102405ec */
  push32((uint32_t)(0x102405ecu));
  /* 10232fdf push 0x10243728 */
  push32((uint32_t)(0x10243728u));
  /* 10232fe4 call 0x10236f10 */
  push32(0x10232fe9u); f_10236f10();
  /* 10232fe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10232fec mov eax, 0x10243728 */
  EAX = (0x10243728u);
  /* 10232ff1 ret  */
  ESPCHK(0x10232fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003000 @ 0x10233000 (45 bytes, 16 insns) */
void f_10233000(void) {
  FTRACE(0x10233000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10233000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10233004 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10233008 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1023300d push eax */
  push32((uint32_t)(EAX));
  /* 1023300e push ecx */
  push32((uint32_t)(ECX));
  /* 1023300f call 0x102327e0 */
  push32(0x10233014u); f_102327e0();
  /* 10233014 mov ecx, eax */
  ECX = (EAX);
  /* 10233016 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1023301a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023301d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10233020 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10233023 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10233026 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10233029 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1023302a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1023302c ret  */
  ESPCHK(0x10233000u, _esp0);
  ESP += 4; return;
}

/* FUN_10003030 @ 0x10233030 (171 bytes, 77 insns) */
void f_10233030(void) {
  FTRACE(0x10233030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10233030 push ebx */
  push32((uint32_t)(EBX));
  /* 10233031 push ebp */
  push32((uint32_t)(EBP));
  /* 10233032 push esi */
  push32((uint32_t)(ESI));
  /* 10233033 push edi */
  push32((uint32_t)(EDI));
  /* 10233034 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10233038 push edi */
  push32((uint32_t)(EDI));
  /* 10233039 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023303fu);
  /* 1023303f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10233043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233046 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233048 jl 0x10233051 */
  if ((C.sf!=C.of)) goto L_10233051;
  /* 1023304a pop edi */
  EDI = (pop32());
  /* 1023304b pop esi */
  ESI = (pop32());
  /* 1023304c pop ebp */
  EBP = (pop32());
  /* 1023304d mov al, 1 */
  AL = (0x1u);
  /* 1023304f pop ebx */
  EBX = (pop32());
  /* 10233050 ret  */
  ESPCHK(0x10233030u, _esp0);
  ESP += 4; return;
L_10233051:;
  /* 10233051 push edi */
  push32((uint32_t)(EDI));
  /* 10233052 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233058u);
  /* 10233058 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 1023305c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023305e push esi */
  push32((uint32_t)(ESI));
  /* 1023305f push edi */
  push32((uint32_t)(EDI));
  /* 10233060 push ebp */
  push32((uint32_t)(EBP));
  /* 10233061 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10233065 call 0x10233000 */
  push32(0x1023306au); f_10233000();
  /* 1023306a push ebp */
  push32((uint32_t)(EBP));
  /* 1023306b mov ebx, eax */
  EBX = (EAX);
  /* 1023306d call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233073u);
  /* 10233073 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233076 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233078 jle 0x102330d4 */
  if ((C.zf||C.sf!=C.of)) goto L_102330d4;
  /* 1023307a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233080 jle 0x102330d4 */
  if ((C.zf||C.sf!=C.of)) goto L_102330d4;
  /* 10233082 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10233087 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10233089 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1023308b sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 1023308e mov eax, edx */
  EAX = (EDX);
  /* 10233090 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10233093 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10233095 mov ebx, edx */
  EBX = (EDX);
L_10233097:;
  /* 10233097 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023309a mov eax, 0xf */
  EAX = (0xfu);
  /* 1023309f jg 0x102330a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_102330a3;
  /* 102330a1 mov eax, ebx */
  EAX = (EBX);
L_102330a3:;
  /* 102330a3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102330a5 jge 0x102330b6 */
  if ((C.sf==C.of)) goto L_102330b6;
  /* 102330a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102330a9 push ebp */
  push32((uint32_t)(EBP));
  /* 102330aa push edi */
  push32((uint32_t)(EDI));
  /* 102330ab call 0x102326b0 */
  push32(0x102330b0u); f_102326b0();
  /* 102330b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102330b3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102330b4 jmp 0x10233097 */
  goto L_10233097;
L_102330b6:;
  /* 102330b6 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 102330ba push ecx */
  push32((uint32_t)(ECX));
  /* 102330bb push edi */
  push32((uint32_t)(EDI));
  /* 102330bc push ebp */
  push32((uint32_t)(EBP));
  /* 102330bd call 0x10233000 */
  push32(0x102330c2u); f_10233000();
  /* 102330c2 push eax */
  push32((uint32_t)(EAX));
  /* 102330c3 push edi */
  push32((uint32_t)(EDI));
  /* 102330c4 push ebp */
  push32((uint32_t)(EBP));
  /* 102330c5 call 0x102326b0 */
  push32(0x102330cau); f_102326b0();
  /* 102330ca add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102330cd mov al, 1 */
  AL = (0x1u);
  /* 102330cf pop edi */
  EDI = (pop32());
  /* 102330d0 pop esi */
  ESI = (pop32());
  /* 102330d1 pop ebp */
  EBP = (pop32());
  /* 102330d2 pop ebx */
  EBX = (pop32());
  /* 102330d3 ret  */
  ESPCHK(0x10233030u, _esp0);
  ESP += 4; return;
L_102330d4:;
  /* 102330d4 pop edi */
  EDI = (pop32());
  /* 102330d5 pop esi */
  ESI = (pop32());
  /* 102330d6 pop ebp */
  EBP = (pop32());
  /* 102330d7 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 102330d9 pop ebx */
  EBX = (pop32());
  /* 102330da ret  */
  ESPCHK(0x10233030u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x102330e0 (369 bytes, 82 insns) */
void f_102330e0(void) {
  FTRACE(0x102330e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102330e0 push ebx */
  push32((uint32_t)(EBX));
  /* 102330e1 push esi */
  push32((uint32_t)(ESI));
  /* 102330e2 call dword ptr [0x10246480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246480))), 0x102330e8u);
  /* 102330e8 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 102330ed mov dword ptr [0x10246234], eax */
  w32((uint32_t)(0x10246234), (EAX));
  /* 102330f2 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102330f8u);
  /* 102330f8 mov ebx, 1 */
  EBX = (0x1u);
  /* 102330fd mov esi, eax */
  ESI = (EAX);
  /* 102330ff push ebx */
  push32((uint32_t)(EBX));
  /* 10233100 call 0x102327d0 */
  push32(0x10233105u); f_102327d0();
  /* 10233105 push 4 */
  push32((uint32_t)(0x4u));
  /* 10233107 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10233109 call 0x102327d0 */
  push32(0x1023310eu); f_102327d0();
  /* 1023310e push 5 */
  push32((uint32_t)(0x5u));
  /* 10233110 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10233112 call 0x102327d0 */
  push32(0x10233117u); f_102327d0();
  /* 10233117 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10233119 mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 1023311e push 3 */
  push32((uint32_t)(0x3u));
  /* 10233120 mov dword ptr [0x10246130], esi */
  w32((uint32_t)(0x10246130), (ESI));
  /* 10233126 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10233129 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1023312c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1023312f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10233132 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10233135 mov ecx, dword ptr [eax + 0x10243a70] */
  ECX = (r32((uint32_t)(EAX + 0x10243a70)));
  /* 1023313b lea edx, [eax + 0x102438e0] */
  EDX = ((uint32_t)(EAX + 0x102438e0));
  /* 10233141 mov dword ptr [0x10246140], edx */
  w32((uint32_t)(0x10246140), (EDX));
  /* 10233147 lea edx, [eax + 0x10243a74] */
  EDX = ((uint32_t)(EAX + 0x10243a74));
  /* 1023314d mov dword ptr [0x10246584], ecx */
  w32((uint32_t)(0x10246584), (ECX));
  /* 10233153 mov ecx, dword ptr [eax + 0x10243c04] */
  ECX = (r32((uint32_t)(EAX + 0x10243c04)));
  /* 10233159 mov dword ptr [0x10246144], edx */
  w32((uint32_t)(0x10246144), (EDX));
  /* 1023315f lea edx, [eax + 0x10243c08] */
  EDX = ((uint32_t)(EAX + 0x10243c08));
  /* 10233165 mov dword ptr [0x10246588], ecx */
  w32((uint32_t)(0x10246588), (ECX));
  /* 1023316b mov dword ptr [0x102461cc], edx */
  w32((uint32_t)(0x102461cc), (EDX));
  /* 10233171 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233177u);
  /* 10233177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233179 mov dword ptr [0x10246210], eax */
  w32((uint32_t)(0x10246210), (EAX));
  /* 1023317e call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233184u);
  /* 10233184 push 2 */
  push32((uint32_t)(0x2u));
  /* 10233186 mov dword ptr [0x102435a0], eax */
  w32((uint32_t)(0x102435a0), (EAX));
  /* 1023318b call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233191u);
  /* 10233191 push 4 */
  push32((uint32_t)(0x4u));
  /* 10233193 mov dword ptr [0x10246300], eax */
  w32((uint32_t)(0x10246300), (EAX));
  /* 10233198 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023319eu);
  /* 1023319e push 5 */
  push32((uint32_t)(0x5u));
  /* 102331a0 mov dword ptr [0x102436a8], eax */
  w32((uint32_t)(0x102436a8), (EAX));
  /* 102331a5 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102331abu);
  /* 102331ab push ebx */
  push32((uint32_t)(EBX));
  /* 102331ac mov dword ptr [0x10246068], eax */
  w32((uint32_t)(0x10246068), (EAX));
  /* 102331b1 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102331b7u);
  /* 102331b7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102331ba mov dword ptr [0x102462b8], eax */
  w32((uint32_t)(0x102462b8), (EAX));
  /* 102331bf call 0x10232710 */
  push32(0x102331c4u); f_10232710();
  /* 102331c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102331c6 jne 0x102331d2 */
  if (!C.zf) goto L_102331d2;
  /* 102331c8 mov dword ptr [0x1023f248], 4 */
  w32((uint32_t)(0x1023f248), (0x4u));
L_102331d2:;
  /* 102331d2 push 0x1023f114 */
  push32((uint32_t)(0x1023f114u));
  /* 102331d7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102331d9 call dword ptr [0x1024648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024648c))), 0x102331dfu);
  /* 102331df push 0x10246518 */
  push32((uint32_t)(0x10246518u));
  /* 102331e4 call 0x102327c0 */
  push32(0x102331e9u); f_102327c0();
  /* 102331e9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102331eb push 0x1023f244 */
  push32((uint32_t)(0x1023f244u));
  /* 102331f0 call 0x102327a0 */
  push32(0x102331f5u); f_102327a0();
  /* 102331f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102331f8 mov byte ptr [0x10246108], bl */
  w8((uint32_t)(0x10246108), (BL));
  /* 102331fe mov byte ptr [0x1024610a], bl */
  w8((uint32_t)(0x1024610a), (BL));
  /* 10233204 mov byte ptr [0x1024610c], bl */
  w8((uint32_t)(0x1024610c), (BL));
  /* 1023320a mov byte ptr [0x1024610d], bl */
  w8((uint32_t)(0x1024610d), (BL));
  /* 10233210 mov byte ptr [0x102462a3], bl */
  w8((uint32_t)(0x102462a3), (BL));
  /* 10233216 mov byte ptr [0x102462a1], bl */
  w8((uint32_t)(0x102462a1), (BL));
  /* 1023321c mov byte ptr [0x102462a4], bl */
  w8((uint32_t)(0x102462a4), (BL));
  /* 10233222 mov byte ptr [0x102462a5], bl */
  w8((uint32_t)(0x102462a5), (BL));
  /* 10233228 pop esi */
  ESI = (pop32());
  /* 10233229 mov byte ptr [0x1024610b], 0 */
  w8((uint32_t)(0x1024610b), (0x0u));
  /* 10233230 mov byte ptr [0x10246109], 0 */
  w8((uint32_t)(0x10246109), (0x0u));
  /* 10233237 mov byte ptr [0x102462a0], 0 */
  w8((uint32_t)(0x102462a0), (0x0u));
  /* 1023323e mov byte ptr [0x102462a2], 0 */
  w8((uint32_t)(0x102462a2), (0x0u));
  /* 10233245 mov dword ptr [0x102465cc], 0 */
  w32((uint32_t)(0x102465cc), (0x0u));
  /* 1023324f pop ebx */
  EBX = (pop32());
  /* 10233250 ret  */
  ESPCHK(0x102330e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003260 @ 0x10233260 (85 bytes, 29 insns) */
void f_10233260(void) {
  FTRACE(0x10233260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10233260 mov eax, dword ptr [0x10245ed8] */
  EAX = (r32((uint32_t)(0x10245ed8)));
  /* 10233265 push esi */
  push32((uint32_t)(ESI));
  /* 10233266 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233269 jg 0x102332b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_102332b3;
  /* 1023326b push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10233270 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233276u);
  /* 10233276 mov ecx, eax */
  ECX = (EAX);
  /* 10233278 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 1023327d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1023327f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10233282 mov eax, edx */
  EAX = (EDX);
  /* 10233284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233287 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1023328a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023328c mov esi, edx */
  ESI = (EDX);
  /* 1023328e je 0x102332b3 */
  if (C.zf) goto L_102332b3;
  /* 10233290 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233292 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233294 push esi */
  push32((uint32_t)(ESI));
  /* 10233295 push 0x10243680 */
  push32((uint32_t)(0x10243680u));
  /* 1023329a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102332a0u);
  /* 102332a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102332a2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102332a4 push esi */
  push32((uint32_t)(ESI));
  /* 102332a5 push 0x102435c0 */
  push32((uint32_t)(0x102435c0u));
  /* 102332aa call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102332b0u);
  /* 102332b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102332b3:;
  /* 102332b3 pop esi */
  ESI = (pop32());
  /* 102332b4 ret  */
  ESPCHK(0x10233260u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x102332c0 (1 bytes, 1 insns) */
void f_102332c0(void) {
  FTRACE(0x102332c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102332c0 ret  */
  ESPCHK(0x102332c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x102332d0 (157 bytes, 43 insns) */
void f_102332d0(void) {
  FTRACE(0x102332d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102332d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102332d2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102332d4 push 0x102462d0 */
  push32((uint32_t)(0x102462d0u));
  /* 102332d9 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102332dfu);
  /* 102332df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102332e1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102332e3 push 0x102462d8 */
  push32((uint32_t)(0x102462d8u));
  /* 102332e8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102332eeu);
  /* 102332ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102332f0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102332f2 push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 102332f7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102332fdu);
  /* 102332fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102332ff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233301 push 0x102462c8 */
  push32((uint32_t)(0x102462c8u));
  /* 10233306 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023330cu);
  /* 1023330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023330e push 0xa */
  push32((uint32_t)(0xau));
  /* 10233310 push 0x102462e0 */
  push32((uint32_t)(0x102462e0u));
  /* 10233315 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023331bu);
  /* 1023331b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023331d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1023331f push 0x10246218 */
  push32((uint32_t)(0x10246218u));
  /* 10233324 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023332au);
  /* 1023332a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023332d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023332f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10233331 push 0x10246200 */
  push32((uint32_t)(0x10246200u));
  /* 10233336 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023333cu);
  /* 1023333c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023333e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10233340 push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 10233345 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023334bu);
  /* 1023334b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023334d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1023334f push 0x10246220 */
  push32((uint32_t)(0x10246220u));
  /* 10233354 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023335au);
  /* 1023335a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023335c push 0xa */
  push32((uint32_t)(0xau));
  /* 1023335e push 0x10246228 */
  push32((uint32_t)(0x10246228u));
  /* 10233363 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233369u);
  /* 10233369 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023336c ret  */
  ESPCHK(0x102332d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x10233370 (79 bytes, 22 insns) */
void f_10233370(void) {
  FTRACE(0x10233370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10233370 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233372 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233374 push 0x10243890 */
  push32((uint32_t)(0x10243890u));
  /* 10233379 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023337fu);
  /* 1023337f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233381 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233383 push 0x10243898 */
  push32((uint32_t)(0x10243898u));
  /* 10233388 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023338eu);
  /* 1023338e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233390 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233392 push 0x10243888 */
  push32((uint32_t)(0x10243888u));
  /* 10233397 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023339du);
  /* 1023339d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023339f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102333a1 push 0x10245ef8 */
  push32((uint32_t)(0x10245ef8u));
  /* 102333a6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102333acu);
  /* 102333ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102333ae push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102333b0 push 0x10245ee8 */
  push32((uint32_t)(0x10245ee8u));
  /* 102333b5 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102333bbu);
  /* 102333bb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102333be ret  */
  ESPCHK(0x10233370u, _esp0);
  ESP += 4; return;
}

/* FUN_100033c0 @ 0x102333c0 (64 bytes, 18 insns) */
void f_102333c0(void) {
  FTRACE(0x102333c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102333c0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102333c2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102333c4 push 0x10246018 */
  push32((uint32_t)(0x10246018u));
  /* 102333c9 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102333cfu);
  /* 102333cf push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102333d1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102333d3 push 0x10246020 */
  push32((uint32_t)(0x10246020u));
  /* 102333d8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102333deu);
  /* 102333de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102333e0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102333e2 push 0x10246028 */
  push32((uint32_t)(0x10246028u));
  /* 102333e7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102333edu);
  /* 102333ed push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102333ef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102333f1 push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 102333f6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102333fcu);
  /* 102333fc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102333ff ret  */
  ESPCHK(0x102333c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003400 @ 0x10233400 (3787 bytes, 1079 insns) */
void f_10233400(void) {
  FTRACE(0x10233400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10233400 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10233403 push ebx */
  push32((uint32_t)(EBX));
  /* 10233404 push ebp */
  push32((uint32_t)(EBP));
  /* 10233405 push esi */
  push32((uint32_t)(ESI));
  /* 10233406 push edi */
  push32((uint32_t)(EDI));
  /* 10233407 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1023340c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10233411 call dword ptr [0x10246498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246498))), 0x10233417u);
  /* 10233417 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233419 call 0x10232800 */
  push32(0x1023341eu); f_10232800();
  /* 1023341e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10233420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233422 call 0x102326e0 */
  push32(0x10233427u); f_102326e0();
  /* 10233427 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10233429 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023342b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1023342f call 0x102326e0 */
  push32(0x10233434u); f_102326e0();
  /* 10233434 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10233436 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233438 mov edi, eax */
  EDI = (EAX);
  /* 1023343a call 0x102326e0 */
  push32(0x1023343fu); f_102326e0();
  /* 1023343f push 0xe */
  push32((uint32_t)(0xeu));
  /* 10233441 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233443 mov esi, eax */
  ESI = (EAX);
  /* 10233445 call 0x102326e0 */
  push32(0x1023344au); f_102326e0();
  /* 1023344a push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 1023344f mov ebx, eax */
  EBX = (EAX);
  /* 10233451 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233457u);
  /* 10233457 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1023345a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023345f add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10233461 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 10233465 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 1023346a lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 1023346d mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 10233471 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10233477u);
  /* 10233477 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 1023347c mov ebx, eax */
  EBX = (EAX);
  /* 1023347e call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233484u);
  /* 10233484 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10233489 mov ebp, eax */
  EBP = (EAX);
  /* 1023348b call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10233491u);
  /* 10233491 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10233496 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 1023349a call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102334a0u);
  /* 102334a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102334a3 mov edi, eax */
  EDI = (EAX);
  /* 102334a5 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 102334aa call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102334b0u);
  /* 102334b0 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 102334b5 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102334b9 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102334bfu);
  /* 102334bf push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 102334c4 mov esi, eax */
  ESI = (EAX);
  /* 102334c6 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102334ccu);
  /* 102334cc push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 102334d1 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 102334d5 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102334dbu);
  /* 102334db mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 102334df mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 102334e3 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102334e5 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 102334e9 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102334eb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102334ed sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102334ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102334f1 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102334f3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102334f5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102334f7 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 102334fc add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102334fe mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10233502 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233508u);
  /* 10233508 push 3 */
  push32((uint32_t)(0x3u));
  /* 1023350a mov bl, 1 */
  BL = (0x1u);
  /* 1023350c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233512u);
  /* 10233512 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233515 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023351a jle 0x1023354a */
  if ((C.zf||C.sf!=C.of)) goto L_1023354a;
  /* 1023351c push 1 */
  push32((uint32_t)(0x1u));
  /* 1023351e call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233524u);
  /* 10233524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233527 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023352c jle 0x1023354a */
  if ((C.zf||C.sf!=C.of)) goto L_1023354a;
  /* 1023352e push 4 */
  push32((uint32_t)(0x4u));
  /* 10233530 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233536u);
  /* 10233536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233539 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023353e jle 0x1023354a */
  if ((C.zf||C.sf!=C.of)) goto L_1023354a;
  /* 10233540 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10233544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10233546 jne 0x1023354a */
  if (!C.zf) goto L_1023354a;
  /* 10233548 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_1023354a:;
  /* 1023354a push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 1023354f call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233555u);
  /* 10233555 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233557 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1023355b call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233561u);
  /* 10233561 push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10233566 mov esi, eax */
  ESI = (EAX);
  /* 10233568 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023356eu);
  /* 1023356e push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10233573 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 10233577 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023357du);
  /* 1023357d push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10233582 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233588u);
  /* 10233588 push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 1023358d mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 10233591 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233597u);
  /* 10233597 push 0x102462b0 */
  push32((uint32_t)(0x102462b0u));
  /* 1023359c mov edi, eax */
  EDI = (EAX);
  /* 1023359e call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102335a4u);
  /* 102335a4 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102335a9 mov ebp, eax */
  EBP = (EAX);
  /* 102335ab call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102335b1u);
  /* 102335b1 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102335b3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102335b5 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102335b7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102335b9 push 0x10246090 */
  push32((uint32_t)(0x10246090u));
  /* 102335be mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 102335c2 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 102335c7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102335cdu);
  /* 102335cd push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102335cf push 0x62 */
  push32((uint32_t)(0x62u));
  /* 102335d1 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 102335d6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102335dcu);
  /* 102335dc push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 102335e1 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102335e7u);
  /* 102335e7 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 102335ec mov edi, eax */
  EDI = (EAX);
  /* 102335ee call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102335f4u);
  /* 102335f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102335f7 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102335f9 je 0x10233600 */
  if (C.zf) goto L_10233600;
  /* 102335fb mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10233600:;
  /* 10233600 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10233604 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10233606 je 0x10233fcd */
  if (C.zf) goto L_10233fcd;
  /* 1023360c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023360e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233610 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233612 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 10233617 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023361du);
  /* 1023361d push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 10233622 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233628u);
  /* 10233628 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023362b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023362d je 0x102342c3 */
  if (C.zf) goto L_102342c3;
  /* 10233633 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233635 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233637 push 0x102462f8 */
  push32((uint32_t)(0x102462f8u));
  /* 1023363c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233642u);
  /* 10233642 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233645 call dword ptr [0x102464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464f0))), 0x1023364bu);
  /* 1023364b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023364d jne 0x10233690 */
  if (!C.zf) goto L_10233690;
  /* 1023364f cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233655 jle 0x1023367c */
  if ((C.zf||C.sf!=C.of)) goto L_1023367c;
  /* 10233657 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233659 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023365b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023365d push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 10233662 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233668u);
  /* 10233668 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023366a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023366c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023366e push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10233673 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233679u);
  /* 10233679 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023367c:;
  /* 1023367c push 1 */
  push32((uint32_t)(0x1u));
  /* 1023367e push 1 */
  push32((uint32_t)(0x1u));
  /* 10233680 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233682 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x10233688u);
  /* 10233688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023368b jmp 0x1023379e */
  goto L_1023379e;
L_10233690:;
  /* 10233690 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 10233695 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x1023369bu);
  /* 1023369b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023369e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102336a0 je 0x102336ca */
  if (C.zf) goto L_102336ca;
  /* 102336a2 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102336a8 jle 0x102336b2 */
  if ((C.zf||C.sf!=C.of)) goto L_102336b2;
  /* 102336aa push 6 */
  push32((uint32_t)(0x6u));
  /* 102336ac push 8 */
  push32((uint32_t)(0x8u));
  /* 102336ae push 9 */
  push32((uint32_t)(0x9u));
  /* 102336b0 jmp 0x102336f0 */
  goto L_102336f0;
L_102336b2:;
  /* 102336b2 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102336b8 jle 0x102336c2 */
  if ((C.zf||C.sf!=C.of)) goto L_102336c2;
  /* 102336ba push 3 */
  push32((uint32_t)(0x3u));
  /* 102336bc push 5 */
  push32((uint32_t)(0x5u));
  /* 102336be push 9 */
  push32((uint32_t)(0x9u));
  /* 102336c0 jmp 0x102336f0 */
  goto L_102336f0;
L_102336c2:;
  /* 102336c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102336c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102336c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 102336c8 jmp 0x102336f0 */
  goto L_102336f0;
L_102336ca:;
  /* 102336ca cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102336d0 jle 0x102336da */
  if ((C.zf||C.sf!=C.of)) goto L_102336da;
  /* 102336d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 102336d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 102336d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 102336d8 jmp 0x102336f0 */
  goto L_102336f0;
L_102336da:;
  /* 102336da cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102336e0 jle 0x102336ea */
  if ((C.zf||C.sf!=C.of)) goto L_102336ea;
  /* 102336e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 102336e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102336e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 102336e8 jmp 0x102336f0 */
  goto L_102336f0;
L_102336ea:;
  /* 102336ea push 4 */
  push32((uint32_t)(0x4u));
  /* 102336ec push 4 */
  push32((uint32_t)(0x4u));
  /* 102336ee push 0xa */
  push32((uint32_t)(0xau));
L_102336f0:;
  /* 102336f0 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102336f6u);
  /* 102336f6 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 102336fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102336fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102336ff mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10233704 je 0x1023370b */
  if (C.zf) goto L_1023370b;
  /* 10233706 mov edi, 0x12c */
  EDI = (0x12cu);
L_1023370b:;
  /* 1023370b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023370e jge 0x1023372c */
  if ((C.sf==C.of)) goto L_1023372c;
  /* 10233710 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233716 jle 0x1023372c */
  if ((C.zf||C.sf!=C.of)) goto L_1023372c;
  /* 10233718 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023371a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023371c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023371e push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 10233723 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233729u);
  /* 10233729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023372c:;
  /* 1023372c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233732 jle 0x1023376d */
  if ((C.zf||C.sf!=C.of)) goto L_1023376d;
  /* 10233734 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10233736 je 0x10233752 */
  if (C.zf) goto L_10233752;
  /* 10233738 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023373a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1023373f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10233744 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 10233749 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023374fu);
  /* 1023374f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233752:;
  /* 10233752 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233758 jle 0x1023376d */
  if ((C.zf||C.sf!=C.of)) goto L_1023376d;
  /* 1023375a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023375c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023375e push edi */
  push32((uint32_t)(EDI));
  /* 1023375f push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10233764 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023376au);
  /* 1023376a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023376d:;
  /* 1023376d push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10233772 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233778u);
  /* 10233778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023377b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023377d je 0x1023379e */
  if (C.zf) goto L_1023379e;
  /* 1023377f cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233785 jle 0x1023379e */
  if ((C.zf||C.sf!=C.of)) goto L_1023379e;
  /* 10233787 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 1023378c call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233792u);
  /* 10233792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10233797 jle 0x1023379e */
  if ((C.zf||C.sf!=C.of)) goto L_1023379e;
  /* 10233799 call 0x102332d0 */
  push32(0x1023379eu); f_102332d0();
L_1023379e:;
  /* 1023379e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 102337a2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102337a4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102337a7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 102337a9 jge 0x102337af */
  if ((C.sf==C.of)) goto L_102337af;
  /* 102337ab push 5 */
  push32((uint32_t)(0x5u));
  /* 102337ad jmp 0x102337b3 */
  goto L_102337b3;
L_102337af:;
  /* 102337af add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102337b2 push eax */
  push32((uint32_t)(EAX));
L_102337b3:;
  /* 102337b3 push 0x10245f10 */
  push32((uint32_t)(0x10245f10u));
  /* 102337b8 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102337beu);
  /* 102337be mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 102337c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102337c5 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102337c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102337ca jge 0x102337e0 */
  if ((C.sf==C.of)) goto L_102337e0;
  /* 102337cc push 0x46 */
  push32((uint32_t)(0x46u));
  /* 102337ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 102337d0 push 0x10243868 */
  push32((uint32_t)(0x10243868u));
  /* 102337d5 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102337dbu);
  /* 102337db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102337de jmp 0x1023381a */
  goto L_1023381a;
L_102337e0:;
  /* 102337e0 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 102337e3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102337e5 push ecx */
  push32((uint32_t)(ECX));
  /* 102337e6 push 0x10243868 */
  push32((uint32_t)(0x10243868u));
  /* 102337eb call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102337f1u);
  /* 102337f1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102337f3 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 102337f6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 102337f8 push edx */
  push32((uint32_t)(EDX));
  /* 102337f9 push 0x10243868 */
  push32((uint32_t)(0x10243868u));
  /* 102337fe call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233804u);
  /* 10233804 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233806 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10233809 push 0xa */
  push32((uint32_t)(0xau));
  /* 1023380b push edi */
  push32((uint32_t)(EDI));
  /* 1023380c push 0x10243868 */
  push32((uint32_t)(0x10243868u));
  /* 10233811 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233817u);
  /* 10233817 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023381a:;
  /* 1023381a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1023381c push 0 */
  push32((uint32_t)(0x0u));
  /* 1023381e call 0x102326e0 */
  push32(0x10233823u); f_102326e0();
  /* 10233823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10233828 je 0x10233887 */
  if (C.zf) goto L_10233887;
  /* 1023382a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023382c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023382e push 0x10246268 */
  push32((uint32_t)(0x10246268u));
  /* 10233833 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233839u);
  /* 10233839 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023383b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023383d push 0x10246250 */
  push32((uint32_t)(0x10246250u));
  /* 10233842 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233848u);
  /* 10233848 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023384a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023384c push 0x10246260 */
  push32((uint32_t)(0x10246260u));
  /* 10233851 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233857u);
  /* 10233857 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233859 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023385b push 0x10246240 */
  push32((uint32_t)(0x10246240u));
  /* 10233860 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233866u);
  /* 10233866 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233868 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023386a push 0x10246248 */
  push32((uint32_t)(0x10246248u));
  /* 1023386f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233875u);
  /* 10233875 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233877 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233879 push 0x10246238 */
  push32((uint32_t)(0x10246238u));
  /* 1023387e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233884u);
  /* 10233884 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233887:;
  /* 10233887 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233889 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023388b push 3 */
  push32((uint32_t)(0x3u));
  /* 1023388d push 0x10243820 */
  push32((uint32_t)(0x10243820u));
  /* 10233892 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233898u);
  /* 10233898 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023389a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023389c push 1 */
  push32((uint32_t)(0x1u));
  /* 1023389e push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102338a3 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102338a9u);
  /* 102338a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102338ab push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102338ad push 2 */
  push32((uint32_t)(0x2u));
  /* 102338af push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102338b4 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102338bau);
  /* 102338ba mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 102338be add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102338c1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102338c3 jne 0x102338d9 */
  if (!C.zf) goto L_102338d9;
  /* 102338c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102338c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102338c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 102338cb push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102338d0 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102338d6u);
  /* 102338d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102338d9:;
  /* 102338d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102338db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102338dd push 1 */
  push32((uint32_t)(0x1u));
  /* 102338df push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 102338e4 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102338eau);
  /* 102338ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102338ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102338ee push 1 */
  push32((uint32_t)(0x1u));
  /* 102338f0 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 102338f5 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102338fbu);
  /* 102338fb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102338fd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102338ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10233901 push 0x10245f50 */
  push32((uint32_t)(0x10245f50u));
  /* 10233906 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023390cu);
  /* 1023390c push 5 */
  push32((uint32_t)(0x5u));
  /* 1023390e push 0xa */
  push32((uint32_t)(0xau));
  /* 10233910 push 2 */
  push32((uint32_t)(0x2u));
  /* 10233912 push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 10233917 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023391du);
  /* 1023391d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233920 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233922 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233924 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233926 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 1023392b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233931u);
  /* 10233931 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233933 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10233935 push 0x102435e0 */
  push32((uint32_t)(0x102435e0u));
  /* 1023393a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233940u);
  /* 10233940 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10233945 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023394bu);
  /* 1023394b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023394e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10233950 jle 0x10233977 */
  if ((C.zf||C.sf!=C.of)) goto L_10233977;
  /* 10233952 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10233954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233956 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233958 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 1023395d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233963u);
  /* 10233963 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233965 push 5 */
  push32((uint32_t)(0x5u));
  /* 10233967 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233969 push 0x10246078 */
  push32((uint32_t)(0x10246078u));
  /* 1023396e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233974u);
  /* 10233974 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233977:;
  /* 10233977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233979 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023397b push 1 */
  push32((uint32_t)(0x1u));
  /* 1023397d push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10233982 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233988u);
  /* 10233988 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023398b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023398d jne 0x102339a3 */
  if (!C.zf) goto L_102339a3;
  /* 1023398f push 0xa */
  push32((uint32_t)(0xau));
  /* 10233991 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233995 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 1023399a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102339a0u);
  /* 102339a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102339a3:;
  /* 102339a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102339a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102339a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102339a9 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 102339ae call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102339b4u);
  /* 102339b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102339b7 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102339ba jle 0x102339d0 */
  if ((C.zf||C.sf!=C.of)) goto L_102339d0;
  /* 102339bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102339be push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102339c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 102339c2 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 102339c7 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102339cdu);
  /* 102339cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102339d0:;
  /* 102339d0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102339d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102339d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102339d6 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 102339db call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102339e1u);
  /* 102339e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 102339e3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102339e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 102339e7 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 102339ec call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102339f2u);
  /* 102339f2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102339f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102339f6 push 0x10245ff8 */
  push32((uint32_t)(0x10245ff8u));
  /* 102339fb call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233a01u);
  /* 10233a01 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233a03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233a05 push 0x10245fb0 */
  push32((uint32_t)(0x10245fb0u));
  /* 10233a0a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233a10u);
  /* 10233a10 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233a12 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233a14 push 0x10245fb8 */
  push32((uint32_t)(0x10245fb8u));
  /* 10233a19 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233a1fu);
  /* 10233a1f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233a22 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233a24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233a26 push 0x10245fc0 */
  push32((uint32_t)(0x10245fc0u));
  /* 10233a2b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233a31u);
  /* 10233a31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233a33 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10233a35 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10233a3a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233a40u);
  /* 10233a40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233a42 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233a44 push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10233a49 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233a4fu);
  /* 10233a4f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233a51 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10233a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233a55 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10233a5a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233a60u);
  /* 10233a60 push 5 */
  push32((uint32_t)(0x5u));
  /* 10233a62 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233a64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10233a66 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10233a6b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233a71u);
  /* 10233a71 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233a74 push 5 */
  push32((uint32_t)(0x5u));
  /* 10233a76 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233a78 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233a7a push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10233a7f call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233a85u);
  /* 10233a85 push 5 */
  push32((uint32_t)(0x5u));
  /* 10233a87 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233a89 push 5 */
  push32((uint32_t)(0x5u));
  /* 10233a8b push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10233a90 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233a96u);
  /* 10233a96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233a98 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10233a9a push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10233a9f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233aa5u);
  /* 10233aa5 call 0x102326d0 */
  push32(0x10233aaau); f_102326d0();
  /* 10233aaa push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10233aaf mov edi, eax */
  EDI = (EAX);
  /* 10233ab1 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233ab7u);
  /* 10233ab7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233aba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233abc je 0x10233adf */
  if (C.zf) goto L_10233adf;
  /* 10233abe push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233ac0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233ac2 push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10233ac7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233acdu);
  /* 10233acd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233acf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233ad1 push 0x102437f0 */
  push32((uint32_t)(0x102437f0u));
  /* 10233ad6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233adcu);
  /* 10233adc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233adf:;
  /* 10233adf push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10233ae4 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233aeau);
  /* 10233aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233aed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233aef je 0x10233b17 */
  if (C.zf) goto L_10233b17;
  /* 10233af1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233af5 push 0x102438c0 */
  push32((uint32_t)(0x102438c0u));
  /* 10233afa call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233b00u);
  /* 10233b00 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233b02 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10233b04 push 0x10243800 */
  push32((uint32_t)(0x10243800u));
  /* 10233b09 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233b0fu);
  /* 10233b0f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233b12 call 0x102333c0 */
  push32(0x10233b17u); f_102333c0();
L_10233b17:;
  /* 10233b17 push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 10233b1c call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233b22u);
  /* 10233b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233b25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233b27 je 0x10233b4e */
  if (C.zf) goto L_10233b4e;
  /* 10233b29 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233b2b push 0xa */
  push32((uint32_t)(0xau));
  /* 10233b2d push 0xa */
  push32((uint32_t)(0xau));
  /* 10233b2f push 0x102435e8 */
  push32((uint32_t)(0x102435e8u));
  /* 10233b34 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233b3au);
  /* 10233b3a push 0xa */
  push32((uint32_t)(0xau));
  /* 10233b3c push 3 */
  push32((uint32_t)(0x3u));
  /* 10233b3e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10233b40 push 0x102435e8 */
  push32((uint32_t)(0x102435e8u));
  /* 10233b45 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233b4bu);
  /* 10233b4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233b4e:;
  /* 10233b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10233b50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233b52 call 0x10232690 */
  push32(0x10233b57u); f_10232690();
  /* 10233b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10233b59 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233b5fu);
  /* 10233b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233b62 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233b67 jle 0x10233bab */
  if ((C.zf||C.sf!=C.of)) goto L_10233bab;
  /* 10233b69 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 10233b6e call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233b74u);
  /* 10233b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233b77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233b79 je 0x10233bab */
  if (C.zf) goto L_10233bab;
  /* 10233b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10233b7d call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233b83u);
  /* 10233b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233b86 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233b8b jge 0x10233bab */
  if ((C.sf==C.of)) goto L_10233bab;
  /* 10233b8d push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10233b92 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233b98u);
  /* 10233b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233b9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233b9d jne 0x10233bab */
  if (!C.zf) goto L_10233bab;
  /* 10233b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10233ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233ba3 call 0x10232690 */
  push32(0x10233ba8u); f_10232690();
  /* 10233ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233bab:;
  /* 10233bab push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10233bb0 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233bb6u);
  /* 10233bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233bb9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233bbb je 0x10233d3c */
  if (C.zf) goto L_10233d3c;
  /* 10233bc1 push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10233bc6 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233bccu);
  /* 10233bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233bcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233bd1 je 0x10233d3c */
  if (C.zf) goto L_10233d3c;
  /* 10233bd7 push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10233bdc call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233be2u);
  /* 10233be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233be5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233be7 je 0x10233d3c */
  if (C.zf) goto L_10233d3c;
  /* 10233bed cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233bf0 je 0x10233bf7 */
  if (C.zf) goto L_10233bf7;
  /* 10233bf2 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233bf5 jne 0x10233c27 */
  if (!C.zf) goto L_10233c27;
L_10233bf7:;
  /* 10233bf7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233bf9 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233bffu);
  /* 10233bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c02 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233c07 jle 0x10233c27 */
  if ((C.zf||C.sf!=C.of)) goto L_10233c27;
  /* 10233c09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233c0b call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233c11u);
  /* 10233c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c14 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233c19 jge 0x10233c27 */
  if ((C.sf==C.of)) goto L_10233c27;
  /* 10233c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10233c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10233c1f call 0x10232690 */
  push32(0x10233c24u); f_10232690();
  /* 10233c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233c27:;
  /* 10233c27 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10233c2c call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233c32u);
  /* 10233c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233c37 jne 0x10233c69 */
  if (!C.zf) goto L_10233c69;
  /* 10233c39 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233c3b call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233c41u);
  /* 10233c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c44 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233c49 jle 0x10233c69 */
  if ((C.zf||C.sf!=C.of)) goto L_10233c69;
  /* 10233c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10233c4d call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233c53u);
  /* 10233c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c56 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233c5b jge 0x10233c69 */
  if ((C.sf==C.of)) goto L_10233c69;
  /* 10233c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10233c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10233c61 call 0x10232690 */
  push32(0x10233c66u); f_10232690();
  /* 10233c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233c69:;
  /* 10233c69 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10233c6e call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233c74u);
  /* 10233c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233c79 je 0x10233d3c */
  if (C.zf) goto L_10233d3c;
  /* 10233c7f cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233c82 jne 0x10233cc2 */
  if (!C.zf) goto L_10233cc2;
  /* 10233c84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233c86 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233c8cu);
  /* 10233c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233c8f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233c94 jle 0x10233d97 */
  if ((C.zf||C.sf!=C.of)) goto L_10233d97;
  /* 10233c9a push 4 */
  push32((uint32_t)(0x4u));
  /* 10233c9c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233ca2u);
  /* 10233ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233ca5 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233caa jle 0x10233d97 */
  if ((C.zf||C.sf!=C.of)) goto L_10233d97;
  /* 10233cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233cb2 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233cb8u);
  /* 10233cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233cbb cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233cc0 jmp 0x10233d2c */
  goto L_10233d2c;
L_10233cc2:;
  /* 10233cc2 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233cc5 jne 0x10233d05 */
  if (!C.zf) goto L_10233d05;
  /* 10233cc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233cc9 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233ccfu);
  /* 10233ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233cd2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233cd7 jle 0x10233d97 */
  if ((C.zf||C.sf!=C.of)) goto L_10233d97;
  /* 10233cdd push 4 */
  push32((uint32_t)(0x4u));
  /* 10233cdf call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233ce5u);
  /* 10233ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233ce8 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233ced jle 0x10233d97 */
  if ((C.zf||C.sf!=C.of)) goto L_10233d97;
  /* 10233cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233cf5 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233cfbu);
  /* 10233cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233cfe cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233d03 jmp 0x10233d2c */
  goto L_10233d2c;
L_10233d05:;
  /* 10233d05 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233d08 jne 0x10233d3c */
  if (!C.zf) goto L_10233d3c;
  /* 10233d0a push 3 */
  push32((uint32_t)(0x3u));
  /* 10233d0c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233d12u);
  /* 10233d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233d15 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233d1a jle 0x10233d97 */
  if ((C.zf||C.sf!=C.of)) goto L_10233d97;
  /* 10233d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10233d1e call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10233d24u);
  /* 10233d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233d27 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10233d2c:;
  /* 10233d2c jge 0x10233d97 */
  if ((C.sf==C.of)) goto L_10233d97;
  /* 10233d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10233d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233d32 call 0x10232690 */
  push32(0x10233d37u); f_10232690();
  /* 10233d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233d3a jmp 0x10233d97 */
  goto L_10233d97;
L_10233d3c:;
  /* 10233d3c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233d3f jne 0x10233d97 */
  if (!C.zf) goto L_10233d97;
  /* 10233d41 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233d43 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10233d45 push 0x102436e8 */
  push32((uint32_t)(0x102436e8u));
  /* 10233d4a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233d50u);
  /* 10233d50 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233d52 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233d56 push 0x10246318 */
  push32((uint32_t)(0x10246318u));
  /* 10233d5b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233d61u);
  /* 10233d61 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233d63 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233d65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10233d67 push 0x10246318 */
  push32((uint32_t)(0x10246318u));
  /* 10233d6c call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233d72u);
  /* 10233d72 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233d74 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233d76 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233d78 push 0x10246318 */
  push32((uint32_t)(0x10246318u));
  /* 10233d7d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233d83u);
  /* 10233d83 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233d85 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233d87 push 5 */
  push32((uint32_t)(0x5u));
  /* 10233d89 push 0x10246318 */
  push32((uint32_t)(0x10246318u));
  /* 10233d8e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233d94u);
  /* 10233d94 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233d97:;
  /* 10233d97 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233d9a jle 0x10233df3 */
  if ((C.zf||C.sf!=C.of)) goto L_10233df3;
  /* 10233d9c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10233da0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233da2 je 0x10233df3 */
  if (C.zf) goto L_10233df3;
  /* 10233da4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233da6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10233da8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10233daa push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10233daf call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233db5u);
  /* 10233db5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233db8 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233dbb jle 0x10233df3 */
  if ((C.zf||C.sf!=C.of)) goto L_10233df3;
  /* 10233dbd push 0xa */
  push32((uint32_t)(0xau));
  /* 10233dbf push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10233dc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10233dc3 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10233dc8 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233dceu);
  /* 10233dce push 0xa */
  push32((uint32_t)(0xau));
  /* 10233dd0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10233dd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233dd4 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10233dd9 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233ddfu);
  /* 10233ddf push 0xa */
  push32((uint32_t)(0xau));
  /* 10233de1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233de3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10233de5 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10233dea call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233df0u);
  /* 10233df0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233df3:;
  /* 10233df3 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10233df7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10233df9 je 0x10233e37 */
  if (C.zf) goto L_10233e37;
  /* 10233dfb push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10233e00 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233e06u);
  /* 10233e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233e09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233e0b je 0x10233e37 */
  if (C.zf) goto L_10233e37;
  /* 10233e0d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10233e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10233e11 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10233e13 push 0x102460e0 */
  push32((uint32_t)(0x102460e0u));
  /* 10233e18 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233e1eu);
  /* 10233e1e push 0x10246118 */
  push32((uint32_t)(0x10246118u));
  /* 10233e23 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233e29u);
  /* 10233e29 push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 10233e2e call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233e34u);
  /* 10233e34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233e37:;
  /* 10233e37 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10233e3c call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233e42u);
  /* 10233e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233e44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233e46 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233e48 push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10233e4d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233e53u);
  /* 10233e53 push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10233e58 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233e5eu);
  /* 10233e5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233e61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233e63 je 0x10233e79 */
  if (C.zf) goto L_10233e79;
  /* 10233e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233e67 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233e69 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233e6b push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10233e70 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233e76u);
  /* 10233e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233e79:;
  /* 10233e79 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10233e7b je 0x10233f65 */
  if (C.zf) goto L_10233f65;
  /* 10233e81 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10233e86 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10233e8cu);
  /* 10233e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233e8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233e91 je 0x10233f65 */
  if (C.zf) goto L_10233f65;
  /* 10233e97 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10233e99 jne 0x10233ed1 */
  if (!C.zf) goto L_10233ed1;
  /* 10233e9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233e9d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233e9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10233ea1 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10233ea6 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233eacu);
  /* 10233eac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233eae push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233eb0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10233eb2 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10233eb7 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233ebdu);
  /* 10233ebd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10233ebf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233ec1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10233ec3 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10233ec8 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233eceu);
  /* 10233ece add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233ed1:;
  /* 10233ed1 push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10233ed6 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233edcu);
  /* 10233edc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233edf cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233ee2 jle 0x10233f05 */
  if ((C.zf||C.sf!=C.of)) goto L_10233f05;
  /* 10233ee4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233ee6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233ee8 push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 10233eed call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233ef3u);
  /* 10233ef3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10233ef5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10233ef7 push 0x10246190 */
  push32((uint32_t)(0x10246190u));
  /* 10233efc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f02u);
  /* 10233f02 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233f05:;
  /* 10233f05 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f07 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10233f09 push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10233f0e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f14u);
  /* 10233f14 push 0x10243888 */
  push32((uint32_t)(0x10243888u));
  /* 10233f19 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10233f1fu);
  /* 10233f1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233f22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10233f24 je 0x10233f65 */
  if (C.zf) goto L_10233f65;
  /* 10233f26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f2a push 0x102460e8 */
  push32((uint32_t)(0x102460e8u));
  /* 10233f2f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f35u);
  /* 10233f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f37 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f39 push 0x102460f8 */
  push32((uint32_t)(0x102460f8u));
  /* 10233f3e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f44u);
  /* 10233f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f46 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10233f48 push 0x10246100 */
  push32((uint32_t)(0x10246100u));
  /* 10233f4d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f53u);
  /* 10233f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f55 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10233f57 push 0x102460f0 */
  push32((uint32_t)(0x102460f0u));
  /* 10233f5c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f62u);
  /* 10233f62 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233f65:;
  /* 10233f65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10233f67 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10233f69 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 10233f6e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f74u);
  /* 10233f74 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233f76 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10233f78 push 0x10243860 */
  push32((uint32_t)(0x10243860u));
  /* 10233f7d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233f83u);
  /* 10233f83 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10233f88 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10233f8eu);
  /* 10233f8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10233f91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233f94 jle 0x10233fd1 */
  if ((C.zf||C.sf!=C.of)) goto L_10233fd1;
  /* 10233f96 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10233f9a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233f9f jle 0x10233fd1 */
  if ((C.zf||C.sf!=C.of)) goto L_10233fd1;
  /* 10233fa1 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10233fa4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10233fa8 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10233fab cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10233fad jge 0x10233fc6 */
  if ((C.sf==C.of)) goto L_10233fc6;
  /* 10233faf push 0xa */
  push32((uint32_t)(0xau));
  /* 10233fb1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10233fb3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10233fb8 push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10233fbd call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10233fc3u);
  /* 10233fc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10233fc6:;
  /* 10233fc6 call 0x10233370 */
  push32(0x10233fcbu); f_10233370();
  /* 10233fcb jmp 0x10233fd1 */
  goto L_10233fd1;
L_10233fcd:;
  /* 10233fcd mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10233fd1:;
  /* 10233fd1 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10233fd3 je 0x10234016 */
  if (C.zf) goto L_10234016;
  /* 10233fd5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233fd7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10233fd9 push 0x102435b0 */
  push32((uint32_t)(0x102435b0u));
  /* 10233fde call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233fe4u);
  /* 10233fe4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233fe6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10233fe8 push 0x10243688 */
  push32((uint32_t)(0x10243688u));
  /* 10233fed call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10233ff3u);
  /* 10233ff3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10233ff5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10233ff7 push 0x102435a8 */
  push32((uint32_t)(0x102435a8u));
  /* 10233ffc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234002u);
  /* 10234002 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234004 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234006 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234008 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 1023400d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234013u);
  /* 10234013 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234016:;
  /* 10234016 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 1023401b call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234021u);
  /* 10234021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234024 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234026 je 0x10234049 */
  if (C.zf) goto L_10234049;
  /* 10234028 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023402a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023402c push 0x10246178 */
  push32((uint32_t)(0x10246178u));
  /* 10234031 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234037u);
  /* 10234037 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234039 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023403b push 0x10246180 */
  push32((uint32_t)(0x10246180u));
  /* 10234040 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234046u);
  /* 10234046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234049:;
  /* 10234049 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 1023404e call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10234054u);
  /* 10234054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234059 je 0x102342c3 */
  if (C.zf) goto L_102342c3;
  /* 1023405f push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10234064 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023406au);
  /* 1023406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023406d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023406f je 0x102340ca */
  if (C.zf) goto L_102340ca;
  /* 10234071 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10234076 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023407cu);
  /* 1023407c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023407f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234081 jne 0x102340ca */
  if (!C.zf) goto L_102340ca;
  /* 10234083 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234085 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023408bu);
  /* 1023408b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023408e cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234093 jle 0x102340ca */
  if ((C.zf||C.sf!=C.of)) goto L_102340ca;
  /* 10234095 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234097 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023409du);
  /* 1023409d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102340a0 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102340a5 jge 0x102340ca */
  if ((C.sf==C.of)) goto L_102340ca;
  /* 102340a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102340a9 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102340afu);
  /* 102340af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102340b2 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102340b7 jle 0x102340ca */
  if ((C.zf||C.sf!=C.of)) goto L_102340ca;
  /* 102340b9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 102340be push 3 */
  push32((uint32_t)(0x3u));
  /* 102340c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102340c2 call 0x102326b0 */
  push32(0x102340c7u); f_102326b0();
  /* 102340c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102340ca:;
  /* 102340ca push 3 */
  push32((uint32_t)(0x3u));
  /* 102340cc call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102340d2u);
  /* 102340d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102340d5 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102340da jge 0x102340ff */
  if ((C.sf==C.of)) goto L_102340ff;
  /* 102340dc push 2 */
  push32((uint32_t)(0x2u));
  /* 102340de call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102340e4u);
  /* 102340e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102340e7 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102340ec jle 0x102340ff */
  if ((C.zf||C.sf!=C.of)) goto L_102340ff;
  /* 102340ee push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 102340f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 102340f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 102340f7 call 0x102326b0 */
  push32(0x102340fcu); f_102326b0();
  /* 102340fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102340ff:;
  /* 102340ff push 0x10246178 */
  push32((uint32_t)(0x10246178u));
  /* 10234104 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x1023410au);
  /* 1023410a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023410d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023410f je 0x10234237 */
  if (C.zf) goto L_10234237;
  /* 10234115 push 0x10246180 */
  push32((uint32_t)(0x10246180u));
  /* 1023411a call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234120u);
  /* 10234120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234123 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234125 je 0x10234237 */
  if (C.zf) goto L_10234237;
  /* 1023412b push 2 */
  push32((uint32_t)(0x2u));
  /* 1023412d call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234133u);
  /* 10234133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234136 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023413b jle 0x1023414e */
  if ((C.zf||C.sf!=C.of)) goto L_1023414e;
  /* 1023413d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10234142 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234144 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234146 call 0x102326b0 */
  push32(0x1023414bu); f_102326b0();
  /* 1023414b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023414e:;
  /* 1023414e push 0 */
  push32((uint32_t)(0x0u));
  /* 10234150 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234156u);
  /* 10234156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023415b je 0x1023425a */
  if (C.zf) goto L_1023425a;
  /* 10234161 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234163 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234169u);
  /* 10234169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023416c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023416e je 0x102341db */
  if (C.zf) goto L_102341db;
  /* 10234170 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234172 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234178u);
  /* 10234178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023417b cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234180 jge 0x102341db */
  if ((C.sf==C.of)) goto L_102341db;
  /* 10234182 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234184 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023418au);
  /* 1023418a push 5 */
  push32((uint32_t)(0x5u));
  /* 1023418c mov esi, eax */
  ESI = (EAX);
  /* 1023418e call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234194u);
  /* 10234194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234197 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234199 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1023419e jge 0x102341bf */
  if ((C.sf==C.of)) goto L_102341bf;
  /* 102341a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 102341a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 102341a4 call 0x102326b0 */
  push32(0x102341a9u); f_102326b0();
  /* 102341a9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 102341ae push 4 */
  push32((uint32_t)(0x4u));
  /* 102341b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 102341b2 call 0x102326b0 */
  push32(0x102341b7u); f_102326b0();
  /* 102341b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102341ba jmp 0x1023425a */
  goto L_1023425a;
L_102341bf:;
  /* 102341bf push 4 */
  push32((uint32_t)(0x4u));
  /* 102341c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 102341c3 call 0x102326b0 */
  push32(0x102341c8u); f_102326b0();
  /* 102341c8 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 102341cd push 5 */
  push32((uint32_t)(0x5u));
  /* 102341cf push 2 */
  push32((uint32_t)(0x2u));
  /* 102341d1 call 0x102326b0 */
  push32(0x102341d6u); f_102326b0();
  /* 102341d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102341d9 jmp 0x1023425a */
  goto L_1023425a;
L_102341db:;
  /* 102341db push 5 */
  push32((uint32_t)(0x5u));
  /* 102341dd call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102341e3u);
  /* 102341e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102341e6 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102341eb jge 0x1023420d */
  if ((C.sf==C.of)) goto L_1023420d;
  /* 102341ed push 0 */
  push32((uint32_t)(0x0u));
  /* 102341ef call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102341f5u);
  /* 102341f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102341f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102341fa je 0x1023420d */
  if (C.zf) goto L_1023420d;
  /* 102341fc push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10234201 push 5 */
  push32((uint32_t)(0x5u));
  /* 10234203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234205 call 0x102326b0 */
  push32(0x1023420au); f_102326b0();
  /* 1023420a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023420d:;
  /* 1023420d push 5 */
  push32((uint32_t)(0x5u));
  /* 1023420f call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234215u);
  /* 10234215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234218 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023421d jge 0x1023425a */
  if ((C.sf==C.of)) goto L_1023425a;
  /* 1023421f push 0 */
  push32((uint32_t)(0x0u));
  /* 10234221 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234227u);
  /* 10234227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023422a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023422c je 0x1023425a */
  if (C.zf) goto L_1023425a;
  /* 1023422e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10234233 push 5 */
  push32((uint32_t)(0x5u));
  /* 10234235 jmp 0x10234250 */
  goto L_10234250;
L_10234237:;
  /* 10234237 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234239 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023423fu);
  /* 1023423f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234242 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234247 jle 0x1023425a */
  if ((C.zf||C.sf!=C.of)) goto L_1023425a;
  /* 10234249 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1023424e push 1 */
  push32((uint32_t)(0x1u));
L_10234250:;
  /* 10234250 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234252 call 0x102326b0 */
  push32(0x10234257u); f_102326b0();
  /* 10234257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023425a:;
  /* 1023425a push 0 */
  push32((uint32_t)(0x0u));
  /* 1023425c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234262u);
  /* 10234262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234265 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023426a jle 0x1023427d */
  if ((C.zf||C.sf!=C.of)) goto L_1023427d;
  /* 1023426c push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10234271 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234273 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234275 call 0x102326b0 */
  push32(0x1023427au); f_102326b0();
  /* 1023427a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023427d:;
  /* 1023427d push 4 */
  push32((uint32_t)(0x4u));
  /* 1023427f call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234285u);
  /* 10234285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234288 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023428d jle 0x102342a0 */
  if ((C.zf||C.sf!=C.of)) goto L_102342a0;
  /* 1023428f push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10234294 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234296 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234298 call 0x102326b0 */
  push32(0x1023429du); f_102326b0();
  /* 1023429d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102342a0:;
  /* 102342a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 102342a2 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102342a8u);
  /* 102342a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102342ab cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102342b0 jle 0x102342c3 */
  if ((C.zf||C.sf!=C.of)) goto L_102342c3;
  /* 102342b2 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 102342b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102342b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102342bb call 0x102326b0 */
  push32(0x102342c0u); f_102326b0();
  /* 102342c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102342c3:;
  /* 102342c3 pop edi */
  EDI = (pop32());
  /* 102342c4 pop esi */
  ESI = (pop32());
  /* 102342c5 pop ebp */
  EBP = (pop32());
  /* 102342c6 pop ebx */
  EBX = (pop32());
  /* 102342c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102342ca ret  */
  ESPCHK(0x10233400u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x102342d0 (209 bytes, 56 insns) */
void f_102342d0(void) {
  FTRACE(0x102342d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102342d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 102342d2 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102342d8u);
  /* 102342d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102342db cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102342e0 jle 0x102343a0 */
  if ((C.zf||C.sf!=C.of)) goto L_102343a0;
  /* 102342e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102342e8 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 102342ea push 0x102462d0 */
  push32((uint32_t)(0x102462d0u));
  /* 102342ef call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102342f5u);
  /* 102342f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102342f7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102342f9 push 0x102462d8 */
  push32((uint32_t)(0x102462d8u));
  /* 102342fe call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234304u);
  /* 10234304 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234306 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234308 push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 1023430d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234313u);
  /* 10234313 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234315 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234317 push 0x102462c8 */
  push32((uint32_t)(0x102462c8u));
  /* 1023431c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234322u);
  /* 10234322 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234324 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234326 push 0x102462e0 */
  push32((uint32_t)(0x102462e0u));
  /* 1023432b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234331u);
  /* 10234331 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234333 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234335 push 0x10246218 */
  push32((uint32_t)(0x10246218u));
  /* 1023433a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234340u);
  /* 10234340 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234343 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234345 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234347 push 0x10246200 */
  push32((uint32_t)(0x10246200u));
  /* 1023434c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234352u);
  /* 10234352 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234354 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234356 push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 1023435b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234361u);
  /* 10234361 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234363 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234365 push 0x10246220 */
  push32((uint32_t)(0x10246220u));
  /* 1023436a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234370u);
  /* 10234370 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234372 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234374 push 0x10246228 */
  push32((uint32_t)(0x10246228u));
  /* 10234379 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023437fu);
  /* 1023437f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234381 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234383 push 0x102461e0 */
  push32((uint32_t)(0x102461e0u));
  /* 10234388 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023438eu);
  /* 1023438e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234390 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234392 push 0x10245f48 */
  push32((uint32_t)(0x10245f48u));
  /* 10234397 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023439du);
  /* 1023439d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102343a0:;
  /* 102343a0 ret  */
  ESPCHK(0x102342d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x102343b0 (79 bytes, 22 insns) */
void f_102343b0(void) {
  FTRACE(0x102343b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102343b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102343b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102343b4 push 0x10243890 */
  push32((uint32_t)(0x10243890u));
  /* 102343b9 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102343bfu);
  /* 102343bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102343c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102343c3 push 0x10243898 */
  push32((uint32_t)(0x10243898u));
  /* 102343c8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102343ceu);
  /* 102343ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102343d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102343d2 push 0x10243888 */
  push32((uint32_t)(0x10243888u));
  /* 102343d7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102343ddu);
  /* 102343dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102343df push 0xa */
  push32((uint32_t)(0xau));
  /* 102343e1 push 0x10245ef8 */
  push32((uint32_t)(0x10245ef8u));
  /* 102343e6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102343ecu);
  /* 102343ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102343ee push 0xa */
  push32((uint32_t)(0xau));
  /* 102343f0 push 0x10245ee8 */
  push32((uint32_t)(0x10245ee8u));
  /* 102343f5 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102343fbu);
  /* 102343fb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102343fe ret  */
  ESPCHK(0x102343b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004400 @ 0x10234400 (127 bytes, 35 insns) */
void f_10234400(void) {
  FTRACE(0x10234400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10234400 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234402 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234404 push 0x10246158 */
  push32((uint32_t)(0x10246158u));
  /* 10234409 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023440fu);
  /* 1023440f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234411 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234413 push 0x10246150 */
  push32((uint32_t)(0x10246150u));
  /* 10234418 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023441eu);
  /* 1023441e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234420 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234422 push 0x10246120 */
  push32((uint32_t)(0x10246120u));
  /* 10234427 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023442du);
  /* 1023442d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023442f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234431 push 0x10246118 */
  push32((uint32_t)(0x10246118u));
  /* 10234436 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023443cu);
  /* 1023443c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023443e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234440 push 0x10246018 */
  push32((uint32_t)(0x10246018u));
  /* 10234445 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023444bu);
  /* 1023444b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023444d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023444f push 0x10246020 */
  push32((uint32_t)(0x10246020u));
  /* 10234454 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023445au);
  /* 1023445a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023445d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023445f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234461 push 0x10246028 */
  push32((uint32_t)(0x10246028u));
  /* 10234466 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023446cu);
  /* 1023446c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023446e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234470 push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 10234475 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023447bu);
  /* 1023447b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023447e ret  */
  ESPCHK(0x10234400u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x10234480 (3643 bytes, 1035 insns) */
void f_10234480(void) {
  FTRACE(0x10234480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10234480 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10234483 push ebx */
  push32((uint32_t)(EBX));
  /* 10234484 push ebp */
  push32((uint32_t)(EBP));
  /* 10234485 push esi */
  push32((uint32_t)(ESI));
  /* 10234486 push edi */
  push32((uint32_t)(EDI));
  /* 10234487 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234489 call 0x10232800 */
  push32(0x1023448eu); f_10232800();
  /* 1023448e push 0x1023f030 */
  push32((uint32_t)(0x1023f030u));
  /* 10234493 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10234495 call dword ptr [0x1024648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024648c))), 0x1023449bu);
  /* 1023449b push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 102344a0 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102344a6u);
  /* 102344a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102344a8 mov ebx, eax */
  EBX = (EAX);
  /* 102344aa call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102344b0u);
  /* 102344b0 mov ebp, eax */
  EBP = (EAX);
  /* 102344b2 push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 102344b7 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 102344bb call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x102344c1u);
  /* 102344c1 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102344c6 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 102344ca call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102344d0u);
  /* 102344d0 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 102344d5 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x102344dbu);
  /* 102344db push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 102344e0 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102344e6u);
  /* 102344e6 push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 102344eb call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102344f1u);
  /* 102344f1 push 0x102462b0 */
  push32((uint32_t)(0x102462b0u));
  /* 102344f6 mov esi, eax */
  ESI = (EAX);
  /* 102344f8 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102344feu);
  /* 102344fe push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10234503 mov edi, eax */
  EDI = (EAX);
  /* 10234505 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023450bu);
  /* 1023450b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023450d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234510 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10234512 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10234517 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1023451b call 0x10232700 */
  push32(0x10234520u); f_10232700();
  /* 10234520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234522 jle 0x10234538 */
  if ((C.zf||C.sf!=C.of)) goto L_10234538;
  /* 10234524 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10234526 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234528 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1023452a push 0x102462a8 */
  push32((uint32_t)(0x102462a8u));
  /* 1023452f call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234535u);
  /* 10234535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234538:;
  /* 10234538 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 1023453d call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10234543u);
  /* 10234543 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10234548 mov esi, eax */
  ESI = (EAX);
  /* 1023454a call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10234550u);
  /* 10234550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234553 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10234555 je 0x1023455c */
  if (C.zf) goto L_1023455c;
  /* 10234557 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_1023455c:;
  /* 1023455c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023455e je 0x102352b3 */
  if (C.zf) goto L_102352b3;
  /* 10234564 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234566 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023456a push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 1023456f call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234575u);
  /* 10234575 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 1023457a call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10234580u);
  /* 10234580 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234585 je 0x102352b3 */
  if (C.zf) goto L_102352b3;
  /* 1023458b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023458d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023458f push 0x102462f8 */
  push32((uint32_t)(0x102462f8u));
  /* 10234594 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023459au);
  /* 1023459a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023459d call dword ptr [0x102464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464f0))), 0x102345a3u);
  /* 102345a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102345a5 jne 0x102345fc */
  if (!C.zf) goto L_102345fc;
  /* 102345a7 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102345ad jle 0x102345d4 */
  if ((C.zf||C.sf!=C.of)) goto L_102345d4;
  /* 102345af push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102345b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102345b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102345b5 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 102345ba call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102345c0u);
  /* 102345c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102345c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102345c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102345c6 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102345cb call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102345d1u);
  /* 102345d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102345d4:;
  /* 102345d4 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102345da jle 0x102345e8 */
  if ((C.zf||C.sf!=C.of)) goto L_102345e8;
  /* 102345dc cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102345e1 jle 0x102345e8 */
  if ((C.zf||C.sf!=C.of)) goto L_102345e8;
  /* 102345e3 call 0x102342d0 */
  push32(0x102345e8u); f_102342d0();
L_102345e8:;
  /* 102345e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102345ea push 1 */
  push32((uint32_t)(0x1u));
  /* 102345ec push 0 */
  push32((uint32_t)(0x0u));
  /* 102345ee call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102345f4u);
  /* 102345f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102345f7 jmp 0x102346bf */
  goto L_102346bf;
L_102345fc:;
  /* 102345fc mov eax, dword ptr [0x10246514] */
  EAX = (r32((uint32_t)(0x10246514)));
  /* 10234601 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10234604 je 0x10234618 */
  if (C.zf) goto L_10234618;
  /* 10234606 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10234607 je 0x10234612 */
  if (C.zf) goto L_10234612;
  /* 10234609 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023460a jne 0x10234644 */
  if (!C.zf) goto L_10234644;
  /* 1023460c push 9 */
  push32((uint32_t)(0x9u));
  /* 1023460e push 4 */
  push32((uint32_t)(0x4u));
  /* 10234610 jmp 0x10234639 */
  goto L_10234639;
L_10234612:;
  /* 10234612 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234614 push 9 */
  push32((uint32_t)(0x9u));
  /* 10234616 jmp 0x10234639 */
  goto L_10234639;
L_10234618:;
  /* 10234618 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023461e jle 0x1023462f */
  if ((C.zf||C.sf!=C.of)) goto L_1023462f;
  /* 10234620 push 6 */
  push32((uint32_t)(0x6u));
  /* 10234622 push 6 */
  push32((uint32_t)(0x6u));
  /* 10234624 push 9 */
  push32((uint32_t)(0x9u));
  /* 10234626 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x1023462cu);
  /* 1023462c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023462f:;
  /* 1023462f push 5 */
  push32((uint32_t)(0x5u));
  /* 10234631 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234637 push 5 */
  push32((uint32_t)(0x5u));
L_10234639:;
  /* 10234639 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023463b call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x10234641u);
  /* 10234641 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234644:;
  /* 10234644 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10234648 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 1023464d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023464f je 0x10234656 */
  if (C.zf) goto L_10234656;
  /* 10234651 mov esi, 0x17c */
  ESI = (0x17cu);
L_10234656:;
  /* 10234656 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234659 jge 0x10234677 */
  if ((C.sf==C.of)) goto L_10234677;
  /* 1023465b cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234661 jle 0x102346b3 */
  if ((C.zf||C.sf!=C.of)) goto L_102346b3;
  /* 10234663 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234665 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234669 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 1023466e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234674u);
  /* 10234674 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234677:;
  /* 10234677 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023467d jle 0x102346b3 */
  if ((C.zf||C.sf!=C.of)) goto L_102346b3;
  /* 1023467f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234681 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 10234686 push esi */
  push32((uint32_t)(ESI));
  /* 10234687 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 1023468c call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234692u);
  /* 10234692 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234695 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023469b jle 0x102346b3 */
  if ((C.zf||C.sf!=C.of)) goto L_102346b3;
  /* 1023469d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023469f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 102346a4 push esi */
  push32((uint32_t)(ESI));
  /* 102346a5 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102346aa call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102346b0u);
  /* 102346b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102346b3:;
  /* 102346b3 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102346b8 jle 0x102346bf */
  if ((C.zf||C.sf!=C.of)) goto L_102346bf;
  /* 102346ba call 0x102342d0 */
  push32(0x102346bfu); f_102342d0();
L_102346bf:;
  /* 102346bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102346c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102346c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102346c5 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102346ca call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102346d0u);
  /* 102346d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 102346d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102346d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102346d6 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102346db call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102346e1u);
  /* 102346e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 102346e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102346e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102346e7 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102346ec call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102346f2u);
  /* 102346f2 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 102346f7 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102346fdu);
  /* 102346fd add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234700 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234703 jle 0x10234776 */
  if ((C.zf||C.sf!=C.of)) goto L_10234776;
  /* 10234705 push 5 */
  push32((uint32_t)(0x5u));
  /* 10234707 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10234709 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023470b push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10234710 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234716u);
  /* 10234716 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 1023471b call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10234721u);
  /* 10234721 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234724 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234727 jle 0x1023473d */
  if ((C.zf||C.sf!=C.of)) goto L_1023473d;
  /* 10234729 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023472b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1023472d push 1 */
  push32((uint32_t)(0x1u));
  /* 1023472f push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234734 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023473au);
  /* 1023473a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023473d:;
  /* 1023473d push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10234742 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10234748u);
  /* 10234748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023474b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023474e jle 0x10234764 */
  if ((C.zf||C.sf!=C.of)) goto L_10234764;
  /* 10234750 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234752 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234754 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234756 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 1023475b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234761u);
  /* 10234761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234764:;
  /* 10234764 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234766 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234768 push 0x10246090 */
  push32((uint32_t)(0x10246090u));
  /* 1023476d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234773u);
  /* 10234773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234776:;
  /* 10234776 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 1023477b call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10234781u);
  /* 10234781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234784 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234787 jle 0x1023479d */
  if ((C.zf||C.sf!=C.of)) goto L_1023479d;
  /* 10234789 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023478b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023478d push 1 */
  push32((uint32_t)(0x1u));
  /* 1023478f push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10234794 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023479au);
  /* 1023479a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023479d:;
  /* 1023479d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023479f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102347a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102347a3 push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 102347a8 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102347aeu);
  /* 102347ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102347b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102347b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102347b4 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 102347b9 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102347bfu);
  /* 102347bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102347c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102347c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102347c5 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 102347ca call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102347d0u);
  /* 102347d0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102347d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102347d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102347d6 push 0x10245f50 */
  push32((uint32_t)(0x10245f50u));
  /* 102347db call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102347e1u);
  /* 102347e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102347e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102347e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 102347e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 102347ea push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 102347ef call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102347f5u);
  /* 102347f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102347f7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102347f9 push 0x102435e0 */
  push32((uint32_t)(0x102435e0u));
  /* 102347fe call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234804u);
  /* 10234804 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10234809 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023480fu);
  /* 1023480f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234814 jle 0x1023482a */
  if ((C.zf||C.sf!=C.of)) goto L_1023482a;
  /* 10234816 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234818 push 5 */
  push32((uint32_t)(0x5u));
  /* 1023481a push 1 */
  push32((uint32_t)(0x1u));
  /* 1023481c push 0x10246078 */
  push32((uint32_t)(0x10246078u));
  /* 10234821 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234827u);
  /* 10234827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023482a:;
  /* 1023482a call dword ptr [0x102464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464f0))), 0x10234830u);
  /* 10234830 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234832 je 0x10234848 */
  if (C.zf) goto L_10234848;
  /* 10234834 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234836 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234838 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023483a push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 1023483f call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234845u);
  /* 10234845 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234848:;
  /* 10234848 push 0xa */
  push32((uint32_t)(0xau));
  /* 1023484a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1023484c push 1 */
  push32((uint32_t)(0x1u));
  /* 1023484e push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10234853 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234859u);
  /* 10234859 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023485b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023485d push 1 */
  push32((uint32_t)(0x1u));
  /* 1023485f push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10234864 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023486au);
  /* 1023486a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023486d cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234870 jle 0x10234886 */
  if ((C.zf||C.sf!=C.of)) goto L_10234886;
  /* 10234872 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234874 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234876 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234878 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 1023487d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234883u);
  /* 10234883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234886:;
  /* 10234886 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234888 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023488a push 1 */
  push32((uint32_t)(0x1u));
  /* 1023488c push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 10234891 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234897u);
  /* 10234897 push 5 */
  push32((uint32_t)(0x5u));
  /* 10234899 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1023489b push 2 */
  push32((uint32_t)(0x2u));
  /* 1023489d push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 102348a2 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102348a8u);
  /* 102348a8 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102348aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102348ac push 0x10245ff8 */
  push32((uint32_t)(0x10245ff8u));
  /* 102348b1 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102348b7u);
  /* 102348b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102348b9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102348bb push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 102348c0 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102348c6u);
  /* 102348c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102348c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102348ca push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 102348cf call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102348d5u);
  /* 102348d5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102348d8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102348da push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102348dc push 0x10245fc0 */
  push32((uint32_t)(0x10245fc0u));
  /* 102348e1 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102348e7u);
  /* 102348e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102348e9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102348eb push 0x10245fb0 */
  push32((uint32_t)(0x10245fb0u));
  /* 102348f0 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102348f6u);
  /* 102348f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102348f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102348fa push 0x10245fb8 */
  push32((uint32_t)(0x10245fb8u));
  /* 102348ff call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234905u);
  /* 10234905 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 1023490a call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10234910u);
  /* 10234910 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234915 je 0x102349d4 */
  if (C.zf) goto L_102349d4;
  /* 1023491b push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10234920 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234926u);
  /* 10234926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234929 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023492b jne 0x102349d4 */
  if (!C.zf) goto L_102349d4;
  /* 10234931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234933 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234939u);
  /* 10234939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023493c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234941 jle 0x10234967 */
  if ((C.zf||C.sf!=C.of)) goto L_10234967;
  /* 10234943 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234945 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023494bu);
  /* 1023494b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023494e cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234953 jle 0x10234967 */
  if ((C.zf||C.sf!=C.of)) goto L_10234967;
  /* 10234955 push 5 */
  push32((uint32_t)(0x5u));
  /* 10234957 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023495du);
  /* 1023495d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234960 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234965 jg 0x102349d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_102349d4;
L_10234967:;
  /* 10234967 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234969 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023496fu);
  /* 1023496f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234974 je 0x102349fb */
  if (C.zf) goto L_102349fb;
  /* 1023497a push 5 */
  push32((uint32_t)(0x5u));
  /* 1023497c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234982u);
  /* 10234982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234985 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023498a jle 0x102349fb */
  if ((C.zf||C.sf!=C.of)) goto L_102349fb;
  /* 1023498c push 5 */
  push32((uint32_t)(0x5u));
  /* 1023498e call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234994u);
  /* 10234994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234997 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023499c jle 0x102349af */
  if ((C.zf||C.sf!=C.of)) goto L_102349af;
  /* 1023499e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 102349a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102349a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102349a7 call 0x102326b0 */
  push32(0x102349acu); f_102326b0();
  /* 102349ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102349af:;
  /* 102349af push 4 */
  push32((uint32_t)(0x4u));
  /* 102349b1 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102349b7u);
  /* 102349b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102349ba cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102349bf jle 0x102349fb */
  if ((C.zf||C.sf!=C.of)) goto L_102349fb;
  /* 102349c1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 102349c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102349c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 102349ca call 0x102326b0 */
  push32(0x102349cfu); f_102326b0();
  /* 102349cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102349d2 jmp 0x102349fb */
  goto L_102349fb;
L_102349d4:;
  /* 102349d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102349d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102349d8 call 0x10232690 */
  push32(0x102349ddu); f_10232690();
  /* 102349dd push 0 */
  push32((uint32_t)(0x0u));
  /* 102349df push 4 */
  push32((uint32_t)(0x4u));
  /* 102349e1 call 0x10232690 */
  push32(0x102349e6u); f_10232690();
  /* 102349e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102349e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 102349ea call 0x10232690 */
  push32(0x102349efu); f_10232690();
  /* 102349ef push 0 */
  push32((uint32_t)(0x0u));
  /* 102349f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102349f3 call 0x10232690 */
  push32(0x102349f8u); f_10232690();
  /* 102349f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102349fb:;
  /* 102349fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102349fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102349ff push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 10234a04 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234a0au);
  /* 10234a0a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234a0c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10234a10 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10234a15 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234a1bu);
  /* 10234a1b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234a1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10234a21 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10234a26 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234a2cu);
  /* 10234a2c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10234a30 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234a32 push 0x10246258 */
  push32((uint32_t)(0x10246258u));
  /* 10234a37 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234a3du);
  /* 10234a3d push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10234a42 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234a48u);
  /* 10234a48 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234a4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234a4d jne 0x10234a98 */
  if (!C.zf) goto L_10234a98;
  /* 10234a4f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10234a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234a53 call 0x102326e0 */
  push32(0x10234a58u); f_102326e0();
  /* 10234a58 mov esi, eax */
  ESI = (EAX);
  /* 10234a5a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10234a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10234a5e sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10234a61 call 0x102326e0 */
  push32(0x10234a66u); f_102326e0();
  /* 10234a66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10234a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234a6a add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10234a6c call 0x102326e0 */
  push32(0x10234a71u); f_102326e0();
  /* 10234a71 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10234a73 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234a76 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234a79 jle 0x10234a88 */
  if ((C.zf||C.sf!=C.of)) goto L_10234a88;
  /* 10234a7b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a7d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a7f push 6 */
  push32((uint32_t)(0x6u));
  /* 10234a81 push 0x10245f10 */
  push32((uint32_t)(0x10245f10u));
  /* 10234a86 jmp 0x10234aa3 */
  goto L_10234aa3;
L_10234a88:;
  /* 10234a88 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10234a8a je 0x10234aac */
  if (C.zf) goto L_10234aac;
  /* 10234a8c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a8e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a90 push esi */
  push32((uint32_t)(ESI));
  /* 10234a91 push 0x10245f10 */
  push32((uint32_t)(0x10245f10u));
  /* 10234a96 jmp 0x10234aa3 */
  goto L_10234aa3;
L_10234a98:;
  /* 10234a98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a9a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234a9c push 0xa */
  push32((uint32_t)(0xau));
  /* 10234a9e push 0x10243868 */
  push32((uint32_t)(0x10243868u));
L_10234aa3:;
  /* 10234aa3 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234aa9u);
  /* 10234aa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234aac:;
  /* 10234aac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234aae push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234ab0 push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10234ab5 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234abbu);
  /* 10234abb push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10234ac0 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234ac6u);
  /* 10234ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234ac9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234acb je 0x10234aee */
  if (C.zf) goto L_10234aee;
  /* 10234acd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234acf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ad1 push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10234ad6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234adcu);
  /* 10234adc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234ade push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234ae0 push 0x102437f0 */
  push32((uint32_t)(0x102437f0u));
  /* 10234ae5 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234aebu);
  /* 10234aeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234aee:;
  /* 10234aee push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10234af3 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234af9u);
  /* 10234af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234afc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234afe je 0x10234b26 */
  if (C.zf) goto L_10234b26;
  /* 10234b00 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234b02 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234b04 push 0x102438c0 */
  push32((uint32_t)(0x102438c0u));
  /* 10234b09 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234b0fu);
  /* 10234b0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10234b11 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10234b13 push 0x10243800 */
  push32((uint32_t)(0x10243800u));
  /* 10234b18 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234b1eu);
  /* 10234b1e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234b21 call 0x102333c0 */
  push32(0x10234b26u); f_102333c0();
L_10234b26:;
  /* 10234b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234b28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234b2a call 0x10232690 */
  push32(0x10234b2fu); f_10232690();
  /* 10234b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10234b31 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234b37u);
  /* 10234b37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234b3a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234b3f jle 0x10234b83 */
  if ((C.zf||C.sf!=C.of)) goto L_10234b83;
  /* 10234b41 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 10234b46 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234b4cu);
  /* 10234b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234b4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234b51 je 0x10234b83 */
  if (C.zf) goto L_10234b83;
  /* 10234b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234b55 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234b5bu);
  /* 10234b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234b5e cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234b63 jge 0x10234b83 */
  if ((C.sf==C.of)) goto L_10234b83;
  /* 10234b65 push 0x102438d8 */
  push32((uint32_t)(0x102438d8u));
  /* 10234b6a call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234b70u);
  /* 10234b70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234b73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234b75 jne 0x10234b83 */
  if (!C.zf) goto L_10234b83;
  /* 10234b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234b79 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234b7b call 0x10232690 */
  push32(0x10234b80u); f_10232690();
  /* 10234b80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234b83:;
  /* 10234b83 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234b85 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234b87 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234b89 push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10234b8e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234b94u);
  /* 10234b94 push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10234b99 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234b9fu);
  /* 10234b9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234ba2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234ba4 je 0x10234bba */
  if (C.zf) goto L_10234bba;
  /* 10234ba6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ba8 push 0xa */
  push32((uint32_t)(0xau));
  /* 10234baa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234bac push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10234bb1 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234bb7u);
  /* 10234bb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234bba:;
  /* 10234bba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234bbc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234bbe push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10234bc3 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234bc9u);
  /* 10234bc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234bcb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234bcd push 0x10246080 */
  push32((uint32_t)(0x10246080u));
  /* 10234bd2 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234bd8u);
  /* 10234bd8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234bda push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234bdc push 0x10246268 */
  push32((uint32_t)(0x10246268u));
  /* 10234be1 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234be7u);
  /* 10234be7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234be9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234beb push 0x10246250 */
  push32((uint32_t)(0x10246250u));
  /* 10234bf0 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234bf6u);
  /* 10234bf6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234bf8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234bfa push 0x10246260 */
  push32((uint32_t)(0x10246260u));
  /* 10234bff call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234c05u);
  /* 10234c05 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c07 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c09 push 0x10246240 */
  push32((uint32_t)(0x10246240u));
  /* 10234c0e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234c14u);
  /* 10234c14 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234c17 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c19 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c1b push 0x10246248 */
  push32((uint32_t)(0x10246248u));
  /* 10234c20 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234c26u);
  /* 10234c26 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c28 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c2a push 0x10246238 */
  push32((uint32_t)(0x10246238u));
  /* 10234c2f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234c35u);
  /* 10234c35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234c38 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234c3b jle 0x10234c94 */
  if ((C.zf||C.sf!=C.of)) goto L_10234c94;
  /* 10234c3d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10234c41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234c43 je 0x10234c94 */
  if (C.zf) goto L_10234c94;
  /* 10234c45 push 0xa */
  push32((uint32_t)(0xau));
  /* 10234c47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10234c49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234c4b push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10234c50 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234c56u);
  /* 10234c56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234c59 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234c5c jle 0x10234c94 */
  if ((C.zf||C.sf!=C.of)) goto L_10234c94;
  /* 10234c5e push 0xa */
  push32((uint32_t)(0xau));
  /* 10234c60 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10234c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234c64 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10234c69 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234c6fu);
  /* 10234c6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10234c71 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234c73 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234c75 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10234c7a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234c80u);
  /* 10234c80 push 0xa */
  push32((uint32_t)(0xau));
  /* 10234c82 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234c84 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234c86 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10234c8b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234c91u);
  /* 10234c91 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234c94:;
  /* 10234c94 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10234c98 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10234c9a je 0x10234d7e */
  if (C.zf) goto L_10234d7e;
  /* 10234ca0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234ca2 push 0xa */
  push32((uint32_t)(0xau));
  /* 10234ca4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234ca6 push 0x10243848 */
  push32((uint32_t)(0x10243848u));
  /* 10234cab call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234cb1u);
  /* 10234cb1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234cb5 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10234cb7 push 0x102460e0 */
  push32((uint32_t)(0x102460e0u));
  /* 10234cbc call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234cc2u);
  /* 10234cc2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234cc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234cc6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234cc8 push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10234ccd call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234cd3u);
  /* 10234cd3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234cd5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234cd7 push 0x102435b0 */
  push32((uint32_t)(0x102435b0u));
  /* 10234cdc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234ce2u);
  /* 10234ce2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ce4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234ce6 push 0x10243688 */
  push32((uint32_t)(0x10243688u));
  /* 10234ceb call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234cf1u);
  /* 10234cf1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234cf4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234cf6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234cf8 push 0x102435a8 */
  push32((uint32_t)(0x102435a8u));
  /* 10234cfd call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234d03u);
  /* 10234d03 push 0x10246118 */
  push32((uint32_t)(0x10246118u));
  /* 10234d08 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234d0eu);
  /* 10234d0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234d11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234d13 je 0x10234d29 */
  if (C.zf) goto L_10234d29;
  /* 10234d15 push 0xa */
  push32((uint32_t)(0xau));
  /* 10234d17 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234d19 push 5 */
  push32((uint32_t)(0x5u));
  /* 10234d1b push 0x102462f0 */
  push32((uint32_t)(0x102462f0u));
  /* 10234d20 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234d26u);
  /* 10234d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234d29:;
  /* 10234d29 push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 10234d2e call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234d34u);
  /* 10234d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234d37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234d39 je 0x10234d4f */
  if (C.zf) goto L_10234d4f;
  /* 10234d3b push 0xa */
  push32((uint32_t)(0xau));
  /* 10234d3d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10234d41 push 0x102435e8 */
  push32((uint32_t)(0x102435e8u));
  /* 10234d46 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234d4cu);
  /* 10234d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234d4f:;
  /* 10234d4f call 0x10234400 */
  push32(0x10234d54u); f_10234400();
L_10234d54:;
  /* 10234d54 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10234d59 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234d5fu);
  /* 10234d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234d62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234d64 je 0x10234db4 */
  if (C.zf) goto L_10234db4;
  /* 10234d66 push 0x10246080 */
  push32((uint32_t)(0x10246080u));
  /* 10234d6b call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234d71u);
  /* 10234d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234d74 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234d76 jne 0x10234da5 */
  if (!C.zf) goto L_10234da5;
  /* 10234d78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10234d7c jmp 0x10234da9 */
  goto L_10234da9;
L_10234d7e:;
  /* 10234d7e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234d80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234d82 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10234d84 push 0x102460e0 */
  push32((uint32_t)(0x102460e0u));
  /* 10234d89 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234d8fu);
  /* 10234d8f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10234d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234d93 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234d95 push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10234d9a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234da0u);
  /* 10234da0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234da3 jmp 0x10234d54 */
  goto L_10234d54;
L_10234da5:;
  /* 10234da5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234da7 push 4 */
  push32((uint32_t)(0x4u));
L_10234da9:;
  /* 10234da9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10234dab call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x10234db1u);
  /* 10234db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234db4:;
  /* 10234db4 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234db9 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10234dbfu);
  /* 10234dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234dc4 je 0x10234dda */
  if (C.zf) goto L_10234dda;
  /* 10234dc6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234dc8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234dca push 6 */
  push32((uint32_t)(0x6u));
  /* 10234dcc push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10234dd1 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234dd7u);
  /* 10234dd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234dda:;
  /* 10234dda push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10234ddf call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10234de5u);
  /* 10234de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234de8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234dea je 0x10234e00 */
  if (C.zf) goto L_10234e00;
  /* 10234dec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234dee push 0xa */
  push32((uint32_t)(0xau));
  /* 10234df0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234df2 push 0x10246170 */
  push32((uint32_t)(0x10246170u));
  /* 10234df7 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234dfdu);
  /* 10234dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234e00:;
  /* 10234e00 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10234e02 je 0x10234f03 */
  if (C.zf) goto L_10234f03;
  /* 10234e08 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234e0a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234e0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10234e0e push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234e13 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234e19u);
  /* 10234e19 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234e1b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234e1d push 3 */
  push32((uint32_t)(0x3u));
  /* 10234e1f push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234e24 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234e2au);
  /* 10234e2a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234e2c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10234e2e push 4 */
  push32((uint32_t)(0x4u));
  /* 10234e30 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234e35 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234e3bu);
  /* 10234e3b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234e3d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10234e3f push 5 */
  push32((uint32_t)(0x5u));
  /* 10234e41 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234e46 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234e4cu);
  /* 10234e4c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234e4f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10234e51 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10234e53 push 6 */
  push32((uint32_t)(0x6u));
  /* 10234e55 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10234e5a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234e60u);
  /* 10234e60 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234e62 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234e64 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10234e69 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234e6fu);
  /* 10234e6f push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10234e74 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10234e7au);
  /* 10234e7a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234e7d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234e80 jle 0x10234ea3 */
  if ((C.zf||C.sf!=C.of)) goto L_10234ea3;
  /* 10234e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234e84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234e86 push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 10234e8b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234e91u);
  /* 10234e91 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10234e93 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10234e95 push 0x10246190 */
  push32((uint32_t)(0x10246190u));
  /* 10234e9a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234ea0u);
  /* 10234ea0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234ea3:;
  /* 10234ea3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ea5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10234ea7 push 0x10246070 */
  push32((uint32_t)(0x10246070u));
  /* 10234eac call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234eb2u);
  /* 10234eb2 push 0x10243888 */
  push32((uint32_t)(0x10243888u));
  /* 10234eb7 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10234ebdu);
  /* 10234ebd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234ec0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10234ec2 je 0x10234f03 */
  if (C.zf) goto L_10234f03;
  /* 10234ec4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ec6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ec8 push 0x102460e8 */
  push32((uint32_t)(0x102460e8u));
  /* 10234ecd call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234ed3u);
  /* 10234ed3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ed5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ed7 push 0x102460f8 */
  push32((uint32_t)(0x102460f8u));
  /* 10234edc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234ee2u);
  /* 10234ee2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ee4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10234ee6 push 0x10246100 */
  push32((uint32_t)(0x10246100u));
  /* 10234eeb call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234ef1u);
  /* 10234ef1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234ef3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10234ef5 push 0x102460f0 */
  push32((uint32_t)(0x102460f0u));
  /* 10234efa call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234f00u);
  /* 10234f00 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10234f03:;
  /* 10234f03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234f05 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10234f07 push 0x10243720 */
  push32((uint32_t)(0x10243720u));
  /* 10234f0c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234f12u);
  /* 10234f12 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10234f14 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10234f16 push 0x10243860 */
  push32((uint32_t)(0x10243860u));
  /* 10234f1b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234f21u);
  /* 10234f21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234f23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234f25 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10234f2a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10234f30u);
  /* 10234f30 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10234f34 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234f37 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234f3c jle 0x10234f5a */
  if ((C.zf||C.sf!=C.of)) goto L_10234f5a;
  /* 10234f3e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10234f40 push 0xa */
  push32((uint32_t)(0xau));
  /* 10234f42 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10234f47 push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10234f4c call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10234f52u);
  /* 10234f52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234f55 call 0x102343b0 */
  push32(0x10234f5au); f_102343b0();
L_10234f5a:;
  /* 10234f5a push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10234f5f call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10234f65u);
  /* 10234f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234f68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10234f6a je 0x102352b3 */
  if (C.zf) goto L_102352b3;
  /* 10234f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10234f72 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234f78u);
  /* 10234f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234f7a mov edi, eax */
  EDI = (EAX);
  /* 10234f7c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234f82u);
  /* 10234f82 push 4 */
  push32((uint32_t)(0x4u));
  /* 10234f84 mov esi, eax */
  ESI = (EAX);
  /* 10234f86 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234f8cu);
  /* 10234f8c push 5 */
  push32((uint32_t)(0x5u));
  /* 10234f8e mov ebp, eax */
  EBP = (EAX);
  /* 10234f90 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234f96u);
  /* 10234f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10234f98 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10234f9c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10234fa2u);
  /* 10234fa2 mov ebx, eax */
  EBX = (EAX);
  /* 10234fa4 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10234fa8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10234fab cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234fb0 jge 0x10235043 */
  if ((C.sf==C.of)) goto L_10235043;
  /* 10234fb6 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234fbc jle 0x10234fc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10234fc9;
  /* 10234fbe push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10234fc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234fc7 jmp 0x1023503b */
  goto L_1023503b;
L_10234fc9:;
  /* 10234fc9 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234fcf jle 0x10234fdc */
  if ((C.zf||C.sf!=C.of)) goto L_10234fdc;
  /* 10234fd1 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10234fd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234fd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10234fda jmp 0x1023503b */
  goto L_1023503b;
L_10234fdc:;
  /* 10234fdc cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234fe2 jle 0x10234fef */
  if ((C.zf||C.sf!=C.of)) goto L_10234fef;
  /* 10234fe4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10234fe9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10234feb push 0 */
  push32((uint32_t)(0x0u));
  /* 10234fed jmp 0x1023503b */
  goto L_1023503b;
L_10234fef:;
  /* 10234fef cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10234ff5 jle 0x10235002 */
  if ((C.zf||C.sf!=C.of)) goto L_10235002;
  /* 10234ff7 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10234ffc push 3 */
  push32((uint32_t)(0x3u));
  /* 10234ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10235000 jmp 0x1023503b */
  goto L_1023503b;
L_10235002:;
  /* 10235002 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023500a jle 0x10235017 */
  if ((C.zf||C.sf!=C.of)) goto L_10235017;
  /* 1023500c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10235011 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235013 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235015 jmp 0x1023503b */
  goto L_1023503b;
L_10235017:;
  /* 10235017 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023501d jle 0x1023502a */
  if ((C.zf||C.sf!=C.of)) goto L_1023502a;
  /* 1023501f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10235024 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235026 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235028 jmp 0x1023503b */
  goto L_1023503b;
L_1023502a:;
  /* 1023502a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235030 jle 0x10235043 */
  if ((C.zf||C.sf!=C.of)) goto L_10235043;
  /* 10235032 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10235037 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235039 push 1 */
  push32((uint32_t)(0x1u));
L_1023503b:;
  /* 1023503b call 0x102326b0 */
  push32(0x10235040u); f_102326b0();
  /* 10235040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235043:;
  /* 10235043 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10235048 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x1023504eu);
  /* 1023504e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235053 je 0x102350a3 */
  if (C.zf) goto L_102350a3;
  /* 10235055 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023505b jle 0x102350a3 */
  if ((C.zf||C.sf!=C.of)) goto L_102350a3;
  /* 1023505d push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10235062 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235068u);
  /* 10235068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023506b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023506d jne 0x102350a3 */
  if (!C.zf) goto L_102350a3;
  /* 1023506f cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235075 jle 0x10235088 */
  if ((C.zf||C.sf!=C.of)) goto L_10235088;
  /* 10235077 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1023507c push 3 */
  push32((uint32_t)(0x3u));
  /* 1023507e push 4 */
  push32((uint32_t)(0x4u));
  /* 10235080 call 0x102326b0 */
  push32(0x10235085u); f_102326b0();
  /* 10235085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235088:;
  /* 10235088 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235090 jle 0x102350a3 */
  if ((C.zf||C.sf!=C.of)) goto L_102350a3;
  /* 10235092 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10235097 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235099 push 5 */
  push32((uint32_t)(0x5u));
  /* 1023509b call 0x102326b0 */
  push32(0x102350a0u); f_102326b0();
  /* 102350a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102350a3:;
  /* 102350a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102350a5 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102350abu);
  /* 102350ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102350ae cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102350b3 jle 0x102350c6 */
  if ((C.zf||C.sf!=C.of)) goto L_102350c6;
  /* 102350b5 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102350ba push 1 */
  push32((uint32_t)(0x1u));
  /* 102350bc push 2 */
  push32((uint32_t)(0x2u));
  /* 102350be call 0x102326b0 */
  push32(0x102350c3u); f_102326b0();
  /* 102350c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102350c6:;
  /* 102350c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102350c8 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102350ceu);
  /* 102350ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102350d1 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102350d6 jle 0x102350e9 */
  if ((C.zf||C.sf!=C.of)) goto L_102350e9;
  /* 102350d8 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 102350dd push 1 */
  push32((uint32_t)(0x1u));
  /* 102350df push 0 */
  push32((uint32_t)(0x0u));
  /* 102350e1 call 0x102326b0 */
  push32(0x102350e6u); f_102326b0();
  /* 102350e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102350e9:;
  /* 102350e9 push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 102350ee call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102350f4u);
  /* 102350f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102350f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102350f9 je 0x10235280 */
  if (C.zf) goto L_10235280;
  /* 102350ff push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10235104 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023510au);
  /* 1023510a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023510d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023510f jne 0x10235280 */
  if (!C.zf) goto L_10235280;
  /* 10235115 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235117 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023511du);
  /* 1023511d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235120 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235125 jle 0x102351e0 */
  if ((C.zf||C.sf!=C.of)) goto L_102351e0;
  /* 1023512b push 0 */
  push32((uint32_t)(0x0u));
  /* 1023512d call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10235133u);
  /* 10235133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235138 je 0x102351e0 */
  if (C.zf) goto L_102351e0;
  /* 1023513e push 1 */
  push32((uint32_t)(0x1u));
  /* 10235140 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10235146u);
  /* 10235146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235149 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023514e jge 0x102351e0 */
  if ((C.sf==C.of)) goto L_102351e0;
  /* 10235154 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235156 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023515cu);
  /* 1023515c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023515f cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235164 jle 0x10235177 */
  if ((C.zf||C.sf!=C.of)) goto L_10235177;
  /* 10235166 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1023516b push 1 */
  push32((uint32_t)(0x1u));
  /* 1023516d push 5 */
  push32((uint32_t)(0x5u));
  /* 1023516f call 0x102326b0 */
  push32(0x10235174u); f_102326b0();
  /* 10235174 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235177:;
  /* 10235177 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235179 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023517fu);
  /* 1023517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235182 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235187 jle 0x1023519a */
  if ((C.zf||C.sf!=C.of)) goto L_1023519a;
  /* 10235189 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1023518e push 1 */
  push32((uint32_t)(0x1u));
  /* 10235190 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235192 call 0x102326b0 */
  push32(0x10235197u); f_102326b0();
  /* 10235197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023519a:;
  /* 1023519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1023519c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102351a2u);
  /* 102351a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102351a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102351aa jle 0x102351bd */
  if ((C.zf||C.sf!=C.of)) goto L_102351bd;
  /* 102351ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 102351b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102351b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102351b5 call 0x102326b0 */
  push32(0x102351bau); f_102326b0();
  /* 102351ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102351bd:;
  /* 102351bd push 3 */
  push32((uint32_t)(0x3u));
  /* 102351bf call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102351c5u);
  /* 102351c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102351c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102351cd jle 0x102351e0 */
  if ((C.zf||C.sf!=C.of)) goto L_102351e0;
  /* 102351cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 102351d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102351d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102351d8 call 0x102326b0 */
  push32(0x102351ddu); f_102326b0();
  /* 102351dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102351e0:;
  /* 102351e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 102351e2 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102351e8u);
  /* 102351e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102351eb cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102351f0 jle 0x10235280 */
  if ((C.zf||C.sf!=C.of)) goto L_10235280;
  /* 102351f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102351f8 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102351feu);
  /* 102351fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235203 je 0x10235280 */
  if (C.zf) goto L_10235280;
  /* 10235205 push 1 */
  push32((uint32_t)(0x1u));
  /* 10235207 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023520du);
  /* 1023520d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235210 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235215 jle 0x10235280 */
  if ((C.zf||C.sf!=C.of)) goto L_10235280;
  /* 10235217 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235219 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023521fu);
  /* 1023521f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235222 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235227 jle 0x1023523a */
  if ((C.zf||C.sf!=C.of)) goto L_1023523a;
  /* 10235229 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1023522e push 4 */
  push32((uint32_t)(0x4u));
  /* 10235230 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235232 call 0x102326b0 */
  push32(0x10235237u); f_102326b0();
  /* 10235237 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023523a:;
  /* 1023523a push 2 */
  push32((uint32_t)(0x2u));
  /* 1023523c call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10235242u);
  /* 10235242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235245 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023524a jle 0x1023525d */
  if ((C.zf||C.sf!=C.of)) goto L_1023525d;
  /* 1023524c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10235251 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235253 push 2 */
  push32((uint32_t)(0x2u));
  /* 10235255 call 0x102326b0 */
  push32(0x1023525au); f_102326b0();
  /* 1023525a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023525d:;
  /* 1023525d push 3 */
  push32((uint32_t)(0x3u));
  /* 1023525f call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10235265u);
  /* 10235265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235268 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023526d jle 0x10235280 */
  if ((C.zf||C.sf!=C.of)) goto L_10235280;
  /* 1023526f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10235274 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235276 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235278 call 0x102326b0 */
  push32(0x1023527du); f_102326b0();
  /* 1023527d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235280:;
  /* 10235280 call dword ptr [0x10246480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246480))), 0x10235286u);
  /* 10235286 mov ecx, dword ptr [eax*4 + 0x1024658c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1024658c)));
  /* 1023528d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023528f jne 0x102352b3 */
  if (!C.zf) goto L_102352b3;
  /* 10235291 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10235296 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235298 push 5 */
  push32((uint32_t)(0x5u));
  /* 1023529a call 0x102326b0 */
  push32(0x1023529fu); f_102326b0();
  /* 1023529f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102352a2 call dword ptr [0x10246480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246480))), 0x102352a8u);
  /* 102352a8 mov dword ptr [eax*4 + 0x1024658c], 1 */
  w32((uint32_t)(EAX*4 + 0x1024658c), (0x1u));
L_102352b3:;
  /* 102352b3 pop edi */
  EDI = (pop32());
  /* 102352b4 pop esi */
  ESI = (pop32());
  /* 102352b5 pop ebp */
  EBP = (pop32());
  /* 102352b6 pop ebx */
  EBX = (pop32());
  /* 102352b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102352ba ret  */
  ESPCHK(0x10234480u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x102352c0 (72 bytes, 22 insns) */
void f_102352c0(void) {
  FTRACE(0x102352c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102352c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102352c6 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 102352cb call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102352d1u);
  /* 102352d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102352d7 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 102352dc call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102352e2u);
  /* 102352e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102352e8 push 0x10245f50 */
  push32((uint32_t)(0x10245f50u));
  /* 102352ed call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102352f3u);
  /* 102352f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102352f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102352f9 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 102352fe call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235304u);
  /* 10235304 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235307 ret  */
  ESPCHK(0x102352c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005310 @ 0x10235310 (55 bytes, 16 insns) */
void f_10235310(void) {
  FTRACE(0x10235310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10235310 cmp dword ptr [esp + 4], 0x10243608 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10243608u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235318 jne 0x10235344 */
  if (!C.zf) goto L_10235344;
  /* 1023531a push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 1023531f call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10235325u);
  /* 10235325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235328 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023532a je 0x10235344 */
  if (C.zf) goto L_10235344;
  /* 1023532c push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 10235331 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10235337u);
  /* 10235337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023533a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023533c je 0x10235344 */
  if (C.zf) goto L_10235344;
  /* 1023533e mov eax, 1 */
  EAX = (0x1u);
  /* 10235343 ret  */
  ESPCHK(0x10235310u, _esp0);
  ESP += 4; return;
L_10235344:;
  /* 10235344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10235346 ret  */
  ESPCHK(0x10235310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x10235350 (2008 bytes, 535 insns) */
void f_10235350(void) {
  FTRACE(0x10235350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10235350 push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10235355 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023535bu);
  /* 1023535b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023535e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235360 jne 0x10235374 */
  if (!C.zf) goto L_10235374;
  /* 10235362 push 0x10243848 */
  push32((uint32_t)(0x10243848u));
  /* 10235367 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023536du);
  /* 1023536d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235372 je 0x102353a4 */
  if (C.zf) goto L_102353a4;
L_10235374:;
  /* 10235374 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235376 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235378 push 0x102438d0 */
  push32((uint32_t)(0x102438d0u));
  /* 1023537d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235383u);
  /* 10235383 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235387 push 0x10246178 */
  push32((uint32_t)(0x10246178u));
  /* 1023538c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235392u);
  /* 10235392 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235394 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235396 push 0x10246180 */
  push32((uint32_t)(0x10246180u));
  /* 1023539b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102353a1u);
  /* 102353a1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102353a4:;
  /* 102353a4 push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 102353a9 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102353afu);
  /* 102353af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102353b2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102353b5 jg 0x102353df */
  if ((!C.zf&&C.sf==C.of)) goto L_102353df;
  /* 102353b7 push 0x102462b0 */
  push32((uint32_t)(0x102462b0u));
  /* 102353bc call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102353c2u);
  /* 102353c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102353c5 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102353c8 jg 0x102353df */
  if ((!C.zf&&C.sf==C.of)) goto L_102353df;
  /* 102353ca push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102353cf call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102353d5u);
  /* 102353d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102353d8 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102353dd jle 0x1023543d */
  if ((C.zf||C.sf!=C.of)) goto L_1023543d;
L_102353df:;
  /* 102353df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102353e1 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102353e3 push 0x102435a8 */
  push32((uint32_t)(0x102435a8u));
  /* 102353e8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102353eeu);
  /* 102353ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102353f0 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102353f2 push 0x102435b0 */
  push32((uint32_t)(0x102435b0u));
  /* 102353f7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102353fdu);
  /* 102353fd push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 10235402 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235408u);
  /* 10235408 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023540b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235410 jg 0x1023542b */
  if ((!C.zf&&C.sf==C.of)) goto L_1023542b;
  /* 10235412 push 0x102462b0 */
  push32((uint32_t)(0x102462b0u));
  /* 10235417 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023541du);
  /* 1023541d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235420 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235423 jg 0x1023542b */
  if ((!C.zf&&C.sf==C.of)) goto L_1023542b;
  /* 10235425 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235427 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10235429 jmp 0x1023542f */
  goto L_1023542f;
L_1023542b:;
  /* 1023542b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023542d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1023542f:;
  /* 1023542f push 0x10243688 */
  push32((uint32_t)(0x10243688u));
  /* 10235434 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023543au);
  /* 1023543a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023543d:;
  /* 1023543d push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10235442 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235448u);
  /* 10235448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023544b cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023544e jle 0x10235503 */
  if ((C.zf||C.sf!=C.of)) goto L_10235503;
  /* 10235454 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235456 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10235458 push 0x102462d0 */
  push32((uint32_t)(0x102462d0u));
  /* 1023545d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235463u);
  /* 10235463 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235465 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10235467 push 0x102462d8 */
  push32((uint32_t)(0x102462d8u));
  /* 1023546c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235472u);
  /* 10235472 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235474 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235476 push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 1023547b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235481u);
  /* 10235481 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235483 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10235485 push 0x10246218 */
  push32((uint32_t)(0x10246218u));
  /* 1023548a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235490u);
  /* 10235490 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235492 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10235494 push 0x10246200 */
  push32((uint32_t)(0x10246200u));
  /* 10235499 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023549fu);
  /* 1023549f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102354a1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102354a3 push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 102354a8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102354aeu);
  /* 102354ae add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102354b1 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 102354b6 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102354bcu);
  /* 102354bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102354bf cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102354c2 jle 0x10235503 */
  if ((C.zf||C.sf!=C.of)) goto L_10235503;
  /* 102354c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102354c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102354c8 push 0x102462c8 */
  push32((uint32_t)(0x102462c8u));
  /* 102354cd call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102354d3u);
  /* 102354d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102354d5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102354d7 push 0x102462e0 */
  push32((uint32_t)(0x102462e0u));
  /* 102354dc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102354e2u);
  /* 102354e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102354e4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102354e6 push 0x10246220 */
  push32((uint32_t)(0x10246220u));
  /* 102354eb call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102354f1u);
  /* 102354f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102354f3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102354f5 push 0x10246228 */
  push32((uint32_t)(0x10246228u));
  /* 102354fa call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235500u);
  /* 10235500 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235503:;
  /* 10235503 push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10235508 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023550eu);
  /* 1023550e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235511 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235514 jle 0x102355ab */
  if ((C.zf||C.sf!=C.of)) goto L_102355ab;
  /* 1023551a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023551c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023551e push 0x10243890 */
  push32((uint32_t)(0x10243890u));
  /* 10235523 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235529u);
  /* 10235529 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023552b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023552d push 0x10243898 */
  push32((uint32_t)(0x10243898u));
  /* 10235532 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235538u);
  /* 10235538 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023553a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023553c push 0x10243888 */
  push32((uint32_t)(0x10243888u));
  /* 10235541 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235547u);
  /* 10235547 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235549 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023554b push 0x10245ef8 */
  push32((uint32_t)(0x10245ef8u));
  /* 10235550 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235556u);
  /* 10235556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235558 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023555a push 0x10245ee8 */
  push32((uint32_t)(0x10245ee8u));
  /* 1023555f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235565u);
  /* 10235565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235567 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10235569 push 0x10245ef0 */
  push32((uint32_t)(0x10245ef0u));
  /* 1023556e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235574u);
  /* 10235574 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235577 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235579 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023557b push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 10235580 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235586u);
  /* 10235586 push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 1023558b call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235591u);
  /* 10235591 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235594 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235597 jle 0x102355ab */
  if ((C.zf||C.sf!=C.of)) goto L_102355ab;
  /* 10235599 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023559b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023559d push 0x10246190 */
  push32((uint32_t)(0x10246190u));
  /* 102355a2 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102355a8u);
  /* 102355a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102355ab:;
  /* 102355ab push 0x10243680 */
  push32((uint32_t)(0x10243680u));
  /* 102355b0 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102355b6u);
  /* 102355b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102355b9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102355bc jle 0x102355df */
  if ((C.zf||C.sf!=C.of)) goto L_102355df;
  /* 102355be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102355c0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102355c2 push 0x102461e0 */
  push32((uint32_t)(0x102461e0u));
  /* 102355c7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102355cdu);
  /* 102355cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102355cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102355d1 push 0x10245f48 */
  push32((uint32_t)(0x10245f48u));
  /* 102355d6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102355dcu);
  /* 102355dc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102355df:;
  /* 102355df push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 102355e4 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102355eau);
  /* 102355ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102355ed cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102355f0 jle 0x102356c3 */
  if ((C.zf||C.sf!=C.of)) goto L_102356c3;
  /* 102355f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102355f8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102355fa push 0x102460b0 */
  push32((uint32_t)(0x102460b0u));
  /* 102355ff call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235605u);
  /* 10235605 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235607 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10235609 push 0x102460a8 */
  push32((uint32_t)(0x102460a8u));
  /* 1023560e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235614u);
  /* 10235614 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235616 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235618 push 0x102460a0 */
  push32((uint32_t)(0x102460a0u));
  /* 1023561d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235623u);
  /* 10235623 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235625 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10235627 push 0x10245f98 */
  push32((uint32_t)(0x10245f98u));
  /* 1023562c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235632u);
  /* 10235632 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235634 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10235636 push 0x10245f90 */
  push32((uint32_t)(0x10245f90u));
  /* 1023563b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235641u);
  /* 10235641 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235645 push 0x10245f88 */
  push32((uint32_t)(0x10245f88u));
  /* 1023564a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235650u);
  /* 10235650 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235653 push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 10235658 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023565eu);
  /* 1023565e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235661 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235664 jle 0x102356c3 */
  if ((C.zf||C.sf!=C.of)) goto L_102356c3;
  /* 10235666 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235668 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023566a push 0x10246098 */
  push32((uint32_t)(0x10246098u));
  /* 1023566f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235675u);
  /* 10235675 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235677 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235679 push 0x10246088 */
  push32((uint32_t)(0x10246088u));
  /* 1023567e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235684u);
  /* 10235684 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235686 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235688 push 0x102460d8 */
  push32((uint32_t)(0x102460d8u));
  /* 1023568d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235693u);
  /* 10235693 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235695 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235697 push 0x10245f80 */
  push32((uint32_t)(0x10245f80u));
  /* 1023569c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102356a2u);
  /* 102356a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102356a4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102356a6 push 0x10245f78 */
  push32((uint32_t)(0x10245f78u));
  /* 102356ab call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102356b1u);
  /* 102356b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102356b3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102356b5 push 0x10245f70 */
  push32((uint32_t)(0x10245f70u));
  /* 102356ba call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102356c0u);
  /* 102356c0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102356c3:;
  /* 102356c3 push 0x102462b0 */
  push32((uint32_t)(0x102462b0u));
  /* 102356c8 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102356ceu);
  /* 102356ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102356d1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102356d4 jle 0x102357a6 */
  if ((C.zf||C.sf!=C.of)) goto L_102357a6;
  /* 102356da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102356dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102356de push 0x102436c8 */
  push32((uint32_t)(0x102436c8u));
  /* 102356e3 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102356e9u);
  /* 102356e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102356eb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102356ed push 0x102436c0 */
  push32((uint32_t)(0x102436c0u));
  /* 102356f2 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102356f8u);
  /* 102356f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102356fa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102356fc push 0x102436b8 */
  push32((uint32_t)(0x102436b8u));
  /* 10235701 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235707u);
  /* 10235707 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235709 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023570b push 0x10243638 */
  push32((uint32_t)(0x10243638u));
  /* 10235710 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235716u);
  /* 10235716 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235718 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023571a push 0x10243630 */
  push32((uint32_t)(0x10243630u));
  /* 1023571f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235725u);
  /* 10235725 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235727 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235729 push 0x10243628 */
  push32((uint32_t)(0x10243628u));
  /* 1023572e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235734u);
  /* 10235734 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235737 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235739 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023573b push 0x10243620 */
  push32((uint32_t)(0x10243620u));
  /* 10235740 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235746u);
  /* 10235746 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235748 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023574a push 0x102435f8 */
  push32((uint32_t)(0x102435f8u));
  /* 1023574f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235755u);
  /* 10235755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235757 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235759 push 0x102435f0 */
  push32((uint32_t)(0x102435f0u));
  /* 1023575e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235764u);
  /* 10235764 push 0x102435f0 */
  push32((uint32_t)(0x102435f0u));
  /* 10235769 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023576fu);
  /* 1023576f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235772 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235774 je 0x102357a6 */
  if (C.zf) goto L_102357a6;
  /* 10235776 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235778 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023577a push 0x102436a0 */
  push32((uint32_t)(0x102436a0u));
  /* 1023577f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235785u);
  /* 10235785 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235787 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235789 push 0x10243698 */
  push32((uint32_t)(0x10243698u));
  /* 1023578e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235794u);
  /* 10235794 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235796 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235798 push 0x10243690 */
  push32((uint32_t)(0x10243690u));
  /* 1023579d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102357a3u);
  /* 102357a3 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102357a6:;
  /* 102357a6 push 0x10243610 */
  push32((uint32_t)(0x10243610u));
  /* 102357ab call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102357b1u);
  /* 102357b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102357b4 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102357b7 jle 0x1023583f */
  if ((C.zf||C.sf!=C.of)) goto L_1023583f;
  /* 102357bd push 0x10243600 */
  push32((uint32_t)(0x10243600u));
  /* 102357c2 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102357c8u);
  /* 102357c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102357cb cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102357ce jge 0x1023583f */
  if ((C.sf==C.of)) goto L_1023583f;
  /* 102357d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102357d2 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102357d4 push 0x10243880 */
  push32((uint32_t)(0x10243880u));
  /* 102357d9 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102357dfu);
  /* 102357df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102357e1 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 102357e3 push 0x10243878 */
  push32((uint32_t)(0x10243878u));
  /* 102357e8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102357eeu);
  /* 102357ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102357f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102357f2 push 0x10243870 */
  push32((uint32_t)(0x10243870u));
  /* 102357f7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102357fdu);
  /* 102357fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102357ff push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235801 push 0x10243838 */
  push32((uint32_t)(0x10243838u));
  /* 10235806 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023580cu);
  /* 1023580c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023580e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235810 push 0x10243830 */
  push32((uint32_t)(0x10243830u));
  /* 10235815 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023581bu);
  /* 1023581b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023581d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1023581f push 0x10243828 */
  push32((uint32_t)(0x10243828u));
  /* 10235824 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023582au);
  /* 1023582a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023582d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023582f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235831 push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 10235836 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023583cu);
  /* 1023583c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023583f:;
  /* 1023583f push 0x10243600 */
  push32((uint32_t)(0x10243600u));
  /* 10235844 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023584au);
  /* 1023584a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023584d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235850 jle 0x10235931 */
  if ((C.zf||C.sf!=C.of)) goto L_10235931;
  /* 10235856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235858 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1023585a push 0x102435d8 */
  push32((uint32_t)(0x102435d8u));
  /* 1023585f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235865u);
  /* 10235865 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235867 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10235869 push 0x102435d0 */
  push32((uint32_t)(0x102435d0u));
  /* 1023586e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235874u);
  /* 10235874 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235876 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235878 push 0x102435c8 */
  push32((uint32_t)(0x102435c8u));
  /* 1023587d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235883u);
  /* 10235883 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235885 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235887 push 0x10246298 */
  push32((uint32_t)(0x10246298u));
  /* 1023588c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235892u);
  /* 10235892 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235894 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10235896 push 0x10246290 */
  push32((uint32_t)(0x10246290u));
  /* 1023589b call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358a1u);
  /* 102358a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102358a3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102358a5 push 0x10246288 */
  push32((uint32_t)(0x10246288u));
  /* 102358aa call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358b0u);
  /* 102358b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102358b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102358b5 push 0xa */
  push32((uint32_t)(0xau));
  /* 102358b7 push 0x10246310 */
  push32((uint32_t)(0x10246310u));
  /* 102358bc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358c2u);
  /* 102358c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102358c4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 102358c6 push 0x10246308 */
  push32((uint32_t)(0x10246308u));
  /* 102358cb call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358d1u);
  /* 102358d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102358d3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102358d5 push 0x10246358 */
  push32((uint32_t)(0x10246358u));
  /* 102358da call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358e0u);
  /* 102358e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102358e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102358e4 push 0x10246350 */
  push32((uint32_t)(0x10246350u));
  /* 102358e9 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358efu);
  /* 102358ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102358f1 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102358f3 push 0x10246348 */
  push32((uint32_t)(0x10246348u));
  /* 102358f8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102358feu);
  /* 102358fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235900 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10235902 push 0x10246340 */
  push32((uint32_t)(0x10246340u));
  /* 10235907 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023590du);
  /* 1023590d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235910 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235912 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235914 push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 10235919 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023591fu);
  /* 1023591f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235921 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235923 push 0x10246190 */
  push32((uint32_t)(0x10246190u));
  /* 10235928 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023592eu);
  /* 1023592e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235931:;
  /* 10235931 push 0x10245f00 */
  push32((uint32_t)(0x10245f00u));
  /* 10235936 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023593cu);
  /* 1023593c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023593f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235942 jle 0x10235aa0 */
  if ((C.zf||C.sf!=C.of)) goto L_10235aa0;
  /* 10235948 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023594a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023594c push 0x10243660 */
  push32((uint32_t)(0x10243660u));
  /* 10235951 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235957u);
  /* 10235957 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235959 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023595b push 0x10243668 */
  push32((uint32_t)(0x10243668u));
  /* 10235960 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235966u);
  /* 10235966 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235968 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1023596a push 0x10243670 */
  push32((uint32_t)(0x10243670u));
  /* 1023596f call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235975u);
  /* 10235975 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235979 push 0x10243678 */
  push32((uint32_t)(0x10243678u));
  /* 1023597e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235984u);
  /* 10235984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235988 push 0x10243640 */
  push32((uint32_t)(0x10243640u));
  /* 1023598d call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235993u);
  /* 10235993 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235995 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235997 push 0x10243650 */
  push32((uint32_t)(0x10243650u));
  /* 1023599c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359a2u);
  /* 102359a2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102359a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102359a7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102359a9 push 0x10243708 */
  push32((uint32_t)(0x10243708u));
  /* 102359ae call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359b4u);
  /* 102359b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102359b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102359b8 push 0x10243710 */
  push32((uint32_t)(0x10243710u));
  /* 102359bd call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359c3u);
  /* 102359c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102359c5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102359c7 push 0x10243718 */
  push32((uint32_t)(0x10243718u));
  /* 102359cc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359d2u);
  /* 102359d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102359d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102359d6 push 0x102436f0 */
  push32((uint32_t)(0x102436f0u));
  /* 102359db call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359e1u);
  /* 102359e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102359e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102359e5 push 0x102436f8 */
  push32((uint32_t)(0x102436f8u));
  /* 102359ea call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359f0u);
  /* 102359f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102359f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102359f4 push 0x10243700 */
  push32((uint32_t)(0x10243700u));
  /* 102359f9 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102359ffu);
  /* 102359ff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235a02 push 0x10245f00 */
  push32((uint32_t)(0x10245f00u));
  /* 10235a07 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235a0du);
  /* 10235a0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235a10 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235a13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235a15 jle 0x10235a2a */
  if ((C.zf||C.sf!=C.of)) goto L_10235a2a;
  /* 10235a17 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235a19 push 0x10245fa8 */
  push32((uint32_t)(0x10245fa8u));
  /* 10235a1e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235a24u);
  /* 10235a24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235a26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235a28 jmp 0x10235a3b */
  goto L_10235a3b;
L_10235a2a:;
  /* 10235a2a push 0xf */
  push32((uint32_t)(0xfu));
  /* 10235a2c push 0x10245fa8 */
  push32((uint32_t)(0x10245fa8u));
  /* 10235a31 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235a37u);
  /* 10235a37 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235a39 push 0xf */
  push32((uint32_t)(0xfu));
L_10235a3b:;
  /* 10235a3b push 0x10246008 */
  push32((uint32_t)(0x10246008u));
  /* 10235a40 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235a46u);
  /* 10235a46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235a49 push 0x10245fa8 */
  push32((uint32_t)(0x10245fa8u));
  /* 10235a4e call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235a54u);
  /* 10235a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235a57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235a59 je 0x10235a7f */
  if (C.zf) goto L_10235a7f;
  /* 10235a5b push 0x10246008 */
  push32((uint32_t)(0x10246008u));
  /* 10235a60 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235a66u);
  /* 10235a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235a69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235a6b je 0x10235a7f */
  if (C.zf) goto L_10235a7f;
  /* 10235a6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235a6f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235a71 push 0x10246000 */
  push32((uint32_t)(0x10246000u));
  /* 10235a76 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235a7cu);
  /* 10235a7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235a7f:;
  /* 10235a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235a81 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235a83 push 0x10246188 */
  push32((uint32_t)(0x10246188u));
  /* 10235a88 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235a8eu);
  /* 10235a8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235a90 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235a92 push 0x10246190 */
  push32((uint32_t)(0x10246190u));
  /* 10235a97 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235a9du);
  /* 10235a9d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235aa0:;
  /* 10235aa0 push 0x10246288 */
  push32((uint32_t)(0x10246288u));
  /* 10235aa5 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10235aabu);
  /* 10235aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235aae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235ab0 je 0x10235b27 */
  if (C.zf) goto L_10235b27;
  /* 10235ab2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ab4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235ab6 push 0x102460f0 */
  push32((uint32_t)(0x102460f0u));
  /* 10235abb call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235ac1u);
  /* 10235ac1 push 0x102460f0 */
  push32((uint32_t)(0x102460f0u));
  /* 10235ac6 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235accu);
  /* 10235acc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235acf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235ad1 je 0x10235b27 */
  if (C.zf) goto L_10235b27;
  /* 10235ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ad5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235ad7 push 0x10246100 */
  push32((uint32_t)(0x10246100u));
  /* 10235adc call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235ae2u);
  /* 10235ae2 push 0x10246100 */
  push32((uint32_t)(0x10246100u));
  /* 10235ae7 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235aedu);
  /* 10235aed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235af0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235af2 je 0x10235b27 */
  if (C.zf) goto L_10235b27;
  /* 10235af4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235af6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235af8 push 0x102460f8 */
  push32((uint32_t)(0x102460f8u));
  /* 10235afd call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235b03u);
  /* 10235b03 push 0x102460f8 */
  push32((uint32_t)(0x102460f8u));
  /* 10235b08 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235b0eu);
  /* 10235b0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235b11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235b13 je 0x10235b27 */
  if (C.zf) goto L_10235b27;
  /* 10235b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b17 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235b19 push 0x102460e8 */
  push32((uint32_t)(0x102460e8u));
  /* 10235b1e call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235b24u);
  /* 10235b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235b27:;
  /* 10235b27 ret  */
  ESPCHK(0x10235350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b30 @ 0x10235b30 (305 bytes, 86 insns) */
void f_10235b30(void) {
  FTRACE(0x10235b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10235b30 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b32 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10235b34 push 0x102462f8 */
  push32((uint32_t)(0x102462f8u));
  /* 10235b39 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235b3fu);
  /* 10235b3f push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10235b44 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235b4au);
  /* 10235b4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235b4f je 0x10235b63 */
  if (C.zf) goto L_10235b63;
  /* 10235b51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b53 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b55 push 0x102435e0 */
  push32((uint32_t)(0x102435e0u));
  /* 10235b5a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235b60u);
  /* 10235b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235b63:;
  /* 10235b63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b67 push 0x10245ff8 */
  push32((uint32_t)(0x10245ff8u));
  /* 10235b6c call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235b72u);
  /* 10235b72 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10235b77 call 0x10235310 */
  push32(0x10235b7cu); f_10235310();
  /* 10235b7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235b81 jne 0x10235b91 */
  if (!C.zf) goto L_10235b91;
  /* 10235b83 mov eax, dword ptr [0x10245ed8] */
  EAX = (r32((uint32_t)(0x10245ed8)));
  /* 10235b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235b8a je 0x10235ba3 */
  if (C.zf) goto L_10235ba3;
  /* 10235b8c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235b8f je 0x10235ba3 */
  if (C.zf) goto L_10235ba3;
L_10235b91:;
  /* 10235b91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235b93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10235b95 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10235b9a call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235ba0u);
  /* 10235ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235ba3:;
  /* 10235ba3 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10235ba8 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235baeu);
  /* 10235bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235bb3 je 0x10235bc7 */
  if (C.zf) goto L_10235bc7;
  /* 10235bb5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235bb7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235bb9 push 0x10245fc0 */
  push32((uint32_t)(0x10245fc0u));
  /* 10235bbe call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235bc4u);
  /* 10235bc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235bc7:;
  /* 10235bc7 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10235bcc call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10235bd2u);
  /* 10235bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235bd5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235bd7 je 0x10235beb */
  if (C.zf) goto L_10235beb;
  /* 10235bd9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235bdb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235bdd push 0x10245fb0 */
  push32((uint32_t)(0x10245fb0u));
  /* 10235be2 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235be8u);
  /* 10235be8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235beb:;
  /* 10235beb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235bed push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10235bef push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10235bf4 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235bfau);
  /* 10235bfa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235bfc push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10235bfe push 0x10246080 */
  push32((uint32_t)(0x10246080u));
  /* 10235c03 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235c09u);
  /* 10235c09 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10235c0e call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235c14u);
  /* 10235c14 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235c19 je 0x10235c2d */
  if (C.zf) goto L_10235c2d;
  /* 10235c1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c1d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10235c1f push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10235c24 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235c2au);
  /* 10235c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235c2d:;
  /* 10235c2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c2f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10235c31 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10235c36 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235c3cu);
  /* 10235c3c push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 10235c41 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235c47u);
  /* 10235c47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235c4c je 0x10235c60 */
  if (C.zf) goto L_10235c60;
  /* 10235c4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c52 push 0x10243860 */
  push32((uint32_t)(0x10243860u));
  /* 10235c57 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10235c5du);
  /* 10235c5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235c60:;
  /* 10235c60 ret  */
  ESPCHK(0x10235b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c70 @ 0x10235c70 (536 bytes, 150 insns) */
void f_10235c70(void) {
  FTRACE(0x10235c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10235c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c74 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235c76 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 10235c7b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235c81u);
  /* 10235c81 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10235c86 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235c8cu);
  /* 10235c8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235c91 je 0x10235cb8 */
  if (C.zf) goto L_10235cb8;
  /* 10235c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c95 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10235c99 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 10235c9e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235ca4u);
  /* 10235ca4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ca6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ca8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235caa push 0x10245f50 */
  push32((uint32_t)(0x10245f50u));
  /* 10235caf call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235cb5u);
  /* 10235cb5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235cb8:;
  /* 10235cb8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235cba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10235cbe push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 10235cc3 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235cc9u);
  /* 10235cc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ccb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 10235ccf push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10235cd4 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235cdau);
  /* 10235cda mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10235cdf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235ce2 mov ecx, dword ptr [eax*4 + 0x10245f18] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10245f18)));
  /* 10235ce9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10235ceb jne 0x10235d08 */
  if (!C.zf) goto L_10235d08;
  /* 10235ced call 0x102352c0 */
  push32(0x10235cf2u); f_102352c0();
  /* 10235cf2 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10235cf7 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235cfdu);
  /* 10235cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235d02 je 0x10235e87 */
  if (C.zf) goto L_10235e87;
L_10235d08:;
  /* 10235d08 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d0a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10235d0e push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 10235d13 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235d19u);
  /* 10235d19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10235d1f push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10235d24 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235d2au);
  /* 10235d2a push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10235d2f call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235d35u);
  /* 10235d35 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235d38 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235d3b jge 0x10235d4a */
  if ((C.sf==C.of)) goto L_10235d4a;
  /* 10235d3d call 0x10232710 */
  push32(0x10235d42u); f_10232710();
  /* 10235d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235d44 jne 0x10235e87 */
  if (!C.zf) goto L_10235e87;
L_10235d4a:;
  /* 10235d4a push esi */
  push32((uint32_t)(ESI));
  /* 10235d4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d4d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10235d51 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10235d56 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235d5cu);
  /* 10235d5c push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10235d61 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235d67u);
  /* 10235d67 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10235d6c mov esi, eax */
  ESI = (EAX);
  /* 10235d6e call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235d74u);
  /* 10235d74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235d77 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10235d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235d7b pop esi */
  ESI = (pop32());
  /* 10235d7c jg 0x10235e87 */
  if ((!C.zf&&C.sf==C.of)) goto L_10235e87;
  /* 10235d82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d84 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10235d88 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10235d8d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235d93u);
  /* 10235d93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235d96 call 0x10232820 */
  push32(0x10235d9bu); f_10232820();
  /* 10235d9b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235d9e jge 0x10235dc7 */
  if ((C.sf==C.of)) goto L_10235dc7;
  /* 10235da0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235da2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235da4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10235da6 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10235dab call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235db1u);
  /* 10235db1 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10235db6 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235dbcu);
  /* 10235dbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235dc1 je 0x10235e87 */
  if (C.zf) goto L_10235e87;
L_10235dc7:;
  /* 10235dc7 call 0x102352c0 */
  push32(0x10235dccu); f_102352c0();
  /* 10235dcc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235dce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235dd0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235dd2 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10235dd7 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235dddu);
  /* 10235ddd push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10235de2 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235de8u);
  /* 10235de8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235deb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235dee jl 0x10235e87 */
  if ((C.sf!=C.of)) goto L_10235e87;
  /* 10235df4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235df6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235df8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235dfa push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10235dff call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235e05u);
  /* 10235e05 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 10235e0a call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235e10u);
  /* 10235e10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235e15 je 0x10235e2b */
  if (C.zf) goto L_10235e2b;
  /* 10235e17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e1b push 4 */
  push32((uint32_t)(0x4u));
  /* 10235e1d push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10235e22 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235e28u);
  /* 10235e28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235e2b:;
  /* 10235e2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10235e31 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10235e36 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235e3cu);
  /* 10235e3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e3e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10235e40 push 3 */
  push32((uint32_t)(0x3u));
  /* 10235e42 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10235e47 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235e4du);
  /* 10235e4d push 0x10243860 */
  push32((uint32_t)(0x10243860u));
  /* 10235e52 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10235e58u);
  /* 10235e58 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235e5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10235e5d je 0x10235e73 */
  if (C.zf) goto L_10235e73;
  /* 10235e5f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e63 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235e65 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10235e6a call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235e70u);
  /* 10235e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235e73:;
  /* 10235e73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10235e79 push 0x10246078 */
  push32((uint32_t)(0x10246078u));
  /* 10235e7e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235e84u);
  /* 10235e84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235e87:;
  /* 10235e87 ret  */
  ESPCHK(0x10235c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x10235e90 (472 bytes, 137 insns) */
void f_10235e90(void) {
  FTRACE(0x10235e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10235e90 push ecx */
  push32((uint32_t)(ECX));
  /* 10235e91 push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10235e96 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235e9cu);
  /* 10235e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235e9f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235ea2 jge 0x10235eb7 */
  if ((C.sf==C.of)) goto L_10235eb7;
  /* 10235ea4 mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10235ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10235eab add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10235eae push eax */
  push32((uint32_t)(EAX));
  /* 10235eaf call 0x10232770 */
  push32(0x10235eb4u); f_10232770();
  /* 10235eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235eb7:;
  /* 10235eb7 push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10235ebc call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235ec2u);
  /* 10235ec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235ec5 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235eca jg 0x10235ede */
  if ((!C.zf&&C.sf==C.of)) goto L_10235ede;
  /* 10235ecc push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10235ed1 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10235ed7u);
  /* 10235ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235edc je 0x10235ef2 */
  if (C.zf) goto L_10235ef2;
L_10235ede:;
  /* 10235ede mov ecx, dword ptr [0x10246234] */
  ECX = (r32((uint32_t)(0x10246234)));
  /* 10235ee4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10235ee6 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10235ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 10235eea call 0x10232770 */
  push32(0x10235eefu); f_10232770();
  /* 10235eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235ef2:;
  /* 10235ef2 push esi */
  push32((uint32_t)(ESI));
  /* 10235ef3 push edi */
  push32((uint32_t)(EDI));
  /* 10235ef4 mov edi, 2 */
  EDI = (0x2u);
L_10235ef9:;
  /* 10235ef9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235efb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10235efd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10235f02 push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 10235f07 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235f0du);
  /* 10235f0d push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10235f12 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10235f18u);
  /* 10235f18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235f1b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235f20 jge 0x10235f3b */
  if ((C.sf==C.of)) goto L_10235f3b;
  /* 10235f22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235f24 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10235f26 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10235f2b push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10235f30 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235f36u);
  /* 10235f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235f39 jmp 0x10235f66 */
  goto L_10235f66;
L_10235f3b:;
  /* 10235f3b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10235f3d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10235f3f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10235f44 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10235f49 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235f4fu);
  /* 10235f4f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235f51 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10235f53 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10235f58 push 0x10246060 */
  push32((uint32_t)(0x10246060u));
  /* 10235f5d call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235f63u);
  /* 10235f63 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235f66:;
  /* 10235f66 mov edx, dword ptr [0x10246234] */
  EDX = (r32((uint32_t)(0x10246234)));
  /* 10235f6c add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10235f6f push edx */
  push32((uint32_t)(EDX));
  /* 10235f70 call 0x10232790 */
  push32(0x10235f75u); f_10232790();
  /* 10235f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235f7a jne 0x10235f9d */
  if (!C.zf) goto L_10235f9d;
  /* 10235f7c call 0x10232820 */
  push32(0x10235f81u); f_10232820();
  /* 10235f81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235f84 jge 0x10235f9d */
  if ((C.sf==C.of)) goto L_10235f9d;
  /* 10235f86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235f88 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10235f8a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10235f8f push 0x102461f8 */
  push32((uint32_t)(0x102461f8u));
  /* 10235f94 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235f9au);
  /* 10235f9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10235f9d:;
  /* 10235f9d mov al, byte ptr [0x10246234] */
  AL = (r8((uint32_t)(0x10246234)));
  /* 10235fa2 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10235fa6 mov eax, dword ptr [0x10246438] */
  EAX = (r32((uint32_t)(0x10246438)));
  /* 10235fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10235fad je 0x10235fc5 */
  if (C.zf) goto L_10235fc5;
  /* 10235faf mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10235fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10235fb5 push 0x10243808 */
  push32((uint32_t)(0x10243808u));
  /* 10235fba push ecx */
  push32((uint32_t)(ECX));
  /* 10235fbb call eax */
  call_ind((uint32_t)(EAX), 0x10235fbdu);
  /* 10235fbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235fc0 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235fc3 jge 0x10236005 */
  if ((C.sf==C.of)) goto L_10236005;
L_10235fc5:;
  /* 10235fc5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10235fc7 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10235fcdu);
  /* 10235fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235fd0 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235fd5 jle 0x10236005 */
  if ((C.zf||C.sf!=C.of)) goto L_10236005;
  /* 10235fd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10235fd9 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10235fdfu);
  /* 10235fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10235fe2 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10235fe7 jle 0x10236005 */
  if ((C.zf||C.sf!=C.of)) goto L_10236005;
  /* 10235fe9 mov esi, 0x1e */
  ESI = (0x1eu);
L_10235fee:;
  /* 10235fee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10235ff0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10235ff2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10235ff4 push 0x10243808 */
  push32((uint32_t)(0x10243808u));
  /* 10235ff9 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10235fffu);
  /* 10235fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236002 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10236003 jne 0x10235fee */
  if (!C.zf) goto L_10235fee;
L_10236005:;
  /* 10236005 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 1023600a call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10236010u);
  /* 10236010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236013 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236015 je 0x1023601b */
  if (C.zf) goto L_1023601b;
  /* 10236017 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10236019 jmp 0x1023601d */
  goto L_1023601d;
L_1023601b:;
  /* 1023601b push 0x64 */
  push32((uint32_t)(0x64u));
L_1023601d:;
  /* 1023601d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1023601f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10236024 push 0x10246330 */
  push32((uint32_t)(0x10246330u));
  /* 10236029 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023602fu);
  /* 1023602f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236032 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236034 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236036 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1023603b push 0x10243600 */
  push32((uint32_t)(0x10243600u));
  /* 10236040 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236046u);
  /* 10236046 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236048 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1023604a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1023604f push 0x10245f00 */
  push32((uint32_t)(0x10245f00u));
  /* 10236054 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023605au);
  /* 1023605a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023605d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1023605e jne 0x10235ef9 */
  if (!C.zf) goto L_10235ef9;
  /* 10236064 pop edi */
  EDI = (pop32());
  /* 10236065 pop esi */
  ESI = (pop32());
  /* 10236066 pop ecx */
  ECX = (pop32());
  /* 10236067 ret  */
  ESPCHK(0x10235e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x10236070 (789 bytes, 244 insns) */
void f_10236070(void) {
  FTRACE(0x10236070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236070 push ecx */
  push32((uint32_t)(ECX));
  /* 10236071 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10236076 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x1023607cu);
  /* 1023607c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023607f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236081 je 0x10236383 */
  if (C.zf) goto L_10236383;
  /* 10236087 call 0x10232710 */
  push32(0x1023608cu); f_10232710();
  /* 1023608c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023608f jne 0x102360d6 */
  if (!C.zf) goto L_102360d6;
  /* 10236091 mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10236096 push eax */
  push32((uint32_t)(EAX));
  /* 10236097 call 0x10232790 */
  push32(0x1023609cu); f_10232790();
  /* 1023609c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023609f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102360a1 jne 0x10236383 */
  if (!C.zf) goto L_10236383;
  /* 102360a7 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 102360ac push 3 */
  push32((uint32_t)(0x3u));
  /* 102360ae push 2 */
  push32((uint32_t)(0x2u));
  /* 102360b0 call 0x102326b0 */
  push32(0x102360b5u); f_102326b0();
  /* 102360b5 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 102360ba push 3 */
  push32((uint32_t)(0x3u));
  /* 102360bc push 0 */
  push32((uint32_t)(0x0u));
  /* 102360be call 0x102326b0 */
  push32(0x102360c3u); f_102326b0();
  /* 102360c3 mov ecx, dword ptr [0x10246234] */
  ECX = (r32((uint32_t)(0x10246234)));
  /* 102360c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102360cb push ecx */
  push32((uint32_t)(ECX));
  /* 102360cc call 0x10232770 */
  push32(0x102360d1u); f_10232770();
  /* 102360d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102360d4 pop ecx */
  ECX = (pop32());
  /* 102360d5 ret  */
  ESPCHK(0x10236070u, _esp0);
  ESP += 4; return;
L_102360d6:;
  /* 102360d6 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 102360db call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102360e1u);
  /* 102360e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102360e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102360e6 je 0x10236383 */
  if (C.zf) goto L_10236383;
  /* 102360ec mov edx, dword ptr [0x10246234] */
  EDX = (r32((uint32_t)(0x10246234)));
  /* 102360f2 push edx */
  push32((uint32_t)(EDX));
  /* 102360f3 call 0x10232790 */
  push32(0x102360f8u); f_10232790();
  /* 102360f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102360fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102360fd jne 0x10236172 */
  if (!C.zf) goto L_10236172;
  /* 102360ff push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10236104 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236106 push 5 */
  push32((uint32_t)(0x5u));
  /* 10236108 call 0x102326b0 */
  push32(0x1023610du); f_102326b0();
  /* 1023610d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236110 call 0x10232710 */
  push32(0x10236115u); f_10232710();
  /* 10236115 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236118 jne 0x10236139 */
  if (!C.zf) goto L_10236139;
  /* 1023611a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1023611f push 0 */
  push32((uint32_t)(0x0u));
  /* 10236121 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236123 call 0x102326b0 */
  push32(0x10236128u); f_102326b0();
  /* 10236128 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1023612d push 2 */
  push32((uint32_t)(0x2u));
  /* 1023612f push 4 */
  push32((uint32_t)(0x4u));
  /* 10236131 call 0x102326b0 */
  push32(0x10236136u); f_102326b0();
  /* 10236136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236139:;
  /* 10236139 call 0x10232710 */
  push32(0x1023613eu); f_10232710();
  /* 1023613e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236141 jne 0x10236162 */
  if (!C.zf) goto L_10236162;
  /* 10236143 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10236148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023614a push 4 */
  push32((uint32_t)(0x4u));
  /* 1023614c call 0x102326b0 */
  push32(0x10236151u); f_102326b0();
  /* 10236151 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10236156 push 2 */
  push32((uint32_t)(0x2u));
  /* 10236158 push 4 */
  push32((uint32_t)(0x4u));
  /* 1023615a call 0x102326b0 */
  push32(0x1023615fu); f_102326b0();
  /* 1023615f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236162:;
  /* 10236162 mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10236167 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236169 push eax */
  push32((uint32_t)(EAX));
  /* 1023616a call 0x10232770 */
  push32(0x1023616fu); f_10232770();
  /* 1023616f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236172:;
  /* 10236172 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10236177 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023617du);
  /* 1023617d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236180 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236182 je 0x102361f4 */
  if (C.zf) goto L_102361f4;
  /* 10236184 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10236189 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023618fu);
  /* 1023618f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236192 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236194 jne 0x102361f4 */
  if (!C.zf) goto L_102361f4;
  /* 10236196 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 1023619b call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102361a1u);
  /* 102361a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102361a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102361a6 je 0x102361f4 */
  if (C.zf) goto L_102361f4;
  /* 102361a8 mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 102361ad mov cl, byte ptr [0x10246234] */
  CL = (r8((uint32_t)(0x10246234)));
  /* 102361b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102361b5 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 102361b9 je 0x102361ce */
  if (C.zf) goto L_102361ce;
  /* 102361bb mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 102361bf push 5 */
  push32((uint32_t)(0x5u));
  /* 102361c1 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 102361c6 push edx */
  push32((uint32_t)(EDX));
  /* 102361c7 call eax */
  call_ind((uint32_t)(EAX), 0x102361c9u);
  /* 102361c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102361cc jmp 0x102361d0 */
  goto L_102361d0;
L_102361ce:;
  /* 102361ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102361d0:;
  /* 102361d0 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102361d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102361d5 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 102361d8 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102361dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102361df sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102361e2 mov eax, edx */
  EAX = (EDX);
  /* 102361e4 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102361e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102361e9 push edx */
  push32((uint32_t)(EDX));
  /* 102361ea push 5 */
  push32((uint32_t)(0x5u));
  /* 102361ec call 0x10233030 */
  push32(0x102361f1u); f_10233030();
  /* 102361f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102361f4:;
  /* 102361f4 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 102361f9 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x102361ffu);
  /* 102361ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236202 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236204 je 0x10236319 */
  if (C.zf) goto L_10236319;
  /* 1023620a push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 1023620f call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236215u);
  /* 10236215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236218 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023621a jne 0x10236319 */
  if (!C.zf) goto L_10236319;
  /* 10236220 mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 10236225 mov cl, byte ptr [0x10246234] */
  CL = (r8((uint32_t)(0x10246234)));
  /* 1023622b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023622d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10236231 je 0x10236246 */
  if (C.zf) goto L_10236246;
  /* 10236233 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10236237 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236239 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 1023623e push edx */
  push32((uint32_t)(EDX));
  /* 1023623f call eax */
  call_ind((uint32_t)(EAX), 0x10236241u);
  /* 10236241 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236244 jmp 0x10236248 */
  goto L_10236248;
L_10236246:;
  /* 10236246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10236248:;
  /* 10236248 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1023624b push 2 */
  push32((uint32_t)(0x2u));
  /* 1023624d lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10236250 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10236255 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10236257 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1023625a mov eax, edx */
  EAX = (EDX);
  /* 1023625c shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1023625f add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10236261 push edx */
  push32((uint32_t)(EDX));
  /* 10236262 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236264 call 0x10233030 */
  push32(0x10236269u); f_10233030();
  /* 10236269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023626c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023626e je 0x10236319 */
  if (C.zf) goto L_10236319;
  /* 10236274 mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 10236279 mov cl, byte ptr [0x10246234] */
  CL = (r8((uint32_t)(0x10246234)));
  /* 1023627f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236281 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10236285 je 0x1023629a */
  if (C.zf) goto L_1023629a;
  /* 10236287 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1023628b push 1 */
  push32((uint32_t)(0x1u));
  /* 1023628d push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10236292 push edx */
  push32((uint32_t)(EDX));
  /* 10236293 call eax */
  call_ind((uint32_t)(EAX), 0x10236295u);
  /* 10236295 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236298 jmp 0x1023629c */
  goto L_1023629c;
L_1023629a:;
  /* 1023629a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023629c:;
  /* 1023629c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 102362a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102362a5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102362a7 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 102362aa lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102362ad mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 102362b2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102362b4 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 102362b7 mov eax, edx */
  EAX = (EDX);
  /* 102362b9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102362bc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102362be push edx */
  push32((uint32_t)(EDX));
  /* 102362bf push 1 */
  push32((uint32_t)(0x1u));
  /* 102362c1 call 0x10233030 */
  push32(0x102362c6u); f_10233030();
  /* 102362c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102362c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102362cb je 0x10236319 */
  if (C.zf) goto L_10236319;
  /* 102362cd mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 102362d2 mov cl, byte ptr [0x10246234] */
  CL = (r8((uint32_t)(0x10246234)));
  /* 102362d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102362da mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 102362de je 0x102362f3 */
  if (C.zf) goto L_102362f3;
  /* 102362e0 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 102362e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102362e6 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 102362eb push edx */
  push32((uint32_t)(EDX));
  /* 102362ec call eax */
  call_ind((uint32_t)(EAX), 0x102362eeu);
  /* 102362ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102362f1 jmp 0x102362f5 */
  goto L_102362f5;
L_102362f3:;
  /* 102362f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102362f5:;
  /* 102362f5 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102362f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 102362fa lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 102362fd mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10236302 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10236304 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10236307 mov eax, edx */
  EAX = (EDX);
  /* 10236309 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1023630c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023630e push edx */
  push32((uint32_t)(EDX));
  /* 1023630f push 4 */
  push32((uint32_t)(0x4u));
  /* 10236311 call 0x10233030 */
  push32(0x10236316u); f_10233030();
  /* 10236316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236319:;
  /* 10236319 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023631b call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10236321u);
  /* 10236321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236324 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236329 jle 0x1023634e */
  if ((C.zf||C.sf!=C.of)) goto L_1023634e;
  /* 1023632b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10236330 push 2 */
  push32((uint32_t)(0x2u));
  /* 10236332 push 0 */
  push32((uint32_t)(0x0u));
  /* 10236334 call 0x102326b0 */
  push32(0x10236339u); f_102326b0();
  /* 10236339 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023633b call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10236341u);
  /* 10236341 push eax */
  push32((uint32_t)(EAX));
  /* 10236342 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236344 push 2 */
  push32((uint32_t)(0x2u));
  /* 10236346 call 0x102326b0 */
  push32(0x1023634bu); f_102326b0();
  /* 1023634b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023634e:;
  /* 1023634e push 0 */
  push32((uint32_t)(0x0u));
  /* 10236350 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10236356u);
  /* 10236356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236359 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023635e jle 0x10236383 */
  if ((C.zf||C.sf!=C.of)) goto L_10236383;
  /* 10236360 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10236365 push 0 */
  push32((uint32_t)(0x0u));
  /* 10236367 push 2 */
  push32((uint32_t)(0x2u));
  /* 10236369 call 0x102326b0 */
  push32(0x1023636eu); f_102326b0();
  /* 1023636e push 0 */
  push32((uint32_t)(0x0u));
  /* 10236370 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x10236376u);
  /* 10236376 push eax */
  push32((uint32_t)(EAX));
  /* 10236377 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236379 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023637b call 0x102326b0 */
  push32(0x10236380u); f_102326b0();
  /* 10236380 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236383:;
  /* 10236383 pop ecx */
  ECX = (pop32());
  /* 10236384 ret  */
  ESPCHK(0x10236070u, _esp0);
  ESP += 4; return;
}

/* FUN_10006390 @ 0x10236390 (818 bytes, 268 insns) */
void f_10236390(void) {
  FTRACE(0x10236390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236390 push ecx */
  push32((uint32_t)(ECX));
  /* 10236391 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236393 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10236397 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x1023639du);
  /* 1023639d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102363a0 call dword ptr [0x102464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464f0))), 0x102363a6u);
  /* 102363a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102363a8 je 0x102366c0 */
  if (C.zf) goto L_102366c0;
  /* 102363ae push 4 */
  push32((uint32_t)(0x4u));
  /* 102363b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102363b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102363b4 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102363bau);
  /* 102363ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102363bd call 0x10232710 */
  push32(0x102363c2u); f_10232710();
  /* 102363c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102363c5 je 0x102366c0 */
  if (C.zf) goto L_102366c0;
  /* 102363cb call dword ptr [0x102464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464f0))), 0x102363d1u);
  /* 102363d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102363d3 je 0x102366b1 */
  if (C.zf) goto L_102366b1;
  /* 102363d9 push esi */
  push32((uint32_t)(ESI));
  /* 102363da push edi */
  push32((uint32_t)(EDI));
  /* 102363db push 4 */
  push32((uint32_t)(0x4u));
  /* 102363dd push 4 */
  push32((uint32_t)(0x4u));
  /* 102363df push 9 */
  push32((uint32_t)(0x9u));
  /* 102363e1 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102363e7u);
  /* 102363e7 push 0x10246080 */
  push32((uint32_t)(0x10246080u));
  /* 102363ec call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x102363f2u);
  /* 102363f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102363f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102363f7 jne 0x1023645f */
  if (!C.zf) goto L_1023645f;
  /* 102363f9 mov al, byte ptr [0x10246234] */
  AL = (r8((uint32_t)(0x10246234)));
  /* 102363fe mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10236402 mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 10236407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236409 je 0x10236420 */
  if (C.zf) goto L_10236420;
  /* 1023640b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023640f push 3 */
  push32((uint32_t)(0x3u));
  /* 10236411 push 0x10246080 */
  push32((uint32_t)(0x10246080u));
  /* 10236416 push ecx */
  push32((uint32_t)(ECX));
  /* 10236417 call eax */
  call_ind((uint32_t)(EAX), 0x10236419u);
  /* 10236419 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023641c mov esi, eax */
  ESI = (EAX);
  /* 1023641e jmp 0x10236422 */
  goto L_10236422;
L_10236420:;
  /* 10236420 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10236422:;
  /* 10236422 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236424 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023642au);
  /* 1023642a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1023642d mov edi, eax */
  EDI = (EAX);
  /* 1023642f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10236434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236437 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1023643a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1023643c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1023643f mov eax, edx */
  EAX = (EDX);
  /* 10236441 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10236444 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10236446 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236448 jge 0x10236450 */
  if ((C.sf==C.of)) goto L_10236450;
  /* 1023644a push 4 */
  push32((uint32_t)(0x4u));
  /* 1023644c push 4 */
  push32((uint32_t)(0x4u));
  /* 1023644e jmp 0x10236454 */
  goto L_10236454;
L_10236450:;
  /* 10236450 push 6 */
  push32((uint32_t)(0x6u));
  /* 10236452 push 6 */
  push32((uint32_t)(0x6u));
L_10236454:;
  /* 10236454 push 9 */
  push32((uint32_t)(0x9u));
  /* 10236456 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x1023645cu);
  /* 1023645c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023645f:;
  /* 1023645f push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10236464 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023646au);
  /* 1023646a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023646d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023646f jne 0x102364d8 */
  if (!C.zf) goto L_102364d8;
  /* 10236471 mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 10236476 mov cl, byte ptr [0x10246234] */
  CL = (r8((uint32_t)(0x10246234)));
  /* 1023647c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023647e mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10236482 je 0x10236499 */
  if (C.zf) goto L_10236499;
  /* 10236484 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10236488 push 3 */
  push32((uint32_t)(0x3u));
  /* 1023648a push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 1023648f push edx */
  push32((uint32_t)(EDX));
  /* 10236490 call eax */
  call_ind((uint32_t)(EAX), 0x10236492u);
  /* 10236492 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236495 mov esi, eax */
  ESI = (EAX);
  /* 10236497 jmp 0x1023649b */
  goto L_1023649b;
L_10236499:;
  /* 10236499 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1023649b:;
  /* 1023649b push 3 */
  push32((uint32_t)(0x3u));
  /* 1023649d call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102364a3u);
  /* 102364a3 mov edi, eax */
  EDI = (EAX);
  /* 102364a5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102364a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102364ab lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 102364ae mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102364b3 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102364b5 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102364b8 mov ecx, edx */
  ECX = (EDX);
  /* 102364ba shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 102364bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102364bf cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102364c1 jge 0x102364c9 */
  if ((C.sf==C.of)) goto L_102364c9;
  /* 102364c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 102364c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 102364c7 jmp 0x102364cd */
  goto L_102364cd;
L_102364c9:;
  /* 102364c9 push 6 */
  push32((uint32_t)(0x6u));
  /* 102364cb push 6 */
  push32((uint32_t)(0x6u));
L_102364cd:;
  /* 102364cd push 9 */
  push32((uint32_t)(0x9u));
  /* 102364cf call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102364d5u);
  /* 102364d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102364d8:;
  /* 102364d8 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 102364dd call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x102364e3u);
  /* 102364e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102364e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102364e8 jne 0x1023654f */
  if (!C.zf) goto L_1023654f;
  /* 102364ea mov eax, dword ptr [0x1024643c] */
  EAX = (r32((uint32_t)(0x1024643c)));
  /* 102364ef mov dl, byte ptr [0x10246234] */
  DL = (r8((uint32_t)(0x10246234)));
  /* 102364f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102364f7 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 102364fb je 0x10236512 */
  if (C.zf) goto L_10236512;
  /* 102364fd mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10236501 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236503 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10236508 push ecx */
  push32((uint32_t)(ECX));
  /* 10236509 call eax */
  call_ind((uint32_t)(EAX), 0x1023650bu);
  /* 1023650b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023650e mov esi, eax */
  ESI = (EAX);
  /* 10236510 jmp 0x10236514 */
  goto L_10236514;
L_10236512:;
  /* 10236512 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10236514:;
  /* 10236514 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236516 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023651cu);
  /* 1023651c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1023651f mov edi, eax */
  EDI = (EAX);
  /* 10236521 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10236526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236529 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1023652c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1023652e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10236531 mov eax, edx */
  EAX = (EDX);
  /* 10236533 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236535 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10236538 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023653a push 9 */
  push32((uint32_t)(0x9u));
  /* 1023653c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023653e jge 0x10236544 */
  if ((C.sf==C.of)) goto L_10236544;
  /* 10236540 push 9 */
  push32((uint32_t)(0x9u));
  /* 10236542 jmp 0x10236546 */
  goto L_10236546;
L_10236544:;
  /* 10236544 push 6 */
  push32((uint32_t)(0x6u));
L_10236546:;
  /* 10236546 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x1023654cu);
  /* 1023654c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023654f:;
  /* 1023654f push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 10236554 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023655au);
  /* 1023655a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023655d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023655f je 0x10236573 */
  if (C.zf) goto L_10236573;
  /* 10236561 push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 10236566 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023656cu);
  /* 1023656c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023656f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236571 jne 0x10236594 */
  if (!C.zf) goto L_10236594;
L_10236573:;
  /* 10236573 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236575 call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x1023657bu);
  /* 1023657b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023657e cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236583 jge 0x10236594 */
  if ((C.sf==C.of)) goto L_10236594;
  /* 10236585 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236587 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236589 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023658b call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x10236591u);
  /* 10236591 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236594:;
  /* 10236594 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10236599 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x1023659fu);
  /* 1023659f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102365a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102365a4 jne 0x10236617 */
  if (!C.zf) goto L_10236617;
  /* 102365a6 call 0x10232820 */
  push32(0x102365abu); f_10232820();
  /* 102365ab cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102365ae jge 0x10236617 */
  if ((C.sf==C.of)) goto L_10236617;
  /* 102365b0 mov eax, dword ptr [0x10246438] */
  EAX = (r32((uint32_t)(0x10246438)));
  /* 102365b5 mov cl, byte ptr [0x10246234] */
  CL = (r8((uint32_t)(0x10246234)));
  /* 102365bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102365bd mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 102365c1 je 0x102365d8 */
  if (C.zf) goto L_102365d8;
  /* 102365c3 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102365c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102365c9 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 102365ce push edx */
  push32((uint32_t)(EDX));
  /* 102365cf call eax */
  call_ind((uint32_t)(EAX), 0x102365d1u);
  /* 102365d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102365d4 mov esi, eax */
  ESI = (EAX);
  /* 102365d6 jmp 0x102365da */
  goto L_102365da;
L_102365d8:;
  /* 102365d8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102365da:;
  /* 102365da push 2 */
  push32((uint32_t)(0x2u));
  /* 102365dc call dword ptr [0x102464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464bc))), 0x102365e2u);
  /* 102365e2 mov edi, eax */
  EDI = (EAX);
  /* 102365e4 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102365e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102365ea lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 102365ed mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102365f2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102365f4 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102365f7 mov ecx, edx */
  ECX = (EDX);
  /* 102365f9 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 102365fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102365fe cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236600 jge 0x10236608 */
  if ((C.sf==C.of)) goto L_10236608;
  /* 10236602 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236604 push 5 */
  push32((uint32_t)(0x5u));
  /* 10236606 jmp 0x1023660c */
  goto L_1023660c;
L_10236608:;
  /* 10236608 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023660a push 7 */
  push32((uint32_t)(0x7u));
L_1023660c:;
  /* 1023660c push 9 */
  push32((uint32_t)(0x9u));
  /* 1023660e call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x10236614u);
  /* 10236614 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236617:;
  /* 10236617 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 1023661c call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236622u);
  /* 10236622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236625 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236627 pop edi */
  EDI = (pop32());
  /* 10236628 pop esi */
  ESI = (pop32());
  /* 10236629 jne 0x1023663a */
  if (!C.zf) goto L_1023663a;
  /* 1023662b push 1 */
  push32((uint32_t)(0x1u));
  /* 1023662d push 1 */
  push32((uint32_t)(0x1u));
  /* 1023662f push 9 */
  push32((uint32_t)(0x9u));
  /* 10236631 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x10236637u);
  /* 10236637 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023663a:;
  /* 1023663a push 0x10245ff8 */
  push32((uint32_t)(0x10245ff8u));
  /* 1023663f call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236645u);
  /* 10236645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023664a je 0x1023665e */
  if (C.zf) goto L_1023665e;
  /* 1023664c push 0x102435e0 */
  push32((uint32_t)(0x102435e0u));
  /* 10236651 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236657u);
  /* 10236657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023665c jne 0x1023666d */
  if (!C.zf) goto L_1023666d;
L_1023665e:;
  /* 1023665e push 1 */
  push32((uint32_t)(0x1u));
  /* 10236660 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236662 push 9 */
  push32((uint32_t)(0x9u));
  /* 10236664 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x1023666au);
  /* 1023666a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023666d:;
  /* 1023666d push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10236672 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236678u);
  /* 10236678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023667b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023667d jne 0x1023668e */
  if (!C.zf) goto L_1023668e;
  /* 1023667f push 4 */
  push32((uint32_t)(0x4u));
  /* 10236681 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236683 push 6 */
  push32((uint32_t)(0x6u));
  /* 10236685 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x1023668bu);
  /* 1023668b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023668e:;
  /* 1023668e push 0x102462f8 */
  push32((uint32_t)(0x102462f8u));
  /* 10236693 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236699u);
  /* 10236699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023669c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023669e jne 0x102366c0 */
  if (!C.zf) goto L_102366c0;
  /* 102366a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102366a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102366a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 102366a6 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102366acu);
  /* 102366ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102366af pop ecx */
  ECX = (pop32());
  /* 102366b0 ret  */
  ESPCHK(0x10236390u, _esp0);
  ESP += 4; return;
L_102366b1:;
  /* 102366b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 102366b3 push 6 */
  push32((uint32_t)(0x6u));
  /* 102366b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102366b7 call dword ptr [0x10246494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246494))), 0x102366bdu);
  /* 102366bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102366c0:;
  /* 102366c0 pop ecx */
  ECX = (pop32());
  /* 102366c1 ret  */
  ESPCHK(0x10236390u, _esp0);
  ESP += 4; return;
}

/* FUN_100066d0 @ 0x102366d0 (174 bytes, 50 insns) */
void f_102366d0(void) {
  FTRACE(0x102366d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102366d0 push 0x10246518 */
  push32((uint32_t)(0x10246518u));
  /* 102366d5 call 0x102327c0 */
  push32(0x102366dau); f_102327c0();
  /* 102366da push 0x102462c0 */
  push32((uint32_t)(0x102462c0u));
  /* 102366df call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x102366e5u);
  /* 102366e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102366e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102366ea je 0x1023670c */
  if (C.zf) goto L_1023670c;
  /* 102366ec push 0x10246208 */
  push32((uint32_t)(0x10246208u));
  /* 102366f1 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x102366f7u);
  /* 102366f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102366fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102366fc je 0x1023670c */
  if (C.zf) goto L_1023670c;
  /* 102366fe push 0x1023f16c */
  push32((uint32_t)(0x1023f16cu));
  /* 10236703 call 0x102327c0 */
  push32(0x10236708u); f_102327c0();
  /* 10236708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023670b ret  */
  ESPCHK(0x102366d0u, _esp0);
  ESP += 4; return;
L_1023670c:;
  /* 1023670c mov eax, dword ptr [0x10245ed8] */
  EAX = (r32((uint32_t)(0x10245ed8)));
  /* 10236711 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236714 je 0x10236772 */
  if (C.zf) goto L_10236772;
  /* 10236716 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236719 je 0x10236772 */
  if (C.zf) goto L_10236772;
  /* 1023671b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023671e je 0x10236772 */
  if (C.zf) goto L_10236772;
  /* 10236720 push 0x102461f0 */
  push32((uint32_t)(0x102461f0u));
  /* 10236725 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023672bu);
  /* 1023672b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023672e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236730 je 0x10236752 */
  if (C.zf) goto L_10236752;
  /* 10236732 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10236737 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023673du);
  /* 1023673d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236740 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236742 jne 0x10236752 */
  if (!C.zf) goto L_10236752;
  /* 10236744 push 0x10246518 */
  push32((uint32_t)(0x10246518u));
  /* 10236749 call 0x102327c0 */
  push32(0x1023674eu); f_102327c0();
  /* 1023674e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236751 ret  */
  ESPCHK(0x102366d0u, _esp0);
  ESP += 4; return;
L_10236752:;
  /* 10236752 push 0x102460d0 */
  push32((uint32_t)(0x102460d0u));
  /* 10236757 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023675du);
  /* 1023675d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236760 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236762 je 0x1023677d */
  if (C.zf) goto L_1023677d;
  /* 10236764 push 0x1023f1d8 */
  push32((uint32_t)(0x1023f1d8u));
  /* 10236769 call 0x102327c0 */
  push32(0x1023676eu); f_102327c0();
  /* 1023676e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236771 ret  */
  ESPCHK(0x102366d0u, _esp0);
  ESP += 4; return;
L_10236772:;
  /* 10236772 push 0x1023f1d8 */
  push32((uint32_t)(0x1023f1d8u));
  /* 10236777 call 0x102327c0 */
  push32(0x1023677cu); f_102327c0();
  /* 1023677c pop ecx */
  ECX = (pop32());
L_1023677d:;
  /* 1023677d ret  */
  ESPCHK(0x102366d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x10236780 (70 bytes, 22 insns) */
void f_10236780(void) {
  FTRACE(0x10236780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236780 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236782 call 0x10232800 */
  push32(0x10236787u); f_10232800();
  /* 10236787 push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 1023678c call 0x10235310 */
  push32(0x10236791u); f_10235310();
  /* 10236791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236796 je 0x102367a2 */
  if (C.zf) goto L_102367a2;
  /* 10236798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023679a call 0x10232800 */
  push32(0x1023679fu); f_10232800();
  /* 1023679f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102367a2:;
  /* 102367a2 call 0x10232810 */
  push32(0x102367a7u); f_10232810();
  /* 102367a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102367a9 jg 0x102367bd */
  if ((!C.zf&&C.sf==C.of)) goto L_102367bd;
  /* 102367ab push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 102367b0 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102367b6u);
  /* 102367b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102367b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102367bb jle 0x102367c5 */
  if ((C.zf||C.sf!=C.of)) goto L_102367c5;
L_102367bd:;
  /* 102367bd push 0 */
  push32((uint32_t)(0x0u));
  /* 102367bf call 0x10232800 */
  push32(0x102367c4u); f_10232800();
  /* 102367c4 pop ecx */
  ECX = (pop32());
L_102367c5:;
  /* 102367c5 ret  */
  ESPCHK(0x10236780u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x102367d0 (235 bytes, 66 insns) */
void f_102367d0(void) {
  FTRACE(0x102367d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102367d0 push 0x10246118 */
  push32((uint32_t)(0x10246118u));
  /* 102367d5 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x102367dbu);
  /* 102367db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102367de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102367e0 je 0x102367f6 */
  if (C.zf) goto L_102367f6;
  /* 102367e2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102367e4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102367e6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102367e8 push 0x102462f0 */
  push32((uint32_t)(0x102462f0u));
  /* 102367ed call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x102367f3u);
  /* 102367f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102367f6:;
  /* 102367f6 push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 102367fb call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10236801u);
  /* 10236801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236804 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236806 je 0x1023681c */
  if (C.zf) goto L_1023681c;
  /* 10236808 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1023680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023680c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1023680e push 0x102435e8 */
  push32((uint32_t)(0x102435e8u));
  /* 10236813 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236819u);
  /* 10236819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023681c:;
  /* 1023681c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023681e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10236820 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10236822 push 0x10243848 */
  push32((uint32_t)(0x10243848u));
  /* 10236827 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023682du);
  /* 1023682d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023682f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10236831 push 0x10246158 */
  push32((uint32_t)(0x10246158u));
  /* 10236836 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023683cu);
  /* 1023683c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023683e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10236840 push 0x10246150 */
  push32((uint32_t)(0x10246150u));
  /* 10236845 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023684bu);
  /* 1023684b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023684d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023684f push 0x10246120 */
  push32((uint32_t)(0x10246120u));
  /* 10236854 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023685au);
  /* 1023685a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023685c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023685e push 0x10246118 */
  push32((uint32_t)(0x10246118u));
  /* 10236863 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10236869u);
  /* 10236869 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023686c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023686e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10236870 push 0x10246128 */
  push32((uint32_t)(0x10246128u));
  /* 10236875 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023687bu);
  /* 1023687b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023687d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023687f push 0x10246018 */
  push32((uint32_t)(0x10246018u));
  /* 10236884 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023688au);
  /* 1023688a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023688c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023688e push 0x10246020 */
  push32((uint32_t)(0x10246020u));
  /* 10236893 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x10236899u);
  /* 10236899 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023689b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1023689d push 0x10246028 */
  push32((uint32_t)(0x10246028u));
  /* 102368a2 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102368a8u);
  /* 102368a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102368aa push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102368ac push 0x10246030 */
  push32((uint32_t)(0x10246030u));
  /* 102368b1 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102368b7u);
  /* 102368b7 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102368ba ret  */
  ESPCHK(0x102367d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x102368c0 (303 bytes, 90 insns) */
void f_102368c0(void) {
  FTRACE(0x102368c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102368c0 push ecx */
  push32((uint32_t)(ECX));
  /* 102368c1 push ebx */
  push32((uint32_t)(EBX));
  /* 102368c2 push ebp */
  push32((uint32_t)(EBP));
  /* 102368c3 push esi */
  push32((uint32_t)(ESI));
  /* 102368c4 push edi */
  push32((uint32_t)(EDI));
  /* 102368c5 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 102368ca call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102368d0u);
  /* 102368d0 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 102368d5 mov ebx, eax */
  EBX = (EAX);
  /* 102368d7 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102368ddu);
  /* 102368dd push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 102368e2 mov edi, eax */
  EDI = (EAX);
  /* 102368e4 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102368eau);
  /* 102368ea push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 102368ef mov ebp, eax */
  EBP = (EAX);
  /* 102368f1 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x102368f7u);
  /* 102368f7 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 102368fc mov esi, eax */
  ESI = (EAX);
  /* 102368fe call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236904u);
  /* 10236904 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10236909 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1023690d call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236913u);
  /* 10236913 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10236917 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023691a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023691c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023691e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236920 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236922 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10236924 pop edi */
  EDI = (pop32());
  /* 10236925 pop esi */
  ESI = (pop32());
  /* 10236926 pop ebp */
  EBP = (pop32());
  /* 10236927 pop ebx */
  EBX = (pop32());
  /* 10236928 jne 0x10236990 */
  if (!C.zf) goto L_10236990;
  /* 1023692a cmp dword ptr [0x10246130], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x10246130))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236931 jle 0x10236990 */
  if ((C.zf||C.sf!=C.of)) goto L_10236990;
  /* 10236933 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236935 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10236937 push 4 */
  push32((uint32_t)(0x4u));
  /* 10236939 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 1023693e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236944u);
  /* 10236944 push 0x10246138 */
  push32((uint32_t)(0x10246138u));
  /* 10236949 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x1023694fu);
  /* 1023694f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236952 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236954 je 0x1023696a */
  if (C.zf) goto L_1023696a;
  /* 10236956 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236958 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1023695a push 6 */
  push32((uint32_t)(0x6u));
  /* 1023695c push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10236961 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236967u);
  /* 10236967 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023696a:;
  /* 1023696a push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 1023696f call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236975u);
  /* 10236975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236978 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023697a je 0x10236990 */
  if (C.zf) goto L_10236990;
  /* 1023697c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1023697e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10236980 push 8 */
  push32((uint32_t)(0x8u));
  /* 10236982 push 0x10243858 */
  push32((uint32_t)(0x10243858u));
  /* 10236987 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x1023698du);
  /* 1023698d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236990:;
  /* 10236990 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236992 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10236994 push 0x10246268 */
  push32((uint32_t)(0x10246268u));
  /* 10236999 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x1023699fu);
  /* 1023699f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102369a1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 102369a3 push 0x10246250 */
  push32((uint32_t)(0x10246250u));
  /* 102369a8 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102369aeu);
  /* 102369ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102369b0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102369b2 push 0x10246260 */
  push32((uint32_t)(0x10246260u));
  /* 102369b7 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102369bdu);
  /* 102369bd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102369bf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102369c1 push 0x10246240 */
  push32((uint32_t)(0x10246240u));
  /* 102369c6 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102369ccu);
  /* 102369cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102369ce push 0xf */
  push32((uint32_t)(0xfu));
  /* 102369d0 push 0x10246248 */
  push32((uint32_t)(0x10246248u));
  /* 102369d5 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102369dbu);
  /* 102369db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102369dd push 0xa */
  push32((uint32_t)(0xau));
  /* 102369df push 0x10246238 */
  push32((uint32_t)(0x10246238u));
  /* 102369e4 call dword ptr [0x10246488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246488))), 0x102369eau);
  /* 102369ea add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102369ed pop ecx */
  ECX = (pop32());
  /* 102369ee ret  */
  ESPCHK(0x102368c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x102369f0 (517 bytes, 145 insns) */
void f_102369f0(void) {
  FTRACE(0x102369f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102369f0 push esi */
  push32((uint32_t)(ESI));
  /* 102369f1 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 102369f6 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x102369fcu);
  /* 102369fc push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 10236a01 mov esi, eax */
  ESI = (EAX);
  /* 10236a03 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236a09u);
  /* 10236a09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236a0c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236a0e jne 0x10236a24 */
  if (!C.zf) goto L_10236a24;
  /* 10236a10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 10236a16 push 0x102461d8 */
  push32((uint32_t)(0x102461d8u));
  /* 10236a1b call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236a21u);
  /* 10236a21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236a24:;
  /* 10236a24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236a2a push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10236a2f call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236a35u);
  /* 10236a35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a37 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236a3b push 0x10246168 */
  push32((uint32_t)(0x10246168u));
  /* 10236a40 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236a46u);
  /* 10236a46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a48 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10236a4c push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10236a51 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236a57u);
  /* 10236a57 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10236a5c call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236a62u);
  /* 10236a62 push 0x102461d0 */
  push32((uint32_t)(0x102461d0u));
  /* 10236a67 mov esi, eax */
  ESI = (EAX);
  /* 10236a69 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236a6fu);
  /* 10236a6f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236a72 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236a74 jne 0x10236bf3 */
  if (!C.zf) goto L_10236bf3;
  /* 10236a7a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a7c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10236a80 push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10236a85 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236a8bu);
  /* 10236a8b push 0x10245ea0 */
  push32((uint32_t)(0x10245ea0u));
  /* 10236a90 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236a96u);
  /* 10236a96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236a9b je 0x10236bf3 */
  if (C.zf) goto L_10236bf3;
  /* 10236aa1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236aa3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236aa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236aa7 push 0x10245f50 */
  push32((uint32_t)(0x10245f50u));
  /* 10236aac call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236ab2u);
  /* 10236ab2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236ab4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236ab8 push 0x10245f58 */
  push32((uint32_t)(0x10245f58u));
  /* 10236abd call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236ac3u);
  /* 10236ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236ac9 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10236ace call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236ad4u);
  /* 10236ad4 push 0x102437f8 */
  push32((uint32_t)(0x102437f8u));
  /* 10236ad9 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236adfu);
  /* 10236adf add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236ae4 je 0x10236bf3 */
  if (C.zf) goto L_10236bf3;
  /* 10236aea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236aec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236aee push 1 */
  push32((uint32_t)(0x1u));
  /* 10236af0 push 0x10245f68 */
  push32((uint32_t)(0x10245f68u));
  /* 10236af5 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236afbu);
  /* 10236afb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236afd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10236b01 push 0x10246078 */
  push32((uint32_t)(0x10246078u));
  /* 10236b06 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236b0cu);
  /* 10236b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236b12 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10236b17 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236b1du);
  /* 10236b1d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236b1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236b21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236b23 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10236b28 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236b2eu);
  /* 10236b2e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236b31 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10236b36 call dword ptr [0x102464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464d0))), 0x10236b3cu);
  /* 10236b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236b3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236b41 je 0x10236bf3 */
  if (C.zf) goto L_10236bf3;
  /* 10236b47 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10236b4c call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236b52u);
  /* 10236b52 push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10236b57 mov esi, eax */
  ESI = (EAX);
  /* 10236b59 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236b5fu);
  /* 10236b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236b62 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236b64 jne 0x10236b8d */
  if (!C.zf) goto L_10236b8d;
  /* 10236b66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236b68 call 0x102327d0 */
  push32(0x10236b6du); f_102327d0();
  /* 10236b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236b70 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236b73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236b75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236b77 jge 0x10236b7d */
  if ((C.sf==C.of)) goto L_10236b7d;
  /* 10236b79 push 6 */
  push32((uint32_t)(0x6u));
  /* 10236b7b jmp 0x10236b7f */
  goto L_10236b7f;
L_10236b7d:;
  /* 10236b7d push 4 */
  push32((uint32_t)(0x4u));
L_10236b7f:;
  /* 10236b7f push 0x10245f38 */
  push32((uint32_t)(0x10245f38u));
  /* 10236b84 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236b8au);
  /* 10236b8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236b8d:;
  /* 10236b8d push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10236b92 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236b98u);
  /* 10236b98 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10236b9d mov esi, eax */
  ESI = (EAX);
  /* 10236b9f call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236ba5u);
  /* 10236ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236ba8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236baa jne 0x10236bc0 */
  if (!C.zf) goto L_10236bc0;
  /* 10236bac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236bb0 push 7 */
  push32((uint32_t)(0x7u));
  /* 10236bb2 push 0x10246058 */
  push32((uint32_t)(0x10246058u));
  /* 10236bb7 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236bbdu);
  /* 10236bbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236bc0:;
  /* 10236bc0 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10236bc5 call dword ptr [0x102464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c4))), 0x10236bcbu);
  /* 10236bcb push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10236bd0 mov esi, eax */
  ESI = (EAX);
  /* 10236bd2 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236bd8u);
  /* 10236bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236bdb sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236bdd jne 0x10236bf3 */
  if (!C.zf) goto L_10236bf3;
  /* 10236bdf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236be1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236be3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236be5 push 0x10243598 */
  push32((uint32_t)(0x10243598u));
  /* 10236bea call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236bf0u);
  /* 10236bf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236bf3:;
  /* 10236bf3 pop esi */
  ESI = (pop32());
  /* 10236bf4 ret  */
  ESPCHK(0x102369f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x10236c00 (121 bytes, 36 insns) */
void f_10236c00(void) {
  FTRACE(0x10236c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236c00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236c02 call 0x10232800 */
  push32(0x10236c07u); f_10232800();
  /* 10236c07 push 0x10243808 */
  push32((uint32_t)(0x10243808u));
  /* 10236c0c call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236c12u);
  /* 10236c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236c15 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236c18 jge 0x10236c2d */
  if ((C.sf==C.of)) goto L_10236c2d;
  /* 10236c1a mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10236c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10236c21 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10236c24 push eax */
  push32((uint32_t)(EAX));
  /* 10236c25 call 0x10232770 */
  push32(0x10236c2au); f_10232770();
  /* 10236c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236c2d:;
  /* 10236c2d push 0x10243808 */
  push32((uint32_t)(0x10243808u));
  /* 10236c32 call dword ptr [0x102464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464c0))), 0x10236c38u);
  /* 10236c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236c3b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236c3e jle 0x10236c54 */
  if ((C.zf||C.sf!=C.of)) goto L_10236c54;
  /* 10236c40 mov ecx, dword ptr [0x10246234] */
  ECX = (r32((uint32_t)(0x10246234)));
  /* 10236c46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10236c48 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10236c4b push ecx */
  push32((uint32_t)(ECX));
  /* 10236c4c call 0x10232770 */
  push32(0x10236c51u); f_10232770();
  /* 10236c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236c54:;
  /* 10236c54 mov edx, dword ptr [0x10246234] */
  EDX = (r32((uint32_t)(0x10246234)));
  /* 10236c5a add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10236c5d push edx */
  push32((uint32_t)(EDX));
  /* 10236c5e call 0x10232790 */
  push32(0x10236c63u); f_10232790();
  /* 10236c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236c65 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10236c68 push eax */
  push32((uint32_t)(EAX));
  /* 10236c69 call 0x10232800 */
  push32(0x10236c6eu); f_10232800();
  /* 10236c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10236c70 call 0x10232800 */
  push32(0x10236c75u); f_10232800();
  /* 10236c75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236c78 ret  */
  ESPCHK(0x10236c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x10236c80 (86 bytes, 20 insns) */
void f_10236c80(void) {
  FTRACE(0x10236c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236c80 mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10236c85 mov ecx, dword ptr [eax*4 + 0x10245f18] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10245f18)));
  /* 10236c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10236c8e je 0x10236c95 */
  if (C.zf) goto L_10236c95;
  /* 10236c90 call 0x10236780 */
  push32(0x10236c95u); f_10236780();
L_10236c95:;
  /* 10236c95 call 0x10235e90 */
  push32(0x10236c9au); f_10235e90();
  /* 10236c9a call 0x102367d0 */
  push32(0x10236c9fu); f_102367d0();
  /* 10236c9f call 0x10232820 */
  push32(0x10236ca4u); f_10232820();
  /* 10236ca4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236ca7 jge 0x10236cae */
  if ((C.sf==C.of)) goto L_10236cae;
  /* 10236ca9 call 0x102368c0 */
  push32(0x10236caeu); f_102368c0();
L_10236cae:;
  /* 10236cae call 0x10235c70 */
  push32(0x10236cb3u); f_10235c70();
  /* 10236cb3 call 0x10235b30 */
  push32(0x10236cb8u); f_10235b30();
  /* 10236cb8 call 0x10232820 */
  push32(0x10236cbdu); f_10232820();
  /* 10236cbd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236cc0 jge 0x10236cc7 */
  if ((C.sf==C.of)) goto L_10236cc7;
  /* 10236cc2 call 0x10235350 */
  push32(0x10236cc7u); f_10235350();
L_10236cc7:;
  /* 10236cc7 call 0x10236070 */
  push32(0x10236cccu); f_10236070();
  /* 10236ccc call 0x10236390 */
  push32(0x10236cd1u); f_10236390();
  /* 10236cd1 jmp 0x102366d0 */
  f_102366d0(); return;
}

/* FUN_10006ce0 @ 0x10236ce0 (247 bytes, 70 insns) */
void f_10236ce0(void) {
  FTRACE(0x10236ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236ce0 push esi */
  push32((uint32_t)(ESI));
  /* 10236ce1 push edi */
  push32((uint32_t)(EDI));
  /* 10236ce2 call 0x10236c00 */
  push32(0x10236ce7u); f_10236c00();
  /* 10236ce7 call 0x102369f0 */
  push32(0x10236cecu); f_102369f0();
  /* 10236cec mov edi, 2 */
  EDI = (0x2u);
L_10236cf1:;
  /* 10236cf1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236cf5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10236cfa push 0x10246110 */
  push32((uint32_t)(0x10246110u));
  /* 10236cff call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236d05u);
  /* 10236d05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236d07 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236d09 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10236d0e push 0x10243608 */
  push32((uint32_t)(0x10243608u));
  /* 10236d13 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236d19u);
  /* 10236d19 mov eax, dword ptr [0x10246234] */
  EAX = (r32((uint32_t)(0x10246234)));
  /* 10236d1e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10236d21 push eax */
  push32((uint32_t)(EAX));
  /* 10236d22 call 0x10232790 */
  push32(0x10236d27u); f_10232790();
  /* 10236d27 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236d2c jne 0x10236d4c */
  if (!C.zf) goto L_10236d4c;
  /* 10236d2e mov esi, 0x64 */
  ESI = (0x64u);
L_10236d33:;
  /* 10236d33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236d35 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236d37 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10236d39 push 0x10243808 */
  push32((uint32_t)(0x10243808u));
  /* 10236d3e call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236d44u);
  /* 10236d44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236d47 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10236d48 jne 0x10236d33 */
  if (!C.zf) goto L_10236d33;
  /* 10236d4a jmp 0x10236d60 */
  goto L_10236d60;
L_10236d4c:;
  /* 10236d4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10236d50 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10236d52 push 0x102460e0 */
  push32((uint32_t)(0x102460e0u));
  /* 10236d57 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236d5du);
  /* 10236d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236d60:;
  /* 10236d60 push 0x10245fa0 */
  push32((uint32_t)(0x10245fa0u));
  /* 10236d65 call dword ptr [0x102464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464cc))), 0x10236d6bu);
  /* 10236d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236d6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10236d70 jne 0x10236d89 */
  if (!C.zf) goto L_10236d89;
  /* 10236d72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236d74 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236d76 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10236d7b push 0x10243610 */
  push32((uint32_t)(0x10243610u));
  /* 10236d80 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236d86u);
  /* 10236d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10236d89:;
  /* 10236d89 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236d8b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236d8d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10236d92 push 0x10243600 */
  push32((uint32_t)(0x10243600u));
  /* 10236d97 call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236d9du);
  /* 10236d9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10236d9f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10236da1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10236da6 push 0x10245f00 */
  push32((uint32_t)(0x10245f00u));
  /* 10236dab call dword ptr [0x10246484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10246484))), 0x10236db1u);
  /* 10236db1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236db4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10236db5 jne 0x10236cf1 */
  if (!C.zf) goto L_10236cf1;
  /* 10236dbb call 0x102367d0 */
  push32(0x10236dc0u); f_102367d0();
  /* 10236dc0 call 0x10236070 */
  push32(0x10236dc5u); f_10236070();
  /* 10236dc5 call 0x10236390 */
  push32(0x10236dcau); f_10236390();
  /* 10236dca call 0x10235350 */
  push32(0x10236dcfu); f_10235350();
  /* 10236dcf call 0x10235b30 */
  push32(0x10236dd4u); f_10235b30();
  /* 10236dd4 pop edi */
  EDI = (pop32());
  /* 10236dd5 pop esi */
  ESI = (pop32());
  /* 10236dd6 ret  */
  ESPCHK(0x10236ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x10236de0 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10236de0(void) {
  FTRACE(0x10236de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236de0 call 0x10232720 */
  push32(0x10236de5u); f_10232720();
  /* 10236de5 mov dword ptr [0x10245ed8], eax */
  w32((uint32_t)(0x10245ed8), (EAX));
  /* 10236dea call 0x10232700 */
  push32(0x10236defu); f_10232700();
  /* 10236def mov dword ptr [0x102462e8], eax */
  w32((uint32_t)(0x102462e8), (EAX));
  /* 10236df4 call 0x10232710 */
  push32(0x10236df9u); f_10232710();
  /* 10236df9 mov dword ptr [0x10243818], eax */
  w32((uint32_t)(0x10243818), (EAX));
  /* 10236dfe call 0x102330e0 */
  push32(0x10236e03u); f_102330e0();
  /* 10236e03 push 0x1023f114 */
  push32((uint32_t)(0x1023f114u));
  /* 10236e08 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10236e0a call dword ptr [0x1024648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024648c))), 0x10236e10u);
  /* 10236e10 call 0x102366d0 */
  push32(0x10236e15u); f_102366d0();
  /* 10236e15 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10236e17 push 0x1023f244 */
  push32((uint32_t)(0x1023f244u));
  /* 10236e1c call 0x102327a0 */
  push32(0x10236e21u); f_102327a0();
  /* 10236e21 mov eax, dword ptr [0x10245ed8] */
  EAX = (r32((uint32_t)(0x10245ed8)));
  /* 10236e26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236e29 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236e2c ja 0x10236ef2 */
  if ((!C.cf&&!C.zf)) goto L_10236ef2;
  /* 10236e32 jmp dword ptr [eax*4 + 0x10236ef8] */
  switch (EAX) {
    case 0: goto L_10236e39;
    case 1: goto L_10236eb5;
    case 2: goto L_10236ebc;
    case 3: goto L_10236ebc;
    case 4: goto L_10236ebc;
    case 5: goto L_10236e39;
    default: x86_unimpl("switch@0x10236e32 out of table"); return;
  }
L_10236e39:;
  /* 10236e39 cmp dword ptr [0x10243818], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10243818))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236e40 jne 0x10236e72 */
  if (!C.zf) goto L_10236e72;
  /* 10236e42 push 0x1023f160 */
  push32((uint32_t)(0x1023f160u));
  /* 10236e47 push 3 */
  push32((uint32_t)(0x3u));
  /* 10236e49 call dword ptr [0x1024648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024648c))), 0x10236e4fu);
  /* 10236e4f push 0x1023f16c */
  push32((uint32_t)(0x1023f16cu));
  /* 10236e54 call 0x102327c0 */
  push32(0x10236e59u); f_102327c0();
  /* 10236e59 push 5 */
  push32((uint32_t)(0x5u));
  /* 10236e5b push 0x1023f41c */
  push32((uint32_t)(0x1023f41cu));
  /* 10236e60 call 0x102327a0 */
  push32(0x10236e65u); f_102327a0();
  /* 10236e65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236e68 call 0x10236ce0 */
  push32(0x10236e6du); f_10236ce0();
  /* 10236e6d jmp 0x10236ef2 */
  goto L_10236ef2;
L_10236e72:;
  /* 10236e72 push 0x1023f114 */
  push32((uint32_t)(0x1023f114u));
  /* 10236e77 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10236e79 call dword ptr [0x1024648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024648c))), 0x10236e7fu);
  /* 10236e7f push 0x10246518 */
  push32((uint32_t)(0x10246518u));
  /* 10236e84 call 0x102327c0 */
  push32(0x10236e89u); f_102327c0();
  /* 10236e89 mov eax, dword ptr [0x10243818] */
  EAX = (r32((uint32_t)(0x10243818)));
  /* 10236e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236e93 jne 0x10236e9f */
  if (!C.zf) goto L_10236e9f;
  /* 10236e95 mov dword ptr [0x1023f248], 4 */
  w32((uint32_t)(0x1023f248), (0x4u));
L_10236e9f:;
  /* 10236e9f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10236ea1 push 0x1023f244 */
  push32((uint32_t)(0x1023f244u));
  /* 10236ea6 call 0x102327a0 */
  push32(0x10236eabu); f_102327a0();
  /* 10236eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236eae call 0x10236c80 */
  push32(0x10236eb3u); f_10236c80();
  /* 10236eb3 jmp 0x10236ef2 */
  goto L_10236ef2;
L_10236eb5:;
  /* 10236eb5 call 0x10234480 */
  push32(0x10236ebau); f_10234480();
  /* 10236eba jmp 0x10236ef2 */
  goto L_10236ef2;
L_10236ebc:;
  /* 10236ebc push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10236ec1 call dword ptr [0x102464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464a8))), 0x10236ec7u);
  /* 10236ec7 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10236ecc call dword ptr [0x102464ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464ac))), 0x10236ed2u);
  /* 10236ed2 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10236ed7 call dword ptr [0x102464b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102464b0))), 0x10236eddu);
  /* 10236edd push 0x1023f07c */
  push32((uint32_t)(0x1023f07cu));
  /* 10236ee2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10236ee4 call dword ptr [0x1024648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1024648c))), 0x10236eeau);
  /* 10236eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236eed call 0x10233400 */
  push32(0x10236ef2u); f_10233400();
L_10236ef2:;
  /* 10236ef2 jmp 0x10233260 */
  f_10233260(); return;
}

/* FUN_10006f10 @ 0x10236f10 (82 bytes, 32 insns) */
void f_10236f10(void) {
  FTRACE(0x10236f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10236f11 mov ebp, esp */
  EBP = (ESP);
  /* 10236f13 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10236f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10236f19 push esi */
  push32((uint32_t)(ESI));
  /* 10236f1a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10236f1d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10236f20 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10236f23 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10236f2a push eax */
  push32((uint32_t)(EAX));
  /* 10236f2b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10236f2e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10236f31 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10236f38 push eax */
  push32((uint32_t)(EAX));
  /* 10236f39 call 0x1023729c */
  push32(0x10236f3eu); f_1023729c();
  /* 10236f3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236f41 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10236f44 mov esi, eax */
  ESI = (EAX);
  /* 10236f46 js 0x10236f50 */
  if (C.sf) goto L_10236f50;
  /* 10236f48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10236f4b and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10236f4e jmp 0x10236f5d */
  goto L_10236f5d;
L_10236f50:;
  /* 10236f50 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10236f53 push eax */
  push32((uint32_t)(EAX));
  /* 10236f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10236f56 call 0x10237184 */
  push32(0x10236f5bu); f_10237184();
  /* 10236f5b pop ecx */
  ECX = (pop32());
  /* 10236f5c pop ecx */
  ECX = (pop32());
L_10236f5d:;
  /* 10236f5d mov eax, esi */
  EAX = (ESI);
  /* 10236f5f pop esi */
  ESI = (pop32());
  /* 10236f60 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10236f61 ret  */
  ESPCHK(0x10236f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f62 @ 0x10236f62 (23 bytes, 6 insns) */
void f_10236f62(void) {
  FTRACE(0x10236f62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236f62 call 0x10236f7a */
  push32(0x10236f67u); f_10236f7a();
  /* 10236f67 call 0x10237af6 */
  push32(0x10236f6cu); f_10237af6();
  /* 10236f6c mov dword ptr [0x102465e0], eax */
  w32((uint32_t)(0x102465e0), (EAX));
  /* 10236f71 call 0x10237aa6 */
  push32(0x10236f76u); f_10237aa6();
  /* 10236f76 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10236f78 ret  */
  ESPCHK(0x10236f62u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f7a @ 0x10236f7a (56 bytes, 8 insns) */
void f_10236f7a(void) {
  FTRACE(0x10236f7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236f7a mov eax, 0x10237ecf */
  EAX = (0x10237ecfu);
  /* 10236f7f mov dword ptr [0x10240618], 0x10237b79 */
  w32((uint32_t)(0x10240618), (0x10237b79u));
  /* 10236f89 mov dword ptr [0x10240614], eax */
  w32((uint32_t)(0x10240614), (EAX));
  /* 10236f8e mov dword ptr [0x1024061c], 0x10237bdf */
  w32((uint32_t)(0x1024061c), (0x10237bdfu));
  /* 10236f98 mov dword ptr [0x10240620], 0x10237b1f */
  w32((uint32_t)(0x10240620), (0x10237b1fu));
  /* 10236fa2 mov dword ptr [0x10240624], 0x10237bc7 */
  w32((uint32_t)(0x10240624), (0x10237bc7u));
  /* 10236fac mov dword ptr [0x10240628], eax */
  w32((uint32_t)(0x10240628), (EAX));
  /* 10236fb1 ret  */
  ESPCHK(0x10236f7au, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10236fb4 (39 bytes, 16 insns) */
void f_10236fb4(void) {
  FTRACE(0x10236fb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236fb4 push ebp */
  push32((uint32_t)(EBP));
  /* 10236fb5 mov ebp, esp */
  EBP = (ESP);
  /* 10236fb7 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10236fba wait  */
  /* wait (no observable integer/reg state) */
  /* 10236fbb fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10236fbe wait  */
  /* wait (no observable integer/reg state) */
  /* 10236fbf mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10236fc3 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10236fc6 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10236fca fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10236fcd fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10236fd0 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10236fd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10236fd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10236fd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10236fda ret  */
  ESPCHK(0x10236fb4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fdb @ 0x10236fdb (217 bytes, 57 insns) */
void f_10236fdb(void) {
  FTRACE(0x10236fdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10236fdb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10236fdf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10236fe2 jne 0x10237070 */
  if (!C.zf) goto L_10237070;
  /* 10236fe8 call dword ptr [0x1023e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e014))), 0x10236feeu);
  /* 10236fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10236ff0 mov dword ptr [0x102465fc], eax */
  w32((uint32_t)(0x102465fc), (EAX));
  /* 10236ff5 call 0x102389ac */
  push32(0x10236ffau); f_102389ac();
  /* 10236ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10236ffc pop ecx */
  ECX = (pop32());
  /* 10236ffd je 0x1023703b */
  if (C.zf) goto L_1023703b;
  /* 10236fff mov eax, dword ptr [0x102465fc] */
  EAX = (r32((uint32_t)(0x102465fc)));
  /* 10237004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10237006 mov cl, byte ptr [0x102465fd] */
  CL = (r8((uint32_t)(0x102465fd)));
  /* 1023700c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10237011 shr dword ptr [0x102465fc], 0x10 */
  w32((uint32_t)(0x102465fc), (sh_shr((uint32_t)(r32((uint32_t)(0x102465fc))), (0x10u)&0x1f, 32)));
  /* 10237018 mov dword ptr [0x10246604], eax */
  w32((uint32_t)(0x10246604), (EAX));
  /* 1023701d mov dword ptr [0x10246608], ecx */
  w32((uint32_t)(0x10246608), (ECX));
  /* 10237023 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10237026 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237028 mov dword ptr [0x10246600], eax */
  w32((uint32_t)(0x10246600), (EAX));
  /* 1023702d call 0x10238063 */
  push32(0x10237032u); f_10238063();
  /* 10237032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237034 jne 0x1023703f */
  if (!C.zf) goto L_1023703f;
  /* 10237036 call 0x10238a09 */
  push32(0x1023703bu); f_10238a09();
L_1023703b:;
  /* 1023703b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023703d jmp 0x102370b1 */
  goto L_102370b1;
L_1023703f:;
  /* 1023703f call dword ptr [0x1023e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e010))), 0x10237045u);
  /* 10237045 mov dword ptr [0x10247cf4], eax */
  w32((uint32_t)(0x10247cf4), (EAX));
  /* 1023704a call 0x10238705 */
  push32(0x1023704fu); f_10238705();
  /* 1023704f mov dword ptr [0x102465e8], eax */
  w32((uint32_t)(0x102465e8), (EAX));
  /* 10237054 call 0x102381ef */
  push32(0x10237059u); f_102381ef();
  /* 10237059 call 0x102384b8 */
  push32(0x1023705eu); f_102384b8();
  /* 1023705e call 0x102383ff */
  push32(0x10237063u); f_102383ff();
  /* 10237063 call 0x10237f45 */
  push32(0x10237068u); f_10237f45();
  /* 10237068 inc dword ptr [0x102465e4] */
  { uint32_t _r=(r32((uint32_t)(0x102465e4)))+1; w32((uint32_t)(0x102465e4), (_r)); fl_inc(_r,32); }
  /* 1023706e jmp 0x102370ae */
  goto L_102370ae;
L_10237070:;
  /* 10237070 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10237072 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237074 jne 0x102370a2 */
  if (!C.zf) goto L_102370a2;
  /* 10237076 cmp dword ptr [0x102465e4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102465e4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023707c jle 0x1023703b */
  if ((C.zf||C.sf!=C.of)) goto L_1023703b;
  /* 1023707e dec dword ptr [0x102465e4] */
  { uint32_t _r=(r32((uint32_t)(0x102465e4)))-1; w32((uint32_t)(0x102465e4), (_r)); fl_dec(_r,32); }
  /* 10237084 cmp dword ptr [0x10246634], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10246634))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023708a jne 0x10237091 */
  if (!C.zf) goto L_10237091;
  /* 1023708c call 0x10237f83 */
  push32(0x10237091u); f_10237f83();
L_10237091:;
  /* 10237091 call 0x102383ab */
  push32(0x10237096u); f_102383ab();
  /* 10237096 call 0x102380b7 */
  push32(0x1023709bu); f_102380b7();
  /* 1023709b call 0x10238a09 */
  push32(0x102370a0u); f_10238a09();
  /* 102370a0 jmp 0x102370ae */
  goto L_102370ae;
L_102370a2:;
  /* 102370a2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102370a5 jne 0x102370ae */
  if (!C.zf) goto L_102370ae;
  /* 102370a7 push ecx */
  push32((uint32_t)(ECX));
  /* 102370a8 call 0x1023814f */
  push32(0x102370adu); f_1023814f();
  /* 102370ad pop ecx */
  ECX = (pop32());
L_102370ae:;
  /* 102370ae push 1 */
  push32((uint32_t)(0x1u));
  /* 102370b0 pop eax */
  EAX = (pop32());
L_102370b1:;
  /* 102370b1 ret 0xc */
  ESPCHK(0x10236fdbu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102370b4 (157 bytes, 73 insns) */
void f_102370b4(void) {
  FTRACE(0x102370b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102370b4 push ebp */
  push32((uint32_t)(EBP));
  /* 102370b5 mov ebp, esp */
  EBP = (ESP);
  /* 102370b7 push ebx */
  push32((uint32_t)(EBX));
  /* 102370b8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102370bb push esi */
  push32((uint32_t)(ESI));
  /* 102370bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102370bf push edi */
  push32((uint32_t)(EDI));
  /* 102370c0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102370c3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102370c5 jne 0x102370d0 */
  if (!C.zf) goto L_102370d0;
  /* 102370c7 cmp dword ptr [0x102465e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102465e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102370ce jmp 0x102370f6 */
  goto L_102370f6;
L_102370d0:;
  /* 102370d0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102370d3 je 0x102370da */
  if (C.zf) goto L_102370da;
  /* 102370d5 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102370d8 jne 0x102370fc */
  if (!C.zf) goto L_102370fc;
L_102370da:;
  /* 102370da mov eax, dword ptr [0x10247cf8] */
  EAX = (r32((uint32_t)(0x10247cf8)));
  /* 102370df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102370e1 je 0x102370ec */
  if (C.zf) goto L_102370ec;
  /* 102370e3 push edi */
  push32((uint32_t)(EDI));
  /* 102370e4 push esi */
  push32((uint32_t)(ESI));
  /* 102370e5 push ebx */
  push32((uint32_t)(EBX));
  /* 102370e6 call eax */
  call_ind((uint32_t)(EAX), 0x102370e8u);
  /* 102370e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102370ea je 0x102370f8 */
  if (C.zf) goto L_102370f8;
L_102370ec:;
  /* 102370ec push edi */
  push32((uint32_t)(EDI));
  /* 102370ed push esi */
  push32((uint32_t)(ESI));
  /* 102370ee push ebx */
  push32((uint32_t)(EBX));
  /* 102370ef call 0x10236fdb */
  push32(0x102370f4u); f_10236fdb();
  /* 102370f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102370f6:;
  /* 102370f6 jne 0x102370fc */
  if (!C.zf) goto L_102370fc;
L_102370f8:;
  /* 102370f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102370fa jmp 0x1023714a */
  goto L_1023714a;
L_102370fc:;
  /* 102370fc push edi */
  push32((uint32_t)(EDI));
  /* 102370fd push esi */
  push32((uint32_t)(ESI));
  /* 102370fe push ebx */
  push32((uint32_t)(EBX));
  /* 102370ff call 0x10232890 */
  push32(0x10237104u); f_10232890();
  /* 10237104 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237107 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1023710a jne 0x10237118 */
  if (!C.zf) goto L_10237118;
  /* 1023710c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023710e jne 0x10237147 */
  if (!C.zf) goto L_10237147;
  /* 10237110 push edi */
  push32((uint32_t)(EDI));
  /* 10237111 push eax */
  push32((uint32_t)(EAX));
  /* 10237112 push ebx */
  push32((uint32_t)(EBX));
  /* 10237113 call 0x10236fdb */
  push32(0x10237118u); f_10236fdb();
L_10237118:;
  /* 10237118 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023711a je 0x10237121 */
  if (C.zf) goto L_10237121;
  /* 1023711c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023711f jne 0x10237147 */
  if (!C.zf) goto L_10237147;
L_10237121:;
  /* 10237121 push edi */
  push32((uint32_t)(EDI));
  /* 10237122 push esi */
  push32((uint32_t)(ESI));
  /* 10237123 push ebx */
  push32((uint32_t)(EBX));
  /* 10237124 call 0x10236fdb */
  push32(0x10237129u); f_10236fdb();
  /* 10237129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023712b jne 0x10237130 */
  if (!C.zf) goto L_10237130;
  /* 1023712d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10237130:;
  /* 10237130 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237134 je 0x10237147 */
  if (C.zf) goto L_10237147;
  /* 10237136 mov eax, dword ptr [0x10247cf8] */
  EAX = (r32((uint32_t)(0x10247cf8)));
  /* 1023713b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023713d je 0x10237147 */
  if (C.zf) goto L_10237147;
  /* 1023713f push edi */
  push32((uint32_t)(EDI));
  /* 10237140 push esi */
  push32((uint32_t)(ESI));
  /* 10237141 push ebx */
  push32((uint32_t)(EBX));
  /* 10237142 call eax */
  call_ind((uint32_t)(EAX), 0x10237144u);
  /* 10237144 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10237147:;
  /* 10237147 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1023714a:;
  /* 1023714a pop edi */
  EDI = (pop32());
  /* 1023714b pop esi */
  ESI = (pop32());
  /* 1023714c pop ebx */
  EBX = (pop32());
  /* 1023714d pop ebp */
  EBP = (pop32());
  /* 1023714e ret 0xc */
  ESPCHK(0x102370b4u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10237151 (48 bytes, 15 insns) */
void f_10237151(void) {
  FTRACE(0x10237151u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237151 mov eax, dword ptr [0x102465f0] */
  EAX = (r32((uint32_t)(0x102465f0)));
  /* 10237156 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237159 je 0x10237168 */
  if (C.zf) goto L_10237168;
  /* 1023715b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023715d jne 0x1023716d */
  if (!C.zf) goto L_1023716d;
  /* 1023715f cmp dword ptr [0x102465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237166 jne 0x1023716d */
  if (!C.zf) goto L_1023716d;
L_10237168:;
  /* 10237168 call 0x10238ab1 */
  push32(0x1023716du); f_10238ab1();
L_1023716d:;
  /* 1023716d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10237171 call 0x10238aea */
  push32(0x10237176u); f_10238aea();
  /* 10237176 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1023717b call dword ptr [0x10240608] */
  call_ind((uint32_t)(r32((uint32_t)(0x10240608))), 0x10237181u);
  /* 10237181 pop ecx */
  ECX = (pop32());
  /* 10237182 pop ecx */
  ECX = (pop32());
  /* 10237183 ret  */
  ESPCHK(0x10237151u, _esp0);
  ESP += 4; return;
}

/* FUN_10007184 @ 0x10237184 (280 bytes, 106 insns) */
void f_10237184(void) {
  FTRACE(0x10237184u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237184 push ebp */
  push32((uint32_t)(EBP));
  /* 10237185 mov ebp, esp */
  EBP = (ESP);
  /* 10237187 push ebx */
  push32((uint32_t)(EBX));
  /* 10237188 push esi */
  push32((uint32_t)(ESI));
  /* 10237189 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023718c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1023718f mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10237192 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 10237194 je 0x10237290 */
  if (C.zf) goto L_10237290;
  /* 1023719a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 1023719c jne 0x10237290 */
  if (!C.zf) goto L_10237290;
  /* 102371a2 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102371a4 je 0x102371bc */
  if (C.zf) goto L_102371bc;
  /* 102371a6 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102371aa test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 102371ac je 0x10237290 */
  if (C.zf) goto L_10237290;
  /* 102371b2 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 102371b5 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 102371b7 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 102371b9 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_102371bc:;
  /* 102371bc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 102371bf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102371c3 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 102371c7 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 102371c9 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 102371cb test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 102371cf mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102371d2 jne 0x102371f6 */
  if (!C.zf) goto L_102371f6;
  /* 102371d4 cmp esi, 0x10240708 */
  { uint32_t _a=(ESI),_b=(0x10240708u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102371da je 0x102371e4 */
  if (C.zf) goto L_102371e4;
  /* 102371dc cmp esi, 0x10240728 */
  { uint32_t _a=(ESI),_b=(0x10240728u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102371e2 jne 0x102371ef */
  if (!C.zf) goto L_102371ef;
L_102371e4:;
  /* 102371e4 push ebx */
  push32((uint32_t)(EBX));
  /* 102371e5 call 0x10238f49 */
  push32(0x102371eau); f_10238f49();
  /* 102371ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102371ec pop ecx */
  ECX = (pop32());
  /* 102371ed jne 0x102371f6 */
  if (!C.zf) goto L_102371f6;
L_102371ef:;
  /* 102371ef push esi */
  push32((uint32_t)(ESI));
  /* 102371f0 call 0x10238f05 */
  push32(0x102371f5u); f_10238f05();
  /* 102371f5 pop ecx */
  ECX = (pop32());
L_102371f6:;
  /* 102371f6 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 102371fc push edi */
  push32((uint32_t)(EDI));
  /* 102371fd je 0x10237266 */
  if (C.zf) goto L_10237266;
  /* 102371ff mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10237202 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10237204 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237206 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10237209 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1023720b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1023720e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023720f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10237211 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10237214 jle 0x10237226 */
  if ((C.zf||C.sf!=C.of)) goto L_10237226;
  /* 10237216 push edi */
  push32((uint32_t)(EDI));
  /* 10237217 push eax */
  push32((uint32_t)(EAX));
  /* 10237218 push ebx */
  push32((uint32_t)(EBX));
  /* 10237219 call 0x10238d15 */
  push32(0x1023721eu); f_10238d15();
  /* 1023721e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237221 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10237224 jmp 0x1023725c */
  goto L_1023725c;
L_10237226:;
  /* 10237226 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237229 je 0x10237244 */
  if (C.zf) goto L_10237244;
  /* 1023722b mov ecx, ebx */
  ECX = (EBX);
  /* 1023722d mov eax, ebx */
  EAX = (EBX);
  /* 1023722f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10237232 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10237235 mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 1023723c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1023723f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10237242 jmp 0x10237249 */
  goto L_10237249;
L_10237244:;
  /* 10237244 mov eax, 0x10240630 */
  EAX = (0x10240630u);
L_10237249:;
  /* 10237249 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 1023724d je 0x1023725c */
  if (C.zf) goto L_1023725c;
  /* 1023724f push 2 */
  push32((uint32_t)(0x2u));
  /* 10237251 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237253 push ebx */
  push32((uint32_t)(EBX));
  /* 10237254 call 0x10238c3d */
  push32(0x10237259u); f_10238c3d();
  /* 10237259 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023725c:;
  /* 1023725c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1023725f mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10237262 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10237264 jmp 0x1023727a */
  goto L_1023727a;
L_10237266:;
  /* 10237266 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237268 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1023726b pop edi */
  EDI = (pop32());
  /* 1023726c push edi */
  push32((uint32_t)(EDI));
  /* 1023726d push eax */
  push32((uint32_t)(EAX));
  /* 1023726e push ebx */
  push32((uint32_t)(EBX));
  /* 1023726f call 0x10238d15 */
  push32(0x10237274u); f_10238d15();
  /* 10237274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237277 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1023727a:;
  /* 1023727a cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023727d pop edi */
  EDI = (pop32());
  /* 1023727e je 0x10237286 */
  if (C.zf) goto L_10237286;
  /* 10237280 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10237284 jmp 0x10237295 */
  goto L_10237295;
L_10237286:;
  /* 10237286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10237289 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023728e jmp 0x10237298 */
  goto L_10237298;
L_10237290:;
  /* 10237290 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10237292 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10237295:;
  /* 10237295 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10237298:;
  /* 10237298 pop esi */
  ESI = (pop32());
  /* 10237299 pop ebx */
  EBX = (pop32());
  /* 1023729a pop ebp */
  EBP = (pop32());
  /* 1023729b ret  */
  ESPCHK(0x10237184u, _esp0);
  ESP += 4; return;
}

/* FUN_1000729c @ 0x1023729c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_1023729c(void) {
  FTRACE(0x1023729cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023729c push ebp */
  push32((uint32_t)(EBP));
  /* 1023729d mov ebp, esp */
  EBP = (ESP);
  /* 1023729f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102372a5 push ebx */
  push32((uint32_t)(EBX));
  /* 102372a6 push esi */
  push32((uint32_t)(ESI));
  /* 102372a7 push edi */
  push32((uint32_t)(EDI));
  /* 102372a8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102372ab xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102372ad mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102372af inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102372b0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 102372b2 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102372b5 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 102372b8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 102372bb je 0x102379b5 */
  if (C.zf) goto L_102379b5;
  /* 102372c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102372c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102372c6 jmp 0x102372d0 */
  goto L_102372d0;
L_102372c8:;
  /* 102372c8 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102372cb mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 102372ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_102372d0:;
  /* 102372d0 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102372d3 jl 0x102379b5 */
  if ((C.sf!=C.of)) goto L_102379b5;
  /* 102372d9 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102372dc jl 0x102372f1 */
  if ((C.sf!=C.of)) goto L_102372f1;
  /* 102372de cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102372e1 jg 0x102372f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_102372f1;
  /* 102372e3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102372e6 mov al, byte ptr [eax + 0x1023e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1023e0c8)));
  /* 102372ec and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 102372ef jmp 0x102372f3 */
  goto L_102372f3;
L_102372f1:;
  /* 102372f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102372f3:;
  /* 102372f3 movsx eax, byte ptr [esi + eax*8 + 0x1023e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1023e0e8))));
  /* 102372fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 102372fe cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237301 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10237304 ja 0x102379a4 */
  if ((!C.cf&&!C.zf)) goto L_102379a4;
  /* 1023730a jmp dword ptr [eax*4 + 0x102379bd] */
  switch (EAX) {
    case 0: goto L_1023743b;
    case 1: goto L_10237311;
    case 2: goto L_1023732c;
    case 3: goto L_10237378;
    case 4: goto L_102373af;
    case 5: goto L_102373b7;
    case 6: goto L_102373ec;
    case 7: goto L_1023747f;
    default: x86_unimpl("switch@0x1023730a out of table"); return;
  }
L_10237311:;
  /* 10237311 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10237315 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10237318 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1023731b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1023731e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10237321 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10237324 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10237327 jmp 0x102379a4 */
  goto L_102379a4;
L_1023732c:;
  /* 1023732c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023732f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237332 je 0x1023736f */
  if (C.zf) goto L_1023736f;
  /* 10237334 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237337 je 0x10237366 */
  if (C.zf) goto L_10237366;
  /* 10237339 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023733c je 0x1023735d */
  if (C.zf) goto L_1023735d;
  /* 1023733e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023733f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10237340 je 0x10237354 */
  if (C.zf) goto L_10237354;
  /* 10237342 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237345 jne 0x102379a4 */
  if (!C.zf) goto L_102379a4;
  /* 1023734b or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023734f jmp 0x102379a4 */
  goto L_102379a4;
L_10237354:;
  /* 10237354 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10237358 jmp 0x102379a4 */
  goto L_102379a4;
L_1023735d:;
  /* 1023735d or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10237361 jmp 0x102379a4 */
  goto L_102379a4;
L_10237366:;
  /* 10237366 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 1023736a jmp 0x102379a4 */
  goto L_102379a4;
L_1023736f:;
  /* 1023736f or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10237373 jmp 0x102379a4 */
  goto L_102379a4;
L_10237378:;
  /* 10237378 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023737b jne 0x102373a0 */
  if (!C.zf) goto L_102373a0;
  /* 1023737d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10237380 push eax */
  push32((uint32_t)(EAX));
  /* 10237381 call 0x10237a7b */
  push32(0x10237386u); f_10237a7b();
  /* 10237386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237388 pop ecx */
  ECX = (pop32());
  /* 10237389 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023738c jge 0x102379a4 */
  if ((C.sf==C.of)) goto L_102379a4;
  /* 10237392 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10237396 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10237398:;
  /* 10237398 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023739b jmp 0x102379a4 */
  goto L_102379a4;
L_102373a0:;
  /* 102373a0 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 102373a3 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102373a6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102373a9 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 102373ad jmp 0x10237398 */
  goto L_10237398;
L_102373af:;
  /* 102373af mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 102373b2 jmp 0x102379a4 */
  goto L_102379a4;
L_102373b7:;
  /* 102373b7 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102373ba jne 0x102373da */
  if (!C.zf) goto L_102373da;
  /* 102373bc lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102373bf push eax */
  push32((uint32_t)(EAX));
  /* 102373c0 call 0x10237a7b */
  push32(0x102373c5u); f_10237a7b();
  /* 102373c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102373c7 pop ecx */
  ECX = (pop32());
  /* 102373c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102373cb jge 0x102379a4 */
  if ((C.sf==C.of)) goto L_102379a4;
  /* 102373d1 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 102373d5 jmp 0x102379a4 */
  goto L_102379a4;
L_102373da:;
  /* 102373da lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102373dd movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102373e0 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 102373e4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102373e7 jmp 0x102379a4 */
  goto L_102379a4;
L_102373ec:;
  /* 102373ec cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102373ef je 0x1023741f */
  if (C.zf) goto L_1023741f;
  /* 102373f1 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102373f4 je 0x10237416 */
  if (C.zf) goto L_10237416;
  /* 102373f6 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102373f9 je 0x1023740d */
  if (C.zf) goto L_1023740d;
  /* 102373fb cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102373fe jne 0x102379a4 */
  if (!C.zf) goto L_102379a4;
  /* 10237404 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10237408 jmp 0x102379a4 */
  goto L_102379a4;
L_1023740d:;
  /* 1023740d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10237411 jmp 0x102379a4 */
  goto L_102379a4;
L_10237416:;
  /* 10237416 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023741a jmp 0x102379a4 */
  goto L_102379a4;
L_1023741f:;
  /* 1023741f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237422 jne 0x10237438 */
  if (!C.zf) goto L_10237438;
  /* 10237424 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237428 jne 0x10237438 */
  if (!C.zf) goto L_10237438;
  /* 1023742a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023742b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023742c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10237430 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10237433 jmp 0x102379a4 */
  goto L_102379a4;
L_10237438:;
  /* 10237438 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1023743b:;
  /* 1023743b mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 10237441 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10237444 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10237447 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1023744c je 0x10237467 */
  if (C.zf) goto L_10237467;
  /* 1023744e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10237451 push eax */
  push32((uint32_t)(EAX));
  /* 10237452 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237455 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10237458 push eax */
  push32((uint32_t)(EAX));
  /* 10237459 call 0x102379dd */
  push32(0x1023745eu); f_102379dd();
  /* 1023745e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10237460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237463 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10237464 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10237467:;
  /* 10237467 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1023746a push eax */
  push32((uint32_t)(EAX));
  /* 1023746b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023746e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10237471 push eax */
  push32((uint32_t)(EAX));
  /* 10237472 call 0x102379dd */
  push32(0x10237477u); f_102379dd();
  /* 10237477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023747a jmp 0x102379a4 */
  goto L_102379a4;
L_1023747f:;
  /* 1023747f movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10237482 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237485 jg 0x102376a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_102376a7;
  /* 1023748b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023748e jge 0x1023752a */
  if ((C.sf==C.of)) goto L_1023752a;
  /* 10237494 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237497 jg 0x10237588 */
  if ((!C.zf&&C.sf==C.of)) goto L_10237588;
  /* 1023749d je 0x1023771b */
  if (C.zf) goto L_1023771b;
  /* 102374a3 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102374a6 je 0x1023754b */
  if (C.zf) goto L_1023754b;
  /* 102374ac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102374ad dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102374ae je 0x10237520 */
  if (C.zf) goto L_10237520;
  /* 102374b0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102374b1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102374b2 je 0x10237520 */
  if (C.zf) goto L_10237520;
  /* 102374b4 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102374b7 jne 0x102378a6 */
  if (!C.zf) goto L_102378a6;
  /* 102374bd test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 102374c3 jne 0x102374c9 */
  if (!C.zf) goto L_102374c9;
  /* 102374c5 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_102374c9:;
  /* 102374c9 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102374cc cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102374cf jne 0x102374d6 */
  if (!C.zf) goto L_102374d6;
  /* 102374d1 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_102374d6:;
  /* 102374d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102374d9 push eax */
  push32((uint32_t)(EAX));
  /* 102374da call 0x10237a7b */
  push32(0x102374dfu); f_10237a7b();
  /* 102374df test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 102374e5 pop ecx */
  ECX = (pop32());
  /* 102374e6 mov ecx, eax */
  ECX = (EAX);
  /* 102374e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102374eb je 0x102376ef */
  if (C.zf) goto L_102376ef;
  /* 102374f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102374f3 jne 0x102374fe */
  if (!C.zf) goto L_102374fe;
  /* 102374f5 mov ecx, dword ptr [0x10240610] */
  ECX = (r32((uint32_t)(0x10240610)));
  /* 102374fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_102374fe:;
  /* 102374fe mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10237505 mov eax, ecx */
  EAX = (ECX);
L_10237507:;
  /* 10237507 mov edx, esi */
  EDX = (ESI);
  /* 10237509 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1023750a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1023750c je 0x102376e6 */
  if (C.zf) goto L_102376e6;
  /* 10237512 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10237516 je 0x102376e6 */
  if (C.zf) goto L_102376e6;
  /* 1023751c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023751d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023751e jmp 0x10237507 */
  goto L_10237507;
L_10237520:;
  /* 10237520 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10237527 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1023752a:;
  /* 1023752a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023752e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10237534 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237536 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10237539 jge 0x1023760e */
  if ((C.sf==C.of)) goto L_1023760e;
  /* 1023753f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 10237546 jmp 0x1023761c */
  goto L_1023761c;
L_1023754b:;
  /* 1023754b test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10237551 jne 0x10237557 */
  if (!C.zf) goto L_10237557;
  /* 10237553 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10237557:;
  /* 10237557 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 1023755d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10237560 push eax */
  push32((uint32_t)(EAX));
  /* 10237561 je 0x1023759e */
  if (C.zf) goto L_1023759e;
  /* 10237563 call 0x10237a98 */
  push32(0x10237568u); f_10237a98();
  /* 10237568 push eax */
  push32((uint32_t)(EAX));
  /* 10237569 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1023756f push eax */
  push32((uint32_t)(EAX));
  /* 10237570 call 0x1023915b */
  push32(0x10237575u); f_1023915b();
  /* 10237575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237578 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1023757b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023757d jge 0x102375b1 */
  if ((C.sf==C.of)) goto L_102375b1;
  /* 1023757f mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 10237586 jmp 0x102375b1 */
  goto L_102375b1;
L_10237588:;
  /* 10237588 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023758b je 0x102375bf */
  if (C.zf) goto L_102375bf;
  /* 1023758d sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237590 je 0x10237557 */
  if (C.zf) goto L_10237557;
  /* 10237592 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10237593 je 0x10237781 */
  if (C.zf) goto L_10237781;
  /* 10237599 jmp 0x102378a6 */
  goto L_102378a6;
L_1023759e:;
  /* 1023759e call 0x10237a7b */
  push32(0x102375a3u); f_10237a7b();
  /* 102375a3 pop ecx */
  ECX = (pop32());
  /* 102375a4 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 102375aa mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_102375b1:;
  /* 102375b1 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 102375b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102375ba jmp 0x102378a6 */
  goto L_102378a6;
L_102375bf:;
  /* 102375bf lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102375c2 push eax */
  push32((uint32_t)(EAX));
  /* 102375c3 call 0x10237a7b */
  push32(0x102375c8u); f_10237a7b();
  /* 102375c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102375ca pop ecx */
  ECX = (pop32());
  /* 102375cb je 0x10237600 */
  if (C.zf) goto L_10237600;
  /* 102375cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102375d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102375d2 je 0x10237600 */
  if (C.zf) goto L_10237600;
  /* 102375d4 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 102375d8 je 0x102375f1 */
  if (C.zf) goto L_102375f1;
  /* 102375da movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 102375dd shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102375df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102375e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102375e5 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 102375ec jmp 0x102378a6 */
  goto L_102378a6;
L_102375f1:;
  /* 102375f1 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 102375f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102375f8 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 102375fb jmp 0x102378a3 */
  goto L_102378a3;
L_10237600:;
  /* 10237600 mov eax, dword ptr [0x1024060c] */
  EAX = (r32((uint32_t)(0x1024060c)));
  /* 10237605 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10237608 push eax */
  push32((uint32_t)(EAX));
  /* 10237609 jmp 0x1023769c */
  goto L_1023769c;
L_1023760e:;
  /* 1023760e jne 0x1023761c */
  if (!C.zf) goto L_1023761c;
  /* 10237610 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237613 jne 0x1023761c */
  if (!C.zf) goto L_1023761c;
  /* 10237615 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1023761c:;
  /* 1023761c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023761f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10237622 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237625 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10237628 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1023762b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1023762e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10237631 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10237634 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10237637 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023763a push eax */
  push32((uint32_t)(EAX));
  /* 1023763b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10237641 push eax */
  push32((uint32_t)(EAX));
  /* 10237642 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10237645 push eax */
  push32((uint32_t)(EAX));
  /* 10237646 call dword ptr [0x10240614] */
  call_ind((uint32_t)(r32((uint32_t)(0x10240614))), 0x1023764cu);
  /* 1023764c mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 1023764f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237652 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 10237658 je 0x1023766e */
  if (C.zf) goto L_1023766e;
  /* 1023765a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023765e jne 0x1023766e */
  if (!C.zf) goto L_1023766e;
  /* 10237660 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10237666 push eax */
  push32((uint32_t)(EAX));
  /* 10237667 call dword ptr [0x10240620] */
  call_ind((uint32_t)(r32((uint32_t)(0x10240620))), 0x1023766du);
  /* 1023766d pop ecx */
  ECX = (pop32());
L_1023766e:;
  /* 1023766e cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237671 jne 0x10237685 */
  if (!C.zf) goto L_10237685;
  /* 10237673 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10237675 jne 0x10237685 */
  if (!C.zf) goto L_10237685;
  /* 10237677 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1023767d push eax */
  push32((uint32_t)(EAX));
  /* 1023767e call dword ptr [0x10240618] */
  call_ind((uint32_t)(r32((uint32_t)(0x10240618))), 0x10237684u);
  /* 10237684 pop ecx */
  ECX = (pop32());
L_10237685:;
  /* 10237685 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023768c jne 0x1023769b */
  if (!C.zf) goto L_1023769b;
  /* 1023768e or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10237692 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 10237698 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_1023769b:;
  /* 1023769b push edi */
  push32((uint32_t)(EDI));
L_1023769c:;
  /* 1023769c call 0x102390e0 */
  push32(0x102376a1u); f_102390e0();
  /* 102376a1 pop ecx */
  ECX = (pop32());
  /* 102376a2 jmp 0x102378a3 */
  goto L_102378a3;
L_102376a7:;
  /* 102376a7 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102376aa je 0x10237781 */
  if (C.zf) goto L_10237781;
  /* 102376b0 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102376b3 je 0x10237757 */
  if (C.zf) goto L_10237757;
  /* 102376b9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102376ba je 0x10237744 */
  if (C.zf) goto L_10237744;
  /* 102376c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102376c1 je 0x10237714 */
  if (C.zf) goto L_10237714;
  /* 102376c3 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102376c6 je 0x102374c9 */
  if (C.zf) goto L_102374c9;
  /* 102376cc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102376cd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102376ce je 0x10237785 */
  if (C.zf) goto L_10237785;
  /* 102376d4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102376d7 jne 0x102378a6 */
  if (!C.zf) goto L_102378a6;
  /* 102376dd mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 102376e4 jmp 0x10237722 */
  goto L_10237722;
L_102376e6:;
  /* 102376e6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102376e8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102376ea jmp 0x102378a3 */
  goto L_102378a3;
L_102376ef:;
  /* 102376ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102376f1 jne 0x102376fc */
  if (!C.zf) goto L_102376fc;
  /* 102376f3 mov ecx, dword ptr [0x1024060c] */
  ECX = (r32((uint32_t)(0x1024060c)));
  /* 102376f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_102376fc:;
  /* 102376fc mov eax, ecx */
  EAX = (ECX);
L_102376fe:;
  /* 102376fe mov edx, esi */
  EDX = (ESI);
  /* 10237700 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10237701 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10237703 je 0x1023770d */
  if (C.zf) goto L_1023770d;
  /* 10237705 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237708 je 0x1023770d */
  if (C.zf) goto L_1023770d;
  /* 1023770a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023770b jmp 0x102376fe */
  goto L_102376fe;
L_1023770d:;
  /* 1023770d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023770f jmp 0x102378a3 */
  goto L_102378a3;
L_10237714:;
  /* 10237714 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1023771b:;
  /* 1023771b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10237722:;
  /* 10237722 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10237726 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1023772d je 0x1023778c */
  if (C.zf) goto L_1023778c;
  /* 1023772f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10237732 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10237736 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10237738 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1023773f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 10237742 jmp 0x1023778c */
  goto L_1023778c;
L_10237744:;
  /* 10237744 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10237748 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 1023774f je 0x1023778c */
  if (C.zf) goto L_1023778c;
  /* 10237751 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10237755 jmp 0x1023778c */
  goto L_1023778c;
L_10237757:;
  /* 10237757 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1023775a push eax */
  push32((uint32_t)(EAX));
  /* 1023775b call 0x10237a7b */
  push32(0x10237760u); f_10237a7b();
  /* 10237760 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10237764 pop ecx */
  ECX = (pop32());
  /* 10237765 je 0x10237770 */
  if (C.zf) goto L_10237770;
  /* 10237767 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1023776b mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 1023776e jmp 0x10237775 */
  goto L_10237775;
L_10237770:;
  /* 10237770 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10237773 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10237775:;
  /* 10237775 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 1023777c jmp 0x102379a4 */
  goto L_102379a4;
L_10237781:;
  /* 10237781 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10237785:;
  /* 10237785 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_1023778c:;
  /* 1023778c test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10237790 je 0x1023779e */
  if (C.zf) goto L_1023779e;
  /* 10237792 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10237795 push eax */
  push32((uint32_t)(EAX));
  /* 10237796 call 0x10237a88 */
  push32(0x1023779bu); f_10237a88();
  /* 1023779b pop ecx */
  ECX = (pop32());
  /* 1023779c jmp 0x102377df */
  goto L_102377df;
L_1023779e:;
  /* 1023779e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 102377a2 je 0x102377c5 */
  if (C.zf) goto L_102377c5;
  /* 102377a4 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 102377a8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102377ab push eax */
  push32((uint32_t)(EAX));
  /* 102377ac je 0x102377ba */
  if (C.zf) goto L_102377ba;
  /* 102377ae call 0x10237a7b */
  push32(0x102377b3u); f_10237a7b();
  /* 102377b3 pop ecx */
  ECX = (pop32());
  /* 102377b4 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_102377b7:;
  /* 102377b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102377b8 jmp 0x102377df */
  goto L_102377df;
L_102377ba:;
  /* 102377ba call 0x10237a7b */
  push32(0x102377bfu); f_10237a7b();
  /* 102377bf pop ecx */
  ECX = (pop32());
  /* 102377c0 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 102377c3 jmp 0x102377b7 */
  goto L_102377b7;
L_102377c5:;
  /* 102377c5 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 102377c9 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102377cc push eax */
  push32((uint32_t)(EAX));
  /* 102377cd je 0x102377d7 */
  if (C.zf) goto L_102377d7;
  /* 102377cf call 0x10237a7b */
  push32(0x102377d4u); f_10237a7b();
  /* 102377d4 pop ecx */
  ECX = (pop32());
  /* 102377d5 jmp 0x102377b7 */
  goto L_102377b7;
L_102377d7:;
  /* 102377d7 call 0x10237a7b */
  push32(0x102377dcu); f_10237a7b();
  /* 102377dc pop ecx */
  ECX = (pop32());
  /* 102377dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_102377df:;
  /* 102377df test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 102377e3 je 0x10237800 */
  if (C.zf) goto L_10237800;
  /* 102377e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102377e7 jg 0x10237800 */
  if ((!C.zf&&C.sf==C.of)) goto L_10237800;
  /* 102377e9 jl 0x102377ef */
  if ((C.sf!=C.of)) goto L_102377ef;
  /* 102377eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102377ed jae 0x10237800 */
  if (!C.cf) goto L_10237800;
L_102377ef:;
  /* 102377ef neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102377f1 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102377f4 mov esi, eax */
  ESI = (EAX);
  /* 102377f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 102377f8 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 102377fc mov edi, edx */
  EDI = (EDX);
  /* 102377fe jmp 0x10237804 */
  goto L_10237804;
L_10237800:;
  /* 10237800 mov esi, eax */
  ESI = (EAX);
  /* 10237802 mov edi, edx */
  EDI = (EDX);
L_10237804:;
  /* 10237804 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10237808 jne 0x1023780d */
  if (!C.zf) goto L_1023780d;
  /* 1023780a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1023780d:;
  /* 1023780d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237811 jge 0x1023781c */
  if ((C.sf==C.of)) goto L_1023781c;
  /* 10237813 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1023781a jmp 0x10237820 */
  goto L_10237820;
L_1023781c:;
  /* 1023781c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10237820:;
  /* 10237820 mov eax, esi */
  EAX = (ESI);
  /* 10237822 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10237824 jne 0x1023782a */
  if (!C.zf) goto L_1023782a;
  /* 10237826 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1023782a:;
  /* 1023782a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1023782d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10237830:;
  /* 10237830 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10237833 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10237836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237838 jg 0x10237840 */
  if ((!C.zf&&C.sf==C.of)) goto L_10237840;
  /* 1023783a mov eax, esi */
  EAX = (ESI);
  /* 1023783c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1023783e je 0x1023787b */
  if (C.zf) goto L_1023787b;
L_10237840:;
  /* 10237840 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10237843 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10237844 push edx */
  push32((uint32_t)(EDX));
  /* 10237845 push eax */
  push32((uint32_t)(EAX));
  /* 10237846 push edi */
  push32((uint32_t)(EDI));
  /* 10237847 push esi */
  push32((uint32_t)(ESI));
  /* 10237848 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 1023784b mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 1023784e call 0x10239290 */
  push32(0x10237853u); f_10239290();
  /* 10237853 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 10237856 mov ebx, eax */
  EBX = (EAX);
  /* 10237858 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023785b push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 1023785e push edi */
  push32((uint32_t)(EDI));
  /* 1023785f push esi */
  push32((uint32_t)(ESI));
  /* 10237860 call 0x10239220 */
  push32(0x10237865u); f_10239220();
  /* 10237865 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237868 mov esi, eax */
  ESI = (EAX);
  /* 1023786a mov edi, edx */
  EDI = (EDX);
  /* 1023786c jle 0x10237871 */
  if ((C.zf||C.sf!=C.of)) goto L_10237871;
  /* 1023786e add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_10237871:;
  /* 10237871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10237874 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10237877 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 10237879 jmp 0x10237830 */
  goto L_10237830;
L_1023787b:;
  /* 1023787b lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1023787e sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237881 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10237884 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 10237888 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1023788b je 0x102378a6 */
  if (C.zf) goto L_102378a6;
  /* 1023788d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10237890 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237893 jne 0x10237899 */
  if (!C.zf) goto L_10237899;
  /* 10237895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237897 jne 0x102378a6 */
  if (!C.zf) goto L_102378a6;
L_10237899:;
  /* 10237899 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1023789c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023789d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102378a0 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_102378a3:;
  /* 102378a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_102378a6:;
  /* 102378a6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102378aa jne 0x102379a4 */
  if (!C.zf) goto L_102379a4;
  /* 102378b0 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 102378b3 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 102378b6 je 0x102378de */
  if (C.zf) goto L_102378de;
  /* 102378b8 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 102378bb je 0x102378c3 */
  if (C.zf) goto L_102378c3;
  /* 102378bd mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 102378c1 jmp 0x102378d7 */
  goto L_102378d7;
L_102378c3:;
  /* 102378c3 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102378c6 je 0x102378ce */
  if (C.zf) goto L_102378ce;
  /* 102378c8 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 102378cc jmp 0x102378d7 */
  goto L_102378d7;
L_102378ce:;
  /* 102378ce test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 102378d1 je 0x102378de */
  if (C.zf) goto L_102378de;
  /* 102378d3 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_102378d7:;
  /* 102378d7 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_102378de:;
  /* 102378de mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 102378e1 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102378e4 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102378e7 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 102378ea jne 0x102378fe */
  if (!C.zf) goto L_102378fe;
  /* 102378ec lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102378ef push eax */
  push32((uint32_t)(EAX));
  /* 102378f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102378f3 push esi */
  push32((uint32_t)(ESI));
  /* 102378f4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102378f6 call 0x10237a12 */
  push32(0x102378fbu); f_10237a12();
  /* 102378fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102378fe:;
  /* 102378fe lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10237901 push eax */
  push32((uint32_t)(EAX));
  /* 10237902 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10237905 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237908 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1023790b push eax */
  push32((uint32_t)(EAX));
  /* 1023790c call 0x10237a43 */
  push32(0x10237911u); f_10237a43();
  /* 10237911 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237914 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10237917 je 0x10237930 */
  if (C.zf) goto L_10237930;
  /* 10237919 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1023791c jne 0x10237930 */
  if (!C.zf) goto L_10237930;
  /* 1023791e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10237921 push eax */
  push32((uint32_t)(EAX));
  /* 10237922 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237925 push esi */
  push32((uint32_t)(ESI));
  /* 10237926 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10237928 call 0x10237a12 */
  push32(0x1023792du); f_10237a12();
  /* 1023792d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10237930:;
  /* 10237930 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237934 je 0x10237977 */
  if (C.zf) goto L_10237977;
  /* 10237936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023793a jle 0x10237977 */
  if ((C.zf||C.sf!=C.of)) goto L_10237977;
  /* 1023793c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023793f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10237942 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_10237945:;
  /* 10237945 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 10237948 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10237949 push eax */
  push32((uint32_t)(EAX));
  /* 1023794a lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1023794d push eax */
  push32((uint32_t)(EAX));
  /* 1023794e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023794f call 0x1023915b */
  push32(0x10237954u); f_1023915b();
  /* 10237954 pop ecx */
  ECX = (pop32());
  /* 10237955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237957 pop ecx */
  ECX = (pop32());
  /* 10237958 jle 0x1023798c */
  if ((C.zf||C.sf!=C.of)) goto L_1023798c;
  /* 1023795a lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1023795d push ecx */
  push32((uint32_t)(ECX));
  /* 1023795e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237961 push eax */
  push32((uint32_t)(EAX));
  /* 10237962 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10237965 push eax */
  push32((uint32_t)(EAX));
  /* 10237966 call 0x10237a43 */
  push32(0x1023796bu); f_10237a43();
  /* 1023796b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023796e mov eax, edi */
  EAX = (EDI);
  /* 10237970 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10237971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237973 jne 0x10237945 */
  if (!C.zf) goto L_10237945;
  /* 10237975 jmp 0x1023798c */
  goto L_1023798c;
L_10237977:;
  /* 10237977 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1023797a push eax */
  push32((uint32_t)(EAX));
  /* 1023797b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023797e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 10237981 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 10237984 call 0x10237a43 */
  push32(0x10237989u); f_10237a43();
  /* 10237989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023798c:;
  /* 1023798c test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10237990 je 0x102379a4 */
  if (C.zf) goto L_102379a4;
  /* 10237992 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10237995 push eax */
  push32((uint32_t)(EAX));
  /* 10237996 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237999 push esi */
  push32((uint32_t)(ESI));
  /* 1023799a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1023799c call 0x10237a12 */
  push32(0x102379a1u); f_10237a12();
  /* 102379a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102379a4:;
  /* 102379a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102379a7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102379a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102379aa test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 102379ac mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 102379af jne 0x102372c8 */
  if (!C.zf) goto L_102372c8;
L_102379b5:;
  /* 102379b5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102379b8 pop edi */
  EDI = (pop32());
  /* 102379b9 pop esi */
  ESI = (pop32());
  /* 102379ba pop ebx */
  EBX = (pop32());
  /* 102379bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102379bc ret  */
  ESPCHK(0x1023729cu, _esp0);
  ESP += 4; return;
}

/* FUN_100079dd @ 0x102379dd (53 bytes, 25 insns) */
void f_102379dd(void) {
  FTRACE(0x102379ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102379dd push ebp */
  push32((uint32_t)(EBP));
  /* 102379de mov ebp, esp */
  EBP = (ESP);
  /* 102379e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102379e3 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 102379e6 js 0x102379f6 */
  if (C.sf) goto L_102379f6;
  /* 102379e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102379ea mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 102379ed mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 102379ef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102379f1 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102379f4 jmp 0x10237a01 */
  goto L_10237a01;
L_102379f6:;
  /* 102379f6 push ecx */
  push32((uint32_t)(ECX));
  /* 102379f7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102379fa call 0x10237184 */
  push32(0x102379ffu); f_10237184();
  /* 102379ff pop ecx */
  ECX = (pop32());
  /* 10237a00 pop ecx */
  ECX = (pop32());
L_10237a01:;
  /* 10237a01 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237a04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10237a07 jne 0x10237a0e */
  if (!C.zf) goto L_10237a0e;
  /* 10237a09 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10237a0c pop ebp */
  EBP = (pop32());
  /* 10237a0d ret  */
  ESPCHK(0x102379ddu, _esp0);
  ESP += 4; return;
L_10237a0e:;
  /* 10237a0e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10237a10 pop ebp */
  EBP = (pop32());
  /* 10237a11 ret  */
  ESPCHK(0x102379ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a12 @ 0x10237a12 (49 bytes, 22 insns) */
void f_10237a12(void) {
  FTRACE(0x10237a12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237a12 push esi */
  push32((uint32_t)(ESI));
  /* 10237a13 push edi */
  push32((uint32_t)(EDI));
  /* 10237a14 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10237a18 mov eax, edi */
  EAX = (EDI);
  /* 10237a1a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10237a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237a1d jle 0x10237a40 */
  if ((C.zf||C.sf!=C.of)) goto L_10237a40;
  /* 10237a1f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10237a23:;
  /* 10237a23 push esi */
  push32((uint32_t)(ESI));
  /* 10237a24 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10237a28 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10237a2c call 0x102379dd */
  push32(0x10237a31u); f_102379dd();
  /* 10237a31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237a34 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237a37 je 0x10237a40 */
  if (C.zf) goto L_10237a40;
  /* 10237a39 mov eax, edi */
  EAX = (EDI);
  /* 10237a3b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10237a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237a3e jg 0x10237a23 */
  if ((!C.zf&&C.sf==C.of)) goto L_10237a23;
L_10237a40:;
  /* 10237a40 pop edi */
  EDI = (pop32());
  /* 10237a41 pop esi */
  ESI = (pop32());
  /* 10237a42 ret  */
  ESPCHK(0x10237a12u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a43 @ 0x10237a43 (56 bytes, 27 insns) */
void f_10237a43(void) {
  FTRACE(0x10237a43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237a43 push ebx */
  push32((uint32_t)(EBX));
  /* 10237a44 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 10237a48 mov eax, ebx */
  EAX = (EBX);
  /* 10237a4a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10237a4b push esi */
  push32((uint32_t)(ESI));
  /* 10237a4c push edi */
  push32((uint32_t)(EDI));
  /* 10237a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237a4f jle 0x10237a77 */
  if ((C.zf||C.sf!=C.of)) goto L_10237a77;
  /* 10237a51 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10237a55 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_10237a59:;
  /* 10237a59 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10237a5c push edi */
  push32((uint32_t)(EDI));
  /* 10237a5d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10237a5e push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 10237a62 push eax */
  push32((uint32_t)(EAX));
  /* 10237a63 call 0x102379dd */
  push32(0x10237a68u); f_102379dd();
  /* 10237a68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237a6b cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237a6e je 0x10237a77 */
  if (C.zf) goto L_10237a77;
  /* 10237a70 mov eax, ebx */
  EAX = (EBX);
  /* 10237a72 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10237a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237a75 jg 0x10237a59 */
  if ((!C.zf&&C.sf==C.of)) goto L_10237a59;
L_10237a77:;
  /* 10237a77 pop edi */
  EDI = (pop32());
  /* 10237a78 pop esi */
  ESI = (pop32());
  /* 10237a79 pop ebx */
  EBX = (pop32());
  /* 10237a7a ret  */
  ESPCHK(0x10237a43u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a7b @ 0x10237a7b (13 bytes, 5 insns) */
void f_10237a7b(void) {
  FTRACE(0x10237a7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237a7b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10237a7f add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10237a82 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10237a84 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10237a87 ret  */
  ESPCHK(0x10237a7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a88 @ 0x10237a88 (16 bytes, 6 insns) */
void f_10237a88(void) {
  FTRACE(0x10237a88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237a88 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10237a8c add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10237a8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10237a91 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10237a94 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10237a97 ret  */
  ESPCHK(0x10237a88u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a98 @ 0x10237a98 (14 bytes, 5 insns) */
void f_10237a98(void) {
  FTRACE(0x10237a98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237a98 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10237a9c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10237a9f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10237aa1 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10237aa5 ret  */
  ESPCHK(0x10237a98u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa6 @ 0x10237aa6 (18 bytes, 6 insns) */
void f_10237aa6(void) {
  FTRACE(0x10237aa6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237aa6 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10237aab push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10237ab0 call 0x1023933a */
  push32(0x10237ab5u); f_1023933a();
  /* 10237ab5 pop ecx */
  ECX = (pop32());
  /* 10237ab6 pop ecx */
  ECX = (pop32());
  /* 10237ab7 ret  */
  ESPCHK(0x10237aa6u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ab8 @ 0x10237ab8 (62 bytes, 24 insns) */
void f_10237ab8(void) {
  FTRACE(0x10237ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237ab8 push ebp */
  push32((uint32_t)(EBP));
  /* 10237ab9 mov ebp, esp */
  EBP = (ESP);
  /* 10237abb sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237abe fld qword ptr [0x1023e170] */
  fpu_push(rf64((uint32_t)(0x1023e170)));
  /* 10237ac4 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10237ac7 fld qword ptr [0x1023e168] */
  fpu_push(rf64((uint32_t)(0x1023e168)));
  /* 10237acd fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10237ad0 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10237ad3 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10237ad6 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10237ad9 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10237adc fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10237adf fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10237ae2 fcomp qword ptr [0x1023e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1023e160)));
  (void)fpu_pop();
  /* 10237ae8 fnstsw ax */
  AX = fpu_status();
  /* 10237aea sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10237aeb jbe 0x10237af2 */
  if ((C.cf||C.zf)) goto L_10237af2;
  /* 10237aed push 1 */
  push32((uint32_t)(0x1u));
  /* 10237aef pop eax */
  EAX = (pop32());
  /* 10237af0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237af1 ret  */
  ESPCHK(0x10237ab8u, _esp0);
  ESP += 4; return;
L_10237af2:;
  /* 10237af2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10237af4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237af5 ret  */
  ESPCHK(0x10237ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af6 @ 0x10237af6 (41 bytes, 13 insns) */
void f_10237af6(void) {
  FTRACE(0x10237af6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237af6 push 0x1023e194 */
  push32((uint32_t)(0x1023e194u));
  /* 10237afb call dword ptr [0x1023e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e004))), 0x10237b01u);
  /* 10237b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237b03 je 0x10237b1a */
  if (C.zf) goto L_10237b1a;
  /* 10237b05 push 0x1023e178 */
  push32((uint32_t)(0x1023e178u));
  /* 10237b0a push eax */
  push32((uint32_t)(EAX));
  /* 10237b0b call dword ptr [0x1023e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e088))), 0x10237b11u);
  /* 10237b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237b13 je 0x10237b1a */
  if (C.zf) goto L_10237b1a;
  /* 10237b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237b17 call eax */
  call_ind((uint32_t)(EAX), 0x10237b19u);
  /* 10237b19 ret  */
  ESPCHK(0x10237af6u, _esp0);
  ESP += 4; return;
L_10237b1a:;
  /* 10237b1a jmp 0x10237ab8 */
  f_10237ab8(); return;
}

/* FUN_10007b1f @ 0x10237b1f (90 bytes, 37 insns) */
void f_10237b1f(void) {
  FTRACE(0x10237b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237b1f push esi */
  push32((uint32_t)(ESI));
  /* 10237b20 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10237b24 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10237b27 push eax */
  push32((uint32_t)(EAX));
  /* 10237b28 call 0x102394e0 */
  push32(0x10237b2du); f_102394e0();
  /* 10237b2d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237b30 pop ecx */
  ECX = (pop32());
  /* 10237b31 je 0x10237b5f */
  if (C.zf) goto L_10237b5f;
L_10237b33:;
  /* 10237b33 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10237b34 cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237b3b jle 0x10237b4c */
  if ((C.zf||C.sf!=C.of)) goto L_10237b4c;
  /* 10237b3d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10237b40 push 4 */
  push32((uint32_t)(0x4u));
  /* 10237b42 push eax */
  push32((uint32_t)(EAX));
  /* 10237b43 call 0x1023946b */
  push32(0x10237b48u); f_1023946b();
  /* 10237b48 pop ecx */
  ECX = (pop32());
  /* 10237b49 pop ecx */
  ECX = (pop32());
  /* 10237b4a jmp 0x10237b5b */
  goto L_10237b5b;
L_10237b4c:;
  /* 10237b4c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10237b4f mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 10237b55 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10237b58 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10237b5b:;
  /* 10237b5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237b5d jne 0x10237b33 */
  if (!C.zf) goto L_10237b33;
L_10237b5f:;
  /* 10237b5f mov cl, byte ptr [0x10240b84] */
  CL = (r8((uint32_t)(0x10240b84)));
  /* 10237b65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10237b67 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10237b69 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10237b6a:;
  /* 10237b6a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10237b6c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10237b6e mov al, cl */
  AL = (CL);
  /* 10237b70 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10237b72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10237b73 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10237b75 jne 0x10237b6a */
  if (!C.zf) goto L_10237b6a;
  /* 10237b77 pop esi */
  ESI = (pop32());
  /* 10237b78 ret  */
  ESPCHK(0x10237b1fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10237bdf (62 bytes, 29 insns) */
void f_10237bdf(void) {
  FTRACE(0x10237bdfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237bdf push ebp */
  push32((uint32_t)(EBP));
  /* 10237be0 mov ebp, esp */
  EBP = (ESP);
  /* 10237be2 push ecx */
  push32((uint32_t)(ECX));
  /* 10237be3 push ecx */
  push32((uint32_t)(ECX));
  /* 10237be4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237be8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10237beb je 0x10237c08 */
  if (C.zf) goto L_10237c08;
  /* 10237bed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10237bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10237bf1 call 0x102399ac */
  push32(0x10237bf6u); f_102399ac();
  /* 10237bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10237bf9 pop ecx */
  ECX = (pop32());
  /* 10237bfa pop ecx */
  ECX = (pop32());
  /* 10237bfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10237bfe mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10237c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10237c03 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10237c06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237c07 ret  */
  ESPCHK(0x10237bdfu, _esp0);
  ESP += 4; return;
L_10237c08:;
  /* 10237c08 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10237c0b push eax */
  push32((uint32_t)(EAX));
  /* 10237c0c call 0x102399d9 */
  push32(0x10237c11u); f_102399d9();
  /* 10237c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10237c14 pop ecx */
  ECX = (pop32());
  /* 10237c15 pop ecx */
  ECX = (pop32());
  /* 10237c16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10237c19 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10237c1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237c1c ret  */
  ESPCHK(0x10237bdfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c1d @ 0x10237c1d (97 bytes, 42 insns) */
void f_10237c1d(void) {
  FTRACE(0x10237c1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237c1d push ebp */
  push32((uint32_t)(EBP));
  /* 10237c1e mov ebp, esp */
  EBP = (ESP);
  /* 10237c20 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237c23 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10237c26 push esi */
  push32((uint32_t)(ESI));
  /* 10237c27 push eax */
  push32((uint32_t)(EAX));
  /* 10237c28 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237c2b push eax */
  push32((uint32_t)(EAX));
  /* 10237c2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10237c2f push ecx */
  push32((uint32_t)(ECX));
  /* 10237c30 push ecx */
  push32((uint32_t)(ECX));
  /* 10237c31 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10237c33 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10237c36 call 0x10239a7d */
  push32(0x10237c3bu); f_10239a7d();
  /* 10237c3b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10237c3e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237c41 push eax */
  push32((uint32_t)(EAX));
  /* 10237c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10237c45 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10237c48 push eax */
  push32((uint32_t)(EAX));
  /* 10237c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10237c4b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237c4f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10237c52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10237c54 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10237c56 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10237c59 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237c5b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237c5d push ecx */
  push32((uint32_t)(ECX));
  /* 10237c5e call 0x10239a06 */
  push32(0x10237c63u); f_10239a06();
  /* 10237c63 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237c68 push eax */
  push32((uint32_t)(EAX));
  /* 10237c69 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10237c6c push esi */
  push32((uint32_t)(ESI));
  /* 10237c6d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237c70 call 0x10237c7e */
  push32(0x10237c75u); f_10237c7e();
  /* 10237c75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10237c78 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237c7b pop esi */
  ESI = (pop32());
  /* 10237c7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237c7d ret  */
  ESPCHK(0x10237c1du, _esp0);
  ESP += 4; return;
}

/* FUN_10007c7e @ 0x10237c7e (194 bytes, 91 insns) */
void f_10237c7e(void) {
  FTRACE(0x10237c7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237c7e push ebp */
  push32((uint32_t)(EBP));
  /* 10237c7f mov ebp, esp */
  EBP = (ESP);
  /* 10237c81 push ebx */
  push32((uint32_t)(EBX));
  /* 10237c82 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10237c84 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237c87 push esi */
  push32((uint32_t)(ESI));
  /* 10237c88 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10237c8b push edi */
  push32((uint32_t)(EDI));
  /* 10237c8c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10237c8f je 0x10237cac */
  if (C.zf) goto L_10237cac;
  /* 10237c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10237c93 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237c96 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10237c99 push eax */
  push32((uint32_t)(EAX));
  /* 10237c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10237c9c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237c9f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10237ca2 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10237ca5 call 0x10237f20 */
  push32(0x10237caau); f_10237f20();
  /* 10237caa pop ecx */
  ECX = (pop32());
  /* 10237cab pop ecx */
  ECX = (pop32());
L_10237cac:;
  /* 10237cac cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237caf mov eax, edi */
  EAX = (EDI);
  /* 10237cb1 jne 0x10237cb9 */
  if (!C.zf) goto L_10237cb9;
  /* 10237cb3 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10237cb6 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10237cb9:;
  /* 10237cb9 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237cbc jle 0x10237cd0 */
  if ((C.zf||C.sf!=C.of)) goto L_10237cd0;
  /* 10237cbe mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10237cc1 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10237cc4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10237cc6 mov eax, ecx */
  EAX = (ECX);
  /* 10237cc8 mov cl, byte ptr [0x10240b84] */
  CL = (r8((uint32_t)(0x10240b84)));
  /* 10237cce mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10237cd0:;
  /* 10237cd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10237cd2 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237cd5 push 0x1023e1a8 */
  push32((uint32_t)(0x1023e1a8u));
  /* 10237cda sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10237cdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237cdf add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 10237ce3 call 0x10239b90 */
  push32(0x10237ce8u); f_10239b90();
  /* 10237ce8 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237ceb pop ecx */
  ECX = (pop32());
  /* 10237cec pop ecx */
  ECX = (pop32());
  /* 10237ced mov ecx, eax */
  ECX = (EAX);
  /* 10237cef je 0x10237cf4 */
  if (C.zf) goto L_10237cf4;
  /* 10237cf1 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10237cf4:;
  /* 10237cf4 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10237cf7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10237cf8 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237cfb je 0x10237d39 */
  if (C.zf) goto L_10237d39;
  /* 10237cfd mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10237d00 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10237d01 jns 0x10237d08 */
  if (!C.sf) goto L_10237d08;
  /* 10237d03 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10237d05 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10237d08:;
  /* 10237d08 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10237d09 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237d0c jl 0x10237d1f */
  if ((C.sf!=C.of)) goto L_10237d1f;
  /* 10237d0e mov eax, ebx */
  EAX = (EBX);
  /* 10237d10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10237d12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10237d13 pop esi */
  ESI = (pop32());
  /* 10237d14 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10237d16 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10237d18 mov eax, ebx */
  EAX = (EBX);
  /* 10237d1a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10237d1b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10237d1d mov ebx, edx */
  EBX = (EDX);
L_10237d1f:;
  /* 10237d1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10237d20 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237d23 jl 0x10237d36 */
  if ((C.sf!=C.of)) goto L_10237d36;
  /* 10237d25 mov eax, ebx */
  EAX = (EBX);
  /* 10237d27 push 0xa */
  push32((uint32_t)(0xau));
  /* 10237d29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10237d2a pop esi */
  ESI = (pop32());
  /* 10237d2b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10237d2d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10237d2f mov eax, ebx */
  EAX = (EBX);
  /* 10237d31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10237d32 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10237d34 mov ebx, edx */
  EBX = (EDX);
L_10237d36:;
  /* 10237d36 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10237d39:;
  /* 10237d39 mov eax, edi */
  EAX = (EDI);
  /* 10237d3b pop edi */
  EDI = (pop32());
  /* 10237d3c pop esi */
  ESI = (pop32());
  /* 10237d3d pop ebx */
  EBX = (pop32());
  /* 10237d3e pop ebp */
  EBP = (pop32());
  /* 10237d3f ret  */
  ESPCHK(0x10237c7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x10237d40 (85 bytes, 37 insns) */
void f_10237d40(void) {
  FTRACE(0x10237d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10237d41 mov ebp, esp */
  EBP = (ESP);
  /* 10237d43 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237d46 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10237d49 push esi */
  push32((uint32_t)(ESI));
  /* 10237d4a push eax */
  push32((uint32_t)(EAX));
  /* 10237d4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237d4e push eax */
  push32((uint32_t)(EAX));
  /* 10237d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10237d52 push ecx */
  push32((uint32_t)(ECX));
  /* 10237d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10237d54 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10237d56 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10237d59 call 0x10239a7d */
  push32(0x10237d5eu); f_10239a7d();
  /* 10237d5e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10237d61 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237d64 push eax */
  push32((uint32_t)(EAX));
  /* 10237d65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10237d68 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237d6a push eax */
  push32((uint32_t)(EAX));
  /* 10237d6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10237d6d cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237d71 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10237d74 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237d77 push eax */
  push32((uint32_t)(EAX));
  /* 10237d78 call 0x10239a06 */
  push32(0x10237d7du); f_10239a06();
  /* 10237d7d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237d82 push eax */
  push32((uint32_t)(EAX));
  /* 10237d83 push esi */
  push32((uint32_t)(ESI));
  /* 10237d84 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237d87 call 0x10237d95 */
  push32(0x10237d8cu); f_10237d95();
  /* 10237d8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10237d8f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237d92 pop esi */
  ESI = (pop32());
  /* 10237d93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237d94 ret  */
  ESPCHK(0x10237d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d95 @ 0x10237d95 (167 bytes, 73 insns) */
void f_10237d95(void) {
  FTRACE(0x10237d95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237d95 push ebp */
  push32((uint32_t)(EBP));
  /* 10237d96 mov ebp, esp */
  EBP = (ESP);
  /* 10237d98 push ebx */
  push32((uint32_t)(EBX));
  /* 10237d99 push esi */
  push32((uint32_t)(ESI));
  /* 10237d9a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10237d9d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10237da0 push edi */
  push32((uint32_t)(EDI));
  /* 10237da1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10237da4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10237da5 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237da9 je 0x10237dc5 */
  if (C.zf) goto L_10237dc5;
  /* 10237dab cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237dae jne 0x10237dc5 */
  if (!C.zf) goto L_10237dc5;
  /* 10237db0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10237db2 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237db5 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10237db8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237dba add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237dbc mov eax, ecx */
  EAX = (ECX);
  /* 10237dbe mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10237dc1 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10237dc5:;
  /* 10237dc5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237dc8 mov edi, ebx */
  EDI = (EBX);
  /* 10237dca jne 0x10237dd2 */
  if (!C.zf) goto L_10237dd2;
  /* 10237dcc mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10237dcf lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10237dd2:;
  /* 10237dd2 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10237dd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237dd7 jg 0x10237de9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10237de9;
  /* 10237dd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237ddb push edi */
  push32((uint32_t)(EDI));
  /* 10237ddc call 0x10237f20 */
  push32(0x10237de1u); f_10237f20();
  /* 10237de1 pop ecx */
  ECX = (pop32());
  /* 10237de2 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10237de5 pop ecx */
  ECX = (pop32());
  /* 10237de6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10237de7 jmp 0x10237deb */
  goto L_10237deb;
L_10237de9:;
  /* 10237de9 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10237deb:;
  /* 10237deb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237def jle 0x10237e35 */
  if ((C.zf||C.sf!=C.of)) goto L_10237e35;
  /* 10237df1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237df3 push edi */
  push32((uint32_t)(EDI));
  /* 10237df4 call 0x10237f20 */
  push32(0x10237df9u); f_10237f20();
  /* 10237df9 mov al, byte ptr [0x10240b84] */
  AL = (r8((uint32_t)(0x10240b84)));
  /* 10237dfe pop ecx */
  ECX = (pop32());
  /* 10237dff mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10237e01 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10237e04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10237e05 pop ecx */
  ECX = (pop32());
  /* 10237e06 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10237e08 jge 0x10237e35 */
  if ((C.sf==C.of)) goto L_10237e35;
  /* 10237e0a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10237e0e je 0x10237e14 */
  if (C.zf) goto L_10237e14;
  /* 10237e10 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10237e12 jmp 0x10237e1b */
  goto L_10237e1b;
L_10237e14:;
  /* 10237e14 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10237e16 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237e19 jl 0x10237e1e */
  if ((C.sf!=C.of)) goto L_10237e1e;
L_10237e1b:;
  /* 10237e1b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10237e1e:;
  /* 10237e1e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237e21 push edi */
  push32((uint32_t)(EDI));
  /* 10237e22 call 0x10237f20 */
  push32(0x10237e27u); f_10237f20();
  /* 10237e27 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237e2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10237e2c push edi */
  push32((uint32_t)(EDI));
  /* 10237e2d call 0x10239c80 */
  push32(0x10237e32u); f_10239c80();
  /* 10237e32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10237e35:;
  /* 10237e35 pop edi */
  EDI = (pop32());
  /* 10237e36 mov eax, ebx */
  EAX = (EBX);
  /* 10237e38 pop esi */
  ESI = (pop32());
  /* 10237e39 pop ebx */
  EBX = (pop32());
  /* 10237e3a pop ebp */
  EBP = (pop32());
  /* 10237e3b ret  */
  ESPCHK(0x10237d95u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e3c @ 0x10237e3c (147 bytes, 66 insns) */
void f_10237e3c(void) {
  FTRACE(0x10237e3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237e3c push ebp */
  push32((uint32_t)(EBP));
  /* 10237e3d mov ebp, esp */
  EBP = (ESP);
  /* 10237e3f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237e42 push ebx */
  push32((uint32_t)(EBX));
  /* 10237e43 push esi */
  push32((uint32_t)(ESI));
  /* 10237e44 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10237e47 push edi */
  push32((uint32_t)(EDI));
  /* 10237e48 push eax */
  push32((uint32_t)(EAX));
  /* 10237e49 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237e4c push eax */
  push32((uint32_t)(EAX));
  /* 10237e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10237e50 push ecx */
  push32((uint32_t)(ECX));
  /* 10237e51 push ecx */
  push32((uint32_t)(ECX));
  /* 10237e52 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10237e54 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10237e57 call 0x10239a7d */
  push32(0x10237e5cu); f_10239a7d();
  /* 10237e5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10237e5f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10237e62 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10237e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10237e67 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237e6b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10237e6e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10237e71 mov edi, eax */
  EDI = (EAX);
  /* 10237e73 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237e76 push eax */
  push32((uint32_t)(EAX));
  /* 10237e77 push ebx */
  push32((uint32_t)(EBX));
  /* 10237e78 push edi */
  push32((uint32_t)(EDI));
  /* 10237e79 call 0x10239a06 */
  push32(0x10237e7eu); f_10239a06();
  /* 10237e7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10237e81 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237e84 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10237e85 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237e87 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10237e8a cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237e8d jl 0x10237eb5 */
  if ((C.sf!=C.of)) goto L_10237eb5;
  /* 10237e8f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237e91 jge 0x10237eb5 */
  if ((C.sf==C.of)) goto L_10237eb5;
  /* 10237e93 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10237e95 je 0x10237ea1 */
  if (C.zf) goto L_10237ea1;
L_10237e97:;
  /* 10237e97 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10237e99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10237e9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10237e9c jne 0x10237e97 */
  if (!C.zf) goto L_10237e97;
  /* 10237e9e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10237ea1:;
  /* 10237ea1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237ea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10237ea7 push ebx */
  push32((uint32_t)(EBX));
  /* 10237ea8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237eab call 0x10237d95 */
  push32(0x10237eb0u); f_10237d95();
  /* 10237eb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237eb3 jmp 0x10237eca */
  goto L_10237eca;
L_10237eb5:;
  /* 10237eb5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10237eb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237eba push eax */
  push32((uint32_t)(EAX));
  /* 10237ebb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10237ebe push ebx */
  push32((uint32_t)(EBX));
  /* 10237ebf push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237ec2 call 0x10237c7e */
  push32(0x10237ec7u); f_10237c7e();
  /* 10237ec7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10237eca:;
  /* 10237eca pop edi */
  EDI = (pop32());
  /* 10237ecb pop esi */
  ESI = (pop32());
  /* 10237ecc pop ebx */
  EBX = (pop32());
  /* 10237ecd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10237ece ret  */
  ESPCHK(0x10237e3cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10237ecf (81 bytes, 29 insns) */
void f_10237ecf(void) {
  FTRACE(0x10237ecfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237ecf push ebp */
  push32((uint32_t)(EBP));
  /* 10237ed0 mov ebp, esp */
  EBP = (ESP);
  /* 10237ed2 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237ed6 je 0x10237f0a */
  if (C.zf) goto L_10237f0a;
  /* 10237ed8 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237edc je 0x10237f0a */
  if (C.zf) goto L_10237f0a;
  /* 10237ede cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237ee2 jne 0x10237ef7 */
  if (!C.zf) goto L_10237ef7;
  /* 10237ee4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10237ee7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237eea push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237eed call 0x10237d40 */
  push32(0x10237ef2u); f_10237d40();
  /* 10237ef2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237ef5 pop ebp */
  EBP = (pop32());
  /* 10237ef6 ret  */
  ESPCHK(0x10237ecfu, _esp0);
  ESP += 4; return;
L_10237ef7:;
  /* 10237ef7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10237efa push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10237efd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237f00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237f03 call 0x10237e3c */
  push32(0x10237f08u); f_10237e3c();
  /* 10237f08 jmp 0x10237f1b */
  goto L_10237f1b;
L_10237f0a:;
  /* 10237f0a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10237f0d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10237f10 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10237f13 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10237f16 call 0x10237c1d */
  push32(0x10237f1bu); f_10237c1d();
L_10237f1b:;
  /* 10237f1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237f1e pop ebp */
  EBP = (pop32());
  /* 10237f1f ret  */
  ESPCHK(0x10237ecfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x10237f20 (37 bytes, 18 insns) */
void f_10237f20(void) {
  FTRACE(0x10237f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237f20 push edi */
  push32((uint32_t)(EDI));
  /* 10237f21 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10237f25 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10237f27 je 0x10237f43 */
  if (C.zf) goto L_10237f43;
  /* 10237f29 push esi */
  push32((uint32_t)(ESI));
  /* 10237f2a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10237f2e push esi */
  push32((uint32_t)(ESI));
  /* 10237f2f call 0x102390e0 */
  push32(0x10237f34u); f_102390e0();
  /* 10237f34 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10237f35 push eax */
  push32((uint32_t)(EAX));
  /* 10237f36 push esi */
  push32((uint32_t)(ESI));
  /* 10237f37 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10237f39 push esi */
  push32((uint32_t)(ESI));
  /* 10237f3a call 0x10239ce0 */
  push32(0x10237f3fu); f_10239ce0();
  /* 10237f3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237f42 pop esi */
  ESI = (pop32());
L_10237f43:;
  /* 10237f43 pop edi */
  EDI = (pop32());
  /* 10237f44 ret  */
  ESPCHK(0x10237f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f45 @ 0x10237f45 (45 bytes, 12 insns) */
void f_10237f45(void) {
  FTRACE(0x10237f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237f45 mov eax, dword ptr [0x102405fc] */
  EAX = (r32((uint32_t)(0x102405fc)));
  /* 10237f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237f4c je 0x10237f50 */
  if (C.zf) goto L_10237f50;
  /* 10237f4e call eax */
  call_ind((uint32_t)(EAX), 0x10237f50u);
L_10237f50:;
  /* 10237f50 push 0x1023f014 */
  push32((uint32_t)(0x1023f014u));
  /* 10237f55 push 0x1023f008 */
  push32((uint32_t)(0x1023f008u));
  /* 10237f5a call 0x10238049 */
  push32(0x10237f5fu); f_10238049();
  /* 10237f5f push 0x1023f004 */
  push32((uint32_t)(0x1023f004u));
  /* 10237f64 push 0x1023f000 */
  push32((uint32_t)(0x1023f000u));
  /* 10237f69 call 0x10238049 */
  push32(0x10237f6eu); f_10238049();
  /* 10237f6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237f71 ret  */
  ESPCHK(0x10237f45u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10237f72 (17 bytes, 6 insns) */
void f_10237f72(void) {
  FTRACE(0x10237f72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237f76 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10237f7a call 0x10237f92 */
  push32(0x10237f7fu); f_10237f92();
  /* 10237f7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237f82 ret  */
  ESPCHK(0x10237f72u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f83 @ 0x10237f83 (15 bytes, 6 insns) */
void f_10237f83(void) {
  FTRACE(0x10237f83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10237f89 call 0x10237f92 */
  push32(0x10237f8eu); f_10237f92();
  /* 10237f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10237f91 ret  */
  ESPCHK(0x10237f83u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f92 @ 0x10237f92 (163 bytes, 53 insns) */
void f_10237f92(void) {
  FTRACE(0x10237f92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10237f92 push edi */
  push32((uint32_t)(EDI));
  /* 10237f93 call 0x10238037 */
  push32(0x10237f98u); f_10238037();
  /* 10237f98 push 1 */
  push32((uint32_t)(0x1u));
  /* 10237f9a pop edi */
  EDI = (pop32());
  /* 10237f9b cmp dword ptr [0x10246638], edi */
  { uint32_t _a=(r32((uint32_t)(0x10246638))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237fa1 jne 0x10237fb4 */
  if (!C.zf) goto L_10237fb4;
  /* 10237fa3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10237fa7 call dword ptr [0x1023e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e020))), 0x10237fadu);
  /* 10237fad push eax */
  push32((uint32_t)(EAX));
  /* 10237fae call dword ptr [0x1023e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e01c))), 0x10237fb4u);
L_10237fb4:;
  /* 10237fb4 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 10237fba mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10237fbe mov dword ptr [0x10246634], edi */
  w32((uint32_t)(0x10246634), (EDI));
  /* 10237fc4 mov byte ptr [0x10246630], bl */
  w8((uint32_t)(0x10246630), (BL));
  /* 10237fca jne 0x10238008 */
  if (!C.zf) goto L_10238008;
  /* 10237fcc mov eax, dword ptr [0x10247cf0] */
  EAX = (r32((uint32_t)(0x10247cf0)));
  /* 10237fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237fd3 je 0x10237ff7 */
  if (C.zf) goto L_10237ff7;
  /* 10237fd5 mov ecx, dword ptr [0x10247cec] */
  ECX = (r32((uint32_t)(0x10247cec)));
  /* 10237fdb push esi */
  push32((uint32_t)(ESI));
  /* 10237fdc lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10237fdf cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237fe1 jb 0x10237ff6 */
  if (C.cf) goto L_10237ff6;
L_10237fe3:;
  /* 10237fe3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10237fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10237fe7 je 0x10237feb */
  if (C.zf) goto L_10237feb;
  /* 10237fe9 call eax */
  call_ind((uint32_t)(EAX), 0x10237febu);
L_10237feb:;
  /* 10237feb sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10237fee cmp esi, dword ptr [0x10247cf0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10247cf0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10237ff4 jae 0x10237fe3 */
  if (!C.cf) goto L_10237fe3;
L_10237ff6:;
  /* 10237ff6 pop esi */
  ESI = (pop32());
L_10237ff7:;
  /* 10237ff7 push 0x1023f020 */
  push32((uint32_t)(0x1023f020u));
  /* 10237ffc push 0x1023f018 */
  push32((uint32_t)(0x1023f018u));
  /* 10238001 call 0x10238049 */
  push32(0x10238006u); f_10238049();
  /* 10238006 pop ecx */
  ECX = (pop32());
  /* 10238007 pop ecx */
  ECX = (pop32());
L_10238008:;
  /* 10238008 push 0x1023f028 */
  push32((uint32_t)(0x1023f028u));
  /* 1023800d push 0x1023f024 */
  push32((uint32_t)(0x1023f024u));
  /* 10238012 call 0x10238049 */
  push32(0x10238017u); f_10238049();
  /* 10238017 pop ecx */
  ECX = (pop32());
  /* 10238018 pop ecx */
  ECX = (pop32());
  /* 10238019 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023801b pop ebx */
  EBX = (pop32());
  /* 1023801c je 0x10238025 */
  if (C.zf) goto L_10238025;
  /* 1023801e call 0x10238040 */
  push32(0x10238023u); f_10238040();
  /* 10238023 pop edi */
  EDI = (pop32());
  /* 10238024 ret  */
  ESPCHK(0x10237f92u, _esp0);
  ESP += 4; return;
L_10238025:;
  /* 10238025 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10238029 mov dword ptr [0x10246638], edi */
  w32((uint32_t)(0x10246638), (EDI));
  /* 1023802f call dword ptr [0x1023e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e018))), 0x10238035u);
  /* 10238035 pop edi */
  EDI = (pop32());
  /* 10238036 ret  */
  ESPCHK(0x10237f92u, _esp0);
  ESP += 4; return;
}

/* FUN_10008037 @ 0x10238037 (9 bytes, 4 insns) */
void f_10238037(void) {
  FTRACE(0x10238037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238037 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10238039 call 0x1023a0b3 */
  push32(0x1023803eu); f_1023a0b3();
  /* 1023803e pop ecx */
  ECX = (pop32());
  /* 1023803f ret  */
  ESPCHK(0x10238037u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x10238040 (9 bytes, 4 insns) */
void f_10238040(void) {
  FTRACE(0x10238040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238040 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10238042 call 0x1023a114 */
  push32(0x10238047u); f_1023a114();
  /* 10238047 pop ecx */
  ECX = (pop32());
  /* 10238048 ret  */
  ESPCHK(0x10238040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008049 @ 0x10238049 (26 bytes, 12 insns) */
void f_10238049(void) {
  FTRACE(0x10238049u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238049 push esi */
  push32((uint32_t)(ESI));
  /* 1023804a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_1023804e:;
  /* 1023804e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238052 jae 0x10238061 */
  if (!C.cf) goto L_10238061;
  /* 10238054 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10238056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238058 je 0x1023805c */
  if (C.zf) goto L_1023805c;
  /* 1023805a call eax */
  call_ind((uint32_t)(EAX), 0x1023805cu);
L_1023805c:;
  /* 1023805c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023805f jmp 0x1023804e */
  goto L_1023804e;
L_10238061:;
  /* 10238061 pop esi */
  ESI = (pop32());
  /* 10238062 ret  */
  ESPCHK(0x10238049u, _esp0);
  ESP += 4; return;
}

/* FUN_10008063 @ 0x10238063 (84 bytes, 32 insns) */
void f_10238063(void) {
  FTRACE(0x10238063u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238063 push esi */
  push32((uint32_t)(ESI));
  /* 10238064 call 0x1023a01e */
  push32(0x10238069u); f_1023a01e();
  /* 10238069 call dword ptr [0x1023e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e02c))), 0x1023806fu);
  /* 1023806f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238072 mov dword ptr [0x1024062c], eax */
  w32((uint32_t)(0x1024062c), (EAX));
  /* 10238077 je 0x102380b3 */
  if (C.zf) goto L_102380b3;
  /* 10238079 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1023807b push 1 */
  push32((uint32_t)(0x1u));
  /* 1023807d call 0x1023a129 */
  push32(0x10238082u); f_1023a129();
  /* 10238082 mov esi, eax */
  ESI = (EAX);
  /* 10238084 pop ecx */
  ECX = (pop32());
  /* 10238085 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238087 pop ecx */
  ECX = (pop32());
  /* 10238088 je 0x102380b3 */
  if (C.zf) goto L_102380b3;
  /* 1023808a push esi */
  push32((uint32_t)(ESI));
  /* 1023808b push dword ptr [0x1024062c] */
  push32((uint32_t)(r32((uint32_t)(0x1024062c))));
  /* 10238091 call dword ptr [0x1023e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e028))), 0x10238097u);
  /* 10238097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238099 je 0x102380b3 */
  if (C.zf) goto L_102380b3;
  /* 1023809b push esi */
  push32((uint32_t)(ESI));
  /* 1023809c call 0x102380d5 */
  push32(0x102380a1u); f_102380d5();
  /* 102380a1 pop ecx */
  ECX = (pop32());
  /* 102380a2 call dword ptr [0x1023e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e024))), 0x102380a8u);
  /* 102380a8 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102380ac push 1 */
  push32((uint32_t)(0x1u));
  /* 102380ae mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102380b0 pop eax */
  EAX = (pop32());
  /* 102380b1 pop esi */
  ESI = (pop32());
  /* 102380b2 ret  */
  ESPCHK(0x10238063u, _esp0);
  ESP += 4; return;
L_102380b3:;
  /* 102380b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102380b5 pop esi */
  ESI = (pop32());
  /* 102380b6 ret  */
  ESPCHK(0x10238063u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b7 @ 0x102380b7 (30 bytes, 8 insns) */
void f_102380b7(void) {
  FTRACE(0x102380b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102380b7 call 0x1023a047 */
  push32(0x102380bcu); f_1023a047();
  /* 102380bc mov eax, dword ptr [0x1024062c] */
  EAX = (r32((uint32_t)(0x1024062c)));
  /* 102380c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102380c4 je 0x102380d4 */
  if (C.zf) goto L_102380d4;
  /* 102380c6 push eax */
  push32((uint32_t)(EAX));
  /* 102380c7 call dword ptr [0x1023e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e030))), 0x102380cdu);
  /* 102380cd or dword ptr [0x1024062c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1024062c)))|(0xffffffffu); w32((uint32_t)(0x1024062c), (_r)); fl_logic(_r,32); }
L_102380d4:;
  /* 102380d4 ret  */
  ESPCHK(0x102380b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100080d5 @ 0x102380d5 (19 bytes, 4 insns) */
void f_102380d5(void) {
  FTRACE(0x102380d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102380d5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102380d9 mov dword ptr [eax + 0x50], 0x10240c80 */
  w32((uint32_t)(EAX + 0x50), (0x10240c80u));
  /* 102380e0 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 102380e7 ret  */
  ESPCHK(0x102380d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e8 @ 0x102380e8 (103 bytes, 38 insns) */
void f_102380e8(void) {
  FTRACE(0x102380e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102380e8 push esi */
  push32((uint32_t)(ESI));
  /* 102380e9 push edi */
  push32((uint32_t)(EDI));
  /* 102380ea call dword ptr [0x1023e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e03c))), 0x102380f0u);
  /* 102380f0 push dword ptr [0x1024062c] */
  push32((uint32_t)(r32((uint32_t)(0x1024062c))));
  /* 102380f6 mov edi, eax */
  EDI = (EAX);
  /* 102380f8 call dword ptr [0x1023e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e038))), 0x102380feu);
  /* 102380fe mov esi, eax */
  ESI = (EAX);
  /* 10238100 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238102 jne 0x10238143 */
  if (!C.zf) goto L_10238143;
  /* 10238104 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10238106 push 1 */
  push32((uint32_t)(0x1u));
  /* 10238108 call 0x1023a129 */
  push32(0x1023810du); f_1023a129();
  /* 1023810d mov esi, eax */
  ESI = (EAX);
  /* 1023810f pop ecx */
  ECX = (pop32());
  /* 10238110 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238112 pop ecx */
  ECX = (pop32());
  /* 10238113 je 0x1023813b */
  if (C.zf) goto L_1023813b;
  /* 10238115 push esi */
  push32((uint32_t)(ESI));
  /* 10238116 push dword ptr [0x1024062c] */
  push32((uint32_t)(r32((uint32_t)(0x1024062c))));
  /* 1023811c call dword ptr [0x1023e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e028))), 0x10238122u);
  /* 10238122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238124 je 0x1023813b */
  if (C.zf) goto L_1023813b;
  /* 10238126 push esi */
  push32((uint32_t)(ESI));
  /* 10238127 call 0x102380d5 */
  push32(0x1023812cu); f_102380d5();
  /* 1023812c pop ecx */
  ECX = (pop32());
  /* 1023812d call dword ptr [0x1023e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e024))), 0x10238133u);
  /* 10238133 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10238137 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10238139 jmp 0x10238143 */
  goto L_10238143;
L_1023813b:;
  /* 1023813b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1023813d call 0x10237151 */
  push32(0x10238142u); f_10237151();
  /* 10238142 pop ecx */
  ECX = (pop32());
L_10238143:;
  /* 10238143 push edi */
  push32((uint32_t)(EDI));
  /* 10238144 call dword ptr [0x1023e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e034))), 0x1023814au);
  /* 1023814a mov eax, esi */
  EAX = (ESI);
  /* 1023814c pop edi */
  EDI = (pop32());
  /* 1023814d pop esi */
  ESI = (pop32());
  /* 1023814e ret  */
  ESPCHK(0x102380e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1023814f (160 bytes, 62 insns) */
void f_1023814f(void) {
  FTRACE(0x1023814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023814f mov eax, dword ptr [0x1024062c] */
  EAX = (r32((uint32_t)(0x1024062c)));
  /* 10238154 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238157 je 0x102381ee */
  if (C.zf) goto L_102381ee;
  /* 1023815d push esi */
  push32((uint32_t)(ESI));
  /* 1023815e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10238162 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238164 jne 0x10238173 */
  if (!C.zf) goto L_10238173;
  /* 10238166 push eax */
  push32((uint32_t)(EAX));
  /* 10238167 call dword ptr [0x1023e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e038))), 0x1023816du);
  /* 1023816d mov esi, eax */
  ESI = (EAX);
  /* 1023816f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238171 je 0x102381df */
  if (C.zf) goto L_102381df;
L_10238173:;
  /* 10238173 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10238176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238178 je 0x10238181 */
  if (C.zf) goto L_10238181;
  /* 1023817a push eax */
  push32((uint32_t)(EAX));
  /* 1023817b call 0x1023a266 */
  push32(0x10238180u); f_1023a266();
  /* 10238180 pop ecx */
  ECX = (pop32());
L_10238181:;
  /* 10238181 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10238184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238186 je 0x1023818f */
  if (C.zf) goto L_1023818f;
  /* 10238188 push eax */
  push32((uint32_t)(EAX));
  /* 10238189 call 0x1023a266 */
  push32(0x1023818eu); f_1023a266();
  /* 1023818e pop ecx */
  ECX = (pop32());
L_1023818f:;
  /* 1023818f mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10238192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238194 je 0x1023819d */
  if (C.zf) goto L_1023819d;
  /* 10238196 push eax */
  push32((uint32_t)(EAX));
  /* 10238197 call 0x1023a266 */
  push32(0x1023819cu); f_1023a266();
  /* 1023819c pop ecx */
  ECX = (pop32());
L_1023819d:;
  /* 1023819d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 102381a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102381a2 je 0x102381ab */
  if (C.zf) goto L_102381ab;
  /* 102381a4 push eax */
  push32((uint32_t)(EAX));
  /* 102381a5 call 0x1023a266 */
  push32(0x102381aau); f_1023a266();
  /* 102381aa pop ecx */
  ECX = (pop32());
L_102381ab:;
  /* 102381ab mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 102381ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102381b0 je 0x102381b9 */
  if (C.zf) goto L_102381b9;
  /* 102381b2 push eax */
  push32((uint32_t)(EAX));
  /* 102381b3 call 0x1023a266 */
  push32(0x102381b8u); f_1023a266();
  /* 102381b8 pop ecx */
  ECX = (pop32());
L_102381b9:;
  /* 102381b9 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 102381bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102381be je 0x102381c7 */
  if (C.zf) goto L_102381c7;
  /* 102381c0 push eax */
  push32((uint32_t)(EAX));
  /* 102381c1 call 0x1023a266 */
  push32(0x102381c6u); f_1023a266();
  /* 102381c6 pop ecx */
  ECX = (pop32());
L_102381c7:;
  /* 102381c7 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 102381ca cmp eax, 0x10240c80 */
  { uint32_t _a=(EAX),_b=(0x10240c80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102381cf je 0x102381d8 */
  if (C.zf) goto L_102381d8;
  /* 102381d1 push eax */
  push32((uint32_t)(EAX));
  /* 102381d2 call 0x1023a266 */
  push32(0x102381d7u); f_1023a266();
  /* 102381d7 pop ecx */
  ECX = (pop32());
L_102381d8:;
  /* 102381d8 push esi */
  push32((uint32_t)(ESI));
  /* 102381d9 call 0x1023a266 */
  push32(0x102381deu); f_1023a266();
  /* 102381de pop ecx */
  ECX = (pop32());
L_102381df:;
  /* 102381df push 0 */
  push32((uint32_t)(0x0u));
  /* 102381e1 push dword ptr [0x1024062c] */
  push32((uint32_t)(r32((uint32_t)(0x1024062c))));
  /* 102381e7 call dword ptr [0x1023e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e028))), 0x102381edu);
  /* 102381ed pop esi */
  ESI = (pop32());
L_102381ee:;
  /* 102381ee ret  */
  ESPCHK(0x1023814fu, _esp0);
  ESP += 4; return;
}

/* FUN_100081ef @ 0x102381ef (444 bytes, 150 insns) */
void f_102381ef(void) {
  FTRACE(0x102381efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102381ef push ebp */
  push32((uint32_t)(EBP));
  /* 102381f0 mov ebp, esp */
  EBP = (ESP);
  /* 102381f2 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102381f5 push ebx */
  push32((uint32_t)(EBX));
  /* 102381f6 push esi */
  push32((uint32_t)(ESI));
  /* 102381f7 push edi */
  push32((uint32_t)(EDI));
  /* 102381f8 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102381fd call 0x1023a34f */
  push32(0x10238202u); f_1023a34f();
  /* 10238202 mov esi, eax */
  ESI = (EAX);
  /* 10238204 pop ecx */
  ECX = (pop32());
  /* 10238205 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238207 jne 0x10238211 */
  if (!C.zf) goto L_10238211;
  /* 10238209 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1023820b call 0x10237151 */
  push32(0x10238210u); f_10237151();
  /* 10238210 pop ecx */
  ECX = (pop32());
L_10238211:;
  /* 10238211 mov dword ptr [0x10247be0], esi */
  w32((uint32_t)(0x10247be0), (ESI));
  /* 10238217 mov dword ptr [0x10247ce0], 0x20 */
  w32((uint32_t)(0x10247ce0), (0x20u));
  /* 10238221 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10238227:;
  /* 10238227 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238229 jae 0x10238249 */
  if (!C.cf) goto L_10238249;
  /* 1023822b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1023822f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10238232 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10238236 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1023823a mov eax, dword ptr [0x10247be0] */
  EAX = (r32((uint32_t)(0x10247be0)));
  /* 1023823f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10238242 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10238247 jmp 0x10238227 */
  goto L_10238227;
L_10238249:;
  /* 10238249 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 1023824c push eax */
  push32((uint32_t)(EAX));
  /* 1023824d call dword ptr [0x1023e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e04c))), 0x10238253u);
  /* 10238253 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10238258 je 0x1023832f */
  if (C.zf) goto L_1023832f;
  /* 1023825e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10238261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238263 je 0x1023832f */
  if (C.zf) goto L_1023832f;
  /* 10238269 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 1023826b lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1023826e lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10238271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10238274 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10238279 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023827b jl 0x1023827f */
  if ((C.sf!=C.of)) goto L_1023827f;
  /* 1023827d mov edi, eax */
  EDI = (EAX);
L_1023827f:;
  /* 1023827f cmp dword ptr [0x10247ce0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10247ce0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238285 jge 0x102382dd */
  if ((C.sf==C.of)) goto L_102382dd;
  /* 10238287 mov esi, 0x10247be4 */
  ESI = (0x10247be4u);
L_1023828c:;
  /* 1023828c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10238291 call 0x1023a34f */
  push32(0x10238296u); f_1023a34f();
  /* 10238296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238298 pop ecx */
  ECX = (pop32());
  /* 10238299 je 0x102382d7 */
  if (C.zf) goto L_102382d7;
  /* 1023829b add dword ptr [0x10247ce0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10247ce0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10247ce0), (_r)); fl_add(_a,_b,_r,32); }
  /* 102382a2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102382a4 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_102382aa:;
  /* 102382aa cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102382ac jae 0x102382ca */
  if (!C.cf) goto L_102382ca;
  /* 102382ae and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 102382b2 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102382b5 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102382b9 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 102382bd mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102382bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102382c2 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102382c8 jmp 0x102382aa */
  goto L_102382aa;
L_102382ca:;
  /* 102382ca add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102382cd cmp dword ptr [0x10247ce0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10247ce0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102382d3 jl 0x1023828c */
  if ((C.sf!=C.of)) goto L_1023828c;
  /* 102382d5 jmp 0x102382dd */
  goto L_102382dd;
L_102382d7:;
  /* 102382d7 mov edi, dword ptr [0x10247ce0] */
  EDI = (r32((uint32_t)(0x10247ce0)));
L_102382dd:;
  /* 102382dd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102382df test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102382e1 jle 0x1023832f */
  if ((C.zf||C.sf!=C.of)) goto L_1023832f;
L_102382e3:;
  /* 102382e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102382e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102382e8 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102382eb je 0x10238325 */
  if (C.zf) goto L_10238325;
  /* 102382ed mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102382ef test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102382f1 je 0x10238325 */
  if (C.zf) goto L_10238325;
  /* 102382f3 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102382f5 jne 0x10238302 */
  if (!C.zf) goto L_10238302;
  /* 102382f7 push ecx */
  push32((uint32_t)(ECX));
  /* 102382f8 call dword ptr [0x1023e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e048))), 0x102382feu);
  /* 102382fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238300 je 0x10238325 */
  if (C.zf) goto L_10238325;
L_10238302:;
  /* 10238302 mov ecx, esi */
  ECX = (ESI);
  /* 10238304 mov eax, esi */
  EAX = (ESI);
  /* 10238306 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10238309 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023830c mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 10238313 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10238316 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10238319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023831c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1023831e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10238320 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10238322 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10238325:;
  /* 10238325 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10238329 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023832a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023832b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023832d jl 0x102382e3 */
  if ((C.sf!=C.of)) goto L_102382e3;
L_1023832f:;
  /* 1023832f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10238331:;
  /* 10238331 mov ecx, dword ptr [0x10247be0] */
  ECX = (r32((uint32_t)(0x10247be0)));
  /* 10238337 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1023833a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023833e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10238341 jne 0x10238390 */
  if (!C.zf) goto L_10238390;
  /* 10238343 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10238345 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10238349 jne 0x10238350 */
  if (!C.zf) goto L_10238350;
  /* 1023834b push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1023834d pop eax */
  EAX = (pop32());
  /* 1023834e jmp 0x1023835a */
  goto L_1023835a;
L_10238350:;
  /* 10238350 mov eax, ebx */
  EAX = (EBX);
  /* 10238352 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10238353 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10238355 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238357 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1023835a:;
  /* 1023835a push eax */
  push32((uint32_t)(EAX));
  /* 1023835b call dword ptr [0x1023e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e044))), 0x10238361u);
  /* 10238361 mov edi, eax */
  EDI = (EAX);
  /* 10238363 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238366 je 0x1023837f */
  if (C.zf) goto L_1023837f;
  /* 10238368 push edi */
  push32((uint32_t)(EDI));
  /* 10238369 call dword ptr [0x1023e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e048))), 0x1023836fu);
  /* 1023836f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238371 je 0x1023837f */
  if (C.zf) goto L_1023837f;
  /* 10238373 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10238378 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1023837a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023837d jne 0x10238385 */
  if (!C.zf) goto L_10238385;
L_1023837f:;
  /* 1023837f or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10238383 jmp 0x10238394 */
  goto L_10238394;
L_10238385:;
  /* 10238385 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238388 jne 0x10238394 */
  if (!C.zf) goto L_10238394;
  /* 1023838a or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1023838e jmp 0x10238394 */
  goto L_10238394;
L_10238390:;
  /* 10238390 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10238394:;
  /* 10238394 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10238395 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238398 jl 0x10238331 */
  if ((C.sf!=C.of)) goto L_10238331;
  /* 1023839a push dword ptr [0x10247ce0] */
  push32((uint32_t)(r32((uint32_t)(0x10247ce0))));
  /* 102383a0 call dword ptr [0x1023e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e040))), 0x102383a6u);
  /* 102383a6 pop edi */
  EDI = (pop32());
  /* 102383a7 pop esi */
  ESI = (pop32());
  /* 102383a8 pop ebx */
  EBX = (pop32());
  /* 102383a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102383aa ret  */
  ESPCHK(0x102381efu, _esp0);
  ESP += 4; return;
}

/* FUN_100083ab @ 0x102383ab (84 bytes, 33 insns) */
void f_102383ab(void) {
  FTRACE(0x102383abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102383ab push ebx */
  push32((uint32_t)(EBX));
  /* 102383ac push esi */
  push32((uint32_t)(ESI));
  /* 102383ad push edi */
  push32((uint32_t)(EDI));
  /* 102383ae mov esi, 0x10247be0 */
  ESI = (0x10247be0u);
L_102383b3:;
  /* 102383b3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102383b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102383b7 je 0x102383f0 */
  if (C.zf) goto L_102383f0;
  /* 102383b9 mov edi, eax */
  EDI = (EAX);
  /* 102383bb add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102383c0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102383c2 jae 0x102383e5 */
  if (!C.cf) goto L_102383e5;
  /* 102383c4 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_102383c7:;
  /* 102383c7 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102383cb je 0x102383d4 */
  if (C.zf) goto L_102383d4;
  /* 102383cd push ebx */
  push32((uint32_t)(EBX));
  /* 102383ce call dword ptr [0x1023e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e050))), 0x102383d4u);
L_102383d4:;
  /* 102383d4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102383d6 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102383d9 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102383de add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102383e1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102383e3 jb 0x102383c7 */
  if (C.cf) goto L_102383c7;
L_102383e5:;
  /* 102383e5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102383e7 call 0x1023a266 */
  push32(0x102383ecu); f_1023a266();
  /* 102383ec and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102383ef pop ecx */
  ECX = (pop32());
L_102383f0:;
  /* 102383f0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102383f3 cmp esi, 0x10247ce0 */
  { uint32_t _a=(ESI),_b=(0x10247ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102383f9 jl 0x102383b3 */
  if ((C.sf!=C.of)) goto L_102383b3;
  /* 102383fb pop edi */
  EDI = (pop32());
  /* 102383fc pop esi */
  ESI = (pop32());
  /* 102383fd pop ebx */
  EBX = (pop32());
  /* 102383fe ret  */
  ESPCHK(0x102383abu, _esp0);
  ESP += 4; return;
}

/* FUN_100083ff @ 0x102383ff (185 bytes, 71 insns) */
void f_102383ff(void) {
  FTRACE(0x102383ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102383ff push ebx */
  push32((uint32_t)(EBX));
  /* 10238400 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10238402 cmp dword ptr [0x10247ce8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10247ce8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238408 push esi */
  push32((uint32_t)(ESI));
  /* 10238409 push edi */
  push32((uint32_t)(EDI));
  /* 1023840a jne 0x10238411 */
  if (!C.zf) goto L_10238411;
  /* 1023840c call 0x1023a861 */
  push32(0x10238411u); f_1023a861();
L_10238411:;
  /* 10238411 mov esi, dword ptr [0x102465e8] */
  ESI = (r32((uint32_t)(0x102465e8)));
  /* 10238417 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10238419:;
  /* 10238419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023841b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023841d je 0x10238431 */
  if (C.zf) goto L_10238431;
  /* 1023841f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238421 je 0x10238424 */
  if (C.zf) goto L_10238424;
  /* 10238423 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10238424:;
  /* 10238424 push esi */
  push32((uint32_t)(ESI));
  /* 10238425 call 0x102390e0 */
  push32(0x1023842au); f_102390e0();
  /* 1023842a pop ecx */
  ECX = (pop32());
  /* 1023842b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1023842f jmp 0x10238419 */
  goto L_10238419;
L_10238431:;
  /* 10238431 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10238438 push eax */
  push32((uint32_t)(EAX));
  /* 10238439 call 0x1023a34f */
  push32(0x1023843eu); f_1023a34f();
  /* 1023843e mov esi, eax */
  ESI = (EAX);
  /* 10238440 pop ecx */
  ECX = (pop32());
  /* 10238441 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238443 mov dword ptr [0x10246618], esi */
  w32((uint32_t)(0x10246618), (ESI));
  /* 10238449 jne 0x10238453 */
  if (!C.zf) goto L_10238453;
  /* 1023844b push 9 */
  push32((uint32_t)(0x9u));
  /* 1023844d call 0x10237151 */
  push32(0x10238452u); f_10237151();
  /* 10238452 pop ecx */
  ECX = (pop32());
L_10238453:;
  /* 10238453 mov edi, dword ptr [0x102465e8] */
  EDI = (r32((uint32_t)(0x102465e8)));
  /* 10238459 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023845b je 0x10238496 */
  if (C.zf) goto L_10238496;
  /* 1023845d push ebp */
  push32((uint32_t)(EBP));
L_1023845e:;
  /* 1023845e push edi */
  push32((uint32_t)(EDI));
  /* 1023845f call 0x102390e0 */
  push32(0x10238464u); f_102390e0();
  /* 10238464 mov ebp, eax */
  EBP = (EAX);
  /* 10238466 pop ecx */
  ECX = (pop32());
  /* 10238467 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10238468 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023846b je 0x1023848f */
  if (C.zf) goto L_1023848f;
  /* 1023846d push ebp */
  push32((uint32_t)(EBP));
  /* 1023846e call 0x1023a34f */
  push32(0x10238473u); f_1023a34f();
  /* 10238473 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238475 pop ecx */
  ECX = (pop32());
  /* 10238476 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10238478 jne 0x10238482 */
  if (!C.zf) goto L_10238482;
  /* 1023847a push 9 */
  push32((uint32_t)(0x9u));
  /* 1023847c call 0x10237151 */
  push32(0x10238481u); f_10237151();
  /* 10238481 pop ecx */
  ECX = (pop32());
L_10238482:;
  /* 10238482 push edi */
  push32((uint32_t)(EDI));
  /* 10238483 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10238485 call 0x10239b90 */
  push32(0x1023848au); f_10239b90();
  /* 1023848a pop ecx */
  ECX = (pop32());
  /* 1023848b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023848e pop ecx */
  ECX = (pop32());
L_1023848f:;
  /* 1023848f add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10238491 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238493 jne 0x1023845e */
  if (!C.zf) goto L_1023845e;
  /* 10238495 pop ebp */
  EBP = (pop32());
L_10238496:;
  /* 10238496 push dword ptr [0x102465e8] */
  push32((uint32_t)(r32((uint32_t)(0x102465e8))));
  /* 1023849c call 0x1023a266 */
  push32(0x102384a1u); f_1023a266();
  /* 102384a1 pop ecx */
  ECX = (pop32());
  /* 102384a2 mov dword ptr [0x102465e8], ebx */
  w32((uint32_t)(0x102465e8), (EBX));
  /* 102384a8 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 102384aa pop edi */
  EDI = (pop32());
  /* 102384ab pop esi */
  ESI = (pop32());
  /* 102384ac mov dword ptr [0x10247ce4], 1 */
  w32((uint32_t)(0x10247ce4), (0x1u));
  /* 102384b6 pop ebx */
  EBX = (pop32());
  /* 102384b7 ret  */
  ESPCHK(0x102383ffu, _esp0);
  ESP += 4; return;
}

/* FUN_100084b8 @ 0x102384b8 (153 bytes, 62 insns) */
void f_102384b8(void) {
  FTRACE(0x102384b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102384b8 push ebp */
  push32((uint32_t)(EBP));
  /* 102384b9 mov ebp, esp */
  EBP = (ESP);
  /* 102384bb push ecx */
  push32((uint32_t)(ECX));
  /* 102384bc push ecx */
  push32((uint32_t)(ECX));
  /* 102384bd push ebx */
  push32((uint32_t)(EBX));
  /* 102384be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102384c0 cmp dword ptr [0x10247ce8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10247ce8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102384c6 push esi */
  push32((uint32_t)(ESI));
  /* 102384c7 push edi */
  push32((uint32_t)(EDI));
  /* 102384c8 jne 0x102384cf */
  if (!C.zf) goto L_102384cf;
  /* 102384ca call 0x1023a861 */
  push32(0x102384cfu); f_1023a861();
L_102384cf:;
  /* 102384cf mov esi, 0x1024663c */
  ESI = (0x1024663cu);
  /* 102384d4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102384d9 push esi */
  push32((uint32_t)(ESI));
  /* 102384da push ebx */
  push32((uint32_t)(EBX));
  /* 102384db call dword ptr [0x1023e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e054))), 0x102384e1u);
  /* 102384e1 mov eax, dword ptr [0x10247cf4] */
  EAX = (r32((uint32_t)(0x10247cf4)));
  /* 102384e6 mov dword ptr [0x10246628], esi */
  w32((uint32_t)(0x10246628), (ESI));
  /* 102384ec mov edi, esi */
  EDI = (ESI);
  /* 102384ee cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102384f0 je 0x102384f4 */
  if (C.zf) goto L_102384f4;
  /* 102384f2 mov edi, eax */
  EDI = (EAX);
L_102384f4:;
  /* 102384f4 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102384f7 push eax */
  push32((uint32_t)(EAX));
  /* 102384f8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102384fb push eax */
  push32((uint32_t)(EAX));
  /* 102384fc push ebx */
  push32((uint32_t)(EBX));
  /* 102384fd push ebx */
  push32((uint32_t)(EBX));
  /* 102384fe push edi */
  push32((uint32_t)(EDI));
  /* 102384ff call 0x10238551 */
  push32(0x10238504u); f_10238551();
  /* 10238504 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10238507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023850a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1023850d push eax */
  push32((uint32_t)(EAX));
  /* 1023850e call 0x1023a34f */
  push32(0x10238513u); f_1023a34f();
  /* 10238513 mov esi, eax */
  ESI = (EAX);
  /* 10238515 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10238518 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023851a jne 0x10238524 */
  if (!C.zf) goto L_10238524;
  /* 1023851c push 8 */
  push32((uint32_t)(0x8u));
  /* 1023851e call 0x10237151 */
  push32(0x10238523u); f_10237151();
  /* 10238523 pop ecx */
  ECX = (pop32());
L_10238524:;
  /* 10238524 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10238527 push eax */
  push32((uint32_t)(EAX));
  /* 10238528 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1023852b push eax */
  push32((uint32_t)(EAX));
  /* 1023852c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023852f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10238532 push eax */
  push32((uint32_t)(EAX));
  /* 10238533 push esi */
  push32((uint32_t)(ESI));
  /* 10238534 push edi */
  push32((uint32_t)(EDI));
  /* 10238535 call 0x10238551 */
  push32(0x1023853au); f_10238551();
  /* 1023853a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023853d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10238540 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10238541 mov dword ptr [0x10246610], esi */
  w32((uint32_t)(0x10246610), (ESI));
  /* 10238547 pop edi */
  EDI = (pop32());
  /* 10238548 pop esi */
  ESI = (pop32());
  /* 10238549 mov dword ptr [0x1024660c], eax */
  w32((uint32_t)(0x1024660c), (EAX));
  /* 1023854e pop ebx */
  EBX = (pop32());
  /* 1023854f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10238550 ret  */
  ESPCHK(0x102384b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008551 @ 0x10238551 (436 bytes, 187 insns) */
void f_10238551(void) {
  FTRACE(0x10238551u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238551 push ebp */
  push32((uint32_t)(EBP));
  /* 10238552 mov ebp, esp */
  EBP = (ESP);
  /* 10238554 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10238557 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1023855a push ebx */
  push32((uint32_t)(EBX));
  /* 1023855b push esi */
  push32((uint32_t)(ESI));
  /* 1023855c and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1023855f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10238562 push edi */
  push32((uint32_t)(EDI));
  /* 10238563 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10238566 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 1023856c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023856f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10238571 je 0x1023857b */
  if (C.zf) goto L_1023857b;
  /* 10238573 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10238575 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10238578 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1023857b:;
  /* 1023857b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023857e jne 0x102385c4 */
  if (!C.zf) goto L_102385c4;
L_10238580:;
  /* 10238580 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10238583 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238584 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238587 je 0x102385b2 */
  if (C.zf) goto L_102385b2;
  /* 10238589 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1023858b je 0x102385b2 */
  if (C.zf) goto L_102385b2;
  /* 1023858d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10238590 test byte ptr [edx + 0x10246aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10246aa1)))&(0x4u); fl_logic(_r,8); }
  /* 10238597 je 0x102385a5 */
  if (C.zf) goto L_102385a5;
  /* 10238599 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1023859b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023859d je 0x102385a5 */
  if (C.zf) goto L_102385a5;
  /* 1023859f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102385a1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102385a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102385a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102385a5:;
  /* 102385a5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102385a7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102385a9 je 0x10238580 */
  if (C.zf) goto L_10238580;
  /* 102385ab mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102385ad mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102385af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102385b0 jmp 0x10238580 */
  goto L_10238580;
L_102385b2:;
  /* 102385b2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102385b4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102385b6 je 0x102385bc */
  if (C.zf) goto L_102385bc;
  /* 102385b8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102385bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102385bc:;
  /* 102385bc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102385bf jne 0x10238607 */
  if (!C.zf) goto L_10238607;
  /* 102385c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102385c2 jmp 0x10238607 */
  goto L_10238607;
L_102385c4:;
  /* 102385c4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102385c6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102385c8 je 0x102385cf */
  if (C.zf) goto L_102385cf;
  /* 102385ca mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102385cc mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102385ce inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102385cf:;
  /* 102385cf mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102385d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102385d2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102385d5 test byte ptr [ebx + 0x10246aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10246aa1)))&(0x4u); fl_logic(_r,8); }
  /* 102385dc je 0x102385ea */
  if (C.zf) goto L_102385ea;
  /* 102385de inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102385e0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102385e2 je 0x102385e9 */
  if (C.zf) goto L_102385e9;
  /* 102385e4 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 102385e6 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 102385e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102385e9:;
  /* 102385e9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102385ea:;
  /* 102385ea cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102385ed je 0x102385f8 */
  if (C.zf) goto L_102385f8;
  /* 102385ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102385f1 je 0x102385fc */
  if (C.zf) goto L_102385fc;
  /* 102385f3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102385f6 jne 0x102385c4 */
  if (!C.zf) goto L_102385c4;
L_102385f8:;
  /* 102385f8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102385fa jne 0x102385ff */
  if (!C.zf) goto L_102385ff;
L_102385fc:;
  /* 102385fc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102385fd jmp 0x10238607 */
  goto L_10238607;
L_102385ff:;
  /* 102385ff test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10238601 je 0x10238607 */
  if (C.zf) goto L_10238607;
  /* 10238603 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10238607:;
  /* 10238607 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1023860b:;
  /* 1023860b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023860e je 0x102386f4 */
  if (C.zf) goto L_102386f4;
L_10238614:;
  /* 10238614 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10238616 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238619 je 0x10238620 */
  if (C.zf) goto L_10238620;
  /* 1023861b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023861e jne 0x10238623 */
  if (!C.zf) goto L_10238623;
L_10238620:;
  /* 10238620 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238621 jmp 0x10238614 */
  goto L_10238614;
L_10238623:;
  /* 10238623 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238626 je 0x102386f4 */
  if (C.zf) goto L_102386f4;
  /* 1023862c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023862e je 0x10238638 */
  if (C.zf) goto L_10238638;
  /* 10238630 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10238632 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10238635 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10238638:;
  /* 10238638 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1023863b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1023863d:;
  /* 1023863d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10238644 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10238646:;
  /* 10238646 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238649 jne 0x1023864f */
  if (!C.zf) goto L_1023864f;
  /* 1023864b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023864c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023864d jmp 0x10238646 */
  goto L_10238646;
L_1023864f:;
  /* 1023864f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238652 jne 0x10238680 */
  if (!C.zf) goto L_10238680;
  /* 10238654 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10238657 jne 0x1023867e */
  if (!C.zf) goto L_1023867e;
  /* 10238659 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023865b cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023865e je 0x1023866d */
  if (C.zf) goto L_1023866d;
  /* 10238660 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238664 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10238667 jne 0x1023866d */
  if (!C.zf) goto L_1023866d;
  /* 10238669 mov eax, edx */
  EAX = (EDX);
  /* 1023866b jmp 0x10238670 */
  goto L_10238670;
L_1023866d:;
  /* 1023866d mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10238670:;
  /* 10238670 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10238673 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10238675 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238678 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1023867b mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1023867e:;
  /* 1023867e shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10238680:;
  /* 10238680 mov edx, ebx */
  EDX = (EBX);
  /* 10238682 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10238683 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10238685 je 0x10238695 */
  if (C.zf) goto L_10238695;
  /* 10238687 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10238688:;
  /* 10238688 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023868a je 0x10238690 */
  if (C.zf) goto L_10238690;
  /* 1023868c mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1023868f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10238690:;
  /* 10238690 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10238692 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10238693 jne 0x10238688 */
  if (!C.zf) goto L_10238688;
L_10238695:;
  /* 10238695 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10238697 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10238699 je 0x102386e5 */
  if (C.zf) goto L_102386e5;
  /* 1023869b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023869f jne 0x102386ab */
  if (!C.zf) goto L_102386ab;
  /* 102386a1 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102386a4 je 0x102386e5 */
  if (C.zf) goto L_102386e5;
  /* 102386a6 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102386a9 je 0x102386e5 */
  if (C.zf) goto L_102386e5;
L_102386ab:;
  /* 102386ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102386af je 0x102386df */
  if (C.zf) goto L_102386df;
  /* 102386b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102386b3 je 0x102386ce */
  if (C.zf) goto L_102386ce;
  /* 102386b5 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102386b8 test byte ptr [ebx + 0x10246aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10246aa1)))&(0x4u); fl_logic(_r,8); }
  /* 102386bf je 0x102386c7 */
  if (C.zf) goto L_102386c7;
  /* 102386c1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102386c3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102386c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102386c5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102386c7:;
  /* 102386c7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102386c9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102386cb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102386cc jmp 0x102386dd */
  goto L_102386dd;
L_102386ce:;
  /* 102386ce movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102386d1 test byte ptr [edx + 0x10246aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10246aa1)))&(0x4u); fl_logic(_r,8); }
  /* 102386d8 je 0x102386dd */
  if (C.zf) goto L_102386dd;
  /* 102386da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102386db inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102386dd:;
  /* 102386dd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102386df:;
  /* 102386df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102386e0 jmp 0x1023863d */
  goto L_1023863d;
L_102386e5:;
  /* 102386e5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102386e7 je 0x102386ed */
  if (C.zf) goto L_102386ed;
  /* 102386e9 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102386ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102386ed:;
  /* 102386ed inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102386ef jmp 0x1023860b */
  goto L_1023860b;
L_102386f4:;
  /* 102386f4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102386f6 je 0x102386fb */
  if (C.zf) goto L_102386fb;
  /* 102386f8 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102386fb:;
  /* 102386fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102386fe pop edi */
  EDI = (pop32());
  /* 102386ff pop esi */
  ESI = (pop32());
  /* 10238700 pop ebx */
  EBX = (pop32());
  /* 10238701 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10238703 pop ebp */
  EBP = (pop32());
  /* 10238704 ret  */
  ESPCHK(0x10238551u, _esp0);
  ESP += 4; return;
}

/* FUN_10008705 @ 0x10238705 (306 bytes, 132 insns) */
void f_10238705(void) {
  FTRACE(0x10238705u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238705 push ecx */
  push32((uint32_t)(ECX));
  /* 10238706 push ecx */
  push32((uint32_t)(ECX));
  /* 10238707 mov eax, dword ptr [0x10246740] */
  EAX = (r32((uint32_t)(0x10246740)));
  /* 1023870c push ebx */
  push32((uint32_t)(EBX));
  /* 1023870d push ebp */
  push32((uint32_t)(EBP));
  /* 1023870e mov ebp, dword ptr [0x1023e068] */
  EBP = (r32((uint32_t)(0x1023e068)));
  /* 10238714 push esi */
  push32((uint32_t)(ESI));
  /* 10238715 push edi */
  push32((uint32_t)(EDI));
  /* 10238716 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10238718 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023871a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023871c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023871e jne 0x10238753 */
  if (!C.zf) goto L_10238753;
  /* 10238720 call ebp */
  call_ind((uint32_t)(EBP), 0x10238722u);
  /* 10238722 mov esi, eax */
  ESI = (EAX);
  /* 10238724 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238726 je 0x10238734 */
  if (C.zf) goto L_10238734;
  /* 10238728 mov dword ptr [0x10246740], 1 */
  w32((uint32_t)(0x10246740), (0x1u));
  /* 10238732 jmp 0x1023875c */
  goto L_1023875c;
L_10238734:;
  /* 10238734 call dword ptr [0x1023e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e064))), 0x1023873au);
  /* 1023873a mov edi, eax */
  EDI = (EAX);
  /* 1023873c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023873e je 0x1023882e */
  if (C.zf) goto L_1023882e;
  /* 10238744 mov dword ptr [0x10246740], 2 */
  w32((uint32_t)(0x10246740), (0x2u));
  /* 1023874e jmp 0x102387e2 */
  goto L_102387e2;
L_10238753:;
  /* 10238753 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238756 jne 0x102387dd */
  if (!C.zf) goto L_102387dd;
L_1023875c:;
  /* 1023875c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023875e jne 0x1023876c */
  if (!C.zf) goto L_1023876c;
  /* 10238760 call ebp */
  call_ind((uint32_t)(EBP), 0x10238762u);
  /* 10238762 mov esi, eax */
  ESI = (EAX);
  /* 10238764 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238766 je 0x1023882e */
  if (C.zf) goto L_1023882e;
L_1023876c:;
  /* 1023876c cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023876f mov eax, esi */
  EAX = (ESI);
  /* 10238771 je 0x10238781 */
  if (C.zf) goto L_10238781;
L_10238773:;
  /* 10238773 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238774 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238775 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10238778 jne 0x10238773 */
  if (!C.zf) goto L_10238773;
  /* 1023877a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023877b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023877c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023877f jne 0x10238773 */
  if (!C.zf) goto L_10238773;
L_10238781:;
  /* 10238781 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238783 mov edi, dword ptr [0x1023e060] */
  EDI = (r32((uint32_t)(0x1023e060)));
  /* 10238789 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1023878b push ebx */
  push32((uint32_t)(EBX));
  /* 1023878c push ebx */
  push32((uint32_t)(EBX));
  /* 1023878d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023878e push ebx */
  push32((uint32_t)(EBX));
  /* 1023878f push ebx */
  push32((uint32_t)(EBX));
  /* 10238790 push eax */
  push32((uint32_t)(EAX));
  /* 10238791 push esi */
  push32((uint32_t)(ESI));
  /* 10238792 push ebx */
  push32((uint32_t)(EBX));
  /* 10238793 push ebx */
  push32((uint32_t)(EBX));
  /* 10238794 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10238798 call edi */
  call_ind((uint32_t)(EDI), 0x1023879au);
  /* 1023879a mov ebp, eax */
  EBP = (EAX);
  /* 1023879c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023879e je 0x102387d2 */
  if (C.zf) goto L_102387d2;
  /* 102387a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102387a1 call 0x1023a34f */
  push32(0x102387a6u); f_1023a34f();
  /* 102387a6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102387a8 pop ecx */
  ECX = (pop32());
  /* 102387a9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102387ad je 0x102387d2 */
  if (C.zf) goto L_102387d2;
  /* 102387af push ebx */
  push32((uint32_t)(EBX));
  /* 102387b0 push ebx */
  push32((uint32_t)(EBX));
  /* 102387b1 push ebp */
  push32((uint32_t)(EBP));
  /* 102387b2 push eax */
  push32((uint32_t)(EAX));
  /* 102387b3 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 102387b7 push esi */
  push32((uint32_t)(ESI));
  /* 102387b8 push ebx */
  push32((uint32_t)(EBX));
  /* 102387b9 push ebx */
  push32((uint32_t)(EBX));
  /* 102387ba call edi */
  call_ind((uint32_t)(EDI), 0x102387bcu);
  /* 102387bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102387be jne 0x102387ce */
  if (!C.zf) goto L_102387ce;
  /* 102387c0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102387c4 call 0x1023a266 */
  push32(0x102387c9u); f_1023a266();
  /* 102387c9 pop ecx */
  ECX = (pop32());
  /* 102387ca mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_102387ce:;
  /* 102387ce mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_102387d2:;
  /* 102387d2 push esi */
  push32((uint32_t)(ESI));
  /* 102387d3 call dword ptr [0x1023e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e05c))), 0x102387d9u);
  /* 102387d9 mov eax, ebx */
  EAX = (EBX);
  /* 102387db jmp 0x10238830 */
  goto L_10238830;
L_102387dd:;
  /* 102387dd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102387e0 jne 0x1023882e */
  if (!C.zf) goto L_1023882e;
L_102387e2:;
  /* 102387e2 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102387e4 jne 0x102387f2 */
  if (!C.zf) goto L_102387f2;
  /* 102387e6 call dword ptr [0x1023e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e064))), 0x102387ecu);
  /* 102387ec mov edi, eax */
  EDI = (EAX);
  /* 102387ee cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102387f0 je 0x1023882e */
  if (C.zf) goto L_1023882e;
L_102387f2:;
  /* 102387f2 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102387f4 mov eax, edi */
  EAX = (EDI);
  /* 102387f6 je 0x10238802 */
  if (C.zf) goto L_10238802;
L_102387f8:;
  /* 102387f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102387f9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102387fb jne 0x102387f8 */
  if (!C.zf) goto L_102387f8;
  /* 102387fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102387fe cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238800 jne 0x102387f8 */
  if (!C.zf) goto L_102387f8;
L_10238802:;
  /* 10238802 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238804 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238805 mov ebp, eax */
  EBP = (EAX);
  /* 10238807 push ebp */
  push32((uint32_t)(EBP));
  /* 10238808 call 0x1023a34f */
  push32(0x1023880du); f_1023a34f();
  /* 1023880d mov esi, eax */
  ESI = (EAX);
  /* 1023880f pop ecx */
  ECX = (pop32());
  /* 10238810 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238812 jne 0x10238818 */
  if (!C.zf) goto L_10238818;
  /* 10238814 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10238816 jmp 0x10238823 */
  goto L_10238823;
L_10238818:;
  /* 10238818 push ebp */
  push32((uint32_t)(EBP));
  /* 10238819 push edi */
  push32((uint32_t)(EDI));
  /* 1023881a push esi */
  push32((uint32_t)(ESI));
  /* 1023881b call 0x1023a880 */
  push32(0x10238820u); f_1023a880();
  /* 10238820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10238823:;
  /* 10238823 push edi */
  push32((uint32_t)(EDI));
  /* 10238824 call dword ptr [0x1023e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e058))), 0x1023882au);
  /* 1023882a mov eax, esi */
  EAX = (ESI);
  /* 1023882c jmp 0x10238830 */
  goto L_10238830;
L_1023882e:;
  /* 1023882e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10238830:;
  /* 10238830 pop edi */
  EDI = (pop32());
  /* 10238831 pop esi */
  ESI = (pop32());
  /* 10238832 pop ebp */
  EBP = (pop32());
  /* 10238833 pop ebx */
  EBX = (pop32());
  /* 10238834 pop ecx */
  ECX = (pop32());
  /* 10238835 pop ecx */
  ECX = (pop32());
  /* 10238836 ret  */
  ESPCHK(0x10238705u, _esp0);
  ESP += 4; return;
}

/* FUN_10008837 @ 0x10238837 (45 bytes, 17 insns) */
void f_10238837(void) {
  FTRACE(0x10238837u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238837 push esi */
  push32((uint32_t)(ESI));
  /* 10238838 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023883c push 0 */
  push32((uint32_t)(0x0u));
  /* 1023883e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10238841 call dword ptr [0x1023e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e004))), 0x10238847u);
  /* 10238847 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023884c jne 0x10238862 */
  if (!C.zf) goto L_10238862;
  /* 1023884e mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10238851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10238853 je 0x10238862 */
  if (C.zf) goto L_10238862;
  /* 10238855 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10238857 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 1023885a mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 1023885c mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 1023885f mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_10238862:;
  /* 10238862 pop esi */
  ESI = (pop32());
  /* 10238863 ret  */
  ESPCHK(0x10238837u, _esp0);
  ESP += 4; return;
}

/* FUN_10008864 @ 0x10238864 (328 bytes, 115 insns) */
void f_10238864(void) {
  FTRACE(0x10238864u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238864 push ebp */
  push32((uint32_t)(EBP));
  /* 10238865 mov ebp, esp */
  EBP = (ESP);
  /* 10238867 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 1023886c call 0x1023af70 */
  push32(0x10238871u); f_1023af70();
  /* 10238871 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10238877 push ebx */
  push32((uint32_t)(EBX));
  /* 10238878 push eax */
  push32((uint32_t)(EAX));
  /* 10238879 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 10238883 call dword ptr [0x1023e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e070))), 0x10238889u);
  /* 10238889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023888b je 0x102388a7 */
  if (C.zf) goto L_102388a7;
  /* 1023888d cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238894 jne 0x102388a7 */
  if (!C.zf) goto L_102388a7;
  /* 10238896 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023889d jb 0x102388a7 */
  if (C.cf) goto L_102388a7;
  /* 1023889f push 1 */
  push32((uint32_t)(0x1u));
  /* 102388a1 pop eax */
  EAX = (pop32());
  /* 102388a2 jmp 0x102389a9 */
  goto L_102389a9;
L_102388a7:;
  /* 102388a7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 102388ad push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 102388b2 push eax */
  push32((uint32_t)(EAX));
  /* 102388b3 push 0x1023e1c8 */
  push32((uint32_t)(0x1023e1c8u));
  /* 102388b8 call dword ptr [0x1023e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e06c))), 0x102388beu);
  /* 102388be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102388c0 je 0x10238996 */
  if (C.zf) goto L_10238996;
  /* 102388c6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102388c8 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 102388ce cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102388d4 je 0x102388e9 */
  if (C.zf) goto L_102388e9;
L_102388d6:;
  /* 102388d6 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102388d8 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102388da jl 0x102388e4 */
  if ((C.sf!=C.of)) goto L_102388e4;
  /* 102388dc cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102388de jg 0x102388e4 */
  if ((!C.zf&&C.sf==C.of)) goto L_102388e4;
  /* 102388e0 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102388e2 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_102388e4:;
  /* 102388e4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102388e5 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102388e7 jne 0x102388d6 */
  if (!C.zf) goto L_102388d6;
L_102388e9:;
  /* 102388e9 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 102388ef push 0x16 */
  push32((uint32_t)(0x16u));
  /* 102388f1 push eax */
  push32((uint32_t)(EAX));
  /* 102388f2 push 0x1023e1b0 */
  push32((uint32_t)(0x1023e1b0u));
  /* 102388f7 call 0x1023af30 */
  push32(0x102388fcu); f_1023af30();
  /* 102388fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102388ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238901 jne 0x1023890b */
  if (!C.zf) goto L_1023890b;
  /* 10238903 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10238909 jmp 0x10238954 */
  goto L_10238954;
L_1023890b:;
  /* 1023890b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10238911 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10238916 push eax */
  push32((uint32_t)(EAX));
  /* 10238917 push ebx */
  push32((uint32_t)(EBX));
  /* 10238918 call dword ptr [0x1023e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e054))), 0x1023891eu);
  /* 1023891e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238924 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1023892a je 0x1023893f */
  if (C.zf) goto L_1023893f;
L_1023892c:;
  /* 1023892c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1023892e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238930 jl 0x1023893a */
  if ((C.sf!=C.of)) goto L_1023893a;
  /* 10238932 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238934 jg 0x1023893a */
  if ((!C.zf&&C.sf==C.of)) goto L_1023893a;
  /* 10238936 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10238938 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1023893a:;
  /* 1023893a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023893b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023893d jne 0x1023892c */
  if (!C.zf) goto L_1023892c;
L_1023893f:;
  /* 1023893f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10238945 push eax */
  push32((uint32_t)(EAX));
  /* 10238946 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1023894c push eax */
  push32((uint32_t)(EAX));
  /* 1023894d call 0x1023aeb0 */
  push32(0x10238952u); f_1023aeb0();
  /* 10238952 pop ecx */
  ECX = (pop32());
  /* 10238953 pop ecx */
  ECX = (pop32());
L_10238954:;
  /* 10238954 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238956 je 0x10238996 */
  if (C.zf) goto L_10238996;
  /* 10238958 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1023895a push eax */
  push32((uint32_t)(EAX));
  /* 1023895b call 0x1023adf0 */
  push32(0x10238960u); f_1023adf0();
  /* 10238960 pop ecx */
  ECX = (pop32());
  /* 10238961 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238963 pop ecx */
  ECX = (pop32());
  /* 10238964 je 0x10238996 */
  if (C.zf) goto L_10238996;
  /* 10238966 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238967 mov ecx, eax */
  ECX = (EAX);
  /* 10238969 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023896b je 0x1023897b */
  if (C.zf) goto L_1023897b;
L_1023896d:;
  /* 1023896d cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238970 jne 0x10238976 */
  if (!C.zf) goto L_10238976;
  /* 10238972 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 10238974 jmp 0x10238977 */
  goto L_10238977;
L_10238976:;
  /* 10238976 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_10238977:;
  /* 10238977 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238979 jne 0x1023896d */
  if (!C.zf) goto L_1023896d;
L_1023897b:;
  /* 1023897b push 0xa */
  push32((uint32_t)(0xau));
  /* 1023897d push ebx */
  push32((uint32_t)(EBX));
  /* 1023897e push eax */
  push32((uint32_t)(EAX));
  /* 1023897f call 0x1023abb5 */
  push32(0x10238984u); f_1023abb5();
  /* 10238984 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10238987 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023898a je 0x102389a9 */
  if (C.zf) goto L_102389a9;
  /* 1023898c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023898f je 0x102389a9 */
  if (C.zf) goto L_102389a9;
  /* 10238991 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238994 je 0x102389a9 */
  if (C.zf) goto L_102389a9;
L_10238996:;
  /* 10238996 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10238999 push eax */
  push32((uint32_t)(EAX));
  /* 1023899a call 0x10238837 */
  push32(0x1023899fu); f_10238837();
  /* 1023899f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102389a3 pop ecx */
  ECX = (pop32());
  /* 102389a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102389a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102389a9:;
  /* 102389a9 pop ebx */
  EBX = (pop32());
  /* 102389aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102389ab ret  */
  ESPCHK(0x10238864u, _esp0);
  ESP += 4; return;
}

/* FUN_100089ac @ 0x102389ac (93 bytes, 30 insns) */
void f_102389ac(void) {
  FTRACE(0x102389acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102389ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102389ae push 0 */
  push32((uint32_t)(0x0u));
  /* 102389b0 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102389b4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102389b9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102389bc push eax */
  push32((uint32_t)(EAX));
  /* 102389bd call dword ptr [0x1023e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e078))), 0x102389c3u);
  /* 102389c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102389c5 mov dword ptr [0x10247bc4], eax */
  w32((uint32_t)(0x10247bc4), (EAX));
  /* 102389ca je 0x10238a02 */
  if (C.zf) goto L_10238a02;
  /* 102389cc call 0x10238864 */
  push32(0x102389d1u); f_10238864();
  /* 102389d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102389d4 mov dword ptr [0x10247bc8], eax */
  w32((uint32_t)(0x10247bc8), (EAX));
  /* 102389d9 jne 0x102389e8 */
  if (!C.zf) goto L_102389e8;
  /* 102389db push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 102389e0 call 0x1023af9f */
  push32(0x102389e5u); f_1023af9f();
  /* 102389e5 pop ecx */
  ECX = (pop32());
  /* 102389e6 jmp 0x102389f2 */
  goto L_102389f2;
L_102389e8:;
  /* 102389e8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102389eb jne 0x10238a05 */
  if (!C.zf) goto L_10238a05;
  /* 102389ed call 0x1023b7f0 */
  push32(0x102389f2u); f_1023b7f0();
L_102389f2:;
  /* 102389f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102389f4 jne 0x10238a05 */
  if (!C.zf) goto L_10238a05;
  /* 102389f6 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 102389fc call dword ptr [0x1023e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e074))), 0x10238a02u);
L_10238a02:;
  /* 10238a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10238a04 ret  */
  ESPCHK(0x102389acu, _esp0);
  ESP += 4; return;
L_10238a05:;
  /* 10238a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10238a07 pop eax */
  EAX = (pop32());
  /* 10238a08 ret  */
  ESPCHK(0x102389acu, _esp0);
  ESP += 4; return;
}

/* FUN_10008a09 @ 0x10238a09 (168 bytes, 56 insns) */
void f_10238a09(void) {
  FTRACE(0x10238a09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238a09 mov eax, dword ptr [0x10247bc8] */
  EAX = (r32((uint32_t)(0x10247bc8)));
  /* 10238a0e push esi */
  push32((uint32_t)(ESI));
  /* 10238a0f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238a12 push edi */
  push32((uint32_t)(EDI));
  /* 10238a13 jne 0x10238a7b */
  if (!C.zf) goto L_10238a7b;
  /* 10238a15 push ebx */
  push32((uint32_t)(EBX));
  /* 10238a16 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10238a18 cmp dword ptr [0x10246968], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10246968))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238a1e push ebp */
  push32((uint32_t)(EBP));
  /* 10238a1f mov ebp, dword ptr [0x1023e080] */
  EBP = (r32((uint32_t)(0x1023e080)));
  /* 10238a25 jle 0x10238a67 */
  if ((C.zf||C.sf!=C.of)) goto L_10238a67;
  /* 10238a27 mov eax, dword ptr [0x1024696c] */
  EAX = (r32((uint32_t)(0x1024696c)));
  /* 10238a2c mov edi, dword ptr [0x1023e07c] */
  EDI = (r32((uint32_t)(0x1023e07c)));
  /* 10238a32 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10238a35:;
  /* 10238a35 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10238a3a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10238a3f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10238a41 call edi */
  call_ind((uint32_t)(EDI), 0x10238a43u);
  /* 10238a43 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10238a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10238a4a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10238a4c call edi */
  call_ind((uint32_t)(EDI), 0x10238a4eu);
  /* 10238a4e push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10238a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10238a53 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 10238a59 call ebp */
  call_ind((uint32_t)(EBP), 0x10238a5bu);
  /* 10238a5b add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10238a5e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10238a5f cmp ebx, dword ptr [0x10246968] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10246968))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238a65 jl 0x10238a35 */
  if ((C.sf!=C.of)) goto L_10238a35;
L_10238a67:;
  /* 10238a67 push dword ptr [0x1024696c] */
  push32((uint32_t)(r32((uint32_t)(0x1024696c))));
  /* 10238a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10238a6f push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 10238a75 call ebp */
  call_ind((uint32_t)(EBP), 0x10238a77u);
  /* 10238a77 pop ebp */
  EBP = (pop32());
  /* 10238a78 pop ebx */
  EBX = (pop32());
  /* 10238a79 jmp 0x10238aa2 */
  goto L_10238aa2;
L_10238a7b:;
  /* 10238a7b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238a7e jne 0x10238aa2 */
  if (!C.zf) goto L_10238aa2;
  /* 10238a80 mov edi, 0x10240e00 */
  EDI = (0x10240e00u);
  /* 10238a85 mov esi, edi */
  ESI = (EDI);
L_10238a87:;
  /* 10238a87 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10238a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238a8c je 0x10238a9c */
  if (C.zf) goto L_10238a9c;
  /* 10238a8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10238a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10238a95 push eax */
  push32((uint32_t)(EAX));
  /* 10238a96 call dword ptr [0x1023e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e07c))), 0x10238a9cu);
L_10238a9c:;
  /* 10238a9c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 10238a9e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238aa0 jne 0x10238a87 */
  if (!C.zf) goto L_10238a87;
L_10238aa2:;
  /* 10238aa2 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 10238aa8 call dword ptr [0x1023e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e074))), 0x10238aaeu);
  /* 10238aae pop edi */
  EDI = (pop32());
  /* 10238aaf pop esi */
  ESI = (pop32());
  /* 10238ab0 ret  */
  ESPCHK(0x10238a09u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ab1 @ 0x10238ab1 (57 bytes, 18 insns) */
void f_10238ab1(void) {
  FTRACE(0x10238ab1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238ab1 mov eax, dword ptr [0x102465f0] */
  EAX = (r32((uint32_t)(0x102465f0)));
  /* 10238ab6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238ab9 je 0x10238ac8 */
  if (C.zf) goto L_10238ac8;
  /* 10238abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238abd jne 0x10238ae9 */
  if (!C.zf) goto L_10238ae9;
  /* 10238abf cmp dword ptr [0x102465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238ac6 jne 0x10238ae9 */
  if (!C.zf) goto L_10238ae9;
L_10238ac8:;
  /* 10238ac8 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10238acd call 0x10238aea */
  push32(0x10238ad2u); f_10238aea();
  /* 10238ad2 mov eax, dword ptr [0x10246744] */
  EAX = (r32((uint32_t)(0x10246744)));
  /* 10238ad7 pop ecx */
  ECX = (pop32());
  /* 10238ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238ada je 0x10238ade */
  if (C.zf) goto L_10238ade;
  /* 10238adc call eax */
  call_ind((uint32_t)(EAX), 0x10238adeu);
L_10238ade:;
  /* 10238ade push 0xff */
  push32((uint32_t)(0xffu));
  /* 10238ae3 call 0x10238aea */
  push32(0x10238ae8u); f_10238aea();
  /* 10238ae8 pop ecx */
  ECX = (pop32());
L_10238ae9:;
  /* 10238ae9 ret  */
  ESPCHK(0x10238ab1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aea @ 0x10238aea (339 bytes, 100 insns) */
void f_10238aea(void) {
  FTRACE(0x10238aeau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238aea push ebp */
  push32((uint32_t)(EBP));
  /* 10238aeb mov ebp, esp */
  EBP = (ESP);
  /* 10238aed sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10238af6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10238af8 mov eax, 0x10240658 */
  EAX = (0x10240658u);
L_10238afd:;
  /* 10238afd cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238aff je 0x10238b0c */
  if (C.zf) goto L_10238b0c;
  /* 10238b01 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10238b04 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10238b05 cmp eax, 0x102406e8 */
  { uint32_t _a=(EAX),_b=(0x102406e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238b0a jl 0x10238afd */
  if ((C.sf!=C.of)) goto L_10238afd;
L_10238b0c:;
  /* 10238b0c push esi */
  push32((uint32_t)(ESI));
  /* 10238b0d mov esi, ecx */
  ESI = (ECX);
  /* 10238b0f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10238b12 cmp edx, dword ptr [esi + 0x10240658] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10240658))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238b18 jne 0x10238c3a */
  if (!C.zf) goto L_10238c3a;
  /* 10238b1e mov eax, dword ptr [0x102465f0] */
  EAX = (r32((uint32_t)(0x102465f0)));
  /* 10238b23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238b26 je 0x10238c14 */
  if (C.zf) goto L_10238c14;
  /* 10238b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238b2e jne 0x10238b3d */
  if (!C.zf) goto L_10238b3d;
  /* 10238b30 cmp dword ptr [0x102465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238b37 je 0x10238c14 */
  if (C.zf) goto L_10238c14;
L_10238b3d:;
  /* 10238b3d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238b43 je 0x10238c3a */
  if (C.zf) goto L_10238c3a;
  /* 10238b49 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10238b4f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10238b54 push eax */
  push32((uint32_t)(EAX));
  /* 10238b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10238b57 call dword ptr [0x1023e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e054))), 0x10238b5du);
  /* 10238b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238b5f jne 0x10238b74 */
  if (!C.zf) goto L_10238b74;
  /* 10238b61 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10238b67 push 0x1023e4b8 */
  push32((uint32_t)(0x1023e4b8u));
  /* 10238b6c push eax */
  push32((uint32_t)(EAX));
  /* 10238b6d call 0x10239b90 */
  push32(0x10238b72u); f_10239b90();
  /* 10238b72 pop ecx */
  ECX = (pop32());
  /* 10238b73 pop ecx */
  ECX = (pop32());
L_10238b74:;
  /* 10238b74 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10238b7a push edi */
  push32((uint32_t)(EDI));
  /* 10238b7b push eax */
  push32((uint32_t)(EAX));
  /* 10238b7c lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10238b82 call 0x102390e0 */
  push32(0x10238b87u); f_102390e0();
  /* 10238b87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238b88 pop ecx */
  ECX = (pop32());
  /* 10238b89 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238b8c jbe 0x10238bb7 */
  if ((C.cf||C.zf)) goto L_10238bb7;
  /* 10238b8e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10238b94 push eax */
  push32((uint32_t)(EAX));
  /* 10238b95 call 0x102390e0 */
  push32(0x10238b9au); f_102390e0();
  /* 10238b9a mov edi, eax */
  EDI = (EAX);
  /* 10238b9c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10238ba2 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238ba5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10238ba7 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10238ba9 push 0x1023e4b4 */
  push32((uint32_t)(0x1023e4b4u));
  /* 10238bae push edi */
  push32((uint32_t)(EDI));
  /* 10238baf call 0x1023bea0 */
  push32(0x10238bb4u); f_1023bea0();
  /* 10238bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10238bb7:;
  /* 10238bb7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10238bbd push 0x1023e498 */
  push32((uint32_t)(0x1023e498u));
  /* 10238bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10238bc3 call 0x10239b90 */
  push32(0x10238bc8u); f_10239b90();
  /* 10238bc8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10238bce push edi */
  push32((uint32_t)(EDI));
  /* 10238bcf push eax */
  push32((uint32_t)(EAX));
  /* 10238bd0 call 0x10239ba0 */
  push32(0x10238bd5u); f_10239ba0();
  /* 10238bd5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10238bdb push 0x1023e494 */
  push32((uint32_t)(0x1023e494u));
  /* 10238be0 push eax */
  push32((uint32_t)(EAX));
  /* 10238be1 call 0x10239ba0 */
  push32(0x10238be6u); f_10239ba0();
  /* 10238be6 push dword ptr [esi + 0x1024065c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1024065c))));
  /* 10238bec lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10238bf2 push eax */
  push32((uint32_t)(EAX));
  /* 10238bf3 call 0x10239ba0 */
  push32(0x10238bf8u); f_10239ba0();
  /* 10238bf8 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10238bfd lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10238c03 push 0x1023e46c */
  push32((uint32_t)(0x1023e46cu));
  /* 10238c08 push eax */
  push32((uint32_t)(EAX));
  /* 10238c09 call 0x1023be14 */
  push32(0x10238c0eu); f_1023be14();
  /* 10238c0e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10238c11 pop edi */
  EDI = (pop32());
  /* 10238c12 jmp 0x10238c3a */
  goto L_10238c3a;
L_10238c14:;
  /* 10238c14 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10238c17 lea esi, [esi + 0x1024065c] */
  ESI = ((uint32_t)(ESI + 0x1024065c));
  /* 10238c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10238c1f push eax */
  push32((uint32_t)(EAX));
  /* 10238c20 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10238c22 call 0x102390e0 */
  push32(0x10238c27u); f_102390e0();
  /* 10238c27 pop ecx */
  ECX = (pop32());
  /* 10238c28 push eax */
  push32((uint32_t)(EAX));
  /* 10238c29 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10238c2b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10238c2d call dword ptr [0x1023e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e044))), 0x10238c33u);
  /* 10238c33 push eax */
  push32((uint32_t)(EAX));
  /* 10238c34 call dword ptr [0x1023e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e084))), 0x10238c3au);
L_10238c3a:;
  /* 10238c3a pop esi */
  ESI = (pop32());
  /* 10238c3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10238c3c ret  */
  ESPCHK(0x10238aeau, _esp0);
  ESP += 4; return;
}

/* FUN_10008c3d @ 0x10238c3d (101 bytes, 34 insns) */
void f_10238c3d(void) {
  FTRACE(0x10238c3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238c3d push esi */
  push32((uint32_t)(ESI));
  /* 10238c3e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10238c42 cmp esi, dword ptr [0x10247ce0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238c48 jae 0x10238c8a */
  if (!C.cf) goto L_10238c8a;
  /* 10238c4a mov ecx, esi */
  ECX = (ESI);
  /* 10238c4c mov eax, esi */
  EAX = (ESI);
  /* 10238c4e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10238c51 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10238c54 mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 10238c5b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10238c5e test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10238c63 je 0x10238c8a */
  if (C.zf) goto L_10238c8a;
  /* 10238c65 push edi */
  push32((uint32_t)(EDI));
  /* 10238c66 push esi */
  push32((uint32_t)(ESI));
  /* 10238c67 call 0x1023c0e4 */
  push32(0x10238c6cu); f_1023c0e4();
  /* 10238c6c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10238c70 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10238c74 push esi */
  push32((uint32_t)(ESI));
  /* 10238c75 call 0x10238ca2 */
  push32(0x10238c7au); f_10238ca2();
  /* 10238c7a push esi */
  push32((uint32_t)(ESI));
  /* 10238c7b mov edi, eax */
  EDI = (EAX);
  /* 10238c7d call 0x1023c143 */
  push32(0x10238c82u); f_1023c143();
  /* 10238c82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10238c85 mov eax, edi */
  EAX = (EDI);
  /* 10238c87 pop edi */
  EDI = (pop32());
  /* 10238c88 pop esi */
  ESI = (pop32());
  /* 10238c89 ret  */
  ESPCHK(0x10238c3du, _esp0);
  ESP += 4; return;
L_10238c8a:;
  /* 10238c8a call 0x1023c011 */
  push32(0x10238c8fu); f_1023c011();
  /* 10238c8f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10238c95 call 0x1023c01a */
  push32(0x10238c9au); f_1023c01a();
  /* 10238c9a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10238c9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10238ca0 pop esi */
  ESI = (pop32());
  /* 10238ca1 ret  */
  ESPCHK(0x10238c3du, _esp0);
  ESP += 4; return;
}

/* FUN_10008ca2 @ 0x10238ca2 (115 bytes, 41 insns) */
void f_10238ca2(void) {
  FTRACE(0x10238ca2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238ca2 push esi */
  push32((uint32_t)(ESI));
  /* 10238ca3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10238ca7 push edi */
  push32((uint32_t)(EDI));
  /* 10238ca8 push esi */
  push32((uint32_t)(ESI));
  /* 10238ca9 call 0x1023c0a2 */
  push32(0x10238caeu); f_1023c0a2();
  /* 10238cae cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238cb1 pop ecx */
  ECX = (pop32());
  /* 10238cb2 jne 0x10238cc1 */
  if (!C.zf) goto L_10238cc1;
  /* 10238cb4 call 0x1023c011 */
  push32(0x10238cb9u); f_1023c011();
  /* 10238cb9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10238cbf jmp 0x10238cee */
  goto L_10238cee;
L_10238cc1:;
  /* 10238cc1 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10238cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10238cc7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10238ccb push eax */
  push32((uint32_t)(EAX));
  /* 10238ccc call dword ptr [0x1023e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e000))), 0x10238cd2u);
  /* 10238cd2 mov edi, eax */
  EDI = (EAX);
  /* 10238cd4 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238cd7 jne 0x10238ce1 */
  if (!C.zf) goto L_10238ce1;
  /* 10238cd9 call dword ptr [0x1023e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e03c))), 0x10238cdfu);
  /* 10238cdf jmp 0x10238ce3 */
  goto L_10238ce3;
L_10238ce1:;
  /* 10238ce1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10238ce3:;
  /* 10238ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238ce5 je 0x10238cf3 */
  if (C.zf) goto L_10238cf3;
  /* 10238ce7 push eax */
  push32((uint32_t)(EAX));
  /* 10238ce8 call 0x1023bf9e */
  push32(0x10238cedu); f_1023bf9e();
  /* 10238ced pop ecx */
  ECX = (pop32());
L_10238cee:;
  /* 10238cee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10238cf1 jmp 0x10238d12 */
  goto L_10238d12;
L_10238cf3:;
  /* 10238cf3 mov ecx, esi */
  ECX = (ESI);
  /* 10238cf5 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10238cf8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10238cfb mov eax, esi */
  EAX = (ESI);
  /* 10238cfd mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 10238d04 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10238d07 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10238d0c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10238d10 mov eax, edi */
  EAX = (EDI);
L_10238d12:;
  /* 10238d12 pop edi */
  EDI = (pop32());
  /* 10238d13 pop esi */
  ESI = (pop32());
  /* 10238d14 ret  */
  ESPCHK(0x10238ca2u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d15 @ 0x10238d15 (101 bytes, 34 insns) */
void f_10238d15(void) {
  FTRACE(0x10238d15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238d15 push esi */
  push32((uint32_t)(ESI));
  /* 10238d16 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10238d1a cmp esi, dword ptr [0x10247ce0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238d20 jae 0x10238d62 */
  if (!C.cf) goto L_10238d62;
  /* 10238d22 mov ecx, esi */
  ECX = (ESI);
  /* 10238d24 mov eax, esi */
  EAX = (ESI);
  /* 10238d26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10238d29 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10238d2c mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 10238d33 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10238d36 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10238d3b je 0x10238d62 */
  if (C.zf) goto L_10238d62;
  /* 10238d3d push edi */
  push32((uint32_t)(EDI));
  /* 10238d3e push esi */
  push32((uint32_t)(ESI));
  /* 10238d3f call 0x1023c0e4 */
  push32(0x10238d44u); f_1023c0e4();
  /* 10238d44 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10238d48 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10238d4c push esi */
  push32((uint32_t)(ESI));
  /* 10238d4d call 0x10238d7a */
  push32(0x10238d52u); f_10238d7a();
  /* 10238d52 push esi */
  push32((uint32_t)(ESI));
  /* 10238d53 mov edi, eax */
  EDI = (EAX);
  /* 10238d55 call 0x1023c143 */
  push32(0x10238d5au); f_1023c143();
  /* 10238d5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10238d5d mov eax, edi */
  EAX = (EDI);
  /* 10238d5f pop edi */
  EDI = (pop32());
  /* 10238d60 pop esi */
  ESI = (pop32());
  /* 10238d61 ret  */
  ESPCHK(0x10238d15u, _esp0);
  ESP += 4; return;
L_10238d62:;
  /* 10238d62 call 0x1023c011 */
  push32(0x10238d67u); f_1023c011();
  /* 10238d67 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10238d6d call 0x1023c01a */
  push32(0x10238d72u); f_1023c01a();
  /* 10238d72 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10238d75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10238d78 pop esi */
  ESI = (pop32());
  /* 10238d79 ret  */
  ESPCHK(0x10238d15u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d7a @ 0x10238d7a (395 bytes, 135 insns) */
void f_10238d7a(void) {
  FTRACE(0x10238d7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238d7a push ebp */
  push32((uint32_t)(EBP));
  /* 10238d7b mov ebp, esp */
  EBP = (ESP);
  /* 10238d7d sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238d83 push ebx */
  push32((uint32_t)(EBX));
  /* 10238d84 push esi */
  push32((uint32_t)(ESI));
  /* 10238d85 push edi */
  push32((uint32_t)(EDI));
  /* 10238d86 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10238d88 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238d8b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10238d8e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10238d91 jne 0x10238d9a */
  if (!C.zf) goto L_10238d9a;
L_10238d93:;
  /* 10238d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10238d95 jmp 0x10238f00 */
  goto L_10238f00;
L_10238d9a:;
  /* 10238d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10238d9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10238da0 lea ebx, [eax*4 + 0x10247be0] */
  EBX = ((uint32_t)(EAX*4 + 0x10247be0));
  /* 10238da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10238daa and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10238dad lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10238db0 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10238db2 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10238db5 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10238dba je 0x10238dca */
  if (C.zf) goto L_10238dca;
  /* 10238dbc push 2 */
  push32((uint32_t)(0x2u));
  /* 10238dbe push edi */
  push32((uint32_t)(EDI));
  /* 10238dbf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10238dc2 call 0x10238ca2 */
  push32(0x10238dc7u); f_10238ca2();
  /* 10238dc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10238dca:;
  /* 10238dca mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10238dcc add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10238dce test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10238dd2 je 0x10238e99 */
  if (C.zf) goto L_10238e99;
  /* 10238dd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10238ddb cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10238de1 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10238de4 jbe 0x10238ed4 */
  if ((C.cf||C.zf)) goto L_10238ed4;
L_10238dea:;
  /* 10238dea lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10238df0:;
  /* 10238df0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10238df3 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238df6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238df9 jae 0x10238e24 */
  if (!C.cf) goto L_10238e24;
  /* 10238dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10238dfe inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10238e01 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10238e03 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238e06 jne 0x10238e0f */
  if (!C.zf) goto L_10238e0f;
  /* 10238e08 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10238e0b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10238e0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10238e0f:;
  /* 10238e0f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10238e11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10238e12 mov ecx, eax */
  ECX = (EAX);
  /* 10238e14 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10238e1a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238e1c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238e22 jl 0x10238df0 */
  if ((C.sf!=C.of)) goto L_10238df0;
L_10238e24:;
  /* 10238e24 mov edi, eax */
  EDI = (EAX);
  /* 10238e26 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10238e2c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238e2e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10238e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10238e33 push eax */
  push32((uint32_t)(EAX));
  /* 10238e34 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10238e3a push edi */
  push32((uint32_t)(EDI));
  /* 10238e3b push eax */
  push32((uint32_t)(EAX));
  /* 10238e3c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10238e3e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10238e41 call dword ptr [0x1023e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e084))), 0x10238e47u);
  /* 10238e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238e49 je 0x10238e8e */
  if (C.zf) goto L_10238e8e;
  /* 10238e4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10238e4e add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10238e51 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238e53 jl 0x10238e60 */
  if ((C.sf!=C.of)) goto L_10238e60;
  /* 10238e55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10238e58 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10238e5b cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238e5e jb 0x10238dea */
  if (C.cf) goto L_10238dea;
L_10238e60:;
  /* 10238e60 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10238e62:;
  /* 10238e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10238e65 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238e67 jne 0x10238efd */
  if (!C.zf) goto L_10238efd;
  /* 10238e6d cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238e70 je 0x10238ed4 */
  if (C.zf) goto L_10238ed4;
  /* 10238e72 push 5 */
  push32((uint32_t)(0x5u));
  /* 10238e74 pop esi */
  ESI = (pop32());
  /* 10238e75 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238e78 jne 0x10238ec6 */
  if (!C.zf) goto L_10238ec6;
  /* 10238e7a call 0x1023c011 */
  push32(0x10238e7fu); f_1023c011();
  /* 10238e7f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10238e85 call 0x1023c01a */
  push32(0x10238e8au); f_1023c01a();
  /* 10238e8a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10238e8c jmp 0x10238ecf */
  goto L_10238ecf;
L_10238e8e:;
  /* 10238e8e call dword ptr [0x1023e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e03c))), 0x10238e94u);
  /* 10238e94 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10238e97 jmp 0x10238e60 */
  goto L_10238e60;
L_10238e99:;
  /* 10238e99 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10238e9c push edi */
  push32((uint32_t)(EDI));
  /* 10238e9d push ecx */
  push32((uint32_t)(ECX));
  /* 10238e9e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10238ea1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10238ea4 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10238ea6 call dword ptr [0x1023e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e084))), 0x10238eacu);
  /* 10238eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238eae je 0x10238ebb */
  if (C.zf) goto L_10238ebb;
  /* 10238eb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10238eb3 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10238eb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10238eb9 jmp 0x10238e62 */
  goto L_10238e62;
L_10238ebb:;
  /* 10238ebb call dword ptr [0x1023e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e03c))), 0x10238ec1u);
  /* 10238ec1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10238ec4 jmp 0x10238e62 */
  goto L_10238e62;
L_10238ec6:;
  /* 10238ec6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10238ec9 call 0x1023bf9e */
  push32(0x10238eceu); f_1023bf9e();
  /* 10238ece pop ecx */
  ECX = (pop32());
L_10238ecf:;
  /* 10238ecf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10238ed2 jmp 0x10238f00 */
  goto L_10238f00;
L_10238ed4:;
  /* 10238ed4 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10238ed6 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10238edb je 0x10238ee9 */
  if (C.zf) goto L_10238ee9;
  /* 10238edd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10238ee0 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10238ee3 je 0x10238d93 */
  if (C.zf) goto L_10238d93;
L_10238ee9:;
  /* 10238ee9 call 0x1023c011 */
  push32(0x10238eeeu); f_1023c011();
  /* 10238eee mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10238ef4 call 0x1023c01a */
  push32(0x10238ef9u); f_1023c01a();
  /* 10238ef9 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10238efb jmp 0x10238ecf */
  goto L_10238ecf;
L_10238efd:;
  /* 10238efd sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10238f00:;
  /* 10238f00 pop edi */
  EDI = (pop32());
  /* 10238f01 pop esi */
  ESI = (pop32());
  /* 10238f02 pop ebx */
  EBX = (pop32());
  /* 10238f03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10238f04 ret  */
  ESPCHK(0x10238d7au, _esp0);
  ESP += 4; return;
}

/* FUN_10008f05 @ 0x10238f05 (68 bytes, 19 insns) */
void f_10238f05(void) {
  FTRACE(0x10238f05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238f05 inc dword ptr [0x10246748] */
  { uint32_t _r=(r32((uint32_t)(0x10246748)))+1; w32((uint32_t)(0x10246748), (_r)); fl_inc(_r,32); }
  /* 10238f0b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10238f10 call 0x1023a34f */
  push32(0x10238f15u); f_1023a34f();
  /* 10238f15 pop ecx */
  ECX = (pop32());
  /* 10238f16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10238f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10238f1c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10238f1f je 0x10238f2e */
  if (C.zf) goto L_10238f2e;
  /* 10238f21 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10238f25 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10238f2c jmp 0x10238f3f */
  goto L_10238f3f;
L_10238f2e:;
  /* 10238f2e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10238f32 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10238f35 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10238f38 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10238f3f:;
  /* 10238f3f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10238f42 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10238f46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10238f48 ret  */
  ESPCHK(0x10238f05u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f49 @ 0x10238f49 (41 bytes, 13 insns) */
void f_10238f49(void) {
  FTRACE(0x10238f49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10238f49 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10238f4d cmp eax, dword ptr [0x10247ce0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10238f53 jb 0x10238f58 */
  if (C.cf) goto L_10238f58;
  /* 10238f55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10238f57 ret  */
  ESPCHK(0x10238f49u, _esp0);
  ESP += 4; return;
L_10238f58:;
  /* 10238f58 mov ecx, eax */
  ECX = (EAX);
  /* 10238f5a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10238f5d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10238f60 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10238f63 mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 10238f6a mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10238f6e and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10238f71 ret  */
  ESPCHK(0x10238f49u, _esp0);
  ESP += 4; return;
}

/* FUN_1000902e @ 0x1023902e (47 bytes, 17 insns) */
void f_1023902e(void) {
  FTRACE(0x1023902eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023902e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239032 mov ecx, 0x102406e8 */
  ECX = (0x102406e8u);
  /* 10239037 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239039 jb 0x10239052 */
  if (C.cf) goto L_10239052;
  /* 1023903b cmp eax, 0x10240948 */
  { uint32_t _a=(EAX),_b=(0x10240948u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239040 ja 0x10239052 */
  if ((!C.cf&&!C.zf)) goto L_10239052;
  /* 10239042 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239044 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10239047 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023904a push eax */
  push32((uint32_t)(EAX));
  /* 1023904b call 0x1023a0b3 */
  push32(0x10239050u); f_1023a0b3();
  /* 10239050 pop ecx */
  ECX = (pop32());
  /* 10239051 ret  */
  ESPCHK(0x1023902eu, _esp0);
  ESP += 4; return;
L_10239052:;
  /* 10239052 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239055 push eax */
  push32((uint32_t)(EAX));
  /* 10239056 call dword ptr [0x1023e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e00c))), 0x1023905cu);
  /* 1023905c ret  */
  ESPCHK(0x1023902eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000905d @ 0x1023905d (35 bytes, 13 insns) */
void f_1023905d(void) {
  FTRACE(0x1023905du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023905d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239061 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239064 jge 0x10239071 */
  if ((C.sf==C.of)) goto L_10239071;
  /* 10239066 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239069 push eax */
  push32((uint32_t)(EAX));
  /* 1023906a call 0x1023a0b3 */
  push32(0x1023906fu); f_1023a0b3();
  /* 1023906f pop ecx */
  ECX = (pop32());
  /* 10239070 ret  */
  ESPCHK(0x1023905du, _esp0);
  ESP += 4; return;
L_10239071:;
  /* 10239071 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239075 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239078 push eax */
  push32((uint32_t)(EAX));
  /* 10239079 call dword ptr [0x1023e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e00c))), 0x1023907fu);
  /* 1023907f ret  */
  ESPCHK(0x1023905du, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x10239080 (47 bytes, 17 insns) */
void f_10239080(void) {
  FTRACE(0x10239080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239080 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239084 mov ecx, 0x102406e8 */
  ECX = (0x102406e8u);
  /* 10239089 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023908b jb 0x102390a4 */
  if (C.cf) goto L_102390a4;
  /* 1023908d cmp eax, 0x10240948 */
  { uint32_t _a=(EAX),_b=(0x10240948u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239092 ja 0x102390a4 */
  if ((!C.cf&&!C.zf)) goto L_102390a4;
  /* 10239094 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239096 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10239099 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023909c push eax */
  push32((uint32_t)(EAX));
  /* 1023909d call 0x1023a114 */
  push32(0x102390a2u); f_1023a114();
  /* 102390a2 pop ecx */
  ECX = (pop32());
  /* 102390a3 ret  */
  ESPCHK(0x10239080u, _esp0);
  ESP += 4; return;
L_102390a4:;
  /* 102390a4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102390a7 push eax */
  push32((uint32_t)(EAX));
  /* 102390a8 call dword ptr [0x1023e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e008))), 0x102390aeu);
  /* 102390ae ret  */
  ESPCHK(0x10239080u, _esp0);
  ESP += 4; return;
}

/* FUN_100090af @ 0x102390af (35 bytes, 13 insns) */
void f_102390af(void) {
  FTRACE(0x102390afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102390af mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102390b3 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102390b6 jge 0x102390c3 */
  if ((C.sf==C.of)) goto L_102390c3;
  /* 102390b8 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102390bb push eax */
  push32((uint32_t)(EAX));
  /* 102390bc call 0x1023a114 */
  push32(0x102390c1u); f_1023a114();
  /* 102390c1 pop ecx */
  ECX = (pop32());
  /* 102390c2 ret  */
  ESPCHK(0x102390afu, _esp0);
  ESP += 4; return;
L_102390c3:;
  /* 102390c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102390c7 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102390ca push eax */
  push32((uint32_t)(EAX));
  /* 102390cb call dword ptr [0x1023e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e008))), 0x102390d1u);
  /* 102390d1 ret  */
  ESPCHK(0x102390afu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102390e0 (123 bytes, 44 insns) */
void f_102390e0(void) {
  FTRACE(0x102390e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102390e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102390e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102390ea je 0x10239100 */
  if (C.zf) goto L_10239100;
L_102390ec:;
  /* 102390ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102390ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102390ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102390f1 je 0x10239133 */
  if (C.zf) goto L_10239133;
  /* 102390f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102390f9 jne 0x102390ec */
  if (!C.zf) goto L_102390ec;
  /* 102390fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10239100:;
  /* 10239100 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10239102 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10239107 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239109 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023910c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1023910e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239111 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10239116 je 0x10239100 */
  if (C.zf) goto L_10239100;
  /* 10239118 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1023911b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023911d je 0x10239151 */
  if (C.zf) goto L_10239151;
  /* 1023911f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10239121 je 0x10239147 */
  if (C.zf) goto L_10239147;
  /* 10239123 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10239128 je 0x1023913d */
  if (C.zf) goto L_1023913d;
  /* 1023912a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1023912f je 0x10239133 */
  if (C.zf) goto L_10239133;
  /* 10239131 jmp 0x10239100 */
  goto L_10239100;
L_10239133:;
  /* 10239133 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10239136 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023913a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023913c ret  */
  ESPCHK(0x102390e0u, _esp0);
  ESP += 4; return;
L_1023913d:;
  /* 1023913d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10239140 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239144 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239146 ret  */
  ESPCHK(0x102390e0u, _esp0);
  ESP += 4; return;
L_10239147:;
  /* 10239147 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1023914a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023914e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239150 ret  */
  ESPCHK(0x102390e0u, _esp0);
  ESP += 4; return;
L_10239151:;
  /* 10239151 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10239154 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239158 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023915a ret  */
  ESPCHK(0x102390e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000915b @ 0x1023915b (89 bytes, 39 insns) */
void f_1023915b(void) {
  FTRACE(0x1023915bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023915b push ebp */
  push32((uint32_t)(EBP));
  /* 1023915c mov ebp, esp */
  EBP = (ESP);
  /* 1023915e push ebx */
  push32((uint32_t)(EBX));
  /* 1023915f push esi */
  push32((uint32_t)(ESI));
  /* 10239160 mov esi, 0x10246954 */
  ESI = (0x10246954u);
  /* 10239165 push edi */
  push32((uint32_t)(EDI));
  /* 10239166 push esi */
  push32((uint32_t)(ESI));
  /* 10239167 call dword ptr [0x1023e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e090))), 0x1023916du);
  /* 1023916d mov edi, dword ptr [0x1023e08c] */
  EDI = (r32((uint32_t)(0x1023e08c)));
  /* 10239173 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10239175 cmp dword ptr [0x10246950], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10246950))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023917b je 0x1023918b */
  if (C.zf) goto L_1023918b;
  /* 1023917d push esi */
  push32((uint32_t)(ESI));
  /* 1023917e call edi */
  call_ind((uint32_t)(EDI), 0x10239180u);
  /* 10239180 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10239182 call 0x1023a0b3 */
  push32(0x10239187u); f_1023a0b3();
  /* 10239187 pop ecx */
  ECX = (pop32());
  /* 10239188 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023918a pop ebx */
  EBX = (pop32());
L_1023918b:;
  /* 1023918b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023918e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10239191 call 0x102391b4 */
  push32(0x10239196u); f_102391b4();
  /* 10239196 pop ecx */
  ECX = (pop32());
  /* 10239197 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1023919a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023919c pop ecx */
  ECX = (pop32());
  /* 1023919d je 0x102391a9 */
  if (C.zf) goto L_102391a9;
  /* 1023919f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102391a1 call 0x1023a114 */
  push32(0x102391a6u); f_1023a114();
  /* 102391a6 pop ecx */
  ECX = (pop32());
  /* 102391a7 jmp 0x102391ac */
  goto L_102391ac;
L_102391a9:;
  /* 102391a9 push esi */
  push32((uint32_t)(ESI));
  /* 102391aa call edi */
  call_ind((uint32_t)(EDI), 0x102391acu);
L_102391ac:;
  /* 102391ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102391af pop edi */
  EDI = (pop32());
  /* 102391b0 pop esi */
  ESI = (pop32());
  /* 102391b1 pop ebx */
  EBX = (pop32());
  /* 102391b2 pop ebp */
  EBP = (pop32());
  /* 102391b3 ret  */
  ESPCHK(0x1023915bu, _esp0);
  ESP += 4; return;
}

/* FUN_100091b4 @ 0x102391b4 (105 bytes, 38 insns) */
void f_102391b4(void) {
  FTRACE(0x102391b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102391b4 push ebp */
  push32((uint32_t)(EBP));
  /* 102391b5 mov ebp, esp */
  EBP = (ESP);
  /* 102391b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102391ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102391bc jne 0x102391c0 */
  if (!C.zf) goto L_102391c0;
  /* 102391be pop ebp */
  EBP = (pop32());
  /* 102391bf ret  */
  ESPCHK(0x102391b4u, _esp0);
  ESP += 4; return;
L_102391c0:;
  /* 102391c0 cmp dword ptr [0x102467d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102467d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102391c7 jne 0x102391db */
  if (!C.zf) goto L_102391db;
  /* 102391c9 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 102391cd cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102391d2 ja 0x1023920d */
  if ((!C.cf&&!C.zf)) goto L_1023920d;
  /* 102391d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102391d6 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 102391d8 pop eax */
  EAX = (pop32());
  /* 102391d9 pop ebp */
  EBP = (pop32());
  /* 102391da ret  */
  ESPCHK(0x102391b4u, _esp0);
  ESP += 4; return;
L_102391db:;
  /* 102391db lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 102391de and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 102391e2 push ecx */
  push32((uint32_t)(ECX));
  /* 102391e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102391e5 push dword ptr [0x10240b80] */
  push32((uint32_t)(r32((uint32_t)(0x10240b80))));
  /* 102391eb push eax */
  push32((uint32_t)(EAX));
  /* 102391ec lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 102391ef push 1 */
  push32((uint32_t)(0x1u));
  /* 102391f1 push eax */
  push32((uint32_t)(EAX));
  /* 102391f2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102391f7 push dword ptr [0x102467e8] */
  push32((uint32_t)(r32((uint32_t)(0x102467e8))));
  /* 102391fd call dword ptr [0x1023e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e060))), 0x10239203u);
  /* 10239203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10239205 je 0x1023920d */
  if (C.zf) goto L_1023920d;
  /* 10239207 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023920b je 0x1023921b */
  if (C.zf) goto L_1023921b;
L_1023920d:;
  /* 1023920d call 0x1023c011 */
  push32(0x10239212u); f_1023c011();
  /* 10239212 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10239218 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1023921b:;
  /* 1023921b pop ebp */
  EBP = (pop32());
  /* 1023921c ret  */
  ESPCHK(0x102391b4u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10239220 (104 bytes, 43 insns) */
void f_10239220(void) {
  FTRACE(0x10239220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239220 push ebx */
  push32((uint32_t)(EBX));
  /* 10239221 push esi */
  push32((uint32_t)(ESI));
  /* 10239222 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10239226 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239228 jne 0x10239242 */
  if (!C.zf) goto L_10239242;
  /* 1023922a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1023922e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10239232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10239234 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10239236 mov ebx, eax */
  EBX = (EAX);
  /* 10239238 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1023923c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1023923e mov edx, ebx */
  EDX = (EBX);
  /* 10239240 jmp 0x10239283 */
  goto L_10239283;
L_10239242:;
  /* 10239242 mov ecx, eax */
  ECX = (EAX);
  /* 10239244 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10239248 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023924c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10239250:;
  /* 10239250 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10239252 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10239254 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10239256 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10239258 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023925a jne 0x10239250 */
  if (!C.zf) goto L_10239250;
  /* 1023925c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1023925e mov esi, eax */
  ESI = (EAX);
  /* 10239260 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10239264 mov ecx, eax */
  ECX = (EAX);
  /* 10239266 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1023926a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1023926c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023926e jb 0x1023927e */
  if (C.cf) goto L_1023927e;
  /* 10239270 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239274 ja 0x1023927e */
  if ((!C.cf&&!C.zf)) goto L_1023927e;
  /* 10239276 jb 0x1023927f */
  if (C.cf) goto L_1023927f;
  /* 10239278 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023927c jbe 0x1023927f */
  if ((C.cf||C.zf)) goto L_1023927f;
L_1023927e:;
  /* 1023927e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1023927f:;
  /* 1023927f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10239281 mov eax, esi */
  EAX = (ESI);
L_10239283:;
  /* 10239283 pop esi */
  ESI = (pop32());
  /* 10239284 pop ebx */
  EBX = (pop32());
  /* 10239285 ret 0x10 */
  ESPCHK(0x10239220u, _esp0);
  ESP += 20; return;
}

