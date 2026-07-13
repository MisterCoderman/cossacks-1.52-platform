#include "recomp.h"

/* FUN_10001000 @ 0x10011000 (5622 bytes, 1464 insns) */
void f_10011000(void) {
  FTRACE(0x10011000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10011000 push esi */
  push32((uint32_t)(ESI));
  /* 10011001 push edi */
  push32((uint32_t)(EDI));
  /* 10011002 call 0x10012740 */
  push32(0x10011007u); f_10012740();
  /* 10011007 mov edx, eax */
  EDX = (EAX);
  /* 10011009 mov edi, 0x1001fef0 */
  EDI = (0x1001fef0u);
  /* 1001100e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10011011 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10011013 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10011016 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10011018 not ecx */
  ECX = (~(ECX));
  /* 1001101a sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001101c mov eax, ecx */
  EAX = (ECX);
  /* 1001101e mov esi, edi */
  ESI = (EDI);
  /* 10011020 mov edi, 0x10025f28 */
  EDI = (0x10025f28u);
  /* 10011025 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10011028 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001102a mov ecx, eax */
  ECX = (EAX);
  /* 1001102c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001102e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10011031 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10011033 mov ecx, edx */
  ECX = (EDX);
  /* 10011035 mov edi, 0x1001fee0 */
  EDI = (0x1001fee0u);
  /* 1001103a and ecx, 6 */
  { uint32_t _r=(ECX)&(0x6u); ECX = (_r); fl_logic(_r,32); }
  /* 1001103d and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10011040 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10011043 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10011046 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10011048 not ecx */
  ECX = (~(ECX));
  /* 1001104a sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001104c mov eax, ecx */
  EAX = (ECX);
  /* 1001104e mov esi, edi */
  ESI = (EDI);
  /* 10011050 mov edi, 0x10026218 */
  EDI = (0x10026218u);
  /* 10011055 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10011058 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001105a mov ecx, eax */
  ECX = (EAX);
  /* 1001105c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1001105f cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10011062 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10011064 mov edi, 0x1001fed0 */
  EDI = (0x1001fed0u);
  /* 10011069 jne 0x10011088 */
  if (!C.zf) goto L_10011088;
  /* 1001106b or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1001106e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10011070 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10011072 not ecx */
  ECX = (~(ECX));
  /* 10011074 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10011076 mov edx, ecx */
  EDX = (ECX);
  /* 10011078 mov esi, edi */
  ESI = (EDI);
  /* 1001107a mov edi, 0x10026048 */
  EDI = (0x10026048u);
  /* 1001107f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10011082 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10011084 mov ecx, edx */
  ECX = (EDX);
  /* 10011086 jmp 0x100110a3 */
  goto L_100110a3;
L_10011088:;
  /* 10011088 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1001108b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001108d repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1001108f not ecx */
  ECX = (~(ECX));
  /* 10011091 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10011093 mov eax, ecx */
  EAX = (ECX);
  /* 10011095 mov esi, edi */
  ESI = (EDI);
  /* 10011097 mov edi, 0x10026048 */
  EDI = (0x10026048u);
  /* 1001109c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001109f rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100110a1 mov ecx, eax */
  ECX = (EAX);
L_100110a3:;
  /* 100110a3 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 100110a8 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100110ab rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100110ad pop edi */
  EDI = (pop32());
  /* 100110ae pop esi */
  ESI = (pop32());
  /* 100110af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100110b1 je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 100110b7 push 0x1001fec4 */
  push32((uint32_t)(0x1001fec4u));
  /* 100110bc push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 100110c1 call eax */
  call_ind((uint32_t)(EAX), 0x100110c3u);
  /* 100110c3 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 100110c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100110cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100110cd je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 100110d3 push 0x1001feb8 */
  push32((uint32_t)(0x1001feb8u));
  /* 100110d8 push 0x10025fd0 */
  push32((uint32_t)(0x10025fd0u));
  /* 100110dd call eax */
  call_ind((uint32_t)(EAX), 0x100110dfu);
  /* 100110df mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 100110e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100110e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100110e9 je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 100110ef push 0x1001fea4 */
  push32((uint32_t)(0x1001fea4u));
  /* 100110f4 push 0x100260f8 */
  push32((uint32_t)(0x100260f8u));
  /* 100110f9 call eax */
  call_ind((uint32_t)(EAX), 0x100110fbu);
  /* 100110fb mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011105 je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 1001110b push 0x1001fe98 */
  push32((uint32_t)(0x1001fe98u));
  /* 10011110 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 10011115 call eax */
  call_ind((uint32_t)(EAX), 0x10011117u);
  /* 10011117 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 1001111c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001111f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011121 je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 10011127 push 0x1001fe88 */
  push32((uint32_t)(0x1001fe88u));
  /* 1001112c push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10011131 call eax */
  call_ind((uint32_t)(EAX), 0x10011133u);
  /* 10011133 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001113b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001113d je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 1001113f push 0x1001fe74 */
  push32((uint32_t)(0x1001fe74u));
  /* 10011144 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10011149 call eax */
  call_ind((uint32_t)(EAX), 0x1001114bu);
  /* 1001114b mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011155 je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 10011157 push 0x1001fe68 */
  push32((uint32_t)(0x1001fe68u));
  /* 1001115c push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10011161 call eax */
  call_ind((uint32_t)(EAX), 0x10011163u);
  /* 10011163 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001116b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001116d je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 1001116f push 0x1001fe5c */
  push32((uint32_t)(0x1001fe5cu));
  /* 10011174 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10011179 call eax */
  call_ind((uint32_t)(EAX), 0x1001117bu);
  /* 1001117b mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011183 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011185 je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 10011187 push 0x1001fe50 */
  push32((uint32_t)(0x1001fe50u));
  /* 1001118c push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10011191 call eax */
  call_ind((uint32_t)(EAX), 0x10011193u);
  /* 10011193 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001119b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001119d je 0x100111ae */
  if (C.zf) goto L_100111ae;
  /* 1001119f push 0x1001fe3c */
  push32((uint32_t)(0x1001fe3cu));
  /* 100111a4 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100111a9 call eax */
  call_ind((uint32_t)(EAX), 0x100111abu);
  /* 100111ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100111ae:;
  /* 100111ae push 0x1001fe28 */
  push32((uint32_t)(0x1001fe28u));
  /* 100111b3 call dword ptr [0x10026560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026560))), 0x100111b9u);
  /* 100111b9 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100111bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100111c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100111c4 je 0x100111f4 */
  if (C.zf) goto L_100111f4;
  /* 100111c6 push 0x1001fe28 */
  push32((uint32_t)(0x1001fe28u));
  /* 100111cb push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 100111d0 call ecx */
  call_ind((uint32_t)(ECX), 0x100111d2u);
  /* 100111d2 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100111d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100111db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100111dd je 0x100111f4 */
  if (C.zf) goto L_100111f4;
  /* 100111df push 0x1001fe1c */
  push32((uint32_t)(0x1001fe1cu));
  /* 100111e4 push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 100111e9 call ecx */
  call_ind((uint32_t)(ECX), 0x100111ebu);
  /* 100111eb mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100111f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100111f4:;
  /* 100111f4 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100111f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100111fb je 0x10011217 */
  if (C.zf) goto L_10011217;
  /* 100111fd push 0x1001fe14 */
  push32((uint32_t)(0x1001fe14u));
  /* 10011202 push 0x10026088 */
  push32((uint32_t)(0x10026088u));
  /* 10011207 call eax */
  call_ind((uint32_t)(EAX), 0x10011209u);
  /* 10011209 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 1001120f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011217:;
  /* 10011217 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10011219 je 0x10011235 */
  if (C.zf) goto L_10011235;
  /* 1001121b push 0x1001fe04 */
  push32((uint32_t)(0x1001fe04u));
  /* 10011220 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10011225 call ecx */
  call_ind((uint32_t)(ECX), 0x10011227u);
  /* 10011227 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 1001122d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011235:;
  /* 10011235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011237 je 0x1001128b */
  if (C.zf) goto L_1001128b;
  /* 10011239 push 0x1001fdfc */
  push32((uint32_t)(0x1001fdfcu));
  /* 1001123e push 0x10026028 */
  push32((uint32_t)(0x10026028u));
  /* 10011243 call eax */
  call_ind((uint32_t)(EAX), 0x10011245u);
  /* 10011245 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001124d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001124f je 0x10011285 */
  if (C.zf) goto L_10011285;
  /* 10011251 push 0x1001fdf4 */
  push32((uint32_t)(0x1001fdf4u));
  /* 10011256 push 0x10026080 */
  push32((uint32_t)(0x10026080u));
  /* 1001125b call eax */
  call_ind((uint32_t)(EAX), 0x1001125du);
  /* 1001125d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011267 je 0x10011285 */
  if (C.zf) goto L_10011285;
  /* 10011269 push 0x1001fdec */
  push32((uint32_t)(0x1001fdecu));
  /* 1001126e push 0x10026090 */
  push32((uint32_t)(0x10026090u));
  /* 10011273 call eax */
  call_ind((uint32_t)(EAX), 0x10011275u);
  /* 10011275 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 1001127b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011283 jmp 0x1001128b */
  goto L_1001128b;
L_10011285:;
  /* 10011285 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
L_1001128b:;
  /* 1001128b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001128d je 0x100112f4 */
  if (C.zf) goto L_100112f4;
  /* 1001128f push 0x1001fdd8 */
  push32((uint32_t)(0x1001fdd8u));
  /* 10011294 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10011299 call ecx */
  call_ind((uint32_t)(ECX), 0x1001129bu);
  /* 1001129b mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100112a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100112a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100112a6 je 0x100112ef */
  if (C.zf) goto L_100112ef;
  /* 100112a8 push 0x1001fef0 */
  push32((uint32_t)(0x1001fef0u));
  /* 100112ad push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 100112b2 call ecx */
  call_ind((uint32_t)(ECX), 0x100112b4u);
  /* 100112b4 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100112ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100112bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100112bf je 0x100112ef */
  if (C.zf) goto L_100112ef;
  /* 100112c1 push 0x1001fdc4 */
  push32((uint32_t)(0x1001fdc4u));
  /* 100112c6 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 100112cb call ecx */
  call_ind((uint32_t)(ECX), 0x100112cdu);
  /* 100112cd mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100112d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100112d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100112d8 je 0x100112ef */
  if (C.zf) goto L_100112ef;
  /* 100112da push 0x1001fdb0 */
  push32((uint32_t)(0x1001fdb0u));
  /* 100112df push 0x10023700 */
  push32((uint32_t)(0x10023700u));
  /* 100112e4 call ecx */
  call_ind((uint32_t)(ECX), 0x100112e6u);
  /* 100112e6 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100112ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100112ef:;
  /* 100112ef mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
L_100112f4:;
  /* 100112f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100112f6 je 0x10011332 */
  if (C.zf) goto L_10011332;
  /* 100112f8 push 0x1001fd98 */
  push32((uint32_t)(0x1001fd98u));
  /* 100112fd push 0x10026260 */
  push32((uint32_t)(0x10026260u));
  /* 10011302 call eax */
  call_ind((uint32_t)(EAX), 0x10011304u);
  /* 10011304 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001130c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001130e je 0x1001132c */
  if (C.zf) goto L_1001132c;
  /* 10011310 push 0x1001fd80 */
  push32((uint32_t)(0x1001fd80u));
  /* 10011315 push 0x10025fc8 */
  push32((uint32_t)(0x10025fc8u));
  /* 1001131a call eax */
  call_ind((uint32_t)(EAX), 0x1001131cu);
  /* 1001131c mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011322 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001132a jmp 0x10011332 */
  goto L_10011332;
L_1001132c:;
  /* 1001132c mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
L_10011332:;
  /* 10011332 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10011334 je 0x10011350 */
  if (C.zf) goto L_10011350;
  /* 10011336 push 0x1001fd6c */
  push32((uint32_t)(0x1001fd6cu));
  /* 1001133b push 0x10023640 */
  push32((uint32_t)(0x10023640u));
  /* 10011340 call ecx */
  call_ind((uint32_t)(ECX), 0x10011342u);
  /* 10011342 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011348 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001134d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011350:;
  /* 10011350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011352 je 0x1001136e */
  if (C.zf) goto L_1001136e;
  /* 10011354 push 0x1001fd50 */
  push32((uint32_t)(0x1001fd50u));
  /* 10011359 push 0x100260d0 */
  push32((uint32_t)(0x100260d0u));
  /* 1001135e call eax */
  call_ind((uint32_t)(EAX), 0x10011360u);
  /* 10011360 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011366 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001136b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001136e:;
  /* 1001136e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10011370 je 0x100113be */
  if (C.zf) goto L_100113be;
  /* 10011372 push 0x1001fd38 */
  push32((uint32_t)(0x1001fd38u));
  /* 10011377 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 1001137c call ecx */
  call_ind((uint32_t)(ECX), 0x1001137eu);
  /* 1001137e mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011387 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10011389 je 0x100113b9 */
  if (C.zf) goto L_100113b9;
  /* 1001138b push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011390 push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 10011395 call ecx */
  call_ind((uint32_t)(ECX), 0x10011397u);
  /* 10011397 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 1001139d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100113a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100113a2 je 0x100113b9 */
  if (C.zf) goto L_100113b9;
  /* 100113a4 push 0x1001fd2c */
  push32((uint32_t)(0x1001fd2cu));
  /* 100113a9 push 0x10023690 */
  push32((uint32_t)(0x10023690u));
  /* 100113ae call ecx */
  call_ind((uint32_t)(ECX), 0x100113b0u);
  /* 100113b0 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 100113b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100113b9:;
  /* 100113b9 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
L_100113be:;
  /* 100113be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100113c0 je 0x10011658 */
  if (C.zf) goto L_10011658;
  /* 100113c6 push 0x1001fd18 */
  push32((uint32_t)(0x1001fd18u));
  /* 100113cb push 0x10023900 */
  push32((uint32_t)(0x10023900u));
  /* 100113d0 call eax */
  call_ind((uint32_t)(EAX), 0x100113d2u);
  /* 100113d2 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100113d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100113da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100113dc je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100113e2 push 0x1001fd04 */
  push32((uint32_t)(0x1001fd04u));
  /* 100113e7 push 0x100238f8 */
  push32((uint32_t)(0x100238f8u));
  /* 100113ec call eax */
  call_ind((uint32_t)(EAX), 0x100113eeu);
  /* 100113ee mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100113f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100113f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100113f8 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100113fe push 0x1001fcf0 */
  push32((uint32_t)(0x1001fcf0u));
  /* 10011403 push 0x100238f0 */
  push32((uint32_t)(0x100238f0u));
  /* 10011408 call eax */
  call_ind((uint32_t)(EAX), 0x1001140au);
  /* 1001140a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001140f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011414 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 1001141a push 0x1001fcdc */
  push32((uint32_t)(0x1001fcdcu));
  /* 1001141f push 0x10023938 */
  push32((uint32_t)(0x10023938u));
  /* 10011424 call eax */
  call_ind((uint32_t)(EAX), 0x10011426u);
  /* 10011426 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001142b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001142e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011430 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011436 push 0x1001fcc8 */
  push32((uint32_t)(0x1001fcc8u));
  /* 1001143b push 0x10023928 */
  push32((uint32_t)(0x10023928u));
  /* 10011440 call eax */
  call_ind((uint32_t)(EAX), 0x10011442u);
  /* 10011442 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001144a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001144c je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011452 push 0x1001fcb4 */
  push32((uint32_t)(0x1001fcb4u));
  /* 10011457 push 0x10023920 */
  push32((uint32_t)(0x10023920u));
  /* 1001145c call eax */
  call_ind((uint32_t)(EAX), 0x1001145eu);
  /* 1001145e mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011468 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 1001146e push 0x1001fca0 */
  push32((uint32_t)(0x1001fca0u));
  /* 10011473 push 0x100236d8 */
  push32((uint32_t)(0x100236d8u));
  /* 10011478 call eax */
  call_ind((uint32_t)(EAX), 0x1001147au);
  /* 1001147a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001147f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011484 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 1001148a push 0x1001fc8c */
  push32((uint32_t)(0x1001fc8cu));
  /* 1001148f push 0x100236c8 */
  push32((uint32_t)(0x100236c8u));
  /* 10011494 call eax */
  call_ind((uint32_t)(EAX), 0x10011496u);
  /* 10011496 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001149b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001149e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100114a0 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100114a6 push 0x1001fc78 */
  push32((uint32_t)(0x1001fc78u));
  /* 100114ab push 0x100238c0 */
  push32((uint32_t)(0x100238c0u));
  /* 100114b0 call eax */
  call_ind((uint32_t)(EAX), 0x100114b2u);
  /* 100114b2 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100114b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100114ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100114bc je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100114c2 push 0x1001fc64 */
  push32((uint32_t)(0x1001fc64u));
  /* 100114c7 push 0x100238b8 */
  push32((uint32_t)(0x100238b8u));
  /* 100114cc call eax */
  call_ind((uint32_t)(EAX), 0x100114ceu);
  /* 100114ce mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100114d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100114d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100114d8 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100114de push 0x1001fc50 */
  push32((uint32_t)(0x1001fc50u));
  /* 100114e3 push 0x100238b0 */
  push32((uint32_t)(0x100238b0u));
  /* 100114e8 call eax */
  call_ind((uint32_t)(EAX), 0x100114eau);
  /* 100114ea mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100114ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100114f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100114f4 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100114fa push 0x1001fc3c */
  push32((uint32_t)(0x1001fc3cu));
  /* 100114ff push 0x100238a8 */
  push32((uint32_t)(0x100238a8u));
  /* 10011504 call eax */
  call_ind((uint32_t)(EAX), 0x10011506u);
  /* 10011506 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001150b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001150e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011510 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011516 push 0x1001fd18 */
  push32((uint32_t)(0x1001fd18u));
  /* 1001151b push 0x10023900 */
  push32((uint32_t)(0x10023900u));
  /* 10011520 call eax */
  call_ind((uint32_t)(EAX), 0x10011522u);
  /* 10011522 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001152a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001152c je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011532 push 0x1001fd04 */
  push32((uint32_t)(0x1001fd04u));
  /* 10011537 push 0x100238f8 */
  push32((uint32_t)(0x100238f8u));
  /* 1001153c call eax */
  call_ind((uint32_t)(EAX), 0x1001153eu);
  /* 1001153e mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011548 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 1001154e push 0x1001fcf0 */
  push32((uint32_t)(0x1001fcf0u));
  /* 10011553 push 0x100238f0 */
  push32((uint32_t)(0x100238f0u));
  /* 10011558 call eax */
  call_ind((uint32_t)(EAX), 0x1001155au);
  /* 1001155a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001155f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011564 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 1001156a push 0x1001fcdc */
  push32((uint32_t)(0x1001fcdcu));
  /* 1001156f push 0x10023938 */
  push32((uint32_t)(0x10023938u));
  /* 10011574 call eax */
  call_ind((uint32_t)(EAX), 0x10011576u);
  /* 10011576 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001157e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011580 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011586 push 0x1001fcc8 */
  push32((uint32_t)(0x1001fcc8u));
  /* 1001158b push 0x10023928 */
  push32((uint32_t)(0x10023928u));
  /* 10011590 call eax */
  call_ind((uint32_t)(EAX), 0x10011592u);
  /* 10011592 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001159a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001159c je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100115a2 push 0x1001fcb4 */
  push32((uint32_t)(0x1001fcb4u));
  /* 100115a7 push 0x10023920 */
  push32((uint32_t)(0x10023920u));
  /* 100115ac call eax */
  call_ind((uint32_t)(EAX), 0x100115aeu);
  /* 100115ae mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100115b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100115b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100115b8 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100115be push 0x1001fca0 */
  push32((uint32_t)(0x1001fca0u));
  /* 100115c3 push 0x100236d8 */
  push32((uint32_t)(0x100236d8u));
  /* 100115c8 call eax */
  call_ind((uint32_t)(EAX), 0x100115cau);
  /* 100115ca mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100115cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100115d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100115d4 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100115d6 push 0x1001fc8c */
  push32((uint32_t)(0x1001fc8cu));
  /* 100115db push 0x100236c8 */
  push32((uint32_t)(0x100236c8u));
  /* 100115e0 call eax */
  call_ind((uint32_t)(EAX), 0x100115e2u);
  /* 100115e2 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100115e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100115ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100115ec je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 100115ee push 0x1001fc78 */
  push32((uint32_t)(0x1001fc78u));
  /* 100115f3 push 0x100238c0 */
  push32((uint32_t)(0x100238c0u));
  /* 100115f8 call eax */
  call_ind((uint32_t)(EAX), 0x100115fau);
  /* 100115fa mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100115ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011604 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011606 push 0x1001fc64 */
  push32((uint32_t)(0x1001fc64u));
  /* 1001160b push 0x100238b8 */
  push32((uint32_t)(0x100238b8u));
  /* 10011610 call eax */
  call_ind((uint32_t)(EAX), 0x10011612u);
  /* 10011612 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001161a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001161c je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 1001161e push 0x1001fc50 */
  push32((uint32_t)(0x1001fc50u));
  /* 10011623 push 0x100238b0 */
  push32((uint32_t)(0x100238b0u));
  /* 10011628 call eax */
  call_ind((uint32_t)(EAX), 0x1001162au);
  /* 1001162a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001162f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011634 je 0x10011652 */
  if (C.zf) goto L_10011652;
  /* 10011636 push 0x1001fc3c */
  push32((uint32_t)(0x1001fc3cu));
  /* 1001163b push 0x100238a8 */
  push32((uint32_t)(0x100238a8u));
  /* 10011640 call eax */
  call_ind((uint32_t)(EAX), 0x10011642u);
  /* 10011642 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011648 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001164d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011650 jmp 0x10011658 */
  goto L_10011658;
L_10011652:;
  /* 10011652 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
L_10011658:;
  /* 10011658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001165a je 0x1001168f */
  if (C.zf) goto L_1001168f;
  /* 1001165c push 0x1001fc30 */
  push32((uint32_t)(0x1001fc30u));
  /* 10011661 push 0x10026330 */
  push32((uint32_t)(0x10026330u));
  /* 10011666 call ecx */
  call_ind((uint32_t)(ECX), 0x10011668u);
  /* 10011668 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 1001166e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10011673 je 0x1001168a */
  if (C.zf) goto L_1001168a;
  /* 10011675 push 0x1001fc20 */
  push32((uint32_t)(0x1001fc20u));
  /* 1001167a push 0x10023680 */
  push32((uint32_t)(0x10023680u));
  /* 1001167f call ecx */
  call_ind((uint32_t)(ECX), 0x10011681u);
  /* 10011681 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001168a:;
  /* 1001168a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
L_1001168f:;
  /* 1001168f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011691 je 0x10011929 */
  if (C.zf) goto L_10011929;
  /* 10011697 push 0x1001fc0c */
  push32((uint32_t)(0x1001fc0cu));
  /* 1001169c push 0x10023658 */
  push32((uint32_t)(0x10023658u));
  /* 100116a1 call eax */
  call_ind((uint32_t)(EAX), 0x100116a3u);
  /* 100116a3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100116a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100116ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100116ad je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100116b3 push 0x1001fbf4 */
  push32((uint32_t)(0x1001fbf4u));
  /* 100116b8 push 0x10023650 */
  push32((uint32_t)(0x10023650u));
  /* 100116bd call eax */
  call_ind((uint32_t)(EAX), 0x100116bfu);
  /* 100116bf mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100116c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100116c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100116c9 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100116cf push 0x1001fbdc */
  push32((uint32_t)(0x1001fbdcu));
  /* 100116d4 push 0x10023648 */
  push32((uint32_t)(0x10023648u));
  /* 100116d9 call eax */
  call_ind((uint32_t)(EAX), 0x100116dbu);
  /* 100116db mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100116e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100116e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100116e5 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100116eb push 0x1001fbc4 */
  push32((uint32_t)(0x1001fbc4u));
  /* 100116f0 push 0x10026318 */
  push32((uint32_t)(0x10026318u));
  /* 100116f5 call eax */
  call_ind((uint32_t)(EAX), 0x100116f7u);
  /* 100116f7 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100116fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100116ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011701 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011707 push 0x1001fbac */
  push32((uint32_t)(0x1001fbacu));
  /* 1001170c push 0x10026310 */
  push32((uint32_t)(0x10026310u));
  /* 10011711 call eax */
  call_ind((uint32_t)(EAX), 0x10011713u);
  /* 10011713 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001171b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001171d je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011723 push 0x1001fb94 */
  push32((uint32_t)(0x1001fb94u));
  /* 10011728 push 0x10026308 */
  push32((uint32_t)(0x10026308u));
  /* 1001172d call eax */
  call_ind((uint32_t)(EAX), 0x1001172fu);
  /* 1001172f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011739 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 1001173f push 0x1001fb80 */
  push32((uint32_t)(0x1001fb80u));
  /* 10011744 push 0x10026390 */
  push32((uint32_t)(0x10026390u));
  /* 10011749 call eax */
  call_ind((uint32_t)(EAX), 0x1001174bu);
  /* 1001174b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011755 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 1001175b push 0x1001fb68 */
  push32((uint32_t)(0x1001fb68u));
  /* 10011760 push 0x10026388 */
  push32((uint32_t)(0x10026388u));
  /* 10011765 call eax */
  call_ind((uint32_t)(EAX), 0x10011767u);
  /* 10011767 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001176c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001176f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011771 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011777 push 0x1001fb50 */
  push32((uint32_t)(0x1001fb50u));
  /* 1001177c push 0x100263d8 */
  push32((uint32_t)(0x100263d8u));
  /* 10011781 call eax */
  call_ind((uint32_t)(EAX), 0x10011783u);
  /* 10011783 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001178b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001178d je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011793 push 0x1001fb38 */
  push32((uint32_t)(0x1001fb38u));
  /* 10011798 push 0x100263d0 */
  push32((uint32_t)(0x100263d0u));
  /* 1001179d call eax */
  call_ind((uint32_t)(EAX), 0x1001179fu);
  /* 1001179f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100117a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100117a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100117a9 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100117af push 0x1001fb20 */
  push32((uint32_t)(0x1001fb20u));
  /* 100117b4 push 0x100263c8 */
  push32((uint32_t)(0x100263c8u));
  /* 100117b9 call eax */
  call_ind((uint32_t)(EAX), 0x100117bbu);
  /* 100117bb mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100117c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100117c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100117c5 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100117cb push 0x1001fb08 */
  push32((uint32_t)(0x1001fb08u));
  /* 100117d0 push 0x100263c0 */
  push32((uint32_t)(0x100263c0u));
  /* 100117d5 call eax */
  call_ind((uint32_t)(EAX), 0x100117d7u);
  /* 100117d7 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100117dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100117df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100117e1 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100117e7 push 0x1001fc0c */
  push32((uint32_t)(0x1001fc0cu));
  /* 100117ec push 0x10023658 */
  push32((uint32_t)(0x10023658u));
  /* 100117f1 call eax */
  call_ind((uint32_t)(EAX), 0x100117f3u);
  /* 100117f3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100117f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100117fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100117fd je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011803 push 0x1001fbf4 */
  push32((uint32_t)(0x1001fbf4u));
  /* 10011808 push 0x10023650 */
  push32((uint32_t)(0x10023650u));
  /* 1001180d call eax */
  call_ind((uint32_t)(EAX), 0x1001180fu);
  /* 1001180f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011819 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 1001181f push 0x1001fbdc */
  push32((uint32_t)(0x1001fbdcu));
  /* 10011824 push 0x10023648 */
  push32((uint32_t)(0x10023648u));
  /* 10011829 call eax */
  call_ind((uint32_t)(EAX), 0x1001182bu);
  /* 1001182b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011835 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 1001183b push 0x1001fbc4 */
  push32((uint32_t)(0x1001fbc4u));
  /* 10011840 push 0x10026318 */
  push32((uint32_t)(0x10026318u));
  /* 10011845 call eax */
  call_ind((uint32_t)(EAX), 0x10011847u);
  /* 10011847 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001184c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001184f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011851 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011857 push 0x1001fbac */
  push32((uint32_t)(0x1001fbacu));
  /* 1001185c push 0x10026310 */
  push32((uint32_t)(0x10026310u));
  /* 10011861 call eax */
  call_ind((uint32_t)(EAX), 0x10011863u);
  /* 10011863 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001186b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001186d je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011873 push 0x1001fb94 */
  push32((uint32_t)(0x1001fb94u));
  /* 10011878 push 0x10026308 */
  push32((uint32_t)(0x10026308u));
  /* 1001187d call eax */
  call_ind((uint32_t)(EAX), 0x1001187fu);
  /* 1001187f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011889 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 1001188f push 0x1001fb80 */
  push32((uint32_t)(0x1001fb80u));
  /* 10011894 push 0x10026390 */
  push32((uint32_t)(0x10026390u));
  /* 10011899 call eax */
  call_ind((uint32_t)(EAX), 0x1001189bu);
  /* 1001189b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100118a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100118a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100118a5 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100118a7 push 0x1001fb68 */
  push32((uint32_t)(0x1001fb68u));
  /* 100118ac push 0x10026388 */
  push32((uint32_t)(0x10026388u));
  /* 100118b1 call eax */
  call_ind((uint32_t)(EAX), 0x100118b3u);
  /* 100118b3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100118b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100118bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100118bd je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100118bf push 0x1001fb50 */
  push32((uint32_t)(0x1001fb50u));
  /* 100118c4 push 0x100263d8 */
  push32((uint32_t)(0x100263d8u));
  /* 100118c9 call eax */
  call_ind((uint32_t)(EAX), 0x100118cbu);
  /* 100118cb mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100118d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100118d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100118d5 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100118d7 push 0x1001fb38 */
  push32((uint32_t)(0x1001fb38u));
  /* 100118dc push 0x100263d0 */
  push32((uint32_t)(0x100263d0u));
  /* 100118e1 call eax */
  call_ind((uint32_t)(EAX), 0x100118e3u);
  /* 100118e3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100118e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100118eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100118ed je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 100118ef push 0x1001fb20 */
  push32((uint32_t)(0x1001fb20u));
  /* 100118f4 push 0x100263c8 */
  push32((uint32_t)(0x100263c8u));
  /* 100118f9 call eax */
  call_ind((uint32_t)(EAX), 0x100118fbu);
  /* 100118fb mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011905 je 0x10011923 */
  if (C.zf) goto L_10011923;
  /* 10011907 push 0x1001fb08 */
  push32((uint32_t)(0x1001fb08u));
  /* 1001190c push 0x100263c0 */
  push32((uint32_t)(0x100263c0u));
  /* 10011911 call eax */
  call_ind((uint32_t)(EAX), 0x10011913u);
  /* 10011913 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
  /* 10011919 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001191e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011921 jmp 0x10011929 */
  goto L_10011929;
L_10011923:;
  /* 10011923 mov ecx, dword ptr [0x100263f8] */
  ECX = (r32((uint32_t)(0x100263f8)));
L_10011929:;
  /* 10011929 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001192b je 0x10011ad5 */
  if (C.zf) goto L_10011ad5;
  /* 10011931 push 0x1001faf0 */
  push32((uint32_t)(0x1001faf0u));
  /* 10011936 push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 1001193b call ecx */
  call_ind((uint32_t)(ECX), 0x1001193du);
  /* 1001193d mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011947 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 1001194d push 0x1001fadc */
  push32((uint32_t)(0x1001fadcu));
  /* 10011952 push 0x10026160 */
  push32((uint32_t)(0x10026160u));
  /* 10011957 call eax */
  call_ind((uint32_t)(EAX), 0x10011959u);
  /* 10011959 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 1001195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011963 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011969 push 0x1001fac4 */
  push32((uint32_t)(0x1001fac4u));
  /* 1001196e push 0x10026328 */
  push32((uint32_t)(0x10026328u));
  /* 10011973 call eax */
  call_ind((uint32_t)(EAX), 0x10011975u);
  /* 10011975 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 1001197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001197d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001197f je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011985 push 0x1001fab0 */
  push32((uint32_t)(0x1001fab0u));
  /* 1001198a push 0x10023888 */
  push32((uint32_t)(0x10023888u));
  /* 1001198f call eax */
  call_ind((uint32_t)(EAX), 0x10011991u);
  /* 10011991 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001199b je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 100119a1 push 0x1001fa9c */
  push32((uint32_t)(0x1001fa9cu));
  /* 100119a6 push 0x10025fe0 */
  push32((uint32_t)(0x10025fe0u));
  /* 100119ab call eax */
  call_ind((uint32_t)(EAX), 0x100119adu);
  /* 100119ad mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 100119b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100119b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100119b7 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 100119bd push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 100119c2 push 0x10025f80 */
  push32((uint32_t)(0x10025f80u));
  /* 100119c7 call eax */
  call_ind((uint32_t)(EAX), 0x100119c9u);
  /* 100119c9 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 100119ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100119d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100119d3 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 100119d9 push 0x1001fa90 */
  push32((uint32_t)(0x1001fa90u));
  /* 100119de push 0x10026370 */
  push32((uint32_t)(0x10026370u));
  /* 100119e3 call eax */
  call_ind((uint32_t)(EAX), 0x100119e5u);
  /* 100119e5 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 100119ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100119ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100119ef je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 100119f5 push 0x1001fa84 */
  push32((uint32_t)(0x1001fa84u));
  /* 100119fa push 0x10023668 */
  push32((uint32_t)(0x10023668u));
  /* 100119ff call eax */
  call_ind((uint32_t)(EAX), 0x10011a01u);
  /* 10011a01 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011a0b je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011a11 push 0x1001fa74 */
  push32((uint32_t)(0x1001fa74u));
  /* 10011a16 push 0x100238c8 */
  push32((uint32_t)(0x100238c8u));
  /* 10011a1b call eax */
  call_ind((uint32_t)(EAX), 0x10011a1du);
  /* 10011a1d mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011a27 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011a2d push 0x1001fa68 */
  push32((uint32_t)(0x1001fa68u));
  /* 10011a32 push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10011a37 call eax */
  call_ind((uint32_t)(EAX), 0x10011a39u);
  /* 10011a39 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011a43 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011a49 push 0x1001fa50 */
  push32((uint32_t)(0x1001fa50u));
  /* 10011a4e push 0x10023890 */
  push32((uint32_t)(0x10023890u));
  /* 10011a53 call eax */
  call_ind((uint32_t)(EAX), 0x10011a55u);
  /* 10011a55 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011a5f je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011a61 push 0x1001fa44 */
  push32((uint32_t)(0x1001fa44u));
  /* 10011a66 push 0x100238e8 */
  push32((uint32_t)(0x100238e8u));
  /* 10011a6b call eax */
  call_ind((uint32_t)(EAX), 0x10011a6du);
  /* 10011a6d mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011a77 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011a79 push 0x1001fa38 */
  push32((uint32_t)(0x1001fa38u));
  /* 10011a7e push 0x10025f90 */
  push32((uint32_t)(0x10025f90u));
  /* 10011a83 call eax */
  call_ind((uint32_t)(EAX), 0x10011a85u);
  /* 10011a85 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011a8f je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011a91 push 0x1001fa2c */
  push32((uint32_t)(0x1001fa2cu));
  /* 10011a96 push 0x10026398 */
  push32((uint32_t)(0x10026398u));
  /* 10011a9b call eax */
  call_ind((uint32_t)(EAX), 0x10011a9du);
  /* 10011a9d mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011aa7 je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011aa9 push 0x1001fa20 */
  push32((uint32_t)(0x1001fa20u));
  /* 10011aae push 0x10025f88 */
  push32((uint32_t)(0x10025f88u));
  /* 10011ab3 call eax */
  call_ind((uint32_t)(EAX), 0x10011ab5u);
  /* 10011ab5 mov eax, dword ptr [0x100263f8] */
  EAX = (r32((uint32_t)(0x100263f8)));
  /* 10011aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011abf je 0x10011ad0 */
  if (C.zf) goto L_10011ad0;
  /* 10011ac1 push 0x1001fa10 */
  push32((uint32_t)(0x1001fa10u));
  /* 10011ac6 push 0x100238a0 */
  push32((uint32_t)(0x100238a0u));
  /* 10011acb call eax */
  call_ind((uint32_t)(EAX), 0x10011acdu);
  /* 10011acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011ad0:;
  /* 10011ad0 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
L_10011ad5:;
  /* 10011ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ad7 je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011add push 0x1001f9fc */
  push32((uint32_t)(0x1001f9fcu));
  /* 10011ae2 push 0x10026378 */
  push32((uint32_t)(0x10026378u));
  /* 10011ae7 call eax */
  call_ind((uint32_t)(EAX), 0x10011ae9u);
  /* 10011ae9 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011af3 je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011af9 push 0x1001f9e8 */
  push32((uint32_t)(0x1001f9e8u));
  /* 10011afe push 0x10026100 */
  push32((uint32_t)(0x10026100u));
  /* 10011b03 call eax */
  call_ind((uint32_t)(EAX), 0x10011b05u);
  /* 10011b05 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011b0f je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011b15 push 0x1001f9e0 */
  push32((uint32_t)(0x1001f9e0u));
  /* 10011b1a push 0x10023660 */
  push32((uint32_t)(0x10023660u));
  /* 10011b1f call eax */
  call_ind((uint32_t)(EAX), 0x10011b21u);
  /* 10011b21 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011b2b je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011b31 push 0x1001f9c8 */
  push32((uint32_t)(0x1001f9c8u));
  /* 10011b36 push 0x100263a0 */
  push32((uint32_t)(0x100263a0u));
  /* 10011b3b call eax */
  call_ind((uint32_t)(EAX), 0x10011b3du);
  /* 10011b3d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011b47 je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011b49 push 0x1001f9b0 */
  push32((uint32_t)(0x1001f9b0u));
  /* 10011b4e push 0x100263a8 */
  push32((uint32_t)(0x100263a8u));
  /* 10011b53 call eax */
  call_ind((uint32_t)(EAX), 0x10011b55u);
  /* 10011b55 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011b5f je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011b61 push 0x1001f998 */
  push32((uint32_t)(0x1001f998u));
  /* 10011b66 push 0x100263b8 */
  push32((uint32_t)(0x100263b8u));
  /* 10011b6b call eax */
  call_ind((uint32_t)(EAX), 0x10011b6du);
  /* 10011b6d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011b77 je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011b79 push 0x1001f980 */
  push32((uint32_t)(0x1001f980u));
  /* 10011b7e push 0x100262f0 */
  push32((uint32_t)(0x100262f0u));
  /* 10011b83 call eax */
  call_ind((uint32_t)(EAX), 0x10011b85u);
  /* 10011b85 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011b8f je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011b91 push 0x1001f968 */
  push32((uint32_t)(0x1001f968u));
  /* 10011b96 push 0x100262f8 */
  push32((uint32_t)(0x100262f8u));
  /* 10011b9b call eax */
  call_ind((uint32_t)(EAX), 0x10011b9du);
  /* 10011b9d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ba7 je 0x10011bb8 */
  if (C.zf) goto L_10011bb8;
  /* 10011ba9 push 0x1001f950 */
  push32((uint32_t)(0x1001f950u));
  /* 10011bae push 0x10026300 */
  push32((uint32_t)(0x10026300u));
  /* 10011bb3 call eax */
  call_ind((uint32_t)(EAX), 0x10011bb5u);
  /* 10011bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011bb8:;
  /* 10011bb8 push 0x1001f9c8 */
  push32((uint32_t)(0x1001f9c8u));
  /* 10011bbd push 0x10026350 */
  push32((uint32_t)(0x10026350u));
  /* 10011bc2 call 0x10012720 */
  push32(0x10011bc7u); f_10012720();
  /* 10011bc7 push 0x1001f9b0 */
  push32((uint32_t)(0x1001f9b0u));
  /* 10011bcc push 0x10026358 */
  push32((uint32_t)(0x10026358u));
  /* 10011bd1 call 0x10012720 */
  push32(0x10011bd6u); f_10012720();
  /* 10011bd6 push 0x1001f998 */
  push32((uint32_t)(0x1001f998u));
  /* 10011bdb push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 10011be0 call 0x10012720 */
  push32(0x10011be5u); f_10012720();
  /* 10011be5 push 0x1001f938 */
  push32((uint32_t)(0x1001f938u));
  /* 10011bea push 0x10026348 */
  push32((uint32_t)(0x10026348u));
  /* 10011bef call 0x10012720 */
  push32(0x10011bf4u); f_10012720();
  /* 10011bf4 push 0x1001f920 */
  push32((uint32_t)(0x1001f920u));
  /* 10011bf9 push 0x10026360 */
  push32((uint32_t)(0x10026360u));
  /* 10011bfe call 0x10012720 */
  push32(0x10011c03u); f_10012720();
  /* 10011c03 push 0x1001f980 */
  push32((uint32_t)(0x1001f980u));
  /* 10011c08 push 0x10026298 */
  push32((uint32_t)(0x10026298u));
  /* 10011c0d call 0x10012720 */
  push32(0x10011c12u); f_10012720();
  /* 10011c12 push 0x1001f968 */
  push32((uint32_t)(0x1001f968u));
  /* 10011c17 push 0x10026280 */
  push32((uint32_t)(0x10026280u));
  /* 10011c1c call 0x10012720 */
  push32(0x10011c21u); f_10012720();
  /* 10011c21 push 0x1001f950 */
  push32((uint32_t)(0x1001f950u));
  /* 10011c26 push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 10011c2b call 0x10012720 */
  push32(0x10011c30u); f_10012720();
  /* 10011c30 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011c33 push 0x1001f908 */
  push32((uint32_t)(0x1001f908u));
  /* 10011c38 push 0x100262a0 */
  push32((uint32_t)(0x100262a0u));
  /* 10011c3d call 0x10012720 */
  push32(0x10011c42u); f_10012720();
  /* 10011c42 push 0x1001f8f0 */
  push32((uint32_t)(0x1001f8f0u));
  /* 10011c47 push 0x100262a8 */
  push32((uint32_t)(0x100262a8u));
  /* 10011c4c call 0x10012720 */
  push32(0x10011c51u); f_10012720();
  /* 10011c51 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011c56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011c5b je 0x10011ce8 */
  if (C.zf) goto L_10011ce8;
  /* 10011c61 push 0x1001f8d4 */
  push32((uint32_t)(0x1001f8d4u));
  /* 10011c66 push 0x10023910 */
  push32((uint32_t)(0x10023910u));
  /* 10011c6b call eax */
  call_ind((uint32_t)(EAX), 0x10011c6du);
  /* 10011c6d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011c77 je 0x10011ce8 */
  if (C.zf) goto L_10011ce8;
  /* 10011c79 push 0x1001f8b8 */
  push32((uint32_t)(0x1001f8b8u));
  /* 10011c7e push 0x10023918 */
  push32((uint32_t)(0x10023918u));
  /* 10011c83 call eax */
  call_ind((uint32_t)(EAX), 0x10011c85u);
  /* 10011c85 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011c8f je 0x10011ce8 */
  if (C.zf) goto L_10011ce8;
  /* 10011c91 push 0x1001f89c */
  push32((uint32_t)(0x1001f89cu));
  /* 10011c96 push 0x10023908 */
  push32((uint32_t)(0x10023908u));
  /* 10011c9b call eax */
  call_ind((uint32_t)(EAX), 0x10011c9du);
  /* 10011c9d mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ca7 je 0x10011ce8 */
  if (C.zf) goto L_10011ce8;
  /* 10011ca9 push 0x1001f880 */
  push32((uint32_t)(0x1001f880u));
  /* 10011cae push 0x10025f78 */
  push32((uint32_t)(0x10025f78u));
  /* 10011cb3 call eax */
  call_ind((uint32_t)(EAX), 0x10011cb5u);
  /* 10011cb5 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011cbf je 0x10011ce8 */
  if (C.zf) goto L_10011ce8;
  /* 10011cc1 push 0x1001f864 */
  push32((uint32_t)(0x1001f864u));
  /* 10011cc6 push 0x10025f68 */
  push32((uint32_t)(0x10025f68u));
  /* 10011ccb call eax */
  call_ind((uint32_t)(EAX), 0x10011ccdu);
  /* 10011ccd mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011cd7 je 0x10011ce8 */
  if (C.zf) goto L_10011ce8;
  /* 10011cd9 push 0x1001f848 */
  push32((uint32_t)(0x1001f848u));
  /* 10011cde push 0x10025f70 */
  push32((uint32_t)(0x10025f70u));
  /* 10011ce3 call eax */
  call_ind((uint32_t)(EAX), 0x10011ce5u);
  /* 10011ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011ce8:;
  /* 10011ce8 push 0x1001f840 */
  push32((uint32_t)(0x1001f840u));
  /* 10011ced push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011cf2 call 0x10012fb0 */
  push32(0x10011cf7u); f_10012fb0();
  /* 10011cf7 push eax */
  push32((uint32_t)(EAX));
  /* 10011cf8 push 0x10026018 */
  push32((uint32_t)(0x10026018u));
  /* 10011cfd call 0x10012720 */
  push32(0x10011d02u); f_10012720();
  /* 10011d02 push 0x1001f838 */
  push32((uint32_t)(0x1001f838u));
  /* 10011d07 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011d0c call 0x10012fb0 */
  push32(0x10011d11u); f_10012fb0();
  /* 10011d11 push eax */
  push32((uint32_t)(EAX));
  /* 10011d12 push 0x10026010 */
  push32((uint32_t)(0x10026010u));
  /* 10011d17 call 0x10012720 */
  push32(0x10011d1cu); f_10012720();
  /* 10011d1c push 0x1001f830 */
  push32((uint32_t)(0x1001f830u));
  /* 10011d21 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011d26 call 0x10012fb0 */
  push32(0x10011d2bu); f_10012fb0();
  /* 10011d2b push eax */
  push32((uint32_t)(EAX));
  /* 10011d2c push 0x10026008 */
  push32((uint32_t)(0x10026008u));
  /* 10011d31 call 0x10012720 */
  push32(0x10011d36u); f_10012720();
  /* 10011d36 push 0x1001f828 */
  push32((uint32_t)(0x1001f828u));
  /* 10011d3b push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011d40 call 0x10012fb0 */
  push32(0x10011d45u); f_10012fb0();
  /* 10011d45 push eax */
  push32((uint32_t)(EAX));
  /* 10011d46 push 0x10026000 */
  push32((uint32_t)(0x10026000u));
  /* 10011d4b call 0x10012720 */
  push32(0x10011d50u); f_10012720();
  /* 10011d50 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011d53 push 0x1001f820 */
  push32((uint32_t)(0x1001f820u));
  /* 10011d58 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011d5d call 0x10012fb0 */
  push32(0x10011d62u); f_10012fb0();
  /* 10011d62 push eax */
  push32((uint32_t)(EAX));
  /* 10011d63 push 0x10025ff8 */
  push32((uint32_t)(0x10025ff8u));
  /* 10011d68 call 0x10012720 */
  push32(0x10011d6du); f_10012720();
  /* 10011d6d push 0x1001f818 */
  push32((uint32_t)(0x1001f818u));
  /* 10011d72 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011d77 call 0x10012fb0 */
  push32(0x10011d7cu); f_10012fb0();
  /* 10011d7c push eax */
  push32((uint32_t)(EAX));
  /* 10011d7d push 0x10025ff0 */
  push32((uint32_t)(0x10025ff0u));
  /* 10011d82 call 0x10012720 */
  push32(0x10011d87u); f_10012720();
  /* 10011d87 push 0x1001f810 */
  push32((uint32_t)(0x1001f810u));
  /* 10011d8c push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011d91 call 0x10012fb0 */
  push32(0x10011d96u); f_10012fb0();
  /* 10011d96 push eax */
  push32((uint32_t)(EAX));
  /* 10011d97 push 0x10026130 */
  push32((uint32_t)(0x10026130u));
  /* 10011d9c call 0x10012720 */
  push32(0x10011da1u); f_10012720();
  /* 10011da1 push 0x1001f808 */
  push32((uint32_t)(0x1001f808u));
  /* 10011da6 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011dab call 0x10012fb0 */
  push32(0x10011db0u); f_10012fb0();
  /* 10011db0 push eax */
  push32((uint32_t)(EAX));
  /* 10011db1 push 0x10026128 */
  push32((uint32_t)(0x10026128u));
  /* 10011db6 call 0x10012720 */
  push32(0x10011dbbu); f_10012720();
  /* 10011dbb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011dbe push 0x1001f800 */
  push32((uint32_t)(0x1001f800u));
  /* 10011dc3 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011dc8 call 0x10012fb0 */
  push32(0x10011dcdu); f_10012fb0();
  /* 10011dcd push eax */
  push32((uint32_t)(EAX));
  /* 10011dce push 0x10026120 */
  push32((uint32_t)(0x10026120u));
  /* 10011dd3 call 0x10012720 */
  push32(0x10011dd8u); f_10012720();
  /* 10011dd8 push 0x1001f7f8 */
  push32((uint32_t)(0x1001f7f8u));
  /* 10011ddd push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011de2 call 0x10012fb0 */
  push32(0x10011de7u); f_10012fb0();
  /* 10011de7 push eax */
  push32((uint32_t)(EAX));
  /* 10011de8 push 0x10026118 */
  push32((uint32_t)(0x10026118u));
  /* 10011ded call 0x10012720 */
  push32(0x10011df2u); f_10012720();
  /* 10011df2 push 0x1001f7f0 */
  push32((uint32_t)(0x1001f7f0u));
  /* 10011df7 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011dfc call 0x10012fb0 */
  push32(0x10011e01u); f_10012fb0();
  /* 10011e01 push eax */
  push32((uint32_t)(EAX));
  /* 10011e02 push 0x10026108 */
  push32((uint32_t)(0x10026108u));
  /* 10011e07 call 0x10012720 */
  push32(0x10011e0cu); f_10012720();
  /* 10011e0c push 0x1001f7e8 */
  push32((uint32_t)(0x1001f7e8u));
  /* 10011e11 push 0x10026218 */
  push32((uint32_t)(0x10026218u));
  /* 10011e16 call 0x10012fb0 */
  push32(0x10011e1bu); f_10012fb0();
  /* 10011e1b push eax */
  push32((uint32_t)(EAX));
  /* 10011e1c push 0x10026158 */
  push32((uint32_t)(0x10026158u));
  /* 10011e21 call 0x10012720 */
  push32(0x10011e26u); f_10012720();
  /* 10011e26 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011e2b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011e30 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011e36 push 0x1001f7d4 */
  push32((uint32_t)(0x1001f7d4u));
  /* 10011e3b push 0x100236b8 */
  push32((uint32_t)(0x100236b8u));
  /* 10011e40 call eax */
  call_ind((uint32_t)(EAX), 0x10011e42u);
  /* 10011e42 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011e47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011e4c je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011e52 push 0x1001f7c0 */
  push32((uint32_t)(0x1001f7c0u));
  /* 10011e57 push 0x100236b0 */
  push32((uint32_t)(0x100236b0u));
  /* 10011e5c call eax */
  call_ind((uint32_t)(EAX), 0x10011e5eu);
  /* 10011e5e mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011e68 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011e6e push 0x1001f7ac */
  push32((uint32_t)(0x1001f7acu));
  /* 10011e73 push 0x100236a8 */
  push32((uint32_t)(0x100236a8u));
  /* 10011e78 call eax */
  call_ind((uint32_t)(EAX), 0x10011e7au);
  /* 10011e7a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011e84 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011e8a push 0x1001f798 */
  push32((uint32_t)(0x1001f798u));
  /* 10011e8f push 0x100236a0 */
  push32((uint32_t)(0x100236a0u));
  /* 10011e94 call eax */
  call_ind((uint32_t)(EAX), 0x10011e96u);
  /* 10011e96 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011e9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ea0 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011ea6 push 0x1001f784 */
  push32((uint32_t)(0x1001f784u));
  /* 10011eab push 0x10023678 */
  push32((uint32_t)(0x10023678u));
  /* 10011eb0 call eax */
  call_ind((uint32_t)(EAX), 0x10011eb2u);
  /* 10011eb2 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ebc je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011ec2 push 0x1001f770 */
  push32((uint32_t)(0x1001f770u));
  /* 10011ec7 push 0x10023670 */
  push32((uint32_t)(0x10023670u));
  /* 10011ecc call eax */
  call_ind((uint32_t)(EAX), 0x10011eceu);
  /* 10011ece mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011ed6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ed8 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011ede push 0x1001f75c */
  push32((uint32_t)(0x1001f75cu));
  /* 10011ee3 push 0x10023748 */
  push32((uint32_t)(0x10023748u));
  /* 10011ee8 call eax */
  call_ind((uint32_t)(EAX), 0x10011eeau);
  /* 10011eea mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011ef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011ef4 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011ef6 push 0x1001f748 */
  push32((uint32_t)(0x1001f748u));
  /* 10011efb push 0x10023740 */
  push32((uint32_t)(0x10023740u));
  /* 10011f00 call eax */
  call_ind((uint32_t)(EAX), 0x10011f02u);
  /* 10011f02 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011f07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011f0c je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011f0e push 0x1001f734 */
  push32((uint32_t)(0x1001f734u));
  /* 10011f13 push 0x10023738 */
  push32((uint32_t)(0x10023738u));
  /* 10011f18 call eax */
  call_ind((uint32_t)(EAX), 0x10011f1au);
  /* 10011f1a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011f1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011f24 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011f26 push 0x1001f720 */
  push32((uint32_t)(0x1001f720u));
  /* 10011f2b push 0x10023720 */
  push32((uint32_t)(0x10023720u));
  /* 10011f30 call eax */
  call_ind((uint32_t)(EAX), 0x10011f32u);
  /* 10011f32 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011f3c je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011f3e push 0x1001f70c */
  push32((uint32_t)(0x1001f70cu));
  /* 10011f43 push 0x10023718 */
  push32((uint32_t)(0x10023718u));
  /* 10011f48 call eax */
  call_ind((uint32_t)(EAX), 0x10011f4au);
  /* 10011f4a mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10011f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10011f54 je 0x10011f65 */
  if (C.zf) goto L_10011f65;
  /* 10011f56 push 0x1001f6f8 */
  push32((uint32_t)(0x1001f6f8u));
  /* 10011f5b push 0x10023710 */
  push32((uint32_t)(0x10023710u));
  /* 10011f60 call eax */
  call_ind((uint32_t)(EAX), 0x10011f62u);
  /* 10011f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10011f65:;
  /* 10011f65 push 0x1001f840 */
  push32((uint32_t)(0x1001f840u));
  /* 10011f6a push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10011f6f call 0x10012fb0 */
  push32(0x10011f74u); f_10012fb0();
  /* 10011f74 push eax */
  push32((uint32_t)(EAX));
  /* 10011f75 push 0x100236e0 */
  push32((uint32_t)(0x100236e0u));
  /* 10011f7a call 0x10012720 */
  push32(0x10011f7fu); f_10012720();
  /* 10011f7f push 0x1001f838 */
  push32((uint32_t)(0x1001f838u));
  /* 10011f84 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10011f89 call 0x10012fb0 */
  push32(0x10011f8eu); f_10012fb0();
  /* 10011f8e push eax */
  push32((uint32_t)(EAX));
  /* 10011f8f push 0x100236e8 */
  push32((uint32_t)(0x100236e8u));
  /* 10011f94 call 0x10012720 */
  push32(0x10011f99u); f_10012720();
  /* 10011f99 push 0x1001f830 */
  push32((uint32_t)(0x1001f830u));
  /* 10011f9e push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10011fa3 call 0x10012fb0 */
  push32(0x10011fa8u); f_10012fb0();
  /* 10011fa8 push eax */
  push32((uint32_t)(EAX));
  /* 10011fa9 push 0x100236f0 */
  push32((uint32_t)(0x100236f0u));
  /* 10011fae call 0x10012720 */
  push32(0x10011fb3u); f_10012720();
  /* 10011fb3 push 0x1001f828 */
  push32((uint32_t)(0x1001f828u));
  /* 10011fb8 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10011fbd call 0x10012fb0 */
  push32(0x10011fc2u); f_10012fb0();
  /* 10011fc2 push eax */
  push32((uint32_t)(EAX));
  /* 10011fc3 push 0x100236f8 */
  push32((uint32_t)(0x100236f8u));
  /* 10011fc8 call 0x10012720 */
  push32(0x10011fcdu); f_10012720();
  /* 10011fcd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10011fd0 push 0x1001f820 */
  push32((uint32_t)(0x1001f820u));
  /* 10011fd5 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10011fda call 0x10012fb0 */
  push32(0x10011fdfu); f_10012fb0();
  /* 10011fdf push eax */
  push32((uint32_t)(EAX));
  /* 10011fe0 push 0x100236c0 */
  push32((uint32_t)(0x100236c0u));
  /* 10011fe5 call 0x10012720 */
  push32(0x10011feau); f_10012720();
  /* 10011fea push 0x1001f818 */
  push32((uint32_t)(0x1001f818u));
  /* 10011fef push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10011ff4 call 0x10012fb0 */
  push32(0x10011ff9u); f_10012fb0();
  /* 10011ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10011ffa push 0x100236d0 */
  push32((uint32_t)(0x100236d0u));
  /* 10011fff call 0x10012720 */
  push32(0x10012004u); f_10012720();
  /* 10012004 push 0x1001f810 */
  push32((uint32_t)(0x1001f810u));
  /* 10012009 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 1001200e call 0x10012fb0 */
  push32(0x10012013u); f_10012fb0();
  /* 10012013 push eax */
  push32((uint32_t)(EAX));
  /* 10012014 push 0x10023788 */
  push32((uint32_t)(0x10023788u));
  /* 10012019 call 0x10012720 */
  push32(0x1001201eu); f_10012720();
  /* 1001201e push 0x1001f808 */
  push32((uint32_t)(0x1001f808u));
  /* 10012023 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10012028 call 0x10012fb0 */
  push32(0x1001202du); f_10012fb0();
  /* 1001202d push eax */
  push32((uint32_t)(EAX));
  /* 1001202e push 0x10023790 */
  push32((uint32_t)(0x10023790u));
  /* 10012033 call 0x10012720 */
  push32(0x10012038u); f_10012720();
  /* 10012038 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001203b push 0x1001f800 */
  push32((uint32_t)(0x1001f800u));
  /* 10012040 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10012045 call 0x10012fb0 */
  push32(0x1001204au); f_10012fb0();
  /* 1001204a push eax */
  push32((uint32_t)(EAX));
  /* 1001204b push 0x10023798 */
  push32((uint32_t)(0x10023798u));
  /* 10012050 call 0x10012720 */
  push32(0x10012055u); f_10012720();
  /* 10012055 push 0x1001f7f8 */
  push32((uint32_t)(0x1001f7f8u));
  /* 1001205a push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 1001205f call 0x10012fb0 */
  push32(0x10012064u); f_10012fb0();
  /* 10012064 push eax */
  push32((uint32_t)(EAX));
  /* 10012065 push 0x10023770 */
  push32((uint32_t)(0x10023770u));
  /* 1001206a call 0x10012720 */
  push32(0x1001206fu); f_10012720();
  /* 1001206f push 0x1001f7f0 */
  push32((uint32_t)(0x1001f7f0u));
  /* 10012074 push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10012079 call 0x10012fb0 */
  push32(0x1001207eu); f_10012fb0();
  /* 1001207e push eax */
  push32((uint32_t)(EAX));
  /* 1001207f push 0x10023778 */
  push32((uint32_t)(0x10023778u));
  /* 10012084 call 0x10012720 */
  push32(0x10012089u); f_10012720();
  /* 10012089 push 0x1001f7e8 */
  push32((uint32_t)(0x1001f7e8u));
  /* 1001208e push 0x10026048 */
  push32((uint32_t)(0x10026048u));
  /* 10012093 call 0x10012fb0 */
  push32(0x10012098u); f_10012fb0();
  /* 10012098 push eax */
  push32((uint32_t)(EAX));
  /* 10012099 push 0x10023780 */
  push32((uint32_t)(0x10023780u));
  /* 1001209e call 0x10012720 */
  push32(0x100120a3u); f_10012720();
  /* 100120a3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100120a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100120ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100120ad je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100120b3 push 0x1001f6e8 */
  push32((uint32_t)(0x1001f6e8u));
  /* 100120b8 push 0x100261d8 */
  push32((uint32_t)(0x100261d8u));
  /* 100120bd call eax */
  call_ind((uint32_t)(EAX), 0x100120bfu);
  /* 100120bf mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100120c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100120c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100120c9 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100120cf push 0x1001f6d4 */
  push32((uint32_t)(0x1001f6d4u));
  /* 100120d4 push 0x100261d0 */
  push32((uint32_t)(0x100261d0u));
  /* 100120d9 call eax */
  call_ind((uint32_t)(EAX), 0x100120dbu);
  /* 100120db mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100120e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100120e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100120e5 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100120eb push 0x1001f6c0 */
  push32((uint32_t)(0x1001f6c0u));
  /* 100120f0 push 0x100261a0 */
  push32((uint32_t)(0x100261a0u));
  /* 100120f5 call eax */
  call_ind((uint32_t)(EAX), 0x100120f7u);
  /* 100120f7 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100120fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100120ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012101 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012107 push 0x1001f6ac */
  push32((uint32_t)(0x1001f6acu));
  /* 1001210c push 0x10026198 */
  push32((uint32_t)(0x10026198u));
  /* 10012111 call eax */
  call_ind((uint32_t)(EAX), 0x10012113u);
  /* 10012113 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001211b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001211d je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012123 push 0x1001f698 */
  push32((uint32_t)(0x1001f698u));
  /* 10012128 push 0x100261a8 */
  push32((uint32_t)(0x100261a8u));
  /* 1001212d call eax */
  call_ind((uint32_t)(EAX), 0x1001212fu);
  /* 1001212f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012139 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001213f push 0x1001f684 */
  push32((uint32_t)(0x1001f684u));
  /* 10012144 push 0x10026098 */
  push32((uint32_t)(0x10026098u));
  /* 10012149 call eax */
  call_ind((uint32_t)(EAX), 0x1001214bu);
  /* 1001214b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012155 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001215b push 0x1001f670 */
  push32((uint32_t)(0x1001f670u));
  /* 10012160 push 0x100260a0 */
  push32((uint32_t)(0x100260a0u));
  /* 10012165 call eax */
  call_ind((uint32_t)(EAX), 0x10012167u);
  /* 10012167 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001216c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001216f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012171 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012177 push 0x1001f65c */
  push32((uint32_t)(0x1001f65cu));
  /* 1001217c push 0x100260a8 */
  push32((uint32_t)(0x100260a8u));
  /* 10012181 call eax */
  call_ind((uint32_t)(EAX), 0x10012183u);
  /* 10012183 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001218d je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012193 push 0x1001f648 */
  push32((uint32_t)(0x1001f648u));
  /* 10012198 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 1001219d call eax */
  call_ind((uint32_t)(EAX), 0x1001219fu);
  /* 1001219f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100121a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100121a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100121a9 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100121af push 0x1001f640 */
  push32((uint32_t)(0x1001f640u));
  /* 100121b4 push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 100121b9 call eax */
  call_ind((uint32_t)(EAX), 0x100121bbu);
  /* 100121bb mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100121c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100121c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100121c5 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100121cb push 0x1001f638 */
  push32((uint32_t)(0x1001f638u));
  /* 100121d0 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 100121d5 call eax */
  call_ind((uint32_t)(EAX), 0x100121d7u);
  /* 100121d7 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100121dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100121df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100121e1 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100121e7 push 0x1001f630 */
  push32((uint32_t)(0x1001f630u));
  /* 100121ec push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 100121f1 call eax */
  call_ind((uint32_t)(EAX), 0x100121f3u);
  /* 100121f3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100121f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100121fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100121fd je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012203 push 0x1001f628 */
  push32((uint32_t)(0x1001f628u));
  /* 10012208 push 0x10026078 */
  push32((uint32_t)(0x10026078u));
  /* 1001220d call eax */
  call_ind((uint32_t)(EAX), 0x1001220fu);
  /* 1001220f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012219 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001221f push 0x1001f620 */
  push32((uint32_t)(0x1001f620u));
  /* 10012224 push 0x10026030 */
  push32((uint32_t)(0x10026030u));
  /* 10012229 call eax */
  call_ind((uint32_t)(EAX), 0x1001222bu);
  /* 1001222b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012235 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001223b push 0x1001f618 */
  push32((uint32_t)(0x1001f618u));
  /* 10012240 push 0x10026038 */
  push32((uint32_t)(0x10026038u));
  /* 10012245 call eax */
  call_ind((uint32_t)(EAX), 0x10012247u);
  /* 10012247 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001224c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001224f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012251 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012257 push 0x1001f610 */
  push32((uint32_t)(0x1001f610u));
  /* 1001225c push 0x10026040 */
  push32((uint32_t)(0x10026040u));
  /* 10012261 call eax */
  call_ind((uint32_t)(EAX), 0x10012263u);
  /* 10012263 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001226b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001226d je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012273 push 0x1001f608 */
  push32((uint32_t)(0x1001f608u));
  /* 10012278 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 1001227d call eax */
  call_ind((uint32_t)(EAX), 0x1001227fu);
  /* 1001227f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012289 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001228f push 0x1001f600 */
  push32((uint32_t)(0x1001f600u));
  /* 10012294 push 0x10026110 */
  push32((uint32_t)(0x10026110u));
  /* 10012299 call eax */
  call_ind((uint32_t)(EAX), 0x1001229bu);
  /* 1001229b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100122a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100122a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100122a5 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100122ab push 0x1001f5f8 */
  push32((uint32_t)(0x1001f5f8u));
  /* 100122b0 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 100122b5 call eax */
  call_ind((uint32_t)(EAX), 0x100122b7u);
  /* 100122b7 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100122bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100122bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100122c1 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100122c7 push 0x1001f5f0 */
  push32((uint32_t)(0x1001f5f0u));
  /* 100122cc push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 100122d1 call eax */
  call_ind((uint32_t)(EAX), 0x100122d3u);
  /* 100122d3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100122d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100122db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100122dd je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100122e3 push 0x1001f5e8 */
  push32((uint32_t)(0x1001f5e8u));
  /* 100122e8 push 0x10026210 */
  push32((uint32_t)(0x10026210u));
  /* 100122ed call eax */
  call_ind((uint32_t)(EAX), 0x100122efu);
  /* 100122ef mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100122f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100122f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100122f9 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100122ff push 0x1001f5e0 */
  push32((uint32_t)(0x1001f5e0u));
  /* 10012304 push 0x10026168 */
  push32((uint32_t)(0x10026168u));
  /* 10012309 call eax */
  call_ind((uint32_t)(EAX), 0x1001230bu);
  /* 1001230b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012315 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001231b push 0x1001f5d8 */
  push32((uint32_t)(0x1001f5d8u));
  /* 10012320 push 0x10026178 */
  push32((uint32_t)(0x10026178u));
  /* 10012325 call eax */
  call_ind((uint32_t)(EAX), 0x10012327u);
  /* 10012327 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001232c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001232f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012331 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012337 push 0x1001f5d0 */
  push32((uint32_t)(0x1001f5d0u));
  /* 1001233c push 0x10026180 */
  push32((uint32_t)(0x10026180u));
  /* 10012341 call eax */
  call_ind((uint32_t)(EAX), 0x10012343u);
  /* 10012343 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001234b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001234d je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012353 push 0x1001f5c8 */
  push32((uint32_t)(0x1001f5c8u));
  /* 10012358 push 0x10026170 */
  push32((uint32_t)(0x10026170u));
  /* 1001235d call eax */
  call_ind((uint32_t)(EAX), 0x1001235fu);
  /* 1001235f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012369 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001236f push 0x1001f5c0 */
  push32((uint32_t)(0x1001f5c0u));
  /* 10012374 push 0x10023950 */
  push32((uint32_t)(0x10023950u));
  /* 10012379 call eax */
  call_ind((uint32_t)(EAX), 0x1001237bu);
  /* 1001237b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012385 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001238b push 0x1001f5b8 */
  push32((uint32_t)(0x1001f5b8u));
  /* 10012390 push 0x100238e0 */
  push32((uint32_t)(0x100238e0u));
  /* 10012395 call eax */
  call_ind((uint32_t)(EAX), 0x10012397u);
  /* 10012397 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001239c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001239f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100123a1 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100123a7 push 0x1001f5b0 */
  push32((uint32_t)(0x1001f5b0u));
  /* 100123ac push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 100123b1 call eax */
  call_ind((uint32_t)(EAX), 0x100123b3u);
  /* 100123b3 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100123b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100123bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100123bd je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100123c3 push 0x1001f5a8 */
  push32((uint32_t)(0x1001f5a8u));
  /* 100123c8 push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 100123cd call eax */
  call_ind((uint32_t)(EAX), 0x100123cfu);
  /* 100123cf mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100123d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100123d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100123d9 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100123df push 0x1001f5a0 */
  push32((uint32_t)(0x1001f5a0u));
  /* 100123e4 push 0x10023940 */
  push32((uint32_t)(0x10023940u));
  /* 100123e9 call eax */
  call_ind((uint32_t)(EAX), 0x100123ebu);
  /* 100123eb mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100123f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100123f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100123f5 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100123fb push 0x1001f598 */
  push32((uint32_t)(0x1001f598u));
  /* 10012400 push 0x100261f8 */
  push32((uint32_t)(0x100261f8u));
  /* 10012405 call eax */
  call_ind((uint32_t)(EAX), 0x10012407u);
  /* 10012407 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001240c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001240f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012411 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012417 push 0x1001f590 */
  push32((uint32_t)(0x1001f590u));
  /* 1001241c push 0x10026200 */
  push32((uint32_t)(0x10026200u));
  /* 10012421 call eax */
  call_ind((uint32_t)(EAX), 0x10012423u);
  /* 10012423 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001242b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001242d je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012433 push 0x1001f588 */
  push32((uint32_t)(0x1001f588u));
  /* 10012438 push 0x10023870 */
  push32((uint32_t)(0x10023870u));
  /* 1001243d call eax */
  call_ind((uint32_t)(EAX), 0x1001243fu);
  /* 1001243f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012449 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001244f push 0x1001f580 */
  push32((uint32_t)(0x1001f580u));
  /* 10012454 push 0x10023880 */
  push32((uint32_t)(0x10023880u));
  /* 10012459 call eax */
  call_ind((uint32_t)(EAX), 0x1001245bu);
  /* 1001245b mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012465 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001246b push 0x1001f578 */
  push32((uint32_t)(0x1001f578u));
  /* 10012470 push 0x10023768 */
  push32((uint32_t)(0x10023768u));
  /* 10012475 call eax */
  call_ind((uint32_t)(EAX), 0x10012477u);
  /* 10012477 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001247c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001247f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012481 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012487 push 0x1001f570 */
  push32((uint32_t)(0x1001f570u));
  /* 1001248c push 0x10023628 */
  push32((uint32_t)(0x10023628u));
  /* 10012491 call eax */
  call_ind((uint32_t)(EAX), 0x10012493u);
  /* 10012493 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001249b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001249d je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100124a3 push 0x1001f568 */
  push32((uint32_t)(0x1001f568u));
  /* 100124a8 push 0x10023708 */
  push32((uint32_t)(0x10023708u));
  /* 100124ad call eax */
  call_ind((uint32_t)(EAX), 0x100124afu);
  /* 100124af mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100124b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100124b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100124b9 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100124bf push 0x1001f560 */
  push32((uint32_t)(0x1001f560u));
  /* 100124c4 push 0x10023630 */
  push32((uint32_t)(0x10023630u));
  /* 100124c9 call eax */
  call_ind((uint32_t)(EAX), 0x100124cbu);
  /* 100124cb mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100124d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100124d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100124d5 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100124db push 0x1001f54c */
  push32((uint32_t)(0x1001f54cu));
  /* 100124e0 push 0x100262e8 */
  push32((uint32_t)(0x100262e8u));
  /* 100124e5 call eax */
  call_ind((uint32_t)(EAX), 0x100124e7u);
  /* 100124e7 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 100124ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100124ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100124f1 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 100124f3 push 0x1001f538 */
  push32((uint32_t)(0x1001f538u));
  /* 100124f8 push 0x100262d0 */
  push32((uint32_t)(0x100262d0u));
  /* 100124fd call eax */
  call_ind((uint32_t)(EAX), 0x100124ffu);
  /* 100124ff mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012509 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001250b push 0x1001f524 */
  push32((uint32_t)(0x1001f524u));
  /* 10012510 push 0x100262e0 */
  push32((uint32_t)(0x100262e0u));
  /* 10012515 call eax */
  call_ind((uint32_t)(EAX), 0x10012517u);
  /* 10012517 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001251c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001251f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012521 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012523 push 0x1001f510 */
  push32((uint32_t)(0x1001f510u));
  /* 10012528 push 0x100262c0 */
  push32((uint32_t)(0x100262c0u));
  /* 1001252d call eax */
  call_ind((uint32_t)(EAX), 0x1001252fu);
  /* 1001252f mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 10012534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012539 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 1001253b push 0x1001f4fc */
  push32((uint32_t)(0x1001f4fcu));
  /* 10012540 push 0x100262c8 */
  push32((uint32_t)(0x100262c8u));
  /* 10012545 call eax */
  call_ind((uint32_t)(EAX), 0x10012547u);
  /* 10012547 mov eax, dword ptr [0x100263fc] */
  EAX = (r32((uint32_t)(0x100263fc)));
  /* 1001254c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001254f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012551 je 0x10012562 */
  if (C.zf) goto L_10012562;
  /* 10012553 push 0x1001f4e8 */
  push32((uint32_t)(0x1001f4e8u));
  /* 10012558 push 0x100262b8 */
  push32((uint32_t)(0x100262b8u));
  /* 1001255d call eax */
  call_ind((uint32_t)(EAX), 0x1001255fu);
  /* 1001255f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10012562:;
  /* 10012562 push 6 */
  push32((uint32_t)(0x6u));
  /* 10012564 call dword ptr [0x10026520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026520))), 0x1001256au);
  /* 1001256a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001256c push 0x1001f4d4 */
  push32((uint32_t)(0x1001f4d4u));
  /* 10012571 push 0 */
  push32((uint32_t)(0x0u));
  /* 10012573 call dword ptr [0x10026524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026524))), 0x10012579u);
  /* 10012579 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001257b push 0x1001f4c0 */
  push32((uint32_t)(0x1001f4c0u));
  /* 10012580 push 1 */
  push32((uint32_t)(0x1u));
  /* 10012582 call dword ptr [0x10026524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026524))), 0x10012588u);
  /* 10012588 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001258a push 0x1001f4ac */
  push32((uint32_t)(0x1001f4acu));
  /* 1001258f push 2 */
  push32((uint32_t)(0x2u));
  /* 10012591 call dword ptr [0x10026524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026524))), 0x10012597u);
  /* 10012597 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10012599 push 0x1001f498 */
  push32((uint32_t)(0x1001f498u));
  /* 1001259e push 3 */
  push32((uint32_t)(0x3u));
  /* 100125a0 call dword ptr [0x10026524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026524))), 0x100125a6u);
  /* 100125a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100125a8 push 0x1001f484 */
  push32((uint32_t)(0x1001f484u));
  /* 100125ad push 4 */
  push32((uint32_t)(0x4u));
  /* 100125af call dword ptr [0x10026524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026524))), 0x100125b5u);
  /* 100125b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100125b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100125ba push 0x1001f470 */
  push32((uint32_t)(0x1001f470u));
  /* 100125bf push 5 */
  push32((uint32_t)(0x5u));
  /* 100125c1 call dword ptr [0x10026524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026524))), 0x100125c7u);
  /* 100125c7 push 0x1001fef0 */
  push32((uint32_t)(0x1001fef0u));
  /* 100125cc call 0x10012710 */
  push32(0x100125d1u); f_10012710();
  /* 100125d1 push 0x1001f464 */
  push32((uint32_t)(0x1001f464u));
  /* 100125d6 call dword ptr [0x1002655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002655c))), 0x100125dcu);
  /* 100125dc push 0x1001f454 */
  push32((uint32_t)(0x1001f454u));
  /* 100125e1 call dword ptr [0x10026564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026564))), 0x100125e7u);
  /* 100125e7 push 0x1001f448 */
  push32((uint32_t)(0x1001f448u));
  /* 100125ec call dword ptr [0x1002656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002656c))), 0x100125f2u);
  /* 100125f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100125f5 ret  */
  ESPCHK(0x10011000u, _esp0);
  ESP += 4; return;
}

/* InitAI @ 0x10012600 (95 bytes, 23 insns) */
void f_10012600(void) {
  FTRACE(0x10012600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012600 call 0x10011000 */
  push32(0x10012605u); f_10011000();
  /* 10012605 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 1001260a call dword ptr [0x10026528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026528))), 0x10012610u);
  /* 10012610 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10012612 call dword ptr [0x1002652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002652c))), 0x10012618u);
  /* 10012618 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001261a call dword ptr [0x10026530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026530))), 0x10012620u);
  /* 10012620 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10012625 call dword ptr [0x10026534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026534))), 0x1001262bu);
  /* 1001262b push 5 */
  push32((uint32_t)(0x5u));
  /* 1001262d call dword ptr [0x10026538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026538))), 0x10012633u);
  /* 10012633 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012636 call dword ptr [0x10026500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026500))), 0x1001263cu);
  /* 1001263c lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 1001263f mov dword ptr [0x100262b4], eax */
  w32((uint32_t)(0x100262b4), (EAX));
  /* 10012644 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10012647 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1001264a lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 1001264d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001264f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10012652 mov dword ptr [eax + 0x10023af0], ecx */
  w32((uint32_t)(EAX + 0x10023af0), (ECX));
  /* 10012658 mov dword ptr [eax + 0x10023c84], ecx */
  w32((uint32_t)(EAX + 0x10023c84), (ECX));
  /* 1001265e ret  */
  ESPCHK(0x10012600u, _esp0);
  ESP += 4; return;
}

/* ProcessAI @ 0x10012660 (5 bytes, 1 insns) */
void f_10012660(void) {
  FTRACE(0x10012660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012660 jmp 0x10016dc0 */
  f_10016dc0(); return;
}

/* FUN_10002670 @ 0x10012670 (20 bytes, 7 insns) */
void f_10012670(void) {
  FTRACE(0x10012670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012670 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012674 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012678 push eax */
  push32((uint32_t)(EAX));
  /* 10012679 push ecx */
  push32((uint32_t)(ECX));
  /* 1001267a call dword ptr [0x10026510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026510))), 0x10012680u);
  /* 10012680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012683 ret  */
  ESPCHK(0x10012670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002690 @ 0x10012690 (25 bytes, 9 insns) */
void f_10012690(void) {
  FTRACE(0x10012690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012690 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10012694 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012698 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001269c push eax */
  push32((uint32_t)(EAX));
  /* 1001269d push ecx */
  push32((uint32_t)(ECX));
  /* 1001269e push edx */
  push32((uint32_t)(EDX));
  /* 1001269f call dword ptr [0x1002651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002651c))), 0x100126a5u);
  /* 100126a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100126a8 ret  */
  ESPCHK(0x10012690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b0 @ 0x100126b0 (6 bytes, 1 insns) */
void f_100126b0(void) {
  FTRACE(0x100126b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100126b0 jmp dword ptr [0x10026548] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10026548)))); return;
}

/* FUN_100026c0 @ 0x100126c0 (20 bytes, 7 insns) */
void f_100126c0(void) {
  FTRACE(0x100126c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100126c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100126c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100126c8 push eax */
  push32((uint32_t)(EAX));
  /* 100126c9 push ecx */
  push32((uint32_t)(ECX));
  /* 100126ca call dword ptr [0x10026568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026568))), 0x100126d0u);
  /* 100126d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100126d3 ret  */
  ESPCHK(0x100126c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x100126e0 (6 bytes, 1 insns) */
void f_100126e0(void) {
  FTRACE(0x100126e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100126e0 jmp dword ptr [0x10026574] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10026574)))); return;
}

/* FUN_100026f0 @ 0x100126f0 (6 bytes, 1 insns) */
void f_100126f0(void) {
  FTRACE(0x100126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100126f0 jmp dword ptr [0x10026578] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10026578)))); return;
}

/* FUN_10002700 @ 0x10012700 (6 bytes, 1 insns) */
void f_10012700(void) {
  FTRACE(0x10012700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012700 jmp dword ptr [0x10026580] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10026580)))); return;
}

/* FUN_10002710 @ 0x10012710 (13 bytes, 5 insns) */
void f_10012710(void) {
  FTRACE(0x10012710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012710 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012714 push eax */
  push32((uint32_t)(EAX));
  /* 10012715 call dword ptr [0x10026584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026584))), 0x1001271bu);
  /* 1001271b pop ecx */
  ECX = (pop32());
  /* 1001271c ret  */
  ESPCHK(0x10012710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10012720 (20 bytes, 7 insns) */
void f_10012720(void) {
  FTRACE(0x10012720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012720 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012724 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012728 push eax */
  push32((uint32_t)(EAX));
  /* 10012729 push ecx */
  push32((uint32_t)(ECX));
  /* 1001272a call dword ptr [0x10026588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026588))), 0x10012730u);
  /* 10012730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012733 ret  */
  ESPCHK(0x10012720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10012740 (6 bytes, 1 insns) */
void f_10012740(void) {
  FTRACE(0x10012740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012740 jmp dword ptr [0x1002658c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1002658c)))); return;
}

/* FUN_10002750 @ 0x10012750 (20 bytes, 7 insns) */
void f_10012750(void) {
  FTRACE(0x10012750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012750 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012754 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012758 push eax */
  push32((uint32_t)(EAX));
  /* 10012759 push ecx */
  push32((uint32_t)(ECX));
  /* 1001275a call dword ptr [0x10026268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026268))), 0x10012760u);
  /* 10012760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012763 ret  */
  ESPCHK(0x10012750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10012770 (15 bytes, 5 insns) */
void f_10012770(void) {
  FTRACE(0x10012770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012770 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012774 push eax */
  push32((uint32_t)(EAX));
  /* 10012775 call dword ptr [0x100262b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100262b0))), 0x1001277bu);
  /* 1001277b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001277e ret  */
  ESPCHK(0x10012770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10012780 (20 bytes, 7 insns) */
void f_10012780(void) {
  FTRACE(0x10012780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012780 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012784 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012788 push eax */
  push32((uint32_t)(EAX));
  /* 10012789 push ecx */
  push32((uint32_t)(ECX));
  /* 1001278a call dword ptr [0x10023730] */
  call_ind((uint32_t)(r32((uint32_t)(0x10023730))), 0x10012790u);
  /* 10012790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012793 ret  */
  ESPCHK(0x10012780u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x100127a0 (13 bytes, 5 insns) */
void f_100127a0(void) {
  FTRACE(0x100127a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100127a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100127a4 push eax */
  push32((uint32_t)(EAX));
  /* 100127a5 call dword ptr [0x100238d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100238d0))), 0x100127abu);
  /* 100127ab pop ecx */
  ECX = (pop32());
  /* 100127ac ret  */
  ESPCHK(0x100127a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x100127b0 (15 bytes, 5 insns) */
void f_100127b0(void) {
  FTRACE(0x100127b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100127b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100127b4 push eax */
  push32((uint32_t)(EAX));
  /* 100127b5 call dword ptr [0x10026590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026590))), 0x100127bbu);
  /* 100127bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100127be ret  */
  ESPCHK(0x100127b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x100127c0 (25 bytes, 9 insns) */
void f_100127c0(void) {
  FTRACE(0x100127c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100127c0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100127c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100127c8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100127cc push eax */
  push32((uint32_t)(EAX));
  /* 100127cd push ecx */
  push32((uint32_t)(ECX));
  /* 100127ce push edx */
  push32((uint32_t)(EDX));
  /* 100127cf call dword ptr [0x10025fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10025fc0))), 0x100127d5u);
  /* 100127d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100127d8 ret  */
  ESPCHK(0x100127c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027e0 @ 0x100127e0 (13 bytes, 5 insns) */
void f_100127e0(void) {
  FTRACE(0x100127e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100127e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100127e4 push eax */
  push32((uint32_t)(EAX));
  /* 100127e5 call dword ptr [0x10023930] */
  call_ind((uint32_t)(r32((uint32_t)(0x10023930))), 0x100127ebu);
  /* 100127eb pop ecx */
  ECX = (pop32());
  /* 100127ec ret  */
  ESPCHK(0x100127e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x100127f0 (6 bytes, 1 insns) */
void f_100127f0(void) {
  FTRACE(0x100127f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100127f0 jmp dword ptr [0x10026248] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10026248)))); return;
}

/* FUN_10002800 @ 0x10012800 (6 bytes, 1 insns) */
void f_10012800(void) {
  FTRACE(0x10012800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012800 jmp dword ptr [0x10023948] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10023948)))); return;
}

/* FUN_10002810 @ 0x10012810 (82 bytes, 28 insns) */
void f_10012810(void) {
  FTRACE(0x10012810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012810 mov eax, dword ptr [0x100263e0] */
  EAX = (r32((uint32_t)(0x100263e0)));
  /* 10012815 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001281b push esi */
  push32((uint32_t)(ESI));
  /* 1001281c push edi */
  push32((uint32_t)(EDI));
  /* 1001281d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 10012824 push edi */
  push32((uint32_t)(EDI));
  /* 10012825 push eax */
  push32((uint32_t)(EAX));
  /* 10012826 call dword ptr [0x1001e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e088))), 0x1001282cu);
  /* 1001282c mov esi, eax */
  ESI = (EAX);
  /* 1001282e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10012830 jne 0x10012857 */
  if (!C.zf) goto L_10012857;
  /* 10012832 push edi */
  push32((uint32_t)(EDI));
  /* 10012833 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 10012837 push 0x1001ff14 */
  push32((uint32_t)(0x1001ff14u));
  /* 1001283c push ecx */
  push32((uint32_t)(ECX));
  /* 1001283d call 0x10016ef0 */
  push32(0x10012842u); f_10016ef0();
  /* 10012842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012845 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 10012849 push esi */
  push32((uint32_t)(ESI));
  /* 1001284a push 0x1001ff04 */
  push32((uint32_t)(0x1001ff04u));
  /* 1001284f push edx */
  push32((uint32_t)(EDX));
  /* 10012850 push esi */
  push32((uint32_t)(ESI));
  /* 10012851 call dword ptr [0x1001e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0dc))), 0x10012857u);
L_10012857:;
  /* 10012857 mov eax, esi */
  EAX = (ESI);
  /* 10012859 pop edi */
  EDI = (pop32());
  /* 1001285a pop esi */
  ESI = (pop32());
  /* 1001285b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012861 ret  */
  ESPCHK(0x10012810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002870 @ 0x10012870 (1844 bytes, 376 insns) */
void f_10012870(void) {
  FTRACE(0x10012870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012870 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012874 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10012875 jne 0x10012f9c */
  if (!C.zf) goto L_10012f9c;
  /* 1001287b push 0x10020668 */
  push32((uint32_t)(0x10020668u));
  /* 10012880 call dword ptr [0x1001e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e004))), 0x10012886u);
  /* 10012886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10012888 mov dword ptr [0x100263e0], eax */
  w32((uint32_t)(0x100263e0), (EAX));
  /* 1001288d jne 0x100128a9 */
  if (!C.zf) goto L_100128a9;
  /* 1001288f push eax */
  push32((uint32_t)(EAX));
  /* 10012890 push 0x10020660 */
  push32((uint32_t)(0x10020660u));
  /* 10012895 push 0x10020648 */
  push32((uint32_t)(0x10020648u));
  /* 1001289a push eax */
  push32((uint32_t)(EAX));
  /* 1001289b call dword ptr [0x1001e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0dc))), 0x100128a1u);
  /* 100128a1 mov eax, 1 */
  EAX = (0x1u);
  /* 100128a6 ret 0xc */
  ESPCHK(0x10012870u, _esp0);
  ESP += 16; return;
L_100128a9:;
  /* 100128a9 push 0x10020638 */
  push32((uint32_t)(0x10020638u));
  /* 100128ae call 0x10012810 */
  push32(0x100128b3u); f_10012810();
  /* 100128b3 push 0x10020628 */
  push32((uint32_t)(0x10020628u));
  /* 100128b8 mov dword ptr [0x100263e4], eax */
  w32((uint32_t)(0x100263e4), (EAX));
  /* 100128bd call 0x10012810 */
  push32(0x100128c2u); f_10012810();
  /* 100128c2 push 0x10020618 */
  push32((uint32_t)(0x10020618u));
  /* 100128c7 mov dword ptr [0x100263e8], eax */
  w32((uint32_t)(0x100263e8), (EAX));
  /* 100128cc call 0x10012810 */
  push32(0x100128d1u); f_10012810();
  /* 100128d1 push 0x1002060c */
  push32((uint32_t)(0x1002060cu));
  /* 100128d6 mov dword ptr [0x100263ec], eax */
  w32((uint32_t)(0x100263ec), (EAX));
  /* 100128db call 0x10012810 */
  push32(0x100128e0u); f_10012810();
  /* 100128e0 push 0x100205fc */
  push32((uint32_t)(0x100205fcu));
  /* 100128e5 mov dword ptr [0x100263f0], eax */
  w32((uint32_t)(0x100263f0), (EAX));
  /* 100128ea call 0x10012810 */
  push32(0x100128efu); f_10012810();
  /* 100128ef push 0x100205e8 */
  push32((uint32_t)(0x100205e8u));
  /* 100128f4 mov dword ptr [0x100263f4], eax */
  w32((uint32_t)(0x100263f4), (EAX));
  /* 100128f9 call 0x10012810 */
  push32(0x100128feu); f_10012810();
  /* 100128fe push 0x100205d8 */
  push32((uint32_t)(0x100205d8u));
  /* 10012903 mov dword ptr [0x100263f8], eax */
  w32((uint32_t)(0x100263f8), (EAX));
  /* 10012908 call 0x10012810 */
  push32(0x1001290du); f_10012810();
  /* 1001290d push 0x100205c8 */
  push32((uint32_t)(0x100205c8u));
  /* 10012912 mov dword ptr [0x100263fc], eax */
  w32((uint32_t)(0x100263fc), (EAX));
  /* 10012917 call 0x10012810 */
  push32(0x1001291cu); f_10012810();
  /* 1001291c push 0x100205b4 */
  push32((uint32_t)(0x100205b4u));
  /* 10012921 mov dword ptr [0x10026400], eax */
  w32((uint32_t)(0x10026400), (EAX));
  /* 10012926 call 0x10012810 */
  push32(0x1001292bu); f_10012810();
  /* 1001292b push 0x100205a0 */
  push32((uint32_t)(0x100205a0u));
  /* 10012930 mov dword ptr [0x10026404], eax */
  w32((uint32_t)(0x10026404), (EAX));
  /* 10012935 call 0x10012810 */
  push32(0x1001293au); f_10012810();
  /* 1001293a push 0x10020590 */
  push32((uint32_t)(0x10020590u));
  /* 1001293f mov dword ptr [0x10026408], eax */
  w32((uint32_t)(0x10026408), (EAX));
  /* 10012944 call 0x10012810 */
  push32(0x10012949u); f_10012810();
  /* 10012949 push 0x10020580 */
  push32((uint32_t)(0x10020580u));
  /* 1001294e mov dword ptr [0x1002640c], eax */
  w32((uint32_t)(0x1002640c), (EAX));
  /* 10012953 call 0x10012810 */
  push32(0x10012958u); f_10012810();
  /* 10012958 push 0x10020570 */
  push32((uint32_t)(0x10020570u));
  /* 1001295d mov dword ptr [0x10026410], eax */
  w32((uint32_t)(0x10026410), (EAX));
  /* 10012962 call 0x10012810 */
  push32(0x10012967u); f_10012810();
  /* 10012967 push 0x10020560 */
  push32((uint32_t)(0x10020560u));
  /* 1001296c mov dword ptr [0x10026414], eax */
  w32((uint32_t)(0x10026414), (EAX));
  /* 10012971 call 0x10012810 */
  push32(0x10012976u); f_10012810();
  /* 10012976 push 0x10020550 */
  push32((uint32_t)(0x10020550u));
  /* 1001297b mov dword ptr [0x10026418], eax */
  w32((uint32_t)(0x10026418), (EAX));
  /* 10012980 call 0x10012810 */
  push32(0x10012985u); f_10012810();
  /* 10012985 push 0x10020540 */
  push32((uint32_t)(0x10020540u));
  /* 1001298a mov dword ptr [0x1002641c], eax */
  w32((uint32_t)(0x1002641c), (EAX));
  /* 1001298f call 0x10012810 */
  push32(0x10012994u); f_10012810();
  /* 10012994 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012997 mov dword ptr [0x10026420], eax */
  w32((uint32_t)(0x10026420), (EAX));
  /* 1001299c push 0x10020530 */
  push32((uint32_t)(0x10020530u));
  /* 100129a1 call 0x10012810 */
  push32(0x100129a6u); f_10012810();
  /* 100129a6 push 0x10020520 */
  push32((uint32_t)(0x10020520u));
  /* 100129ab mov dword ptr [0x10026424], eax */
  w32((uint32_t)(0x10026424), (EAX));
  /* 100129b0 call 0x10012810 */
  push32(0x100129b5u); f_10012810();
  /* 100129b5 push 0x1002050c */
  push32((uint32_t)(0x1002050cu));
  /* 100129ba mov dword ptr [0x10026428], eax */
  w32((uint32_t)(0x10026428), (EAX));
  /* 100129bf call 0x10012810 */
  push32(0x100129c4u); f_10012810();
  /* 100129c4 push 0x10020504 */
  push32((uint32_t)(0x10020504u));
  /* 100129c9 mov dword ptr [0x1002642c], eax */
  w32((uint32_t)(0x1002642c), (EAX));
  /* 100129ce call 0x10012810 */
  push32(0x100129d3u); f_10012810();
  /* 100129d3 push 0x100204f4 */
  push32((uint32_t)(0x100204f4u));
  /* 100129d8 mov dword ptr [0x10026430], eax */
  w32((uint32_t)(0x10026430), (EAX));
  /* 100129dd call 0x10012810 */
  push32(0x100129e2u); f_10012810();
  /* 100129e2 push 0x100204e4 */
  push32((uint32_t)(0x100204e4u));
  /* 100129e7 mov dword ptr [0x10026434], eax */
  w32((uint32_t)(0x10026434), (EAX));
  /* 100129ec call 0x10012810 */
  push32(0x100129f1u); f_10012810();
  /* 100129f1 push 0x100204d8 */
  push32((uint32_t)(0x100204d8u));
  /* 100129f6 mov dword ptr [0x10026438], eax */
  w32((uint32_t)(0x10026438), (EAX));
  /* 100129fb call 0x10012810 */
  push32(0x10012a00u); f_10012810();
  /* 10012a00 push 0x100204c8 */
  push32((uint32_t)(0x100204c8u));
  /* 10012a05 mov dword ptr [0x1002643c], eax */
  w32((uint32_t)(0x1002643c), (EAX));
  /* 10012a0a call 0x10012810 */
  push32(0x10012a0fu); f_10012810();
  /* 10012a0f push 0x100204c0 */
  push32((uint32_t)(0x100204c0u));
  /* 10012a14 mov dword ptr [0x10026440], eax */
  w32((uint32_t)(0x10026440), (EAX));
  /* 10012a19 call 0x10012810 */
  push32(0x10012a1eu); f_10012810();
  /* 10012a1e push 0x100204b0 */
  push32((uint32_t)(0x100204b0u));
  /* 10012a23 mov dword ptr [0x10026458], eax */
  w32((uint32_t)(0x10026458), (EAX));
  /* 10012a28 call 0x10012810 */
  push32(0x10012a2du); f_10012810();
  /* 10012a2d push 0x100204a0 */
  push32((uint32_t)(0x100204a0u));
  /* 10012a32 mov dword ptr [0x1002645c], eax */
  w32((uint32_t)(0x1002645c), (EAX));
  /* 10012a37 call 0x10012810 */
  push32(0x10012a3cu); f_10012810();
  /* 10012a3c push 0x10020494 */
  push32((uint32_t)(0x10020494u));
  /* 10012a41 mov dword ptr [0x10026460], eax */
  w32((uint32_t)(0x10026460), (EAX));
  /* 10012a46 call 0x10012810 */
  push32(0x10012a4bu); f_10012810();
  /* 10012a4b push 0x10020484 */
  push32((uint32_t)(0x10020484u));
  /* 10012a50 mov dword ptr [0x10026464], eax */
  w32((uint32_t)(0x10026464), (EAX));
  /* 10012a55 call 0x10012810 */
  push32(0x10012a5au); f_10012810();
  /* 10012a5a push 0x10020478 */
  push32((uint32_t)(0x10020478u));
  /* 10012a5f mov dword ptr [0x10026468], eax */
  w32((uint32_t)(0x10026468), (EAX));
  /* 10012a64 call 0x10012810 */
  push32(0x10012a69u); f_10012810();
  /* 10012a69 push 0x10020468 */
  push32((uint32_t)(0x10020468u));
  /* 10012a6e mov dword ptr [0x10026484], eax */
  w32((uint32_t)(0x10026484), (EAX));
  /* 10012a73 call 0x10012810 */
  push32(0x10012a78u); f_10012810();
  /* 10012a78 push 0x10020460 */
  push32((uint32_t)(0x10020460u));
  /* 10012a7d mov dword ptr [0x1002646c], eax */
  w32((uint32_t)(0x1002646c), (EAX));
  /* 10012a82 call 0x10012810 */
  push32(0x10012a87u); f_10012810();
  /* 10012a87 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012a8a mov dword ptr [0x10026470], eax */
  w32((uint32_t)(0x10026470), (EAX));
  /* 10012a8f push 0x10020450 */
  push32((uint32_t)(0x10020450u));
  /* 10012a94 call 0x10012810 */
  push32(0x10012a99u); f_10012810();
  /* 10012a99 push 0x10020440 */
  push32((uint32_t)(0x10020440u));
  /* 10012a9e mov dword ptr [0x10026474], eax */
  w32((uint32_t)(0x10026474), (EAX));
  /* 10012aa3 call 0x10012810 */
  push32(0x10012aa8u); f_10012810();
  /* 10012aa8 push 0x10020430 */
  push32((uint32_t)(0x10020430u));
  /* 10012aad mov dword ptr [0x10026478], eax */
  w32((uint32_t)(0x10026478), (EAX));
  /* 10012ab2 call 0x10012810 */
  push32(0x10012ab7u); f_10012810();
  /* 10012ab7 push 0x10020424 */
  push32((uint32_t)(0x10020424u));
  /* 10012abc mov dword ptr [0x1002647c], eax */
  w32((uint32_t)(0x1002647c), (EAX));
  /* 10012ac1 call 0x10012810 */
  push32(0x10012ac6u); f_10012810();
  /* 10012ac6 push 0x1002041c */
  push32((uint32_t)(0x1002041cu));
  /* 10012acb mov dword ptr [0x10026480], eax */
  w32((uint32_t)(0x10026480), (EAX));
  /* 10012ad0 call 0x10012810 */
  push32(0x10012ad5u); f_10012810();
  /* 10012ad5 push 0x1002040c */
  push32((uint32_t)(0x1002040cu));
  /* 10012ada mov dword ptr [0x10026488], eax */
  w32((uint32_t)(0x10026488), (EAX));
  /* 10012adf call 0x10012810 */
  push32(0x10012ae4u); f_10012810();
  /* 10012ae4 push 0x100203fc */
  push32((uint32_t)(0x100203fcu));
  /* 10012ae9 mov dword ptr [0x1002648c], eax */
  w32((uint32_t)(0x1002648c), (EAX));
  /* 10012aee call 0x10012810 */
  push32(0x10012af3u); f_10012810();
  /* 10012af3 push 0x100203ec */
  push32((uint32_t)(0x100203ecu));
  /* 10012af8 mov dword ptr [0x10026490], eax */
  w32((uint32_t)(0x10026490), (EAX));
  /* 10012afd call 0x10012810 */
  push32(0x10012b02u); f_10012810();
  /* 10012b02 push 0x100203dc */
  push32((uint32_t)(0x100203dcu));
  /* 10012b07 mov dword ptr [0x10026494], eax */
  w32((uint32_t)(0x10026494), (EAX));
  /* 10012b0c call 0x10012810 */
  push32(0x10012b11u); f_10012810();
  /* 10012b11 push 0x100203d0 */
  push32((uint32_t)(0x100203d0u));
  /* 10012b16 mov dword ptr [0x10026498], eax */
  w32((uint32_t)(0x10026498), (EAX));
  /* 10012b1b call 0x10012810 */
  push32(0x10012b20u); f_10012810();
  /* 10012b20 push 0x100203c4 */
  push32((uint32_t)(0x100203c4u));
  /* 10012b25 mov dword ptr [0x1002649c], eax */
  w32((uint32_t)(0x1002649c), (EAX));
  /* 10012b2a call 0x10012810 */
  push32(0x10012b2fu); f_10012810();
  /* 10012b2f push 0x100203b4 */
  push32((uint32_t)(0x100203b4u));
  /* 10012b34 mov dword ptr [0x100264a0], eax */
  w32((uint32_t)(0x100264a0), (EAX));
  /* 10012b39 call 0x10012810 */
  push32(0x10012b3eu); f_10012810();
  /* 10012b3e push 0x100203a8 */
  push32((uint32_t)(0x100203a8u));
  /* 10012b43 mov dword ptr [0x100264a4], eax */
  w32((uint32_t)(0x100264a4), (EAX));
  /* 10012b48 call 0x10012810 */
  push32(0x10012b4du); f_10012810();
  /* 10012b4d push 0x1002039c */
  push32((uint32_t)(0x1002039cu));
  /* 10012b52 mov dword ptr [0x100264a8], eax */
  w32((uint32_t)(0x100264a8), (EAX));
  /* 10012b57 call 0x10012810 */
  push32(0x10012b5cu); f_10012810();
  /* 10012b5c push 0x10020390 */
  push32((uint32_t)(0x10020390u));
  /* 10012b61 mov dword ptr [0x100264ac], eax */
  w32((uint32_t)(0x100264ac), (EAX));
  /* 10012b66 call 0x10012810 */
  push32(0x10012b6bu); f_10012810();
  /* 10012b6b push 0x10020384 */
  push32((uint32_t)(0x10020384u));
  /* 10012b70 mov dword ptr [0x100261e0], eax */
  w32((uint32_t)(0x100261e0), (EAX));
  /* 10012b75 call 0x10012810 */
  push32(0x10012b7au); f_10012810();
  /* 10012b7a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012b7d mov dword ptr [0x100264b0], eax */
  w32((uint32_t)(0x100264b0), (EAX));
  /* 10012b82 push 0x10020378 */
  push32((uint32_t)(0x10020378u));
  /* 10012b87 call 0x10012810 */
  push32(0x10012b8cu); f_10012810();
  /* 10012b8c push 0x1002036c */
  push32((uint32_t)(0x1002036cu));
  /* 10012b91 mov dword ptr [0x100264b4], eax */
  w32((uint32_t)(0x100264b4), (EAX));
  /* 10012b96 call 0x10012810 */
  push32(0x10012b9bu); f_10012810();
  /* 10012b9b push 0x1002035c */
  push32((uint32_t)(0x1002035cu));
  /* 10012ba0 mov dword ptr [0x100264b8], eax */
  w32((uint32_t)(0x100264b8), (EAX));
  /* 10012ba5 call 0x10012810 */
  push32(0x10012baau); f_10012810();
  /* 10012baa push 0x10020350 */
  push32((uint32_t)(0x10020350u));
  /* 10012baf mov dword ptr [0x100264bc], eax */
  w32((uint32_t)(0x100264bc), (EAX));
  /* 10012bb4 call 0x10012810 */
  push32(0x10012bb9u); f_10012810();
  /* 10012bb9 push 0x10020344 */
  push32((uint32_t)(0x10020344u));
  /* 10012bbe mov dword ptr [0x100264c0], eax */
  w32((uint32_t)(0x100264c0), (EAX));
  /* 10012bc3 call 0x10012810 */
  push32(0x10012bc8u); f_10012810();
  /* 10012bc8 mov dword ptr [0x100264c4], eax */
  w32((uint32_t)(0x100264c4), (EAX));
  /* 10012bcd push 0x10020334 */
  push32((uint32_t)(0x10020334u));
  /* 10012bd2 call 0x10012810 */
  push32(0x10012bd7u); f_10012810();
  /* 10012bd7 push 0x10020324 */
  push32((uint32_t)(0x10020324u));
  /* 10012bdc mov dword ptr [0x100264c8], eax */
  w32((uint32_t)(0x100264c8), (EAX));
  /* 10012be1 call 0x10012810 */
  push32(0x10012be6u); f_10012810();
  /* 10012be6 push 0x10020318 */
  push32((uint32_t)(0x10020318u));
  /* 10012beb mov dword ptr [0x100264cc], eax */
  w32((uint32_t)(0x100264cc), (EAX));
  /* 10012bf0 call 0x10012810 */
  push32(0x10012bf5u); f_10012810();
  /* 10012bf5 push 0x10020310 */
  push32((uint32_t)(0x10020310u));
  /* 10012bfa mov dword ptr [0x100264d0], eax */
  w32((uint32_t)(0x100264d0), (EAX));
  /* 10012bff call 0x10012810 */
  push32(0x10012c04u); f_10012810();
  /* 10012c04 push 0x10020300 */
  push32((uint32_t)(0x10020300u));
  /* 10012c09 mov dword ptr [0x100264d4], eax */
  w32((uint32_t)(0x100264d4), (EAX));
  /* 10012c0e call 0x10012810 */
  push32(0x10012c13u); f_10012810();
  /* 10012c13 push 0x100202f8 */
  push32((uint32_t)(0x100202f8u));
  /* 10012c18 mov dword ptr [0x100264d8], eax */
  w32((uint32_t)(0x100264d8), (EAX));
  /* 10012c1d call 0x10012810 */
  push32(0x10012c22u); f_10012810();
  /* 10012c22 push 0x100202ec */
  push32((uint32_t)(0x100202ecu));
  /* 10012c27 mov dword ptr [0x100264dc], eax */
  w32((uint32_t)(0x100264dc), (EAX));
  /* 10012c2c call 0x10012810 */
  push32(0x10012c31u); f_10012810();
  /* 10012c31 push 0x100202e4 */
  push32((uint32_t)(0x100202e4u));
  /* 10012c36 mov dword ptr [0x100264e0], eax */
  w32((uint32_t)(0x100264e0), (EAX));
  /* 10012c3b call 0x10012810 */
  push32(0x10012c40u); f_10012810();
  /* 10012c40 push 0x100202d0 */
  push32((uint32_t)(0x100202d0u));
  /* 10012c45 mov dword ptr [0x100264e4], eax */
  w32((uint32_t)(0x100264e4), (EAX));
  /* 10012c4a call 0x10012810 */
  push32(0x10012c4fu); f_10012810();
  /* 10012c4f push 0x100202c4 */
  push32((uint32_t)(0x100202c4u));
  /* 10012c54 mov dword ptr [0x10023638], eax */
  w32((uint32_t)(0x10023638), (EAX));
  /* 10012c59 call 0x10012810 */
  push32(0x10012c5eu); f_10012810();
  /* 10012c5e push 0x100202b8 */
  push32((uint32_t)(0x100202b8u));
  /* 10012c63 mov dword ptr [0x100264f0], eax */
  w32((uint32_t)(0x100264f0), (EAX));
  /* 10012c68 call 0x10012810 */
  push32(0x10012c6du); f_10012810();
  /* 10012c6d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012c70 mov dword ptr [0x100264ec], eax */
  w32((uint32_t)(0x100264ec), (EAX));
  /* 10012c75 push 0x100202a4 */
  push32((uint32_t)(0x100202a4u));
  /* 10012c7a call 0x10012810 */
  push32(0x10012c7fu); f_10012810();
  /* 10012c7f push 0x10020294 */
  push32((uint32_t)(0x10020294u));
  /* 10012c84 mov dword ptr [0x100264f4], eax */
  w32((uint32_t)(0x100264f4), (EAX));
  /* 10012c89 call 0x10012810 */
  push32(0x10012c8eu); f_10012810();
  /* 10012c8e push 0x10020284 */
  push32((uint32_t)(0x10020284u));
  /* 10012c93 mov dword ptr [0x100264f8], eax */
  w32((uint32_t)(0x100264f8), (EAX));
  /* 10012c98 call 0x10012810 */
  push32(0x10012c9du); f_10012810();
  /* 10012c9d push 0x10020274 */
  push32((uint32_t)(0x10020274u));
  /* 10012ca2 mov dword ptr [0x100264fc], eax */
  w32((uint32_t)(0x100264fc), (EAX));
  /* 10012ca7 call 0x10012810 */
  push32(0x10012cacu); f_10012810();
  /* 10012cac push 0x10020268 */
  push32((uint32_t)(0x10020268u));
  /* 10012cb1 mov dword ptr [0x10026448], eax */
  w32((uint32_t)(0x10026448), (EAX));
  /* 10012cb6 call 0x10012810 */
  push32(0x10012cbbu); f_10012810();
  /* 10012cbb push 0x10020258 */
  push32((uint32_t)(0x10020258u));
  /* 10012cc0 mov dword ptr [0x10026444], eax */
  w32((uint32_t)(0x10026444), (EAX));
  /* 10012cc5 call 0x10012810 */
  push32(0x10012ccau); f_10012810();
  /* 10012cca push 0x10020244 */
  push32((uint32_t)(0x10020244u));
  /* 10012ccf mov dword ptr [0x1002644c], eax */
  w32((uint32_t)(0x1002644c), (EAX));
  /* 10012cd4 call 0x10012810 */
  push32(0x10012cd9u); f_10012810();
  /* 10012cd9 push 0x1002022c */
  push32((uint32_t)(0x1002022cu));
  /* 10012cde mov dword ptr [0x10026450], eax */
  w32((uint32_t)(0x10026450), (EAX));
  /* 10012ce3 call 0x10012810 */
  push32(0x10012ce8u); f_10012810();
  /* 10012ce8 push 0x1002021c */
  push32((uint32_t)(0x1002021cu));
  /* 10012ced mov dword ptr [0x10026454], eax */
  w32((uint32_t)(0x10026454), (EAX));
  /* 10012cf2 call 0x10012810 */
  push32(0x10012cf7u); f_10012810();
  /* 10012cf7 push 0x10020204 */
  push32((uint32_t)(0x10020204u));
  /* 10012cfc mov dword ptr [0x10026518], eax */
  w32((uint32_t)(0x10026518), (EAX));
  /* 10012d01 call 0x10012810 */
  push32(0x10012d06u); f_10012810();
  /* 10012d06 push 0x100201f4 */
  push32((uint32_t)(0x100201f4u));
  /* 10012d0b mov dword ptr [0x10026548], eax */
  w32((uint32_t)(0x10026548), (EAX));
  /* 10012d10 call 0x10012810 */
  push32(0x10012d15u); f_10012810();
  /* 10012d15 push 0x100201ec */
  push32((uint32_t)(0x100201ecu));
  /* 10012d1a mov dword ptr [0x10026510], eax */
  w32((uint32_t)(0x10026510), (EAX));
  /* 10012d1f call 0x10012810 */
  push32(0x10012d24u); f_10012810();
  /* 10012d24 push 0x100201dc */
  push32((uint32_t)(0x100201dcu));
  /* 10012d29 mov dword ptr [0x1002651c], eax */
  w32((uint32_t)(0x1002651c), (EAX));
  /* 10012d2e call 0x10012810 */
  push32(0x10012d33u); f_10012810();
  /* 10012d33 push 0x100201d0 */
  push32((uint32_t)(0x100201d0u));
  /* 10012d38 mov dword ptr [0x10026568], eax */
  w32((uint32_t)(0x10026568), (EAX));
  /* 10012d3d call 0x10012810 */
  push32(0x10012d42u); f_10012810();
  /* 10012d42 push 0x100201c8 */
  push32((uint32_t)(0x100201c8u));
  /* 10012d47 mov dword ptr [0x10026500], eax */
  w32((uint32_t)(0x10026500), (EAX));
  /* 10012d4c call 0x10012810 */
  push32(0x10012d51u); f_10012810();
  /* 10012d51 push 0x100201bc */
  push32((uint32_t)(0x100201bcu));
  /* 10012d56 mov dword ptr [0x10026504], eax */
  w32((uint32_t)(0x10026504), (EAX));
  /* 10012d5b call 0x10012810 */
  push32(0x10012d60u); f_10012810();
  /* 10012d60 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012d63 mov dword ptr [0x10026508], eax */
  w32((uint32_t)(0x10026508), (EAX));
  /* 10012d68 push 0x100201ac */
  push32((uint32_t)(0x100201acu));
  /* 10012d6d call 0x10012810 */
  push32(0x10012d72u); f_10012810();
  /* 10012d72 push 0x10020198 */
  push32((uint32_t)(0x10020198u));
  /* 10012d77 mov dword ptr [0x1002650c], eax */
  w32((uint32_t)(0x1002650c), (EAX));
  /* 10012d7c call 0x10012810 */
  push32(0x10012d81u); f_10012810();
  /* 10012d81 push 0x1002017c */
  push32((uint32_t)(0x1002017cu));
  /* 10012d86 mov dword ptr [0x10026514], eax */
  w32((uint32_t)(0x10026514), (EAX));
  /* 10012d8b call 0x10012810 */
  push32(0x10012d90u); f_10012810();
  /* 10012d90 push 0x10020168 */
  push32((uint32_t)(0x10020168u));
  /* 10012d95 mov dword ptr [0x10026520], eax */
  w32((uint32_t)(0x10026520), (EAX));
  /* 10012d9a call 0x10012810 */
  push32(0x10012d9fu); f_10012810();
  /* 10012d9f push 0x1002015c */
  push32((uint32_t)(0x1002015cu));
  /* 10012da4 mov dword ptr [0x10026524], eax */
  w32((uint32_t)(0x10026524), (EAX));
  /* 10012da9 call 0x10012810 */
  push32(0x10012daeu); f_10012810();
  /* 10012dae push 0x1002014c */
  push32((uint32_t)(0x1002014cu));
  /* 10012db3 mov dword ptr [0x1002655c], eax */
  w32((uint32_t)(0x1002655c), (EAX));
  /* 10012db8 call 0x10012810 */
  push32(0x10012dbdu); f_10012810();
  /* 10012dbd push 0x10020140 */
  push32((uint32_t)(0x10020140u));
  /* 10012dc2 mov dword ptr [0x10026560], eax */
  w32((uint32_t)(0x10026560), (EAX));
  /* 10012dc7 call 0x10012810 */
  push32(0x10012dccu); f_10012810();
  /* 10012dcc push 0x10020134 */
  push32((uint32_t)(0x10020134u));
  /* 10012dd1 mov dword ptr [0x10026564], eax */
  w32((uint32_t)(0x10026564), (EAX));
  /* 10012dd6 call 0x10012810 */
  push32(0x10012ddbu); f_10012810();
  /* 10012ddb push 0x1002011c */
  push32((uint32_t)(0x1002011cu));
  /* 10012de0 mov dword ptr [0x1002656c], eax */
  w32((uint32_t)(0x1002656c), (EAX));
  /* 10012de5 call 0x10012810 */
  push32(0x10012deau); f_10012810();
  /* 10012dea push 0x10020100 */
  push32((uint32_t)(0x10020100u));
  /* 10012def mov dword ptr [0x10026528], eax */
  w32((uint32_t)(0x10026528), (EAX));
  /* 10012df4 call 0x10012810 */
  push32(0x10012df9u); f_10012810();
  /* 10012df9 push 0x100200e4 */
  push32((uint32_t)(0x100200e4u));
  /* 10012dfe mov dword ptr [0x1002652c], eax */
  w32((uint32_t)(0x1002652c), (EAX));
  /* 10012e03 call 0x10012810 */
  push32(0x10012e08u); f_10012810();
  /* 10012e08 push 0x100200cc */
  push32((uint32_t)(0x100200ccu));
  /* 10012e0d mov dword ptr [0x10026530], eax */
  w32((uint32_t)(0x10026530), (EAX));
  /* 10012e12 call 0x10012810 */
  push32(0x10012e17u); f_10012810();
  /* 10012e17 push 0x100200b4 */
  push32((uint32_t)(0x100200b4u));
  /* 10012e1c mov dword ptr [0x10026534], eax */
  w32((uint32_t)(0x10026534), (EAX));
  /* 10012e21 call 0x10012810 */
  push32(0x10012e26u); f_10012810();
  /* 10012e26 push 0x100200a8 */
  push32((uint32_t)(0x100200a8u));
  /* 10012e2b mov dword ptr [0x10026538], eax */
  w32((uint32_t)(0x10026538), (EAX));
  /* 10012e30 call 0x10012810 */
  push32(0x10012e35u); f_10012810();
  /* 10012e35 push 0x1002009c */
  push32((uint32_t)(0x1002009cu));
  /* 10012e3a mov dword ptr [0x1002653c], eax */
  w32((uint32_t)(0x1002653c), (EAX));
  /* 10012e3f call 0x10012810 */
  push32(0x10012e44u); f_10012810();
  /* 10012e44 push 0x1002008c */
  push32((uint32_t)(0x1002008cu));
  /* 10012e49 mov dword ptr [0x10026540], eax */
  w32((uint32_t)(0x10026540), (EAX));
  /* 10012e4e call 0x10012810 */
  push32(0x10012e53u); f_10012810();
  /* 10012e53 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012e56 mov dword ptr [0x10026544], eax */
  w32((uint32_t)(0x10026544), (EAX));
  /* 10012e5b push 0x10020080 */
  push32((uint32_t)(0x10020080u));
  /* 10012e60 call 0x10012810 */
  push32(0x10012e65u); f_10012810();
  /* 10012e65 push 0x10020074 */
  push32((uint32_t)(0x10020074u));
  /* 10012e6a mov dword ptr [0x1002654c], eax */
  w32((uint32_t)(0x1002654c), (EAX));
  /* 10012e6f call 0x10012810 */
  push32(0x10012e74u); f_10012810();
  /* 10012e74 push 0x10020068 */
  push32((uint32_t)(0x10020068u));
  /* 10012e79 mov dword ptr [0x10026550], eax */
  w32((uint32_t)(0x10026550), (EAX));
  /* 10012e7e call 0x10012810 */
  push32(0x10012e83u); f_10012810();
  /* 10012e83 push 0x10020058 */
  push32((uint32_t)(0x10020058u));
  /* 10012e88 mov dword ptr [0x10026570], eax */
  w32((uint32_t)(0x10026570), (EAX));
  /* 10012e8d call 0x10012810 */
  push32(0x10012e92u); f_10012810();
  /* 10012e92 push 0x1002004c */
  push32((uint32_t)(0x1002004cu));
  /* 10012e97 mov dword ptr [0x10026574], eax */
  w32((uint32_t)(0x10026574), (EAX));
  /* 10012e9c call 0x10012810 */
  push32(0x10012ea1u); f_10012810();
  /* 10012ea1 push 0x10020040 */
  push32((uint32_t)(0x10020040u));
  /* 10012ea6 mov dword ptr [0x10026578], eax */
  w32((uint32_t)(0x10026578), (EAX));
  /* 10012eab call 0x10012810 */
  push32(0x10012eb0u); f_10012810();
  /* 10012eb0 push 0x10020034 */
  push32((uint32_t)(0x10020034u));
  /* 10012eb5 mov dword ptr [0x1002657c], eax */
  w32((uint32_t)(0x1002657c), (EAX));
  /* 10012eba call 0x10012810 */
  push32(0x10012ebfu); f_10012810();
  /* 10012ebf push 0x10020024 */
  push32((uint32_t)(0x10020024u));
  /* 10012ec4 mov dword ptr [0x10026580], eax */
  w32((uint32_t)(0x10026580), (EAX));
  /* 10012ec9 call 0x10012810 */
  push32(0x10012eceu); f_10012810();
  /* 10012ece push 0x10020014 */
  push32((uint32_t)(0x10020014u));
  /* 10012ed3 mov dword ptr [0x10026584], eax */
  w32((uint32_t)(0x10026584), (EAX));
  /* 10012ed8 call 0x10012810 */
  push32(0x10012eddu); f_10012810();
  /* 10012edd push 0x10020000 */
  push32((uint32_t)(0x10020000u));
  /* 10012ee2 mov dword ptr [0x1002658c], eax */
  w32((uint32_t)(0x1002658c), (EAX));
  /* 10012ee7 call 0x10012810 */
  push32(0x10012eecu); f_10012810();
  /* 10012eec mov dword ptr [0x10026588], eax */
  w32((uint32_t)(0x10026588), (EAX));
  /* 10012ef1 push 0x1001ffe8 */
  push32((uint32_t)(0x1001ffe8u));
  /* 10012ef6 call 0x10012810 */
  push32(0x10012efbu); f_10012810();
  /* 10012efb push 0x1001ffd0 */
  push32((uint32_t)(0x1001ffd0u));
  /* 10012f00 mov dword ptr [0x100238d0], eax */
  w32((uint32_t)(0x100238d0), (EAX));
  /* 10012f05 call 0x10012810 */
  push32(0x10012f0au); f_10012810();
  /* 10012f0a push 0x1001ffc0 */
  push32((uint32_t)(0x1001ffc0u));
  /* 10012f0f mov dword ptr [0x10023730], eax */
  w32((uint32_t)(0x10023730), (EAX));
  /* 10012f14 call 0x10012810 */
  push32(0x10012f19u); f_10012810();
  /* 10012f19 push 0x1001ffb0 */
  push32((uint32_t)(0x1001ffb0u));
  /* 10012f1e mov dword ptr [0x10026590], eax */
  w32((uint32_t)(0x10026590), (EAX));
  /* 10012f23 call 0x10012810 */
  push32(0x10012f28u); f_10012810();
  /* 10012f28 push 0x1001ffa0 */
  push32((uint32_t)(0x1001ffa0u));
  /* 10012f2d mov dword ptr [0x10026554], eax */
  w32((uint32_t)(0x10026554), (EAX));
  /* 10012f32 call 0x10012810 */
  push32(0x10012f37u); f_10012810();
  /* 10012f37 push 0x1001ff90 */
  push32((uint32_t)(0x1001ff90u));
  /* 10012f3c mov dword ptr [0x10026558], eax */
  w32((uint32_t)(0x10026558), (EAX));
  /* 10012f41 call 0x10012810 */
  push32(0x10012f46u); f_10012810();
  /* 10012f46 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012f49 mov dword ptr [0x100262b0], eax */
  w32((uint32_t)(0x100262b0), (EAX));
  /* 10012f4e push 0x1001ff80 */
  push32((uint32_t)(0x1001ff80u));
  /* 10012f53 call 0x10012810 */
  push32(0x10012f58u); f_10012810();
  /* 10012f58 push 0x1001ff70 */
  push32((uint32_t)(0x1001ff70u));
  /* 10012f5d mov dword ptr [0x10026268], eax */
  w32((uint32_t)(0x10026268), (EAX));
  /* 10012f62 call 0x10012810 */
  push32(0x10012f67u); f_10012810();
  /* 10012f67 push 0x1001ff60 */
  push32((uint32_t)(0x1001ff60u));
  /* 10012f6c mov dword ptr [0x10025fc0], eax */
  w32((uint32_t)(0x10025fc0), (EAX));
  /* 10012f71 call 0x10012810 */
  push32(0x10012f76u); f_10012810();
  /* 10012f76 push 0x1001ff50 */
  push32((uint32_t)(0x1001ff50u));
  /* 10012f7b mov dword ptr [0x10023930], eax */
  w32((uint32_t)(0x10023930), (EAX));
  /* 10012f80 call 0x10012810 */
  push32(0x10012f85u); f_10012810();
  /* 10012f85 push 0x1001ff3c */
  push32((uint32_t)(0x1001ff3cu));
  /* 10012f8a mov dword ptr [0x10026248], eax */
  w32((uint32_t)(0x10026248), (EAX));
  /* 10012f8f call 0x10012810 */
  push32(0x10012f94u); f_10012810();
  /* 10012f94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012f97 mov dword ptr [0x10023948], eax */
  w32((uint32_t)(0x10023948), (EAX));
L_10012f9c:;
  /* 10012f9c mov eax, 1 */
  EAX = (0x1u);
  /* 10012fa1 ret 0xc */
  ESPCHK(0x10012870u, _esp0);
  ESP += 16; return;
}

/* FUN_10002fb0 @ 0x10012fb0 (34 bytes, 10 insns) */
void f_10012fb0(void) {
  FTRACE(0x10012fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012fb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012fb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10012fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10012fba push 0x10020674 */
  push32((uint32_t)(0x10020674u));
  /* 10012fbf push 0x100237a8 */
  push32((uint32_t)(0x100237a8u));
  /* 10012fc4 call 0x10016ef0 */
  push32(0x10012fc9u); f_10016ef0();
  /* 10012fc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012fcc mov eax, 0x100237a8 */
  EAX = (0x100237a8u);
  /* 10012fd1 ret  */
  ESPCHK(0x10012fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x10012fe0 (45 bytes, 16 insns) */
void f_10012fe0(void) {
  FTRACE(0x10012fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10012fe0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10012fe4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10012fe8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10012fed push eax */
  push32((uint32_t)(EAX));
  /* 10012fee push ecx */
  push32((uint32_t)(ECX));
  /* 10012fef call 0x100127c0 */
  push32(0x10012ff4u); f_100127c0();
  /* 10012ff4 mov ecx, eax */
  ECX = (EAX);
  /* 10012ff6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10012ffa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10012ffd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10013000 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10013003 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10013006 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10013009 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1001300a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001300c ret  */
  ESPCHK(0x10012fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003010 @ 0x10013010 (171 bytes, 77 insns) */
void f_10013010(void) {
  FTRACE(0x10013010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10013010 push ebx */
  push32((uint32_t)(EBX));
  /* 10013011 push ebp */
  push32((uint32_t)(EBP));
  /* 10013012 push esi */
  push32((uint32_t)(ESI));
  /* 10013013 push edi */
  push32((uint32_t)(EDI));
  /* 10013014 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10013018 push edi */
  push32((uint32_t)(EDI));
  /* 10013019 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001301fu);
  /* 1001301f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10013023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013026 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013028 jl 0x10013031 */
  if ((C.sf!=C.of)) goto L_10013031;
  /* 1001302a pop edi */
  EDI = (pop32());
  /* 1001302b pop esi */
  ESI = (pop32());
  /* 1001302c pop ebp */
  EBP = (pop32());
  /* 1001302d mov al, 1 */
  AL = (0x1u);
  /* 1001302f pop ebx */
  EBX = (pop32());
  /* 10013030 ret  */
  ESPCHK(0x10013010u, _esp0);
  ESP += 4; return;
L_10013031:;
  /* 10013031 push edi */
  push32((uint32_t)(EDI));
  /* 10013032 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013038u);
  /* 10013038 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 1001303c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001303e push esi */
  push32((uint32_t)(ESI));
  /* 1001303f push edi */
  push32((uint32_t)(EDI));
  /* 10013040 push ebp */
  push32((uint32_t)(EBP));
  /* 10013041 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10013045 call 0x10012fe0 */
  push32(0x1001304au); f_10012fe0();
  /* 1001304a push ebp */
  push32((uint32_t)(EBP));
  /* 1001304b mov ebx, eax */
  EBX = (EAX);
  /* 1001304d call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013053u);
  /* 10013053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013056 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013058 jle 0x100130b4 */
  if ((C.zf||C.sf!=C.of)) goto L_100130b4;
  /* 1001305a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013060 jle 0x100130b4 */
  if ((C.zf||C.sf!=C.of)) goto L_100130b4;
  /* 10013062 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10013067 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10013069 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1001306b sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 1001306e mov eax, edx */
  EAX = (EDX);
  /* 10013070 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10013073 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10013075 mov ebx, edx */
  EBX = (EDX);
L_10013077:;
  /* 10013077 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001307a mov eax, 0xf */
  EAX = (0xfu);
  /* 1001307f jg 0x10013083 */
  if ((!C.zf&&C.sf==C.of)) goto L_10013083;
  /* 10013081 mov eax, ebx */
  EAX = (EBX);
L_10013083:;
  /* 10013083 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013085 jge 0x10013096 */
  if ((C.sf==C.of)) goto L_10013096;
  /* 10013087 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013089 push ebp */
  push32((uint32_t)(EBP));
  /* 1001308a push edi */
  push32((uint32_t)(EDI));
  /* 1001308b call 0x10012690 */
  push32(0x10013090u); f_10012690();
  /* 10013090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013093 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10013094 jmp 0x10013077 */
  goto L_10013077;
L_10013096:;
  /* 10013096 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1001309a push ecx */
  push32((uint32_t)(ECX));
  /* 1001309b push edi */
  push32((uint32_t)(EDI));
  /* 1001309c push ebp */
  push32((uint32_t)(EBP));
  /* 1001309d call 0x10012fe0 */
  push32(0x100130a2u); f_10012fe0();
  /* 100130a2 push eax */
  push32((uint32_t)(EAX));
  /* 100130a3 push edi */
  push32((uint32_t)(EDI));
  /* 100130a4 push ebp */
  push32((uint32_t)(EBP));
  /* 100130a5 call 0x10012690 */
  push32(0x100130aau); f_10012690();
  /* 100130aa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100130ad mov al, 1 */
  AL = (0x1u);
  /* 100130af pop edi */
  EDI = (pop32());
  /* 100130b0 pop esi */
  ESI = (pop32());
  /* 100130b1 pop ebp */
  EBP = (pop32());
  /* 100130b2 pop ebx */
  EBX = (pop32());
  /* 100130b3 ret  */
  ESPCHK(0x10013010u, _esp0);
  ESP += 4; return;
L_100130b4:;
  /* 100130b4 pop edi */
  EDI = (pop32());
  /* 100130b5 pop esi */
  ESI = (pop32());
  /* 100130b6 pop ebp */
  EBP = (pop32());
  /* 100130b7 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 100130b9 pop ebx */
  EBX = (pop32());
  /* 100130ba ret  */
  ESPCHK(0x10013010u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c0 @ 0x100130c0 (369 bytes, 82 insns) */
void f_100130c0(void) {
  FTRACE(0x100130c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100130c0 push ebx */
  push32((uint32_t)(EBX));
  /* 100130c1 push esi */
  push32((uint32_t)(ESI));
  /* 100130c2 call dword ptr [0x10026500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026500))), 0x100130c8u);
  /* 100130c8 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 100130cd mov dword ptr [0x100262b4], eax */
  w32((uint32_t)(0x100262b4), (EAX));
  /* 100130d2 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100130d8u);
  /* 100130d8 mov ebx, 1 */
  EBX = (0x1u);
  /* 100130dd mov esi, eax */
  ESI = (EAX);
  /* 100130df push ebx */
  push32((uint32_t)(EBX));
  /* 100130e0 call 0x100127b0 */
  push32(0x100130e5u); f_100127b0();
  /* 100130e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 100130e7 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100130e9 call 0x100127b0 */
  push32(0x100130eeu); f_100127b0();
  /* 100130ee push 5 */
  push32((uint32_t)(0x5u));
  /* 100130f0 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100130f2 call 0x100127b0 */
  push32(0x100130f7u); f_100127b0();
  /* 100130f7 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100130f9 mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 100130fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10013100 mov dword ptr [0x100261b0], esi */
  w32((uint32_t)(0x100261b0), (ESI));
  /* 10013106 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10013109 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1001310c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1001310f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10013112 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10013115 mov ecx, dword ptr [eax + 0x10023af0] */
  ECX = (r32((uint32_t)(EAX + 0x10023af0)));
  /* 1001311b lea edx, [eax + 0x10023960] */
  EDX = ((uint32_t)(EAX + 0x10023960));
  /* 10013121 mov dword ptr [0x100261c0], edx */
  w32((uint32_t)(0x100261c0), (EDX));
  /* 10013127 lea edx, [eax + 0x10023af4] */
  EDX = ((uint32_t)(EAX + 0x10023af4));
  /* 1001312d mov dword ptr [0x10026604], ecx */
  w32((uint32_t)(0x10026604), (ECX));
  /* 10013133 mov ecx, dword ptr [eax + 0x10023c84] */
  ECX = (r32((uint32_t)(EAX + 0x10023c84)));
  /* 10013139 mov dword ptr [0x100261c4], edx */
  w32((uint32_t)(0x100261c4), (EDX));
  /* 1001313f lea edx, [eax + 0x10023c88] */
  EDX = ((uint32_t)(EAX + 0x10023c88));
  /* 10013145 mov dword ptr [0x10026608], ecx */
  w32((uint32_t)(0x10026608), (ECX));
  /* 1001314b mov dword ptr [0x1002624c], edx */
  w32((uint32_t)(0x1002624c), (EDX));
  /* 10013151 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013157u);
  /* 10013157 push 0 */
  push32((uint32_t)(0x0u));
  /* 10013159 mov dword ptr [0x10026290], eax */
  w32((uint32_t)(0x10026290), (EAX));
  /* 1001315e call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013164u);
  /* 10013164 push 2 */
  push32((uint32_t)(0x2u));
  /* 10013166 mov dword ptr [0x10023620], eax */
  w32((uint32_t)(0x10023620), (EAX));
  /* 1001316b call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013171u);
  /* 10013171 push 4 */
  push32((uint32_t)(0x4u));
  /* 10013173 mov dword ptr [0x10026380], eax */
  w32((uint32_t)(0x10026380), (EAX));
  /* 10013178 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001317eu);
  /* 1001317e push 5 */
  push32((uint32_t)(0x5u));
  /* 10013180 mov dword ptr [0x10023728], eax */
  w32((uint32_t)(0x10023728), (EAX));
  /* 10013185 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001318bu);
  /* 1001318b push ebx */
  push32((uint32_t)(EBX));
  /* 1001318c mov dword ptr [0x100260e8], eax */
  w32((uint32_t)(0x100260e8), (EAX));
  /* 10013191 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013197u);
  /* 10013197 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001319a mov dword ptr [0x10026338], eax */
  w32((uint32_t)(0x10026338), (EAX));
  /* 1001319f call 0x100126f0 */
  push32(0x100131a4u); f_100126f0();
  /* 100131a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100131a6 jne 0x100131b2 */
  if (!C.zf) goto L_100131b2;
  /* 100131a8 mov dword ptr [0x1001f248], 4 */
  w32((uint32_t)(0x1001f248), (0x4u));
L_100131b2:;
  /* 100131b2 push 0x1001f114 */
  push32((uint32_t)(0x1001f114u));
  /* 100131b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100131b9 call dword ptr [0x1002650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002650c))), 0x100131bfu);
  /* 100131bf push 0x10026598 */
  push32((uint32_t)(0x10026598u));
  /* 100131c4 call 0x100127a0 */
  push32(0x100131c9u); f_100127a0();
  /* 100131c9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100131cb push 0x1001f244 */
  push32((uint32_t)(0x1001f244u));
  /* 100131d0 call 0x10012780 */
  push32(0x100131d5u); f_10012780();
  /* 100131d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100131d8 mov byte ptr [0x10026188], bl */
  w8((uint32_t)(0x10026188), (BL));
  /* 100131de mov byte ptr [0x1002618a], bl */
  w8((uint32_t)(0x1002618a), (BL));
  /* 100131e4 mov byte ptr [0x1002618c], bl */
  w8((uint32_t)(0x1002618c), (BL));
  /* 100131ea mov byte ptr [0x1002618d], bl */
  w8((uint32_t)(0x1002618d), (BL));
  /* 100131f0 mov byte ptr [0x10026323], bl */
  w8((uint32_t)(0x10026323), (BL));
  /* 100131f6 mov byte ptr [0x10026321], bl */
  w8((uint32_t)(0x10026321), (BL));
  /* 100131fc mov byte ptr [0x10026324], bl */
  w8((uint32_t)(0x10026324), (BL));
  /* 10013202 mov byte ptr [0x10026325], bl */
  w8((uint32_t)(0x10026325), (BL));
  /* 10013208 pop esi */
  ESI = (pop32());
  /* 10013209 mov byte ptr [0x1002618b], 0 */
  w8((uint32_t)(0x1002618b), (0x0u));
  /* 10013210 mov byte ptr [0x10026189], 0 */
  w8((uint32_t)(0x10026189), (0x0u));
  /* 10013217 mov byte ptr [0x10026320], 0 */
  w8((uint32_t)(0x10026320), (0x0u));
  /* 1001321e mov byte ptr [0x10026322], 0 */
  w8((uint32_t)(0x10026322), (0x0u));
  /* 10013225 mov dword ptr [0x1002664c], 0 */
  w32((uint32_t)(0x1002664c), (0x0u));
  /* 1001322f pop ebx */
  EBX = (pop32());
  /* 10013230 ret  */
  ESPCHK(0x100130c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003240 @ 0x10013240 (85 bytes, 29 insns) */
void f_10013240(void) {
  FTRACE(0x10013240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10013240 mov eax, dword ptr [0x10025f58] */
  EAX = (r32((uint32_t)(0x10025f58)));
  /* 10013245 push esi */
  push32((uint32_t)(ESI));
  /* 10013246 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013249 jg 0x10013293 */
  if ((!C.zf&&C.sf==C.of)) goto L_10013293;
  /* 1001324b push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10013250 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013256u);
  /* 10013256 mov ecx, eax */
  ECX = (EAX);
  /* 10013258 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 1001325d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1001325f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10013262 mov eax, edx */
  EAX = (EDX);
  /* 10013264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013267 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1001326a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001326c mov esi, edx */
  ESI = (EDX);
  /* 1001326e je 0x10013293 */
  if (C.zf) goto L_10013293;
  /* 10013270 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013272 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013274 push esi */
  push32((uint32_t)(ESI));
  /* 10013275 push 0x10023700 */
  push32((uint32_t)(0x10023700u));
  /* 1001327a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013280u);
  /* 10013280 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013282 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013284 push esi */
  push32((uint32_t)(ESI));
  /* 10013285 push 0x10023640 */
  push32((uint32_t)(0x10023640u));
  /* 1001328a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013290u);
  /* 10013290 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013293:;
  /* 10013293 pop esi */
  ESI = (pop32());
  /* 10013294 ret  */
  ESPCHK(0x10013240u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x100132a0 (1 bytes, 1 insns) */
void f_100132a0(void) {
  FTRACE(0x100132a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100132a0 ret  */
  ESPCHK(0x100132a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x100132b0 (157 bytes, 43 insns) */
void f_100132b0(void) {
  FTRACE(0x100132b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100132b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100132b2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100132b4 push 0x10026350 */
  push32((uint32_t)(0x10026350u));
  /* 100132b9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100132bfu);
  /* 100132bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100132c1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100132c3 push 0x10026358 */
  push32((uint32_t)(0x10026358u));
  /* 100132c8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100132ceu);
  /* 100132ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100132d0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100132d2 push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 100132d7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100132ddu);
  /* 100132dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100132df push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100132e1 push 0x10026348 */
  push32((uint32_t)(0x10026348u));
  /* 100132e6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100132ecu);
  /* 100132ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100132ee push 0xa */
  push32((uint32_t)(0xau));
  /* 100132f0 push 0x10026360 */
  push32((uint32_t)(0x10026360u));
  /* 100132f5 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100132fbu);
  /* 100132fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100132fd push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100132ff push 0x10026298 */
  push32((uint32_t)(0x10026298u));
  /* 10013304 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001330au);
  /* 1001330a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001330d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001330f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10013311 push 0x10026280 */
  push32((uint32_t)(0x10026280u));
  /* 10013316 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001331cu);
  /* 1001331c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001331e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10013320 push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 10013325 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001332bu);
  /* 1001332b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001332d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1001332f push 0x100262a0 */
  push32((uint32_t)(0x100262a0u));
  /* 10013334 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001333au);
  /* 1001333a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001333c push 0xa */
  push32((uint32_t)(0xau));
  /* 1001333e push 0x100262a8 */
  push32((uint32_t)(0x100262a8u));
  /* 10013343 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013349u);
  /* 10013349 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001334c ret  */
  ESPCHK(0x100132b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003350 @ 0x10013350 (79 bytes, 22 insns) */
void f_10013350(void) {
  FTRACE(0x10013350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10013350 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013352 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013354 push 0x10023910 */
  push32((uint32_t)(0x10023910u));
  /* 10013359 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001335fu);
  /* 1001335f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013361 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013363 push 0x10023918 */
  push32((uint32_t)(0x10023918u));
  /* 10013368 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001336eu);
  /* 1001336e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013370 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013372 push 0x10023908 */
  push32((uint32_t)(0x10023908u));
  /* 10013377 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001337du);
  /* 1001337d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001337f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013381 push 0x10025f78 */
  push32((uint32_t)(0x10025f78u));
  /* 10013386 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001338cu);
  /* 1001338c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001338e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013390 push 0x10025f68 */
  push32((uint32_t)(0x10025f68u));
  /* 10013395 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001339bu);
  /* 1001339b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001339e ret  */
  ESPCHK(0x10013350u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x100133a0 (64 bytes, 18 insns) */
void f_100133a0(void) {
  FTRACE(0x100133a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100133a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100133a2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100133a4 push 0x10026098 */
  push32((uint32_t)(0x10026098u));
  /* 100133a9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100133afu);
  /* 100133af push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100133b1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100133b3 push 0x100260a0 */
  push32((uint32_t)(0x100260a0u));
  /* 100133b8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100133beu);
  /* 100133be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100133c0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100133c2 push 0x100260a8 */
  push32((uint32_t)(0x100260a8u));
  /* 100133c7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100133cdu);
  /* 100133cd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100133cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100133d1 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 100133d6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100133dcu);
  /* 100133dc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100133df ret  */
  ESPCHK(0x100133a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033e0 @ 0x100133e0 (3787 bytes, 1079 insns) */
void f_100133e0(void) {
  FTRACE(0x100133e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100133e0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100133e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100133e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100133e5 push esi */
  push32((uint32_t)(ESI));
  /* 100133e6 push edi */
  push32((uint32_t)(EDI));
  /* 100133e7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 100133ec push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100133f1 call dword ptr [0x10026518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026518))), 0x100133f7u);
  /* 100133f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100133f9 call 0x100127e0 */
  push32(0x100133feu); f_100127e0();
  /* 100133fe push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10013400 push 0 */
  push32((uint32_t)(0x0u));
  /* 10013402 call 0x100126c0 */
  push32(0x10013407u); f_100126c0();
  /* 10013407 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10013409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001340b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1001340f call 0x100126c0 */
  push32(0x10013414u); f_100126c0();
  /* 10013414 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10013416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10013418 mov edi, eax */
  EDI = (EAX);
  /* 1001341a call 0x100126c0 */
  push32(0x1001341fu); f_100126c0();
  /* 1001341f push 0xe */
  push32((uint32_t)(0xeu));
  /* 10013421 push 0 */
  push32((uint32_t)(0x0u));
  /* 10013423 mov esi, eax */
  ESI = (EAX);
  /* 10013425 call 0x100126c0 */
  push32(0x1001342au); f_100126c0();
  /* 1001342a push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 1001342f mov ebx, eax */
  EBX = (EAX);
  /* 10013431 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013437u);
  /* 10013437 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1001343a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001343f add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10013441 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 10013445 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 1001344a lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 1001344d mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 10013451 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10013457u);
  /* 10013457 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 1001345c mov ebx, eax */
  EBX = (EAX);
  /* 1001345e call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013464u);
  /* 10013464 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10013469 mov ebp, eax */
  EBP = (EAX);
  /* 1001346b call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10013471u);
  /* 10013471 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10013476 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 1001347a call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013480u);
  /* 10013480 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013483 mov edi, eax */
  EDI = (EAX);
  /* 10013485 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 1001348a call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10013490u);
  /* 10013490 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10013495 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10013499 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001349fu);
  /* 1001349f push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 100134a4 mov esi, eax */
  ESI = (EAX);
  /* 100134a6 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100134acu);
  /* 100134ac push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 100134b1 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 100134b5 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100134bbu);
  /* 100134bb mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 100134bf mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 100134c3 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100134c5 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100134c9 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100134cb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100134cd sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100134cf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100134d1 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100134d3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100134d5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100134d7 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 100134dc add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100134de mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 100134e2 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100134e8u);
  /* 100134e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100134ea mov bl, 1 */
  BL = (0x1u);
  /* 100134ec call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100134f2u);
  /* 100134f2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100134f5 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100134fa jle 0x1001352a */
  if ((C.zf||C.sf!=C.of)) goto L_1001352a;
  /* 100134fc push 1 */
  push32((uint32_t)(0x1u));
  /* 100134fe call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013504u);
  /* 10013504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013507 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001350c jle 0x1001352a */
  if ((C.zf||C.sf!=C.of)) goto L_1001352a;
  /* 1001350e push 4 */
  push32((uint32_t)(0x4u));
  /* 10013510 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013516u);
  /* 10013516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013519 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001351e jle 0x1001352a */
  if ((C.zf||C.sf!=C.of)) goto L_1001352a;
  /* 10013520 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10013524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10013526 jne 0x1001352a */
  if (!C.zf) goto L_1001352a;
  /* 10013528 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_1001352a:;
  /* 1001352a push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 1001352f call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013535u);
  /* 10013535 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013537 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1001353b call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013541u);
  /* 10013541 push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10013546 mov esi, eax */
  ESI = (EAX);
  /* 10013548 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001354eu);
  /* 1001354e push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10013553 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 10013557 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001355du);
  /* 1001355d push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 10013562 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013568u);
  /* 10013568 push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 1001356d mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 10013571 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013577u);
  /* 10013577 push 0x10026330 */
  push32((uint32_t)(0x10026330u));
  /* 1001357c mov edi, eax */
  EDI = (EAX);
  /* 1001357e call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013584u);
  /* 10013584 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10013589 mov ebp, eax */
  EBP = (EAX);
  /* 1001358b call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013591u);
  /* 10013591 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10013593 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10013595 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10013597 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013599 push 0x10026110 */
  push32((uint32_t)(0x10026110u));
  /* 1001359e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 100135a2 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 100135a7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100135adu);
  /* 100135ad push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100135af push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100135b1 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 100135b6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100135bcu);
  /* 100135bc push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 100135c1 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100135c7u);
  /* 100135c7 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 100135cc mov edi, eax */
  EDI = (EAX);
  /* 100135ce call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100135d4u);
  /* 100135d4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100135d7 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100135d9 je 0x100135e0 */
  if (C.zf) goto L_100135e0;
  /* 100135db mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_100135e0:;
  /* 100135e0 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100135e4 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 100135e6 je 0x10013fad */
  if (C.zf) goto L_10013fad;
  /* 100135ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100135ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100135f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100135f2 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 100135f7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100135fdu);
  /* 100135fd push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 10013602 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013608u);
  /* 10013608 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001360b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001360d je 0x100142a3 */
  if (C.zf) goto L_100142a3;
  /* 10013613 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013615 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013617 push 0x10026378 */
  push32((uint32_t)(0x10026378u));
  /* 1001361c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013622u);
  /* 10013622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013625 call dword ptr [0x10026570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026570))), 0x1001362bu);
  /* 1001362b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001362d jne 0x10013670 */
  if (!C.zf) goto L_10013670;
  /* 1001362f cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013635 jle 0x1001365c */
  if ((C.zf||C.sf!=C.of)) goto L_1001365c;
  /* 10013637 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013639 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001363b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001363d push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 10013642 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013648u);
  /* 10013648 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001364a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001364c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001364e push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10013653 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013659u);
  /* 10013659 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001365c:;
  /* 1001365c push 1 */
  push32((uint32_t)(0x1u));
  /* 1001365e push 1 */
  push32((uint32_t)(0x1u));
  /* 10013660 push 0 */
  push32((uint32_t)(0x0u));
  /* 10013662 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x10013668u);
  /* 10013668 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001366b jmp 0x1001377e */
  goto L_1001377e;
L_10013670:;
  /* 10013670 push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 10013675 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x1001367bu);
  /* 1001367b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001367e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013680 je 0x100136aa */
  if (C.zf) goto L_100136aa;
  /* 10013682 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013688 jle 0x10013692 */
  if ((C.zf||C.sf!=C.of)) goto L_10013692;
  /* 1001368a push 6 */
  push32((uint32_t)(0x6u));
  /* 1001368c push 8 */
  push32((uint32_t)(0x8u));
  /* 1001368e push 9 */
  push32((uint32_t)(0x9u));
  /* 10013690 jmp 0x100136d0 */
  goto L_100136d0;
L_10013692:;
  /* 10013692 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013698 jle 0x100136a2 */
  if ((C.zf||C.sf!=C.of)) goto L_100136a2;
  /* 1001369a push 3 */
  push32((uint32_t)(0x3u));
  /* 1001369c push 5 */
  push32((uint32_t)(0x5u));
  /* 1001369e push 9 */
  push32((uint32_t)(0x9u));
  /* 100136a0 jmp 0x100136d0 */
  goto L_100136d0;
L_100136a2:;
  /* 100136a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100136a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100136a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 100136a8 jmp 0x100136d0 */
  goto L_100136d0;
L_100136aa:;
  /* 100136aa cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100136b0 jle 0x100136ba */
  if ((C.zf||C.sf!=C.of)) goto L_100136ba;
  /* 100136b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 100136b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 100136b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 100136b8 jmp 0x100136d0 */
  goto L_100136d0;
L_100136ba:;
  /* 100136ba cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100136c0 jle 0x100136ca */
  if ((C.zf||C.sf!=C.of)) goto L_100136ca;
  /* 100136c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 100136c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100136c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 100136c8 jmp 0x100136d0 */
  goto L_100136d0;
L_100136ca:;
  /* 100136ca push 4 */
  push32((uint32_t)(0x4u));
  /* 100136cc push 4 */
  push32((uint32_t)(0x4u));
  /* 100136ce push 0xa */
  push32((uint32_t)(0xau));
L_100136d0:;
  /* 100136d0 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x100136d6u);
  /* 100136d6 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 100136da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100136dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100136df mov edi, 0x15e */
  EDI = (0x15eu);
  /* 100136e4 je 0x100136eb */
  if (C.zf) goto L_100136eb;
  /* 100136e6 mov edi, 0x12c */
  EDI = (0x12cu);
L_100136eb:;
  /* 100136eb cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100136ee jge 0x1001370c */
  if ((C.sf==C.of)) goto L_1001370c;
  /* 100136f0 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100136f6 jle 0x1001370c */
  if ((C.zf||C.sf!=C.of)) goto L_1001370c;
  /* 100136f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100136fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100136fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100136fe push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 10013703 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013709u);
  /* 10013709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001370c:;
  /* 1001370c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013712 jle 0x1001374d */
  if ((C.zf||C.sf!=C.of)) goto L_1001374d;
  /* 10013714 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10013716 je 0x10013732 */
  if (C.zf) goto L_10013732;
  /* 10013718 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001371a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1001371f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10013724 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 10013729 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001372fu);
  /* 1001372f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013732:;
  /* 10013732 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013738 jle 0x1001374d */
  if ((C.zf||C.sf!=C.of)) goto L_1001374d;
  /* 1001373a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001373c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001373e push edi */
  push32((uint32_t)(EDI));
  /* 1001373f push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10013744 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001374au);
  /* 1001374a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001374d:;
  /* 1001374d push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10013752 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013758u);
  /* 10013758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001375b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001375d je 0x1001377e */
  if (C.zf) goto L_1001377e;
  /* 1001375f cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013765 jle 0x1001377e */
  if ((C.zf||C.sf!=C.of)) goto L_1001377e;
  /* 10013767 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 1001376c call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013772u);
  /* 10013772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10013777 jle 0x1001377e */
  if ((C.zf||C.sf!=C.of)) goto L_1001377e;
  /* 10013779 call 0x100132b0 */
  push32(0x1001377eu); f_100132b0();
L_1001377e:;
  /* 1001377e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10013782 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013784 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013787 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10013789 jge 0x1001378f */
  if ((C.sf==C.of)) goto L_1001378f;
  /* 1001378b push 5 */
  push32((uint32_t)(0x5u));
  /* 1001378d jmp 0x10013793 */
  goto L_10013793;
L_1001378f:;
  /* 1001378f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10013792 push eax */
  push32((uint32_t)(EAX));
L_10013793:;
  /* 10013793 push 0x10025f90 */
  push32((uint32_t)(0x10025f90u));
  /* 10013798 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001379eu);
  /* 1001379e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 100137a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100137a5 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100137a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100137aa jge 0x100137c0 */
  if ((C.sf==C.of)) goto L_100137c0;
  /* 100137ac push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100137ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 100137b0 push 0x100238e8 */
  push32((uint32_t)(0x100238e8u));
  /* 100137b5 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100137bbu);
  /* 100137bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100137be jmp 0x100137fa */
  goto L_100137fa;
L_100137c0:;
  /* 100137c0 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 100137c3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100137c5 push ecx */
  push32((uint32_t)(ECX));
  /* 100137c6 push 0x100238e8 */
  push32((uint32_t)(0x100238e8u));
  /* 100137cb call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100137d1u);
  /* 100137d1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100137d3 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 100137d6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100137d8 push edx */
  push32((uint32_t)(EDX));
  /* 100137d9 push 0x100238e8 */
  push32((uint32_t)(0x100238e8u));
  /* 100137de call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100137e4u);
  /* 100137e4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100137e6 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100137e9 push 0xa */
  push32((uint32_t)(0xau));
  /* 100137eb push edi */
  push32((uint32_t)(EDI));
  /* 100137ec push 0x100238e8 */
  push32((uint32_t)(0x100238e8u));
  /* 100137f1 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100137f7u);
  /* 100137f7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100137fa:;
  /* 100137fa push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100137fc push 0 */
  push32((uint32_t)(0x0u));
  /* 100137fe call 0x100126c0 */
  push32(0x10013803u); f_100126c0();
  /* 10013803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10013808 je 0x10013867 */
  if (C.zf) goto L_10013867;
  /* 1001380a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001380c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001380e push 0x100262e8 */
  push32((uint32_t)(0x100262e8u));
  /* 10013813 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013819u);
  /* 10013819 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001381b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001381d push 0x100262d0 */
  push32((uint32_t)(0x100262d0u));
  /* 10013822 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013828u);
  /* 10013828 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001382a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001382c push 0x100262e0 */
  push32((uint32_t)(0x100262e0u));
  /* 10013831 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013837u);
  /* 10013837 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013839 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001383b push 0x100262c0 */
  push32((uint32_t)(0x100262c0u));
  /* 10013840 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013846u);
  /* 10013846 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013848 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001384a push 0x100262c8 */
  push32((uint32_t)(0x100262c8u));
  /* 1001384f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013855u);
  /* 10013855 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013857 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013859 push 0x100262b8 */
  push32((uint32_t)(0x100262b8u));
  /* 1001385e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013864u);
  /* 10013864 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013867:;
  /* 10013867 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013869 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001386b push 3 */
  push32((uint32_t)(0x3u));
  /* 1001386d push 0x100238a0 */
  push32((uint32_t)(0x100238a0u));
  /* 10013872 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013878u);
  /* 10013878 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001387a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001387c push 1 */
  push32((uint32_t)(0x1u));
  /* 1001387e push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10013883 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013889u);
  /* 10013889 push 5 */
  push32((uint32_t)(0x5u));
  /* 1001388b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001388d push 2 */
  push32((uint32_t)(0x2u));
  /* 1001388f push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10013894 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001389au);
  /* 1001389a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1001389e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100138a1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100138a3 jne 0x100138b9 */
  if (!C.zf) goto L_100138b9;
  /* 100138a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100138a7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100138a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 100138ab push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100138b0 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100138b6u);
  /* 100138b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100138b9:;
  /* 100138b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100138bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100138bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100138bf push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 100138c4 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100138cau);
  /* 100138ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100138cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100138ce push 1 */
  push32((uint32_t)(0x1u));
  /* 100138d0 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 100138d5 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100138dbu);
  /* 100138db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100138dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100138df push 1 */
  push32((uint32_t)(0x1u));
  /* 100138e1 push 0x10025fd0 */
  push32((uint32_t)(0x10025fd0u));
  /* 100138e6 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100138ecu);
  /* 100138ec push 5 */
  push32((uint32_t)(0x5u));
  /* 100138ee push 0xa */
  push32((uint32_t)(0xau));
  /* 100138f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100138f2 push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 100138f7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100138fdu);
  /* 100138fd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013900 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013902 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013904 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013906 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 1001390b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013911u);
  /* 10013911 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013913 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10013915 push 0x10023660 */
  push32((uint32_t)(0x10023660u));
  /* 1001391a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013920u);
  /* 10013920 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10013925 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001392bu);
  /* 1001392b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001392e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10013930 jle 0x10013957 */
  if ((C.zf||C.sf!=C.of)) goto L_10013957;
  /* 10013932 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10013934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013938 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 1001393d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013943u);
  /* 10013943 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013945 push 5 */
  push32((uint32_t)(0x5u));
  /* 10013947 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013949 push 0x100260f8 */
  push32((uint32_t)(0x100260f8u));
  /* 1001394e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013954u);
  /* 10013954 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013957:;
  /* 10013957 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013959 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001395b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001395d push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10013962 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013968u);
  /* 10013968 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001396b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001396d jne 0x10013983 */
  if (!C.zf) goto L_10013983;
  /* 1001396f push 0xa */
  push32((uint32_t)(0xau));
  /* 10013971 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013973 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013975 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 1001397a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013980u);
  /* 10013980 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013983:;
  /* 10013983 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013985 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013987 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013989 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 1001398e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013994u);
  /* 10013994 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013997 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001399a jle 0x100139b0 */
  if ((C.zf||C.sf!=C.of)) goto L_100139b0;
  /* 1001399c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001399e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100139a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100139a2 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 100139a7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100139adu);
  /* 100139ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100139b0:;
  /* 100139b0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100139b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100139b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100139b6 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 100139bb call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100139c1u);
  /* 100139c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 100139c3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100139c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 100139c7 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 100139cc call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100139d2u);
  /* 100139d2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100139d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100139d6 push 0x10026078 */
  push32((uint32_t)(0x10026078u));
  /* 100139db call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100139e1u);
  /* 100139e1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100139e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100139e5 push 0x10026030 */
  push32((uint32_t)(0x10026030u));
  /* 100139ea call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100139f0u);
  /* 100139f0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100139f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100139f4 push 0x10026038 */
  push32((uint32_t)(0x10026038u));
  /* 100139f9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100139ffu);
  /* 100139ff add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013a02 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013a04 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013a06 push 0x10026040 */
  push32((uint32_t)(0x10026040u));
  /* 10013a0b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013a11u);
  /* 10013a11 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013a13 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10013a15 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10013a1a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013a20u);
  /* 10013a20 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013a22 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013a24 push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10013a29 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013a2fu);
  /* 10013a2f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013a31 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10013a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013a35 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10013a3a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013a40u);
  /* 10013a40 push 5 */
  push32((uint32_t)(0x5u));
  /* 10013a42 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10013a46 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10013a4b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013a51u);
  /* 10013a51 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013a54 push 5 */
  push32((uint32_t)(0x5u));
  /* 10013a56 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013a58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013a5a push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10013a5f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013a65u);
  /* 10013a65 push 5 */
  push32((uint32_t)(0x5u));
  /* 10013a67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013a69 push 5 */
  push32((uint32_t)(0x5u));
  /* 10013a6b push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10013a70 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013a76u);
  /* 10013a76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013a78 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10013a7a push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10013a7f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013a85u);
  /* 10013a85 call 0x100126b0 */
  push32(0x10013a8au); f_100126b0();
  /* 10013a8a push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10013a8f mov edi, eax */
  EDI = (EAX);
  /* 10013a91 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013a97u);
  /* 10013a97 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013a9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013a9c je 0x10013abf */
  if (C.zf) goto L_10013abf;
  /* 10013a9e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013aa0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013aa2 push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10013aa7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013aadu);
  /* 10013aad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013aaf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013ab1 push 0x10023870 */
  push32((uint32_t)(0x10023870u));
  /* 10013ab6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013abcu);
  /* 10013abc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013abf:;
  /* 10013abf push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10013ac4 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013acau);
  /* 10013aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013acd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013acf je 0x10013af7 */
  if (C.zf) goto L_10013af7;
  /* 10013ad1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013ad3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013ad5 push 0x10023940 */
  push32((uint32_t)(0x10023940u));
  /* 10013ada call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013ae0u);
  /* 10013ae0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013ae2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10013ae4 push 0x10023880 */
  push32((uint32_t)(0x10023880u));
  /* 10013ae9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013aefu);
  /* 10013aef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013af2 call 0x100133a0 */
  push32(0x10013af7u); f_100133a0();
L_10013af7:;
  /* 10013af7 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 10013afc call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013b02u);
  /* 10013b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013b05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013b07 je 0x10013b2e */
  if (C.zf) goto L_10013b2e;
  /* 10013b09 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013b0b push 0xa */
  push32((uint32_t)(0xau));
  /* 10013b0d push 0xa */
  push32((uint32_t)(0xau));
  /* 10013b0f push 0x10023668 */
  push32((uint32_t)(0x10023668u));
  /* 10013b14 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013b1au);
  /* 10013b1a push 0xa */
  push32((uint32_t)(0xau));
  /* 10013b1c push 3 */
  push32((uint32_t)(0x3u));
  /* 10013b1e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10013b20 push 0x10023668 */
  push32((uint32_t)(0x10023668u));
  /* 10013b25 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013b2bu);
  /* 10013b2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013b2e:;
  /* 10013b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10013b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013b32 call 0x10012670 */
  push32(0x10013b37u); f_10012670();
  /* 10013b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10013b39 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013b3fu);
  /* 10013b3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013b42 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013b47 jle 0x10013b8b */
  if ((C.zf||C.sf!=C.of)) goto L_10013b8b;
  /* 10013b49 push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 10013b4e call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013b54u);
  /* 10013b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013b57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013b59 je 0x10013b8b */
  if (C.zf) goto L_10013b8b;
  /* 10013b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10013b5d call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013b63u);
  /* 10013b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013b66 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013b6b jge 0x10013b8b */
  if ((C.sf==C.of)) goto L_10013b8b;
  /* 10013b6d push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10013b72 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013b78u);
  /* 10013b78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013b7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013b7d jne 0x10013b8b */
  if (!C.zf) goto L_10013b8b;
  /* 10013b7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10013b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013b83 call 0x10012670 */
  push32(0x10013b88u); f_10012670();
  /* 10013b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013b8b:;
  /* 10013b8b push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10013b90 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013b96u);
  /* 10013b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013b99 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013b9b je 0x10013d1c */
  if (C.zf) goto L_10013d1c;
  /* 10013ba1 push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10013ba6 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013bacu);
  /* 10013bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013baf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013bb1 je 0x10013d1c */
  if (C.zf) goto L_10013d1c;
  /* 10013bb7 push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10013bbc call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013bc2u);
  /* 10013bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013bc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013bc7 je 0x10013d1c */
  if (C.zf) goto L_10013d1c;
  /* 10013bcd cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013bd0 je 0x10013bd7 */
  if (C.zf) goto L_10013bd7;
  /* 10013bd2 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013bd5 jne 0x10013c07 */
  if (!C.zf) goto L_10013c07;
L_10013bd7:;
  /* 10013bd7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013bd9 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013bdfu);
  /* 10013bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013be2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013be7 jle 0x10013c07 */
  if ((C.zf||C.sf!=C.of)) goto L_10013c07;
  /* 10013be9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013beb call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013bf1u);
  /* 10013bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013bf4 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013bf9 jge 0x10013c07 */
  if ((C.sf==C.of)) goto L_10013c07;
  /* 10013bfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10013bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10013bff call 0x10012670 */
  push32(0x10013c04u); f_10012670();
  /* 10013c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013c07:;
  /* 10013c07 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10013c0c call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013c12u);
  /* 10013c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013c17 jne 0x10013c49 */
  if (!C.zf) goto L_10013c49;
  /* 10013c19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013c1b call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013c21u);
  /* 10013c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c24 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013c29 jle 0x10013c49 */
  if ((C.zf||C.sf!=C.of)) goto L_10013c49;
  /* 10013c2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10013c2d call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013c33u);
  /* 10013c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c36 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013c3b jge 0x10013c49 */
  if ((C.sf==C.of)) goto L_10013c49;
  /* 10013c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10013c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10013c41 call 0x10012670 */
  push32(0x10013c46u); f_10012670();
  /* 10013c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013c49:;
  /* 10013c49 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10013c4e call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013c54u);
  /* 10013c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013c59 je 0x10013d1c */
  if (C.zf) goto L_10013d1c;
  /* 10013c5f cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013c62 jne 0x10013ca2 */
  if (!C.zf) goto L_10013ca2;
  /* 10013c64 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013c66 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013c6cu);
  /* 10013c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c6f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013c74 jle 0x10013d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10013d77;
  /* 10013c7a push 4 */
  push32((uint32_t)(0x4u));
  /* 10013c7c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013c82u);
  /* 10013c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c85 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013c8a jle 0x10013d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10013d77;
  /* 10013c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013c92 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013c98u);
  /* 10013c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013c9b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013ca0 jmp 0x10013d0c */
  goto L_10013d0c;
L_10013ca2:;
  /* 10013ca2 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013ca5 jne 0x10013ce5 */
  if (!C.zf) goto L_10013ce5;
  /* 10013ca7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013ca9 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013cafu);
  /* 10013caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013cb2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013cb7 jle 0x10013d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10013d77;
  /* 10013cbd push 4 */
  push32((uint32_t)(0x4u));
  /* 10013cbf call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013cc5u);
  /* 10013cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013cc8 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013ccd jle 0x10013d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10013d77;
  /* 10013cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013cd5 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013cdbu);
  /* 10013cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013cde cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013ce3 jmp 0x10013d0c */
  goto L_10013d0c;
L_10013ce5:;
  /* 10013ce5 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013ce8 jne 0x10013d1c */
  if (!C.zf) goto L_10013d1c;
  /* 10013cea push 3 */
  push32((uint32_t)(0x3u));
  /* 10013cec call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013cf2u);
  /* 10013cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013cf5 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013cfa jle 0x10013d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10013d77;
  /* 10013cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 10013cfe call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10013d04u);
  /* 10013d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013d07 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10013d0c:;
  /* 10013d0c jge 0x10013d77 */
  if ((C.sf==C.of)) goto L_10013d77;
  /* 10013d0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10013d10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013d12 call 0x10012670 */
  push32(0x10013d17u); f_10012670();
  /* 10013d17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013d1a jmp 0x10013d77 */
  goto L_10013d77;
L_10013d1c:;
  /* 10013d1c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013d1f jne 0x10013d77 */
  if (!C.zf) goto L_10013d77;
  /* 10013d21 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013d23 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10013d25 push 0x10023768 */
  push32((uint32_t)(0x10023768u));
  /* 10013d2a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013d30u);
  /* 10013d30 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013d32 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013d36 push 0x10026398 */
  push32((uint32_t)(0x10026398u));
  /* 10013d3b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013d41u);
  /* 10013d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013d43 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013d45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10013d47 push 0x10026398 */
  push32((uint32_t)(0x10026398u));
  /* 10013d4c call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013d52u);
  /* 10013d52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013d54 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013d56 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013d58 push 0x10026398 */
  push32((uint32_t)(0x10026398u));
  /* 10013d5d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013d63u);
  /* 10013d63 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013d65 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013d67 push 5 */
  push32((uint32_t)(0x5u));
  /* 10013d69 push 0x10026398 */
  push32((uint32_t)(0x10026398u));
  /* 10013d6e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013d74u);
  /* 10013d74 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013d77:;
  /* 10013d77 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013d7a jle 0x10013dd3 */
  if ((C.zf||C.sf!=C.of)) goto L_10013dd3;
  /* 10013d7c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10013d80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013d82 je 0x10013dd3 */
  if (C.zf) goto L_10013dd3;
  /* 10013d84 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013d86 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10013d88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10013d8a push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10013d8f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013d95u);
  /* 10013d95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013d98 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013d9b jle 0x10013dd3 */
  if ((C.zf||C.sf!=C.of)) goto L_10013dd3;
  /* 10013d9d push 0xa */
  push32((uint32_t)(0xau));
  /* 10013d9f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10013da1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10013da3 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10013da8 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013daeu);
  /* 10013dae push 0xa */
  push32((uint32_t)(0xau));
  /* 10013db0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10013db2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013db4 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10013db9 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013dbfu);
  /* 10013dbf push 0xa */
  push32((uint32_t)(0xau));
  /* 10013dc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013dc3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10013dc5 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10013dca call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013dd0u);
  /* 10013dd0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013dd3:;
  /* 10013dd3 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10013dd7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10013dd9 je 0x10013e17 */
  if (C.zf) goto L_10013e17;
  /* 10013ddb push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10013de0 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013de6u);
  /* 10013de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013de9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013deb je 0x10013e17 */
  if (C.zf) goto L_10013e17;
  /* 10013ded push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10013def push 1 */
  push32((uint32_t)(0x1u));
  /* 10013df1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10013df3 push 0x10026160 */
  push32((uint32_t)(0x10026160u));
  /* 10013df8 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013dfeu);
  /* 10013dfe push 0x10026198 */
  push32((uint32_t)(0x10026198u));
  /* 10013e03 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013e09u);
  /* 10013e09 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 10013e0e call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013e14u);
  /* 10013e14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013e17:;
  /* 10013e17 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10013e1c call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013e22u);
  /* 10013e22 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013e26 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013e28 push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10013e2d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013e33u);
  /* 10013e33 push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10013e38 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013e3eu);
  /* 10013e3e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013e41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013e43 je 0x10013e59 */
  if (C.zf) goto L_10013e59;
  /* 10013e45 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013e47 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013e49 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013e4b push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10013e50 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013e56u);
  /* 10013e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013e59:;
  /* 10013e59 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10013e5b je 0x10013f45 */
  if (C.zf) goto L_10013f45;
  /* 10013e61 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10013e66 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10013e6cu);
  /* 10013e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013e6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013e71 je 0x10013f45 */
  if (C.zf) goto L_10013f45;
  /* 10013e77 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10013e79 jne 0x10013eb1 */
  if (!C.zf) goto L_10013eb1;
  /* 10013e7b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013e7d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013e7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10013e81 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10013e86 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013e8cu);
  /* 10013e8c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013e8e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013e90 push 3 */
  push32((uint32_t)(0x3u));
  /* 10013e92 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10013e97 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013e9du);
  /* 10013e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10013e9f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013ea1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10013ea3 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10013ea8 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013eaeu);
  /* 10013eae add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013eb1:;
  /* 10013eb1 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 10013eb6 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013ebcu);
  /* 10013ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013ebf cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013ec2 jle 0x10013ee5 */
  if ((C.zf||C.sf!=C.of)) goto L_10013ee5;
  /* 10013ec4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013ec6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013ec8 push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 10013ecd call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013ed3u);
  /* 10013ed3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10013ed5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10013ed7 push 0x10026210 */
  push32((uint32_t)(0x10026210u));
  /* 10013edc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013ee2u);
  /* 10013ee2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013ee5:;
  /* 10013ee5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013ee7 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10013ee9 push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10013eee call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013ef4u);
  /* 10013ef4 push 0x10023908 */
  push32((uint32_t)(0x10023908u));
  /* 10013ef9 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10013effu);
  /* 10013eff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013f02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10013f04 je 0x10013f45 */
  if (C.zf) goto L_10013f45;
  /* 10013f06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f08 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f0a push 0x10026168 */
  push32((uint32_t)(0x10026168u));
  /* 10013f0f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013f15u);
  /* 10013f15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f17 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f19 push 0x10026178 */
  push32((uint32_t)(0x10026178u));
  /* 10013f1e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013f24u);
  /* 10013f24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f26 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10013f28 push 0x10026180 */
  push32((uint32_t)(0x10026180u));
  /* 10013f2d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013f33u);
  /* 10013f33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f35 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10013f37 push 0x10026170 */
  push32((uint32_t)(0x10026170u));
  /* 10013f3c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013f42u);
  /* 10013f42 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013f45:;
  /* 10013f45 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10013f47 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10013f49 push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 10013f4e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013f54u);
  /* 10013f54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013f56 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10013f58 push 0x100238e0 */
  push32((uint32_t)(0x100238e0u));
  /* 10013f5d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013f63u);
  /* 10013f63 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10013f68 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10013f6eu);
  /* 10013f6e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10013f71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013f74 jle 0x10013fb1 */
  if ((C.zf||C.sf!=C.of)) goto L_10013fb1;
  /* 10013f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10013f7a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013f7f jle 0x10013fb1 */
  if ((C.zf||C.sf!=C.of)) goto L_10013fb1;
  /* 10013f81 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10013f84 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10013f88 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10013f8b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10013f8d jge 0x10013fa6 */
  if ((C.sf==C.of)) goto L_10013fa6;
  /* 10013f8f push 0xa */
  push32((uint32_t)(0xau));
  /* 10013f91 push 0xa */
  push32((uint32_t)(0xau));
  /* 10013f93 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10013f98 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 10013f9d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013fa3u);
  /* 10013fa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013fa6:;
  /* 10013fa6 call 0x10013350 */
  push32(0x10013fabu); f_10013350();
  /* 10013fab jmp 0x10013fb1 */
  goto L_10013fb1;
L_10013fad:;
  /* 10013fad mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10013fb1:;
  /* 10013fb1 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10013fb3 je 0x10013ff6 */
  if (C.zf) goto L_10013ff6;
  /* 10013fb5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013fb7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10013fb9 push 0x10023630 */
  push32((uint32_t)(0x10023630u));
  /* 10013fbe call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013fc4u);
  /* 10013fc4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013fc6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10013fc8 push 0x10023708 */
  push32((uint32_t)(0x10023708u));
  /* 10013fcd call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013fd3u);
  /* 10013fd3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013fd5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10013fd7 push 0x10023628 */
  push32((uint32_t)(0x10023628u));
  /* 10013fdc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10013fe2u);
  /* 10013fe2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10013fe4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10013fe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10013fe8 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10013fed call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10013ff3u);
  /* 10013ff3 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10013ff6:;
  /* 10013ff6 push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 10013ffb call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014001u);
  /* 10014001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014004 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014006 je 0x10014029 */
  if (C.zf) goto L_10014029;
  /* 10014008 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001400a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001400c push 0x100261f8 */
  push32((uint32_t)(0x100261f8u));
  /* 10014011 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014017u);
  /* 10014017 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014019 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001401b push 0x10026200 */
  push32((uint32_t)(0x10026200u));
  /* 10014020 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014026u);
  /* 10014026 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014029:;
  /* 10014029 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 1001402e call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10014034u);
  /* 10014034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10014039 je 0x100142a3 */
  if (C.zf) goto L_100142a3;
  /* 1001403f push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10014044 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001404au);
  /* 1001404a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001404d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001404f je 0x100140aa */
  if (C.zf) goto L_100140aa;
  /* 10014051 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10014056 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001405cu);
  /* 1001405c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001405f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014061 jne 0x100140aa */
  if (!C.zf) goto L_100140aa;
  /* 10014063 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014065 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001406bu);
  /* 1001406b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001406e cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014073 jle 0x100140aa */
  if ((C.zf||C.sf!=C.of)) goto L_100140aa;
  /* 10014075 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014077 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001407du);
  /* 1001407d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014080 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014085 jge 0x100140aa */
  if ((C.sf==C.of)) goto L_100140aa;
  /* 10014087 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014089 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001408fu);
  /* 1001408f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014092 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014097 jle 0x100140aa */
  if ((C.zf||C.sf!=C.of)) goto L_100140aa;
  /* 10014099 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1001409e push 3 */
  push32((uint32_t)(0x3u));
  /* 100140a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100140a2 call 0x10012690 */
  push32(0x100140a7u); f_10012690();
  /* 100140a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100140aa:;
  /* 100140aa push 3 */
  push32((uint32_t)(0x3u));
  /* 100140ac call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100140b2u);
  /* 100140b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100140b5 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100140ba jge 0x100140df */
  if ((C.sf==C.of)) goto L_100140df;
  /* 100140bc push 2 */
  push32((uint32_t)(0x2u));
  /* 100140be call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100140c4u);
  /* 100140c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100140c7 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100140cc jle 0x100140df */
  if ((C.zf||C.sf!=C.of)) goto L_100140df;
  /* 100140ce push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100140d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100140d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 100140d7 call 0x10012690 */
  push32(0x100140dcu); f_10012690();
  /* 100140dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100140df:;
  /* 100140df push 0x100261f8 */
  push32((uint32_t)(0x100261f8u));
  /* 100140e4 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x100140eau);
  /* 100140ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100140ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100140ef je 0x10014217 */
  if (C.zf) goto L_10014217;
  /* 100140f5 push 0x10026200 */
  push32((uint32_t)(0x10026200u));
  /* 100140fa call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014100u);
  /* 10014100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014103 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014105 je 0x10014217 */
  if (C.zf) goto L_10014217;
  /* 1001410b push 2 */
  push32((uint32_t)(0x2u));
  /* 1001410d call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014113u);
  /* 10014113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014116 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001411b jle 0x1001412e */
  if ((C.zf||C.sf!=C.of)) goto L_1001412e;
  /* 1001411d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10014122 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014124 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014126 call 0x10012690 */
  push32(0x1001412bu); f_10012690();
  /* 1001412b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001412e:;
  /* 1001412e push 0 */
  push32((uint32_t)(0x0u));
  /* 10014130 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014136u);
  /* 10014136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001413b je 0x1001423a */
  if (C.zf) goto L_1001423a;
  /* 10014141 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014143 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014149u);
  /* 10014149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001414c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001414e je 0x100141bb */
  if (C.zf) goto L_100141bb;
  /* 10014150 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014152 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014158u);
  /* 10014158 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001415b cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014160 jge 0x100141bb */
  if ((C.sf==C.of)) goto L_100141bb;
  /* 10014162 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014164 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001416au);
  /* 1001416a push 5 */
  push32((uint32_t)(0x5u));
  /* 1001416c mov esi, eax */
  ESI = (EAX);
  /* 1001416e call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014174u);
  /* 10014174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014177 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014179 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1001417e jge 0x1001419f */
  if ((C.sf==C.of)) goto L_1001419f;
  /* 10014180 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014182 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014184 call 0x10012690 */
  push32(0x10014189u); f_10012690();
  /* 10014189 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1001418e push 4 */
  push32((uint32_t)(0x4u));
  /* 10014190 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014192 call 0x10012690 */
  push32(0x10014197u); f_10012690();
  /* 10014197 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001419a jmp 0x1001423a */
  goto L_1001423a;
L_1001419f:;
  /* 1001419f push 4 */
  push32((uint32_t)(0x4u));
  /* 100141a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 100141a3 call 0x10012690 */
  push32(0x100141a8u); f_10012690();
  /* 100141a8 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100141ad push 5 */
  push32((uint32_t)(0x5u));
  /* 100141af push 2 */
  push32((uint32_t)(0x2u));
  /* 100141b1 call 0x10012690 */
  push32(0x100141b6u); f_10012690();
  /* 100141b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100141b9 jmp 0x1001423a */
  goto L_1001423a;
L_100141bb:;
  /* 100141bb push 5 */
  push32((uint32_t)(0x5u));
  /* 100141bd call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100141c3u);
  /* 100141c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100141c6 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100141cb jge 0x100141ed */
  if ((C.sf==C.of)) goto L_100141ed;
  /* 100141cd push 0 */
  push32((uint32_t)(0x0u));
  /* 100141cf call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100141d5u);
  /* 100141d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100141d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100141da je 0x100141ed */
  if (C.zf) goto L_100141ed;
  /* 100141dc push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100141e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 100141e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100141e5 call 0x10012690 */
  push32(0x100141eau); f_10012690();
  /* 100141ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100141ed:;
  /* 100141ed push 5 */
  push32((uint32_t)(0x5u));
  /* 100141ef call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100141f5u);
  /* 100141f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100141f8 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100141fd jge 0x1001423a */
  if ((C.sf==C.of)) goto L_1001423a;
  /* 100141ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10014201 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014207u);
  /* 10014207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001420a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001420c je 0x1001423a */
  if (C.zf) goto L_1001423a;
  /* 1001420e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10014213 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014215 jmp 0x10014230 */
  goto L_10014230;
L_10014217:;
  /* 10014217 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014219 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001421fu);
  /* 1001421f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014222 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014227 jle 0x1001423a */
  if ((C.zf||C.sf!=C.of)) goto L_1001423a;
  /* 10014229 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1001422e push 1 */
  push32((uint32_t)(0x1u));
L_10014230:;
  /* 10014230 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014232 call 0x10012690 */
  push32(0x10014237u); f_10012690();
  /* 10014237 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001423a:;
  /* 1001423a push 0 */
  push32((uint32_t)(0x0u));
  /* 1001423c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014242u);
  /* 10014242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014245 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001424a jle 0x1001425d */
  if ((C.zf||C.sf!=C.of)) goto L_1001425d;
  /* 1001424c push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10014251 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014255 call 0x10012690 */
  push32(0x1001425au); f_10012690();
  /* 1001425a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001425d:;
  /* 1001425d push 4 */
  push32((uint32_t)(0x4u));
  /* 1001425f call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014265u);
  /* 10014265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014268 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001426d jle 0x10014280 */
  if ((C.zf||C.sf!=C.of)) goto L_10014280;
  /* 1001426f push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10014274 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014276 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014278 call 0x10012690 */
  push32(0x1001427du); f_10012690();
  /* 1001427d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014280:;
  /* 10014280 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014282 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014288u);
  /* 10014288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001428b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014290 jle 0x100142a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100142a3;
  /* 10014292 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10014297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014299 push 5 */
  push32((uint32_t)(0x5u));
  /* 1001429b call 0x10012690 */
  push32(0x100142a0u); f_10012690();
  /* 100142a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100142a3:;
  /* 100142a3 pop edi */
  EDI = (pop32());
  /* 100142a4 pop esi */
  ESI = (pop32());
  /* 100142a5 pop ebp */
  EBP = (pop32());
  /* 100142a6 pop ebx */
  EBX = (pop32());
  /* 100142a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100142aa ret  */
  ESPCHK(0x100133e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x100142b0 (209 bytes, 56 insns) */
void f_100142b0(void) {
  FTRACE(0x100142b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100142b0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100142b2 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100142b8u);
  /* 100142b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100142bb cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100142c0 jle 0x10014380 */
  if ((C.zf||C.sf!=C.of)) goto L_10014380;
  /* 100142c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100142c8 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100142ca push 0x10026350 */
  push32((uint32_t)(0x10026350u));
  /* 100142cf call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100142d5u);
  /* 100142d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100142d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100142d9 push 0x10026358 */
  push32((uint32_t)(0x10026358u));
  /* 100142de call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100142e4u);
  /* 100142e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100142e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100142e8 push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 100142ed call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100142f3u);
  /* 100142f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100142f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100142f7 push 0x10026348 */
  push32((uint32_t)(0x10026348u));
  /* 100142fc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014302u);
  /* 10014302 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014304 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014306 push 0x10026360 */
  push32((uint32_t)(0x10026360u));
  /* 1001430b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014311u);
  /* 10014311 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014313 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014315 push 0x10026298 */
  push32((uint32_t)(0x10026298u));
  /* 1001431a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014320u);
  /* 10014320 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014323 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014325 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014327 push 0x10026280 */
  push32((uint32_t)(0x10026280u));
  /* 1001432c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014332u);
  /* 10014332 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014334 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014336 push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 1001433b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014341u);
  /* 10014341 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014343 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014345 push 0x100262a0 */
  push32((uint32_t)(0x100262a0u));
  /* 1001434a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014350u);
  /* 10014350 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014352 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014354 push 0x100262a8 */
  push32((uint32_t)(0x100262a8u));
  /* 10014359 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001435fu);
  /* 1001435f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014361 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014363 push 0x10026260 */
  push32((uint32_t)(0x10026260u));
  /* 10014368 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001436eu);
  /* 1001436e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014370 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014372 push 0x10025fc8 */
  push32((uint32_t)(0x10025fc8u));
  /* 10014377 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001437du);
  /* 1001437d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014380:;
  /* 10014380 ret  */
  ESPCHK(0x100142b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004390 @ 0x10014390 (79 bytes, 22 insns) */
void f_10014390(void) {
  FTRACE(0x10014390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10014390 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014392 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014394 push 0x10023910 */
  push32((uint32_t)(0x10023910u));
  /* 10014399 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001439fu);
  /* 1001439f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100143a1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100143a3 push 0x10023918 */
  push32((uint32_t)(0x10023918u));
  /* 100143a8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100143aeu);
  /* 100143ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100143b0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100143b2 push 0x10023908 */
  push32((uint32_t)(0x10023908u));
  /* 100143b7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100143bdu);
  /* 100143bd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100143bf push 0xa */
  push32((uint32_t)(0xau));
  /* 100143c1 push 0x10025f78 */
  push32((uint32_t)(0x10025f78u));
  /* 100143c6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100143ccu);
  /* 100143cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100143ce push 0xa */
  push32((uint32_t)(0xau));
  /* 100143d0 push 0x10025f68 */
  push32((uint32_t)(0x10025f68u));
  /* 100143d5 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100143dbu);
  /* 100143db add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100143de ret  */
  ESPCHK(0x10014390u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x100143e0 (127 bytes, 35 insns) */
void f_100143e0(void) {
  FTRACE(0x100143e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100143e0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100143e2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100143e4 push 0x100261d8 */
  push32((uint32_t)(0x100261d8u));
  /* 100143e9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100143efu);
  /* 100143ef push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100143f1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100143f3 push 0x100261d0 */
  push32((uint32_t)(0x100261d0u));
  /* 100143f8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100143feu);
  /* 100143fe push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014400 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014402 push 0x100261a0 */
  push32((uint32_t)(0x100261a0u));
  /* 10014407 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001440du);
  /* 1001440d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001440f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014411 push 0x10026198 */
  push32((uint32_t)(0x10026198u));
  /* 10014416 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001441cu);
  /* 1001441c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001441e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014420 push 0x10026098 */
  push32((uint32_t)(0x10026098u));
  /* 10014425 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001442bu);
  /* 1001442b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001442d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001442f push 0x100260a0 */
  push32((uint32_t)(0x100260a0u));
  /* 10014434 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001443au);
  /* 1001443a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001443d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001443f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014441 push 0x100260a8 */
  push32((uint32_t)(0x100260a8u));
  /* 10014446 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001444cu);
  /* 1001444c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001444e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014450 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 10014455 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001445bu);
  /* 1001445b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001445e ret  */
  ESPCHK(0x100143e0u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x10014460 (3643 bytes, 1035 insns) */
void f_10014460(void) {
  FTRACE(0x10014460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10014460 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10014463 push ebx */
  push32((uint32_t)(EBX));
  /* 10014464 push ebp */
  push32((uint32_t)(EBP));
  /* 10014465 push esi */
  push32((uint32_t)(ESI));
  /* 10014466 push edi */
  push32((uint32_t)(EDI));
  /* 10014467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014469 call 0x100127e0 */
  push32(0x1001446eu); f_100127e0();
  /* 1001446e push 0x1001f030 */
  push32((uint32_t)(0x1001f030u));
  /* 10014473 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10014475 call dword ptr [0x1002650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002650c))), 0x1001447bu);
  /* 1001447b push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 10014480 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014486u);
  /* 10014486 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014488 mov ebx, eax */
  EBX = (EAX);
  /* 1001448a call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014490u);
  /* 10014490 mov ebp, eax */
  EBP = (EAX);
  /* 10014492 push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10014497 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1001449b call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100144a1u);
  /* 100144a1 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 100144a6 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 100144aa call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100144b0u);
  /* 100144b0 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 100144b5 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x100144bbu);
  /* 100144bb push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 100144c0 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100144c6u);
  /* 100144c6 push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 100144cb call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100144d1u);
  /* 100144d1 push 0x10026330 */
  push32((uint32_t)(0x10026330u));
  /* 100144d6 mov esi, eax */
  ESI = (EAX);
  /* 100144d8 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100144deu);
  /* 100144de push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 100144e3 mov edi, eax */
  EDI = (EAX);
  /* 100144e5 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100144ebu);
  /* 100144eb add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100144ed add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100144f0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100144f2 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 100144f7 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 100144fb call 0x100126e0 */
  push32(0x10014500u); f_100126e0();
  /* 10014500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10014502 jle 0x10014518 */
  if ((C.zf||C.sf!=C.of)) goto L_10014518;
  /* 10014504 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10014506 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014508 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1001450a push 0x10026328 */
  push32((uint32_t)(0x10026328u));
  /* 1001450f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014515u);
  /* 10014515 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014518:;
  /* 10014518 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 1001451d call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10014523u);
  /* 10014523 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10014528 mov esi, eax */
  ESI = (EAX);
  /* 1001452a call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014530u);
  /* 10014530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014533 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10014535 je 0x1001453c */
  if (C.zf) goto L_1001453c;
  /* 10014537 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_1001453c:;
  /* 1001453c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001453e je 0x10015293 */
  if (C.zf) goto L_10015293;
  /* 10014544 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014546 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001454a push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 1001454f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014555u);
  /* 10014555 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 1001455a call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014560u);
  /* 10014560 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10014565 je 0x10015293 */
  if (C.zf) goto L_10015293;
  /* 1001456b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001456d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001456f push 0x10026378 */
  push32((uint32_t)(0x10026378u));
  /* 10014574 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001457au);
  /* 1001457a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001457d call dword ptr [0x10026570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026570))), 0x10014583u);
  /* 10014583 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014585 jne 0x100145dc */
  if (!C.zf) goto L_100145dc;
  /* 10014587 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001458d jle 0x100145b4 */
  if ((C.zf||C.sf!=C.of)) goto L_100145b4;
  /* 1001458f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014591 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014595 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 1001459a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100145a0u);
  /* 100145a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100145a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100145a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100145a6 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 100145ab call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100145b1u);
  /* 100145b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100145b4:;
  /* 100145b4 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100145ba jle 0x100145c8 */
  if ((C.zf||C.sf!=C.of)) goto L_100145c8;
  /* 100145bc cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100145c1 jle 0x100145c8 */
  if ((C.zf||C.sf!=C.of)) goto L_100145c8;
  /* 100145c3 call 0x100142b0 */
  push32(0x100145c8u); f_100142b0();
L_100145c8:;
  /* 100145c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100145ca push 1 */
  push32((uint32_t)(0x1u));
  /* 100145cc push 0 */
  push32((uint32_t)(0x0u));
  /* 100145ce call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x100145d4u);
  /* 100145d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100145d7 jmp 0x1001469f */
  goto L_1001469f;
L_100145dc:;
  /* 100145dc mov eax, dword ptr [0x10026594] */
  EAX = (r32((uint32_t)(0x10026594)));
  /* 100145e1 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100145e4 je 0x100145f8 */
  if (C.zf) goto L_100145f8;
  /* 100145e6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100145e7 je 0x100145f2 */
  if (C.zf) goto L_100145f2;
  /* 100145e9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100145ea jne 0x10014624 */
  if (!C.zf) goto L_10014624;
  /* 100145ec push 9 */
  push32((uint32_t)(0x9u));
  /* 100145ee push 4 */
  push32((uint32_t)(0x4u));
  /* 100145f0 jmp 0x10014619 */
  goto L_10014619;
L_100145f2:;
  /* 100145f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100145f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100145f6 jmp 0x10014619 */
  goto L_10014619;
L_100145f8:;
  /* 100145f8 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100145fe jle 0x1001460f */
  if ((C.zf||C.sf!=C.of)) goto L_1001460f;
  /* 10014600 push 6 */
  push32((uint32_t)(0x6u));
  /* 10014602 push 6 */
  push32((uint32_t)(0x6u));
  /* 10014604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10014606 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001460cu);
  /* 1001460c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001460f:;
  /* 1001460f push 5 */
  push32((uint32_t)(0x5u));
  /* 10014611 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014617 push 5 */
  push32((uint32_t)(0x5u));
L_10014619:;
  /* 10014619 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001461b call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x10014621u);
  /* 10014621 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014624:;
  /* 10014624 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10014628 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 1001462d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001462f je 0x10014636 */
  if (C.zf) goto L_10014636;
  /* 10014631 mov esi, 0x17c */
  ESI = (0x17cu);
L_10014636:;
  /* 10014636 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014639 jge 0x10014657 */
  if ((C.sf==C.of)) goto L_10014657;
  /* 1001463b cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014641 jle 0x10014693 */
  if ((C.zf||C.sf!=C.of)) goto L_10014693;
  /* 10014643 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014645 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014647 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014649 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 1001464e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014654u);
  /* 10014654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014657:;
  /* 10014657 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001465d jle 0x10014693 */
  if ((C.zf||C.sf!=C.of)) goto L_10014693;
  /* 1001465f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014661 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 10014666 push esi */
  push32((uint32_t)(ESI));
  /* 10014667 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 1001466c call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014672u);
  /* 10014672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014675 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001467b jle 0x10014693 */
  if ((C.zf||C.sf!=C.of)) goto L_10014693;
  /* 1001467d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001467f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10014684 push esi */
  push32((uint32_t)(ESI));
  /* 10014685 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 1001468a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014690u);
  /* 10014690 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014693:;
  /* 10014693 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014698 jle 0x1001469f */
  if ((C.zf||C.sf!=C.of)) goto L_1001469f;
  /* 1001469a call 0x100142b0 */
  push32(0x1001469fu); f_100142b0();
L_1001469f:;
  /* 1001469f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100146a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100146a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100146a5 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100146aa call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100146b0u);
  /* 100146b0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100146b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100146b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100146b6 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100146bb call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100146c1u);
  /* 100146c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 100146c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100146c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100146c7 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100146cc call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100146d2u);
  /* 100146d2 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 100146d7 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100146ddu);
  /* 100146dd add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100146e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100146e3 jle 0x10014756 */
  if ((C.zf||C.sf!=C.of)) goto L_10014756;
  /* 100146e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100146e7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100146e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 100146eb push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100146f0 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100146f6u);
  /* 100146f6 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100146fb call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014701u);
  /* 10014701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014707 jle 0x1001471d */
  if ((C.zf||C.sf!=C.of)) goto L_1001471d;
  /* 10014709 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001470b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1001470d push 1 */
  push32((uint32_t)(0x1u));
  /* 1001470f push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014714 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001471au);
  /* 1001471a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001471d:;
  /* 1001471d push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10014722 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10014728u);
  /* 10014728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001472b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001472e jle 0x10014744 */
  if ((C.zf||C.sf!=C.of)) goto L_10014744;
  /* 10014730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014732 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014736 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 1001473b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014741u);
  /* 10014741 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014744:;
  /* 10014744 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014746 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014748 push 0x10026110 */
  push32((uint32_t)(0x10026110u));
  /* 1001474d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014753u);
  /* 10014753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014756:;
  /* 10014756 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 1001475b call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014761u);
  /* 10014761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014764 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014767 jle 0x1001477d */
  if ((C.zf||C.sf!=C.of)) goto L_1001477d;
  /* 10014769 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001476b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001476d push 1 */
  push32((uint32_t)(0x1u));
  /* 1001476f push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10014774 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001477au);
  /* 1001477a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001477d:;
  /* 1001477d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001477f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014781 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014783 push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 10014788 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001478eu);
  /* 1001478e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014790 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014792 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014794 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10014799 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001479fu);
  /* 1001479f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100147a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100147a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100147a5 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 100147aa call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100147b0u);
  /* 100147b0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100147b2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100147b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100147b6 push 0x10025fd0 */
  push32((uint32_t)(0x10025fd0u));
  /* 100147bb call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100147c1u);
  /* 100147c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100147c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100147c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 100147c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100147ca push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 100147cf call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100147d5u);
  /* 100147d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100147d7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100147d9 push 0x10023660 */
  push32((uint32_t)(0x10023660u));
  /* 100147de call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100147e4u);
  /* 100147e4 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 100147e9 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100147efu);
  /* 100147ef add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100147f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100147f4 jle 0x1001480a */
  if ((C.zf||C.sf!=C.of)) goto L_1001480a;
  /* 100147f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100147f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100147fa push 1 */
  push32((uint32_t)(0x1u));
  /* 100147fc push 0x100260f8 */
  push32((uint32_t)(0x100260f8u));
  /* 10014801 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014807u);
  /* 10014807 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001480a:;
  /* 1001480a call dword ptr [0x10026570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026570))), 0x10014810u);
  /* 10014810 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014812 je 0x10014828 */
  if (C.zf) goto L_10014828;
  /* 10014814 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014816 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014818 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001481a push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 1001481f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014825u);
  /* 10014825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014828:;
  /* 10014828 push 0xa */
  push32((uint32_t)(0xau));
  /* 1001482a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1001482c push 1 */
  push32((uint32_t)(0x1u));
  /* 1001482e push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10014833 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014839u);
  /* 10014839 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001483b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001483d push 1 */
  push32((uint32_t)(0x1u));
  /* 1001483f push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10014844 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001484au);
  /* 1001484a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001484d cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014850 jle 0x10014866 */
  if ((C.zf||C.sf!=C.of)) goto L_10014866;
  /* 10014852 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014854 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014856 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014858 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 1001485d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014863u);
  /* 10014863 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014866:;
  /* 10014866 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014868 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001486a push 1 */
  push32((uint32_t)(0x1u));
  /* 1001486c push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 10014871 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014877u);
  /* 10014877 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014879 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1001487b push 2 */
  push32((uint32_t)(0x2u));
  /* 1001487d push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 10014882 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014888u);
  /* 10014888 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1001488a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001488c push 0x10026078 */
  push32((uint32_t)(0x10026078u));
  /* 10014891 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014897u);
  /* 10014897 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014899 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001489b push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 100148a0 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100148a6u);
  /* 100148a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100148a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100148aa push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 100148af call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100148b5u);
  /* 100148b5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100148b8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100148ba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100148bc push 0x10026040 */
  push32((uint32_t)(0x10026040u));
  /* 100148c1 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100148c7u);
  /* 100148c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100148c9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100148cb push 0x10026030 */
  push32((uint32_t)(0x10026030u));
  /* 100148d0 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100148d6u);
  /* 100148d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100148d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100148da push 0x10026038 */
  push32((uint32_t)(0x10026038u));
  /* 100148df call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100148e5u);
  /* 100148e5 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 100148ea call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100148f0u);
  /* 100148f0 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100148f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100148f5 je 0x100149b4 */
  if (C.zf) goto L_100149b4;
  /* 100148fb push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10014900 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014906u);
  /* 10014906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014909 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001490b jne 0x100149b4 */
  if (!C.zf) goto L_100149b4;
  /* 10014911 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014913 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014919u);
  /* 10014919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001491c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014921 jle 0x10014947 */
  if ((C.zf||C.sf!=C.of)) goto L_10014947;
  /* 10014923 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014925 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001492bu);
  /* 1001492b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001492e cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014933 jle 0x10014947 */
  if ((C.zf||C.sf!=C.of)) goto L_10014947;
  /* 10014935 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014937 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001493du);
  /* 1001493d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014940 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014945 jg 0x100149b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_100149b4;
L_10014947:;
  /* 10014947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014949 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001494fu);
  /* 1001494f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10014954 je 0x100149db */
  if (C.zf) goto L_100149db;
  /* 1001495a push 5 */
  push32((uint32_t)(0x5u));
  /* 1001495c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014962u);
  /* 10014962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014965 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001496a jle 0x100149db */
  if ((C.zf||C.sf!=C.of)) goto L_100149db;
  /* 1001496c push 5 */
  push32((uint32_t)(0x5u));
  /* 1001496e call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014974u);
  /* 10014974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014977 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001497c jle 0x1001498f */
  if ((C.zf||C.sf!=C.of)) goto L_1001498f;
  /* 1001497e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10014983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014985 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014987 call 0x10012690 */
  push32(0x1001498cu); f_10012690();
  /* 1001498c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001498f:;
  /* 1001498f push 4 */
  push32((uint32_t)(0x4u));
  /* 10014991 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014997u);
  /* 10014997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001499a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001499f jle 0x100149db */
  if ((C.zf||C.sf!=C.of)) goto L_100149db;
  /* 100149a1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100149a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100149a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100149aa call 0x10012690 */
  push32(0x100149afu); f_10012690();
  /* 100149af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100149b2 jmp 0x100149db */
  goto L_100149db;
L_100149b4:;
  /* 100149b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 100149b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100149b8 call 0x10012670 */
  push32(0x100149bdu); f_10012670();
  /* 100149bd push 0 */
  push32((uint32_t)(0x0u));
  /* 100149bf push 4 */
  push32((uint32_t)(0x4u));
  /* 100149c1 call 0x10012670 */
  push32(0x100149c6u); f_10012670();
  /* 100149c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 100149c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100149ca call 0x10012670 */
  push32(0x100149cfu); f_10012670();
  /* 100149cf push 0 */
  push32((uint32_t)(0x0u));
  /* 100149d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100149d3 call 0x10012670 */
  push32(0x100149d8u); f_10012670();
  /* 100149d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100149db:;
  /* 100149db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100149dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100149df push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 100149e4 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100149eau);
  /* 100149ea push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100149ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100149ee push 1 */
  push32((uint32_t)(0x1u));
  /* 100149f0 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 100149f5 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100149fbu);
  /* 100149fb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100149fd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100149ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10014a01 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10014a06 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014a0cu);
  /* 10014a0c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a0e push 0xa */
  push32((uint32_t)(0xau));
  /* 10014a10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014a12 push 0x100262d8 */
  push32((uint32_t)(0x100262d8u));
  /* 10014a17 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014a1du);
  /* 10014a1d push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10014a22 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014a28u);
  /* 10014a28 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014a2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014a2d jne 0x10014a78 */
  if (!C.zf) goto L_10014a78;
  /* 10014a2f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10014a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014a33 call 0x100126c0 */
  push32(0x10014a38u); f_100126c0();
  /* 10014a38 mov esi, eax */
  ESI = (EAX);
  /* 10014a3a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10014a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10014a3e sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10014a41 call 0x100126c0 */
  push32(0x10014a46u); f_100126c0();
  /* 10014a46 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10014a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014a4a add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10014a4c call 0x100126c0 */
  push32(0x10014a51u); f_100126c0();
  /* 10014a51 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10014a53 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014a56 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014a59 jle 0x10014a68 */
  if ((C.zf||C.sf!=C.of)) goto L_10014a68;
  /* 10014a5b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a5d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a5f push 6 */
  push32((uint32_t)(0x6u));
  /* 10014a61 push 0x10025f90 */
  push32((uint32_t)(0x10025f90u));
  /* 10014a66 jmp 0x10014a83 */
  goto L_10014a83;
L_10014a68:;
  /* 10014a68 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10014a6a je 0x10014a8c */
  if (C.zf) goto L_10014a8c;
  /* 10014a6c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a6e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a70 push esi */
  push32((uint32_t)(ESI));
  /* 10014a71 push 0x10025f90 */
  push32((uint32_t)(0x10025f90u));
  /* 10014a76 jmp 0x10014a83 */
  goto L_10014a83;
L_10014a78:;
  /* 10014a78 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a7a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014a7c push 0xa */
  push32((uint32_t)(0xau));
  /* 10014a7e push 0x100238e8 */
  push32((uint32_t)(0x100238e8u));
L_10014a83:;
  /* 10014a83 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014a89u);
  /* 10014a89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014a8c:;
  /* 10014a8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014a8e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014a90 push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10014a95 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014a9bu);
  /* 10014a9b push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10014aa0 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014aa6u);
  /* 10014aa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014aa9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014aab je 0x10014ace */
  if (C.zf) goto L_10014ace;
  /* 10014aad push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014aaf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ab1 push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10014ab6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014abcu);
  /* 10014abc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014abe push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014ac0 push 0x10023870 */
  push32((uint32_t)(0x10023870u));
  /* 10014ac5 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014acbu);
  /* 10014acb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014ace:;
  /* 10014ace push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10014ad3 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014ad9u);
  /* 10014ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014adc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014ade je 0x10014b06 */
  if (C.zf) goto L_10014b06;
  /* 10014ae0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ae2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ae4 push 0x10023940 */
  push32((uint32_t)(0x10023940u));
  /* 10014ae9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014aefu);
  /* 10014aef push 0xa */
  push32((uint32_t)(0xau));
  /* 10014af1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10014af3 push 0x10023880 */
  push32((uint32_t)(0x10023880u));
  /* 10014af8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014afeu);
  /* 10014afe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014b01 call 0x100133a0 */
  push32(0x10014b06u); f_100133a0();
L_10014b06:;
  /* 10014b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014b08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014b0a call 0x10012670 */
  push32(0x10014b0fu); f_10012670();
  /* 10014b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10014b11 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014b17u);
  /* 10014b17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014b1a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014b1f jle 0x10014b63 */
  if ((C.zf||C.sf!=C.of)) goto L_10014b63;
  /* 10014b21 push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 10014b26 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014b2cu);
  /* 10014b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014b31 je 0x10014b63 */
  if (C.zf) goto L_10014b63;
  /* 10014b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014b35 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014b3bu);
  /* 10014b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014b3e cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014b43 jge 0x10014b63 */
  if ((C.sf==C.of)) goto L_10014b63;
  /* 10014b45 push 0x10023958 */
  push32((uint32_t)(0x10023958u));
  /* 10014b4a call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014b50u);
  /* 10014b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014b53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014b55 jne 0x10014b63 */
  if (!C.zf) goto L_10014b63;
  /* 10014b57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014b59 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014b5b call 0x10012670 */
  push32(0x10014b60u); f_10012670();
  /* 10014b60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014b63:;
  /* 10014b63 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014b65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014b67 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014b69 push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10014b6e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014b74u);
  /* 10014b74 push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10014b79 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014b7fu);
  /* 10014b7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014b82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014b84 je 0x10014b9a */
  if (C.zf) goto L_10014b9a;
  /* 10014b86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014b88 push 0xa */
  push32((uint32_t)(0xau));
  /* 10014b8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014b8c push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10014b91 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014b97u);
  /* 10014b97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014b9a:;
  /* 10014b9a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014b9c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014b9e push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10014ba3 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014ba9u);
  /* 10014ba9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014bab push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014bad push 0x10026100 */
  push32((uint32_t)(0x10026100u));
  /* 10014bb2 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014bb8u);
  /* 10014bb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bba push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bbc push 0x100262e8 */
  push32((uint32_t)(0x100262e8u));
  /* 10014bc1 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014bc7u);
  /* 10014bc7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bc9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bcb push 0x100262d0 */
  push32((uint32_t)(0x100262d0u));
  /* 10014bd0 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014bd6u);
  /* 10014bd6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bd8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bda push 0x100262e0 */
  push32((uint32_t)(0x100262e0u));
  /* 10014bdf call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014be5u);
  /* 10014be5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014be7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014be9 push 0x100262c0 */
  push32((uint32_t)(0x100262c0u));
  /* 10014bee call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014bf4u);
  /* 10014bf4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014bf7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bf9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014bfb push 0x100262c8 */
  push32((uint32_t)(0x100262c8u));
  /* 10014c00 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014c06u);
  /* 10014c06 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014c08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014c0a push 0x100262b8 */
  push32((uint32_t)(0x100262b8u));
  /* 10014c0f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014c15u);
  /* 10014c15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014c18 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014c1b jle 0x10014c74 */
  if ((C.zf||C.sf!=C.of)) goto L_10014c74;
  /* 10014c1d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10014c21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014c23 je 0x10014c74 */
  if (C.zf) goto L_10014c74;
  /* 10014c25 push 0xa */
  push32((uint32_t)(0xau));
  /* 10014c27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10014c29 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014c2b push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10014c30 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014c36u);
  /* 10014c36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014c39 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014c3c jle 0x10014c74 */
  if ((C.zf||C.sf!=C.of)) goto L_10014c74;
  /* 10014c3e push 0xa */
  push32((uint32_t)(0xau));
  /* 10014c40 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10014c42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014c44 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10014c49 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014c4fu);
  /* 10014c4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10014c51 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014c53 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014c55 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10014c5a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014c60u);
  /* 10014c60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10014c62 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014c64 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014c66 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10014c6b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014c71u);
  /* 10014c71 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014c74:;
  /* 10014c74 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10014c78 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10014c7a je 0x10014d5e */
  if (C.zf) goto L_10014d5e;
  /* 10014c80 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014c82 push 0xa */
  push32((uint32_t)(0xau));
  /* 10014c84 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014c86 push 0x100238c8 */
  push32((uint32_t)(0x100238c8u));
  /* 10014c8b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014c91u);
  /* 10014c91 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014c95 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10014c97 push 0x10026160 */
  push32((uint32_t)(0x10026160u));
  /* 10014c9c call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014ca2u);
  /* 10014ca2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014ca6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014ca8 push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 10014cad call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014cb3u);
  /* 10014cb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014cb5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10014cb7 push 0x10023630 */
  push32((uint32_t)(0x10023630u));
  /* 10014cbc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014cc2u);
  /* 10014cc2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014cc4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10014cc6 push 0x10023708 */
  push32((uint32_t)(0x10023708u));
  /* 10014ccb call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014cd1u);
  /* 10014cd1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014cd4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014cd6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10014cd8 push 0x10023628 */
  push32((uint32_t)(0x10023628u));
  /* 10014cdd call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014ce3u);
  /* 10014ce3 push 0x10026198 */
  push32((uint32_t)(0x10026198u));
  /* 10014ce8 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014ceeu);
  /* 10014cee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014cf1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014cf3 je 0x10014d09 */
  if (C.zf) goto L_10014d09;
  /* 10014cf5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10014cf7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014cf9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014cfb push 0x10026370 */
  push32((uint32_t)(0x10026370u));
  /* 10014d00 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014d06u);
  /* 10014d06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014d09:;
  /* 10014d09 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 10014d0e call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014d14u);
  /* 10014d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014d17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014d19 je 0x10014d2f */
  if (C.zf) goto L_10014d2f;
  /* 10014d1b push 0xa */
  push32((uint32_t)(0xau));
  /* 10014d1d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014d1f push 0xa */
  push32((uint32_t)(0xau));
  /* 10014d21 push 0x10023668 */
  push32((uint32_t)(0x10023668u));
  /* 10014d26 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014d2cu);
  /* 10014d2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014d2f:;
  /* 10014d2f call 0x100143e0 */
  push32(0x10014d34u); f_100143e0();
L_10014d34:;
  /* 10014d34 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10014d39 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014d3fu);
  /* 10014d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014d42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014d44 je 0x10014d94 */
  if (C.zf) goto L_10014d94;
  /* 10014d46 push 0x10026100 */
  push32((uint32_t)(0x10026100u));
  /* 10014d4b call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014d51u);
  /* 10014d51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014d54 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014d56 jne 0x10014d85 */
  if (!C.zf) goto L_10014d85;
  /* 10014d58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014d5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10014d5c jmp 0x10014d89 */
  goto L_10014d89;
L_10014d5e:;
  /* 10014d5e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014d62 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10014d64 push 0x10026160 */
  push32((uint32_t)(0x10026160u));
  /* 10014d69 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014d6fu);
  /* 10014d6f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10014d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014d73 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014d75 push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 10014d7a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014d80u);
  /* 10014d80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014d83 jmp 0x10014d34 */
  goto L_10014d34;
L_10014d85:;
  /* 10014d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014d87 push 4 */
  push32((uint32_t)(0x4u));
L_10014d89:;
  /* 10014d89 push 8 */
  push32((uint32_t)(0x8u));
  /* 10014d8b call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x10014d91u);
  /* 10014d91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014d94:;
  /* 10014d94 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014d99 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014d9fu);
  /* 10014d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10014da4 je 0x10014dba */
  if (C.zf) goto L_10014dba;
  /* 10014da6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014da8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014daa push 6 */
  push32((uint32_t)(0x6u));
  /* 10014dac push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10014db1 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014db7u);
  /* 10014db7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014dba:;
  /* 10014dba push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10014dbf call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10014dc5u);
  /* 10014dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014dc8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014dca je 0x10014de0 */
  if (C.zf) goto L_10014de0;
  /* 10014dcc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014dce push 0xa */
  push32((uint32_t)(0xau));
  /* 10014dd0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014dd2 push 0x100261f0 */
  push32((uint32_t)(0x100261f0u));
  /* 10014dd7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014dddu);
  /* 10014ddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014de0:;
  /* 10014de0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10014de2 je 0x10014ee3 */
  if (C.zf) goto L_10014ee3;
  /* 10014de8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014dea push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10014dec push 2 */
  push32((uint32_t)(0x2u));
  /* 10014dee push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014df3 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014df9u);
  /* 10014df9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014dfb push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10014dfd push 3 */
  push32((uint32_t)(0x3u));
  /* 10014dff push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014e04 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014e0au);
  /* 10014e0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014e0c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10014e0e push 4 */
  push32((uint32_t)(0x4u));
  /* 10014e10 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014e15 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014e1bu);
  /* 10014e1b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014e1d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10014e1f push 5 */
  push32((uint32_t)(0x5u));
  /* 10014e21 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014e26 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014e2cu);
  /* 10014e2c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014e2f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10014e31 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10014e33 push 6 */
  push32((uint32_t)(0x6u));
  /* 10014e35 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10014e3a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014e40u);
  /* 10014e40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014e42 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014e44 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10014e49 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014e4fu);
  /* 10014e4f push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 10014e54 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10014e5au);
  /* 10014e5a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014e5d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014e60 jle 0x10014e83 */
  if ((C.zf||C.sf!=C.of)) goto L_10014e83;
  /* 10014e62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014e64 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014e66 push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 10014e6b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014e71u);
  /* 10014e71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10014e73 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10014e75 push 0x10026210 */
  push32((uint32_t)(0x10026210u));
  /* 10014e7a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014e80u);
  /* 10014e80 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014e83:;
  /* 10014e83 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014e85 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10014e87 push 0x100260f0 */
  push32((uint32_t)(0x100260f0u));
  /* 10014e8c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014e92u);
  /* 10014e92 push 0x10023908 */
  push32((uint32_t)(0x10023908u));
  /* 10014e97 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10014e9du);
  /* 10014e9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014ea0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10014ea2 je 0x10014ee3 */
  if (C.zf) goto L_10014ee3;
  /* 10014ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ea6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ea8 push 0x10026168 */
  push32((uint32_t)(0x10026168u));
  /* 10014ead call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014eb3u);
  /* 10014eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014eb5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014eb7 push 0x10026178 */
  push32((uint32_t)(0x10026178u));
  /* 10014ebc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014ec2u);
  /* 10014ec2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ec4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10014ec6 push 0x10026180 */
  push32((uint32_t)(0x10026180u));
  /* 10014ecb call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014ed1u);
  /* 10014ed1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ed3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10014ed5 push 0x10026170 */
  push32((uint32_t)(0x10026170u));
  /* 10014eda call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014ee0u);
  /* 10014ee0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10014ee3:;
  /* 10014ee3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014ee5 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10014ee7 push 0x100237a0 */
  push32((uint32_t)(0x100237a0u));
  /* 10014eec call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014ef2u);
  /* 10014ef2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10014ef4 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10014ef6 push 0x100238e0 */
  push32((uint32_t)(0x100238e0u));
  /* 10014efb call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014f01u);
  /* 10014f01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014f03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014f05 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 10014f0a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10014f10u);
  /* 10014f10 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10014f14 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014f17 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014f1c jle 0x10014f3a */
  if ((C.zf||C.sf!=C.of)) goto L_10014f3a;
  /* 10014f1e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10014f20 push 0xa */
  push32((uint32_t)(0xau));
  /* 10014f22 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10014f27 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 10014f2c call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10014f32u);
  /* 10014f32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014f35 call 0x10014390 */
  push32(0x10014f3au); f_10014390();
L_10014f3a:;
  /* 10014f3a push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10014f3f call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10014f45u);
  /* 10014f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10014f4a je 0x10015293 */
  if (C.zf) goto L_10015293;
  /* 10014f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10014f52 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014f58u);
  /* 10014f58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014f5a mov edi, eax */
  EDI = (EAX);
  /* 10014f5c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014f62u);
  /* 10014f62 push 4 */
  push32((uint32_t)(0x4u));
  /* 10014f64 mov esi, eax */
  ESI = (EAX);
  /* 10014f66 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014f6cu);
  /* 10014f6c push 5 */
  push32((uint32_t)(0x5u));
  /* 10014f6e mov ebp, eax */
  EBP = (EAX);
  /* 10014f70 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014f76u);
  /* 10014f76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10014f78 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10014f7c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10014f82u);
  /* 10014f82 mov ebx, eax */
  EBX = (EAX);
  /* 10014f84 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10014f88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10014f8b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014f90 jge 0x10015023 */
  if ((C.sf==C.of)) goto L_10015023;
  /* 10014f96 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014f9c jle 0x10014fa9 */
  if ((C.zf||C.sf!=C.of)) goto L_10014fa9;
  /* 10014f9e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10014fa3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014fa7 jmp 0x1001501b */
  goto L_1001501b;
L_10014fa9:;
  /* 10014fa9 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014faf jle 0x10014fbc */
  if ((C.zf||C.sf!=C.of)) goto L_10014fbc;
  /* 10014fb1 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10014fb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014fb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10014fba jmp 0x1001501b */
  goto L_1001501b;
L_10014fbc:;
  /* 10014fbc cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014fc2 jle 0x10014fcf */
  if ((C.zf||C.sf!=C.of)) goto L_10014fcf;
  /* 10014fc4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10014fc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10014fcd jmp 0x1001501b */
  goto L_1001501b;
L_10014fcf:;
  /* 10014fcf cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014fd5 jle 0x10014fe2 */
  if ((C.zf||C.sf!=C.of)) goto L_10014fe2;
  /* 10014fd7 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10014fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10014fde push 0 */
  push32((uint32_t)(0x0u));
  /* 10014fe0 jmp 0x1001501b */
  goto L_1001501b;
L_10014fe2:;
  /* 10014fe2 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014fea jle 0x10014ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_10014ff7;
  /* 10014fec push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10014ff1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10014ff3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10014ff5 jmp 0x1001501b */
  goto L_1001501b;
L_10014ff7:;
  /* 10014ff7 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10014ffd jle 0x1001500a */
  if ((C.zf||C.sf!=C.of)) goto L_1001500a;
  /* 10014fff push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10015004 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015006 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015008 jmp 0x1001501b */
  goto L_1001501b;
L_1001500a:;
  /* 1001500a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015010 jle 0x10015023 */
  if ((C.zf||C.sf!=C.of)) goto L_10015023;
  /* 10015012 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10015017 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015019 push 1 */
  push32((uint32_t)(0x1u));
L_1001501b:;
  /* 1001501b call 0x10012690 */
  push32(0x10015020u); f_10012690();
  /* 10015020 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015023:;
  /* 10015023 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10015028 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x1001502eu);
  /* 1001502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015033 je 0x10015083 */
  if (C.zf) goto L_10015083;
  /* 10015035 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001503b jle 0x10015083 */
  if ((C.zf||C.sf!=C.of)) goto L_10015083;
  /* 1001503d push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10015042 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015048u);
  /* 10015048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001504b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001504d jne 0x10015083 */
  if (!C.zf) goto L_10015083;
  /* 1001504f cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015055 jle 0x10015068 */
  if ((C.zf||C.sf!=C.of)) goto L_10015068;
  /* 10015057 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1001505c push 3 */
  push32((uint32_t)(0x3u));
  /* 1001505e push 4 */
  push32((uint32_t)(0x4u));
  /* 10015060 call 0x10012690 */
  push32(0x10015065u); f_10012690();
  /* 10015065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015068:;
  /* 10015068 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015070 jle 0x10015083 */
  if ((C.zf||C.sf!=C.of)) goto L_10015083;
  /* 10015072 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10015077 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015079 push 5 */
  push32((uint32_t)(0x5u));
  /* 1001507b call 0x10012690 */
  push32(0x10015080u); f_10012690();
  /* 10015080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015083:;
  /* 10015083 push 2 */
  push32((uint32_t)(0x2u));
  /* 10015085 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001508bu);
  /* 1001508b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001508e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015093 jle 0x100150a6 */
  if ((C.zf||C.sf!=C.of)) goto L_100150a6;
  /* 10015095 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1001509a push 1 */
  push32((uint32_t)(0x1u));
  /* 1001509c push 2 */
  push32((uint32_t)(0x2u));
  /* 1001509e call 0x10012690 */
  push32(0x100150a3u); f_10012690();
  /* 100150a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100150a6:;
  /* 100150a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 100150a8 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100150aeu);
  /* 100150ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100150b1 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100150b6 jle 0x100150c9 */
  if ((C.zf||C.sf!=C.of)) goto L_100150c9;
  /* 100150b8 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100150bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100150bf push 0 */
  push32((uint32_t)(0x0u));
  /* 100150c1 call 0x10012690 */
  push32(0x100150c6u); f_10012690();
  /* 100150c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100150c9:;
  /* 100150c9 push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 100150ce call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100150d4u);
  /* 100150d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100150d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100150d9 je 0x10015260 */
  if (C.zf) goto L_10015260;
  /* 100150df push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 100150e4 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100150eau);
  /* 100150ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100150ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100150ef jne 0x10015260 */
  if (!C.zf) goto L_10015260;
  /* 100150f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100150f7 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100150fdu);
  /* 100150fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015100 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015105 jle 0x100151c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100151c0;
  /* 1001510b push 0 */
  push32((uint32_t)(0x0u));
  /* 1001510d call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015113u);
  /* 10015113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015118 je 0x100151c0 */
  if (C.zf) goto L_100151c0;
  /* 1001511e push 1 */
  push32((uint32_t)(0x1u));
  /* 10015120 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015126u);
  /* 10015126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015129 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001512e jge 0x100151c0 */
  if ((C.sf==C.of)) goto L_100151c0;
  /* 10015134 push 5 */
  push32((uint32_t)(0x5u));
  /* 10015136 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001513cu);
  /* 1001513c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001513f cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015144 jle 0x10015157 */
  if ((C.zf||C.sf!=C.of)) goto L_10015157;
  /* 10015146 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1001514b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001514d push 5 */
  push32((uint32_t)(0x5u));
  /* 1001514f call 0x10012690 */
  push32(0x10015154u); f_10012690();
  /* 10015154 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015157:;
  /* 10015157 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015159 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001515fu);
  /* 1001515f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015162 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015167 jle 0x1001517a */
  if ((C.zf||C.sf!=C.of)) goto L_1001517a;
  /* 10015169 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1001516e push 1 */
  push32((uint32_t)(0x1u));
  /* 10015170 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015172 call 0x10012690 */
  push32(0x10015177u); f_10012690();
  /* 10015177 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001517a:;
  /* 1001517a push 2 */
  push32((uint32_t)(0x2u));
  /* 1001517c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015182u);
  /* 10015182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015185 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001518a jle 0x1001519d */
  if ((C.zf||C.sf!=C.of)) goto L_1001519d;
  /* 1001518c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10015191 push 1 */
  push32((uint32_t)(0x1u));
  /* 10015193 push 2 */
  push32((uint32_t)(0x2u));
  /* 10015195 call 0x10012690 */
  push32(0x1001519au); f_10012690();
  /* 1001519a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001519d:;
  /* 1001519d push 3 */
  push32((uint32_t)(0x3u));
  /* 1001519f call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100151a5u);
  /* 100151a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100151a8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100151ad jle 0x100151c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100151c0;
  /* 100151af push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100151b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100151b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100151b8 call 0x10012690 */
  push32(0x100151bdu); f_10012690();
  /* 100151bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100151c0:;
  /* 100151c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100151c2 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100151c8u);
  /* 100151c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100151cb cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100151d0 jle 0x10015260 */
  if ((C.zf||C.sf!=C.of)) goto L_10015260;
  /* 100151d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100151d8 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100151deu);
  /* 100151de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100151e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100151e3 je 0x10015260 */
  if (C.zf) goto L_10015260;
  /* 100151e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100151e7 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100151edu);
  /* 100151ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100151f0 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100151f5 jle 0x10015260 */
  if ((C.zf||C.sf!=C.of)) goto L_10015260;
  /* 100151f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100151f9 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100151ffu);
  /* 100151ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015202 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015207 jle 0x1001521a */
  if ((C.zf||C.sf!=C.of)) goto L_1001521a;
  /* 10015209 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1001520e push 4 */
  push32((uint32_t)(0x4u));
  /* 10015210 push 5 */
  push32((uint32_t)(0x5u));
  /* 10015212 call 0x10012690 */
  push32(0x10015217u); f_10012690();
  /* 10015217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001521a:;
  /* 1001521a push 2 */
  push32((uint32_t)(0x2u));
  /* 1001521c call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015222u);
  /* 10015222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015225 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001522a jle 0x1001523d */
  if ((C.zf||C.sf!=C.of)) goto L_1001523d;
  /* 1001522c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10015231 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015233 push 2 */
  push32((uint32_t)(0x2u));
  /* 10015235 call 0x10012690 */
  push32(0x1001523au); f_10012690();
  /* 1001523a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001523d:;
  /* 1001523d push 3 */
  push32((uint32_t)(0x3u));
  /* 1001523f call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015245u);
  /* 10015245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015248 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001524d jle 0x10015260 */
  if ((C.zf||C.sf!=C.of)) goto L_10015260;
  /* 1001524f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10015254 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015256 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015258 call 0x10012690 */
  push32(0x1001525du); f_10012690();
  /* 1001525d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015260:;
  /* 10015260 call dword ptr [0x10026500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026500))), 0x10015266u);
  /* 10015266 mov ecx, dword ptr [eax*4 + 0x1002660c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1002660c)));
  /* 1001526d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001526f jne 0x10015293 */
  if (!C.zf) goto L_10015293;
  /* 10015271 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10015276 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015278 push 5 */
  push32((uint32_t)(0x5u));
  /* 1001527a call 0x10012690 */
  push32(0x1001527fu); f_10012690();
  /* 1001527f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015282 call dword ptr [0x10026500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026500))), 0x10015288u);
  /* 10015288 mov dword ptr [eax*4 + 0x1002660c], 1 */
  w32((uint32_t)(EAX*4 + 0x1002660c), (0x1u));
L_10015293:;
  /* 10015293 pop edi */
  EDI = (pop32());
  /* 10015294 pop esi */
  ESI = (pop32());
  /* 10015295 pop ebp */
  EBP = (pop32());
  /* 10015296 pop ebx */
  EBX = (pop32());
  /* 10015297 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001529a ret  */
  ESPCHK(0x10014460u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x100152a0 (72 bytes, 22 insns) */
void f_100152a0(void) {
  FTRACE(0x100152a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100152a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100152a6 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 100152ab call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100152b1u);
  /* 100152b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100152b7 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 100152bc call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100152c2u);
  /* 100152c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100152c8 push 0x10025fd0 */
  push32((uint32_t)(0x10025fd0u));
  /* 100152cd call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100152d3u);
  /* 100152d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100152d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100152d9 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 100152de call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100152e4u);
  /* 100152e4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100152e7 ret  */
  ESPCHK(0x100152a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x100152f0 (55 bytes, 16 insns) */
void f_100152f0(void) {
  FTRACE(0x100152f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100152f0 cmp dword ptr [esp + 4], 0x10023688 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10023688u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100152f8 jne 0x10015324 */
  if (!C.zf) goto L_10015324;
  /* 100152fa push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 100152ff call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10015305u);
  /* 10015305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015308 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001530a je 0x10015324 */
  if (C.zf) goto L_10015324;
  /* 1001530c push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 10015311 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10015317u);
  /* 10015317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001531a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001531c je 0x10015324 */
  if (C.zf) goto L_10015324;
  /* 1001531e mov eax, 1 */
  EAX = (0x1u);
  /* 10015323 ret  */
  ESPCHK(0x100152f0u, _esp0);
  ESP += 4; return;
L_10015324:;
  /* 10015324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10015326 ret  */
  ESPCHK(0x100152f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x10015330 (2008 bytes, 535 insns) */
void f_10015330(void) {
  FTRACE(0x10015330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10015330 push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 10015335 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001533bu);
  /* 1001533b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001533e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015340 jne 0x10015354 */
  if (!C.zf) goto L_10015354;
  /* 10015342 push 0x100238c8 */
  push32((uint32_t)(0x100238c8u));
  /* 10015347 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001534du);
  /* 1001534d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015352 je 0x10015384 */
  if (C.zf) goto L_10015384;
L_10015354:;
  /* 10015354 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015356 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015358 push 0x10023950 */
  push32((uint32_t)(0x10023950u));
  /* 1001535d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015363u);
  /* 10015363 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015365 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015367 push 0x100261f8 */
  push32((uint32_t)(0x100261f8u));
  /* 1001536c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015372u);
  /* 10015372 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015374 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015376 push 0x10026200 */
  push32((uint32_t)(0x10026200u));
  /* 1001537b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015381u);
  /* 10015381 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015384:;
  /* 10015384 push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 10015389 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001538fu);
  /* 1001538f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015392 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015395 jg 0x100153bf */
  if ((!C.zf&&C.sf==C.of)) goto L_100153bf;
  /* 10015397 push 0x10026330 */
  push32((uint32_t)(0x10026330u));
  /* 1001539c call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100153a2u);
  /* 100153a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100153a5 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100153a8 jg 0x100153bf */
  if ((!C.zf&&C.sf==C.of)) goto L_100153bf;
  /* 100153aa push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 100153af call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100153b5u);
  /* 100153b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100153b8 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100153bd jle 0x1001541d */
  if ((C.zf||C.sf!=C.of)) goto L_1001541d;
L_100153bf:;
  /* 100153bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100153c1 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100153c3 push 0x10023628 */
  push32((uint32_t)(0x10023628u));
  /* 100153c8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100153ceu);
  /* 100153ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100153d0 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100153d2 push 0x10023630 */
  push32((uint32_t)(0x10023630u));
  /* 100153d7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100153ddu);
  /* 100153dd push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 100153e2 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100153e8u);
  /* 100153e8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100153eb cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100153f0 jg 0x1001540b */
  if ((!C.zf&&C.sf==C.of)) goto L_1001540b;
  /* 100153f2 push 0x10026330 */
  push32((uint32_t)(0x10026330u));
  /* 100153f7 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100153fdu);
  /* 100153fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015400 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015403 jg 0x1001540b */
  if ((!C.zf&&C.sf==C.of)) goto L_1001540b;
  /* 10015405 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015407 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10015409 jmp 0x1001540f */
  goto L_1001540f;
L_1001540b:;
  /* 1001540b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001540d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1001540f:;
  /* 1001540f push 0x10023708 */
  push32((uint32_t)(0x10023708u));
  /* 10015414 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001541au);
  /* 1001541a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001541d:;
  /* 1001541d push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10015422 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015428u);
  /* 10015428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001542b cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001542e jle 0x100154e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100154e3;
  /* 10015434 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015436 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10015438 push 0x10026350 */
  push32((uint32_t)(0x10026350u));
  /* 1001543d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015443u);
  /* 10015443 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015445 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10015447 push 0x10026358 */
  push32((uint32_t)(0x10026358u));
  /* 1001544c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015452u);
  /* 10015452 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015454 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015456 push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 1001545b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015461u);
  /* 10015461 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015463 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10015465 push 0x10026298 */
  push32((uint32_t)(0x10026298u));
  /* 1001546a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015470u);
  /* 10015470 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015472 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10015474 push 0x10026280 */
  push32((uint32_t)(0x10026280u));
  /* 10015479 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001547fu);
  /* 1001547f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015481 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015483 push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 10015488 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001548eu);
  /* 1001548e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015491 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10015496 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001549cu);
  /* 1001549c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001549f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100154a2 jle 0x100154e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100154e3;
  /* 100154a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100154a6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100154a8 push 0x10026348 */
  push32((uint32_t)(0x10026348u));
  /* 100154ad call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100154b3u);
  /* 100154b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100154b5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100154b7 push 0x10026360 */
  push32((uint32_t)(0x10026360u));
  /* 100154bc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100154c2u);
  /* 100154c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100154c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100154c6 push 0x100262a0 */
  push32((uint32_t)(0x100262a0u));
  /* 100154cb call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100154d1u);
  /* 100154d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100154d3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100154d5 push 0x100262a8 */
  push32((uint32_t)(0x100262a8u));
  /* 100154da call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100154e0u);
  /* 100154e0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100154e3:;
  /* 100154e3 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 100154e8 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100154eeu);
  /* 100154ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100154f1 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100154f4 jle 0x1001558b */
  if ((C.zf||C.sf!=C.of)) goto L_1001558b;
  /* 100154fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100154fc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100154fe push 0x10023910 */
  push32((uint32_t)(0x10023910u));
  /* 10015503 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015509u);
  /* 10015509 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001550b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001550d push 0x10023918 */
  push32((uint32_t)(0x10023918u));
  /* 10015512 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015518u);
  /* 10015518 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001551a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001551c push 0x10023908 */
  push32((uint32_t)(0x10023908u));
  /* 10015521 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015527u);
  /* 10015527 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015529 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001552b push 0x10025f78 */
  push32((uint32_t)(0x10025f78u));
  /* 10015530 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015536u);
  /* 10015536 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015538 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001553a push 0x10025f68 */
  push32((uint32_t)(0x10025f68u));
  /* 1001553f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015545u);
  /* 10015545 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015547 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10015549 push 0x10025f70 */
  push32((uint32_t)(0x10025f70u));
  /* 1001554e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015554u);
  /* 10015554 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015557 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015559 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001555b push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 10015560 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015566u);
  /* 10015566 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 1001556b call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015571u);
  /* 10015571 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015574 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015577 jle 0x1001558b */
  if ((C.zf||C.sf!=C.of)) goto L_1001558b;
  /* 10015579 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001557b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001557d push 0x10026210 */
  push32((uint32_t)(0x10026210u));
  /* 10015582 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015588u);
  /* 10015588 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001558b:;
  /* 1001558b push 0x10023700 */
  push32((uint32_t)(0x10023700u));
  /* 10015590 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015596u);
  /* 10015596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015599 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001559c jle 0x100155bf */
  if ((C.zf||C.sf!=C.of)) goto L_100155bf;
  /* 1001559e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100155a0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100155a2 push 0x10026260 */
  push32((uint32_t)(0x10026260u));
  /* 100155a7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100155adu);
  /* 100155ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100155af push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100155b1 push 0x10025fc8 */
  push32((uint32_t)(0x10025fc8u));
  /* 100155b6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100155bcu);
  /* 100155bc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100155bf:;
  /* 100155bf push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 100155c4 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100155cau);
  /* 100155ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100155cd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100155d0 jle 0x100156a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100156a3;
  /* 100155d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100155d8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100155da push 0x10026130 */
  push32((uint32_t)(0x10026130u));
  /* 100155df call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100155e5u);
  /* 100155e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100155e7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100155e9 push 0x10026128 */
  push32((uint32_t)(0x10026128u));
  /* 100155ee call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100155f4u);
  /* 100155f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100155f6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100155f8 push 0x10026120 */
  push32((uint32_t)(0x10026120u));
  /* 100155fd call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015603u);
  /* 10015603 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015605 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10015607 push 0x10026018 */
  push32((uint32_t)(0x10026018u));
  /* 1001560c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015612u);
  /* 10015612 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015614 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10015616 push 0x10026010 */
  push32((uint32_t)(0x10026010u));
  /* 1001561b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015621u);
  /* 10015621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015623 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015625 push 0x10026008 */
  push32((uint32_t)(0x10026008u));
  /* 1001562a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015630u);
  /* 10015630 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015633 push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 10015638 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001563eu);
  /* 1001563e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015641 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015644 jle 0x100156a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100156a3;
  /* 10015646 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015648 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001564a push 0x10026118 */
  push32((uint32_t)(0x10026118u));
  /* 1001564f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015655u);
  /* 10015655 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015657 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015659 push 0x10026108 */
  push32((uint32_t)(0x10026108u));
  /* 1001565e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015664u);
  /* 10015664 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015666 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015668 push 0x10026158 */
  push32((uint32_t)(0x10026158u));
  /* 1001566d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015673u);
  /* 10015673 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015675 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015677 push 0x10026000 */
  push32((uint32_t)(0x10026000u));
  /* 1001567c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015682u);
  /* 10015682 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015684 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015686 push 0x10025ff8 */
  push32((uint32_t)(0x10025ff8u));
  /* 1001568b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015691u);
  /* 10015691 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015693 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015695 push 0x10025ff0 */
  push32((uint32_t)(0x10025ff0u));
  /* 1001569a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100156a0u);
  /* 100156a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100156a3:;
  /* 100156a3 push 0x10026330 */
  push32((uint32_t)(0x10026330u));
  /* 100156a8 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100156aeu);
  /* 100156ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100156b1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100156b4 jle 0x10015786 */
  if ((C.zf||C.sf!=C.of)) goto L_10015786;
  /* 100156ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100156bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100156be push 0x10023748 */
  push32((uint32_t)(0x10023748u));
  /* 100156c3 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100156c9u);
  /* 100156c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100156cb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100156cd push 0x10023740 */
  push32((uint32_t)(0x10023740u));
  /* 100156d2 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100156d8u);
  /* 100156d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100156da push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100156dc push 0x10023738 */
  push32((uint32_t)(0x10023738u));
  /* 100156e1 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100156e7u);
  /* 100156e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100156e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100156eb push 0x100236b8 */
  push32((uint32_t)(0x100236b8u));
  /* 100156f0 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100156f6u);
  /* 100156f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100156f8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100156fa push 0x100236b0 */
  push32((uint32_t)(0x100236b0u));
  /* 100156ff call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015705u);
  /* 10015705 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015707 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015709 push 0x100236a8 */
  push32((uint32_t)(0x100236a8u));
  /* 1001570e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015714u);
  /* 10015714 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015717 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015719 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001571b push 0x100236a0 */
  push32((uint32_t)(0x100236a0u));
  /* 10015720 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015726u);
  /* 10015726 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015728 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001572a push 0x10023678 */
  push32((uint32_t)(0x10023678u));
  /* 1001572f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015735u);
  /* 10015735 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015737 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015739 push 0x10023670 */
  push32((uint32_t)(0x10023670u));
  /* 1001573e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015744u);
  /* 10015744 push 0x10023670 */
  push32((uint32_t)(0x10023670u));
  /* 10015749 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001574fu);
  /* 1001574f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015752 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015754 je 0x10015786 */
  if (C.zf) goto L_10015786;
  /* 10015756 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015758 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1001575a push 0x10023720 */
  push32((uint32_t)(0x10023720u));
  /* 1001575f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015765u);
  /* 10015765 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015767 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015769 push 0x10023718 */
  push32((uint32_t)(0x10023718u));
  /* 1001576e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015774u);
  /* 10015774 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015776 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015778 push 0x10023710 */
  push32((uint32_t)(0x10023710u));
  /* 1001577d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015783u);
  /* 10015783 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015786:;
  /* 10015786 push 0x10023690 */
  push32((uint32_t)(0x10023690u));
  /* 1001578b call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015791u);
  /* 10015791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015794 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015797 jle 0x1001581f */
  if ((C.zf||C.sf!=C.of)) goto L_1001581f;
  /* 1001579d push 0x10023680 */
  push32((uint32_t)(0x10023680u));
  /* 100157a2 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100157a8u);
  /* 100157a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100157ab cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100157ae jge 0x1001581f */
  if ((C.sf==C.of)) goto L_1001581f;
  /* 100157b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100157b2 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100157b4 push 0x10023900 */
  push32((uint32_t)(0x10023900u));
  /* 100157b9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100157bfu);
  /* 100157bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100157c1 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100157c3 push 0x100238f8 */
  push32((uint32_t)(0x100238f8u));
  /* 100157c8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100157ceu);
  /* 100157ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100157d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100157d2 push 0x100238f0 */
  push32((uint32_t)(0x100238f0u));
  /* 100157d7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100157ddu);
  /* 100157dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100157df push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100157e1 push 0x100238b8 */
  push32((uint32_t)(0x100238b8u));
  /* 100157e6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100157ecu);
  /* 100157ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100157ee push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100157f0 push 0x100238b0 */
  push32((uint32_t)(0x100238b0u));
  /* 100157f5 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100157fbu);
  /* 100157fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100157fd push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100157ff push 0x100238a8 */
  push32((uint32_t)(0x100238a8u));
  /* 10015804 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001580au);
  /* 1001580a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001580d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001580f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015811 push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 10015816 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001581cu);
  /* 1001581c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001581f:;
  /* 1001581f push 0x10023680 */
  push32((uint32_t)(0x10023680u));
  /* 10015824 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001582au);
  /* 1001582a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001582d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015830 jle 0x10015911 */
  if ((C.zf||C.sf!=C.of)) goto L_10015911;
  /* 10015836 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015838 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1001583a push 0x10023658 */
  push32((uint32_t)(0x10023658u));
  /* 1001583f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015845u);
  /* 10015845 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015847 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10015849 push 0x10023650 */
  push32((uint32_t)(0x10023650u));
  /* 1001584e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015854u);
  /* 10015854 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015856 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015858 push 0x10023648 */
  push32((uint32_t)(0x10023648u));
  /* 1001585d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015863u);
  /* 10015863 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015865 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015867 push 0x10026318 */
  push32((uint32_t)(0x10026318u));
  /* 1001586c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015872u);
  /* 10015872 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015874 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015876 push 0x10026310 */
  push32((uint32_t)(0x10026310u));
  /* 1001587b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015881u);
  /* 10015881 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015883 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10015885 push 0x10026308 */
  push32((uint32_t)(0x10026308u));
  /* 1001588a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015890u);
  /* 10015890 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015895 push 0xa */
  push32((uint32_t)(0xau));
  /* 10015897 push 0x10026390 */
  push32((uint32_t)(0x10026390u));
  /* 1001589c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158a2u);
  /* 100158a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100158a4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100158a6 push 0x10026388 */
  push32((uint32_t)(0x10026388u));
  /* 100158ab call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158b1u);
  /* 100158b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100158b3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100158b5 push 0x100263d8 */
  push32((uint32_t)(0x100263d8u));
  /* 100158ba call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158c0u);
  /* 100158c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100158c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100158c4 push 0x100263d0 */
  push32((uint32_t)(0x100263d0u));
  /* 100158c9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158cfu);
  /* 100158cf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100158d1 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100158d3 push 0x100263c8 */
  push32((uint32_t)(0x100263c8u));
  /* 100158d8 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158deu);
  /* 100158de push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100158e0 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100158e2 push 0x100263c0 */
  push32((uint32_t)(0x100263c0u));
  /* 100158e7 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158edu);
  /* 100158ed add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100158f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100158f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100158f4 push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 100158f9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100158ffu);
  /* 100158ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015901 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015903 push 0x10026210 */
  push32((uint32_t)(0x10026210u));
  /* 10015908 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001590eu);
  /* 1001590e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015911:;
  /* 10015911 push 0x10025f80 */
  push32((uint32_t)(0x10025f80u));
  /* 10015916 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001591cu);
  /* 1001591c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001591f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015922 jle 0x10015a80 */
  if ((C.zf||C.sf!=C.of)) goto L_10015a80;
  /* 10015928 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001592a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001592c push 0x100236e0 */
  push32((uint32_t)(0x100236e0u));
  /* 10015931 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015937u);
  /* 10015937 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015939 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001593b push 0x100236e8 */
  push32((uint32_t)(0x100236e8u));
  /* 10015940 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015946u);
  /* 10015946 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015948 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1001594a push 0x100236f0 */
  push32((uint32_t)(0x100236f0u));
  /* 1001594f call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015955u);
  /* 10015955 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015957 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015959 push 0x100236f8 */
  push32((uint32_t)(0x100236f8u));
  /* 1001595e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015964u);
  /* 10015964 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015966 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015968 push 0x100236c0 */
  push32((uint32_t)(0x100236c0u));
  /* 1001596d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015973u);
  /* 10015973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015975 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015977 push 0x100236d0 */
  push32((uint32_t)(0x100236d0u));
  /* 1001597c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015982u);
  /* 10015982 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015985 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015987 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015989 push 0x10023788 */
  push32((uint32_t)(0x10023788u));
  /* 1001598e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015994u);
  /* 10015994 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015996 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015998 push 0x10023790 */
  push32((uint32_t)(0x10023790u));
  /* 1001599d call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100159a3u);
  /* 100159a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100159a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100159a7 push 0x10023798 */
  push32((uint32_t)(0x10023798u));
  /* 100159ac call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100159b2u);
  /* 100159b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100159b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100159b6 push 0x10023770 */
  push32((uint32_t)(0x10023770u));
  /* 100159bb call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100159c1u);
  /* 100159c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100159c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100159c5 push 0x10023778 */
  push32((uint32_t)(0x10023778u));
  /* 100159ca call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100159d0u);
  /* 100159d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100159d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100159d4 push 0x10023780 */
  push32((uint32_t)(0x10023780u));
  /* 100159d9 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100159dfu);
  /* 100159df add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100159e2 push 0x10025f80 */
  push32((uint32_t)(0x10025f80u));
  /* 100159e7 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100159edu);
  /* 100159ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100159f0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100159f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100159f5 jle 0x10015a0a */
  if ((C.zf||C.sf!=C.of)) goto L_10015a0a;
  /* 100159f7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100159f9 push 0x10026028 */
  push32((uint32_t)(0x10026028u));
  /* 100159fe call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015a04u);
  /* 10015a04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015a06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015a08 jmp 0x10015a1b */
  goto L_10015a1b;
L_10015a0a:;
  /* 10015a0a push 0xf */
  push32((uint32_t)(0xfu));
  /* 10015a0c push 0x10026028 */
  push32((uint32_t)(0x10026028u));
  /* 10015a11 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015a17u);
  /* 10015a17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015a19 push 0xf */
  push32((uint32_t)(0xfu));
L_10015a1b:;
  /* 10015a1b push 0x10026088 */
  push32((uint32_t)(0x10026088u));
  /* 10015a20 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015a26u);
  /* 10015a26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015a29 push 0x10026028 */
  push32((uint32_t)(0x10026028u));
  /* 10015a2e call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015a34u);
  /* 10015a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015a37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015a39 je 0x10015a5f */
  if (C.zf) goto L_10015a5f;
  /* 10015a3b push 0x10026088 */
  push32((uint32_t)(0x10026088u));
  /* 10015a40 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015a46u);
  /* 10015a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015a49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015a4b je 0x10015a5f */
  if (C.zf) goto L_10015a5f;
  /* 10015a4d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015a4f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015a51 push 0x10026080 */
  push32((uint32_t)(0x10026080u));
  /* 10015a56 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015a5cu);
  /* 10015a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015a5f:;
  /* 10015a5f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015a61 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015a63 push 0x10026208 */
  push32((uint32_t)(0x10026208u));
  /* 10015a68 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015a6eu);
  /* 10015a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015a70 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015a72 push 0x10026210 */
  push32((uint32_t)(0x10026210u));
  /* 10015a77 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015a7du);
  /* 10015a7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015a80:;
  /* 10015a80 push 0x10026308 */
  push32((uint32_t)(0x10026308u));
  /* 10015a85 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10015a8bu);
  /* 10015a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015a8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015a90 je 0x10015b07 */
  if (C.zf) goto L_10015b07;
  /* 10015a92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015a94 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015a96 push 0x10026170 */
  push32((uint32_t)(0x10026170u));
  /* 10015a9b call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015aa1u);
  /* 10015aa1 push 0x10026170 */
  push32((uint32_t)(0x10026170u));
  /* 10015aa6 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015aacu);
  /* 10015aac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015ab1 je 0x10015b07 */
  if (C.zf) goto L_10015b07;
  /* 10015ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015ab5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015ab7 push 0x10026180 */
  push32((uint32_t)(0x10026180u));
  /* 10015abc call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015ac2u);
  /* 10015ac2 push 0x10026180 */
  push32((uint32_t)(0x10026180u));
  /* 10015ac7 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015acdu);
  /* 10015acd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015ad0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015ad2 je 0x10015b07 */
  if (C.zf) goto L_10015b07;
  /* 10015ad4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015ad6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015ad8 push 0x10026178 */
  push32((uint32_t)(0x10026178u));
  /* 10015add call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015ae3u);
  /* 10015ae3 push 0x10026178 */
  push32((uint32_t)(0x10026178u));
  /* 10015ae8 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015aeeu);
  /* 10015aee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015af1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015af3 je 0x10015b07 */
  if (C.zf) goto L_10015b07;
  /* 10015af5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015af7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015af9 push 0x10026168 */
  push32((uint32_t)(0x10026168u));
  /* 10015afe call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015b04u);
  /* 10015b04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015b07:;
  /* 10015b07 ret  */
  ESPCHK(0x10015330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b10 @ 0x10015b10 (305 bytes, 86 insns) */
void f_10015b10(void) {
  FTRACE(0x10015b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10015b10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b12 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10015b14 push 0x10026378 */
  push32((uint32_t)(0x10026378u));
  /* 10015b19 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015b1fu);
  /* 10015b1f push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10015b24 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015b2au);
  /* 10015b2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015b2f je 0x10015b43 */
  if (C.zf) goto L_10015b43;
  /* 10015b31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b35 push 0x10023660 */
  push32((uint32_t)(0x10023660u));
  /* 10015b3a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015b40u);
  /* 10015b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015b43:;
  /* 10015b43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b45 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b47 push 0x10026078 */
  push32((uint32_t)(0x10026078u));
  /* 10015b4c call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015b52u);
  /* 10015b52 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10015b57 call 0x100152f0 */
  push32(0x10015b5cu); f_100152f0();
  /* 10015b5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015b61 jne 0x10015b71 */
  if (!C.zf) goto L_10015b71;
  /* 10015b63 mov eax, dword ptr [0x10025f58] */
  EAX = (r32((uint32_t)(0x10025f58)));
  /* 10015b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015b6a je 0x10015b83 */
  if (C.zf) goto L_10015b83;
  /* 10015b6c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015b6f je 0x10015b83 */
  if (C.zf) goto L_10015b83;
L_10015b71:;
  /* 10015b71 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10015b75 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10015b7a call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015b80u);
  /* 10015b80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015b83:;
  /* 10015b83 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10015b88 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015b8eu);
  /* 10015b8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015b91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015b93 je 0x10015ba7 */
  if (C.zf) goto L_10015ba7;
  /* 10015b95 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b97 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015b99 push 0x10026040 */
  push32((uint32_t)(0x10026040u));
  /* 10015b9e call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015ba4u);
  /* 10015ba4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015ba7:;
  /* 10015ba7 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 10015bac call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10015bb2u);
  /* 10015bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015bb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015bb7 je 0x10015bcb */
  if (C.zf) goto L_10015bcb;
  /* 10015bb9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015bbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015bbd push 0x10026030 */
  push32((uint32_t)(0x10026030u));
  /* 10015bc2 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015bc8u);
  /* 10015bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015bcb:;
  /* 10015bcb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015bcd push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10015bcf push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 10015bd4 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015bdau);
  /* 10015bda push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015bdc push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10015bde push 0x10026100 */
  push32((uint32_t)(0x10026100u));
  /* 10015be3 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015be9u);
  /* 10015be9 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10015bee call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015bf4u);
  /* 10015bf4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015bf9 je 0x10015c0d */
  if (C.zf) goto L_10015c0d;
  /* 10015bfb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015bfd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10015bff push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10015c04 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015c0au);
  /* 10015c0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015c0d:;
  /* 10015c0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c0f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10015c11 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10015c16 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015c1cu);
  /* 10015c1c push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 10015c21 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015c27u);
  /* 10015c27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015c2c je 0x10015c40 */
  if (C.zf) goto L_10015c40;
  /* 10015c2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c30 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c32 push 0x100238e0 */
  push32((uint32_t)(0x100238e0u));
  /* 10015c37 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10015c3du);
  /* 10015c3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015c40:;
  /* 10015c40 ret  */
  ESPCHK(0x10015b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c50 @ 0x10015c50 (536 bytes, 150 insns) */
void f_10015c50(void) {
  FTRACE(0x10015c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10015c50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c54 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015c56 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 10015c5b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015c61u);
  /* 10015c61 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10015c66 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015c6cu);
  /* 10015c6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015c6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015c71 je 0x10015c98 */
  if (C.zf) goto L_10015c98;
  /* 10015c73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10015c79 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 10015c7e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015c84u);
  /* 10015c84 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c88 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015c8a push 0x10025fd0 */
  push32((uint32_t)(0x10025fd0u));
  /* 10015c8f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015c95u);
  /* 10015c95 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015c98:;
  /* 10015c98 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c9a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015c9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10015c9e push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 10015ca3 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015ca9u);
  /* 10015ca9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015cad push 1 */
  push32((uint32_t)(0x1u));
  /* 10015caf push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10015cb4 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015cbau);
  /* 10015cba mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10015cbf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015cc2 mov ecx, dword ptr [eax*4 + 0x10025f98] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10025f98)));
  /* 10015cc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10015ccb jne 0x10015ce8 */
  if (!C.zf) goto L_10015ce8;
  /* 10015ccd call 0x100152a0 */
  push32(0x10015cd2u); f_100152a0();
  /* 10015cd2 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10015cd7 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015cddu);
  /* 10015cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015ce2 je 0x10015e67 */
  if (C.zf) goto L_10015e67;
L_10015ce8:;
  /* 10015ce8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015cea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015cec push 1 */
  push32((uint32_t)(0x1u));
  /* 10015cee push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 10015cf3 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015cf9u);
  /* 10015cf9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015cfb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10015cff push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10015d04 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015d0au);
  /* 10015d0a push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10015d0f call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015d15u);
  /* 10015d15 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015d18 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015d1b jge 0x10015d2a */
  if ((C.sf==C.of)) goto L_10015d2a;
  /* 10015d1d call 0x100126f0 */
  push32(0x10015d22u); f_100126f0();
  /* 10015d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015d24 jne 0x10015e67 */
  if (!C.zf) goto L_10015e67;
L_10015d2a:;
  /* 10015d2a push esi */
  push32((uint32_t)(ESI));
  /* 10015d2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015d2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015d2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10015d31 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10015d36 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015d3cu);
  /* 10015d3c push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10015d41 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015d47u);
  /* 10015d47 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10015d4c mov esi, eax */
  ESI = (EAX);
  /* 10015d4e call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015d54u);
  /* 10015d54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015d57 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10015d59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015d5b pop esi */
  ESI = (pop32());
  /* 10015d5c jg 0x10015e67 */
  if ((!C.zf&&C.sf==C.of)) goto L_10015e67;
  /* 10015d62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015d64 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015d66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10015d68 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10015d6d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015d73u);
  /* 10015d73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015d76 call 0x10012800 */
  push32(0x10015d7bu); f_10012800();
  /* 10015d7b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015d7e jge 0x10015da7 */
  if ((C.sf==C.of)) goto L_10015da7;
  /* 10015d80 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015d82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10015d86 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10015d8b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015d91u);
  /* 10015d91 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10015d96 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015d9cu);
  /* 10015d9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015d9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015da1 je 0x10015e67 */
  if (C.zf) goto L_10015e67;
L_10015da7:;
  /* 10015da7 call 0x100152a0 */
  push32(0x10015dacu); f_100152a0();
  /* 10015dac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015dae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015db0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015db2 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10015db7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015dbdu);
  /* 10015dbd push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10015dc2 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015dc8u);
  /* 10015dc8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015dcb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015dce jl 0x10015e67 */
  if ((C.sf!=C.of)) goto L_10015e67;
  /* 10015dd4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015dd6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015dd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015dda push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10015ddf call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015de5u);
  /* 10015de5 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 10015dea call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015df0u);
  /* 10015df0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015df3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015df5 je 0x10015e0b */
  if (C.zf) goto L_10015e0b;
  /* 10015df7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015df9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015dfb push 4 */
  push32((uint32_t)(0x4u));
  /* 10015dfd push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10015e02 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015e08u);
  /* 10015e08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015e0b:;
  /* 10015e0b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10015e11 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10015e16 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015e1cu);
  /* 10015e1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e1e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10015e20 push 3 */
  push32((uint32_t)(0x3u));
  /* 10015e22 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10015e27 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015e2du);
  /* 10015e2d push 0x100238e0 */
  push32((uint32_t)(0x100238e0u));
  /* 10015e32 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10015e38u);
  /* 10015e38 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015e3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015e3d je 0x10015e53 */
  if (C.zf) goto L_10015e53;
  /* 10015e3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e43 push 5 */
  push32((uint32_t)(0x5u));
  /* 10015e45 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10015e4a call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015e50u);
  /* 10015e50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015e53:;
  /* 10015e53 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10015e59 push 0x100260f8 */
  push32((uint32_t)(0x100260f8u));
  /* 10015e5e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015e64u);
  /* 10015e64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015e67:;
  /* 10015e67 ret  */
  ESPCHK(0x10015c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x10015e70 (472 bytes, 137 insns) */
void f_10015e70(void) {
  FTRACE(0x10015e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10015e70 push ecx */
  push32((uint32_t)(ECX));
  /* 10015e71 push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 10015e76 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015e7cu);
  /* 10015e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015e7f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015e82 jge 0x10015e97 */
  if ((C.sf==C.of)) goto L_10015e97;
  /* 10015e84 mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10015e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10015e8b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10015e8e push eax */
  push32((uint32_t)(EAX));
  /* 10015e8f call 0x10012750 */
  push32(0x10015e94u); f_10012750();
  /* 10015e94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015e97:;
  /* 10015e97 push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 10015e9c call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015ea2u);
  /* 10015ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015ea5 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015eaa jg 0x10015ebe */
  if ((!C.zf&&C.sf==C.of)) goto L_10015ebe;
  /* 10015eac push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10015eb1 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10015eb7u);
  /* 10015eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015ebc je 0x10015ed2 */
  if (C.zf) goto L_10015ed2;
L_10015ebe:;
  /* 10015ebe mov ecx, dword ptr [0x100262b4] */
  ECX = (r32((uint32_t)(0x100262b4)));
  /* 10015ec4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10015ec6 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10015ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 10015eca call 0x10012750 */
  push32(0x10015ecfu); f_10012750();
  /* 10015ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015ed2:;
  /* 10015ed2 push esi */
  push32((uint32_t)(ESI));
  /* 10015ed3 push edi */
  push32((uint32_t)(EDI));
  /* 10015ed4 mov edi, 2 */
  EDI = (0x2u);
L_10015ed9:;
  /* 10015ed9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015edb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10015edd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10015ee2 push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 10015ee7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015eedu);
  /* 10015eed push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10015ef2 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10015ef8u);
  /* 10015ef8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015efb cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015f00 jge 0x10015f1b */
  if ((C.sf==C.of)) goto L_10015f1b;
  /* 10015f02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015f04 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10015f06 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10015f0b push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10015f10 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015f16u);
  /* 10015f16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015f19 jmp 0x10015f46 */
  goto L_10015f46;
L_10015f1b:;
  /* 10015f1b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10015f1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10015f1f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10015f24 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10015f29 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015f2fu);
  /* 10015f2f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015f31 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10015f33 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10015f38 push 0x100260e0 */
  push32((uint32_t)(0x100260e0u));
  /* 10015f3d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015f43u);
  /* 10015f43 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015f46:;
  /* 10015f46 mov edx, dword ptr [0x100262b4] */
  EDX = (r32((uint32_t)(0x100262b4)));
  /* 10015f4c add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10015f4f push edx */
  push32((uint32_t)(EDX));
  /* 10015f50 call 0x10012770 */
  push32(0x10015f55u); f_10012770();
  /* 10015f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015f5a jne 0x10015f7d */
  if (!C.zf) goto L_10015f7d;
  /* 10015f5c call 0x10012800 */
  push32(0x10015f61u); f_10012800();
  /* 10015f61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015f64 jge 0x10015f7d */
  if ((C.sf==C.of)) goto L_10015f7d;
  /* 10015f66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015f68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10015f6a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10015f6f push 0x10026278 */
  push32((uint32_t)(0x10026278u));
  /* 10015f74 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015f7au);
  /* 10015f7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10015f7d:;
  /* 10015f7d mov al, byte ptr [0x100262b4] */
  AL = (r8((uint32_t)(0x100262b4)));
  /* 10015f82 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10015f86 mov eax, dword ptr [0x100264b8] */
  EAX = (r32((uint32_t)(0x100264b8)));
  /* 10015f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10015f8d je 0x10015fa5 */
  if (C.zf) goto L_10015fa5;
  /* 10015f8f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10015f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10015f95 push 0x10023888 */
  push32((uint32_t)(0x10023888u));
  /* 10015f9a push ecx */
  push32((uint32_t)(ECX));
  /* 10015f9b call eax */
  call_ind((uint32_t)(EAX), 0x10015f9du);
  /* 10015f9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015fa0 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015fa3 jge 0x10015fe5 */
  if ((C.sf==C.of)) goto L_10015fe5;
L_10015fa5:;
  /* 10015fa5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10015fa7 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015fadu);
  /* 10015fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015fb0 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015fb5 jle 0x10015fe5 */
  if ((C.zf||C.sf!=C.of)) goto L_10015fe5;
  /* 10015fb7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10015fb9 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10015fbfu);
  /* 10015fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015fc2 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10015fc7 jle 0x10015fe5 */
  if ((C.zf||C.sf!=C.of)) goto L_10015fe5;
  /* 10015fc9 mov esi, 0x1e */
  ESI = (0x1eu);
L_10015fce:;
  /* 10015fce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10015fd0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10015fd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10015fd4 push 0x10023888 */
  push32((uint32_t)(0x10023888u));
  /* 10015fd9 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10015fdfu);
  /* 10015fdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015fe2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10015fe3 jne 0x10015fce */
  if (!C.zf) goto L_10015fce;
L_10015fe5:;
  /* 10015fe5 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10015fea call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10015ff0u);
  /* 10015ff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10015ff3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10015ff5 je 0x10015ffb */
  if (C.zf) goto L_10015ffb;
  /* 10015ff7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10015ff9 jmp 0x10015ffd */
  goto L_10015ffd;
L_10015ffb:;
  /* 10015ffb push 0x64 */
  push32((uint32_t)(0x64u));
L_10015ffd:;
  /* 10015ffd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10015fff push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10016004 push 0x100263b0 */
  push32((uint32_t)(0x100263b0u));
  /* 10016009 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001600fu);
  /* 1001600f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016012 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016014 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016016 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1001601b push 0x10023680 */
  push32((uint32_t)(0x10023680u));
  /* 10016020 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016026u);
  /* 10016026 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016028 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1001602a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1001602f push 0x10025f80 */
  push32((uint32_t)(0x10025f80u));
  /* 10016034 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001603au);
  /* 1001603a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001603d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1001603e jne 0x10015ed9 */
  if (!C.zf) goto L_10015ed9;
  /* 10016044 pop edi */
  EDI = (pop32());
  /* 10016045 pop esi */
  ESI = (pop32());
  /* 10016046 pop ecx */
  ECX = (pop32());
  /* 10016047 ret  */
  ESPCHK(0x10015e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006050 @ 0x10016050 (789 bytes, 244 insns) */
void f_10016050(void) {
  FTRACE(0x10016050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016050 push ecx */
  push32((uint32_t)(ECX));
  /* 10016051 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10016056 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x1001605cu);
  /* 1001605c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001605f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016061 je 0x10016363 */
  if (C.zf) goto L_10016363;
  /* 10016067 call 0x100126f0 */
  push32(0x1001606cu); f_100126f0();
  /* 1001606c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001606f jne 0x100160b6 */
  if (!C.zf) goto L_100160b6;
  /* 10016071 mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10016076 push eax */
  push32((uint32_t)(EAX));
  /* 10016077 call 0x10012770 */
  push32(0x1001607cu); f_10012770();
  /* 1001607c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001607f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016081 jne 0x10016363 */
  if (!C.zf) goto L_10016363;
  /* 10016087 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1001608c push 3 */
  push32((uint32_t)(0x3u));
  /* 1001608e push 2 */
  push32((uint32_t)(0x2u));
  /* 10016090 call 0x10012690 */
  push32(0x10016095u); f_10012690();
  /* 10016095 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1001609a push 3 */
  push32((uint32_t)(0x3u));
  /* 1001609c push 0 */
  push32((uint32_t)(0x0u));
  /* 1001609e call 0x10012690 */
  push32(0x100160a3u); f_10012690();
  /* 100160a3 mov ecx, dword ptr [0x100262b4] */
  ECX = (r32((uint32_t)(0x100262b4)));
  /* 100160a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100160ab push ecx */
  push32((uint32_t)(ECX));
  /* 100160ac call 0x10012750 */
  push32(0x100160b1u); f_10012750();
  /* 100160b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100160b4 pop ecx */
  ECX = (pop32());
  /* 100160b5 ret  */
  ESPCHK(0x10016050u, _esp0);
  ESP += 4; return;
L_100160b6:;
  /* 100160b6 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 100160bb call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100160c1u);
  /* 100160c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100160c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100160c6 je 0x10016363 */
  if (C.zf) goto L_10016363;
  /* 100160cc mov edx, dword ptr [0x100262b4] */
  EDX = (r32((uint32_t)(0x100262b4)));
  /* 100160d2 push edx */
  push32((uint32_t)(EDX));
  /* 100160d3 call 0x10012770 */
  push32(0x100160d8u); f_10012770();
  /* 100160d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100160db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100160dd jne 0x10016152 */
  if (!C.zf) goto L_10016152;
  /* 100160df push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100160e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100160e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 100160e8 call 0x10012690 */
  push32(0x100160edu); f_10012690();
  /* 100160ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100160f0 call 0x100126f0 */
  push32(0x100160f5u); f_100126f0();
  /* 100160f5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100160f8 jne 0x10016119 */
  if (!C.zf) goto L_10016119;
  /* 100160fa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100160ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10016101 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016103 call 0x10012690 */
  push32(0x10016108u); f_10012690();
  /* 10016108 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1001610d push 2 */
  push32((uint32_t)(0x2u));
  /* 1001610f push 4 */
  push32((uint32_t)(0x4u));
  /* 10016111 call 0x10012690 */
  push32(0x10016116u); f_10012690();
  /* 10016116 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016119:;
  /* 10016119 call 0x100126f0 */
  push32(0x1001611eu); f_100126f0();
  /* 1001611e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016121 jne 0x10016142 */
  if (!C.zf) goto L_10016142;
  /* 10016123 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10016128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001612a push 4 */
  push32((uint32_t)(0x4u));
  /* 1001612c call 0x10012690 */
  push32(0x10016131u); f_10012690();
  /* 10016131 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10016136 push 2 */
  push32((uint32_t)(0x2u));
  /* 10016138 push 4 */
  push32((uint32_t)(0x4u));
  /* 1001613a call 0x10012690 */
  push32(0x1001613fu); f_10012690();
  /* 1001613f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016142:;
  /* 10016142 mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10016147 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016149 push eax */
  push32((uint32_t)(EAX));
  /* 1001614a call 0x10012750 */
  push32(0x1001614fu); f_10012750();
  /* 1001614f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016152:;
  /* 10016152 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10016157 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001615du);
  /* 1001615d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016160 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016162 je 0x100161d4 */
  if (C.zf) goto L_100161d4;
  /* 10016164 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 10016169 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001616fu);
  /* 1001616f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016172 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016174 jne 0x100161d4 */
  if (!C.zf) goto L_100161d4;
  /* 10016176 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 1001617b call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016181u);
  /* 10016181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016186 je 0x100161d4 */
  if (C.zf) goto L_100161d4;
  /* 10016188 mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 1001618d mov cl, byte ptr [0x100262b4] */
  CL = (r8((uint32_t)(0x100262b4)));
  /* 10016193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016195 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10016199 je 0x100161ae */
  if (C.zf) goto L_100161ae;
  /* 1001619b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1001619f push 5 */
  push32((uint32_t)(0x5u));
  /* 100161a1 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 100161a6 push edx */
  push32((uint32_t)(EDX));
  /* 100161a7 call eax */
  call_ind((uint32_t)(EAX), 0x100161a9u);
  /* 100161a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100161ac jmp 0x100161b0 */
  goto L_100161b0;
L_100161ae:;
  /* 100161ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100161b0:;
  /* 100161b0 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100161b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100161b5 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100161b8 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100161bd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100161bf sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100161c2 mov eax, edx */
  EAX = (EDX);
  /* 100161c4 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100161c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100161c9 push edx */
  push32((uint32_t)(EDX));
  /* 100161ca push 5 */
  push32((uint32_t)(0x5u));
  /* 100161cc call 0x10013010 */
  push32(0x100161d1u); f_10013010();
  /* 100161d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100161d4:;
  /* 100161d4 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 100161d9 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100161dfu);
  /* 100161df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100161e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100161e4 je 0x100162f9 */
  if (C.zf) goto L_100162f9;
  /* 100161ea push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 100161ef call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100161f5u);
  /* 100161f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100161f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100161fa jne 0x100162f9 */
  if (!C.zf) goto L_100162f9;
  /* 10016200 mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 10016205 mov cl, byte ptr [0x100262b4] */
  CL = (r8((uint32_t)(0x100262b4)));
  /* 1001620b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001620d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10016211 je 0x10016226 */
  if (C.zf) goto L_10016226;
  /* 10016213 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10016217 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016219 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 1001621e push edx */
  push32((uint32_t)(EDX));
  /* 1001621f call eax */
  call_ind((uint32_t)(EAX), 0x10016221u);
  /* 10016221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016224 jmp 0x10016228 */
  goto L_10016228;
L_10016226:;
  /* 10016226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10016228:;
  /* 10016228 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1001622b push 2 */
  push32((uint32_t)(0x2u));
  /* 1001622d lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10016230 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10016235 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10016237 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1001623a mov eax, edx */
  EAX = (EDX);
  /* 1001623c shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1001623f add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10016241 push edx */
  push32((uint32_t)(EDX));
  /* 10016242 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016244 call 0x10013010 */
  push32(0x10016249u); f_10013010();
  /* 10016249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001624c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001624e je 0x100162f9 */
  if (C.zf) goto L_100162f9;
  /* 10016254 mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 10016259 mov cl, byte ptr [0x100262b4] */
  CL = (r8((uint32_t)(0x100262b4)));
  /* 1001625f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016261 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10016265 je 0x1001627a */
  if (C.zf) goto L_1001627a;
  /* 10016267 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1001626b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001626d push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10016272 push edx */
  push32((uint32_t)(EDX));
  /* 10016273 call eax */
  call_ind((uint32_t)(EAX), 0x10016275u);
  /* 10016275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016278 jmp 0x1001627c */
  goto L_1001627c;
L_1001627a:;
  /* 1001627a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001627c:;
  /* 1001627c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10016283 push 2 */
  push32((uint32_t)(0x2u));
  /* 10016285 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016287 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1001628a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1001628d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10016292 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10016294 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10016297 mov eax, edx */
  EAX = (EDX);
  /* 10016299 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1001629c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001629e push edx */
  push32((uint32_t)(EDX));
  /* 1001629f push 1 */
  push32((uint32_t)(0x1u));
  /* 100162a1 call 0x10013010 */
  push32(0x100162a6u); f_10013010();
  /* 100162a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100162a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100162ab je 0x100162f9 */
  if (C.zf) goto L_100162f9;
  /* 100162ad mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 100162b2 mov cl, byte ptr [0x100262b4] */
  CL = (r8((uint32_t)(0x100262b4)));
  /* 100162b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100162ba mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100162be je 0x100162d3 */
  if (C.zf) goto L_100162d3;
  /* 100162c0 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100162c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100162c6 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 100162cb push edx */
  push32((uint32_t)(EDX));
  /* 100162cc call eax */
  call_ind((uint32_t)(EAX), 0x100162ceu);
  /* 100162ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100162d1 jmp 0x100162d5 */
  goto L_100162d5;
L_100162d3:;
  /* 100162d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100162d5:;
  /* 100162d5 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100162d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100162da lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100162dd mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100162e2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100162e4 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100162e7 mov eax, edx */
  EAX = (EDX);
  /* 100162e9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100162ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100162ee push edx */
  push32((uint32_t)(EDX));
  /* 100162ef push 4 */
  push32((uint32_t)(0x4u));
  /* 100162f1 call 0x10013010 */
  push32(0x100162f6u); f_10013010();
  /* 100162f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100162f9:;
  /* 100162f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 100162fb call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10016301u);
  /* 10016301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016304 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016309 jle 0x1001632e */
  if ((C.zf||C.sf!=C.of)) goto L_1001632e;
  /* 1001630b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10016310 push 2 */
  push32((uint32_t)(0x2u));
  /* 10016312 push 0 */
  push32((uint32_t)(0x0u));
  /* 10016314 call 0x10012690 */
  push32(0x10016319u); f_10012690();
  /* 10016319 push 2 */
  push32((uint32_t)(0x2u));
  /* 1001631b call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10016321u);
  /* 10016321 push eax */
  push32((uint32_t)(EAX));
  /* 10016322 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016324 push 2 */
  push32((uint32_t)(0x2u));
  /* 10016326 call 0x10012690 */
  push32(0x1001632bu); f_10012690();
  /* 1001632b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001632e:;
  /* 1001632e push 0 */
  push32((uint32_t)(0x0u));
  /* 10016330 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10016336u);
  /* 10016336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016339 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001633e jle 0x10016363 */
  if ((C.zf||C.sf!=C.of)) goto L_10016363;
  /* 10016340 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10016345 push 0 */
  push32((uint32_t)(0x0u));
  /* 10016347 push 2 */
  push32((uint32_t)(0x2u));
  /* 10016349 call 0x10012690 */
  push32(0x1001634eu); f_10012690();
  /* 1001634e push 0 */
  push32((uint32_t)(0x0u));
  /* 10016350 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10016356u);
  /* 10016356 push eax */
  push32((uint32_t)(EAX));
  /* 10016357 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001635b call 0x10012690 */
  push32(0x10016360u); f_10012690();
  /* 10016360 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016363:;
  /* 10016363 pop ecx */
  ECX = (pop32());
  /* 10016364 ret  */
  ESPCHK(0x10016050u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x10016370 (818 bytes, 268 insns) */
void f_10016370(void) {
  FTRACE(0x10016370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016370 push ecx */
  push32((uint32_t)(ECX));
  /* 10016371 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016373 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016375 push 0 */
  push32((uint32_t)(0x0u));
  /* 10016377 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001637du);
  /* 1001637d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016380 call dword ptr [0x10026570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026570))), 0x10016386u);
  /* 10016386 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016388 je 0x100166a0 */
  if (C.zf) goto L_100166a0;
  /* 1001638e push 4 */
  push32((uint32_t)(0x4u));
  /* 10016390 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016392 push 9 */
  push32((uint32_t)(0x9u));
  /* 10016394 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001639au);
  /* 1001639a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001639d call 0x100126f0 */
  push32(0x100163a2u); f_100126f0();
  /* 100163a2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100163a5 je 0x100166a0 */
  if (C.zf) goto L_100166a0;
  /* 100163ab call dword ptr [0x10026570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026570))), 0x100163b1u);
  /* 100163b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100163b3 je 0x10016691 */
  if (C.zf) goto L_10016691;
  /* 100163b9 push esi */
  push32((uint32_t)(ESI));
  /* 100163ba push edi */
  push32((uint32_t)(EDI));
  /* 100163bb push 4 */
  push32((uint32_t)(0x4u));
  /* 100163bd push 4 */
  push32((uint32_t)(0x4u));
  /* 100163bf push 9 */
  push32((uint32_t)(0x9u));
  /* 100163c1 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x100163c7u);
  /* 100163c7 push 0x10026100 */
  push32((uint32_t)(0x10026100u));
  /* 100163cc call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100163d2u);
  /* 100163d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100163d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100163d7 jne 0x1001643f */
  if (!C.zf) goto L_1001643f;
  /* 100163d9 mov al, byte ptr [0x100262b4] */
  AL = (r8((uint32_t)(0x100262b4)));
  /* 100163de mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100163e2 mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 100163e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100163e9 je 0x10016400 */
  if (C.zf) goto L_10016400;
  /* 100163eb mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100163ef push 3 */
  push32((uint32_t)(0x3u));
  /* 100163f1 push 0x10026100 */
  push32((uint32_t)(0x10026100u));
  /* 100163f6 push ecx */
  push32((uint32_t)(ECX));
  /* 100163f7 call eax */
  call_ind((uint32_t)(EAX), 0x100163f9u);
  /* 100163f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100163fc mov esi, eax */
  ESI = (EAX);
  /* 100163fe jmp 0x10016402 */
  goto L_10016402;
L_10016400:;
  /* 10016400 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10016402:;
  /* 10016402 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016404 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001640au);
  /* 1001640a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1001640d mov edi, eax */
  EDI = (EAX);
  /* 1001640f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10016414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016417 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1001641a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1001641c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1001641f mov eax, edx */
  EAX = (EDX);
  /* 10016421 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10016424 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10016426 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016428 jge 0x10016430 */
  if ((C.sf==C.of)) goto L_10016430;
  /* 1001642a push 4 */
  push32((uint32_t)(0x4u));
  /* 1001642c push 4 */
  push32((uint32_t)(0x4u));
  /* 1001642e jmp 0x10016434 */
  goto L_10016434;
L_10016430:;
  /* 10016430 push 6 */
  push32((uint32_t)(0x6u));
  /* 10016432 push 6 */
  push32((uint32_t)(0x6u));
L_10016434:;
  /* 10016434 push 9 */
  push32((uint32_t)(0x9u));
  /* 10016436 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001643cu);
  /* 1001643c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001643f:;
  /* 1001643f push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10016444 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001644au);
  /* 1001644a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001644d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001644f jne 0x100164b8 */
  if (!C.zf) goto L_100164b8;
  /* 10016451 mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 10016456 mov cl, byte ptr [0x100262b4] */
  CL = (r8((uint32_t)(0x100262b4)));
  /* 1001645c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001645e mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10016462 je 0x10016479 */
  if (C.zf) goto L_10016479;
  /* 10016464 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10016468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1001646a push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 1001646f push edx */
  push32((uint32_t)(EDX));
  /* 10016470 call eax */
  call_ind((uint32_t)(EAX), 0x10016472u);
  /* 10016472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016475 mov esi, eax */
  ESI = (EAX);
  /* 10016477 jmp 0x1001647b */
  goto L_1001647b;
L_10016479:;
  /* 10016479 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1001647b:;
  /* 1001647b push 3 */
  push32((uint32_t)(0x3u));
  /* 1001647d call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x10016483u);
  /* 10016483 mov edi, eax */
  EDI = (EAX);
  /* 10016485 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10016488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001648b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1001648e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10016493 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10016495 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10016498 mov ecx, edx */
  ECX = (EDX);
  /* 1001649a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1001649d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001649f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100164a1 jge 0x100164a9 */
  if ((C.sf==C.of)) goto L_100164a9;
  /* 100164a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 100164a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 100164a7 jmp 0x100164ad */
  goto L_100164ad;
L_100164a9:;
  /* 100164a9 push 6 */
  push32((uint32_t)(0x6u));
  /* 100164ab push 6 */
  push32((uint32_t)(0x6u));
L_100164ad:;
  /* 100164ad push 9 */
  push32((uint32_t)(0x9u));
  /* 100164af call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x100164b5u);
  /* 100164b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100164b8:;
  /* 100164b8 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 100164bd call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100164c3u);
  /* 100164c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100164c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100164c8 jne 0x1001652f */
  if (!C.zf) goto L_1001652f;
  /* 100164ca mov eax, dword ptr [0x100264bc] */
  EAX = (r32((uint32_t)(0x100264bc)));
  /* 100164cf mov dl, byte ptr [0x100262b4] */
  DL = (r8((uint32_t)(0x100262b4)));
  /* 100164d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100164d7 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 100164db je 0x100164f2 */
  if (C.zf) goto L_100164f2;
  /* 100164dd mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100164e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 100164e3 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 100164e8 push ecx */
  push32((uint32_t)(ECX));
  /* 100164e9 call eax */
  call_ind((uint32_t)(EAX), 0x100164ebu);
  /* 100164eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100164ee mov esi, eax */
  ESI = (EAX);
  /* 100164f0 jmp 0x100164f4 */
  goto L_100164f4;
L_100164f2:;
  /* 100164f2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100164f4:;
  /* 100164f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100164f6 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100164fcu);
  /* 100164fc lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 100164ff mov edi, eax */
  EDI = (EAX);
  /* 10016501 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10016506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016509 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1001650c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1001650e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10016511 mov eax, edx */
  EAX = (EDX);
  /* 10016513 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016515 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10016518 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001651a push 9 */
  push32((uint32_t)(0x9u));
  /* 1001651c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001651e jge 0x10016524 */
  if ((C.sf==C.of)) goto L_10016524;
  /* 10016520 push 9 */
  push32((uint32_t)(0x9u));
  /* 10016522 jmp 0x10016526 */
  goto L_10016526;
L_10016524:;
  /* 10016524 push 6 */
  push32((uint32_t)(0x6u));
L_10016526:;
  /* 10016526 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001652cu);
  /* 1001652c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001652f:;
  /* 1001652f push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 10016534 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001653au);
  /* 1001653a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001653d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001653f je 0x10016553 */
  if (C.zf) goto L_10016553;
  /* 10016541 push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 10016546 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001654cu);
  /* 1001654c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001654f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016551 jne 0x10016574 */
  if (!C.zf) goto L_10016574;
L_10016553:;
  /* 10016553 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016555 call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x1001655bu);
  /* 1001655b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001655e cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016563 jge 0x10016574 */
  if ((C.sf==C.of)) goto L_10016574;
  /* 10016565 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016567 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016569 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001656b call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x10016571u);
  /* 10016571 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016574:;
  /* 10016574 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10016579 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x1001657fu);
  /* 1001657f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016584 jne 0x100165f7 */
  if (!C.zf) goto L_100165f7;
  /* 10016586 call 0x10012800 */
  push32(0x1001658bu); f_10012800();
  /* 1001658b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001658e jge 0x100165f7 */
  if ((C.sf==C.of)) goto L_100165f7;
  /* 10016590 mov eax, dword ptr [0x100264b8] */
  EAX = (r32((uint32_t)(0x100264b8)));
  /* 10016595 mov cl, byte ptr [0x100262b4] */
  CL = (r8((uint32_t)(0x100262b4)));
  /* 1001659b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001659d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100165a1 je 0x100165b8 */
  if (C.zf) goto L_100165b8;
  /* 100165a3 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100165a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100165a9 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 100165ae push edx */
  push32((uint32_t)(EDX));
  /* 100165af call eax */
  call_ind((uint32_t)(EAX), 0x100165b1u);
  /* 100165b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100165b4 mov esi, eax */
  ESI = (EAX);
  /* 100165b6 jmp 0x100165ba */
  goto L_100165ba;
L_100165b8:;
  /* 100165b8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100165ba:;
  /* 100165ba push 2 */
  push32((uint32_t)(0x2u));
  /* 100165bc call dword ptr [0x1002653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002653c))), 0x100165c2u);
  /* 100165c2 mov edi, eax */
  EDI = (EAX);
  /* 100165c4 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100165c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100165ca lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100165cd mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100165d2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100165d4 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100165d7 mov ecx, edx */
  ECX = (EDX);
  /* 100165d9 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100165dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100165de cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100165e0 jge 0x100165e8 */
  if ((C.sf==C.of)) goto L_100165e8;
  /* 100165e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100165e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100165e6 jmp 0x100165ec */
  goto L_100165ec;
L_100165e8:;
  /* 100165e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100165ea push 7 */
  push32((uint32_t)(0x7u));
L_100165ec:;
  /* 100165ec push 9 */
  push32((uint32_t)(0x9u));
  /* 100165ee call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x100165f4u);
  /* 100165f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100165f7:;
  /* 100165f7 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 100165fc call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10016602u);
  /* 10016602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016605 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016607 pop edi */
  EDI = (pop32());
  /* 10016608 pop esi */
  ESI = (pop32());
  /* 10016609 jne 0x1001661a */
  if (!C.zf) goto L_1001661a;
  /* 1001660b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001660d push 1 */
  push32((uint32_t)(0x1u));
  /* 1001660f push 9 */
  push32((uint32_t)(0x9u));
  /* 10016611 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x10016617u);
  /* 10016617 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001661a:;
  /* 1001661a push 0x10026078 */
  push32((uint32_t)(0x10026078u));
  /* 1001661f call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10016625u);
  /* 10016625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016628 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001662a je 0x1001663e */
  if (C.zf) goto L_1001663e;
  /* 1001662c push 0x10023660 */
  push32((uint32_t)(0x10023660u));
  /* 10016631 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10016637u);
  /* 10016637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001663a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001663c jne 0x1001664d */
  if (!C.zf) goto L_1001664d;
L_1001663e:;
  /* 1001663e push 1 */
  push32((uint32_t)(0x1u));
  /* 10016640 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016642 push 9 */
  push32((uint32_t)(0x9u));
  /* 10016644 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001664au);
  /* 1001664a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001664d:;
  /* 1001664d push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10016652 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016658u);
  /* 10016658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001665b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001665d jne 0x1001666e */
  if (!C.zf) goto L_1001666e;
  /* 1001665f push 4 */
  push32((uint32_t)(0x4u));
  /* 10016661 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016663 push 6 */
  push32((uint32_t)(0x6u));
  /* 10016665 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001666bu);
  /* 1001666b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001666e:;
  /* 1001666e push 0x10026378 */
  push32((uint32_t)(0x10026378u));
  /* 10016673 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10016679u);
  /* 10016679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001667c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001667e jne 0x100166a0 */
  if (!C.zf) goto L_100166a0;
  /* 10016680 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016682 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016684 push 9 */
  push32((uint32_t)(0x9u));
  /* 10016686 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001668cu);
  /* 1001668c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001668f pop ecx */
  ECX = (pop32());
  /* 10016690 ret  */
  ESPCHK(0x10016370u, _esp0);
  ESP += 4; return;
L_10016691:;
  /* 10016691 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016693 push 6 */
  push32((uint32_t)(0x6u));
  /* 10016695 push 0 */
  push32((uint32_t)(0x0u));
  /* 10016697 call dword ptr [0x10026514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026514))), 0x1001669du);
  /* 1001669d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100166a0:;
  /* 100166a0 pop ecx */
  ECX = (pop32());
  /* 100166a1 ret  */
  ESPCHK(0x10016370u, _esp0);
  ESP += 4; return;
}

/* FUN_100066b0 @ 0x100166b0 (174 bytes, 50 insns) */
void f_100166b0(void) {
  FTRACE(0x100166b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100166b0 push 0x10026598 */
  push32((uint32_t)(0x10026598u));
  /* 100166b5 call 0x100127a0 */
  push32(0x100166bau); f_100127a0();
  /* 100166ba push 0x10026340 */
  push32((uint32_t)(0x10026340u));
  /* 100166bf call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100166c5u);
  /* 100166c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100166c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100166ca je 0x100166ec */
  if (C.zf) goto L_100166ec;
  /* 100166cc push 0x10026288 */
  push32((uint32_t)(0x10026288u));
  /* 100166d1 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x100166d7u);
  /* 100166d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100166da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100166dc je 0x100166ec */
  if (C.zf) goto L_100166ec;
  /* 100166de push 0x1001f16c */
  push32((uint32_t)(0x1001f16cu));
  /* 100166e3 call 0x100127a0 */
  push32(0x100166e8u); f_100127a0();
  /* 100166e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100166eb ret  */
  ESPCHK(0x100166b0u, _esp0);
  ESP += 4; return;
L_100166ec:;
  /* 100166ec mov eax, dword ptr [0x10025f58] */
  EAX = (r32((uint32_t)(0x10025f58)));
  /* 100166f1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100166f4 je 0x10016752 */
  if (C.zf) goto L_10016752;
  /* 100166f6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100166f9 je 0x10016752 */
  if (C.zf) goto L_10016752;
  /* 100166fb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100166fe je 0x10016752 */
  if (C.zf) goto L_10016752;
  /* 10016700 push 0x10026270 */
  push32((uint32_t)(0x10026270u));
  /* 10016705 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001670bu);
  /* 1001670b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001670e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016710 je 0x10016732 */
  if (C.zf) goto L_10016732;
  /* 10016712 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 10016717 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001671du);
  /* 1001671d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016720 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016722 jne 0x10016732 */
  if (!C.zf) goto L_10016732;
  /* 10016724 push 0x10026598 */
  push32((uint32_t)(0x10026598u));
  /* 10016729 call 0x100127a0 */
  push32(0x1001672eu); f_100127a0();
  /* 1001672e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016731 ret  */
  ESPCHK(0x100166b0u, _esp0);
  ESP += 4; return;
L_10016732:;
  /* 10016732 push 0x10026150 */
  push32((uint32_t)(0x10026150u));
  /* 10016737 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001673du);
  /* 1001673d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016740 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016742 je 0x1001675d */
  if (C.zf) goto L_1001675d;
  /* 10016744 push 0x1001f1d8 */
  push32((uint32_t)(0x1001f1d8u));
  /* 10016749 call 0x100127a0 */
  push32(0x1001674eu); f_100127a0();
  /* 1001674e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016751 ret  */
  ESPCHK(0x100166b0u, _esp0);
  ESP += 4; return;
L_10016752:;
  /* 10016752 push 0x1001f1d8 */
  push32((uint32_t)(0x1001f1d8u));
  /* 10016757 call 0x100127a0 */
  push32(0x1001675cu); f_100127a0();
  /* 1001675c pop ecx */
  ECX = (pop32());
L_1001675d:;
  /* 1001675d ret  */
  ESPCHK(0x100166b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10016760 (70 bytes, 22 insns) */
void f_10016760(void) {
  FTRACE(0x10016760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016760 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016762 call 0x100127e0 */
  push32(0x10016767u); f_100127e0();
  /* 10016767 push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 1001676c call 0x100152f0 */
  push32(0x10016771u); f_100152f0();
  /* 10016771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016776 je 0x10016782 */
  if (C.zf) goto L_10016782;
  /* 10016778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001677a call 0x100127e0 */
  push32(0x1001677fu); f_100127e0();
  /* 1001677f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016782:;
  /* 10016782 call 0x100127f0 */
  push32(0x10016787u); f_100127f0();
  /* 10016787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016789 jg 0x1001679d */
  if ((!C.zf&&C.sf==C.of)) goto L_1001679d;
  /* 1001678b push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10016790 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016796u);
  /* 10016796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001679b jle 0x100167a5 */
  if ((C.zf||C.sf!=C.of)) goto L_100167a5;
L_1001679d:;
  /* 1001679d push 0 */
  push32((uint32_t)(0x0u));
  /* 1001679f call 0x100127e0 */
  push32(0x100167a4u); f_100127e0();
  /* 100167a4 pop ecx */
  ECX = (pop32());
L_100167a5:;
  /* 100167a5 ret  */
  ESPCHK(0x10016760u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x100167b0 (235 bytes, 66 insns) */
void f_100167b0(void) {
  FTRACE(0x100167b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100167b0 push 0x10026198 */
  push32((uint32_t)(0x10026198u));
  /* 100167b5 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x100167bbu);
  /* 100167bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100167be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100167c0 je 0x100167d6 */
  if (C.zf) goto L_100167d6;
  /* 100167c2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100167c4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100167c6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100167c8 push 0x10026370 */
  push32((uint32_t)(0x10026370u));
  /* 100167cd call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100167d3u);
  /* 100167d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100167d6:;
  /* 100167d6 push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 100167db call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x100167e1u);
  /* 100167e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100167e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100167e6 je 0x100167fc */
  if (C.zf) goto L_100167fc;
  /* 100167e8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100167ea push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100167ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100167ee push 0x10023668 */
  push32((uint32_t)(0x10023668u));
  /* 100167f3 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x100167f9u);
  /* 100167f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100167fc:;
  /* 100167fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100167fe push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10016800 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10016802 push 0x100238c8 */
  push32((uint32_t)(0x100238c8u));
  /* 10016807 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001680du);
  /* 1001680d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001680f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10016811 push 0x100261d8 */
  push32((uint32_t)(0x100261d8u));
  /* 10016816 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001681cu);
  /* 1001681c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001681e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10016820 push 0x100261d0 */
  push32((uint32_t)(0x100261d0u));
  /* 10016825 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001682bu);
  /* 1001682b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001682d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001682f push 0x100261a0 */
  push32((uint32_t)(0x100261a0u));
  /* 10016834 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001683au);
  /* 1001683a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001683c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001683e push 0x10026198 */
  push32((uint32_t)(0x10026198u));
  /* 10016843 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10016849u);
  /* 10016849 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001684c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001684e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10016850 push 0x100261a8 */
  push32((uint32_t)(0x100261a8u));
  /* 10016855 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001685bu);
  /* 1001685b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001685d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001685f push 0x10026098 */
  push32((uint32_t)(0x10026098u));
  /* 10016864 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001686au);
  /* 1001686a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001686c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001686e push 0x100260a0 */
  push32((uint32_t)(0x100260a0u));
  /* 10016873 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10016879u);
  /* 10016879 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001687b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001687d push 0x100260a8 */
  push32((uint32_t)(0x100260a8u));
  /* 10016882 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10016888u);
  /* 10016888 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001688a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1001688c push 0x100260b0 */
  push32((uint32_t)(0x100260b0u));
  /* 10016891 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x10016897u);
  /* 10016897 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001689a ret  */
  ESPCHK(0x100167b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x100168a0 (303 bytes, 90 insns) */
void f_100168a0(void) {
  FTRACE(0x100168a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100168a0 push ecx */
  push32((uint32_t)(ECX));
  /* 100168a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100168a2 push ebp */
  push32((uint32_t)(EBP));
  /* 100168a3 push esi */
  push32((uint32_t)(ESI));
  /* 100168a4 push edi */
  push32((uint32_t)(EDI));
  /* 100168a5 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 100168aa call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100168b0u);
  /* 100168b0 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 100168b5 mov ebx, eax */
  EBX = (EAX);
  /* 100168b7 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100168bdu);
  /* 100168bd push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 100168c2 mov edi, eax */
  EDI = (EAX);
  /* 100168c4 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100168cau);
  /* 100168ca push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 100168cf mov ebp, eax */
  EBP = (EAX);
  /* 100168d1 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100168d7u);
  /* 100168d7 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 100168dc mov esi, eax */
  ESI = (EAX);
  /* 100168de call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100168e4u);
  /* 100168e4 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 100168e9 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100168ed call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100168f3u);
  /* 100168f3 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 100168f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100168fa sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100168fc add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100168fe sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016900 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016902 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10016904 pop edi */
  EDI = (pop32());
  /* 10016905 pop esi */
  ESI = (pop32());
  /* 10016906 pop ebp */
  EBP = (pop32());
  /* 10016907 pop ebx */
  EBX = (pop32());
  /* 10016908 jne 0x10016970 */
  if (!C.zf) goto L_10016970;
  /* 1001690a cmp dword ptr [0x100261b0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100261b0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016911 jle 0x10016970 */
  if ((C.zf||C.sf!=C.of)) goto L_10016970;
  /* 10016913 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016915 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10016917 push 4 */
  push32((uint32_t)(0x4u));
  /* 10016919 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 1001691e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016924u);
  /* 10016924 push 0x100261b8 */
  push32((uint32_t)(0x100261b8u));
  /* 10016929 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x1001692fu);
  /* 1001692f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016932 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016934 je 0x1001694a */
  if (C.zf) goto L_1001694a;
  /* 10016936 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016938 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1001693a push 6 */
  push32((uint32_t)(0x6u));
  /* 1001693c push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10016941 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016947u);
  /* 10016947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001694a:;
  /* 1001694a push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 1001694f call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10016955u);
  /* 10016955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016958 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001695a je 0x10016970 */
  if (C.zf) goto L_10016970;
  /* 1001695c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001695e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10016960 push 8 */
  push32((uint32_t)(0x8u));
  /* 10016962 push 0x100238d8 */
  push32((uint32_t)(0x100238d8u));
  /* 10016967 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x1001696du);
  /* 1001696d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016970:;
  /* 10016970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016972 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10016974 push 0x100262e8 */
  push32((uint32_t)(0x100262e8u));
  /* 10016979 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001697fu);
  /* 1001697f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016981 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10016983 push 0x100262d0 */
  push32((uint32_t)(0x100262d0u));
  /* 10016988 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001698eu);
  /* 1001698e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016990 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10016992 push 0x100262e0 */
  push32((uint32_t)(0x100262e0u));
  /* 10016997 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x1001699du);
  /* 1001699d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1001699f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100169a1 push 0x100262c0 */
  push32((uint32_t)(0x100262c0u));
  /* 100169a6 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100169acu);
  /* 100169ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100169ae push 0xf */
  push32((uint32_t)(0xfu));
  /* 100169b0 push 0x100262c8 */
  push32((uint32_t)(0x100262c8u));
  /* 100169b5 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100169bbu);
  /* 100169bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100169bd push 0xa */
  push32((uint32_t)(0xau));
  /* 100169bf push 0x100262b8 */
  push32((uint32_t)(0x100262b8u));
  /* 100169c4 call dword ptr [0x10026508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026508))), 0x100169cau);
  /* 100169ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100169cd pop ecx */
  ECX = (pop32());
  /* 100169ce ret  */
  ESPCHK(0x100168a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d0 @ 0x100169d0 (517 bytes, 145 insns) */
void f_100169d0(void) {
  FTRACE(0x100169d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100169d0 push esi */
  push32((uint32_t)(ESI));
  /* 100169d1 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 100169d6 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x100169dcu);
  /* 100169dc push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 100169e1 mov esi, eax */
  ESI = (EAX);
  /* 100169e3 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x100169e9u);
  /* 100169e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100169ec sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100169ee jne 0x10016a04 */
  if (!C.zf) goto L_10016a04;
  /* 100169f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100169f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100169f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100169f6 push 0x10026258 */
  push32((uint32_t)(0x10026258u));
  /* 100169fb call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016a01u);
  /* 10016a01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016a04:;
  /* 10016a04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016a0a push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10016a0f call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016a15u);
  /* 10016a15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016a1b push 0x100261e8 */
  push32((uint32_t)(0x100261e8u));
  /* 10016a20 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016a26u);
  /* 10016a26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a28 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10016a2c push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10016a31 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016a37u);
  /* 10016a37 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10016a3c call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016a42u);
  /* 10016a42 push 0x10026250 */
  push32((uint32_t)(0x10026250u));
  /* 10016a47 mov esi, eax */
  ESI = (EAX);
  /* 10016a49 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016a4fu);
  /* 10016a4f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016a52 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016a54 jne 0x10016bd3 */
  if (!C.zf) goto L_10016bd3;
  /* 10016a5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a5c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10016a60 push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10016a65 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016a6bu);
  /* 10016a6b push 0x10025f20 */
  push32((uint32_t)(0x10025f20u));
  /* 10016a70 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016a76u);
  /* 10016a76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016a7b je 0x10016bd3 */
  if (C.zf) goto L_10016bd3;
  /* 10016a81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016a87 push 0x10025fd0 */
  push32((uint32_t)(0x10025fd0u));
  /* 10016a8c call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016a92u);
  /* 10016a92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016a98 push 0x10025fd8 */
  push32((uint32_t)(0x10025fd8u));
  /* 10016a9d call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016aa3u);
  /* 10016aa3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016aa5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016aa9 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10016aae call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016ab4u);
  /* 10016ab4 push 0x10023878 */
  push32((uint32_t)(0x10023878u));
  /* 10016ab9 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016abfu);
  /* 10016abf add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016ac4 je 0x10016bd3 */
  if (C.zf) goto L_10016bd3;
  /* 10016aca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016acc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016ace push 1 */
  push32((uint32_t)(0x1u));
  /* 10016ad0 push 0x10025fe8 */
  push32((uint32_t)(0x10025fe8u));
  /* 10016ad5 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016adbu);
  /* 10016adb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016add push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016adf push 1 */
  push32((uint32_t)(0x1u));
  /* 10016ae1 push 0x100260f8 */
  push32((uint32_t)(0x100260f8u));
  /* 10016ae6 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016aecu);
  /* 10016aec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016aee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016af2 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10016af7 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016afdu);
  /* 10016afd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016aff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016b03 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10016b08 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016b0eu);
  /* 10016b0e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016b11 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10016b16 call dword ptr [0x10026550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026550))), 0x10016b1cu);
  /* 10016b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016b1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016b21 je 0x10016bd3 */
  if (C.zf) goto L_10016bd3;
  /* 10016b27 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10016b2c call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016b32u);
  /* 10016b32 push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10016b37 mov esi, eax */
  ESI = (EAX);
  /* 10016b39 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016b3fu);
  /* 10016b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016b42 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016b44 jne 0x10016b6d */
  if (!C.zf) goto L_10016b6d;
  /* 10016b46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016b48 call 0x100127b0 */
  push32(0x10016b4du); f_100127b0();
  /* 10016b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016b50 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016b53 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016b55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016b57 jge 0x10016b5d */
  if ((C.sf==C.of)) goto L_10016b5d;
  /* 10016b59 push 6 */
  push32((uint32_t)(0x6u));
  /* 10016b5b jmp 0x10016b5f */
  goto L_10016b5f;
L_10016b5d:;
  /* 10016b5d push 4 */
  push32((uint32_t)(0x4u));
L_10016b5f:;
  /* 10016b5f push 0x10025fb8 */
  push32((uint32_t)(0x10025fb8u));
  /* 10016b64 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016b6au);
  /* 10016b6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016b6d:;
  /* 10016b6d push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10016b72 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016b78u);
  /* 10016b78 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10016b7d mov esi, eax */
  ESI = (EAX);
  /* 10016b7f call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016b85u);
  /* 10016b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016b88 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016b8a jne 0x10016ba0 */
  if (!C.zf) goto L_10016ba0;
  /* 10016b8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016b8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016b90 push 7 */
  push32((uint32_t)(0x7u));
  /* 10016b92 push 0x100260d8 */
  push32((uint32_t)(0x100260d8u));
  /* 10016b97 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016b9du);
  /* 10016b9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016ba0:;
  /* 10016ba0 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10016ba5 call dword ptr [0x10026544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026544))), 0x10016babu);
  /* 10016bab push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10016bb0 mov esi, eax */
  ESI = (EAX);
  /* 10016bb2 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016bb8u);
  /* 10016bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016bbb sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016bbd jne 0x10016bd3 */
  if (!C.zf) goto L_10016bd3;
  /* 10016bbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016bc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016bc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016bc5 push 0x10023618 */
  push32((uint32_t)(0x10023618u));
  /* 10016bca call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016bd0u);
  /* 10016bd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016bd3:;
  /* 10016bd3 pop esi */
  ESI = (pop32());
  /* 10016bd4 ret  */
  ESPCHK(0x100169d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10016be0 (121 bytes, 36 insns) */
void f_10016be0(void) {
  FTRACE(0x10016be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016be0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016be2 call 0x100127e0 */
  push32(0x10016be7u); f_100127e0();
  /* 10016be7 push 0x10023888 */
  push32((uint32_t)(0x10023888u));
  /* 10016bec call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016bf2u);
  /* 10016bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016bf5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016bf8 jge 0x10016c0d */
  if ((C.sf==C.of)) goto L_10016c0d;
  /* 10016bfa mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10016bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10016c01 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10016c04 push eax */
  push32((uint32_t)(EAX));
  /* 10016c05 call 0x10012750 */
  push32(0x10016c0au); f_10012750();
  /* 10016c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016c0d:;
  /* 10016c0d push 0x10023888 */
  push32((uint32_t)(0x10023888u));
  /* 10016c12 call dword ptr [0x10026540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026540))), 0x10016c18u);
  /* 10016c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016c1b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016c1e jle 0x10016c34 */
  if ((C.zf||C.sf!=C.of)) goto L_10016c34;
  /* 10016c20 mov ecx, dword ptr [0x100262b4] */
  ECX = (r32((uint32_t)(0x100262b4)));
  /* 10016c26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10016c28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10016c2b push ecx */
  push32((uint32_t)(ECX));
  /* 10016c2c call 0x10012750 */
  push32(0x10016c31u); f_10012750();
  /* 10016c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016c34:;
  /* 10016c34 mov edx, dword ptr [0x100262b4] */
  EDX = (r32((uint32_t)(0x100262b4)));
  /* 10016c3a add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10016c3d push edx */
  push32((uint32_t)(EDX));
  /* 10016c3e call 0x10012770 */
  push32(0x10016c43u); f_10012770();
  /* 10016c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016c45 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10016c48 push eax */
  push32((uint32_t)(EAX));
  /* 10016c49 call 0x100127e0 */
  push32(0x10016c4eu); f_100127e0();
  /* 10016c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10016c50 call 0x100127e0 */
  push32(0x10016c55u); f_100127e0();
  /* 10016c55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016c58 ret  */
  ESPCHK(0x10016be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c60 @ 0x10016c60 (86 bytes, 20 insns) */
void f_10016c60(void) {
  FTRACE(0x10016c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016c60 mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10016c65 mov ecx, dword ptr [eax*4 + 0x10025f98] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10025f98)));
  /* 10016c6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10016c6e je 0x10016c75 */
  if (C.zf) goto L_10016c75;
  /* 10016c70 call 0x10016760 */
  push32(0x10016c75u); f_10016760();
L_10016c75:;
  /* 10016c75 call 0x10015e70 */
  push32(0x10016c7au); f_10015e70();
  /* 10016c7a call 0x100167b0 */
  push32(0x10016c7fu); f_100167b0();
  /* 10016c7f call 0x10012800 */
  push32(0x10016c84u); f_10012800();
  /* 10016c84 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016c87 jge 0x10016c8e */
  if ((C.sf==C.of)) goto L_10016c8e;
  /* 10016c89 call 0x100168a0 */
  push32(0x10016c8eu); f_100168a0();
L_10016c8e:;
  /* 10016c8e call 0x10015c50 */
  push32(0x10016c93u); f_10015c50();
  /* 10016c93 call 0x10015b10 */
  push32(0x10016c98u); f_10015b10();
  /* 10016c98 call 0x10012800 */
  push32(0x10016c9du); f_10012800();
  /* 10016c9d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016ca0 jge 0x10016ca7 */
  if ((C.sf==C.of)) goto L_10016ca7;
  /* 10016ca2 call 0x10015330 */
  push32(0x10016ca7u); f_10015330();
L_10016ca7:;
  /* 10016ca7 call 0x10016050 */
  push32(0x10016cacu); f_10016050();
  /* 10016cac call 0x10016370 */
  push32(0x10016cb1u); f_10016370();
  /* 10016cb1 jmp 0x100166b0 */
  f_100166b0(); return;
}

/* FUN_10006cc0 @ 0x10016cc0 (247 bytes, 70 insns) */
void f_10016cc0(void) {
  FTRACE(0x10016cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016cc0 push esi */
  push32((uint32_t)(ESI));
  /* 10016cc1 push edi */
  push32((uint32_t)(EDI));
  /* 10016cc2 call 0x10016be0 */
  push32(0x10016cc7u); f_10016be0();
  /* 10016cc7 call 0x100169d0 */
  push32(0x10016cccu); f_100169d0();
  /* 10016ccc mov edi, 2 */
  EDI = (0x2u);
L_10016cd1:;
  /* 10016cd1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016cd3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016cd5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10016cda push 0x10026190 */
  push32((uint32_t)(0x10026190u));
  /* 10016cdf call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016ce5u);
  /* 10016ce5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016ce7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016ce9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10016cee push 0x10023688 */
  push32((uint32_t)(0x10023688u));
  /* 10016cf3 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016cf9u);
  /* 10016cf9 mov eax, dword ptr [0x100262b4] */
  EAX = (r32((uint32_t)(0x100262b4)));
  /* 10016cfe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10016d01 push eax */
  push32((uint32_t)(EAX));
  /* 10016d02 call 0x10012770 */
  push32(0x10016d07u); f_10012770();
  /* 10016d07 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016d0c jne 0x10016d2c */
  if (!C.zf) goto L_10016d2c;
  /* 10016d0e mov esi, 0x64 */
  ESI = (0x64u);
L_10016d13:;
  /* 10016d13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016d15 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016d17 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10016d19 push 0x10023888 */
  push32((uint32_t)(0x10023888u));
  /* 10016d1e call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016d24u);
  /* 10016d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016d27 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10016d28 jne 0x10016d13 */
  if (!C.zf) goto L_10016d13;
  /* 10016d2a jmp 0x10016d40 */
  goto L_10016d40;
L_10016d2c:;
  /* 10016d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10016d30 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10016d32 push 0x10026160 */
  push32((uint32_t)(0x10026160u));
  /* 10016d37 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016d3du);
  /* 10016d3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016d40:;
  /* 10016d40 push 0x10026020 */
  push32((uint32_t)(0x10026020u));
  /* 10016d45 call dword ptr [0x1002654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002654c))), 0x10016d4bu);
  /* 10016d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016d4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10016d50 jne 0x10016d69 */
  if (!C.zf) goto L_10016d69;
  /* 10016d52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016d54 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016d56 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10016d5b push 0x10023690 */
  push32((uint32_t)(0x10023690u));
  /* 10016d60 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016d66u);
  /* 10016d66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10016d69:;
  /* 10016d69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016d6b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016d6d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10016d72 push 0x10023680 */
  push32((uint32_t)(0x10023680u));
  /* 10016d77 call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016d7du);
  /* 10016d7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10016d7f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10016d81 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10016d86 push 0x10025f80 */
  push32((uint32_t)(0x10025f80u));
  /* 10016d8b call dword ptr [0x10026504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026504))), 0x10016d91u);
  /* 10016d91 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016d94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10016d95 jne 0x10016cd1 */
  if (!C.zf) goto L_10016cd1;
  /* 10016d9b call 0x100167b0 */
  push32(0x10016da0u); f_100167b0();
  /* 10016da0 call 0x10016050 */
  push32(0x10016da5u); f_10016050();
  /* 10016da5 call 0x10016370 */
  push32(0x10016daau); f_10016370();
  /* 10016daa call 0x10015330 */
  push32(0x10016dafu); f_10015330();
  /* 10016daf call 0x10015b10 */
  push32(0x10016db4u); f_10015b10();
  /* 10016db4 pop edi */
  EDI = (pop32());
  /* 10016db5 pop esi */
  ESI = (pop32());
  /* 10016db6 ret  */
  ESPCHK(0x10016cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x10016dc0 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10016dc0(void) {
  FTRACE(0x10016dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016dc0 call 0x10012700 */
  push32(0x10016dc5u); f_10012700();
  /* 10016dc5 mov dword ptr [0x10025f58], eax */
  w32((uint32_t)(0x10025f58), (EAX));
  /* 10016dca call 0x100126e0 */
  push32(0x10016dcfu); f_100126e0();
  /* 10016dcf mov dword ptr [0x10026368], eax */
  w32((uint32_t)(0x10026368), (EAX));
  /* 10016dd4 call 0x100126f0 */
  push32(0x10016dd9u); f_100126f0();
  /* 10016dd9 mov dword ptr [0x10023898], eax */
  w32((uint32_t)(0x10023898), (EAX));
  /* 10016dde call 0x100130c0 */
  push32(0x10016de3u); f_100130c0();
  /* 10016de3 push 0x1001f114 */
  push32((uint32_t)(0x1001f114u));
  /* 10016de8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10016dea call dword ptr [0x1002650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002650c))), 0x10016df0u);
  /* 10016df0 call 0x100166b0 */
  push32(0x10016df5u); f_100166b0();
  /* 10016df5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10016df7 push 0x1001f244 */
  push32((uint32_t)(0x1001f244u));
  /* 10016dfc call 0x10012780 */
  push32(0x10016e01u); f_10012780();
  /* 10016e01 mov eax, dword ptr [0x10025f58] */
  EAX = (r32((uint32_t)(0x10025f58)));
  /* 10016e06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016e09 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016e0c ja 0x10016ed2 */
  if ((!C.cf&&!C.zf)) goto L_10016ed2;
  /* 10016e12 jmp dword ptr [eax*4 + 0x10016ed8] */
  switch (EAX) {
    case 0: goto L_10016e19;
    case 1: goto L_10016e95;
    case 2: goto L_10016e9c;
    case 3: goto L_10016e9c;
    case 4: goto L_10016e9c;
    case 5: goto L_10016e19;
    default: x86_unimpl("switch@0x10016e12 out of table"); return;
  }
L_10016e19:;
  /* 10016e19 cmp dword ptr [0x10023898], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10023898))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016e20 jne 0x10016e52 */
  if (!C.zf) goto L_10016e52;
  /* 10016e22 push 0x1001f160 */
  push32((uint32_t)(0x1001f160u));
  /* 10016e27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10016e29 call dword ptr [0x1002650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002650c))), 0x10016e2fu);
  /* 10016e2f push 0x1001f16c */
  push32((uint32_t)(0x1001f16cu));
  /* 10016e34 call 0x100127a0 */
  push32(0x10016e39u); f_100127a0();
  /* 10016e39 push 5 */
  push32((uint32_t)(0x5u));
  /* 10016e3b push 0x1001f41c */
  push32((uint32_t)(0x1001f41cu));
  /* 10016e40 call 0x10012780 */
  push32(0x10016e45u); f_10012780();
  /* 10016e45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016e48 call 0x10016cc0 */
  push32(0x10016e4du); f_10016cc0();
  /* 10016e4d jmp 0x10016ed2 */
  goto L_10016ed2;
L_10016e52:;
  /* 10016e52 push 0x1001f114 */
  push32((uint32_t)(0x1001f114u));
  /* 10016e57 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10016e59 call dword ptr [0x1002650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002650c))), 0x10016e5fu);
  /* 10016e5f push 0x10026598 */
  push32((uint32_t)(0x10026598u));
  /* 10016e64 call 0x100127a0 */
  push32(0x10016e69u); f_100127a0();
  /* 10016e69 mov eax, dword ptr [0x10023898] */
  EAX = (r32((uint32_t)(0x10023898)));
  /* 10016e6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016e73 jne 0x10016e7f */
  if (!C.zf) goto L_10016e7f;
  /* 10016e75 mov dword ptr [0x1001f248], 4 */
  w32((uint32_t)(0x1001f248), (0x4u));
L_10016e7f:;
  /* 10016e7f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10016e81 push 0x1001f244 */
  push32((uint32_t)(0x1001f244u));
  /* 10016e86 call 0x10012780 */
  push32(0x10016e8bu); f_10012780();
  /* 10016e8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016e8e call 0x10016c60 */
  push32(0x10016e93u); f_10016c60();
  /* 10016e93 jmp 0x10016ed2 */
  goto L_10016ed2;
L_10016e95:;
  /* 10016e95 call 0x10014460 */
  push32(0x10016e9au); f_10014460();
  /* 10016e9a jmp 0x10016ed2 */
  goto L_10016ed2;
L_10016e9c:;
  /* 10016e9c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10016ea1 call dword ptr [0x10026528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026528))), 0x10016ea7u);
  /* 10016ea7 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10016eac call dword ptr [0x1002652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002652c))), 0x10016eb2u);
  /* 10016eb2 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10016eb7 call dword ptr [0x10026530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026530))), 0x10016ebdu);
  /* 10016ebd push 0x1001f07c */
  push32((uint32_t)(0x1001f07cu));
  /* 10016ec2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10016ec4 call dword ptr [0x1002650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002650c))), 0x10016ecau);
  /* 10016eca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016ecd call 0x100133e0 */
  push32(0x10016ed2u); f_100133e0();
L_10016ed2:;
  /* 10016ed2 jmp 0x10013240 */
  f_10013240(); return;
}

/* FUN_10006ef0 @ 0x10016ef0 (82 bytes, 32 insns) */
void f_10016ef0(void) {
  FTRACE(0x10016ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10016ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10016ef3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10016ef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10016ef9 push esi */
  push32((uint32_t)(ESI));
  /* 10016efa mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10016efd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10016f00 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10016f03 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10016f0a push eax */
  push32((uint32_t)(EAX));
  /* 10016f0b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10016f0e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10016f11 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10016f18 push eax */
  push32((uint32_t)(EAX));
  /* 10016f19 call 0x1001727c */
  push32(0x10016f1eu); f_1001727c();
  /* 10016f1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016f21 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10016f24 mov esi, eax */
  ESI = (EAX);
  /* 10016f26 js 0x10016f30 */
  if (C.sf) goto L_10016f30;
  /* 10016f28 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10016f2b and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10016f2e jmp 0x10016f3d */
  goto L_10016f3d;
L_10016f30:;
  /* 10016f30 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10016f33 push eax */
  push32((uint32_t)(EAX));
  /* 10016f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10016f36 call 0x10017164 */
  push32(0x10016f3bu); f_10017164();
  /* 10016f3b pop ecx */
  ECX = (pop32());
  /* 10016f3c pop ecx */
  ECX = (pop32());
L_10016f3d:;
  /* 10016f3d mov eax, esi */
  EAX = (ESI);
  /* 10016f3f pop esi */
  ESI = (pop32());
  /* 10016f40 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10016f41 ret  */
  ESPCHK(0x10016ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f42 @ 0x10016f42 (23 bytes, 6 insns) */
void f_10016f42(void) {
  FTRACE(0x10016f42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016f42 call 0x10016f5a */
  push32(0x10016f47u); f_10016f5a();
  /* 10016f47 call 0x10017ad6 */
  push32(0x10016f4cu); f_10017ad6();
  /* 10016f4c mov dword ptr [0x10026660], eax */
  w32((uint32_t)(0x10026660), (EAX));
  /* 10016f51 call 0x10017a86 */
  push32(0x10016f56u); f_10017a86();
  /* 10016f56 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10016f58 ret  */
  ESPCHK(0x10016f42u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f5a @ 0x10016f5a (56 bytes, 8 insns) */
void f_10016f5a(void) {
  FTRACE(0x10016f5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016f5a mov eax, 0x10017eaf */
  EAX = (0x10017eafu);
  /* 10016f5f mov dword ptr [0x100206a0], 0x10017b59 */
  w32((uint32_t)(0x100206a0), (0x10017b59u));
  /* 10016f69 mov dword ptr [0x1002069c], eax */
  w32((uint32_t)(0x1002069c), (EAX));
  /* 10016f6e mov dword ptr [0x100206a4], 0x10017bbf */
  w32((uint32_t)(0x100206a4), (0x10017bbfu));
  /* 10016f78 mov dword ptr [0x100206a8], 0x10017aff */
  w32((uint32_t)(0x100206a8), (0x10017affu));
  /* 10016f82 mov dword ptr [0x100206ac], 0x10017ba7 */
  w32((uint32_t)(0x100206ac), (0x10017ba7u));
  /* 10016f8c mov dword ptr [0x100206b0], eax */
  w32((uint32_t)(0x100206b0), (EAX));
  /* 10016f91 ret  */
  ESPCHK(0x10016f5au, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10016f94 (39 bytes, 16 insns) */
void f_10016f94(void) {
  FTRACE(0x10016f94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016f94 push ebp */
  push32((uint32_t)(EBP));
  /* 10016f95 mov ebp, esp */
  EBP = (ESP);
  /* 10016f97 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10016f9a wait  */
  /* wait (no observable integer/reg state) */
  /* 10016f9b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10016f9e wait  */
  /* wait (no observable integer/reg state) */
  /* 10016f9f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10016fa3 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10016fa6 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10016faa fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10016fad fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10016fb0 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10016fb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10016fb6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10016fb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10016fba ret  */
  ESPCHK(0x10016f94u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fbb @ 0x10016fbb (217 bytes, 57 insns) */
void f_10016fbb(void) {
  FTRACE(0x10016fbbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10016fbb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10016fbf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10016fc2 jne 0x10017050 */
  if (!C.zf) goto L_10017050;
  /* 10016fc8 call dword ptr [0x1001e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e014))), 0x10016fceu);
  /* 10016fce push 1 */
  push32((uint32_t)(0x1u));
  /* 10016fd0 mov dword ptr [0x1002667c], eax */
  w32((uint32_t)(0x1002667c), (EAX));
  /* 10016fd5 call 0x1001898c */
  push32(0x10016fdau); f_1001898c();
  /* 10016fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10016fdc pop ecx */
  ECX = (pop32());
  /* 10016fdd je 0x1001701b */
  if (C.zf) goto L_1001701b;
  /* 10016fdf mov eax, dword ptr [0x1002667c] */
  EAX = (r32((uint32_t)(0x1002667c)));
  /* 10016fe4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10016fe6 mov cl, byte ptr [0x1002667d] */
  CL = (r8((uint32_t)(0x1002667d)));
  /* 10016fec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10016ff1 shr dword ptr [0x1002667c], 0x10 */
  w32((uint32_t)(0x1002667c), (sh_shr((uint32_t)(r32((uint32_t)(0x1002667c))), (0x10u)&0x1f, 32)));
  /* 10016ff8 mov dword ptr [0x10026684], eax */
  w32((uint32_t)(0x10026684), (EAX));
  /* 10016ffd mov dword ptr [0x10026688], ecx */
  w32((uint32_t)(0x10026688), (ECX));
  /* 10017003 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10017006 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017008 mov dword ptr [0x10026680], eax */
  w32((uint32_t)(0x10026680), (EAX));
  /* 1001700d call 0x10018043 */
  push32(0x10017012u); f_10018043();
  /* 10017012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017014 jne 0x1001701f */
  if (!C.zf) goto L_1001701f;
  /* 10017016 call 0x100189e9 */
  push32(0x1001701bu); f_100189e9();
L_1001701b:;
  /* 1001701b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001701d jmp 0x10017091 */
  goto L_10017091;
L_1001701f:;
  /* 1001701f call dword ptr [0x1001e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e010))), 0x10017025u);
  /* 10017025 mov dword ptr [0x10027d74], eax */
  w32((uint32_t)(0x10027d74), (EAX));
  /* 1001702a call 0x100186e5 */
  push32(0x1001702fu); f_100186e5();
  /* 1001702f mov dword ptr [0x10026668], eax */
  w32((uint32_t)(0x10026668), (EAX));
  /* 10017034 call 0x100181cf */
  push32(0x10017039u); f_100181cf();
  /* 10017039 call 0x10018498 */
  push32(0x1001703eu); f_10018498();
  /* 1001703e call 0x100183df */
  push32(0x10017043u); f_100183df();
  /* 10017043 call 0x10017f25 */
  push32(0x10017048u); f_10017f25();
  /* 10017048 inc dword ptr [0x10026664] */
  { uint32_t _r=(r32((uint32_t)(0x10026664)))+1; w32((uint32_t)(0x10026664), (_r)); fl_inc(_r,32); }
  /* 1001704e jmp 0x1001708e */
  goto L_1001708e;
L_10017050:;
  /* 10017050 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10017052 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017054 jne 0x10017082 */
  if (!C.zf) goto L_10017082;
  /* 10017056 cmp dword ptr [0x10026664], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10026664))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001705c jle 0x1001701b */
  if ((C.zf||C.sf!=C.of)) goto L_1001701b;
  /* 1001705e dec dword ptr [0x10026664] */
  { uint32_t _r=(r32((uint32_t)(0x10026664)))-1; w32((uint32_t)(0x10026664), (_r)); fl_dec(_r,32); }
  /* 10017064 cmp dword ptr [0x100266b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100266b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001706a jne 0x10017071 */
  if (!C.zf) goto L_10017071;
  /* 1001706c call 0x10017f63 */
  push32(0x10017071u); f_10017f63();
L_10017071:;
  /* 10017071 call 0x1001838b */
  push32(0x10017076u); f_1001838b();
  /* 10017076 call 0x10018097 */
  push32(0x1001707bu); f_10018097();
  /* 1001707b call 0x100189e9 */
  push32(0x10017080u); f_100189e9();
  /* 10017080 jmp 0x1001708e */
  goto L_1001708e;
L_10017082:;
  /* 10017082 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017085 jne 0x1001708e */
  if (!C.zf) goto L_1001708e;
  /* 10017087 push ecx */
  push32((uint32_t)(ECX));
  /* 10017088 call 0x1001812f */
  push32(0x1001708du); f_1001812f();
  /* 1001708d pop ecx */
  ECX = (pop32());
L_1001708e:;
  /* 1001708e push 1 */
  push32((uint32_t)(0x1u));
  /* 10017090 pop eax */
  EAX = (pop32());
L_10017091:;
  /* 10017091 ret 0xc */
  ESPCHK(0x10016fbbu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10017094 (157 bytes, 73 insns) */
void f_10017094(void) {
  FTRACE(0x10017094u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017094 push ebp */
  push32((uint32_t)(EBP));
  /* 10017095 mov ebp, esp */
  EBP = (ESP);
  /* 10017097 push ebx */
  push32((uint32_t)(EBX));
  /* 10017098 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001709b push esi */
  push32((uint32_t)(ESI));
  /* 1001709c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001709f push edi */
  push32((uint32_t)(EDI));
  /* 100170a0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100170a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100170a5 jne 0x100170b0 */
  if (!C.zf) goto L_100170b0;
  /* 100170a7 cmp dword ptr [0x10026664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10026664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100170ae jmp 0x100170d6 */
  goto L_100170d6;
L_100170b0:;
  /* 100170b0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100170b3 je 0x100170ba */
  if (C.zf) goto L_100170ba;
  /* 100170b5 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100170b8 jne 0x100170dc */
  if (!C.zf) goto L_100170dc;
L_100170ba:;
  /* 100170ba mov eax, dword ptr [0x10027d78] */
  EAX = (r32((uint32_t)(0x10027d78)));
  /* 100170bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100170c1 je 0x100170cc */
  if (C.zf) goto L_100170cc;
  /* 100170c3 push edi */
  push32((uint32_t)(EDI));
  /* 100170c4 push esi */
  push32((uint32_t)(ESI));
  /* 100170c5 push ebx */
  push32((uint32_t)(EBX));
  /* 100170c6 call eax */
  call_ind((uint32_t)(EAX), 0x100170c8u);
  /* 100170c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100170ca je 0x100170d8 */
  if (C.zf) goto L_100170d8;
L_100170cc:;
  /* 100170cc push edi */
  push32((uint32_t)(EDI));
  /* 100170cd push esi */
  push32((uint32_t)(ESI));
  /* 100170ce push ebx */
  push32((uint32_t)(EBX));
  /* 100170cf call 0x10016fbb */
  push32(0x100170d4u); f_10016fbb();
  /* 100170d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_100170d6:;
  /* 100170d6 jne 0x100170dc */
  if (!C.zf) goto L_100170dc;
L_100170d8:;
  /* 100170d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100170da jmp 0x1001712a */
  goto L_1001712a;
L_100170dc:;
  /* 100170dc push edi */
  push32((uint32_t)(EDI));
  /* 100170dd push esi */
  push32((uint32_t)(ESI));
  /* 100170de push ebx */
  push32((uint32_t)(EBX));
  /* 100170df call 0x10012870 */
  push32(0x100170e4u); f_10012870();
  /* 100170e4 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100170e7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100170ea jne 0x100170f8 */
  if (!C.zf) goto L_100170f8;
  /* 100170ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100170ee jne 0x10017127 */
  if (!C.zf) goto L_10017127;
  /* 100170f0 push edi */
  push32((uint32_t)(EDI));
  /* 100170f1 push eax */
  push32((uint32_t)(EAX));
  /* 100170f2 push ebx */
  push32((uint32_t)(EBX));
  /* 100170f3 call 0x10016fbb */
  push32(0x100170f8u); f_10016fbb();
L_100170f8:;
  /* 100170f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100170fa je 0x10017101 */
  if (C.zf) goto L_10017101;
  /* 100170fc cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100170ff jne 0x10017127 */
  if (!C.zf) goto L_10017127;
L_10017101:;
  /* 10017101 push edi */
  push32((uint32_t)(EDI));
  /* 10017102 push esi */
  push32((uint32_t)(ESI));
  /* 10017103 push ebx */
  push32((uint32_t)(EBX));
  /* 10017104 call 0x10016fbb */
  push32(0x10017109u); f_10016fbb();
  /* 10017109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001710b jne 0x10017110 */
  if (!C.zf) goto L_10017110;
  /* 1001710d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10017110:;
  /* 10017110 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017114 je 0x10017127 */
  if (C.zf) goto L_10017127;
  /* 10017116 mov eax, dword ptr [0x10027d78] */
  EAX = (r32((uint32_t)(0x10027d78)));
  /* 1001711b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001711d je 0x10017127 */
  if (C.zf) goto L_10017127;
  /* 1001711f push edi */
  push32((uint32_t)(EDI));
  /* 10017120 push esi */
  push32((uint32_t)(ESI));
  /* 10017121 push ebx */
  push32((uint32_t)(EBX));
  /* 10017122 call eax */
  call_ind((uint32_t)(EAX), 0x10017124u);
  /* 10017124 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10017127:;
  /* 10017127 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1001712a:;
  /* 1001712a pop edi */
  EDI = (pop32());
  /* 1001712b pop esi */
  ESI = (pop32());
  /* 1001712c pop ebx */
  EBX = (pop32());
  /* 1001712d pop ebp */
  EBP = (pop32());
  /* 1001712e ret 0xc */
  ESPCHK(0x10017094u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10017131 (48 bytes, 15 insns) */
void f_10017131(void) {
  FTRACE(0x10017131u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017131 mov eax, dword ptr [0x10026670] */
  EAX = (r32((uint32_t)(0x10026670)));
  /* 10017136 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017139 je 0x10017148 */
  if (C.zf) goto L_10017148;
  /* 1001713b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001713d jne 0x1001714d */
  if (!C.zf) goto L_1001714d;
  /* 1001713f cmp dword ptr [0x10026674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10026674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017146 jne 0x1001714d */
  if (!C.zf) goto L_1001714d;
L_10017148:;
  /* 10017148 call 0x10018a91 */
  push32(0x1001714du); f_10018a91();
L_1001714d:;
  /* 1001714d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10017151 call 0x10018aca */
  push32(0x10017156u); f_10018aca();
  /* 10017156 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1001715b call dword ptr [0x10020690] */
  call_ind((uint32_t)(r32((uint32_t)(0x10020690))), 0x10017161u);
  /* 10017161 pop ecx */
  ECX = (pop32());
  /* 10017162 pop ecx */
  ECX = (pop32());
  /* 10017163 ret  */
  ESPCHK(0x10017131u, _esp0);
  ESP += 4; return;
}

/* FUN_10007164 @ 0x10017164 (280 bytes, 106 insns) */
void f_10017164(void) {
  FTRACE(0x10017164u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017164 push ebp */
  push32((uint32_t)(EBP));
  /* 10017165 mov ebp, esp */
  EBP = (ESP);
  /* 10017167 push ebx */
  push32((uint32_t)(EBX));
  /* 10017168 push esi */
  push32((uint32_t)(ESI));
  /* 10017169 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001716c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1001716f mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10017172 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 10017174 je 0x10017270 */
  if (C.zf) goto L_10017270;
  /* 1001717a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 1001717c jne 0x10017270 */
  if (!C.zf) goto L_10017270;
  /* 10017182 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10017184 je 0x1001719c */
  if (C.zf) goto L_1001719c;
  /* 10017186 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001718a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1001718c je 0x10017270 */
  if (C.zf) goto L_10017270;
  /* 10017192 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10017195 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10017197 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10017199 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1001719c:;
  /* 1001719c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1001719f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100171a3 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100171a7 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 100171a9 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100171ab test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 100171af mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100171b2 jne 0x100171d6 */
  if (!C.zf) goto L_100171d6;
  /* 100171b4 cmp esi, 0x10020790 */
  { uint32_t _a=(ESI),_b=(0x10020790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100171ba je 0x100171c4 */
  if (C.zf) goto L_100171c4;
  /* 100171bc cmp esi, 0x100207b0 */
  { uint32_t _a=(ESI),_b=(0x100207b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100171c2 jne 0x100171cf */
  if (!C.zf) goto L_100171cf;
L_100171c4:;
  /* 100171c4 push ebx */
  push32((uint32_t)(EBX));
  /* 100171c5 call 0x10018f29 */
  push32(0x100171cau); f_10018f29();
  /* 100171ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100171cc pop ecx */
  ECX = (pop32());
  /* 100171cd jne 0x100171d6 */
  if (!C.zf) goto L_100171d6;
L_100171cf:;
  /* 100171cf push esi */
  push32((uint32_t)(ESI));
  /* 100171d0 call 0x10018ee5 */
  push32(0x100171d5u); f_10018ee5();
  /* 100171d5 pop ecx */
  ECX = (pop32());
L_100171d6:;
  /* 100171d6 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 100171dc push edi */
  push32((uint32_t)(EDI));
  /* 100171dd je 0x10017246 */
  if (C.zf) goto L_10017246;
  /* 100171df mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100171e2 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100171e4 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100171e6 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100171e9 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100171eb mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 100171ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100171ef test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100171f1 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100171f4 jle 0x10017206 */
  if ((C.zf||C.sf!=C.of)) goto L_10017206;
  /* 100171f6 push edi */
  push32((uint32_t)(EDI));
  /* 100171f7 push eax */
  push32((uint32_t)(EAX));
  /* 100171f8 push ebx */
  push32((uint32_t)(EBX));
  /* 100171f9 call 0x10018cf5 */
  push32(0x100171feu); f_10018cf5();
  /* 100171fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017201 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10017204 jmp 0x1001723c */
  goto L_1001723c;
L_10017206:;
  /* 10017206 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017209 je 0x10017224 */
  if (C.zf) goto L_10017224;
  /* 1001720b mov ecx, ebx */
  ECX = (EBX);
  /* 1001720d mov eax, ebx */
  EAX = (EBX);
  /* 1001720f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10017212 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10017215 mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 1001721c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1001721f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10017222 jmp 0x10017229 */
  goto L_10017229;
L_10017224:;
  /* 10017224 mov eax, 0x100206b8 */
  EAX = (0x100206b8u);
L_10017229:;
  /* 10017229 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 1001722d je 0x1001723c */
  if (C.zf) goto L_1001723c;
  /* 1001722f push 2 */
  push32((uint32_t)(0x2u));
  /* 10017231 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017233 push ebx */
  push32((uint32_t)(EBX));
  /* 10017234 call 0x10018c1d */
  push32(0x10017239u); f_10018c1d();
  /* 10017239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001723c:;
  /* 1001723c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1001723f mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10017242 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10017244 jmp 0x1001725a */
  goto L_1001725a;
L_10017246:;
  /* 10017246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017248 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1001724b pop edi */
  EDI = (pop32());
  /* 1001724c push edi */
  push32((uint32_t)(EDI));
  /* 1001724d push eax */
  push32((uint32_t)(EAX));
  /* 1001724e push ebx */
  push32((uint32_t)(EBX));
  /* 1001724f call 0x10018cf5 */
  push32(0x10017254u); f_10018cf5();
  /* 10017254 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017257 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1001725a:;
  /* 1001725a cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001725d pop edi */
  EDI = (pop32());
  /* 1001725e je 0x10017266 */
  if (C.zf) goto L_10017266;
  /* 10017260 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10017264 jmp 0x10017275 */
  goto L_10017275;
L_10017266:;
  /* 10017266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10017269 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001726e jmp 0x10017278 */
  goto L_10017278;
L_10017270:;
  /* 10017270 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10017272 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10017275:;
  /* 10017275 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10017278:;
  /* 10017278 pop esi */
  ESI = (pop32());
  /* 10017279 pop ebx */
  EBX = (pop32());
  /* 1001727a pop ebp */
  EBP = (pop32());
  /* 1001727b ret  */
  ESPCHK(0x10017164u, _esp0);
  ESP += 4; return;
}

/* FUN_1000727c @ 0x1001727c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_1001727c(void) {
  FTRACE(0x1001727cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001727c push ebp */
  push32((uint32_t)(EBP));
  /* 1001727d mov ebp, esp */
  EBP = (ESP);
  /* 1001727f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017285 push ebx */
  push32((uint32_t)(EBX));
  /* 10017286 push esi */
  push32((uint32_t)(ESI));
  /* 10017287 push edi */
  push32((uint32_t)(EDI));
  /* 10017288 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001728b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001728d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001728f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10017290 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10017292 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10017295 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10017298 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1001729b je 0x10017995 */
  if (C.zf) goto L_10017995;
  /* 100172a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100172a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100172a6 jmp 0x100172b0 */
  goto L_100172b0;
L_100172a8:;
  /* 100172a8 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100172ab mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 100172ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100172b0:;
  /* 100172b0 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100172b3 jl 0x10017995 */
  if ((C.sf!=C.of)) goto L_10017995;
  /* 100172b9 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100172bc jl 0x100172d1 */
  if ((C.sf!=C.of)) goto L_100172d1;
  /* 100172be cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100172c1 jg 0x100172d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_100172d1;
  /* 100172c3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100172c6 mov al, byte ptr [eax + 0x1001e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1001e0c8)));
  /* 100172cc and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 100172cf jmp 0x100172d3 */
  goto L_100172d3;
L_100172d1:;
  /* 100172d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100172d3:;
  /* 100172d3 movsx eax, byte ptr [esi + eax*8 + 0x1001e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1001e0e8))));
  /* 100172db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100172de cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100172e1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100172e4 ja 0x10017984 */
  if ((!C.cf&&!C.zf)) goto L_10017984;
  /* 100172ea jmp dword ptr [eax*4 + 0x1001799d] */
  switch (EAX) {
    case 0: goto L_1001741b;
    case 1: goto L_100172f1;
    case 2: goto L_1001730c;
    case 3: goto L_10017358;
    case 4: goto L_1001738f;
    case 5: goto L_10017397;
    case 6: goto L_100173cc;
    case 7: goto L_1001745f;
    default: x86_unimpl("switch@0x100172ea out of table"); return;
  }
L_100172f1:;
  /* 100172f1 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100172f5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 100172f8 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 100172fb mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 100172fe mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10017301 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10017304 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10017307 jmp 0x10017984 */
  goto L_10017984;
L_1001730c:;
  /* 1001730c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001730f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017312 je 0x1001734f */
  if (C.zf) goto L_1001734f;
  /* 10017314 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017317 je 0x10017346 */
  if (C.zf) goto L_10017346;
  /* 10017319 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001731c je 0x1001733d */
  if (C.zf) goto L_1001733d;
  /* 1001731e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001731f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10017320 je 0x10017334 */
  if (C.zf) goto L_10017334;
  /* 10017322 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017325 jne 0x10017984 */
  if (!C.zf) goto L_10017984;
  /* 1001732b or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001732f jmp 0x10017984 */
  goto L_10017984;
L_10017334:;
  /* 10017334 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10017338 jmp 0x10017984 */
  goto L_10017984;
L_1001733d:;
  /* 1001733d or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10017341 jmp 0x10017984 */
  goto L_10017984;
L_10017346:;
  /* 10017346 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 1001734a jmp 0x10017984 */
  goto L_10017984;
L_1001734f:;
  /* 1001734f or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10017353 jmp 0x10017984 */
  goto L_10017984;
L_10017358:;
  /* 10017358 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001735b jne 0x10017380 */
  if (!C.zf) goto L_10017380;
  /* 1001735d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10017360 push eax */
  push32((uint32_t)(EAX));
  /* 10017361 call 0x10017a5b */
  push32(0x10017366u); f_10017a5b();
  /* 10017366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017368 pop ecx */
  ECX = (pop32());
  /* 10017369 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001736c jge 0x10017984 */
  if ((C.sf==C.of)) goto L_10017984;
  /* 10017372 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10017376 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10017378:;
  /* 10017378 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001737b jmp 0x10017984 */
  goto L_10017984;
L_10017380:;
  /* 10017380 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10017383 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10017386 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10017389 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1001738d jmp 0x10017378 */
  goto L_10017378;
L_1001738f:;
  /* 1001738f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10017392 jmp 0x10017984 */
  goto L_10017984;
L_10017397:;
  /* 10017397 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001739a jne 0x100173ba */
  if (!C.zf) goto L_100173ba;
  /* 1001739c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1001739f push eax */
  push32((uint32_t)(EAX));
  /* 100173a0 call 0x10017a5b */
  push32(0x100173a5u); f_10017a5b();
  /* 100173a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100173a7 pop ecx */
  ECX = (pop32());
  /* 100173a8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100173ab jge 0x10017984 */
  if ((C.sf==C.of)) goto L_10017984;
  /* 100173b1 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100173b5 jmp 0x10017984 */
  goto L_10017984;
L_100173ba:;
  /* 100173ba lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 100173bd movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100173c0 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100173c4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100173c7 jmp 0x10017984 */
  goto L_10017984;
L_100173cc:;
  /* 100173cc cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100173cf je 0x100173ff */
  if (C.zf) goto L_100173ff;
  /* 100173d1 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100173d4 je 0x100173f6 */
  if (C.zf) goto L_100173f6;
  /* 100173d6 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100173d9 je 0x100173ed */
  if (C.zf) goto L_100173ed;
  /* 100173db cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100173de jne 0x10017984 */
  if (!C.zf) goto L_10017984;
  /* 100173e4 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100173e8 jmp 0x10017984 */
  goto L_10017984;
L_100173ed:;
  /* 100173ed or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100173f1 jmp 0x10017984 */
  goto L_10017984;
L_100173f6:;
  /* 100173f6 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100173fa jmp 0x10017984 */
  goto L_10017984;
L_100173ff:;
  /* 100173ff cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017402 jne 0x10017418 */
  if (!C.zf) goto L_10017418;
  /* 10017404 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017408 jne 0x10017418 */
  if (!C.zf) goto L_10017418;
  /* 1001740a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001740b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001740c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10017410 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10017413 jmp 0x10017984 */
  goto L_10017984;
L_10017418:;
  /* 10017418 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1001741b:;
  /* 1001741b mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 10017421 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10017424 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10017427 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1001742c je 0x10017447 */
  if (C.zf) goto L_10017447;
  /* 1001742e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10017431 push eax */
  push32((uint32_t)(EAX));
  /* 10017432 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017435 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10017438 push eax */
  push32((uint32_t)(EAX));
  /* 10017439 call 0x100179bd */
  push32(0x1001743eu); f_100179bd();
  /* 1001743e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10017440 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017443 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10017444 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10017447:;
  /* 10017447 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1001744a push eax */
  push32((uint32_t)(EAX));
  /* 1001744b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001744e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10017451 push eax */
  push32((uint32_t)(EAX));
  /* 10017452 call 0x100179bd */
  push32(0x10017457u); f_100179bd();
  /* 10017457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001745a jmp 0x10017984 */
  goto L_10017984;
L_1001745f:;
  /* 1001745f movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10017462 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017465 jg 0x10017687 */
  if ((!C.zf&&C.sf==C.of)) goto L_10017687;
  /* 1001746b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001746e jge 0x1001750a */
  if ((C.sf==C.of)) goto L_1001750a;
  /* 10017474 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017477 jg 0x10017568 */
  if ((!C.zf&&C.sf==C.of)) goto L_10017568;
  /* 1001747d je 0x100176fb */
  if (C.zf) goto L_100176fb;
  /* 10017483 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017486 je 0x1001752b */
  if (C.zf) goto L_1001752b;
  /* 1001748c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001748d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001748e je 0x10017500 */
  if (C.zf) goto L_10017500;
  /* 10017490 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10017491 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10017492 je 0x10017500 */
  if (C.zf) goto L_10017500;
  /* 10017494 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017497 jne 0x10017886 */
  if (!C.zf) goto L_10017886;
  /* 1001749d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100174a3 jne 0x100174a9 */
  if (!C.zf) goto L_100174a9;
  /* 100174a5 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100174a9:;
  /* 100174a9 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100174ac cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100174af jne 0x100174b6 */
  if (!C.zf) goto L_100174b6;
  /* 100174b1 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_100174b6:;
  /* 100174b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100174b9 push eax */
  push32((uint32_t)(EAX));
  /* 100174ba call 0x10017a5b */
  push32(0x100174bfu); f_10017a5b();
  /* 100174bf test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100174c5 pop ecx */
  ECX = (pop32());
  /* 100174c6 mov ecx, eax */
  ECX = (EAX);
  /* 100174c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100174cb je 0x100176cf */
  if (C.zf) goto L_100176cf;
  /* 100174d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100174d3 jne 0x100174de */
  if (!C.zf) goto L_100174de;
  /* 100174d5 mov ecx, dword ptr [0x10020698] */
  ECX = (r32((uint32_t)(0x10020698)));
  /* 100174db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100174de:;
  /* 100174de mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100174e5 mov eax, ecx */
  EAX = (ECX);
L_100174e7:;
  /* 100174e7 mov edx, esi */
  EDX = (ESI);
  /* 100174e9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100174ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100174ec je 0x100176c6 */
  if (C.zf) goto L_100176c6;
  /* 100174f2 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100174f6 je 0x100176c6 */
  if (C.zf) goto L_100176c6;
  /* 100174fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100174fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100174fe jmp 0x100174e7 */
  goto L_100174e7;
L_10017500:;
  /* 10017500 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10017507 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1001750a:;
  /* 1001750a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001750e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10017514 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017516 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10017519 jge 0x100175ee */
  if ((C.sf==C.of)) goto L_100175ee;
  /* 1001751f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 10017526 jmp 0x100175fc */
  goto L_100175fc;
L_1001752b:;
  /* 1001752b test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10017531 jne 0x10017537 */
  if (!C.zf) goto L_10017537;
  /* 10017533 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10017537:;
  /* 10017537 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 1001753d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10017540 push eax */
  push32((uint32_t)(EAX));
  /* 10017541 je 0x1001757e */
  if (C.zf) goto L_1001757e;
  /* 10017543 call 0x10017a78 */
  push32(0x10017548u); f_10017a78();
  /* 10017548 push eax */
  push32((uint32_t)(EAX));
  /* 10017549 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1001754f push eax */
  push32((uint32_t)(EAX));
  /* 10017550 call 0x1001913b */
  push32(0x10017555u); f_1001913b();
  /* 10017555 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017558 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1001755b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001755d jge 0x10017591 */
  if ((C.sf==C.of)) goto L_10017591;
  /* 1001755f mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 10017566 jmp 0x10017591 */
  goto L_10017591;
L_10017568:;
  /* 10017568 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001756b je 0x1001759f */
  if (C.zf) goto L_1001759f;
  /* 1001756d sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017570 je 0x10017537 */
  if (C.zf) goto L_10017537;
  /* 10017572 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10017573 je 0x10017761 */
  if (C.zf) goto L_10017761;
  /* 10017579 jmp 0x10017886 */
  goto L_10017886;
L_1001757e:;
  /* 1001757e call 0x10017a5b */
  push32(0x10017583u); f_10017a5b();
  /* 10017583 pop ecx */
  ECX = (pop32());
  /* 10017584 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1001758a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10017591:;
  /* 10017591 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10017597 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1001759a jmp 0x10017886 */
  goto L_10017886;
L_1001759f:;
  /* 1001759f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100175a2 push eax */
  push32((uint32_t)(EAX));
  /* 100175a3 call 0x10017a5b */
  push32(0x100175a8u); f_10017a5b();
  /* 100175a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100175aa pop ecx */
  ECX = (pop32());
  /* 100175ab je 0x100175e0 */
  if (C.zf) goto L_100175e0;
  /* 100175ad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100175b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100175b2 je 0x100175e0 */
  if (C.zf) goto L_100175e0;
  /* 100175b4 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 100175b8 je 0x100175d1 */
  if (C.zf) goto L_100175d1;
  /* 100175ba movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100175bd shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100175bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100175c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100175c5 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100175cc jmp 0x10017886 */
  goto L_10017886;
L_100175d1:;
  /* 100175d1 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 100175d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100175d8 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100175db jmp 0x10017883 */
  goto L_10017883;
L_100175e0:;
  /* 100175e0 mov eax, dword ptr [0x10020694] */
  EAX = (r32((uint32_t)(0x10020694)));
  /* 100175e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100175e8 push eax */
  push32((uint32_t)(EAX));
  /* 100175e9 jmp 0x1001767c */
  goto L_1001767c;
L_100175ee:;
  /* 100175ee jne 0x100175fc */
  if (!C.zf) goto L_100175fc;
  /* 100175f0 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100175f3 jne 0x100175fc */
  if (!C.zf) goto L_100175fc;
  /* 100175f5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_100175fc:;
  /* 100175fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100175ff push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10017602 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017605 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10017608 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1001760b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1001760e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10017611 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10017614 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10017617 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001761a push eax */
  push32((uint32_t)(EAX));
  /* 1001761b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10017621 push eax */
  push32((uint32_t)(EAX));
  /* 10017622 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10017625 push eax */
  push32((uint32_t)(EAX));
  /* 10017626 call dword ptr [0x1002069c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002069c))), 0x1001762cu);
  /* 1001762c mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 1001762f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017632 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 10017638 je 0x1001764e */
  if (C.zf) goto L_1001764e;
  /* 1001763a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001763e jne 0x1001764e */
  if (!C.zf) goto L_1001764e;
  /* 10017640 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10017646 push eax */
  push32((uint32_t)(EAX));
  /* 10017647 call dword ptr [0x100206a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100206a8))), 0x1001764du);
  /* 1001764d pop ecx */
  ECX = (pop32());
L_1001764e:;
  /* 1001764e cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017651 jne 0x10017665 */
  if (!C.zf) goto L_10017665;
  /* 10017653 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10017655 jne 0x10017665 */
  if (!C.zf) goto L_10017665;
  /* 10017657 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1001765d push eax */
  push32((uint32_t)(EAX));
  /* 1001765e call dword ptr [0x100206a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100206a0))), 0x10017664u);
  /* 10017664 pop ecx */
  ECX = (pop32());
L_10017665:;
  /* 10017665 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001766c jne 0x1001767b */
  if (!C.zf) goto L_1001767b;
  /* 1001766e or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10017672 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 10017678 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_1001767b:;
  /* 1001767b push edi */
  push32((uint32_t)(EDI));
L_1001767c:;
  /* 1001767c call 0x100190c0 */
  push32(0x10017681u); f_100190c0();
  /* 10017681 pop ecx */
  ECX = (pop32());
  /* 10017682 jmp 0x10017883 */
  goto L_10017883;
L_10017687:;
  /* 10017687 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001768a je 0x10017761 */
  if (C.zf) goto L_10017761;
  /* 10017690 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017693 je 0x10017737 */
  if (C.zf) goto L_10017737;
  /* 10017699 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001769a je 0x10017724 */
  if (C.zf) goto L_10017724;
  /* 100176a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100176a1 je 0x100176f4 */
  if (C.zf) goto L_100176f4;
  /* 100176a3 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100176a6 je 0x100174a9 */
  if (C.zf) goto L_100174a9;
  /* 100176ac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100176ad dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100176ae je 0x10017765 */
  if (C.zf) goto L_10017765;
  /* 100176b4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100176b7 jne 0x10017886 */
  if (!C.zf) goto L_10017886;
  /* 100176bd mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 100176c4 jmp 0x10017702 */
  goto L_10017702;
L_100176c6:;
  /* 100176c6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100176c8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100176ca jmp 0x10017883 */
  goto L_10017883;
L_100176cf:;
  /* 100176cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100176d1 jne 0x100176dc */
  if (!C.zf) goto L_100176dc;
  /* 100176d3 mov ecx, dword ptr [0x10020694] */
  ECX = (r32((uint32_t)(0x10020694)));
  /* 100176d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100176dc:;
  /* 100176dc mov eax, ecx */
  EAX = (ECX);
L_100176de:;
  /* 100176de mov edx, esi */
  EDX = (ESI);
  /* 100176e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100176e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100176e3 je 0x100176ed */
  if (C.zf) goto L_100176ed;
  /* 100176e5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100176e8 je 0x100176ed */
  if (C.zf) goto L_100176ed;
  /* 100176ea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100176eb jmp 0x100176de */
  goto L_100176de;
L_100176ed:;
  /* 100176ed sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100176ef jmp 0x10017883 */
  goto L_10017883;
L_100176f4:;
  /* 100176f4 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_100176fb:;
  /* 100176fb mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10017702:;
  /* 10017702 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10017706 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1001770d je 0x1001776c */
  if (C.zf) goto L_1001776c;
  /* 1001770f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10017712 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10017716 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10017718 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1001771f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 10017722 jmp 0x1001776c */
  goto L_1001776c;
L_10017724:;
  /* 10017724 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10017728 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 1001772f je 0x1001776c */
  if (C.zf) goto L_1001776c;
  /* 10017731 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10017735 jmp 0x1001776c */
  goto L_1001776c;
L_10017737:;
  /* 10017737 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1001773a push eax */
  push32((uint32_t)(EAX));
  /* 1001773b call 0x10017a5b */
  push32(0x10017740u); f_10017a5b();
  /* 10017740 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10017744 pop ecx */
  ECX = (pop32());
  /* 10017745 je 0x10017750 */
  if (C.zf) goto L_10017750;
  /* 10017747 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1001774b mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 1001774e jmp 0x10017755 */
  goto L_10017755;
L_10017750:;
  /* 10017750 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10017753 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10017755:;
  /* 10017755 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 1001775c jmp 0x10017984 */
  goto L_10017984;
L_10017761:;
  /* 10017761 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10017765:;
  /* 10017765 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_1001776c:;
  /* 1001776c test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10017770 je 0x1001777e */
  if (C.zf) goto L_1001777e;
  /* 10017772 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10017775 push eax */
  push32((uint32_t)(EAX));
  /* 10017776 call 0x10017a68 */
  push32(0x1001777bu); f_10017a68();
  /* 1001777b pop ecx */
  ECX = (pop32());
  /* 1001777c jmp 0x100177bf */
  goto L_100177bf;
L_1001777e:;
  /* 1001777e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10017782 je 0x100177a5 */
  if (C.zf) goto L_100177a5;
  /* 10017784 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10017788 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1001778b push eax */
  push32((uint32_t)(EAX));
  /* 1001778c je 0x1001779a */
  if (C.zf) goto L_1001779a;
  /* 1001778e call 0x10017a5b */
  push32(0x10017793u); f_10017a5b();
  /* 10017793 pop ecx */
  ECX = (pop32());
  /* 10017794 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10017797:;
  /* 10017797 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10017798 jmp 0x100177bf */
  goto L_100177bf;
L_1001779a:;
  /* 1001779a call 0x10017a5b */
  push32(0x1001779fu); f_10017a5b();
  /* 1001779f pop ecx */
  ECX = (pop32());
  /* 100177a0 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 100177a3 jmp 0x10017797 */
  goto L_10017797;
L_100177a5:;
  /* 100177a5 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100177a9 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100177ac push eax */
  push32((uint32_t)(EAX));
  /* 100177ad je 0x100177b7 */
  if (C.zf) goto L_100177b7;
  /* 100177af call 0x10017a5b */
  push32(0x100177b4u); f_10017a5b();
  /* 100177b4 pop ecx */
  ECX = (pop32());
  /* 100177b5 jmp 0x10017797 */
  goto L_10017797;
L_100177b7:;
  /* 100177b7 call 0x10017a5b */
  push32(0x100177bcu); f_10017a5b();
  /* 100177bc pop ecx */
  ECX = (pop32());
  /* 100177bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100177bf:;
  /* 100177bf test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100177c3 je 0x100177e0 */
  if (C.zf) goto L_100177e0;
  /* 100177c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100177c7 jg 0x100177e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100177e0;
  /* 100177c9 jl 0x100177cf */
  if ((C.sf!=C.of)) goto L_100177cf;
  /* 100177cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100177cd jae 0x100177e0 */
  if (!C.cf) goto L_100177e0;
L_100177cf:;
  /* 100177cf neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100177d1 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100177d4 mov esi, eax */
  ESI = (EAX);
  /* 100177d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100177d8 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100177dc mov edi, edx */
  EDI = (EDX);
  /* 100177de jmp 0x100177e4 */
  goto L_100177e4;
L_100177e0:;
  /* 100177e0 mov esi, eax */
  ESI = (EAX);
  /* 100177e2 mov edi, edx */
  EDI = (EDX);
L_100177e4:;
  /* 100177e4 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100177e8 jne 0x100177ed */
  if (!C.zf) goto L_100177ed;
  /* 100177ea and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_100177ed:;
  /* 100177ed cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100177f1 jge 0x100177fc */
  if ((C.sf==C.of)) goto L_100177fc;
  /* 100177f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 100177fa jmp 0x10017800 */
  goto L_10017800;
L_100177fc:;
  /* 100177fc and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10017800:;
  /* 10017800 mov eax, esi */
  EAX = (ESI);
  /* 10017802 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10017804 jne 0x1001780a */
  if (!C.zf) goto L_1001780a;
  /* 10017806 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1001780a:;
  /* 1001780a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1001780d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10017810:;
  /* 10017810 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10017813 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10017816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017818 jg 0x10017820 */
  if ((!C.zf&&C.sf==C.of)) goto L_10017820;
  /* 1001781a mov eax, esi */
  EAX = (ESI);
  /* 1001781c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1001781e je 0x1001785b */
  if (C.zf) goto L_1001785b;
L_10017820:;
  /* 10017820 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10017823 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10017824 push edx */
  push32((uint32_t)(EDX));
  /* 10017825 push eax */
  push32((uint32_t)(EAX));
  /* 10017826 push edi */
  push32((uint32_t)(EDI));
  /* 10017827 push esi */
  push32((uint32_t)(ESI));
  /* 10017828 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 1001782b mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 1001782e call 0x10019270 */
  push32(0x10017833u); f_10019270();
  /* 10017833 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 10017836 mov ebx, eax */
  EBX = (EAX);
  /* 10017838 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001783b push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 1001783e push edi */
  push32((uint32_t)(EDI));
  /* 1001783f push esi */
  push32((uint32_t)(ESI));
  /* 10017840 call 0x10019200 */
  push32(0x10017845u); f_10019200();
  /* 10017845 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017848 mov esi, eax */
  ESI = (EAX);
  /* 1001784a mov edi, edx */
  EDI = (EDX);
  /* 1001784c jle 0x10017851 */
  if ((C.zf||C.sf!=C.of)) goto L_10017851;
  /* 1001784e add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_10017851:;
  /* 10017851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10017854 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10017857 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 10017859 jmp 0x10017810 */
  goto L_10017810;
L_1001785b:;
  /* 1001785b lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1001785e sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017861 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10017864 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 10017868 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1001786b je 0x10017886 */
  if (C.zf) goto L_10017886;
  /* 1001786d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10017870 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017873 jne 0x10017879 */
  if (!C.zf) goto L_10017879;
  /* 10017875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017877 jne 0x10017886 */
  if (!C.zf) goto L_10017886;
L_10017879:;
  /* 10017879 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1001787c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001787d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10017880 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10017883:;
  /* 10017883 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10017886:;
  /* 10017886 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001788a jne 0x10017984 */
  if (!C.zf) goto L_10017984;
  /* 10017890 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10017893 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10017896 je 0x100178be */
  if (C.zf) goto L_100178be;
  /* 10017898 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1001789b je 0x100178a3 */
  if (C.zf) goto L_100178a3;
  /* 1001789d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 100178a1 jmp 0x100178b7 */
  goto L_100178b7;
L_100178a3:;
  /* 100178a3 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100178a6 je 0x100178ae */
  if (C.zf) goto L_100178ae;
  /* 100178a8 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 100178ac jmp 0x100178b7 */
  goto L_100178b7;
L_100178ae:;
  /* 100178ae test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100178b1 je 0x100178be */
  if (C.zf) goto L_100178be;
  /* 100178b3 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_100178b7:;
  /* 100178b7 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_100178be:;
  /* 100178be mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 100178c1 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100178c4 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100178c7 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 100178ca jne 0x100178de */
  if (!C.zf) goto L_100178de;
  /* 100178cc lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100178cf push eax */
  push32((uint32_t)(EAX));
  /* 100178d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100178d3 push esi */
  push32((uint32_t)(ESI));
  /* 100178d4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100178d6 call 0x100179f2 */
  push32(0x100178dbu); f_100179f2();
  /* 100178db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100178de:;
  /* 100178de lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100178e1 push eax */
  push32((uint32_t)(EAX));
  /* 100178e2 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 100178e5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100178e8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100178eb push eax */
  push32((uint32_t)(EAX));
  /* 100178ec call 0x10017a23 */
  push32(0x100178f1u); f_10017a23();
  /* 100178f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100178f4 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100178f7 je 0x10017910 */
  if (C.zf) goto L_10017910;
  /* 100178f9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100178fc jne 0x10017910 */
  if (!C.zf) goto L_10017910;
  /* 100178fe lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10017901 push eax */
  push32((uint32_t)(EAX));
  /* 10017902 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017905 push esi */
  push32((uint32_t)(ESI));
  /* 10017906 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10017908 call 0x100179f2 */
  push32(0x1001790du); f_100179f2();
  /* 1001790d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10017910:;
  /* 10017910 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017914 je 0x10017957 */
  if (C.zf) goto L_10017957;
  /* 10017916 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001791a jle 0x10017957 */
  if ((C.zf||C.sf!=C.of)) goto L_10017957;
  /* 1001791c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001791f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10017922 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_10017925:;
  /* 10017925 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 10017928 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10017929 push eax */
  push32((uint32_t)(EAX));
  /* 1001792a lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1001792d push eax */
  push32((uint32_t)(EAX));
  /* 1001792e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001792f call 0x1001913b */
  push32(0x10017934u); f_1001913b();
  /* 10017934 pop ecx */
  ECX = (pop32());
  /* 10017935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017937 pop ecx */
  ECX = (pop32());
  /* 10017938 jle 0x1001796c */
  if ((C.zf||C.sf!=C.of)) goto L_1001796c;
  /* 1001793a lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1001793d push ecx */
  push32((uint32_t)(ECX));
  /* 1001793e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017941 push eax */
  push32((uint32_t)(EAX));
  /* 10017942 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10017945 push eax */
  push32((uint32_t)(EAX));
  /* 10017946 call 0x10017a23 */
  push32(0x1001794bu); f_10017a23();
  /* 1001794b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001794e mov eax, edi */
  EAX = (EDI);
  /* 10017950 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10017951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017953 jne 0x10017925 */
  if (!C.zf) goto L_10017925;
  /* 10017955 jmp 0x1001796c */
  goto L_1001796c;
L_10017957:;
  /* 10017957 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1001795a push eax */
  push32((uint32_t)(EAX));
  /* 1001795b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001795e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 10017961 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 10017964 call 0x10017a23 */
  push32(0x10017969u); f_10017a23();
  /* 10017969 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001796c:;
  /* 1001796c test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10017970 je 0x10017984 */
  if (C.zf) goto L_10017984;
  /* 10017972 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10017975 push eax */
  push32((uint32_t)(EAX));
  /* 10017976 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017979 push esi */
  push32((uint32_t)(ESI));
  /* 1001797a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1001797c call 0x100179f2 */
  push32(0x10017981u); f_100179f2();
  /* 10017981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10017984:;
  /* 10017984 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10017987 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10017989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001798a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1001798c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1001798f jne 0x100172a8 */
  if (!C.zf) goto L_100172a8;
L_10017995:;
  /* 10017995 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10017998 pop edi */
  EDI = (pop32());
  /* 10017999 pop esi */
  ESI = (pop32());
  /* 1001799a pop ebx */
  EBX = (pop32());
  /* 1001799b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001799c ret  */
  ESPCHK(0x1001727cu, _esp0);
  ESP += 4; return;
}

/* FUN_100079bd @ 0x100179bd (53 bytes, 25 insns) */
void f_100179bd(void) {
  FTRACE(0x100179bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100179bd push ebp */
  push32((uint32_t)(EBP));
  /* 100179be mov ebp, esp */
  EBP = (ESP);
  /* 100179c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100179c3 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 100179c6 js 0x100179d6 */
  if (C.sf) goto L_100179d6;
  /* 100179c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100179ca mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 100179cd mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 100179cf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100179d1 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100179d4 jmp 0x100179e1 */
  goto L_100179e1;
L_100179d6:;
  /* 100179d6 push ecx */
  push32((uint32_t)(ECX));
  /* 100179d7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100179da call 0x10017164 */
  push32(0x100179dfu); f_10017164();
  /* 100179df pop ecx */
  ECX = (pop32());
  /* 100179e0 pop ecx */
  ECX = (pop32());
L_100179e1:;
  /* 100179e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100179e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100179e7 jne 0x100179ee */
  if (!C.zf) goto L_100179ee;
  /* 100179e9 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100179ec pop ebp */
  EBP = (pop32());
  /* 100179ed ret  */
  ESPCHK(0x100179bdu, _esp0);
  ESP += 4; return;
L_100179ee:;
  /* 100179ee inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100179f0 pop ebp */
  EBP = (pop32());
  /* 100179f1 ret  */
  ESPCHK(0x100179bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100079f2 @ 0x100179f2 (49 bytes, 22 insns) */
void f_100179f2(void) {
  FTRACE(0x100179f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100179f2 push esi */
  push32((uint32_t)(ESI));
  /* 100179f3 push edi */
  push32((uint32_t)(EDI));
  /* 100179f4 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100179f8 mov eax, edi */
  EAX = (EDI);
  /* 100179fa dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100179fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100179fd jle 0x10017a20 */
  if ((C.zf||C.sf!=C.of)) goto L_10017a20;
  /* 100179ff mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10017a03:;
  /* 10017a03 push esi */
  push32((uint32_t)(ESI));
  /* 10017a04 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10017a08 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10017a0c call 0x100179bd */
  push32(0x10017a11u); f_100179bd();
  /* 10017a11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017a14 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017a17 je 0x10017a20 */
  if (C.zf) goto L_10017a20;
  /* 10017a19 mov eax, edi */
  EAX = (EDI);
  /* 10017a1b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10017a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017a1e jg 0x10017a03 */
  if ((!C.zf&&C.sf==C.of)) goto L_10017a03;
L_10017a20:;
  /* 10017a20 pop edi */
  EDI = (pop32());
  /* 10017a21 pop esi */
  ESI = (pop32());
  /* 10017a22 ret  */
  ESPCHK(0x100179f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a23 @ 0x10017a23 (56 bytes, 27 insns) */
void f_10017a23(void) {
  FTRACE(0x10017a23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017a23 push ebx */
  push32((uint32_t)(EBX));
  /* 10017a24 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 10017a28 mov eax, ebx */
  EAX = (EBX);
  /* 10017a2a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10017a2b push esi */
  push32((uint32_t)(ESI));
  /* 10017a2c push edi */
  push32((uint32_t)(EDI));
  /* 10017a2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017a2f jle 0x10017a57 */
  if ((C.zf||C.sf!=C.of)) goto L_10017a57;
  /* 10017a31 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10017a35 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_10017a39:;
  /* 10017a39 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10017a3c push edi */
  push32((uint32_t)(EDI));
  /* 10017a3d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10017a3e push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 10017a42 push eax */
  push32((uint32_t)(EAX));
  /* 10017a43 call 0x100179bd */
  push32(0x10017a48u); f_100179bd();
  /* 10017a48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017a4b cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017a4e je 0x10017a57 */
  if (C.zf) goto L_10017a57;
  /* 10017a50 mov eax, ebx */
  EAX = (EBX);
  /* 10017a52 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10017a53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017a55 jg 0x10017a39 */
  if ((!C.zf&&C.sf==C.of)) goto L_10017a39;
L_10017a57:;
  /* 10017a57 pop edi */
  EDI = (pop32());
  /* 10017a58 pop esi */
  ESI = (pop32());
  /* 10017a59 pop ebx */
  EBX = (pop32());
  /* 10017a5a ret  */
  ESPCHK(0x10017a23u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a5b @ 0x10017a5b (13 bytes, 5 insns) */
void f_10017a5b(void) {
  FTRACE(0x10017a5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017a5b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10017a5f add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10017a62 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10017a64 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10017a67 ret  */
  ESPCHK(0x10017a5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a68 @ 0x10017a68 (16 bytes, 6 insns) */
void f_10017a68(void) {
  FTRACE(0x10017a68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017a68 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10017a6c add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10017a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10017a71 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10017a74 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10017a77 ret  */
  ESPCHK(0x10017a68u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a78 @ 0x10017a78 (14 bytes, 5 insns) */
void f_10017a78(void) {
  FTRACE(0x10017a78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017a78 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10017a7c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10017a7f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10017a81 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10017a85 ret  */
  ESPCHK(0x10017a78u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a86 @ 0x10017a86 (18 bytes, 6 insns) */
void f_10017a86(void) {
  FTRACE(0x10017a86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017a86 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10017a8b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10017a90 call 0x1001931a */
  push32(0x10017a95u); f_1001931a();
  /* 10017a95 pop ecx */
  ECX = (pop32());
  /* 10017a96 pop ecx */
  ECX = (pop32());
  /* 10017a97 ret  */
  ESPCHK(0x10017a86u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a98 @ 0x10017a98 (62 bytes, 24 insns) */
void f_10017a98(void) {
  FTRACE(0x10017a98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017a98 push ebp */
  push32((uint32_t)(EBP));
  /* 10017a99 mov ebp, esp */
  EBP = (ESP);
  /* 10017a9b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017a9e fld qword ptr [0x1001e170] */
  fpu_push(rf64((uint32_t)(0x1001e170)));
  /* 10017aa4 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10017aa7 fld qword ptr [0x1001e168] */
  fpu_push(rf64((uint32_t)(0x1001e168)));
  /* 10017aad fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10017ab0 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10017ab3 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10017ab6 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10017ab9 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10017abc fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10017abf fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10017ac2 fcomp qword ptr [0x1001e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1001e160)));
  (void)fpu_pop();
  /* 10017ac8 fnstsw ax */
  AX = fpu_status();
  /* 10017aca sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10017acb jbe 0x10017ad2 */
  if ((C.cf||C.zf)) goto L_10017ad2;
  /* 10017acd push 1 */
  push32((uint32_t)(0x1u));
  /* 10017acf pop eax */
  EAX = (pop32());
  /* 10017ad0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017ad1 ret  */
  ESPCHK(0x10017a98u, _esp0);
  ESP += 4; return;
L_10017ad2:;
  /* 10017ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10017ad4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017ad5 ret  */
  ESPCHK(0x10017a98u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad6 @ 0x10017ad6 (41 bytes, 13 insns) */
void f_10017ad6(void) {
  FTRACE(0x10017ad6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017ad6 push 0x1001e194 */
  push32((uint32_t)(0x1001e194u));
  /* 10017adb call dword ptr [0x1001e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e004))), 0x10017ae1u);
  /* 10017ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017ae3 je 0x10017afa */
  if (C.zf) goto L_10017afa;
  /* 10017ae5 push 0x1001e178 */
  push32((uint32_t)(0x1001e178u));
  /* 10017aea push eax */
  push32((uint32_t)(EAX));
  /* 10017aeb call dword ptr [0x1001e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e088))), 0x10017af1u);
  /* 10017af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017af3 je 0x10017afa */
  if (C.zf) goto L_10017afa;
  /* 10017af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017af7 call eax */
  call_ind((uint32_t)(EAX), 0x10017af9u);
  /* 10017af9 ret  */
  ESPCHK(0x10017ad6u, _esp0);
  ESP += 4; return;
L_10017afa:;
  /* 10017afa jmp 0x10017a98 */
  f_10017a98(); return;
}

/* FUN_10007aff @ 0x10017aff (90 bytes, 37 insns) */
void f_10017aff(void) {
  FTRACE(0x10017affu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017aff push esi */
  push32((uint32_t)(ESI));
  /* 10017b00 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10017b04 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10017b07 push eax */
  push32((uint32_t)(EAX));
  /* 10017b08 call 0x100194c0 */
  push32(0x10017b0du); f_100194c0();
  /* 10017b0d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017b10 pop ecx */
  ECX = (pop32());
  /* 10017b11 je 0x10017b3f */
  if (C.zf) goto L_10017b3f;
L_10017b13:;
  /* 10017b13 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10017b14 cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017b1b jle 0x10017b2c */
  if ((C.zf||C.sf!=C.of)) goto L_10017b2c;
  /* 10017b1d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10017b20 push 4 */
  push32((uint32_t)(0x4u));
  /* 10017b22 push eax */
  push32((uint32_t)(EAX));
  /* 10017b23 call 0x1001944b */
  push32(0x10017b28u); f_1001944b();
  /* 10017b28 pop ecx */
  ECX = (pop32());
  /* 10017b29 pop ecx */
  ECX = (pop32());
  /* 10017b2a jmp 0x10017b3b */
  goto L_10017b3b;
L_10017b2c:;
  /* 10017b2c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10017b2f mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 10017b35 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10017b38 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10017b3b:;
  /* 10017b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017b3d jne 0x10017b13 */
  if (!C.zf) goto L_10017b13;
L_10017b3f:;
  /* 10017b3f mov cl, byte ptr [0x10020c04] */
  CL = (r8((uint32_t)(0x10020c04)));
  /* 10017b45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10017b47 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10017b49 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10017b4a:;
  /* 10017b4a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10017b4c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10017b4e mov al, cl */
  AL = (CL);
  /* 10017b50 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10017b52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10017b53 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10017b55 jne 0x10017b4a */
  if (!C.zf) goto L_10017b4a;
  /* 10017b57 pop esi */
  ESI = (pop32());
  /* 10017b58 ret  */
  ESPCHK(0x10017affu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10017bbf (62 bytes, 29 insns) */
void f_10017bbf(void) {
  FTRACE(0x10017bbfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017bbf push ebp */
  push32((uint32_t)(EBP));
  /* 10017bc0 mov ebp, esp */
  EBP = (ESP);
  /* 10017bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10017bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10017bc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017bc8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10017bcb je 0x10017be8 */
  if (C.zf) goto L_10017be8;
  /* 10017bcd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10017bd0 push eax */
  push32((uint32_t)(EAX));
  /* 10017bd1 call 0x1001998c */
  push32(0x10017bd6u); f_1001998c();
  /* 10017bd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10017bd9 pop ecx */
  ECX = (pop32());
  /* 10017bda pop ecx */
  ECX = (pop32());
  /* 10017bdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10017bde mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10017be0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10017be3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10017be6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017be7 ret  */
  ESPCHK(0x10017bbfu, _esp0);
  ESP += 4; return;
L_10017be8:;
  /* 10017be8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10017beb push eax */
  push32((uint32_t)(EAX));
  /* 10017bec call 0x100199b9 */
  push32(0x10017bf1u); f_100199b9();
  /* 10017bf1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10017bf4 pop ecx */
  ECX = (pop32());
  /* 10017bf5 pop ecx */
  ECX = (pop32());
  /* 10017bf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10017bf9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10017bfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017bfc ret  */
  ESPCHK(0x10017bbfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007bfd @ 0x10017bfd (97 bytes, 42 insns) */
void f_10017bfd(void) {
  FTRACE(0x10017bfdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017bfd push ebp */
  push32((uint32_t)(EBP));
  /* 10017bfe mov ebp, esp */
  EBP = (ESP);
  /* 10017c00 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017c03 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10017c06 push esi */
  push32((uint32_t)(ESI));
  /* 10017c07 push eax */
  push32((uint32_t)(EAX));
  /* 10017c08 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017c0b push eax */
  push32((uint32_t)(EAX));
  /* 10017c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10017c0f push ecx */
  push32((uint32_t)(ECX));
  /* 10017c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10017c11 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10017c13 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10017c16 call 0x10019a5d */
  push32(0x10017c1bu); f_10019a5d();
  /* 10017c1b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10017c1e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017c21 push eax */
  push32((uint32_t)(EAX));
  /* 10017c22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10017c25 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10017c28 push eax */
  push32((uint32_t)(EAX));
  /* 10017c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10017c2b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017c2f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10017c32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10017c34 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10017c36 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10017c39 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017c3b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017c3d push ecx */
  push32((uint32_t)(ECX));
  /* 10017c3e call 0x100199e6 */
  push32(0x10017c43u); f_100199e6();
  /* 10017c43 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017c48 push eax */
  push32((uint32_t)(EAX));
  /* 10017c49 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10017c4c push esi */
  push32((uint32_t)(ESI));
  /* 10017c4d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017c50 call 0x10017c5e */
  push32(0x10017c55u); f_10017c5e();
  /* 10017c55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10017c58 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017c5b pop esi */
  ESI = (pop32());
  /* 10017c5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017c5d ret  */
  ESPCHK(0x10017bfdu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c5e @ 0x10017c5e (194 bytes, 91 insns) */
void f_10017c5e(void) {
  FTRACE(0x10017c5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017c5e push ebp */
  push32((uint32_t)(EBP));
  /* 10017c5f mov ebp, esp */
  EBP = (ESP);
  /* 10017c61 push ebx */
  push32((uint32_t)(EBX));
  /* 10017c62 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10017c64 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017c67 push esi */
  push32((uint32_t)(ESI));
  /* 10017c68 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10017c6b push edi */
  push32((uint32_t)(EDI));
  /* 10017c6c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10017c6f je 0x10017c8c */
  if (C.zf) goto L_10017c8c;
  /* 10017c71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10017c73 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017c76 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10017c79 push eax */
  push32((uint32_t)(EAX));
  /* 10017c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10017c7c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017c7f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10017c82 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017c84 push eax */
  push32((uint32_t)(EAX));
  /* 10017c85 call 0x10017f00 */
  push32(0x10017c8au); f_10017f00();
  /* 10017c8a pop ecx */
  ECX = (pop32());
  /* 10017c8b pop ecx */
  ECX = (pop32());
L_10017c8c:;
  /* 10017c8c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017c8f mov eax, edi */
  EAX = (EDI);
  /* 10017c91 jne 0x10017c99 */
  if (!C.zf) goto L_10017c99;
  /* 10017c93 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10017c96 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10017c99:;
  /* 10017c99 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017c9c jle 0x10017cb0 */
  if ((C.zf||C.sf!=C.of)) goto L_10017cb0;
  /* 10017c9e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10017ca1 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10017ca4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10017ca6 mov eax, ecx */
  EAX = (ECX);
  /* 10017ca8 mov cl, byte ptr [0x10020c04] */
  CL = (r8((uint32_t)(0x10020c04)));
  /* 10017cae mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10017cb0:;
  /* 10017cb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10017cb2 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017cb5 push 0x1001e1a8 */
  push32((uint32_t)(0x1001e1a8u));
  /* 10017cba sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10017cbd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017cbf add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10017cc3 call 0x10019b70 */
  push32(0x10017cc8u); f_10019b70();
  /* 10017cc8 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017ccb pop ecx */
  ECX = (pop32());
  /* 10017ccc pop ecx */
  ECX = (pop32());
  /* 10017ccd mov ecx, eax */
  ECX = (EAX);
  /* 10017ccf je 0x10017cd4 */
  if (C.zf) goto L_10017cd4;
  /* 10017cd1 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10017cd4:;
  /* 10017cd4 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10017cd7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10017cd8 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017cdb je 0x10017d19 */
  if (C.zf) goto L_10017d19;
  /* 10017cdd mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10017ce0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10017ce1 jns 0x10017ce8 */
  if (!C.sf) goto L_10017ce8;
  /* 10017ce3 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10017ce5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10017ce8:;
  /* 10017ce8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10017ce9 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017cec jl 0x10017cff */
  if ((C.sf!=C.of)) goto L_10017cff;
  /* 10017cee mov eax, ebx */
  EAX = (EBX);
  /* 10017cf0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10017cf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10017cf3 pop esi */
  ESI = (pop32());
  /* 10017cf4 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10017cf6 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10017cf8 mov eax, ebx */
  EAX = (EBX);
  /* 10017cfa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10017cfb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10017cfd mov ebx, edx */
  EBX = (EDX);
L_10017cff:;
  /* 10017cff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10017d00 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017d03 jl 0x10017d16 */
  if ((C.sf!=C.of)) goto L_10017d16;
  /* 10017d05 mov eax, ebx */
  EAX = (EBX);
  /* 10017d07 push 0xa */
  push32((uint32_t)(0xau));
  /* 10017d09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10017d0a pop esi */
  ESI = (pop32());
  /* 10017d0b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10017d0d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10017d0f mov eax, ebx */
  EAX = (EBX);
  /* 10017d11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10017d12 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10017d14 mov ebx, edx */
  EBX = (EDX);
L_10017d16:;
  /* 10017d16 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10017d19:;
  /* 10017d19 mov eax, edi */
  EAX = (EDI);
  /* 10017d1b pop edi */
  EDI = (pop32());
  /* 10017d1c pop esi */
  ESI = (pop32());
  /* 10017d1d pop ebx */
  EBX = (pop32());
  /* 10017d1e pop ebp */
  EBP = (pop32());
  /* 10017d1f ret  */
  ESPCHK(0x10017c5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x10017d20 (85 bytes, 37 insns) */
void f_10017d20(void) {
  FTRACE(0x10017d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10017d21 mov ebp, esp */
  EBP = (ESP);
  /* 10017d23 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017d26 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10017d29 push esi */
  push32((uint32_t)(ESI));
  /* 10017d2a push eax */
  push32((uint32_t)(EAX));
  /* 10017d2b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017d2e push eax */
  push32((uint32_t)(EAX));
  /* 10017d2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10017d32 push ecx */
  push32((uint32_t)(ECX));
  /* 10017d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10017d34 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10017d36 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10017d39 call 0x10019a5d */
  push32(0x10017d3eu); f_10019a5d();
  /* 10017d3e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10017d41 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017d44 push eax */
  push32((uint32_t)(EAX));
  /* 10017d45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10017d48 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017d4a push eax */
  push32((uint32_t)(EAX));
  /* 10017d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10017d4d cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017d51 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10017d54 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017d57 push eax */
  push32((uint32_t)(EAX));
  /* 10017d58 call 0x100199e6 */
  push32(0x10017d5du); f_100199e6();
  /* 10017d5d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017d62 push eax */
  push32((uint32_t)(EAX));
  /* 10017d63 push esi */
  push32((uint32_t)(ESI));
  /* 10017d64 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017d67 call 0x10017d75 */
  push32(0x10017d6cu); f_10017d75();
  /* 10017d6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10017d6f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017d72 pop esi */
  ESI = (pop32());
  /* 10017d73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017d74 ret  */
  ESPCHK(0x10017d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d75 @ 0x10017d75 (167 bytes, 73 insns) */
void f_10017d75(void) {
  FTRACE(0x10017d75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017d75 push ebp */
  push32((uint32_t)(EBP));
  /* 10017d76 mov ebp, esp */
  EBP = (ESP);
  /* 10017d78 push ebx */
  push32((uint32_t)(EBX));
  /* 10017d79 push esi */
  push32((uint32_t)(ESI));
  /* 10017d7a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10017d7d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10017d80 push edi */
  push32((uint32_t)(EDI));
  /* 10017d81 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10017d84 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10017d85 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017d89 je 0x10017da5 */
  if (C.zf) goto L_10017da5;
  /* 10017d8b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017d8e jne 0x10017da5 */
  if (!C.zf) goto L_10017da5;
  /* 10017d90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10017d92 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017d95 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10017d98 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017d9a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017d9c mov eax, ecx */
  EAX = (ECX);
  /* 10017d9e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10017da1 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10017da5:;
  /* 10017da5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017da8 mov edi, ebx */
  EDI = (EBX);
  /* 10017daa jne 0x10017db2 */
  if (!C.zf) goto L_10017db2;
  /* 10017dac mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10017daf lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10017db2:;
  /* 10017db2 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10017db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017db7 jg 0x10017dc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10017dc9;
  /* 10017db9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017dbb push edi */
  push32((uint32_t)(EDI));
  /* 10017dbc call 0x10017f00 */
  push32(0x10017dc1u); f_10017f00();
  /* 10017dc1 pop ecx */
  ECX = (pop32());
  /* 10017dc2 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10017dc5 pop ecx */
  ECX = (pop32());
  /* 10017dc6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10017dc7 jmp 0x10017dcb */
  goto L_10017dcb;
L_10017dc9:;
  /* 10017dc9 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10017dcb:;
  /* 10017dcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017dcf jle 0x10017e15 */
  if ((C.zf||C.sf!=C.of)) goto L_10017e15;
  /* 10017dd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017dd3 push edi */
  push32((uint32_t)(EDI));
  /* 10017dd4 call 0x10017f00 */
  push32(0x10017dd9u); f_10017f00();
  /* 10017dd9 mov al, byte ptr [0x10020c04] */
  AL = (r8((uint32_t)(0x10020c04)));
  /* 10017dde pop ecx */
  ECX = (pop32());
  /* 10017ddf mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10017de1 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10017de4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10017de5 pop ecx */
  ECX = (pop32());
  /* 10017de6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10017de8 jge 0x10017e15 */
  if ((C.sf==C.of)) goto L_10017e15;
  /* 10017dea cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10017dee je 0x10017df4 */
  if (C.zf) goto L_10017df4;
  /* 10017df0 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10017df2 jmp 0x10017dfb */
  goto L_10017dfb;
L_10017df4:;
  /* 10017df4 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10017df6 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017df9 jl 0x10017dfe */
  if ((C.sf!=C.of)) goto L_10017dfe;
L_10017dfb:;
  /* 10017dfb mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10017dfe:;
  /* 10017dfe push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017e01 push edi */
  push32((uint32_t)(EDI));
  /* 10017e02 call 0x10017f00 */
  push32(0x10017e07u); f_10017f00();
  /* 10017e07 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017e0a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10017e0c push edi */
  push32((uint32_t)(EDI));
  /* 10017e0d call 0x10019c60 */
  push32(0x10017e12u); f_10019c60();
  /* 10017e12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10017e15:;
  /* 10017e15 pop edi */
  EDI = (pop32());
  /* 10017e16 mov eax, ebx */
  EAX = (EBX);
  /* 10017e18 pop esi */
  ESI = (pop32());
  /* 10017e19 pop ebx */
  EBX = (pop32());
  /* 10017e1a pop ebp */
  EBP = (pop32());
  /* 10017e1b ret  */
  ESPCHK(0x10017d75u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e1c @ 0x10017e1c (147 bytes, 66 insns) */
void f_10017e1c(void) {
  FTRACE(0x10017e1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017e1c push ebp */
  push32((uint32_t)(EBP));
  /* 10017e1d mov ebp, esp */
  EBP = (ESP);
  /* 10017e1f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017e22 push ebx */
  push32((uint32_t)(EBX));
  /* 10017e23 push esi */
  push32((uint32_t)(ESI));
  /* 10017e24 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10017e27 push edi */
  push32((uint32_t)(EDI));
  /* 10017e28 push eax */
  push32((uint32_t)(EAX));
  /* 10017e29 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017e2c push eax */
  push32((uint32_t)(EAX));
  /* 10017e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10017e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10017e31 push ecx */
  push32((uint32_t)(ECX));
  /* 10017e32 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10017e34 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10017e37 call 0x10019a5d */
  push32(0x10017e3cu); f_10019a5d();
  /* 10017e3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10017e3f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10017e42 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10017e45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10017e47 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017e4b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10017e4e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10017e51 mov edi, eax */
  EDI = (EAX);
  /* 10017e53 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017e56 push eax */
  push32((uint32_t)(EAX));
  /* 10017e57 push ebx */
  push32((uint32_t)(EBX));
  /* 10017e58 push edi */
  push32((uint32_t)(EDI));
  /* 10017e59 call 0x100199e6 */
  push32(0x10017e5eu); f_100199e6();
  /* 10017e5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10017e61 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017e64 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10017e65 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017e67 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10017e6a cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017e6d jl 0x10017e95 */
  if ((C.sf!=C.of)) goto L_10017e95;
  /* 10017e6f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017e71 jge 0x10017e95 */
  if ((C.sf==C.of)) goto L_10017e95;
  /* 10017e73 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10017e75 je 0x10017e81 */
  if (C.zf) goto L_10017e81;
L_10017e77:;
  /* 10017e77 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10017e79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10017e7a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10017e7c jne 0x10017e77 */
  if (!C.zf) goto L_10017e77;
  /* 10017e7e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10017e81:;
  /* 10017e81 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017e86 push eax */
  push32((uint32_t)(EAX));
  /* 10017e87 push ebx */
  push32((uint32_t)(EBX));
  /* 10017e88 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017e8b call 0x10017d75 */
  push32(0x10017e90u); f_10017d75();
  /* 10017e90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017e93 jmp 0x10017eaa */
  goto L_10017eaa;
L_10017e95:;
  /* 10017e95 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10017e98 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017e9a push eax */
  push32((uint32_t)(EAX));
  /* 10017e9b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10017e9e push ebx */
  push32((uint32_t)(EBX));
  /* 10017e9f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017ea2 call 0x10017c5e */
  push32(0x10017ea7u); f_10017c5e();
  /* 10017ea7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10017eaa:;
  /* 10017eaa pop edi */
  EDI = (pop32());
  /* 10017eab pop esi */
  ESI = (pop32());
  /* 10017eac pop ebx */
  EBX = (pop32());
  /* 10017ead leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10017eae ret  */
  ESPCHK(0x10017e1cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10017eaf (81 bytes, 29 insns) */
void f_10017eaf(void) {
  FTRACE(0x10017eafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017eaf push ebp */
  push32((uint32_t)(EBP));
  /* 10017eb0 mov ebp, esp */
  EBP = (ESP);
  /* 10017eb2 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017eb6 je 0x10017eea */
  if (C.zf) goto L_10017eea;
  /* 10017eb8 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017ebc je 0x10017eea */
  if (C.zf) goto L_10017eea;
  /* 10017ebe cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017ec2 jne 0x10017ed7 */
  if (!C.zf) goto L_10017ed7;
  /* 10017ec4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10017ec7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017eca push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017ecd call 0x10017d20 */
  push32(0x10017ed2u); f_10017d20();
  /* 10017ed2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017ed5 pop ebp */
  EBP = (pop32());
  /* 10017ed6 ret  */
  ESPCHK(0x10017eafu, _esp0);
  ESP += 4; return;
L_10017ed7:;
  /* 10017ed7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10017eda push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10017edd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017ee0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017ee3 call 0x10017e1c */
  push32(0x10017ee8u); f_10017e1c();
  /* 10017ee8 jmp 0x10017efb */
  goto L_10017efb;
L_10017eea:;
  /* 10017eea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10017eed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10017ef0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10017ef3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10017ef6 call 0x10017bfd */
  push32(0x10017efbu); f_10017bfd();
L_10017efb:;
  /* 10017efb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017efe pop ebp */
  EBP = (pop32());
  /* 10017eff ret  */
  ESPCHK(0x10017eafu, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x10017f00 (37 bytes, 18 insns) */
void f_10017f00(void) {
  FTRACE(0x10017f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017f00 push edi */
  push32((uint32_t)(EDI));
  /* 10017f01 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10017f05 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10017f07 je 0x10017f23 */
  if (C.zf) goto L_10017f23;
  /* 10017f09 push esi */
  push32((uint32_t)(ESI));
  /* 10017f0a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10017f0e push esi */
  push32((uint32_t)(ESI));
  /* 10017f0f call 0x100190c0 */
  push32(0x10017f14u); f_100190c0();
  /* 10017f14 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10017f15 push eax */
  push32((uint32_t)(EAX));
  /* 10017f16 push esi */
  push32((uint32_t)(ESI));
  /* 10017f17 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10017f19 push esi */
  push32((uint32_t)(ESI));
  /* 10017f1a call 0x10019cc0 */
  push32(0x10017f1fu); f_10019cc0();
  /* 10017f1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017f22 pop esi */
  ESI = (pop32());
L_10017f23:;
  /* 10017f23 pop edi */
  EDI = (pop32());
  /* 10017f24 ret  */
  ESPCHK(0x10017f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f25 @ 0x10017f25 (45 bytes, 12 insns) */
void f_10017f25(void) {
  FTRACE(0x10017f25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017f25 mov eax, dword ptr [0x10020684] */
  EAX = (r32((uint32_t)(0x10020684)));
  /* 10017f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017f2c je 0x10017f30 */
  if (C.zf) goto L_10017f30;
  /* 10017f2e call eax */
  call_ind((uint32_t)(EAX), 0x10017f30u);
L_10017f30:;
  /* 10017f30 push 0x1001f014 */
  push32((uint32_t)(0x1001f014u));
  /* 10017f35 push 0x1001f008 */
  push32((uint32_t)(0x1001f008u));
  /* 10017f3a call 0x10018029 */
  push32(0x10017f3fu); f_10018029();
  /* 10017f3f push 0x1001f004 */
  push32((uint32_t)(0x1001f004u));
  /* 10017f44 push 0x1001f000 */
  push32((uint32_t)(0x1001f000u));
  /* 10017f49 call 0x10018029 */
  push32(0x10017f4eu); f_10018029();
  /* 10017f4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017f51 ret  */
  ESPCHK(0x10017f25u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10017f52 (17 bytes, 6 insns) */
void f_10017f52(void) {
  FTRACE(0x10017f52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017f54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017f56 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10017f5a call 0x10017f72 */
  push32(0x10017f5fu); f_10017f72();
  /* 10017f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017f62 ret  */
  ESPCHK(0x10017f52u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f63 @ 0x10017f63 (15 bytes, 6 insns) */
void f_10017f63(void) {
  FTRACE(0x10017f63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10017f69 call 0x10017f72 */
  push32(0x10017f6eu); f_10017f72();
  /* 10017f6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10017f71 ret  */
  ESPCHK(0x10017f63u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f72 @ 0x10017f72 (163 bytes, 53 insns) */
void f_10017f72(void) {
  FTRACE(0x10017f72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10017f72 push edi */
  push32((uint32_t)(EDI));
  /* 10017f73 call 0x10018017 */
  push32(0x10017f78u); f_10018017();
  /* 10017f78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10017f7a pop edi */
  EDI = (pop32());
  /* 10017f7b cmp dword ptr [0x100266b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100266b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017f81 jne 0x10017f94 */
  if (!C.zf) goto L_10017f94;
  /* 10017f83 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10017f87 call dword ptr [0x1001e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e020))), 0x10017f8du);
  /* 10017f8d push eax */
  push32((uint32_t)(EAX));
  /* 10017f8e call dword ptr [0x1001e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e01c))), 0x10017f94u);
L_10017f94:;
  /* 10017f94 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017f99 push ebx */
  push32((uint32_t)(EBX));
  /* 10017f9a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10017f9e mov dword ptr [0x100266b4], edi */
  w32((uint32_t)(0x100266b4), (EDI));
  /* 10017fa4 mov byte ptr [0x100266b0], bl */
  w8((uint32_t)(0x100266b0), (BL));
  /* 10017faa jne 0x10017fe8 */
  if (!C.zf) goto L_10017fe8;
  /* 10017fac mov eax, dword ptr [0x10027d70] */
  EAX = (r32((uint32_t)(0x10027d70)));
  /* 10017fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017fb3 je 0x10017fd7 */
  if (C.zf) goto L_10017fd7;
  /* 10017fb5 mov ecx, dword ptr [0x10027d6c] */
  ECX = (r32((uint32_t)(0x10027d6c)));
  /* 10017fbb push esi */
  push32((uint32_t)(ESI));
  /* 10017fbc lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10017fbf cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017fc1 jb 0x10017fd6 */
  if (C.cf) goto L_10017fd6;
L_10017fc3:;
  /* 10017fc3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10017fc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10017fc7 je 0x10017fcb */
  if (C.zf) goto L_10017fcb;
  /* 10017fc9 call eax */
  call_ind((uint32_t)(EAX), 0x10017fcbu);
L_10017fcb:;
  /* 10017fcb sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10017fce cmp esi, dword ptr [0x10027d70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10027d70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10017fd4 jae 0x10017fc3 */
  if (!C.cf) goto L_10017fc3;
L_10017fd6:;
  /* 10017fd6 pop esi */
  ESI = (pop32());
L_10017fd7:;
  /* 10017fd7 push 0x1001f020 */
  push32((uint32_t)(0x1001f020u));
  /* 10017fdc push 0x1001f018 */
  push32((uint32_t)(0x1001f018u));
  /* 10017fe1 call 0x10018029 */
  push32(0x10017fe6u); f_10018029();
  /* 10017fe6 pop ecx */
  ECX = (pop32());
  /* 10017fe7 pop ecx */
  ECX = (pop32());
L_10017fe8:;
  /* 10017fe8 push 0x1001f028 */
  push32((uint32_t)(0x1001f028u));
  /* 10017fed push 0x1001f024 */
  push32((uint32_t)(0x1001f024u));
  /* 10017ff2 call 0x10018029 */
  push32(0x10017ff7u); f_10018029();
  /* 10017ff7 pop ecx */
  ECX = (pop32());
  /* 10017ff8 pop ecx */
  ECX = (pop32());
  /* 10017ff9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10017ffb pop ebx */
  EBX = (pop32());
  /* 10017ffc je 0x10018005 */
  if (C.zf) goto L_10018005;
  /* 10017ffe call 0x10018020 */
  push32(0x10018003u); f_10018020();
  /* 10018003 pop edi */
  EDI = (pop32());
  /* 10018004 ret  */
  ESPCHK(0x10017f72u, _esp0);
  ESP += 4; return;
L_10018005:;
  /* 10018005 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10018009 mov dword ptr [0x100266b8], edi */
  w32((uint32_t)(0x100266b8), (EDI));
  /* 1001800f call dword ptr [0x1001e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e018))), 0x10018015u);
  /* 10018015 pop edi */
  EDI = (pop32());
  /* 10018016 ret  */
  ESPCHK(0x10017f72u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10018017 (9 bytes, 4 insns) */
void f_10018017(void) {
  FTRACE(0x10018017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018017 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10018019 call 0x1001a093 */
  push32(0x1001801eu); f_1001a093();
  /* 1001801e pop ecx */
  ECX = (pop32());
  /* 1001801f ret  */
  ESPCHK(0x10018017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x10018020 (9 bytes, 4 insns) */
void f_10018020(void) {
  FTRACE(0x10018020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018020 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10018022 call 0x1001a0f4 */
  push32(0x10018027u); f_1001a0f4();
  /* 10018027 pop ecx */
  ECX = (pop32());
  /* 10018028 ret  */
  ESPCHK(0x10018020u, _esp0);
  ESP += 4; return;
}

/* FUN_10008029 @ 0x10018029 (26 bytes, 12 insns) */
void f_10018029(void) {
  FTRACE(0x10018029u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018029 push esi */
  push32((uint32_t)(ESI));
  /* 1001802a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_1001802e:;
  /* 1001802e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018032 jae 0x10018041 */
  if (!C.cf) goto L_10018041;
  /* 10018034 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10018036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018038 je 0x1001803c */
  if (C.zf) goto L_1001803c;
  /* 1001803a call eax */
  call_ind((uint32_t)(EAX), 0x1001803cu);
L_1001803c:;
  /* 1001803c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001803f jmp 0x1001802e */
  goto L_1001802e;
L_10018041:;
  /* 10018041 pop esi */
  ESI = (pop32());
  /* 10018042 ret  */
  ESPCHK(0x10018029u, _esp0);
  ESP += 4; return;
}

/* FUN_10008043 @ 0x10018043 (84 bytes, 32 insns) */
void f_10018043(void) {
  FTRACE(0x10018043u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018043 push esi */
  push32((uint32_t)(ESI));
  /* 10018044 call 0x10019ffe */
  push32(0x10018049u); f_10019ffe();
  /* 10018049 call dword ptr [0x1001e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e02c))), 0x1001804fu);
  /* 1001804f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018052 mov dword ptr [0x100206b4], eax */
  w32((uint32_t)(0x100206b4), (EAX));
  /* 10018057 je 0x10018093 */
  if (C.zf) goto L_10018093;
  /* 10018059 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1001805b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001805d call 0x1001a109 */
  push32(0x10018062u); f_1001a109();
  /* 10018062 mov esi, eax */
  ESI = (EAX);
  /* 10018064 pop ecx */
  ECX = (pop32());
  /* 10018065 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10018067 pop ecx */
  ECX = (pop32());
  /* 10018068 je 0x10018093 */
  if (C.zf) goto L_10018093;
  /* 1001806a push esi */
  push32((uint32_t)(ESI));
  /* 1001806b push dword ptr [0x100206b4] */
  push32((uint32_t)(r32((uint32_t)(0x100206b4))));
  /* 10018071 call dword ptr [0x1001e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e028))), 0x10018077u);
  /* 10018077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018079 je 0x10018093 */
  if (C.zf) goto L_10018093;
  /* 1001807b push esi */
  push32((uint32_t)(ESI));
  /* 1001807c call 0x100180b5 */
  push32(0x10018081u); f_100180b5();
  /* 10018081 pop ecx */
  ECX = (pop32());
  /* 10018082 call dword ptr [0x1001e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e024))), 0x10018088u);
  /* 10018088 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001808c push 1 */
  push32((uint32_t)(0x1u));
  /* 1001808e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10018090 pop eax */
  EAX = (pop32());
  /* 10018091 pop esi */
  ESI = (pop32());
  /* 10018092 ret  */
  ESPCHK(0x10018043u, _esp0);
  ESP += 4; return;
L_10018093:;
  /* 10018093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10018095 pop esi */
  ESI = (pop32());
  /* 10018096 ret  */
  ESPCHK(0x10018043u, _esp0);
  ESP += 4; return;
}

/* FUN_10008097 @ 0x10018097 (30 bytes, 8 insns) */
void f_10018097(void) {
  FTRACE(0x10018097u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018097 call 0x1001a027 */
  push32(0x1001809cu); f_1001a027();
  /* 1001809c mov eax, dword ptr [0x100206b4] */
  EAX = (r32((uint32_t)(0x100206b4)));
  /* 100180a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100180a4 je 0x100180b4 */
  if (C.zf) goto L_100180b4;
  /* 100180a6 push eax */
  push32((uint32_t)(EAX));
  /* 100180a7 call dword ptr [0x1001e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e030))), 0x100180adu);
  /* 100180ad or dword ptr [0x100206b4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100206b4)))|(0xffffffffu); w32((uint32_t)(0x100206b4), (_r)); fl_logic(_r,32); }
L_100180b4:;
  /* 100180b4 ret  */
  ESPCHK(0x10018097u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b5 @ 0x100180b5 (19 bytes, 4 insns) */
void f_100180b5(void) {
  FTRACE(0x100180b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100180b5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100180b9 mov dword ptr [eax + 0x50], 0x10020d00 */
  w32((uint32_t)(EAX + 0x50), (0x10020d00u));
  /* 100180c0 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 100180c7 ret  */
  ESPCHK(0x100180b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c8 @ 0x100180c8 (103 bytes, 38 insns) */
void f_100180c8(void) {
  FTRACE(0x100180c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100180c8 push esi */
  push32((uint32_t)(ESI));
  /* 100180c9 push edi */
  push32((uint32_t)(EDI));
  /* 100180ca call dword ptr [0x1001e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e03c))), 0x100180d0u);
  /* 100180d0 push dword ptr [0x100206b4] */
  push32((uint32_t)(r32((uint32_t)(0x100206b4))));
  /* 100180d6 mov edi, eax */
  EDI = (EAX);
  /* 100180d8 call dword ptr [0x1001e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e038))), 0x100180deu);
  /* 100180de mov esi, eax */
  ESI = (EAX);
  /* 100180e0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100180e2 jne 0x10018123 */
  if (!C.zf) goto L_10018123;
  /* 100180e4 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100180e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100180e8 call 0x1001a109 */
  push32(0x100180edu); f_1001a109();
  /* 100180ed mov esi, eax */
  ESI = (EAX);
  /* 100180ef pop ecx */
  ECX = (pop32());
  /* 100180f0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100180f2 pop ecx */
  ECX = (pop32());
  /* 100180f3 je 0x1001811b */
  if (C.zf) goto L_1001811b;
  /* 100180f5 push esi */
  push32((uint32_t)(ESI));
  /* 100180f6 push dword ptr [0x100206b4] */
  push32((uint32_t)(r32((uint32_t)(0x100206b4))));
  /* 100180fc call dword ptr [0x1001e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e028))), 0x10018102u);
  /* 10018102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018104 je 0x1001811b */
  if (C.zf) goto L_1001811b;
  /* 10018106 push esi */
  push32((uint32_t)(ESI));
  /* 10018107 call 0x100180b5 */
  push32(0x1001810cu); f_100180b5();
  /* 1001810c pop ecx */
  ECX = (pop32());
  /* 1001810d call dword ptr [0x1001e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e024))), 0x10018113u);
  /* 10018113 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10018117 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10018119 jmp 0x10018123 */
  goto L_10018123;
L_1001811b:;
  /* 1001811b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1001811d call 0x10017131 */
  push32(0x10018122u); f_10017131();
  /* 10018122 pop ecx */
  ECX = (pop32());
L_10018123:;
  /* 10018123 push edi */
  push32((uint32_t)(EDI));
  /* 10018124 call dword ptr [0x1001e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e034))), 0x1001812au);
  /* 1001812a mov eax, esi */
  EAX = (ESI);
  /* 1001812c pop edi */
  EDI = (pop32());
  /* 1001812d pop esi */
  ESI = (pop32());
  /* 1001812e ret  */
  ESPCHK(0x100180c8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000812f @ 0x1001812f (160 bytes, 62 insns) */
void f_1001812f(void) {
  FTRACE(0x1001812fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001812f mov eax, dword ptr [0x100206b4] */
  EAX = (r32((uint32_t)(0x100206b4)));
  /* 10018134 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018137 je 0x100181ce */
  if (C.zf) goto L_100181ce;
  /* 1001813d push esi */
  push32((uint32_t)(ESI));
  /* 1001813e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10018142 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10018144 jne 0x10018153 */
  if (!C.zf) goto L_10018153;
  /* 10018146 push eax */
  push32((uint32_t)(EAX));
  /* 10018147 call dword ptr [0x1001e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e038))), 0x1001814du);
  /* 1001814d mov esi, eax */
  ESI = (EAX);
  /* 1001814f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10018151 je 0x100181bf */
  if (C.zf) goto L_100181bf;
L_10018153:;
  /* 10018153 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10018156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018158 je 0x10018161 */
  if (C.zf) goto L_10018161;
  /* 1001815a push eax */
  push32((uint32_t)(EAX));
  /* 1001815b call 0x1001a246 */
  push32(0x10018160u); f_1001a246();
  /* 10018160 pop ecx */
  ECX = (pop32());
L_10018161:;
  /* 10018161 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10018164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018166 je 0x1001816f */
  if (C.zf) goto L_1001816f;
  /* 10018168 push eax */
  push32((uint32_t)(EAX));
  /* 10018169 call 0x1001a246 */
  push32(0x1001816eu); f_1001a246();
  /* 1001816e pop ecx */
  ECX = (pop32());
L_1001816f:;
  /* 1001816f mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10018172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018174 je 0x1001817d */
  if (C.zf) goto L_1001817d;
  /* 10018176 push eax */
  push32((uint32_t)(EAX));
  /* 10018177 call 0x1001a246 */
  push32(0x1001817cu); f_1001a246();
  /* 1001817c pop ecx */
  ECX = (pop32());
L_1001817d:;
  /* 1001817d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10018180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018182 je 0x1001818b */
  if (C.zf) goto L_1001818b;
  /* 10018184 push eax */
  push32((uint32_t)(EAX));
  /* 10018185 call 0x1001a246 */
  push32(0x1001818au); f_1001a246();
  /* 1001818a pop ecx */
  ECX = (pop32());
L_1001818b:;
  /* 1001818b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1001818e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018190 je 0x10018199 */
  if (C.zf) goto L_10018199;
  /* 10018192 push eax */
  push32((uint32_t)(EAX));
  /* 10018193 call 0x1001a246 */
  push32(0x10018198u); f_1001a246();
  /* 10018198 pop ecx */
  ECX = (pop32());
L_10018199:;
  /* 10018199 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1001819c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001819e je 0x100181a7 */
  if (C.zf) goto L_100181a7;
  /* 100181a0 push eax */
  push32((uint32_t)(EAX));
  /* 100181a1 call 0x1001a246 */
  push32(0x100181a6u); f_1001a246();
  /* 100181a6 pop ecx */
  ECX = (pop32());
L_100181a7:;
  /* 100181a7 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 100181aa cmp eax, 0x10020d00 */
  { uint32_t _a=(EAX),_b=(0x10020d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100181af je 0x100181b8 */
  if (C.zf) goto L_100181b8;
  /* 100181b1 push eax */
  push32((uint32_t)(EAX));
  /* 100181b2 call 0x1001a246 */
  push32(0x100181b7u); f_1001a246();
  /* 100181b7 pop ecx */
  ECX = (pop32());
L_100181b8:;
  /* 100181b8 push esi */
  push32((uint32_t)(ESI));
  /* 100181b9 call 0x1001a246 */
  push32(0x100181beu); f_1001a246();
  /* 100181be pop ecx */
  ECX = (pop32());
L_100181bf:;
  /* 100181bf push 0 */
  push32((uint32_t)(0x0u));
  /* 100181c1 push dword ptr [0x100206b4] */
  push32((uint32_t)(r32((uint32_t)(0x100206b4))));
  /* 100181c7 call dword ptr [0x1001e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e028))), 0x100181cdu);
  /* 100181cd pop esi */
  ESI = (pop32());
L_100181ce:;
  /* 100181ce ret  */
  ESPCHK(0x1001812fu, _esp0);
  ESP += 4; return;
}

/* FUN_100081cf @ 0x100181cf (444 bytes, 150 insns) */
void f_100181cf(void) {
  FTRACE(0x100181cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100181cf push ebp */
  push32((uint32_t)(EBP));
  /* 100181d0 mov ebp, esp */
  EBP = (ESP);
  /* 100181d2 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100181d5 push ebx */
  push32((uint32_t)(EBX));
  /* 100181d6 push esi */
  push32((uint32_t)(ESI));
  /* 100181d7 push edi */
  push32((uint32_t)(EDI));
  /* 100181d8 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100181dd call 0x1001a32f */
  push32(0x100181e2u); f_1001a32f();
  /* 100181e2 mov esi, eax */
  ESI = (EAX);
  /* 100181e4 pop ecx */
  ECX = (pop32());
  /* 100181e5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100181e7 jne 0x100181f1 */
  if (!C.zf) goto L_100181f1;
  /* 100181e9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100181eb call 0x10017131 */
  push32(0x100181f0u); f_10017131();
  /* 100181f0 pop ecx */
  ECX = (pop32());
L_100181f1:;
  /* 100181f1 mov dword ptr [0x10027c60], esi */
  w32((uint32_t)(0x10027c60), (ESI));
  /* 100181f7 mov dword ptr [0x10027d60], 0x20 */
  w32((uint32_t)(0x10027d60), (0x20u));
  /* 10018201 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10018207:;
  /* 10018207 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018209 jae 0x10018229 */
  if (!C.cf) goto L_10018229;
  /* 1001820b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1001820f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10018212 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10018216 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1001821a mov eax, dword ptr [0x10027c60] */
  EAX = (r32((uint32_t)(0x10027c60)));
  /* 1001821f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10018222 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10018227 jmp 0x10018207 */
  goto L_10018207;
L_10018229:;
  /* 10018229 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 1001822c push eax */
  push32((uint32_t)(EAX));
  /* 1001822d call dword ptr [0x1001e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e04c))), 0x10018233u);
  /* 10018233 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10018238 je 0x1001830f */
  if (C.zf) goto L_1001830f;
  /* 1001823e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10018241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018243 je 0x1001830f */
  if (C.zf) goto L_1001830f;
  /* 10018249 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 1001824b lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1001824e lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10018251 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10018254 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10018259 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001825b jl 0x1001825f */
  if ((C.sf!=C.of)) goto L_1001825f;
  /* 1001825d mov edi, eax */
  EDI = (EAX);
L_1001825f:;
  /* 1001825f cmp dword ptr [0x10027d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x10027d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018265 jge 0x100182bd */
  if ((C.sf==C.of)) goto L_100182bd;
  /* 10018267 mov esi, 0x10027c64 */
  ESI = (0x10027c64u);
L_1001826c:;
  /* 1001826c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10018271 call 0x1001a32f */
  push32(0x10018276u); f_1001a32f();
  /* 10018276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018278 pop ecx */
  ECX = (pop32());
  /* 10018279 je 0x100182b7 */
  if (C.zf) goto L_100182b7;
  /* 1001827b add dword ptr [0x10027d60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10027d60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10027d60), (_r)); fl_add(_a,_b,_r,32); }
  /* 10018282 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10018284 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1001828a:;
  /* 1001828a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001828c jae 0x100182aa */
  if (!C.cf) goto L_100182aa;
  /* 1001828e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10018292 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10018295 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10018299 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1001829d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1001829f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100182a2 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100182a8 jmp 0x1001828a */
  goto L_1001828a;
L_100182aa:;
  /* 100182aa add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100182ad cmp dword ptr [0x10027d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x10027d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100182b3 jl 0x1001826c */
  if ((C.sf!=C.of)) goto L_1001826c;
  /* 100182b5 jmp 0x100182bd */
  goto L_100182bd;
L_100182b7:;
  /* 100182b7 mov edi, dword ptr [0x10027d60] */
  EDI = (r32((uint32_t)(0x10027d60)));
L_100182bd:;
  /* 100182bd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100182bf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100182c1 jle 0x1001830f */
  if ((C.zf||C.sf!=C.of)) goto L_1001830f;
L_100182c3:;
  /* 100182c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100182c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100182c8 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100182cb je 0x10018305 */
  if (C.zf) goto L_10018305;
  /* 100182cd mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 100182cf test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100182d1 je 0x10018305 */
  if (C.zf) goto L_10018305;
  /* 100182d3 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100182d5 jne 0x100182e2 */
  if (!C.zf) goto L_100182e2;
  /* 100182d7 push ecx */
  push32((uint32_t)(ECX));
  /* 100182d8 call dword ptr [0x1001e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e048))), 0x100182deu);
  /* 100182de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100182e0 je 0x10018305 */
  if (C.zf) goto L_10018305;
L_100182e2:;
  /* 100182e2 mov ecx, esi */
  ECX = (ESI);
  /* 100182e4 mov eax, esi */
  EAX = (ESI);
  /* 100182e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100182e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100182ec mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 100182f3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100182f6 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100182f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100182fc mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100182fe mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10018300 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10018302 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10018305:;
  /* 10018305 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10018309 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001830a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001830b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001830d jl 0x100182c3 */
  if ((C.sf!=C.of)) goto L_100182c3;
L_1001830f:;
  /* 1001830f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10018311:;
  /* 10018311 mov ecx, dword ptr [0x10027c60] */
  ECX = (r32((uint32_t)(0x10027c60)));
  /* 10018317 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1001831a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001831e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10018321 jne 0x10018370 */
  if (!C.zf) goto L_10018370;
  /* 10018323 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10018325 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10018329 jne 0x10018330 */
  if (!C.zf) goto L_10018330;
  /* 1001832b push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1001832d pop eax */
  EAX = (pop32());
  /* 1001832e jmp 0x1001833a */
  goto L_1001833a;
L_10018330:;
  /* 10018330 mov eax, ebx */
  EAX = (EBX);
  /* 10018332 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10018333 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10018335 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018337 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1001833a:;
  /* 1001833a push eax */
  push32((uint32_t)(EAX));
  /* 1001833b call dword ptr [0x1001e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e044))), 0x10018341u);
  /* 10018341 mov edi, eax */
  EDI = (EAX);
  /* 10018343 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018346 je 0x1001835f */
  if (C.zf) goto L_1001835f;
  /* 10018348 push edi */
  push32((uint32_t)(EDI));
  /* 10018349 call dword ptr [0x1001e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e048))), 0x1001834fu);
  /* 1001834f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018351 je 0x1001835f */
  if (C.zf) goto L_1001835f;
  /* 10018353 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10018358 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1001835a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001835d jne 0x10018365 */
  if (!C.zf) goto L_10018365;
L_1001835f:;
  /* 1001835f or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10018363 jmp 0x10018374 */
  goto L_10018374;
L_10018365:;
  /* 10018365 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018368 jne 0x10018374 */
  if (!C.zf) goto L_10018374;
  /* 1001836a or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1001836e jmp 0x10018374 */
  goto L_10018374;
L_10018370:;
  /* 10018370 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10018374:;
  /* 10018374 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10018375 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018378 jl 0x10018311 */
  if ((C.sf!=C.of)) goto L_10018311;
  /* 1001837a push dword ptr [0x10027d60] */
  push32((uint32_t)(r32((uint32_t)(0x10027d60))));
  /* 10018380 call dword ptr [0x1001e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e040))), 0x10018386u);
  /* 10018386 pop edi */
  EDI = (pop32());
  /* 10018387 pop esi */
  ESI = (pop32());
  /* 10018388 pop ebx */
  EBX = (pop32());
  /* 10018389 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001838a ret  */
  ESPCHK(0x100181cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000838b @ 0x1001838b (84 bytes, 33 insns) */
void f_1001838b(void) {
  FTRACE(0x1001838bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001838b push ebx */
  push32((uint32_t)(EBX));
  /* 1001838c push esi */
  push32((uint32_t)(ESI));
  /* 1001838d push edi */
  push32((uint32_t)(EDI));
  /* 1001838e mov esi, 0x10027c60 */
  ESI = (0x10027c60u);
L_10018393:;
  /* 10018393 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10018395 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018397 je 0x100183d0 */
  if (C.zf) goto L_100183d0;
  /* 10018399 mov edi, eax */
  EDI = (EAX);
  /* 1001839b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100183a0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100183a2 jae 0x100183c5 */
  if (!C.cf) goto L_100183c5;
  /* 100183a4 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_100183a7:;
  /* 100183a7 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100183ab je 0x100183b4 */
  if (C.zf) goto L_100183b4;
  /* 100183ad push ebx */
  push32((uint32_t)(EBX));
  /* 100183ae call dword ptr [0x1001e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e050))), 0x100183b4u);
L_100183b4:;
  /* 100183b4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100183b6 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100183b9 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100183be add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100183c1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100183c3 jb 0x100183a7 */
  if (C.cf) goto L_100183a7;
L_100183c5:;
  /* 100183c5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100183c7 call 0x1001a246 */
  push32(0x100183ccu); f_1001a246();
  /* 100183cc and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100183cf pop ecx */
  ECX = (pop32());
L_100183d0:;
  /* 100183d0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100183d3 cmp esi, 0x10027d60 */
  { uint32_t _a=(ESI),_b=(0x10027d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100183d9 jl 0x10018393 */
  if ((C.sf!=C.of)) goto L_10018393;
  /* 100183db pop edi */
  EDI = (pop32());
  /* 100183dc pop esi */
  ESI = (pop32());
  /* 100183dd pop ebx */
  EBX = (pop32());
  /* 100183de ret  */
  ESPCHK(0x1001838bu, _esp0);
  ESP += 4; return;
}

/* FUN_100083df @ 0x100183df (185 bytes, 71 insns) */
void f_100183df(void) {
  FTRACE(0x100183dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100183df push ebx */
  push32((uint32_t)(EBX));
  /* 100183e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100183e2 cmp dword ptr [0x10027d68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10027d68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100183e8 push esi */
  push32((uint32_t)(ESI));
  /* 100183e9 push edi */
  push32((uint32_t)(EDI));
  /* 100183ea jne 0x100183f1 */
  if (!C.zf) goto L_100183f1;
  /* 100183ec call 0x1001a841 */
  push32(0x100183f1u); f_1001a841();
L_100183f1:;
  /* 100183f1 mov esi, dword ptr [0x10026668] */
  ESI = (r32((uint32_t)(0x10026668)));
  /* 100183f7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100183f9:;
  /* 100183f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100183fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100183fd je 0x10018411 */
  if (C.zf) goto L_10018411;
  /* 100183ff cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018401 je 0x10018404 */
  if (C.zf) goto L_10018404;
  /* 10018403 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10018404:;
  /* 10018404 push esi */
  push32((uint32_t)(ESI));
  /* 10018405 call 0x100190c0 */
  push32(0x1001840au); f_100190c0();
  /* 1001840a pop ecx */
  ECX = (pop32());
  /* 1001840b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1001840f jmp 0x100183f9 */
  goto L_100183f9;
L_10018411:;
  /* 10018411 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10018418 push eax */
  push32((uint32_t)(EAX));
  /* 10018419 call 0x1001a32f */
  push32(0x1001841eu); f_1001a32f();
  /* 1001841e mov esi, eax */
  ESI = (EAX);
  /* 10018420 pop ecx */
  ECX = (pop32());
  /* 10018421 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018423 mov dword ptr [0x10026698], esi */
  w32((uint32_t)(0x10026698), (ESI));
  /* 10018429 jne 0x10018433 */
  if (!C.zf) goto L_10018433;
  /* 1001842b push 9 */
  push32((uint32_t)(0x9u));
  /* 1001842d call 0x10017131 */
  push32(0x10018432u); f_10017131();
  /* 10018432 pop ecx */
  ECX = (pop32());
L_10018433:;
  /* 10018433 mov edi, dword ptr [0x10026668] */
  EDI = (r32((uint32_t)(0x10026668)));
  /* 10018439 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001843b je 0x10018476 */
  if (C.zf) goto L_10018476;
  /* 1001843d push ebp */
  push32((uint32_t)(EBP));
L_1001843e:;
  /* 1001843e push edi */
  push32((uint32_t)(EDI));
  /* 1001843f call 0x100190c0 */
  push32(0x10018444u); f_100190c0();
  /* 10018444 mov ebp, eax */
  EBP = (EAX);
  /* 10018446 pop ecx */
  ECX = (pop32());
  /* 10018447 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10018448 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001844b je 0x1001846f */
  if (C.zf) goto L_1001846f;
  /* 1001844d push ebp */
  push32((uint32_t)(EBP));
  /* 1001844e call 0x1001a32f */
  push32(0x10018453u); f_1001a32f();
  /* 10018453 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018455 pop ecx */
  ECX = (pop32());
  /* 10018456 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10018458 jne 0x10018462 */
  if (!C.zf) goto L_10018462;
  /* 1001845a push 9 */
  push32((uint32_t)(0x9u));
  /* 1001845c call 0x10017131 */
  push32(0x10018461u); f_10017131();
  /* 10018461 pop ecx */
  ECX = (pop32());
L_10018462:;
  /* 10018462 push edi */
  push32((uint32_t)(EDI));
  /* 10018463 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10018465 call 0x10019b70 */
  push32(0x1001846au); f_10019b70();
  /* 1001846a pop ecx */
  ECX = (pop32());
  /* 1001846b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001846e pop ecx */
  ECX = (pop32());
L_1001846f:;
  /* 1001846f add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10018471 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018473 jne 0x1001843e */
  if (!C.zf) goto L_1001843e;
  /* 10018475 pop ebp */
  EBP = (pop32());
L_10018476:;
  /* 10018476 push dword ptr [0x10026668] */
  push32((uint32_t)(r32((uint32_t)(0x10026668))));
  /* 1001847c call 0x1001a246 */
  push32(0x10018481u); f_1001a246();
  /* 10018481 pop ecx */
  ECX = (pop32());
  /* 10018482 mov dword ptr [0x10026668], ebx */
  w32((uint32_t)(0x10026668), (EBX));
  /* 10018488 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1001848a pop edi */
  EDI = (pop32());
  /* 1001848b pop esi */
  ESI = (pop32());
  /* 1001848c mov dword ptr [0x10027d64], 1 */
  w32((uint32_t)(0x10027d64), (0x1u));
  /* 10018496 pop ebx */
  EBX = (pop32());
  /* 10018497 ret  */
  ESPCHK(0x100183dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10008498 @ 0x10018498 (153 bytes, 62 insns) */
void f_10018498(void) {
  FTRACE(0x10018498u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018498 push ebp */
  push32((uint32_t)(EBP));
  /* 10018499 mov ebp, esp */
  EBP = (ESP);
  /* 1001849b push ecx */
  push32((uint32_t)(ECX));
  /* 1001849c push ecx */
  push32((uint32_t)(ECX));
  /* 1001849d push ebx */
  push32((uint32_t)(EBX));
  /* 1001849e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100184a0 cmp dword ptr [0x10027d68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10027d68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100184a6 push esi */
  push32((uint32_t)(ESI));
  /* 100184a7 push edi */
  push32((uint32_t)(EDI));
  /* 100184a8 jne 0x100184af */
  if (!C.zf) goto L_100184af;
  /* 100184aa call 0x1001a841 */
  push32(0x100184afu); f_1001a841();
L_100184af:;
  /* 100184af mov esi, 0x100266bc */
  ESI = (0x100266bcu);
  /* 100184b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100184b9 push esi */
  push32((uint32_t)(ESI));
  /* 100184ba push ebx */
  push32((uint32_t)(EBX));
  /* 100184bb call dword ptr [0x1001e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e054))), 0x100184c1u);
  /* 100184c1 mov eax, dword ptr [0x10027d74] */
  EAX = (r32((uint32_t)(0x10027d74)));
  /* 100184c6 mov dword ptr [0x100266a8], esi */
  w32((uint32_t)(0x100266a8), (ESI));
  /* 100184cc mov edi, esi */
  EDI = (ESI);
  /* 100184ce cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100184d0 je 0x100184d4 */
  if (C.zf) goto L_100184d4;
  /* 100184d2 mov edi, eax */
  EDI = (EAX);
L_100184d4:;
  /* 100184d4 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100184d7 push eax */
  push32((uint32_t)(EAX));
  /* 100184d8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100184db push eax */
  push32((uint32_t)(EAX));
  /* 100184dc push ebx */
  push32((uint32_t)(EBX));
  /* 100184dd push ebx */
  push32((uint32_t)(EBX));
  /* 100184de push edi */
  push32((uint32_t)(EDI));
  /* 100184df call 0x10018531 */
  push32(0x100184e4u); f_10018531();
  /* 100184e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100184e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100184ea lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100184ed push eax */
  push32((uint32_t)(EAX));
  /* 100184ee call 0x1001a32f */
  push32(0x100184f3u); f_1001a32f();
  /* 100184f3 mov esi, eax */
  ESI = (EAX);
  /* 100184f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100184f8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100184fa jne 0x10018504 */
  if (!C.zf) goto L_10018504;
  /* 100184fc push 8 */
  push32((uint32_t)(0x8u));
  /* 100184fe call 0x10017131 */
  push32(0x10018503u); f_10017131();
  /* 10018503 pop ecx */
  ECX = (pop32());
L_10018504:;
  /* 10018504 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10018507 push eax */
  push32((uint32_t)(EAX));
  /* 10018508 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1001850b push eax */
  push32((uint32_t)(EAX));
  /* 1001850c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001850f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10018512 push eax */
  push32((uint32_t)(EAX));
  /* 10018513 push esi */
  push32((uint32_t)(ESI));
  /* 10018514 push edi */
  push32((uint32_t)(EDI));
  /* 10018515 call 0x10018531 */
  push32(0x1001851au); f_10018531();
  /* 1001851a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001851d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10018520 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10018521 mov dword ptr [0x10026690], esi */
  w32((uint32_t)(0x10026690), (ESI));
  /* 10018527 pop edi */
  EDI = (pop32());
  /* 10018528 pop esi */
  ESI = (pop32());
  /* 10018529 mov dword ptr [0x1002668c], eax */
  w32((uint32_t)(0x1002668c), (EAX));
  /* 1001852e pop ebx */
  EBX = (pop32());
  /* 1001852f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10018530 ret  */
  ESPCHK(0x10018498u, _esp0);
  ESP += 4; return;
}

/* FUN_10008531 @ 0x10018531 (436 bytes, 187 insns) */
void f_10018531(void) {
  FTRACE(0x10018531u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018531 push ebp */
  push32((uint32_t)(EBP));
  /* 10018532 mov ebp, esp */
  EBP = (ESP);
  /* 10018534 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10018537 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1001853a push ebx */
  push32((uint32_t)(EBX));
  /* 1001853b push esi */
  push32((uint32_t)(ESI));
  /* 1001853c and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1001853f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10018542 push edi */
  push32((uint32_t)(EDI));
  /* 10018543 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10018546 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 1001854c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001854f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10018551 je 0x1001855b */
  if (C.zf) goto L_1001855b;
  /* 10018553 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10018555 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10018558 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1001855b:;
  /* 1001855b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001855e jne 0x100185a4 */
  if (!C.zf) goto L_100185a4;
L_10018560:;
  /* 10018560 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10018563 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018564 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018567 je 0x10018592 */
  if (C.zf) goto L_10018592;
  /* 10018569 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1001856b je 0x10018592 */
  if (C.zf) goto L_10018592;
  /* 1001856d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10018570 test byte ptr [edx + 0x10026b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10026b21)))&(0x4u); fl_logic(_r,8); }
  /* 10018577 je 0x10018585 */
  if (C.zf) goto L_10018585;
  /* 10018579 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1001857b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001857d je 0x10018585 */
  if (C.zf) goto L_10018585;
  /* 1001857f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10018581 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10018583 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10018584 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10018585:;
  /* 10018585 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10018587 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10018589 je 0x10018560 */
  if (C.zf) goto L_10018560;
  /* 1001858b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1001858d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1001858f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10018590 jmp 0x10018560 */
  goto L_10018560;
L_10018592:;
  /* 10018592 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10018594 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10018596 je 0x1001859c */
  if (C.zf) goto L_1001859c;
  /* 10018598 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1001859b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1001859c:;
  /* 1001859c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001859f jne 0x100185e7 */
  if (!C.zf) goto L_100185e7;
  /* 100185a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100185a2 jmp 0x100185e7 */
  goto L_100185e7;
L_100185a4:;
  /* 100185a4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100185a6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100185a8 je 0x100185af */
  if (C.zf) goto L_100185af;
  /* 100185aa mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100185ac mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100185ae inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100185af:;
  /* 100185af mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100185b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100185b2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100185b5 test byte ptr [ebx + 0x10026b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10026b21)))&(0x4u); fl_logic(_r,8); }
  /* 100185bc je 0x100185ca */
  if (C.zf) goto L_100185ca;
  /* 100185be inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100185c0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100185c2 je 0x100185c9 */
  if (C.zf) goto L_100185c9;
  /* 100185c4 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100185c6 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 100185c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100185c9:;
  /* 100185c9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100185ca:;
  /* 100185ca cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100185cd je 0x100185d8 */
  if (C.zf) goto L_100185d8;
  /* 100185cf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100185d1 je 0x100185dc */
  if (C.zf) goto L_100185dc;
  /* 100185d3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100185d6 jne 0x100185a4 */
  if (!C.zf) goto L_100185a4;
L_100185d8:;
  /* 100185d8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100185da jne 0x100185df */
  if (!C.zf) goto L_100185df;
L_100185dc:;
  /* 100185dc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100185dd jmp 0x100185e7 */
  goto L_100185e7;
L_100185df:;
  /* 100185df test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100185e1 je 0x100185e7 */
  if (C.zf) goto L_100185e7;
  /* 100185e3 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_100185e7:;
  /* 100185e7 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_100185eb:;
  /* 100185eb cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100185ee je 0x100186d4 */
  if (C.zf) goto L_100186d4;
L_100185f4:;
  /* 100185f4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100185f6 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100185f9 je 0x10018600 */
  if (C.zf) goto L_10018600;
  /* 100185fb cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100185fe jne 0x10018603 */
  if (!C.zf) goto L_10018603;
L_10018600:;
  /* 10018600 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018601 jmp 0x100185f4 */
  goto L_100185f4;
L_10018603:;
  /* 10018603 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018606 je 0x100186d4 */
  if (C.zf) goto L_100186d4;
  /* 1001860c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001860e je 0x10018618 */
  if (C.zf) goto L_10018618;
  /* 10018610 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10018612 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10018615 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10018618:;
  /* 10018618 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1001861b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1001861d:;
  /* 1001861d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10018624 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10018626:;
  /* 10018626 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018629 jne 0x1001862f */
  if (!C.zf) goto L_1001862f;
  /* 1001862b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001862c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001862d jmp 0x10018626 */
  goto L_10018626;
L_1001862f:;
  /* 1001862f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018632 jne 0x10018660 */
  if (!C.zf) goto L_10018660;
  /* 10018634 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10018637 jne 0x1001865e */
  if (!C.zf) goto L_1001865e;
  /* 10018639 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001863b cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001863e je 0x1001864d */
  if (C.zf) goto L_1001864d;
  /* 10018640 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018644 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10018647 jne 0x1001864d */
  if (!C.zf) goto L_1001864d;
  /* 10018649 mov eax, edx */
  EAX = (EDX);
  /* 1001864b jmp 0x10018650 */
  goto L_10018650;
L_1001864d:;
  /* 1001864d mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10018650:;
  /* 10018650 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10018653 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10018655 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018658 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1001865b mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1001865e:;
  /* 1001865e shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10018660:;
  /* 10018660 mov edx, ebx */
  EDX = (EBX);
  /* 10018662 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10018663 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10018665 je 0x10018675 */
  if (C.zf) goto L_10018675;
  /* 10018667 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10018668:;
  /* 10018668 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001866a je 0x10018670 */
  if (C.zf) goto L_10018670;
  /* 1001866c mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1001866f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10018670:;
  /* 10018670 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10018672 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10018673 jne 0x10018668 */
  if (!C.zf) goto L_10018668;
L_10018675:;
  /* 10018675 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10018677 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10018679 je 0x100186c5 */
  if (C.zf) goto L_100186c5;
  /* 1001867b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001867f jne 0x1001868b */
  if (!C.zf) goto L_1001868b;
  /* 10018681 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018684 je 0x100186c5 */
  if (C.zf) goto L_100186c5;
  /* 10018686 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018689 je 0x100186c5 */
  if (C.zf) goto L_100186c5;
L_1001868b:;
  /* 1001868b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001868f je 0x100186bf */
  if (C.zf) goto L_100186bf;
  /* 10018691 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10018693 je 0x100186ae */
  if (C.zf) goto L_100186ae;
  /* 10018695 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10018698 test byte ptr [ebx + 0x10026b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10026b21)))&(0x4u); fl_logic(_r,8); }
  /* 1001869f je 0x100186a7 */
  if (C.zf) goto L_100186a7;
  /* 100186a1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100186a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100186a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100186a5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100186a7:;
  /* 100186a7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100186a9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100186ab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100186ac jmp 0x100186bd */
  goto L_100186bd;
L_100186ae:;
  /* 100186ae movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100186b1 test byte ptr [edx + 0x10026b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10026b21)))&(0x4u); fl_logic(_r,8); }
  /* 100186b8 je 0x100186bd */
  if (C.zf) goto L_100186bd;
  /* 100186ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100186bb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100186bd:;
  /* 100186bd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100186bf:;
  /* 100186bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100186c0 jmp 0x1001861d */
  goto L_1001861d;
L_100186c5:;
  /* 100186c5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100186c7 je 0x100186cd */
  if (C.zf) goto L_100186cd;
  /* 100186c9 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100186cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100186cd:;
  /* 100186cd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100186cf jmp 0x100185eb */
  goto L_100185eb;
L_100186d4:;
  /* 100186d4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100186d6 je 0x100186db */
  if (C.zf) goto L_100186db;
  /* 100186d8 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100186db:;
  /* 100186db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100186de pop edi */
  EDI = (pop32());
  /* 100186df pop esi */
  ESI = (pop32());
  /* 100186e0 pop ebx */
  EBX = (pop32());
  /* 100186e1 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100186e3 pop ebp */
  EBP = (pop32());
  /* 100186e4 ret  */
  ESPCHK(0x10018531u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e5 @ 0x100186e5 (306 bytes, 132 insns) */
void f_100186e5(void) {
  FTRACE(0x100186e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100186e5 push ecx */
  push32((uint32_t)(ECX));
  /* 100186e6 push ecx */
  push32((uint32_t)(ECX));
  /* 100186e7 mov eax, dword ptr [0x100267c0] */
  EAX = (r32((uint32_t)(0x100267c0)));
  /* 100186ec push ebx */
  push32((uint32_t)(EBX));
  /* 100186ed push ebp */
  push32((uint32_t)(EBP));
  /* 100186ee mov ebp, dword ptr [0x1001e068] */
  EBP = (r32((uint32_t)(0x1001e068)));
  /* 100186f4 push esi */
  push32((uint32_t)(ESI));
  /* 100186f5 push edi */
  push32((uint32_t)(EDI));
  /* 100186f6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100186f8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100186fa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100186fc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100186fe jne 0x10018733 */
  if (!C.zf) goto L_10018733;
  /* 10018700 call ebp */
  call_ind((uint32_t)(EBP), 0x10018702u);
  /* 10018702 mov esi, eax */
  ESI = (EAX);
  /* 10018704 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018706 je 0x10018714 */
  if (C.zf) goto L_10018714;
  /* 10018708 mov dword ptr [0x100267c0], 1 */
  w32((uint32_t)(0x100267c0), (0x1u));
  /* 10018712 jmp 0x1001873c */
  goto L_1001873c;
L_10018714:;
  /* 10018714 call dword ptr [0x1001e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e064))), 0x1001871au);
  /* 1001871a mov edi, eax */
  EDI = (EAX);
  /* 1001871c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001871e je 0x1001880e */
  if (C.zf) goto L_1001880e;
  /* 10018724 mov dword ptr [0x100267c0], 2 */
  w32((uint32_t)(0x100267c0), (0x2u));
  /* 1001872e jmp 0x100187c2 */
  goto L_100187c2;
L_10018733:;
  /* 10018733 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018736 jne 0x100187bd */
  if (!C.zf) goto L_100187bd;
L_1001873c:;
  /* 1001873c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001873e jne 0x1001874c */
  if (!C.zf) goto L_1001874c;
  /* 10018740 call ebp */
  call_ind((uint32_t)(EBP), 0x10018742u);
  /* 10018742 mov esi, eax */
  ESI = (EAX);
  /* 10018744 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018746 je 0x1001880e */
  if (C.zf) goto L_1001880e;
L_1001874c:;
  /* 1001874c cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001874f mov eax, esi */
  EAX = (ESI);
  /* 10018751 je 0x10018761 */
  if (C.zf) goto L_10018761;
L_10018753:;
  /* 10018753 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018754 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018755 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10018758 jne 0x10018753 */
  if (!C.zf) goto L_10018753;
  /* 1001875a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001875b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001875c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001875f jne 0x10018753 */
  if (!C.zf) goto L_10018753;
L_10018761:;
  /* 10018761 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018763 mov edi, dword ptr [0x1001e060] */
  EDI = (r32((uint32_t)(0x1001e060)));
  /* 10018769 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1001876b push ebx */
  push32((uint32_t)(EBX));
  /* 1001876c push ebx */
  push32((uint32_t)(EBX));
  /* 1001876d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001876e push ebx */
  push32((uint32_t)(EBX));
  /* 1001876f push ebx */
  push32((uint32_t)(EBX));
  /* 10018770 push eax */
  push32((uint32_t)(EAX));
  /* 10018771 push esi */
  push32((uint32_t)(ESI));
  /* 10018772 push ebx */
  push32((uint32_t)(EBX));
  /* 10018773 push ebx */
  push32((uint32_t)(EBX));
  /* 10018774 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10018778 call edi */
  call_ind((uint32_t)(EDI), 0x1001877au);
  /* 1001877a mov ebp, eax */
  EBP = (EAX);
  /* 1001877c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001877e je 0x100187b2 */
  if (C.zf) goto L_100187b2;
  /* 10018780 push ebp */
  push32((uint32_t)(EBP));
  /* 10018781 call 0x1001a32f */
  push32(0x10018786u); f_1001a32f();
  /* 10018786 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018788 pop ecx */
  ECX = (pop32());
  /* 10018789 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1001878d je 0x100187b2 */
  if (C.zf) goto L_100187b2;
  /* 1001878f push ebx */
  push32((uint32_t)(EBX));
  /* 10018790 push ebx */
  push32((uint32_t)(EBX));
  /* 10018791 push ebp */
  push32((uint32_t)(EBP));
  /* 10018792 push eax */
  push32((uint32_t)(EAX));
  /* 10018793 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10018797 push esi */
  push32((uint32_t)(ESI));
  /* 10018798 push ebx */
  push32((uint32_t)(EBX));
  /* 10018799 push ebx */
  push32((uint32_t)(EBX));
  /* 1001879a call edi */
  call_ind((uint32_t)(EDI), 0x1001879cu);
  /* 1001879c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001879e jne 0x100187ae */
  if (!C.zf) goto L_100187ae;
  /* 100187a0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100187a4 call 0x1001a246 */
  push32(0x100187a9u); f_1001a246();
  /* 100187a9 pop ecx */
  ECX = (pop32());
  /* 100187aa mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_100187ae:;
  /* 100187ae mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_100187b2:;
  /* 100187b2 push esi */
  push32((uint32_t)(ESI));
  /* 100187b3 call dword ptr [0x1001e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e05c))), 0x100187b9u);
  /* 100187b9 mov eax, ebx */
  EAX = (EBX);
  /* 100187bb jmp 0x10018810 */
  goto L_10018810;
L_100187bd:;
  /* 100187bd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100187c0 jne 0x1001880e */
  if (!C.zf) goto L_1001880e;
L_100187c2:;
  /* 100187c2 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100187c4 jne 0x100187d2 */
  if (!C.zf) goto L_100187d2;
  /* 100187c6 call dword ptr [0x1001e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e064))), 0x100187ccu);
  /* 100187cc mov edi, eax */
  EDI = (EAX);
  /* 100187ce cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100187d0 je 0x1001880e */
  if (C.zf) goto L_1001880e;
L_100187d2:;
  /* 100187d2 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100187d4 mov eax, edi */
  EAX = (EDI);
  /* 100187d6 je 0x100187e2 */
  if (C.zf) goto L_100187e2;
L_100187d8:;
  /* 100187d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100187d9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100187db jne 0x100187d8 */
  if (!C.zf) goto L_100187d8;
  /* 100187dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100187de cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100187e0 jne 0x100187d8 */
  if (!C.zf) goto L_100187d8;
L_100187e2:;
  /* 100187e2 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100187e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100187e5 mov ebp, eax */
  EBP = (EAX);
  /* 100187e7 push ebp */
  push32((uint32_t)(EBP));
  /* 100187e8 call 0x1001a32f */
  push32(0x100187edu); f_1001a32f();
  /* 100187ed mov esi, eax */
  ESI = (EAX);
  /* 100187ef pop ecx */
  ECX = (pop32());
  /* 100187f0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100187f2 jne 0x100187f8 */
  if (!C.zf) goto L_100187f8;
  /* 100187f4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100187f6 jmp 0x10018803 */
  goto L_10018803;
L_100187f8:;
  /* 100187f8 push ebp */
  push32((uint32_t)(EBP));
  /* 100187f9 push edi */
  push32((uint32_t)(EDI));
  /* 100187fa push esi */
  push32((uint32_t)(ESI));
  /* 100187fb call 0x1001a860 */
  push32(0x10018800u); f_1001a860();
  /* 10018800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10018803:;
  /* 10018803 push edi */
  push32((uint32_t)(EDI));
  /* 10018804 call dword ptr [0x1001e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e058))), 0x1001880au);
  /* 1001880a mov eax, esi */
  EAX = (ESI);
  /* 1001880c jmp 0x10018810 */
  goto L_10018810;
L_1001880e:;
  /* 1001880e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10018810:;
  /* 10018810 pop edi */
  EDI = (pop32());
  /* 10018811 pop esi */
  ESI = (pop32());
  /* 10018812 pop ebp */
  EBP = (pop32());
  /* 10018813 pop ebx */
  EBX = (pop32());
  /* 10018814 pop ecx */
  ECX = (pop32());
  /* 10018815 pop ecx */
  ECX = (pop32());
  /* 10018816 ret  */
  ESPCHK(0x100186e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008817 @ 0x10018817 (45 bytes, 17 insns) */
void f_10018817(void) {
  FTRACE(0x10018817u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018817 push esi */
  push32((uint32_t)(ESI));
  /* 10018818 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001881c push 0 */
  push32((uint32_t)(0x0u));
  /* 1001881e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10018821 call dword ptr [0x1001e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e004))), 0x10018827u);
  /* 10018827 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001882c jne 0x10018842 */
  if (!C.zf) goto L_10018842;
  /* 1001882e mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10018831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10018833 je 0x10018842 */
  if (C.zf) goto L_10018842;
  /* 10018835 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10018837 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 1001883a mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 1001883c mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 1001883f mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_10018842:;
  /* 10018842 pop esi */
  ESI = (pop32());
  /* 10018843 ret  */
  ESPCHK(0x10018817u, _esp0);
  ESP += 4; return;
}

/* FUN_10008844 @ 0x10018844 (328 bytes, 115 insns) */
void f_10018844(void) {
  FTRACE(0x10018844u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018844 push ebp */
  push32((uint32_t)(EBP));
  /* 10018845 mov ebp, esp */
  EBP = (ESP);
  /* 10018847 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 1001884c call 0x1001af50 */
  push32(0x10018851u); f_1001af50();
  /* 10018851 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10018857 push ebx */
  push32((uint32_t)(EBX));
  /* 10018858 push eax */
  push32((uint32_t)(EAX));
  /* 10018859 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 10018863 call dword ptr [0x1001e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e070))), 0x10018869u);
  /* 10018869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001886b je 0x10018887 */
  if (C.zf) goto L_10018887;
  /* 1001886d cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018874 jne 0x10018887 */
  if (!C.zf) goto L_10018887;
  /* 10018876 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001887d jb 0x10018887 */
  if (C.cf) goto L_10018887;
  /* 1001887f push 1 */
  push32((uint32_t)(0x1u));
  /* 10018881 pop eax */
  EAX = (pop32());
  /* 10018882 jmp 0x10018989 */
  goto L_10018989;
L_10018887:;
  /* 10018887 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1001888d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10018892 push eax */
  push32((uint32_t)(EAX));
  /* 10018893 push 0x1001e1c8 */
  push32((uint32_t)(0x1001e1c8u));
  /* 10018898 call dword ptr [0x1001e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e06c))), 0x1001889eu);
  /* 1001889e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100188a0 je 0x10018976 */
  if (C.zf) goto L_10018976;
  /* 100188a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100188a8 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 100188ae cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100188b4 je 0x100188c9 */
  if (C.zf) goto L_100188c9;
L_100188b6:;
  /* 100188b6 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100188b8 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100188ba jl 0x100188c4 */
  if ((C.sf!=C.of)) goto L_100188c4;
  /* 100188bc cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100188be jg 0x100188c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_100188c4;
  /* 100188c0 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100188c2 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100188c4:;
  /* 100188c4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100188c5 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100188c7 jne 0x100188b6 */
  if (!C.zf) goto L_100188b6;
L_100188c9:;
  /* 100188c9 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100188cf push 0x16 */
  push32((uint32_t)(0x16u));
  /* 100188d1 push eax */
  push32((uint32_t)(EAX));
  /* 100188d2 push 0x1001e1b0 */
  push32((uint32_t)(0x1001e1b0u));
  /* 100188d7 call 0x1001af10 */
  push32(0x100188dcu); f_1001af10();
  /* 100188dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100188df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100188e1 jne 0x100188eb */
  if (!C.zf) goto L_100188eb;
  /* 100188e3 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100188e9 jmp 0x10018934 */
  goto L_10018934;
L_100188eb:;
  /* 100188eb lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100188f1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100188f6 push eax */
  push32((uint32_t)(EAX));
  /* 100188f7 push ebx */
  push32((uint32_t)(EBX));
  /* 100188f8 call dword ptr [0x1001e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e054))), 0x100188feu);
  /* 100188fe cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018904 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1001890a je 0x1001891f */
  if (C.zf) goto L_1001891f;
L_1001890c:;
  /* 1001890c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1001890e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018910 jl 0x1001891a */
  if ((C.sf!=C.of)) goto L_1001891a;
  /* 10018912 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018914 jg 0x1001891a */
  if ((!C.zf&&C.sf==C.of)) goto L_1001891a;
  /* 10018916 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10018918 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1001891a:;
  /* 1001891a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001891b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001891d jne 0x1001890c */
  if (!C.zf) goto L_1001890c;
L_1001891f:;
  /* 1001891f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10018925 push eax */
  push32((uint32_t)(EAX));
  /* 10018926 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1001892c push eax */
  push32((uint32_t)(EAX));
  /* 1001892d call 0x1001ae90 */
  push32(0x10018932u); f_1001ae90();
  /* 10018932 pop ecx */
  ECX = (pop32());
  /* 10018933 pop ecx */
  ECX = (pop32());
L_10018934:;
  /* 10018934 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018936 je 0x10018976 */
  if (C.zf) goto L_10018976;
  /* 10018938 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1001893a push eax */
  push32((uint32_t)(EAX));
  /* 1001893b call 0x1001add0 */
  push32(0x10018940u); f_1001add0();
  /* 10018940 pop ecx */
  ECX = (pop32());
  /* 10018941 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018943 pop ecx */
  ECX = (pop32());
  /* 10018944 je 0x10018976 */
  if (C.zf) goto L_10018976;
  /* 10018946 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018947 mov ecx, eax */
  ECX = (EAX);
  /* 10018949 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001894b je 0x1001895b */
  if (C.zf) goto L_1001895b;
L_1001894d:;
  /* 1001894d cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018950 jne 0x10018956 */
  if (!C.zf) goto L_10018956;
  /* 10018952 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 10018954 jmp 0x10018957 */
  goto L_10018957;
L_10018956:;
  /* 10018956 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_10018957:;
  /* 10018957 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018959 jne 0x1001894d */
  if (!C.zf) goto L_1001894d;
L_1001895b:;
  /* 1001895b push 0xa */
  push32((uint32_t)(0xau));
  /* 1001895d push ebx */
  push32((uint32_t)(EBX));
  /* 1001895e push eax */
  push32((uint32_t)(EAX));
  /* 1001895f call 0x1001ab95 */
  push32(0x10018964u); f_1001ab95();
  /* 10018964 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10018967 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001896a je 0x10018989 */
  if (C.zf) goto L_10018989;
  /* 1001896c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001896f je 0x10018989 */
  if (C.zf) goto L_10018989;
  /* 10018971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018974 je 0x10018989 */
  if (C.zf) goto L_10018989;
L_10018976:;
  /* 10018976 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10018979 push eax */
  push32((uint32_t)(EAX));
  /* 1001897a call 0x10018817 */
  push32(0x1001897fu); f_10018817();
  /* 1001897f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018983 pop ecx */
  ECX = (pop32());
  /* 10018984 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018986 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10018989:;
  /* 10018989 pop ebx */
  EBX = (pop32());
  /* 1001898a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001898b ret  */
  ESPCHK(0x10018844u, _esp0);
  ESP += 4; return;
}

/* FUN_1000898c @ 0x1001898c (93 bytes, 30 insns) */
void f_1001898c(void) {
  FTRACE(0x1001898cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001898c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001898e push 0 */
  push32((uint32_t)(0x0u));
  /* 10018990 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018994 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10018999 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1001899c push eax */
  push32((uint32_t)(EAX));
  /* 1001899d call dword ptr [0x1001e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e078))), 0x100189a3u);
  /* 100189a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100189a5 mov dword ptr [0x10027c44], eax */
  w32((uint32_t)(0x10027c44), (EAX));
  /* 100189aa je 0x100189e2 */
  if (C.zf) goto L_100189e2;
  /* 100189ac call 0x10018844 */
  push32(0x100189b1u); f_10018844();
  /* 100189b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100189b4 mov dword ptr [0x10027c48], eax */
  w32((uint32_t)(0x10027c48), (EAX));
  /* 100189b9 jne 0x100189c8 */
  if (!C.zf) goto L_100189c8;
  /* 100189bb push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 100189c0 call 0x1001af7f */
  push32(0x100189c5u); f_1001af7f();
  /* 100189c5 pop ecx */
  ECX = (pop32());
  /* 100189c6 jmp 0x100189d2 */
  goto L_100189d2;
L_100189c8:;
  /* 100189c8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100189cb jne 0x100189e5 */
  if (!C.zf) goto L_100189e5;
  /* 100189cd call 0x1001b7d0 */
  push32(0x100189d2u); f_1001b7d0();
L_100189d2:;
  /* 100189d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100189d4 jne 0x100189e5 */
  if (!C.zf) goto L_100189e5;
  /* 100189d6 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 100189dc call dword ptr [0x1001e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e074))), 0x100189e2u);
L_100189e2:;
  /* 100189e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100189e4 ret  */
  ESPCHK(0x1001898cu, _esp0);
  ESP += 4; return;
L_100189e5:;
  /* 100189e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100189e7 pop eax */
  EAX = (pop32());
  /* 100189e8 ret  */
  ESPCHK(0x1001898cu, _esp0);
  ESP += 4; return;
}

/* FUN_100089e9 @ 0x100189e9 (168 bytes, 56 insns) */
void f_100189e9(void) {
  FTRACE(0x100189e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100189e9 mov eax, dword ptr [0x10027c48] */
  EAX = (r32((uint32_t)(0x10027c48)));
  /* 100189ee push esi */
  push32((uint32_t)(ESI));
  /* 100189ef cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100189f2 push edi */
  push32((uint32_t)(EDI));
  /* 100189f3 jne 0x10018a5b */
  if (!C.zf) goto L_10018a5b;
  /* 100189f5 push ebx */
  push32((uint32_t)(EBX));
  /* 100189f6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100189f8 cmp dword ptr [0x100269e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100269e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100189fe push ebp */
  push32((uint32_t)(EBP));
  /* 100189ff mov ebp, dword ptr [0x1001e080] */
  EBP = (r32((uint32_t)(0x1001e080)));
  /* 10018a05 jle 0x10018a47 */
  if ((C.zf||C.sf!=C.of)) goto L_10018a47;
  /* 10018a07 mov eax, dword ptr [0x100269ec] */
  EAX = (r32((uint32_t)(0x100269ec)));
  /* 10018a0c mov edi, dword ptr [0x1001e07c] */
  EDI = (r32((uint32_t)(0x1001e07c)));
  /* 10018a12 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10018a15:;
  /* 10018a15 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10018a1a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10018a1f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10018a21 call edi */
  call_ind((uint32_t)(EDI), 0x10018a23u);
  /* 10018a23 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10018a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10018a2a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10018a2c call edi */
  call_ind((uint32_t)(EDI), 0x10018a2eu);
  /* 10018a2e push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10018a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10018a33 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 10018a39 call ebp */
  call_ind((uint32_t)(EBP), 0x10018a3bu);
  /* 10018a3b add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10018a3e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10018a3f cmp ebx, dword ptr [0x100269e8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100269e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018a45 jl 0x10018a15 */
  if ((C.sf!=C.of)) goto L_10018a15;
L_10018a47:;
  /* 10018a47 push dword ptr [0x100269ec] */
  push32((uint32_t)(r32((uint32_t)(0x100269ec))));
  /* 10018a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10018a4f push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 10018a55 call ebp */
  call_ind((uint32_t)(EBP), 0x10018a57u);
  /* 10018a57 pop ebp */
  EBP = (pop32());
  /* 10018a58 pop ebx */
  EBX = (pop32());
  /* 10018a59 jmp 0x10018a82 */
  goto L_10018a82;
L_10018a5b:;
  /* 10018a5b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018a5e jne 0x10018a82 */
  if (!C.zf) goto L_10018a82;
  /* 10018a60 mov edi, 0x10020e80 */
  EDI = (0x10020e80u);
  /* 10018a65 mov esi, edi */
  ESI = (EDI);
L_10018a67:;
  /* 10018a67 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10018a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018a6c je 0x10018a7c */
  if (C.zf) goto L_10018a7c;
  /* 10018a6e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10018a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10018a75 push eax */
  push32((uint32_t)(EAX));
  /* 10018a76 call dword ptr [0x1001e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e07c))), 0x10018a7cu);
L_10018a7c:;
  /* 10018a7c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 10018a7e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018a80 jne 0x10018a67 */
  if (!C.zf) goto L_10018a67;
L_10018a82:;
  /* 10018a82 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 10018a88 call dword ptr [0x1001e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e074))), 0x10018a8eu);
  /* 10018a8e pop edi */
  EDI = (pop32());
  /* 10018a8f pop esi */
  ESI = (pop32());
  /* 10018a90 ret  */
  ESPCHK(0x100189e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a91 @ 0x10018a91 (57 bytes, 18 insns) */
void f_10018a91(void) {
  FTRACE(0x10018a91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018a91 mov eax, dword ptr [0x10026670] */
  EAX = (r32((uint32_t)(0x10026670)));
  /* 10018a96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018a99 je 0x10018aa8 */
  if (C.zf) goto L_10018aa8;
  /* 10018a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018a9d jne 0x10018ac9 */
  if (!C.zf) goto L_10018ac9;
  /* 10018a9f cmp dword ptr [0x10026674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10026674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018aa6 jne 0x10018ac9 */
  if (!C.zf) goto L_10018ac9;
L_10018aa8:;
  /* 10018aa8 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10018aad call 0x10018aca */
  push32(0x10018ab2u); f_10018aca();
  /* 10018ab2 mov eax, dword ptr [0x100267c4] */
  EAX = (r32((uint32_t)(0x100267c4)));
  /* 10018ab7 pop ecx */
  ECX = (pop32());
  /* 10018ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018aba je 0x10018abe */
  if (C.zf) goto L_10018abe;
  /* 10018abc call eax */
  call_ind((uint32_t)(EAX), 0x10018abeu);
L_10018abe:;
  /* 10018abe push 0xff */
  push32((uint32_t)(0xffu));
  /* 10018ac3 call 0x10018aca */
  push32(0x10018ac8u); f_10018aca();
  /* 10018ac8 pop ecx */
  ECX = (pop32());
L_10018ac9:;
  /* 10018ac9 ret  */
  ESPCHK(0x10018a91u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aca @ 0x10018aca (339 bytes, 100 insns) */
void f_10018aca(void) {
  FTRACE(0x10018acau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018aca push ebp */
  push32((uint32_t)(EBP));
  /* 10018acb mov ebp, esp */
  EBP = (ESP);
  /* 10018acd sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018ad3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10018ad6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10018ad8 mov eax, 0x100206e0 */
  EAX = (0x100206e0u);
L_10018add:;
  /* 10018add cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018adf je 0x10018aec */
  if (C.zf) goto L_10018aec;
  /* 10018ae1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10018ae4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10018ae5 cmp eax, 0x10020770 */
  { uint32_t _a=(EAX),_b=(0x10020770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018aea jl 0x10018add */
  if ((C.sf!=C.of)) goto L_10018add;
L_10018aec:;
  /* 10018aec push esi */
  push32((uint32_t)(ESI));
  /* 10018aed mov esi, ecx */
  ESI = (ECX);
  /* 10018aef shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10018af2 cmp edx, dword ptr [esi + 0x100206e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100206e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018af8 jne 0x10018c1a */
  if (!C.zf) goto L_10018c1a;
  /* 10018afe mov eax, dword ptr [0x10026670] */
  EAX = (r32((uint32_t)(0x10026670)));
  /* 10018b03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018b06 je 0x10018bf4 */
  if (C.zf) goto L_10018bf4;
  /* 10018b0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018b0e jne 0x10018b1d */
  if (!C.zf) goto L_10018b1d;
  /* 10018b10 cmp dword ptr [0x10026674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10026674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018b17 je 0x10018bf4 */
  if (C.zf) goto L_10018bf4;
L_10018b1d:;
  /* 10018b1d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018b23 je 0x10018c1a */
  if (C.zf) goto L_10018c1a;
  /* 10018b29 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10018b2f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10018b34 push eax */
  push32((uint32_t)(EAX));
  /* 10018b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10018b37 call dword ptr [0x1001e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e054))), 0x10018b3du);
  /* 10018b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018b3f jne 0x10018b54 */
  if (!C.zf) goto L_10018b54;
  /* 10018b41 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10018b47 push 0x1001e4b8 */
  push32((uint32_t)(0x1001e4b8u));
  /* 10018b4c push eax */
  push32((uint32_t)(EAX));
  /* 10018b4d call 0x10019b70 */
  push32(0x10018b52u); f_10019b70();
  /* 10018b52 pop ecx */
  ECX = (pop32());
  /* 10018b53 pop ecx */
  ECX = (pop32());
L_10018b54:;
  /* 10018b54 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10018b5a push edi */
  push32((uint32_t)(EDI));
  /* 10018b5b push eax */
  push32((uint32_t)(EAX));
  /* 10018b5c lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10018b62 call 0x100190c0 */
  push32(0x10018b67u); f_100190c0();
  /* 10018b67 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018b68 pop ecx */
  ECX = (pop32());
  /* 10018b69 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018b6c jbe 0x10018b97 */
  if ((C.cf||C.zf)) goto L_10018b97;
  /* 10018b6e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10018b74 push eax */
  push32((uint32_t)(EAX));
  /* 10018b75 call 0x100190c0 */
  push32(0x10018b7au); f_100190c0();
  /* 10018b7a mov edi, eax */
  EDI = (EAX);
  /* 10018b7c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10018b82 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018b85 push 3 */
  push32((uint32_t)(0x3u));
  /* 10018b87 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10018b89 push 0x1001e4b4 */
  push32((uint32_t)(0x1001e4b4u));
  /* 10018b8e push edi */
  push32((uint32_t)(EDI));
  /* 10018b8f call 0x1001be80 */
  push32(0x10018b94u); f_1001be80();
  /* 10018b94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10018b97:;
  /* 10018b97 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10018b9d push 0x1001e498 */
  push32((uint32_t)(0x1001e498u));
  /* 10018ba2 push eax */
  push32((uint32_t)(EAX));
  /* 10018ba3 call 0x10019b70 */
  push32(0x10018ba8u); f_10019b70();
  /* 10018ba8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10018bae push edi */
  push32((uint32_t)(EDI));
  /* 10018baf push eax */
  push32((uint32_t)(EAX));
  /* 10018bb0 call 0x10019b80 */
  push32(0x10018bb5u); f_10019b80();
  /* 10018bb5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10018bbb push 0x1001e494 */
  push32((uint32_t)(0x1001e494u));
  /* 10018bc0 push eax */
  push32((uint32_t)(EAX));
  /* 10018bc1 call 0x10019b80 */
  push32(0x10018bc6u); f_10019b80();
  /* 10018bc6 push dword ptr [esi + 0x100206e4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100206e4))));
  /* 10018bcc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10018bd2 push eax */
  push32((uint32_t)(EAX));
  /* 10018bd3 call 0x10019b80 */
  push32(0x10018bd8u); f_10019b80();
  /* 10018bd8 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10018bdd lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10018be3 push 0x1001e46c */
  push32((uint32_t)(0x1001e46cu));
  /* 10018be8 push eax */
  push32((uint32_t)(EAX));
  /* 10018be9 call 0x1001bdf4 */
  push32(0x10018beeu); f_1001bdf4();
  /* 10018bee add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10018bf1 pop edi */
  EDI = (pop32());
  /* 10018bf2 jmp 0x10018c1a */
  goto L_10018c1a;
L_10018bf4:;
  /* 10018bf4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10018bf7 lea esi, [esi + 0x100206e4] */
  ESI = ((uint32_t)(ESI + 0x100206e4));
  /* 10018bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10018bff push eax */
  push32((uint32_t)(EAX));
  /* 10018c00 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10018c02 call 0x100190c0 */
  push32(0x10018c07u); f_100190c0();
  /* 10018c07 pop ecx */
  ECX = (pop32());
  /* 10018c08 push eax */
  push32((uint32_t)(EAX));
  /* 10018c09 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10018c0b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10018c0d call dword ptr [0x1001e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e044))), 0x10018c13u);
  /* 10018c13 push eax */
  push32((uint32_t)(EAX));
  /* 10018c14 call dword ptr [0x1001e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e084))), 0x10018c1au);
L_10018c1a:;
  /* 10018c1a pop esi */
  ESI = (pop32());
  /* 10018c1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10018c1c ret  */
  ESPCHK(0x10018acau, _esp0);
  ESP += 4; return;
}

/* FUN_10008c1d @ 0x10018c1d (101 bytes, 34 insns) */
void f_10018c1d(void) {
  FTRACE(0x10018c1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018c1d push esi */
  push32((uint32_t)(ESI));
  /* 10018c1e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10018c22 cmp esi, dword ptr [0x10027d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018c28 jae 0x10018c6a */
  if (!C.cf) goto L_10018c6a;
  /* 10018c2a mov ecx, esi */
  ECX = (ESI);
  /* 10018c2c mov eax, esi */
  EAX = (ESI);
  /* 10018c2e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10018c31 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10018c34 mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 10018c3b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10018c3e test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10018c43 je 0x10018c6a */
  if (C.zf) goto L_10018c6a;
  /* 10018c45 push edi */
  push32((uint32_t)(EDI));
  /* 10018c46 push esi */
  push32((uint32_t)(ESI));
  /* 10018c47 call 0x1001c0c4 */
  push32(0x10018c4cu); f_1001c0c4();
  /* 10018c4c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10018c50 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10018c54 push esi */
  push32((uint32_t)(ESI));
  /* 10018c55 call 0x10018c82 */
  push32(0x10018c5au); f_10018c82();
  /* 10018c5a push esi */
  push32((uint32_t)(ESI));
  /* 10018c5b mov edi, eax */
  EDI = (EAX);
  /* 10018c5d call 0x1001c123 */
  push32(0x10018c62u); f_1001c123();
  /* 10018c62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10018c65 mov eax, edi */
  EAX = (EDI);
  /* 10018c67 pop edi */
  EDI = (pop32());
  /* 10018c68 pop esi */
  ESI = (pop32());
  /* 10018c69 ret  */
  ESPCHK(0x10018c1du, _esp0);
  ESP += 4; return;
L_10018c6a:;
  /* 10018c6a call 0x1001bff1 */
  push32(0x10018c6fu); f_1001bff1();
  /* 10018c6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10018c75 call 0x1001bffa */
  push32(0x10018c7au); f_1001bffa();
  /* 10018c7a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10018c7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10018c80 pop esi */
  ESI = (pop32());
  /* 10018c81 ret  */
  ESPCHK(0x10018c1du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c82 @ 0x10018c82 (115 bytes, 41 insns) */
void f_10018c82(void) {
  FTRACE(0x10018c82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018c82 push esi */
  push32((uint32_t)(ESI));
  /* 10018c83 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10018c87 push edi */
  push32((uint32_t)(EDI));
  /* 10018c88 push esi */
  push32((uint32_t)(ESI));
  /* 10018c89 call 0x1001c082 */
  push32(0x10018c8eu); f_1001c082();
  /* 10018c8e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018c91 pop ecx */
  ECX = (pop32());
  /* 10018c92 jne 0x10018ca1 */
  if (!C.zf) goto L_10018ca1;
  /* 10018c94 call 0x1001bff1 */
  push32(0x10018c99u); f_1001bff1();
  /* 10018c99 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10018c9f jmp 0x10018cce */
  goto L_10018cce;
L_10018ca1:;
  /* 10018ca1 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10018ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10018ca7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10018cab push eax */
  push32((uint32_t)(EAX));
  /* 10018cac call dword ptr [0x1001e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e000))), 0x10018cb2u);
  /* 10018cb2 mov edi, eax */
  EDI = (EAX);
  /* 10018cb4 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018cb7 jne 0x10018cc1 */
  if (!C.zf) goto L_10018cc1;
  /* 10018cb9 call dword ptr [0x1001e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e03c))), 0x10018cbfu);
  /* 10018cbf jmp 0x10018cc3 */
  goto L_10018cc3;
L_10018cc1:;
  /* 10018cc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10018cc3:;
  /* 10018cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018cc5 je 0x10018cd3 */
  if (C.zf) goto L_10018cd3;
  /* 10018cc7 push eax */
  push32((uint32_t)(EAX));
  /* 10018cc8 call 0x1001bf7e */
  push32(0x10018ccdu); f_1001bf7e();
  /* 10018ccd pop ecx */
  ECX = (pop32());
L_10018cce:;
  /* 10018cce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10018cd1 jmp 0x10018cf2 */
  goto L_10018cf2;
L_10018cd3:;
  /* 10018cd3 mov ecx, esi */
  ECX = (ESI);
  /* 10018cd5 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10018cd8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10018cdb mov eax, esi */
  EAX = (ESI);
  /* 10018cdd mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 10018ce4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10018ce7 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10018cec lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10018cf0 mov eax, edi */
  EAX = (EDI);
L_10018cf2:;
  /* 10018cf2 pop edi */
  EDI = (pop32());
  /* 10018cf3 pop esi */
  ESI = (pop32());
  /* 10018cf4 ret  */
  ESPCHK(0x10018c82u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cf5 @ 0x10018cf5 (101 bytes, 34 insns) */
void f_10018cf5(void) {
  FTRACE(0x10018cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018cf5 push esi */
  push32((uint32_t)(ESI));
  /* 10018cf6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10018cfa cmp esi, dword ptr [0x10027d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018d00 jae 0x10018d42 */
  if (!C.cf) goto L_10018d42;
  /* 10018d02 mov ecx, esi */
  ECX = (ESI);
  /* 10018d04 mov eax, esi */
  EAX = (ESI);
  /* 10018d06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10018d09 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10018d0c mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 10018d13 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10018d16 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10018d1b je 0x10018d42 */
  if (C.zf) goto L_10018d42;
  /* 10018d1d push edi */
  push32((uint32_t)(EDI));
  /* 10018d1e push esi */
  push32((uint32_t)(ESI));
  /* 10018d1f call 0x1001c0c4 */
  push32(0x10018d24u); f_1001c0c4();
  /* 10018d24 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10018d28 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10018d2c push esi */
  push32((uint32_t)(ESI));
  /* 10018d2d call 0x10018d5a */
  push32(0x10018d32u); f_10018d5a();
  /* 10018d32 push esi */
  push32((uint32_t)(ESI));
  /* 10018d33 mov edi, eax */
  EDI = (EAX);
  /* 10018d35 call 0x1001c123 */
  push32(0x10018d3au); f_1001c123();
  /* 10018d3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10018d3d mov eax, edi */
  EAX = (EDI);
  /* 10018d3f pop edi */
  EDI = (pop32());
  /* 10018d40 pop esi */
  ESI = (pop32());
  /* 10018d41 ret  */
  ESPCHK(0x10018cf5u, _esp0);
  ESP += 4; return;
L_10018d42:;
  /* 10018d42 call 0x1001bff1 */
  push32(0x10018d47u); f_1001bff1();
  /* 10018d47 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10018d4d call 0x1001bffa */
  push32(0x10018d52u); f_1001bffa();
  /* 10018d52 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10018d55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10018d58 pop esi */
  ESI = (pop32());
  /* 10018d59 ret  */
  ESPCHK(0x10018cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d5a @ 0x10018d5a (395 bytes, 135 insns) */
void f_10018d5a(void) {
  FTRACE(0x10018d5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018d5a push ebp */
  push32((uint32_t)(EBP));
  /* 10018d5b mov ebp, esp */
  EBP = (ESP);
  /* 10018d5d sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018d63 push ebx */
  push32((uint32_t)(EBX));
  /* 10018d64 push esi */
  push32((uint32_t)(ESI));
  /* 10018d65 push edi */
  push32((uint32_t)(EDI));
  /* 10018d66 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10018d68 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018d6b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10018d6e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10018d71 jne 0x10018d7a */
  if (!C.zf) goto L_10018d7a;
L_10018d73:;
  /* 10018d73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10018d75 jmp 0x10018ee0 */
  goto L_10018ee0;
L_10018d7a:;
  /* 10018d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10018d7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10018d80 lea ebx, [eax*4 + 0x10027c60] */
  EBX = ((uint32_t)(EAX*4 + 0x10027c60));
  /* 10018d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10018d8a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10018d8d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10018d90 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10018d92 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10018d95 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10018d9a je 0x10018daa */
  if (C.zf) goto L_10018daa;
  /* 10018d9c push 2 */
  push32((uint32_t)(0x2u));
  /* 10018d9e push edi */
  push32((uint32_t)(EDI));
  /* 10018d9f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10018da2 call 0x10018c82 */
  push32(0x10018da7u); f_10018c82();
  /* 10018da7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10018daa:;
  /* 10018daa mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10018dac add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10018dae test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10018db2 je 0x10018e79 */
  if (C.zf) goto L_10018e79;
  /* 10018db8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10018dbb cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018dbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10018dc1 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10018dc4 jbe 0x10018eb4 */
  if ((C.cf||C.zf)) goto L_10018eb4;
L_10018dca:;
  /* 10018dca lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10018dd0:;
  /* 10018dd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10018dd3 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018dd6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018dd9 jae 0x10018e04 */
  if (!C.cf) goto L_10018e04;
  /* 10018ddb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10018dde inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10018de1 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10018de3 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018de6 jne 0x10018def */
  if (!C.zf) goto L_10018def;
  /* 10018de8 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10018deb mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10018dee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10018def:;
  /* 10018def mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10018df1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10018df2 mov ecx, eax */
  ECX = (EAX);
  /* 10018df4 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10018dfa sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018dfc cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018e02 jl 0x10018dd0 */
  if ((C.sf!=C.of)) goto L_10018dd0;
L_10018e04:;
  /* 10018e04 mov edi, eax */
  EDI = (EAX);
  /* 10018e06 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10018e0c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018e0e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10018e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10018e13 push eax */
  push32((uint32_t)(EAX));
  /* 10018e14 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10018e1a push edi */
  push32((uint32_t)(EDI));
  /* 10018e1b push eax */
  push32((uint32_t)(EAX));
  /* 10018e1c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10018e1e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10018e21 call dword ptr [0x1001e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e084))), 0x10018e27u);
  /* 10018e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018e29 je 0x10018e6e */
  if (C.zf) goto L_10018e6e;
  /* 10018e2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10018e2e add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10018e31 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018e33 jl 0x10018e40 */
  if ((C.sf!=C.of)) goto L_10018e40;
  /* 10018e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10018e38 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10018e3b cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018e3e jb 0x10018dca */
  if (C.cf) goto L_10018dca;
L_10018e40:;
  /* 10018e40 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10018e42:;
  /* 10018e42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10018e45 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018e47 jne 0x10018edd */
  if (!C.zf) goto L_10018edd;
  /* 10018e4d cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018e50 je 0x10018eb4 */
  if (C.zf) goto L_10018eb4;
  /* 10018e52 push 5 */
  push32((uint32_t)(0x5u));
  /* 10018e54 pop esi */
  ESI = (pop32());
  /* 10018e55 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018e58 jne 0x10018ea6 */
  if (!C.zf) goto L_10018ea6;
  /* 10018e5a call 0x1001bff1 */
  push32(0x10018e5fu); f_1001bff1();
  /* 10018e5f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10018e65 call 0x1001bffa */
  push32(0x10018e6au); f_1001bffa();
  /* 10018e6a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10018e6c jmp 0x10018eaf */
  goto L_10018eaf;
L_10018e6e:;
  /* 10018e6e call dword ptr [0x1001e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e03c))), 0x10018e74u);
  /* 10018e74 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10018e77 jmp 0x10018e40 */
  goto L_10018e40;
L_10018e79:;
  /* 10018e79 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10018e7c push edi */
  push32((uint32_t)(EDI));
  /* 10018e7d push ecx */
  push32((uint32_t)(ECX));
  /* 10018e7e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10018e81 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10018e84 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10018e86 call dword ptr [0x1001e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e084))), 0x10018e8cu);
  /* 10018e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018e8e je 0x10018e9b */
  if (C.zf) goto L_10018e9b;
  /* 10018e90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10018e93 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10018e96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10018e99 jmp 0x10018e42 */
  goto L_10018e42;
L_10018e9b:;
  /* 10018e9b call dword ptr [0x1001e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e03c))), 0x10018ea1u);
  /* 10018ea1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10018ea4 jmp 0x10018e42 */
  goto L_10018e42;
L_10018ea6:;
  /* 10018ea6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10018ea9 call 0x1001bf7e */
  push32(0x10018eaeu); f_1001bf7e();
  /* 10018eae pop ecx */
  ECX = (pop32());
L_10018eaf:;
  /* 10018eaf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10018eb2 jmp 0x10018ee0 */
  goto L_10018ee0;
L_10018eb4:;
  /* 10018eb4 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10018eb6 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10018ebb je 0x10018ec9 */
  if (C.zf) goto L_10018ec9;
  /* 10018ebd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10018ec0 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10018ec3 je 0x10018d73 */
  if (C.zf) goto L_10018d73;
L_10018ec9:;
  /* 10018ec9 call 0x1001bff1 */
  push32(0x10018eceu); f_1001bff1();
  /* 10018ece mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10018ed4 call 0x1001bffa */
  push32(0x10018ed9u); f_1001bffa();
  /* 10018ed9 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10018edb jmp 0x10018eaf */
  goto L_10018eaf;
L_10018edd:;
  /* 10018edd sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10018ee0:;
  /* 10018ee0 pop edi */
  EDI = (pop32());
  /* 10018ee1 pop esi */
  ESI = (pop32());
  /* 10018ee2 pop ebx */
  EBX = (pop32());
  /* 10018ee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10018ee4 ret  */
  ESPCHK(0x10018d5au, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee5 @ 0x10018ee5 (68 bytes, 19 insns) */
void f_10018ee5(void) {
  FTRACE(0x10018ee5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018ee5 inc dword ptr [0x100267c8] */
  { uint32_t _r=(r32((uint32_t)(0x100267c8)))+1; w32((uint32_t)(0x100267c8), (_r)); fl_inc(_r,32); }
  /* 10018eeb push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10018ef0 call 0x1001a32f */
  push32(0x10018ef5u); f_1001a32f();
  /* 10018ef5 pop ecx */
  ECX = (pop32());
  /* 10018ef6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10018efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10018efc mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10018eff je 0x10018f0e */
  if (C.zf) goto L_10018f0e;
  /* 10018f01 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10018f05 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10018f0c jmp 0x10018f1f */
  goto L_10018f1f;
L_10018f0e:;
  /* 10018f0e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10018f12 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10018f15 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10018f18 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10018f1f:;
  /* 10018f1f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10018f22 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10018f26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10018f28 ret  */
  ESPCHK(0x10018ee5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f29 @ 0x10018f29 (41 bytes, 13 insns) */
void f_10018f29(void) {
  FTRACE(0x10018f29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10018f29 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10018f2d cmp eax, dword ptr [0x10027d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10018f33 jb 0x10018f38 */
  if (C.cf) goto L_10018f38;
  /* 10018f35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10018f37 ret  */
  ESPCHK(0x10018f29u, _esp0);
  ESP += 4; return;
L_10018f38:;
  /* 10018f38 mov ecx, eax */
  ECX = (EAX);
  /* 10018f3a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10018f3d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10018f40 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10018f43 mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 10018f4a mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10018f4e and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10018f51 ret  */
  ESPCHK(0x10018f29u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900e @ 0x1001900e (47 bytes, 17 insns) */
void f_1001900e(void) {
  FTRACE(0x1001900eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001900e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019012 mov ecx, 0x10020770 */
  ECX = (0x10020770u);
  /* 10019017 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019019 jb 0x10019032 */
  if (C.cf) goto L_10019032;
  /* 1001901b cmp eax, 0x100209d0 */
  { uint32_t _a=(EAX),_b=(0x100209d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019020 ja 0x10019032 */
  if ((!C.cf&&!C.zf)) goto L_10019032;
  /* 10019022 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019024 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10019027 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001902a push eax */
  push32((uint32_t)(EAX));
  /* 1001902b call 0x1001a093 */
  push32(0x10019030u); f_1001a093();
  /* 10019030 pop ecx */
  ECX = (pop32());
  /* 10019031 ret  */
  ESPCHK(0x1001900eu, _esp0);
  ESP += 4; return;
L_10019032:;
  /* 10019032 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019035 push eax */
  push32((uint32_t)(EAX));
  /* 10019036 call dword ptr [0x1001e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e00c))), 0x1001903cu);
  /* 1001903c ret  */
  ESPCHK(0x1001900eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000903d @ 0x1001903d (35 bytes, 13 insns) */
void f_1001903d(void) {
  FTRACE(0x1001903du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001903d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019041 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019044 jge 0x10019051 */
  if ((C.sf==C.of)) goto L_10019051;
  /* 10019046 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019049 push eax */
  push32((uint32_t)(EAX));
  /* 1001904a call 0x1001a093 */
  push32(0x1001904fu); f_1001a093();
  /* 1001904f pop ecx */
  ECX = (pop32());
  /* 10019050 ret  */
  ESPCHK(0x1001903du, _esp0);
  ESP += 4; return;
L_10019051:;
  /* 10019051 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019055 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019058 push eax */
  push32((uint32_t)(EAX));
  /* 10019059 call dword ptr [0x1001e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e00c))), 0x1001905fu);
  /* 1001905f ret  */
  ESPCHK(0x1001903du, _esp0);
  ESP += 4; return;
}

/* FUN_10009060 @ 0x10019060 (47 bytes, 17 insns) */
void f_10019060(void) {
  FTRACE(0x10019060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019060 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019064 mov ecx, 0x10020770 */
  ECX = (0x10020770u);
  /* 10019069 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001906b jb 0x10019084 */
  if (C.cf) goto L_10019084;
  /* 1001906d cmp eax, 0x100209d0 */
  { uint32_t _a=(EAX),_b=(0x100209d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019072 ja 0x10019084 */
  if ((!C.cf&&!C.zf)) goto L_10019084;
  /* 10019074 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019076 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10019079 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001907c push eax */
  push32((uint32_t)(EAX));
  /* 1001907d call 0x1001a0f4 */
  push32(0x10019082u); f_1001a0f4();
  /* 10019082 pop ecx */
  ECX = (pop32());
  /* 10019083 ret  */
  ESPCHK(0x10019060u, _esp0);
  ESP += 4; return;
L_10019084:;
  /* 10019084 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019087 push eax */
  push32((uint32_t)(EAX));
  /* 10019088 call dword ptr [0x1001e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e008))), 0x1001908eu);
  /* 1001908e ret  */
  ESPCHK(0x10019060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000908f @ 0x1001908f (35 bytes, 13 insns) */
void f_1001908f(void) {
  FTRACE(0x1001908fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001908f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019093 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019096 jge 0x100190a3 */
  if ((C.sf==C.of)) goto L_100190a3;
  /* 10019098 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001909b push eax */
  push32((uint32_t)(EAX));
  /* 1001909c call 0x1001a0f4 */
  push32(0x100190a1u); f_1001a0f4();
  /* 100190a1 pop ecx */
  ECX = (pop32());
  /* 100190a2 ret  */
  ESPCHK(0x1001908fu, _esp0);
  ESP += 4; return;
L_100190a3:;
  /* 100190a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100190a7 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100190aa push eax */
  push32((uint32_t)(EAX));
  /* 100190ab call dword ptr [0x1001e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e008))), 0x100190b1u);
  /* 100190b1 ret  */
  ESPCHK(0x1001908fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x100190c0 (123 bytes, 44 insns) */
void f_100190c0(void) {
  FTRACE(0x100190c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100190c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100190c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100190ca je 0x100190e0 */
  if (C.zf) goto L_100190e0;
L_100190cc:;
  /* 100190cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100190ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100190cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100190d1 je 0x10019113 */
  if (C.zf) goto L_10019113;
  /* 100190d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100190d9 jne 0x100190cc */
  if (!C.zf) goto L_100190cc;
  /* 100190db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100190e0:;
  /* 100190e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100190e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100190e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100190e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100190ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100190ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100190f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100190f6 je 0x100190e0 */
  if (C.zf) goto L_100190e0;
  /* 100190f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100190fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100190fd je 0x10019131 */
  if (C.zf) goto L_10019131;
  /* 100190ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10019101 je 0x10019127 */
  if (C.zf) goto L_10019127;
  /* 10019103 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10019108 je 0x1001911d */
  if (C.zf) goto L_1001911d;
  /* 1001910a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1001910f je 0x10019113 */
  if (C.zf) goto L_10019113;
  /* 10019111 jmp 0x100190e0 */
  goto L_100190e0;
L_10019113:;
  /* 10019113 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10019116 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001911a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001911c ret  */
  ESPCHK(0x100190c0u, _esp0);
  ESP += 4; return;
L_1001911d:;
  /* 1001911d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10019120 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019124 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019126 ret  */
  ESPCHK(0x100190c0u, _esp0);
  ESP += 4; return;
L_10019127:;
  /* 10019127 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1001912a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001912e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019130 ret  */
  ESPCHK(0x100190c0u, _esp0);
  ESP += 4; return;
L_10019131:;
  /* 10019131 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10019134 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019138 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001913a ret  */
  ESPCHK(0x100190c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000913b @ 0x1001913b (89 bytes, 39 insns) */
void f_1001913b(void) {
  FTRACE(0x1001913bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001913b push ebp */
  push32((uint32_t)(EBP));
  /* 1001913c mov ebp, esp */
  EBP = (ESP);
  /* 1001913e push ebx */
  push32((uint32_t)(EBX));
  /* 1001913f push esi */
  push32((uint32_t)(ESI));
  /* 10019140 mov esi, 0x100269d4 */
  ESI = (0x100269d4u);
  /* 10019145 push edi */
  push32((uint32_t)(EDI));
  /* 10019146 push esi */
  push32((uint32_t)(ESI));
  /* 10019147 call dword ptr [0x1001e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e090))), 0x1001914du);
  /* 1001914d mov edi, dword ptr [0x1001e08c] */
  EDI = (r32((uint32_t)(0x1001e08c)));
  /* 10019153 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10019155 cmp dword ptr [0x100269d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100269d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001915b je 0x1001916b */
  if (C.zf) goto L_1001916b;
  /* 1001915d push esi */
  push32((uint32_t)(ESI));
  /* 1001915e call edi */
  call_ind((uint32_t)(EDI), 0x10019160u);
  /* 10019160 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10019162 call 0x1001a093 */
  push32(0x10019167u); f_1001a093();
  /* 10019167 pop ecx */
  ECX = (pop32());
  /* 10019168 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001916a pop ebx */
  EBX = (pop32());
L_1001916b:;
  /* 1001916b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001916e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10019171 call 0x10019194 */
  push32(0x10019176u); f_10019194();
  /* 10019176 pop ecx */
  ECX = (pop32());
  /* 10019177 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1001917a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001917c pop ecx */
  ECX = (pop32());
  /* 1001917d je 0x10019189 */
  if (C.zf) goto L_10019189;
  /* 1001917f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10019181 call 0x1001a0f4 */
  push32(0x10019186u); f_1001a0f4();
  /* 10019186 pop ecx */
  ECX = (pop32());
  /* 10019187 jmp 0x1001918c */
  goto L_1001918c;
L_10019189:;
  /* 10019189 push esi */
  push32((uint32_t)(ESI));
  /* 1001918a call edi */
  call_ind((uint32_t)(EDI), 0x1001918cu);
L_1001918c:;
  /* 1001918c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001918f pop edi */
  EDI = (pop32());
  /* 10019190 pop esi */
  ESI = (pop32());
  /* 10019191 pop ebx */
  EBX = (pop32());
  /* 10019192 pop ebp */
  EBP = (pop32());
  /* 10019193 ret  */
  ESPCHK(0x1001913bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009194 @ 0x10019194 (105 bytes, 38 insns) */
void f_10019194(void) {
  FTRACE(0x10019194u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019194 push ebp */
  push32((uint32_t)(EBP));
  /* 10019195 mov ebp, esp */
  EBP = (ESP);
  /* 10019197 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001919a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001919c jne 0x100191a0 */
  if (!C.zf) goto L_100191a0;
  /* 1001919e pop ebp */
  EBP = (pop32());
  /* 1001919f ret  */
  ESPCHK(0x10019194u, _esp0);
  ESP += 4; return;
L_100191a0:;
  /* 100191a0 cmp dword ptr [0x10026858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10026858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100191a7 jne 0x100191bb */
  if (!C.zf) goto L_100191bb;
  /* 100191a9 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 100191ad cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100191b2 ja 0x100191ed */
  if ((!C.cf&&!C.zf)) goto L_100191ed;
  /* 100191b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100191b6 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100191b8 pop eax */
  EAX = (pop32());
  /* 100191b9 pop ebp */
  EBP = (pop32());
  /* 100191ba ret  */
  ESPCHK(0x10019194u, _esp0);
  ESP += 4; return;
L_100191bb:;
  /* 100191bb lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 100191be and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 100191c2 push ecx */
  push32((uint32_t)(ECX));
  /* 100191c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100191c5 push dword ptr [0x10020c00] */
  push32((uint32_t)(r32((uint32_t)(0x10020c00))));
  /* 100191cb push eax */
  push32((uint32_t)(EAX));
  /* 100191cc lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100191cf push 1 */
  push32((uint32_t)(0x1u));
  /* 100191d1 push eax */
  push32((uint32_t)(EAX));
  /* 100191d2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100191d7 push dword ptr [0x10026868] */
  push32((uint32_t)(r32((uint32_t)(0x10026868))));
  /* 100191dd call dword ptr [0x1001e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e060))), 0x100191e3u);
  /* 100191e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100191e5 je 0x100191ed */
  if (C.zf) goto L_100191ed;
  /* 100191e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100191eb je 0x100191fb */
  if (C.zf) goto L_100191fb;
L_100191ed:;
  /* 100191ed call 0x1001bff1 */
  push32(0x100191f2u); f_1001bff1();
  /* 100191f2 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 100191f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100191fb:;
  /* 100191fb pop ebp */
  EBP = (pop32());
  /* 100191fc ret  */
  ESPCHK(0x10019194u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10019200 (104 bytes, 43 insns) */
void f_10019200(void) {
  FTRACE(0x10019200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019200 push ebx */
  push32((uint32_t)(EBX));
  /* 10019201 push esi */
  push32((uint32_t)(ESI));
  /* 10019202 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10019206 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019208 jne 0x10019222 */
  if (!C.zf) goto L_10019222;
  /* 1001920a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1001920e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10019212 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10019214 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019216 mov ebx, eax */
  EBX = (EAX);
  /* 10019218 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1001921c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001921e mov edx, ebx */
  EDX = (EBX);
  /* 10019220 jmp 0x10019263 */
  goto L_10019263;
L_10019222:;
  /* 10019222 mov ecx, eax */
  ECX = (EAX);
  /* 10019224 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10019228 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001922c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10019230:;
  /* 10019230 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10019232 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10019234 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10019236 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10019238 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001923a jne 0x10019230 */
  if (!C.zf) goto L_10019230;
  /* 1001923c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001923e mov esi, eax */
  ESI = (EAX);
  /* 10019240 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10019244 mov ecx, eax */
  ECX = (EAX);
  /* 10019246 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1001924a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1001924c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001924e jb 0x1001925e */
  if (C.cf) goto L_1001925e;
  /* 10019250 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019254 ja 0x1001925e */
  if ((!C.cf&&!C.zf)) goto L_1001925e;
  /* 10019256 jb 0x1001925f */
  if (C.cf) goto L_1001925f;
  /* 10019258 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001925c jbe 0x1001925f */
  if ((C.cf||C.zf)) goto L_1001925f;
L_1001925e:;
  /* 1001925e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1001925f:;
  /* 1001925f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10019261 mov eax, esi */
  EAX = (ESI);
L_10019263:;
  /* 10019263 pop esi */
  ESI = (pop32());
  /* 10019264 pop ebx */
  EBX = (pop32());
  /* 10019265 ret 0x10 */
  ESPCHK(0x10019200u, _esp0);
  ESP += 20; return;
}

