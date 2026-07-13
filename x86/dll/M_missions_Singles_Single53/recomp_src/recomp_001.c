#include "recomp.h"

/* FUN_1000504c @ 0x118e504c (163 bytes, 53 insns) */
void f_118e504c(void) {
  FTRACE(0x118e504cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e504c push edi */
  push32((uint32_t)(EDI));
  /* 118e504d call 0x118e50f1 */
  push32(0x118e5052u); f_118e50f1();
  /* 118e5052 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e5054 pop edi */
  EDI = (pop32());
  /* 118e5055 cmp dword ptr [0x11909464], edi */
  { uint32_t _a=(r32((uint32_t)(0x11909464))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e505b jne 0x118e506e */
  if (!C.zf) goto L_118e506e;
  /* 118e505d push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118e5061 call dword ptr [0x118ef0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0f4))), 0x118e5067u);
  /* 118e5067 push eax */
  push32((uint32_t)(EAX));
  /* 118e5068 call dword ptr [0x118ef0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0f0))), 0x118e506eu);
L_118e506e:;
  /* 118e506e cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5073 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5074 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e5078 mov dword ptr [0x11909460], edi */
  w32((uint32_t)(0x11909460), (EDI));
  /* 118e507e mov byte ptr [0x1190945c], bl */
  w8((uint32_t)(0x1190945c), (BL));
  /* 118e5084 jne 0x118e50c2 */
  if (!C.zf) goto L_118e50c2;
  /* 118e5086 mov eax, dword ptr [0x1190ab50] */
  EAX = (r32((uint32_t)(0x1190ab50)));
  /* 118e508b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e508d je 0x118e50b1 */
  if (C.zf) goto L_118e50b1;
  /* 118e508f mov ecx, dword ptr [0x1190ab4c] */
  ECX = (r32((uint32_t)(0x1190ab4c)));
  /* 118e5095 push esi */
  push32((uint32_t)(ESI));
  /* 118e5096 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 118e5099 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e509b jb 0x118e50b0 */
  if (C.cf) goto L_118e50b0;
L_118e509d:;
  /* 118e509d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e509f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e50a1 je 0x118e50a5 */
  if (C.zf) goto L_118e50a5;
  /* 118e50a3 call eax */
  call_ind((uint32_t)(EAX), 0x118e50a5u);
L_118e50a5:;
  /* 118e50a5 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e50a8 cmp esi, dword ptr [0x1190ab50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190ab50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e50ae jae 0x118e509d */
  if (!C.cf) goto L_118e509d;
L_118e50b0:;
  /* 118e50b0 pop esi */
  ESI = (pop32());
L_118e50b1:;
  /* 118e50b1 push 0x118f106c */
  push32((uint32_t)(0x118f106cu));
  /* 118e50b6 push 0x118f1064 */
  push32((uint32_t)(0x118f1064u));
  /* 118e50bb call 0x118e5103 */
  push32(0x118e50c0u); f_118e5103();
  /* 118e50c0 pop ecx */
  ECX = (pop32());
  /* 118e50c1 pop ecx */
  ECX = (pop32());
L_118e50c2:;
  /* 118e50c2 push 0x118f1078 */
  push32((uint32_t)(0x118f1078u));
  /* 118e50c7 push 0x118f1070 */
  push32((uint32_t)(0x118f1070u));
  /* 118e50cc call 0x118e5103 */
  push32(0x118e50d1u); f_118e5103();
  /* 118e50d1 pop ecx */
  ECX = (pop32());
  /* 118e50d2 pop ecx */
  ECX = (pop32());
  /* 118e50d3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e50d5 pop ebx */
  EBX = (pop32());
  /* 118e50d6 je 0x118e50df */
  if (C.zf) goto L_118e50df;
  /* 118e50d8 call 0x118e50fa */
  push32(0x118e50ddu); f_118e50fa();
  /* 118e50dd pop edi */
  EDI = (pop32());
  /* 118e50de ret  */
  ESPCHK(0x118e504cu, _esp0);
  ESP += 4; return;
L_118e50df:;
  /* 118e50df push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118e50e3 mov dword ptr [0x11909464], edi */
  w32((uint32_t)(0x11909464), (EDI));
  /* 118e50e9 call dword ptr [0x118ef000] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef000))), 0x118e50efu);
  /* 118e50ef pop edi */
  EDI = (pop32());
  /* 118e50f0 ret  */
  ESPCHK(0x118e504cu, _esp0);
  ESP += 4; return;
}

/* FUN_100050f1 @ 0x118e50f1 (9 bytes, 4 insns) */
void f_118e50f1(void) {
  FTRACE(0x118e50f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e50f1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 118e50f3 call 0x118e7509 */
  push32(0x118e50f8u); f_118e7509();
  /* 118e50f8 pop ecx */
  ECX = (pop32());
  /* 118e50f9 ret  */
  ESPCHK(0x118e50f1u, _esp0);
  ESP += 4; return;
}

/* FUN_100050fa @ 0x118e50fa (9 bytes, 4 insns) */
void f_118e50fa(void) {
  FTRACE(0x118e50fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e50fa push 0xd */
  push32((uint32_t)(0xdu));
  /* 118e50fc call 0x118e756a */
  push32(0x118e5101u); f_118e756a();
  /* 118e5101 pop ecx */
  ECX = (pop32());
  /* 118e5102 ret  */
  ESPCHK(0x118e50fau, _esp0);
  ESP += 4; return;
}

/* FUN_10005103 @ 0x118e5103 (26 bytes, 12 insns) */
void f_118e5103(void) {
  FTRACE(0x118e5103u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5103 push esi */
  push32((uint32_t)(ESI));
  /* 118e5104 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_118e5108:;
  /* 118e5108 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e510c jae 0x118e511b */
  if (!C.cf) goto L_118e511b;
  /* 118e510e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e5110 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5112 je 0x118e5116 */
  if (C.zf) goto L_118e5116;
  /* 118e5114 call eax */
  call_ind((uint32_t)(EAX), 0x118e5116u);
L_118e5116:;
  /* 118e5116 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5119 jmp 0x118e5108 */
  goto L_118e5108;
L_118e511b:;
  /* 118e511b pop esi */
  ESI = (pop32());
  /* 118e511c ret  */
  ESPCHK(0x118e5103u, _esp0);
  ESP += 4; return;
}

/* FUN_1000511d @ 0x118e511d (781 bytes, 277 insns) */
void f_118e511d(void) {
  FTRACE(0x118e511du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e511d push ebp */
  push32((uint32_t)(EBP));
  /* 118e511e mov ebp, esp */
  EBP = (ESP);
  /* 118e5120 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e5122 push 0x118ef268 */
  push32((uint32_t)(0x118ef268u));
  /* 118e5127 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118e512c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118e5132 push eax */
  push32((uint32_t)(EAX));
  /* 118e5133 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118e513a sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e513d push ebx */
  push32((uint32_t)(EBX));
  /* 118e513e push esi */
  push32((uint32_t)(ESI));
  /* 118e513f push edi */
  push32((uint32_t)(EDI));
  /* 118e5140 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e5143 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e5145 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5147 jne 0x118e5157 */
  if (!C.zf) goto L_118e5157;
  /* 118e5149 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e514c call 0x118e553a */
  push32(0x118e5151u); f_118e553a();
  /* 118e5151 pop ecx */
  ECX = (pop32());
  /* 118e5152 jmp 0x118e543d */
  jmp_ind(0x118e543du); return;
L_118e5157:;
  /* 118e5157 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e515a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e515c jne 0x118e516a */
  if (!C.zf) goto L_118e516a;
  /* 118e515e push ebx */
  push32((uint32_t)(EBX));
  /* 118e515f call 0x118e8ae5 */
  push32(0x118e5164u); f_118e8ae5();
  /* 118e5164 pop ecx */
  ECX = (pop32());
  /* 118e5165 jmp 0x118e543b */
  jmp_ind(0x118e543bu); return;
L_118e516a:;
  /* 118e516a mov eax, dword ptr [0x1190aa24] */
  EAX = (r32((uint32_t)(0x1190aa24)));
  /* 118e516f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5172 jne 0x118e52b1 */
  if (!C.zf) goto L_118e52b1;
L_118e5178:;
  /* 118e5178 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 118e517b cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e517e ja 0x118e5275 */
  if ((!C.cf&&!C.zf)) goto L_118e5275;
  /* 118e5184 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e5186 call 0x118e7509 */
  push32(0x118e518bu); f_118e7509();
  /* 118e518b pop ecx */
  ECX = (pop32());
  /* 118e518c mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118e518f push ebx */
  push32((uint32_t)(EBX));
  /* 118e5190 call 0x118e75c7 */
  push32(0x118e5195u); f_118e75c7();
  /* 118e5195 pop ecx */
  ECX = (pop32());
  /* 118e5196 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118e5199 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e519b je 0x118e5245 */
  if (C.zf) goto L_118e5245;
  /* 118e51a1 cmp esi, dword ptr [0x1190aa1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190aa1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e51a7 ja 0x118e51f5 */
  if ((!C.cf&&!C.zf)) goto L_118e51f5;
  /* 118e51a9 push esi */
  push32((uint32_t)(ESI));
  /* 118e51aa push ebx */
  push32((uint32_t)(EBX));
  /* 118e51ab push eax */
  push32((uint32_t)(EAX));
  /* 118e51ac call 0x118e7dd0 */
  push32(0x118e51b1u); f_118e7dd0();
  /* 118e51b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e51b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e51b6 je 0x118e51bd */
  if (C.zf) goto L_118e51bd;
  /* 118e51b8 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 118e51bb jmp 0x118e51f5 */
  goto L_118e51f5;
L_118e51bd:;
  /* 118e51bd push esi */
  push32((uint32_t)(ESI));
  /* 118e51be call 0x118e791b */
  push32(0x118e51c3u); f_118e791b();
  /* 118e51c3 pop ecx */
  ECX = (pop32());
  /* 118e51c4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118e51c7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e51c9 je 0x118e51f5 */
  if (C.zf) goto L_118e51f5;
  /* 118e51cb mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 118e51ce dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e51cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118e51d2 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e51d4 jb 0x118e51d8 */
  if (C.cf) goto L_118e51d8;
  /* 118e51d6 mov eax, esi */
  EAX = (ESI);
L_118e51d8:;
  /* 118e51d8 push eax */
  push32((uint32_t)(EAX));
  /* 118e51d9 push ebx */
  push32((uint32_t)(EBX));
  /* 118e51da push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118e51dd call 0x118e87b0 */
  push32(0x118e51e2u); f_118e87b0();
  /* 118e51e2 push ebx */
  push32((uint32_t)(EBX));
  /* 118e51e3 call 0x118e75c7 */
  push32(0x118e51e8u); f_118e75c7();
  /* 118e51e8 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118e51eb push ebx */
  push32((uint32_t)(EBX));
  /* 118e51ec push eax */
  push32((uint32_t)(EAX));
  /* 118e51ed call 0x118e75f2 */
  push32(0x118e51f2u); f_118e75f2();
  /* 118e51f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e51f5:;
  /* 118e51f5 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e51f8 jne 0x118e5245 */
  if (!C.zf) goto L_118e5245;
  /* 118e51fa cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e51fc jne 0x118e5204 */
  if (!C.zf) goto L_118e5204;
  /* 118e51fe push 1 */
  push32((uint32_t)(0x1u));
  /* 118e5200 pop esi */
  ESI = (pop32());
  /* 118e5201 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_118e5204:;
  /* 118e5204 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5207 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e520a mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118e520d push esi */
  push32((uint32_t)(ESI));
  /* 118e520e push edi */
  push32((uint32_t)(EDI));
  /* 118e520f push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e5215 call dword ptr [0x118ef0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0fc))), 0x118e521bu);
  /* 118e521b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118e521e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5220 je 0x118e5245 */
  if (C.zf) goto L_118e5245;
  /* 118e5222 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 118e5225 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e5226 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118e5229 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e522b jb 0x118e522f */
  if (C.cf) goto L_118e522f;
  /* 118e522d mov eax, esi */
  EAX = (ESI);
L_118e522f:;
  /* 118e522f push eax */
  push32((uint32_t)(EAX));
  /* 118e5230 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5231 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118e5234 call 0x118e87b0 */
  push32(0x118e5239u); f_118e87b0();
  /* 118e5239 push ebx */
  push32((uint32_t)(EBX));
  /* 118e523a push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 118e523d call 0x118e75f2 */
  push32(0x118e5242u); f_118e75f2();
  /* 118e5242 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e5245:;
  /* 118e5245 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e5249 call 0x118e52a8 */
  push32(0x118e524eu); f_118e52a8();
  /* 118e524e cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5251 jne 0x118e5275 */
  if (!C.zf) goto L_118e5275;
  /* 118e5253 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5255 jne 0x118e525a */
  if (!C.zf) goto L_118e525a;
  /* 118e5257 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e5259 pop esi */
  ESI = (pop32());
L_118e525a:;
  /* 118e525a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e525d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e5260 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118e5263 push esi */
  push32((uint32_t)(ESI));
  /* 118e5264 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5265 push edi */
  push32((uint32_t)(EDI));
  /* 118e5266 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e526c call dword ptr [0x118ef0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0f8))), 0x118e5272u);
  /* 118e5272 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_118e5275:;
  /* 118e5275 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118e5278 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e527a jne 0x118e543d */
  if (!C.zf) { jmp_ind(0x118e543du); return; }
  /* 118e5280 cmp dword ptr [0x119095e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x119095e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5286 je 0x118e543d */
  if (C.zf) { jmp_ind(0x118e543du); return; }
  /* 118e528c push esi */
  push32((uint32_t)(ESI));
  /* 118e528d call 0x118e8793 */
  push32(0x118e5292u); f_118e8793();
  /* 118e5292 pop ecx */
  ECX = (pop32());
  /* 118e5293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5295 jne 0x118e5178 */
  if (!C.zf) goto L_118e5178;
  /* 118e529b jmp 0x118e543b */
  jmp_ind(0x118e543bu); return;
  /* 118e52a0 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e52a3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e52a6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e52a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e52aa call 0x118e756a */
  push32(0x118e52afu); f_118e756a();
  /* 118e52af pop ecx */
  ECX = (pop32());
  /* 118e52b0 ret  */
  ESPCHK(0x118e511du, _esp0);
  ESP += 4; return;
L_118e52b1:;
  /* 118e52b1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e52b4 jne 0x118e5401 */
  if (!C.zf) goto L_118e5401;
  /* 118e52ba cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e52bd ja 0x118e52d1 */
  if ((!C.cf&&!C.zf)) goto L_118e52d1;
  /* 118e52bf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e52c1 jbe 0x118e52cb */
  if ((C.cf||C.zf)) goto L_118e52cb;
  /* 118e52c3 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e52c6 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e52c9 jmp 0x118e52ce */
  goto L_118e52ce;
L_118e52cb:;
  /* 118e52cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e52cd pop esi */
  ESI = (pop32());
L_118e52ce:;
  /* 118e52ce mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_118e52d1:;
  /* 118e52d1 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 118e52d4 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e52d7 ja 0x118e53d0 */
  if ((!C.cf&&!C.zf)) goto L_118e53d0;
  /* 118e52dd push 9 */
  push32((uint32_t)(0x9u));
  /* 118e52df call 0x118e7509 */
  push32(0x118e52e4u); f_118e7509();
  /* 118e52e4 pop ecx */
  ECX = (pop32());
  /* 118e52e5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118e52ec lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 118e52ef push eax */
  push32((uint32_t)(EAX));
  /* 118e52f0 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 118e52f3 push eax */
  push32((uint32_t)(EAX));
  /* 118e52f4 push ebx */
  push32((uint32_t)(EBX));
  /* 118e52f5 call 0x118e8322 */
  push32(0x118e52fau); f_118e8322();
  /* 118e52fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e52fd mov edi, eax */
  EDI = (EAX);
  /* 118e52ff mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 118e5302 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e5304 je 0x118e53b4 */
  if (C.zf) goto L_118e53b4;
  /* 118e530a cmp esi, dword ptr [0x118f3b84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118f3b84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5310 jae 0x118e536e */
  if (!C.cf) goto L_118e536e;
  /* 118e5312 mov ebx, esi */
  EBX = (ESI);
  /* 118e5314 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 118e5317 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5318 push edi */
  push32((uint32_t)(EDI));
  /* 118e5319 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 118e531c push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 118e531f call 0x118e86ea */
  push32(0x118e5324u); f_118e86ea();
  /* 118e5324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5329 je 0x118e5333 */
  if (C.zf) goto L_118e5333;
  /* 118e532b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e532e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118e5331 jmp 0x118e536b */
  goto L_118e536b;
L_118e5333:;
  /* 118e5333 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5334 call 0x118e83be */
  push32(0x118e5339u); f_118e83be();
  /* 118e5339 pop ecx */
  ECX = (pop32());
  /* 118e533a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118e533d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e533f je 0x118e536b */
  if (C.zf) goto L_118e536b;
  /* 118e5341 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118e5344 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118e5347 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 118e534a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e534c jb 0x118e5350 */
  if (C.cf) goto L_118e5350;
  /* 118e534e mov eax, esi */
  EAX = (ESI);
L_118e5350:;
  /* 118e5350 push eax */
  push32((uint32_t)(EAX));
  /* 118e5351 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e5354 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118e5357 call 0x118e87b0 */
  push32(0x118e535cu); f_118e87b0();
  /* 118e535c push edi */
  push32((uint32_t)(EDI));
  /* 118e535d push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 118e5360 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 118e5363 call 0x118e8379 */
  push32(0x118e5368u); f_118e8379();
  /* 118e5368 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e536b:;
  /* 118e536b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118e536e:;
  /* 118e536e cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5372 jne 0x118e53c7 */
  if (!C.zf) goto L_118e53c7;
  /* 118e5374 push esi */
  push32((uint32_t)(ESI));
  /* 118e5375 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e5377 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e537d call dword ptr [0x118ef0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0fc))), 0x118e5383u);
  /* 118e5383 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118e5386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5388 je 0x118e53c7 */
  if (C.zf) goto L_118e53c7;
  /* 118e538a movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118e538d shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118e5390 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 118e5393 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5395 jb 0x118e5399 */
  if (C.cf) goto L_118e5399;
  /* 118e5397 mov eax, esi */
  EAX = (ESI);
L_118e5399:;
  /* 118e5399 push eax */
  push32((uint32_t)(EAX));
  /* 118e539a push ebx */
  push32((uint32_t)(EBX));
  /* 118e539b push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118e539e call 0x118e87b0 */
  push32(0x118e53a3u); f_118e87b0();
  /* 118e53a3 push edi */
  push32((uint32_t)(EDI));
  /* 118e53a4 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 118e53a7 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 118e53aa call 0x118e8379 */
  push32(0x118e53afu); f_118e8379();
  /* 118e53af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e53b2 jmp 0x118e53c7 */
  goto L_118e53c7;
L_118e53b4:;
  /* 118e53b4 push esi */
  push32((uint32_t)(ESI));
  /* 118e53b5 push ebx */
  push32((uint32_t)(EBX));
  /* 118e53b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e53b8 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e53be call dword ptr [0x118ef0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0f8))), 0x118e53c4u);
  /* 118e53c4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_118e53c7:;
  /* 118e53c7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e53cb call 0x118e53f6 */
  push32(0x118e53d0u); f_118e53f6();
L_118e53d0:;
  /* 118e53d0 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118e53d3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e53d5 jne 0x118e543d */
  if (!C.zf) { jmp_ind(0x118e543du); return; }
  /* 118e53d7 cmp dword ptr [0x119095e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x119095e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e53dd je 0x118e543d */
  if (C.zf) { jmp_ind(0x118e543du); return; }
  /* 118e53df push esi */
  push32((uint32_t)(ESI));
  /* 118e53e0 call 0x118e8793 */
  push32(0x118e53e5u); f_118e8793();
  /* 118e53e5 pop ecx */
  ECX = (pop32());
  /* 118e53e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e53e8 jne 0x118e52d1 */
  if (!C.zf) goto L_118e52d1;
  /* 118e53ee jmp 0x118e543b */
  jmp_ind(0x118e543bu); return;
  /* 118e53f0 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e53f3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e53f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e53f8 call 0x118e756a */
  push32(0x118e53fdu); f_118e756a();
  /* 118e53fd pop ecx */
  ECX = (pop32());
  /* 118e53fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e5400 ret  */
  ESPCHK(0x118e511du, _esp0);
  ESP += 4; return;
L_118e5401:;
  /* 118e5401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e5403 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5406 ja 0x118e5424 */
  if ((!C.cf&&!C.zf)) goto L_118e5424;
  /* 118e5408 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e540a jne 0x118e540f */
  if (!C.zf) goto L_118e540f;
  /* 118e540c push 1 */
  push32((uint32_t)(0x1u));
  /* 118e540e pop esi */
  ESI = (pop32());
L_118e540f:;
  /* 118e540f add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5412 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e5415 push esi */
  push32((uint32_t)(ESI));
  /* 118e5416 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5417 push edi */
  push32((uint32_t)(EDI));
  /* 118e5418 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e541e call dword ptr [0x118ef0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0f8))), 0x118e5424u);
L_118e5424:;
  /* 118e5424 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5426 jne 0x118e543d */
  if (!C.zf) { jmp_ind(0x118e543du); return; }
}

/* FUN_100052a8 @ 0x118e52a8 (9 bytes, 4 insns) */
void f_118e52a8(void) {
  FTRACE(0x118e52a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e52a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e52aa call 0x118e756a */
  push32(0x118e52afu); f_118e756a();
  /* 118e52af pop ecx */
  ECX = (pop32());
  /* 118e52b0 ret  */
  ESPCHK(0x118e52a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f6 @ 0x118e53f6 (11 bytes, 5 insns) */
void f_118e53f6(void) {
  FTRACE(0x118e53f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e53f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e53f8 call 0x118e756a */
  push32(0x118e53fdu); f_118e756a();
  /* 118e53fd pop ecx */
  ECX = (pop32());
  /* 118e53fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e5400 ret  */
  ESPCHK(0x118e53f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000544c @ 0x118e544c (214 bytes, 72 insns) */
void f_118e544c(void) {
  FTRACE(0x118e544cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e544c push ebp */
  push32((uint32_t)(EBP));
  /* 118e544d mov ebp, esp */
  EBP = (ESP);
  /* 118e544f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e5451 push 0x118ef280 */
  push32((uint32_t)(0x118ef280u));
  /* 118e5456 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118e545b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118e5461 push eax */
  push32((uint32_t)(EAX));
  /* 118e5462 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118e5469 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e546c push ebx */
  push32((uint32_t)(EBX));
  /* 118e546d push esi */
  push32((uint32_t)(ESI));
  /* 118e546e push edi */
  push32((uint32_t)(EDI));
  /* 118e546f mov eax, dword ptr [0x1190aa24] */
  EAX = (r32((uint32_t)(0x1190aa24)));
  /* 118e5474 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5477 jne 0x118e54bf */
  if (!C.zf) goto L_118e54bf;
  /* 118e5479 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e547b call 0x118e7509 */
  push32(0x118e5480u); f_118e7509();
  /* 118e5480 pop ecx */
  ECX = (pop32());
  /* 118e5481 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e5485 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e5488 push esi */
  push32((uint32_t)(ESI));
  /* 118e5489 call 0x118e75c7 */
  push32(0x118e548eu); f_118e75c7();
  /* 118e548e pop ecx */
  ECX = (pop32());
  /* 118e548f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118e5492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5494 je 0x118e54a1 */
  if (C.zf) goto L_118e54a1;
  /* 118e5496 mov esi, dword ptr [esi - 4] */
  ESI = (r32((uint32_t)(ESI + -0x4)));
  /* 118e5499 sub esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e549c mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 118e549f jmp 0x118e54a4 */
  goto L_118e54a4;
L_118e54a1:;
  /* 118e54a1 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_118e54a4:;
  /* 118e54a4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e54a8 call 0x118e54b6 */
  push32(0x118e54adu); f_118e54b6();
  /* 118e54ad cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e54b1 jmp 0x118e5508 */
  goto L_118e5508;
  /* 118e54b3 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 118e54b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e54b8 call 0x118e756a */
  push32(0x118e54bdu); f_118e756a();
  /* 118e54bd pop ecx */
  ECX = (pop32());
  /* 118e54be ret  */
  ESPCHK(0x118e544cu, _esp0);
  ESP += 4; return;
L_118e54bf:;
  /* 118e54bf cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e54c2 jne 0x118e550a */
  if (!C.zf) goto L_118e550a;
  /* 118e54c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e54c6 call 0x118e7509 */
  push32(0x118e54cbu); f_118e7509();
  /* 118e54cb pop ecx */
  ECX = (pop32());
  /* 118e54cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118e54d3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 118e54d6 push eax */
  push32((uint32_t)(EAX));
  /* 118e54d7 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 118e54da push eax */
  push32((uint32_t)(EAX));
  /* 118e54db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e54de call 0x118e8322 */
  push32(0x118e54e3u); f_118e8322();
  /* 118e54e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e54e6 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118e54e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e54eb je 0x118e54f8 */
  if (C.zf) goto L_118e54f8;
  /* 118e54ed movzx esi, byte ptr [eax] */
  ESI = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 118e54f0 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118e54f3 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 118e54f6 jmp 0x118e54fb */
  goto L_118e54fb;
L_118e54f8:;
  /* 118e54f8 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_118e54fb:;
  /* 118e54fb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e54ff call 0x118e5531 */
  push32(0x118e5504u); f_118e5531();
  /* 118e5504 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e5508:;
  /* 118e5508 jne 0x118e551d */
  if (!C.zf) goto L_118e551d;
L_118e550a:;
  /* 118e550a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e550d push 0 */
  push32((uint32_t)(0x0u));
  /* 118e550f push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e5515 call dword ptr [0x118ef100] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef100))), 0x118e551bu);
  /* 118e551b mov esi, eax */
  ESI = (EAX);
L_118e551d:;
  /* 118e551d mov eax, esi */
  EAX = (ESI);
  /* 118e551f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
}

/* FUN_100054b6 @ 0x118e54b6 (9 bytes, 4 insns) */
void f_118e54b6(void) {
  FTRACE(0x118e54b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e54b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e54b8 call 0x118e756a */
  push32(0x118e54bdu); f_118e756a();
  /* 118e54bd pop ecx */
  ECX = (pop32());
  /* 118e54be ret  */
  ESPCHK(0x118e54b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005531 @ 0x118e5531 (9 bytes, 4 insns) */
void f_118e5531(void) {
  FTRACE(0x118e5531u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5531 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e5533 call 0x118e756a */
  push32(0x118e5538u); f_118e756a();
  /* 118e5538 pop ecx */
  ECX = (pop32());
  /* 118e5539 ret  */
  ESPCHK(0x118e5531u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x118e553a (18 bytes, 6 insns) */
void f_118e553a(void) {
  FTRACE(0x118e553au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e553a push dword ptr [0x119095e0] */
  push32((uint32_t)(r32((uint32_t)(0x119095e0))));
  /* 118e5540 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118e5544 call 0x118e554c */
  push32(0x118e5549u); f_118e554c();
  /* 118e5549 pop ecx */
  ECX = (pop32());
  /* 118e554a pop ecx */
  ECX = (pop32());
  /* 118e554b ret  */
  ESPCHK(0x118e553au, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x118e554c (44 bytes, 16 insns) */
void f_118e554c(void) {
  FTRACE(0x118e554cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e554c cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5551 ja 0x118e5575 */
  if ((!C.cf&&!C.zf)) goto L_118e5575;
L_118e5553:;
  /* 118e5553 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118e5557 call 0x118e5578 */
  push32(0x118e555cu); f_118e5578();
  /* 118e555c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e555e pop ecx */
  ECX = (pop32());
  /* 118e555f jne 0x118e5577 */
  if (!C.zf) goto L_118e5577;
  /* 118e5561 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5565 je 0x118e5577 */
  if (C.zf) goto L_118e5577;
  /* 118e5567 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118e556b call 0x118e8793 */
  push32(0x118e5570u); f_118e8793();
  /* 118e5570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5572 pop ecx */
  ECX = (pop32());
  /* 118e5573 jne 0x118e5553 */
  if (!C.zf) goto L_118e5553;
L_118e5575:;
  /* 118e5575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e5577:;
  /* 118e5577 ret  */
  ESPCHK(0x118e554cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005578 @ 0x118e5578 (231 bytes, 81 insns) */
void f_118e5578(void) {
  FTRACE(0x118e5578u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5578 push ebp */
  push32((uint32_t)(EBP));
  /* 118e5579 mov ebp, esp */
  EBP = (ESP);
  /* 118e557b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e557d push 0x118ef298 */
  push32((uint32_t)(0x118ef298u));
  /* 118e5582 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118e5587 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118e558d push eax */
  push32((uint32_t)(EAX));
  /* 118e558e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118e5595 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e5598 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5599 push esi */
  push32((uint32_t)(ESI));
  /* 118e559a push edi */
  push32((uint32_t)(EDI));
  /* 118e559b mov eax, dword ptr [0x1190aa24] */
  EAX = (r32((uint32_t)(0x1190aa24)));
  /* 118e55a0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e55a3 jne 0x118e55e8 */
  if (!C.zf) goto L_118e55e8;
  /* 118e55a5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e55a8 cmp esi, dword ptr [0x1190aa1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190aa1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e55ae ja 0x118e5647 */
  if ((!C.cf&&!C.zf)) goto L_118e5647;
  /* 118e55b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e55b6 call 0x118e7509 */
  push32(0x118e55bbu); f_118e7509();
  /* 118e55bb pop ecx */
  ECX = (pop32());
  /* 118e55bc and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e55c0 push esi */
  push32((uint32_t)(ESI));
  /* 118e55c1 call 0x118e791b */
  push32(0x118e55c6u); f_118e791b();
  /* 118e55c6 pop ecx */
  ECX = (pop32());
  /* 118e55c7 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118e55ca or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e55ce call 0x118e55df */
  push32(0x118e55d3u); f_118e55df();
  /* 118e55d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118e55d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e55d8 je 0x118e5647 */
  if (C.zf) goto L_118e5647;
  /* 118e55da jmp 0x118e5665 */
  jmp_ind(0x118e5665u); return;
  /* 118e55df push 9 */
  push32((uint32_t)(0x9u));
  /* 118e55e1 call 0x118e756a */
  push32(0x118e55e6u); f_118e756a();
  /* 118e55e6 pop ecx */
  ECX = (pop32());
  /* 118e55e7 ret  */
  ESPCHK(0x118e5578u, _esp0);
  ESP += 4; return;
L_118e55e8:;
  /* 118e55e8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e55eb jne 0x118e5647 */
  if (!C.zf) goto L_118e5647;
  /* 118e55ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e55f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e55f2 je 0x118e55fc */
  if (C.zf) goto L_118e55fc;
  /* 118e55f4 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 118e55f7 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e55fa jmp 0x118e55ff */
  goto L_118e55ff;
L_118e55fc:;
  /* 118e55fc push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e55fe pop esi */
  ESI = (pop32());
L_118e55ff:;
  /* 118e55ff mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 118e5602 cmp esi, dword ptr [0x118f3b84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118f3b84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5608 ja 0x118e5638 */
  if ((!C.cf&&!C.zf)) goto L_118e5638;
  /* 118e560a push 9 */
  push32((uint32_t)(0x9u));
  /* 118e560c call 0x118e7509 */
  push32(0x118e5611u); f_118e7509();
  /* 118e5611 pop ecx */
  ECX = (pop32());
  /* 118e5612 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118e5619 mov eax, esi */
  EAX = (ESI);
  /* 118e561b shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118e561e push eax */
  push32((uint32_t)(EAX));
  /* 118e561f call 0x118e83be */
  push32(0x118e5624u); f_118e83be();
  /* 118e5624 pop ecx */
  ECX = (pop32());
  /* 118e5625 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118e5628 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e562c call 0x118e563e */
  push32(0x118e5631u); f_118e563e();
  /* 118e5631 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118e5634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5636 jne 0x118e5665 */
  if (!C.zf) { jmp_ind(0x118e5665u); return; }
L_118e5638:;
  /* 118e5638 push esi */
  push32((uint32_t)(ESI));
  /* 118e5639 jmp 0x118e5657 */
  goto L_118e5657;
  /* 118e563b mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e563e push 9 */
  push32((uint32_t)(0x9u));
  /* 118e5640 call 0x118e756a */
  push32(0x118e5645u); f_118e756a();
  /* 118e5645 pop ecx */
  ECX = (pop32());
  /* 118e5646 ret  */
  ESPCHK(0x118e5578u, _esp0);
  ESP += 4; return;
L_118e5647:;
  /* 118e5647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e564a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e564c jne 0x118e5651 */
  if (!C.zf) goto L_118e5651;
  /* 118e564e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e5650 pop eax */
  EAX = (pop32());
L_118e5651:;
  /* 118e5651 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5654 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 118e5656 push eax */
  push32((uint32_t)(EAX));
L_118e5657:;
  /* 118e5657 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e5659 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
}

/* FUN_100055df @ 0x118e55df (9 bytes, 4 insns) */
void f_118e55df(void) {
  FTRACE(0x118e55dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e55df push 9 */
  push32((uint32_t)(0x9u));
  /* 118e55e1 call 0x118e756a */
  push32(0x118e55e6u); f_118e756a();
  /* 118e55e6 pop ecx */
  ECX = (pop32());
  /* 118e55e7 ret  */
  ESPCHK(0x118e55dfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000563e @ 0x118e563e (9 bytes, 4 insns) */
void f_118e563e(void) {
  FTRACE(0x118e563eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e563e push 9 */
  push32((uint32_t)(0x9u));
  /* 118e5640 call 0x118e756a */
  push32(0x118e5645u); f_118e756a();
  /* 118e5645 pop ecx */
  ECX = (pop32());
  /* 118e5646 ret  */
  ESPCHK(0x118e563eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005674 @ 0x118e5674 (84 bytes, 32 insns) */
void f_118e5674(void) {
  FTRACE(0x118e5674u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5674 push esi */
  push32((uint32_t)(ESI));
  /* 118e5675 call 0x118e7474 */
  push32(0x118e567au); f_118e7474();
  /* 118e567a call dword ptr [0x118ef0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0ec))), 0x118e5680u);
  /* 118e5680 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5683 mov dword ptr [0x118f176c], eax */
  w32((uint32_t)(0x118f176c), (EAX));
  /* 118e5688 je 0x118e56c4 */
  if (C.zf) goto L_118e56c4;
  /* 118e568a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e568c push 1 */
  push32((uint32_t)(0x1u));
  /* 118e568e call 0x118e92b5 */
  push32(0x118e5693u); f_118e92b5();
  /* 118e5693 mov esi, eax */
  ESI = (EAX);
  /* 118e5695 pop ecx */
  ECX = (pop32());
  /* 118e5696 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e5698 pop ecx */
  ECX = (pop32());
  /* 118e5699 je 0x118e56c4 */
  if (C.zf) goto L_118e56c4;
  /* 118e569b push esi */
  push32((uint32_t)(ESI));
  /* 118e569c push dword ptr [0x118f176c] */
  push32((uint32_t)(r32((uint32_t)(0x118f176c))));
  /* 118e56a2 call dword ptr [0x118ef108] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef108))), 0x118e56a8u);
  /* 118e56a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e56aa je 0x118e56c4 */
  if (C.zf) goto L_118e56c4;
  /* 118e56ac push esi */
  push32((uint32_t)(ESI));
  /* 118e56ad call 0x118e56e6 */
  push32(0x118e56b2u); f_118e56e6();
  /* 118e56b2 pop ecx */
  ECX = (pop32());
  /* 118e56b3 call dword ptr [0x118ef104] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef104))), 0x118e56b9u);
  /* 118e56b9 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e56bd push 1 */
  push32((uint32_t)(0x1u));
  /* 118e56bf mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e56c1 pop eax */
  EAX = (pop32());
  /* 118e56c2 pop esi */
  ESI = (pop32());
  /* 118e56c3 ret  */
  ESPCHK(0x118e5674u, _esp0);
  ESP += 4; return;
L_118e56c4:;
  /* 118e56c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e56c6 pop esi */
  ESI = (pop32());
  /* 118e56c7 ret  */
  ESPCHK(0x118e5674u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c8 @ 0x118e56c8 (30 bytes, 8 insns) */
void f_118e56c8(void) {
  FTRACE(0x118e56c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e56c8 call 0x118e749d */
  push32(0x118e56cdu); f_118e749d();
  /* 118e56cd mov eax, dword ptr [0x118f176c] */
  EAX = (r32((uint32_t)(0x118f176c)));
  /* 118e56d2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e56d5 je 0x118e56e5 */
  if (C.zf) goto L_118e56e5;
  /* 118e56d7 push eax */
  push32((uint32_t)(EAX));
  /* 118e56d8 call dword ptr [0x118ef0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0d0))), 0x118e56deu);
  /* 118e56de or dword ptr [0x118f176c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x118f176c)))|(0xffffffffu); w32((uint32_t)(0x118f176c), (_r)); fl_logic(_r,32); }
L_118e56e5:;
  /* 118e56e5 ret  */
  ESPCHK(0x118e56c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100056e6 @ 0x118e56e6 (19 bytes, 4 insns) */
void f_118e56e6(void) {
  FTRACE(0x118e56e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e56e6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e56ea mov dword ptr [eax + 0x50], 0x118f3e20 */
  w32((uint32_t)(EAX + 0x50), (0x118f3e20u));
  /* 118e56f1 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 118e56f8 ret  */
  ESPCHK(0x118e56e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f9 @ 0x118e56f9 (103 bytes, 38 insns) */
void f_118e56f9(void) {
  FTRACE(0x118e56f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e56f9 push esi */
  push32((uint32_t)(ESI));
  /* 118e56fa push edi */
  push32((uint32_t)(EDI));
  /* 118e56fb call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118e5701u);
  /* 118e5701 push dword ptr [0x118f176c] */
  push32((uint32_t)(r32((uint32_t)(0x118f176c))));
  /* 118e5707 mov edi, eax */
  EDI = (EAX);
  /* 118e5709 call dword ptr [0x118ef0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c8))), 0x118e570fu);
  /* 118e570f mov esi, eax */
  ESI = (EAX);
  /* 118e5711 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e5713 jne 0x118e5754 */
  if (!C.zf) goto L_118e5754;
  /* 118e5715 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e5717 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e5719 call 0x118e92b5 */
  push32(0x118e571eu); f_118e92b5();
  /* 118e571e mov esi, eax */
  ESI = (EAX);
  /* 118e5720 pop ecx */
  ECX = (pop32());
  /* 118e5721 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e5723 pop ecx */
  ECX = (pop32());
  /* 118e5724 je 0x118e574c */
  if (C.zf) goto L_118e574c;
  /* 118e5726 push esi */
  push32((uint32_t)(ESI));
  /* 118e5727 push dword ptr [0x118f176c] */
  push32((uint32_t)(r32((uint32_t)(0x118f176c))));
  /* 118e572d call dword ptr [0x118ef108] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef108))), 0x118e5733u);
  /* 118e5733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5735 je 0x118e574c */
  if (C.zf) goto L_118e574c;
  /* 118e5737 push esi */
  push32((uint32_t)(ESI));
  /* 118e5738 call 0x118e56e6 */
  push32(0x118e573du); f_118e56e6();
  /* 118e573d pop ecx */
  ECX = (pop32());
  /* 118e573e call dword ptr [0x118ef104] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef104))), 0x118e5744u);
  /* 118e5744 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e5748 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e574a jmp 0x118e5754 */
  goto L_118e5754;
L_118e574c:;
  /* 118e574c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e574e call 0x118e4b2d */
  push32(0x118e5753u); f_118e4b2d();
  /* 118e5753 pop ecx */
  ECX = (pop32());
L_118e5754:;
  /* 118e5754 push edi */
  push32((uint32_t)(EDI));
  /* 118e5755 call dword ptr [0x118ef0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0cc))), 0x118e575bu);
  /* 118e575b mov eax, esi */
  EAX = (ESI);
  /* 118e575d pop edi */
  EDI = (pop32());
  /* 118e575e pop esi */
  ESI = (pop32());
  /* 118e575f ret  */
  ESPCHK(0x118e56f9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005760 @ 0x118e5760 (160 bytes, 62 insns) */
void f_118e5760(void) {
  FTRACE(0x118e5760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5760 mov eax, dword ptr [0x118f176c] */
  EAX = (r32((uint32_t)(0x118f176c)));
  /* 118e5765 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5768 je 0x118e57ff */
  if (C.zf) goto L_118e57ff;
  /* 118e576e push esi */
  push32((uint32_t)(ESI));
  /* 118e576f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e5773 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e5775 jne 0x118e5784 */
  if (!C.zf) goto L_118e5784;
  /* 118e5777 push eax */
  push32((uint32_t)(EAX));
  /* 118e5778 call dword ptr [0x118ef0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c8))), 0x118e577eu);
  /* 118e577e mov esi, eax */
  ESI = (EAX);
  /* 118e5780 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e5782 je 0x118e57f0 */
  if (C.zf) goto L_118e57f0;
L_118e5784:;
  /* 118e5784 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 118e5787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5789 je 0x118e5792 */
  if (C.zf) goto L_118e5792;
  /* 118e578b push eax */
  push32((uint32_t)(EAX));
  /* 118e578c call 0x118e8ae5 */
  push32(0x118e5791u); f_118e8ae5();
  /* 118e5791 pop ecx */
  ECX = (pop32());
L_118e5792:;
  /* 118e5792 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 118e5795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5797 je 0x118e57a0 */
  if (C.zf) goto L_118e57a0;
  /* 118e5799 push eax */
  push32((uint32_t)(EAX));
  /* 118e579a call 0x118e8ae5 */
  push32(0x118e579fu); f_118e8ae5();
  /* 118e579f pop ecx */
  ECX = (pop32());
L_118e57a0:;
  /* 118e57a0 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 118e57a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e57a5 je 0x118e57ae */
  if (C.zf) goto L_118e57ae;
  /* 118e57a7 push eax */
  push32((uint32_t)(EAX));
  /* 118e57a8 call 0x118e8ae5 */
  push32(0x118e57adu); f_118e8ae5();
  /* 118e57ad pop ecx */
  ECX = (pop32());
L_118e57ae:;
  /* 118e57ae mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 118e57b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e57b3 je 0x118e57bc */
  if (C.zf) goto L_118e57bc;
  /* 118e57b5 push eax */
  push32((uint32_t)(EAX));
  /* 118e57b6 call 0x118e8ae5 */
  push32(0x118e57bbu); f_118e8ae5();
  /* 118e57bb pop ecx */
  ECX = (pop32());
L_118e57bc:;
  /* 118e57bc mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 118e57bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e57c1 je 0x118e57ca */
  if (C.zf) goto L_118e57ca;
  /* 118e57c3 push eax */
  push32((uint32_t)(EAX));
  /* 118e57c4 call 0x118e8ae5 */
  push32(0x118e57c9u); f_118e8ae5();
  /* 118e57c9 pop ecx */
  ECX = (pop32());
L_118e57ca:;
  /* 118e57ca mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 118e57cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e57cf je 0x118e57d8 */
  if (C.zf) goto L_118e57d8;
  /* 118e57d1 push eax */
  push32((uint32_t)(EAX));
  /* 118e57d2 call 0x118e8ae5 */
  push32(0x118e57d7u); f_118e8ae5();
  /* 118e57d7 pop ecx */
  ECX = (pop32());
L_118e57d8:;
  /* 118e57d8 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 118e57db cmp eax, 0x118f3e20 */
  { uint32_t _a=(EAX),_b=(0x118f3e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e57e0 je 0x118e57e9 */
  if (C.zf) goto L_118e57e9;
  /* 118e57e2 push eax */
  push32((uint32_t)(EAX));
  /* 118e57e3 call 0x118e8ae5 */
  push32(0x118e57e8u); f_118e8ae5();
  /* 118e57e8 pop ecx */
  ECX = (pop32());
L_118e57e9:;
  /* 118e57e9 push esi */
  push32((uint32_t)(ESI));
  /* 118e57ea call 0x118e8ae5 */
  push32(0x118e57efu); f_118e8ae5();
  /* 118e57ef pop ecx */
  ECX = (pop32());
L_118e57f0:;
  /* 118e57f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e57f2 push dword ptr [0x118f176c] */
  push32((uint32_t)(r32((uint32_t)(0x118f176c))));
  /* 118e57f8 call dword ptr [0x118ef108] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef108))), 0x118e57feu);
  /* 118e57fe pop esi */
  ESI = (pop32());
L_118e57ff:;
  /* 118e57ff ret  */
  ESPCHK(0x118e5760u, _esp0);
  ESP += 4; return;
}

/* FUN_100059d0 @ 0x118e59d0 (23 bytes, 9 insns) */
void f_118e59d0(void) {
  FTRACE(0x118e59d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e59d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e59d1 mov ebp, esp */
  EBP = (ESP);
  /* 118e59d3 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e59d6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118e59d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118e59dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118e59df mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118e59e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118e59e5 jmp 0x118e59f0 */
  jmp_ind(0x118e59f0u); return;
}

/* __startOneArgErrorHandling @ 0x118e59e7 (60 bytes, 23 insns) */
void f_118e59e7(void) {
  FTRACE(0x118e59e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e59e7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e59e8 mov ebp, esp */
  EBP = (ESP);
  /* 118e59ea add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e59ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118e59f0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118e59f3 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 118e59f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e59f9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e59fc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118e59ff mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118e5a02 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118e5a05 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 118e5a08 push eax */
  push32((uint32_t)(EAX));
  /* 118e5a09 push ecx */
  push32((uint32_t)(ECX));
  /* 118e5a0a push edx */
  push32((uint32_t)(EDX));
  /* 118e5a0b call 0x118e93f2 */
  push32(0x118e5a10u); f_118e93f2();
  /* 118e5a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5a13 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 118e5a16 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e5a1c je 0x118e5a21 */
  if (C.zf) goto L_118e5a21;
  /* 118e5a1e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_118e5a21:;
  /* 118e5a21 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e5a22 ret  */
  ESPCHK(0x118e59e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a45 @ 0x118e5a45 (23 bytes, 6 insns) */
void f_118e5a45(void) {
  FTRACE(0x118e5a45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5a45 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e5a49 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 118e5a4f or edx, 0x7f */
  { uint32_t _r=(EDX)|(0x7fu); EDX = (_r); fl_logic(_r,32); }
  /* 118e5a52 mov word ptr [esp + 6], dx */
  w16((uint32_t)(ESP + 0x6), (DX));
  /* 118e5a57 fldcw word ptr [esp + 6] */
  C.fcw = r16((uint32_t)(ESP + 0x6));
  /* 118e5a5b ret  */
  ESPCHK(0x118e5a45u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a5c @ 0x118e5a5c (25 bytes, 7 insns) */
void f_118e5a5c(void) {
  FTRACE(0x118e5a5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5a5c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 118e5a61 je 0x118e5a69 */
  if (C.zf) goto L_118e5a69;
  /* 118e5a63 mov eax, 7 */
  EAX = (0x7u);
  /* 118e5a68 ret  */
  ESPCHK(0x118e5a5cu, _esp0);
  ESP += 4; return;
L_118e5a69:;
  /* 118e5a69 fadd qword ptr [0x118ef330] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x118ef330)));
  /* 118e5a6f mov eax, 1 */
  EAX = (0x1u);
  /* 118e5a74 ret  */
  ESPCHK(0x118e5a5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab8 @ 0x118e5ab8 (22 bytes, 7 insns) */
void f_118e5ab8(void) {
  FTRACE(0x118e5ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5ab8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e5abc and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 118e5ac1 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5ac6 je 0x118e5ac9 */
  if (C.zf) goto L_118e5ac9;
  /* 118e5ac8 ret  */
  ESPCHK(0x118e5ab8u, _esp0);
  ESP += 4; return;
L_118e5ac9:;
  /* 118e5ac9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e5acd ret  */
  ESPCHK(0x118e5ab8u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x118e5adb (42 bytes, 16 insns) */
void f_118e5adb(void) {
  FTRACE(0x118e5adbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5adb mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 118e5adf cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e5ae3 je 0x118e5b03 */
  if (C.zf) goto L_118e5b03;
  /* 118e5ae5 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 118e5ae9 je 0x118e5b00 */
  if (C.zf) goto L_118e5b00;
  /* 118e5aeb wait  */
  /* wait (no observable integer/reg state) */
  /* 118e5aec fnstsw ax */
  AX = fpu_status();
  /* 118e5aee and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 118e5af2 je 0x118e5b00 */
  if (C.zf) goto L_118e5b00;
  /* 118e5af4 mov eax, 8 */
  EAX = (0x8u);
  /* 118e5af9 call 0x118e59e7 */
  push32(0x118e5afeu); f_118e59e7();
  /* 118e5afe pop edx */
  EDX = (pop32());
  /* 118e5aff ret  */
  ESPCHK(0x118e5adbu, _esp0);
  ESP += 4; return;
L_118e5b00:;
  /* 118e5b00 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_118e5b03:;
  /* 118e5b03 pop edx */
  EDX = (pop32());
  /* 118e5b04 ret  */
  ESPCHK(0x118e5adbu, _esp0);
  ESP += 4; return;
}

/* FUN_10005bbc @ 0x118e5bbc (194 bytes, 65 insns) */
void f_118e5bbc(void) {
  FTRACE(0x118e5bbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5bbc push ebp */
  push32((uint32_t)(EBP));
  /* 118e5bbd mov ebp, esp */
  EBP = (ESP);
  /* 118e5bbf sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e5bc2 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5bc3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e5bc6 sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e5bcc cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5bcf jl 0x118e5c78 */
  if ((C.sf!=C.of)) goto L_118e5c78;
  /* 118e5bd5 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5bdb jg 0x118e5c78 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e5c78;
  /* 118e5be1 push esi */
  push32((uint32_t)(ESI));
  /* 118e5be2 push edi */
  push32((uint32_t)(EDI));
  /* 118e5be3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e5be6 mov esi, dword ptr [edi*4 + 0x118f3f8c] */
  ESI = (r32((uint32_t)(EDI*4 + 0x118f3f8c)));
  /* 118e5bed add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5bf0 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 118e5bf3 jne 0x118e5bfb */
  if (!C.zf) goto L_118e5bfb;
  /* 118e5bf5 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5bf8 jle 0x118e5bfb */
  if ((C.zf||C.sf!=C.of)) goto L_118e5bfb;
  /* 118e5bfa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e5bfb:;
  /* 118e5bfb call 0x118e94c2 */
  push32(0x118e5c00u); f_118e94c2();
  /* 118e5c00 mov eax, ebx */
  EAX = (EBX);
  /* 118e5c02 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 118e5c05 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e5c0b sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e5c0e mov edx, esi */
  EDX = (ESI);
  /* 118e5c10 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 118e5c13 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5c15 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 118e5c18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5c1a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118e5c1d lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 118e5c20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e5c23 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118e5c26 lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 118e5c29 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e5c2c add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5c2f imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e5c32 add ecx, dword ptr [0x118f3ea8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118f3ea8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5c38 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118e5c39 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5c3d mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 118e5c40 pop edi */
  EDI = (pop32());
  /* 118e5c41 pop esi */
  ESI = (pop32());
  /* 118e5c42 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 118e5c49 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118e5c4c je 0x118e5c6e */
  if (C.zf) goto L_118e5c6e;
  /* 118e5c4e cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5c52 jne 0x118e5c74 */
  if (!C.zf) goto L_118e5c74;
  /* 118e5c54 cmp dword ptr [0x118f3eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118f3eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5c5b je 0x118e5c74 */
  if (C.zf) goto L_118e5c74;
  /* 118e5c5d lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 118e5c60 push eax */
  push32((uint32_t)(EAX));
  /* 118e5c61 call 0x118e9777 */
  push32(0x118e5c66u); f_118e9777();
  /* 118e5c66 pop ecx */
  ECX = (pop32());
  /* 118e5c67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e5c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5c6c je 0x118e5c74 */
  if (C.zf) goto L_118e5c74;
L_118e5c6e:;
  /* 118e5c6e add ecx, dword ptr [0x118f3eb0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118f3eb0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_118e5c74:;
  /* 118e5c74 mov eax, ecx */
  EAX = (ECX);
  /* 118e5c76 jmp 0x118e5c7b */
  goto L_118e5c7b;
L_118e5c78:;
  /* 118e5c78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118e5c7b:;
  /* 118e5c7b pop ebx */
  EBX = (pop32());
  /* 118e5c7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e5c7d ret  */
  ESPCHK(0x118e5bbcu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c7e @ 0x118e5c7e (444 bytes, 150 insns) */
void f_118e5c7e(void) {
  FTRACE(0x118e5c7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5c7e push ebp */
  push32((uint32_t)(EBP));
  /* 118e5c7f mov ebp, esp */
  EBP = (ESP);
  /* 118e5c81 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e5c84 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5c85 push esi */
  push32((uint32_t)(ESI));
  /* 118e5c86 push edi */
  push32((uint32_t)(EDI));
  /* 118e5c87 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 118e5c8c call 0x118e553a */
  push32(0x118e5c91u); f_118e553a();
  /* 118e5c91 mov esi, eax */
  ESI = (EAX);
  /* 118e5c93 pop ecx */
  ECX = (pop32());
  /* 118e5c94 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e5c96 jne 0x118e5ca0 */
  if (!C.zf) goto L_118e5ca0;
  /* 118e5c98 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 118e5c9a call 0x118e4b2d */
  push32(0x118e5c9fu); f_118e4b2d();
  /* 118e5c9f pop ecx */
  ECX = (pop32());
L_118e5ca0:;
  /* 118e5ca0 mov dword ptr [0x1190aa40], esi */
  w32((uint32_t)(0x1190aa40), (ESI));
  /* 118e5ca6 mov dword ptr [0x1190ab40], 0x20 */
  w32((uint32_t)(0x1190ab40), (0x20u));
  /* 118e5cb0 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_118e5cb6:;
  /* 118e5cb6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5cb8 jae 0x118e5cd8 */
  if (!C.cf) goto L_118e5cd8;
  /* 118e5cba and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118e5cbe or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118e5cc1 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 118e5cc5 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 118e5cc9 mov eax, dword ptr [0x1190aa40] */
  EAX = (r32((uint32_t)(0x1190aa40)));
  /* 118e5cce add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5cd1 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5cd6 jmp 0x118e5cb6 */
  goto L_118e5cb6;
L_118e5cd8:;
  /* 118e5cd8 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 118e5cdb push eax */
  push32((uint32_t)(EAX));
  /* 118e5cdc call dword ptr [0x118ef0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0b4))), 0x118e5ce2u);
  /* 118e5ce2 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e5ce7 je 0x118e5dbe */
  if (C.zf) goto L_118e5dbe;
  /* 118e5ced mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118e5cf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5cf2 je 0x118e5dbe */
  if (C.zf) goto L_118e5dbe;
  /* 118e5cf8 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 118e5cfa lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 118e5cfd lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 118e5d00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118e5d03 mov eax, 0x800 */
  EAX = (0x800u);
  /* 118e5d08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5d0a jl 0x118e5d0e */
  if ((C.sf!=C.of)) goto L_118e5d0e;
  /* 118e5d0c mov edi, eax */
  EDI = (EAX);
L_118e5d0e:;
  /* 118e5d0e cmp dword ptr [0x1190ab40], edi */
  { uint32_t _a=(r32((uint32_t)(0x1190ab40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5d14 jge 0x118e5d6c */
  if ((C.sf==C.of)) goto L_118e5d6c;
  /* 118e5d16 mov esi, 0x1190aa44 */
  ESI = (0x1190aa44u);
L_118e5d1b:;
  /* 118e5d1b push 0x480 */
  push32((uint32_t)(0x480u));
  /* 118e5d20 call 0x118e553a */
  push32(0x118e5d25u); f_118e553a();
  /* 118e5d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5d27 pop ecx */
  ECX = (pop32());
  /* 118e5d28 je 0x118e5d66 */
  if (C.zf) goto L_118e5d66;
  /* 118e5d2a add dword ptr [0x1190ab40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1190ab40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1190ab40), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e5d31 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e5d33 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_118e5d39:;
  /* 118e5d39 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5d3b jae 0x118e5d59 */
  if (!C.cf) goto L_118e5d59;
  /* 118e5d3d and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 118e5d41 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118e5d44 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118e5d48 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 118e5d4c mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e5d4e add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5d51 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5d57 jmp 0x118e5d39 */
  goto L_118e5d39;
L_118e5d59:;
  /* 118e5d59 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5d5c cmp dword ptr [0x1190ab40], edi */
  { uint32_t _a=(r32((uint32_t)(0x1190ab40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5d62 jl 0x118e5d1b */
  if ((C.sf!=C.of)) goto L_118e5d1b;
  /* 118e5d64 jmp 0x118e5d6c */
  goto L_118e5d6c;
L_118e5d66:;
  /* 118e5d66 mov edi, dword ptr [0x1190ab40] */
  EDI = (r32((uint32_t)(0x1190ab40)));
L_118e5d6c:;
  /* 118e5d6c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e5d6e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e5d70 jle 0x118e5dbe */
  if ((C.zf||C.sf!=C.of)) goto L_118e5dbe;
L_118e5d72:;
  /* 118e5d72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e5d75 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118e5d77 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5d7a je 0x118e5db4 */
  if (C.zf) goto L_118e5db4;
  /* 118e5d7c mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 118e5d7e test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118e5d80 je 0x118e5db4 */
  if (C.zf) goto L_118e5db4;
  /* 118e5d82 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118e5d84 jne 0x118e5d91 */
  if (!C.zf) goto L_118e5d91;
  /* 118e5d86 push ecx */
  push32((uint32_t)(ECX));
  /* 118e5d87 call dword ptr [0x118ef0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0b8))), 0x118e5d8du);
  /* 118e5d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5d8f je 0x118e5db4 */
  if (C.zf) goto L_118e5db4;
L_118e5d91:;
  /* 118e5d91 mov ecx, esi */
  ECX = (ESI);
  /* 118e5d93 mov eax, esi */
  EAX = (ESI);
  /* 118e5d95 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e5d98 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118e5d9b mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118e5da2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118e5da5 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 118e5da8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e5dab mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 118e5dad mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e5daf mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 118e5db1 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_118e5db4:;
  /* 118e5db4 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e5db8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e5db9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e5dba cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5dbc jl 0x118e5d72 */
  if ((C.sf!=C.of)) goto L_118e5d72;
L_118e5dbe:;
  /* 118e5dbe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118e5dc0:;
  /* 118e5dc0 mov ecx, dword ptr [0x1190aa40] */
  ECX = (r32((uint32_t)(0x1190aa40)));
  /* 118e5dc6 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 118e5dc9 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5dcd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 118e5dd0 jne 0x118e5e1f */
  if (!C.zf) goto L_118e5e1f;
  /* 118e5dd2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e5dd4 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 118e5dd8 jne 0x118e5ddf */
  if (!C.zf) goto L_118e5ddf;
  /* 118e5dda push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 118e5ddc pop eax */
  EAX = (pop32());
  /* 118e5ddd jmp 0x118e5de9 */
  goto L_118e5de9;
L_118e5ddf:;
  /* 118e5ddf mov eax, ebx */
  EAX = (EBX);
  /* 118e5de1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e5de2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e5de4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e5de6 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118e5de9:;
  /* 118e5de9 push eax */
  push32((uint32_t)(EAX));
  /* 118e5dea call dword ptr [0x118ef0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0bc))), 0x118e5df0u);
  /* 118e5df0 mov edi, eax */
  EDI = (EAX);
  /* 118e5df2 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5df5 je 0x118e5e0e */
  if (C.zf) goto L_118e5e0e;
  /* 118e5df7 push edi */
  push32((uint32_t)(EDI));
  /* 118e5df8 call dword ptr [0x118ef0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0b8))), 0x118e5dfeu);
  /* 118e5dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5e00 je 0x118e5e0e */
  if (C.zf) goto L_118e5e0e;
  /* 118e5e02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e5e07 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118e5e09 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e0c jne 0x118e5e14 */
  if (!C.zf) goto L_118e5e14;
L_118e5e0e:;
  /* 118e5e0e or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118e5e12 jmp 0x118e5e23 */
  goto L_118e5e23;
L_118e5e14:;
  /* 118e5e14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e17 jne 0x118e5e23 */
  if (!C.zf) goto L_118e5e23;
  /* 118e5e19 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118e5e1d jmp 0x118e5e23 */
  goto L_118e5e23;
L_118e5e1f:;
  /* 118e5e1f or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_118e5e23:;
  /* 118e5e23 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e5e24 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e27 jl 0x118e5dc0 */
  if ((C.sf!=C.of)) goto L_118e5dc0;
  /* 118e5e29 push dword ptr [0x1190ab40] */
  push32((uint32_t)(r32((uint32_t)(0x1190ab40))));
  /* 118e5e2f call dword ptr [0x118ef0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c0))), 0x118e5e35u);
  /* 118e5e35 pop edi */
  EDI = (pop32());
  /* 118e5e36 pop esi */
  ESI = (pop32());
  /* 118e5e37 pop ebx */
  EBX = (pop32());
  /* 118e5e38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e5e39 ret  */
  ESPCHK(0x118e5c7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e3a @ 0x118e5e3a (84 bytes, 33 insns) */
void f_118e5e3a(void) {
  FTRACE(0x118e5e3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5e3a push ebx */
  push32((uint32_t)(EBX));
  /* 118e5e3b push esi */
  push32((uint32_t)(ESI));
  /* 118e5e3c push edi */
  push32((uint32_t)(EDI));
  /* 118e5e3d mov esi, 0x1190aa40 */
  ESI = (0x1190aa40u);
L_118e5e42:;
  /* 118e5e42 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e5e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5e46 je 0x118e5e7f */
  if (C.zf) goto L_118e5e7f;
  /* 118e5e48 mov edi, eax */
  EDI = (EAX);
  /* 118e5e4a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5e4f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e51 jae 0x118e5e74 */
  if (!C.cf) goto L_118e5e74;
  /* 118e5e53 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_118e5e56:;
  /* 118e5e56 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e5a je 0x118e5e63 */
  if (C.zf) goto L_118e5e63;
  /* 118e5e5c push ebx */
  push32((uint32_t)(EBX));
  /* 118e5e5d call dword ptr [0x118ef0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0b0))), 0x118e5e63u);
L_118e5e63:;
  /* 118e5e63 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e5e65 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5e68 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5e6d add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5e70 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e72 jb 0x118e5e56 */
  if (C.cf) goto L_118e5e56;
L_118e5e74:;
  /* 118e5e74 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e5e76 call 0x118e8ae5 */
  push32(0x118e5e7bu); f_118e8ae5();
  /* 118e5e7b and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118e5e7e pop ecx */
  ECX = (pop32());
L_118e5e7f:;
  /* 118e5e7f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5e82 cmp esi, 0x1190ab40 */
  { uint32_t _a=(ESI),_b=(0x1190ab40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e88 jl 0x118e5e42 */
  if ((C.sf!=C.of)) goto L_118e5e42;
  /* 118e5e8a pop edi */
  EDI = (pop32());
  /* 118e5e8b pop esi */
  ESI = (pop32());
  /* 118e5e8c pop ebx */
  EBX = (pop32());
  /* 118e5e8d ret  */
  ESPCHK(0x118e5e3au, _esp0);
  ESP += 4; return;
}

/* FUN_10005e8e @ 0x118e5e8e (185 bytes, 71 insns) */
void f_118e5e8e(void) {
  FTRACE(0x118e5e8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5e8e push ebx */
  push32((uint32_t)(EBX));
  /* 118e5e8f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e5e91 cmp dword ptr [0x1190ab48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1190ab48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5e97 push esi */
  push32((uint32_t)(ESI));
  /* 118e5e98 push edi */
  push32((uint32_t)(EDI));
  /* 118e5e99 jne 0x118e5ea0 */
  if (!C.zf) goto L_118e5ea0;
  /* 118e5e9b call 0x118e9e5c */
  push32(0x118e5ea0u); f_118e9e5c();
L_118e5ea0:;
  /* 118e5ea0 mov esi, dword ptr [0x11909414] */
  ESI = (r32((uint32_t)(0x11909414)));
  /* 118e5ea6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118e5ea8:;
  /* 118e5ea8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e5eaa cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e5eac je 0x118e5ec0 */
  if (C.zf) goto L_118e5ec0;
  /* 118e5eae cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e5eb0 je 0x118e5eb3 */
  if (C.zf) goto L_118e5eb3;
  /* 118e5eb2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_118e5eb3:;
  /* 118e5eb3 push esi */
  push32((uint32_t)(ESI));
  /* 118e5eb4 call 0x118e73f0 */
  push32(0x118e5eb9u); f_118e73f0();
  /* 118e5eb9 pop ecx */
  ECX = (pop32());
  /* 118e5eba lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 118e5ebe jmp 0x118e5ea8 */
  goto L_118e5ea8;
L_118e5ec0:;
  /* 118e5ec0 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 118e5ec7 push eax */
  push32((uint32_t)(EAX));
  /* 118e5ec8 call 0x118e553a */
  push32(0x118e5ecdu); f_118e553a();
  /* 118e5ecd mov esi, eax */
  ESI = (EAX);
  /* 118e5ecf pop ecx */
  ECX = (pop32());
  /* 118e5ed0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5ed2 mov dword ptr [0x11909444], esi */
  w32((uint32_t)(0x11909444), (ESI));
  /* 118e5ed8 jne 0x118e5ee2 */
  if (!C.zf) goto L_118e5ee2;
  /* 118e5eda push 9 */
  push32((uint32_t)(0x9u));
  /* 118e5edc call 0x118e4b2d */
  push32(0x118e5ee1u); f_118e4b2d();
  /* 118e5ee1 pop ecx */
  ECX = (pop32());
L_118e5ee2:;
  /* 118e5ee2 mov edi, dword ptr [0x11909414] */
  EDI = (r32((uint32_t)(0x11909414)));
  /* 118e5ee8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e5eea je 0x118e5f25 */
  if (C.zf) goto L_118e5f25;
  /* 118e5eec push ebp */
  push32((uint32_t)(EBP));
L_118e5eed:;
  /* 118e5eed push edi */
  push32((uint32_t)(EDI));
  /* 118e5eee call 0x118e73f0 */
  push32(0x118e5ef3u); f_118e73f0();
  /* 118e5ef3 mov ebp, eax */
  EBP = (EAX);
  /* 118e5ef5 pop ecx */
  ECX = (pop32());
  /* 118e5ef6 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118e5ef7 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e5efa je 0x118e5f1e */
  if (C.zf) goto L_118e5f1e;
  /* 118e5efc push ebp */
  push32((uint32_t)(EBP));
  /* 118e5efd call 0x118e553a */
  push32(0x118e5f02u); f_118e553a();
  /* 118e5f02 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5f04 pop ecx */
  ECX = (pop32());
  /* 118e5f05 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e5f07 jne 0x118e5f11 */
  if (!C.zf) goto L_118e5f11;
  /* 118e5f09 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e5f0b call 0x118e4b2d */
  push32(0x118e5f10u); f_118e4b2d();
  /* 118e5f10 pop ecx */
  ECX = (pop32());
L_118e5f11:;
  /* 118e5f11 push edi */
  push32((uint32_t)(EDI));
  /* 118e5f12 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e5f14 call 0x118e6f60 */
  push32(0x118e5f19u); f_118e6f60();
  /* 118e5f19 pop ecx */
  ECX = (pop32());
  /* 118e5f1a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5f1d pop ecx */
  ECX = (pop32());
L_118e5f1e:;
  /* 118e5f1e add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5f20 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e5f22 jne 0x118e5eed */
  if (!C.zf) goto L_118e5eed;
  /* 118e5f24 pop ebp */
  EBP = (pop32());
L_118e5f25:;
  /* 118e5f25 push dword ptr [0x11909414] */
  push32((uint32_t)(r32((uint32_t)(0x11909414))));
  /* 118e5f2b call 0x118e8ae5 */
  push32(0x118e5f30u); f_118e8ae5();
  /* 118e5f30 pop ecx */
  ECX = (pop32());
  /* 118e5f31 mov dword ptr [0x11909414], ebx */
  w32((uint32_t)(0x11909414), (EBX));
  /* 118e5f37 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 118e5f39 pop edi */
  EDI = (pop32());
  /* 118e5f3a pop esi */
  ESI = (pop32());
  /* 118e5f3b mov dword ptr [0x1190ab44], 1 */
  w32((uint32_t)(0x1190ab44), (0x1u));
  /* 118e5f45 pop ebx */
  EBX = (pop32());
  /* 118e5f46 ret  */
  ESPCHK(0x118e5e8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f47 @ 0x118e5f47 (153 bytes, 62 insns) */
void f_118e5f47(void) {
  FTRACE(0x118e5f47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5f47 push ebp */
  push32((uint32_t)(EBP));
  /* 118e5f48 mov ebp, esp */
  EBP = (ESP);
  /* 118e5f4a push ecx */
  push32((uint32_t)(ECX));
  /* 118e5f4b push ecx */
  push32((uint32_t)(ECX));
  /* 118e5f4c push ebx */
  push32((uint32_t)(EBX));
  /* 118e5f4d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e5f4f cmp dword ptr [0x1190ab48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1190ab48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5f55 push esi */
  push32((uint32_t)(ESI));
  /* 118e5f56 push edi */
  push32((uint32_t)(EDI));
  /* 118e5f57 jne 0x118e5f5e */
  if (!C.zf) goto L_118e5f5e;
  /* 118e5f59 call 0x118e9e5c */
  push32(0x118e5f5eu); f_118e9e5c();
L_118e5f5e:;
  /* 118e5f5e mov esi, 0x11909468 */
  ESI = (0x11909468u);
  /* 118e5f63 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118e5f68 push esi */
  push32((uint32_t)(ESI));
  /* 118e5f69 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5f6a call dword ptr [0x118ef0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0ac))), 0x118e5f70u);
  /* 118e5f70 mov eax, dword ptr [0x1190ab54] */
  EAX = (r32((uint32_t)(0x1190ab54)));
  /* 118e5f75 mov dword ptr [0x11909454], esi */
  w32((uint32_t)(0x11909454), (ESI));
  /* 118e5f7b mov edi, esi */
  EDI = (ESI);
  /* 118e5f7d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e5f7f je 0x118e5f83 */
  if (C.zf) goto L_118e5f83;
  /* 118e5f81 mov edi, eax */
  EDI = (EAX);
L_118e5f83:;
  /* 118e5f83 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118e5f86 push eax */
  push32((uint32_t)(EAX));
  /* 118e5f87 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118e5f8a push eax */
  push32((uint32_t)(EAX));
  /* 118e5f8b push ebx */
  push32((uint32_t)(EBX));
  /* 118e5f8c push ebx */
  push32((uint32_t)(EBX));
  /* 118e5f8d push edi */
  push32((uint32_t)(EDI));
  /* 118e5f8e call 0x118e5fe0 */
  push32(0x118e5f93u); f_118e5fe0();
  /* 118e5f93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e5f96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e5f99 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 118e5f9c push eax */
  push32((uint32_t)(EAX));
  /* 118e5f9d call 0x118e553a */
  push32(0x118e5fa2u); f_118e553a();
  /* 118e5fa2 mov esi, eax */
  ESI = (EAX);
  /* 118e5fa4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5fa7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e5fa9 jne 0x118e5fb3 */
  if (!C.zf) goto L_118e5fb3;
  /* 118e5fab push 8 */
  push32((uint32_t)(0x8u));
  /* 118e5fad call 0x118e4b2d */
  push32(0x118e5fb2u); f_118e4b2d();
  /* 118e5fb2 pop ecx */
  ECX = (pop32());
L_118e5fb3:;
  /* 118e5fb3 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118e5fb6 push eax */
  push32((uint32_t)(EAX));
  /* 118e5fb7 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118e5fba push eax */
  push32((uint32_t)(EAX));
  /* 118e5fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e5fbe lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 118e5fc1 push eax */
  push32((uint32_t)(EAX));
  /* 118e5fc2 push esi */
  push32((uint32_t)(ESI));
  /* 118e5fc3 push edi */
  push32((uint32_t)(EDI));
  /* 118e5fc4 call 0x118e5fe0 */
  push32(0x118e5fc9u); f_118e5fe0();
  /* 118e5fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e5fcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e5fcf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e5fd0 mov dword ptr [0x1190943c], esi */
  w32((uint32_t)(0x1190943c), (ESI));
  /* 118e5fd6 pop edi */
  EDI = (pop32());
  /* 118e5fd7 pop esi */
  ESI = (pop32());
  /* 118e5fd8 mov dword ptr [0x11909438], eax */
  w32((uint32_t)(0x11909438), (EAX));
  /* 118e5fdd pop ebx */
  EBX = (pop32());
  /* 118e5fde leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e5fdf ret  */
  ESPCHK(0x118e5f47u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x118e5fe0 (436 bytes, 187 insns) */
void f_118e5fe0(void) {
  FTRACE(0x118e5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 118e5fe3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118e5fe6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e5fe9 push ebx */
  push32((uint32_t)(EBX));
  /* 118e5fea push esi */
  push32((uint32_t)(ESI));
  /* 118e5feb and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118e5fee mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e5ff1 push edi */
  push32((uint32_t)(EDI));
  /* 118e5ff2 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e5ff5 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 118e5ffb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e5ffe test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e6000 je 0x118e600a */
  if (C.zf) goto L_118e600a;
  /* 118e6002 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 118e6004 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6007 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_118e600a:;
  /* 118e600a cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e600d jne 0x118e6053 */
  if (!C.zf) goto L_118e6053;
L_118e600f:;
  /* 118e600f mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118e6012 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6013 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6016 je 0x118e6041 */
  if (C.zf) goto L_118e6041;
  /* 118e6018 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e601a je 0x118e6041 */
  if (C.zf) goto L_118e6041;
  /* 118e601c movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 118e601f test byte ptr [edx + 0x119098e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x119098e1)))&(0x4u); fl_logic(_r,8); }
  /* 118e6026 je 0x118e6034 */
  if (C.zf) goto L_118e6034;
  /* 118e6028 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e602a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e602c je 0x118e6034 */
  if (C.zf) goto L_118e6034;
  /* 118e602e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e6030 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118e6032 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e6033 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118e6034:;
  /* 118e6034 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e6036 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6038 je 0x118e600f */
  if (C.zf) goto L_118e600f;
  /* 118e603a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e603c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118e603e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e603f jmp 0x118e600f */
  goto L_118e600f;
L_118e6041:;
  /* 118e6041 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e6043 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6045 je 0x118e604b */
  if (C.zf) goto L_118e604b;
  /* 118e6047 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 118e604a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e604b:;
  /* 118e604b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e604e jne 0x118e6096 */
  if (!C.zf) goto L_118e6096;
  /* 118e6050 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6051 jmp 0x118e6096 */
  goto L_118e6096;
L_118e6053:;
  /* 118e6053 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e6055 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6057 je 0x118e605e */
  if (C.zf) goto L_118e605e;
  /* 118e6059 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e605b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118e605d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e605e:;
  /* 118e605e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e6060 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6061 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 118e6064 test byte ptr [ebx + 0x119098e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x119098e1)))&(0x4u); fl_logic(_r,8); }
  /* 118e606b je 0x118e6079 */
  if (C.zf) goto L_118e6079;
  /* 118e606d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e606f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6071 je 0x118e6078 */
  if (C.zf) goto L_118e6078;
  /* 118e6073 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 118e6075 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 118e6077 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e6078:;
  /* 118e6078 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118e6079:;
  /* 118e6079 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e607c je 0x118e6087 */
  if (C.zf) goto L_118e6087;
  /* 118e607e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e6080 je 0x118e608b */
  if (C.zf) goto L_118e608b;
  /* 118e6082 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6085 jne 0x118e6053 */
  if (!C.zf) goto L_118e6053;
L_118e6087:;
  /* 118e6087 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e6089 jne 0x118e608e */
  if (!C.zf) goto L_118e608e;
L_118e608b:;
  /* 118e608b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e608c jmp 0x118e6096 */
  goto L_118e6096;
L_118e608e:;
  /* 118e608e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6090 je 0x118e6096 */
  if (C.zf) goto L_118e6096;
  /* 118e6092 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_118e6096:;
  /* 118e6096 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_118e609a:;
  /* 118e609a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e609d je 0x118e6183 */
  if (C.zf) goto L_118e6183;
L_118e60a3:;
  /* 118e60a3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e60a5 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e60a8 je 0x118e60af */
  if (C.zf) goto L_118e60af;
  /* 118e60aa cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e60ad jne 0x118e60b2 */
  if (!C.zf) goto L_118e60b2;
L_118e60af:;
  /* 118e60af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e60b0 jmp 0x118e60a3 */
  goto L_118e60a3;
L_118e60b2:;
  /* 118e60b2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e60b5 je 0x118e6183 */
  if (C.zf) goto L_118e6183;
  /* 118e60bb test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e60bd je 0x118e60c7 */
  if (C.zf) goto L_118e60c7;
  /* 118e60bf mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 118e60c1 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e60c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_118e60c7:;
  /* 118e60c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e60ca inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_118e60cc:;
  /* 118e60cc mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 118e60d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118e60d5:;
  /* 118e60d5 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e60d8 jne 0x118e60de */
  if (!C.zf) goto L_118e60de;
  /* 118e60da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e60db inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e60dc jmp 0x118e60d5 */
  goto L_118e60d5;
L_118e60de:;
  /* 118e60de cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e60e1 jne 0x118e610f */
  if (!C.zf) goto L_118e610f;
  /* 118e60e3 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118e60e6 jne 0x118e610d */
  if (!C.zf) goto L_118e610d;
  /* 118e60e8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e60ea cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e60ed je 0x118e60fc */
  if (C.zf) goto L_118e60fc;
  /* 118e60ef cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e60f3 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 118e60f6 jne 0x118e60fc */
  if (!C.zf) goto L_118e60fc;
  /* 118e60f8 mov eax, edx */
  EAX = (EDX);
  /* 118e60fa jmp 0x118e60ff */
  goto L_118e60ff;
L_118e60fc:;
  /* 118e60fc mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_118e60ff:;
  /* 118e60ff mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6102 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118e6104 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6107 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 118e610a mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_118e610d:;
  /* 118e610d shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_118e610f:;
  /* 118e610f mov edx, ebx */
  EDX = (EBX);
  /* 118e6111 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e6112 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118e6114 je 0x118e6124 */
  if (C.zf) goto L_118e6124;
  /* 118e6116 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_118e6117:;
  /* 118e6117 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6119 je 0x118e611f */
  if (C.zf) goto L_118e611f;
  /* 118e611b mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 118e611e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e611f:;
  /* 118e611f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e6121 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e6122 jne 0x118e6117 */
  if (!C.zf) goto L_118e6117;
L_118e6124:;
  /* 118e6124 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e6126 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e6128 je 0x118e6174 */
  if (C.zf) goto L_118e6174;
  /* 118e612a cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e612e jne 0x118e613a */
  if (!C.zf) goto L_118e613a;
  /* 118e6130 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6133 je 0x118e6174 */
  if (C.zf) goto L_118e6174;
  /* 118e6135 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6138 je 0x118e6174 */
  if (C.zf) goto L_118e6174;
L_118e613a:;
  /* 118e613a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e613e je 0x118e616e */
  if (C.zf) goto L_118e616e;
  /* 118e6140 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6142 je 0x118e615d */
  if (C.zf) goto L_118e615d;
  /* 118e6144 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 118e6147 test byte ptr [ebx + 0x119098e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x119098e1)))&(0x4u); fl_logic(_r,8); }
  /* 118e614e je 0x118e6156 */
  if (C.zf) goto L_118e6156;
  /* 118e6150 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118e6152 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e6153 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6154 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_118e6156:;
  /* 118e6156 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118e6158 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118e615a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e615b jmp 0x118e616c */
  goto L_118e616c;
L_118e615d:;
  /* 118e615d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 118e6160 test byte ptr [edx + 0x119098e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x119098e1)))&(0x4u); fl_logic(_r,8); }
  /* 118e6167 je 0x118e616c */
  if (C.zf) goto L_118e616c;
  /* 118e6169 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e616a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_118e616c:;
  /* 118e616c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_118e616e:;
  /* 118e616e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e616f jmp 0x118e60cc */
  goto L_118e60cc;
L_118e6174:;
  /* 118e6174 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6176 je 0x118e617c */
  if (C.zf) goto L_118e617c;
  /* 118e6178 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 118e617b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e617c:;
  /* 118e617c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118e617e jmp 0x118e609a */
  goto L_118e609a;
L_118e6183:;
  /* 118e6183 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e6185 je 0x118e618a */
  if (C.zf) goto L_118e618a;
  /* 118e6187 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_118e618a:;
  /* 118e618a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e618d pop edi */
  EDI = (pop32());
  /* 118e618e pop esi */
  ESI = (pop32());
  /* 118e618f pop ebx */
  EBX = (pop32());
  /* 118e6190 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 118e6192 pop ebp */
  EBP = (pop32());
  /* 118e6193 ret  */
  ESPCHK(0x118e5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006194 @ 0x118e6194 (306 bytes, 132 insns) */
void f_118e6194(void) {
  FTRACE(0x118e6194u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6194 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6195 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6196 mov eax, dword ptr [0x1190956c] */
  EAX = (r32((uint32_t)(0x1190956c)));
  /* 118e619b push ebx */
  push32((uint32_t)(EBX));
  /* 118e619c push ebp */
  push32((uint32_t)(EBP));
  /* 118e619d mov ebp, dword ptr [0x118ef098] */
  EBP = (r32((uint32_t)(0x118ef098)));
  /* 118e61a3 push esi */
  push32((uint32_t)(ESI));
  /* 118e61a4 push edi */
  push32((uint32_t)(EDI));
  /* 118e61a5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e61a7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e61a9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e61ab cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e61ad jne 0x118e61e2 */
  if (!C.zf) goto L_118e61e2;
  /* 118e61af call ebp */
  call_ind((uint32_t)(EBP), 0x118e61b1u);
  /* 118e61b1 mov esi, eax */
  ESI = (EAX);
  /* 118e61b3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e61b5 je 0x118e61c3 */
  if (C.zf) goto L_118e61c3;
  /* 118e61b7 mov dword ptr [0x1190956c], 1 */
  w32((uint32_t)(0x1190956c), (0x1u));
  /* 118e61c1 jmp 0x118e61eb */
  goto L_118e61eb;
L_118e61c3:;
  /* 118e61c3 call dword ptr [0x118ef09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef09c))), 0x118e61c9u);
  /* 118e61c9 mov edi, eax */
  EDI = (EAX);
  /* 118e61cb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e61cd je 0x118e62bd */
  if (C.zf) goto L_118e62bd;
  /* 118e61d3 mov dword ptr [0x1190956c], 2 */
  w32((uint32_t)(0x1190956c), (0x2u));
  /* 118e61dd jmp 0x118e6271 */
  goto L_118e6271;
L_118e61e2:;
  /* 118e61e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e61e5 jne 0x118e626c */
  if (!C.zf) goto L_118e626c;
L_118e61eb:;
  /* 118e61eb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e61ed jne 0x118e61fb */
  if (!C.zf) goto L_118e61fb;
  /* 118e61ef call ebp */
  call_ind((uint32_t)(EBP), 0x118e61f1u);
  /* 118e61f1 mov esi, eax */
  ESI = (EAX);
  /* 118e61f3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e61f5 je 0x118e62bd */
  if (C.zf) goto L_118e62bd;
L_118e61fb:;
  /* 118e61fb cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e61fe mov eax, esi */
  EAX = (ESI);
  /* 118e6200 je 0x118e6210 */
  if (C.zf) goto L_118e6210;
L_118e6202:;
  /* 118e6202 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6203 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6204 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e6207 jne 0x118e6202 */
  if (!C.zf) goto L_118e6202;
  /* 118e6209 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e620a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e620b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e620e jne 0x118e6202 */
  if (!C.zf) goto L_118e6202;
L_118e6210:;
  /* 118e6210 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6212 mov edi, dword ptr [0x118ef0a0] */
  EDI = (r32((uint32_t)(0x118ef0a0)));
  /* 118e6218 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118e621a push ebx */
  push32((uint32_t)(EBX));
  /* 118e621b push ebx */
  push32((uint32_t)(EBX));
  /* 118e621c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e621d push ebx */
  push32((uint32_t)(EBX));
  /* 118e621e push ebx */
  push32((uint32_t)(EBX));
  /* 118e621f push eax */
  push32((uint32_t)(EAX));
  /* 118e6220 push esi */
  push32((uint32_t)(ESI));
  /* 118e6221 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6222 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6223 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 118e6227 call edi */
  call_ind((uint32_t)(EDI), 0x118e6229u);
  /* 118e6229 mov ebp, eax */
  EBP = (EAX);
  /* 118e622b cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e622d je 0x118e6261 */
  if (C.zf) goto L_118e6261;
  /* 118e622f push ebp */
  push32((uint32_t)(EBP));
  /* 118e6230 call 0x118e553a */
  push32(0x118e6235u); f_118e553a();
  /* 118e6235 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6237 pop ecx */
  ECX = (pop32());
  /* 118e6238 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118e623c je 0x118e6261 */
  if (C.zf) goto L_118e6261;
  /* 118e623e push ebx */
  push32((uint32_t)(EBX));
  /* 118e623f push ebx */
  push32((uint32_t)(EBX));
  /* 118e6240 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6241 push eax */
  push32((uint32_t)(EAX));
  /* 118e6242 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 118e6246 push esi */
  push32((uint32_t)(ESI));
  /* 118e6247 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6248 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6249 call edi */
  call_ind((uint32_t)(EDI), 0x118e624bu);
  /* 118e624b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e624d jne 0x118e625d */
  if (!C.zf) goto L_118e625d;
  /* 118e624f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118e6253 call 0x118e8ae5 */
  push32(0x118e6258u); f_118e8ae5();
  /* 118e6258 pop ecx */
  ECX = (pop32());
  /* 118e6259 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_118e625d:;
  /* 118e625d mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_118e6261:;
  /* 118e6261 push esi */
  push32((uint32_t)(ESI));
  /* 118e6262 call dword ptr [0x118ef0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0a4))), 0x118e6268u);
  /* 118e6268 mov eax, ebx */
  EAX = (EBX);
  /* 118e626a jmp 0x118e62bf */
  goto L_118e62bf;
L_118e626c:;
  /* 118e626c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e626f jne 0x118e62bd */
  if (!C.zf) goto L_118e62bd;
L_118e6271:;
  /* 118e6271 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6273 jne 0x118e6281 */
  if (!C.zf) goto L_118e6281;
  /* 118e6275 call dword ptr [0x118ef09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef09c))), 0x118e627bu);
  /* 118e627b mov edi, eax */
  EDI = (EAX);
  /* 118e627d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e627f je 0x118e62bd */
  if (C.zf) goto L_118e62bd;
L_118e6281:;
  /* 118e6281 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6283 mov eax, edi */
  EAX = (EDI);
  /* 118e6285 je 0x118e6291 */
  if (C.zf) goto L_118e6291;
L_118e6287:;
  /* 118e6287 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6288 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e628a jne 0x118e6287 */
  if (!C.zf) goto L_118e6287;
  /* 118e628c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e628d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e628f jne 0x118e6287 */
  if (!C.zf) goto L_118e6287;
L_118e6291:;
  /* 118e6291 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6293 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6294 mov ebp, eax */
  EBP = (EAX);
  /* 118e6296 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6297 call 0x118e553a */
  push32(0x118e629cu); f_118e553a();
  /* 118e629c mov esi, eax */
  ESI = (EAX);
  /* 118e629e pop ecx */
  ECX = (pop32());
  /* 118e629f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e62a1 jne 0x118e62a7 */
  if (!C.zf) goto L_118e62a7;
  /* 118e62a3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e62a5 jmp 0x118e62b2 */
  goto L_118e62b2;
L_118e62a7:;
  /* 118e62a7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e62a8 push edi */
  push32((uint32_t)(EDI));
  /* 118e62a9 push esi */
  push32((uint32_t)(ESI));
  /* 118e62aa call 0x118e87b0 */
  push32(0x118e62afu); f_118e87b0();
  /* 118e62af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e62b2:;
  /* 118e62b2 push edi */
  push32((uint32_t)(EDI));
  /* 118e62b3 call dword ptr [0x118ef0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0a8))), 0x118e62b9u);
  /* 118e62b9 mov eax, esi */
  EAX = (ESI);
  /* 118e62bb jmp 0x118e62bf */
  goto L_118e62bf;
L_118e62bd:;
  /* 118e62bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e62bf:;
  /* 118e62bf pop edi */
  EDI = (pop32());
  /* 118e62c0 pop esi */
  ESI = (pop32());
  /* 118e62c1 pop ebp */
  EBP = (pop32());
  /* 118e62c2 pop ebx */
  EBX = (pop32());
  /* 118e62c3 pop ecx */
  ECX = (pop32());
  /* 118e62c4 pop ecx */
  ECX = (pop32());
  /* 118e62c5 ret  */
  ESPCHK(0x118e6194u, _esp0);
  ESP += 4; return;
}

/* FUN_100062c6 @ 0x118e62c6 (45 bytes, 17 insns) */
void f_118e62c6(void) {
  FTRACE(0x118e62c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e62c6 push esi */
  push32((uint32_t)(ESI));
  /* 118e62c7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e62cb push 0 */
  push32((uint32_t)(0x0u));
  /* 118e62cd and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118e62d0 call dword ptr [0x118ef004] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef004))), 0x118e62d6u);
  /* 118e62d6 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e62db jne 0x118e62f1 */
  if (!C.zf) goto L_118e62f1;
  /* 118e62dd mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 118e62e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118e62e2 je 0x118e62f1 */
  if (C.zf) goto L_118e62f1;
  /* 118e62e4 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e62e6 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 118e62e9 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 118e62eb mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 118e62ee mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_118e62f1:;
  /* 118e62f1 pop esi */
  ESI = (pop32());
  /* 118e62f2 ret  */
  ESPCHK(0x118e62c6u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f3 @ 0x118e62f3 (328 bytes, 115 insns) */
void f_118e62f3(void) {
  FTRACE(0x118e62f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e62f3 push ebp */
  push32((uint32_t)(EBP));
  /* 118e62f4 mov ebp, esp */
  EBP = (ESP);
  /* 118e62f6 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 118e62fb call 0x118ea230 */
  push32(0x118e6300u); f_118ea230();
  /* 118e6300 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 118e6306 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6307 push eax */
  push32((uint32_t)(EAX));
  /* 118e6308 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 118e6312 call dword ptr [0x118ef090] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef090))), 0x118e6318u);
  /* 118e6318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e631a je 0x118e6336 */
  if (C.zf) goto L_118e6336;
  /* 118e631c cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6323 jne 0x118e6336 */
  if (!C.zf) goto L_118e6336;
  /* 118e6325 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e632c jb 0x118e6336 */
  if (C.cf) goto L_118e6336;
  /* 118e632e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6330 pop eax */
  EAX = (pop32());
  /* 118e6331 jmp 0x118e6438 */
  goto L_118e6438;
L_118e6336:;
  /* 118e6336 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118e633c push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 118e6341 push eax */
  push32((uint32_t)(EAX));
  /* 118e6342 push 0x118ef38c */
  push32((uint32_t)(0x118ef38cu));
  /* 118e6347 call dword ptr [0x118ef094] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef094))), 0x118e634du);
  /* 118e634d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e634f je 0x118e6425 */
  if (C.zf) goto L_118e6425;
  /* 118e6355 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e6357 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 118e635d cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6363 je 0x118e6378 */
  if (C.zf) goto L_118e6378;
L_118e6365:;
  /* 118e6365 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118e6367 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6369 jl 0x118e6373 */
  if ((C.sf!=C.of)) goto L_118e6373;
  /* 118e636b cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e636d jg 0x118e6373 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e6373;
  /* 118e636f sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118e6371 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_118e6373:;
  /* 118e6373 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e6374 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6376 jne 0x118e6365 */
  if (!C.zf) goto L_118e6365;
L_118e6378:;
  /* 118e6378 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118e637e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118e6380 push eax */
  push32((uint32_t)(EAX));
  /* 118e6381 push 0x118ef374 */
  push32((uint32_t)(0x118ef374u));
  /* 118e6386 call 0x118ea1f0 */
  push32(0x118e638bu); f_118ea1f0();
  /* 118e638b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e638e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6390 jne 0x118e639a */
  if (!C.zf) goto L_118e639a;
  /* 118e6392 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118e6398 jmp 0x118e63e3 */
  goto L_118e63e3;
L_118e639a:;
  /* 118e639a lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 118e63a0 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118e63a5 push eax */
  push32((uint32_t)(EAX));
  /* 118e63a6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e63a7 call dword ptr [0x118ef0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0ac))), 0x118e63adu);
  /* 118e63ad cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e63b3 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 118e63b9 je 0x118e63ce */
  if (C.zf) goto L_118e63ce;
L_118e63bb:;
  /* 118e63bb mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118e63bd cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e63bf jl 0x118e63c9 */
  if ((C.sf!=C.of)) goto L_118e63c9;
  /* 118e63c1 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e63c3 jg 0x118e63c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e63c9;
  /* 118e63c5 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118e63c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_118e63c9:;
  /* 118e63c9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e63ca cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e63cc jne 0x118e63bb */
  if (!C.zf) goto L_118e63bb;
L_118e63ce:;
  /* 118e63ce lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 118e63d4 push eax */
  push32((uint32_t)(EAX));
  /* 118e63d5 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118e63db push eax */
  push32((uint32_t)(EAX));
  /* 118e63dc call 0x118ea170 */
  push32(0x118e63e1u); f_118ea170();
  /* 118e63e1 pop ecx */
  ECX = (pop32());
  /* 118e63e2 pop ecx */
  ECX = (pop32());
L_118e63e3:;
  /* 118e63e3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e63e5 je 0x118e6425 */
  if (C.zf) goto L_118e6425;
  /* 118e63e7 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 118e63e9 push eax */
  push32((uint32_t)(EAX));
  /* 118e63ea call 0x118ea0b0 */
  push32(0x118e63efu); f_118ea0b0();
  /* 118e63ef pop ecx */
  ECX = (pop32());
  /* 118e63f0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e63f2 pop ecx */
  ECX = (pop32());
  /* 118e63f3 je 0x118e6425 */
  if (C.zf) goto L_118e6425;
  /* 118e63f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e63f6 mov ecx, eax */
  ECX = (EAX);
  /* 118e63f8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e63fa je 0x118e640a */
  if (C.zf) goto L_118e640a;
L_118e63fc:;
  /* 118e63fc cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e63ff jne 0x118e6405 */
  if (!C.zf) goto L_118e6405;
  /* 118e6401 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 118e6403 jmp 0x118e6406 */
  goto L_118e6406;
L_118e6405:;
  /* 118e6405 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_118e6406:;
  /* 118e6406 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6408 jne 0x118e63fc */
  if (!C.zf) goto L_118e63fc;
L_118e640a:;
  /* 118e640a push 0xa */
  push32((uint32_t)(0xau));
  /* 118e640c push ebx */
  push32((uint32_t)(EBX));
  /* 118e640d push eax */
  push32((uint32_t)(EAX));
  /* 118e640e call 0x118e9e78 */
  push32(0x118e6413u); f_118e9e78();
  /* 118e6413 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6416 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6419 je 0x118e6438 */
  if (C.zf) goto L_118e6438;
  /* 118e641b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e641e je 0x118e6438 */
  if (C.zf) goto L_118e6438;
  /* 118e6420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6423 je 0x118e6438 */
  if (C.zf) goto L_118e6438;
L_118e6425:;
  /* 118e6425 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118e6428 push eax */
  push32((uint32_t)(EAX));
  /* 118e6429 call 0x118e62c6 */
  push32(0x118e642eu); f_118e62c6();
  /* 118e642e cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6432 pop ecx */
  ECX = (pop32());
  /* 118e6433 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6435 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118e6438:;
  /* 118e6438 pop ebx */
  EBX = (pop32());
  /* 118e6439 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e643a ret  */
  ESPCHK(0x118e62f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000643b @ 0x118e643b (93 bytes, 30 insns) */
void f_118e643b(void) {
  FTRACE(0x118e643bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e643b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e643d push 0 */
  push32((uint32_t)(0x0u));
  /* 118e643f cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6443 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118e6448 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118e644b push eax */
  push32((uint32_t)(EAX));
  /* 118e644c call dword ptr [0x118ef088] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef088))), 0x118e6452u);
  /* 118e6452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6454 mov dword ptr [0x1190aa20], eax */
  w32((uint32_t)(0x1190aa20), (EAX));
  /* 118e6459 je 0x118e6491 */
  if (C.zf) goto L_118e6491;
  /* 118e645b call 0x118e62f3 */
  push32(0x118e6460u); f_118e62f3();
  /* 118e6460 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6463 mov dword ptr [0x1190aa24], eax */
  w32((uint32_t)(0x1190aa24), (EAX));
  /* 118e6468 jne 0x118e6477 */
  if (!C.zf) goto L_118e6477;
  /* 118e646a push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 118e646f call 0x118e757f */
  push32(0x118e6474u); f_118e757f();
  /* 118e6474 pop ecx */
  ECX = (pop32());
  /* 118e6475 jmp 0x118e6481 */
  goto L_118e6481;
L_118e6477:;
  /* 118e6477 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e647a jne 0x118e6494 */
  if (!C.zf) goto L_118e6494;
  /* 118e647c call 0x118e80c6 */
  push32(0x118e6481u); f_118e80c6();
L_118e6481:;
  /* 118e6481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6483 jne 0x118e6494 */
  if (!C.zf) goto L_118e6494;
  /* 118e6485 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e648b call dword ptr [0x118ef08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef08c))), 0x118e6491u);
L_118e6491:;
  /* 118e6491 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6493 ret  */
  ESPCHK(0x118e643bu, _esp0);
  ESP += 4; return;
L_118e6494:;
  /* 118e6494 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6496 pop eax */
  EAX = (pop32());
  /* 118e6497 ret  */
  ESPCHK(0x118e643bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006498 @ 0x118e6498 (168 bytes, 56 insns) */
void f_118e6498(void) {
  FTRACE(0x118e6498u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6498 mov eax, dword ptr [0x1190aa24] */
  EAX = (r32((uint32_t)(0x1190aa24)));
  /* 118e649d push esi */
  push32((uint32_t)(ESI));
  /* 118e649e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e64a1 push edi */
  push32((uint32_t)(EDI));
  /* 118e64a2 jne 0x118e650a */
  if (!C.zf) goto L_118e650a;
  /* 118e64a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118e64a5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e64a7 cmp dword ptr [0x1190aa14], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1190aa14))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e64ad push ebp */
  push32((uint32_t)(EBP));
  /* 118e64ae mov ebp, dword ptr [0x118ef080] */
  EBP = (r32((uint32_t)(0x118ef080)));
  /* 118e64b4 jle 0x118e64f6 */
  if ((C.zf||C.sf!=C.of)) goto L_118e64f6;
  /* 118e64b6 mov eax, dword ptr [0x1190aa18] */
  EAX = (r32((uint32_t)(0x1190aa18)));
  /* 118e64bb mov edi, dword ptr [0x118ef084] */
  EDI = (r32((uint32_t)(0x118ef084)));
  /* 118e64c1 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_118e64c4:;
  /* 118e64c4 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 118e64c9 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 118e64ce push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e64d0 call edi */
  call_ind((uint32_t)(EDI), 0x118e64d2u);
  /* 118e64d2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118e64d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e64d9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e64db call edi */
  call_ind((uint32_t)(EDI), 0x118e64ddu);
  /* 118e64dd push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 118e64e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e64e2 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e64e8 call ebp */
  call_ind((uint32_t)(EBP), 0x118e64eau);
  /* 118e64ea add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e64ed inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e64ee cmp ebx, dword ptr [0x1190aa14] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1190aa14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e64f4 jl 0x118e64c4 */
  if ((C.sf!=C.of)) goto L_118e64c4;
L_118e64f6:;
  /* 118e64f6 push dword ptr [0x1190aa18] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa18))));
  /* 118e64fc push 0 */
  push32((uint32_t)(0x0u));
  /* 118e64fe push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e6504 call ebp */
  call_ind((uint32_t)(EBP), 0x118e6506u);
  /* 118e6506 pop ebp */
  EBP = (pop32());
  /* 118e6507 pop ebx */
  EBX = (pop32());
  /* 118e6508 jmp 0x118e6531 */
  goto L_118e6531;
L_118e650a:;
  /* 118e650a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e650d jne 0x118e6531 */
  if (!C.zf) goto L_118e6531;
  /* 118e650f mov edi, 0x118f1b60 */
  EDI = (0x118f1b60u);
  /* 118e6514 mov esi, edi */
  ESI = (EDI);
L_118e6516:;
  /* 118e6516 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118e6519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e651b je 0x118e652b */
  if (C.zf) goto L_118e652b;
  /* 118e651d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118e6522 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e6524 push eax */
  push32((uint32_t)(EAX));
  /* 118e6525 call dword ptr [0x118ef084] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef084))), 0x118e652bu);
L_118e652b:;
  /* 118e652b mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 118e652d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e652f jne 0x118e6516 */
  if (!C.zf) goto L_118e6516;
L_118e6531:;
  /* 118e6531 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e6537 call dword ptr [0x118ef08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef08c))), 0x118e653du);
  /* 118e653d pop edi */
  EDI = (pop32());
  /* 118e653e pop esi */
  ESI = (pop32());
  /* 118e653f ret  */
  ESPCHK(0x118e6498u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x118e6540 (57 bytes, 18 insns) */
void f_118e6540(void) {
  FTRACE(0x118e6540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6540 mov eax, dword ptr [0x1190941c] */
  EAX = (r32((uint32_t)(0x1190941c)));
  /* 118e6545 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6548 je 0x118e6557 */
  if (C.zf) goto L_118e6557;
  /* 118e654a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e654c jne 0x118e6578 */
  if (!C.zf) goto L_118e6578;
  /* 118e654e cmp dword ptr [0x11909420], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11909420))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6555 jne 0x118e6578 */
  if (!C.zf) goto L_118e6578;
L_118e6557:;
  /* 118e6557 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 118e655c call 0x118e6579 */
  push32(0x118e6561u); f_118e6579();
  /* 118e6561 mov eax, dword ptr [0x11909570] */
  EAX = (r32((uint32_t)(0x11909570)));
  /* 118e6566 pop ecx */
  ECX = (pop32());
  /* 118e6567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6569 je 0x118e656d */
  if (C.zf) goto L_118e656d;
  /* 118e656b call eax */
  call_ind((uint32_t)(EAX), 0x118e656du);
L_118e656d:;
  /* 118e656d push 0xff */
  push32((uint32_t)(0xffu));
  /* 118e6572 call 0x118e6579 */
  push32(0x118e6577u); f_118e6579();
  /* 118e6577 pop ecx */
  ECX = (pop32());
L_118e6578:;
  /* 118e6578 ret  */
  ESPCHK(0x118e6540u, _esp0);
  ESP += 4; return;
}

/* FUN_10006579 @ 0x118e6579 (339 bytes, 100 insns) */
void f_118e6579(void) {
  FTRACE(0x118e6579u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6579 push ebp */
  push32((uint32_t)(EBP));
  /* 118e657a mov ebp, esp */
  EBP = (ESP);
  /* 118e657c sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6585 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e6587 mov eax, 0x118f17c8 */
  EAX = (0x118f17c8u);
L_118e658c:;
  /* 118e658c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e658e je 0x118e659b */
  if (C.zf) goto L_118e659b;
  /* 118e6590 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6593 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e6594 cmp eax, 0x118f1858 */
  { uint32_t _a=(EAX),_b=(0x118f1858u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6599 jl 0x118e658c */
  if ((C.sf!=C.of)) goto L_118e658c;
L_118e659b:;
  /* 118e659b push esi */
  push32((uint32_t)(ESI));
  /* 118e659c mov esi, ecx */
  ESI = (ECX);
  /* 118e659e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 118e65a1 cmp edx, dword ptr [esi + 0x118f17c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x118f17c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e65a7 jne 0x118e66c9 */
  if (!C.zf) goto L_118e66c9;
  /* 118e65ad mov eax, dword ptr [0x1190941c] */
  EAX = (r32((uint32_t)(0x1190941c)));
  /* 118e65b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e65b5 je 0x118e66a3 */
  if (C.zf) goto L_118e66a3;
  /* 118e65bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e65bd jne 0x118e65cc */
  if (!C.zf) goto L_118e65cc;
  /* 118e65bf cmp dword ptr [0x11909420], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11909420))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e65c6 je 0x118e66a3 */
  if (C.zf) goto L_118e66a3;
L_118e65cc:;
  /* 118e65cc cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e65d2 je 0x118e66c9 */
  if (C.zf) goto L_118e66c9;
  /* 118e65d8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118e65de push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118e65e3 push eax */
  push32((uint32_t)(EAX));
  /* 118e65e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e65e6 call dword ptr [0x118ef0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0ac))), 0x118e65ecu);
  /* 118e65ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e65ee jne 0x118e6603 */
  if (!C.zf) goto L_118e6603;
  /* 118e65f0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118e65f6 push 0x118ef67c */
  push32((uint32_t)(0x118ef67cu));
  /* 118e65fb push eax */
  push32((uint32_t)(EAX));
  /* 118e65fc call 0x118e6f60 */
  push32(0x118e6601u); f_118e6f60();
  /* 118e6601 pop ecx */
  ECX = (pop32());
  /* 118e6602 pop ecx */
  ECX = (pop32());
L_118e6603:;
  /* 118e6603 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118e6609 push edi */
  push32((uint32_t)(EDI));
  /* 118e660a push eax */
  push32((uint32_t)(EAX));
  /* 118e660b lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 118e6611 call 0x118e73f0 */
  push32(0x118e6616u); f_118e73f0();
  /* 118e6616 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6617 pop ecx */
  ECX = (pop32());
  /* 118e6618 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e661b jbe 0x118e6646 */
  if ((C.cf||C.zf)) goto L_118e6646;
  /* 118e661d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118e6623 push eax */
  push32((uint32_t)(EAX));
  /* 118e6624 call 0x118e73f0 */
  push32(0x118e6629u); f_118e73f0();
  /* 118e6629 mov edi, eax */
  EDI = (EAX);
  /* 118e662b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118e6631 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6634 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e6636 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6638 push 0x118ef678 */
  push32((uint32_t)(0x118ef678u));
  /* 118e663d push edi */
  push32((uint32_t)(EDI));
  /* 118e663e call 0x118ea2f0 */
  push32(0x118e6643u); f_118ea2f0();
  /* 118e6643 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e6646:;
  /* 118e6646 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118e664c push 0x118ef65c */
  push32((uint32_t)(0x118ef65cu));
  /* 118e6651 push eax */
  push32((uint32_t)(EAX));
  /* 118e6652 call 0x118e6f60 */
  push32(0x118e6657u); f_118e6f60();
  /* 118e6657 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118e665d push edi */
  push32((uint32_t)(EDI));
  /* 118e665e push eax */
  push32((uint32_t)(EAX));
  /* 118e665f call 0x118e6f70 */
  push32(0x118e6664u); f_118e6f70();
  /* 118e6664 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118e666a push 0x118ef658 */
  push32((uint32_t)(0x118ef658u));
  /* 118e666f push eax */
  push32((uint32_t)(EAX));
  /* 118e6670 call 0x118e6f70 */
  push32(0x118e6675u); f_118e6f70();
  /* 118e6675 push dword ptr [esi + 0x118f17cc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x118f17cc))));
  /* 118e667b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118e6681 push eax */
  push32((uint32_t)(EAX));
  /* 118e6682 call 0x118e6f70 */
  push32(0x118e6687u); f_118e6f70();
  /* 118e6687 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 118e668c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118e6692 push 0x118ef630 */
  push32((uint32_t)(0x118ef630u));
  /* 118e6697 push eax */
  push32((uint32_t)(EAX));
  /* 118e6698 call 0x118ea25f */
  push32(0x118e669du); f_118ea25f();
  /* 118e669d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e66a0 pop edi */
  EDI = (pop32());
  /* 118e66a1 jmp 0x118e66c9 */
  goto L_118e66c9;
L_118e66a3:;
  /* 118e66a3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118e66a6 lea esi, [esi + 0x118f17cc] */
  ESI = ((uint32_t)(ESI + 0x118f17cc));
  /* 118e66ac push 0 */
  push32((uint32_t)(0x0u));
  /* 118e66ae push eax */
  push32((uint32_t)(EAX));
  /* 118e66af push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e66b1 call 0x118e73f0 */
  push32(0x118e66b6u); f_118e73f0();
  /* 118e66b6 pop ecx */
  ECX = (pop32());
  /* 118e66b7 push eax */
  push32((uint32_t)(EAX));
  /* 118e66b8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e66ba push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 118e66bc call dword ptr [0x118ef0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0bc))), 0x118e66c2u);
  /* 118e66c2 push eax */
  push32((uint32_t)(EAX));
  /* 118e66c3 call dword ptr [0x118ef07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef07c))), 0x118e66c9u);
L_118e66c9:;
  /* 118e66c9 pop esi */
  ESI = (pop32());
  /* 118e66ca leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e66cb ret  */
  ESPCHK(0x118e6579u, _esp0);
  ESP += 4; return;
}

/* FUN_100066cc @ 0x118e66cc (53 bytes, 25 insns) */
void f_118e66cc(void) {
  FTRACE(0x118e66ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e66cc push ebp */
  push32((uint32_t)(EBP));
  /* 118e66cd mov ebp, esp */
  EBP = (ESP);
  /* 118e66cf push ecx */
  push32((uint32_t)(ECX));
  /* 118e66d0 push esi */
  push32((uint32_t)(ESI));
  /* 118e66d1 wait  */
  /* wait (no observable integer/reg state) */
  /* 118e66d2 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 118e66d5 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118e66d8 call 0x118e6717 */
  push32(0x118e66ddu); f_118e6717();
  /* 118e66dd mov esi, eax */
  ESI = (EAX);
  /* 118e66df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e66e2 not eax */
  EAX = (~(EAX));
  /* 118e66e4 and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 118e66e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e66e9 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 118e66ec or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 118e66ee push esi */
  push32((uint32_t)(ESI));
  /* 118e66ef call 0x118e67a9 */
  push32(0x118e66f4u); f_118e67a9();
  /* 118e66f4 pop ecx */
  ECX = (pop32());
  /* 118e66f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118e66f8 pop ecx */
  ECX = (pop32());
  /* 118e66f9 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 118e66fc mov eax, esi */
  EAX = (ESI);
  /* 118e66fe pop esi */
  ESI = (pop32());
  /* 118e66ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6700 ret  */
  ESPCHK(0x118e66ccu, _esp0);
  ESP += 4; return;
}

/* FUN_10006701 @ 0x118e6701 (22 bytes, 8 insns) */
void f_118e6701(void) {
  FTRACE(0x118e6701u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6701 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e6705 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e670a push eax */
  push32((uint32_t)(EAX));
  /* 118e670b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118e670f call 0x118e66cc */
  push32(0x118e6714u); f_118e66cc();
  /* 118e6714 pop ecx */
  ECX = (pop32());
  /* 118e6715 pop ecx */
  ECX = (pop32());
  /* 118e6716 ret  */
  ESPCHK(0x118e6701u, _esp0);
  ESP += 4; return;
}

/* FUN_10006717 @ 0x118e6717 (146 bytes, 58 insns) */
void f_118e6717(void) {
  FTRACE(0x118e6717u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6717 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6718 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e671c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e671e push ebp */
  push32((uint32_t)(EBP));
  /* 118e671f test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118e6722 push edi */
  push32((uint32_t)(EDI));
  /* 118e6723 je 0x118e6728 */
  if (C.zf) goto L_118e6728;
  /* 118e6725 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e6727 pop eax */
  EAX = (pop32());
L_118e6728:;
  /* 118e6728 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 118e672b je 0x118e672f */
  if (C.zf) goto L_118e672f;
  /* 118e672d or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_118e672f:;
  /* 118e672f test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 118e6732 je 0x118e6736 */
  if (C.zf) goto L_118e6736;
  /* 118e6734 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_118e6736:;
  /* 118e6736 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 118e6739 je 0x118e673d */
  if (C.zf) goto L_118e673d;
  /* 118e673b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_118e673d:;
  /* 118e673d test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 118e6740 je 0x118e6744 */
  if (C.zf) goto L_118e6744;
  /* 118e6742 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_118e6744:;
  /* 118e6744 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 118e6747 je 0x118e674e */
  if (C.zf) goto L_118e674e;
  /* 118e6749 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_118e674e:;
  /* 118e674e movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 118e6751 push esi */
  push32((uint32_t)(ESI));
  /* 118e6752 mov edx, ecx */
  EDX = (ECX);
  /* 118e6754 mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 118e6759 mov edi, 0x300 */
  EDI = (0x300u);
  /* 118e675e and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 118e6760 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 118e6765 je 0x118e6786 */
  if (C.zf) goto L_118e6786;
  /* 118e6767 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e676d je 0x118e6783 */
  if (C.zf) goto L_118e6783;
  /* 118e676f cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6775 je 0x118e677f */
  if (C.zf) goto L_118e677f;
  /* 118e6777 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6779 jne 0x118e6786 */
  if (!C.zf) goto L_118e6786;
  /* 118e677b or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 118e677d jmp 0x118e6786 */
  goto L_118e6786;
L_118e677f:;
  /* 118e677f or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 118e6781 jmp 0x118e6786 */
  goto L_118e6786;
L_118e6783:;
  /* 118e6783 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_118e6786:;
  /* 118e6786 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118e6788 pop esi */
  ESI = (pop32());
  /* 118e6789 je 0x118e6796 */
  if (C.zf) goto L_118e6796;
  /* 118e678b cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e678d jne 0x118e679b */
  if (!C.zf) goto L_118e679b;
  /* 118e678f or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 118e6794 jmp 0x118e679b */
  goto L_118e679b;
L_118e6796:;
  /* 118e6796 or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_118e679b:;
  /* 118e679b pop edi */
  EDI = (pop32());
  /* 118e679c pop ebp */
  EBP = (pop32());
  /* 118e679d test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 118e67a0 pop ebx */
  EBX = (pop32());
  /* 118e67a1 je 0x118e67a8 */
  if (C.zf) goto L_118e67a8;
  /* 118e67a3 or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_118e67a8:;
  /* 118e67a8 ret  */
  ESPCHK(0x118e6717u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a9 @ 0x118e67a9 (137 bytes, 53 insns) */
void f_118e67a9(void) {
  FTRACE(0x118e67a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e67a9 push ebx */
  push32((uint32_t)(EBX));
  /* 118e67aa mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e67ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e67b0 push esi */
  push32((uint32_t)(ESI));
  /* 118e67b1 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 118e67b4 je 0x118e67b9 */
  if (C.zf) goto L_118e67b9;
  /* 118e67b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e67b8 pop eax */
  EAX = (pop32());
L_118e67b9:;
  /* 118e67b9 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 118e67bc je 0x118e67c0 */
  if (C.zf) goto L_118e67c0;
  /* 118e67be or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_118e67c0:;
  /* 118e67c0 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 118e67c3 je 0x118e67c7 */
  if (C.zf) goto L_118e67c7;
  /* 118e67c5 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_118e67c7:;
  /* 118e67c7 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 118e67ca je 0x118e67ce */
  if (C.zf) goto L_118e67ce;
  /* 118e67cc or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_118e67ce:;
  /* 118e67ce test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118e67d1 je 0x118e67d5 */
  if (C.zf) goto L_118e67d5;
  /* 118e67d3 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_118e67d5:;
  /* 118e67d5 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 118e67db je 0x118e67df */
  if (C.zf) goto L_118e67df;
  /* 118e67dd or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_118e67df:;
  /* 118e67df mov ecx, ebx */
  ECX = (EBX);
  /* 118e67e1 mov edx, 0x300 */
  EDX = (0x300u);
  /* 118e67e6 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118e67e8 mov esi, 0x200 */
  ESI = (0x200u);
  /* 118e67ed je 0x118e680c */
  if (C.zf) goto L_118e680c;
  /* 118e67ef cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e67f5 je 0x118e6809 */
  if (C.zf) goto L_118e6809;
  /* 118e67f7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e67f9 je 0x118e6804 */
  if (C.zf) goto L_118e6804;
  /* 118e67fb cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e67fd jne 0x118e680c */
  if (!C.zf) goto L_118e680c;
  /* 118e67ff or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 118e6802 jmp 0x118e680c */
  goto L_118e680c;
L_118e6804:;
  /* 118e6804 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 118e6807 jmp 0x118e680c */
  goto L_118e680c;
L_118e6809:;
  /* 118e6809 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_118e680c:;
  /* 118e680c mov ecx, ebx */
  ECX = (EBX);
  /* 118e680e and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 118e6814 je 0x118e6822 */
  if (C.zf) goto L_118e6822;
  /* 118e6816 cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e681c jne 0x118e6824 */
  if (!C.zf) goto L_118e6824;
  /* 118e681e or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 118e6820 jmp 0x118e6824 */
  goto L_118e6824;
L_118e6822:;
  /* 118e6822 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_118e6824:;
  /* 118e6824 pop esi */
  ESI = (pop32());
  /* 118e6825 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 118e682b pop ebx */
  EBX = (pop32());
  /* 118e682c je 0x118e6831 */
  if (C.zf) goto L_118e6831;
  /* 118e682e or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_118e6831:;
  /* 118e6831 ret  */
  ESPCHK(0x118e67a9u, _esp0);
  ESP += 4; return;
}

/* FUN_10006832 @ 0x118e6832 (117 bytes, 46 insns) */
void f_118e6832(void) {
  FTRACE(0x118e6832u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6832 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6833 mov ebp, esp */
  EBP = (ESP);
  /* 118e6835 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6839 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 118e683c cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6842 ja 0x118e6850 */
  if ((!C.cf&&!C.zf)) goto L_118e6850;
  /* 118e6844 mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118e684a movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 118e684e jmp 0x118e68a2 */
  goto L_118e68a2;
L_118e6850:;
  /* 118e6850 mov ecx, eax */
  ECX = (EAX);
  /* 118e6852 push esi */
  push32((uint32_t)(ESI));
  /* 118e6853 mov esi, dword ptr [0x118f1864] */
  ESI = (r32((uint32_t)(0x118f1864)));
  /* 118e6859 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 118e685c movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 118e685f test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118e6864 pop esi */
  ESI = (pop32());
  /* 118e6865 je 0x118e6875 */
  if (C.zf) goto L_118e6875;
  /* 118e6867 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 118e686b mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 118e686e mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 118e6871 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e6873 jmp 0x118e687e */
  goto L_118e687e;
L_118e6875:;
  /* 118e6875 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118e6879 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 118e687c push 1 */
  push32((uint32_t)(0x1u));
L_118e687e:;
  /* 118e687e pop eax */
  EAX = (pop32());
  /* 118e687f lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 118e6882 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6884 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e6886 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e6888 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6889 push eax */
  push32((uint32_t)(EAX));
  /* 118e688a lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118e688d push eax */
  push32((uint32_t)(EAX));
  /* 118e688e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6890 call 0x118ea5ad */
  push32(0x118e6895u); f_118ea5ad();
  /* 118e6895 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e689a jne 0x118e689e */
  if (!C.zf) goto L_118e689e;
  /* 118e689c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e689d ret  */
  ESPCHK(0x118e6832u, _esp0);
  ESP += 4; return;
L_118e689e:;
  /* 118e689e movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_118e68a2:;
  /* 118e68a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 118e68a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e68a6 ret  */
  ESPCHK(0x118e6832u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a7 @ 0x118e68a7 (111 bytes, 44 insns) */
void f_118e68a7(void) {
  FTRACE(0x118e68a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e68a7 push ebx */
  push32((uint32_t)(EBX));
  /* 118e68a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e68aa cmp dword ptr [0x119096e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119096e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e68b0 jne 0x118e68c5 */
  if (!C.zf) goto L_118e68c5;
  /* 118e68b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e68b6 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e68b9 jl 0x118e6914 */
  if ((C.sf!=C.of)) goto L_118e6914;
  /* 118e68bb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e68be jg 0x118e6914 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e6914;
  /* 118e68c0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e68c3 pop ebx */
  EBX = (pop32());
  /* 118e68c4 ret  */
  ESPCHK(0x118e68a7u, _esp0);
  ESP += 4; return;
L_118e68c5:;
  /* 118e68c5 push esi */
  push32((uint32_t)(ESI));
  /* 118e68c6 mov esi, 0x119097c8 */
  ESI = (0x119097c8u);
  /* 118e68cb push edi */
  push32((uint32_t)(EDI));
  /* 118e68cc push esi */
  push32((uint32_t)(ESI));
  /* 118e68cd call dword ptr [0x118ef074] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef074))), 0x118e68d3u);
  /* 118e68d3 cmp dword ptr [0x119097c4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119097c4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e68d9 mov edi, dword ptr [0x118ef078] */
  EDI = (r32((uint32_t)(0x118ef078)));
  /* 118e68df je 0x118e68ef */
  if (C.zf) goto L_118e68ef;
  /* 118e68e1 push esi */
  push32((uint32_t)(ESI));
  /* 118e68e2 call edi */
  call_ind((uint32_t)(EDI), 0x118e68e4u);
  /* 118e68e4 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118e68e6 call 0x118e7509 */
  push32(0x118e68ebu); f_118e7509();
  /* 118e68eb pop ecx */
  ECX = (pop32());
  /* 118e68ec push 1 */
  push32((uint32_t)(0x1u));
  /* 118e68ee pop ebx */
  EBX = (pop32());
L_118e68ef:;
  /* 118e68ef push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118e68f3 call 0x118e6916 */
  push32(0x118e68f8u); f_118e6916();
  /* 118e68f8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e68fa pop ecx */
  ECX = (pop32());
  /* 118e68fb mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118e68ff je 0x118e690b */
  if (C.zf) goto L_118e690b;
  /* 118e6901 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118e6903 call 0x118e756a */
  push32(0x118e6908u); f_118e756a();
  /* 118e6908 pop ecx */
  ECX = (pop32());
  /* 118e6909 jmp 0x118e690e */
  goto L_118e690e;
L_118e690b:;
  /* 118e690b push esi */
  push32((uint32_t)(ESI));
  /* 118e690c call edi */
  call_ind((uint32_t)(EDI), 0x118e690eu);
L_118e690e:;
  /* 118e690e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e6912 pop edi */
  EDI = (pop32());
  /* 118e6913 pop esi */
  ESI = (pop32());
L_118e6914:;
  /* 118e6914 pop ebx */
  EBX = (pop32());
  /* 118e6915 ret  */
  ESPCHK(0x118e68a7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006916 @ 0x118e6916 (203 bytes, 78 insns) */
void f_118e6916(void) {
  FTRACE(0x118e6916u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6916 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6917 mov ebp, esp */
  EBP = (ESP);
  /* 118e6919 push ecx */
  push32((uint32_t)(ECX));
  /* 118e691a cmp dword ptr [0x119096e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119096e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6921 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6922 push esi */
  push32((uint32_t)(ESI));
  /* 118e6923 push edi */
  push32((uint32_t)(EDI));
  /* 118e6924 jne 0x118e6943 */
  if (!C.zf) goto L_118e6943;
  /* 118e6926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6929 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e692c jl 0x118e69dc */
  if ((C.sf!=C.of)) goto L_118e69dc;
  /* 118e6932 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6935 jg 0x118e69dc */
  if ((!C.zf&&C.sf==C.of)) goto L_118e69dc;
  /* 118e693b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e693e jmp 0x118e69dc */
  goto L_118e69dc;
L_118e6943:;
  /* 118e6943 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6946 mov edi, 0x100 */
  EDI = (0x100u);
  /* 118e694b push 1 */
  push32((uint32_t)(0x1u));
  /* 118e694d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e694f pop esi */
  ESI = (pop32());
  /* 118e6950 jge 0x118e6977 */
  if ((C.sf==C.of)) goto L_118e6977;
  /* 118e6952 cmp dword ptr [0x118f1858], esi */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6958 jle 0x118e6965 */
  if ((C.zf||C.sf!=C.of)) goto L_118e6965;
  /* 118e695a push esi */
  push32((uint32_t)(ESI));
  /* 118e695b push ebx */
  push32((uint32_t)(EBX));
  /* 118e695c call 0x118e6832 */
  push32(0x118e6961u); f_118e6832();
  /* 118e6961 pop ecx */
  ECX = (pop32());
  /* 118e6962 pop ecx */
  ECX = (pop32());
  /* 118e6963 jmp 0x118e696f */
  goto L_118e696f;
L_118e6965:;
  /* 118e6965 mov eax, dword ptr [0x118f1864] */
  EAX = (r32((uint32_t)(0x118f1864)));
  /* 118e696a mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 118e696d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118e696f:;
  /* 118e696f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6971 jne 0x118e6977 */
  if (!C.zf) goto L_118e6977;
L_118e6973:;
  /* 118e6973 mov eax, ebx */
  EAX = (EBX);
  /* 118e6975 jmp 0x118e69dc */
  goto L_118e69dc;
L_118e6977:;
  /* 118e6977 mov edx, dword ptr [0x118f1864] */
  EDX = (r32((uint32_t)(0x118f1864)));
  /* 118e697d mov eax, ebx */
  EAX = (EBX);
  /* 118e697f sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118e6982 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 118e6985 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118e698a je 0x118e699b */
  if (C.zf) goto L_118e699b;
  /* 118e698c and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 118e6990 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e6992 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 118e6995 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 118e6998 pop eax */
  EAX = (pop32());
  /* 118e6999 jmp 0x118e69a4 */
  goto L_118e69a4;
L_118e699b:;
  /* 118e699b and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 118e699f mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 118e69a2 mov eax, esi */
  EAX = (ESI);
L_118e69a4:;
  /* 118e69a4 push esi */
  push32((uint32_t)(ESI));
  /* 118e69a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e69a7 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 118e69aa push 3 */
  push32((uint32_t)(0x3u));
  /* 118e69ac push ecx */
  push32((uint32_t)(ECX));
  /* 118e69ad push eax */
  push32((uint32_t)(EAX));
  /* 118e69ae lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118e69b1 push eax */
  push32((uint32_t)(EAX));
  /* 118e69b2 push edi */
  push32((uint32_t)(EDI));
  /* 118e69b3 push dword ptr [0x119096e0] */
  push32((uint32_t)(r32((uint32_t)(0x119096e0))));
  /* 118e69b9 call 0x118ea6f6 */
  push32(0x118e69beu); f_118ea6f6();
  /* 118e69be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e69c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e69c3 je 0x118e6973 */
  if (C.zf) goto L_118e6973;
  /* 118e69c5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e69c7 jne 0x118e69cf */
  if (!C.zf) goto L_118e69cf;
  /* 118e69c9 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118e69cd jmp 0x118e69dc */
  goto L_118e69dc;
L_118e69cf:;
  /* 118e69cf movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 118e69d3 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118e69d7 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118e69da or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118e69dc:;
  /* 118e69dc pop edi */
  EDI = (pop32());
  /* 118e69dd pop esi */
  ESI = (pop32());
  /* 118e69de pop ebx */
  EBX = (pop32());
  /* 118e69df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e69e0 ret  */
  ESPCHK(0x118e6916u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e1 @ 0x118e69e1 (73 bytes, 36 insns) */
void f_118e69e1(void) {
  FTRACE(0x118e69e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e69e1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e69e5 push esi */
  push32((uint32_t)(ESI));
  /* 118e69e6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118e69e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e69e9 pop ecx */
  ECX = (pop32());
  /* 118e69ea idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e69ec push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118e69ee mov esi, eax */
  ESI = (EAX);
  /* 118e69f0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e69f4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e69f5 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e69f7 pop ecx */
  ECX = (pop32());
  /* 118e69f8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e69fc sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e69fe or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118e6a01 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e6a03 not edx */
  EDX = (~(EDX));
  /* 118e6a05 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 118e6a08 jne 0x118e6a26 */
  if (!C.zf) goto L_118e6a26;
  /* 118e6a0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e6a0b cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6a0e jge 0x118e6a21 */
  if ((C.sf==C.of)) goto L_118e6a21;
  /* 118e6a10 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_118e6a13:;
  /* 118e6a13 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6a16 jne 0x118e6a26 */
  if (!C.zf) goto L_118e6a26;
  /* 118e6a18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e6a19 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6a1c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6a1f jl 0x118e6a13 */
  if ((C.sf!=C.of)) goto L_118e6a13;
L_118e6a21:;
  /* 118e6a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6a23 pop eax */
  EAX = (pop32());
  /* 118e6a24 pop esi */
  ESI = (pop32());
  /* 118e6a25 ret  */
  ESPCHK(0x118e69e1u, _esp0);
  ESP += 4; return;
L_118e6a26:;
  /* 118e6a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6a28 pop esi */
  ESI = (pop32());
  /* 118e6a29 ret  */
  ESPCHK(0x118e69e1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a2a @ 0x118e6a2a (86 bytes, 43 insns) */
void f_118e6a2a(void) {
  FTRACE(0x118e6a2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6a2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e6a2e push ebx */
  push32((uint32_t)(EBX));
  /* 118e6a2f push esi */
  push32((uint32_t)(ESI));
  /* 118e6a30 push edi */
  push32((uint32_t)(EDI));
  /* 118e6a31 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118e6a33 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e6a37 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e6a38 pop ecx */
  ECX = (pop32());
  /* 118e6a39 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e6a3b mov esi, eax */
  ESI = (EAX);
  /* 118e6a3d mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e6a41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e6a42 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e6a44 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 118e6a47 push edi */
  push32((uint32_t)(EDI));
  /* 118e6a48 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118e6a4a pop ecx */
  ECX = (pop32());
  /* 118e6a4b push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6a4d pop eax */
  EAX = (pop32());
  /* 118e6a4e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6a50 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 118e6a52 push eax */
  push32((uint32_t)(EAX));
  /* 118e6a53 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 118e6a55 call 0x118ea945 */
  push32(0x118e6a5au); f_118ea945();
  /* 118e6a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6a5d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e6a5e js 0x118e6a7c */
  if (C.sf) goto L_118e6a7c;
  /* 118e6a60 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_118e6a63:;
  /* 118e6a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6a65 je 0x118e6a7c */
  if (C.zf) goto L_118e6a7c;
  /* 118e6a67 push edi */
  push32((uint32_t)(EDI));
  /* 118e6a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6a6a push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 118e6a6c call 0x118ea945 */
  push32(0x118e6a71u); f_118ea945();
  /* 118e6a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6a74 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e6a75 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6a78 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e6a7a jge 0x118e6a63 */
  if ((C.sf==C.of)) goto L_118e6a63;
L_118e6a7c:;
  /* 118e6a7c pop edi */
  EDI = (pop32());
  /* 118e6a7d pop esi */
  ESI = (pop32());
  /* 118e6a7e pop ebx */
  EBX = (pop32());
  /* 118e6a7f ret  */
  ESPCHK(0x118e6a2au, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x118e6a80 (140 bytes, 71 insns) */
void f_118e6a80(void) {
  FTRACE(0x118e6a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6a80 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6a81 mov ebp, esp */
  EBP = (ESP);
  /* 118e6a83 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6a84 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6a85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6a88 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6a89 push esi */
  push32((uint32_t)(ESI));
  /* 118e6a8a push edi */
  push32((uint32_t)(EDI));
  /* 118e6a8b lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 118e6a8e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118e6a90 pop ecx */
  ECX = (pop32());
  /* 118e6a91 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e6a95 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 118e6a98 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118e6a9a mov eax, ebx */
  EAX = (EBX);
  /* 118e6a9c pop esi */
  ESI = (pop32());
  /* 118e6a9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e6a9e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e6aa0 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118e6aa2 mov ecx, eax */
  ECX = (EAX);
  /* 118e6aa4 mov eax, ebx */
  EAX = (EBX);
  /* 118e6aa6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e6aa7 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e6aa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6aac pop esi */
  ESI = (pop32());
  /* 118e6aad push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6aaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118e6ab2 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 118e6ab5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118e6ab8 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6aba pop edx */
  EDX = (pop32());
  /* 118e6abb mov ecx, esi */
  ECX = (ESI);
  /* 118e6abd shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e6abf test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 118e6ac1 je 0x118e6ae4 */
  if (C.zf) goto L_118e6ae4;
  /* 118e6ac3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e6ac4 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6ac5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e6ac8 call 0x118e69e1 */
  push32(0x118e6acdu); f_118e69e1();
  /* 118e6acd pop ecx */
  ECX = (pop32());
  /* 118e6ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6ad0 pop ecx */
  ECX = (pop32());
  /* 118e6ad1 jne 0x118e6ae1 */
  if (!C.zf) goto L_118e6ae1;
  /* 118e6ad3 push edi */
  push32((uint32_t)(EDI));
  /* 118e6ad4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e6ad7 call 0x118e6a2a */
  push32(0x118e6adcu); f_118e6a2a();
  /* 118e6adc pop ecx */
  ECX = (pop32());
  /* 118e6add mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118e6ae0 pop ecx */
  ECX = (pop32());
L_118e6ae1:;
  /* 118e6ae1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_118e6ae4:;
  /* 118e6ae4 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118e6ae7 mov ecx, esi */
  ECX = (ESI);
  /* 118e6ae9 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e6aeb push 3 */
  push32((uint32_t)(0x3u));
  /* 118e6aed pop ecx */
  ECX = (pop32());
  /* 118e6aee and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118e6af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e6af3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6af4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6af6 jge 0x118e6b04 */
  if ((C.sf==C.of)) goto L_118e6b04;
  /* 118e6af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6afb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6afd lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 118e6b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6b02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_118e6b04:;
  /* 118e6b04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e6b07 pop edi */
  EDI = (pop32());
  /* 118e6b08 pop esi */
  ESI = (pop32());
  /* 118e6b09 pop ebx */
  EBX = (pop32());
  /* 118e6b0a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6b0b ret  */
  ESPCHK(0x118e6a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b0c @ 0x118e6b0c (27 bytes, 13 insns) */
void f_118e6b0c(void) {
  FTRACE(0x118e6b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6b0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e6b10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e6b14 push esi */
  push32((uint32_t)(ESI));
  /* 118e6b15 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e6b17 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6b19 pop edx */
  EDX = (pop32());
L_118e6b1a:;
  /* 118e6b1a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 118e6b1c mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 118e6b1f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6b22 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e6b23 jne 0x118e6b1a */
  if (!C.zf) goto L_118e6b1a;
  /* 118e6b25 pop esi */
  ESI = (pop32());
  /* 118e6b26 ret  */
  ESPCHK(0x118e6b0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006b27 @ 0x118e6b27 (12 bytes, 8 insns) */
void f_118e6b27(void) {
  FTRACE(0x118e6b27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6b27 push edi */
  push32((uint32_t)(EDI));
  /* 118e6b28 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e6b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6b2e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e6b2f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e6b30 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e6b31 pop edi */
  EDI = (pop32());
  /* 118e6b32 ret  */
  ESPCHK(0x118e6b27u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b33 @ 0x118e6b33 (27 bytes, 13 insns) */
void f_118e6b33(void) {
  FTRACE(0x118e6b33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6b33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e6b37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_118e6b39:;
  /* 118e6b39 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6b3c jne 0x118e6b4b */
  if (!C.zf) goto L_118e6b4b;
  /* 118e6b3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e6b3f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6b42 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6b45 jl 0x118e6b39 */
  if ((C.sf!=C.of)) goto L_118e6b39;
  /* 118e6b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6b49 pop eax */
  EAX = (pop32());
  /* 118e6b4a ret  */
  ESPCHK(0x118e6b33u, _esp0);
  ESP += 4; return;
L_118e6b4b:;
  /* 118e6b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6b4d ret  */
  ESPCHK(0x118e6b33u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b4e @ 0x118e6b4e (141 bytes, 64 insns) */
void f_118e6b4e(void) {
  FTRACE(0x118e6b4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6b4e push ebp */
  push32((uint32_t)(EBP));
  /* 118e6b4f mov ebp, esp */
  EBP = (ESP);
  /* 118e6b51 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6b54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6b57 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6b58 push esi */
  push32((uint32_t)(ESI));
  /* 118e6b59 push edi */
  push32((uint32_t)(EDI));
  /* 118e6b5a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118e6b5c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6b5f pop ebx */
  EBX = (pop32());
  /* 118e6b60 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 118e6b63 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e6b64 mov ecx, ebx */
  ECX = (EBX);
  /* 118e6b66 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 118e6b6d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e6b6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118e6b72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6b75 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e6b76 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e6b78 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 118e6b7c mov ecx, edx */
  ECX = (EDX);
  /* 118e6b7e shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118e6b80 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6b82 not esi */
  ESI = (~(ESI));
L_118e6b84:;
  /* 118e6b84 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118e6b86 mov ecx, eax */
  ECX = (EAX);
  /* 118e6b88 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 118e6b8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118e6b8d mov ecx, edx */
  ECX = (EDX);
  /* 118e6b8f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 118e6b91 or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 118e6b94 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118e6b96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e6b99 mov ecx, ebx */
  ECX = (EBX);
  /* 118e6b9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6b9e shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 118e6ba0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118e6ba3 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118e6ba6 jne 0x118e6b84 */
  if (!C.zf) goto L_118e6b84;
  /* 118e6ba8 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 118e6bab push 2 */
  push32((uint32_t)(0x2u));
  /* 118e6bad pop ebx */
  EBX = (pop32());
  /* 118e6bae mov esi, edi */
  ESI = (EDI);
  /* 118e6bb0 push 8 */
  push32((uint32_t)(0x8u));
  /* 118e6bb2 pop ecx */
  ECX = (pop32());
  /* 118e6bb3 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_118e6bb6:;
  /* 118e6bb6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6bb8 jl 0x118e6bc9 */
  if ((C.sf!=C.of)) goto L_118e6bc9;
  /* 118e6bba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6bbd mov eax, ecx */
  EAX = (ECX);
  /* 118e6bbf sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6bc1 mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 118e6bc4 mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 118e6bc7 jmp 0x118e6bd0 */
  goto L_118e6bd0;
L_118e6bc9:;
  /* 118e6bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6bcc and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_118e6bd0:;
  /* 118e6bd0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e6bd1 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6bd4 jns 0x118e6bb6 */
  if (!C.sf) goto L_118e6bb6;
  /* 118e6bd6 pop edi */
  EDI = (pop32());
  /* 118e6bd7 pop esi */
  ESI = (pop32());
  /* 118e6bd8 pop ebx */
  EBX = (pop32());
  /* 118e6bd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6bda ret  */
  ESPCHK(0x118e6b4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006bdb @ 0x118e6bdb (364 bytes, 138 insns) */
void f_118e6bdb(void) {
  FTRACE(0x118e6bdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6bdb push ebp */
  push32((uint32_t)(EBP));
  /* 118e6bdc mov ebp, esp */
  EBP = (ESP);
  /* 118e6bde sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6be4 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6be5 push esi */
  push32((uint32_t)(ESI));
  /* 118e6be6 push edi */
  push32((uint32_t)(EDI));
  /* 118e6be7 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 118e6beb mov ebx, ecx */
  EBX = (ECX);
  /* 118e6bed and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 118e6bf3 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118e6bf6 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 118e6bf9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118e6bfc mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 118e6bff movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 118e6c02 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e6c05 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 118e6c0b sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6c11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118e6c14 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118e6c17 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6c1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118e6c20 jne 0x118e6c48 */
  if (!C.zf) goto L_118e6c48;
  /* 118e6c22 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c25 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e6c27 push eax */
  push32((uint32_t)(EAX));
  /* 118e6c28 call 0x118e6b33 */
  push32(0x118e6c2du); f_118e6b33();
  /* 118e6c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6c2f pop ecx */
  ECX = (pop32());
  /* 118e6c30 jne 0x118e6d07 */
  if (!C.zf) goto L_118e6d07;
  /* 118e6c36 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c39 push eax */
  push32((uint32_t)(EAX));
  /* 118e6c3a call 0x118e6b27 */
  push32(0x118e6c3fu); f_118e6b27();
  /* 118e6c3f pop ecx */
  ECX = (pop32());
L_118e6c40:;
  /* 118e6c40 push 2 */
  push32((uint32_t)(0x2u));
L_118e6c42:;
  /* 118e6c42 pop eax */
  EAX = (pop32());
  /* 118e6c43 jmp 0x118e6d09 */
  goto L_118e6d09;
L_118e6c48:;
  /* 118e6c48 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c4b push eax */
  push32((uint32_t)(EAX));
  /* 118e6c4c lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 118e6c4f push eax */
  push32((uint32_t)(EAX));
  /* 118e6c50 call 0x118e6b0c */
  push32(0x118e6c55u); f_118e6b0c();
  /* 118e6c55 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 118e6c58 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c5b push eax */
  push32((uint32_t)(EAX));
  /* 118e6c5c call 0x118e6a80 */
  push32(0x118e6c61u); f_118e6a80();
  /* 118e6c61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e6c66 je 0x118e6c69 */
  if (C.zf) goto L_118e6c69;
  /* 118e6c68 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_118e6c69:;
  /* 118e6c69 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 118e6c6c mov ecx, eax */
  ECX = (EAX);
  /* 118e6c6e sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6c71 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6c73 jge 0x118e6c81 */
  if ((C.sf==C.of)) goto L_118e6c81;
  /* 118e6c75 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c78 push eax */
  push32((uint32_t)(EAX));
  /* 118e6c79 call 0x118e6b27 */
  push32(0x118e6c7eu); f_118e6b27();
  /* 118e6c7e pop ecx */
  ECX = (pop32());
  /* 118e6c7f jmp 0x118e6cbd */
  goto L_118e6cbd;
L_118e6c81:;
  /* 118e6c81 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6c83 jg 0x118e6cc4 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e6cc4;
  /* 118e6c85 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6c87 mov esi, eax */
  ESI = (EAX);
  /* 118e6c89 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 118e6c8c push eax */
  push32((uint32_t)(EAX));
  /* 118e6c8d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c90 push eax */
  push32((uint32_t)(EAX));
  /* 118e6c91 call 0x118e6b0c */
  push32(0x118e6c96u); f_118e6b0c();
  /* 118e6c96 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6c99 push esi */
  push32((uint32_t)(ESI));
  /* 118e6c9a push eax */
  push32((uint32_t)(EAX));
  /* 118e6c9b call 0x118e6b4e */
  push32(0x118e6ca0u); f_118e6b4e();
  /* 118e6ca0 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 118e6ca3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6ca6 push eax */
  push32((uint32_t)(EAX));
  /* 118e6ca7 call 0x118e6a80 */
  push32(0x118e6cacu); f_118e6a80();
  /* 118e6cac mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 118e6caf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6cb0 push eax */
  push32((uint32_t)(EAX));
  /* 118e6cb1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6cb4 push eax */
  push32((uint32_t)(EAX));
  /* 118e6cb5 call 0x118e6b4e */
  push32(0x118e6cbau); f_118e6b4e();
  /* 118e6cba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e6cbd:;
  /* 118e6cbd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e6cbf jmp 0x118e6c40 */
  goto L_118e6c40;
L_118e6cc4:;
  /* 118e6cc4 cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6cc6 jl 0x118e6cf0 */
  if ((C.sf!=C.of)) goto L_118e6cf0;
  /* 118e6cc8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6ccb push eax */
  push32((uint32_t)(EAX));
  /* 118e6ccc call 0x118e6b27 */
  push32(0x118e6cd1u); f_118e6b27();
  /* 118e6cd1 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 118e6cd4 or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 118e6cd8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6cdb push eax */
  push32((uint32_t)(EAX));
  /* 118e6cdc call 0x118e6b4e */
  push32(0x118e6ce1u); f_118e6b4e();
  /* 118e6ce1 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 118e6ce4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6ce7 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6ce9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e6ceb jmp 0x118e6c42 */
  goto L_118e6c42;
L_118e6cf0:;
  /* 118e6cf0 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 118e6cf3 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 118e6cf6 and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 118e6cfa lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6cfd push eax */
  push32((uint32_t)(EAX));
  /* 118e6cfe add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6d00 call 0x118e6b4e */
  push32(0x118e6d05u); f_118e6b4e();
  /* 118e6d05 pop ecx */
  ECX = (pop32());
  /* 118e6d06 pop ecx */
  ECX = (pop32());
L_118e6d07:;
  /* 118e6d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e6d09:;
  /* 118e6d09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118e6d0b pop ecx */
  ECX = (pop32());
  /* 118e6d0c sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6d0f mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 118e6d12 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118e6d14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6d17 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e6d19 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6d1b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 118e6d21 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 118e6d23 or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 118e6d26 cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6d29 jne 0x118e6d38 */
  if (!C.zf) goto L_118e6d38;
  /* 118e6d2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6d2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e6d31 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118e6d34 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118e6d36 jmp 0x118e6d42 */
  goto L_118e6d42;
L_118e6d38:;
  /* 118e6d38 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6d3b jne 0x118e6d42 */
  if (!C.zf) goto L_118e6d42;
  /* 118e6d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6d40 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_118e6d42:;
  /* 118e6d42 pop edi */
  EDI = (pop32());
  /* 118e6d43 pop esi */
  ESI = (pop32());
  /* 118e6d44 pop ebx */
  EBX = (pop32());
  /* 118e6d45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6d46 ret  */
  ESPCHK(0x118e6bdbu, _esp0);
  ESP += 4; return;
}

/* FUN_10006d47 @ 0x118e6d47 (22 bytes, 6 insns) */
void f_118e6d47(void) {
  FTRACE(0x118e6d47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6d47 push 0x118f1a70 */
  push32((uint32_t)(0x118f1a70u));
  /* 118e6d4c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118e6d50 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118e6d54 call 0x118e6bdb */
  push32(0x118e6d59u); f_118e6bdb();
  /* 118e6d59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6d5c ret  */
  ESPCHK(0x118e6d47u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d5d @ 0x118e6d5d (22 bytes, 6 insns) */
void f_118e6d5d(void) {
  FTRACE(0x118e6d5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6d5d push 0x118f1a88 */
  push32((uint32_t)(0x118f1a88u));
  /* 118e6d62 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118e6d66 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118e6d6a call 0x118e6bdb */
  push32(0x118e6d6fu); f_118e6bdb();
  /* 118e6d6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6d72 ret  */
  ESPCHK(0x118e6d5du, _esp0);
  ESP += 4; return;
}

/* FUN_10006d73 @ 0x118e6d73 (45 bytes, 21 insns) */
void f_118e6d73(void) {
  FTRACE(0x118e6d73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6d73 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6d74 mov ebp, esp */
  EBP = (ESP);
  /* 118e6d76 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6d79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6d7b push eax */
  push32((uint32_t)(EAX));
  /* 118e6d7c push eax */
  push32((uint32_t)(EAX));
  /* 118e6d7d push eax */
  push32((uint32_t)(EAX));
  /* 118e6d7e push eax */
  push32((uint32_t)(EAX));
  /* 118e6d7f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e6d82 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 118e6d85 push eax */
  push32((uint32_t)(EAX));
  /* 118e6d86 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6d89 push eax */
  push32((uint32_t)(EAX));
  /* 118e6d8a call 0x118eaae6 */
  push32(0x118e6d8fu); f_118eaae6();
  /* 118e6d8f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e6d92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6d95 push eax */
  push32((uint32_t)(EAX));
  /* 118e6d96 call 0x118e6d47 */
  push32(0x118e6d9bu); f_118e6d47();
  /* 118e6d9b add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6d9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6d9f ret  */
  ESPCHK(0x118e6d73u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x118e6da0 (45 bytes, 21 insns) */
void f_118e6da0(void) {
  FTRACE(0x118e6da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6da0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6da1 mov ebp, esp */
  EBP = (ESP);
  /* 118e6da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6da6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6da8 push eax */
  push32((uint32_t)(EAX));
  /* 118e6da9 push eax */
  push32((uint32_t)(EAX));
  /* 118e6daa push eax */
  push32((uint32_t)(EAX));
  /* 118e6dab push eax */
  push32((uint32_t)(EAX));
  /* 118e6dac push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e6daf lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 118e6db2 push eax */
  push32((uint32_t)(EAX));
  /* 118e6db3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6db6 push eax */
  push32((uint32_t)(EAX));
  /* 118e6db7 call 0x118eaae6 */
  push32(0x118e6dbcu); f_118eaae6();
  /* 118e6dbc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e6dbf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6dc2 push eax */
  push32((uint32_t)(EAX));
  /* 118e6dc3 call 0x118e6d5d */
  push32(0x118e6dc8u); f_118e6d5d();
  /* 118e6dc8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6dcb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6dcc ret  */
  ESPCHK(0x118e6da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dcd @ 0x118e6dcd (119 bytes, 57 insns) */
void f_118e6dcd(void) {
  FTRACE(0x118e6dcdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6dcd push ebp */
  push32((uint32_t)(EBP));
  /* 118e6dce mov ebp, esp */
  EBP = (ESP);
  /* 118e6dd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e6dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6dd4 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6dd7 push esi */
  push32((uint32_t)(ESI));
  /* 118e6dd8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6ddb mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 118e6dde push edi */
  push32((uint32_t)(EDI));
  /* 118e6ddf lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 118e6de2 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 118e6de5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e6de7 mov eax, edi */
  EAX = (EDI);
  /* 118e6de9 jle 0x118e6e0a */
  if ((C.zf||C.sf!=C.of)) goto L_118e6e0a;
  /* 118e6deb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e6dee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118e6df0:;
  /* 118e6df0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118e6df2 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e6df4 je 0x118e6dfc */
  if (C.zf) goto L_118e6dfc;
  /* 118e6df6 movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 118e6df9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e6dfa jmp 0x118e6dff */
  goto L_118e6dff;
L_118e6dfc:;
  /* 118e6dfc push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118e6dfe pop edx */
  EDX = (pop32());
L_118e6dff:;
  /* 118e6dff mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118e6e01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6e02 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 118e6e05 jne 0x118e6df0 */
  if (!C.zf) goto L_118e6df0;
  /* 118e6e07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_118e6e0a:;
  /* 118e6e0a and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 118e6e0d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e6e0f jl 0x118e6e23 */
  if ((C.sf!=C.of)) goto L_118e6e23;
  /* 118e6e11 cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6e14 jl 0x118e6e23 */
  if ((C.sf!=C.of)) goto L_118e6e23;
L_118e6e16:;
  /* 118e6e16 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e6e17 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6e1a jne 0x118e6e21 */
  if (!C.zf) goto L_118e6e21;
  /* 118e6e1c mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 118e6e1f jmp 0x118e6e16 */
  goto L_118e6e16;
L_118e6e21:;
  /* 118e6e21 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_118e6e23:;
  /* 118e6e23 cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e6e26 jne 0x118e6e2d */
  if (!C.zf) goto L_118e6e2d;
  /* 118e6e28 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 118e6e2b jmp 0x118e6e3f */
  goto L_118e6e3f;
L_118e6e2d:;
  /* 118e6e2d push edi */
  push32((uint32_t)(EDI));
  /* 118e6e2e call 0x118e73f0 */
  push32(0x118e6e33u); f_118e73f0();
  /* 118e6e33 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e6e34 push eax */
  push32((uint32_t)(EAX));
  /* 118e6e35 push edi */
  push32((uint32_t)(EDI));
  /* 118e6e36 push esi */
  push32((uint32_t)(ESI));
  /* 118e6e37 call 0x118e70b0 */
  push32(0x118e6e3cu); f_118e70b0();
  /* 118e6e3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e6e3f:;
  /* 118e6e3f pop edi */
  EDI = (pop32());
  /* 118e6e40 pop esi */
  ESI = (pop32());
  /* 118e6e41 pop ebx */
  EBX = (pop32());
  /* 118e6e42 pop ebp */
  EBP = (pop32());
  /* 118e6e43 ret  */
  ESPCHK(0x118e6dcdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e44 @ 0x118e6e44 (92 bytes, 41 insns) */
void f_118e6e44(void) {
  FTRACE(0x118e6e44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6e44 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6e45 mov ebp, esp */
  EBP = (ESP);
  /* 118e6e47 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6e4a push esi */
  push32((uint32_t)(ESI));
  /* 118e6e4b lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118e6e4e push edi */
  push32((uint32_t)(EDI));
  /* 118e6e4f push eax */
  push32((uint32_t)(EAX));
  /* 118e6e50 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e6e53 push eax */
  push32((uint32_t)(EAX));
  /* 118e6e54 call 0x118e6ea0 */
  push32(0x118e6e59u); f_118e6ea0();
  /* 118e6e59 pop ecx */
  ECX = (pop32());
  /* 118e6e5a lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118e6e5d pop ecx */
  ECX = (pop32());
  /* 118e6e5e lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 118e6e61 push eax */
  push32((uint32_t)(EAX));
  /* 118e6e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e6e64 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118e6e66 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e6e69 mov edi, esp */
  EDI = (ESP);
  /* 118e6e6b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e6e6c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e6e6d movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 118e6e6f call 0x118eafb7 */
  push32(0x118e6e74u); f_118eafb7();
  /* 118e6e74 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e6e77 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 118e6e7a mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118e6e7d movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 118e6e81 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e6e83 movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 118e6e87 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118e6e8a lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 118e6e8d push eax */
  push32((uint32_t)(EAX));
  /* 118e6e8e push edi */
  push32((uint32_t)(EDI));
  /* 118e6e8f call 0x118e6f60 */
  push32(0x118e6e94u); f_118e6f60();
  /* 118e6e94 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6e97 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 118e6e9a mov eax, esi */
  EAX = (ESI);
  /* 118e6e9c pop edi */
  EDI = (pop32());
  /* 118e6e9d pop esi */
  ESI = (pop32());
  /* 118e6e9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6e9f ret  */
  ESPCHK(0x118e6e44u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x118e6ea0 (182 bytes, 70 insns) */
void f_118e6ea0(void) {
  FTRACE(0x118e6ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e6ea1 mov ebp, esp */
  EBP = (ESP);
  /* 118e6ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 118e6ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6ea7 push ebx */
  push32((uint32_t)(EBX));
  /* 118e6ea8 push esi */
  push32((uint32_t)(ESI));
  /* 118e6ea9 push edi */
  push32((uint32_t)(EDI));
  /* 118e6eaa mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 118e6eae mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 118e6eb3 mov ecx, eax */
  ECX = (EAX);
  /* 118e6eb5 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 118e6eba shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118e6ebd and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118e6ebf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118e6ec2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 118e6ec5 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 118e6ec7 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 118e6eca mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118e6ecf and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e6ed4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e6ed6 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 118e6ed9 je 0x118e6eee */
  if (C.zf) goto L_118e6eee;
  /* 118e6edb cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6edd je 0x118e6ee7 */
  if (C.zf) goto L_118e6ee7;
  /* 118e6edf lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 118e6ee5 jmp 0x118e6f0f */
  goto L_118e6f0f;
L_118e6ee7:;
  /* 118e6ee7 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 118e6eec jmp 0x118e6f0f */
  goto L_118e6f0f;
L_118e6eee:;
  /* 118e6eee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e6ef0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6ef2 jne 0x118e6f06 */
  if (!C.zf) goto L_118e6f06;
  /* 118e6ef4 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e6ef6 jne 0x118e6f06 */
  if (!C.zf) goto L_118e6f06;
  /* 118e6ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6efb mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 118e6efe mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 118e6f00 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 118e6f04 jmp 0x118e6f51 */
  goto L_118e6f51;
L_118e6f06:;
  /* 118e6f06 lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 118e6f0c mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_118e6f0f:;
  /* 118e6f0f mov ecx, edx */
  ECX = (EDX);
  /* 118e6f11 shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 118e6f14 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 118e6f17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118e6f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e6f1c or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 118e6f1f shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 118e6f22 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118e6f25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_118e6f27:;
  /* 118e6f27 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 118e6f29 jne 0x118e6f48 */
  if (!C.zf) goto L_118e6f48;
  /* 118e6f2b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 118e6f2d add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6f2f mov ebx, edx */
  EBX = (EDX);
  /* 118e6f31 shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 118e6f34 or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 118e6f36 lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 118e6f39 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e6f3b mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 118e6f3e add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6f44 mov ecx, ebx */
  ECX = (EBX);
  /* 118e6f46 jmp 0x118e6f27 */
  goto L_118e6f27;
L_118e6f48:;
  /* 118e6f48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e6f4b or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118e6f4d mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_118e6f51:;
  /* 118e6f51 pop edi */
  EDI = (pop32());
  /* 118e6f52 pop esi */
  ESI = (pop32());
  /* 118e6f53 pop ebx */
  EBX = (pop32());
  /* 118e6f54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e6f55 ret  */
  ESPCHK(0x118e6ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x118e6f60 (7 bytes, 3 insns) */
void f_118e6f60(void) {
  FTRACE(0x118e6f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6f60 push edi */
  push32((uint32_t)(EDI));
  /* 118e6f61 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e6f65 jmp 0x118e6fd1 */
  jmp_ind(0x118e6fd1u); return;
}

/* FUN_10006f70 @ 0x118e6f70 (224 bytes, 84 insns) */
void f_118e6f70(void) {
  FTRACE(0x118e6f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e6f70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e6f74 push edi */
  push32((uint32_t)(EDI));
  /* 118e6f75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118e6f7b je 0x118e6f8c */
  if (C.zf) goto L_118e6f8c;
L_118e6f7d:;
  /* 118e6f7d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118e6f7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e6f80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e6f82 je 0x118e6fbf */
  if (C.zf) goto L_118e6fbf;
  /* 118e6f84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118e6f8a jne 0x118e6f7d */
  if (!C.zf) goto L_118e6f7d;
L_118e6f8c:;
  /* 118e6f8c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118e6f8e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118e6f93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6f95 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e6f98 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118e6f9a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6f9d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118e6fa2 je 0x118e6f8c */
  if (C.zf) goto L_118e6f8c;
  /* 118e6fa4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 118e6fa7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e6fa9 je 0x118e6fce */
  if (C.zf) goto L_118e6fce;
  /* 118e6fab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118e6fad je 0x118e6fc9 */
  if (C.zf) goto L_118e6fc9;
  /* 118e6faf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 118e6fb4 je 0x118e6fc4 */
  if (C.zf) goto L_118e6fc4;
  /* 118e6fb6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 118e6fbb je 0x118e6fbf */
  if (C.zf) goto L_118e6fbf;
  /* 118e6fbd jmp 0x118e6f8c */
  goto L_118e6f8c;
L_118e6fbf:;
  /* 118e6fbf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 118e6fc2 jmp 0x118e6fd1 */
  goto L_118e6fd1;
L_118e6fc4:;
  /* 118e6fc4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 118e6fc7 jmp 0x118e6fd1 */
  goto L_118e6fd1;
L_118e6fc9:;
  /* 118e6fc9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 118e6fcc jmp 0x118e6fd1 */
  goto L_118e6fd1;
L_118e6fce:;
  /* 118e6fce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_118e6fd1:;
  /* 118e6fd1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e6fd5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118e6fdb je 0x118e6ff6 */
  if (C.zf) goto L_118e6ff6;
L_118e6fdd:;
  /* 118e6fdd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118e6fdf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e6fe0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e6fe2 je 0x118e7048 */
  if (C.zf) goto L_118e7048;
  /* 118e6fe4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 118e6fe6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e6fe7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118e6fed jne 0x118e6fdd */
  if (!C.zf) goto L_118e6fdd;
  /* 118e6fef jmp 0x118e6ff6 */
  goto L_118e6ff6;
L_118e6ff1:;
  /* 118e6ff1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118e6ff3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118e6ff6:;
  /* 118e6ff6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118e6ffb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118e6ffd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e6fff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e7002 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118e7004 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118e7006 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7009 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118e700e je 0x118e6ff1 */
  if (C.zf) goto L_118e6ff1;
  /* 118e7010 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e7012 je 0x118e7048 */
  if (C.zf) goto L_118e7048;
  /* 118e7014 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 118e7016 je 0x118e703f */
  if (C.zf) goto L_118e703f;
  /* 118e7018 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 118e701e je 0x118e7032 */
  if (C.zf) goto L_118e7032;
  /* 118e7020 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 118e7026 je 0x118e702a */
  if (C.zf) goto L_118e702a;
  /* 118e7028 jmp 0x118e6ff1 */
  goto L_118e6ff1;
L_118e702a:;
  /* 118e702a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118e702c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e7030 pop edi */
  EDI = (pop32());
  /* 118e7031 ret  */
  ESPCHK(0x118e6f70u, _esp0);
  ESP += 4; return;
L_118e7032:;
  /* 118e7032 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 118e7035 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e7039 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 118e703d pop edi */
  EDI = (pop32());
  /* 118e703e ret  */
  ESPCHK(0x118e6f70u, _esp0);
  ESP += 4; return;
L_118e703f:;
  /* 118e703f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 118e7042 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e7046 pop edi */
  EDI = (pop32());
  /* 118e7047 ret  */
  ESPCHK(0x118e6f70u, _esp0);
  ESP += 4; return;
L_118e7048:;
  /* 118e7048 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 118e704a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e704e pop edi */
  EDI = (pop32());
  /* 118e704f ret  */
  ESPCHK(0x118e6f70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x118e7050 (88 bytes, 40 insns) */
void f_118e7050(void) {
  FTRACE(0x118e7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e7050 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e7054 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e7058 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118e705a je 0x118e70a3 */
  if (C.zf) goto L_118e70a3;
  /* 118e705c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e705e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 118e7062 push edi */
  push32((uint32_t)(EDI));
  /* 118e7063 mov edi, ecx */
  EDI = (ECX);
  /* 118e7065 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7068 jb 0x118e7097 */
  if (C.cf) goto L_118e7097;
  /* 118e706a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e706c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118e706f je 0x118e7079 */
  if (C.zf) goto L_118e7079;
  /* 118e7071 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_118e7073:;
  /* 118e7073 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7075 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e7076 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118e7077 jne 0x118e7073 */
  if (!C.zf) goto L_118e7073;
L_118e7079:;
  /* 118e7079 mov ecx, eax */
  ECX = (EAX);
  /* 118e707b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118e707e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7080 mov ecx, eax */
  ECX = (EAX);
  /* 118e7082 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118e7085 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7087 mov ecx, edx */
  ECX = (EDX);
  /* 118e7089 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118e708c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e708f je 0x118e7097 */
  if (C.zf) goto L_118e7097;
  /* 118e7091 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118e7093 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118e7095 je 0x118e709d */
  if (C.zf) goto L_118e709d;
L_118e7097:;
  /* 118e7097 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7099 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e709a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e709b jne 0x118e7097 */
  if (!C.zf) goto L_118e7097;
L_118e709d:;
  /* 118e709d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e70a1 pop edi */
  EDI = (pop32());
  /* 118e70a2 ret  */
  ESPCHK(0x118e7050u, _esp0);
  ESP += 4; return;
L_118e70a3:;
  /* 118e70a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e70a7 ret  */
  ESPCHK(0x118e7050u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b0 @ 0x118e70b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_118e70b0(void) {
  FTRACE(0x118e70b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e70b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e70b1 mov ebp, esp */
  EBP = (ESP);
  /* 118e70b3 push edi */
  push32((uint32_t)(EDI));
  /* 118e70b4 push esi */
  push32((uint32_t)(ESI));
  /* 118e70b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e70b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e70bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e70be mov eax, ecx */
  EAX = (ECX);
  /* 118e70c0 mov edx, ecx */
  EDX = (ECX);
  /* 118e70c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e70c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e70c6 jbe 0x118e70d0 */
  if ((C.cf||C.zf)) goto L_118e70d0;
  /* 118e70c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e70ca jb 0x118e7248 */
  if (C.cf) goto L_118e7248;
L_118e70d0:;
  /* 118e70d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118e70d6 jne 0x118e70ec */
  if (!C.zf) goto L_118e70ec;
  /* 118e70d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e70db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118e70de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e70e1 jb 0x118e710c */
  if (C.cf) goto L_118e710c;
  /* 118e70e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e70e5 jmp dword ptr [edx*4 + 0x118e71f8] */
  switch (EDX) {
    case 0: goto L_118e7208;
    case 1: goto L_118e7210;
    case 2: goto L_118e721c;
    case 3: goto L_118e7230;
    default: x86_unimpl("switch@0x118e70e5 out of table"); return;
  }
L_118e70ec:;
  /* 118e70ec mov eax, edi */
  EAX = (EDI);
  /* 118e70ee mov edx, 3 */
  EDX = (0x3u);
  /* 118e70f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e70f6 jb 0x118e7104 */
  if (C.cf) goto L_118e7104;
  /* 118e70f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118e70fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e70fd jmp dword ptr [eax*4 + 0x118e7110] */
  switch (EAX) {
    case 1: goto L_118e7120;
    case 2: goto L_118e714c;
    case 3: goto L_118e7170;
    default: x86_unimpl("switch@0x118e70fd out of table"); return;
  }
L_118e7104:;
  /* 118e7104 jmp dword ptr [ecx*4 + 0x118e7208] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x118e7208)))); return;
  /* 118e710b nop  */
  /* nop */
L_118e710c:;
  /* 118e710c jmp dword ptr [ecx*4 + 0x118e718c] */
  switch (ECX) {
    case 0: goto L_118e71ef;
    case 1: goto L_118e71dc;
    case 2: goto L_118e71d4;
    case 3: goto L_118e71cc;
    case 4: goto L_118e71c4;
    case 5: goto L_118e71bc;
    case 6: goto L_118e71b4;
    case 7: goto L_118e71ac;
    default: x86_unimpl("switch@0x118e710c out of table"); return;
  }
  /* 118e7113 nop  */
  /* nop */
L_118e7120:;
  /* 118e7120 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e7122 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e7124 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7126 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e7129 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e712c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e712f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e7132 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e7135 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7138 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e713b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e713e jb 0x118e710c */
  if (C.cf) goto L_118e710c;
  /* 118e7140 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e7142 jmp dword ptr [edx*4 + 0x118e71f8] */
  switch (EDX) {
    case 0: goto L_118e7208;
    case 1: goto L_118e7210;
    case 2: goto L_118e721c;
    case 3: goto L_118e7230;
    default: x86_unimpl("switch@0x118e7142 out of table"); return;
  }
  /* 118e7149 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e714c:;
  /* 118e714c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e714e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e7150 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7152 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e7155 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e7158 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e715b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e715e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7161 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7164 jb 0x118e710c */
  if (C.cf) goto L_118e710c;
  /* 118e7166 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e7168 jmp dword ptr [edx*4 + 0x118e71f8] */
  switch (EDX) {
    case 0: goto L_118e7208;
    case 1: goto L_118e7210;
    case 2: goto L_118e721c;
    case 3: goto L_118e7230;
    default: x86_unimpl("switch@0x118e7168 out of table"); return;
  }
  /* 118e716f nop  */
  /* nop */
L_118e7170:;
  /* 118e7170 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e7172 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e7174 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7176 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e7177 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e717a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e717b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e717e jb 0x118e710c */
  if (C.cf) goto L_118e710c;
  /* 118e7180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e7182 jmp dword ptr [edx*4 + 0x118e71f8] */
  switch (EDX) {
    case 0: goto L_118e7208;
    case 1: goto L_118e7210;
    case 2: goto L_118e721c;
    case 3: goto L_118e7230;
    default: x86_unimpl("switch@0x118e7182 out of table"); return;
  }
  /* 118e7189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e71ac:;
  /* 118e71ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 118e71b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_118e71b4:;
  /* 118e71b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 118e71b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_118e71bc:;
  /* 118e71bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 118e71c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_118e71c4:;
  /* 118e71c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 118e71c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_118e71cc:;
  /* 118e71cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 118e71d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_118e71d4:;
  /* 118e71d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 118e71d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_118e71dc:;
  /* 118e71dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 118e71e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 118e71e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118e71eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e71ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118e71ef:;
  /* 118e71ef jmp dword ptr [edx*4 + 0x118e71f8] */
  switch (EDX) {
    case 0: goto L_118e7208;
    case 1: goto L_118e7210;
    case 2: goto L_118e721c;
    case 3: goto L_118e7230;
    default: x86_unimpl("switch@0x118e71ef out of table"); return;
  }
  /* 118e71f6 mov edi, edi */
  EDI = (EDI);
L_118e7208:;
  /* 118e7208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e720b pop esi */
  ESI = (pop32());
  /* 118e720c pop edi */
  EDI = (pop32());
  /* 118e720d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e720e ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e720f nop  */
  /* nop */
L_118e7210:;
  /* 118e7210 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e7212 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7217 pop esi */
  ESI = (pop32());
  /* 118e7218 pop edi */
  EDI = (pop32());
  /* 118e7219 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e721a ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e721b nop  */
  /* nop */
L_118e721c:;
  /* 118e721c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e721e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7220 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e7223 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e7226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7229 pop esi */
  ESI = (pop32());
  /* 118e722a pop edi */
  EDI = (pop32());
  /* 118e722b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e722c ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e722d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e7230:;
  /* 118e7230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e7232 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e7234 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e7237 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e723a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e723d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e7240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7243 pop esi */
  ESI = (pop32());
  /* 118e7244 pop edi */
  EDI = (pop32());
  /* 118e7245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e7246 ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e7247 nop  */
  /* nop */
L_118e7248:;
  /* 118e7248 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 118e724c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 118e7250 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118e7256 jne 0x118e727c */
  if (!C.zf) goto L_118e727c;
  /* 118e7258 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e725b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118e725e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7261 jb 0x118e7270 */
  if (C.cf) goto L_118e7270;
  /* 118e7263 std  */
  C.df=1;
  /* 118e7264 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e7266 cld  */
  C.df=0;
  /* 118e7267 jmp dword ptr [edx*4 + 0x118e7390] */
  switch (EDX) {
    case 0: goto L_118e73a0;
    case 1: goto L_118e73a8;
    case 2: goto L_118e73b8;
    case 3: goto L_118e73cc;
    default: x86_unimpl("switch@0x118e7267 out of table"); return;
  }
  /* 118e726e mov edi, edi */
  EDI = (EDI);
L_118e7270:;
  /* 118e7270 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e7272 jmp dword ptr [ecx*4 + 0x118e7340] */
  switch (ECX) {
    case 0: goto L_118e7387;
    default: x86_unimpl("switch@0x118e7272 out of table"); return;
  }
  /* 118e7279 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e727c:;
  /* 118e727c mov eax, edi */
  EAX = (EDI);
  /* 118e727e mov edx, 3 */
  EDX = (0x3u);
  /* 118e7283 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7286 jb 0x118e7294 */
  if (C.cf) goto L_118e7294;
  /* 118e7288 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118e728b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e728d jmp dword ptr [eax*4 + 0x118e7298] */
  switch (EAX) {
    case 1: goto L_118e72a8;
    case 2: goto L_118e72c8;
    case 3: goto L_118e72f0;
    default: x86_unimpl("switch@0x118e728d out of table"); return;
  }
L_118e7294:;
  /* 118e7294 jmp dword ptr [ecx*4 + 0x118e7390] */
  switch (ECX) {
    case 0: goto L_118e73a0;
    case 1: goto L_118e73a8;
    case 2: goto L_118e73b8;
    case 3: goto L_118e73cc;
    default: x86_unimpl("switch@0x118e7294 out of table"); return;
  }
  /* 118e729b nop  */
  /* nop */
L_118e72a8:;
  /* 118e72a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e72ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e72ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e72b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e72b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e72b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
L_118e72b5:;
  /* 118e72b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e72b8 jb 0x118e7270 */
  if (C.cf) goto L_118e7270;
  /* 118e72ba std  */
  C.df=1;
  /* 118e72bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e72bd cld  */
  C.df=0;
  /* 118e72be jmp dword ptr [edx*4 + 0x118e7390] */
  switch (EDX) {
    case 0: goto L_118e73a0;
    case 1: goto L_118e73a8;
    case 2: goto L_118e73b8;
    case 3: goto L_118e73cc;
    default: x86_unimpl("switch@0x118e72be out of table"); return;
  }
  /* 118e72c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e72c8:;
  /* 118e72c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e72cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e72cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e72d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e72d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e72d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e72d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e72dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e72df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e72e2 jb 0x118e7270 */
  if (C.cf) goto L_118e7270;
  /* 118e72e4 std  */
  C.df=1;
  /* 118e72e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e72e7 cld  */
  C.df=0;
  /* 118e72e8 jmp dword ptr [edx*4 + 0x118e7390] */
  switch (EDX) {
    case 0: goto L_118e73a0;
    case 1: goto L_118e73a8;
    case 2: goto L_118e73b8;
    case 3: goto L_118e73cc;
    default: x86_unimpl("switch@0x118e72e8 out of table"); return;
  }
  /* 118e72ef nop  */
  /* nop */
L_118e72f0:;
  /* 118e72f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e72f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e72f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e72f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e72fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e72fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e7301 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e7304 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e7307 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e730a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e730d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7310 jb 0x118e7270 */
  if (C.cf) goto L_118e7270;
  /* 118e7316 std  */
  C.df=1;
  /* 118e7317 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e7319 cld  */
  C.df=0;
  /* 118e731a jmp dword ptr [edx*4 + 0x118e7390] */
  switch (EDX) {
    case 0: goto L_118e73a0;
    case 1: goto L_118e73a8;
    case 2: goto L_118e73b8;
    case 3: goto L_118e73cc;
    default: x86_unimpl("switch@0x118e731a out of table"); return;
  }
  /* 118e7321 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 118e7324 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 118e7325 jae 0x118e72b5 */
  if (!C.cf) goto L_118e72b5;
  /* 118e7327 adc dword ptr [ebx + esi*2 - 0x72], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*2 + -0x72))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ESI*2 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e732b adc dword ptr [ebx + esi*2 - 0x72], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*2 + -0x72))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ESI*2 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e732f adc dword ptr [ebx + esi*2 - 0x72], ebx */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*2 + -0x72))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ESI*2 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e7333 adc dword ptr [ebx + esi*2 - 0x72], esp */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*2 + -0x72))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ESI*2 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e7337 adc dword ptr [ebx + esi*2 - 0x72], ebp */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*2 + -0x72))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ESI*2 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e733b adc dword ptr [ebx + esi*2 - 0x72], esi */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*2 + -0x72))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ESI*2 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e7344 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 118e7348 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 118e734c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 118e7350 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 118e7354 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 118e7358 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 118e735c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 118e7360 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 118e7364 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 118e7368 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 118e736c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 118e7370 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 118e7374 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 118e7378 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 118e737c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118e7383 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7385 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118e7387:;
  /* 118e7387 jmp dword ptr [edx*4 + 0x118e7390] */
  switch (EDX) {
    case 0: goto L_118e73a0;
    case 1: goto L_118e73a8;
    case 2: goto L_118e73b8;
    case 3: goto L_118e73cc;
    default: x86_unimpl("switch@0x118e7387 out of table"); return;
  }
  /* 118e738e mov edi, edi */
  EDI = (EDI);
L_118e73a0:;
  /* 118e73a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e73a3 pop esi */
  ESI = (pop32());
  /* 118e73a4 pop edi */
  EDI = (pop32());
  /* 118e73a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e73a6 ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e73a7 nop  */
  /* nop */
L_118e73a8:;
  /* 118e73a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e73ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e73ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e73b1 pop esi */
  ESI = (pop32());
  /* 118e73b2 pop edi */
  EDI = (pop32());
  /* 118e73b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e73b4 ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e73b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e73b8:;
  /* 118e73b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e73bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e73be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e73c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e73c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e73c7 pop esi */
  ESI = (pop32());
  /* 118e73c8 pop edi */
  EDI = (pop32());
  /* 118e73c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e73ca ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
  /* 118e73cb nop  */
  /* nop */
L_118e73cc:;
  /* 118e73cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e73cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e73d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e73d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e73d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e73db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e73de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e73e1 pop esi */
  ESI = (pop32());
  /* 118e73e2 pop edi */
  EDI = (pop32());
  /* 118e73e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e73e4 ret  */
  ESPCHK(0x118e70b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x118e73f0 (123 bytes, 44 insns) */
void f_118e73f0(void) {
  FTRACE(0x118e73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e73f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e73f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118e73fa je 0x118e7410 */
  if (C.zf) goto L_118e7410;
L_118e73fc:;
  /* 118e73fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118e73fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e73ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e7401 je 0x118e7443 */
  if (C.zf) goto L_118e7443;
  /* 118e7403 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118e7409 jne 0x118e73fc */
  if (!C.zf) goto L_118e73fc;
  /* 118e740b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118e7410:;
  /* 118e7410 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118e7412 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118e7417 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7419 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e741c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118e741e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7421 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118e7426 je 0x118e7410 */
  if (C.zf) goto L_118e7410;
  /* 118e7428 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 118e742b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e742d je 0x118e7461 */
  if (C.zf) goto L_118e7461;
  /* 118e742f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118e7431 je 0x118e7457 */
  if (C.zf) goto L_118e7457;
  /* 118e7433 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 118e7438 je 0x118e744d */
  if (C.zf) goto L_118e744d;
  /* 118e743a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 118e743f je 0x118e7443 */
  if (C.zf) goto L_118e7443;
  /* 118e7441 jmp 0x118e7410 */
  goto L_118e7410;
L_118e7443:;
  /* 118e7443 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 118e7446 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e744a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e744c ret  */
  ESPCHK(0x118e73f0u, _esp0);
  ESP += 4; return;
L_118e744d:;
  /* 118e744d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 118e7450 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e7454 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7456 ret  */
  ESPCHK(0x118e73f0u, _esp0);
  ESP += 4; return;
L_118e7457:;
  /* 118e7457 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 118e745a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e745e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7460 ret  */
  ESPCHK(0x118e73f0u, _esp0);
  ESP += 4; return;
L_118e7461:;
  /* 118e7461 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 118e7464 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e7468 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e746a ret  */
  ESPCHK(0x118e73f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007474 @ 0x118e7474 (41 bytes, 12 insns) */
void f_118e7474(void) {
  FTRACE(0x118e7474u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e7474 push esi */
  push32((uint32_t)(ESI));
  /* 118e7475 mov esi, dword ptr [0x118ef070] */
  ESI = (r32((uint32_t)(0x118ef070)));
  /* 118e747b push dword ptr [0x118f1ae4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1ae4))));
  /* 118e7481 call esi */
  call_ind((uint32_t)(ESI), 0x118e7483u);
  /* 118e7483 push dword ptr [0x118f1ad4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1ad4))));
  /* 118e7489 call esi */
  call_ind((uint32_t)(ESI), 0x118e748bu);
  /* 118e748b push dword ptr [0x118f1ac4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1ac4))));
  /* 118e7491 call esi */
  call_ind((uint32_t)(ESI), 0x118e7493u);
  /* 118e7493 push dword ptr [0x118f1aa4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1aa4))));
  /* 118e7499 call esi */
  call_ind((uint32_t)(ESI), 0x118e749bu);
  /* 118e749b pop esi */
  ESI = (pop32());
  /* 118e749c ret  */
  ESPCHK(0x118e7474u, _esp0);
  ESP += 4; return;
}

/* FUN_1000749d @ 0x118e749d (108 bytes, 34 insns) */
void f_118e749d(void) {
  FTRACE(0x118e749du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e749d push esi */
  push32((uint32_t)(ESI));
  /* 118e749e push edi */
  push32((uint32_t)(EDI));
  /* 118e749f mov edi, dword ptr [0x118ef0b0] */
  EDI = (r32((uint32_t)(0x118ef0b0)));
  /* 118e74a5 mov esi, 0x118f1aa0 */
  ESI = (0x118f1aa0u);
L_118e74aa:;
  /* 118e74aa mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e74ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e74ae je 0x118e74db */
  if (C.zf) goto L_118e74db;
  /* 118e74b0 cmp esi, 0x118f1ae4 */
  { uint32_t _a=(ESI),_b=(0x118f1ae4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e74b6 je 0x118e74db */
  if (C.zf) goto L_118e74db;
  /* 118e74b8 cmp esi, 0x118f1ad4 */
  { uint32_t _a=(ESI),_b=(0x118f1ad4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e74be je 0x118e74db */
  if (C.zf) goto L_118e74db;
  /* 118e74c0 cmp esi, 0x118f1ac4 */
  { uint32_t _a=(ESI),_b=(0x118f1ac4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e74c6 je 0x118e74db */
  if (C.zf) goto L_118e74db;
  /* 118e74c8 cmp esi, 0x118f1aa4 */
  { uint32_t _a=(ESI),_b=(0x118f1aa4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e74ce je 0x118e74db */
  if (C.zf) goto L_118e74db;
  /* 118e74d0 push eax */
  push32((uint32_t)(EAX));
  /* 118e74d1 call edi */
  call_ind((uint32_t)(EDI), 0x118e74d3u);
  /* 118e74d3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e74d5 call 0x118e8ae5 */
  push32(0x118e74dau); f_118e8ae5();
  /* 118e74da pop ecx */
  ECX = (pop32());
L_118e74db:;
  /* 118e74db add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e74de cmp esi, 0x118f1b60 */
  { uint32_t _a=(ESI),_b=(0x118f1b60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e74e4 jl 0x118e74aa */
  if ((C.sf!=C.of)) goto L_118e74aa;
  /* 118e74e6 push dword ptr [0x118f1ac4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1ac4))));
  /* 118e74ec call edi */
  call_ind((uint32_t)(EDI), 0x118e74eeu);
  /* 118e74ee push dword ptr [0x118f1ad4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1ad4))));
  /* 118e74f4 call edi */
  call_ind((uint32_t)(EDI), 0x118e74f6u);
  /* 118e74f6 push dword ptr [0x118f1ae4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1ae4))));
  /* 118e74fc call edi */
  call_ind((uint32_t)(EDI), 0x118e74feu);
  /* 118e74fe push dword ptr [0x118f1aa4] */
  push32((uint32_t)(r32((uint32_t)(0x118f1aa4))));
  /* 118e7504 call edi */
  call_ind((uint32_t)(EDI), 0x118e7506u);
  /* 118e7506 pop edi */
  EDI = (pop32());
  /* 118e7507 pop esi */
  ESI = (pop32());
  /* 118e7508 ret  */
  ESPCHK(0x118e749du, _esp0);
  ESP += 4; return;
}

/* FUN_10007509 @ 0x118e7509 (97 bytes, 37 insns) */
void f_118e7509(void) {
  FTRACE(0x118e7509u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e7509 push ebp */
  push32((uint32_t)(EBP));
  /* 118e750a mov ebp, esp */
  EBP = (ESP);
  /* 118e750c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e750f push esi */
  push32((uint32_t)(ESI));
  /* 118e7510 cmp dword ptr [eax*4 + 0x118f1aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x118f1aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7518 lea esi, [eax*4 + 0x118f1aa0] */
  ESI = ((uint32_t)(EAX*4 + 0x118f1aa0));
  /* 118e751f jne 0x118e755f */
  if (!C.zf) goto L_118e755f;
  /* 118e7521 push edi */
  push32((uint32_t)(EDI));
  /* 118e7522 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 118e7524 call 0x118e553a */
  push32(0x118e7529u); f_118e553a();
  /* 118e7529 mov edi, eax */
  EDI = (EAX);
  /* 118e752b pop ecx */
  ECX = (pop32());
  /* 118e752c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e752e jne 0x118e7538 */
  if (!C.zf) goto L_118e7538;
  /* 118e7530 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118e7532 call 0x118e4b2d */
  push32(0x118e7537u); f_118e4b2d();
  /* 118e7537 pop ecx */
  ECX = (pop32());
L_118e7538:;
  /* 118e7538 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118e753a call 0x118e7509 */
  push32(0x118e753fu); f_118e7509();
  /* 118e753f cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7542 pop ecx */
  ECX = (pop32());
  /* 118e7543 push edi */
  push32((uint32_t)(EDI));
  /* 118e7544 jne 0x118e7550 */
  if (!C.zf) goto L_118e7550;
  /* 118e7546 call dword ptr [0x118ef070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef070))), 0x118e754cu);
  /* 118e754c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118e754e jmp 0x118e7556 */
  goto L_118e7556;
L_118e7550:;
  /* 118e7550 call 0x118e8ae5 */
  push32(0x118e7555u); f_118e8ae5();
  /* 118e7555 pop ecx */
  ECX = (pop32());
L_118e7556:;
  /* 118e7556 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118e7558 call 0x118e756a */
  push32(0x118e755du); f_118e756a();
  /* 118e755d pop ecx */
  ECX = (pop32());
  /* 118e755e pop edi */
  EDI = (pop32());
L_118e755f:;
  /* 118e755f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e7561 call dword ptr [0x118ef06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef06c))), 0x118e7567u);
  /* 118e7567 pop esi */
  ESI = (pop32());
  /* 118e7568 pop ebp */
  EBP = (pop32());
  /* 118e7569 ret  */
  ESPCHK(0x118e7509u, _esp0);
  ESP += 4; return;
}

/* FUN_1000756a @ 0x118e756a (21 bytes, 7 insns) */
void f_118e756a(void) {
  FTRACE(0x118e756au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e756a push ebp */
  push32((uint32_t)(EBP));
  /* 118e756b mov ebp, esp */
  EBP = (ESP);
  /* 118e756d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7570 push dword ptr [eax*4 + 0x118f1aa0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x118f1aa0))));
  /* 118e7577 call dword ptr [0x118ef068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef068))), 0x118e757du);
  /* 118e757d pop ebp */
  EBP = (pop32());
  /* 118e757e ret  */
  ESPCHK(0x118e756au, _esp0);
  ESP += 4; return;
}

/* FUN_1000757f @ 0x118e757f (72 bytes, 17 insns) */
void f_118e757f(void) {
  FTRACE(0x118e757fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e757f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 118e7584 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e7586 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e758c call dword ptr [0x118ef0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0fc))), 0x118e7592u);
  /* 118e7592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e7594 mov dword ptr [0x1190aa18], eax */
  w32((uint32_t)(0x1190aa18), (EAX));
  /* 118e7599 jne 0x118e759c */
  if (!C.zf) goto L_118e759c;
  /* 118e759b ret  */
  ESPCHK(0x118e757fu, _esp0);
  ESP += 4; return;
L_118e759c:;
  /* 118e759c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e75a0 and dword ptr [0x1190aa10], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1190aa10)))&(0x0u); w32((uint32_t)(0x1190aa10), (_r)); fl_logic(_r,32); }
  /* 118e75a7 and dword ptr [0x1190aa14], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1190aa14)))&(0x0u); w32((uint32_t)(0x1190aa14), (_r)); fl_logic(_r,32); }
  /* 118e75ae push 1 */
  push32((uint32_t)(0x1u));
  /* 118e75b0 mov dword ptr [0x1190aa0c], eax */
  w32((uint32_t)(0x1190aa0c), (EAX));
  /* 118e75b5 mov dword ptr [0x1190aa1c], ecx */
  w32((uint32_t)(0x1190aa1c), (ECX));
  /* 118e75bb mov dword ptr [0x1190aa04], 0x10 */
  w32((uint32_t)(0x1190aa04), (0x10u));
  /* 118e75c5 pop eax */
  EAX = (pop32());
  /* 118e75c6 ret  */
  ESPCHK(0x118e757fu, _esp0);
  ESP += 4; return;
}

/* FUN_100075c7 @ 0x118e75c7 (43 bytes, 14 insns) */
void f_118e75c7(void) {
  FTRACE(0x118e75c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e75c7 mov eax, dword ptr [0x1190aa14] */
  EAX = (r32((uint32_t)(0x1190aa14)));
  /* 118e75cc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 118e75cf mov eax, dword ptr [0x1190aa18] */
  EAX = (r32((uint32_t)(0x1190aa18)));
  /* 118e75d4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_118e75d7:;
  /* 118e75d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e75d9 jae 0x118e75ef */
  if (!C.cf) goto L_118e75ef;
  /* 118e75db mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e75df sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e75e2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e75e8 jb 0x118e75f1 */
  if (C.cf) goto L_118e75f1;
  /* 118e75ea add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e75ed jmp 0x118e75d7 */
  goto L_118e75d7;
L_118e75ef:;
  /* 118e75ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e75f1:;
  /* 118e75f1 ret  */
  ESPCHK(0x118e75c7u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f2 @ 0x118e75f2 (809 bytes, 265 insns) */
void f_118e75f2(void) {
  FTRACE(0x118e75f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e75f2 push ebp */
  push32((uint32_t)(EBP));
  /* 118e75f3 mov ebp, esp */
  EBP = (ESP);
  /* 118e75f5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e75f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e75fb push ebx */
  push32((uint32_t)(EBX));
  /* 118e75fc push esi */
  push32((uint32_t)(ESI));
  /* 118e75fd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7600 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 118e7603 push edi */
  push32((uint32_t)(EDI));
  /* 118e7604 mov edi, esi */
  EDI = (ESI);
  /* 118e7606 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7609 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e760c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 118e760f mov ecx, edi */
  ECX = (EDI);
  /* 118e7611 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e7617 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 118e761e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118e7621 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e7623 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118e7624 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 118e7627 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118e762a jne 0x118e7916 */
  if (!C.zf) goto L_118e7916;
  /* 118e7630 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 118e7633 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 118e7636 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118e7639 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 118e763c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118e763f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e7642 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 118e7645 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 118e7648 jne 0x118e76c8 */
  if (!C.zf) goto L_118e76c8;
  /* 118e764a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 118e764d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e764e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7651 jbe 0x118e7656 */
  if ((C.cf||C.zf)) goto L_118e7656;
  /* 118e7653 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7655 pop edx */
  EDX = (pop32());
L_118e7656:;
  /* 118e7656 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e7659 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e765c jne 0x118e76aa */
  if (!C.zf) goto L_118e76aa;
  /* 118e765e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7661 jae 0x118e7681 */
  if (!C.cf) goto L_118e7681;
  /* 118e7663 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7668 mov ecx, edx */
  ECX = (EDX);
  /* 118e766a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e766c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 118e7670 not ebx */
  EBX = (~(EBX));
  /* 118e7672 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118e7676 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118e7678 jne 0x118e76a2 */
  if (!C.zf) goto L_118e76a2;
  /* 118e767a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e767d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118e767f jmp 0x118e76a2 */
  goto L_118e76a2;
L_118e7681:;
  /* 118e7681 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 118e7684 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7689 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e768b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 118e768f not ebx */
  EBX = (~(EBX));
  /* 118e7691 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118e7698 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118e769a jne 0x118e76a2 */
  if (!C.zf) goto L_118e76a2;
  /* 118e769c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e769f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e76a2:;
  /* 118e76a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e76a5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e76a8 jmp 0x118e76ad */
  goto L_118e76ad;
L_118e76aa:;
  /* 118e76aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_118e76ad:;
  /* 118e76ad mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 118e76b0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e76b3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e76b6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 118e76b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e76bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118e76bf mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 118e76c2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 118e76c5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_118e76c8:;
  /* 118e76c8 mov edx, ecx */
  EDX = (ECX);
  /* 118e76ca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 118e76cd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e76ce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e76d1 jbe 0x118e76d6 */
  if ((C.cf||C.zf)) goto L_118e76d6;
  /* 118e76d3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e76d5 pop edx */
  EDX = (pop32());
L_118e76d6:;
  /* 118e76d6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e76d9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 118e76dc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 118e76df jne 0x118e7779 */
  if (!C.zf) goto L_118e7779;
  /* 118e76e5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e76e8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e76eb sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 118e76ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e76f0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118e76f3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e76f4 pop esi */
  ESI = (pop32());
  /* 118e76f5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e76f7 jbe 0x118e76fb */
  if ((C.cf||C.zf)) goto L_118e76fb;
  /* 118e76f9 mov ebx, esi */
  EBX = (ESI);
L_118e76fb:;
  /* 118e76fb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e76fe mov edx, ecx */
  EDX = (ECX);
  /* 118e7700 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118e7703 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 118e7706 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e7707 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7709 jbe 0x118e770d */
  if ((C.cf||C.zf)) goto L_118e770d;
  /* 118e770b mov edx, esi */
  EDX = (ESI);
L_118e770d:;
  /* 118e770d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e770f je 0x118e7774 */
  if (C.zf) goto L_118e7774;
  /* 118e7711 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7714 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 118e7717 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e771a jne 0x118e775c */
  if (!C.zf) goto L_118e775c;
  /* 118e771c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e771f jae 0x118e773d */
  if (!C.cf) goto L_118e773d;
  /* 118e7721 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118e7726 mov ecx, ebx */
  ECX = (EBX);
  /* 118e7728 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118e772a not esi */
  ESI = (~(ESI));
  /* 118e772c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118e7730 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 118e7734 jne 0x118e775c */
  if (!C.zf) goto L_118e775c;
  /* 118e7736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7739 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118e773b jmp 0x118e775c */
  goto L_118e775c;
L_118e773d:;
  /* 118e773d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 118e7740 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118e7745 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118e7747 not esi */
  ESI = (~(ESI));
  /* 118e7749 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118e7750 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 118e7754 jne 0x118e775c */
  if (!C.zf) goto L_118e775c;
  /* 118e7756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7759 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e775c:;
  /* 118e775c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e775f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 118e7762 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 118e7765 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 118e7768 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e776b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 118e776e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 118e7771 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_118e7774:;
  /* 118e7774 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7777 jmp 0x118e777c */
  goto L_118e777c;
L_118e7779:;
  /* 118e7779 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118e777c:;
  /* 118e777c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7780 jne 0x118e778a */
  if (!C.zf) goto L_118e778a;
  /* 118e7782 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7784 je 0x118e780b */
  if (C.zf) goto L_118e780b;
L_118e778a:;
  /* 118e778a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118e778d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 118e7791 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 118e7794 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 118e7797 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 118e779a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118e779d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e77a0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 118e77a3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e77a6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e77a9 jne 0x118e780b */
  if (!C.zf) goto L_118e780b;
  /* 118e77ab mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 118e77af cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e77b2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 118e77b5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118e77b7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 118e77bb jae 0x118e77e2 */
  if (!C.cf) goto L_118e77e2;
  /* 118e77bd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e77c1 jne 0x118e77d1 */
  if (!C.zf) goto L_118e77d1;
  /* 118e77c3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e77c8 mov ecx, edx */
  ECX = (EDX);
  /* 118e77ca shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e77cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e77cf or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_118e77d1:;
  /* 118e77d1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e77d6 mov ecx, edx */
  ECX = (EDX);
  /* 118e77d8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e77da lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 118e77de or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118e77e0 jmp 0x118e780b */
  goto L_118e780b;
L_118e77e2:;
  /* 118e77e2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e77e6 jne 0x118e77f8 */
  if (!C.zf) goto L_118e77f8;
  /* 118e77e8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 118e77eb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e77f0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e77f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e77f5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e77f8:;
  /* 118e77f8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 118e77fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118e7800 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e7802 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 118e7809 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_118e780b:;
  /* 118e780b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e780e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e7810 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 118e7814 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118e7817 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 118e7819 jne 0x118e7916 */
  if (!C.zf) goto L_118e7916;
  /* 118e781f mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e7824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e7826 je 0x118e7908 */
  if (C.zf) goto L_118e7908;
  /* 118e782c mov ecx, dword ptr [0x1190aa08] */
  ECX = (r32((uint32_t)(0x1190aa08)));
  /* 118e7832 mov esi, dword ptr [0x118ef084] */
  ESI = (r32((uint32_t)(0x118ef084)));
  /* 118e7838 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 118e783b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e783e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 118e7843 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 118e7848 push ebx */
  push32((uint32_t)(EBX));
  /* 118e7849 push ecx */
  push32((uint32_t)(ECX));
  /* 118e784a call esi */
  call_ind((uint32_t)(ESI), 0x118e784cu);
  /* 118e784c mov ecx, dword ptr [0x1190aa08] */
  ECX = (r32((uint32_t)(0x1190aa08)));
  /* 118e7852 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e7857 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118e785c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e785e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118e7861 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e7866 mov ecx, dword ptr [0x1190aa08] */
  ECX = (r32((uint32_t)(0x1190aa08)));
  /* 118e786c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 118e786f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118e7877 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e787c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 118e787f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 118e7882 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e7887 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118e788a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e788e jne 0x118e7899 */
  if (!C.zf) goto L_118e7899;
  /* 118e7890 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e7894 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
L_118e7899:;
  /* 118e7899 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e789d jne 0x118e7908 */
  if (!C.zf) goto L_118e7908;
  /* 118e789f push ebx */
  push32((uint32_t)(EBX));
  /* 118e78a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e78a2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 118e78a5 call esi */
  call_ind((uint32_t)(ESI), 0x118e78a7u);
  /* 118e78a7 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e78ac push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 118e78af push 0 */
  push32((uint32_t)(0x0u));
  /* 118e78b1 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e78b7 call dword ptr [0x118ef080] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef080))), 0x118e78bdu);
  /* 118e78bd mov eax, dword ptr [0x1190aa14] */
  EAX = (r32((uint32_t)(0x1190aa14)));
  /* 118e78c2 mov edx, dword ptr [0x1190aa18] */
  EDX = (r32((uint32_t)(0x1190aa18)));
  /* 118e78c8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e78cb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118e78ce mov ecx, eax */
  ECX = (EAX);
  /* 118e78d0 mov eax, dword ptr [0x1190aa10] */
  EAX = (r32((uint32_t)(0x1190aa10)));
  /* 118e78d5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e78d7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 118e78db push ecx */
  push32((uint32_t)(ECX));
  /* 118e78dc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 118e78df push ecx */
  push32((uint32_t)(ECX));
  /* 118e78e0 push eax */
  push32((uint32_t)(EAX));
  /* 118e78e1 call 0x118e70b0 */
  push32(0x118e78e6u); f_118e70b0();
  /* 118e78e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e78e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e78ec dec dword ptr [0x1190aa14] */
  { uint32_t _r=(r32((uint32_t)(0x1190aa14)))-1; w32((uint32_t)(0x1190aa14), (_r)); fl_dec(_r,32); }
  /* 118e78f2 cmp eax, dword ptr [0x1190aa10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1190aa10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e78f8 jbe 0x118e78fe */
  if ((C.cf||C.zf)) goto L_118e78fe;
  /* 118e78fa sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_118e78fe:;
  /* 118e78fe mov eax, dword ptr [0x1190aa18] */
  EAX = (r32((uint32_t)(0x1190aa18)));
  /* 118e7903 mov dword ptr [0x1190aa0c], eax */
  w32((uint32_t)(0x1190aa0c), (EAX));
L_118e7908:;
  /* 118e7908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e790b mov dword ptr [0x1190aa08], edi */
  w32((uint32_t)(0x1190aa08), (EDI));
  /* 118e7911 mov dword ptr [0x1190aa10], eax */
  w32((uint32_t)(0x1190aa10), (EAX));
L_118e7916:;
  /* 118e7916 pop edi */
  EDI = (pop32());
  /* 118e7917 pop esi */
  ESI = (pop32());
  /* 118e7918 pop ebx */
  EBX = (pop32());
  /* 118e7919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e791a ret  */
  ESPCHK(0x118e75f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000791b @ 0x118e791b (777 bytes, 275 insns) */
void f_118e791b(void) {
  FTRACE(0x118e791bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e791b push ebp */
  push32((uint32_t)(EBP));
  /* 118e791c mov ebp, esp */
  EBP = (ESP);
  /* 118e791e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7921 mov eax, dword ptr [0x1190aa14] */
  EAX = (r32((uint32_t)(0x1190aa14)));
  /* 118e7926 mov edx, dword ptr [0x1190aa18] */
  EDX = (r32((uint32_t)(0x1190aa18)));
  /* 118e792c push ebx */
  push32((uint32_t)(EBX));
  /* 118e792d push esi */
  push32((uint32_t)(ESI));
  /* 118e792e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e7931 push edi */
  push32((uint32_t)(EDI));
  /* 118e7932 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 118e7935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7938 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118e793b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 118e793e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 118e7941 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118e7944 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118e7947 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118e7948 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e794b jge 0x118e795b */
  if ((C.sf==C.of)) goto L_118e795b;
  /* 118e794d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 118e7950 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118e7952 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118e7956 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 118e7959 jmp 0x118e796b */
  goto L_118e796b;
L_118e795b:;
  /* 118e795b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e795e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e7961 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e7963 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 118e7965 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 118e7968 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118e796b:;
  /* 118e796b mov eax, dword ptr [0x1190aa0c] */
  EAX = (r32((uint32_t)(0x1190aa0c)));
  /* 118e7970 mov ebx, eax */
  EBX = (EAX);
  /* 118e7972 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7974 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e7977 jae 0x118e7992 */
  if (!C.cf) goto L_118e7992;
L_118e7979:;
  /* 118e7979 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e797c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 118e797e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118e7981 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 118e7983 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118e7985 jne 0x118e7992 */
  if (!C.zf) goto L_118e7992;
  /* 118e7987 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e798a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e798d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e7990 jb 0x118e7979 */
  if (C.cf) goto L_118e7979;
L_118e7992:;
  /* 118e7992 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7995 jne 0x118e7a10 */
  if (!C.zf) goto L_118e7a10;
  /* 118e7997 mov ebx, edx */
  EBX = (EDX);
L_118e7999:;
  /* 118e7999 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e799b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e799e jae 0x118e79b5 */
  if (!C.cf) goto L_118e79b5;
  /* 118e79a0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e79a3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 118e79a5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118e79a8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 118e79aa or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118e79ac jne 0x118e79b3 */
  if (!C.zf) goto L_118e79b3;
  /* 118e79ae add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e79b1 jmp 0x118e7999 */
  goto L_118e7999;
L_118e79b3:;
  /* 118e79b3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e79b5:;
  /* 118e79b5 jne 0x118e7a10 */
  if (!C.zf) goto L_118e7a10;
L_118e79b7:;
  /* 118e79b7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e79ba jae 0x118e79cd */
  if (!C.cf) goto L_118e79cd;
  /* 118e79bc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e79c0 jne 0x118e79ca */
  if (!C.zf) goto L_118e79ca;
  /* 118e79c2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e79c5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e79c8 jmp 0x118e79b7 */
  goto L_118e79b7;
L_118e79ca:;
  /* 118e79ca cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e79cd:;
  /* 118e79cd jne 0x118e79f5 */
  if (!C.zf) goto L_118e79f5;
  /* 118e79cf mov ebx, edx */
  EBX = (EDX);
L_118e79d1:;
  /* 118e79d1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e79d3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e79d6 jae 0x118e79e5 */
  if (!C.cf) goto L_118e79e5;
  /* 118e79d8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e79dc jne 0x118e79e3 */
  if (!C.zf) goto L_118e79e3;
  /* 118e79de add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e79e1 jmp 0x118e79d1 */
  goto L_118e79d1;
L_118e79e3:;
  /* 118e79e3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e79e5:;
  /* 118e79e5 jne 0x118e79f5 */
  if (!C.zf) goto L_118e79f5;
  /* 118e79e7 call 0x118e7c24 */
  push32(0x118e79ecu); f_118e7c24();
  /* 118e79ec mov ebx, eax */
  EBX = (EAX);
  /* 118e79ee test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e79f0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e79f3 je 0x118e7a09 */
  if (C.zf) goto L_118e7a09;
L_118e79f5:;
  /* 118e79f5 push ebx */
  push32((uint32_t)(EBX));
  /* 118e79f6 call 0x118e7cd5 */
  push32(0x118e79fbu); f_118e7cd5();
  /* 118e79fb pop ecx */
  ECX = (pop32());
  /* 118e79fc mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 118e79ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118e7a01 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 118e7a04 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7a07 jne 0x118e7a10 */
  if (!C.zf) goto L_118e7a10;
L_118e7a09:;
  /* 118e7a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e7a0b jmp 0x118e7c1f */
  goto L_118e7c1f;
L_118e7a10:;
  /* 118e7a10 mov dword ptr [0x1190aa0c], ebx */
  w32((uint32_t)(0x1190aa0c), (EBX));
  /* 118e7a16 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 118e7a19 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 118e7a1b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7a1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118e7a21 je 0x118e7a37 */
  if (C.zf) goto L_118e7a37;
  /* 118e7a23 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 118e7a2a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 118e7a2e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118e7a31 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 118e7a33 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118e7a35 jne 0x118e7a6e */
  if (!C.zf) goto L_118e7a6e;
L_118e7a37:;
  /* 118e7a37 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 118e7a3d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 118e7a40 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 118e7a43 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 118e7a46 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e7a4a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 118e7a4d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 118e7a4f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118e7a52 jne 0x118e7a6b */
  if (!C.zf) goto L_118e7a6b;
L_118e7a54:;
  /* 118e7a54 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 118e7a5a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118e7a5d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 118e7a60 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7a63 mov edi, esi */
  EDI = (ESI);
  /* 118e7a65 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 118e7a67 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 118e7a69 je 0x118e7a54 */
  if (C.zf) goto L_118e7a54;
L_118e7a6b:;
  /* 118e7a6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_118e7a6e:;
  /* 118e7a6e mov ecx, edx */
  ECX = (EDX);
  /* 118e7a70 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e7a72 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e7a78 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 118e7a7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118e7a82 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 118e7a86 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 118e7a88 jne 0x118e7a97 */
  if (!C.zf) goto L_118e7a97;
  /* 118e7a8a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 118e7a91 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118e7a93 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118e7a96 pop edi */
  EDI = (pop32());
L_118e7a97:;
  /* 118e7a97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118e7a99 jl 0x118e7aa0 */
  if ((C.sf!=C.of)) goto L_118e7aa0;
  /* 118e7a9b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118e7a9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e7a9e jmp 0x118e7a97 */
  goto L_118e7a97;
L_118e7aa0:;
  /* 118e7aa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e7aa3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 118e7aa7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118e7aa9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7aac mov esi, ecx */
  ESI = (ECX);
  /* 118e7aae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118e7ab1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118e7ab4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e7ab5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7ab8 jle 0x118e7abd */
  if ((C.zf||C.sf!=C.of)) goto L_118e7abd;
  /* 118e7aba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7abc pop esi */
  ESI = (pop32());
L_118e7abd:;
  /* 118e7abd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7abf je 0x118e7bd2 */
  if (C.zf) goto L_118e7bd2;
  /* 118e7ac5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118e7ac8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7acb jne 0x118e7b2e */
  if (!C.zf) goto L_118e7b2e;
  /* 118e7acd cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7ad0 jge 0x118e7afd */
  if ((C.sf==C.of)) goto L_118e7afd;
  /* 118e7ad2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7ad7 mov ecx, edi */
  ECX = (EDI);
  /* 118e7ad9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7adb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7ade lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 118e7ae2 not ebx */
  EBX = (~(EBX));
  /* 118e7ae4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 118e7ae7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 118e7aeb mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 118e7aef dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 118e7af1 jne 0x118e7b2b */
  if (!C.zf) goto L_118e7b2b;
  /* 118e7af3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7af6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118e7af9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 118e7afb jmp 0x118e7b2e */
  goto L_118e7b2e;
L_118e7afd:;
  /* 118e7afd lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 118e7b00 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7b05 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7b07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7b0a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 118e7b0e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 118e7b15 not ebx */
  EBX = (~(EBX));
  /* 118e7b17 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118e7b19 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 118e7b1b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 118e7b1e jne 0x118e7b2b */
  if (!C.zf) goto L_118e7b2b;
  /* 118e7b20 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7b23 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118e7b26 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e7b29 jmp 0x118e7b2e */
  goto L_118e7b2e;
L_118e7b2b:;
  /* 118e7b2b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118e7b2e:;
  /* 118e7b2e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 118e7b31 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 118e7b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7b38 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 118e7b3b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118e7b3e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 118e7b41 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 118e7b44 je 0x118e7bde */
  if (C.zf) goto L_118e7bde;
  /* 118e7b4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e7b4d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 118e7b51 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 118e7b54 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 118e7b57 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 118e7b5a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 118e7b5d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118e7b60 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 118e7b63 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118e7b66 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7b69 jne 0x118e7bcf */
  if (!C.zf) goto L_118e7bcf;
  /* 118e7b6b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 118e7b6f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7b72 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 118e7b75 jge 0x118e7ba0 */
  if ((C.sf==C.of)) goto L_118e7ba0;
  /* 118e7b77 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118e7b79 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e7b7d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 118e7b81 jne 0x118e7b8e */
  if (!C.zf) goto L_118e7b8e;
  /* 118e7b83 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118e7b88 mov ecx, esi */
  ECX = (ESI);
  /* 118e7b8a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118e7b8c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_118e7b8e:;
  /* 118e7b8e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118e7b93 mov ecx, esi */
  ECX = (ESI);
  /* 118e7b95 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118e7b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7b9a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118e7b9e jmp 0x118e7bcf */
  goto L_118e7bcf;
L_118e7ba0:;
  /* 118e7ba0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118e7ba2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e7ba6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 118e7baa jne 0x118e7bb9 */
  if (!C.zf) goto L_118e7bb9;
  /* 118e7bac lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118e7baf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118e7bb4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118e7bb6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_118e7bb9:;
  /* 118e7bb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7bbc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 118e7bc3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118e7bc6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118e7bcb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118e7bcd or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_118e7bcf:;
  /* 118e7bcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_118e7bd2:;
  /* 118e7bd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118e7bd4 je 0x118e7be1 */
  if (C.zf) goto L_118e7be1;
  /* 118e7bd6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118e7bd8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 118e7bdc jmp 0x118e7be1 */
  goto L_118e7be1;
L_118e7bde:;
  /* 118e7bde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_118e7be1:;
  /* 118e7be1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 118e7be4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7be6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 118e7be9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118e7beb mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 118e7bef mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118e7bf2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e7bf4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118e7bf6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 118e7bf9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118e7bfb jne 0x118e7c17 */
  if (!C.zf) goto L_118e7c17;
  /* 118e7bfd cmp ebx, dword ptr [0x1190aa10] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1190aa10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7c03 jne 0x118e7c17 */
  if (!C.zf) goto L_118e7c17;
  /* 118e7c05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7c08 cmp ecx, dword ptr [0x1190aa08] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1190aa08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7c0e jne 0x118e7c17 */
  if (!C.zf) goto L_118e7c17;
  /* 118e7c10 and dword ptr [0x1190aa10], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1190aa10)))&(0x0u); w32((uint32_t)(0x1190aa10), (_r)); fl_logic(_r,32); }
L_118e7c17:;
  /* 118e7c17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7c1a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e7c1c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_118e7c1f:;
  /* 118e7c1f pop edi */
  EDI = (pop32());
  /* 118e7c20 pop esi */
  ESI = (pop32());
  /* 118e7c21 pop ebx */
  EBX = (pop32());
  /* 118e7c22 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e7c23 ret  */
  ESPCHK(0x118e791bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c24 @ 0x118e7c24 (177 bytes, 53 insns) */
void f_118e7c24(void) {
  FTRACE(0x118e7c24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e7c24 mov eax, dword ptr [0x1190aa14] */
  EAX = (r32((uint32_t)(0x1190aa14)));
  /* 118e7c29 mov ecx, dword ptr [0x1190aa04] */
  ECX = (r32((uint32_t)(0x1190aa04)));
  /* 118e7c2f push esi */
  push32((uint32_t)(ESI));
  /* 118e7c30 push edi */
  push32((uint32_t)(EDI));
  /* 118e7c31 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e7c33 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7c35 jne 0x118e7c67 */
  if (!C.zf) goto L_118e7c67;
  /* 118e7c37 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 118e7c3b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118e7c3e push eax */
  push32((uint32_t)(EAX));
  /* 118e7c3f push dword ptr [0x1190aa18] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa18))));
  /* 118e7c45 push edi */
  push32((uint32_t)(EDI));
  /* 118e7c46 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e7c4c call dword ptr [0x118ef0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0f8))), 0x118e7c52u);
  /* 118e7c52 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7c54 je 0x118e7cb7 */
  if (C.zf) goto L_118e7cb7;
  /* 118e7c56 add dword ptr [0x1190aa04], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1190aa04))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1190aa04), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e7c5d mov dword ptr [0x1190aa18], eax */
  w32((uint32_t)(0x1190aa18), (EAX));
  /* 118e7c62 mov eax, dword ptr [0x1190aa14] */
  EAX = (r32((uint32_t)(0x1190aa14)));
L_118e7c67:;
  /* 118e7c67 mov ecx, dword ptr [0x1190aa18] */
  ECX = (r32((uint32_t)(0x1190aa18)));
  /* 118e7c6d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 118e7c72 push 8 */
  push32((uint32_t)(0x8u));
  /* 118e7c74 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e7c77 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e7c7d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 118e7c80 call dword ptr [0x118ef0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0fc))), 0x118e7c86u);
  /* 118e7c86 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7c88 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 118e7c8b je 0x118e7cb7 */
  if (C.zf) goto L_118e7cb7;
  /* 118e7c8d push 4 */
  push32((uint32_t)(0x4u));
  /* 118e7c8f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 118e7c94 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 118e7c99 push edi */
  push32((uint32_t)(EDI));
  /* 118e7c9a call dword ptr [0x118ef064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef064))), 0x118e7ca0u);
  /* 118e7ca0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7ca2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118e7ca5 jne 0x118e7cbb */
  if (!C.zf) goto L_118e7cbb;
  /* 118e7ca7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118e7caa push edi */
  push32((uint32_t)(EDI));
  /* 118e7cab push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e7cb1 call dword ptr [0x118ef080] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef080))), 0x118e7cb7u);
L_118e7cb7:;
  /* 118e7cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e7cb9 jmp 0x118e7cd2 */
  goto L_118e7cd2;
L_118e7cbb:;
  /* 118e7cbb or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 118e7cbf mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118e7cc1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 118e7cc4 inc dword ptr [0x1190aa14] */
  { uint32_t _r=(r32((uint32_t)(0x1190aa14)))+1; w32((uint32_t)(0x1190aa14), (_r)); fl_inc(_r,32); }
  /* 118e7cca mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118e7ccd or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118e7cd0 mov eax, esi */
  EAX = (ESI);
L_118e7cd2:;
  /* 118e7cd2 pop edi */
  EDI = (pop32());
  /* 118e7cd3 pop esi */
  ESI = (pop32());
  /* 118e7cd4 ret  */
  ESPCHK(0x118e7c24u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd5 @ 0x118e7cd5 (251 bytes, 85 insns) */
void f_118e7cd5(void) {
  FTRACE(0x118e7cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e7cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 118e7cd6 mov ebp, esp */
  EBP = (ESP);
  /* 118e7cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 118e7cd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7cdc push ebx */
  push32((uint32_t)(EBX));
  /* 118e7cdd push esi */
  push32((uint32_t)(ESI));
  /* 118e7cde push edi */
  push32((uint32_t)(EDI));
  /* 118e7cdf mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 118e7ce2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 118e7ce5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118e7ce7:;
  /* 118e7ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e7ce9 jl 0x118e7cf0 */
  if ((C.sf!=C.of)) goto L_118e7cf0;
  /* 118e7ceb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118e7ced inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e7cee jmp 0x118e7ce7 */
  goto L_118e7ce7;
L_118e7cf0:;
  /* 118e7cf0 mov eax, ebx */
  EAX = (EBX);
  /* 118e7cf2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7cf4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e7cfa pop edx */
  EDX = (pop32());
  /* 118e7cfb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 118e7d02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118e7d05:;
  /* 118e7d05 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 118e7d08 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 118e7d0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7d0e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e7d0f jne 0x118e7d05 */
  if (!C.zf) goto L_118e7d05;
  /* 118e7d11 mov edi, ebx */
  EDI = (EBX);
  /* 118e7d13 push 4 */
  push32((uint32_t)(0x4u));
  /* 118e7d15 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 118e7d18 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7d1b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118e7d20 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118e7d25 push edi */
  push32((uint32_t)(EDI));
  /* 118e7d26 call dword ptr [0x118ef064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef064))), 0x118e7d2cu);
  /* 118e7d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e7d2e jne 0x118e7d38 */
  if (!C.zf) goto L_118e7d38;
  /* 118e7d30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e7d33 jmp 0x118e7dcb */
  goto L_118e7dcb;
L_118e7d38:;
  /* 118e7d38 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 118e7d3e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7d40 ja 0x118e7d7e */
  if ((!C.cf&&!C.zf)) goto L_118e7d7e;
  /* 118e7d42 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_118e7d45:;
  /* 118e7d45 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 118e7d49 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 118e7d50 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 118e7d56 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 118e7d5d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e7d5f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 118e7d65 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118e7d68 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 118e7d72 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7d77 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 118e7d7a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7d7c jbe 0x118e7d45 */
  if ((C.cf||C.zf)) goto L_118e7d45;
L_118e7d7e:;
  /* 118e7d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7d81 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 118e7d84 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7d89 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e7d8b pop edi */
  EDI = (pop32());
  /* 118e7d8c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118e7d8f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118e7d92 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 118e7d95 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118e7d98 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 118e7d9b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118e7da0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 118e7da7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 118e7daa mov cl, al */
  CL = (AL);
  /* 118e7dac inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118e7dae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e7db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7db3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 118e7db6 jne 0x118e7dbb */
  if (!C.zf) goto L_118e7dbb;
  /* 118e7db8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118e7dbb:;
  /* 118e7dbb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118e7dc0 mov ecx, ebx */
  ECX = (EBX);
  /* 118e7dc2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e7dc4 not edx */
  EDX = (~(EDX));
  /* 118e7dc6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118e7dc9 mov eax, ebx */
  EAX = (EBX);
L_118e7dcb:;
  /* 118e7dcb pop edi */
  EDI = (pop32());
  /* 118e7dcc pop esi */
  ESI = (pop32());
  /* 118e7dcd pop ebx */
  EBX = (pop32());
  /* 118e7dce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e7dcf ret  */
  ESPCHK(0x118e7cd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dd0 @ 0x118e7dd0 (758 bytes, 259 insns) */
void f_118e7dd0(void) {
  FTRACE(0x118e7dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e7dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e7dd1 mov ebp, esp */
  EBP = (ESP);
  /* 118e7dd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7dd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7dd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e7ddc push ebx */
  push32((uint32_t)(EBX));
  /* 118e7ddd push esi */
  push32((uint32_t)(ESI));
  /* 118e7dde push edi */
  push32((uint32_t)(EDI));
  /* 118e7ddf mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7de2 mov edx, edi */
  EDX = (EDI);
  /* 118e7de4 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 118e7de7 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7dea mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 118e7ded and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e7df0 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 118e7df3 mov ecx, edx */
  ECX = (EDX);
  /* 118e7df5 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e7dfb lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 118e7e02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118e7e05 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 118e7e08 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118e7e09 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7e0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118e7e0e mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 118e7e12 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 118e7e16 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118e7e19 jle 0x118e7f7e */
  if ((C.zf||C.sf!=C.of)) goto L_118e7f7e;
  /* 118e7e1f test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118e7e22 jne 0x118e7f77 */
  if (!C.zf) goto L_118e7f77;
  /* 118e7e28 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7e2a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7e2c jg 0x118e7f77 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e7f77;
  /* 118e7e32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7e35 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118e7e38 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118e7e39 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7e3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118e7e3f jbe 0x118e7e47 */
  if ((C.cf||C.zf)) goto L_118e7e47;
  /* 118e7e41 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7e43 pop ecx */
  ECX = (pop32());
  /* 118e7e44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118e7e47:;
  /* 118e7e47 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 118e7e4a cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7e4d jne 0x118e7e97 */
  if (!C.zf) goto L_118e7e97;
  /* 118e7e4f cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7e52 jae 0x118e7e73 */
  if (!C.cf) goto L_118e7e73;
  /* 118e7e54 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7e59 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7e5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e7e5e lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 118e7e62 not ebx */
  EBX = (~(EBX));
  /* 118e7e64 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118e7e68 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118e7e6a jne 0x118e7e97 */
  if (!C.zf) goto L_118e7e97;
  /* 118e7e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7e6f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118e7e71 jmp 0x118e7e97 */
  goto L_118e7e97;
L_118e7e73:;
  /* 118e7e73 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e7e76 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7e7b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7e7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e7e80 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 118e7e84 not ebx */
  EBX = (~(EBX));
  /* 118e7e86 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118e7e8d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118e7e8f jne 0x118e7e97 */
  if (!C.zf) goto L_118e7e97;
  /* 118e7e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7e94 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e7e97:;
  /* 118e7e97 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 118e7e9a mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 118e7e9d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 118e7ea0 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 118e7ea3 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 118e7ea6 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 118e7ea9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e7eac sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e7eae add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e7eb1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7eb5 jle 0x118e7f65 */
  if ((C.zf||C.sf!=C.of)) goto L_118e7f65;
  /* 118e7ebb mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7ebe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7ec1 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 118e7ec4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118e7ec5 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 118e7ec9 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7ecc jbe 0x118e7ed1 */
  if ((C.cf||C.zf)) goto L_118e7ed1;
  /* 118e7ece push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7ed0 pop edi */
  EDI = (pop32());
L_118e7ed1:;
  /* 118e7ed1 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e7ed4 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 118e7ed7 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 118e7eda mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e7edd mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 118e7ee0 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e7ee3 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 118e7ee6 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 118e7ee9 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 118e7eec mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118e7eef mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 118e7ef2 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7ef5 jne 0x118e7f53 */
  if (!C.zf) goto L_118e7f53;
  /* 118e7ef7 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 118e7efb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7efe mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 118e7f01 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118e7f03 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 118e7f07 jae 0x118e7f2a */
  if (!C.cf) goto L_118e7f2a;
  /* 118e7f09 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e7f0d jne 0x118e7f1d */
  if (!C.zf) goto L_118e7f1d;
  /* 118e7f0f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7f14 mov ecx, edi */
  ECX = (EDI);
  /* 118e7f16 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7f18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7f1b or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_118e7f1d:;
  /* 118e7f1d lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 118e7f21 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118e7f26 mov ecx, edi */
  ECX = (EDI);
  /* 118e7f28 jmp 0x118e7f4f */
  goto L_118e7f4f;
L_118e7f2a:;
  /* 118e7f2a cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e7f2e jne 0x118e7f40 */
  if (!C.zf) goto L_118e7f40;
  /* 118e7f30 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 118e7f33 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7f38 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7f3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7f3d or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e7f40:;
  /* 118e7f40 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 118e7f47 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 118e7f4a mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_118e7f4f:;
  /* 118e7f4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e7f51 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_118e7f53:;
  /* 118e7f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7f56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7f59 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 118e7f5d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e7f5f mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 118e7f63 jmp 0x118e7f68 */
  goto L_118e7f68;
L_118e7f65:;
  /* 118e7f65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_118e7f68:;
  /* 118e7f68 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 118e7f6b mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 118e7f6e mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 118e7f72 jmp 0x118e80be */
  goto L_118e80be;
L_118e7f77:;
  /* 118e7f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e7f79 jmp 0x118e80c1 */
  goto L_118e80c1;
L_118e7f7e:;
  /* 118e7f7e jge 0x118e80be */
  if ((C.sf==C.of)) goto L_118e80be;
  /* 118e7f84 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e7f87 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e7f8a lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 118e7f8d mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 118e7f90 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 118e7f94 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e7f97 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 118e7f9a sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118e7f9d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e7f9e mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 118e7fa1 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7fa4 jbe 0x118e7fa9 */
  if ((C.cf||C.zf)) goto L_118e7fa9;
  /* 118e7fa6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7fa8 pop esi */
  ESI = (pop32());
L_118e7fa9:;
  /* 118e7fa9 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118e7fad jne 0x118e8038 */
  if (!C.zf) goto L_118e8038;
  /* 118e7fb3 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 118e7fb6 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118e7fb9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e7fba cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7fbd jbe 0x118e7fc2 */
  if ((C.cf||C.zf)) goto L_118e7fc2;
  /* 118e7fbf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e7fc1 pop esi */
  ESI = (pop32());
L_118e7fc2:;
  /* 118e7fc2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 118e7fc5 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7fc8 jne 0x118e8011 */
  if (!C.zf) goto L_118e8011;
  /* 118e7fca cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e7fcd jae 0x118e7fed */
  if (!C.cf) goto L_118e7fed;
  /* 118e7fcf mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7fd4 mov ecx, esi */
  ECX = (ESI);
  /* 118e7fd6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7fd8 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 118e7fdc not ebx */
  EBX = (~(EBX));
  /* 118e7fde and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118e7fe2 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 118e7fe4 jne 0x118e800e */
  if (!C.zf) goto L_118e800e;
  /* 118e7fe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e7fe9 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118e7feb jmp 0x118e800e */
  goto L_118e800e;
L_118e7fed:;
  /* 118e7fed lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118e7ff0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118e7ff5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118e7ff7 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 118e7ffb not ebx */
  EBX = (~(EBX));
  /* 118e7ffd and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118e8004 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118e8006 jne 0x118e800e */
  if (!C.zf) goto L_118e800e;
  /* 118e8008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e800b and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e800e:;
  /* 118e800e mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_118e8011:;
  /* 118e8011 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 118e8014 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 118e8017 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118e801a mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 118e801d mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 118e8020 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 118e8023 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e8026 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8029 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 118e802c sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118e802f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e8030 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8033 jbe 0x118e8038 */
  if ((C.cf||C.zf)) goto L_118e8038;
  /* 118e8035 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e8037 pop esi */
  ESI = (pop32());
L_118e8038:;
  /* 118e8038 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e803b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 118e803f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 118e8042 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 118e8045 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118e8048 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 118e804b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e804e mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 118e8051 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118e8054 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8057 jne 0x118e80b5 */
  if (!C.zf) goto L_118e80b5;
  /* 118e8059 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 118e805d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8060 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 118e8063 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118e8065 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 118e8069 jae 0x118e808c */
  if (!C.cf) goto L_118e808c;
  /* 118e806b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e806f jne 0x118e807f */
  if (!C.zf) goto L_118e807f;
  /* 118e8071 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118e8076 mov ecx, esi */
  ECX = (ESI);
  /* 118e8078 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118e807a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e807d or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_118e807f:;
  /* 118e807f lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 118e8083 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118e8088 mov ecx, esi */
  ECX = (ESI);
  /* 118e808a jmp 0x118e80b1 */
  goto L_118e80b1;
L_118e808c:;
  /* 118e808c cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e8090 jne 0x118e80a2 */
  if (!C.zf) goto L_118e80a2;
  /* 118e8092 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118e8095 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118e809a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118e809c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e809f or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118e80a2:;
  /* 118e80a2 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 118e80a9 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118e80ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_118e80b1:;
  /* 118e80b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118e80b3 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_118e80b5:;
  /* 118e80b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e80b8 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 118e80ba mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_118e80be:;
  /* 118e80be push 1 */
  push32((uint32_t)(0x1u));
  /* 118e80c0 pop eax */
  EAX = (pop32());
L_118e80c1:;
  /* 118e80c1 pop edi */
  EDI = (pop32());
  /* 118e80c2 pop esi */
  ESI = (pop32());
  /* 118e80c3 pop ebx */
  EBX = (pop32());
  /* 118e80c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e80c5 ret  */
  ESPCHK(0x118e7dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c6 @ 0x118e80c6 (324 bytes, 102 insns) */
void f_118e80c6(void) {
  FTRACE(0x118e80c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e80c6 cmp dword ptr [0x118f1b70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1b70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e80cd push ebx */
  push32((uint32_t)(EBX));
  /* 118e80ce push ebp */
  push32((uint32_t)(EBP));
  /* 118e80cf push esi */
  push32((uint32_t)(ESI));
  /* 118e80d0 push edi */
  push32((uint32_t)(EDI));
  /* 118e80d1 jne 0x118e80da */
  if (!C.zf) goto L_118e80da;
  /* 118e80d3 mov esi, 0x118f1b60 */
  ESI = (0x118f1b60u);
  /* 118e80d8 jmp 0x118e80f7 */
  goto L_118e80f7;
L_118e80da:;
  /* 118e80da push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 118e80df push 0 */
  push32((uint32_t)(0x0u));
  /* 118e80e1 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e80e7 call dword ptr [0x118ef0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0fc))), 0x118e80edu);
  /* 118e80ed mov esi, eax */
  ESI = (EAX);
  /* 118e80ef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e80f1 je 0x118e8203 */
  if (C.zf) goto L_118e8203;
L_118e80f7:;
  /* 118e80f7 mov ebp, dword ptr [0x118ef064] */
  EBP = (r32((uint32_t)(0x118ef064)));
  /* 118e80fd push 4 */
  push32((uint32_t)(0x4u));
  /* 118e80ff push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 118e8104 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 118e8109 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e810b call ebp */
  call_ind((uint32_t)(EBP), 0x118e810du);
  /* 118e810d mov edi, eax */
  EDI = (EAX);
  /* 118e810f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e8111 je 0x118e81ec */
  if (C.zf) goto L_118e81ec;
  /* 118e8117 push 4 */
  push32((uint32_t)(0x4u));
  /* 118e8119 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 118e811e push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118e8123 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8124 push edi */
  push32((uint32_t)(EDI));
  /* 118e8125 call ebp */
  call_ind((uint32_t)(EBP), 0x118e8127u);
  /* 118e8127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8129 je 0x118e81de */
  if (C.zf) goto L_118e81de;
  /* 118e812f mov eax, 0x118f1b60 */
  EAX = (0x118f1b60u);
  /* 118e8134 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8136 jne 0x118e8156 */
  if (!C.zf) goto L_118e8156;
  /* 118e8138 cmp dword ptr [0x118f1b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118f1b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e813f jne 0x118e8146 */
  if (!C.zf) goto L_118e8146;
  /* 118e8141 mov dword ptr [0x118f1b60], eax */
  w32((uint32_t)(0x118f1b60), (EAX));
L_118e8146:;
  /* 118e8146 cmp dword ptr [0x118f1b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118f1b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e814d jne 0x118e816b */
  if (!C.zf) goto L_118e816b;
  /* 118e814f mov dword ptr [0x118f1b64], eax */
  w32((uint32_t)(0x118f1b64), (EAX));
  /* 118e8154 jmp 0x118e816b */
  goto L_118e816b;
L_118e8156:;
  /* 118e8156 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e8158 mov eax, dword ptr [0x118f1b64] */
  EAX = (r32((uint32_t)(0x118f1b64)));
  /* 118e815d mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118e8160 mov dword ptr [0x118f1b64], esi */
  w32((uint32_t)(0x118f1b64), (ESI));
  /* 118e8166 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e8169 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_118e816b:;
  /* 118e816b lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 118e8171 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 118e8177 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 118e817a lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 118e817d mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 118e8180 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 118e8183 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118e8186 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 118e8188 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_118e818d:;
  /* 118e818d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118e818f cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8192 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 118e8195 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e8196 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e8198 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118e8199 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118e819a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118e819c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118e819f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e81a2 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e81a8 jl 0x118e818d */
  if ((C.sf!=C.of)) goto L_118e818d;
  /* 118e81aa push ebx */
  push32((uint32_t)(EBX));
  /* 118e81ab push 0 */
  push32((uint32_t)(0x0u));
  /* 118e81ad push edi */
  push32((uint32_t)(EDI));
  /* 118e81ae call 0x118e7050 */
  push32(0x118e81b3u); f_118e7050();
  /* 118e81b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e81b6:;
  /* 118e81b6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118e81b9 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e81bb cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e81bd jae 0x118e81da */
  if (!C.cf) goto L_118e81da;
  /* 118e81bf or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 118e81c6 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 118e81c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118e81cb mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 118e81d2 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e81d8 jmp 0x118e81b6 */
  goto L_118e81b6;
L_118e81da:;
  /* 118e81da mov eax, esi */
  EAX = (ESI);
  /* 118e81dc jmp 0x118e8205 */
  goto L_118e8205;
L_118e81de:;
  /* 118e81de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118e81e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e81e5 push edi */
  push32((uint32_t)(EDI));
  /* 118e81e6 call dword ptr [0x118ef084] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef084))), 0x118e81ecu);
L_118e81ec:;
  /* 118e81ec cmp esi, 0x118f1b60 */
  { uint32_t _a=(ESI),_b=(0x118f1b60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e81f2 je 0x118e8203 */
  if (C.zf) goto L_118e8203;
  /* 118e81f4 push esi */
  push32((uint32_t)(ESI));
  /* 118e81f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e81f7 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e81fd call dword ptr [0x118ef080] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef080))), 0x118e8203u);
L_118e8203:;
  /* 118e8203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e8205:;
  /* 118e8205 pop edi */
  EDI = (pop32());
  /* 118e8206 pop esi */
  ESI = (pop32());
  /* 118e8207 pop ebp */
  EBP = (pop32());
  /* 118e8208 pop ebx */
  EBX = (pop32());
  /* 118e8209 ret  */
  ESPCHK(0x118e80c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000820a @ 0x118e820a (86 bytes, 27 insns) */
void f_118e820a(void) {
  FTRACE(0x118e820au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e820a push esi */
  push32((uint32_t)(ESI));
  /* 118e820b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e820f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118e8214 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8216 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118e8219 call dword ptr [0x118ef084] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef084))), 0x118e821fu);
  /* 118e821f cmp dword ptr [0x118f3b80], esi */
  { uint32_t _a=(r32((uint32_t)(0x118f3b80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8225 jne 0x118e822f */
  if (!C.zf) goto L_118e822f;
  /* 118e8227 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e822a mov dword ptr [0x118f3b80], eax */
  w32((uint32_t)(0x118f3b80), (EAX));
L_118e822f:;
  /* 118e822f cmp esi, 0x118f1b60 */
  { uint32_t _a=(ESI),_b=(0x118f1b60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8235 je 0x118e8257 */
  if (C.zf) goto L_118e8257;
  /* 118e8237 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e823a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e823c push esi */
  push32((uint32_t)(ESI));
  /* 118e823d push 0 */
  push32((uint32_t)(0x0u));
  /* 118e823f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e8241 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e8243 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e8246 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118e8249 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e824f call dword ptr [0x118ef080] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef080))), 0x118e8255u);
  /* 118e8255 pop esi */
  ESI = (pop32());
  /* 118e8256 ret  */
  ESPCHK(0x118e820au, _esp0);
  ESP += 4; return;
L_118e8257:;
  /* 118e8257 or dword ptr [0x118f1b70], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x118f1b70)))|(0xffffffffu); w32((uint32_t)(0x118f1b70), (_r)); fl_logic(_r,32); }
  /* 118e825e pop esi */
  ESI = (pop32());
  /* 118e825f ret  */
  ESPCHK(0x118e820au, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x118e8260 (194 bytes, 66 insns) */
void f_118e8260(void) {
  FTRACE(0x118e8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8260 push ebp */
  push32((uint32_t)(EBP));
  /* 118e8261 mov ebp, esp */
  EBP = (ESP);
  /* 118e8263 push ecx */
  push32((uint32_t)(ECX));
  /* 118e8264 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8265 push esi */
  push32((uint32_t)(ESI));
  /* 118e8266 mov esi, dword ptr [0x118f1b64] */
  ESI = (r32((uint32_t)(0x118f1b64)));
  /* 118e826c push edi */
  push32((uint32_t)(EDI));
L_118e826d:;
  /* 118e826d cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8271 je 0x118e830b */
  if (C.zf) goto L_118e830b;
  /* 118e8277 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e827b lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 118e8281 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_118e8286:;
  /* 118e8286 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e828c jne 0x118e82c7 */
  if (!C.zf) goto L_118e82c7;
  /* 118e828e mov eax, ebx */
  EAX = (EBX);
  /* 118e8290 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 118e8295 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8298 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118e829d push eax */
  push32((uint32_t)(EAX));
  /* 118e829e call dword ptr [0x118ef084] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef084))), 0x118e82a4u);
  /* 118e82a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e82a6 je 0x118e82c7 */
  if (C.zf) goto L_118e82c7;
  /* 118e82a8 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 118e82ab dec dword ptr [0x119095d8] */
  { uint32_t _r=(r32((uint32_t)(0x119095d8)))-1; w32((uint32_t)(0x119095d8), (_r)); fl_dec(_r,32); }
  /* 118e82b1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118e82b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e82b6 je 0x118e82bc */
  if (C.zf) goto L_118e82bc;
  /* 118e82b8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e82ba jbe 0x118e82bf */
  if ((C.cf||C.zf)) goto L_118e82bf;
L_118e82bc:;
  /* 118e82bc mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_118e82bf:;
  /* 118e82bf inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118e82c2 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 118e82c5 je 0x118e82d4 */
  if (C.zf) goto L_118e82d4;
L_118e82c7:;
  /* 118e82c7 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e82cd sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e82d0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e82d2 jge 0x118e8286 */
  if ((C.sf==C.of)) goto L_118e8286;
L_118e82d4:;
  /* 118e82d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e82d8 mov ecx, esi */
  ECX = (ESI);
  /* 118e82da mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 118e82dd je 0x118e830b */
  if (C.zf) goto L_118e830b;
  /* 118e82df cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e82e3 jne 0x118e830b */
  if (!C.zf) goto L_118e830b;
  /* 118e82e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e82e7 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 118e82ea pop edx */
  EDX = (pop32());
L_118e82eb:;
  /* 118e82eb cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e82ee jne 0x118e82fc */
  if (!C.zf) goto L_118e82fc;
  /* 118e82f0 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118e82f1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e82f4 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e82fa jl 0x118e82eb */
  if ((C.sf!=C.of)) goto L_118e82eb;
L_118e82fc:;
  /* 118e82fc cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8302 jne 0x118e830b */
  if (!C.zf) goto L_118e830b;
  /* 118e8304 push ecx */
  push32((uint32_t)(ECX));
  /* 118e8305 call 0x118e820a */
  push32(0x118e830au); f_118e820a();
  /* 118e830a pop ecx */
  ECX = (pop32());
L_118e830b:;
  /* 118e830b cmp esi, dword ptr [0x118f1b64] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118f1b64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8311 je 0x118e831d */
  if (C.zf) goto L_118e831d;
  /* 118e8313 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8317 jg 0x118e826d */
  if ((!C.zf&&C.sf==C.of)) goto L_118e826d;
L_118e831d:;
  /* 118e831d pop edi */
  EDI = (pop32());
  /* 118e831e pop esi */
  ESI = (pop32());
  /* 118e831f pop ebx */
  EBX = (pop32());
  /* 118e8320 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8321 ret  */
  ESPCHK(0x118e8260u, _esp0);
  ESP += 4; return;
}

/* FUN_10008322 @ 0x118e8322 (87 bytes, 34 insns) */
void f_118e8322(void) {
  FTRACE(0x118e8322u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8322 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e8326 mov edx, 0x118f1b60 */
  EDX = (0x118f1b60u);
  /* 118e832b push esi */
  push32((uint32_t)(ESI));
  /* 118e832c mov ecx, edx */
  ECX = (EDX);
L_118e832e:;
  /* 118e832e cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8331 jbe 0x118e8338 */
  if ((C.cf||C.zf)) goto L_118e8338;
  /* 118e8333 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8336 jb 0x118e8340 */
  if (C.cf) goto L_118e8340;
L_118e8338:;
  /* 118e8338 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 118e833a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e833c je 0x118e8375 */
  if (C.zf) goto L_118e8375;
  /* 118e833e jmp 0x118e832e */
  goto L_118e832e;
L_118e8340:;
  /* 118e8340 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 118e8342 jne 0x118e8375 */
  if (!C.zf) goto L_118e8375;
  /* 118e8344 mov esi, eax */
  ESI = (EAX);
  /* 118e8346 mov edx, 0x100 */
  EDX = (0x100u);
  /* 118e834b and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 118e8351 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8353 jb 0x118e8375 */
  if (C.cf) goto L_118e8375;
  /* 118e8355 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118e8359 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118e835b mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 118e835f mov ecx, eax */
  ECX = (EAX);
  /* 118e8361 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 118e8366 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8368 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118e836a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e836c pop esi */
  ESI = (pop32());
  /* 118e836d sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118e8370 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 118e8374 ret  */
  ESPCHK(0x118e8322u, _esp0);
  ESP += 4; return;
L_118e8375:;
  /* 118e8375 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e8377 pop esi */
  ESI = (pop32());
  /* 118e8378 ret  */
  ESPCHK(0x118e8322u, _esp0);
  ESP += 4; return;
}

/* FUN_10008379 @ 0x118e8379 (69 bytes, 19 insns) */
void f_118e8379(void) {
  FTRACE(0x118e8379u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8379 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e837d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e8381 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8384 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 118e8387 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 118e838b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e838f movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 118e8392 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8394 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 118e8397 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e839d mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 118e83a4 jne 0x118e83bd */
  if (!C.zf) goto L_118e83bd;
  /* 118e83a6 inc dword ptr [0x119095d8] */
  { uint32_t _r=(r32((uint32_t)(0x119095d8)))+1; w32((uint32_t)(0x119095d8), (_r)); fl_inc(_r,32); }
  /* 118e83ac cmp dword ptr [0x119095d8], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x119095d8))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e83b3 jne 0x118e83bd */
  if (!C.zf) goto L_118e83bd;
  /* 118e83b5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e83b7 call 0x118e8260 */
  push32(0x118e83bcu); f_118e8260();
  /* 118e83bc pop ecx */
  ECX = (pop32());
L_118e83bd:;
  /* 118e83bd ret  */
  ESPCHK(0x118e8379u, _esp0);
  ESP += 4; return;
}

/* FUN_100083be @ 0x118e83be (520 bytes, 180 insns) */
void f_118e83be(void) {
  FTRACE(0x118e83beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e83be push ebp */
  push32((uint32_t)(EBP));
  /* 118e83bf mov ebp, esp */
  EBP = (ESP);
  /* 118e83c1 push ecx */
  push32((uint32_t)(ECX));
  /* 118e83c2 push ecx */
  push32((uint32_t)(ECX));
  /* 118e83c3 push ebx */
  push32((uint32_t)(EBX));
  /* 118e83c4 push esi */
  push32((uint32_t)(ESI));
  /* 118e83c5 mov esi, dword ptr [0x118f3b80] */
  ESI = (r32((uint32_t)(0x118f3b80)));
  /* 118e83cb push edi */
  push32((uint32_t)(EDI));
L_118e83cc:;
  /* 118e83cc mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 118e83cf cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e83d2 je 0x118e8477 */
  if (C.zf) goto L_118e8477;
  /* 118e83d8 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 118e83db lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 118e83e1 mov eax, edi */
  EAX = (EDI);
  /* 118e83e3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e83e5 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e83e8 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 118e83eb shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118e83ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e83f0 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e83f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118e83f5 jae 0x118e8431 */
  if (!C.cf) goto L_118e8431;
L_118e83f7:;
  /* 118e83f7 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 118e83f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e83fc cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e83fe jl 0x118e841a */
  if ((C.sf!=C.of)) goto L_118e841a;
  /* 118e8400 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8403 jbe 0x118e841a */
  if ((C.cf||C.zf)) goto L_118e841a;
  /* 118e8405 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8406 push ecx */
  push32((uint32_t)(ECX));
  /* 118e8407 push eax */
  push32((uint32_t)(EAX));
  /* 118e8408 call 0x118e85c6 */
  push32(0x118e840du); f_118e85c6();
  /* 118e840d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8412 jne 0x118e8489 */
  if (!C.zf) goto L_118e8489;
  /* 118e8414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e8417 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_118e841a:;
  /* 118e841a add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e841d lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 118e8423 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8428 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e842a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118e842d jb 0x118e83f7 */
  if (C.cf) goto L_118e83f7;
  /* 118e842f jmp 0x118e8434 */
  goto L_118e8434;
L_118e8431:;
  /* 118e8431 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118e8434:;
  /* 118e8434 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118e8437 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 118e843a lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 118e843d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118e8440 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8442 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118e8445 jae 0x118e847a */
  if (!C.cf) goto L_118e847a;
L_118e8447:;
  /* 118e8447 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118e8449 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e844b jl 0x118e8466 */
  if ((C.sf!=C.of)) goto L_118e8466;
  /* 118e844d cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8450 jbe 0x118e8466 */
  if ((C.cf||C.zf)) goto L_118e8466;
  /* 118e8452 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8453 push eax */
  push32((uint32_t)(EAX));
  /* 118e8454 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118e8457 call 0x118e85c6 */
  push32(0x118e845cu); f_118e85c6();
  /* 118e845c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e845f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8461 jne 0x118e8489 */
  if (!C.zf) goto L_118e8489;
  /* 118e8463 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_118e8466:;
  /* 118e8466 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e846d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8470 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8473 jb 0x118e8447 */
  if (C.cf) goto L_118e8447;
  /* 118e8475 jmp 0x118e847a */
  goto L_118e847a;
L_118e8477:;
  /* 118e8477 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118e847a:;
  /* 118e847a mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 118e847c cmp esi, dword ptr [0x118f3b80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118f3b80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8482 je 0x118e8499 */
  if (C.zf) goto L_118e8499;
  /* 118e8484 jmp 0x118e83cc */
  goto L_118e83cc;
L_118e8489:;
  /* 118e8489 mov dword ptr [0x118f3b80], esi */
  w32((uint32_t)(0x118f3b80), (ESI));
  /* 118e848f sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e8491 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 118e8494 jmp 0x118e85c1 */
  goto L_118e85c1;
L_118e8499:;
  /* 118e8499 mov eax, 0x118f1b60 */
  EAX = (0x118f1b60u);
  /* 118e849e mov edi, eax */
  EDI = (EAX);
L_118e84a0:;
  /* 118e84a0 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e84a4 je 0x118e84ac */
  if (C.zf) goto L_118e84ac;
  /* 118e84a6 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e84aa jne 0x118e84b8 */
  if (!C.zf) goto L_118e84b8;
L_118e84ac:;
  /* 118e84ac mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 118e84ae cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e84b0 je 0x118e858d */
  if (C.zf) goto L_118e858d;
  /* 118e84b6 jmp 0x118e84a0 */
  goto L_118e84a0;
L_118e84b8:;
  /* 118e84b8 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 118e84bb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e84bf mov esi, ebx */
  ESI = (EBX);
  /* 118e84c1 mov eax, ebx */
  EAX = (EBX);
  /* 118e84c3 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e84c5 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e84c8 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 118e84cb shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 118e84ce add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e84d1 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e84d4 jne 0x118e84e7 */
  if (!C.zf) goto L_118e84e7;
L_118e84d6:;
  /* 118e84d6 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e84da jge 0x118e84e7 */
  if ((C.sf==C.of)) goto L_118e84e7;
  /* 118e84dc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e84df inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118e84e2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e84e5 je 0x118e84d6 */
  if (C.zf) goto L_118e84d6;
L_118e84e7:;
  /* 118e84e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e84ea push 4 */
  push32((uint32_t)(0x4u));
  /* 118e84ec shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118e84ef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118e84f4 push eax */
  push32((uint32_t)(EAX));
  /* 118e84f5 push esi */
  push32((uint32_t)(ESI));
  /* 118e84f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118e84f9 call dword ptr [0x118ef064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef064))), 0x118e84ffu);
  /* 118e84ff cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8501 jne 0x118e85bf */
  if (!C.zf) goto L_118e85bf;
  /* 118e8507 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8509 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 118e850c push esi */
  push32((uint32_t)(ESI));
  /* 118e850d call 0x118e7050 */
  push32(0x118e8512u); f_118e7050();
  /* 118e8512 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e8515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118e851a mov ecx, ebx */
  ECX = (EBX);
  /* 118e851c jle 0x118e854e */
  if ((C.zf||C.sf!=C.of)) goto L_118e854e;
  /* 118e851e lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118e8521 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_118e8524:;
  /* 118e8524 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 118e852b lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 118e852e mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 118e8531 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 118e8536 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118e8538 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118e853a mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 118e8541 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8546 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8549 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118e854c jne 0x118e8524 */
  if (!C.zf) goto L_118e8524;
L_118e854e:;
  /* 118e854e mov dword ptr [0x118f3b80], edi */
  w32((uint32_t)(0x118f3b80), (EDI));
  /* 118e8554 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_118e855a:;
  /* 118e855a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e855c jae 0x118e856a */
  if (!C.cf) goto L_118e856a;
  /* 118e855e cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8561 je 0x118e8568 */
  if (C.zf) goto L_118e8568;
  /* 118e8563 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8566 jmp 0x118e855a */
  goto L_118e855a;
L_118e8568:;
  /* 118e8568 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e856a:;
  /* 118e856a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e856c and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 118e856e mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 118e8571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8574 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 118e8577 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 118e857a sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e857c sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e857f lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 118e8583 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 118e8589 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118e858b jmp 0x118e85c1 */
  goto L_118e85c1;
L_118e858d:;
  /* 118e858d call 0x118e80c6 */
  push32(0x118e8592u); f_118e80c6();
  /* 118e8592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8594 je 0x118e85bf */
  if (C.zf) goto L_118e85bf;
  /* 118e8596 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118e8599 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 118e859c lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 118e85a0 mov dword ptr [0x118f3b80], eax */
  w32((uint32_t)(0x118f3b80), (EAX));
  /* 118e85a5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118e85a7 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 118e85ac sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e85ae mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 118e85b1 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 118e85b4 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e85b7 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 118e85bd jmp 0x118e85c1 */
  goto L_118e85c1;
L_118e85bf:;
  /* 118e85bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e85c1:;
  /* 118e85c1 pop edi */
  EDI = (pop32());
  /* 118e85c2 pop esi */
  ESI = (pop32());
  /* 118e85c3 pop ebx */
  EBX = (pop32());
  /* 118e85c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e85c5 ret  */
  ESPCHK(0x118e83beu, _esp0);
  ESP += 4; return;
}

/* FUN_100085c6 @ 0x118e85c6 (292 bytes, 125 insns) */
void f_118e85c6(void) {
  FTRACE(0x118e85c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e85c6 push ebp */
  push32((uint32_t)(EBP));
  /* 118e85c7 mov ebp, esp */
  EBP = (ESP);
  /* 118e85c9 push ecx */
  push32((uint32_t)(ECX));
  /* 118e85ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e85cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e85d0 push ebx */
  push32((uint32_t)(EBX));
  /* 118e85d1 push esi */
  push32((uint32_t)(ESI));
  /* 118e85d2 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 118e85d5 push edi */
  push32((uint32_t)(EDI));
  /* 118e85d6 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 118e85d8 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 118e85de cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e85e0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118e85e3 mov eax, edi */
  EAX = (EDI);
  /* 118e85e5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e85e8 jb 0x118e860b */
  if (C.cf) goto L_118e860b;
  /* 118e85ea lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 118e85ed mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 118e85ef cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e85f1 jae 0x118e85fa */
  if (!C.cf) goto L_118e85fa;
  /* 118e85f3 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e85f5 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e85f8 jmp 0x118e8603 */
  goto L_118e8603;
L_118e85fa:;
  /* 118e85fa and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e85fe lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 118e8601 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118e8603:;
  /* 118e8603 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 118e8606 jmp 0x118e86d9 */
  goto L_118e86d9;
L_118e860b:;
  /* 118e860b add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e860d cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e8610 je 0x118e8614 */
  if (C.zf) goto L_118e8614;
  /* 118e8612 mov eax, esi */
  EAX = (ESI);
L_118e8614:;
  /* 118e8614 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 118e8617 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8619 jae 0x118e865e */
  if (!C.cf) goto L_118e865e;
L_118e861b:;
  /* 118e861b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 118e861d test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 118e861f jne 0x118e8651 */
  if (!C.zf) goto L_118e8651;
  /* 118e8621 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e8623 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 118e8626 pop esi */
  ESI = (pop32());
L_118e8627:;
  /* 118e8627 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e862a jne 0x118e8630 */
  if (!C.zf) goto L_118e8630;
  /* 118e862c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e862d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e862e jmp 0x118e8627 */
  goto L_118e8627;
L_118e8630:;
  /* 118e8630 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8632 jae 0x118e8682 */
  if (!C.cf) goto L_118e8682;
  /* 118e8634 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8637 jne 0x118e863e */
  if (!C.zf) goto L_118e863e;
  /* 118e8639 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118e863c jmp 0x118e864a */
  goto L_118e864a;
L_118e863e:;
  /* 118e863e sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e8641 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8644 jb 0x118e86e3 */
  if (C.cf) goto L_118e86e3;
L_118e864a:;
  /* 118e864a mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 118e864d mov eax, ebx */
  EAX = (EBX);
  /* 118e864f jmp 0x118e8656 */
  goto L_118e8656;
L_118e8651:;
  /* 118e8651 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 118e8654 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118e8656:;
  /* 118e8656 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 118e8659 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e865c jb 0x118e861b */
  if (C.cf) goto L_118e861b;
L_118e865e:;
  /* 118e865e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_118e8661:;
  /* 118e8661 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8663 jae 0x118e86e3 */
  if (!C.cf) goto L_118e86e3;
  /* 118e8665 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 118e8668 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e866b jae 0x118e86e3 */
  if (!C.cf) goto L_118e86e3;
  /* 118e866d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e866f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e8671 jne 0x118e86b3 */
  if (!C.zf) goto L_118e86b3;
  /* 118e8673 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e8675 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 118e8678 pop eax */
  EAX = (pop32());
L_118e8679:;
  /* 118e8679 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e867c jne 0x118e86a3 */
  if (!C.zf) goto L_118e86a3;
  /* 118e867e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e867f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e8680 jmp 0x118e8679 */
  goto L_118e8679;
L_118e8682:;
  /* 118e8682 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 118e8685 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8688 jae 0x118e8693 */
  if (!C.cf) goto L_118e8693;
  /* 118e868a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e868c mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 118e868e mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118e8691 jmp 0x118e869c */
  goto L_118e869c;
L_118e8693:;
  /* 118e8693 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e8697 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 118e869a mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_118e869c:;
  /* 118e869c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118e869e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e86a1 jmp 0x118e86d9 */
  goto L_118e86d9;
L_118e86a3:;
  /* 118e86a3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e86a5 jae 0x118e86ba */
  if (!C.cf) goto L_118e86ba;
  /* 118e86a7 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118e86aa cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e86ad jb 0x118e86e3 */
  if (C.cf) goto L_118e86e3;
  /* 118e86af mov esi, ebx */
  ESI = (EBX);
  /* 118e86b1 jmp 0x118e8661 */
  goto L_118e8661;
L_118e86b3:;
  /* 118e86b3 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 118e86b6 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e86b8 jmp 0x118e8661 */
  goto L_118e8661;
L_118e86ba:;
  /* 118e86ba lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 118e86bd cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e86c0 jae 0x118e86cb */
  if (!C.cf) goto L_118e86cb;
  /* 118e86c2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e86c4 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 118e86c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 118e86c9 jmp 0x118e86d4 */
  goto L_118e86d4;
L_118e86cb:;
  /* 118e86cb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e86cf lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 118e86d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118e86d4:;
  /* 118e86d4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118e86d6 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_118e86d9:;
  /* 118e86d9 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e86dc shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118e86df sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e86e1 jmp 0x118e86e5 */
  goto L_118e86e5;
L_118e86e3:;
  /* 118e86e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e86e5:;
  /* 118e86e5 pop edi */
  EDI = (pop32());
  /* 118e86e6 pop esi */
  ESI = (pop32());
  /* 118e86e7 pop ebx */
  EBX = (pop32());
  /* 118e86e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e86e9 ret  */
  ESPCHK(0x118e85c6u, _esp0);
  ESP += 4; return;
}

/* FUN_100086ea @ 0x118e86ea (169 bytes, 69 insns) */
void f_118e86ea(void) {
  FTRACE(0x118e86eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e86ea push ebp */
  push32((uint32_t)(EBP));
  /* 118e86eb mov ebp, esp */
  EBP = (ESP);
  /* 118e86ed push ecx */
  push32((uint32_t)(ECX));
  /* 118e86ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e86f1 push ebx */
  push32((uint32_t)(EBX));
  /* 118e86f2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e86f5 push esi */
  push32((uint32_t)(ESI));
  /* 118e86f6 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 118e86f9 push edi */
  push32((uint32_t)(EDI));
  /* 118e86fa mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e86fd and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e8701 mov eax, ebx */
  EAX = (EBX);
  /* 118e8703 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8706 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118e8709 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e870c lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 118e8710 jbe 0x118e8724 */
  if ((C.cf||C.zf)) goto L_118e8724;
  /* 118e8712 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e8715 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8717 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 118e8719 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e871b mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 118e8722 jmp 0x118e8784 */
  goto L_118e8784;
L_118e8724:;
  /* 118e8724 jae 0x118e878b */
  if (!C.cf) goto L_118e878b;
  /* 118e8726 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e8729 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 118e872c lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 118e8732 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8734 jb 0x118e878b */
  if (C.cf) goto L_118e878b;
  /* 118e8736 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_118e8739:;
  /* 118e8739 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e873b jae 0x118e8747 */
  if (!C.cf) goto L_118e8747;
  /* 118e873d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e8740 jne 0x118e8745 */
  if (!C.zf) goto L_118e8745;
  /* 118e8742 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e8743 jmp 0x118e8739 */
  goto L_118e8739;
L_118e8745:;
  /* 118e8745 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e8747:;
  /* 118e8747 jne 0x118e878b */
  if (!C.zf) goto L_118e878b;
  /* 118e8749 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 118e874c mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 118e874e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118e8750 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8752 ja 0x118e877f */
  if ((!C.cf&&!C.zf)) goto L_118e877f;
  /* 118e8754 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8756 jbe 0x118e877f */
  if ((C.cf||C.zf)) goto L_118e877f;
  /* 118e8758 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 118e875e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8760 jae 0x118e8776 */
  if (!C.cf) goto L_118e8776;
  /* 118e8762 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e8764 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 118e8766 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e8768 jne 0x118e8771 */
  if (!C.zf) goto L_118e8771;
L_118e876a:;
  /* 118e876a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e876b cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e876f je 0x118e876a */
  if (C.zf) goto L_118e876a;
L_118e8771:;
  /* 118e8771 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 118e8774 jmp 0x118e877f */
  goto L_118e877f;
L_118e8776:;
  /* 118e8776 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118e877a lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 118e877d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_118e877f:;
  /* 118e877f sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8782 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_118e8784:;
  /* 118e8784 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_118e878b:;
  /* 118e878b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e878e pop edi */
  EDI = (pop32());
  /* 118e878f pop esi */
  ESI = (pop32());
  /* 118e8790 pop ebx */
  EBX = (pop32());
  /* 118e8791 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8792 ret  */
  ESPCHK(0x118e86eau, _esp0);
  ESP += 4; return;
}

/* FUN_10008793 @ 0x118e8793 (27 bytes, 13 insns) */
void f_118e8793(void) {
  FTRACE(0x118e8793u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8793 mov eax, dword ptr [0x119095dc] */
  EAX = (r32((uint32_t)(0x119095dc)));
  /* 118e8798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e879a je 0x118e87ab */
  if (C.zf) goto L_118e87ab;
  /* 118e879c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118e87a0 call eax */
  call_ind((uint32_t)(EAX), 0x118e87a2u);
  /* 118e87a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e87a4 pop ecx */
  ECX = (pop32());
  /* 118e87a5 je 0x118e87ab */
  if (C.zf) goto L_118e87ab;
  /* 118e87a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e87a9 pop eax */
  EAX = (pop32());
  /* 118e87aa ret  */
  ESPCHK(0x118e8793u, _esp0);
  ESP += 4; return;
L_118e87ab:;
  /* 118e87ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e87ad ret  */
  ESPCHK(0x118e8793u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x118e87b0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_118e87b0(void) {
  FTRACE(0x118e87b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e87b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e87b1 mov ebp, esp */
  EBP = (ESP);
  /* 118e87b3 push edi */
  push32((uint32_t)(EDI));
  /* 118e87b4 push esi */
  push32((uint32_t)(ESI));
  /* 118e87b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e87b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e87bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e87be mov eax, ecx */
  EAX = (ECX);
  /* 118e87c0 mov edx, ecx */
  EDX = (ECX);
  /* 118e87c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e87c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e87c6 jbe 0x118e87d0 */
  if ((C.cf||C.zf)) goto L_118e87d0;
  /* 118e87c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e87ca jb 0x118e8948 */
  if (C.cf) goto L_118e8948;
L_118e87d0:;
  /* 118e87d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118e87d6 jne 0x118e87ec */
  if (!C.zf) goto L_118e87ec;
  /* 118e87d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e87db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118e87de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e87e1 jb 0x118e880c */
  if (C.cf) goto L_118e880c;
  /* 118e87e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e87e5 jmp dword ptr [edx*4 + 0x118e88f8] */
  switch (EDX) {
    case 0: goto L_118e8908;
    case 1: goto L_118e8910;
    case 2: goto L_118e891c;
    case 3: goto L_118e8930;
    default: x86_unimpl("switch@0x118e87e5 out of table"); return;
  }
L_118e87ec:;
  /* 118e87ec mov eax, edi */
  EAX = (EDI);
  /* 118e87ee mov edx, 3 */
  EDX = (0x3u);
  /* 118e87f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e87f6 jb 0x118e8804 */
  if (C.cf) goto L_118e8804;
  /* 118e87f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118e87fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e87fd jmp dword ptr [eax*4 + 0x118e8810] */
  switch (EAX) {
    case 1: goto L_118e8820;
    case 2: goto L_118e884c;
    case 3: goto L_118e8870;
    default: x86_unimpl("switch@0x118e87fd out of table"); return;
  }
L_118e8804:;
  /* 118e8804 jmp dword ptr [ecx*4 + 0x118e8908] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x118e8908)))); return;
  /* 118e880b nop  */
  /* nop */
L_118e880c:;
  /* 118e880c jmp dword ptr [ecx*4 + 0x118e888c] */
  switch (ECX) {
    case 0: goto L_118e88ef;
    case 1: goto L_118e88dc;
    case 2: goto L_118e88d4;
    case 3: goto L_118e88cc;
    case 4: goto L_118e88c4;
    case 5: goto L_118e88bc;
    case 6: goto L_118e88b4;
    case 7: goto L_118e88ac;
    default: x86_unimpl("switch@0x118e880c out of table"); return;
  }
  /* 118e8813 nop  */
  /* nop */
L_118e8820:;
  /* 118e8820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e8822 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e8824 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e8826 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e8829 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e882c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e882f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e8832 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e8835 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8838 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e883b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e883e jb 0x118e880c */
  if (C.cf) goto L_118e880c;
  /* 118e8840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e8842 jmp dword ptr [edx*4 + 0x118e88f8] */
  switch (EDX) {
    case 0: goto L_118e8908;
    case 1: goto L_118e8910;
    case 2: goto L_118e891c;
    case 3: goto L_118e8930;
    default: x86_unimpl("switch@0x118e8842 out of table"); return;
  }
  /* 118e8849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e884c:;
  /* 118e884c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e884e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e8850 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e8852 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e8855 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e8858 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e885b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e885e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8861 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8864 jb 0x118e880c */
  if (C.cf) goto L_118e880c;
  /* 118e8866 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e8868 jmp dword ptr [edx*4 + 0x118e88f8] */
  switch (EDX) {
    case 0: goto L_118e8908;
    case 1: goto L_118e8910;
    case 2: goto L_118e891c;
    case 3: goto L_118e8930;
    default: x86_unimpl("switch@0x118e8868 out of table"); return;
  }
  /* 118e886f nop  */
  /* nop */
L_118e8870:;
  /* 118e8870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e8872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e8874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e8876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e8877 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e887a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e887b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e887e jb 0x118e880c */
  if (C.cf) goto L_118e880c;
  /* 118e8880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e8882 jmp dword ptr [edx*4 + 0x118e88f8] */
  switch (EDX) {
    case 0: goto L_118e8908;
    case 1: goto L_118e8910;
    case 2: goto L_118e891c;
    case 3: goto L_118e8930;
    default: x86_unimpl("switch@0x118e8882 out of table"); return;
  }
  /* 118e8889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e88ac:;
  /* 118e88ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 118e88b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_118e88b4:;
  /* 118e88b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 118e88b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_118e88bc:;
  /* 118e88bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 118e88c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_118e88c4:;
  /* 118e88c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 118e88c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_118e88cc:;
  /* 118e88cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 118e88d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_118e88d4:;
  /* 118e88d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 118e88d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_118e88dc:;
  /* 118e88dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 118e88e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 118e88e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118e88eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e88ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118e88ef:;
  /* 118e88ef jmp dword ptr [edx*4 + 0x118e88f8] */
  switch (EDX) {
    case 0: goto L_118e8908;
    case 1: goto L_118e8910;
    case 2: goto L_118e891c;
    case 3: goto L_118e8930;
    default: x86_unimpl("switch@0x118e88ef out of table"); return;
  }
  /* 118e88f6 mov edi, edi */
  EDI = (EDI);
L_118e8908:;
  /* 118e8908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e890b pop esi */
  ESI = (pop32());
  /* 118e890c pop edi */
  EDI = (pop32());
  /* 118e890d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e890e ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e890f nop  */
  /* nop */
L_118e8910:;
  /* 118e8910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e8912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e8914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8917 pop esi */
  ESI = (pop32());
  /* 118e8918 pop edi */
  EDI = (pop32());
  /* 118e8919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e891a ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e891b nop  */
  /* nop */
L_118e891c:;
  /* 118e891c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e891e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e8920 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e8923 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e8926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8929 pop esi */
  ESI = (pop32());
  /* 118e892a pop edi */
  EDI = (pop32());
  /* 118e892b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e892c ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e892d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e8930:;
  /* 118e8930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e8932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e8934 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e8937 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e893a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e893d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e8940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8943 pop esi */
  ESI = (pop32());
  /* 118e8944 pop edi */
  EDI = (pop32());
  /* 118e8945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8946 ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e8947 nop  */
  /* nop */
L_118e8948:;
  /* 118e8948 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 118e894c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 118e8950 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118e8956 jne 0x118e897c */
  if (!C.zf) goto L_118e897c;
  /* 118e8958 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e895b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118e895e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8961 jb 0x118e8970 */
  if (C.cf) goto L_118e8970;
  /* 118e8963 std  */
  C.df=1;
  /* 118e8964 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e8966 cld  */
  C.df=0;
  /* 118e8967 jmp dword ptr [edx*4 + 0x118e8a90] */
  switch (EDX) {
    case 0: goto L_118e8aa0;
    case 1: goto L_118e8aa8;
    case 2: goto L_118e8ab8;
    case 3: goto L_118e8acc;
    default: x86_unimpl("switch@0x118e8967 out of table"); return;
  }
  /* 118e896e mov edi, edi */
  EDI = (EDI);
L_118e8970:;
  /* 118e8970 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e8972 jmp dword ptr [ecx*4 + 0x118e8a40] */
  switch (ECX) {
    case 0: goto L_118e8a87;
    default: x86_unimpl("switch@0x118e8972 out of table"); return;
  }
  /* 118e8979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e897c:;
  /* 118e897c mov eax, edi */
  EAX = (EDI);
  /* 118e897e mov edx, 3 */
  EDX = (0x3u);
  /* 118e8983 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8986 jb 0x118e8994 */
  if (C.cf) goto L_118e8994;
  /* 118e8988 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118e898b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e898d jmp dword ptr [eax*4 + 0x118e8998] */
  switch (EAX) {
    case 1: goto L_118e89a8;
    case 2: goto L_118e89c8;
    case 3: goto L_118e89f0;
    default: x86_unimpl("switch@0x118e898d out of table"); return;
  }
L_118e8994:;
  /* 118e8994 jmp dword ptr [ecx*4 + 0x118e8a90] */
  switch (ECX) {
    case 0: goto L_118e8aa0;
    case 1: goto L_118e8aa8;
    case 2: goto L_118e8ab8;
    case 3: goto L_118e8acc;
    default: x86_unimpl("switch@0x118e8994 out of table"); return;
  }
  /* 118e899b nop  */
  /* nop */
L_118e89a8:;
  /* 118e89a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e89ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e89ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e89b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e89b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e89b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118e89b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e89b8 jb 0x118e8970 */
  if (C.cf) goto L_118e8970;
  /* 118e89ba std  */
  C.df=1;
  /* 118e89bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e89bd cld  */
  C.df=0;
  /* 118e89be jmp dword ptr [edx*4 + 0x118e8a90] */
  switch (EDX) {
    case 0: goto L_118e8aa0;
    case 1: goto L_118e8aa8;
    case 2: goto L_118e8ab8;
    case 3: goto L_118e8acc;
    default: x86_unimpl("switch@0x118e89be out of table"); return;
  }
  /* 118e89c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e89c8:;
  /* 118e89c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e89cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e89cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e89d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e89d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e89d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e89d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e89dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e89df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e89e2 jb 0x118e8970 */
  if (C.cf) goto L_118e8970;
  /* 118e89e4 std  */
  C.df=1;
  /* 118e89e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e89e7 cld  */
  C.df=0;
  /* 118e89e8 jmp dword ptr [edx*4 + 0x118e8a90] */
  switch (EDX) {
    case 0: goto L_118e8aa0;
    case 1: goto L_118e8aa8;
    case 2: goto L_118e8ab8;
    case 3: goto L_118e8acc;
    default: x86_unimpl("switch@0x118e89e8 out of table"); return;
  }
  /* 118e89ef nop  */
  /* nop */
L_118e89f0:;
  /* 118e89f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e89f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118e89f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e89f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e89fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e89fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e8a01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e8a04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e8a07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8a0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8a0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8a10 jb 0x118e8970 */
  if (C.cf) goto L_118e8970;
  /* 118e8a16 std  */
  C.df=1;
  /* 118e8a17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e8a19 cld  */
  C.df=0;
  /* 118e8a1a jmp dword ptr [edx*4 + 0x118e8a90] */
  switch (EDX) {
    case 0: goto L_118e8aa0;
    case 1: goto L_118e8aa8;
    case 2: goto L_118e8ab8;
    case 3: goto L_118e8acc;
    default: x86_unimpl("switch@0x118e8a1a out of table"); return;
  }
  /* 118e8a21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 118e8a24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 118e8a25 mov cl, byte ptr [esi - 0x7175b3ef] */
  CL = (r8((uint32_t)(ESI + -0x7175b3ef)));
  /* 118e8a2b adc dword ptr [edx + ecx*4 - 0x72], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + -0x72))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*4 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8a2f adc dword ptr [edx + ecx*4 - 0x72], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + -0x72))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*4 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8a33 adc dword ptr [edx + ecx*4 - 0x72], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + -0x72))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*4 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8a37 adc dword ptr [edx + ecx*4 - 0x72], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + -0x72))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*4 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8a3b adc dword ptr [edx + ecx*4 - 0x72], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + -0x72))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*4 + -0x72), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8a44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 118e8a48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 118e8a4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 118e8a50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 118e8a54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 118e8a58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 118e8a5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 118e8a60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 118e8a64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 118e8a68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 118e8a6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 118e8a70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 118e8a74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 118e8a78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 118e8a7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118e8a83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8a85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118e8a87:;
  /* 118e8a87 jmp dword ptr [edx*4 + 0x118e8a90] */
  switch (EDX) {
    case 0: goto L_118e8aa0;
    case 1: goto L_118e8aa8;
    case 2: goto L_118e8ab8;
    case 3: goto L_118e8acc;
    default: x86_unimpl("switch@0x118e8a87 out of table"); return;
  }
  /* 118e8a8e mov edi, edi */
  EDI = (EDI);
L_118e8aa0:;
  /* 118e8aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8aa3 pop esi */
  ESI = (pop32());
  /* 118e8aa4 pop edi */
  EDI = (pop32());
  /* 118e8aa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8aa6 ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e8aa7 nop  */
  /* nop */
L_118e8aa8:;
  /* 118e8aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e8aab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e8aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8ab1 pop esi */
  ESI = (pop32());
  /* 118e8ab2 pop edi */
  EDI = (pop32());
  /* 118e8ab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8ab4 ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e8ab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118e8ab8:;
  /* 118e8ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e8abb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e8abe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e8ac1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e8ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8ac7 pop esi */
  ESI = (pop32());
  /* 118e8ac8 pop edi */
  EDI = (pop32());
  /* 118e8ac9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8aca ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
  /* 118e8acb nop  */
  /* nop */
L_118e8acc:;
  /* 118e8acc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118e8acf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118e8ad2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118e8ad5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118e8ad8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e8adb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118e8ade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8ae1 pop esi */
  ESI = (pop32());
  /* 118e8ae2 pop edi */
  EDI = (pop32());
  /* 118e8ae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e8ae4 ret  */
  ESPCHK(0x118e87b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae5 @ 0x118e8ae5 (215 bytes, 75 insns) */
void f_118e8ae5(void) {
  FTRACE(0x118e8ae5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8ae5 push ebp */
  push32((uint32_t)(EBP));
  /* 118e8ae6 mov ebp, esp */
  EBP = (ESP);
  /* 118e8ae8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e8aea push 0x118ef698 */
  push32((uint32_t)(0x118ef698u));
  /* 118e8aef push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118e8af4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118e8afa push eax */
  push32((uint32_t)(EAX));
  /* 118e8afb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118e8b02 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8b05 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8b06 push esi */
  push32((uint32_t)(ESI));
  /* 118e8b07 push edi */
  push32((uint32_t)(EDI));
  /* 118e8b08 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8b0b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e8b0d je 0x118e8bbf */
  if (C.zf) { jmp_ind(0x118e8bbfu); return; }
  /* 118e8b13 mov eax, dword ptr [0x1190aa24] */
  EAX = (r32((uint32_t)(0x1190aa24)));
  /* 118e8b18 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8b1b jne 0x118e8b58 */
  if (!C.zf) goto L_118e8b58;
  /* 118e8b1d push 9 */
  push32((uint32_t)(0x9u));
  /* 118e8b1f call 0x118e7509 */
  push32(0x118e8b24u); f_118e7509();
  /* 118e8b24 pop ecx */
  ECX = (pop32());
  /* 118e8b25 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e8b29 push esi */
  push32((uint32_t)(ESI));
  /* 118e8b2a call 0x118e75c7 */
  push32(0x118e8b2fu); f_118e75c7();
  /* 118e8b2f pop ecx */
  ECX = (pop32());
  /* 118e8b30 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118e8b33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8b35 je 0x118e8b40 */
  if (C.zf) goto L_118e8b40;
  /* 118e8b37 push esi */
  push32((uint32_t)(ESI));
  /* 118e8b38 push eax */
  push32((uint32_t)(EAX));
  /* 118e8b39 call 0x118e75f2 */
  push32(0x118e8b3eu); f_118e75f2();
  /* 118e8b3e pop ecx */
  ECX = (pop32());
  /* 118e8b3f pop ecx */
  ECX = (pop32());
L_118e8b40:;
  /* 118e8b40 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e8b44 call 0x118e8b4f */
  push32(0x118e8b49u); f_118e8b4f();
  /* 118e8b49 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8b4d jmp 0x118e8ba0 */
  goto L_118e8ba0;
  /* 118e8b4f push 9 */
  push32((uint32_t)(0x9u));
  /* 118e8b51 call 0x118e756a */
  push32(0x118e8b56u); f_118e756a();
  /* 118e8b56 pop ecx */
  ECX = (pop32());
  /* 118e8b57 ret  */
  ESPCHK(0x118e8ae5u, _esp0);
  ESP += 4; return;
L_118e8b58:;
  /* 118e8b58 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8b5b jne 0x118e8bb0 */
  if (!C.zf) goto L_118e8bb0;
  /* 118e8b5d push 9 */
  push32((uint32_t)(0x9u));
  /* 118e8b5f call 0x118e7509 */
  push32(0x118e8b64u); f_118e7509();
  /* 118e8b64 pop ecx */
  ECX = (pop32());
  /* 118e8b65 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118e8b6c lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118e8b6f push eax */
  push32((uint32_t)(EAX));
  /* 118e8b70 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118e8b73 push eax */
  push32((uint32_t)(EAX));
  /* 118e8b74 push esi */
  push32((uint32_t)(ESI));
  /* 118e8b75 call 0x118e8322 */
  push32(0x118e8b7au); f_118e8322();
  /* 118e8b7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8b7d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118e8b80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8b82 je 0x118e8b93 */
  if (C.zf) goto L_118e8b93;
  /* 118e8b84 push eax */
  push32((uint32_t)(EAX));
  /* 118e8b85 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 118e8b88 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 118e8b8b call 0x118e8379 */
  push32(0x118e8b90u); f_118e8379();
  /* 118e8b90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e8b93:;
  /* 118e8b93 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e8b97 call 0x118e8ba7 */
  push32(0x118e8b9cu); f_118e8ba7();
  /* 118e8b9c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118e8ba0:;
  /* 118e8ba0 jne 0x118e8bbf */
  if (!C.zf) { jmp_ind(0x118e8bbfu); return; }
  /* 118e8ba2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e8ba5 jmp 0x118e8bb1 */
  goto L_118e8bb1;
  /* 118e8ba7 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e8ba9 call 0x118e756a */
  push32(0x118e8baeu); f_118e756a();
  /* 118e8bae pop ecx */
  ECX = (pop32());
  /* 118e8baf ret  */
  ESPCHK(0x118e8ae5u, _esp0);
  ESP += 4; return;
L_118e8bb0:;
  /* 118e8bb0 push esi */
  push32((uint32_t)(ESI));
L_118e8bb1:;
  /* 118e8bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8bb3 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
}

/* FUN_10008b4f @ 0x118e8b4f (9 bytes, 4 insns) */
void f_118e8b4f(void) {
  FTRACE(0x118e8b4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8b4f push 9 */
  push32((uint32_t)(0x9u));
  /* 118e8b51 call 0x118e756a */
  push32(0x118e8b56u); f_118e756a();
  /* 118e8b56 pop ecx */
  ECX = (pop32());
  /* 118e8b57 ret  */
  ESPCHK(0x118e8b4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ba7 @ 0x118e8ba7 (9 bytes, 4 insns) */
void f_118e8ba7(void) {
  FTRACE(0x118e8ba7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8ba7 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e8ba9 call 0x118e756a */
  push32(0x118e8baeu); f_118e756a();
  /* 118e8bae pop ecx */
  ECX = (pop32());
  /* 118e8baf ret  */
  ESPCHK(0x118e8ba7u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x118e8bd0 (32 bytes, 18 insns) */
void f_118e8bd0(void) {
  FTRACE(0x118e8bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e8bd1 mov ebp, esp */
  EBP = (ESP);
  /* 118e8bd3 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8bd4 push esi */
  push32((uint32_t)(ESI));
  /* 118e8bd5 push edi */
  push32((uint32_t)(EDI));
  /* 118e8bd6 push ebp */
  push32((uint32_t)(EBP));
  /* 118e8bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8bdb push 0x118e8be8 */
  push32((uint32_t)(0x118e8be8u));
  /* 118e8be0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e8be3 call 0x118ed738 */
  push32(0x118e8be8u); f_118ed738();
  /* 118e8be8 pop ebp */
  EBP = (pop32());
  /* 118e8be9 pop edi */
  EDI = (pop32());
  /* 118e8bea pop esi */
  ESI = (pop32());
  /* 118e8beb pop ebx */
  EBX = (pop32());
  /* 118e8bec mov esp, ebp */
  ESP = (EBP);
  /* 118e8bee pop ebp */
  EBP = (pop32());
  /* 118e8bef ret  */
  ESPCHK(0x118e8bd0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x118e8c12 (104 bytes, 33 insns) */
void f_118e8c12(void) {
  FTRACE(0x118e8c12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8c12 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8c13 push esi */
  push32((uint32_t)(ESI));
  /* 118e8c14 push edi */
  push32((uint32_t)(EDI));
  /* 118e8c15 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e8c19 push eax */
  push32((uint32_t)(EAX));
  /* 118e8c1a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 118e8c1c push 0x118e8bf0 */
  push32((uint32_t)(0x118e8bf0u));
  /* 118e8c21 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 118e8c28 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_118e8c2f:;
  /* 118e8c2f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 118e8c33 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 118e8c36 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 118e8c39 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8c3c je 0x118e8c6c */
  if (C.zf) goto L_118e8c6c;
  /* 118e8c3e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8c42 je 0x118e8c6c */
  if (C.zf) goto L_118e8c6c;
  /* 118e8c44 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 118e8c47 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 118e8c4a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 118e8c4e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 118e8c51 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8c56 jne 0x118e8c6a */
  if (!C.zf) goto L_118e8c6a;
  /* 118e8c58 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 118e8c5d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 118e8c61 call 0x118e8ca6 */
  push32(0x118e8c66u); f_118e8ca6();
  /* 118e8c66 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x118e8c6au);
L_118e8c6a:;
  /* 118e8c6a jmp 0x118e8c2f */
  goto L_118e8c2f;
L_118e8c6c:;
  /* 118e8c6c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 118e8c73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8c76 pop edi */
  EDI = (pop32());
  /* 118e8c77 pop esi */
  ESI = (pop32());
  /* 118e8c78 pop ebx */
  EBX = (pop32());
  /* 118e8c79 ret  */
  ESPCHK(0x118e8c12u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x118e8c7a (35 bytes, 10 insns) */
void f_118e8c7a(void) {
  FTRACE(0x118e8c7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e8c7c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 118e8c83 cmp dword ptr [ecx + 4], 0x118e8bf0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x118e8bf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8c8a jne 0x118e8c9c */
  if (!C.zf) goto L_118e8c9c;
  /* 118e8c8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118e8c8f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 118e8c92 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8c95 jne 0x118e8c9c */
  if (!C.zf) goto L_118e8c9c;
  /* 118e8c97 mov eax, 1 */
  EAX = (0x1u);
L_118e8c9c:;
  /* 118e8c9c ret  */
  ESPCHK(0x118e8c7au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x118e8c9d (9 bytes, 4 insns) */
void f_118e8c9d(void) {
  FTRACE(0x118e8c9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8c9d push ebx */
  push32((uint32_t)(EBX));
  /* 118e8c9e push ecx */
  push32((uint32_t)(ECX));
  /* 118e8c9f mov ebx, 0x118f3b90 */
  EBX = (0x118f3b90u);
  /* 118e8ca4 jmp 0x118e8cb0 */
  jmp_ind(0x118e8cb0u); return;
}

/* FUN_10008ca6 @ 0x118e8ca6 (24 bytes, 10 insns) */
void f_118e8ca6(void) {
  FTRACE(0x118e8ca6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 118e8ca8 mov ebx, 0x118f3b90 */
  EBX = (0x118f3b90u);
  /* 118e8cad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8cb0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118e8cb3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 118e8cb6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 118e8cb9 pop ecx */
  ECX = (pop32());
  /* 118e8cba pop ebx */
  EBX = (pop32());
  /* 118e8cbb ret 4 */
  ESPCHK(0x118e8ca6u, _esp0);
  ESP += 8; return;
}

/* FUN_10008d85 @ 0x118e8d85 (27 bytes, 11 insns) */
void f_118e8d85(void) {
  FTRACE(0x118e8d85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8d85 push ebp */
  push32((uint32_t)(EBP));
  /* 118e8d86 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e8d8a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 118e8d8c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118e8d8f push eax */
  push32((uint32_t)(EAX));
  /* 118e8d90 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 118e8d93 push eax */
  push32((uint32_t)(EAX));
  /* 118e8d94 call 0x118e8c12 */
  push32(0x118e8d99u); f_118e8c12();
  /* 118e8d99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8d9c pop ebp */
  EBP = (pop32());
  /* 118e8d9d ret 4 */
  ESPCHK(0x118e8d85u, _esp0);
  ESP += 8; return;
}

/* FUN_10008da0 @ 0x118e8da0 (101 bytes, 34 insns) */
void f_118e8da0(void) {
  FTRACE(0x118e8da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8da0 push esi */
  push32((uint32_t)(ESI));
  /* 118e8da1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e8da5 cmp esi, dword ptr [0x1190ab40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8dab jae 0x118e8ded */
  if (!C.cf) goto L_118e8ded;
  /* 118e8dad mov ecx, esi */
  ECX = (ESI);
  /* 118e8daf mov eax, esi */
  EAX = (ESI);
  /* 118e8db1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e8db4 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118e8db7 mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118e8dbe lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118e8dc1 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118e8dc6 je 0x118e8ded */
  if (C.zf) goto L_118e8ded;
  /* 118e8dc8 push edi */
  push32((uint32_t)(EDI));
  /* 118e8dc9 push esi */
  push32((uint32_t)(ESI));
  /* 118e8dca call 0x118eb390 */
  push32(0x118e8dcfu); f_118eb390();
  /* 118e8dcf push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118e8dd3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118e8dd7 push esi */
  push32((uint32_t)(ESI));
  /* 118e8dd8 call 0x118e8e05 */
  push32(0x118e8dddu); f_118e8e05();
  /* 118e8ddd push esi */
  push32((uint32_t)(ESI));
  /* 118e8dde mov edi, eax */
  EDI = (EAX);
  /* 118e8de0 call 0x118eb3ef */
  push32(0x118e8de5u); f_118eb3ef();
  /* 118e8de5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8de8 mov eax, edi */
  EAX = (EDI);
  /* 118e8dea pop edi */
  EDI = (pop32());
  /* 118e8deb pop esi */
  ESI = (pop32());
  /* 118e8dec ret  */
  ESPCHK(0x118e8da0u, _esp0);
  ESP += 4; return;
L_118e8ded:;
  /* 118e8ded call 0x118eb2bd */
  push32(0x118e8df2u); f_118eb2bd();
  /* 118e8df2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118e8df8 call 0x118eb2c6 */
  push32(0x118e8dfdu); f_118eb2c6();
  /* 118e8dfd and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118e8e00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e8e03 pop esi */
  ESI = (pop32());
  /* 118e8e04 ret  */
  ESPCHK(0x118e8da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e05 @ 0x118e8e05 (115 bytes, 41 insns) */
void f_118e8e05(void) {
  FTRACE(0x118e8e05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8e05 push esi */
  push32((uint32_t)(ESI));
  /* 118e8e06 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e8e0a push edi */
  push32((uint32_t)(EDI));
  /* 118e8e0b push esi */
  push32((uint32_t)(ESI));
  /* 118e8e0c call 0x118eb34e */
  push32(0x118e8e11u); f_118eb34e();
  /* 118e8e11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8e14 pop ecx */
  ECX = (pop32());
  /* 118e8e15 jne 0x118e8e24 */
  if (!C.zf) goto L_118e8e24;
  /* 118e8e17 call 0x118eb2bd */
  push32(0x118e8e1cu); f_118eb2bd();
  /* 118e8e1c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118e8e22 jmp 0x118e8e51 */
  goto L_118e8e51;
L_118e8e24:;
  /* 118e8e24 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 118e8e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8e2a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118e8e2e push eax */
  push32((uint32_t)(EAX));
  /* 118e8e2f call dword ptr [0x118ef058] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef058))), 0x118e8e35u);
  /* 118e8e35 mov edi, eax */
  EDI = (EAX);
  /* 118e8e37 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8e3a jne 0x118e8e44 */
  if (!C.zf) goto L_118e8e44;
  /* 118e8e3c call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118e8e42u);
  /* 118e8e42 jmp 0x118e8e46 */
  goto L_118e8e46;
L_118e8e44:;
  /* 118e8e44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118e8e46:;
  /* 118e8e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8e48 je 0x118e8e56 */
  if (C.zf) goto L_118e8e56;
  /* 118e8e4a push eax */
  push32((uint32_t)(EAX));
  /* 118e8e4b call 0x118eb24a */
  push32(0x118e8e50u); f_118eb24a();
  /* 118e8e50 pop ecx */
  ECX = (pop32());
L_118e8e51:;
  /* 118e8e51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e8e54 jmp 0x118e8e75 */
  goto L_118e8e75;
L_118e8e56:;
  /* 118e8e56 mov ecx, esi */
  ECX = (ESI);
  /* 118e8e58 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 118e8e5b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e8e5e mov eax, esi */
  EAX = (ESI);
  /* 118e8e60 mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118e8e67 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118e8e6a and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 118e8e6f lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 118e8e73 mov eax, edi */
  EAX = (EDI);
L_118e8e75:;
  /* 118e8e75 pop edi */
  EDI = (pop32());
  /* 118e8e76 pop esi */
  ESI = (pop32());
  /* 118e8e77 ret  */
  ESPCHK(0x118e8e05u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e78 @ 0x118e8e78 (101 bytes, 34 insns) */
void f_118e8e78(void) {
  FTRACE(0x118e8e78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8e78 push esi */
  push32((uint32_t)(ESI));
  /* 118e8e79 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e8e7d cmp esi, dword ptr [0x1190ab40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8e83 jae 0x118e8ec5 */
  if (!C.cf) goto L_118e8ec5;
  /* 118e8e85 mov ecx, esi */
  ECX = (ESI);
  /* 118e8e87 mov eax, esi */
  EAX = (ESI);
  /* 118e8e89 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e8e8c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118e8e8f mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118e8e96 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118e8e99 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118e8e9e je 0x118e8ec5 */
  if (C.zf) goto L_118e8ec5;
  /* 118e8ea0 push edi */
  push32((uint32_t)(EDI));
  /* 118e8ea1 push esi */
  push32((uint32_t)(ESI));
  /* 118e8ea2 call 0x118eb390 */
  push32(0x118e8ea7u); f_118eb390();
  /* 118e8ea7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118e8eab push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118e8eaf push esi */
  push32((uint32_t)(ESI));
  /* 118e8eb0 call 0x118e8edd */
  push32(0x118e8eb5u); f_118e8edd();
  /* 118e8eb5 push esi */
  push32((uint32_t)(ESI));
  /* 118e8eb6 mov edi, eax */
  EDI = (EAX);
  /* 118e8eb8 call 0x118eb3ef */
  push32(0x118e8ebdu); f_118eb3ef();
  /* 118e8ebd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8ec0 mov eax, edi */
  EAX = (EDI);
  /* 118e8ec2 pop edi */
  EDI = (pop32());
  /* 118e8ec3 pop esi */
  ESI = (pop32());
  /* 118e8ec4 ret  */
  ESPCHK(0x118e8e78u, _esp0);
  ESP += 4; return;
L_118e8ec5:;
  /* 118e8ec5 call 0x118eb2bd */
  push32(0x118e8ecau); f_118eb2bd();
  /* 118e8eca mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118e8ed0 call 0x118eb2c6 */
  push32(0x118e8ed5u); f_118eb2c6();
  /* 118e8ed5 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118e8ed8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e8edb pop esi */
  ESI = (pop32());
  /* 118e8edc ret  */
  ESPCHK(0x118e8e78u, _esp0);
  ESP += 4; return;
}

/* FUN_10008edd @ 0x118e8edd (395 bytes, 135 insns) */
void f_118e8edd(void) {
  FTRACE(0x118e8eddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e8edd push ebp */
  push32((uint32_t)(EBP));
  /* 118e8ede mov ebp, esp */
  EBP = (ESP);
  /* 118e8ee0 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e8ee7 push esi */
  push32((uint32_t)(ESI));
  /* 118e8ee8 push edi */
  push32((uint32_t)(EDI));
  /* 118e8ee9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e8eeb cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8eee mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 118e8ef1 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 118e8ef4 jne 0x118e8efd */
  if (!C.zf) goto L_118e8efd;
L_118e8ef6:;
  /* 118e8ef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e8ef8 jmp 0x118e9063 */
  goto L_118e9063;
L_118e8efd:;
  /* 118e8efd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8f00 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118e8f03 lea ebx, [eax*4 + 0x1190aa40] */
  EBX = ((uint32_t)(EAX*4 + 0x1190aa40));
  /* 118e8f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e8f0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118e8f10 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118e8f13 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118e8f15 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118e8f18 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 118e8f1d je 0x118e8f2d */
  if (C.zf) goto L_118e8f2d;
  /* 118e8f1f push 2 */
  push32((uint32_t)(0x2u));
  /* 118e8f21 push edi */
  push32((uint32_t)(EDI));
  /* 118e8f22 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e8f25 call 0x118e8e05 */
  push32(0x118e8f2au); f_118e8e05();
  /* 118e8f2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e8f2d:;
  /* 118e8f2d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118e8f2f add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e8f31 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 118e8f35 je 0x118e8ffc */
  if (C.zf) goto L_118e8ffc;
  /* 118e8f3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e8f3e cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8f41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118e8f44 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 118e8f47 jbe 0x118e9037 */
  if ((C.cf||C.zf)) goto L_118e9037;
L_118e8f4d:;
  /* 118e8f4d lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_118e8f53:;
  /* 118e8f53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e8f56 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8f59 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8f5c jae 0x118e8f87 */
  if (!C.cf) goto L_118e8f87;
  /* 118e8f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e8f61 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118e8f64 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 118e8f66 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e8f69 jne 0x118e8f72 */
  if (!C.zf) goto L_118e8f72;
  /* 118e8f6b inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 118e8f6e mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 118e8f71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118e8f72:;
  /* 118e8f72 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118e8f74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e8f75 mov ecx, eax */
  ECX = (EAX);
  /* 118e8f77 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 118e8f7d sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8f7f cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8f85 jl 0x118e8f53 */
  if ((C.sf!=C.of)) goto L_118e8f53;
L_118e8f87:;
  /* 118e8f87 mov edi, eax */
  EDI = (EAX);
  /* 118e8f89 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 118e8f8f sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8f91 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118e8f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e8f96 push eax */
  push32((uint32_t)(EAX));
  /* 118e8f97 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 118e8f9d push edi */
  push32((uint32_t)(EDI));
  /* 118e8f9e push eax */
  push32((uint32_t)(EAX));
  /* 118e8f9f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118e8fa1 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 118e8fa4 call dword ptr [0x118ef07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef07c))), 0x118e8faau);
  /* 118e8faa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e8fac je 0x118e8ff1 */
  if (C.zf) goto L_118e8ff1;
  /* 118e8fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e8fb1 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e8fb4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8fb6 jl 0x118e8fc3 */
  if ((C.sf!=C.of)) goto L_118e8fc3;
  /* 118e8fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e8fbb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e8fbe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8fc1 jb 0x118e8f4d */
  if (C.cf) goto L_118e8f4d;
L_118e8fc3:;
  /* 118e8fc3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118e8fc5:;
  /* 118e8fc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e8fc8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8fca jne 0x118e9060 */
  if (!C.zf) goto L_118e9060;
  /* 118e8fd0 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8fd3 je 0x118e9037 */
  if (C.zf) goto L_118e9037;
  /* 118e8fd5 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e8fd7 pop esi */
  ESI = (pop32());
  /* 118e8fd8 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e8fdb jne 0x118e9029 */
  if (!C.zf) goto L_118e9029;
  /* 118e8fdd call 0x118eb2bd */
  push32(0x118e8fe2u); f_118eb2bd();
  /* 118e8fe2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118e8fe8 call 0x118eb2c6 */
  push32(0x118e8fedu); f_118eb2c6();
  /* 118e8fed mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 118e8fef jmp 0x118e9032 */
  goto L_118e9032;
L_118e8ff1:;
  /* 118e8ff1 call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118e8ff7u);
  /* 118e8ff7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118e8ffa jmp 0x118e8fc3 */
  goto L_118e8fc3;
L_118e8ffc:;
  /* 118e8ffc lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 118e8fff push edi */
  push32((uint32_t)(EDI));
  /* 118e9000 push ecx */
  push32((uint32_t)(ECX));
  /* 118e9001 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118e9004 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e9007 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118e9009 call dword ptr [0x118ef07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef07c))), 0x118e900fu);
  /* 118e900f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9011 je 0x118e901e */
  if (C.zf) goto L_118e901e;
  /* 118e9013 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e9016 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 118e9019 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118e901c jmp 0x118e8fc5 */
  goto L_118e8fc5;
L_118e901e:;
  /* 118e901e call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118e9024u);
  /* 118e9024 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118e9027 jmp 0x118e8fc5 */
  goto L_118e8fc5;
L_118e9029:;
  /* 118e9029 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e902c call 0x118eb24a */
  push32(0x118e9031u); f_118eb24a();
  /* 118e9031 pop ecx */
  ECX = (pop32());
L_118e9032:;
  /* 118e9032 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e9035 jmp 0x118e9063 */
  goto L_118e9063;
L_118e9037:;
  /* 118e9037 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118e9039 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 118e903e je 0x118e904c */
  if (C.zf) goto L_118e904c;
  /* 118e9040 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e9043 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9046 je 0x118e8ef6 */
  if (C.zf) goto L_118e8ef6;
L_118e904c:;
  /* 118e904c call 0x118eb2bd */
  push32(0x118e9051u); f_118eb2bd();
  /* 118e9051 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 118e9057 call 0x118eb2c6 */
  push32(0x118e905cu); f_118eb2c6();
  /* 118e905c mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 118e905e jmp 0x118e9032 */
  goto L_118e9032;
L_118e9060:;
  /* 118e9060 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118e9063:;
  /* 118e9063 pop edi */
  EDI = (pop32());
  /* 118e9064 pop esi */
  ESI = (pop32());
  /* 118e9065 pop ebx */
  EBX = (pop32());
  /* 118e9066 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e9067 ret  */
  ESPCHK(0x118e8eddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009124 @ 0x118e9124 (47 bytes, 17 insns) */
void f_118e9124(void) {
  FTRACE(0x118e9124u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9124 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e9128 mov ecx, 0x118f3ba0 */
  ECX = (0x118f3ba0u);
  /* 118e912d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e912f jb 0x118e9148 */
  if (C.cf) goto L_118e9148;
  /* 118e9131 cmp eax, 0x118f3e00 */
  { uint32_t _a=(EAX),_b=(0x118f3e00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9136 ja 0x118e9148 */
  if ((!C.cf&&!C.zf)) goto L_118e9148;
  /* 118e9138 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e913a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118e913d add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9140 push eax */
  push32((uint32_t)(EAX));
  /* 118e9141 call 0x118e7509 */
  push32(0x118e9146u); f_118e7509();
  /* 118e9146 pop ecx */
  ECX = (pop32());
  /* 118e9147 ret  */
  ESPCHK(0x118e9124u, _esp0);
  ESP += 4; return;
L_118e9148:;
  /* 118e9148 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e914b push eax */
  push32((uint32_t)(EAX));
  /* 118e914c call dword ptr [0x118ef06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef06c))), 0x118e9152u);
  /* 118e9152 ret  */
  ESPCHK(0x118e9124u, _esp0);
  ESP += 4; return;
}

/* FUN_10009153 @ 0x118e9153 (35 bytes, 13 insns) */
void f_118e9153(void) {
  FTRACE(0x118e9153u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9153 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e9157 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e915a jge 0x118e9167 */
  if ((C.sf==C.of)) goto L_118e9167;
  /* 118e915c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e915f push eax */
  push32((uint32_t)(EAX));
  /* 118e9160 call 0x118e7509 */
  push32(0x118e9165u); f_118e7509();
  /* 118e9165 pop ecx */
  ECX = (pop32());
  /* 118e9166 ret  */
  ESPCHK(0x118e9153u, _esp0);
  ESP += 4; return;
L_118e9167:;
  /* 118e9167 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e916b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e916e push eax */
  push32((uint32_t)(EAX));
  /* 118e916f call dword ptr [0x118ef06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef06c))), 0x118e9175u);
  /* 118e9175 ret  */
  ESPCHK(0x118e9153u, _esp0);
  ESP += 4; return;
}

/* FUN_10009176 @ 0x118e9176 (47 bytes, 17 insns) */
void f_118e9176(void) {
  FTRACE(0x118e9176u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9176 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e917a mov ecx, 0x118f3ba0 */
  ECX = (0x118f3ba0u);
  /* 118e917f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9181 jb 0x118e919a */
  if (C.cf) goto L_118e919a;
  /* 118e9183 cmp eax, 0x118f3e00 */
  { uint32_t _a=(EAX),_b=(0x118f3e00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9188 ja 0x118e919a */
  if ((!C.cf&&!C.zf)) goto L_118e919a;
  /* 118e918a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e918c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118e918f add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9192 push eax */
  push32((uint32_t)(EAX));
  /* 118e9193 call 0x118e756a */
  push32(0x118e9198u); f_118e756a();
  /* 118e9198 pop ecx */
  ECX = (pop32());
  /* 118e9199 ret  */
  ESPCHK(0x118e9176u, _esp0);
  ESP += 4; return;
L_118e919a:;
  /* 118e919a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e919d push eax */
  push32((uint32_t)(EAX));
  /* 118e919e call dword ptr [0x118ef068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef068))), 0x118e91a4u);
  /* 118e91a4 ret  */
  ESPCHK(0x118e9176u, _esp0);
  ESP += 4; return;
}

/* FUN_100091a5 @ 0x118e91a5 (35 bytes, 13 insns) */
void f_118e91a5(void) {
  FTRACE(0x118e91a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e91a5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e91a9 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e91ac jge 0x118e91b9 */
  if ((C.sf==C.of)) goto L_118e91b9;
  /* 118e91ae add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e91b1 push eax */
  push32((uint32_t)(EAX));
  /* 118e91b2 call 0x118e756a */
  push32(0x118e91b7u); f_118e756a();
  /* 118e91b7 pop ecx */
  ECX = (pop32());
  /* 118e91b8 ret  */
  ESPCHK(0x118e91a5u, _esp0);
  ESP += 4; return;
L_118e91b9:;
  /* 118e91b9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e91bd add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e91c0 push eax */
  push32((uint32_t)(EAX));
  /* 118e91c1 call dword ptr [0x118ef068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef068))), 0x118e91c7u);
  /* 118e91c7 ret  */
  ESPCHK(0x118e91a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b5 @ 0x118e92b5 (289 bytes, 98 insns) */
void f_118e92b5(void) {
  FTRACE(0x118e92b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e92b5 push ebp */
  push32((uint32_t)(EBP));
  /* 118e92b6 mov ebp, esp */
  EBP = (ESP);
  /* 118e92b8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e92ba push 0x118ef6b0 */
  push32((uint32_t)(0x118ef6b0u));
  /* 118e92bf push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118e92c4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118e92ca push eax */
  push32((uint32_t)(EAX));
  /* 118e92cb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118e92d2 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e92d5 push ebx */
  push32((uint32_t)(EBX));
  /* 118e92d6 push esi */
  push32((uint32_t)(ESI));
  /* 118e92d7 push edi */
  push32((uint32_t)(EDI));
  /* 118e92d8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e92db imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e92df mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118e92e2 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 118e92e5 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e92e8 ja 0x118e92fe */
  if ((!C.cf&&!C.zf)) goto L_118e92fe;
  /* 118e92ea xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e92ec cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e92ee jne 0x118e92f3 */
  if (!C.zf) goto L_118e92f3;
  /* 118e92f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e92f2 pop esi */
  ESI = (pop32());
L_118e92f3:;
  /* 118e92f3 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e92f6 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118e92f9 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118e92fc jmp 0x118e9300 */
  goto L_118e9300;
L_118e92fe:;
  /* 118e92fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118e9300:;
  /* 118e9300 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 118e9303 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9306 ja 0x118e93b4 */
  if ((!C.cf&&!C.zf)) goto L_118e93b4;
  /* 118e930c mov eax, dword ptr [0x1190aa24] */
  EAX = (r32((uint32_t)(0x1190aa24)));
  /* 118e9311 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9314 jne 0x118e9357 */
  if (!C.zf) goto L_118e9357;
  /* 118e9316 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 118e9319 cmp edi, dword ptr [0x1190aa1c] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x1190aa1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e931f ja 0x118e939d */
  if ((!C.cf&&!C.zf)) goto L_118e939d;
  /* 118e9321 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e9323 call 0x118e7509 */
  push32(0x118e9328u); f_118e7509();
  /* 118e9328 pop ecx */
  ECX = (pop32());
  /* 118e9329 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118e932c push edi */
  push32((uint32_t)(EDI));
  /* 118e932d call 0x118e791b */
  push32(0x118e9332u); f_118e791b();
  /* 118e9332 pop ecx */
  ECX = (pop32());
  /* 118e9333 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118e9336 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e933a call 0x118e934e */
  push32(0x118e933fu); f_118e934e();
  /* 118e933f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9342 je 0x118e93a2 */
  if (C.zf) goto L_118e93a2;
  /* 118e9344 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118e9347 jmp 0x118e9391 */
  goto L_118e9391;
  /* 118e9349 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e934b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e934e push 9 */
  push32((uint32_t)(0x9u));
  /* 118e9350 call 0x118e756a */
  push32(0x118e9355u); f_118e756a();
  /* 118e9355 pop ecx */
  ECX = (pop32());
  /* 118e9356 ret  */
  ESPCHK(0x118e92b5u, _esp0);
  ESP += 4; return;
L_118e9357:;
  /* 118e9357 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e935a jne 0x118e939d */
  if (!C.zf) goto L_118e939d;
  /* 118e935c cmp esi, dword ptr [0x118f3b84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118f3b84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9362 ja 0x118e939d */
  if ((!C.cf&&!C.zf)) goto L_118e939d;
  /* 118e9364 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e9366 call 0x118e7509 */
  push32(0x118e936bu); f_118e7509();
  /* 118e936b pop ecx */
  ECX = (pop32());
  /* 118e936c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118e9373 mov eax, esi */
  EAX = (ESI);
  /* 118e9375 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118e9378 push eax */
  push32((uint32_t)(EAX));
  /* 118e9379 call 0x118e83be */
  push32(0x118e937eu); f_118e83be();
  /* 118e937e pop ecx */
  ECX = (pop32());
  /* 118e937f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118e9382 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e9386 call 0x118e93d7 */
  push32(0x118e938bu); f_118e93d7();
  /* 118e938b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e938e je 0x118e93a2 */
  if (C.zf) goto L_118e93a2;
  /* 118e9390 push esi */
  push32((uint32_t)(ESI));
L_118e9391:;
  /* 118e9391 push ebx */
  push32((uint32_t)(EBX));
  /* 118e9392 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 118e9395 call 0x118e7050 */
  push32(0x118e939au); f_118e7050();
  /* 118e939a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e939d:;
  /* 118e939d cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e93a0 jne 0x118e93e0 */
  if (!C.zf) { jmp_ind(0x118e93e0u); return; }
L_118e93a2:;
  /* 118e93a2 push esi */
  push32((uint32_t)(ESI));
  /* 118e93a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 118e93a5 push dword ptr [0x1190aa20] */
  push32((uint32_t)(r32((uint32_t)(0x1190aa20))));
  /* 118e93ab call dword ptr [0x118ef0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0fc))), 0x118e93b1u);
  /* 118e93b1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_118e93b4:;
  /* 118e93b4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e93b7 jne 0x118e93e0 */
  if (!C.zf) { jmp_ind(0x118e93e0u); return; }
  /* 118e93b9 cmp dword ptr [0x119095e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119095e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e93bf je 0x118e93e0 */
  if (C.zf) { jmp_ind(0x118e93e0u); return; }
  /* 118e93c1 push esi */
  push32((uint32_t)(ESI));
  /* 118e93c2 call 0x118e8793 */
  push32(0x118e93c7u); f_118e8793();
  /* 118e93c7 pop ecx */
  ECX = (pop32());
  /* 118e93c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e93ca jne 0x118e9300 */
  if (!C.zf) goto L_118e9300;
  /* 118e93d0 jmp 0x118e93e3 */
  jmp_ind(0x118e93e3u); return;
  /* 118e93d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000934e @ 0x118e934e (9 bytes, 4 insns) */
void f_118e934e(void) {
  FTRACE(0x118e934eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e934e push 9 */
  push32((uint32_t)(0x9u));
  /* 118e9350 call 0x118e756a */
  push32(0x118e9355u); f_118e756a();
  /* 118e9355 pop ecx */
  ECX = (pop32());
  /* 118e9356 ret  */
  ESPCHK(0x118e934eu, _esp0);
  ESP += 4; return;
}

/* FUN_100093d7 @ 0x118e93d7 (9 bytes, 4 insns) */
void f_118e93d7(void) {
  FTRACE(0x118e93d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e93d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e93d9 call 0x118e756a */
  push32(0x118e93deu); f_118e756a();
  /* 118e93de pop ecx */
  ECX = (pop32());
  /* 118e93df ret  */
  ESPCHK(0x118e93d7u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f2 @ 0x118e93f2 (208 bytes, 94 insns) */
void f_118e93f2(void) {
  FTRACE(0x118e93f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e93f2 push ebp */
  push32((uint32_t)(EBP));
  /* 118e93f3 mov ebp, esp */
  EBP = (ESP);
  /* 118e93f5 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e93f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e93fb push ebx */
  push32((uint32_t)(EBX));
  /* 118e93fc push esi */
  push32((uint32_t)(ESI));
  /* 118e93fd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e9400 movzx ecx, word ptr [eax] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 118e9403 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e9405 push edi */
  push32((uint32_t)(EDI));
  /* 118e9406 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e9407 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118e940a je 0x118e9437 */
  if (C.zf) goto L_118e9437;
  /* 118e940c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e940d je 0x118e9433 */
  if (C.zf) goto L_118e9433;
  /* 118e940f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e9410 je 0x118e942f */
  if (C.zf) goto L_118e942f;
  /* 118e9412 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e9413 je 0x118e942b */
  if (C.zf) goto L_118e942b;
  /* 118e9415 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e9416 je 0x118e9437 */
  if (C.zf) goto L_118e9437;
  /* 118e9418 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e9419 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e941a je 0x118e9423 */
  if (C.zf) goto L_118e9423;
  /* 118e941c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e941d jne 0x118e948d */
  if (!C.zf) goto L_118e948d;
  /* 118e941f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e9421 jmp 0x118e9439 */
  goto L_118e9439;
L_118e9423:;
  /* 118e9423 mov dword ptr [esi], 1 */
  w32((uint32_t)(ESI), (0x1u));
  /* 118e9429 jmp 0x118e948d */
  goto L_118e948d;
L_118e942b:;
  /* 118e942b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 118e942d jmp 0x118e9439 */
  goto L_118e9439;
L_118e942f:;
  /* 118e942f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118e9431 jmp 0x118e9439 */
  goto L_118e9439;
L_118e9433:;
  /* 118e9433 push 4 */
  push32((uint32_t)(0x4u));
  /* 118e9435 jmp 0x118e9439 */
  goto L_118e9439;
L_118e9437:;
  /* 118e9437 push 8 */
  push32((uint32_t)(0x8u));
L_118e9439:;
  /* 118e9439 pop ebx */
  EBX = (pop32());
  /* 118e943a lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 118e943d push ecx */
  push32((uint32_t)(ECX));
  /* 118e943e push edi */
  push32((uint32_t)(EDI));
  /* 118e943f push ebx */
  push32((uint32_t)(EBX));
  /* 118e9440 call 0x118eb87c */
  push32(0x118e9445u); f_118eb87c();
  /* 118e9445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e944a jne 0x118e948d */
  if (!C.zf) goto L_118e948d;
  /* 118e944c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e944f cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9452 je 0x118e9464 */
  if (C.zf) goto L_118e9464;
  /* 118e9454 cmp eax, 0x16 */
  { uint32_t _a=(EAX),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9457 je 0x118e9464 */
  if (C.zf) goto L_118e9464;
  /* 118e9459 cmp eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e945c je 0x118e9464 */
  if (C.zf) goto L_118e9464;
  /* 118e945e and dword ptr [ebp - 0x20], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x20)))&(0xfffffffeu); w32((uint32_t)(EBP + -0x20), (_r)); fl_logic(_r,32); }
  /* 118e9462 jmp 0x118e9476 */
  goto L_118e9476;
L_118e9464:;
  /* 118e9464 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118e9467 fld qword ptr [esi + 0x10] */
  fpu_push(rf64((uint32_t)(ESI + 0x10)));
  /* 118e946a and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 118e946d fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
  /* 118e9470 or ecx, 3 */
  { uint32_t _r=(ECX)|(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118e9473 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_118e9476:;
  /* 118e9476 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 118e9479 push edi */
  push32((uint32_t)(EDI));
  /* 118e947a push ecx */
  push32((uint32_t)(ECX));
  /* 118e947b push eax */
  push32((uint32_t)(EAX));
  /* 118e947c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118e947f push ebx */
  push32((uint32_t)(EBX));
  /* 118e9480 push eax */
  push32((uint32_t)(EAX));
  /* 118e9481 lea eax, [ebp - 0x58] */
  EAX = ((uint32_t)(EBP + -0x58));
  /* 118e9484 push eax */
  push32((uint32_t)(EAX));
  /* 118e9485 call 0x118eb5c9 */
  push32(0x118e948au); f_118eb5c9();
  /* 118e948a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e948d:;
  /* 118e948d push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 118e9492 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118e9495 call 0x118ebadb */
  push32(0x118e949au); f_118ebadb();
  /* 118e949a cmp dword ptr [esi], 8 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e949d pop ecx */
  ECX = (pop32());
  /* 118e949e pop ecx */
  ECX = (pop32());
  /* 118e949f je 0x118e94b5 */
  if (C.zf) goto L_118e94b5;
  /* 118e94a1 cmp dword ptr [0x118f4410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118f4410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e94a8 jne 0x118e94b5 */
  if (!C.zf) goto L_118e94b5;
  /* 118e94aa push esi */
  push32((uint32_t)(ESI));
  /* 118e94ab call 0x118ebabb */
  push32(0x118e94b0u); f_118ebabb();
  /* 118e94b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e94b2 pop ecx */
  ECX = (pop32());
  /* 118e94b3 jne 0x118e94bd */
  if (!C.zf) goto L_118e94bd;
L_118e94b5:;
  /* 118e94b5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118e94b7 call 0x118eba93 */
  push32(0x118e94bcu); f_118eba93();
  /* 118e94bc pop ecx */
  ECX = (pop32());
L_118e94bd:;
  /* 118e94bd pop edi */
  EDI = (pop32());
  /* 118e94be pop esi */
  ESI = (pop32());
  /* 118e94bf pop ebx */
  EBX = (pop32());
  /* 118e94c0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e94c1 ret  */
  ESPCHK(0x118e93f2u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c2 @ 0x118e94c2 (46 bytes, 13 insns) */
void f_118e94c2(void) {
  FTRACE(0x118e94c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e94c2 cmp dword ptr [0x119096a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119096a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e94c9 jne 0x118e94ef */
  if (!C.zf) goto L_118e94ef;
  /* 118e94cb push 0xb */
  push32((uint32_t)(0xbu));
  /* 118e94cd call 0x118e7509 */
  push32(0x118e94d2u); f_118e7509();
  /* 118e94d2 cmp dword ptr [0x119096a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119096a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e94d9 pop ecx */
  ECX = (pop32());
  /* 118e94da jne 0x118e94e7 */
  if (!C.zf) goto L_118e94e7;
  /* 118e94dc call 0x118e94f0 */
  push32(0x118e94e1u); f_118e94f0();
  /* 118e94e1 inc dword ptr [0x119096a0] */
  { uint32_t _r=(r32((uint32_t)(0x119096a0)))+1; w32((uint32_t)(0x119096a0), (_r)); fl_inc(_r,32); }
L_118e94e7:;
  /* 118e94e7 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118e94e9 call 0x118e756a */
  push32(0x118e94eeu); f_118e756a();
  /* 118e94ee pop ecx */
  ECX = (pop32());
L_118e94ef:;
  /* 118e94ef ret  */
  ESPCHK(0x118e94c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x118e94f0 (647 bytes, 207 insns) */
void f_118e94f0(void) {
  FTRACE(0x118e94f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e94f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e94f1 mov ebp, esp */
  EBP = (ESP);
  /* 118e94f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118e94f4 push ecx */
  push32((uint32_t)(ECX));
  /* 118e94f5 push ebx */
  push32((uint32_t)(EBX));
  /* 118e94f6 push esi */
  push32((uint32_t)(ESI));
  /* 118e94f7 push edi */
  push32((uint32_t)(EDI));
  /* 118e94f8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 118e94fa pop edi */
  EDI = (pop32());
  /* 118e94fb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e94fd push edi */
  push32((uint32_t)(EDI));
  /* 118e94fe mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 118e9501 call 0x118e7509 */
  push32(0x118e9506u); f_118e7509();
  /* 118e9506 or dword ptr [0x118f3f50], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x118f3f50)))|(0xffffffffu); w32((uint32_t)(0x118f3f50), (_r)); fl_logic(_r,32); }
  /* 118e950d or dword ptr [0x118f3f40], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x118f3f40)))|(0xffffffffu); w32((uint32_t)(0x118f3f40), (_r)); fl_logic(_r,32); }
  /* 118e9514 mov dword ptr [0x119095e8], ebx */
  w32((uint32_t)(0x119095e8), (EBX));
  /* 118e951a mov dword ptr [esp], 0x118ef708 */
  w32((uint32_t)(ESP), (0x118ef708u));
  /* 118e9521 call 0x118ebc64 */
  push32(0x118e9526u); f_118ebc64();
  /* 118e9526 mov esi, eax */
  ESI = (EAX);
  /* 118e9528 pop ecx */
  ECX = (pop32());
  /* 118e9529 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e952b jne 0x118e962e */
  if (!C.zf) goto L_118e962e;
  /* 118e9531 push edi */
  push32((uint32_t)(EDI));
  /* 118e9532 call 0x118e756a */
  push32(0x118e9537u); f_118e756a();
  /* 118e9537 mov dword ptr [esp], 0x119095f0 */
  w32((uint32_t)(ESP), (0x119095f0u));
  /* 118e953e call dword ptr [0x118ef0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0d4))), 0x118e9544u);
  /* 118e9544 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9547 je 0x118e9772 */
  if (C.zf) goto L_118e9772;
  /* 118e954d mov eax, dword ptr [0x119095f0] */
  EAX = (r32((uint32_t)(0x119095f0)));
  /* 118e9552 mov ecx, dword ptr [0x11909644] */
  ECX = (r32((uint32_t)(0x11909644)));
  /* 118e9558 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e955b cmp word ptr [0x11909636], bx */
  { uint32_t _a=(r16((uint32_t)(0x11909636))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e9562 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e9564 pop edx */
  EDX = (pop32());
  /* 118e9565 mov dword ptr [0x118f3ea8], eax */
  w32((uint32_t)(0x118f3ea8), (EAX));
  /* 118e956a mov dword ptr [0x119095e8], edx */
  w32((uint32_t)(0x119095e8), (EDX));
  /* 118e9570 je 0x118e957e */
  if (C.zf) goto L_118e957e;
  /* 118e9572 mov esi, ecx */
  ESI = (ECX);
  /* 118e9574 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9577 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9579 mov dword ptr [0x118f3ea8], eax */
  w32((uint32_t)(0x118f3ea8), (EAX));
L_118e957e:;
  /* 118e957e cmp word ptr [0x1190968a], bx */
  { uint32_t _a=(r16((uint32_t)(0x1190968a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e9585 je 0x118e95a2 */
  if (C.zf) goto L_118e95a2;
  /* 118e9587 mov eax, dword ptr [0x11909698] */
  EAX = (r32((uint32_t)(0x11909698)));
  /* 118e958c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e958e je 0x118e95a2 */
  if (C.zf) goto L_118e95a2;
  /* 118e9590 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9592 mov dword ptr [0x118f3eac], edx */
  w32((uint32_t)(0x118f3eac), (EDX));
  /* 118e9598 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e959b mov dword ptr [0x118f3eb0], eax */
  w32((uint32_t)(0x118f3eb0), (EAX));
  /* 118e95a0 jmp 0x118e95ae */
  goto L_118e95ae;
L_118e95a2:;
  /* 118e95a2 mov dword ptr [0x118f3eac], ebx */
  w32((uint32_t)(0x118f3eac), (EBX));
  /* 118e95a8 mov dword ptr [0x118f3eb0], ebx */
  w32((uint32_t)(0x118f3eb0), (EBX));
L_118e95ae:;
  /* 118e95ae lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118e95b1 mov esi, dword ptr [0x118ef0a0] */
  ESI = (r32((uint32_t)(0x118ef0a0)));
  /* 118e95b7 push eax */
  push32((uint32_t)(EAX));
  /* 118e95b8 push ebx */
  push32((uint32_t)(EBX));
  /* 118e95b9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e95bb mov edi, 0x220 */
  EDI = (0x220u);
  /* 118e95c0 push dword ptr [0x118f3f34] */
  push32((uint32_t)(r32((uint32_t)(0x118f3f34))));
  /* 118e95c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e95c8 push 0x119095f4 */
  push32((uint32_t)(0x119095f4u));
  /* 118e95cd push edi */
  push32((uint32_t)(EDI));
  /* 118e95ce push dword ptr [0x119096f0] */
  push32((uint32_t)(r32((uint32_t)(0x119096f0))));
  /* 118e95d4 call esi */
  call_ind((uint32_t)(ESI), 0x118e95d6u);
  /* 118e95d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e95d8 je 0x118e95ea */
  if (C.zf) goto L_118e95ea;
  /* 118e95da cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e95dd jne 0x118e95ea */
  if (!C.zf) goto L_118e95ea;
  /* 118e95df mov eax, dword ptr [0x118f3f34] */
  EAX = (r32((uint32_t)(0x118f3f34)));
  /* 118e95e4 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 118e95e8 jmp 0x118e95f2 */
  goto L_118e95f2;
L_118e95ea:;
  /* 118e95ea mov eax, dword ptr [0x118f3f34] */
  EAX = (r32((uint32_t)(0x118f3f34)));
  /* 118e95ef and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_118e95f2:;
  /* 118e95f2 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118e95f5 push eax */
  push32((uint32_t)(EAX));
  /* 118e95f6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e95f7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118e95f9 push dword ptr [0x118f3f38] */
  push32((uint32_t)(r32((uint32_t)(0x118f3f38))));
  /* 118e95ff push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e9601 push 0x11909648 */
  push32((uint32_t)(0x11909648u));
  /* 118e9606 push edi */
  push32((uint32_t)(EDI));
  /* 118e9607 push dword ptr [0x119096f0] */
  push32((uint32_t)(r32((uint32_t)(0x119096f0))));
  /* 118e960d call esi */
  call_ind((uint32_t)(ESI), 0x118e960fu);
  /* 118e960f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9611 je 0x118e9761 */
  if (C.zf) goto L_118e9761;
  /* 118e9617 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e961a jne 0x118e9761 */
  if (!C.zf) goto L_118e9761;
  /* 118e9620 mov eax, dword ptr [0x118f3f38] */
  EAX = (r32((uint32_t)(0x118f3f38)));
  /* 118e9625 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 118e9629 jmp 0x118e9772 */
  goto L_118e9772;
L_118e962e:;
  /* 118e962e cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9631 je 0x118e976b */
  if (C.zf) goto L_118e976b;
  /* 118e9637 mov eax, dword ptr [0x1190969c] */
  EAX = (r32((uint32_t)(0x1190969c)));
  /* 118e963c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e963e je 0x118e9651 */
  if (C.zf) goto L_118e9651;
  /* 118e9640 push eax */
  push32((uint32_t)(EAX));
  /* 118e9641 push esi */
  push32((uint32_t)(ESI));
  /* 118e9642 call 0x118ebbe0 */
  push32(0x118e9647u); f_118ebbe0();
  /* 118e9647 pop ecx */
  ECX = (pop32());
  /* 118e9648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e964a pop ecx */
  ECX = (pop32());
  /* 118e964b je 0x118e976b */
  if (C.zf) goto L_118e976b;
L_118e9651:;
  /* 118e9651 push dword ptr [0x1190969c] */
  push32((uint32_t)(r32((uint32_t)(0x1190969c))));
  /* 118e9657 call 0x118e8ae5 */
  push32(0x118e965cu); f_118e8ae5();
  /* 118e965c push esi */
  push32((uint32_t)(ESI));
  /* 118e965d call 0x118e73f0 */
  push32(0x118e9662u); f_118e73f0();
  /* 118e9662 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9663 push eax */
  push32((uint32_t)(EAX));
  /* 118e9664 call 0x118e553a */
  push32(0x118e9669u); f_118e553a();
  /* 118e9669 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e966c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e966e mov dword ptr [0x1190969c], eax */
  w32((uint32_t)(0x1190969c), (EAX));
  /* 118e9673 je 0x118e976b */
  if (C.zf) goto L_118e976b;
  /* 118e9679 push esi */
  push32((uint32_t)(ESI));
  /* 118e967a push eax */
  push32((uint32_t)(EAX));
  /* 118e967b call 0x118e6f60 */
  push32(0x118e9680u); f_118e6f60();
  /* 118e9680 push edi */
  push32((uint32_t)(EDI));
  /* 118e9681 call 0x118e756a */
  push32(0x118e9686u); f_118e756a();
  /* 118e9686 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e9688 push esi */
  push32((uint32_t)(ESI));
  /* 118e9689 push dword ptr [0x118f3f34] */
  push32((uint32_t)(r32((uint32_t)(0x118f3f34))));
  /* 118e968f call 0x118ea2f0 */
  push32(0x118e9694u); f_118ea2f0();
  /* 118e9694 mov eax, dword ptr [0x118f3f34] */
  EAX = (r32((uint32_t)(0x118f3f34)));
  /* 118e9699 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e969c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e969f and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 118e96a3 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96a6 jne 0x118e96b0 */
  if (!C.zf) goto L_118e96b0;
  /* 118e96a8 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118e96af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e96b0:;
  /* 118e96b0 push esi */
  push32((uint32_t)(ESI));
  /* 118e96b1 call 0x118ebb54 */
  push32(0x118e96b6u); f_118ebb54();
  /* 118e96b6 pop ecx */
  ECX = (pop32());
  /* 118e96b7 mov bl, 0x30 */
  BL = (0x30u);
  /* 118e96b9 mov ecx, eax */
  ECX = (EAX);
  /* 118e96bb imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e96c1 mov dword ptr [0x118f3ea8], ecx */
  w32((uint32_t)(0x118f3ea8), (ECX));
L_118e96c7:;
  /* 118e96c7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e96c9 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96cb je 0x118e96d5 */
  if (C.zf) goto L_118e96d5;
  /* 118e96cd cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96cf jl 0x118e96d8 */
  if ((C.sf!=C.of)) goto L_118e96d8;
  /* 118e96d1 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96d3 jg 0x118e96d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e96d8;
L_118e96d5:;
  /* 118e96d5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e96d6 jmp 0x118e96c7 */
  goto L_118e96c7;
L_118e96d8:;
  /* 118e96d8 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96db jne 0x118e972b */
  if (!C.zf) goto L_118e972b;
  /* 118e96dd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e96de push esi */
  push32((uint32_t)(ESI));
  /* 118e96df call 0x118ebb54 */
  push32(0x118e96e4u); f_118ebb54();
  /* 118e96e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e96e7 pop ecx */
  ECX = (pop32());
  /* 118e96e8 mov ecx, dword ptr [0x118f3ea8] */
  ECX = (r32((uint32_t)(0x118f3ea8)));
  /* 118e96ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e96f0 mov dword ptr [0x118f3ea8], ecx */
  w32((uint32_t)(0x118f3ea8), (ECX));
L_118e96f6:;
  /* 118e96f6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e96f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96fa jl 0x118e9703 */
  if ((C.sf!=C.of)) goto L_118e9703;
  /* 118e96fc cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e96fe jg 0x118e9703 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e9703;
  /* 118e9700 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9701 jmp 0x118e96f6 */
  goto L_118e96f6;
L_118e9703:;
  /* 118e9703 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9706 jne 0x118e972b */
  if (!C.zf) goto L_118e972b;
  /* 118e9708 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9709 push esi */
  push32((uint32_t)(ESI));
  /* 118e970a call 0x118ebb54 */
  push32(0x118e970fu); f_118ebb54();
  /* 118e970f pop ecx */
  ECX = (pop32());
  /* 118e9710 mov ecx, dword ptr [0x118f3ea8] */
  ECX = (r32((uint32_t)(0x118f3ea8)));
  /* 118e9716 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9718 mov dword ptr [0x118f3ea8], ecx */
  w32((uint32_t)(0x118f3ea8), (ECX));
L_118e971e:;
  /* 118e971e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e9720 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9722 jl 0x118e972b */
  if ((C.sf!=C.of)) goto L_118e972b;
  /* 118e9724 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9726 jg 0x118e972b */
  if ((!C.zf&&C.sf==C.of)) goto L_118e972b;
  /* 118e9728 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9729 jmp 0x118e971e */
  goto L_118e971e;
L_118e972b:;
  /* 118e972b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e972f je 0x118e9739 */
  if (C.zf) goto L_118e9739;
  /* 118e9731 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e9733 mov dword ptr [0x118f3ea8], ecx */
  w32((uint32_t)(0x118f3ea8), (ECX));
L_118e9739:;
  /* 118e9739 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 118e973c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e973e mov dword ptr [0x118f3eac], eax */
  w32((uint32_t)(0x118f3eac), (EAX));
  /* 118e9743 je 0x118e9761 */
  if (C.zf) goto L_118e9761;
  /* 118e9745 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e9747 push esi */
  push32((uint32_t)(ESI));
  /* 118e9748 push dword ptr [0x118f3f38] */
  push32((uint32_t)(r32((uint32_t)(0x118f3f38))));
  /* 118e974e call 0x118ea2f0 */
  push32(0x118e9753u); f_118ea2f0();
  /* 118e9753 mov eax, dword ptr [0x118f3f38] */
  EAX = (r32((uint32_t)(0x118f3f38)));
  /* 118e9758 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e975b and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 118e975f jmp 0x118e9772 */
  goto L_118e9772;
L_118e9761:;
  /* 118e9761 mov eax, dword ptr [0x118f3f38] */
  EAX = (r32((uint32_t)(0x118f3f38)));
  /* 118e9766 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 118e9769 jmp 0x118e9772 */
  goto L_118e9772;
L_118e976b:;
  /* 118e976b push edi */
  push32((uint32_t)(EDI));
  /* 118e976c call 0x118e756a */
  push32(0x118e9771u); f_118e756a();
  /* 118e9771 pop ecx */
  ECX = (pop32());
L_118e9772:;
  /* 118e9772 pop edi */
  EDI = (pop32());
  /* 118e9773 pop esi */
  ESI = (pop32());
  /* 118e9774 pop ebx */
  EBX = (pop32());
  /* 118e9775 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e9776 ret  */
  ESPCHK(0x118e94f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009777 @ 0x118e9777 (33 bytes, 12 insns) */
void f_118e9777(void) {
  FTRACE(0x118e9777u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9777 push esi */
  push32((uint32_t)(ESI));
  /* 118e9778 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118e977a call 0x118e7509 */
  push32(0x118e977fu); f_118e7509();
  /* 118e977f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118e9783 call 0x118e9798 */
  push32(0x118e9788u); f_118e9798();
  /* 118e9788 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118e978a mov esi, eax */
  ESI = (EAX);
  /* 118e978c call 0x118e756a */
  push32(0x118e9791u); f_118e756a();
  /* 118e9791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9794 mov eax, esi */
  EAX = (ESI);
  /* 118e9796 pop esi */
  ESI = (pop32());
  /* 118e9797 ret  */
  ESPCHK(0x118e9777u, _esp0);
  ESP += 4; return;
}

/* FUN_10009798 @ 0x118e9798 (428 bytes, 149 insns) */
void f_118e9798(void) {
  FTRACE(0x118e9798u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9798 push ebx */
  push32((uint32_t)(EBX));
  /* 118e9799 push esi */
  push32((uint32_t)(ESI));
  /* 118e979a push edi */
  push32((uint32_t)(EDI));
  /* 118e979b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118e979d cmp dword ptr [0x118f3eac], edi */
  { uint32_t _a=(r32((uint32_t)(0x118f3eac))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e97a3 jne 0x118e97ac */
  if (!C.zf) goto L_118e97ac;
L_118e97a5:;
  /* 118e97a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e97a7 jmp 0x118e98f8 */
  goto L_118e98f8;
L_118e97ac:;
  /* 118e97ac mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 118e97b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e97b2 pop ebx */
  EBX = (pop32());
  /* 118e97b3 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 118e97b6 cmp eax, dword ptr [0x118f3f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118f3f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e97bc jne 0x118e97ca */
  if (!C.zf) goto L_118e97ca;
  /* 118e97be cmp eax, dword ptr [0x118f3f50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118f3f50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e97c4 je 0x118e98cc */
  if (C.zf) goto L_118e98cc;
L_118e97ca:;
  /* 118e97ca cmp dword ptr [0x119095e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x119095e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e97d0 je 0x118e98a2 */
  if (C.zf) goto L_118e98a2;
  /* 118e97d6 movzx ecx, word ptr [0x11909696] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11909696))));
  /* 118e97dd push ecx */
  push32((uint32_t)(ECX));
  /* 118e97de cmp word ptr [0x11909688], di */
  { uint32_t _a=(r16((uint32_t)(0x11909688))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e97e5 movzx ecx, word ptr [0x11909694] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11909694))));
  /* 118e97ec push ecx */
  push32((uint32_t)(ECX));
  /* 118e97ed movzx ecx, word ptr [0x11909692] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11909692))));
  /* 118e97f4 push ecx */
  push32((uint32_t)(ECX));
  /* 118e97f5 movzx ecx, word ptr [0x11909690] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11909690))));
  /* 118e97fc push ecx */
  push32((uint32_t)(ECX));
  /* 118e97fd jne 0x118e981c */
  if (!C.zf) goto L_118e981c;
  /* 118e97ff movzx ecx, word ptr [0x1190968c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1190968c))));
  /* 118e9806 push edi */
  push32((uint32_t)(EDI));
  /* 118e9807 push ecx */
  push32((uint32_t)(ECX));
  /* 118e9808 movzx ecx, word ptr [0x1190968e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1190968e))));
  /* 118e980f push ecx */
  push32((uint32_t)(ECX));
  /* 118e9810 movzx ecx, word ptr [0x1190968a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1190968a))));
  /* 118e9817 push ecx */
  push32((uint32_t)(ECX));
  /* 118e9818 push eax */
  push32((uint32_t)(EAX));
  /* 118e9819 push ebx */
  push32((uint32_t)(EBX));
  /* 118e981a jmp 0x118e9830 */
  goto L_118e9830;
L_118e981c:;
  /* 118e981c movzx ecx, word ptr [0x1190968e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1190968e))));
  /* 118e9823 push ecx */
  push32((uint32_t)(ECX));
  /* 118e9824 push edi */
  push32((uint32_t)(EDI));
  /* 118e9825 movzx ecx, word ptr [0x1190968a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1190968a))));
  /* 118e982c push edi */
  push32((uint32_t)(EDI));
  /* 118e982d push ecx */
  push32((uint32_t)(ECX));
  /* 118e982e push eax */
  push32((uint32_t)(EAX));
  /* 118e982f push edi */
  push32((uint32_t)(EDI));
L_118e9830:;
  /* 118e9830 push ebx */
  push32((uint32_t)(EBX));
  /* 118e9831 call 0x118e9944 */
  push32(0x118e9836u); f_118e9944();
  /* 118e9836 movzx eax, word ptr [0x11909642] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11909642))));
  /* 118e983d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9840 cmp word ptr [0x11909634], di */
  { uint32_t _a=(r16((uint32_t)(0x11909634))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e9847 push eax */
  push32((uint32_t)(EAX));
  /* 118e9848 movzx eax, word ptr [0x11909640] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11909640))));
  /* 118e984f push eax */
  push32((uint32_t)(EAX));
  /* 118e9850 movzx eax, word ptr [0x1190963e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1190963e))));
  /* 118e9857 push eax */
  push32((uint32_t)(EAX));
  /* 118e9858 movzx eax, word ptr [0x1190963c] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1190963c))));
  /* 118e985f push eax */
  push32((uint32_t)(EAX));
  /* 118e9860 jne 0x118e988a */
  if (!C.zf) goto L_118e988a;
  /* 118e9862 movzx eax, word ptr [0x11909638] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11909638))));
  /* 118e9869 push edi */
  push32((uint32_t)(EDI));
  /* 118e986a push eax */
  push32((uint32_t)(EAX));
  /* 118e986b movzx eax, word ptr [0x1190963a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1190963a))));
  /* 118e9872 push eax */
  push32((uint32_t)(EAX));
  /* 118e9873 movzx eax, word ptr [0x11909636] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11909636))));
  /* 118e987a push eax */
  push32((uint32_t)(EAX));
  /* 118e987b push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 118e987e push ebx */
  push32((uint32_t)(EBX));
L_118e987f:;
  /* 118e987f push edi */
  push32((uint32_t)(EDI));
  /* 118e9880 call 0x118e9944 */
  push32(0x118e9885u); f_118e9944();
  /* 118e9885 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9888 jmp 0x118e98cc */
  goto L_118e98cc;
L_118e988a:;
  /* 118e988a movzx eax, word ptr [0x1190963a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1190963a))));
  /* 118e9891 push eax */
  push32((uint32_t)(EAX));
  /* 118e9892 push edi */
  push32((uint32_t)(EDI));
  /* 118e9893 movzx eax, word ptr [0x11909636] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11909636))));
  /* 118e989a push edi */
  push32((uint32_t)(EDI));
  /* 118e989b push eax */
  push32((uint32_t)(EAX));
  /* 118e989c push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 118e989f push edi */
  push32((uint32_t)(EDI));
  /* 118e98a0 jmp 0x118e987f */
  goto L_118e987f;
L_118e98a2:;
  /* 118e98a2 push edi */
  push32((uint32_t)(EDI));
  /* 118e98a3 push edi */
  push32((uint32_t)(EDI));
  /* 118e98a4 push edi */
  push32((uint32_t)(EDI));
  /* 118e98a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e98a7 push edi */
  push32((uint32_t)(EDI));
  /* 118e98a8 push edi */
  push32((uint32_t)(EDI));
  /* 118e98a9 push ebx */
  push32((uint32_t)(EBX));
  /* 118e98aa push 4 */
  push32((uint32_t)(0x4u));
  /* 118e98ac push eax */
  push32((uint32_t)(EAX));
  /* 118e98ad push ebx */
  push32((uint32_t)(EBX));
  /* 118e98ae push ebx */
  push32((uint32_t)(EBX));
  /* 118e98af call 0x118e9944 */
  push32(0x118e98b4u); f_118e9944();
  /* 118e98b4 push edi */
  push32((uint32_t)(EDI));
  /* 118e98b5 push edi */
  push32((uint32_t)(EDI));
  /* 118e98b6 push edi */
  push32((uint32_t)(EDI));
  /* 118e98b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e98b9 push edi */
  push32((uint32_t)(EDI));
  /* 118e98ba push edi */
  push32((uint32_t)(EDI));
  /* 118e98bb push 5 */
  push32((uint32_t)(0x5u));
  /* 118e98bd push 0xa */
  push32((uint32_t)(0xau));
  /* 118e98bf push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 118e98c2 push ebx */
  push32((uint32_t)(EBX));
  /* 118e98c3 push edi */
  push32((uint32_t)(EDI));
  /* 118e98c4 call 0x118e9944 */
  push32(0x118e98c9u); f_118e9944();
  /* 118e98c9 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e98cc:;
  /* 118e98cc mov edx, dword ptr [0x118f3f44] */
  EDX = (r32((uint32_t)(0x118f3f44)));
  /* 118e98d2 mov eax, dword ptr [0x118f3f54] */
  EAX = (r32((uint32_t)(0x118f3f54)));
  /* 118e98d7 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118e98da cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e98dc jge 0x118e98fc */
  if ((C.sf==C.of)) goto L_118e98fc;
  /* 118e98de cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e98e0 jl 0x118e97a5 */
  if ((C.sf!=C.of)) goto L_118e97a5;
  /* 118e98e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e98e8 jg 0x118e97a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e97a5;
  /* 118e98ee cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e98f0 jle 0x118e9910 */
  if ((C.zf||C.sf!=C.of)) goto L_118e9910;
  /* 118e98f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e98f4 jge 0x118e9910 */
  if ((C.sf==C.of)) goto L_118e9910;
L_118e98f6:;
  /* 118e98f6 mov eax, ebx */
  EAX = (EBX);
L_118e98f8:;
  /* 118e98f8 pop edi */
  EDI = (pop32());
  /* 118e98f9 pop esi */
  ESI = (pop32());
  /* 118e98fa pop ebx */
  EBX = (pop32());
  /* 118e98fb ret  */
  ESPCHK(0x118e9798u, _esp0);
  ESP += 4; return;
L_118e98fc:;
  /* 118e98fc cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e98fe jl 0x118e98f6 */
  if ((C.sf!=C.of)) goto L_118e98f6;
  /* 118e9900 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9902 jg 0x118e98f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e98f6;
  /* 118e9904 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9906 jle 0x118e9910 */
  if ((C.zf||C.sf!=C.of)) goto L_118e9910;
  /* 118e9908 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e990a jl 0x118e97a5 */
  if ((C.sf!=C.of)) goto L_118e97a5;
L_118e9910:;
  /* 118e9910 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118e9913 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9916 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9919 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e991c add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e991e imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9924 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9926 jne 0x118e9937 */
  if (!C.zf) goto L_118e9937;
  /* 118e9928 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e992a cmp eax, dword ptr [0x118f3f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118f3f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9930 setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_118e9933:;
  /* 118e9933 mov eax, ecx */
  EAX = (ECX);
  /* 118e9935 jmp 0x118e98f8 */
  goto L_118e98f8;
L_118e9937:;
  /* 118e9937 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e9939 cmp eax, dword ptr [0x118f3f58] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118f3f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e993f setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 118e9942 jmp 0x118e9933 */
  goto L_118e9933;
}

/* FUN_10009944 @ 0x118e9944 (320 bytes, 101 insns) */
void f_118e9944(void) {
  FTRACE(0x118e9944u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9944 push ebp */
  push32((uint32_t)(EBP));
  /* 118e9945 mov ebp, esp */
  EBP = (ESP);
  /* 118e9947 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e994b push ebx */
  push32((uint32_t)(EBX));
  /* 118e994c mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e994f push esi */
  push32((uint32_t)(ESI));
  /* 118e9950 jne 0x118e99df */
  if (!C.zf) goto L_118e99df;
  /* 118e9956 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e9959 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 118e995c and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 118e9960 mov esi, eax */
  ESI = (EAX);
  /* 118e9962 jne 0x118e996f */
  if (!C.zf) goto L_118e996f;
  /* 118e9964 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118e9967 mov eax, dword ptr [esi + 0x118f3f58] */
  EAX = (r32((uint32_t)(ESI + 0x118f3f58)));
  /* 118e996d jmp 0x118e9978 */
  goto L_118e9978;
L_118e996f:;
  /* 118e996f shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118e9972 mov eax, dword ptr [esi + 0x118f3f8c] */
  EAX = (r32((uint32_t)(ESI + 0x118f3f8c)));
L_118e9978:;
  /* 118e9978 mov edx, ebx */
  EDX = (EBX);
  /* 118e997a lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 118e997d imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9983 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 118e9986 push edi */
  push32((uint32_t)(EDI));
  /* 118e9987 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118e998a mov edi, ecx */
  EDI = (ECX);
  /* 118e998c push 7 */
  push32((uint32_t)(0x7u));
  /* 118e998e add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9990 lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 118e9997 pop edi */
  EDI = (pop32());
  /* 118e9998 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e9999 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e999b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118e999e pop edi */
  EDI = (pop32());
  /* 118e999f cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e99a2 jg 0x118e99b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e99b2;
  /* 118e99a4 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e99a7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e99a9 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e99ac lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 118e99b0 jmp 0x118e99bc */
  goto L_118e99bc;
L_118e99b2:;
  /* 118e99b2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e99b5 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e99b7 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e99ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_118e99bc:;
  /* 118e99bc cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e99c0 jne 0x118e99fa */
  if (!C.zf) goto L_118e99fa;
  /* 118e99c2 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e99c6 jne 0x118e99d0 */
  if (!C.zf) goto L_118e99d0;
  /* 118e99c8 mov esi, dword ptr [esi + 0x118f3f5c] */
  ESI = (r32((uint32_t)(ESI + 0x118f3f5c)));
  /* 118e99ce jmp 0x118e99d6 */
  goto L_118e99d6;
L_118e99d0:;
  /* 118e99d0 mov esi, dword ptr [esi + 0x118f3f90] */
  ESI = (r32((uint32_t)(ESI + 0x118f3f90)));
L_118e99d6:;
  /* 118e99d6 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e99d8 jle 0x118e99fa */
  if ((C.zf||C.sf!=C.of)) goto L_118e99fa;
  /* 118e99da sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e99dd jmp 0x118e99fa */
  goto L_118e99fa;
L_118e99df:;
  /* 118e99df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118e99e2 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 118e99e5 jne 0x118e99f0 */
  if (!C.zf) goto L_118e99f0;
  /* 118e99e7 mov ecx, dword ptr [eax*4 + 0x118f3f58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118f3f58)));
  /* 118e99ee jmp 0x118e99f7 */
  goto L_118e99f7;
L_118e99f0:;
  /* 118e99f0 mov ecx, dword ptr [eax*4 + 0x118f3f8c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118f3f8c)));
L_118e99f7:;
  /* 118e99f7 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_118e99fa:;
  /* 118e99fa cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e99fe jne 0x118e9a2b */
  if (!C.zf) goto L_118e9a2b;
  /* 118e9a00 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 118e9a03 mov dword ptr [0x118f3f44], ecx */
  w32((uint32_t)(0x118f3f44), (ECX));
  /* 118e9a09 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9a0c add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a0f mov dword ptr [0x118f3f40], ebx */
  w32((uint32_t)(0x118f3f40), (EBX));
  /* 118e9a15 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9a18 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a1b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9a21 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a24 mov dword ptr [0x118f3f48], eax */
  w32((uint32_t)(0x118f3f48), (EAX));
  /* 118e9a29 jmp 0x118e9a80 */
  goto L_118e9a80;
L_118e9a2b:;
  /* 118e9a2b mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 118e9a2e mov dword ptr [0x118f3f54], ecx */
  w32((uint32_t)(0x118f3f54), (ECX));
  /* 118e9a34 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9a37 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a3a imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9a3d add eax, dword ptr [0x118f3eb0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118f3eb0))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a43 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a46 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9a4c add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a4f mov dword ptr [0x118f3f58], eax */
  w32((uint32_t)(0x118f3f58), (EAX));
  /* 118e9a54 jns 0x118e9a63 */
  if (!C.sf) goto L_118e9a63;
  /* 118e9a56 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9a5b dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118e9a5c mov dword ptr [0x118f3f58], eax */
  w32((uint32_t)(0x118f3f58), (EAX));
  /* 118e9a61 jmp 0x118e9a74 */
  goto L_118e9a74;
L_118e9a63:;
  /* 118e9a63 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 118e9a68 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9a6a jl 0x118e9a7a */
  if ((C.sf!=C.of)) goto L_118e9a7a;
  /* 118e9a6c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9a6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9a6f mov dword ptr [0x118f3f58], eax */
  w32((uint32_t)(0x118f3f58), (EAX));
L_118e9a74:;
  /* 118e9a74 mov dword ptr [0x118f3f54], ecx */
  w32((uint32_t)(0x118f3f54), (ECX));
L_118e9a7a:;
  /* 118e9a7a mov dword ptr [0x118f3f50], ebx */
  w32((uint32_t)(0x118f3f50), (EBX));
L_118e9a80:;
  /* 118e9a80 pop esi */
  ESI = (pop32());
  /* 118e9a81 pop ebx */
  EBX = (pop32());
  /* 118e9a82 pop ebp */
  EBP = (pop32());
  /* 118e9a83 ret  */
  ESPCHK(0x118e9944u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a84 @ 0x118e9a84 (429 bytes, 143 insns) */
void f_118e9a84(void) {
  FTRACE(0x118e9a84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9a84 push ebp */
  push32((uint32_t)(EBP));
  /* 118e9a85 mov ebp, esp */
  EBP = (ESP);
  /* 118e9a87 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9a8a push ebx */
  push32((uint32_t)(EBX));
  /* 118e9a8b push esi */
  push32((uint32_t)(ESI));
  /* 118e9a8c push edi */
  push32((uint32_t)(EDI));
  /* 118e9a8d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118e9a8f call 0x118e7509 */
  push32(0x118e9a94u); f_118e7509();
  /* 118e9a94 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e9a97 call 0x118e9c31 */
  push32(0x118e9a9cu); f_118e9c31();
  /* 118e9a9c mov ebx, eax */
  EBX = (EAX);
  /* 118e9a9e pop ecx */
  ECX = (pop32());
  /* 118e9a9f cmp ebx, dword ptr [0x119097cc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x119097cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9aa5 pop ecx */
  ECX = (pop32());
  /* 118e9aa6 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118e9aa9 jne 0x118e9ab2 */
  if (!C.zf) goto L_118e9ab2;
L_118e9aab:;
  /* 118e9aab xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e9aad jmp 0x118e9c22 */
  goto L_118e9c22;
L_118e9ab2:;
  /* 118e9ab2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e9ab4 je 0x118e9c10 */
  if (C.zf) goto L_118e9c10;
  /* 118e9aba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118e9abc mov eax, 0x118f3fd0 */
  EAX = (0x118f3fd0u);
L_118e9ac1:;
  /* 118e9ac1 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9ac3 je 0x118e9b39 */
  if (C.zf) goto L_118e9b39;
  /* 118e9ac5 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9ac8 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118e9ac9 cmp eax, 0x118f40c0 */
  { uint32_t _a=(EAX),_b=(0x118f40c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9ace jl 0x118e9ac1 */
  if ((C.sf!=C.of)) goto L_118e9ac1;
  /* 118e9ad0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 118e9ad3 push eax */
  push32((uint32_t)(EAX));
  /* 118e9ad4 push ebx */
  push32((uint32_t)(EBX));
  /* 118e9ad5 call dword ptr [0x118ef054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef054))), 0x118e9adbu);
  /* 118e9adb push 1 */
  push32((uint32_t)(0x1u));
  /* 118e9add pop esi */
  ESI = (pop32());
  /* 118e9ade cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9ae0 jne 0x118e9c07 */
  if (!C.zf) goto L_118e9c07;
  /* 118e9ae6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118e9ae8 and dword ptr [0x119099e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119099e4)))&(0x0u); w32((uint32_t)(0x119099e4), (_r)); fl_logic(_r,32); }
  /* 118e9aef pop ecx */
  ECX = (pop32());
  /* 118e9af0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9af2 mov edi, 0x119098e0 */
  EDI = (0x119098e0u);
  /* 118e9af7 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9afa rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118e9afc stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118e9afd mov dword ptr [0x119097cc], ebx */
  w32((uint32_t)(0x119097cc), (EBX));
  /* 118e9b03 jbe 0x118e9bf4 */
  if ((C.cf||C.zf)) goto L_118e9bf4;
  /* 118e9b09 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9b0d je 0x118e9bcf */
  if (C.zf) goto L_118e9bcf;
  /* 118e9b13 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_118e9b16:;
  /* 118e9b16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118e9b18 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e9b1a je 0x118e9bcf */
  if (C.zf) goto L_118e9bcf;
  /* 118e9b20 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 118e9b24 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_118e9b27:;
  /* 118e9b27 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9b29 ja 0x118e9bc3 */
  if ((!C.cf&&!C.zf)) goto L_118e9bc3;
  /* 118e9b2f or byte ptr [eax + 0x119098e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(0x4u); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9b36 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9b37 jmp 0x118e9b27 */
  goto L_118e9b27;
L_118e9b39:;
  /* 118e9b39 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118e9b3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118e9b3f pop ecx */
  ECX = (pop32());
  /* 118e9b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9b42 mov edi, 0x119098e0 */
  EDI = (0x119098e0u);
  /* 118e9b47 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 118e9b4a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118e9b4c shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118e9b4f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118e9b50 lea ebx, [esi + 0x118f3fe0] */
  EBX = ((uint32_t)(ESI + 0x118f3fe0));
L_118e9b56:;
  /* 118e9b56 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9b59 mov ecx, ebx */
  ECX = (EBX);
  /* 118e9b5b je 0x118e9b89 */
  if (C.zf) goto L_118e9b89;
L_118e9b5d:;
  /* 118e9b5d mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118e9b60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118e9b62 je 0x118e9b89 */
  if (C.zf) goto L_118e9b89;
  /* 118e9b64 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 118e9b67 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 118e9b6a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9b6c ja 0x118e9b82 */
  if ((!C.cf&&!C.zf)) goto L_118e9b82;
  /* 118e9b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e9b71 mov dl, byte ptr [edx + 0x118f3fc8] */
  DL = (r8((uint32_t)(EDX + 0x118f3fc8)));
L_118e9b77:;
  /* 118e9b77 or byte ptr [eax + 0x119098e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(DL); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9b7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9b7e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9b80 jbe 0x118e9b77 */
  if ((C.cf||C.zf)) goto L_118e9b77;
L_118e9b82:;
  /* 118e9b82 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9b83 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9b84 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9b87 jne 0x118e9b5d */
  if (!C.zf) goto L_118e9b5d;
L_118e9b89:;
  /* 118e9b89 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118e9b8c add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9b8f cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9b93 jb 0x118e9b56 */
  if (C.cf) goto L_118e9b56;
  /* 118e9b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e9b98 mov dword ptr [0x119097dc], 1 */
  w32((uint32_t)(0x119097dc), (0x1u));
  /* 118e9ba2 push eax */
  push32((uint32_t)(EAX));
  /* 118e9ba3 mov dword ptr [0x119097cc], eax */
  w32((uint32_t)(0x119097cc), (EAX));
  /* 118e9ba8 call 0x118e9c7b */
  push32(0x118e9badu); f_118e9c7b();
  /* 118e9bad lea esi, [esi + 0x118f3fd4] */
  ESI = ((uint32_t)(ESI + 0x118f3fd4));
  /* 118e9bb3 mov edi, 0x119097d0 */
  EDI = (0x119097d0u);
  /* 118e9bb8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e9bb9 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e9bba pop ecx */
  ECX = (pop32());
  /* 118e9bbb mov dword ptr [0x119099e4], eax */
  w32((uint32_t)(0x119099e4), (EAX));
  /* 118e9bc0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e9bc1 jmp 0x118e9c15 */
  goto L_118e9c15;
L_118e9bc3:;
  /* 118e9bc3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9bc4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9bc5 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9bc9 jne 0x118e9b16 */
  if (!C.zf) goto L_118e9b16;
L_118e9bcf:;
  /* 118e9bcf mov eax, esi */
  EAX = (ESI);
L_118e9bd1:;
  /* 118e9bd1 or byte ptr [eax + 0x119098e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(0x8u); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9bd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9bd9 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9bde jb 0x118e9bd1 */
  if (C.cf) goto L_118e9bd1;
  /* 118e9be0 push ebx */
  push32((uint32_t)(EBX));
  /* 118e9be1 call 0x118e9c7b */
  push32(0x118e9be6u); f_118e9c7b();
  /* 118e9be6 pop ecx */
  ECX = (pop32());
  /* 118e9be7 mov dword ptr [0x119099e4], eax */
  w32((uint32_t)(0x119099e4), (EAX));
  /* 118e9bec mov dword ptr [0x119097dc], esi */
  w32((uint32_t)(0x119097dc), (ESI));
  /* 118e9bf2 jmp 0x118e9bfb */
  goto L_118e9bfb;
L_118e9bf4:;
  /* 118e9bf4 and dword ptr [0x119097dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119097dc)))&(0x0u); w32((uint32_t)(0x119097dc), (_r)); fl_logic(_r,32); }
L_118e9bfb:;
  /* 118e9bfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9bfd mov edi, 0x119097d0 */
  EDI = (0x119097d0u);
  /* 118e9c02 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e9c03 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e9c04 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e9c05 jmp 0x118e9c15 */
  goto L_118e9c15;
L_118e9c07:;
  /* 118e9c07 cmp dword ptr [0x119096a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119096a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9c0e je 0x118e9c1f */
  if (C.zf) goto L_118e9c1f;
L_118e9c10:;
  /* 118e9c10 call 0x118e9cae */
  push32(0x118e9c15u); f_118e9cae();
L_118e9c15:;
  /* 118e9c15 call 0x118e9cd7 */
  push32(0x118e9c1au); f_118e9cd7();
  /* 118e9c1a jmp 0x118e9aab */
  goto L_118e9aab;
L_118e9c1f:;
  /* 118e9c1f or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_118e9c22:;
  /* 118e9c22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118e9c24 call 0x118e756a */
  push32(0x118e9c29u); f_118e756a();
  /* 118e9c29 pop ecx */
  ECX = (pop32());
  /* 118e9c2a mov eax, esi */
  EAX = (ESI);
  /* 118e9c2c pop edi */
  EDI = (pop32());
  /* 118e9c2d pop esi */
  ESI = (pop32());
  /* 118e9c2e pop ebx */
  EBX = (pop32());
  /* 118e9c2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e9c30 ret  */
  ESPCHK(0x118e9a84u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c31 @ 0x118e9c31 (74 bytes, 15 insns) */
void f_118e9c31(void) {
  FTRACE(0x118e9c31u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9c31 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e9c35 and dword ptr [0x119096a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119096a4)))&(0x0u); w32((uint32_t)(0x119096a4), (_r)); fl_logic(_r,32); }
  /* 118e9c3c cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9c3f jne 0x118e9c51 */
  if (!C.zf) goto L_118e9c51;
  /* 118e9c41 mov dword ptr [0x119096a4], 1 */
  w32((uint32_t)(0x119096a4), (0x1u));
  /* 118e9c4b jmp dword ptr [0x118ef04c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118ef04c)))); return;
L_118e9c51:;
  /* 118e9c51 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9c54 jne 0x118e9c66 */
  if (!C.zf) goto L_118e9c66;
  /* 118e9c56 mov dword ptr [0x119096a4], 1 */
  w32((uint32_t)(0x119096a4), (0x1u));
  /* 118e9c60 jmp dword ptr [0x118ef050] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118ef050)))); return;
L_118e9c66:;
  /* 118e9c66 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9c69 jne 0x118e9c7a */
  if (!C.zf) goto L_118e9c7a;
  /* 118e9c6b mov eax, dword ptr [0x119096f0] */
  EAX = (r32((uint32_t)(0x119096f0)));
  /* 118e9c70 mov dword ptr [0x119096a4], 1 */
  w32((uint32_t)(0x119096a4), (0x1u));
L_118e9c7a:;
  /* 118e9c7a ret  */
  ESPCHK(0x118e9c31u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c7b @ 0x118e9c7b (51 bytes, 19 insns) */
void f_118e9c7b(void) {
  FTRACE(0x118e9c7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9c7b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e9c7f sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9c84 je 0x118e9ca8 */
  if (C.zf) goto L_118e9ca8;
  /* 118e9c86 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9c89 je 0x118e9ca2 */
  if (C.zf) goto L_118e9ca2;
  /* 118e9c8b sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9c8e je 0x118e9c9c */
  if (C.zf) goto L_118e9c9c;
  /* 118e9c90 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e9c91 je 0x118e9c96 */
  if (C.zf) goto L_118e9c96;
  /* 118e9c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9c95 ret  */
  ESPCHK(0x118e9c7bu, _esp0);
  ESP += 4; return;
L_118e9c96:;
  /* 118e9c96 mov eax, 0x404 */
  EAX = (0x404u);
  /* 118e9c9b ret  */
  ESPCHK(0x118e9c7bu, _esp0);
  ESP += 4; return;
L_118e9c9c:;
  /* 118e9c9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 118e9ca1 ret  */
  ESPCHK(0x118e9c7bu, _esp0);
  ESP += 4; return;
L_118e9ca2:;
  /* 118e9ca2 mov eax, 0x804 */
  EAX = (0x804u);
  /* 118e9ca7 ret  */
  ESPCHK(0x118e9c7bu, _esp0);
  ESP += 4; return;
L_118e9ca8:;
  /* 118e9ca8 mov eax, 0x411 */
  EAX = (0x411u);
  /* 118e9cad ret  */
  ESPCHK(0x118e9c7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009cae @ 0x118e9cae (41 bytes, 17 insns) */
void f_118e9cae(void) {
  FTRACE(0x118e9caeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9cae push edi */
  push32((uint32_t)(EDI));
  /* 118e9caf push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118e9cb1 pop ecx */
  ECX = (pop32());
  /* 118e9cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9cb4 mov edi, 0x119098e0 */
  EDI = (0x119098e0u);
  /* 118e9cb9 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118e9cbb stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118e9cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9cbe mov edi, 0x119097d0 */
  EDI = (0x119097d0u);
  /* 118e9cc3 mov dword ptr [0x119097cc], eax */
  w32((uint32_t)(0x119097cc), (EAX));
  /* 118e9cc8 mov dword ptr [0x119097dc], eax */
  w32((uint32_t)(0x119097dc), (EAX));
  /* 118e9ccd mov dword ptr [0x119099e4], eax */
  w32((uint32_t)(0x119099e4), (EAX));
  /* 118e9cd2 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e9cd3 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e9cd4 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118e9cd5 pop edi */
  EDI = (pop32());
  /* 118e9cd6 ret  */
  ESPCHK(0x118e9caeu, _esp0);
  ESP += 4; return;
}

/* FUN_10009cd7 @ 0x118e9cd7 (389 bytes, 124 insns) */
void f_118e9cd7(void) {
  FTRACE(0x118e9cd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9cd7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e9cd8 mov ebp, esp */
  EBP = (ESP);
  /* 118e9cda sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9ce0 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118e9ce3 push esi */
  push32((uint32_t)(ESI));
  /* 118e9ce4 push eax */
  push32((uint32_t)(EAX));
  /* 118e9ce5 push dword ptr [0x119097cc] */
  push32((uint32_t)(r32((uint32_t)(0x119097cc))));
  /* 118e9ceb call dword ptr [0x118ef054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef054))), 0x118e9cf1u);
  /* 118e9cf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9cf4 jne 0x118e9e10 */
  if (!C.zf) goto L_118e9e10;
  /* 118e9cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9cfc mov esi, 0x100 */
  ESI = (0x100u);
L_118e9d01:;
  /* 118e9d01 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 118e9d08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9d09 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9d0b jb 0x118e9d01 */
  if (C.cf) goto L_118e9d01;
  /* 118e9d0d mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 118e9d10 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 118e9d17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e9d19 je 0x118e9d52 */
  if (C.zf) goto L_118e9d52;
  /* 118e9d1b push ebx */
  push32((uint32_t)(EBX));
  /* 118e9d1c push edi */
  push32((uint32_t)(EDI));
  /* 118e9d1d lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_118e9d20:;
  /* 118e9d20 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 118e9d23 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 118e9d26 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9d28 ja 0x118e9d47 */
  if ((!C.cf&&!C.zf)) goto L_118e9d47;
  /* 118e9d2a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9d2c lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 118e9d33 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9d34 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 118e9d39 mov ebx, ecx */
  EBX = (ECX);
  /* 118e9d3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e9d3e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118e9d40 mov ecx, ebx */
  ECX = (EBX);
  /* 118e9d42 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118e9d45 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_118e9d47:;
  /* 118e9d47 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118e9d48 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118e9d49 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 118e9d4c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e9d4e jne 0x118e9d20 */
  if (!C.zf) goto L_118e9d20;
  /* 118e9d50 pop edi */
  EDI = (pop32());
  /* 118e9d51 pop ebx */
  EBX = (pop32());
L_118e9d52:;
  /* 118e9d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e9d54 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 118e9d5a push dword ptr [0x119099e4] */
  push32((uint32_t)(r32((uint32_t)(0x119099e4))));
  /* 118e9d60 push dword ptr [0x119097cc] */
  push32((uint32_t)(r32((uint32_t)(0x119097cc))));
  /* 118e9d66 push eax */
  push32((uint32_t)(EAX));
  /* 118e9d67 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118e9d6d push esi */
  push32((uint32_t)(ESI));
  /* 118e9d6e push eax */
  push32((uint32_t)(EAX));
  /* 118e9d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 118e9d71 call 0x118ea5ad */
  push32(0x118e9d76u); f_118ea5ad();
  /* 118e9d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e9d78 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 118e9d7e push dword ptr [0x119097cc] */
  push32((uint32_t)(r32((uint32_t)(0x119097cc))));
  /* 118e9d84 push esi */
  push32((uint32_t)(ESI));
  /* 118e9d85 push eax */
  push32((uint32_t)(EAX));
  /* 118e9d86 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118e9d8c push esi */
  push32((uint32_t)(ESI));
  /* 118e9d8d push eax */
  push32((uint32_t)(EAX));
  /* 118e9d8e push esi */
  push32((uint32_t)(ESI));
  /* 118e9d8f push dword ptr [0x119099e4] */
  push32((uint32_t)(r32((uint32_t)(0x119099e4))));
  /* 118e9d95 call 0x118ea6f6 */
  push32(0x118e9d9au); f_118ea6f6();
  /* 118e9d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 118e9d9c lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 118e9da2 push dword ptr [0x119097cc] */
  push32((uint32_t)(r32((uint32_t)(0x119097cc))));
  /* 118e9da8 push esi */
  push32((uint32_t)(ESI));
  /* 118e9da9 push eax */
  push32((uint32_t)(EAX));
  /* 118e9daa lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118e9db0 push esi */
  push32((uint32_t)(ESI));
  /* 118e9db1 push eax */
  push32((uint32_t)(EAX));
  /* 118e9db2 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 118e9db7 push dword ptr [0x119099e4] */
  push32((uint32_t)(r32((uint32_t)(0x119099e4))));
  /* 118e9dbd call 0x118ea6f6 */
  push32(0x118e9dc2u); f_118ea6f6();
  /* 118e9dc2 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9dc7 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_118e9dcd:;
  /* 118e9dcd mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 118e9dd0 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 118e9dd3 je 0x118e9deb */
  if (C.zf) goto L_118e9deb;
  /* 118e9dd5 or byte ptr [eax + 0x119098e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(0x10u); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9ddc mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_118e9de3:;
  /* 118e9de3 mov byte ptr [eax + 0x119097e0], dl */
  w8((uint32_t)(EAX + 0x119097e0), (DL));
  /* 118e9de9 jmp 0x118e9e07 */
  goto L_118e9e07;
L_118e9deb:;
  /* 118e9deb test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 118e9dee je 0x118e9e00 */
  if (C.zf) goto L_118e9e00;
  /* 118e9df0 or byte ptr [eax + 0x119098e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(0x20u); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9df7 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 118e9dfe jmp 0x118e9de3 */
  goto L_118e9de3;
L_118e9e00:;
  /* 118e9e00 and byte ptr [eax + 0x119097e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119097e0)))&(0x0u); w8((uint32_t)(EAX + 0x119097e0), (_r)); fl_logic(_r,8); }
L_118e9e07:;
  /* 118e9e07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9e08 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9e09 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e9e0a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e0c jb 0x118e9dcd */
  if (C.cf) goto L_118e9dcd;
  /* 118e9e0e jmp 0x118e9e59 */
  goto L_118e9e59;
L_118e9e10:;
  /* 118e9e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e9e12 mov esi, 0x100 */
  ESI = (0x100u);
L_118e9e17:;
  /* 118e9e17 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e1a jb 0x118e9e35 */
  if (C.cf) goto L_118e9e35;
  /* 118e9e1c cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e1f ja 0x118e9e35 */
  if ((!C.cf&&!C.zf)) goto L_118e9e35;
  /* 118e9e21 or byte ptr [eax + 0x119098e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(0x10u); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9e28 mov cl, al */
  CL = (AL);
  /* 118e9e2a add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_118e9e2d:;
  /* 118e9e2d mov byte ptr [eax + 0x119097e0], cl */
  w8((uint32_t)(EAX + 0x119097e0), (CL));
  /* 118e9e33 jmp 0x118e9e54 */
  goto L_118e9e54;
L_118e9e35:;
  /* 118e9e35 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e38 jb 0x118e9e4d */
  if (C.cf) goto L_118e9e4d;
  /* 118e9e3a cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e3d ja 0x118e9e4d */
  if ((!C.cf&&!C.zf)) goto L_118e9e4d;
  /* 118e9e3f or byte ptr [eax + 0x119098e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))|(0x20u); w8((uint32_t)(EAX + 0x119098e1), (_r)); fl_logic(_r,8); }
  /* 118e9e46 mov cl, al */
  CL = (AL);
  /* 118e9e48 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118e9e4b jmp 0x118e9e2d */
  goto L_118e9e2d;
L_118e9e4d:;
  /* 118e9e4d and byte ptr [eax + 0x119097e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119097e0)))&(0x0u); w8((uint32_t)(EAX + 0x119097e0), (_r)); fl_logic(_r,8); }
L_118e9e54:;
  /* 118e9e54 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e9e55 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e57 jb 0x118e9e17 */
  if (C.cf) goto L_118e9e17;
L_118e9e59:;
  /* 118e9e59 pop esi */
  ESI = (pop32());
  /* 118e9e5a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e9e5b ret  */
  ESPCHK(0x118e9cd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e5c @ 0x118e9e5c (28 bytes, 7 insns) */
void f_118e9e5c(void) {
  FTRACE(0x118e9e5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9e5c cmp dword ptr [0x1190ab48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1190ab48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9e63 jne 0x118e9e77 */
  if (!C.zf) goto L_118e9e77;
  /* 118e9e65 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 118e9e67 call 0x118e9a84 */
  push32(0x118e9e6cu); f_118e9a84();
  /* 118e9e6c pop ecx */
  ECX = (pop32());
  /* 118e9e6d mov dword ptr [0x1190ab48], 1 */
  w32((uint32_t)(0x1190ab48), (0x1u));
L_118e9e77:;
  /* 118e9e77 ret  */
  ESPCHK(0x118e9e5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009e78 @ 0x118e9e78 (23 bytes, 7 insns) */
void f_118e9e78(void) {
  FTRACE(0x118e9e78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e9e7a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118e9e7e push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118e9e82 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118e9e86 call 0x118e9e8f */
  push32(0x118e9e8bu); f_118e9e8f();
  /* 118e9e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9e8e ret  */
  ESPCHK(0x118e9e78u, _esp0);
  ESP += 4; return;
}

