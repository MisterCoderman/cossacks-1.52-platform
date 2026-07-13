#include "recomp.h"

/* FUN_100127f0 @ 0x127327f0 (393 bytes, 123 insns) */
void f_127327f0(void) {
  FTRACE(0x127327f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127327f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127327f1 mov ebp, esp */
  EBP = (ESP);
  /* 127327f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127327f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127327fa jne 0x12732806 */
  if (!C.zf) goto L_12732806;
  /* 127327fc mov eax, dword ptr [0x12750c98] */
  EAX = (r32((uint32_t)(0x12750c98)));
  /* 12732801 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12732804 jmp 0x1273280c */
  goto L_1273280c;
L_12732806:;
  /* 12732806 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732809 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1273280c:;
  /* 1273280c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1273280f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12732812 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732815 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12732818 push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 1273281d call dword ptr [0x12754374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754374))), 0x12732823u);
  /* 12732823 cmp dword ptr [0x127519f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273282a je 0x1273284a */
  if (C.zf) goto L_1273284a;
  /* 1273282c push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 12732831 call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x12732837u);
  /* 12732837 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12732839 call 0x12728eb0 */
  push32(0x1273283eu); f_12728eb0();
  /* 1273283e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732841 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12732848 jmp 0x12732851 */
  goto L_12732851;
L_1273284a:;
  /* 1273284a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12732851:;
  /* 12732851 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732855 jbe 0x12732942 */
  if ((C.cf||C.zf)) goto L_12732942;
  /* 1273285b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273285e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12732860 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12732863 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12732867 je 0x12732871 */
  if (C.zf) goto L_12732871;
  /* 12732869 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1273286d je 0x12732876 */
  if (C.zf) goto L_12732876;
  /* 1273286f jmp 0x127328d0 */
  goto L_127328d0;
L_12732871:;
  /* 12732871 jmp 0x12732942 */
  goto L_12732942;
L_12732876:;
  /* 12732876 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732879 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273287c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1273287f mov dword ptr [0x127519e0], 0 */
  w32((uint32_t)(0x127519e0), (0x0u));
  /* 12732889 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273288c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1273288f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732892 jne 0x127328a7 */
  if (!C.zf) goto L_127328a7;
  /* 12732894 mov dword ptr [0x127519e0], 1 */
  w32((uint32_t)(0x127519e0), (0x1u));
  /* 1273289e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127328a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127328a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127328a7:;
  /* 127328a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127328aa push ecx */
  push32((uint32_t)(ECX));
  /* 127328ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 127328ae push edx */
  push32((uint32_t)(EDX));
  /* 127328af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 127328b2 push eax */
  push32((uint32_t)(EAX));
  /* 127328b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127328b6 push ecx */
  push32((uint32_t)(ECX));
  /* 127328b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127328ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127328bc push eax */
  push32((uint32_t)(EAX));
  /* 127328bd call 0x12732980 */
  push32(0x127328c2u); f_12732980();
  /* 127328c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127328c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127328c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127328cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127328ce jmp 0x1273293d */
  goto L_1273293d;
L_127328d0:;
  /* 127328d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127328d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127328d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127328d7 mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 127328dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127328df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127328e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127328e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127328eb je 0x12732918 */
  if (C.zf) goto L_12732918;
  /* 127328ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127328f1 jbe 0x12732918 */
  if ((C.cf||C.zf)) goto L_12732918;
  /* 127328f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127328f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127328f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127328fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127328fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732900 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732903 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12732906 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732909 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273290c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1273290f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732912 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732915 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12732918:;
  /* 12732918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273291b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273291e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12732920 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12732922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732925 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732928 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1273292b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273292e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732931 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12732934 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732937 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273293a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1273293d:;
  /* 1273293d jmp 0x12732851 */
  goto L_12732851;
L_12732942:;
  /* 12732942 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732946 je 0x12732954 */
  if (C.zf) goto L_12732954;
  /* 12732948 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1273294a call 0x12728f50 */
  push32(0x1273294fu); f_12728f50();
  /* 1273294f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732952 jmp 0x1273295f */
  goto L_1273295f;
L_12732954:;
  /* 12732954 push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 12732959 call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x1273295fu);
L_1273295f:;
  /* 1273295f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732963 jbe 0x12732973 */
  if ((C.cf||C.zf)) goto L_12732973;
  /* 12732965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732968 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1273296b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1273296e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732971 jmp 0x12732975 */
  goto L_12732975;
L_12732973:;
  /* 12732973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12732975:;
  /* 12732975 mov esp, ebp */
  ESP = (EBP);
  /* 12732977 pop ebp */
  EBP = (pop32());
  /* 12732978 ret  */
  ESPCHK(0x127327f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x12732980 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12732980(void) {
  FTRACE(0x12732980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732980 push ebp */
  push32((uint32_t)(EBP));
  /* 12732981 mov ebp, esp */
  EBP = (ESP);
  /* 12732983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732986 push esi */
  push32((uint32_t)(ESI));
  /* 12732987 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1273298b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1273298e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12732991 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732994 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12732997 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273299b ja 0x12732ee8 */
  if ((!C.cf&&!C.zf)) goto L_12732ee8;
  /* 127329a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127329a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127329a6 mov dl, byte ptr [eax + 0x12732f49] */
  DL = (r8((uint32_t)(EAX + 0x12732f49)));
  /* 127329ac jmp dword ptr [edx*4 + 0x12732eed] */
  switch (EDX) {
    case 0: goto L_12732ec6;
    case 1: goto L_127329d5;
    case 2: goto L_12732a1b;
    case 3: goto L_12732b68;
    case 4: goto L_12732b90;
    case 5: goto L_12732c2f;
    case 6: goto L_12732c9b;
    case 7: goto L_12732cc4;
    case 8: goto L_12732d05;
    case 9: goto L_12732de7;
    case 10: goto L_12732e4e;
    case 11: goto L_12732e9b;
    case 12: goto L_127329b3;
    case 13: goto L_127329f8;
    case 14: goto L_12732a3e;
    case 15: goto L_12732b3e;
    case 16: goto L_12732bd5;
    case 17: goto L_12732c02;
    case 18: goto L_12732c57;
    case 19: goto L_12732cdb;
    case 20: goto L_12732d89;
    case 21: goto L_12732e18;
    case 22: goto L_12732ee8;
    default: x86_unimpl("switch@0x127329ac out of table"); return;
  }
L_127329b3:;
  /* 127329b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127329b6 push ecx */
  push32((uint32_t)(ECX));
  /* 127329b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127329ba push edx */
  push32((uint32_t)(EDX));
  /* 127329bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127329be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127329c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127329c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127329c7 push eax */
  push32((uint32_t)(EAX));
  /* 127329c8 call 0x12732fa0 */
  push32(0x127329cdu); f_12732fa0();
  /* 127329cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127329d0 jmp 0x12732ee8 */
  goto L_12732ee8;
L_127329d5:;
  /* 127329d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127329d8 push ecx */
  push32((uint32_t)(ECX));
  /* 127329d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127329dc push edx */
  push32((uint32_t)(EDX));
  /* 127329dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127329e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127329e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127329e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 127329ea push eax */
  push32((uint32_t)(EAX));
  /* 127329eb call 0x12732fa0 */
  push32(0x127329f0u); f_12732fa0();
  /* 127329f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127329f3 jmp 0x12732ee8 */
  goto L_12732ee8;
L_127329f8:;
  /* 127329f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127329fb push ecx */
  push32((uint32_t)(ECX));
  /* 127329fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127329ff push edx */
  push32((uint32_t)(EDX));
  /* 12732a00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732a03 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12732a06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732a09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12732a0d push eax */
  push32((uint32_t)(EAX));
  /* 12732a0e call 0x12732fa0 */
  push32(0x12732a13u); f_12732fa0();
  /* 12732a13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732a16 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732a1b:;
  /* 12732a1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732a1e push ecx */
  push32((uint32_t)(ECX));
  /* 12732a1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732a22 push edx */
  push32((uint32_t)(EDX));
  /* 12732a23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732a26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12732a29 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732a2c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12732a30 push eax */
  push32((uint32_t)(EAX));
  /* 12732a31 call 0x12732fa0 */
  push32(0x12732a36u); f_12732fa0();
  /* 12732a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732a39 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732a3e:;
  /* 12732a3e cmp dword ptr [0x127519e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732a45 je 0x12732ac6 */
  if (C.zf) goto L_12732ac6;
  /* 12732a47 mov dword ptr [0x127519e0], 0 */
  w32((uint32_t)(0x127519e0), (0x0u));
  /* 12732a51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732a54 push ecx */
  push32((uint32_t)(ECX));
  /* 12732a55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732a58 push edx */
  push32((uint32_t)(EDX));
  /* 12732a59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732a5c push eax */
  push32((uint32_t)(EAX));
  /* 12732a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12732a61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732a64 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12732a6a push eax */
  push32((uint32_t)(EAX));
  /* 12732a6b call 0x12733150 */
  push32(0x12732a70u); f_12733150();
  /* 12732a70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732a73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732a76 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732a79 jne 0x12732a80 */
  if (!C.zf) goto L_12732a80;
  /* 12732a7b jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732a80:;
  /* 12732a80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732a83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12732a85 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12732a88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732a8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732a8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732a90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732a93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12732a95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732a98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732a9a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732a9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732aa0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12732aa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12732aa6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732aa9 push edx */
  push32((uint32_t)(EDX));
  /* 12732aaa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732aad push eax */
  push32((uint32_t)(EAX));
  /* 12732aae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 12732ab2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732ab5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12732abb push eax */
  push32((uint32_t)(EAX));
  /* 12732abc call 0x12733150 */
  push32(0x12732ac1u); f_12733150();
  /* 12732ac1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732ac4 jmp 0x12732b39 */
  goto L_12732b39;
L_12732ac6:;
  /* 12732ac6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 12732aca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732acd push edx */
  push32((uint32_t)(EDX));
  /* 12732ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732ad1 push eax */
  push32((uint32_t)(EAX));
  /* 12732ad2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 12732ad6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732ad9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12732adf push eax */
  push32((uint32_t)(EAX));
  /* 12732ae0 call 0x12733150 */
  push32(0x12732ae5u); f_12733150();
  /* 12732ae5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732ae8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732aeb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732aee jne 0x12732af5 */
  if (!C.zf) goto L_12732af5;
  /* 12732af0 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732af5:;
  /* 12732af5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732af8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12732afa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12732afd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732b00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732b02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732b05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732b08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12732b0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732b0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732b0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732b12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732b15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12732b17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732b1a push ecx */
  push32((uint32_t)(ECX));
  /* 12732b1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732b1e push edx */
  push32((uint32_t)(EDX));
  /* 12732b1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732b22 push eax */
  push32((uint32_t)(EAX));
  /* 12732b23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732b26 push ecx */
  push32((uint32_t)(ECX));
  /* 12732b27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732b2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12732b30 push eax */
  push32((uint32_t)(EAX));
  /* 12732b31 call 0x12733150 */
  push32(0x12732b36u); f_12733150();
  /* 12732b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12732b39:;
  /* 12732b39 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732b3e:;
  /* 12732b3e mov ecx, dword ptr [0x127519e0] */
  ECX = (r32((uint32_t)(0x127519e0)));
  /* 12732b44 mov dword ptr [0x127519f0], ecx */
  w32((uint32_t)(0x127519f0), (ECX));
  /* 12732b4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732b4d push edx */
  push32((uint32_t)(EDX));
  /* 12732b4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732b51 push eax */
  push32((uint32_t)(EAX));
  /* 12732b52 push 2 */
  push32((uint32_t)(0x2u));
  /* 12732b54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732b57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12732b5a push edx */
  push32((uint32_t)(EDX));
  /* 12732b5b call 0x12732ff0 */
  push32(0x12732b60u); f_12732ff0();
  /* 12732b60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732b63 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732b68:;
  /* 12732b68 mov eax, dword ptr [0x127519e0] */
  EAX = (r32((uint32_t)(0x127519e0)));
  /* 12732b6d mov dword ptr [0x127519f0], eax */
  w32((uint32_t)(0x127519f0), (EAX));
  /* 12732b72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732b75 push ecx */
  push32((uint32_t)(ECX));
  /* 12732b76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732b79 push edx */
  push32((uint32_t)(EDX));
  /* 12732b7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12732b7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732b7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12732b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12732b83 call 0x12732ff0 */
  push32(0x12732b88u); f_12732ff0();
  /* 12732b88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732b8b jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732b90:;
  /* 12732b90 mov edx, dword ptr [0x127519e0] */
  EDX = (r32((uint32_t)(0x127519e0)));
  /* 12732b96 mov dword ptr [0x127519f0], edx */
  w32((uint32_t)(0x127519f0), (EDX));
  /* 12732b9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732b9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12732ba2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12732ba3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12732ba8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12732baa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12732bad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732bb1 jne 0x12732bba */
  if (!C.zf) goto L_12732bba;
  /* 12732bb3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12732bba:;
  /* 12732bba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732bbd push edx */
  push32((uint32_t)(EDX));
  /* 12732bbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732bc1 push eax */
  push32((uint32_t)(EAX));
  /* 12732bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12732bc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12732bc8 call 0x12732ff0 */
  push32(0x12732bcdu); f_12732ff0();
  /* 12732bcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732bd0 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732bd5:;
  /* 12732bd5 mov edx, dword ptr [0x127519e0] */
  EDX = (r32((uint32_t)(0x127519e0)));
  /* 12732bdb mov dword ptr [0x127519f0], edx */
  w32((uint32_t)(0x127519f0), (EDX));
  /* 12732be1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732be4 push eax */
  push32((uint32_t)(EAX));
  /* 12732be5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732be8 push ecx */
  push32((uint32_t)(ECX));
  /* 12732be9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12732beb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732bee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12732bf1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12732bf5 call 0x12732ff0 */
  push32(0x12732bfau); f_12732ff0();
  /* 12732bfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732bfd jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732c02:;
  /* 12732c02 mov ecx, dword ptr [0x127519e0] */
  ECX = (r32((uint32_t)(0x127519e0)));
  /* 12732c08 mov dword ptr [0x127519f0], ecx */
  w32((uint32_t)(0x127519f0), (ECX));
  /* 12732c0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732c11 push edx */
  push32((uint32_t)(EDX));
  /* 12732c12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732c15 push eax */
  push32((uint32_t)(EAX));
  /* 12732c16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12732c18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732c1b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12732c1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732c21 push edx */
  push32((uint32_t)(EDX));
  /* 12732c22 call 0x12732ff0 */
  push32(0x12732c27u); f_12732ff0();
  /* 12732c27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732c2a jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732c2f:;
  /* 12732c2f mov eax, dword ptr [0x127519e0] */
  EAX = (r32((uint32_t)(0x127519e0)));
  /* 12732c34 mov dword ptr [0x127519f0], eax */
  w32((uint32_t)(0x127519f0), (EAX));
  /* 12732c39 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12732c3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732c40 push edx */
  push32((uint32_t)(EDX));
  /* 12732c41 push 2 */
  push32((uint32_t)(0x2u));
  /* 12732c43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732c46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12732c49 push ecx */
  push32((uint32_t)(ECX));
  /* 12732c4a call 0x12732ff0 */
  push32(0x12732c4fu); f_12732ff0();
  /* 12732c4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732c52 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732c57:;
  /* 12732c57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732c5a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732c5e jg 0x12732c7c */
  if ((!C.zf&&C.sf==C.of)) goto L_12732c7c;
  /* 12732c60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732c63 push eax */
  push32((uint32_t)(EAX));
  /* 12732c64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732c67 push ecx */
  push32((uint32_t)(ECX));
  /* 12732c68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732c6b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12732c71 push eax */
  push32((uint32_t)(EAX));
  /* 12732c72 call 0x12732fa0 */
  push32(0x12732c77u); f_12732fa0();
  /* 12732c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732c7a jmp 0x12732c96 */
  goto L_12732c96;
L_12732c7c:;
  /* 12732c7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732c7f push ecx */
  push32((uint32_t)(ECX));
  /* 12732c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732c83 push edx */
  push32((uint32_t)(EDX));
  /* 12732c84 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732c87 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12732c8d push ecx */
  push32((uint32_t)(ECX));
  /* 12732c8e call 0x12732fa0 */
  push32(0x12732c93u); f_12732fa0();
  /* 12732c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12732c96:;
  /* 12732c96 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732c9b:;
  /* 12732c9b mov edx, dword ptr [0x127519e0] */
  EDX = (r32((uint32_t)(0x127519e0)));
  /* 12732ca1 mov dword ptr [0x127519f0], edx */
  w32((uint32_t)(0x127519f0), (EDX));
  /* 12732ca7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732caa push eax */
  push32((uint32_t)(EAX));
  /* 12732cab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732cae push ecx */
  push32((uint32_t)(ECX));
  /* 12732caf push 2 */
  push32((uint32_t)(0x2u));
  /* 12732cb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732cb4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12732cb6 push eax */
  push32((uint32_t)(EAX));
  /* 12732cb7 call 0x12732ff0 */
  push32(0x12732cbcu); f_12732ff0();
  /* 12732cbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732cbf jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732cc4:;
  /* 12732cc4 mov ecx, dword ptr [0x127519e0] */
  ECX = (r32((uint32_t)(0x127519e0)));
  /* 12732cca mov dword ptr [0x127519f0], ecx */
  w32((uint32_t)(0x127519f0), (ECX));
  /* 12732cd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732cd3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12732cd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12732cd9 jmp 0x12732d2d */
  goto L_12732d2d;
L_12732cdb:;
  /* 12732cdb mov ecx, dword ptr [0x127519e0] */
  ECX = (r32((uint32_t)(0x127519e0)));
  /* 12732ce1 mov dword ptr [0x127519f0], ecx */
  w32((uint32_t)(0x127519f0), (ECX));
  /* 12732ce7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732cea push edx */
  push32((uint32_t)(EDX));
  /* 12732ceb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732cee push eax */
  push32((uint32_t)(EAX));
  /* 12732cef push 1 */
  push32((uint32_t)(0x1u));
  /* 12732cf1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732cf4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12732cf7 push edx */
  push32((uint32_t)(EDX));
  /* 12732cf8 call 0x12732ff0 */
  push32(0x12732cfdu); f_12732ff0();
  /* 12732cfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732d00 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732d05:;
  /* 12732d05 mov eax, dword ptr [0x127519e0] */
  EAX = (r32((uint32_t)(0x127519e0)));
  /* 12732d0a mov dword ptr [0x127519f0], eax */
  w32((uint32_t)(0x127519f0), (EAX));
  /* 12732d0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732d12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732d16 jne 0x12732d21 */
  if (!C.zf) goto L_12732d21;
  /* 12732d18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12732d1f jmp 0x12732d2d */
  goto L_12732d2d;
L_12732d21:;
  /* 12732d21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732d24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12732d27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732d2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12732d2d:;
  /* 12732d2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732d30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12732d33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732d36 jge 0x12732d41 */
  if ((C.sf==C.of)) goto L_12732d41;
  /* 12732d38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12732d3f jmp 0x12732d6e */
  goto L_12732d6e;
L_12732d41:;
  /* 12732d41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732d44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12732d47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12732d48 mov ecx, 7 */
  ECX = (0x7u);
  /* 12732d4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12732d4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12732d52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732d55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12732d58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12732d59 mov ecx, 7 */
  ECX = (0x7u);
  /* 12732d5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12732d60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732d63 jl 0x12732d6e */
  if ((C.sf!=C.of)) goto L_12732d6e;
  /* 12732d65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732d68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732d6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12732d6e:;
  /* 12732d6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732d71 push eax */
  push32((uint32_t)(EAX));
  /* 12732d72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732d75 push ecx */
  push32((uint32_t)(ECX));
  /* 12732d76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12732d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732d7b push edx */
  push32((uint32_t)(EDX));
  /* 12732d7c call 0x12732ff0 */
  push32(0x12732d81u); f_12732ff0();
  /* 12732d81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732d84 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732d89:;
  /* 12732d89 cmp dword ptr [0x127519e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732d90 je 0x12732dc0 */
  if (C.zf) goto L_12732dc0;
  /* 12732d92 mov dword ptr [0x127519e0], 0 */
  w32((uint32_t)(0x127519e0), (0x0u));
  /* 12732d9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732d9f push eax */
  push32((uint32_t)(EAX));
  /* 12732da0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12732da4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732da7 push edx */
  push32((uint32_t)(EDX));
  /* 12732da8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732dab push eax */
  push32((uint32_t)(EAX));
  /* 12732dac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732daf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12732db5 push edx */
  push32((uint32_t)(EDX));
  /* 12732db6 call 0x12733150 */
  push32(0x12732dbbu); f_12733150();
  /* 12732dbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732dbe jmp 0x12732de2 */
  goto L_12732de2;
L_12732dc0:;
  /* 12732dc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732dc3 push eax */
  push32((uint32_t)(EAX));
  /* 12732dc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12732dc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732dcb push edx */
  push32((uint32_t)(EDX));
  /* 12732dcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732dcf push eax */
  push32((uint32_t)(EAX));
  /* 12732dd0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732dd3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12732dd9 push edx */
  push32((uint32_t)(EDX));
  /* 12732dda call 0x12733150 */
  push32(0x12732ddfu); f_12733150();
  /* 12732ddf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12732de2:;
  /* 12732de2 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732de7:;
  /* 12732de7 mov dword ptr [0x127519e0], 0 */
  w32((uint32_t)(0x127519e0), (0x0u));
  /* 12732df1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732df4 push eax */
  push32((uint32_t)(EAX));
  /* 12732df5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732df8 push ecx */
  push32((uint32_t)(ECX));
  /* 12732df9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732dfc push edx */
  push32((uint32_t)(EDX));
  /* 12732dfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732e00 push eax */
  push32((uint32_t)(EAX));
  /* 12732e01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12732e04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12732e0a push edx */
  push32((uint32_t)(EDX));
  /* 12732e0b call 0x12733150 */
  push32(0x12732e10u); f_12733150();
  /* 12732e10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732e13 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732e18:;
  /* 12732e18 mov eax, dword ptr [0x127519e0] */
  EAX = (r32((uint32_t)(0x127519e0)));
  /* 12732e1d mov dword ptr [0x127519f0], eax */
  w32((uint32_t)(0x127519f0), (EAX));
  /* 12732e22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732e25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12732e28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12732e29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12732e2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12732e30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12732e33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732e36 push edx */
  push32((uint32_t)(EDX));
  /* 12732e37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732e3a push eax */
  push32((uint32_t)(EAX));
  /* 12732e3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12732e3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732e40 push ecx */
  push32((uint32_t)(ECX));
  /* 12732e41 call 0x12732ff0 */
  push32(0x12732e46u); f_12732ff0();
  /* 12732e46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732e49 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732e4e:;
  /* 12732e4e mov edx, dword ptr [0x127519e0] */
  EDX = (r32((uint32_t)(0x127519e0)));
  /* 12732e54 mov dword ptr [0x127519f0], edx */
  w32((uint32_t)(0x127519f0), (EDX));
  /* 12732e5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732e5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12732e60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12732e61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12732e66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12732e68 mov ecx, eax */
  ECX = (EAX);
  /* 12732e6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732e6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12732e70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732e73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12732e76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12732e77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12732e7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12732e7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732e80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12732e83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732e86 push eax */
  push32((uint32_t)(EAX));
  /* 12732e87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732e8a push ecx */
  push32((uint32_t)(ECX));
  /* 12732e8b push 4 */
  push32((uint32_t)(0x4u));
  /* 12732e8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12732e90 push edx */
  push32((uint32_t)(EDX));
  /* 12732e91 call 0x12732ff0 */
  push32(0x12732e96u); f_12732ff0();
  /* 12732e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732e99 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732e9b:;
  /* 12732e9b call 0x12733fb0 */
  push32(0x12732ea0u); f_12733fb0();
  /* 12732ea0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732ea3 push eax */
  push32((uint32_t)(EAX));
  /* 12732ea4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 12732ea8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732eab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12732ead cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732eb1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12732eb4 mov ecx, dword ptr [eax*4 + 0x12750e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12750e1c)));
  /* 12732ebb push ecx */
  push32((uint32_t)(ECX));
  /* 12732ebc call 0x12732fa0 */
  push32(0x12732ec1u); f_12732fa0();
  /* 12732ec1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12732ec4 jmp 0x12732ee8 */
  goto L_12732ee8;
L_12732ec6:;
  /* 12732ec6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732ec9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12732ecb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12732ece mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732ed1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732ed3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732ed9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12732edb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732ede mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732ee0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732ee3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12732ee6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12732ee8:;
  /* 12732ee8 pop esi */
  ESI = (pop32());
  /* 12732ee9 mov esp, ebp */
  ESP = (EBP);
  /* 12732eeb pop ebp */
  EBP = (pop32());
  /* 12732eec ret  */
  ESPCHK(0x12732980u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12732fa0 (72 bytes, 30 insns) */
void f_12732fa0(void) {
  FTRACE(0x12732fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12732fa1 mov ebp, esp */
  EBP = (ESP);
L_12732fa3:;
  /* 12732fa3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732fa6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12732fa9 je 0x12732fe6 */
  if (C.zf) goto L_12732fe6;
  /* 12732fab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732fae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12732fb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12732fb3 je 0x12732fe6 */
  if (C.zf) goto L_12732fe6;
  /* 12732fb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732fb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12732fba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732fbd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12732fbf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12732fc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732fc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12732fc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12732fcc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12732fce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12732fd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12732fd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12732fd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732fda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12732fdc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12732fdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12732fe2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12732fe4 jmp 0x12732fa3 */
  goto L_12732fa3;
L_12732fe6:;
  /* 12732fe6 pop ebp */
  EBP = (pop32());
  /* 12732fe7 ret  */
  ESPCHK(0x12732fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ff0 @ 0x12732ff0 (173 bytes, 64 insns) */
void f_12732ff0(void) {
  FTRACE(0x12732ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12732ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12732ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12732ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12732ff4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12732ffb cmp dword ptr [0x127519f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733002 je 0x1273301a */
  if (C.zf) goto L_1273301a;
  /* 12733004 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733007 push eax */
  push32((uint32_t)(EAX));
  /* 12733008 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273300b push ecx */
  push32((uint32_t)(ECX));
  /* 1273300c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273300f push edx */
  push32((uint32_t)(EDX));
  /* 12733010 call 0x127330a0 */
  push32(0x12733015u); f_127330a0();
  /* 12733015 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733018 jmp 0x12733099 */
  goto L_12733099;
L_1273301a:;
  /* 1273301a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273301d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733020 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733022 jae 0x12733090 */
  if (!C.cf) goto L_12733090;
  /* 12733024 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733027 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273302a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1273302d jmp 0x12733038 */
  goto L_12733038;
L_1273302f:;
  /* 1273302f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733032 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733035 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12733038:;
  /* 12733038 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1273303b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273303e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12733040 je 0x12733074 */
  if (C.zf) goto L_12733074;
  /* 12733042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733045 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12733046 mov ecx, 0xa */
  ECX = (0xau);
  /* 1273304b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1273304d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733050 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733053 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12733055 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733058 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1273305b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273305e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1273305f mov ecx, 0xa */
  ECX = (0xau);
  /* 12733064 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12733066 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12733069 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273306c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273306f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12733072 jmp 0x1273302f */
  goto L_1273302f;
L_12733074:;
  /* 12733074 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733077 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12733079 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273307c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273307f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12733081 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733084 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12733086 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733089 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273308c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1273308e jmp 0x12733099 */
  goto L_12733099;
L_12733090:;
  /* 12733090 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733093 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12733099:;
  /* 12733099 mov esp, ebp */
  ESP = (EBP);
  /* 1273309b pop ebp */
  EBP = (pop32());
  /* 1273309c ret  */
  ESPCHK(0x12732ff0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x127330a0 (172 bytes, 65 insns) */
void f_127330a0(void) {
  FTRACE(0x127330a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127330a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127330a1 mov ebp, esp */
  EBP = (ESP);
  /* 127330a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127330a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127330a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127330ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127330ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127330b1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127330b4 jbe 0x127330fb */
  if ((C.cf||C.zf)) goto L_127330fb;
L_127330b6:;
  /* 127330b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127330b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127330ba mov ecx, 0xa */
  ECX = (0xau);
  /* 127330bf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127330c1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127330c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127330c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127330c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127330cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127330cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127330d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127330d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127330d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127330da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127330dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127330df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127330e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127330e3 mov ecx, 0xa */
  ECX = (0xau);
  /* 127330e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127330ea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127330ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127330f1 jle 0x127330fb */
  if ((C.zf||C.sf!=C.of)) goto L_127330fb;
  /* 127330f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127330f6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127330f9 ja 0x127330b6 */
  if ((!C.cf&&!C.zf)) goto L_127330b6;
L_127330fb:;
  /* 127330fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127330fe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12733100 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12733103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733109 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1273310b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273310e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733111 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12733114:;
  /* 12733114 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733117 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733119 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1273311c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273311f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733122 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733124 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12733126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733129 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273312c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1273312f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733132 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12733135 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12733137 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273313a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273313d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12733140 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733143 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733146 jb 0x12733114 */
  if (C.cf) goto L_12733114;
  /* 12733148 mov esp, ebp */
  ESP = (EBP);
  /* 1273314a pop ebp */
  EBP = (pop32());
  /* 1273314b ret  */
  ESPCHK(0x127330a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013150 @ 0x12733150 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12733150(void) {
  FTRACE(0x12733150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733150 push ebp */
  push32((uint32_t)(EBP));
  /* 12733151 mov ebp, esp */
  EBP = (ESP);
  /* 12733153 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12733156:;
  /* 12733156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733159 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1273315c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1273315e je 0x127335cc */
  if (C.zf) goto L_127335cc;
  /* 12733164 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733167 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273316a je 0x127335cc */
  if (C.zf) goto L_127335cc;
  /* 12733170 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12733174 mov dword ptr [0x127519f0], 0 */
  w32((uint32_t)(0x127519f0), (0x0u));
  /* 1273317e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12733185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733188 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1273318b jmp 0x12733196 */
  goto L_12733196;
L_1273318d:;
  /* 1273318d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733190 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733193 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12733196:;
  /* 12733196 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733199 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1273319c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273319f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127331a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127331a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127331a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127331ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127331ad jne 0x127331b1 */
  if (!C.zf) goto L_127331b1;
  /* 127331af jmp 0x1273318d */
  goto L_1273318d;
L_127331b1:;
  /* 127331b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127331b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127331b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127331ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127331bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127331c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127331c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127331c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127331c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127331cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127331d0 ja 0x12733520 */
  if ((!C.cf&&!C.zf)) goto L_12733520;
  /* 127331d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127331d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127331db mov al, byte ptr [ecx + 0x127335fc] */
  AL = (r8((uint32_t)(ECX + 0x127335fc)));
  /* 127331e1 jmp dword ptr [eax*4 + 0x127335d0] */
  switch (EAX) {
    case 0: goto L_1273343f;
    case 1: goto L_12733323;
    case 2: goto L_127332ae;
    case 3: goto L_127331e8;
    case 4: goto L_12733226;
    case 5: goto L_12733287;
    case 6: goto L_127332d5;
    case 7: goto L_127332fc;
    case 8: goto L_1273336a;
    case 9: goto L_12733264;
    case 10: goto L_12733520;
    default: x86_unimpl("switch@0x127331e1 out of table"); return;
  }
L_127331e8:;
  /* 127331e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127331eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127331ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127331f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127331f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127331f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127331fb ja 0x12733221 */
  if ((!C.cf&&!C.zf)) goto L_12733221;
  /* 127331fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12733200 jmp dword ptr [ecx*4 + 0x1273364f] */
  switch (ECX) {
    case 0: goto L_12733207;
    case 1: goto L_12733211;
    case 2: goto L_12733217;
    case 3: goto L_1273321d;
    case 4: goto L_12733245;
    case 5: goto L_1273324f;
    case 6: goto L_12733255;
    case 7: goto L_1273325b;
    default: x86_unimpl("switch@0x12733200 out of table"); return;
  }
L_12733207:;
  /* 12733207 mov dword ptr [0x127519f0], 1 */
  w32((uint32_t)(0x127519f0), (0x1u));
L_12733211:;
  /* 12733211 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12733215 jmp 0x12733221 */
  goto L_12733221;
L_12733217:;
  /* 12733217 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1273321b jmp 0x12733221 */
  goto L_12733221;
L_1273321d:;
  /* 1273321d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12733221:;
  /* 12733221 jmp 0x12733520 */
  goto L_12733520;
L_12733226:;
  /* 12733226 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733229 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1273322c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1273322f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733232 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12733235 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733239 ja 0x1273325f */
  if ((!C.cf&&!C.zf)) goto L_1273325f;
  /* 1273323b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1273323e jmp dword ptr [ecx*4 + 0x1273365f] */
  switch (ECX) {
    case 0: goto L_12733245;
    case 1: goto L_1273324f;
    case 2: goto L_12733255;
    case 3: goto L_1273325b;
    default: x86_unimpl("switch@0x1273323e out of table"); return;
  }
L_12733245:;
  /* 12733245 mov dword ptr [0x127519f0], 1 */
  w32((uint32_t)(0x127519f0), (0x1u));
L_1273324f:;
  /* 1273324f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12733253 jmp 0x1273325f */
  goto L_1273325f;
L_12733255:;
  /* 12733255 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12733259 jmp 0x1273325f */
  goto L_1273325f;
L_1273325b:;
  /* 1273325b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1273325f:;
  /* 1273325f jmp 0x12733520 */
  goto L_12733520;
L_12733264:;
  /* 12733264 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733267 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1273326a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273326e je 0x12733278 */
  if (C.zf) goto L_12733278;
  /* 12733270 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733274 je 0x1273327e */
  if (C.zf) goto L_1273327e;
  /* 12733276 jmp 0x12733282 */
  goto L_12733282;
L_12733278:;
  /* 12733278 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1273327c jmp 0x12733282 */
  goto L_12733282;
L_1273327e:;
  /* 1273327e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12733282:;
  /* 12733282 jmp 0x12733520 */
  goto L_12733520;
L_12733287:;
  /* 12733287 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273328a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1273328d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733291 je 0x1273329b */
  if (C.zf) goto L_1273329b;
  /* 12733293 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733297 je 0x127332a5 */
  if (C.zf) goto L_127332a5;
  /* 12733299 jmp 0x127332a9 */
  goto L_127332a9;
L_1273329b:;
  /* 1273329b mov dword ptr [0x127519f0], 1 */
  w32((uint32_t)(0x127519f0), (0x1u));
L_127332a5:;
  /* 127332a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_127332a9:;
  /* 127332a9 jmp 0x12733520 */
  goto L_12733520;
L_127332ae:;
  /* 127332ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127332b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127332b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127332b8 je 0x127332c2 */
  if (C.zf) goto L_127332c2;
  /* 127332ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127332be je 0x127332cc */
  if (C.zf) goto L_127332cc;
  /* 127332c0 jmp 0x127332d0 */
  goto L_127332d0;
L_127332c2:;
  /* 127332c2 mov dword ptr [0x127519f0], 1 */
  w32((uint32_t)(0x127519f0), (0x1u));
L_127332cc:;
  /* 127332cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_127332d0:;
  /* 127332d0 jmp 0x12733520 */
  goto L_12733520;
L_127332d5:;
  /* 127332d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127332d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 127332db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127332df je 0x127332e9 */
  if (C.zf) goto L_127332e9;
  /* 127332e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127332e5 je 0x127332f3 */
  if (C.zf) goto L_127332f3;
  /* 127332e7 jmp 0x127332f7 */
  goto L_127332f7;
L_127332e9:;
  /* 127332e9 mov dword ptr [0x127519f0], 1 */
  w32((uint32_t)(0x127519f0), (0x1u));
L_127332f3:;
  /* 127332f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_127332f7:;
  /* 127332f7 jmp 0x12733520 */
  goto L_12733520;
L_127332fc:;
  /* 127332fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127332ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12733302 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733306 je 0x12733310 */
  if (C.zf) goto L_12733310;
  /* 12733308 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273330c je 0x1273331a */
  if (C.zf) goto L_1273331a;
  /* 1273330e jmp 0x1273331e */
  goto L_1273331e;
L_12733310:;
  /* 12733310 mov dword ptr [0x127519f0], 1 */
  w32((uint32_t)(0x127519f0), (0x1u));
L_1273331a:;
  /* 1273331a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1273331e:;
  /* 1273331e jmp 0x12733520 */
  goto L_12733520;
L_12733323:;
  /* 12733323 push 0x1274dc2c */
  push32((uint32_t)(0x1274dc2cu));
  /* 12733328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273332b push ecx */
  push32((uint32_t)(ECX));
  /* 1273332c call 0x12733b80 */
  push32(0x12733331u); f_12733b80();
  /* 12733331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12733336 jne 0x12733343 */
  if (!C.zf) goto L_12733343;
  /* 12733338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273333b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273333e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12733341 jmp 0x12733361 */
  goto L_12733361;
L_12733343:;
  /* 12733343 push 0x1274dc28 */
  push32((uint32_t)(0x1274dc28u));
  /* 12733348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273334b push eax */
  push32((uint32_t)(EAX));
  /* 1273334c call 0x12733b80 */
  push32(0x12733351u); f_12733b80();
  /* 12733351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12733356 jne 0x12733361 */
  if (!C.zf) goto L_12733361;
  /* 12733358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273335b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273335e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12733361:;
  /* 12733361 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12733365 jmp 0x12733520 */
  goto L_12733520;
L_1273336a:;
  /* 1273336a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1273336d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733371 jg 0x12733381 */
  if ((!C.zf&&C.sf==C.of)) goto L_12733381;
  /* 12733373 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12733376 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1273337c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1273337f jmp 0x1273338d */
  goto L_1273338d;
L_12733381:;
  /* 12733381 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12733384 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1273338a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1273338d:;
  /* 1273338d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733391 jle 0x12733434 */
  if ((C.zf||C.sf!=C.of)) goto L_12733434;
  /* 12733397 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273339a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273339d jbe 0x12733434 */
  if ((C.cf||C.zf)) goto L_12733434;
  /* 127333a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127333a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127333a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127333aa mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 127333b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127333b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127333b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127333bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127333be je 0x127333f7 */
  if (C.zf) goto L_127333f7;
  /* 127333c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127333c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127333c6 jbe 0x127333f7 */
  if ((C.cf||C.zf)) goto L_127333f7;
  /* 127333c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127333cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127333cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127333d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127333d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127333d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127333d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127333d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127333dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127333df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127333e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127333e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127333e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127333ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127333ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127333ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127333f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127333f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127333f7:;
  /* 127333f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127333fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127333fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127333ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733401 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12733403 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733406 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12733408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273340b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273340e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12733410 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12733413 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733416 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12733419 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273341c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1273341e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733421 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733424 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12733426 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733429 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273342c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1273342f jmp 0x1273338d */
  goto L_1273338d;
L_12733434:;
  /* 12733434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733437 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1273343a jmp 0x12733156 */
  goto L_12733156;
L_1273343f:;
  /* 1273343f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733442 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12733445 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12733447 je 0x12733512 */
  if (C.zf) goto L_12733512;
  /* 1273344d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733450 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733453 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12733456:;
  /* 12733456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733459 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1273345c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1273345e je 0x12733510 */
  if (C.zf) goto L_12733510;
  /* 12733464 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733467 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273346a je 0x12733510 */
  if (C.zf) goto L_12733510;
  /* 12733470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733473 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12733476 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733479 jne 0x12733489 */
  if (!C.zf) goto L_12733489;
  /* 1273347b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273347e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733481 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12733484 jmp 0x12733510 */
  goto L_12733510;
L_12733489:;
  /* 12733489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273348c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1273348e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12733490 mov edx, dword ptr [0x1274fc98] */
  EDX = (r32((uint32_t)(0x1274fc98)));
  /* 12733496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733498 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1273349c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127334a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127334a3 je 0x127334dc */
  if (C.zf) goto L_127334dc;
  /* 127334a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127334a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127334ab jbe 0x127334dc */
  if ((C.cf||C.zf)) goto L_127334dc;
  /* 127334ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127334b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127334b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127334b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127334b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127334b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127334bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127334be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127334c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127334c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127334c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127334c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127334cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127334cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127334d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127334d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127334d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127334da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127334dc:;
  /* 127334dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127334df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127334e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127334e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127334e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127334e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127334eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127334ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127334f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127334f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127334f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127334f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127334fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127334fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733501 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12733503 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733506 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733509 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1273350b jmp 0x12733456 */
  goto L_12733456;
L_12733510:;
  /* 12733510 jmp 0x1273351b */
  goto L_1273351b;
L_12733512:;
  /* 12733512 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733515 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733518 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1273351b:;
  /* 1273351b jmp 0x12733156 */
  goto L_12733156;
L_12733520:;
  /* 12733520 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12733524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12733526 je 0x1273354c */
  if (C.zf) goto L_1273354c;
  /* 12733528 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1273352b push edx */
  push32((uint32_t)(EDX));
  /* 1273352c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273352f push eax */
  push32((uint32_t)(EAX));
  /* 12733530 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733533 push ecx */
  push32((uint32_t)(ECX));
  /* 12733534 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733537 push edx */
  push32((uint32_t)(EDX));
  /* 12733538 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1273353b push eax */
  push32((uint32_t)(EAX));
  /* 1273353c call 0x12732980 */
  push32(0x12733541u); f_12732980();
  /* 12733541 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733547 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1273354a jmp 0x127335c7 */
  goto L_127335c7;
L_1273354c:;
  /* 1273354c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273354f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733551 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733553 mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 12733559 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1273355b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1273355f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12733565 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12733567 je 0x12733598 */
  if (C.zf) goto L_12733598;
  /* 12733569 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273356c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1273356e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733571 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733573 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12733575 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733578 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1273357a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273357d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733580 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12733582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733585 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733588 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1273358b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273358e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12733590 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733593 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733596 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12733598:;
  /* 12733598 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273359b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1273359d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127335a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127335a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127335a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127335a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127335a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127335ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127335af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127335b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127335b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127335b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127335ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127335bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127335bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127335c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127335c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127335c7:;
  /* 127335c7 jmp 0x12733156 */
  goto L_12733156;
L_127335cc:;
  /* 127335cc mov esp, ebp */
  ESP = (EBP);
  /* 127335ce pop ebp */
  EBP = (pop32());
  /* 127335cf ret  */
  ESPCHK(0x12733150u, _esp0);
  ESP += 4; return;
}

/* FUN_10013670 @ 0x12733670 (650 bytes, 178 insns) */
void f_12733670(void) {
  FTRACE(0x12733670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733670 push ebp */
  push32((uint32_t)(EBP));
  /* 12733671 mov ebp, esp */
  EBP = (ESP);
  /* 12733673 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733679 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273367d jne 0x127337d9 */
  if (!C.zf) goto L_127337d9;
  /* 12733683 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733686 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1273368c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12733692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12733695 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1273369c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 127336a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127336a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 127336ae push edx */
  push32((uint32_t)(EDX));
  /* 127336af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127336b2 push eax */
  push32((uint32_t)(EAX));
  /* 127336b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127336b6 push ecx */
  push32((uint32_t)(ECX));
  /* 127336b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127336ba push edx */
  push32((uint32_t)(EDX));
  /* 127336bb call 0x12734a90 */
  push32(0x127336c0u); f_12734a90();
  /* 127336c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127336c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127336c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127336ca jne 0x1273375f */
  if (!C.zf) goto L_1273375f;
  /* 127336d0 call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x127336d6u);
  /* 127336d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127336d9 je 0x127336e0 */
  if (C.zf) goto L_127336e0;
  /* 127336db jmp 0x127337bd */
  goto L_127337bd;
L_127336e0:;
  /* 127336e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127336e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127336e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127336e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127336e9 push eax */
  push32((uint32_t)(EAX));
  /* 127336ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127336ed push ecx */
  push32((uint32_t)(ECX));
  /* 127336ee call 0x12734a90 */
  push32(0x127336f3u); f_12734a90();
  /* 127336f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127336f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 127336fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733703 jne 0x1273370a */
  if (!C.zf) goto L_1273370a;
  /* 12733705 jmp 0x127337bd */
  goto L_127337bd;
L_1273370a:;
  /* 1273370a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1273370c push 0x1274dc34 */
  push32((uint32_t)(0x1274dc34u));
  /* 12733711 push 2 */
  push32((uint32_t)(0x2u));
  /* 12733713 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12733719 push edx */
  push32((uint32_t)(EDX));
  /* 1273371a call 0x127254b0 */
  push32(0x1273371fu); f_127254b0();
  /* 1273371f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733722 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12733725 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733729 jne 0x12733730 */
  if (!C.zf) goto L_12733730;
  /* 1273372b jmp 0x127337bd */
  goto L_127337bd;
L_12733730:;
  /* 12733730 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12733737 push 0 */
  push32((uint32_t)(0x0u));
  /* 12733739 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1273373f push eax */
  push32((uint32_t)(EAX));
  /* 12733740 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733743 push ecx */
  push32((uint32_t)(ECX));
  /* 12733744 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733747 push edx */
  push32((uint32_t)(EDX));
  /* 12733748 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1273374b push eax */
  push32((uint32_t)(EAX));
  /* 1273374c call 0x12734a90 */
  push32(0x12733751u); f_12734a90();
  /* 12733751 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733754 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12733757 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273375b jne 0x1273375f */
  if (!C.zf) goto L_1273375f;
  /* 1273375d jmp 0x127337bd */
  goto L_127337bd;
L_1273375f:;
  /* 1273375f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12733761 push 0x1274dc34 */
  push32((uint32_t)(0x1274dc34u));
  /* 12733766 push 2 */
  push32((uint32_t)(0x2u));
  /* 12733768 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273376b push ecx */
  push32((uint32_t)(ECX));
  /* 1273376c call 0x127254b0 */
  push32(0x12733771u); f_127254b0();
  /* 12733771 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733774 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1273377a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1273377c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12733782 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733785 jne 0x12733789 */
  if (!C.zf) goto L_12733789;
  /* 12733787 jmp 0x127337bd */
  goto L_127337bd;
L_12733789:;
  /* 12733789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273378c push ecx */
  push32((uint32_t)(ECX));
  /* 1273378d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733790 push edx */
  push32((uint32_t)(EDX));
  /* 12733791 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12733797 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12733799 push ecx */
  push32((uint32_t)(ECX));
  /* 1273379a call 0x12728cd0 */
  push32(0x1273379fu); f_12728cd0();
  /* 1273379f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127337a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127337a6 je 0x127337b6 */
  if (C.zf) goto L_127337b6;
  /* 127337a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127337aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127337ad push edx */
  push32((uint32_t)(EDX));
  /* 127337ae call 0x12725f40 */
  push32(0x127337b3u); f_12725f40();
  /* 127337b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127337b6:;
  /* 127337b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127337b8 jmp 0x127338f6 */
  goto L_127338f6;
L_127337bd:;
  /* 127337bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127337c1 je 0x127337d1 */
  if (C.zf) goto L_127337d1;
  /* 127337c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127337c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127337c8 push eax */
  push32((uint32_t)(EAX));
  /* 127337c9 call 0x12725f40 */
  push32(0x127337ceu); f_12725f40();
  /* 127337ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127337d1:;
  /* 127337d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127337d4 jmp 0x127338f6 */
  goto L_127338f6;
L_127337d9:;
  /* 127337d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127337dd jne 0x127338f3 */
  if (!C.zf) goto L_127338f3;
  /* 127337e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 127337ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127337f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 127337f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127337f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127337fe push edx */
  push32((uint32_t)(EDX));
  /* 127337ff push 0x12751908 */
  push32((uint32_t)(0x12751908u));
  /* 12733804 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733807 push eax */
  push32((uint32_t)(EAX));
  /* 12733808 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1273380b push ecx */
  push32((uint32_t)(ECX));
  /* 1273380c call 0x127348f0 */
  push32(0x12733811u); f_127348f0();
  /* 12733811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12733816 jne 0x12733820 */
  if (!C.zf) goto L_12733820;
  /* 12733818 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1273381b jmp 0x127338f6 */
  goto L_127338f6;
L_12733820:;
  /* 12733820 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12733826 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12733829 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12733833 jmp 0x12733844 */
  goto L_12733844;
L_12733835:;
  /* 12733835 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1273383b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273383e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12733844:;
  /* 12733844 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273384b jge 0x127338ef */
  if ((C.sf==C.of)) goto L_127338ef;
  /* 12733851 cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733858 jle 0x1273388b */
  if ((C.zf||C.sf!=C.of)) goto L_1273388b;
  /* 1273385a push 4 */
  push32((uint32_t)(0x4u));
  /* 1273385c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12733862 mov dl, byte ptr [ecx*2 + 0x12751908] */
  DL = (r8((uint32_t)(ECX*2 + 0x12751908)));
  /* 12733869 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1273386f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12733875 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1273387a push eax */
  push32((uint32_t)(EAX));
  /* 1273387b call 0x1272b4c0 */
  push32(0x12733880u); f_1272b4c0();
  /* 12733880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733883 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12733889 jmp 0x127338be */
  goto L_127338be;
L_1273388b:;
  /* 1273388b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12733891 mov dl, byte ptr [ecx*2 + 0x12751908] */
  DL = (r8((uint32_t)(ECX*2 + 0x12751908)));
  /* 12733898 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1273389e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127338a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127338a9 mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 127338af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127338b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127338b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127338b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_127338be:;
  /* 127338be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127338c5 je 0x127338e8 */
  if (C.zf) goto L_127338e8;
  /* 127338c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127338cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127338d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127338d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 127338da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127338de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127338e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127338e6 jmp 0x127338ea */
  goto L_127338ea;
L_127338e8:;
  /* 127338e8 jmp 0x127338ef */
  goto L_127338ef;
L_127338ea:;
  /* 127338ea jmp 0x12733835 */
  goto L_12733835;
L_127338ef:;
  /* 127338ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127338f1 jmp 0x127338f6 */
  goto L_127338f6;
L_127338f3:;
  /* 127338f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127338f6:;
  /* 127338f6 mov esp, ebp */
  ESP = (EBP);
  /* 127338f8 pop ebp */
  EBP = (pop32());
  /* 127338f9 ret  */
  ESPCHK(0x12733670u, _esp0);
  ESP += 4; return;
}

/* FUN_10013900 @ 0x12733900 (10 bytes, 5 insns) */
void f_12733900(void) {
  FTRACE(0x12733900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733900 push ebp */
  push32((uint32_t)(EBP));
  /* 12733901 mov ebp, esp */
  EBP = (ESP);
  /* 12733903 mov eax, dword ptr [0x12750d88] */
  EAX = (r32((uint32_t)(0x12750d88)));
  /* 12733908 pop ebp */
  EBP = (pop32());
  /* 12733909 ret  */
  ESPCHK(0x12733900u, _esp0);
  ESP += 4; return;
}

/* FUN_10013910 @ 0x12733910 (575 bytes, 196 insns) */
void f_12733910(void) {
  FTRACE(0x12733910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733910 push ebp */
  push32((uint32_t)(EBP));
  /* 12733911 mov ebp, esp */
  EBP = (ESP);
  /* 12733913 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12733915 push 0x1274dc40 */
  push32((uint32_t)(0x1274dc40u));
  /* 1273391a push 0x1272e5b8 */
  push32((uint32_t)(0x1272e5b8u));
  /* 1273391f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12733925 push eax */
  push32((uint32_t)(EAX));
  /* 12733926 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1273392d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733930 push ebx */
  push32((uint32_t)(EBX));
  /* 12733931 push esi */
  push32((uint32_t)(ESI));
  /* 12733932 push edi */
  push32((uint32_t)(EDI));
  /* 12733933 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12733936 cmp dword ptr [0x12751914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273393d jne 0x1273398e */
  if (!C.zf) goto L_1273398e;
  /* 1273393f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12733942 push eax */
  push32((uint32_t)(EAX));
  /* 12733943 push 1 */
  push32((uint32_t)(0x1u));
  /* 12733945 push 0x1274d370 */
  push32((uint32_t)(0x1274d370u));
  /* 1273394a push 1 */
  push32((uint32_t)(0x1u));
  /* 1273394c call dword ptr [0x127542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542fc))), 0x12733952u);
  /* 12733952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12733954 je 0x12733962 */
  if (C.zf) goto L_12733962;
  /* 12733956 mov dword ptr [0x12751914], 1 */
  w32((uint32_t)(0x12751914), (0x1u));
  /* 12733960 jmp 0x1273398e */
  goto L_1273398e;
L_12733962:;
  /* 12733962 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12733965 push ecx */
  push32((uint32_t)(ECX));
  /* 12733966 push 1 */
  push32((uint32_t)(0x1u));
  /* 12733968 push 0x1274d36c */
  push32((uint32_t)(0x1274d36cu));
  /* 1273396d push 1 */
  push32((uint32_t)(0x1u));
  /* 1273396f push 0 */
  push32((uint32_t)(0x0u));
  /* 12733971 call dword ptr [0x12754300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754300))), 0x12733977u);
  /* 12733977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12733979 je 0x12733987 */
  if (C.zf) goto L_12733987;
  /* 1273397b mov dword ptr [0x12751914], 2 */
  w32((uint32_t)(0x12751914), (0x2u));
  /* 12733985 jmp 0x1273398e */
  goto L_1273398e;
L_12733987:;
  /* 12733987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733989 jmp 0x12733b69 */
  goto L_12733b69;
L_1273398e:;
  /* 1273398e cmp dword ptr [0x12751914], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751914))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733995 jne 0x127339b2 */
  if (!C.zf) goto L_127339b2;
  /* 12733997 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273399a push edx */
  push32((uint32_t)(EDX));
  /* 1273399b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273399e push eax */
  push32((uint32_t)(EAX));
  /* 1273399f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127339a2 push ecx */
  push32((uint32_t)(ECX));
  /* 127339a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127339a6 push edx */
  push32((uint32_t)(EDX));
  /* 127339a7 call dword ptr [0x127542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542fc))), 0x127339adu);
  /* 127339ad jmp 0x12733b69 */
  goto L_12733b69;
L_127339b2:;
  /* 127339b2 cmp dword ptr [0x12751914], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12751914))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127339b9 jne 0x12733b67 */
  if (!C.zf) goto L_12733b67;
  /* 127339bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127339c3 jne 0x127339cd */
  if (!C.zf) goto L_127339cd;
  /* 127339c5 mov eax, dword ptr [0x12751888] */
  EAX = (r32((uint32_t)(0x12751888)));
  /* 127339ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_127339cd:;
  /* 127339cd push 0 */
  push32((uint32_t)(0x0u));
  /* 127339cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127339d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127339d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127339d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127339d8 push ecx */
  push32((uint32_t)(ECX));
  /* 127339d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127339dc push edx */
  push32((uint32_t)(EDX));
  /* 127339dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127339e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127339e5 push eax */
  push32((uint32_t)(EAX));
  /* 127339e6 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x127339ecu);
  /* 127339ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127339ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127339f3 jne 0x127339fc */
  if (!C.zf) goto L_127339fc;
  /* 127339f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127339f7 jmp 0x12733b69 */
  goto L_12733b69;
L_127339fc:;
  /* 127339fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12733a03 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12733a06 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733a09 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12733a0b call 0x12728650 */
  push32(0x12733a10u); f_12728650();
  /* 12733a10 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12733a13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12733a16 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12733a19 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12733a1c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12733a1f push edx */
  push32((uint32_t)(EDX));
  /* 12733a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12733a22 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12733a25 push eax */
  push32((uint32_t)(EAX));
  /* 12733a26 call 0x12729220 */
  push32(0x12733a2bu); f_12729220();
  /* 12733a2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733a2e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12733a35 jmp 0x12733a4e */
  goto L_12733a4e;
  /* 12733a37 mov eax, 1 */
  EAX = (0x1u);
  /* 12733a3c ret  */
  ESPCHK(0x12733910u, _esp0);
  ESP += 4; return;
  /* 12733a3d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12733a40 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12733a47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12733a4e:;
  /* 12733a4e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733a52 jne 0x12733a5b */
  if (!C.zf) goto L_12733a5b;
  /* 12733a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733a56 jmp 0x12733b69 */
  goto L_12733b69;
L_12733a5b:;
  /* 12733a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12733a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12733a5f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12733a62 push ecx */
  push32((uint32_t)(ECX));
  /* 12733a63 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12733a66 push edx */
  push32((uint32_t)(EDX));
  /* 12733a67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733a6a push eax */
  push32((uint32_t)(EAX));
  /* 12733a6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12733a6e push ecx */
  push32((uint32_t)(ECX));
  /* 12733a6f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12733a74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12733a77 push edx */
  push32((uint32_t)(EDX));
  /* 12733a78 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12733a7eu);
  /* 12733a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12733a80 jne 0x12733a89 */
  if (!C.zf) goto L_12733a89;
  /* 12733a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733a84 jmp 0x12733b69 */
  goto L_12733b69;
L_12733a89:;
  /* 12733a89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12733a90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12733a93 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12733a97 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733a9a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12733a9c call 0x12728650 */
  push32(0x12733aa1u); f_12728650();
  /* 12733aa1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12733aa4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12733aa7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12733aaa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12733aad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12733ab4 jmp 0x12733acd */
  goto L_12733acd;
  /* 12733ab6 mov eax, 1 */
  EAX = (0x1u);
  /* 12733abb ret  */
  ESPCHK(0x12733910u, _esp0);
  ESP += 4; return;
  /* 12733abc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12733abf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12733ac6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12733acd:;
  /* 12733acd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733ad1 jne 0x12733ada */
  if (!C.zf) goto L_12733ada;
  /* 12733ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733ad5 jmp 0x12733b69 */
  goto L_12733b69;
L_12733ada:;
  /* 12733ada cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733ade jne 0x12733ae9 */
  if (!C.zf) goto L_12733ae9;
  /* 12733ae0 mov edx, dword ptr [0x12751878] */
  EDX = (r32((uint32_t)(0x12751878)));
  /* 12733ae6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12733ae9:;
  /* 12733ae9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733aec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12733aef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12733af5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733af8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12733afb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12733b02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12733b05 push ecx */
  push32((uint32_t)(ECX));
  /* 12733b06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12733b09 push edx */
  push32((uint32_t)(EDX));
  /* 12733b0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12733b0d push eax */
  push32((uint32_t)(EAX));
  /* 12733b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733b11 push ecx */
  push32((uint32_t)(ECX));
  /* 12733b12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12733b15 push edx */
  push32((uint32_t)(EDX));
  /* 12733b16 call dword ptr [0x12754300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754300))), 0x12733b1cu);
  /* 12733b1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12733b1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733b22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12733b25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733b27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12733b2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733b32 je 0x12733b48 */
  if (C.zf) goto L_12733b48;
  /* 12733b34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733b37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12733b3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733b3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12733b40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733b46 je 0x12733b4c */
  if (C.zf) goto L_12733b4c;
L_12733b48:;
  /* 12733b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733b4a jmp 0x12733b69 */
  goto L_12733b69;
L_12733b4c:;
  /* 12733b4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733b4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12733b51 push eax */
  push32((uint32_t)(EAX));
  /* 12733b52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12733b55 push ecx */
  push32((uint32_t)(ECX));
  /* 12733b56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12733b59 push edx */
  push32((uint32_t)(EDX));
  /* 12733b5a call 0x1272d3a0 */
  push32(0x12733b5fu); f_1272d3a0();
  /* 12733b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733b62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12733b65 jmp 0x12733b69 */
  goto L_12733b69;
L_12733b67:;
  /* 12733b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12733b69:;
  /* 12733b69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12733b6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12733b6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12733b76 pop edi */
  EDI = (pop32());
  /* 12733b77 pop esi */
  ESI = (pop32());
  /* 12733b78 pop ebx */
  EBX = (pop32());
  /* 12733b79 mov esp, ebp */
  ESP = (EBP);
  /* 12733b7b pop ebp */
  EBP = (pop32());
  /* 12733b7c ret  */
  ESPCHK(0x12733910u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x12733b80 (208 bytes, 85 insns) */
void f_12733b80(void) {
  FTRACE(0x12733b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12733b81 mov ebp, esp */
  EBP = (ESP);
  /* 12733b83 push edi */
  push32((uint32_t)(EDI));
  /* 12733b84 push esi */
  push32((uint32_t)(ESI));
  /* 12733b85 push ebx */
  push32((uint32_t)(EBX));
  /* 12733b86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12733b89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12733b8c lea eax, [0x12751870] */
  EAX = ((uint32_t)(0x12751870));
  /* 12733b92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733b96 jne 0x12733bd3 */
  if (!C.zf) goto L_12733bd3;
  /* 12733b98 mov al, 0xff */
  AL = (0xffu);
  /* 12733b9a mov edi, edi */
  EDI = (EDI);
L_12733b9c:;
  /* 12733b9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12733b9e je 0x12733bce */
  if (C.zf) goto L_12733bce;
  /* 12733ba0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12733ba2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12733ba3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12733ba5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12733ba6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733ba8 je 0x12733b9c */
  if (C.zf) goto L_12733b9c;
  /* 12733baa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12733bac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733bae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12733bb0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12733bb3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12733bb5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12733bb7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12733bb9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12733bbb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733bbd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12733bbf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12733bc2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12733bc4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12733bc6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733bc8 je 0x12733b9c */
  if (C.zf) goto L_12733b9c;
  /* 12733bca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12733bcc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12733bce:;
  /* 12733bce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12733bd1 jmp 0x12733c4b */
  goto L_12733c4b;
L_12733bd3:;
  /* 12733bd3 lock inc dword ptr [0x12751a04] */
  x86_unimpl("lock inc @ 0x12733bd3");
  /* 12733bda cmp dword ptr [0x127519f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733be1 jg 0x12733be7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12733be7;
  /* 12733be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12733be5 jmp 0x12733bfc */
  goto L_12733bfc;
L_12733be7:;
  /* 12733be7 lock dec dword ptr [0x12751a04] */
  x86_unimpl("lock dec @ 0x12733be7");
  /* 12733bee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12733bf0 call 0x12728eb0 */
  push32(0x12733bf5u); f_12728eb0();
  /* 12733bf5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12733bfc:;
  /* 12733bfc mov eax, 0xff */
  EAX = (0xffu);
  /* 12733c01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12733c03 nop  */
  /* nop */
L_12733c04:;
  /* 12733c04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12733c06 je 0x12733c2f */
  if (C.zf) goto L_12733c2f;
  /* 12733c08 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12733c0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12733c0b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12733c0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12733c0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733c10 je 0x12733c04 */
  if (C.zf) goto L_12733c04;
  /* 12733c12 push eax */
  push32((uint32_t)(EAX));
  /* 12733c13 push ebx */
  push32((uint32_t)(EBX));
  /* 12733c14 call 0x12734cf0 */
  push32(0x12733c19u); f_12734cf0();
  /* 12733c19 mov ebx, eax */
  EBX = (EAX);
  /* 12733c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733c1e call 0x12734cf0 */
  push32(0x12733c23u); f_12734cf0();
  /* 12733c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733c26 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733c28 je 0x12733c04 */
  if (C.zf) goto L_12733c04;
  /* 12733c2a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733c2c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12733c2f:;
  /* 12733c2f mov ebx, eax */
  EBX = (EAX);
  /* 12733c31 pop eax */
  EAX = (pop32());
  /* 12733c32 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733c34 jne 0x12733c3f */
  if (!C.zf) goto L_12733c3f;
  /* 12733c36 lock dec dword ptr [0x12751a04] */
  x86_unimpl("lock dec @ 0x12733c36");
  /* 12733c3d jmp 0x12733c49 */
  goto L_12733c49;
L_12733c3f:;
  /* 12733c3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12733c41 call 0x12728f50 */
  push32(0x12733c46u); f_12728f50();
  /* 12733c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12733c49:;
  /* 12733c49 mov eax, ebx */
  EAX = (EBX);
L_12733c4b:;
  /* 12733c4b pop ebx */
  EBX = (pop32());
  /* 12733c4c pop esi */
  ESI = (pop32());
  /* 12733c4d pop edi */
  EDI = (pop32());
  /* 12733c4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12733c4f ret  */
  ESPCHK(0x12733b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c50 @ 0x12733c50 (257 bytes, 103 insns) */
void f_12733c50(void) {
  FTRACE(0x12733c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12733c51 mov ebp, esp */
  EBP = (ESP);
  /* 12733c53 push edi */
  push32((uint32_t)(EDI));
  /* 12733c54 push esi */
  push32((uint32_t)(ESI));
  /* 12733c55 push ebx */
  push32((uint32_t)(EBX));
  /* 12733c56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12733c59 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12733c5b je 0x12733d4a */
  if (C.zf) goto L_12733d4a;
  /* 12733c61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12733c64 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12733c67 lea eax, [0x12751870] */
  EAX = ((uint32_t)(0x12751870));
  /* 12733c6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733c71 jne 0x12733cc1 */
  if (!C.zf) goto L_12733cc1;
  /* 12733c73 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12733c75 mov bl, 0x5a */
  BL = (0x5au);
  /* 12733c77 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12733c79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12733c7c:;
  /* 12733c7c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12733c7e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12733c80 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12733c82 je 0x12733ca5 */
  if (C.zf) goto L_12733ca5;
  /* 12733c84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12733c86 je 0x12733ca5 */
  if (C.zf) goto L_12733ca5;
  /* 12733c88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12733c89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12733c8a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733c8c jb 0x12733c94 */
  if (C.cf) goto L_12733c94;
  /* 12733c8e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733c90 ja 0x12733c94 */
  if ((!C.cf&&!C.zf)) goto L_12733c94;
  /* 12733c92 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12733c94:;
  /* 12733c94 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733c96 jb 0x12733c9e */
  if (C.cf) goto L_12733c9e;
  /* 12733c98 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733c9a ja 0x12733c9e */
  if ((!C.cf&&!C.zf)) goto L_12733c9e;
  /* 12733c9c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12733c9e:;
  /* 12733c9e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733ca0 jne 0x12733caf */
  if (!C.zf) goto L_12733caf;
  /* 12733ca2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12733ca3 jne 0x12733c7c */
  if (!C.zf) goto L_12733c7c;
L_12733ca5:;
  /* 12733ca5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12733ca7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12733ca9 je 0x12733d4a */
  if (C.zf) goto L_12733d4a;
L_12733caf:;
  /* 12733caf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12733cb4 jb 0x12733d4a */
  if (C.cf) goto L_12733d4a;
  /* 12733cba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12733cbc jmp 0x12733d4a */
  goto L_12733d4a;
L_12733cc1:;
  /* 12733cc1 lock inc dword ptr [0x12751a04] */
  x86_unimpl("lock inc @ 0x12733cc1");
  /* 12733cc8 cmp dword ptr [0x127519f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733ccf jg 0x12733cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12733cd5;
  /* 12733cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12733cd3 jmp 0x12733cee */
  goto L_12733cee;
L_12733cd5:;
  /* 12733cd5 lock dec dword ptr [0x12751a04] */
  x86_unimpl("lock dec @ 0x12733cd5");
  /* 12733cdc mov ebx, ecx */
  EBX = (ECX);
  /* 12733cde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12733ce0 call 0x12728eb0 */
  push32(0x12733ce5u); f_12728eb0();
  /* 12733ce5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12733cec mov ecx, ebx */
  ECX = (EBX);
L_12733cee:;
  /* 12733cee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733cf0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12733cf2 mov edi, edi */
  EDI = (EDI);
L_12733cf4:;
  /* 12733cf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12733cf6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733cf8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12733cfa je 0x12733d1f */
  if (C.zf) goto L_12733d1f;
  /* 12733cfc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12733cfe je 0x12733d1f */
  if (C.zf) goto L_12733d1f;
  /* 12733d00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12733d01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12733d02 push ecx */
  push32((uint32_t)(ECX));
  /* 12733d03 push eax */
  push32((uint32_t)(EAX));
  /* 12733d04 push ebx */
  push32((uint32_t)(EBX));
  /* 12733d05 call 0x12734cf0 */
  push32(0x12733d0au); f_12734cf0();
  /* 12733d0a mov ebx, eax */
  EBX = (EAX);
  /* 12733d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733d0f call 0x12734cf0 */
  push32(0x12733d14u); f_12734cf0();
  /* 12733d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733d17 pop ecx */
  ECX = (pop32());
  /* 12733d18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733d1a jne 0x12733d25 */
  if (!C.zf) goto L_12733d25;
  /* 12733d1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12733d1d jne 0x12733cf4 */
  if (!C.zf) goto L_12733cf4;
L_12733d1f:;
  /* 12733d1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12733d21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733d23 je 0x12733d2e */
  if (C.zf) goto L_12733d2e;
L_12733d25:;
  /* 12733d25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12733d2a jb 0x12733d2e */
  if (C.cf) goto L_12733d2e;
  /* 12733d2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12733d2e:;
  /* 12733d2e pop eax */
  EAX = (pop32());
  /* 12733d2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733d31 jne 0x12733d3c */
  if (!C.zf) goto L_12733d3c;
  /* 12733d33 lock dec dword ptr [0x12751a04] */
  x86_unimpl("lock dec @ 0x12733d33");
  /* 12733d3a jmp 0x12733d4a */
  goto L_12733d4a;
L_12733d3c:;
  /* 12733d3c mov ebx, ecx */
  EBX = (ECX);
  /* 12733d3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12733d40 call 0x12728f50 */
  push32(0x12733d45u); f_12728f50();
  /* 12733d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733d48 mov ecx, ebx */
  ECX = (EBX);
L_12733d4a:;
  /* 12733d4a mov eax, ecx */
  EAX = (ECX);
  /* 12733d4c pop ebx */
  EBX = (pop32());
  /* 12733d4d pop esi */
  ESI = (pop32());
  /* 12733d4e pop edi */
  EDI = (pop32());
  /* 12733d4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12733d50 ret  */
  ESPCHK(0x12733c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x12733d60 (255 bytes, 88 insns) */
void f_12733d60(void) {
  FTRACE(0x12733d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12733d61 mov ebp, esp */
  EBP = (ESP);
  /* 12733d63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12733d66:;
  /* 12733d66 cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733d6d jle 0x12733d86 */
  if ((C.zf||C.sf!=C.of)) goto L_12733d86;
  /* 12733d6f push 8 */
  push32((uint32_t)(0x8u));
  /* 12733d71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733d74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12733d76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12733d78 push ecx */
  push32((uint32_t)(ECX));
  /* 12733d79 call 0x1272b4c0 */
  push32(0x12733d7eu); f_1272b4c0();
  /* 12733d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733d81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12733d84 jmp 0x12733d9f */
  goto L_12733d9f;
L_12733d86:;
  /* 12733d86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733d89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733d8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733d8d mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 12733d93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733d95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12733d99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12733d9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12733d9f:;
  /* 12733d9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733da3 je 0x12733db0 */
  if (C.zf) goto L_12733db0;
  /* 12733da5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733da8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733dab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12733dae jmp 0x12733d66 */
  goto L_12733d66;
L_12733db0:;
  /* 12733db0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733db3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733db5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12733db7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12733dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733dbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733dc0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12733dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733dc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12733dc9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733dcd je 0x12733dd5 */
  if (C.zf) goto L_12733dd5;
  /* 12733dcf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733dd3 jne 0x12733de8 */
  if (!C.zf) goto L_12733de8;
L_12733dd5:;
  /* 12733dd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733dd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733dda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733ddc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12733ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733de2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733de5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12733de8:;
  /* 12733de8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12733def:;
  /* 12733def cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733df6 jle 0x12733e0b */
  if ((C.zf||C.sf!=C.of)) goto L_12733e0b;
  /* 12733df8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12733dfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733dfd push edx */
  push32((uint32_t)(EDX));
  /* 12733dfe call 0x1272b4c0 */
  push32(0x12733e03u); f_1272b4c0();
  /* 12733e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733e06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12733e09 jmp 0x12733e20 */
  goto L_12733e20;
L_12733e0b:;
  /* 12733e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733e0e mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 12733e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733e16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12733e1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12733e1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12733e20:;
  /* 12733e20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733e24 je 0x12733e4b */
  if (C.zf) goto L_12733e4b;
  /* 12733e26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733e29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12733e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733e2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12733e33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12733e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733e39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12733e3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12733e3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12733e40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733e43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733e46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12733e49 jmp 0x12733def */
  goto L_12733def;
L_12733e4b:;
  /* 12733e4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733e4f jne 0x12733e58 */
  if (!C.zf) goto L_12733e58;
  /* 12733e51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733e54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12733e56 jmp 0x12733e5b */
  goto L_12733e5b;
L_12733e58:;
  /* 12733e58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12733e5b:;
  /* 12733e5b mov esp, ebp */
  ESP = (EBP);
  /* 12733e5d pop ebp */
  EBP = (pop32());
  /* 12733e5e ret  */
  ESPCHK(0x12733d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e60 @ 0x12733e60 (17 bytes, 8 insns) */
void f_12733e60(void) {
  FTRACE(0x12733e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12733e61 mov ebp, esp */
  EBP = (ESP);
  /* 12733e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733e66 push eax */
  push32((uint32_t)(EAX));
  /* 12733e67 call 0x12733d60 */
  push32(0x12733e6cu); f_12733d60();
  /* 12733e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733e6f pop ebp */
  EBP = (pop32());
  /* 12733e70 ret  */
  ESPCHK(0x12733e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e80 @ 0x12733e80 (297 bytes, 106 insns) */
void f_12733e80(void) {
  FTRACE(0x12733e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12733e81 mov ebp, esp */
  EBP = (ESP);
  /* 12733e83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733e86 push esi */
  push32((uint32_t)(ESI));
L_12733e87:;
  /* 12733e87 cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733e8e jle 0x12733ea7 */
  if ((C.zf||C.sf!=C.of)) goto L_12733ea7;
  /* 12733e90 push 8 */
  push32((uint32_t)(0x8u));
  /* 12733e92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733e95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12733e97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12733e99 push ecx */
  push32((uint32_t)(ECX));
  /* 12733e9a call 0x1272b4c0 */
  push32(0x12733e9fu); f_1272b4c0();
  /* 12733e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733ea2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12733ea5 jmp 0x12733ec0 */
  goto L_12733ec0;
L_12733ea7:;
  /* 12733ea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733eac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733eae mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 12733eb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733eb6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12733eba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12733ebd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12733ec0:;
  /* 12733ec0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733ec4 je 0x12733ed1 */
  if (C.zf) goto L_12733ed1;
  /* 12733ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733ec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733ecc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12733ecf jmp 0x12733e87 */
  goto L_12733e87;
L_12733ed1:;
  /* 12733ed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733ed4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733ed6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12733ed8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12733edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733ede add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733ee1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12733ee4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733ee7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12733eea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733eee je 0x12733ef6 */
  if (C.zf) goto L_12733ef6;
  /* 12733ef0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733ef4 jne 0x12733f09 */
  if (!C.zf) goto L_12733f09;
L_12733ef6:;
  /* 12733ef6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733ef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733efb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733efd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12733f00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733f03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733f06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12733f09:;
  /* 12733f09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12733f10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12733f17:;
  /* 12733f17 cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733f1e jle 0x12733f33 */
  if ((C.zf||C.sf!=C.of)) goto L_12733f33;
  /* 12733f20 push 4 */
  push32((uint32_t)(0x4u));
  /* 12733f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733f25 push edx */
  push32((uint32_t)(EDX));
  /* 12733f26 call 0x1272b4c0 */
  push32(0x12733f2bu); f_1272b4c0();
  /* 12733f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733f2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12733f31 jmp 0x12733f48 */
  goto L_12733f48;
L_12733f33:;
  /* 12733f33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733f36 mov ecx, dword ptr [0x1274fc98] */
  ECX = (r32((uint32_t)(0x1274fc98)));
  /* 12733f3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12733f3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12733f42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12733f45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12733f48:;
  /* 12733f48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733f4c je 0x12733f89 */
  if (C.zf) goto L_12733f89;
  /* 12733f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12733f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 12733f52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733f55 push eax */
  push32((uint32_t)(EAX));
  /* 12733f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733f59 push ecx */
  push32((uint32_t)(ECX));
  /* 12733f5a call 0x12734e20 */
  push32(0x12733f5fu); f_12734e20();
  /* 12733f5f mov ecx, eax */
  ECX = (EAX);
  /* 12733f61 mov esi, edx */
  ESI = (EDX);
  /* 12733f63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12733f66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12733f69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12733f6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733f6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12733f6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12733f71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12733f74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12733f79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12733f7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12733f7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12733f81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733f84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12733f87 jmp 0x12733f17 */
  goto L_12733f17;
L_12733f89:;
  /* 12733f89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733f8d jne 0x12733f9e */
  if (!C.zf) goto L_12733f9e;
  /* 12733f8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733f92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12733f94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12733f97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733f9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12733f9c jmp 0x12733fa4 */
  goto L_12733fa4;
L_12733f9e:;
  /* 12733f9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12733fa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12733fa4:;
  /* 12733fa4 pop esi */
  ESI = (pop32());
  /* 12733fa5 mov esp, ebp */
  ESP = (EBP);
  /* 12733fa7 pop ebp */
  EBP = (pop32());
  /* 12733fa8 ret  */
  ESPCHK(0x12733e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fb0 @ 0x12733fb0 (61 bytes, 18 insns) */
void f_12733fb0(void) {
  FTRACE(0x12733fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12733fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12733fb3 cmp dword ptr [0x127519d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733fba jne 0x12733feb */
  if (!C.zf) goto L_12733feb;
  /* 12733fbc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12733fbe call 0x12728eb0 */
  push32(0x12733fc3u); f_12728eb0();
  /* 12733fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733fc6 cmp dword ptr [0x127519d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12733fcd jne 0x12733fe1 */
  if (!C.zf) goto L_12733fe1;
  /* 12733fcf call 0x12734010 */
  push32(0x12733fd4u); f_12734010();
  /* 12733fd4 mov eax, dword ptr [0x127519d0] */
  EAX = (r32((uint32_t)(0x127519d0)));
  /* 12733fd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12733fdc mov dword ptr [0x127519d0], eax */
  w32((uint32_t)(0x127519d0), (EAX));
L_12733fe1:;
  /* 12733fe1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12733fe3 call 0x12728f50 */
  push32(0x12733fe8u); f_12728f50();
  /* 12733fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12733feb:;
  /* 12733feb pop ebp */
  EBP = (pop32());
  /* 12733fec ret  */
  ESPCHK(0x12733fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x12733ff0 (30 bytes, 11 insns) */
void f_12733ff0(void) {
  FTRACE(0x12733ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12733ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12733ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12733ff3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12733ff5 call 0x12728eb0 */
  push32(0x12733ffau); f_12728eb0();
  /* 12733ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12733ffd call 0x12734010 */
  push32(0x12734002u); f_12734010();
  /* 12734002 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12734004 call 0x12728f50 */
  push32(0x12734009u); f_12728f50();
  /* 12734009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273400c pop ebp */
  EBP = (pop32());
  /* 1273400d ret  */
  ESPCHK(0x12733ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014010 @ 0x12734010 (939 bytes, 266 insns) */
void f_12734010(void) {
  FTRACE(0x12734010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734010 push ebp */
  push32((uint32_t)(EBP));
  /* 12734011 mov ebp, esp */
  EBP = (ESP);
  /* 12734013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734016 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1273401d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1273401f call 0x12728eb0 */
  push32(0x12734024u); f_12728eb0();
  /* 12734024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734027 mov dword ptr [0x12751918], 0 */
  w32((uint32_t)(0x12751918), (0x0u));
  /* 12734031 mov dword ptr [0x12750e38], 0xffffffff */
  w32((uint32_t)(0x12750e38), (0xffffffffu));
  /* 1273403b mov eax, dword ptr [0x12750e38] */
  EAX = (r32((uint32_t)(0x12750e38)));
  /* 12734040 mov dword ptr [0x12750e28], eax */
  w32((uint32_t)(0x12750e28), (EAX));
  /* 12734045 push 0x1274dca0 */
  push32((uint32_t)(0x1274dca0u));
  /* 1273404a call 0x12734e90 */
  push32(0x1273404fu); f_12734e90();
  /* 1273404f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734052 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12734055 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734059 jne 0x12734193 */
  if (!C.zf) goto L_12734193;
  /* 1273405f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12734061 call 0x12728f50 */
  push32(0x12734066u); f_12728f50();
  /* 12734066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734069 push 0x12751920 */
  push32((uint32_t)(0x12751920u));
  /* 1273406e call dword ptr [0x127542c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542c0))), 0x12734074u);
  /* 12734074 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734077 je 0x1273418e */
  if (C.zf) goto L_1273418e;
  /* 1273407d mov dword ptr [0x12751918], 1 */
  w32((uint32_t)(0x12751918), (0x1u));
  /* 12734087 mov ecx, dword ptr [0x12751920] */
  ECX = (r32((uint32_t)(0x12751920)));
  /* 1273408d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734090 mov dword ptr [0x12750d90], ecx */
  w32((uint32_t)(0x12750d90), (ECX));
  /* 12734096 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12734098 mov dx, word ptr [0x12751966] */
  DX = (r16((uint32_t)(0x12751966)));
  /* 1273409f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127340a1 je 0x127340b9 */
  if (C.zf) goto L_127340b9;
  /* 127340a3 mov eax, dword ptr [0x12751974] */
  EAX = (r32((uint32_t)(0x12751974)));
  /* 127340a8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127340ab mov ecx, dword ptr [0x12750d90] */
  ECX = (r32((uint32_t)(0x12750d90)));
  /* 127340b1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127340b3 mov dword ptr [0x12750d90], ecx */
  w32((uint32_t)(0x12750d90), (ECX));
L_127340b9:;
  /* 127340b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127340bb mov dx, word ptr [0x127519ba] */
  DX = (r16((uint32_t)(0x127519ba)));
  /* 127340c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127340c4 je 0x127340ee */
  if (C.zf) goto L_127340ee;
  /* 127340c6 cmp dword ptr [0x127519c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127340cd je 0x127340ee */
  if (C.zf) goto L_127340ee;
  /* 127340cf mov dword ptr [0x12750d94], 1 */
  w32((uint32_t)(0x12750d94), (0x1u));
  /* 127340d9 mov eax, dword ptr [0x127519c8] */
  EAX = (r32((uint32_t)(0x127519c8)));
  /* 127340de sub eax, dword ptr [0x12751974] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12751974))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127340e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127340e7 mov dword ptr [0x12750d98], eax */
  w32((uint32_t)(0x12750d98), (EAX));
  /* 127340ec jmp 0x12734102 */
  goto L_12734102;
L_127340ee:;
  /* 127340ee mov dword ptr [0x12750d94], 0 */
  w32((uint32_t)(0x12750d94), (0x0u));
  /* 127340f8 mov dword ptr [0x12750d98], 0 */
  w32((uint32_t)(0x12750d98), (0x0u));
L_12734102:;
  /* 12734102 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12734105 push ecx */
  push32((uint32_t)(ECX));
  /* 12734106 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734108 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1273410a mov edx, dword ptr [0x12750e1c] */
  EDX = (r32((uint32_t)(0x12750e1c)));
  /* 12734110 push edx */
  push32((uint32_t)(EDX));
  /* 12734111 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734113 push 0x12751924 */
  push32((uint32_t)(0x12751924u));
  /* 12734118 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1273411d mov eax, dword ptr [0x12751888] */
  EAX = (r32((uint32_t)(0x12751888)));
  /* 12734122 push eax */
  push32((uint32_t)(EAX));
  /* 12734123 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12734129u);
  /* 12734129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273412b je 0x1273413f */
  if (C.zf) goto L_1273413f;
  /* 1273412d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734131 jne 0x1273413f */
  if (!C.zf) goto L_1273413f;
  /* 12734133 mov ecx, dword ptr [0x12750e1c] */
  ECX = (r32((uint32_t)(0x12750e1c)));
  /* 12734139 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1273413d jmp 0x12734148 */
  goto L_12734148;
L_1273413f:;
  /* 1273413f mov edx, dword ptr [0x12750e1c] */
  EDX = (r32((uint32_t)(0x12750e1c)));
  /* 12734145 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12734148:;
  /* 12734148 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1273414b push eax */
  push32((uint32_t)(EAX));
  /* 1273414c push 0 */
  push32((uint32_t)(0x0u));
  /* 1273414e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12734150 mov ecx, dword ptr [0x12750e20] */
  ECX = (r32((uint32_t)(0x12750e20)));
  /* 12734156 push ecx */
  push32((uint32_t)(ECX));
  /* 12734157 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734159 push 0x12751978 */
  push32((uint32_t)(0x12751978u));
  /* 1273415e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12734163 mov edx, dword ptr [0x12751888] */
  EDX = (r32((uint32_t)(0x12751888)));
  /* 12734169 push edx */
  push32((uint32_t)(EDX));
  /* 1273416a call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12734170u);
  /* 12734170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734172 je 0x12734185 */
  if (C.zf) goto L_12734185;
  /* 12734174 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734178 jne 0x12734185 */
  if (!C.zf) goto L_12734185;
  /* 1273417a mov eax, dword ptr [0x12750e20] */
  EAX = (r32((uint32_t)(0x12750e20)));
  /* 1273417f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12734183 jmp 0x1273418e */
  goto L_1273418e;
L_12734185:;
  /* 12734185 mov ecx, dword ptr [0x12750e20] */
  ECX = (r32((uint32_t)(0x12750e20)));
  /* 1273418b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1273418e:;
  /* 1273418e jmp 0x127343b7 */
  goto L_127343b7;
L_12734193:;
  /* 12734193 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734196 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12734199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273419b je 0x127341bd */
  if (C.zf) goto L_127341bd;
  /* 1273419d cmp dword ptr [0x127519cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127341a4 je 0x127341cc */
  if (C.zf) goto L_127341cc;
  /* 127341a6 mov ecx, dword ptr [0x127519cc] */
  ECX = (r32((uint32_t)(0x127519cc)));
  /* 127341ac push ecx */
  push32((uint32_t)(ECX));
  /* 127341ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127341b0 push edx */
  push32((uint32_t)(EDX));
  /* 127341b1 call 0x12731140 */
  push32(0x127341b6u); f_12731140();
  /* 127341b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127341b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127341bb jne 0x127341cc */
  if (!C.zf) goto L_127341cc;
L_127341bd:;
  /* 127341bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 127341bf call 0x12728f50 */
  push32(0x127341c4u); f_12728f50();
  /* 127341c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127341c7 jmp 0x127343b7 */
  goto L_127343b7;
L_127341cc:;
  /* 127341cc push 2 */
  push32((uint32_t)(0x2u));
  /* 127341ce mov eax, dword ptr [0x127519cc] */
  EAX = (r32((uint32_t)(0x127519cc)));
  /* 127341d3 push eax */
  push32((uint32_t)(EAX));
  /* 127341d4 call 0x12725f40 */
  push32(0x127341d9u); f_12725f40();
  /* 127341d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127341dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 127341e1 push 0x1274dc98 */
  push32((uint32_t)(0x1274dc98u));
  /* 127341e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127341e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127341eb push ecx */
  push32((uint32_t)(ECX));
  /* 127341ec call 0x127282e0 */
  push32(0x127341f1u); f_127282e0();
  /* 127341f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127341f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127341f7 push eax */
  push32((uint32_t)(EAX));
  /* 127341f8 call 0x127254b0 */
  push32(0x127341fdu); f_127254b0();
  /* 127341fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734200 mov dword ptr [0x127519cc], eax */
  w32((uint32_t)(0x127519cc), (EAX));
  /* 12734205 cmp dword ptr [0x127519cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273420c jne 0x1273421d */
  if (!C.zf) goto L_1273421d;
  /* 1273420e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12734210 call 0x12728f50 */
  push32(0x12734215u); f_12728f50();
  /* 12734215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734218 jmp 0x127343b7 */
  goto L_127343b7;
L_1273421d:;
  /* 1273421d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734220 push edx */
  push32((uint32_t)(EDX));
  /* 12734221 mov eax, dword ptr [0x127519cc] */
  EAX = (r32((uint32_t)(0x127519cc)));
  /* 12734226 push eax */
  push32((uint32_t)(EAX));
  /* 12734227 call 0x12728460 */
  push32(0x1273422cu); f_12728460();
  /* 1273422c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273422f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12734231 call 0x12728f50 */
  push32(0x12734236u); f_12728f50();
  /* 12734236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734239 push 3 */
  push32((uint32_t)(0x3u));
  /* 1273423b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273423e push ecx */
  push32((uint32_t)(ECX));
  /* 1273423f mov edx, dword ptr [0x12750e1c] */
  EDX = (r32((uint32_t)(0x12750e1c)));
  /* 12734245 push edx */
  push32((uint32_t)(EDX));
  /* 12734246 call 0x12728cd0 */
  push32(0x1273424bu); f_12728cd0();
  /* 1273424b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273424e mov eax, dword ptr [0x12750e1c] */
  EAX = (r32((uint32_t)(0x12750e1c)));
  /* 12734253 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12734257 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273425a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273425d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12734260 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734263 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12734266 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734269 jne 0x1273427d */
  if (!C.zf) goto L_1273427d;
  /* 1273426b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273426e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734271 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12734274 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734277 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273427a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1273427d:;
  /* 1273427d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734280 push eax */
  push32((uint32_t)(EAX));
  /* 12734281 call 0x12733d60 */
  push32(0x12734286u); f_12733d60();
  /* 12734286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734289 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1273428f mov dword ptr [0x12750d90], eax */
  w32((uint32_t)(0x12750d90), (EAX));
L_12734294:;
  /* 12734294 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734297 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1273429a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273429d je 0x127342b5 */
  if (C.zf) goto L_127342b5;
  /* 1273429f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127342a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127342a8 jl 0x127342c0 */
  if ((C.sf!=C.of)) goto L_127342c0;
  /* 127342aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127342b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127342b3 jg 0x127342c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_127342c0;
L_127342b5:;
  /* 127342b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127342bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127342be jmp 0x12734294 */
  goto L_12734294;
L_127342c0:;
  /* 127342c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127342c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127342c9 jne 0x12734365 */
  if (!C.zf) goto L_12734365;
  /* 127342cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127342d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127342d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342db push edx */
  push32((uint32_t)(EDX));
  /* 127342dc call 0x12733d60 */
  push32(0x127342e1u); f_12733d60();
  /* 127342e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127342e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127342e7 mov ecx, dword ptr [0x12750d90] */
  ECX = (r32((uint32_t)(0x12750d90)));
  /* 127342ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127342ef mov dword ptr [0x12750d90], ecx */
  w32((uint32_t)(0x12750d90), (ECX));
L_127342f5:;
  /* 127342f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127342f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127342fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127342fe jl 0x12734316 */
  if ((C.sf!=C.of)) goto L_12734316;
  /* 12734300 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734303 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12734306 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734309 jg 0x12734316 */
  if ((!C.zf&&C.sf==C.of)) goto L_12734316;
  /* 1273430b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273430e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734311 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12734314 jmp 0x127342f5 */
  goto L_127342f5;
L_12734316:;
  /* 12734316 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734319 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1273431c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273431f jne 0x12734365 */
  if (!C.zf) goto L_12734365;
  /* 12734321 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734324 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734327 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1273432a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273432d push ecx */
  push32((uint32_t)(ECX));
  /* 1273432e call 0x12733d60 */
  push32(0x12734333u); f_12733d60();
  /* 12734333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734336 mov edx, dword ptr [0x12750d90] */
  EDX = (r32((uint32_t)(0x12750d90)));
  /* 1273433c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273433e mov dword ptr [0x12750d90], edx */
  w32((uint32_t)(0x12750d90), (EDX));
L_12734344:;
  /* 12734344 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734347 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1273434a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273434d jl 0x12734365 */
  if ((C.sf!=C.of)) goto L_12734365;
  /* 1273434f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734352 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12734355 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734358 jg 0x12734365 */
  if ((!C.zf&&C.sf==C.of)) goto L_12734365;
  /* 1273435a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273435d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734360 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12734363 jmp 0x12734344 */
  goto L_12734344;
L_12734365:;
  /* 12734365 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734369 je 0x12734379 */
  if (C.zf) goto L_12734379;
  /* 1273436b mov edx, dword ptr [0x12750d90] */
  EDX = (r32((uint32_t)(0x12750d90)));
  /* 12734371 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12734373 mov dword ptr [0x12750d90], edx */
  w32((uint32_t)(0x12750d90), (EDX));
L_12734379:;
  /* 12734379 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273437c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1273437f mov dword ptr [0x12750d94], ecx */
  w32((uint32_t)(0x12750d94), (ECX));
  /* 12734385 cmp dword ptr [0x12750d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12750d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273438c je 0x127343ae */
  if (C.zf) goto L_127343ae;
  /* 1273438e push 3 */
  push32((uint32_t)(0x3u));
  /* 12734390 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734393 push edx */
  push32((uint32_t)(EDX));
  /* 12734394 mov eax, dword ptr [0x12750e20] */
  EAX = (r32((uint32_t)(0x12750e20)));
  /* 12734399 push eax */
  push32((uint32_t)(EAX));
  /* 1273439a call 0x12728cd0 */
  push32(0x1273439fu); f_12728cd0();
  /* 1273439f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127343a2 mov ecx, dword ptr [0x12750e20] */
  ECX = (r32((uint32_t)(0x12750e20)));
  /* 127343a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 127343ac jmp 0x127343b7 */
  goto L_127343b7;
L_127343ae:;
  /* 127343ae mov edx, dword ptr [0x12750e20] */
  EDX = (r32((uint32_t)(0x12750e20)));
  /* 127343b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_127343b7:;
  /* 127343b7 mov esp, ebp */
  ESP = (EBP);
  /* 127343b9 pop ebp */
  EBP = (pop32());
  /* 127343ba ret  */
  ESPCHK(0x12734010u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x127343c0 (46 bytes, 18 insns) */
void f_127343c0(void) {
  FTRACE(0x127343c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127343c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127343c1 mov ebp, esp */
  EBP = (ESP);
  /* 127343c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127343c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127343c6 call 0x12728eb0 */
  push32(0x127343cbu); f_12728eb0();
  /* 127343cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127343ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127343d1 push eax */
  push32((uint32_t)(EAX));
  /* 127343d2 call 0x127343f0 */
  push32(0x127343d7u); f_127343f0();
  /* 127343d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127343da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127343dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 127343df call 0x12728f50 */
  push32(0x127343e4u); f_12728f50();
  /* 127343e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127343e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127343ea mov esp, ebp */
  ESP = (EBP);
  /* 127343ec pop ebp */
  EBP = (pop32());
  /* 127343ed ret  */
  ESPCHK(0x127343c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100143f0 @ 0x127343f0 (762 bytes, 246 insns) */
void f_127343f0(void) {
  FTRACE(0x127343f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127343f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127343f1 mov ebp, esp */
  EBP = (ESP);
  /* 127343f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127343f4 cmp dword ptr [0x12750d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12750d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127343fb jne 0x12734404 */
  if (!C.zf) goto L_12734404;
  /* 127343fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127343ff jmp 0x127346e6 */
  goto L_127346e6;
L_12734404:;
  /* 12734404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734407 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1273440a cmp ecx, dword ptr [0x12750e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12750e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734410 jne 0x12734424 */
  if (!C.zf) goto L_12734424;
  /* 12734412 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734415 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12734418 cmp eax, dword ptr [0x12750e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12750e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273441e je 0x127345eb */
  if (C.zf) goto L_127345eb;
L_12734424:;
  /* 12734424 cmp dword ptr [0x12751918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273442b je 0x127345a5 */
  if (C.zf) goto L_127345a5;
  /* 12734431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734433 mov cx, word ptr [0x127519b8] */
  CX = (r16((uint32_t)(0x127519b8)));
  /* 1273443a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1273443c jne 0x12734499 */
  if (!C.zf) goto L_12734499;
  /* 1273443e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12734440 mov dx, word ptr [0x127519c6] */
  DX = (r16((uint32_t)(0x127519c6)));
  /* 12734447 push edx */
  push32((uint32_t)(EDX));
  /* 12734448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273444a mov ax, word ptr [0x127519c4] */
  AX = (r16((uint32_t)(0x127519c4)));
  /* 12734450 push eax */
  push32((uint32_t)(EAX));
  /* 12734451 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734453 mov cx, word ptr [0x127519c2] */
  CX = (r16((uint32_t)(0x127519c2)));
  /* 1273445a push ecx */
  push32((uint32_t)(ECX));
  /* 1273445b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1273445d mov dx, word ptr [0x127519c0] */
  DX = (r16((uint32_t)(0x127519c0)));
  /* 12734464 push edx */
  push32((uint32_t)(EDX));
  /* 12734465 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734469 mov ax, word ptr [0x127519bc] */
  AX = (r16((uint32_t)(0x127519bc)));
  /* 1273446f push eax */
  push32((uint32_t)(EAX));
  /* 12734470 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734472 mov cx, word ptr [0x127519be] */
  CX = (r16((uint32_t)(0x127519be)));
  /* 12734479 push ecx */
  push32((uint32_t)(ECX));
  /* 1273447a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1273447c mov dx, word ptr [0x127519ba] */
  DX = (r16((uint32_t)(0x127519ba)));
  /* 12734483 push edx */
  push32((uint32_t)(EDX));
  /* 12734484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734487 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1273448a push ecx */
  push32((uint32_t)(ECX));
  /* 1273448b push 1 */
  push32((uint32_t)(0x1u));
  /* 1273448d push 1 */
  push32((uint32_t)(0x1u));
  /* 1273448f call 0x127346f0 */
  push32(0x12734494u); f_127346f0();
  /* 12734494 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734497 jmp 0x127344ea */
  goto L_127344ea;
L_12734499:;
  /* 12734499 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1273449b mov dx, word ptr [0x127519c6] */
  DX = (r16((uint32_t)(0x127519c6)));
  /* 127344a2 push edx */
  push32((uint32_t)(EDX));
  /* 127344a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127344a5 mov ax, word ptr [0x127519c4] */
  AX = (r16((uint32_t)(0x127519c4)));
  /* 127344ab push eax */
  push32((uint32_t)(EAX));
  /* 127344ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127344ae mov cx, word ptr [0x127519c2] */
  CX = (r16((uint32_t)(0x127519c2)));
  /* 127344b5 push ecx */
  push32((uint32_t)(ECX));
  /* 127344b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127344b8 mov dx, word ptr [0x127519c0] */
  DX = (r16((uint32_t)(0x127519c0)));
  /* 127344bf push edx */
  push32((uint32_t)(EDX));
  /* 127344c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127344c2 mov ax, word ptr [0x127519be] */
  AX = (r16((uint32_t)(0x127519be)));
  /* 127344c8 push eax */
  push32((uint32_t)(EAX));
  /* 127344c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127344cb push 0 */
  push32((uint32_t)(0x0u));
  /* 127344cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127344cf mov cx, word ptr [0x127519ba] */
  CX = (r16((uint32_t)(0x127519ba)));
  /* 127344d6 push ecx */
  push32((uint32_t)(ECX));
  /* 127344d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127344da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127344dd push eax */
  push32((uint32_t)(EAX));
  /* 127344de push 0 */
  push32((uint32_t)(0x0u));
  /* 127344e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127344e2 call 0x127346f0 */
  push32(0x127344e7u); f_127346f0();
  /* 127344e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127344ea:;
  /* 127344ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127344ec mov cx, word ptr [0x12751964] */
  CX = (r16((uint32_t)(0x12751964)));
  /* 127344f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127344f5 jne 0x12734552 */
  if (!C.zf) goto L_12734552;
  /* 127344f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127344f9 mov dx, word ptr [0x12751972] */
  DX = (r16((uint32_t)(0x12751972)));
  /* 12734500 push edx */
  push32((uint32_t)(EDX));
  /* 12734501 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734503 mov ax, word ptr [0x12751970] */
  AX = (r16((uint32_t)(0x12751970)));
  /* 12734509 push eax */
  push32((uint32_t)(EAX));
  /* 1273450a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1273450c mov cx, word ptr [0x1275196e] */
  CX = (r16((uint32_t)(0x1275196e)));
  /* 12734513 push ecx */
  push32((uint32_t)(ECX));
  /* 12734514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12734516 mov dx, word ptr [0x1275196c] */
  DX = (r16((uint32_t)(0x1275196c)));
  /* 1273451d push edx */
  push32((uint32_t)(EDX));
  /* 1273451e push 0 */
  push32((uint32_t)(0x0u));
  /* 12734520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734522 mov ax, word ptr [0x12751968] */
  AX = (r16((uint32_t)(0x12751968)));
  /* 12734528 push eax */
  push32((uint32_t)(EAX));
  /* 12734529 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1273452b mov cx, word ptr [0x1275196a] */
  CX = (r16((uint32_t)(0x1275196a)));
  /* 12734532 push ecx */
  push32((uint32_t)(ECX));
  /* 12734533 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12734535 mov dx, word ptr [0x12751966] */
  DX = (r16((uint32_t)(0x12751966)));
  /* 1273453c push edx */
  push32((uint32_t)(EDX));
  /* 1273453d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734540 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12734543 push ecx */
  push32((uint32_t)(ECX));
  /* 12734544 push 1 */
  push32((uint32_t)(0x1u));
  /* 12734546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734548 call 0x127346f0 */
  push32(0x1273454du); f_127346f0();
  /* 1273454d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734550 jmp 0x127345a3 */
  goto L_127345a3;
L_12734552:;
  /* 12734552 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12734554 mov dx, word ptr [0x12751972] */
  DX = (r16((uint32_t)(0x12751972)));
  /* 1273455b push edx */
  push32((uint32_t)(EDX));
  /* 1273455c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273455e mov ax, word ptr [0x12751970] */
  AX = (r16((uint32_t)(0x12751970)));
  /* 12734564 push eax */
  push32((uint32_t)(EAX));
  /* 12734565 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734567 mov cx, word ptr [0x1275196e] */
  CX = (r16((uint32_t)(0x1275196e)));
  /* 1273456e push ecx */
  push32((uint32_t)(ECX));
  /* 1273456f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12734571 mov dx, word ptr [0x1275196c] */
  DX = (r16((uint32_t)(0x1275196c)));
  /* 12734578 push edx */
  push32((uint32_t)(EDX));
  /* 12734579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273457b mov ax, word ptr [0x1275196a] */
  AX = (r16((uint32_t)(0x1275196a)));
  /* 12734581 push eax */
  push32((uint32_t)(EAX));
  /* 12734582 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734584 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734586 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734588 mov cx, word ptr [0x12751966] */
  CX = (r16((uint32_t)(0x12751966)));
  /* 1273458f push ecx */
  push32((uint32_t)(ECX));
  /* 12734590 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734593 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12734596 push eax */
  push32((uint32_t)(EAX));
  /* 12734597 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734599 push 0 */
  push32((uint32_t)(0x0u));
  /* 1273459b call 0x127346f0 */
  push32(0x127345a0u); f_127346f0();
  /* 127345a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127345a3:;
  /* 127345a3 jmp 0x127345eb */
  goto L_127345eb;
L_127345a5:;
  /* 127345a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345ab push 2 */
  push32((uint32_t)(0x2u));
  /* 127345ad push 0 */
  push32((uint32_t)(0x0u));
  /* 127345af push 0 */
  push32((uint32_t)(0x0u));
  /* 127345b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127345b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 127345b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127345b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127345bb push edx */
  push32((uint32_t)(EDX));
  /* 127345bc push 1 */
  push32((uint32_t)(0x1u));
  /* 127345be push 1 */
  push32((uint32_t)(0x1u));
  /* 127345c0 call 0x127346f0 */
  push32(0x127345c5u); f_127346f0();
  /* 127345c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127345c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345ca push 0 */
  push32((uint32_t)(0x0u));
  /* 127345cc push 0 */
  push32((uint32_t)(0x0u));
  /* 127345ce push 2 */
  push32((uint32_t)(0x2u));
  /* 127345d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 127345d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 127345d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127345db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127345de push ecx */
  push32((uint32_t)(ECX));
  /* 127345df push 1 */
  push32((uint32_t)(0x1u));
  /* 127345e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127345e3 call 0x127346f0 */
  push32(0x127345e8u); f_127346f0();
  /* 127345e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127345eb:;
  /* 127345eb mov edx, dword ptr [0x12750e2c] */
  EDX = (r32((uint32_t)(0x12750e2c)));
  /* 127345f1 cmp edx, dword ptr [0x12750e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12750e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127345f7 jge 0x12734644 */
  if ((C.sf==C.of)) goto L_12734644;
  /* 127345f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127345fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127345ff cmp ecx, dword ptr [0x12750e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12750e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734605 jl 0x12734615 */
  if ((C.sf!=C.of)) goto L_12734615;
  /* 12734607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273460a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1273460d cmp eax, dword ptr [0x12750e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12750e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734613 jle 0x1273461c */
  if ((C.zf||C.sf!=C.of)) goto L_1273461c;
L_12734615:;
  /* 12734615 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734617 jmp 0x127346e6 */
  goto L_127346e6;
L_1273461c:;
  /* 1273461c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273461f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12734622 cmp edx, dword ptr [0x12750e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12750e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734628 jle 0x12734642 */
  if ((C.zf||C.sf!=C.of)) goto L_12734642;
  /* 1273462a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273462d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12734630 cmp ecx, dword ptr [0x12750e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12750e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734636 jge 0x12734642 */
  if ((C.sf==C.of)) goto L_12734642;
  /* 12734638 mov eax, 1 */
  EAX = (0x1u);
  /* 1273463d jmp 0x127346e6 */
  goto L_127346e6;
L_12734642:;
  /* 12734642 jmp 0x12734687 */
  goto L_12734687;
L_12734644:;
  /* 12734644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734647 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1273464a cmp eax, dword ptr [0x12750e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12750e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734650 jl 0x12734660 */
  if ((C.sf!=C.of)) goto L_12734660;
  /* 12734652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734655 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12734658 cmp edx, dword ptr [0x12750e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12750e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273465e jle 0x12734667 */
  if ((C.zf||C.sf!=C.of)) goto L_12734667;
L_12734660:;
  /* 12734660 mov eax, 1 */
  EAX = (0x1u);
  /* 12734665 jmp 0x127346e6 */
  goto L_127346e6;
L_12734667:;
  /* 12734667 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273466a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1273466d cmp ecx, dword ptr [0x12750e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12750e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734673 jle 0x12734687 */
  if ((C.zf||C.sf!=C.of)) goto L_12734687;
  /* 12734675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734678 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1273467b cmp eax, dword ptr [0x12750e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12750e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734681 jge 0x12734687 */
  if ((C.sf==C.of)) goto L_12734687;
  /* 12734683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734685 jmp 0x127346e6 */
  goto L_127346e6;
L_12734687:;
  /* 12734687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273468a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1273468d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734693 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12734695 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273469a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1273469d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127346a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127346a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127346ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127346ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127346b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127346b4 cmp edx, dword ptr [0x12750e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12750e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127346ba jne 0x127346d2 */
  if (!C.zf) goto L_127346d2;
  /* 127346bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127346bf cmp eax, dword ptr [0x12750e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12750e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127346c5 jl 0x127346ce */
  if ((C.sf!=C.of)) goto L_127346ce;
  /* 127346c7 mov eax, 1 */
  EAX = (0x1u);
  /* 127346cc jmp 0x127346e6 */
  goto L_127346e6;
L_127346ce:;
  /* 127346ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127346d0 jmp 0x127346e6 */
  goto L_127346e6;
L_127346d2:;
  /* 127346d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127346d5 cmp ecx, dword ptr [0x12750e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12750e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127346db jge 0x127346e4 */
  if ((C.sf==C.of)) goto L_127346e4;
  /* 127346dd mov eax, 1 */
  EAX = (0x1u);
  /* 127346e2 jmp 0x127346e6 */
  goto L_127346e6;
L_127346e4:;
  /* 127346e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127346e6:;
  /* 127346e6 mov esp, ebp */
  ESP = (EBP);
  /* 127346e8 pop ebp */
  EBP = (pop32());
  /* 127346e9 ret  */
  ESPCHK(0x127343f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146f0 @ 0x127346f0 (504 bytes, 145 insns) */
void f_127346f0(void) {
  FTRACE(0x127346f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127346f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127346f1 mov ebp, esp */
  EBP = (ESP);
  /* 127346f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127346f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127346fa jne 0x127347cc */
  if (!C.zf) goto L_127347cc;
  /* 12734700 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734703 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12734706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734708 jne 0x12734719 */
  if (!C.zf) goto L_12734719;
  /* 1273470a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273470d mov edx, dword ptr [ecx*4 + 0x12750e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12750e4c)));
  /* 12734714 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12734717 jmp 0x12734726 */
  goto L_12734726;
L_12734719:;
  /* 12734719 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273471c mov ecx, dword ptr [eax*4 + 0x12750e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12750e80)));
  /* 12734723 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12734726:;
  /* 12734726 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734729 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273472c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1273472f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734732 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734735 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1273473b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273473e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734740 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734743 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734746 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12734749 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1273474d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1273474e mov ecx, 7 */
  ECX = (0x7u);
  /* 12734753 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12734755 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12734758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273475b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273475e jge 0x12734779 */
  if ((C.sf==C.of)) goto L_12734779;
  /* 12734760 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12734763 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734766 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12734769 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273476c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1273476f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734772 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734774 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12734777 jmp 0x1273478d */
  goto L_1273478d;
L_12734779:;
  /* 12734779 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1273477c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273477f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12734782 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734785 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734788 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273478a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1273478d:;
  /* 1273478d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734791 jne 0x127347ca */
  if (!C.zf) goto L_127347ca;
  /* 12734793 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734796 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12734799 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1273479b jne 0x127347ac */
  if (!C.zf) goto L_127347ac;
  /* 1273479d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127347a0 mov eax, dword ptr [edx*4 + 0x12750e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12750e50)));
  /* 127347a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127347aa jmp 0x127347b9 */
  goto L_127347b9;
L_127347ac:;
  /* 127347ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127347af mov edx, dword ptr [ecx*4 + 0x12750e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12750e84)));
  /* 127347b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127347b9:;
  /* 127347b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127347bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127347bf jle 0x127347ca */
  if ((C.zf||C.sf!=C.of)) goto L_127347ca;
  /* 127347c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127347c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127347c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127347ca:;
  /* 127347ca jmp 0x12734801 */
  goto L_12734801;
L_127347cc:;
  /* 127347cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127347cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127347d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127347d4 jne 0x127347e5 */
  if (!C.zf) goto L_127347e5;
  /* 127347d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127347d9 mov ecx, dword ptr [eax*4 + 0x12750e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12750e4c)));
  /* 127347e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127347e3 jmp 0x127347f2 */
  goto L_127347f2;
L_127347e5:;
  /* 127347e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127347e8 mov eax, dword ptr [edx*4 + 0x12750e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12750e80)));
  /* 127347ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_127347f2:;
  /* 127347f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127347f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127347f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127347fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127347fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12734801:;
  /* 12734801 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734805 jne 0x12734841 */
  if (!C.zf) goto L_12734841;
  /* 12734807 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273480a mov dword ptr [0x12750e2c], eax */
  w32((uint32_t)(0x12750e2c), (EAX));
  /* 1273480f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12734812 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734815 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12734818 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273481a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1273481d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12734820 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734822 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734828 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1273482b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273482d mov dword ptr [0x12750e30], ecx */
  w32((uint32_t)(0x12750e30), (ECX));
  /* 12734833 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734836 mov dword ptr [0x12750e28], edx */
  w32((uint32_t)(0x12750e28), (EDX));
  /* 1273483c jmp 0x127348e4 */
  goto L_127348e4;
L_12734841:;
  /* 12734841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734844 mov dword ptr [0x12750e3c], eax */
  w32((uint32_t)(0x12750e3c), (EAX));
  /* 12734849 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1273484c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1273484f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12734852 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734854 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734857 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1273485a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273485c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734862 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12734865 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734867 mov dword ptr [0x12750e40], ecx */
  w32((uint32_t)(0x12750e40), (ECX));
  /* 1273486d mov edx, dword ptr [0x12750d98] */
  EDX = (r32((uint32_t)(0x12750d98)));
  /* 12734873 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12734879 mov eax, dword ptr [0x12750e40] */
  EAX = (r32((uint32_t)(0x12750e40)));
  /* 1273487e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734880 mov dword ptr [0x12750e40], eax */
  w32((uint32_t)(0x12750e40), (EAX));
  /* 12734885 cmp dword ptr [0x12750e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12750e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273488c jge 0x127348b1 */
  if ((C.sf==C.of)) goto L_127348b1;
  /* 1273488e mov ecx, dword ptr [0x12750e40] */
  ECX = (r32((uint32_t)(0x12750e40)));
  /* 12734894 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273489a mov dword ptr [0x12750e40], ecx */
  w32((uint32_t)(0x12750e40), (ECX));
  /* 127348a0 mov edx, dword ptr [0x12750e3c] */
  EDX = (r32((uint32_t)(0x12750e3c)));
  /* 127348a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127348a9 mov dword ptr [0x12750e3c], edx */
  w32((uint32_t)(0x12750e3c), (EDX));
  /* 127348af jmp 0x127348db */
  goto L_127348db;
L_127348b1:;
  /* 127348b1 cmp dword ptr [0x12750e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12750e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127348bb jl 0x127348db */
  if ((C.sf!=C.of)) goto L_127348db;
  /* 127348bd mov eax, dword ptr [0x12750e40] */
  EAX = (r32((uint32_t)(0x12750e40)));
  /* 127348c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127348c7 mov dword ptr [0x12750e40], eax */
  w32((uint32_t)(0x12750e40), (EAX));
  /* 127348cc mov ecx, dword ptr [0x12750e3c] */
  ECX = (r32((uint32_t)(0x12750e3c)));
  /* 127348d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127348d5 mov dword ptr [0x12750e3c], ecx */
  w32((uint32_t)(0x12750e3c), (ECX));
L_127348db:;
  /* 127348db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127348de mov dword ptr [0x12750e38], edx */
  w32((uint32_t)(0x12750e38), (EDX));
L_127348e4:;
  /* 127348e4 mov esp, ebp */
  ESP = (EBP);
  /* 127348e6 pop ebp */
  EBP = (pop32());
  /* 127348e7 ret  */
  ESPCHK(0x127346f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x127348f0 (382 bytes, 135 insns) */
void f_127348f0(void) {
  FTRACE(0x127348f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127348f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127348f1 mov ebp, esp */
  EBP = (ESP);
  /* 127348f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127348f5 push 0x1274dca8 */
  push32((uint32_t)(0x1274dca8u));
  /* 127348fa push 0x1272e5b8 */
  push32((uint32_t)(0x1272e5b8u));
  /* 127348ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12734905 push eax */
  push32((uint32_t)(EAX));
  /* 12734906 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1273490d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734910 push ebx */
  push32((uint32_t)(EBX));
  /* 12734911 push esi */
  push32((uint32_t)(ESI));
  /* 12734912 push edi */
  push32((uint32_t)(EDI));
  /* 12734913 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12734916 cmp dword ptr [0x127519d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273491d jne 0x12734962 */
  if (!C.zf) goto L_12734962;
  /* 1273491f push 0 */
  push32((uint32_t)(0x0u));
  /* 12734921 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734923 push 1 */
  push32((uint32_t)(0x1u));
  /* 12734925 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734927 call dword ptr [0x127542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542bc))), 0x1273492du);
  /* 1273492d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273492f je 0x1273493d */
  if (C.zf) goto L_1273493d;
  /* 12734931 mov dword ptr [0x127519d4], 1 */
  w32((uint32_t)(0x127519d4), (0x1u));
  /* 1273493b jmp 0x12734962 */
  goto L_12734962;
L_1273493d:;
  /* 1273493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1273493f push 0 */
  push32((uint32_t)(0x0u));
  /* 12734941 push 1 */
  push32((uint32_t)(0x1u));
  /* 12734943 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734945 call dword ptr [0x127542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d4))), 0x1273494bu);
  /* 1273494b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273494d je 0x1273495b */
  if (C.zf) goto L_1273495b;
  /* 1273494f mov dword ptr [0x127519d4], 2 */
  w32((uint32_t)(0x127519d4), (0x2u));
  /* 12734959 jmp 0x12734962 */
  goto L_12734962;
L_1273495b:;
  /* 1273495b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273495d jmp 0x12734a71 */
  goto L_12734a71;
L_12734962:;
  /* 12734962 cmp dword ptr [0x127519d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127519d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734969 jne 0x12734986 */
  if (!C.zf) goto L_12734986;
  /* 1273496b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273496e push eax */
  push32((uint32_t)(EAX));
  /* 1273496f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734972 push ecx */
  push32((uint32_t)(ECX));
  /* 12734973 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12734976 push edx */
  push32((uint32_t)(EDX));
  /* 12734977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273497a push eax */
  push32((uint32_t)(EAX));
  /* 1273497b call dword ptr [0x127542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542bc))), 0x12734981u);
  /* 12734981 jmp 0x12734a71 */
  goto L_12734a71;
L_12734986:;
  /* 12734986 cmp dword ptr [0x127519d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127519d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273498d jne 0x12734a6f */
  if (!C.zf) goto L_12734a6f;
  /* 12734993 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734997 jne 0x127349a2 */
  if (!C.zf) goto L_127349a2;
  /* 12734999 mov ecx, dword ptr [0x12751888] */
  ECX = (r32((uint32_t)(0x12751888)));
  /* 1273499f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_127349a2:;
  /* 127349a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127349a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127349a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127349a9 push edx */
  push32((uint32_t)(EDX));
  /* 127349aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127349ad push eax */
  push32((uint32_t)(EAX));
  /* 127349ae call dword ptr [0x127542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d4))), 0x127349b4u);
  /* 127349b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127349b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127349bb jne 0x127349c4 */
  if (!C.zf) goto L_127349c4;
  /* 127349bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127349bf jmp 0x12734a71 */
  goto L_12734a71;
L_127349c4:;
  /* 127349c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127349cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127349ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127349d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127349d3 call 0x12728650 */
  push32(0x127349d8u); f_12728650();
  /* 127349d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 127349db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127349de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127349e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127349e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127349eb jmp 0x12734a04 */
  goto L_12734a04;
  /* 127349ed mov eax, 1 */
  EAX = (0x1u);
  /* 127349f2 ret  */
  ESPCHK(0x127348f0u, _esp0);
  ESP += 4; return;
  /* 127349f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127349f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127349fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12734a04:;
  /* 12734a04 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734a08 jne 0x12734a0e */
  if (!C.zf) goto L_12734a0e;
  /* 12734a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734a0c jmp 0x12734a71 */
  goto L_12734a71;
L_12734a0e:;
  /* 12734a0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12734a11 push edx */
  push32((uint32_t)(EDX));
  /* 12734a12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12734a15 push eax */
  push32((uint32_t)(EAX));
  /* 12734a16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12734a19 push ecx */
  push32((uint32_t)(ECX));
  /* 12734a1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734a1d push edx */
  push32((uint32_t)(EDX));
  /* 12734a1e call dword ptr [0x127542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d4))), 0x12734a24u);
  /* 12734a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734a26 jne 0x12734a2c */
  if (!C.zf) goto L_12734a2c;
  /* 12734a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734a2a jmp 0x12734a71 */
  goto L_12734a71;
L_12734a2c:;
  /* 12734a2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734a30 jne 0x12734a4d */
  if (!C.zf) goto L_12734a4d;
  /* 12734a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734a36 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734a38 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12734a3b push eax */
  push32((uint32_t)(EAX));
  /* 12734a3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12734a3e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12734a41 push ecx */
  push32((uint32_t)(ECX));
  /* 12734a42 call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x12734a48u);
  /* 12734a48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12734a4b jmp 0x12734a6a */
  goto L_12734a6a;
L_12734a4d:;
  /* 12734a4d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12734a50 push edx */
  push32((uint32_t)(EDX));
  /* 12734a51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734a54 push eax */
  push32((uint32_t)(EAX));
  /* 12734a55 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734a57 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12734a5a push ecx */
  push32((uint32_t)(ECX));
  /* 12734a5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12734a5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12734a60 push edx */
  push32((uint32_t)(EDX));
  /* 12734a61 call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x12734a67u);
  /* 12734a67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12734a6a:;
  /* 12734a6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12734a6d jmp 0x12734a71 */
  goto L_12734a71;
L_12734a6f:;
  /* 12734a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12734a71:;
  /* 12734a71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12734a74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12734a77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12734a7e pop edi */
  EDI = (pop32());
  /* 12734a7f pop esi */
  ESI = (pop32());
  /* 12734a80 pop ebx */
  EBX = (pop32());
  /* 12734a81 mov esp, ebp */
  ESP = (EBP);
  /* 12734a83 pop ebp */
  EBP = (pop32());
  /* 12734a84 ret  */
  ESPCHK(0x127348f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a90 @ 0x12734a90 (398 bytes, 140 insns) */
void f_12734a90(void) {
  FTRACE(0x12734a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12734a91 mov ebp, esp */
  EBP = (ESP);
  /* 12734a93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734a95 push 0x1274dcb8 */
  push32((uint32_t)(0x1274dcb8u));
  /* 12734a9a push 0x1272e5b8 */
  push32((uint32_t)(0x1272e5b8u));
  /* 12734a9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12734aa5 push eax */
  push32((uint32_t)(EAX));
  /* 12734aa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12734aad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 12734ab1 push esi */
  push32((uint32_t)(ESI));
  /* 12734ab2 push edi */
  push32((uint32_t)(EDI));
  /* 12734ab3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12734ab6 cmp dword ptr [0x127519d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734abd jne 0x12734b02 */
  if (!C.zf) goto L_12734b02;
  /* 12734abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12734ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12734ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734ac7 call dword ptr [0x127542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542bc))), 0x12734acdu);
  /* 12734acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734acf je 0x12734add */
  if (C.zf) goto L_12734add;
  /* 12734ad1 mov dword ptr [0x127519d8], 1 */
  w32((uint32_t)(0x127519d8), (0x1u));
  /* 12734adb jmp 0x12734b02 */
  goto L_12734b02;
L_12734add:;
  /* 12734add push 0 */
  push32((uint32_t)(0x0u));
  /* 12734adf push 0 */
  push32((uint32_t)(0x0u));
  /* 12734ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12734ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734ae5 call dword ptr [0x127542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d4))), 0x12734aebu);
  /* 12734aeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734aed je 0x12734afb */
  if (C.zf) goto L_12734afb;
  /* 12734aef mov dword ptr [0x127519d8], 2 */
  w32((uint32_t)(0x127519d8), (0x2u));
  /* 12734af9 jmp 0x12734b02 */
  goto L_12734b02;
L_12734afb:;
  /* 12734afb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734afd jmp 0x12734c21 */
  goto L_12734c21;
L_12734b02:;
  /* 12734b02 cmp dword ptr [0x127519d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127519d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734b09 jne 0x12734b26 */
  if (!C.zf) goto L_12734b26;
  /* 12734b0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12734b0e push eax */
  push32((uint32_t)(EAX));
  /* 12734b0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734b12 push ecx */
  push32((uint32_t)(ECX));
  /* 12734b13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12734b16 push edx */
  push32((uint32_t)(EDX));
  /* 12734b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734b1a push eax */
  push32((uint32_t)(EAX));
  /* 12734b1b call dword ptr [0x127542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542d4))), 0x12734b21u);
  /* 12734b21 jmp 0x12734c21 */
  goto L_12734c21;
L_12734b26:;
  /* 12734b26 cmp dword ptr [0x127519d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127519d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734b2d jne 0x12734c1f */
  if (!C.zf) goto L_12734c1f;
  /* 12734b33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734b37 jne 0x12734b42 */
  if (!C.zf) goto L_12734b42;
  /* 12734b39 mov ecx, dword ptr [0x12751888] */
  ECX = (r32((uint32_t)(0x12751888)));
  /* 12734b3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12734b42:;
  /* 12734b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734b46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12734b49 push edx */
  push32((uint32_t)(EDX));
  /* 12734b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734b4d push eax */
  push32((uint32_t)(EAX));
  /* 12734b4e call dword ptr [0x127542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542bc))), 0x12734b54u);
  /* 12734b54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12734b57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734b5b jne 0x12734b64 */
  if (!C.zf) goto L_12734b64;
  /* 12734b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734b5f jmp 0x12734c21 */
  goto L_12734c21;
L_12734b64:;
  /* 12734b64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12734b6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12734b6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12734b70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734b73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12734b75 call 0x12728650 */
  push32(0x12734b7au); f_12728650();
  /* 12734b7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12734b7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12734b80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12734b83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12734b86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12734b8d jmp 0x12734ba6 */
  goto L_12734ba6;
  /* 12734b8f mov eax, 1 */
  EAX = (0x1u);
  /* 12734b94 ret  */
  ESPCHK(0x12734a90u, _esp0);
  ESP += 4; return;
  /* 12734b95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12734b98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12734b9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12734ba6:;
  /* 12734ba6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734baa jne 0x12734bb0 */
  if (!C.zf) goto L_12734bb0;
  /* 12734bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734bae jmp 0x12734c21 */
  goto L_12734c21;
L_12734bb0:;
  /* 12734bb0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12734bb3 push edx */
  push32((uint32_t)(EDX));
  /* 12734bb4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12734bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12734bb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12734bbb push ecx */
  push32((uint32_t)(ECX));
  /* 12734bbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734bbf push edx */
  push32((uint32_t)(EDX));
  /* 12734bc0 call dword ptr [0x127542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542bc))), 0x12734bc6u);
  /* 12734bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734bc8 jne 0x12734bce */
  if (!C.zf) goto L_12734bce;
  /* 12734bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734bcc jmp 0x12734c21 */
  goto L_12734c21;
L_12734bce:;
  /* 12734bce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734bd2 jne 0x12734bf6 */
  if (!C.zf) goto L_12734bf6;
  /* 12734bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734bda push 0 */
  push32((uint32_t)(0x0u));
  /* 12734bdc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734bde mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12734be1 push eax */
  push32((uint32_t)(EAX));
  /* 12734be2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12734be7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12734bea push ecx */
  push32((uint32_t)(ECX));
  /* 12734beb call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12734bf1u);
  /* 12734bf1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12734bf4 jmp 0x12734c1a */
  goto L_12734c1a;
L_12734bf6:;
  /* 12734bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734bfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12734bfd push edx */
  push32((uint32_t)(EDX));
  /* 12734bfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734c01 push eax */
  push32((uint32_t)(EAX));
  /* 12734c02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734c04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12734c07 push ecx */
  push32((uint32_t)(ECX));
  /* 12734c08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12734c0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12734c10 push edx */
  push32((uint32_t)(EDX));
  /* 12734c11 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12734c17u);
  /* 12734c17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12734c1a:;
  /* 12734c1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12734c1d jmp 0x12734c21 */
  goto L_12734c21;
L_12734c1f:;
  /* 12734c1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12734c21:;
  /* 12734c21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12734c24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12734c27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12734c2e pop edi */
  EDI = (pop32());
  /* 12734c2f pop esi */
  ESI = (pop32());
  /* 12734c30 pop ebx */
  EBX = (pop32());
  /* 12734c31 mov esp, ebp */
  ESP = (EBP);
  /* 12734c33 pop ebp */
  EBP = (pop32());
  /* 12734c34 ret  */
  ESPCHK(0x12734a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c40 @ 0x12734c40 (11 bytes, 6 insns) */
void f_12734c40(void) {
  FTRACE(0x12734c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12734c41 mov ebp, esp */
  EBP = (ESP);
  /* 12734c43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734c46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734c49 pop ebp */
  EBP = (pop32());
  /* 12734c4a ret  */
  ESPCHK(0x12734c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c50 @ 0x12734c50 (147 bytes, 43 insns) */
void f_12734c50(void) {
  FTRACE(0x12734c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12734c51 mov ebp, esp */
  EBP = (ESP);
  /* 12734c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12734c54 cmp dword ptr [0x12751878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734c5b jne 0x12734c77 */
  if (!C.zf) goto L_12734c77;
  /* 12734c5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734c61 jl 0x12734c72 */
  if ((C.sf!=C.of)) goto L_12734c72;
  /* 12734c63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734c67 jg 0x12734c72 */
  if ((!C.zf&&C.sf==C.of)) goto L_12734c72;
  /* 12734c69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734c6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734c6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12734c72:;
  /* 12734c72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734c75 jmp 0x12734cdf */
  goto L_12734cdf;
L_12734c77:;
  /* 12734c77 push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 12734c7c call dword ptr [0x12754374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754374))), 0x12734c82u);
  /* 12734c82 cmp dword ptr [0x127519f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734c89 je 0x12734ca9 */
  if (C.zf) goto L_12734ca9;
  /* 12734c8b push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 12734c90 call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x12734c96u);
  /* 12734c96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12734c98 call 0x12728eb0 */
  push32(0x12734c9du); f_12728eb0();
  /* 12734c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734ca0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12734ca7 jmp 0x12734cb0 */
  goto L_12734cb0;
L_12734ca9:;
  /* 12734ca9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12734cb0:;
  /* 12734cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12734cb4 call 0x12734cf0 */
  push32(0x12734cb9u); f_12734cf0();
  /* 12734cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734cbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12734cbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734cc3 je 0x12734cd1 */
  if (C.zf) goto L_12734cd1;
  /* 12734cc5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12734cc7 call 0x12728f50 */
  push32(0x12734cccu); f_12728f50();
  /* 12734ccc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734ccf jmp 0x12734cdc */
  goto L_12734cdc;
L_12734cd1:;
  /* 12734cd1 push 0x12751a04 */
  push32((uint32_t)(0x12751a04u));
  /* 12734cd6 call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x12734cdcu);
L_12734cdc:;
  /* 12734cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12734cdf:;
  /* 12734cdf mov esp, ebp */
  ESP = (EBP);
  /* 12734ce1 pop ebp */
  EBP = (pop32());
  /* 12734ce2 ret  */
  ESPCHK(0x12734c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cf0 @ 0x12734cf0 (299 bytes, 91 insns) */
void f_12734cf0(void) {
  FTRACE(0x12734cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12734cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12734cf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734cf6 cmp dword ptr [0x12751878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734cfd jne 0x12734d1c */
  if (!C.zf) goto L_12734d1c;
  /* 12734cff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734d03 jl 0x12734d14 */
  if ((C.sf!=C.of)) goto L_12734d14;
  /* 12734d05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734d09 jg 0x12734d14 */
  if ((!C.zf&&C.sf==C.of)) goto L_12734d14;
  /* 12734d0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734d11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12734d14:;
  /* 12734d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d17 jmp 0x12734e17 */
  goto L_12734e17;
L_12734d1c:;
  /* 12734d1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734d23 jge 0x12734d63 */
  if ((C.sf==C.of)) goto L_12734d63;
  /* 12734d25 cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734d2c jle 0x12734d41 */
  if ((C.zf||C.sf!=C.of)) goto L_12734d41;
  /* 12734d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12734d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12734d34 call 0x1272b4c0 */
  push32(0x12734d39u); f_1272b4c0();
  /* 12734d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734d3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12734d3f jmp 0x12734d55 */
  goto L_12734d55;
L_12734d41:;
  /* 12734d41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d44 mov eax, dword ptr [0x1274fc98] */
  EAX = (r32((uint32_t)(0x1274fc98)));
  /* 12734d49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734d4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12734d4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12734d52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12734d55:;
  /* 12734d55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734d59 jne 0x12734d63 */
  if (!C.zf) goto L_12734d63;
  /* 12734d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d5e jmp 0x12734e17 */
  goto L_12734e17;
L_12734d63:;
  /* 12734d63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12734d69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12734d6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12734d75 mov eax, dword ptr [0x1274fc98] */
  EAX = (r32((uint32_t)(0x1274fc98)));
  /* 12734d7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12734d7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12734d80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12734d86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12734d88 je 0x12734dac */
  if (C.zf) goto L_12734dac;
  /* 12734d8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734d8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12734d90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12734d96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12734d99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12734d9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12734d9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12734da3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12734daa jmp 0x12734dbd */
  goto L_12734dbd;
L_12734dac:;
  /* 12734dac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12734daf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12734db2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12734db6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12734dbd:;
  /* 12734dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12734dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12734dc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12734dc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12734dc6 push edx */
  push32((uint32_t)(EDX));
  /* 12734dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734dca push eax */
  push32((uint32_t)(EAX));
  /* 12734dcb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12734dce push ecx */
  push32((uint32_t)(ECX));
  /* 12734dcf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12734dd4 mov edx, dword ptr [0x12751878] */
  EDX = (r32((uint32_t)(0x12751878)));
  /* 12734dda push edx */
  push32((uint32_t)(EDX));
  /* 12734ddb call 0x1272d8a0 */
  push32(0x12734de0u); f_1272d8a0();
  /* 12734de0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734de3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12734de6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734dea jne 0x12734df1 */
  if (!C.zf) goto L_12734df1;
  /* 12734dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734def jmp 0x12734e17 */
  goto L_12734e17;
L_12734df1:;
  /* 12734df1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734df5 jne 0x12734e01 */
  if (!C.zf) goto L_12734e01;
  /* 12734df7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734dfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12734dff jmp 0x12734e17 */
  goto L_12734e17;
L_12734e01:;
  /* 12734e01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734e04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12734e09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12734e0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12734e12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12734e15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12734e17:;
  /* 12734e17 mov esp, ebp */
  ESP = (EBP);
  /* 12734e19 pop ebp */
  EBP = (pop32());
  /* 12734e1a ret  */
  ESPCHK(0x12734cf0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12734e20 (52 bytes, 19 insns) */
void f_12734e20(void) {
  FTRACE(0x12734e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734e20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12734e24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12734e28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12734e2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12734e2e jne 0x12734e39 */
  if (!C.zf) goto L_12734e39;
  /* 12734e30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12734e34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12734e36 ret 0x10 */
  ESPCHK(0x12734e20u, _esp0);
  ESP += 20; return;
L_12734e39:;
  /* 12734e39 push ebx */
  push32((uint32_t)(EBX));
  /* 12734e3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12734e3c mov ebx, eax */
  EBX = (EAX);
  /* 12734e3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12734e42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12734e46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734e48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12734e4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12734e4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734e50 pop ebx */
  EBX = (pop32());
  /* 12734e51 ret 0x10 */
  ESPCHK(0x12734e20u, _esp0);
  ESP += 20; return;
}

/* FUN_10014e60 @ 0x12734e60 (46 bytes, 18 insns) */
void f_12734e60(void) {
  FTRACE(0x12734e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12734e61 mov ebp, esp */
  EBP = (ESP);
  /* 12734e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12734e64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12734e66 call 0x12728eb0 */
  push32(0x12734e6bu); f_12728eb0();
  /* 12734e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734e6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734e71 push eax */
  push32((uint32_t)(EAX));
  /* 12734e72 call 0x12734e90 */
  push32(0x12734e77u); f_12734e90();
  /* 12734e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734e7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12734e7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12734e7f call 0x12728f50 */
  push32(0x12734e84u); f_12728f50();
  /* 12734e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734e8a mov esp, ebp */
  ESP = (EBP);
  /* 12734e8c pop ebp */
  EBP = (pop32());
  /* 12734e8d ret  */
  ESPCHK(0x12734e60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12734e90 (198 bytes, 69 insns) */
void f_12734e90(void) {
  FTRACE(0x12734e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12734e91 mov ebp, esp */
  EBP = (ESP);
  /* 12734e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734e96 mov eax, dword ptr [0x12751698] */
  EAX = (r32((uint32_t)(0x12751698)));
  /* 12734e9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12734e9e cmp dword ptr [0x127531a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734ea5 jne 0x12734eae */
  if (!C.zf) goto L_12734eae;
  /* 12734ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734ea9 jmp 0x12734f52 */
  goto L_12734f52;
L_12734eae:;
  /* 12734eae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734eb2 jne 0x12734ed6 */
  if (!C.zf) goto L_12734ed6;
  /* 12734eb4 cmp dword ptr [0x127516a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734ebb je 0x12734ed6 */
  if (C.zf) goto L_12734ed6;
  /* 12734ebd call 0x12734fb0 */
  push32(0x12734ec2u); f_12734fb0();
  /* 12734ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734ec4 je 0x12734ecd */
  if (C.zf) goto L_12734ecd;
  /* 12734ec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734ec8 jmp 0x12734f52 */
  goto L_12734f52;
L_12734ecd:;
  /* 12734ecd mov ecx, dword ptr [0x12751698] */
  ECX = (r32((uint32_t)(0x12751698)));
  /* 12734ed3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12734ed6:;
  /* 12734ed6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734eda je 0x12734f50 */
  if (C.zf) goto L_12734f50;
  /* 12734edc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734ee0 je 0x12734f50 */
  if (C.zf) goto L_12734f50;
  /* 12734ee2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734ee5 push edx */
  push32((uint32_t)(EDX));
  /* 12734ee6 call 0x127282e0 */
  push32(0x12734eebu); f_127282e0();
  /* 12734eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734eee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12734ef1:;
  /* 12734ef1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734ef4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734ef7 je 0x12734f50 */
  if (C.zf) goto L_12734f50;
  /* 12734ef9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734efc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12734efe push edx */
  push32((uint32_t)(EDX));
  /* 12734eff call 0x127282e0 */
  push32(0x12734f04u); f_127282e0();
  /* 12734f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734f07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734f0a jbe 0x12734f45 */
  if ((C.cf||C.zf)) goto L_12734f45;
  /* 12734f0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734f0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12734f11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734f14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12734f18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734f1b jne 0x12734f45 */
  if (!C.zf) goto L_12734f45;
  /* 12734f1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734f20 push ecx */
  push32((uint32_t)(ECX));
  /* 12734f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734f24 push edx */
  push32((uint32_t)(EDX));
  /* 12734f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734f28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12734f2a push ecx */
  push32((uint32_t)(ECX));
  /* 12734f2b call 0x12734f60 */
  push32(0x12734f30u); f_12734f60();
  /* 12734f30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12734f35 jne 0x12734f45 */
  if (!C.zf) goto L_12734f45;
  /* 12734f37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734f3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12734f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734f3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12734f43 jmp 0x12734f52 */
  goto L_12734f52;
L_12734f45:;
  /* 12734f45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12734f48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12734f4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12734f4e jmp 0x12734ef1 */
  goto L_12734ef1;
L_12734f50:;
  /* 12734f50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12734f52:;
  /* 12734f52 mov esp, ebp */
  ESP = (EBP);
  /* 12734f54 pop ebp */
  EBP = (pop32());
  /* 12734f55 ret  */
  ESPCHK(0x12734e90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12734f60 (79 bytes, 32 insns) */
void f_12734f60(void) {
  FTRACE(0x12734f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12734f61 mov ebp, esp */
  EBP = (ESP);
  /* 12734f63 push ecx */
  push32((uint32_t)(ECX));
  /* 12734f64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734f68 jne 0x12734f6e */
  if (!C.zf) goto L_12734f6e;
  /* 12734f6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12734f6c jmp 0x12734fab */
  goto L_12734fab;
L_12734f6e:;
  /* 12734f6e mov eax, dword ptr [0x12752d64] */
  EAX = (r32((uint32_t)(0x12752d64)));
  /* 12734f73 push eax */
  push32((uint32_t)(EAX));
  /* 12734f74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734f77 push ecx */
  push32((uint32_t)(ECX));
  /* 12734f78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12734f7b push edx */
  push32((uint32_t)(EDX));
  /* 12734f7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12734f7f push eax */
  push32((uint32_t)(EAX));
  /* 12734f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12734f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12734f84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12734f86 mov edx, dword ptr [0x12753004] */
  EDX = (r32((uint32_t)(0x12753004)));
  /* 12734f8c push edx */
  push32((uint32_t)(EDX));
  /* 12734f8d call 0x12735060 */
  push32(0x12734f92u); f_12735060();
  /* 12734f92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12734f95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12734f98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734f9c jne 0x12734fa5 */
  if (!C.zf) goto L_12734fa5;
  /* 12734f9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12734fa3 jmp 0x12734fab */
  goto L_12734fab;
L_12734fa5:;
  /* 12734fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734fa8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12734fab:;
  /* 12734fab mov esp, ebp */
  ESP = (EBP);
  /* 12734fad pop ebp */
  EBP = (pop32());
  /* 12734fae ret  */
  ESPCHK(0x12734f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fb0 @ 0x12734fb0 (174 bytes, 66 insns) */
void f_12734fb0(void) {
  FTRACE(0x12734fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12734fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12734fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12734fb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12734fb6 mov eax, dword ptr [0x127516a0] */
  EAX = (r32((uint32_t)(0x127516a0)));
  /* 12734fbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12734fbe:;
  /* 12734fbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734fc1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734fc4 je 0x12735058 */
  if (C.zf) goto L_12735058;
  /* 12734fca push 0 */
  push32((uint32_t)(0x0u));
  /* 12734fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 12734fce push 0 */
  push32((uint32_t)(0x0u));
  /* 12734fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12734fd2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12734fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12734fd7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12734fd9 push eax */
  push32((uint32_t)(EAX));
  /* 12734fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12734fdc push 1 */
  push32((uint32_t)(0x1u));
  /* 12734fde call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12734fe4u);
  /* 12734fe4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12734fe7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12734feb jne 0x12734ff2 */
  if (!C.zf) goto L_12734ff2;
  /* 12734fed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12734ff0 jmp 0x1273505a */
  goto L_1273505a;
L_12734ff2:;
  /* 12734ff2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12734ff4 push 0x1274dcc4 */
  push32((uint32_t)(0x1274dcc4u));
  /* 12734ff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12734ffb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12734ffe push ecx */
  push32((uint32_t)(ECX));
  /* 12734fff call 0x127254b0 */
  push32(0x12735004u); f_127254b0();
  /* 12735004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735007 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1273500a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273500e jne 0x12735015 */
  if (!C.zf) goto L_12735015;
  /* 12735010 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12735013 jmp 0x1273505a */
  goto L_1273505a;
L_12735015:;
  /* 12735015 push 0 */
  push32((uint32_t)(0x0u));
  /* 12735017 push 0 */
  push32((uint32_t)(0x0u));
  /* 12735019 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273501c push edx */
  push32((uint32_t)(EDX));
  /* 1273501d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735020 push eax */
  push32((uint32_t)(EAX));
  /* 12735021 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12735023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12735026 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12735028 push edx */
  push32((uint32_t)(EDX));
  /* 12735029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1273502b push 1 */
  push32((uint32_t)(0x1u));
  /* 1273502d call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12735033u);
  /* 12735033 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12735035 jne 0x1273503c */
  if (!C.zf) goto L_1273503c;
  /* 12735037 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1273503a jmp 0x1273505a */
  goto L_1273505a;
L_1273503c:;
  /* 1273503c push 0 */
  push32((uint32_t)(0x0u));
  /* 1273503e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735041 push eax */
  push32((uint32_t)(EAX));
  /* 12735042 call 0x127354b0 */
  push32(0x12735047u); f_127354b0();
  /* 12735047 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273504a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273504d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735050 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12735053 jmp 0x12734fbe */
  goto L_12734fbe;
L_12735058:;
  /* 12735058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1273505a:;
  /* 1273505a mov esp, ebp */
  ESP = (EBP);
  /* 1273505c pop ebp */
  EBP = (pop32());
  /* 1273505d ret  */
  ESPCHK(0x12734fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015060 @ 0x12735060 (970 bytes, 340 insns) */
void f_12735060(void) {
  FTRACE(0x12735060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735060 push ebp */
  push32((uint32_t)(EBP));
  /* 12735061 mov ebp, esp */
  EBP = (ESP);
  /* 12735063 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12735065 push 0x1274dd18 */
  push32((uint32_t)(0x1274dd18u));
  /* 1273506a push 0x1272e5b8 */
  push32((uint32_t)(0x1272e5b8u));
  /* 1273506f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12735075 push eax */
  push32((uint32_t)(EAX));
  /* 12735076 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1273507d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735080 push ebx */
  push32((uint32_t)(EBX));
  /* 12735081 push esi */
  push32((uint32_t)(ESI));
  /* 12735082 push edi */
  push32((uint32_t)(EDI));
  /* 12735083 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12735086 cmp dword ptr [0x127519dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127519dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273508d jne 0x127350e6 */
  if (!C.zf) goto L_127350e6;
  /* 1273508f push 1 */
  push32((uint32_t)(0x1u));
  /* 12735091 push 0x1274d370 */
  push32((uint32_t)(0x1274d370u));
  /* 12735096 push 1 */
  push32((uint32_t)(0x1u));
  /* 12735098 push 0x1274d370 */
  push32((uint32_t)(0x1274d370u));
  /* 1273509d push 0 */
  push32((uint32_t)(0x0u));
  /* 1273509f push 0 */
  push32((uint32_t)(0x0u));
  /* 127350a1 call dword ptr [0x127542b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542b4))), 0x127350a7u);
  /* 127350a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127350a9 je 0x127350b7 */
  if (C.zf) goto L_127350b7;
  /* 127350ab mov dword ptr [0x127519dc], 1 */
  w32((uint32_t)(0x127519dc), (0x1u));
  /* 127350b5 jmp 0x127350e6 */
  goto L_127350e6;
L_127350b7:;
  /* 127350b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127350b9 push 0x1274d36c */
  push32((uint32_t)(0x1274d36cu));
  /* 127350be push 1 */
  push32((uint32_t)(0x1u));
  /* 127350c0 push 0x1274d36c */
  push32((uint32_t)(0x1274d36cu));
  /* 127350c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127350c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127350c9 call dword ptr [0x127542b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542b8))), 0x127350cfu);
  /* 127350cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127350d1 je 0x127350df */
  if (C.zf) goto L_127350df;
  /* 127350d3 mov dword ptr [0x127519dc], 2 */
  w32((uint32_t)(0x127519dc), (0x2u));
  /* 127350dd jmp 0x127350e6 */
  goto L_127350e6;
L_127350df:;
  /* 127350df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127350e1 jmp 0x12735444 */
  goto L_12735444;
L_127350e6:;
  /* 127350e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127350ea jle 0x127350ff */
  if ((C.zf||C.sf!=C.of)) goto L_127350ff;
  /* 127350ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127350ef push eax */
  push32((uint32_t)(EAX));
  /* 127350f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127350f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127350f4 call 0x12735460 */
  push32(0x127350f9u); f_12735460();
  /* 127350f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127350fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_127350ff:;
  /* 127350ff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735103 jle 0x12735118 */
  if ((C.zf||C.sf!=C.of)) goto L_12735118;
  /* 12735105 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12735108 push edx */
  push32((uint32_t)(EDX));
  /* 12735109 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1273510c push eax */
  push32((uint32_t)(EAX));
  /* 1273510d call 0x12735460 */
  push32(0x12735112u); f_12735460();
  /* 12735112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735115 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12735118:;
  /* 12735118 cmp dword ptr [0x127519dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127519dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273511f jne 0x12735144 */
  if (!C.zf) goto L_12735144;
  /* 12735121 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12735124 push ecx */
  push32((uint32_t)(ECX));
  /* 12735125 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12735128 push edx */
  push32((uint32_t)(EDX));
  /* 12735129 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273512c push eax */
  push32((uint32_t)(EAX));
  /* 1273512d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12735130 push ecx */
  push32((uint32_t)(ECX));
  /* 12735131 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12735134 push edx */
  push32((uint32_t)(EDX));
  /* 12735135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735138 push eax */
  push32((uint32_t)(EAX));
  /* 12735139 call dword ptr [0x127542b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542b8))), 0x1273513fu);
  /* 1273513f jmp 0x12735444 */
  goto L_12735444;
L_12735144:;
  /* 12735144 cmp dword ptr [0x127519dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127519dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273514b jne 0x12735442 */
  if (!C.zf) goto L_12735442;
  /* 12735151 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735155 jne 0x12735160 */
  if (!C.zf) goto L_12735160;
  /* 12735157 mov ecx, dword ptr [0x12751888] */
  ECX = (r32((uint32_t)(0x12751888)));
  /* 1273515d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12735160:;
  /* 12735160 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735164 je 0x12735170 */
  if (C.zf) goto L_12735170;
  /* 12735166 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273516a jne 0x127352ec */
  if (!C.zf) goto L_127352ec;
L_12735170:;
  /* 12735170 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12735173 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735176 jne 0x12735182 */
  if (!C.zf) goto L_12735182;
  /* 12735178 mov eax, 2 */
  EAX = (0x2u);
  /* 1273517d jmp 0x12735444 */
  goto L_12735444;
L_12735182:;
  /* 12735182 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735186 jle 0x12735192 */
  if ((C.zf||C.sf!=C.of)) goto L_12735192;
  /* 12735188 mov eax, 1 */
  EAX = (0x1u);
  /* 1273518d jmp 0x12735444 */
  goto L_12735444;
L_12735192:;
  /* 12735192 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735196 jle 0x127351a2 */
  if ((C.zf||C.sf!=C.of)) goto L_127351a2;
  /* 12735198 mov eax, 3 */
  EAX = (0x3u);
  /* 1273519d jmp 0x12735444 */
  goto L_12735444;
L_127351a2:;
  /* 127351a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 127351a5 push eax */
  push32((uint32_t)(EAX));
  /* 127351a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 127351a9 push ecx */
  push32((uint32_t)(ECX));
  /* 127351aa call dword ptr [0x12754310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754310))), 0x127351b0u);
  /* 127351b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127351b2 jne 0x127351bb */
  if (!C.zf) goto L_127351bb;
  /* 127351b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127351b6 jmp 0x12735444 */
  goto L_12735444;
L_127351bb:;
  /* 127351bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127351bf jne 0x127351c7 */
  if (!C.zf) goto L_127351c7;
  /* 127351c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127351c5 je 0x127351f4 */
  if (C.zf) goto L_127351f4;
L_127351c7:;
  /* 127351c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127351cb jne 0x127351d3 */
  if (!C.zf) goto L_127351d3;
  /* 127351cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127351d1 je 0x127351f4 */
  if (C.zf) goto L_127351f4;
L_127351d3:;
  /* 127351d3 push 0x1274dcd8 */
  push32((uint32_t)(0x1274dcd8u));
  /* 127351d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127351da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 127351df push 0x1274dcd0 */
  push32((uint32_t)(0x1274dcd0u));
  /* 127351e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127351e6 call 0x12724570 */
  push32(0x127351ebu); f_12724570();
  /* 127351eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127351ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127351f1 jne 0x127351f4 */
  if (!C.zf) goto L_127351f4;
  /* 127351f3 int3  */
  x86_unimpl("int3 @ 0x127351f3");
L_127351f4:;
  /* 127351f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127351f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127351f8 jne 0x127351bb */
  if (!C.zf) goto L_127351bb;
  /* 127351fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127351fe jle 0x12735273 */
  if ((C.zf||C.sf!=C.of)) goto L_12735273;
  /* 12735200 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735204 jae 0x12735210 */
  if (!C.cf) goto L_12735210;
  /* 12735206 mov eax, 3 */
  EAX = (0x3u);
  /* 1273520b jmp 0x12735444 */
  goto L_12735444;
L_12735210:;
  /* 12735210 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12735213 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12735216 jmp 0x12735221 */
  goto L_12735221;
L_12735218:;
  /* 12735218 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1273521b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273521e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12735221:;
  /* 12735221 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12735224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735226 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12735228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273522a je 0x12735269 */
  if (C.zf) goto L_12735269;
  /* 1273522c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1273522f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12735231 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12735234 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12735236 je 0x12735269 */
  if (C.zf) goto L_12735269;
  /* 12735238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273523b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1273523d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1273523f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12735242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735244 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12735246 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735248 jl 0x12735267 */
  if ((C.sf!=C.of)) goto L_12735267;
  /* 1273524a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1273524d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1273524f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12735251 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12735254 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12735256 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12735259 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273525b jg 0x12735267 */
  if ((!C.zf&&C.sf==C.of)) goto L_12735267;
  /* 1273525d mov eax, 2 */
  EAX = (0x2u);
  /* 12735262 jmp 0x12735444 */
  goto L_12735444;
L_12735267:;
  /* 12735267 jmp 0x12735218 */
  goto L_12735218;
L_12735269:;
  /* 12735269 mov eax, 3 */
  EAX = (0x3u);
  /* 1273526e jmp 0x12735444 */
  goto L_12735444;
L_12735273:;
  /* 12735273 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735277 jle 0x127352ec */
  if ((C.zf||C.sf!=C.of)) goto L_127352ec;
  /* 12735279 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273527d jae 0x12735289 */
  if (!C.cf) goto L_12735289;
  /* 1273527f mov eax, 1 */
  EAX = (0x1u);
  /* 12735284 jmp 0x12735444 */
  goto L_12735444;
L_12735289:;
  /* 12735289 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1273528c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1273528f jmp 0x1273529a */
  goto L_1273529a;
L_12735291:;
  /* 12735291 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12735294 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735297 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1273529a:;
  /* 1273529a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1273529d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1273529f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127352a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127352a3 je 0x127352e2 */
  if (C.zf) goto L_127352e2;
  /* 127352a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127352a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127352aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127352ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127352af je 0x127352e2 */
  if (C.zf) goto L_127352e2;
  /* 127352b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127352b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127352b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127352b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127352bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127352bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127352bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127352c1 jl 0x127352e0 */
  if ((C.sf!=C.of)) goto L_127352e0;
  /* 127352c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127352c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127352c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127352ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127352cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127352cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127352d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127352d4 jg 0x127352e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_127352e0;
  /* 127352d6 mov eax, 2 */
  EAX = (0x2u);
  /* 127352db jmp 0x12735444 */
  goto L_12735444;
L_127352e0:;
  /* 127352e0 jmp 0x12735291 */
  goto L_12735291;
L_127352e2:;
  /* 127352e2 mov eax, 1 */
  EAX = (0x1u);
  /* 127352e7 jmp 0x12735444 */
  goto L_12735444;
L_127352ec:;
  /* 127352ec push 0 */
  push32((uint32_t)(0x0u));
  /* 127352ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127352f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127352f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127352f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127352f7 push edx */
  push32((uint32_t)(EDX));
  /* 127352f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 127352fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127352fd push eax */
  push32((uint32_t)(EAX));
  /* 127352fe call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x12735304u);
  /* 12735304 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12735307 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273530b jne 0x12735314 */
  if (!C.zf) goto L_12735314;
  /* 1273530d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273530f jmp 0x12735444 */
  goto L_12735444;
L_12735314:;
  /* 12735314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1273531b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1273531e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12735320 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735323 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12735325 call 0x12728650 */
  push32(0x1273532au); f_12728650();
  /* 1273532a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1273532d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12735330 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12735333 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12735336 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1273533d jmp 0x12735356 */
  goto L_12735356;
  /* 1273533f mov eax, 1 */
  EAX = (0x1u);
  /* 12735344 ret  */
  ESPCHK(0x12735060u, _esp0);
  ESP += 4; return;
  /* 12735345 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12735348 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1273534f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12735356:;
  /* 12735356 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273535a jne 0x12735363 */
  if (!C.zf) goto L_12735363;
  /* 1273535c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273535e jmp 0x12735444 */
  goto L_12735444;
L_12735363:;
  /* 12735363 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12735366 push edx */
  push32((uint32_t)(EDX));
  /* 12735367 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1273536a push eax */
  push32((uint32_t)(EAX));
  /* 1273536b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1273536e push ecx */
  push32((uint32_t)(ECX));
  /* 1273536f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12735372 push edx */
  push32((uint32_t)(EDX));
  /* 12735373 push 1 */
  push32((uint32_t)(0x1u));
  /* 12735375 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12735378 push eax */
  push32((uint32_t)(EAX));
  /* 12735379 call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x1273537fu);
  /* 1273537f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12735381 jne 0x1273538a */
  if (!C.zf) goto L_1273538a;
  /* 12735383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735385 jmp 0x12735444 */
  goto L_12735444;
L_1273538a:;
  /* 1273538a push 0 */
  push32((uint32_t)(0x0u));
  /* 1273538c push 0 */
  push32((uint32_t)(0x0u));
  /* 1273538e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12735391 push ecx */
  push32((uint32_t)(ECX));
  /* 12735392 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12735395 push edx */
  push32((uint32_t)(EDX));
  /* 12735396 push 9 */
  push32((uint32_t)(0x9u));
  /* 12735398 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1273539b push eax */
  push32((uint32_t)(EAX));
  /* 1273539c call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x127353a2u);
  /* 127353a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127353a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127353a9 jne 0x127353b2 */
  if (!C.zf) goto L_127353b2;
  /* 127353ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127353ad jmp 0x12735444 */
  goto L_12735444;
L_127353b2:;
  /* 127353b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127353b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127353bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127353be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127353c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127353c3 call 0x12728650 */
  push32(0x127353c8u); f_12728650();
  /* 127353c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 127353cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127353ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 127353d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127353d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127353db jmp 0x127353f4 */
  goto L_127353f4;
  /* 127353dd mov eax, 1 */
  EAX = (0x1u);
  /* 127353e2 ret  */
  ESPCHK(0x12735060u, _esp0);
  ESP += 4; return;
  /* 127353e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127353e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 127353ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127353f4:;
  /* 127353f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127353f8 jne 0x127353fe */
  if (!C.zf) goto L_127353fe;
  /* 127353fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127353fc jmp 0x12735444 */
  goto L_12735444;
L_127353fe:;
  /* 127353fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12735401 push edx */
  push32((uint32_t)(EDX));
  /* 12735402 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12735405 push eax */
  push32((uint32_t)(EAX));
  /* 12735406 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12735409 push ecx */
  push32((uint32_t)(ECX));
  /* 1273540a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1273540d push edx */
  push32((uint32_t)(EDX));
  /* 1273540e push 1 */
  push32((uint32_t)(0x1u));
  /* 12735410 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12735413 push eax */
  push32((uint32_t)(EAX));
  /* 12735414 call dword ptr [0x12754304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754304))), 0x1273541au);
  /* 1273541a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1273541c jne 0x12735422 */
  if (!C.zf) goto L_12735422;
  /* 1273541e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735420 jmp 0x12735444 */
  goto L_12735444;
L_12735422:;
  /* 12735422 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12735425 push ecx */
  push32((uint32_t)(ECX));
  /* 12735426 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12735429 push edx */
  push32((uint32_t)(EDX));
  /* 1273542a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1273542d push eax */
  push32((uint32_t)(EAX));
  /* 1273542e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12735431 push ecx */
  push32((uint32_t)(ECX));
  /* 12735432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12735435 push edx */
  push32((uint32_t)(EDX));
  /* 12735436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735439 push eax */
  push32((uint32_t)(EAX));
  /* 1273543a call dword ptr [0x127542b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542b4))), 0x12735440u);
  /* 12735440 jmp 0x12735444 */
  goto L_12735444;
L_12735442:;
  /* 12735442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12735444:;
  /* 12735444 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12735447 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1273544a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12735451 pop edi */
  EDI = (pop32());
  /* 12735452 pop esi */
  ESI = (pop32());
  /* 12735453 pop ebx */
  EBX = (pop32());
  /* 12735454 mov esp, ebp */
  ESP = (EBP);
  /* 12735456 pop ebp */
  EBP = (pop32());
  /* 12735457 ret  */
  ESPCHK(0x12735060u, _esp0);
  ESP += 4; return;
}

/* FUN_10015460 @ 0x12735460 (80 bytes, 32 insns) */
void f_12735460(void) {
  FTRACE(0x12735460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735460 push ebp */
  push32((uint32_t)(EBP));
  /* 12735461 mov ebp, esp */
  EBP = (ESP);
  /* 12735463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12735466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12735469 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1273546c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273546f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12735472:;
  /* 12735472 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735475 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735478 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273547b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1273547e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12735480 je 0x12735497 */
  if (C.zf) goto L_12735497;
  /* 12735482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12735485 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12735488 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1273548a je 0x12735497 */
  if (C.zf) goto L_12735497;
  /* 1273548c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273548f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12735495 jmp 0x12735472 */
  goto L_12735472;
L_12735497:;
  /* 12735497 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273549a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1273549d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1273549f jne 0x127354a9 */
  if (!C.zf) goto L_127354a9;
  /* 127354a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127354a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127354a7 jmp 0x127354ac */
  goto L_127354ac;
L_127354a9:;
  /* 127354a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_127354ac:;
  /* 127354ac mov esp, ebp */
  ESP = (EBP);
  /* 127354ae pop ebp */
  EBP = (pop32());
  /* 127354af ret  */
  ESPCHK(0x12735460u, _esp0);
  ESP += 4; return;
}

/* FUN_100154b0 @ 0x127354b0 (736 bytes, 224 insns) */
void f_127354b0(void) {
  FTRACE(0x127354b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127354b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127354b1 mov ebp, esp */
  EBP = (ESP);
  /* 127354b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127354b6 push esi */
  push32((uint32_t)(ESI));
  /* 127354b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127354bb je 0x127354dc */
  if (C.zf) goto L_127354dc;
  /* 127354bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127354bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127354c2 push eax */
  push32((uint32_t)(EAX));
  /* 127354c3 call 0x12735900 */
  push32(0x127354c8u); f_12735900();
  /* 127354c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127354cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127354ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127354d2 je 0x127354dc */
  if (C.zf) goto L_127354dc;
  /* 127354d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127354d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127354da jne 0x127354e4 */
  if (!C.zf) goto L_127354e4;
L_127354dc:;
  /* 127354dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127354df jmp 0x1273578b */
  goto L_1273578b;
L_127354e4:;
  /* 127354e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127354e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127354eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127354ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127354ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 127354f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127354f3 mov ecx, dword ptr [0x12751698] */
  ECX = (r32((uint32_t)(0x12751698)));
  /* 127354f9 cmp ecx, dword ptr [0x1275169c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1275169c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127354ff jne 0x12735515 */
  if (!C.zf) goto L_12735515;
  /* 12735501 mov edx, dword ptr [0x12751698] */
  EDX = (r32((uint32_t)(0x12751698)));
  /* 12735507 push edx */
  push32((uint32_t)(EDX));
  /* 12735508 call 0x12735810 */
  push32(0x1273550du); f_12735810();
  /* 1273550d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735510 mov dword ptr [0x12751698], eax */
  w32((uint32_t)(0x12751698), (EAX));
L_12735515:;
  /* 12735515 cmp dword ptr [0x12751698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273551c jne 0x127355d5 */
  if (!C.zf) goto L_127355d5;
  /* 12735522 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735526 je 0x12735547 */
  if (C.zf) goto L_12735547;
  /* 12735528 cmp dword ptr [0x127516a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273552f je 0x12735547 */
  if (C.zf) goto L_12735547;
  /* 12735531 call 0x12734fb0 */
  push32(0x12735536u); f_12734fb0();
  /* 12735536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12735538 je 0x12735542 */
  if (C.zf) goto L_12735542;
  /* 1273553a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1273553d jmp 0x1273578b */
  goto L_1273578b;
L_12735542:;
  /* 12735542 jmp 0x127355d5 */
  goto L_127355d5;
L_12735547:;
  /* 12735547 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273554b je 0x12735554 */
  if (C.zf) goto L_12735554;
  /* 1273554d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273554f jmp 0x1273578b */
  goto L_1273578b;
L_12735554:;
  /* 12735554 cmp dword ptr [0x12751698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273555b jne 0x12735594 */
  if (!C.zf) goto L_12735594;
  /* 1273555d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12735562 push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 12735567 push 2 */
  push32((uint32_t)(0x2u));
  /* 12735569 push 4 */
  push32((uint32_t)(0x4u));
  /* 1273556b call 0x127254b0 */
  push32(0x12735570u); f_127254b0();
  /* 12735570 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735573 mov dword ptr [0x12751698], eax */
  w32((uint32_t)(0x12751698), (EAX));
  /* 12735578 cmp dword ptr [0x12751698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273557f jne 0x12735589 */
  if (!C.zf) goto L_12735589;
  /* 12735581 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12735584 jmp 0x1273578b */
  goto L_1273578b;
L_12735589:;
  /* 12735589 mov eax, dword ptr [0x12751698] */
  EAX = (r32((uint32_t)(0x12751698)));
  /* 1273558e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12735594:;
  /* 12735594 cmp dword ptr [0x127516a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273559b jne 0x127355d5 */
  if (!C.zf) goto L_127355d5;
  /* 1273559d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 127355a2 push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 127355a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127355a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 127355ab call 0x127254b0 */
  push32(0x127355b0u); f_127254b0();
  /* 127355b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127355b3 mov dword ptr [0x127516a0], eax */
  w32((uint32_t)(0x127516a0), (EAX));
  /* 127355b8 cmp dword ptr [0x127516a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127355bf jne 0x127355c9 */
  if (!C.zf) goto L_127355c9;
  /* 127355c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127355c4 jmp 0x1273578b */
  goto L_1273578b;
L_127355c9:;
  /* 127355c9 mov ecx, dword ptr [0x127516a0] */
  ECX = (r32((uint32_t)(0x127516a0)));
  /* 127355cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_127355d5:;
  /* 127355d5 mov edx, dword ptr [0x12751698] */
  EDX = (r32((uint32_t)(0x12751698)));
  /* 127355db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127355de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127355e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127355e4 push eax */
  push32((uint32_t)(EAX));
  /* 127355e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127355e8 push ecx */
  push32((uint32_t)(ECX));
  /* 127355e9 call 0x12735790 */
  push32(0x127355eeu); f_12735790();
  /* 127355ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127355f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127355f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127355f8 jl 0x12735691 */
  if ((C.sf!=C.of)) goto L_12735691;
  /* 127355fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735601 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735604 je 0x12735691 */
  if (C.zf) goto L_12735691;
  /* 1273560a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273560e je 0x12735683 */
  if (C.zf) goto L_12735683;
  /* 12735610 push 2 */
  push32((uint32_t)(0x2u));
  /* 12735612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735618 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1273561b push edx */
  push32((uint32_t)(EDX));
  /* 1273561c call 0x12725f40 */
  push32(0x12735621u); f_12725f40();
  /* 12735621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735624 jmp 0x1273562f */
  goto L_1273562f;
L_12735626:;
  /* 12735626 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273562c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1273562f:;
  /* 1273562f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735632 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735635 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735639 je 0x12735650 */
  if (C.zf) goto L_12735650;
  /* 1273563b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273563e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735644 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12735647 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1273564b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1273564e jmp 0x12735626 */
  goto L_12735626;
L_12735650:;
  /* 12735650 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12735655 push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 1273565a push 2 */
  push32((uint32_t)(0x2u));
  /* 1273565c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1273565f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12735662 push eax */
  push32((uint32_t)(EAX));
  /* 12735663 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735666 push ecx */
  push32((uint32_t)(ECX));
  /* 12735667 call 0x12725940 */
  push32(0x1273566cu); f_12725940();
  /* 1273566c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273566f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12735672 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735676 je 0x12735681 */
  if (C.zf) goto L_12735681;
  /* 12735678 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273567b mov dword ptr [0x12751698], edx */
  w32((uint32_t)(0x12751698), (EDX));
L_12735681:;
  /* 12735681 jmp 0x1273568f */
  goto L_1273568f;
L_12735683:;
  /* 12735683 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273568c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1273568f:;
  /* 1273568f jmp 0x12735704 */
  goto L_12735704;
L_12735691:;
  /* 12735691 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735695 jne 0x127356fd */
  if (!C.zf) goto L_127356fd;
  /* 12735697 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273569b jge 0x127356a5 */
  if ((C.sf==C.of)) goto L_127356a5;
  /* 1273569d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127356a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127356a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127356a5:;
  /* 127356a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 127356aa push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 127356af push 2 */
  push32((uint32_t)(0x2u));
  /* 127356b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127356b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 127356bb push edx */
  push32((uint32_t)(EDX));
  /* 127356bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127356bf push eax */
  push32((uint32_t)(EAX));
  /* 127356c0 call 0x12725940 */
  push32(0x127356c5u); f_12725940();
  /* 127356c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127356c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127356cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127356cf jne 0x127356d9 */
  if (!C.zf) goto L_127356d9;
  /* 127356d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127356d4 jmp 0x1273578b */
  goto L_1273578b;
L_127356d9:;
  /* 127356d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127356dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127356df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127356e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 127356e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127356e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127356eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 127356f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127356f6 mov dword ptr [0x12751698], eax */
  w32((uint32_t)(0x12751698), (EAX));
  /* 127356fb jmp 0x12735704 */
  goto L_12735704;
L_127356fd:;
  /* 127356fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127356ff jmp 0x1273578b */
  goto L_1273578b;
L_12735704:;
  /* 12735704 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735708 je 0x12735789 */
  if (C.zf) goto L_12735789;
  /* 1273570a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1273570f push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 12735714 push 2 */
  push32((uint32_t)(0x2u));
  /* 12735716 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735719 push ecx */
  push32((uint32_t)(ECX));
  /* 1273571a call 0x127282e0 */
  push32(0x1273571fu); f_127282e0();
  /* 1273571f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735722 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735725 push eax */
  push32((uint32_t)(EAX));
  /* 12735726 call 0x127254b0 */
  push32(0x1273572bu); f_127254b0();
  /* 1273572b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273572e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12735731 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735735 je 0x12735789 */
  if (C.zf) goto L_12735789;
  /* 12735737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273573a push edx */
  push32((uint32_t)(EDX));
  /* 1273573b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1273573e push eax */
  push32((uint32_t)(EAX));
  /* 1273573f call 0x12728460 */
  push32(0x12735744u); f_12728460();
  /* 12735744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735747 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1273574a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273574d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12735750 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735752 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12735755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12735758 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1273575b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273575e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735761 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12735764 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12735767 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12735769 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1273576b not edx */
  EDX = (~(EDX));
  /* 1273576d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12735770 push edx */
  push32((uint32_t)(EDX));
  /* 12735771 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12735774 push eax */
  push32((uint32_t)(EAX));
  /* 12735775 call dword ptr [0x127542b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542b0))), 0x1273577bu);
  /* 1273577b push 2 */
  push32((uint32_t)(0x2u));
  /* 1273577d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12735780 push ecx */
  push32((uint32_t)(ECX));
  /* 12735781 call 0x12725f40 */
  push32(0x12735786u); f_12725f40();
  /* 12735786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12735789:;
  /* 12735789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1273578b:;
  /* 1273578b pop esi */
  ESI = (pop32());
  /* 1273578c mov esp, ebp */
  ESP = (EBP);
  /* 1273578e pop ebp */
  EBP = (pop32());
  /* 1273578f ret  */
  ESPCHK(0x127354b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12735790 (124 bytes, 47 insns) */
void f_12735790(void) {
  FTRACE(0x12735790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735790 push ebp */
  push32((uint32_t)(EBP));
  /* 12735791 mov ebp, esp */
  EBP = (ESP);
  /* 12735793 push ecx */
  push32((uint32_t)(ECX));
  /* 12735794 mov eax, dword ptr [0x12751698] */
  EAX = (r32((uint32_t)(0x12751698)));
  /* 12735799 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1273579c jmp 0x127357a7 */
  goto L_127357a7;
L_1273579e:;
  /* 1273579e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127357a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127357a7:;
  /* 127357a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127357ad je 0x127357fa */
  if (C.zf) goto L_127357fa;
  /* 127357af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127357b2 push eax */
  push32((uint32_t)(EAX));
  /* 127357b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127357b8 push edx */
  push32((uint32_t)(EDX));
  /* 127357b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127357bc push eax */
  push32((uint32_t)(EAX));
  /* 127357bd call 0x12734f60 */
  push32(0x127357c2u); f_12734f60();
  /* 127357c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127357c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127357c7 jne 0x127357f8 */
  if (!C.zf) goto L_127357f8;
  /* 127357c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127357ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127357d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 127357d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127357d8 je 0x127357ea */
  if (C.zf) goto L_127357ea;
  /* 127357da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127357df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127357e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 127357e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127357e8 jne 0x127357f8 */
  if (!C.zf) goto L_127357f8;
L_127357ea:;
  /* 127357ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357ed sub eax, dword ptr [0x12751698] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12751698))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127357f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127357f6 jmp 0x12735808 */
  goto L_12735808;
L_127357f8:;
  /* 127357f8 jmp 0x1273579e */
  goto L_1273579e;
L_127357fa:;
  /* 127357fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127357fd sub eax, dword ptr [0x12751698] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12751698))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12735803 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12735806 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12735808:;
  /* 12735808 mov esp, ebp */
  ESP = (EBP);
  /* 1273580a pop ebp */
  EBP = (pop32());
  /* 1273580b ret  */
  ESPCHK(0x12735790u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12735810 (238 bytes, 80 insns) */
void f_12735810(void) {
  FTRACE(0x12735810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735810 push ebp */
  push32((uint32_t)(EBP));
  /* 12735811 mov ebp, esp */
  EBP = (ESP);
  /* 12735813 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12735816 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1273581d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735820 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12735823 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735827 jne 0x12735830 */
  if (!C.zf) goto L_12735830;
  /* 12735829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1273582b jmp 0x127358fa */
  goto L_127358fa;
L_12735830:;
  /* 12735830 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735833 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12735835 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12735838 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273583b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1273583e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12735840 je 0x1273584d */
  if (C.zf) goto L_1273584d;
  /* 12735842 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12735845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735848 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1273584b jmp 0x12735830 */
  goto L_12735830;
L_1273584d:;
  /* 1273584d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12735852 push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 12735857 push 2 */
  push32((uint32_t)(0x2u));
  /* 12735859 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1273585c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12735863 push eax */
  push32((uint32_t)(EAX));
  /* 12735864 call 0x127254b0 */
  push32(0x12735869u); f_127254b0();
  /* 12735869 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273586c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1273586f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12735872 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12735875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735879 jne 0x12735885 */
  if (!C.zf) goto L_12735885;
  /* 1273587b push 9 */
  push32((uint32_t)(0x9u));
  /* 1273587d call 0x12724420 */
  push32(0x12735882u); f_12724420();
  /* 12735882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12735885:;
  /* 12735885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735888 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1273588b:;
  /* 1273588b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1273588e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12735891 je 0x127358ee */
  if (C.zf) goto L_127358ee;
  /* 12735893 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12735898 push 0x1274dd30 */
  push32((uint32_t)(0x1274dd30u));
  /* 1273589d push 2 */
  push32((uint32_t)(0x2u));
  /* 1273589f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127358a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127358a4 push edx */
  push32((uint32_t)(EDX));
  /* 127358a5 call 0x127282e0 */
  push32(0x127358aau); f_127282e0();
  /* 127358aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127358ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127358b0 push eax */
  push32((uint32_t)(EAX));
  /* 127358b1 call 0x127254b0 */
  push32(0x127358b6u); f_127254b0();
  /* 127358b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127358b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127358bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127358be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127358c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127358c4 je 0x127358da */
  if (C.zf) goto L_127358da;
  /* 127358c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127358c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127358cb push ecx */
  push32((uint32_t)(ECX));
  /* 127358cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127358cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127358d1 push eax */
  push32((uint32_t)(EAX));
  /* 127358d2 call 0x12728460 */
  push32(0x127358d7u); f_12728460();
  /* 127358d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127358da:;
  /* 127358da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127358dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127358e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127358e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127358e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127358e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127358ec jmp 0x1273588b */
  goto L_1273588b;
L_127358ee:;
  /* 127358ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127358f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127358f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127358fa:;
  /* 127358fa mov esp, ebp */
  ESP = (EBP);
  /* 127358fc pop ebp */
  EBP = (pop32());
  /* 127358fd ret  */
  ESPCHK(0x12735810u, _esp0);
  ESP += 4; return;
}

/* FUN_10015900 @ 0x12735900 (237 bytes, 81 insns) */
void f_12735900(void) {
  FTRACE(0x12735900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735900 push ebp */
  push32((uint32_t)(EBP));
  /* 12735901 mov ebp, esp */
  EBP = (ESP);
  /* 12735903 push ecx */
  push32((uint32_t)(ECX));
  /* 12735904 cmp dword ptr [0x12752dec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12752dec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1273590b jne 0x12735922 */
  if (!C.zf) goto L_12735922;
  /* 1273590d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12735910 push eax */
  push32((uint32_t)(EAX));
  /* 12735911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735914 push ecx */
  push32((uint32_t)(ECX));
  /* 12735915 call 0x12735a00 */
  push32(0x1273591au); f_12735a00();
  /* 1273591a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273591d jmp 0x127359e9 */
  goto L_127359e9;
L_12735922:;
  /* 12735922 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12735924 call 0x12728eb0 */
  push32(0x12735929u); f_12728eb0();
  /* 12735929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1273592c jmp 0x12735937 */
  goto L_12735937;
L_1273592e:;
  /* 1273592e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735931 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735934 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12735937:;
  /* 12735937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1273593a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1273593e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12735942 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12735945 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1273594b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1273594d je 0x127359cb */
  if (C.zf) goto L_127359cb;
  /* 1273594f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12735952 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12735957 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12735959 mov cl, byte ptr [eax + 0x12752f01] */
  CL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 1273595f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12735962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12735964 je 0x127359b6 */
  if (C.zf) goto L_127359b6;
  /* 12735966 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735969 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1273596c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1273596f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735972 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12735974 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12735976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12735978 jne 0x12735988 */
  if (!C.zf) goto L_12735988;
  /* 1273597a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1273597c call 0x12728f50 */
  push32(0x12735981u); f_12728f50();
  /* 12735981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12735984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735986 jmp 0x127359e9 */
  goto L_127359e9;
L_12735988:;
  /* 12735988 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1273598b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12735991 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12735994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12735997 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12735999 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1273599b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1273599d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127359a0 jne 0x127359b4 */
  if (!C.zf) goto L_127359b4;
  /* 127359a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127359a4 call 0x12728f50 */
  push32(0x127359a9u); f_12728f50();
  /* 127359a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127359ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127359af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127359b2 jmp 0x127359e9 */
  goto L_127359e9;
L_127359b4:;
  /* 127359b4 jmp 0x127359c6 */
  goto L_127359c6;
L_127359b6:;
  /* 127359b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127359b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127359bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127359c2 jne 0x127359c6 */
  if (!C.zf) goto L_127359c6;
  /* 127359c4 jmp 0x127359cb */
  goto L_127359cb;
L_127359c6:;
  /* 127359c6 jmp 0x1273592e */
  goto L_1273592e;
L_127359cb:;
  /* 127359cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127359cd call 0x12728f50 */
  push32(0x127359d2u); f_12728f50();
  /* 127359d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127359d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127359d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127359dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127359e0 jne 0x127359e7 */
  if (!C.zf) goto L_127359e7;
  /* 127359e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127359e5 jmp 0x127359e9 */
  goto L_127359e9;
L_127359e7:;
  /* 127359e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127359e9:;
  /* 127359e9 mov esp, ebp */
  ESP = (EBP);
  /* 127359eb pop ebp */
  EBP = (pop32());
  /* 127359ec ret  */
  ESPCHK(0x12735900u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12735a00 (193 bytes, 87 insns) */
void f_12735a00(void) {
  FTRACE(0x12735a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735a02 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12735a06 push ebx */
  push32((uint32_t)(EBX));
  /* 12735a07 mov ebx, eax */
  EBX = (EAX);
  /* 12735a09 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12735a0c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12735a10 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12735a16 je 0x12735a2b */
  if (C.zf) goto L_12735a2b;
L_12735a18:;
  /* 12735a18 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12735a1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12735a1b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12735a1d je 0x127359f0 */
  if (C.zf) { jmp_ind(0x127359f0u); return; }
  /* 12735a1f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12735a21 je 0x12735a74 */
  if (C.zf) goto L_12735a74;
  /* 12735a23 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12735a29 jne 0x12735a18 */
  if (!C.zf) goto L_12735a18;
L_12735a2b:;
  /* 12735a2b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12735a2d push edi */
  push32((uint32_t)(EDI));
  /* 12735a2e mov eax, ebx */
  EAX = (EBX);
  /* 12735a30 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12735a33 push esi */
  push32((uint32_t)(ESI));
  /* 12735a34 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12735a36:;
  /* 12735a36 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12735a38 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12735a3d mov eax, ecx */
  EAX = (ECX);
  /* 12735a3f mov esi, edi */
  ESI = (EDI);
  /* 12735a41 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12735a43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12735a45 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12735a47 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12735a4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12735a4d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12735a4f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12735a51 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12735a54 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12735a5a jne 0x12735a78 */
  if (!C.zf) goto L_12735a78;
  /* 12735a5c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12735a61 je 0x12735a36 */
  if (C.zf) goto L_12735a36;
  /* 12735a63 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12735a68 jne 0x12735a72 */
  if (!C.zf) goto L_12735a72;
  /* 12735a6a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12735a70 jne 0x12735a36 */
  if (!C.zf) goto L_12735a36;
L_12735a72:;
  /* 12735a72 pop esi */
  ESI = (pop32());
  /* 12735a73 pop edi */
  EDI = (pop32());
L_12735a74:;
  /* 12735a74 pop ebx */
  EBX = (pop32());
  /* 12735a75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12735a77 ret  */
  ESPCHK(0x12735a00u, _esp0);
  ESP += 4; return;
L_12735a78:;
  /* 12735a78 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12735a7b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12735a7d je 0x12735ab5 */
  if (C.zf) goto L_12735ab5;
  /* 12735a7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12735a81 je 0x12735a72 */
  if (C.zf) goto L_12735a72;
  /* 12735a83 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12735a85 je 0x12735aae */
  if (C.zf) goto L_12735aae;
  /* 12735a87 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12735a89 je 0x12735a72 */
  if (C.zf) goto L_12735a72;
  /* 12735a8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12735a8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12735a90 je 0x12735aa7 */
  if (C.zf) goto L_12735aa7;
  /* 12735a92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12735a94 je 0x12735a72 */
  if (C.zf) goto L_12735a72;
  /* 12735a96 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12735a98 je 0x12735aa0 */
  if (C.zf) goto L_12735aa0;
  /* 12735a9a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12735a9c je 0x12735a72 */
  if (C.zf) goto L_12735a72;
  /* 12735a9e jmp 0x12735a36 */
  goto L_12735a36;
L_12735aa0:;
  /* 12735aa0 pop esi */
  ESI = (pop32());
  /* 12735aa1 pop edi */
  EDI = (pop32());
  /* 12735aa2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12735aa5 pop ebx */
  EBX = (pop32());
  /* 12735aa6 ret  */
  ESPCHK(0x12735a00u, _esp0);
  ESP += 4; return;
L_12735aa7:;
  /* 12735aa7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12735aaa pop esi */
  ESI = (pop32());
  /* 12735aab pop edi */
  EDI = (pop32());
  /* 12735aac pop ebx */
  EBX = (pop32());
  /* 12735aad ret  */
  ESPCHK(0x12735a00u, _esp0);
  ESP += 4; return;
L_12735aae:;
  /* 12735aae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12735ab1 pop esi */
  ESI = (pop32());
  /* 12735ab2 pop edi */
  EDI = (pop32());
  /* 12735ab3 pop ebx */
  EBX = (pop32());
  /* 12735ab4 ret  */
  ESPCHK(0x12735a00u, _esp0);
  ESP += 4; return;
L_12735ab5:;
  /* 12735ab5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12735ab8 pop esi */
  ESI = (pop32());
  /* 12735ab9 pop edi */
  EDI = (pop32());
  /* 12735aba pop ebx */
  EBX = (pop32());
  /* 12735abb ret  */
  ESPCHK(0x12735a00u, _esp0);
  ESP += 4; return;
  /* 12735abc jmp dword ptr [0x12754350] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12754350)))); return;
}

/* RtlUnwind @ 0x12735c0c (6 bytes, 1 insns) */
void f_12735c0c(void) {
  FTRACE(0x12735c0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12735c0c jmp dword ptr [0x127542ec] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x127542ec)))); return;
}

