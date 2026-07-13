#include "recomp.h"

/* FUN_1001d810 @ 0x11fed810 (65 bytes, 26 insns) */
void f_11fed810(void) {
  FTRACE(0x11fed810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed810 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed811 mov ebp, esp */
  EBP = (ESP);
  /* 11fed813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed816 push eax */
  push32((uint32_t)(EAX));
  /* 11fed817 call 0x11fed860 */
  push32(0x11fed81cu); f_11fed860();
  /* 11fed81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed81f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fed821 je 0x11fed828 */
  if (C.zf) goto L_11fed828;
  /* 11fed823 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed826 jmp 0x11fed84f */
  goto L_11fed84f;
L_11fed828:;
  /* 11fed828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed82b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fed82e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fed834 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fed836 je 0x11fed84d */
  if (C.zf) goto L_11fed84d;
  /* 11fed838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed83b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fed83e push ecx */
  push32((uint32_t)(ECX));
  /* 11fed83f call 0x11feffc0 */
  push32(0x11fed844u); f_11feffc0();
  /* 11fed844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed847 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fed849 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed84b jmp 0x11fed84f */
  goto L_11fed84f;
L_11fed84d:;
  /* 11fed84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fed84f:;
  /* 11fed84f pop ebp */
  EBP = (pop32());
  /* 11fed850 ret  */
  ESPCHK(0x11fed810u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d860 @ 0x11fed860 (183 bytes, 62 insns) */
void f_11fed860(void) {
  FTRACE(0x11fed860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed861 mov ebp, esp */
  EBP = (ESP);
  /* 11fed863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed866 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fed86d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed870 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fed873 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed876 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fed879 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fed87c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed87f jne 0x11fed8fb */
  if (!C.zf) goto L_11fed8fb;
  /* 11fed881 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed884 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fed887 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed88d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fed88f je 0x11fed8fb */
  if (C.zf) goto L_11fed8fb;
  /* 11fed891 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed897 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11fed899 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed89c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fed89f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed8a3 jle 0x11fed8fb */
  if ((C.zf||C.sf!=C.of)) goto L_11fed8fb;
  /* 11fed8a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed8a8 push edx */
  push32((uint32_t)(EDX));
  /* 11fed8a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fed8af push ecx */
  push32((uint32_t)(ECX));
  /* 11fed8b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fed8b6 push eax */
  push32((uint32_t)(EAX));
  /* 11fed8b7 call 0x11fe9d80 */
  push32(0x11fed8bcu); f_11fe9d80();
  /* 11fed8bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed8bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed8c2 jne 0x11fed8e5 */
  if (!C.zf) goto L_11fed8e5;
  /* 11fed8c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fed8ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11fed8d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fed8d2 je 0x11fed8e3 */
  if (C.zf) goto L_11fed8e3;
  /* 11fed8d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fed8da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11fed8dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11fed8e3:;
  /* 11fed8e3 jmp 0x11fed8fb */
  goto L_11fed8fb;
L_11fed8e5:;
  /* 11fed8e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fed8eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed8ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11fed8f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fed8fb:;
  /* 11fed8fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed8fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed901 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fed904 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fed906 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed909 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fed910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed913 mov esp, ebp */
  ESP = (EBP);
  /* 11fed915 pop ebp */
  EBP = (pop32());
  /* 11fed916 ret  */
  ESPCHK(0x11fed860u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d920 @ 0x11fed920 (15 bytes, 7 insns) */
void f_11fed920(void) {
  FTRACE(0x11fed920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed920 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed921 mov ebp, esp */
  EBP = (ESP);
  /* 11fed923 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fed925 call 0x11fed930 */
  push32(0x11fed92au); f_11fed930();
  /* 11fed92a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed92d pop ebp */
  EBP = (pop32());
  /* 11fed92e ret  */
  ESPCHK(0x11fed920u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d930 @ 0x11fed930 (319 bytes, 94 insns) */
void f_11fed930(void) {
  FTRACE(0x11fed930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed930 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed931 mov ebp, esp */
  EBP = (ESP);
  /* 11fed933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed936 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fed93d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fed944 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fed946 call 0x11fdb0c0 */
  push32(0x11fed94bu); f_11fdb0c0();
  /* 11fed94b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed94e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fed955 jmp 0x11fed960 */
  goto L_11fed960;
L_11fed957:;
  /* 11fed957 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed95a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed95d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fed960:;
  /* 11fed960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed963 cmp ecx, dword ptr [0x12010600] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12010600))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed969 jge 0x11feda53 */
  if ((C.sf==C.of)) goto L_11feda53;
  /* 11fed96f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed972 mov eax, dword ptr [0x1200f2ac] */
  EAX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed977 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed97b je 0x11feda4e */
  if (C.zf) goto L_11feda4e;
  /* 11fed981 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed984 mov edx, dword ptr [0x1200f2ac] */
  EDX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed98a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fed98d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fed990 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed996 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fed998 je 0x11feda4e */
  if (C.zf) goto L_11feda4e;
  /* 11fed99e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed9a1 mov eax, dword ptr [0x1200f2ac] */
  EAX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed9a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fed9a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed9aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed9ad push edx */
  push32((uint32_t)(EDX));
  /* 11fed9ae call 0x11fea330 */
  push32(0x11fed9b3u); f_11fea330();
  /* 11fed9b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed9b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed9b9 mov ecx, dword ptr [0x1200f2ac] */
  ECX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed9bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fed9c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fed9c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11fed9ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fed9cc je 0x11feda35 */
  if (C.zf) goto L_11feda35;
  /* 11fed9ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed9d2 jne 0x11fed9f9 */
  if (!C.zf) goto L_11fed9f9;
  /* 11fed9d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed9d7 mov edx, dword ptr [0x1200f2ac] */
  EDX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed9dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fed9e0 push eax */
  push32((uint32_t)(EAX));
  /* 11fed9e1 call 0x11fed810 */
  push32(0x11fed9e6u); f_11fed810();
  /* 11fed9e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed9e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed9ec je 0x11fed9f7 */
  if (C.zf) goto L_11fed9f7;
  /* 11fed9ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed9f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed9f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fed9f7:;
  /* 11fed9f7 jmp 0x11feda35 */
  goto L_11feda35;
L_11fed9f9:;
  /* 11fed9f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed9fd jne 0x11feda35 */
  if (!C.zf) goto L_11feda35;
  /* 11fed9ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feda02 mov eax, dword ptr [0x1200f2ac] */
  EAX = (r32((uint32_t)(0x1200f2ac)));
  /* 11feda07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11feda0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11feda0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11feda10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11feda12 je 0x11feda35 */
  if (C.zf) goto L_11feda35;
  /* 11feda14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feda17 mov ecx, dword ptr [0x1200f2ac] */
  ECX = (r32((uint32_t)(0x1200f2ac)));
  /* 11feda1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11feda20 push edx */
  push32((uint32_t)(EDX));
  /* 11feda21 call 0x11fed810 */
  push32(0x11feda26u); f_11fed810();
  /* 11feda26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feda29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feda2c jne 0x11feda35 */
  if (!C.zf) goto L_11feda35;
  /* 11feda2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11feda35:;
  /* 11feda35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feda38 mov ecx, dword ptr [0x1200f2ac] */
  ECX = (r32((uint32_t)(0x1200f2ac)));
  /* 11feda3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11feda41 push edx */
  push32((uint32_t)(EDX));
  /* 11feda42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feda45 push eax */
  push32((uint32_t)(EAX));
  /* 11feda46 call 0x11fea3a0 */
  push32(0x11feda4bu); f_11fea3a0();
  /* 11feda4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11feda4e:;
  /* 11feda4e jmp 0x11fed957 */
  goto L_11fed957;
L_11feda53:;
  /* 11feda53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feda55 call 0x11fdb160 */
  push32(0x11feda5au); f_11fdb160();
  /* 11feda5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feda5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feda61 jne 0x11feda68 */
  if (!C.zf) goto L_11feda68;
  /* 11feda63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feda66 jmp 0x11feda6b */
  goto L_11feda6b;
L_11feda68:;
  /* 11feda68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11feda6b:;
  /* 11feda6b mov esp, ebp */
  ESP = (EBP);
  /* 11feda6d pop ebp */
  EBP = (pop32());
  /* 11feda6e ret  */
  ESPCHK(0x11fed930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da70 @ 0x11feda70 (289 bytes, 97 insns) */
void f_11feda70(void) {
  FTRACE(0x11feda70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feda70 push ebp */
  push32((uint32_t)(EBP));
  /* 11feda71 mov ebp, esp */
  EBP = (ESP);
  /* 11feda73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feda76 push esi */
  push32((uint32_t)(ESI));
  /* 11feda77 mov eax, dword ptr [0x1200e2c0] */
  EAX = (r32((uint32_t)(0x1200e2c0)));
  /* 11feda7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11feda7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11feda86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11feda8d jmp 0x11feda98 */
  goto L_11feda98;
L_11feda8f:;
  /* 11feda8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feda92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feda95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11feda98:;
  /* 11feda98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feda9c jae 0x11fedad1 */
  if (!C.cf) goto L_11fedad1;
  /* 11feda9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedaa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedaa4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fedaa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedaa8 call 0x11fdf750 */
  push32(0x11fedaadu); f_11fdf750();
  /* 11fedaad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedab0 mov esi, eax */
  ESI = (EAX);
  /* 11fedab2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedab5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedab8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11fedabc push ecx */
  push32((uint32_t)(ECX));
  /* 11fedabd call 0x11fdf750 */
  push32(0x11fedac2u); f_11fdf750();
  /* 11fedac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedac5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedac8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fedacc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fedacf jmp 0x11feda8f */
  goto L_11feda8f;
L_11fedad1:;
  /* 11fedad1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fedad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedad7 push eax */
  push32((uint32_t)(EAX));
  /* 11fedad8 call 0x11fdb1a0 */
  push32(0x11fedaddu); f_11fdb1a0();
  /* 11fedadd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fedae3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedae7 je 0x11fedb89 */
  if (C.zf) goto L_11fedb89;
  /* 11fedaed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fedaf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fedaf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fedafa jmp 0x11fedb05 */
  goto L_11fedb05;
L_11fedafc:;
  /* 11fedafc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedaff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fedb05:;
  /* 11fedb05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedb09 jae 0x11fedb7a */
  if (!C.cf) goto L_11fedb7a;
  /* 11fedb0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11fedb11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fedb1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedb1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedb20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fedb23 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedb24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb27 push edx */
  push32((uint32_t)(EDX));
  /* 11fedb28 call 0x11fdf8d0 */
  push32(0x11fedb2du); f_11fdf8d0();
  /* 11fedb2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb30 push eax */
  push32((uint32_t)(EAX));
  /* 11fedb31 call 0x11fdf750 */
  push32(0x11fedb36u); f_11fdf750();
  /* 11fedb36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fedb41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11fedb47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fedb50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedb53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedb56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11fedb5a push eax */
  push32((uint32_t)(EAX));
  /* 11fedb5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb5e push ecx */
  push32((uint32_t)(ECX));
  /* 11fedb5f call 0x11fdf8d0 */
  push32(0x11fedb64u); f_11fdf8d0();
  /* 11fedb64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb67 push eax */
  push32((uint32_t)(EAX));
  /* 11fedb68 call 0x11fdf750 */
  push32(0x11fedb6du); f_11fdf750();
  /* 11fedb6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fedb78 jmp 0x11fedafc */
  goto L_11fedafc;
L_11fedb7a:;
  /* 11fedb7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fedb80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedb83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedb86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fedb89:;
  /* 11fedb89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fedb8c pop esi */
  ESI = (pop32());
  /* 11fedb8d mov esp, ebp */
  ESP = (EBP);
  /* 11fedb8f pop ebp */
  EBP = (pop32());
  /* 11fedb90 ret  */
  ESPCHK(0x11feda70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dba0 @ 0x11fedba0 (291 bytes, 97 insns) */
void f_11fedba0(void) {
  FTRACE(0x11fedba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fedba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fedba1 mov ebp, esp */
  EBP = (ESP);
  /* 11fedba3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fedba6 push esi */
  push32((uint32_t)(ESI));
  /* 11fedba7 mov eax, dword ptr [0x1200e2c0] */
  EAX = (r32((uint32_t)(0x1200e2c0)));
  /* 11fedbac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fedbaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fedbb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fedbbd jmp 0x11fedbc8 */
  goto L_11fedbc8;
L_11fedbbf:;
  /* 11fedbbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedbc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedbc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fedbc8:;
  /* 11fedbc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedbcc jae 0x11fedc02 */
  if (!C.cf) goto L_11fedc02;
  /* 11fedbce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedbd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11fedbd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedbd9 call 0x11fdf750 */
  push32(0x11fedbdeu); f_11fdf750();
  /* 11fedbde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedbe1 mov esi, eax */
  ESI = (EAX);
  /* 11fedbe3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedbe6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedbe9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11fedbed push ecx */
  push32((uint32_t)(ECX));
  /* 11fedbee call 0x11fdf750 */
  push32(0x11fedbf3u); f_11fdf750();
  /* 11fedbf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedbf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedbf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fedbfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fedc00 jmp 0x11fedbbf */
  goto L_11fedbbf;
L_11fedc02:;
  /* 11fedc02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fedc05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc08 push eax */
  push32((uint32_t)(EAX));
  /* 11fedc09 call 0x11fdb1a0 */
  push32(0x11fedc0eu); f_11fdb1a0();
  /* 11fedc0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fedc14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedc18 je 0x11fedcbb */
  if (C.zf) goto L_11fedcbb;
  /* 11fedc1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fedc21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fedc24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fedc2b jmp 0x11fedc36 */
  goto L_11fedc36;
L_11fedc2d:;
  /* 11fedc2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedc30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fedc36:;
  /* 11fedc36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedc3a jae 0x11fedcac */
  if (!C.cf) goto L_11fedcac;
  /* 11fedc3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11fedc42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fedc4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedc4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedc51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11fedc55 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedc56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc59 push edx */
  push32((uint32_t)(EDX));
  /* 11fedc5a call 0x11fdf8d0 */
  push32(0x11fedc5fu); f_11fdf8d0();
  /* 11fedc5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc62 push eax */
  push32((uint32_t)(EAX));
  /* 11fedc63 call 0x11fdf750 */
  push32(0x11fedc68u); f_11fdf750();
  /* 11fedc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fedc73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11fedc79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fedc82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedc85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedc88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fedc8c push eax */
  push32((uint32_t)(EAX));
  /* 11fedc8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedc90 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedc91 call 0x11fdf8d0 */
  push32(0x11fedc96u); f_11fdf8d0();
  /* 11fedc96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedc99 push eax */
  push32((uint32_t)(EAX));
  /* 11fedc9a call 0x11fdf750 */
  push32(0x11fedc9fu); f_11fdf750();
  /* 11fedc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedca2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedca5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedca7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fedcaa jmp 0x11fedc2d */
  goto L_11fedc2d;
L_11fedcac:;
  /* 11fedcac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedcaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fedcb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedcb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedcb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fedcbb:;
  /* 11fedcbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fedcbe pop esi */
  ESI = (pop32());
  /* 11fedcbf mov esp, ebp */
  ESP = (EBP);
  /* 11fedcc1 pop ebp */
  EBP = (pop32());
  /* 11fedcc2 ret  */
  ESPCHK(0x11fedba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dcd0 @ 0x11fedcd0 (878 bytes, 273 insns) */
void f_11fedcd0(void) {
  FTRACE(0x11fedcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fedcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fedcd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fedcd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fedcd6 push esi */
  push32((uint32_t)(ESI));
  /* 11fedcd7 mov eax, dword ptr [0x1200e2c0] */
  EAX = (r32((uint32_t)(0x1200e2c0)));
  /* 11fedcdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fedcdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fedce6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fedced jmp 0x11fedcf8 */
  goto L_11fedcf8;
L_11fedcef:;
  /* 11fedcef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedcf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedcf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fedcf8:;
  /* 11fedcf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedcfc jae 0x11fedd31 */
  if (!C.cf) goto L_11fedd31;
  /* 11fedcfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedd01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedd04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fedd07 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedd08 call 0x11fdf750 */
  push32(0x11fedd0du); f_11fdf750();
  /* 11fedd0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd10 mov esi, eax */
  ESI = (EAX);
  /* 11fedd12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedd15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedd18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11fedd1c push ecx */
  push32((uint32_t)(ECX));
  /* 11fedd1d call 0x11fdf750 */
  push32(0x11fedd22u); f_11fdf750();
  /* 11fedd22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fedd2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fedd2f jmp 0x11fedcef */
  goto L_11fedcef;
L_11fedd31:;
  /* 11fedd31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fedd38 jmp 0x11fedd43 */
  goto L_11fedd43;
L_11fedd3a:;
  /* 11fedd3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedd3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fedd43:;
  /* 11fedd43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedd47 jae 0x11fedd7d */
  if (!C.cf) goto L_11fedd7d;
  /* 11fedd49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedd4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedd4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11fedd53 push eax */
  push32((uint32_t)(EAX));
  /* 11fedd54 call 0x11fdf750 */
  push32(0x11fedd59u); f_11fdf750();
  /* 11fedd59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd5c mov esi, eax */
  ESI = (EAX);
  /* 11fedd5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedd61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedd64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fedd68 push eax */
  push32((uint32_t)(EAX));
  /* 11fedd69 call 0x11fdf750 */
  push32(0x11fedd6eu); f_11fdf750();
  /* 11fedd6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fedd78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fedd7b jmp 0x11fedd3a */
  goto L_11fedd3a;
L_11fedd7d:;
  /* 11fedd7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedd80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11fedd86 push eax */
  push32((uint32_t)(EAX));
  /* 11fedd87 call 0x11fdf750 */
  push32(0x11fedd8cu); f_11fdf750();
  /* 11fedd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedd8f mov esi, eax */
  ESI = (EAX);
  /* 11fedd91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedd94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11fedd9a push edx */
  push32((uint32_t)(EDX));
  /* 11fedd9b call 0x11fdf750 */
  push32(0x11fedda0u); f_11fdf750();
  /* 11fedda0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedda3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedda6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11feddaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11feddad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feddb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11feddb6 push edx */
  push32((uint32_t)(EDX));
  /* 11feddb7 call 0x11fdf750 */
  push32(0x11feddbcu); f_11fdf750();
  /* 11feddbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feddbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feddc2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11feddc6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11feddc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feddcc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11feddd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11feddd3 call 0x11fdf750 */
  push32(0x11feddd8u); f_11fdf750();
  /* 11feddd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedddb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feddde lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fedde2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fedde5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedde8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11feddee push edx */
  push32((uint32_t)(EDX));
  /* 11feddef call 0x11fdf750 */
  push32(0x11feddf4u); f_11fdf750();
  /* 11feddf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feddf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feddfa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11feddfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fede01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fede04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede09 push eax */
  push32((uint32_t)(EAX));
  /* 11fede0a call 0x11fdb1a0 */
  push32(0x11fede0fu); f_11fdb1a0();
  /* 11fede0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fede15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fede19 je 0x11fee036 */
  if (C.zf) goto L_11fee036;
  /* 11fede1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fede22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fede25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fede28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fede31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11fede36 mov eax, dword ptr [0x1200e2c0] */
  EAX = (r32((uint32_t)(0x1200e2c0)));
  /* 11fede3b push eax */
  push32((uint32_t)(EAX));
  /* 11fede3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fede3f push ecx */
  push32((uint32_t)(ECX));
  /* 11fede40 call 0x11fe5260 */
  push32(0x11fede45u); f_11fe5260();
  /* 11fede45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fede4f jmp 0x11fede5a */
  goto L_11fede5a;
L_11fede51:;
  /* 11fede51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fede54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fede5a:;
  /* 11fede5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fede5e jae 0x11fedece */
  if (!C.cf) goto L_11fedece;
  /* 11fede60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fede63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fede66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fede69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11fede6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fede6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fede72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fede75 push edx */
  push32((uint32_t)(EDX));
  /* 11fede76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fede79 push eax */
  push32((uint32_t)(EAX));
  /* 11fede7a call 0x11fdf8d0 */
  push32(0x11fede7fu); f_11fdf8d0();
  /* 11fede7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede82 push eax */
  push32((uint32_t)(EAX));
  /* 11fede83 call 0x11fdf750 */
  push32(0x11fede88u); f_11fdf750();
  /* 11fede88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fede8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fede8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fede92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fede95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fede98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fede9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fede9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11fedea2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedea5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedea8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11fedeac push edx */
  push32((uint32_t)(EDX));
  /* 11fedead mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedeb0 push eax */
  push32((uint32_t)(EAX));
  /* 11fedeb1 call 0x11fdf8d0 */
  push32(0x11fedeb6u); f_11fdf8d0();
  /* 11fedeb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedeb9 push eax */
  push32((uint32_t)(EAX));
  /* 11fedeba call 0x11fdf750 */
  push32(0x11fedebfu); f_11fdf750();
  /* 11fedebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedec2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedec5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fedec9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fedecc jmp 0x11fede51 */
  goto L_11fede51;
L_11fedece:;
  /* 11fedece mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11feded5 jmp 0x11fedee0 */
  goto L_11fedee0;
L_11feded7:;
  /* 11feded7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fededa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fededd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fedee0:;
  /* 11fedee0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fedee4 jae 0x11fedf56 */
  if (!C.cf) goto L_11fedf56;
  /* 11fedee6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedee9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fedeec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedeef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11fedef3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedef6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedef9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11fedefd push eax */
  push32((uint32_t)(EAX));
  /* 11fedefe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf01 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedf02 call 0x11fdf8d0 */
  push32(0x11fedf07u); f_11fdf8d0();
  /* 11fedf07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedf0a push eax */
  push32((uint32_t)(EAX));
  /* 11fedf0b call 0x11fdf750 */
  push32(0x11fedf10u); f_11fdf750();
  /* 11fedf10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedf13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf16 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fedf1a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fedf1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedf20 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fedf23 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf26 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11fedf2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fedf2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedf30 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fedf34 push eax */
  push32((uint32_t)(EAX));
  /* 11fedf35 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf38 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedf39 call 0x11fdf8d0 */
  push32(0x11fedf3eu); f_11fdf8d0();
  /* 11fedf3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedf41 push eax */
  push32((uint32_t)(EAX));
  /* 11fedf42 call 0x11fdf750 */
  push32(0x11fedf47u); f_11fdf750();
  /* 11fedf47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedf4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf4d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fedf51 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fedf54 jmp 0x11feded7 */
  goto L_11feded7;
L_11fedf56:;
  /* 11fedf56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fedf59 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf5c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11fedf62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedf65 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11fedf6b push ecx */
  push32((uint32_t)(ECX));
  /* 11fedf6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf6f push edx */
  push32((uint32_t)(EDX));
  /* 11fedf70 call 0x11fdf8d0 */
  push32(0x11fedf75u); f_11fdf8d0();
  /* 11fedf75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedf78 push eax */
  push32((uint32_t)(EAX));
  /* 11fedf79 call 0x11fdf750 */
  push32(0x11fedf7eu); f_11fdf750();
  /* 11fedf7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedf81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf84 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fedf88 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fedf8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fedf8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedf91 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11fedf97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedf9a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11fedfa0 push eax */
  push32((uint32_t)(EAX));
  /* 11fedfa1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedfa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedfa5 call 0x11fdf8d0 */
  push32(0x11fedfaau); f_11fdf8d0();
  /* 11fedfaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedfad push eax */
  push32((uint32_t)(EAX));
  /* 11fedfae call 0x11fdf750 */
  push32(0x11fedfb3u); f_11fdf750();
  /* 11fedfb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedfb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedfb9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fedfbd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fedfc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fedfc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedfc6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11fedfcc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fedfcf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11fedfd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fedfd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedfd9 push edx */
  push32((uint32_t)(EDX));
  /* 11fedfda call 0x11fdf8d0 */
  push32(0x11fedfdfu); f_11fdf8d0();
  /* 11fedfdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedfe2 push eax */
  push32((uint32_t)(EAX));
  /* 11fedfe3 call 0x11fdf750 */
  push32(0x11fedfe8u); f_11fdf750();
  /* 11fedfe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fedfeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedfee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fedff2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fedff5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fedff8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fedffb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11fee001 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fee004 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11fee00a push eax */
  push32((uint32_t)(EAX));
  /* 11fee00b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fee00e push ecx */
  push32((uint32_t)(ECX));
  /* 11fee00f call 0x11fdf8d0 */
  push32(0x11fee014u); f_11fdf8d0();
  /* 11fee014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee017 push eax */
  push32((uint32_t)(EAX));
  /* 11fee018 call 0x11fdf750 */
  push32(0x11fee01du); f_11fdf750();
  /* 11fee01d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee020 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fee023 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fee027 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fee02a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fee02d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fee030 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11fee036:;
  /* 11fee036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee039 pop esi */
  ESI = (pop32());
  /* 11fee03a mov esp, ebp */
  ESP = (EBP);
  /* 11fee03c pop ebp */
  EBP = (pop32());
  /* 11fee03d ret  */
  ESPCHK(0x11fedcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e040 @ 0x11fee040 (31 bytes, 15 insns) */
void f_11fee040(void) {
  FTRACE(0x11fee040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee040 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee041 mov ebp, esp */
  EBP = (ESP);
  /* 11fee043 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fee045 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee048 push eax */
  push32((uint32_t)(EAX));
  /* 11fee049 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee04c push ecx */
  push32((uint32_t)(ECX));
  /* 11fee04d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee050 push edx */
  push32((uint32_t)(EDX));
  /* 11fee051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee054 push eax */
  push32((uint32_t)(EAX));
  /* 11fee055 call 0x11fee060 */
  push32(0x11fee05au); f_11fee060();
  /* 11fee05a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee05d pop ebp */
  EBP = (pop32());
  /* 11fee05e ret  */
  ESPCHK(0x11fee040u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e060 @ 0x11fee060 (393 bytes, 123 insns) */
void f_11fee060(void) {
  FTRACE(0x11fee060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee060 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee061 mov ebp, esp */
  EBP = (ESP);
  /* 11fee063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee066 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee06a jne 0x11fee076 */
  if (!C.zf) goto L_11fee076;
  /* 11fee06c mov eax, dword ptr [0x1200e2c0] */
  EAX = (r32((uint32_t)(0x1200e2c0)));
  /* 11fee071 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fee074 jmp 0x11fee07c */
  goto L_11fee07c;
L_11fee076:;
  /* 11fee076 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee079 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fee07c:;
  /* 11fee07c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fee07f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fee082 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee085 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fee088 push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fee08d call dword ptr [0x12011430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011430))), 0x11fee093u);
  /* 11fee093 cmp dword ptr [0x12010604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee09a je 0x11fee0ba */
  if (C.zf) goto L_11fee0ba;
  /* 11fee09c push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fee0a1 call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fee0a7u);
  /* 11fee0a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fee0a9 call 0x11fdb0c0 */
  push32(0x11fee0aeu); f_11fdb0c0();
  /* 11fee0ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee0b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fee0b8 jmp 0x11fee0c1 */
  goto L_11fee0c1;
L_11fee0ba:;
  /* 11fee0ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fee0c1:;
  /* 11fee0c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee0c5 jbe 0x11fee1b2 */
  if ((C.cf||C.zf)) goto L_11fee1b2;
  /* 11fee0cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee0ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fee0d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11fee0d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fee0d7 je 0x11fee0e1 */
  if (C.zf) goto L_11fee0e1;
  /* 11fee0d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fee0dd je 0x11fee0e6 */
  if (C.zf) goto L_11fee0e6;
  /* 11fee0df jmp 0x11fee140 */
  goto L_11fee140;
L_11fee0e1:;
  /* 11fee0e1 jmp 0x11fee1b2 */
  goto L_11fee1b2;
L_11fee0e6:;
  /* 11fee0e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee0e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee0ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11fee0ef mov dword ptr [0x1200f298], 0 */
  w32((uint32_t)(0x1200f298), (0x0u));
  /* 11fee0f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee0fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fee0ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee102 jne 0x11fee117 */
  if (!C.zf) goto L_11fee117;
  /* 11fee104 mov dword ptr [0x1200f298], 1 */
  w32((uint32_t)(0x1200f298), (0x1u));
  /* 11fee10e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee111 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee114 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11fee117:;
  /* 11fee117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee11a push ecx */
  push32((uint32_t)(ECX));
  /* 11fee11b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fee11e push edx */
  push32((uint32_t)(EDX));
  /* 11fee11f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11fee122 push eax */
  push32((uint32_t)(EAX));
  /* 11fee123 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee126 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee127 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee12a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fee12c push eax */
  push32((uint32_t)(EAX));
  /* 11fee12d call 0x11fee1f0 */
  push32(0x11fee132u); f_11fee1f0();
  /* 11fee132 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee135 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee138 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee13b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fee13e jmp 0x11fee1ad */
  goto L_11fee1ad;
L_11fee140:;
  /* 11fee140 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fee145 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fee147 mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fee14d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fee14f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fee153 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fee159 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fee15b je 0x11fee188 */
  if (C.zf) goto L_11fee188;
  /* 11fee15d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee161 jbe 0x11fee188 */
  if ((C.cf||C.zf)) goto L_11fee188;
  /* 11fee163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee166 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee169 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fee16b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fee16d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee170 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee173 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fee176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee179 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee17c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fee17f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fee182 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee185 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fee188:;
  /* 11fee188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee18b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee18e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fee190 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fee192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee195 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee198 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fee19b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee19e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee1a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fee1a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fee1a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee1aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fee1ad:;
  /* 11fee1ad jmp 0x11fee0c1 */
  goto L_11fee0c1;
L_11fee1b2:;
  /* 11fee1b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee1b6 je 0x11fee1c4 */
  if (C.zf) goto L_11fee1c4;
  /* 11fee1b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fee1ba call 0x11fdb160 */
  push32(0x11fee1bfu); f_11fdb160();
  /* 11fee1bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee1c2 jmp 0x11fee1cf */
  goto L_11fee1cf;
L_11fee1c4:;
  /* 11fee1c4 push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fee1c9 call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fee1cfu);
L_11fee1cf:;
  /* 11fee1cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee1d3 jbe 0x11fee1e3 */
  if ((C.cf||C.zf)) goto L_11fee1e3;
  /* 11fee1d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee1d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fee1db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee1de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee1e1 jmp 0x11fee1e5 */
  goto L_11fee1e5;
L_11fee1e3:;
  /* 11fee1e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fee1e5:;
  /* 11fee1e5 mov esp, ebp */
  ESP = (EBP);
  /* 11fee1e7 pop ebp */
  EBP = (pop32());
  /* 11fee1e8 ret  */
  ESPCHK(0x11fee060u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e1f0 @ 0x11fee1f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11fee1f0(void) {
  FTRACE(0x11fee1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fee1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee1f6 push esi */
  push32((uint32_t)(ESI));
  /* 11fee1f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11fee1fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fee1fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fee201 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee204 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fee207 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee20b ja 0x11fee758 */
  if ((!C.cf&&!C.zf)) goto L_11fee758;
  /* 11fee211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fee214 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fee216 mov dl, byte ptr [eax + 0x11fee7b9] */
  DL = (r8((uint32_t)(EAX + 0x11fee7b9)));
  /* 11fee21c jmp dword ptr [edx*4 + 0x11fee75d] */
  switch (EDX) {
    case 0: goto L_11fee736;
    case 1: goto L_11fee245;
    case 2: goto L_11fee28b;
    case 3: goto L_11fee3d8;
    case 4: goto L_11fee400;
    case 5: goto L_11fee49f;
    case 6: goto L_11fee50b;
    case 7: goto L_11fee534;
    case 8: goto L_11fee575;
    case 9: goto L_11fee657;
    case 10: goto L_11fee6be;
    case 11: goto L_11fee70b;
    case 12: goto L_11fee223;
    case 13: goto L_11fee268;
    case 14: goto L_11fee2ae;
    case 15: goto L_11fee3ae;
    case 16: goto L_11fee445;
    case 17: goto L_11fee472;
    case 18: goto L_11fee4c7;
    case 19: goto L_11fee54b;
    case 20: goto L_11fee5f9;
    case 21: goto L_11fee688;
    case 22: goto L_11fee758;
    default: x86_unimpl("switch@0x11fee21c out of table"); return;
  }
L_11fee223:;
  /* 11fee223 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee226 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee227 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee22a push edx */
  push32((uint32_t)(EDX));
  /* 11fee22b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee22e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fee231 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee234 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fee237 push eax */
  push32((uint32_t)(EAX));
  /* 11fee238 call 0x11fee810 */
  push32(0x11fee23du); f_11fee810();
  /* 11fee23d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee240 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee245:;
  /* 11fee245 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee248 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee249 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee24c push edx */
  push32((uint32_t)(EDX));
  /* 11fee24d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee250 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fee253 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee256 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11fee25a push eax */
  push32((uint32_t)(EAX));
  /* 11fee25b call 0x11fee810 */
  push32(0x11fee260u); f_11fee810();
  /* 11fee260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee263 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee268:;
  /* 11fee268 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee26b push ecx */
  push32((uint32_t)(ECX));
  /* 11fee26c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee26f push edx */
  push32((uint32_t)(EDX));
  /* 11fee270 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee273 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fee276 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee279 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11fee27d push eax */
  push32((uint32_t)(EAX));
  /* 11fee27e call 0x11fee810 */
  push32(0x11fee283u); f_11fee810();
  /* 11fee283 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee286 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee28b:;
  /* 11fee28b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee28e push ecx */
  push32((uint32_t)(ECX));
  /* 11fee28f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee292 push edx */
  push32((uint32_t)(EDX));
  /* 11fee293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee296 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fee299 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee29c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fee2a0 push eax */
  push32((uint32_t)(EAX));
  /* 11fee2a1 call 0x11fee810 */
  push32(0x11fee2a6u); f_11fee810();
  /* 11fee2a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee2a9 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee2ae:;
  /* 11fee2ae cmp dword ptr [0x1200f298], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f298))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee2b5 je 0x11fee336 */
  if (C.zf) goto L_11fee336;
  /* 11fee2b7 mov dword ptr [0x1200f298], 0 */
  w32((uint32_t)(0x1200f298), (0x0u));
  /* 11fee2c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee2c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee2c8 push edx */
  push32((uint32_t)(EDX));
  /* 11fee2c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee2cc push eax */
  push32((uint32_t)(EAX));
  /* 11fee2cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee2d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee2d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee2d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11fee2da push eax */
  push32((uint32_t)(EAX));
  /* 11fee2db call 0x11fee9c0 */
  push32(0x11fee2e0u); f_11fee9c0();
  /* 11fee2e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee2e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee2e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee2e9 jne 0x11fee2f0 */
  if (!C.zf) goto L_11fee2f0;
  /* 11fee2eb jmp 0x11fee758 */
  goto L_11fee758;
L_11fee2f0:;
  /* 11fee2f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee2f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fee2f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11fee2f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee2fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee2fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee300 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee303 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fee305 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee308 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee30a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee30d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee310 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fee312 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee315 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee316 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee319 push edx */
  push32((uint32_t)(EDX));
  /* 11fee31a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee31d push eax */
  push32((uint32_t)(EAX));
  /* 11fee31e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee321 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee322 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee325 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11fee32b push eax */
  push32((uint32_t)(EAX));
  /* 11fee32c call 0x11fee9c0 */
  push32(0x11fee331u); f_11fee9c0();
  /* 11fee331 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee334 jmp 0x11fee3a9 */
  goto L_11fee3a9;
L_11fee336:;
  /* 11fee336 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee339 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee33a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee33d push edx */
  push32((uint32_t)(EDX));
  /* 11fee33e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee341 push eax */
  push32((uint32_t)(EAX));
  /* 11fee342 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee345 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee346 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee349 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11fee34f push eax */
  push32((uint32_t)(EAX));
  /* 11fee350 call 0x11fee9c0 */
  push32(0x11fee355u); f_11fee9c0();
  /* 11fee355 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee358 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee35b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee35e jne 0x11fee365 */
  if (!C.zf) goto L_11fee365;
  /* 11fee360 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee365:;
  /* 11fee365 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee368 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fee36a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11fee36d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee370 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee372 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee375 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee378 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fee37a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee37d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee37f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee382 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee385 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fee387 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee38a push ecx */
  push32((uint32_t)(ECX));
  /* 11fee38b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee38e push edx */
  push32((uint32_t)(EDX));
  /* 11fee38f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee392 push eax */
  push32((uint32_t)(EAX));
  /* 11fee393 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee396 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee397 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee39a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11fee3a0 push eax */
  push32((uint32_t)(EAX));
  /* 11fee3a1 call 0x11fee9c0 */
  push32(0x11fee3a6u); f_11fee9c0();
  /* 11fee3a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fee3a9:;
  /* 11fee3a9 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee3ae:;
  /* 11fee3ae mov ecx, dword ptr [0x1200f298] */
  ECX = (r32((uint32_t)(0x1200f298)));
  /* 11fee3b4 mov dword ptr [0x1200f2a8], ecx */
  w32((uint32_t)(0x1200f2a8), (ECX));
  /* 11fee3ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee3bd push edx */
  push32((uint32_t)(EDX));
  /* 11fee3be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee3c1 push eax */
  push32((uint32_t)(EAX));
  /* 11fee3c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee3c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee3c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fee3ca push edx */
  push32((uint32_t)(EDX));
  /* 11fee3cb call 0x11fee860 */
  push32(0x11fee3d0u); f_11fee860();
  /* 11fee3d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee3d3 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee3d8:;
  /* 11fee3d8 mov eax, dword ptr [0x1200f298] */
  EAX = (r32((uint32_t)(0x1200f298)));
  /* 11fee3dd mov dword ptr [0x1200f2a8], eax */
  w32((uint32_t)(0x1200f2a8), (EAX));
  /* 11fee3e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee3e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee3e9 push edx */
  push32((uint32_t)(EDX));
  /* 11fee3ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee3ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee3ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fee3f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee3f3 call 0x11fee860 */
  push32(0x11fee3f8u); f_11fee860();
  /* 11fee3f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee3fb jmp 0x11fee758 */
  goto L_11fee758;
L_11fee400:;
  /* 11fee400 mov edx, dword ptr [0x1200f298] */
  EDX = (r32((uint32_t)(0x1200f298)));
  /* 11fee406 mov dword ptr [0x1200f2a8], edx */
  w32((uint32_t)(0x1200f2a8), (EDX));
  /* 11fee40c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee40f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fee412 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee413 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11fee418 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee41a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fee41d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee421 jne 0x11fee42a */
  if (!C.zf) goto L_11fee42a;
  /* 11fee423 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11fee42a:;
  /* 11fee42a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee42d push edx */
  push32((uint32_t)(EDX));
  /* 11fee42e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee431 push eax */
  push32((uint32_t)(EAX));
  /* 11fee432 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee434 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee437 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee438 call 0x11fee860 */
  push32(0x11fee43du); f_11fee860();
  /* 11fee43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee440 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee445:;
  /* 11fee445 mov edx, dword ptr [0x1200f298] */
  EDX = (r32((uint32_t)(0x1200f298)));
  /* 11fee44b mov dword ptr [0x1200f2a8], edx */
  w32((uint32_t)(0x1200f2a8), (EDX));
  /* 11fee451 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee454 push eax */
  push32((uint32_t)(EAX));
  /* 11fee455 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee458 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee459 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fee45b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee45e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fee461 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee464 push eax */
  push32((uint32_t)(EAX));
  /* 11fee465 call 0x11fee860 */
  push32(0x11fee46au); f_11fee860();
  /* 11fee46a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee46d jmp 0x11fee758 */
  goto L_11fee758;
L_11fee472:;
  /* 11fee472 mov ecx, dword ptr [0x1200f298] */
  ECX = (r32((uint32_t)(0x1200f298)));
  /* 11fee478 mov dword ptr [0x1200f2a8], ecx */
  w32((uint32_t)(0x1200f2a8), (ECX));
  /* 11fee47e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee481 push edx */
  push32((uint32_t)(EDX));
  /* 11fee482 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee485 push eax */
  push32((uint32_t)(EAX));
  /* 11fee486 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee488 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee48b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fee48e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee491 push edx */
  push32((uint32_t)(EDX));
  /* 11fee492 call 0x11fee860 */
  push32(0x11fee497u); f_11fee860();
  /* 11fee497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee49a jmp 0x11fee758 */
  goto L_11fee758;
L_11fee49f:;
  /* 11fee49f mov eax, dword ptr [0x1200f298] */
  EAX = (r32((uint32_t)(0x1200f298)));
  /* 11fee4a4 mov dword ptr [0x1200f2a8], eax */
  w32((uint32_t)(0x1200f2a8), (EAX));
  /* 11fee4a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee4ac push ecx */
  push32((uint32_t)(ECX));
  /* 11fee4ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee4b0 push edx */
  push32((uint32_t)(EDX));
  /* 11fee4b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee4b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee4b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fee4b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee4ba call 0x11fee860 */
  push32(0x11fee4bfu); f_11fee860();
  /* 11fee4bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee4c2 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee4c7:;
  /* 11fee4c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee4ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee4ce jg 0x11fee4ec */
  if ((!C.zf&&C.sf==C.of)) goto L_11fee4ec;
  /* 11fee4d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee4d3 push eax */
  push32((uint32_t)(EAX));
  /* 11fee4d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee4d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee4db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11fee4e1 push eax */
  push32((uint32_t)(EAX));
  /* 11fee4e2 call 0x11fee810 */
  push32(0x11fee4e7u); f_11fee810();
  /* 11fee4e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee4ea jmp 0x11fee506 */
  goto L_11fee506;
L_11fee4ec:;
  /* 11fee4ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee4ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fee4f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee4f3 push edx */
  push32((uint32_t)(EDX));
  /* 11fee4f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee4f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11fee4fd push ecx */
  push32((uint32_t)(ECX));
  /* 11fee4fe call 0x11fee810 */
  push32(0x11fee503u); f_11fee810();
  /* 11fee503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fee506:;
  /* 11fee506 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee50b:;
  /* 11fee50b mov edx, dword ptr [0x1200f298] */
  EDX = (r32((uint32_t)(0x1200f298)));
  /* 11fee511 mov dword ptr [0x1200f2a8], edx */
  w32((uint32_t)(0x1200f2a8), (EDX));
  /* 11fee517 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee51a push eax */
  push32((uint32_t)(EAX));
  /* 11fee51b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee51e push ecx */
  push32((uint32_t)(ECX));
  /* 11fee51f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee521 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee524 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fee526 push eax */
  push32((uint32_t)(EAX));
  /* 11fee527 call 0x11fee860 */
  push32(0x11fee52cu); f_11fee860();
  /* 11fee52c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee52f jmp 0x11fee758 */
  goto L_11fee758;
L_11fee534:;
  /* 11fee534 mov ecx, dword ptr [0x1200f298] */
  ECX = (r32((uint32_t)(0x1200f298)));
  /* 11fee53a mov dword ptr [0x1200f2a8], ecx */
  w32((uint32_t)(0x1200f2a8), (ECX));
  /* 11fee540 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee543 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fee546 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fee549 jmp 0x11fee59d */
  goto L_11fee59d;
L_11fee54b:;
  /* 11fee54b mov ecx, dword ptr [0x1200f298] */
  ECX = (r32((uint32_t)(0x1200f298)));
  /* 11fee551 mov dword ptr [0x1200f2a8], ecx */
  w32((uint32_t)(0x1200f2a8), (ECX));
  /* 11fee557 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee55a push edx */
  push32((uint32_t)(EDX));
  /* 11fee55b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee55e push eax */
  push32((uint32_t)(EAX));
  /* 11fee55f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fee561 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee564 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fee567 push edx */
  push32((uint32_t)(EDX));
  /* 11fee568 call 0x11fee860 */
  push32(0x11fee56du); f_11fee860();
  /* 11fee56d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee570 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee575:;
  /* 11fee575 mov eax, dword ptr [0x1200f298] */
  EAX = (r32((uint32_t)(0x1200f298)));
  /* 11fee57a mov dword ptr [0x1200f2a8], eax */
  w32((uint32_t)(0x1200f2a8), (EAX));
  /* 11fee57f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee582 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee586 jne 0x11fee591 */
  if (!C.zf) goto L_11fee591;
  /* 11fee588 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11fee58f jmp 0x11fee59d */
  goto L_11fee59d;
L_11fee591:;
  /* 11fee591 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee594 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fee597 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee59a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fee59d:;
  /* 11fee59d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee5a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fee5a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee5a6 jge 0x11fee5b1 */
  if ((C.sf==C.of)) goto L_11fee5b1;
  /* 11fee5a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fee5af jmp 0x11fee5de */
  goto L_11fee5de;
L_11fee5b1:;
  /* 11fee5b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee5b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fee5b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee5b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11fee5bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee5bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fee5c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee5c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fee5c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee5c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11fee5ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee5d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee5d3 jl 0x11fee5de */
  if ((C.sf!=C.of)) goto L_11fee5de;
  /* 11fee5d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee5d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee5db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fee5de:;
  /* 11fee5de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee5e1 push eax */
  push32((uint32_t)(EAX));
  /* 11fee5e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee5e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee5e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee5e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee5eb push edx */
  push32((uint32_t)(EDX));
  /* 11fee5ec call 0x11fee860 */
  push32(0x11fee5f1u); f_11fee860();
  /* 11fee5f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee5f4 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee5f9:;
  /* 11fee5f9 cmp dword ptr [0x1200f298], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f298))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee600 je 0x11fee630 */
  if (C.zf) goto L_11fee630;
  /* 11fee602 mov dword ptr [0x1200f298], 0 */
  w32((uint32_t)(0x1200f298), (0x0u));
  /* 11fee60c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee60f push eax */
  push32((uint32_t)(EAX));
  /* 11fee610 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee613 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee614 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee617 push edx */
  push32((uint32_t)(EDX));
  /* 11fee618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee61b push eax */
  push32((uint32_t)(EAX));
  /* 11fee61c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee61f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11fee625 push edx */
  push32((uint32_t)(EDX));
  /* 11fee626 call 0x11fee9c0 */
  push32(0x11fee62bu); f_11fee9c0();
  /* 11fee62b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee62e jmp 0x11fee652 */
  goto L_11fee652;
L_11fee630:;
  /* 11fee630 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee633 push eax */
  push32((uint32_t)(EAX));
  /* 11fee634 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee637 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee638 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee63b push edx */
  push32((uint32_t)(EDX));
  /* 11fee63c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee63f push eax */
  push32((uint32_t)(EAX));
  /* 11fee640 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee643 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11fee649 push edx */
  push32((uint32_t)(EDX));
  /* 11fee64a call 0x11fee9c0 */
  push32(0x11fee64fu); f_11fee9c0();
  /* 11fee64f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fee652:;
  /* 11fee652 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee657:;
  /* 11fee657 mov dword ptr [0x1200f298], 0 */
  w32((uint32_t)(0x1200f298), (0x0u));
  /* 11fee661 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee664 push eax */
  push32((uint32_t)(EAX));
  /* 11fee665 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee668 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee669 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee66c push edx */
  push32((uint32_t)(EDX));
  /* 11fee66d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee670 push eax */
  push32((uint32_t)(EAX));
  /* 11fee671 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fee674 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11fee67a push edx */
  push32((uint32_t)(EDX));
  /* 11fee67b call 0x11fee9c0 */
  push32(0x11fee680u); f_11fee9c0();
  /* 11fee680 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee683 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee688:;
  /* 11fee688 mov eax, dword ptr [0x1200f298] */
  EAX = (r32((uint32_t)(0x1200f298)));
  /* 11fee68d mov dword ptr [0x1200f2a8], eax */
  w32((uint32_t)(0x1200f2a8), (EAX));
  /* 11fee692 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee695 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fee698 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee699 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11fee69e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee6a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fee6a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee6a6 push edx */
  push32((uint32_t)(EDX));
  /* 11fee6a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee6aa push eax */
  push32((uint32_t)(EAX));
  /* 11fee6ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11fee6ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee6b1 call 0x11fee860 */
  push32(0x11fee6b6u); f_11fee860();
  /* 11fee6b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee6b9 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee6be:;
  /* 11fee6be mov edx, dword ptr [0x1200f298] */
  EDX = (r32((uint32_t)(0x1200f298)));
  /* 11fee6c4 mov dword ptr [0x1200f2a8], edx */
  w32((uint32_t)(0x1200f2a8), (EDX));
  /* 11fee6ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee6cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fee6d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee6d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11fee6d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee6d8 mov ecx, eax */
  ECX = (EAX);
  /* 11fee6da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee6dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fee6e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee6e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fee6e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee6e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11fee6ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee6ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee6f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fee6f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee6f6 push eax */
  push32((uint32_t)(EAX));
  /* 11fee6f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee6fa push ecx */
  push32((uint32_t)(ECX));
  /* 11fee6fb push 4 */
  push32((uint32_t)(0x4u));
  /* 11fee6fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee700 push edx */
  push32((uint32_t)(EDX));
  /* 11fee701 call 0x11fee860 */
  push32(0x11fee706u); f_11fee860();
  /* 11fee706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee709 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee70b:;
  /* 11fee70b call 0x11fe4110 */
  push32(0x11fee710u); f_11fe4110();
  /* 11fee710 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee713 push eax */
  push32((uint32_t)(EAX));
  /* 11fee714 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee717 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee71b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fee71d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee721 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11fee724 mov ecx, dword ptr [eax*4 + 0x1200d354] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200d354)));
  /* 11fee72b push ecx */
  push32((uint32_t)(ECX));
  /* 11fee72c call 0x11fee810 */
  push32(0x11fee731u); f_11fee810();
  /* 11fee731 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee734 jmp 0x11fee758 */
  goto L_11fee758;
L_11fee736:;
  /* 11fee736 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee739 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fee73b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11fee73e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee741 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee743 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee749 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fee74b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee74e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee750 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee753 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee756 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fee758:;
  /* 11fee758 pop esi */
  ESI = (pop32());
  /* 11fee759 mov esp, ebp */
  ESP = (EBP);
  /* 11fee75b pop ebp */
  EBP = (pop32());
  /* 11fee75c ret  */
  ESPCHK(0x11fee1f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11fee810 (72 bytes, 30 insns) */
void f_11fee810(void) {
  FTRACE(0x11fee810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee810 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee811 mov ebp, esp */
  EBP = (ESP);
L_11fee813:;
  /* 11fee813 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee816 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee819 je 0x11fee856 */
  if (C.zf) goto L_11fee856;
  /* 11fee81b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee81e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fee821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fee823 je 0x11fee856 */
  if (C.zf) goto L_11fee856;
  /* 11fee825 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee828 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fee82a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee82d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fee82f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fee831 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee834 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fee836 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee83c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fee83e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee841 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee844 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fee847 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee84a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fee84c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee84f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee852 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fee854 jmp 0x11fee813 */
  goto L_11fee813;
L_11fee856:;
  /* 11fee856 pop ebp */
  EBP = (pop32());
  /* 11fee857 ret  */
  ESPCHK(0x11fee810u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e860 @ 0x11fee860 (173 bytes, 64 insns) */
void f_11fee860(void) {
  FTRACE(0x11fee860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee861 mov ebp, esp */
  EBP = (ESP);
  /* 11fee863 push ecx */
  push32((uint32_t)(ECX));
  /* 11fee864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fee86b cmp dword ptr [0x1200f2a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f2a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee872 je 0x11fee88a */
  if (C.zf) goto L_11fee88a;
  /* 11fee874 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee877 push eax */
  push32((uint32_t)(EAX));
  /* 11fee878 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee87b push ecx */
  push32((uint32_t)(ECX));
  /* 11fee87c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee87f push edx */
  push32((uint32_t)(EDX));
  /* 11fee880 call 0x11fee910 */
  push32(0x11fee885u); f_11fee910();
  /* 11fee885 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee888 jmp 0x11fee909 */
  goto L_11fee909;
L_11fee88a:;
  /* 11fee88a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee88d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee890 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee892 jae 0x11fee900 */
  if (!C.cf) goto L_11fee900;
  /* 11fee894 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee897 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee89a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11fee89d jmp 0x11fee8a8 */
  goto L_11fee8a8;
L_11fee89f:;
  /* 11fee89f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee8a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee8a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11fee8a8:;
  /* 11fee8a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee8ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee8ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fee8b0 je 0x11fee8e4 */
  if (C.zf) goto L_11fee8e4;
  /* 11fee8b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee8b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee8b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11fee8bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee8bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee8c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee8c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fee8c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee8c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11fee8cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee8ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee8cf mov ecx, 0xa */
  ECX = (0xau);
  /* 11fee8d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee8d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fee8d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee8dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee8df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fee8e2 jmp 0x11fee89f */
  goto L_11fee89f;
L_11fee8e4:;
  /* 11fee8e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee8e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fee8e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee8ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee8ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fee8f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee8f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fee8f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee8f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee8fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fee8fe jmp 0x11fee909 */
  goto L_11fee909;
L_11fee900:;
  /* 11fee900 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee903 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fee909:;
  /* 11fee909 mov esp, ebp */
  ESP = (EBP);
  /* 11fee90b pop ebp */
  EBP = (pop32());
  /* 11fee90c ret  */
  ESPCHK(0x11fee860u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11fee910 (172 bytes, 65 insns) */
void f_11fee910(void) {
  FTRACE(0x11fee910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee910 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee911 mov ebp, esp */
  EBP = (ESP);
  /* 11fee913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee919 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fee91b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fee91e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee921 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee924 jbe 0x11fee96b */
  if ((C.cf||C.zf)) goto L_11fee96b;
L_11fee926:;
  /* 11fee926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee929 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee92a mov ecx, 0xa */
  ECX = (0xau);
  /* 11fee92f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee931 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee937 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fee939 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee93c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee93f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fee942 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee945 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fee947 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee94a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee94d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fee94f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee952 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fee953 mov ecx, 0xa */
  ECX = (0xau);
  /* 11fee958 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fee95a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fee95d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee961 jle 0x11fee96b */
  if ((C.zf||C.sf!=C.of)) goto L_11fee96b;
  /* 11fee963 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fee966 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee969 ja 0x11fee926 */
  if ((!C.cf&&!C.zf)) goto L_11fee926;
L_11fee96b:;
  /* 11fee96b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee96e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fee970 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fee973 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fee976 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee979 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fee97b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee97e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee981 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fee984:;
  /* 11fee984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee987 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fee989 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11fee98c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee98f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fee992 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fee994 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fee996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fee999 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fee99c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fee99f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fee9a2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fee9a5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11fee9a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fee9aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fee9ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fee9b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fee9b3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee9b6 jb 0x11fee984 */
  if (C.cf) goto L_11fee984;
  /* 11fee9b8 mov esp, ebp */
  ESP = (EBP);
  /* 11fee9ba pop ebp */
  EBP = (pop32());
  /* 11fee9bb ret  */
  ESPCHK(0x11fee910u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e9c0 @ 0x11fee9c0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11fee9c0(void) {
  FTRACE(0x11fee9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fee9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fee9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fee9c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11fee9c6:;
  /* 11fee9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee9c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fee9cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fee9ce je 0x11feee3c */
  if (C.zf) goto L_11feee3c;
  /* 11fee9d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fee9d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fee9da je 0x11feee3c */
  if (C.zf) goto L_11feee3c;
  /* 11fee9e0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fee9e4 mov dword ptr [0x1200f2a8], 0 */
  w32((uint32_t)(0x1200f2a8), (0x0u));
  /* 11fee9ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fee9f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fee9f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fee9fb jmp 0x11feea06 */
  goto L_11feea06;
L_11fee9fd:;
  /* 11fee9fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feea00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feea03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11feea06:;
  /* 11feea06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feea09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11feea0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feea0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11feea12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feea15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feea18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11feea1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feea1d jne 0x11feea21 */
  if (!C.zf) goto L_11feea21;
  /* 11feea1f jmp 0x11fee9fd */
  goto L_11fee9fd;
L_11feea21:;
  /* 11feea21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feea24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feea27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11feea2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feea2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feea30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11feea33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11feea36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feea39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11feea3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feea40 ja 0x11feed90 */
  if ((!C.cf&&!C.zf)) goto L_11feed90;
  /* 11feea46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11feea49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feea4b mov al, byte ptr [ecx + 0x11feee6c] */
  AL = (r8((uint32_t)(ECX + 0x11feee6c)));
  /* 11feea51 jmp dword ptr [eax*4 + 0x11feee40] */
  switch (EAX) {
    case 0: goto L_11feecaf;
    case 1: goto L_11feeb93;
    case 2: goto L_11feeb1e;
    case 3: goto L_11feea58;
    case 4: goto L_11feea96;
    case 5: goto L_11feeaf7;
    case 6: goto L_11feeb45;
    case 7: goto L_11feeb6c;
    case 8: goto L_11feebda;
    case 9: goto L_11feead4;
    case 10: goto L_11feed90;
    default: x86_unimpl("switch@0x11feea51 out of table"); return;
  }
L_11feea58:;
  /* 11feea58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feea5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11feea5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feea61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feea64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11feea67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feea6b ja 0x11feea91 */
  if ((!C.cf&&!C.zf)) goto L_11feea91;
  /* 11feea6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feea70 jmp dword ptr [ecx*4 + 0x11feeebf] */
  switch (ECX) {
    case 0: goto L_11feea77;
    case 1: goto L_11feea81;
    case 2: goto L_11feea87;
    case 3: goto L_11feea8d;
    case 4: goto L_11feeab5;
    case 5: goto L_11feeabf;
    case 6: goto L_11feeac5;
    case 7: goto L_11feeacb;
    default: x86_unimpl("switch@0x11feea70 out of table"); return;
  }
L_11feea77:;
  /* 11feea77 mov dword ptr [0x1200f2a8], 1 */
  w32((uint32_t)(0x1200f2a8), (0x1u));
L_11feea81:;
  /* 11feea81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11feea85 jmp 0x11feea91 */
  goto L_11feea91;
L_11feea87:;
  /* 11feea87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11feea8b jmp 0x11feea91 */
  goto L_11feea91;
L_11feea8d:;
  /* 11feea8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11feea91:;
  /* 11feea91 jmp 0x11feed90 */
  goto L_11feed90;
L_11feea96:;
  /* 11feea96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feea99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11feea9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11feea9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feeaa2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11feeaa5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeaa9 ja 0x11feeacf */
  if ((!C.cf&&!C.zf)) goto L_11feeacf;
  /* 11feeaab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11feeaae jmp dword ptr [ecx*4 + 0x11feeecf] */
  switch (ECX) {
    case 0: goto L_11feeab5;
    case 1: goto L_11feeabf;
    case 2: goto L_11feeac5;
    case 3: goto L_11feeacb;
    default: x86_unimpl("switch@0x11feeaae out of table"); return;
  }
L_11feeab5:;
  /* 11feeab5 mov dword ptr [0x1200f2a8], 1 */
  w32((uint32_t)(0x1200f2a8), (0x1u));
L_11feeabf:;
  /* 11feeabf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11feeac3 jmp 0x11feeacf */
  goto L_11feeacf;
L_11feeac5:;
  /* 11feeac5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11feeac9 jmp 0x11feeacf */
  goto L_11feeacf;
L_11feeacb:;
  /* 11feeacb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11feeacf:;
  /* 11feeacf jmp 0x11feed90 */
  goto L_11feed90;
L_11feead4:;
  /* 11feead4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feead7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11feeada cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeade je 0x11feeae8 */
  if (C.zf) goto L_11feeae8;
  /* 11feeae0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeae4 je 0x11feeaee */
  if (C.zf) goto L_11feeaee;
  /* 11feeae6 jmp 0x11feeaf2 */
  goto L_11feeaf2;
L_11feeae8:;
  /* 11feeae8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11feeaec jmp 0x11feeaf2 */
  goto L_11feeaf2;
L_11feeaee:;
  /* 11feeaee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11feeaf2:;
  /* 11feeaf2 jmp 0x11feed90 */
  goto L_11feed90;
L_11feeaf7:;
  /* 11feeaf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feeafa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11feeafd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb01 je 0x11feeb0b */
  if (C.zf) goto L_11feeb0b;
  /* 11feeb03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb07 je 0x11feeb15 */
  if (C.zf) goto L_11feeb15;
  /* 11feeb09 jmp 0x11feeb19 */
  goto L_11feeb19;
L_11feeb0b:;
  /* 11feeb0b mov dword ptr [0x1200f2a8], 1 */
  w32((uint32_t)(0x1200f2a8), (0x1u));
L_11feeb15:;
  /* 11feeb15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11feeb19:;
  /* 11feeb19 jmp 0x11feed90 */
  goto L_11feed90;
L_11feeb1e:;
  /* 11feeb1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feeb21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11feeb24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb28 je 0x11feeb32 */
  if (C.zf) goto L_11feeb32;
  /* 11feeb2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb2e je 0x11feeb3c */
  if (C.zf) goto L_11feeb3c;
  /* 11feeb30 jmp 0x11feeb40 */
  goto L_11feeb40;
L_11feeb32:;
  /* 11feeb32 mov dword ptr [0x1200f2a8], 1 */
  w32((uint32_t)(0x1200f2a8), (0x1u));
L_11feeb3c:;
  /* 11feeb3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11feeb40:;
  /* 11feeb40 jmp 0x11feed90 */
  goto L_11feed90;
L_11feeb45:;
  /* 11feeb45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feeb48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11feeb4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb4f je 0x11feeb59 */
  if (C.zf) goto L_11feeb59;
  /* 11feeb51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb55 je 0x11feeb63 */
  if (C.zf) goto L_11feeb63;
  /* 11feeb57 jmp 0x11feeb67 */
  goto L_11feeb67;
L_11feeb59:;
  /* 11feeb59 mov dword ptr [0x1200f2a8], 1 */
  w32((uint32_t)(0x1200f2a8), (0x1u));
L_11feeb63:;
  /* 11feeb63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11feeb67:;
  /* 11feeb67 jmp 0x11feed90 */
  goto L_11feed90;
L_11feeb6c:;
  /* 11feeb6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feeb6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11feeb72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb76 je 0x11feeb80 */
  if (C.zf) goto L_11feeb80;
  /* 11feeb78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeb7c je 0x11feeb8a */
  if (C.zf) goto L_11feeb8a;
  /* 11feeb7e jmp 0x11feeb8e */
  goto L_11feeb8e;
L_11feeb80:;
  /* 11feeb80 mov dword ptr [0x1200f2a8], 1 */
  w32((uint32_t)(0x1200f2a8), (0x1u));
L_11feeb8a:;
  /* 11feeb8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11feeb8e:;
  /* 11feeb8e jmp 0x11feed90 */
  goto L_11feed90;
L_11feeb93:;
  /* 11feeb93 push 0x1200ab0c */
  push32((uint32_t)(0x1200ab0cu));
  /* 11feeb98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feeb9b push ecx */
  push32((uint32_t)(ECX));
  /* 11feeb9c call 0x11fef3f0 */
  push32(0x11feeba1u); f_11fef3f0();
  /* 11feeba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feeba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feeba6 jne 0x11feebb3 */
  if (!C.zf) goto L_11feebb3;
  /* 11feeba8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feebab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feebae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11feebb1 jmp 0x11feebd1 */
  goto L_11feebd1;
L_11feebb3:;
  /* 11feebb3 push 0x1200ab08 */
  push32((uint32_t)(0x1200ab08u));
  /* 11feebb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feebbb push eax */
  push32((uint32_t)(EAX));
  /* 11feebbc call 0x11fef3f0 */
  push32(0x11feebc1u); f_11fef3f0();
  /* 11feebc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feebc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feebc6 jne 0x11feebd1 */
  if (!C.zf) goto L_11feebd1;
  /* 11feebc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feebcb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feebce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11feebd1:;
  /* 11feebd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11feebd5 jmp 0x11feed90 */
  goto L_11feed90;
L_11feebda:;
  /* 11feebda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11feebdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feebe1 jg 0x11feebf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11feebf1;
  /* 11feebe3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11feebe6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11feebec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11feebef jmp 0x11feebfd */
  goto L_11feebfd;
L_11feebf1:;
  /* 11feebf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11feebf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11feebfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11feebfd:;
  /* 11feebfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feec01 jle 0x11feeca4 */
  if ((C.zf||C.sf!=C.of)) goto L_11feeca4;
  /* 11feec07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feec0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feec0d jbe 0x11feeca4 */
  if ((C.cf||C.zf)) goto L_11feeca4;
  /* 11feec13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feec16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feec18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11feec1a mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11feec20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11feec22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11feec26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11feec2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11feec2e je 0x11feec67 */
  if (C.zf) goto L_11feec67;
  /* 11feec30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feec33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feec36 jbe 0x11feec67 */
  if ((C.cf||C.zf)) goto L_11feec67;
  /* 11feec38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feec3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feec3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feec40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11feec42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11feec44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feec47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feec49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feec4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feec4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11feec51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feec54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feec57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11feec5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feec5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feec5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feec62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feec65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11feec67:;
  /* 11feec67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feec6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feec6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feec6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11feec71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11feec73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feec76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feec78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feec7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feec7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11feec80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feec83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feec86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11feec89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feec8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feec8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feec91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feec94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11feec96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feec99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feec9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11feec9f jmp 0x11feebfd */
  goto L_11feebfd;
L_11feeca4:;
  /* 11feeca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feeca7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11feecaa jmp 0x11fee9c6 */
  goto L_11fee9c6;
L_11feecaf:;
  /* 11feecaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feecb2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11feecb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feecb7 je 0x11feed82 */
  if (C.zf) goto L_11feed82;
  /* 11feecbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feecc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feecc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11feecc6:;
  /* 11feecc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feecc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feeccc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feecce je 0x11feed80 */
  if (C.zf) goto L_11feed80;
  /* 11feecd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feecd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feecda je 0x11feed80 */
  if (C.zf) goto L_11feed80;
  /* 11feece0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feece3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feece6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feece9 jne 0x11feecf9 */
  if (!C.zf) goto L_11feecf9;
  /* 11feeceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feecee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feecf1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11feecf4 jmp 0x11feed80 */
  goto L_11feed80;
L_11feecf9:;
  /* 11feecf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feecfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11feecfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11feed00 mov edx, dword ptr [0x1200cfec] */
  EDX = (r32((uint32_t)(0x1200cfec)));
  /* 11feed06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feed08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11feed0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11feed11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feed13 je 0x11feed4c */
  if (C.zf) goto L_11feed4c;
  /* 11feed15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feed18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feed1b jbe 0x11feed4c */
  if ((C.cf||C.zf)) goto L_11feed4c;
  /* 11feed1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feed20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feed22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feed25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11feed27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11feed29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feed2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feed2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feed31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feed34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11feed36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feed39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feed3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11feed3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feed42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feed44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feed47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feed4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11feed4c:;
  /* 11feed4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feed4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feed51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feed54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11feed56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11feed58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feed5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feed5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feed60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feed63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11feed65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feed68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feed6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11feed6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feed71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feed73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feed76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feed79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11feed7b jmp 0x11feecc6 */
  goto L_11feecc6;
L_11feed80:;
  /* 11feed80 jmp 0x11feed8b */
  goto L_11feed8b;
L_11feed82:;
  /* 11feed82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feed85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feed88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11feed8b:;
  /* 11feed8b jmp 0x11fee9c6 */
  goto L_11fee9c6;
L_11feed90:;
  /* 11feed90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11feed94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feed96 je 0x11feedbc */
  if (C.zf) goto L_11feedbc;
  /* 11feed98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11feed9b push edx */
  push32((uint32_t)(EDX));
  /* 11feed9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feed9f push eax */
  push32((uint32_t)(EAX));
  /* 11feeda0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feeda3 push ecx */
  push32((uint32_t)(ECX));
  /* 11feeda4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11feeda7 push edx */
  push32((uint32_t)(EDX));
  /* 11feeda8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11feedab push eax */
  push32((uint32_t)(EAX));
  /* 11feedac call 0x11fee1f0 */
  push32(0x11feedb1u); f_11fee1f0();
  /* 11feedb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feedb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feedb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11feedba jmp 0x11feee37 */
  goto L_11feee37;
L_11feedbc:;
  /* 11feedbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feedbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feedc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11feedc3 mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11feedc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11feedcb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11feedcf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11feedd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11feedd7 je 0x11feee08 */
  if (C.zf) goto L_11feee08;
  /* 11feedd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feeddc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feedde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feede1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11feede3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11feede5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feede8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feedea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feeded mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feedf0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11feedf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feedf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feedf8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11feedfb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feedfe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feee00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feee03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feee06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11feee08:;
  /* 11feee08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feee0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feee0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feee10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11feee12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11feee14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feee17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feee19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feee1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feee1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11feee21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feee24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feee27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11feee2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feee2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feee2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feee32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feee35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11feee37:;
  /* 11feee37 jmp 0x11fee9c6 */
  goto L_11fee9c6;
L_11feee3c:;
  /* 11feee3c mov esp, ebp */
  ESP = (EBP);
  /* 11feee3e pop ebp */
  EBP = (pop32());
  /* 11feee3f ret  */
  ESPCHK(0x11fee9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eee0 @ 0x11feeee0 (650 bytes, 178 insns) */
void f_11feeee0(void) {
  FTRACE(0x11feeee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feeee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11feeee1 mov ebp, esp */
  EBP = (ESP);
  /* 11feeee3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feeee9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeeed jne 0x11fef049 */
  if (!C.zf) goto L_11fef049;
  /* 11feeef3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11feeef6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11feeefc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11feef02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feef05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11feef0c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11feef16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feef18 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11feef1e push edx */
  push32((uint32_t)(EDX));
  /* 11feef1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feef22 push eax */
  push32((uint32_t)(EAX));
  /* 11feef23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feef26 push ecx */
  push32((uint32_t)(ECX));
  /* 11feef27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11feef2a push edx */
  push32((uint32_t)(EDX));
  /* 11feef2b call 0x11ff0240 */
  push32(0x11feef30u); f_11ff0240();
  /* 11feef30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feef33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11feef36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feef3a jne 0x11feefcf */
  if (!C.zf) goto L_11feefcf;
  /* 11feef40 call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11feef46u);
  /* 11feef46 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feef49 je 0x11feef50 */
  if (C.zf) goto L_11feef50;
  /* 11feef4b jmp 0x11fef02d */
  goto L_11fef02d;
L_11feef50:;
  /* 11feef50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feef52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feef54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feef56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feef59 push eax */
  push32((uint32_t)(EAX));
  /* 11feef5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11feef5d push ecx */
  push32((uint32_t)(ECX));
  /* 11feef5e call 0x11ff0240 */
  push32(0x11feef63u); f_11ff0240();
  /* 11feef63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feef66 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11feef6c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feef73 jne 0x11feef7a */
  if (!C.zf) goto L_11feef7a;
  /* 11feef75 jmp 0x11fef02d */
  goto L_11fef02d;
L_11feef7a:;
  /* 11feef7a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11feef7c push 0x1200ab14 */
  push32((uint32_t)(0x1200ab14u));
  /* 11feef81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feef83 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11feef89 push edx */
  push32((uint32_t)(EDX));
  /* 11feef8a call 0x11fdb1c0 */
  push32(0x11feef8fu); f_11fdb1c0();
  /* 11feef8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feef92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11feef95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feef99 jne 0x11feefa0 */
  if (!C.zf) goto L_11feefa0;
  /* 11feef9b jmp 0x11fef02d */
  goto L_11fef02d;
L_11feefa0:;
  /* 11feefa0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11feefa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feefa9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11feefaf push eax */
  push32((uint32_t)(EAX));
  /* 11feefb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feefb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11feefb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11feefb7 push edx */
  push32((uint32_t)(EDX));
  /* 11feefb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11feefbb push eax */
  push32((uint32_t)(EAX));
  /* 11feefbc call 0x11ff0240 */
  push32(0x11feefc1u); f_11ff0240();
  /* 11feefc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feefc4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11feefc7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feefcb jne 0x11feefcf */
  if (!C.zf) goto L_11feefcf;
  /* 11feefcd jmp 0x11fef02d */
  goto L_11fef02d;
L_11feefcf:;
  /* 11feefcf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11feefd1 push 0x1200ab14 */
  push32((uint32_t)(0x1200ab14u));
  /* 11feefd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feefd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feefdb push ecx */
  push32((uint32_t)(ECX));
  /* 11feefdc call 0x11fdb1c0 */
  push32(0x11feefe1u); f_11fdb1c0();
  /* 11feefe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feefe4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11feefea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11feefec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11feeff2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feeff5 jne 0x11feeff9 */
  if (!C.zf) goto L_11feeff9;
  /* 11feeff7 jmp 0x11fef02d */
  goto L_11fef02d;
L_11feeff9:;
  /* 11feeff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feeffc push ecx */
  push32((uint32_t)(ECX));
  /* 11feeffd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fef000 push edx */
  push32((uint32_t)(EDX));
  /* 11fef001 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11fef007 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fef009 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef00a call 0x11fe0140 */
  push32(0x11fef00fu); f_11fe0140();
  /* 11fef00f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef012 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef016 je 0x11fef026 */
  if (C.zf) goto L_11fef026;
  /* 11fef018 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fef01a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fef01d push edx */
  push32((uint32_t)(EDX));
  /* 11fef01e call 0x11fdbc50 */
  push32(0x11fef023u); f_11fdbc50();
  /* 11fef023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fef026:;
  /* 11fef026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef028 jmp 0x11fef166 */
  goto L_11fef166;
L_11fef02d:;
  /* 11fef02d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef031 je 0x11fef041 */
  if (C.zf) goto L_11fef041;
  /* 11fef033 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fef035 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fef038 push eax */
  push32((uint32_t)(EAX));
  /* 11fef039 call 0x11fdbc50 */
  push32(0x11fef03eu); f_11fdbc50();
  /* 11fef03e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fef041:;
  /* 11fef041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fef044 jmp 0x11fef166 */
  goto L_11fef166;
L_11fef049:;
  /* 11fef049 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef04d jne 0x11fef163 */
  if (!C.zf) goto L_11fef163;
  /* 11fef053 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11fef05d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef060 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11fef066 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef068 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fef06e push edx */
  push32((uint32_t)(EDX));
  /* 11fef06f push 0x1200f27c */
  push32((uint32_t)(0x1200f27cu));
  /* 11fef074 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef077 push eax */
  push32((uint32_t)(EAX));
  /* 11fef078 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef07b push ecx */
  push32((uint32_t)(ECX));
  /* 11fef07c call 0x11ff00a0 */
  push32(0x11fef081u); f_11ff00a0();
  /* 11fef081 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef086 jne 0x11fef090 */
  if (!C.zf) goto L_11fef090;
  /* 11fef088 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fef08b jmp 0x11fef166 */
  goto L_11fef166;
L_11fef090:;
  /* 11fef090 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fef096 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fef099 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11fef0a3 jmp 0x11fef0b4 */
  goto L_11fef0b4;
L_11fef0a5:;
  /* 11fef0a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fef0ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef0ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11fef0b4:;
  /* 11fef0b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef0bb jge 0x11fef15f */
  if ((C.sf==C.of)) goto L_11fef15f;
  /* 11fef0c1 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef0c8 jle 0x11fef0fb */
  if ((C.zf||C.sf!=C.of)) goto L_11fef0fb;
  /* 11fef0ca push 4 */
  push32((uint32_t)(0x4u));
  /* 11fef0cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fef0d2 mov dl, byte ptr [ecx*2 + 0x1200f27c] */
  DL = (r8((uint32_t)(ECX*2 + 0x1200f27c)));
  /* 11fef0d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11fef0df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11fef0e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fef0ea push eax */
  push32((uint32_t)(EAX));
  /* 11fef0eb call 0x11fe0860 */
  push32(0x11fef0f0u); f_11fe0860();
  /* 11fef0f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef0f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11fef0f9 jmp 0x11fef12e */
  goto L_11fef12e;
L_11fef0fb:;
  /* 11fef0fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fef101 mov dl, byte ptr [ecx*2 + 0x1200f27c] */
  DL = (r8((uint32_t)(ECX*2 + 0x1200f27c)));
  /* 11fef108 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11fef10e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11fef114 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fef119 mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fef11f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef121 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fef125 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fef128 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11fef12e:;
  /* 11fef12e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef135 je 0x11fef158 */
  if (C.zf) goto L_11fef158;
  /* 11fef137 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fef13d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fef140 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fef143 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11fef14a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11fef14e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fef154 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fef156 jmp 0x11fef15a */
  goto L_11fef15a;
L_11fef158:;
  /* 11fef158 jmp 0x11fef15f */
  goto L_11fef15f;
L_11fef15a:;
  /* 11fef15a jmp 0x11fef0a5 */
  goto L_11fef0a5;
L_11fef15f:;
  /* 11fef15f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef161 jmp 0x11fef166 */
  goto L_11fef166;
L_11fef163:;
  /* 11fef163 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fef166:;
  /* 11fef166 mov esp, ebp */
  ESP = (EBP);
  /* 11fef168 pop ebp */
  EBP = (pop32());
  /* 11fef169 ret  */
  ESPCHK(0x11feeee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f170 @ 0x11fef170 (10 bytes, 5 insns) */
void f_11fef170(void) {
  FTRACE(0x11fef170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fef170 push ebp */
  push32((uint32_t)(EBP));
  /* 11fef171 mov ebp, esp */
  EBP = (ESP);
  /* 11fef173 mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11fef178 pop ebp */
  EBP = (pop32());
  /* 11fef179 ret  */
  ESPCHK(0x11fef170u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f180 @ 0x11fef180 (575 bytes, 196 insns) */
void f_11fef180(void) {
  FTRACE(0x11fef180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fef180 push ebp */
  push32((uint32_t)(EBP));
  /* 11fef181 mov ebp, esp */
  EBP = (ESP);
  /* 11fef183 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fef185 push 0x1200ab20 */
  push32((uint32_t)(0x1200ab20u));
  /* 11fef18a push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fef18f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fef195 push eax */
  push32((uint32_t)(EAX));
  /* 11fef196 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fef19d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef1a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fef1a1 push esi */
  push32((uint32_t)(ESI));
  /* 11fef1a2 push edi */
  push32((uint32_t)(EDI));
  /* 11fef1a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fef1a6 cmp dword ptr [0x1200f288], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f288))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef1ad jne 0x11fef1fe */
  if (!C.zf) goto L_11fef1fe;
  /* 11fef1af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11fef1b2 push eax */
  push32((uint32_t)(EAX));
  /* 11fef1b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef1b5 push 0x1200a254 */
  push32((uint32_t)(0x1200a254u));
  /* 11fef1ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef1bc call dword ptr [0x1201136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201136c))), 0x11fef1c2u);
  /* 11fef1c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef1c4 je 0x11fef1d2 */
  if (C.zf) goto L_11fef1d2;
  /* 11fef1c6 mov dword ptr [0x1200f288], 1 */
  w32((uint32_t)(0x1200f288), (0x1u));
  /* 11fef1d0 jmp 0x11fef1fe */
  goto L_11fef1fe;
L_11fef1d2:;
  /* 11fef1d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11fef1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef1d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef1d8 push 0x1200a250 */
  push32((uint32_t)(0x1200a250u));
  /* 11fef1dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef1df push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef1e1 call dword ptr [0x12011364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011364))), 0x11fef1e7u);
  /* 11fef1e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef1e9 je 0x11fef1f7 */
  if (C.zf) goto L_11fef1f7;
  /* 11fef1eb mov dword ptr [0x1200f288], 2 */
  w32((uint32_t)(0x1200f288), (0x2u));
  /* 11fef1f5 jmp 0x11fef1fe */
  goto L_11fef1fe;
L_11fef1f7:;
  /* 11fef1f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef1f9 jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef1fe:;
  /* 11fef1fe cmp dword ptr [0x1200f288], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f288))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef205 jne 0x11fef222 */
  if (!C.zf) goto L_11fef222;
  /* 11fef207 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef20a push edx */
  push32((uint32_t)(EDX));
  /* 11fef20b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef20e push eax */
  push32((uint32_t)(EAX));
  /* 11fef20f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef212 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef216 push edx */
  push32((uint32_t)(EDX));
  /* 11fef217 call dword ptr [0x1201136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201136c))), 0x11fef21du);
  /* 11fef21d jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef222:;
  /* 11fef222 cmp dword ptr [0x1200f288], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f288))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef229 jne 0x11fef3d7 */
  if (!C.zf) goto L_11fef3d7;
  /* 11fef22f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef233 jne 0x11fef23d */
  if (!C.zf) goto L_11fef23d;
  /* 11fef235 mov eax, dword ptr [0x1200f208] */
  EAX = (r32((uint32_t)(0x1200f208)));
  /* 11fef23a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11fef23d:;
  /* 11fef23d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef23f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef241 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef243 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef245 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef248 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef249 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef24c push edx */
  push32((uint32_t)(EDX));
  /* 11fef24d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fef252 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef255 push eax */
  push32((uint32_t)(EAX));
  /* 11fef256 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fef25cu);
  /* 11fef25c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fef25f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef263 jne 0x11fef26c */
  if (!C.zf) goto L_11fef26c;
  /* 11fef265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef267 jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef26c:;
  /* 11fef26c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fef273 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef276 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef279 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fef27b call 0x11fdfac0 */
  push32(0x11fef280u); f_11fdfac0();
  /* 11fef280 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11fef283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fef286 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fef289 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fef28c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef28f push edx */
  push32((uint32_t)(EDX));
  /* 11fef290 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef292 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fef295 push eax */
  push32((uint32_t)(EAX));
  /* 11fef296 call 0x11fe15d0 */
  push32(0x11fef29bu); f_11fe15d0();
  /* 11fef29b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef29e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fef2a5 jmp 0x11fef2be */
  goto L_11fef2be;
  /* 11fef2a7 mov eax, 1 */
  EAX = (0x1u);
  /* 11fef2ac ret  */
  ESPCHK(0x11fef180u, _esp0);
  ESP += 4; return;
  /* 11fef2ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fef2b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11fef2b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fef2be:;
  /* 11fef2be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef2c2 jne 0x11fef2cb */
  if (!C.zf) goto L_11fef2cb;
  /* 11fef2c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef2c6 jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef2cb:;
  /* 11fef2cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef2cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef2cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef2d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef2d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fef2d6 push edx */
  push32((uint32_t)(EDX));
  /* 11fef2d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef2da push eax */
  push32((uint32_t)(EAX));
  /* 11fef2db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef2de push ecx */
  push32((uint32_t)(ECX));
  /* 11fef2df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fef2e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef2e7 push edx */
  push32((uint32_t)(EDX));
  /* 11fef2e8 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fef2eeu);
  /* 11fef2ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef2f0 jne 0x11fef2f9 */
  if (!C.zf) goto L_11fef2f9;
  /* 11fef2f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef2f4 jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef2f9:;
  /* 11fef2f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fef300 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef303 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11fef307 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef30a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fef30c call 0x11fdfac0 */
  push32(0x11fef311u); f_11fdfac0();
  /* 11fef311 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11fef314 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fef317 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fef31a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fef31d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fef324 jmp 0x11fef33d */
  goto L_11fef33d;
  /* 11fef326 mov eax, 1 */
  EAX = (0x1u);
  /* 11fef32b ret  */
  ESPCHK(0x11fef180u, _esp0);
  ESP += 4; return;
  /* 11fef32c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fef32f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fef336 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fef33d:;
  /* 11fef33d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef341 jne 0x11fef34a */
  if (!C.zf) goto L_11fef34a;
  /* 11fef343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef345 jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef34a:;
  /* 11fef34a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef34e jne 0x11fef359 */
  if (!C.zf) goto L_11fef359;
  /* 11fef350 mov edx, dword ptr [0x1200f1f8] */
  EDX = (r32((uint32_t)(0x1200f1f8)));
  /* 11fef356 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11fef359:;
  /* 11fef359 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef35c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef35f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11fef365 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef368 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef36b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11fef372 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef375 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef376 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef379 push edx */
  push32((uint32_t)(EDX));
  /* 11fef37a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fef37d push eax */
  push32((uint32_t)(EAX));
  /* 11fef37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef381 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef382 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fef385 push edx */
  push32((uint32_t)(EDX));
  /* 11fef386 call dword ptr [0x12011364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011364))), 0x11fef38cu);
  /* 11fef38c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fef38f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef392 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef395 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef397 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11fef39c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef3a2 je 0x11fef3b8 */
  if (C.zf) goto L_11fef3b8;
  /* 11fef3a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef3a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef3aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef3ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fef3b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef3b6 je 0x11fef3bc */
  if (C.zf) goto L_11fef3bc;
L_11fef3b8:;
  /* 11fef3b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef3ba jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef3bc:;
  /* 11fef3bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef3bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fef3c1 push eax */
  push32((uint32_t)(EAX));
  /* 11fef3c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef3c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef3c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef3c9 push edx */
  push32((uint32_t)(EDX));
  /* 11fef3ca call 0x11fe1630 */
  push32(0x11fef3cfu); f_11fe1630();
  /* 11fef3cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef3d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fef3d5 jmp 0x11fef3d9 */
  goto L_11fef3d9;
L_11fef3d7:;
  /* 11fef3d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fef3d9:;
  /* 11fef3d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11fef3dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fef3df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fef3e6 pop edi */
  EDI = (pop32());
  /* 11fef3e7 pop esi */
  ESI = (pop32());
  /* 11fef3e8 pop ebx */
  EBX = (pop32());
  /* 11fef3e9 mov esp, ebp */
  ESP = (EBP);
  /* 11fef3eb pop ebp */
  EBP = (pop32());
  /* 11fef3ec ret  */
  ESPCHK(0x11fef180u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f3f0 @ 0x11fef3f0 (208 bytes, 85 insns) */
void f_11fef3f0(void) {
  FTRACE(0x11fef3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fef3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fef3f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fef3f3 push edi */
  push32((uint32_t)(EDI));
  /* 11fef3f4 push esi */
  push32((uint32_t)(ESI));
  /* 11fef3f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11fef3f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef3f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef3fc lea eax, [0x1200f1f0] */
  EAX = ((uint32_t)(0x1200f1f0));
  /* 11fef402 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef406 jne 0x11fef443 */
  if (!C.zf) goto L_11fef443;
  /* 11fef408 mov al, 0xff */
  AL = (0xffu);
  /* 11fef40a mov edi, edi */
  EDI = (EDI);
L_11fef40c:;
  /* 11fef40c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fef40e je 0x11fef43e */
  if (C.zf) goto L_11fef43e;
  /* 11fef410 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fef412 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fef413 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11fef415 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fef416 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef418 je 0x11fef40c */
  if (C.zf) goto L_11fef40c;
  /* 11fef41a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fef41c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef41e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fef420 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11fef423 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fef425 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fef427 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11fef429 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fef42b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef42d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fef42f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11fef432 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fef434 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fef436 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef438 je 0x11fef40c */
  if (C.zf) goto L_11fef40c;
  /* 11fef43a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fef43c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11fef43e:;
  /* 11fef43e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11fef441 jmp 0x11fef4bb */
  goto L_11fef4bb;
L_11fef443:;
  /* 11fef443 lock inc dword ptr [0x12010614] */
  x86_unimpl("lock inc @ 0x11fef443");
  /* 11fef44a cmp dword ptr [0x12010604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef451 jg 0x11fef457 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fef457;
  /* 11fef453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef455 jmp 0x11fef46c */
  goto L_11fef46c;
L_11fef457:;
  /* 11fef457 lock dec dword ptr [0x12010614] */
  x86_unimpl("lock dec @ 0x11fef457");
  /* 11fef45e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fef460 call 0x11fdb0c0 */
  push32(0x11fef465u); f_11fdb0c0();
  /* 11fef465 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11fef46c:;
  /* 11fef46c mov eax, 0xff */
  EAX = (0xffu);
  /* 11fef471 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11fef473 nop  */
  /* nop */
L_11fef474:;
  /* 11fef474 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fef476 je 0x11fef49f */
  if (C.zf) goto L_11fef49f;
  /* 11fef478 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fef47a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fef47b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11fef47d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fef47e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef480 je 0x11fef474 */
  if (C.zf) goto L_11fef474;
  /* 11fef482 push eax */
  push32((uint32_t)(EAX));
  /* 11fef483 push ebx */
  push32((uint32_t)(EBX));
  /* 11fef484 call 0x11fe09d0 */
  push32(0x11fef489u); f_11fe09d0();
  /* 11fef489 mov ebx, eax */
  EBX = (EAX);
  /* 11fef48b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef48e call 0x11fe09d0 */
  push32(0x11fef493u); f_11fe09d0();
  /* 11fef493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef496 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef498 je 0x11fef474 */
  if (C.zf) goto L_11fef474;
  /* 11fef49a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fef49c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11fef49f:;
  /* 11fef49f mov ebx, eax */
  EBX = (EAX);
  /* 11fef4a1 pop eax */
  EAX = (pop32());
  /* 11fef4a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef4a4 jne 0x11fef4af */
  if (!C.zf) goto L_11fef4af;
  /* 11fef4a6 lock dec dword ptr [0x12010614] */
  x86_unimpl("lock dec @ 0x11fef4a6");
  /* 11fef4ad jmp 0x11fef4b9 */
  goto L_11fef4b9;
L_11fef4af:;
  /* 11fef4af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fef4b1 call 0x11fdb160 */
  push32(0x11fef4b6u); f_11fdb160();
  /* 11fef4b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fef4b9:;
  /* 11fef4b9 mov eax, ebx */
  EAX = (EBX);
L_11fef4bb:;
  /* 11fef4bb pop ebx */
  EBX = (pop32());
  /* 11fef4bc pop esi */
  ESI = (pop32());
  /* 11fef4bd pop edi */
  EDI = (pop32());
  /* 11fef4be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fef4bf ret  */
  ESPCHK(0x11fef3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f4c0 @ 0x11fef4c0 (257 bytes, 103 insns) */
void f_11fef4c0(void) {
  FTRACE(0x11fef4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fef4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fef4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fef4c3 push edi */
  push32((uint32_t)(EDI));
  /* 11fef4c4 push esi */
  push32((uint32_t)(ESI));
  /* 11fef4c5 push ebx */
  push32((uint32_t)(EBX));
  /* 11fef4c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef4c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef4cb je 0x11fef5ba */
  if (C.zf) goto L_11fef5ba;
  /* 11fef4d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef4d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef4d7 lea eax, [0x1200f1f0] */
  EAX = ((uint32_t)(0x1200f1f0));
  /* 11fef4dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef4e1 jne 0x11fef531 */
  if (!C.zf) goto L_11fef531;
  /* 11fef4e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11fef4e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11fef4e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11fef4e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fef4ec:;
  /* 11fef4ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11fef4ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fef4f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11fef4f2 je 0x11fef515 */
  if (C.zf) goto L_11fef515;
  /* 11fef4f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fef4f6 je 0x11fef515 */
  if (C.zf) goto L_11fef515;
  /* 11fef4f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fef4f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fef4fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef4fc jb 0x11fef504 */
  if (C.cf) goto L_11fef504;
  /* 11fef4fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef500 ja 0x11fef504 */
  if ((!C.cf&&!C.zf)) goto L_11fef504;
  /* 11fef502 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11fef504:;
  /* 11fef504 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef506 jb 0x11fef50e */
  if (C.cf) goto L_11fef50e;
  /* 11fef508 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef50a ja 0x11fef50e */
  if ((!C.cf&&!C.zf)) goto L_11fef50e;
  /* 11fef50c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11fef50e:;
  /* 11fef50e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef510 jne 0x11fef51f */
  if (!C.zf) goto L_11fef51f;
  /* 11fef512 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fef513 jne 0x11fef4ec */
  if (!C.zf) goto L_11fef4ec;
L_11fef515:;
  /* 11fef515 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef517 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fef519 je 0x11fef5ba */
  if (C.zf) goto L_11fef5ba;
L_11fef51f:;
  /* 11fef51f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11fef524 jb 0x11fef5ba */
  if (C.cf) goto L_11fef5ba;
  /* 11fef52a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fef52c jmp 0x11fef5ba */
  goto L_11fef5ba;
L_11fef531:;
  /* 11fef531 lock inc dword ptr [0x12010614] */
  x86_unimpl("lock inc @ 0x11fef531");
  /* 11fef538 cmp dword ptr [0x12010604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef53f jg 0x11fef545 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fef545;
  /* 11fef541 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef543 jmp 0x11fef55e */
  goto L_11fef55e;
L_11fef545:;
  /* 11fef545 lock dec dword ptr [0x12010614] */
  x86_unimpl("lock dec @ 0x11fef545");
  /* 11fef54c mov ebx, ecx */
  EBX = (ECX);
  /* 11fef54e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fef550 call 0x11fdb0c0 */
  push32(0x11fef555u); f_11fdb0c0();
  /* 11fef555 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11fef55c mov ecx, ebx */
  ECX = (EBX);
L_11fef55e:;
  /* 11fef55e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef560 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11fef562 mov edi, edi */
  EDI = (EDI);
L_11fef564:;
  /* 11fef564 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fef566 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef568 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11fef56a je 0x11fef58f */
  if (C.zf) goto L_11fef58f;
  /* 11fef56c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11fef56e je 0x11fef58f */
  if (C.zf) goto L_11fef58f;
  /* 11fef570 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fef571 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fef572 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef573 push eax */
  push32((uint32_t)(EAX));
  /* 11fef574 push ebx */
  push32((uint32_t)(EBX));
  /* 11fef575 call 0x11fe09d0 */
  push32(0x11fef57au); f_11fe09d0();
  /* 11fef57a mov ebx, eax */
  EBX = (EAX);
  /* 11fef57c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef57f call 0x11fe09d0 */
  push32(0x11fef584u); f_11fe09d0();
  /* 11fef584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef587 pop ecx */
  ECX = (pop32());
  /* 11fef588 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef58a jne 0x11fef595 */
  if (!C.zf) goto L_11fef595;
  /* 11fef58c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fef58d jne 0x11fef564 */
  if (!C.zf) goto L_11fef564;
L_11fef58f:;
  /* 11fef58f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef591 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef593 je 0x11fef59e */
  if (C.zf) goto L_11fef59e;
L_11fef595:;
  /* 11fef595 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11fef59a jb 0x11fef59e */
  if (C.cf) goto L_11fef59e;
  /* 11fef59c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11fef59e:;
  /* 11fef59e pop eax */
  EAX = (pop32());
  /* 11fef59f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef5a1 jne 0x11fef5ac */
  if (!C.zf) goto L_11fef5ac;
  /* 11fef5a3 lock dec dword ptr [0x12010614] */
  x86_unimpl("lock dec @ 0x11fef5a3");
  /* 11fef5aa jmp 0x11fef5ba */
  goto L_11fef5ba;
L_11fef5ac:;
  /* 11fef5ac mov ebx, ecx */
  EBX = (ECX);
  /* 11fef5ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fef5b0 call 0x11fdb160 */
  push32(0x11fef5b5u); f_11fdb160();
  /* 11fef5b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef5b8 mov ecx, ebx */
  ECX = (EBX);
L_11fef5ba:;
  /* 11fef5ba mov eax, ecx */
  EAX = (ECX);
  /* 11fef5bc pop ebx */
  EBX = (pop32());
  /* 11fef5bd pop esi */
  ESI = (pop32());
  /* 11fef5be pop edi */
  EDI = (pop32());
  /* 11fef5bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fef5c0 ret  */
  ESPCHK(0x11fef4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f5d0 @ 0x11fef5d0 (970 bytes, 340 insns) */
void f_11fef5d0(void) {
  FTRACE(0x11fef5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fef5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fef5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fef5d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fef5d5 push 0x1200ab80 */
  push32((uint32_t)(0x1200ab80u));
  /* 11fef5da push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fef5df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fef5e5 push eax */
  push32((uint32_t)(EAX));
  /* 11fef5e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fef5ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef5f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fef5f1 push esi */
  push32((uint32_t)(ESI));
  /* 11fef5f2 push edi */
  push32((uint32_t)(EDI));
  /* 11fef5f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fef5f6 cmp dword ptr [0x1200f28c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef5fd jne 0x11fef656 */
  if (!C.zf) goto L_11fef656;
  /* 11fef5ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef601 push 0x1200a254 */
  push32((uint32_t)(0x1200a254u));
  /* 11fef606 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef608 push 0x1200a254 */
  push32((uint32_t)(0x1200a254u));
  /* 11fef60d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef60f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef611 call dword ptr [0x1201132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201132c))), 0x11fef617u);
  /* 11fef617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef619 je 0x11fef627 */
  if (C.zf) goto L_11fef627;
  /* 11fef61b mov dword ptr [0x1200f28c], 1 */
  w32((uint32_t)(0x1200f28c), (0x1u));
  /* 11fef625 jmp 0x11fef656 */
  goto L_11fef656;
L_11fef627:;
  /* 11fef627 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef629 push 0x1200a250 */
  push32((uint32_t)(0x1200a250u));
  /* 11fef62e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef630 push 0x1200a250 */
  push32((uint32_t)(0x1200a250u));
  /* 11fef635 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef639 call dword ptr [0x1201133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201133c))), 0x11fef63fu);
  /* 11fef63f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef641 je 0x11fef64f */
  if (C.zf) goto L_11fef64f;
  /* 11fef643 mov dword ptr [0x1200f28c], 2 */
  w32((uint32_t)(0x1200f28c), (0x2u));
  /* 11fef64d jmp 0x11fef656 */
  goto L_11fef656;
L_11fef64f:;
  /* 11fef64f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef651 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef656:;
  /* 11fef656 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef65a jle 0x11fef66f */
  if ((C.zf||C.sf!=C.of)) goto L_11fef66f;
  /* 11fef65c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef65f push eax */
  push32((uint32_t)(EAX));
  /* 11fef660 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef663 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef664 call 0x11fef9d0 */
  push32(0x11fef669u); f_11fef9d0();
  /* 11fef669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef66c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11fef66f:;
  /* 11fef66f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef673 jle 0x11fef688 */
  if ((C.zf||C.sf!=C.of)) goto L_11fef688;
  /* 11fef675 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fef678 push edx */
  push32((uint32_t)(EDX));
  /* 11fef679 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef67c push eax */
  push32((uint32_t)(EAX));
  /* 11fef67d call 0x11fef9d0 */
  push32(0x11fef682u); f_11fef9d0();
  /* 11fef682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef685 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11fef688:;
  /* 11fef688 cmp dword ptr [0x1200f28c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f28c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef68f jne 0x11fef6b4 */
  if (!C.zf) goto L_11fef6b4;
  /* 11fef691 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fef694 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef695 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef698 push edx */
  push32((uint32_t)(EDX));
  /* 11fef699 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef69c push eax */
  push32((uint32_t)(EAX));
  /* 11fef69d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef6a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef6a4 push edx */
  push32((uint32_t)(EDX));
  /* 11fef6a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef6a8 push eax */
  push32((uint32_t)(EAX));
  /* 11fef6a9 call dword ptr [0x1201133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201133c))), 0x11fef6afu);
  /* 11fef6af jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef6b4:;
  /* 11fef6b4 cmp dword ptr [0x1200f28c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f28c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef6bb jne 0x11fef9b2 */
  if (!C.zf) goto L_11fef9b2;
  /* 11fef6c1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef6c5 jne 0x11fef6d0 */
  if (!C.zf) goto L_11fef6d0;
  /* 11fef6c7 mov ecx, dword ptr [0x1200f208] */
  ECX = (r32((uint32_t)(0x1200f208)));
  /* 11fef6cd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11fef6d0:;
  /* 11fef6d0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef6d4 je 0x11fef6e0 */
  if (C.zf) goto L_11fef6e0;
  /* 11fef6d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef6da jne 0x11fef85c */
  if (!C.zf) goto L_11fef85c;
L_11fef6e0:;
  /* 11fef6e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef6e3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef6e6 jne 0x11fef6f2 */
  if (!C.zf) goto L_11fef6f2;
  /* 11fef6e8 mov eax, 2 */
  EAX = (0x2u);
  /* 11fef6ed jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef6f2:;
  /* 11fef6f2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef6f6 jle 0x11fef702 */
  if ((C.zf||C.sf!=C.of)) goto L_11fef702;
  /* 11fef6f8 mov eax, 1 */
  EAX = (0x1u);
  /* 11fef6fd jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef702:;
  /* 11fef702 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef706 jle 0x11fef712 */
  if ((C.zf||C.sf!=C.of)) goto L_11fef712;
  /* 11fef708 mov eax, 3 */
  EAX = (0x3u);
  /* 11fef70d jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef712:;
  /* 11fef712 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11fef715 push eax */
  push32((uint32_t)(EAX));
  /* 11fef716 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fef719 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef71a call dword ptr [0x12011384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011384))), 0x11fef720u);
  /* 11fef720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef722 jne 0x11fef72b */
  if (!C.zf) goto L_11fef72b;
  /* 11fef724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef726 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef72b:;
  /* 11fef72b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef72f jne 0x11fef737 */
  if (!C.zf) goto L_11fef737;
  /* 11fef731 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef735 je 0x11fef764 */
  if (C.zf) goto L_11fef764;
L_11fef737:;
  /* 11fef737 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef73b jne 0x11fef743 */
  if (!C.zf) goto L_11fef743;
  /* 11fef73d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef741 je 0x11fef764 */
  if (C.zf) goto L_11fef764;
L_11fef743:;
  /* 11fef743 push 0x1200ab40 */
  push32((uint32_t)(0x1200ab40u));
  /* 11fef748 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef74a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11fef74f push 0x1200ab38 */
  push32((uint32_t)(0x1200ab38u));
  /* 11fef754 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fef756 call 0x11fd9d80 */
  push32(0x11fef75bu); f_11fd9d80();
  /* 11fef75b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef75e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef761 jne 0x11fef764 */
  if (!C.zf) goto L_11fef764;
  /* 11fef763 int3  */
  x86_unimpl("int3 @ 0x11fef763");
L_11fef764:;
  /* 11fef764 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef766 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fef768 jne 0x11fef72b */
  if (!C.zf) goto L_11fef72b;
  /* 11fef76a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef76e jle 0x11fef7e3 */
  if ((C.zf||C.sf!=C.of)) goto L_11fef7e3;
  /* 11fef770 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef774 jae 0x11fef780 */
  if (!C.cf) goto L_11fef780;
  /* 11fef776 mov eax, 3 */
  EAX = (0x3u);
  /* 11fef77b jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef780:;
  /* 11fef780 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11fef783 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11fef786 jmp 0x11fef791 */
  goto L_11fef791;
L_11fef788:;
  /* 11fef788 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef78b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef78e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11fef791:;
  /* 11fef791 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef796 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fef798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef79a je 0x11fef7d9 */
  if (C.zf) goto L_11fef7d9;
  /* 11fef79c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef79f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef7a1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11fef7a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fef7a6 je 0x11fef7d9 */
  if (C.zf) goto L_11fef7d9;
  /* 11fef7a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef7ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef7ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fef7af mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef7b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef7b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fef7b6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef7b8 jl 0x11fef7d7 */
  if ((C.sf!=C.of)) goto L_11fef7d7;
  /* 11fef7ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef7bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef7bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fef7c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef7c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef7c6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fef7c9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef7cb jg 0x11fef7d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fef7d7;
  /* 11fef7cd mov eax, 2 */
  EAX = (0x2u);
  /* 11fef7d2 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef7d7:;
  /* 11fef7d7 jmp 0x11fef788 */
  goto L_11fef788;
L_11fef7d9:;
  /* 11fef7d9 mov eax, 3 */
  EAX = (0x3u);
  /* 11fef7de jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef7e3:;
  /* 11fef7e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef7e7 jle 0x11fef85c */
  if ((C.zf||C.sf!=C.of)) goto L_11fef85c;
  /* 11fef7e9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef7ed jae 0x11fef7f9 */
  if (!C.cf) goto L_11fef7f9;
  /* 11fef7ef mov eax, 1 */
  EAX = (0x1u);
  /* 11fef7f4 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef7f9:;
  /* 11fef7f9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11fef7fc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11fef7ff jmp 0x11fef80a */
  goto L_11fef80a;
L_11fef801:;
  /* 11fef801 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef804 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef807 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11fef80a:;
  /* 11fef80a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef80d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef80f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fef811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fef813 je 0x11fef852 */
  if (C.zf) goto L_11fef852;
  /* 11fef815 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef818 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef81a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fef81d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fef81f je 0x11fef852 */
  if (C.zf) goto L_11fef852;
  /* 11fef821 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef826 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fef828 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef82b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fef82d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fef82f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef831 jl 0x11fef850 */
  if ((C.sf!=C.of)) goto L_11fef850;
  /* 11fef833 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef836 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fef838 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fef83a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fef83d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef83f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fef842 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef844 jg 0x11fef850 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fef850;
  /* 11fef846 mov eax, 2 */
  EAX = (0x2u);
  /* 11fef84b jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef850:;
  /* 11fef850 jmp 0x11fef801 */
  goto L_11fef801;
L_11fef852:;
  /* 11fef852 mov eax, 1 */
  EAX = (0x1u);
  /* 11fef857 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef85c:;
  /* 11fef85c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef85e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef860 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef863 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef864 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef867 push edx */
  push32((uint32_t)(EDX));
  /* 11fef868 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fef86a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fef86d push eax */
  push32((uint32_t)(EAX));
  /* 11fef86e call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fef874u);
  /* 11fef874 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fef877 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef87b jne 0x11fef884 */
  if (!C.zf) goto L_11fef884;
  /* 11fef87d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef87f jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef884:;
  /* 11fef884 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fef88b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fef88e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fef890 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef893 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fef895 call 0x11fdfac0 */
  push32(0x11fef89au); f_11fdfac0();
  /* 11fef89a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11fef89d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fef8a0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fef8a3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fef8a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fef8ad jmp 0x11fef8c6 */
  goto L_11fef8c6;
  /* 11fef8af mov eax, 1 */
  EAX = (0x1u);
  /* 11fef8b4 ret  */
  ESPCHK(0x11fef5d0u, _esp0);
  ESP += 4; return;
  /* 11fef8b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fef8b8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fef8bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fef8c6:;
  /* 11fef8c6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef8ca jne 0x11fef8d3 */
  if (!C.zf) goto L_11fef8d3;
  /* 11fef8cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef8ce jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef8d3:;
  /* 11fef8d3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fef8d6 push edx */
  push32((uint32_t)(EDX));
  /* 11fef8d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef8da push eax */
  push32((uint32_t)(EAX));
  /* 11fef8db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fef8de push ecx */
  push32((uint32_t)(ECX));
  /* 11fef8df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fef8e2 push edx */
  push32((uint32_t)(EDX));
  /* 11fef8e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef8e5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fef8e8 push eax */
  push32((uint32_t)(EAX));
  /* 11fef8e9 call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fef8efu);
  /* 11fef8ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef8f1 jne 0x11fef8fa */
  if (!C.zf) goto L_11fef8fa;
  /* 11fef8f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef8f5 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef8fa:;
  /* 11fef8fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef8fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11fef8fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fef901 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef902 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef905 push edx */
  push32((uint32_t)(EDX));
  /* 11fef906 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fef908 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fef90b push eax */
  push32((uint32_t)(EAX));
  /* 11fef90c call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fef912u);
  /* 11fef912 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fef915 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef919 jne 0x11fef922 */
  if (!C.zf) goto L_11fef922;
  /* 11fef91b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef91d jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef922:;
  /* 11fef922 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fef929 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fef92c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fef92e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fef931 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fef933 call 0x11fdfac0 */
  push32(0x11fef938u); f_11fdfac0();
  /* 11fef938 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11fef93b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fef93e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fef941 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11fef944 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fef94b jmp 0x11fef964 */
  goto L_11fef964;
  /* 11fef94d mov eax, 1 */
  EAX = (0x1u);
  /* 11fef952 ret  */
  ESPCHK(0x11fef5d0u, _esp0);
  ESP += 4; return;
  /* 11fef953 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fef956 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11fef95d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fef964:;
  /* 11fef964 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fef968 jne 0x11fef96e */
  if (!C.zf) goto L_11fef96e;
  /* 11fef96a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef96c jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef96e:;
  /* 11fef96e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fef971 push edx */
  push32((uint32_t)(EDX));
  /* 11fef972 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef975 push eax */
  push32((uint32_t)(EAX));
  /* 11fef976 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fef979 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef97a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fef97d push edx */
  push32((uint32_t)(EDX));
  /* 11fef97e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fef980 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fef983 push eax */
  push32((uint32_t)(EAX));
  /* 11fef984 call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fef98au);
  /* 11fef98a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fef98c jne 0x11fef992 */
  if (!C.zf) goto L_11fef992;
  /* 11fef98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fef990 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef992:;
  /* 11fef992 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fef995 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef996 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fef999 push edx */
  push32((uint32_t)(EDX));
  /* 11fef99a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fef99d push eax */
  push32((uint32_t)(EAX));
  /* 11fef99e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fef9a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fef9a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef9a5 push edx */
  push32((uint32_t)(EDX));
  /* 11fef9a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef9a9 push eax */
  push32((uint32_t)(EAX));
  /* 11fef9aa call dword ptr [0x1201132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201132c))), 0x11fef9b0u);
  /* 11fef9b0 jmp 0x11fef9b4 */
  goto L_11fef9b4;
L_11fef9b2:;
  /* 11fef9b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fef9b4:;
  /* 11fef9b4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11fef9b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fef9ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fef9c1 pop edi */
  EDI = (pop32());
  /* 11fef9c2 pop esi */
  ESI = (pop32());
  /* 11fef9c3 pop ebx */
  EBX = (pop32());
  /* 11fef9c4 mov esp, ebp */
  ESP = (EBP);
  /* 11fef9c6 pop ebp */
  EBP = (pop32());
  /* 11fef9c7 ret  */
  ESPCHK(0x11fef5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f9d0 @ 0x11fef9d0 (80 bytes, 32 insns) */
void f_11fef9d0(void) {
  FTRACE(0x11fef9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fef9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fef9d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fef9d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fef9d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fef9d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fef9dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fef9df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fef9e2:;
  /* 11fef9e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fef9e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fef9e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fef9eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fef9ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fef9f0 je 0x11fefa07 */
  if (C.zf) goto L_11fefa07;
  /* 11fef9f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fef9f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fef9f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fef9fa je 0x11fefa07 */
  if (C.zf) goto L_11fefa07;
  /* 11fef9fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fef9ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefa02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fefa05 jmp 0x11fef9e2 */
  goto L_11fef9e2;
L_11fefa07:;
  /* 11fefa07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefa0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fefa0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fefa0f jne 0x11fefa19 */
  if (!C.zf) goto L_11fefa19;
  /* 11fefa11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefa14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefa17 jmp 0x11fefa1c */
  goto L_11fefa1c;
L_11fefa19:;
  /* 11fefa19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11fefa1c:;
  /* 11fefa1c mov esp, ebp */
  ESP = (EBP);
  /* 11fefa1e pop ebp */
  EBP = (pop32());
  /* 11fefa1f ret  */
  ESPCHK(0x11fef9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fa20 @ 0x11fefa20 (736 bytes, 224 insns) */
void f_11fefa20(void) {
  FTRACE(0x11fefa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fefa20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fefa21 mov ebp, esp */
  EBP = (ESP);
  /* 11fefa23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefa26 push esi */
  push32((uint32_t)(ESI));
  /* 11fefa27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa2b je 0x11fefa4c */
  if (C.zf) goto L_11fefa4c;
  /* 11fefa2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11fefa2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefa32 push eax */
  push32((uint32_t)(EAX));
  /* 11fefa33 call 0x11ff03f0 */
  push32(0x11fefa38u); f_11ff03f0();
  /* 11fefa38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefa3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fefa3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa42 je 0x11fefa4c */
  if (C.zf) goto L_11fefa4c;
  /* 11fefa44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefa47 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa4a jne 0x11fefa54 */
  if (!C.zf) goto L_11fefa54;
L_11fefa4c:;
  /* 11fefa4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fefa4f jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefa54:;
  /* 11fefa54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fefa57 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fefa5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fefa5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefa5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11fefa60 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fefa63 mov ecx, dword ptr [0x1200efbc] */
  ECX = (r32((uint32_t)(0x1200efbc)));
  /* 11fefa69 cmp ecx, dword ptr [0x1200efc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200efc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa6f jne 0x11fefa85 */
  if (!C.zf) goto L_11fefa85;
  /* 11fefa71 mov edx, dword ptr [0x1200efbc] */
  EDX = (r32((uint32_t)(0x1200efbc)));
  /* 11fefa77 push edx */
  push32((uint32_t)(EDX));
  /* 11fefa78 call 0x11fefd80 */
  push32(0x11fefa7du); f_11fefd80();
  /* 11fefa7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefa80 mov dword ptr [0x1200efbc], eax */
  w32((uint32_t)(0x1200efbc), (EAX));
L_11fefa85:;
  /* 11fefa85 cmp dword ptr [0x1200efbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa8c jne 0x11fefb45 */
  if (!C.zf) goto L_11fefb45;
  /* 11fefa92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa96 je 0x11fefab7 */
  if (C.zf) goto L_11fefab7;
  /* 11fefa98 cmp dword ptr [0x1200efc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefa9f je 0x11fefab7 */
  if (C.zf) goto L_11fefab7;
  /* 11fefaa1 call 0x11fed060 */
  push32(0x11fefaa6u); f_11fed060();
  /* 11fefaa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fefaa8 je 0x11fefab2 */
  if (C.zf) goto L_11fefab2;
  /* 11fefaaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fefaad jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefab2:;
  /* 11fefab2 jmp 0x11fefb45 */
  goto L_11fefb45;
L_11fefab7:;
  /* 11fefab7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefabb je 0x11fefac4 */
  if (C.zf) goto L_11fefac4;
  /* 11fefabd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fefabf jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefac4:;
  /* 11fefac4 cmp dword ptr [0x1200efbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefacb jne 0x11fefb04 */
  if (!C.zf) goto L_11fefb04;
  /* 11fefacd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11fefad2 push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefad9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fefadb call 0x11fdb1c0 */
  push32(0x11fefae0u); f_11fdb1c0();
  /* 11fefae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefae3 mov dword ptr [0x1200efbc], eax */
  w32((uint32_t)(0x1200efbc), (EAX));
  /* 11fefae8 cmp dword ptr [0x1200efbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefaef jne 0x11fefaf9 */
  if (!C.zf) goto L_11fefaf9;
  /* 11fefaf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fefaf4 jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefaf9:;
  /* 11fefaf9 mov eax, dword ptr [0x1200efbc] */
  EAX = (r32((uint32_t)(0x1200efbc)));
  /* 11fefafe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fefb04:;
  /* 11fefb04 cmp dword ptr [0x1200efc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefb0b jne 0x11fefb45 */
  if (!C.zf) goto L_11fefb45;
  /* 11fefb0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11fefb12 push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefb17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefb19 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fefb1b call 0x11fdb1c0 */
  push32(0x11fefb20u); f_11fdb1c0();
  /* 11fefb20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefb23 mov dword ptr [0x1200efc4], eax */
  w32((uint32_t)(0x1200efc4), (EAX));
  /* 11fefb28 cmp dword ptr [0x1200efc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefb2f jne 0x11fefb39 */
  if (!C.zf) goto L_11fefb39;
  /* 11fefb31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fefb34 jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefb39:;
  /* 11fefb39 mov ecx, dword ptr [0x1200efc4] */
  ECX = (r32((uint32_t)(0x1200efc4)));
  /* 11fefb3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11fefb45:;
  /* 11fefb45 mov edx, dword ptr [0x1200efbc] */
  EDX = (r32((uint32_t)(0x1200efbc)));
  /* 11fefb4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fefb4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fefb51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefb54 push eax */
  push32((uint32_t)(EAX));
  /* 11fefb55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefb58 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefb59 call 0x11fefd00 */
  push32(0x11fefb5eu); f_11fefd00();
  /* 11fefb5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefb61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fefb64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefb68 jl 0x11fefc01 */
  if ((C.sf!=C.of)) goto L_11fefc01;
  /* 11fefb6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefb71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefb74 je 0x11fefc01 */
  if (C.zf) goto L_11fefc01;
  /* 11fefb7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefb7e je 0x11fefbf3 */
  if (C.zf) goto L_11fefbf3;
  /* 11fefb80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefb82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefb85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefb88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fefb8b push edx */
  push32((uint32_t)(EDX));
  /* 11fefb8c call 0x11fdbc50 */
  push32(0x11fefb91u); f_11fdbc50();
  /* 11fefb91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefb94 jmp 0x11fefb9f */
  goto L_11fefb9f;
L_11fefb96:;
  /* 11fefb96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefb99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefb9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fefb9f:;
  /* 11fefb9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefba2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefba5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefba9 je 0x11fefbc0 */
  if (C.zf) goto L_11fefbc0;
  /* 11fefbab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefbae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefbb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefbb4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefbb7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11fefbbb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11fefbbe jmp 0x11fefb96 */
  goto L_11fefb96;
L_11fefbc0:;
  /* 11fefbc0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11fefbc5 push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefbca push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefbcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefbcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fefbd2 push eax */
  push32((uint32_t)(EAX));
  /* 11fefbd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefbd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefbd7 call 0x11fdb650 */
  push32(0x11fefbdcu); f_11fdb650();
  /* 11fefbdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefbdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fefbe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefbe6 je 0x11fefbf1 */
  if (C.zf) goto L_11fefbf1;
  /* 11fefbe8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefbeb mov dword ptr [0x1200efbc], edx */
  w32((uint32_t)(0x1200efbc), (EDX));
L_11fefbf1:;
  /* 11fefbf1 jmp 0x11fefbff */
  goto L_11fefbff;
L_11fefbf3:;
  /* 11fefbf3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefbf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefbf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefbfc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11fefbff:;
  /* 11fefbff jmp 0x11fefc74 */
  goto L_11fefc74;
L_11fefc01:;
  /* 11fefc01 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefc05 jne 0x11fefc6d */
  if (!C.zf) goto L_11fefc6d;
  /* 11fefc07 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefc0b jge 0x11fefc15 */
  if ((C.sf==C.of)) goto L_11fefc15;
  /* 11fefc0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefc10 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fefc12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fefc15:;
  /* 11fefc15 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11fefc1a push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefc1f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefc21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefc24 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11fefc2b push edx */
  push32((uint32_t)(EDX));
  /* 11fefc2c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefc2f push eax */
  push32((uint32_t)(EAX));
  /* 11fefc30 call 0x11fdb650 */
  push32(0x11fefc35u); f_11fdb650();
  /* 11fefc35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefc38 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fefc3b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefc3f jne 0x11fefc49 */
  if (!C.zf) goto L_11fefc49;
  /* 11fefc41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fefc44 jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefc49:;
  /* 11fefc49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefc4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefc4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefc52 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11fefc55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefc58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefc5b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11fefc63 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefc66 mov dword ptr [0x1200efbc], eax */
  w32((uint32_t)(0x1200efbc), (EAX));
  /* 11fefc6b jmp 0x11fefc74 */
  goto L_11fefc74;
L_11fefc6d:;
  /* 11fefc6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fefc6f jmp 0x11fefcfb */
  goto L_11fefcfb;
L_11fefc74:;
  /* 11fefc74 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefc78 je 0x11fefcf9 */
  if (C.zf) goto L_11fefcf9;
  /* 11fefc7a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11fefc7f push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefc84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefc86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefc89 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefc8a call 0x11fdf750 */
  push32(0x11fefc8fu); f_11fdf750();
  /* 11fefc8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefc92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefc95 push eax */
  push32((uint32_t)(EAX));
  /* 11fefc96 call 0x11fdb1c0 */
  push32(0x11fefc9bu); f_11fdb1c0();
  /* 11fefc9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefc9e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fefca1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefca5 je 0x11fefcf9 */
  if (C.zf) goto L_11fefcf9;
  /* 11fefca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefcaa push edx */
  push32((uint32_t)(EDX));
  /* 11fefcab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fefcae push eax */
  push32((uint32_t)(EAX));
  /* 11fefcaf call 0x11fdf8d0 */
  push32(0x11fefcb4u); f_11fdf8d0();
  /* 11fefcb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefcb7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fefcba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefcbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fefcc0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefcc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fefcc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefcc8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fefccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefcce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefcd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fefcd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fefcd7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fefcd9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefcdb not edx */
  EDX = (~(EDX));
  /* 11fefcdd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11fefce0 push edx */
  push32((uint32_t)(EDX));
  /* 11fefce1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fefce4 push eax */
  push32((uint32_t)(EAX));
  /* 11fefce5 call dword ptr [0x12011328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011328))), 0x11fefcebu);
  /* 11fefceb push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefced mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fefcf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefcf1 call 0x11fdbc50 */
  push32(0x11fefcf6u); f_11fdbc50();
  /* 11fefcf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fefcf9:;
  /* 11fefcf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fefcfb:;
  /* 11fefcfb pop esi */
  ESI = (pop32());
  /* 11fefcfc mov esp, ebp */
  ESP = (EBP);
  /* 11fefcfe pop ebp */
  EBP = (pop32());
  /* 11fefcff ret  */
  ESPCHK(0x11fefa20u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11fefd00 (124 bytes, 47 insns) */
void f_11fefd00(void) {
  FTRACE(0x11fefd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fefd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fefd01 mov ebp, esp */
  EBP = (ESP);
  /* 11fefd03 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefd04 mov eax, dword ptr [0x1200efbc] */
  EAX = (r32((uint32_t)(0x1200efbc)));
  /* 11fefd09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fefd0c jmp 0x11fefd17 */
  goto L_11fefd17;
L_11fefd0e:;
  /* 11fefd0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd11 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefd14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fefd17:;
  /* 11fefd17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd1a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefd1d je 0x11fefd6a */
  if (C.zf) goto L_11fefd6a;
  /* 11fefd1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fefd22 push eax */
  push32((uint32_t)(EAX));
  /* 11fefd23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fefd28 push edx */
  push32((uint32_t)(EDX));
  /* 11fefd29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefd2c push eax */
  push32((uint32_t)(EAX));
  /* 11fefd2d call 0x11fed010 */
  push32(0x11fefd32u); f_11fed010();
  /* 11fefd32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefd35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fefd37 jne 0x11fefd68 */
  if (!C.zf) goto L_11fefd68;
  /* 11fefd39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd3c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fefd3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fefd41 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11fefd45 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefd48 je 0x11fefd5a */
  if (C.zf) goto L_11fefd5a;
  /* 11fefd4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd4d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fefd4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fefd52 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11fefd56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fefd58 jne 0x11fefd68 */
  if (!C.zf) goto L_11fefd68;
L_11fefd5a:;
  /* 11fefd5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd5d sub eax, dword ptr [0x1200efbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200efbc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefd63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fefd66 jmp 0x11fefd78 */
  goto L_11fefd78;
L_11fefd68:;
  /* 11fefd68 jmp 0x11fefd0e */
  goto L_11fefd0e;
L_11fefd6a:;
  /* 11fefd6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefd6d sub eax, dword ptr [0x1200efbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200efbc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefd73 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fefd76 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11fefd78:;
  /* 11fefd78 mov esp, ebp */
  ESP = (EBP);
  /* 11fefd7a pop ebp */
  EBP = (pop32());
  /* 11fefd7b ret  */
  ESPCHK(0x11fefd00u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11fefd80 (238 bytes, 80 insns) */
void f_11fefd80(void) {
  FTRACE(0x11fefd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fefd80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fefd81 mov ebp, esp */
  EBP = (ESP);
  /* 11fefd83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fefd86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fefd8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefd90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fefd93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefd97 jne 0x11fefda0 */
  if (!C.zf) goto L_11fefda0;
  /* 11fefd99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fefd9b jmp 0x11fefe6a */
  goto L_11fefe6a;
L_11fefda0:;
  /* 11fefda0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefda3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fefda5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefda8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefdab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fefdae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fefdb0 je 0x11fefdbd */
  if (C.zf) goto L_11fefdbd;
  /* 11fefdb2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fefdb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefdb8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fefdbb jmp 0x11fefda0 */
  goto L_11fefda0;
L_11fefdbd:;
  /* 11fefdbd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11fefdc2 push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefdc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefdc9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fefdcc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11fefdd3 push eax */
  push32((uint32_t)(EAX));
  /* 11fefdd4 call 0x11fdb1c0 */
  push32(0x11fefdd9u); f_11fdb1c0();
  /* 11fefdd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefddc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fefddf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefde2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fefde5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefde9 jne 0x11fefdf5 */
  if (!C.zf) goto L_11fefdf5;
  /* 11fefdeb push 9 */
  push32((uint32_t)(0x9u));
  /* 11fefded call 0x11fd9c30 */
  push32(0x11fefdf2u); f_11fd9c30();
  /* 11fefdf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fefdf5:;
  /* 11fefdf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefdf8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fefdfb:;
  /* 11fefdfb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefdfe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefe01 je 0x11fefe5e */
  if (C.zf) goto L_11fefe5e;
  /* 11fefe03 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11fefe08 push 0x1200ab98 */
  push32((uint32_t)(0x1200ab98u));
  /* 11fefe0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefe0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefe12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fefe14 push edx */
  push32((uint32_t)(EDX));
  /* 11fefe15 call 0x11fdf750 */
  push32(0x11fefe1au); f_11fdf750();
  /* 11fefe1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefe1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefe20 push eax */
  push32((uint32_t)(EAX));
  /* 11fefe21 call 0x11fdb1c0 */
  push32(0x11fefe26u); f_11fdb1c0();
  /* 11fefe26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefe29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefe2c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fefe2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefe31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefe34 je 0x11fefe4a */
  if (C.zf) goto L_11fefe4a;
  /* 11fefe36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefe39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fefe3b push ecx */
  push32((uint32_t)(ECX));
  /* 11fefe3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefe3f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fefe41 push eax */
  push32((uint32_t)(EAX));
  /* 11fefe42 call 0x11fdf8d0 */
  push32(0x11fefe47u); f_11fdf8d0();
  /* 11fefe47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fefe4a:;
  /* 11fefe4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fefe4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefe50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fefe53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefe56 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefe59 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fefe5c jmp 0x11fefdfb */
  goto L_11fefdfb;
L_11fefe5e:;
  /* 11fefe5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fefe61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fefe67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fefe6a:;
  /* 11fefe6a mov esp, ebp */
  ESP = (EBP);
  /* 11fefe6c pop ebp */
  EBP = (pop32());
  /* 11fefe6d ret  */
  ESPCHK(0x11fefd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fe70 @ 0x11fefe70 (130 bytes, 50 insns) */
void f_11fefe70(void) {
  FTRACE(0x11fefe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fefe70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fefe71 mov ebp, esp */
  EBP = (ESP);
  /* 11fefe73 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefe74 push ebx */
  push32((uint32_t)(EBX));
  /* 11fefe75 push esi */
  push32((uint32_t)(ESI));
  /* 11fefe76 push edi */
  push32((uint32_t)(EDI));
  /* 11fefe77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fefe7e:;
  /* 11fefe7e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefe82 jne 0x11fefea2 */
  if (!C.zf) goto L_11fefea2;
  /* 11fefe84 push 0x1200abb0 */
  push32((uint32_t)(0x1200abb0u));
  /* 11fefe89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fefe8b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11fefe8d push 0x1200aba4 */
  push32((uint32_t)(0x1200aba4u));
  /* 11fefe92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fefe94 call 0x11fd9d80 */
  push32(0x11fefe99u); f_11fd9d80();
  /* 11fefe99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefe9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fefe9f jne 0x11fefea2 */
  if (!C.zf) goto L_11fefea2;
  /* 11fefea1 int3  */
  x86_unimpl("int3 @ 0x11fefea1");
L_11fefea2:;
  /* 11fefea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fefea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fefea6 jne 0x11fefe7e */
  if (!C.zf) goto L_11fefe7e;
  /* 11fefea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefeab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fefeae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11fefeb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fefeb3 je 0x11fefec1 */
  if (C.zf) goto L_11fefec1;
  /* 11fefeb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefeb8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11fefebf jmp 0x11fefee8 */
  goto L_11fefee8;
L_11fefec1:;
  /* 11fefec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefec4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fefec5 call 0x11fea2f0 */
  push32(0x11fefecau); f_11fea2f0();
  /* 11fefeca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefed0 push edx */
  push32((uint32_t)(EDX));
  /* 11fefed1 call 0x11feff00 */
  push32(0x11fefed6u); f_11feff00();
  /* 11fefed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fefed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fefedc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fefedf push eax */
  push32((uint32_t)(EAX));
  /* 11fefee0 call 0x11fea360 */
  push32(0x11fefee5u); f_11fea360();
  /* 11fefee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fefee8:;
  /* 11fefee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fefeeb pop edi */
  EDI = (pop32());
  /* 11fefeec pop esi */
  ESI = (pop32());
  /* 11fefeed pop ebx */
  EBX = (pop32());
  /* 11fefeee mov esp, ebp */
  ESP = (EBP);
  /* 11fefef0 pop ebp */
  EBP = (pop32());
  /* 11fefef1 ret  */
  ESPCHK(0x11fefe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ff00 @ 0x11feff00 (190 bytes, 67 insns) */
void f_11feff00(void) {
  FTRACE(0x11feff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feff00 push ebp */
  push32((uint32_t)(EBP));
  /* 11feff01 mov ebp, esp */
  EBP = (ESP);
  /* 11feff03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feff06 push ebx */
  push32((uint32_t)(EBX));
  /* 11feff07 push esi */
  push32((uint32_t)(ESI));
  /* 11feff08 push edi */
  push32((uint32_t)(EDI));
  /* 11feff09 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11feff10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feff13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11feff16:;
  /* 11feff16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feff1a jne 0x11feff3a */
  if (!C.zf) goto L_11feff3a;
  /* 11feff1c push 0x1200a100 */
  push32((uint32_t)(0x1200a100u));
  /* 11feff21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feff23 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11feff25 push 0x1200aba4 */
  push32((uint32_t)(0x1200aba4u));
  /* 11feff2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11feff2c call 0x11fd9d80 */
  push32(0x11feff31u); f_11fd9d80();
  /* 11feff31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feff34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feff37 jne 0x11feff3a */
  if (!C.zf) goto L_11feff3a;
  /* 11feff39 int3  */
  x86_unimpl("int3 @ 0x11feff39");
L_11feff3a:;
  /* 11feff3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11feff3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feff3e jne 0x11feff16 */
  if (!C.zf) goto L_11feff16;
  /* 11feff40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feff43 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11feff46 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11feff4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feff4d je 0x11feffaa */
  if (C.zf) goto L_11feffaa;
  /* 11feff4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feff52 push ecx */
  push32((uint32_t)(ECX));
  /* 11feff53 call 0x11fed860 */
  push32(0x11feff58u); f_11fed860();
  /* 11feff58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feff5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11feff5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feff61 push edx */
  push32((uint32_t)(EDX));
  /* 11feff62 call 0x11ff0610 */
  push32(0x11feff67u); f_11ff0610();
  /* 11feff67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feff6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feff6d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11feff70 push ecx */
  push32((uint32_t)(ECX));
  /* 11feff71 call 0x11ff04e0 */
  push32(0x11feff76u); f_11ff04e0();
  /* 11feff76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feff79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feff7b jge 0x11feff86 */
  if ((C.sf==C.of)) goto L_11feff86;
  /* 11feff7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11feff84 jmp 0x11feffaa */
  goto L_11feffaa;
L_11feff86:;
  /* 11feff86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feff89 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feff8d je 0x11feffaa */
  if (C.zf) goto L_11feffaa;
  /* 11feff8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11feff91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feff94 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11feff97 push ecx */
  push32((uint32_t)(ECX));
  /* 11feff98 call 0x11fdbc50 */
  push32(0x11feff9du); f_11fdbc50();
  /* 11feff9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feffa0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feffa3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11feffaa:;
  /* 11feffaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feffad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11feffb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feffb7 pop edi */
  EDI = (pop32());
  /* 11feffb8 pop esi */
  ESI = (pop32());
  /* 11feffb9 pop ebx */
  EBX = (pop32());
  /* 11feffba mov esp, ebp */
  ESP = (EBP);
  /* 11feffbc pop ebp */
  EBP = (pop32());
  /* 11feffbd ret  */
  ESPCHK(0x11feff00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ffc0 @ 0x11feffc0 (210 bytes, 63 insns) */
void f_11feffc0(void) {
  FTRACE(0x11feffc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feffc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11feffc1 mov ebp, esp */
  EBP = (ESP);
  /* 11feffc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11feffc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feffc7 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feffcd jae 0x11fefff1 */
  if (!C.cf) goto L_11fefff1;
  /* 11feffcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feffd2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11feffd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feffd8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11feffdb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11feffde mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11feffe5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11feffea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11feffed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feffef jne 0x11ff0004 */
  if (!C.zf) goto L_11ff0004;
L_11fefff1:;
  /* 11fefff1 call 0x11fe6850 */
  push32(0x11fefff6u); f_11fe6850();
  /* 11fefff6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fefffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11feffff jmp 0x11ff008e */
  goto L_11ff008e;
L_11ff0004:;
  /* 11ff0004 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0007 push edx */
  push32((uint32_t)(EDX));
  /* 11ff0008 call 0x11fed620 */
  push32(0x11ff000du); f_11fed620();
  /* 11ff000d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0013 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ff0016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0019 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ff001c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ff001f mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11ff0026 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ff002b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ff002e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff0030 je 0x11ff006d */
  if (C.zf) goto L_11ff006d;
  /* 11ff0032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0035 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff0036 call 0x11fed4a0 */
  push32(0x11ff003bu); f_11fed4a0();
  /* 11ff003b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff003e push eax */
  push32((uint32_t)(EAX));
  /* 11ff003f call dword ptr [0x12011330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011330))), 0x11ff0045u);
  /* 11ff0045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff0047 jne 0x11ff0054 */
  if (!C.zf) goto L_11ff0054;
  /* 11ff0049 call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11ff004fu);
  /* 11ff004f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ff0052 jmp 0x11ff005b */
  goto L_11ff005b;
L_11ff0054:;
  /* 11ff0054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ff005b:;
  /* 11ff005b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff005f jne 0x11ff0063 */
  if (!C.zf) goto L_11ff0063;
  /* 11ff0061 jmp 0x11ff007f */
  goto L_11ff007f;
L_11ff0063:;
  /* 11ff0063 call 0x11fe6860 */
  push32(0x11ff0068u); f_11fe6860();
  /* 11ff0068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff006b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ff006d:;
  /* 11ff006d call 0x11fe6850 */
  push32(0x11ff0072u); f_11fe6850();
  /* 11ff0072 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ff0078 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ff007f:;
  /* 11ff007f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0082 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0083 call 0x11fed6b0 */
  push32(0x11ff0088u); f_11fed6b0();
  /* 11ff0088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff008b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ff008e:;
  /* 11ff008e mov esp, ebp */
  ESP = (EBP);
  /* 11ff0090 pop ebp */
  EBP = (pop32());
  /* 11ff0091 ret  */
  ESPCHK(0x11feffc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100200a0 @ 0x11ff00a0 (382 bytes, 135 insns) */
void f_11ff00a0(void) {
  FTRACE(0x11ff00a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff00a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ff00a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ff00a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ff00a5 push 0x1200abc0 */
  push32((uint32_t)(0x1200abc0u));
  /* 11ff00aa push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11ff00af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ff00b5 push eax */
  push32((uint32_t)(EAX));
  /* 11ff00b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ff00bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff00c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ff00c1 push esi */
  push32((uint32_t)(ESI));
  /* 11ff00c2 push edi */
  push32((uint32_t)(EDI));
  /* 11ff00c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ff00c6 cmp dword ptr [0x1200f290], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f290))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff00cd jne 0x11ff0112 */
  if (!C.zf) goto L_11ff0112;
  /* 11ff00cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff00d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff00d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff00d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff00d7 call dword ptr [0x12011324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011324))), 0x11ff00ddu);
  /* 11ff00dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff00df je 0x11ff00ed */
  if (C.zf) goto L_11ff00ed;
  /* 11ff00e1 mov dword ptr [0x1200f290], 1 */
  w32((uint32_t)(0x1200f290), (0x1u));
  /* 11ff00eb jmp 0x11ff0112 */
  goto L_11ff0112;
L_11ff00ed:;
  /* 11ff00ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff00ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff00f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff00f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff00f5 call dword ptr [0x12011344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011344))), 0x11ff00fbu);
  /* 11ff00fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff00fd je 0x11ff010b */
  if (C.zf) goto L_11ff010b;
  /* 11ff00ff mov dword ptr [0x1200f290], 2 */
  w32((uint32_t)(0x1200f290), (0x2u));
  /* 11ff0109 jmp 0x11ff0112 */
  goto L_11ff0112;
L_11ff010b:;
  /* 11ff010b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff010d jmp 0x11ff0221 */
  goto L_11ff0221;
L_11ff0112:;
  /* 11ff0112 cmp dword ptr [0x1200f290], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f290))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0119 jne 0x11ff0136 */
  if (!C.zf) goto L_11ff0136;
  /* 11ff011b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ff011e push eax */
  push32((uint32_t)(EAX));
  /* 11ff011f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ff0122 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff0123 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff0126 push edx */
  push32((uint32_t)(EDX));
  /* 11ff0127 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff012a push eax */
  push32((uint32_t)(EAX));
  /* 11ff012b call dword ptr [0x12011324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011324))), 0x11ff0131u);
  /* 11ff0131 jmp 0x11ff0221 */
  goto L_11ff0221;
L_11ff0136:;
  /* 11ff0136 cmp dword ptr [0x1200f290], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f290))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff013d jne 0x11ff021f */
  if (!C.zf) goto L_11ff021f;
  /* 11ff0143 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0147 jne 0x11ff0152 */
  if (!C.zf) goto L_11ff0152;
  /* 11ff0149 mov ecx, dword ptr [0x1200f208] */
  ECX = (r32((uint32_t)(0x1200f208)));
  /* 11ff014f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11ff0152:;
  /* 11ff0152 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0154 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0156 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff0159 push edx */
  push32((uint32_t)(EDX));
  /* 11ff015a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff015d push eax */
  push32((uint32_t)(EAX));
  /* 11ff015e call dword ptr [0x12011344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011344))), 0x11ff0164u);
  /* 11ff0164 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ff0167 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff016b jne 0x11ff0174 */
  if (!C.zf) goto L_11ff0174;
  /* 11ff016d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff016f jmp 0x11ff0221 */
  goto L_11ff0221;
L_11ff0174:;
  /* 11ff0174 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ff017b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ff017e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0181 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ff0183 call 0x11fdfac0 */
  push32(0x11ff0188u); f_11fdfac0();
  /* 11ff0188 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11ff018b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ff018e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ff0191 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ff0194 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ff019b jmp 0x11ff01b4 */
  goto L_11ff01b4;
  /* 11ff019d mov eax, 1 */
  EAX = (0x1u);
  /* 11ff01a2 ret  */
  ESPCHK(0x11ff00a0u, _esp0);
  ESP += 4; return;
  /* 11ff01a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ff01a6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ff01ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ff01b4:;
  /* 11ff01b4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff01b8 jne 0x11ff01be */
  if (!C.zf) goto L_11ff01be;
  /* 11ff01ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff01bc jmp 0x11ff0221 */
  goto L_11ff0221;
L_11ff01be:;
  /* 11ff01be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ff01c1 push edx */
  push32((uint32_t)(EDX));
  /* 11ff01c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ff01c5 push eax */
  push32((uint32_t)(EAX));
  /* 11ff01c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff01c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff01ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff01cd push edx */
  push32((uint32_t)(EDX));
  /* 11ff01ce call dword ptr [0x12011344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011344))), 0x11ff01d4u);
  /* 11ff01d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff01d6 jne 0x11ff01dc */
  if (!C.zf) goto L_11ff01dc;
  /* 11ff01d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff01da jmp 0x11ff0221 */
  goto L_11ff0221;
L_11ff01dc:;
  /* 11ff01dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff01e0 jne 0x11ff01fd */
  if (!C.zf) goto L_11ff01fd;
  /* 11ff01e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff01e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff01e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ff01e8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ff01eb push eax */
  push32((uint32_t)(EAX));
  /* 11ff01ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff01ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ff01f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff01f2 call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11ff01f8u);
  /* 11ff01f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ff01fb jmp 0x11ff021a */
  goto L_11ff021a;
L_11ff01fd:;
  /* 11ff01fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ff0200 push edx */
  push32((uint32_t)(EDX));
  /* 11ff0201 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ff0204 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0205 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ff0207 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ff020a push ecx */
  push32((uint32_t)(ECX));
  /* 11ff020b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff020d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ff0210 push edx */
  push32((uint32_t)(EDX));
  /* 11ff0211 call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11ff0217u);
  /* 11ff0217 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ff021a:;
  /* 11ff021a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ff021d jmp 0x11ff0221 */
  goto L_11ff0221;
L_11ff021f:;
  /* 11ff021f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ff0221:;
  /* 11ff0221 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11ff0224 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ff0227 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ff022e pop edi */
  EDI = (pop32());
  /* 11ff022f pop esi */
  ESI = (pop32());
  /* 11ff0230 pop ebx */
  EBX = (pop32());
  /* 11ff0231 mov esp, ebp */
  ESP = (EBP);
  /* 11ff0233 pop ebp */
  EBP = (pop32());
  /* 11ff0234 ret  */
  ESPCHK(0x11ff00a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020240 @ 0x11ff0240 (398 bytes, 140 insns) */
void f_11ff0240(void) {
  FTRACE(0x11ff0240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff0240 push ebp */
  push32((uint32_t)(EBP));
  /* 11ff0241 mov ebp, esp */
  EBP = (ESP);
  /* 11ff0243 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ff0245 push 0x1200abd0 */
  push32((uint32_t)(0x1200abd0u));
  /* 11ff024a push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11ff024f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ff0255 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0256 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ff025d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0260 push ebx */
  push32((uint32_t)(EBX));
  /* 11ff0261 push esi */
  push32((uint32_t)(ESI));
  /* 11ff0262 push edi */
  push32((uint32_t)(EDI));
  /* 11ff0263 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ff0266 cmp dword ptr [0x1200f294], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f294))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff026d jne 0x11ff02b2 */
  if (!C.zf) goto L_11ff02b2;
  /* 11ff026f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0271 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff0275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0277 call dword ptr [0x12011324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011324))), 0x11ff027du);
  /* 11ff027d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff027f je 0x11ff028d */
  if (C.zf) goto L_11ff028d;
  /* 11ff0281 mov dword ptr [0x1200f294], 1 */
  w32((uint32_t)(0x1200f294), (0x1u));
  /* 11ff028b jmp 0x11ff02b2 */
  goto L_11ff02b2;
L_11ff028d:;
  /* 11ff028d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff028f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0291 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff0293 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0295 call dword ptr [0x12011344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011344))), 0x11ff029bu);
  /* 11ff029b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff029d je 0x11ff02ab */
  if (C.zf) goto L_11ff02ab;
  /* 11ff029f mov dword ptr [0x1200f294], 2 */
  w32((uint32_t)(0x1200f294), (0x2u));
  /* 11ff02a9 jmp 0x11ff02b2 */
  goto L_11ff02b2;
L_11ff02ab:;
  /* 11ff02ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff02ad jmp 0x11ff03d1 */
  goto L_11ff03d1;
L_11ff02b2:;
  /* 11ff02b2 cmp dword ptr [0x1200f294], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f294))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff02b9 jne 0x11ff02d6 */
  if (!C.zf) goto L_11ff02d6;
  /* 11ff02bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ff02be push eax */
  push32((uint32_t)(EAX));
  /* 11ff02bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ff02c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff02c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff02c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ff02c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff02ca push eax */
  push32((uint32_t)(EAX));
  /* 11ff02cb call dword ptr [0x12011344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011344))), 0x11ff02d1u);
  /* 11ff02d1 jmp 0x11ff03d1 */
  goto L_11ff03d1;
L_11ff02d6:;
  /* 11ff02d6 cmp dword ptr [0x1200f294], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f294))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff02dd jne 0x11ff03cf */
  if (!C.zf) goto L_11ff03cf;
  /* 11ff02e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff02e7 jne 0x11ff02f2 */
  if (!C.zf) goto L_11ff02f2;
  /* 11ff02e9 mov ecx, dword ptr [0x1200f208] */
  ECX = (r32((uint32_t)(0x1200f208)));
  /* 11ff02ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11ff02f2:;
  /* 11ff02f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff02f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff02f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff02f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ff02fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff02fd push eax */
  push32((uint32_t)(EAX));
  /* 11ff02fe call dword ptr [0x12011324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011324))), 0x11ff0304u);
  /* 11ff0304 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ff0307 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff030b jne 0x11ff0314 */
  if (!C.zf) goto L_11ff0314;
  /* 11ff030d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff030f jmp 0x11ff03d1 */
  goto L_11ff03d1;
L_11ff0314:;
  /* 11ff0314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ff031b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ff031e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ff0320 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0323 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ff0325 call 0x11fdfac0 */
  push32(0x11ff032au); f_11fdfac0();
  /* 11ff032a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11ff032d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ff0330 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ff0333 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ff0336 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ff033d jmp 0x11ff0356 */
  goto L_11ff0356;
  /* 11ff033f mov eax, 1 */
  EAX = (0x1u);
  /* 11ff0344 ret  */
  ESPCHK(0x11ff0240u, _esp0);
  ESP += 4; return;
  /* 11ff0345 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ff0348 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ff034f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ff0356:;
  /* 11ff0356 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff035a jne 0x11ff0360 */
  if (!C.zf) goto L_11ff0360;
  /* 11ff035c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff035e jmp 0x11ff03d1 */
  goto L_11ff03d1;
L_11ff0360:;
  /* 11ff0360 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ff0363 push edx */
  push32((uint32_t)(EDX));
  /* 11ff0364 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ff0367 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0368 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff036b push ecx */
  push32((uint32_t)(ECX));
  /* 11ff036c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff036f push edx */
  push32((uint32_t)(EDX));
  /* 11ff0370 call dword ptr [0x12011324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011324))), 0x11ff0376u);
  /* 11ff0376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff0378 jne 0x11ff037e */
  if (!C.zf) goto L_11ff037e;
  /* 11ff037a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff037c jmp 0x11ff03d1 */
  goto L_11ff03d1;
L_11ff037e:;
  /* 11ff037e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0382 jne 0x11ff03a6 */
  if (!C.zf) goto L_11ff03a6;
  /* 11ff0384 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0386 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0388 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff038a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff038c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ff038e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ff0391 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0392 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ff0397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ff039a push ecx */
  push32((uint32_t)(ECX));
  /* 11ff039b call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11ff03a1u);
  /* 11ff03a1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ff03a4 jmp 0x11ff03ca */
  goto L_11ff03ca;
L_11ff03a6:;
  /* 11ff03a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff03a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff03aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ff03ad push edx */
  push32((uint32_t)(EDX));
  /* 11ff03ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ff03b1 push eax */
  push32((uint32_t)(EAX));
  /* 11ff03b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ff03b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ff03b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff03b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ff03bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ff03c0 push edx */
  push32((uint32_t)(EDX));
  /* 11ff03c1 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11ff03c7u);
  /* 11ff03c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ff03ca:;
  /* 11ff03ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ff03cd jmp 0x11ff03d1 */
  goto L_11ff03d1;
L_11ff03cf:;
  /* 11ff03cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ff03d1:;
  /* 11ff03d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11ff03d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ff03d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ff03de pop edi */
  EDI = (pop32());
  /* 11ff03df pop esi */
  ESI = (pop32());
  /* 11ff03e0 pop ebx */
  EBX = (pop32());
  /* 11ff03e1 mov esp, ebp */
  ESP = (EBP);
  /* 11ff03e3 pop ebp */
  EBP = (pop32());
  /* 11ff03e4 ret  */
  ESPCHK(0x11ff0240u, _esp0);
  ESP += 4; return;
}

/* FUN_100203f0 @ 0x11ff03f0 (237 bytes, 81 insns) */
void f_11ff03f0(void) {
  FTRACE(0x11ff03f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff03f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ff03f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ff03f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff03f4 cmp dword ptr [0x1201069c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1201069c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff03fb jne 0x11ff0412 */
  if (!C.zf) goto L_11ff0412;
  /* 11ff03fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ff0400 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0404 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff0405 call 0x11ff06c0 */
  push32(0x11ff040au); f_11ff06c0();
  /* 11ff040a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff040d jmp 0x11ff04d9 */
  goto L_11ff04d9;
L_11ff0412:;
  /* 11ff0412 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ff0414 call 0x11fdb0c0 */
  push32(0x11ff0419u); f_11fdb0c0();
  /* 11ff0419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff041c jmp 0x11ff0427 */
  goto L_11ff0427;
L_11ff041e:;
  /* 11ff041e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0421 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0424 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ff0427:;
  /* 11ff0427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff042a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11ff042e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ff0432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff0435 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ff043b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ff043d je 0x11ff04bb */
  if (C.zf) goto L_11ff04bb;
  /* 11ff043f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff0442 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0447 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ff0449 mov cl, byte ptr [eax + 0x120107a1] */
  CL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11ff044f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ff0452 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ff0454 je 0x11ff04a6 */
  if (C.zf) goto L_11ff04a6;
  /* 11ff0456 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0459 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff045c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ff045f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0462 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ff0464 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ff0466 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ff0468 jne 0x11ff0478 */
  if (!C.zf) goto L_11ff0478;
  /* 11ff046a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ff046c call 0x11fdb160 */
  push32(0x11ff0471u); f_11fdb160();
  /* 11ff0471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0476 jmp 0x11ff04d9 */
  goto L_11ff04d9;
L_11ff0478:;
  /* 11ff0478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff047b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ff0481 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ff0484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0487 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ff0489 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ff048b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ff048d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0490 jne 0x11ff04a4 */
  if (!C.zf) goto L_11ff04a4;
  /* 11ff0492 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ff0494 call 0x11fdb160 */
  push32(0x11ff0499u); f_11fdb160();
  /* 11ff0499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff049c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff049f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ff04a2 jmp 0x11ff04d9 */
  goto L_11ff04d9;
L_11ff04a4:;
  /* 11ff04a4 jmp 0x11ff04b6 */
  goto L_11ff04b6;
L_11ff04a6:;
  /* 11ff04a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff04a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ff04af cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff04b2 jne 0x11ff04b6 */
  if (!C.zf) goto L_11ff04b6;
  /* 11ff04b4 jmp 0x11ff04bb */
  goto L_11ff04bb;
L_11ff04b6:;
  /* 11ff04b6 jmp 0x11ff041e */
  goto L_11ff041e;
L_11ff04bb:;
  /* 11ff04bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ff04bd call 0x11fdb160 */
  push32(0x11ff04c2u); f_11fdb160();
  /* 11ff04c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff04c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff04c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ff04cd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff04d0 jne 0x11ff04d7 */
  if (!C.zf) goto L_11ff04d7;
  /* 11ff04d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff04d5 jmp 0x11ff04d9 */
  goto L_11ff04d9;
L_11ff04d7:;
  /* 11ff04d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ff04d9:;
  /* 11ff04d9 mov esp, ebp */
  ESP = (EBP);
  /* 11ff04db pop ebp */
  EBP = (pop32());
  /* 11ff04dc ret  */
  ESPCHK(0x11ff03f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100204e0 @ 0x11ff04e0 (122 bytes, 39 insns) */
void f_11ff04e0(void) {
  FTRACE(0x11ff04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ff04e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ff04e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff04e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff04e7 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff04ed jae 0x11ff0511 */
  if (!C.cf) goto L_11ff0511;
  /* 11ff04ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff04f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ff04f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff04f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ff04fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ff04fe mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11ff0505 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ff050a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ff050d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ff050f jne 0x11ff052c */
  if (!C.zf) goto L_11ff052c;
L_11ff0511:;
  /* 11ff0511 call 0x11fe6850 */
  push32(0x11ff0516u); f_11fe6850();
  /* 11ff0516 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ff051c call 0x11fe6860 */
  push32(0x11ff0521u); f_11fe6860();
  /* 11ff0521 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ff0527 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ff052a jmp 0x11ff0556 */
  goto L_11ff0556;
L_11ff052c:;
  /* 11ff052c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff052f push edx */
  push32((uint32_t)(EDX));
  /* 11ff0530 call 0x11fed620 */
  push32(0x11ff0535u); f_11fed620();
  /* 11ff0535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff053b push eax */
  push32((uint32_t)(EAX));
  /* 11ff053c call 0x11ff0560 */
  push32(0x11ff0541u); f_11ff0560();
  /* 11ff0541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ff0547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff054a push ecx */
  push32((uint32_t)(ECX));
  /* 11ff054b call 0x11fed6b0 */
  push32(0x11ff0550u); f_11fed6b0();
  /* 11ff0550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ff0556:;
  /* 11ff0556 mov esp, ebp */
  ESP = (EBP);
  /* 11ff0558 pop ebp */
  EBP = (pop32());
  /* 11ff0559 ret  */
  ESPCHK(0x11ff04e0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11ff0560 (170 bytes, 59 insns) */
void f_11ff0560(void) {
  FTRACE(0x11ff0560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff0560 push ebp */
  push32((uint32_t)(EBP));
  /* 11ff0561 mov ebp, esp */
  EBP = (ESP);
  /* 11ff0563 push ecx */
  push32((uint32_t)(ECX));
  /* 11ff0564 push esi */
  push32((uint32_t)(ESI));
  /* 11ff0565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0568 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0569 call 0x11fed4a0 */
  push32(0x11ff056eu); f_11fed4a0();
  /* 11ff056e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0571 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0574 je 0x11ff05b3 */
  if (C.zf) goto L_11ff05b3;
  /* 11ff0576 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff057a je 0x11ff0582 */
  if (C.zf) goto L_11ff0582;
  /* 11ff057c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0580 jne 0x11ff059c */
  if (!C.zf) goto L_11ff059c;
L_11ff0582:;
  /* 11ff0582 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ff0584 call 0x11fed4a0 */
  push32(0x11ff0589u); f_11fed4a0();
  /* 11ff0589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff058c mov esi, eax */
  ESI = (EAX);
  /* 11ff058e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ff0590 call 0x11fed4a0 */
  push32(0x11ff0595u); f_11fed4a0();
  /* 11ff0595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0598 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff059a je 0x11ff05b3 */
  if (C.zf) goto L_11ff05b3;
L_11ff059c:;
  /* 11ff059c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff059f push ecx */
  push32((uint32_t)(ECX));
  /* 11ff05a0 call 0x11fed4a0 */
  push32(0x11ff05a5u); f_11fed4a0();
  /* 11ff05a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff05a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ff05a9 call dword ptr [0x12011320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011320))), 0x11ff05afu);
  /* 11ff05af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff05b1 je 0x11ff05bc */
  if (C.zf) goto L_11ff05bc;
L_11ff05b3:;
  /* 11ff05b3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ff05ba jmp 0x11ff05c5 */
  goto L_11ff05c5;
L_11ff05bc:;
  /* 11ff05bc call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11ff05c2u);
  /* 11ff05c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ff05c5:;
  /* 11ff05c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff05c8 push edx */
  push32((uint32_t)(EDX));
  /* 11ff05c9 call 0x11fed3c0 */
  push32(0x11ff05ceu); f_11fed3c0();
  /* 11ff05ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff05d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff05d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ff05d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff05da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ff05dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ff05e0 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11ff05e7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11ff05ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff05f0 je 0x11ff0603 */
  if (C.zf) goto L_11ff0603;
  /* 11ff05f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ff05f5 push eax */
  push32((uint32_t)(EAX));
  /* 11ff05f6 call 0x11fe67b0 */
  push32(0x11ff05fbu); f_11fe67b0();
  /* 11ff05fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff05fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0601 jmp 0x11ff0605 */
  goto L_11ff0605;
L_11ff0603:;
  /* 11ff0603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ff0605:;
  /* 11ff0605 pop esi */
  ESI = (pop32());
  /* 11ff0606 mov esp, ebp */
  ESP = (EBP);
  /* 11ff0608 pop ebp */
  EBP = (pop32());
  /* 11ff0609 ret  */
  ESPCHK(0x11ff0560u, _esp0);
  ESP += 4; return;
}

/* FUN_10020610 @ 0x11ff0610 (146 bytes, 52 insns) */
void f_11ff0610(void) {
  FTRACE(0x11ff0610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff0610 push ebp */
  push32((uint32_t)(EBP));
  /* 11ff0611 mov ebp, esp */
  EBP = (ESP);
  /* 11ff0613 push ebx */
  push32((uint32_t)(EBX));
  /* 11ff0614 push esi */
  push32((uint32_t)(ESI));
  /* 11ff0615 push edi */
  push32((uint32_t)(EDI));
L_11ff0616:;
  /* 11ff0616 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff061a jne 0x11ff063a */
  if (!C.zf) goto L_11ff063a;
  /* 11ff061c push 0x1200abb0 */
  push32((uint32_t)(0x1200abb0u));
  /* 11ff0621 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ff0623 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ff0625 push 0x1200abdc */
  push32((uint32_t)(0x1200abdcu));
  /* 11ff062a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ff062c call 0x11fd9d80 */
  push32(0x11ff0631u); f_11fd9d80();
  /* 11ff0631 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0634 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ff0637 jne 0x11ff063a */
  if (!C.zf) goto L_11ff063a;
  /* 11ff0639 int3  */
  x86_unimpl("int3 @ 0x11ff0639");
L_11ff063a:;
  /* 11ff063a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff063c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ff063e jne 0x11ff0616 */
  if (!C.zf) goto L_11ff0616;
  /* 11ff0640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0643 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ff0646 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11ff064c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ff064e je 0x11ff069d */
  if (C.zf) goto L_11ff069d;
  /* 11ff0650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0653 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ff0656 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ff0659 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ff065b je 0x11ff069d */
  if (C.zf) goto L_11ff069d;
  /* 11ff065d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ff065f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0662 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ff0665 push eax */
  push32((uint32_t)(EAX));
  /* 11ff0666 call 0x11fdbc50 */
  push32(0x11ff066bu); f_11fdbc50();
  /* 11ff066b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff066e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0671 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ff0674 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ff067a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff067d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ff0680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0683 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11ff0689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff068c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ff0693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ff0696 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11ff069d:;
  /* 11ff069d pop edi */
  EDI = (pop32());
  /* 11ff069e pop esi */
  ESI = (pop32());
  /* 11ff069f pop ebx */
  EBX = (pop32());
  /* 11ff06a0 pop ebp */
  EBP = (pop32());
  /* 11ff06a1 ret  */
  ESPCHK(0x11ff0610u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11ff06c0 (193 bytes, 88 insns) */
void f_11ff06c0(void) {
  FTRACE(0x11ff06c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff06c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff06c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ff06c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ff06c7 mov ebx, eax */
  EBX = (EAX);
  /* 11ff06c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ff06cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ff06d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ff06d6 je 0x11ff06eb */
  if (C.zf) goto L_11ff06eb;
L_11ff06d8:;
  /* 11ff06d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ff06da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ff06db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ff06dd je 0x11ff06b0 */
  if (C.zf) { jmp_ind(0x11ff06b0u); return; }
  /* 11ff06df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11ff06e1 je 0x11ff0734 */
  if (C.zf) goto L_11ff0734;
  /* 11ff06e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ff06e9 jne 0x11ff06d8 */
  if (!C.zf) goto L_11ff06d8;
L_11ff06eb:;
  /* 11ff06eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11ff06ed push edi */
  push32((uint32_t)(EDI));
  /* 11ff06ee mov eax, ebx */
  EAX = (EBX);
  /* 11ff06f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11ff06f3 push esi */
  push32((uint32_t)(ESI));
  /* 11ff06f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11ff06f6:;
  /* 11ff06f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ff06f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11ff06fd mov eax, ecx */
  EAX = (ECX);
  /* 11ff06ff mov esi, edi */
  ESI = (EDI);
  /* 11ff0701 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11ff0703 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0705 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0707 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ff070a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ff070d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ff070f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0711 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ff0714 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ff071a jne 0x11ff0738 */
  if (!C.zf) goto L_11ff0738;
  /* 11ff071c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0721 je 0x11ff06f6 */
  if (C.zf) goto L_11ff06f6;
  /* 11ff0723 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0728 jne 0x11ff0732 */
  if (!C.zf) goto L_11ff0732;
  /* 11ff072a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11ff0730 jne 0x11ff06f6 */
  if (!C.zf) goto L_11ff06f6;
L_11ff0732:;
  /* 11ff0732 pop esi */
  ESI = (pop32());
  /* 11ff0733 pop edi */
  EDI = (pop32());
L_11ff0734:;
  /* 11ff0734 pop ebx */
  EBX = (pop32());
  /* 11ff0735 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ff0737 ret  */
  ESPCHK(0x11ff06c0u, _esp0);
  ESP += 4; return;
L_11ff0738:;
  /* 11ff0738 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11ff073b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ff073d je 0x11ff0775 */
  if (C.zf) goto L_11ff0775;
  /* 11ff073f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ff0741 je 0x11ff0732 */
  if (C.zf) goto L_11ff0732;
  /* 11ff0743 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ff0745 je 0x11ff076e */
  if (C.zf) goto L_11ff076e;
  /* 11ff0747 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ff0749 je 0x11ff0732 */
  if (C.zf) goto L_11ff0732;
  /* 11ff074b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ff074e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ff0750 je 0x11ff0767 */
  if (C.zf) goto L_11ff0767;
  /* 11ff0752 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ff0754 je 0x11ff0732 */
  if (C.zf) goto L_11ff0732;
  /* 11ff0756 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ff0758 je 0x11ff0760 */
  if (C.zf) goto L_11ff0760;
  /* 11ff075a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ff075c je 0x11ff0732 */
  if (C.zf) goto L_11ff0732;
  /* 11ff075e jmp 0x11ff06f6 */
  goto L_11ff06f6;
L_11ff0760:;
  /* 11ff0760 pop esi */
  ESI = (pop32());
  /* 11ff0761 pop edi */
  EDI = (pop32());
  /* 11ff0762 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11ff0765 pop ebx */
  EBX = (pop32());
  /* 11ff0766 ret  */
  ESPCHK(0x11ff06c0u, _esp0);
  ESP += 4; return;
L_11ff0767:;
  /* 11ff0767 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11ff076a pop esi */
  ESI = (pop32());
  /* 11ff076b pop edi */
  EDI = (pop32());
  /* 11ff076c pop ebx */
  EBX = (pop32());
  /* 11ff076d ret  */
  ESPCHK(0x11ff06c0u, _esp0);
  ESP += 4; return;
L_11ff076e:;
  /* 11ff076e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11ff0771 pop esi */
  ESI = (pop32());
  /* 11ff0772 pop edi */
  EDI = (pop32());
  /* 11ff0773 pop ebx */
  EBX = (pop32());
  /* 11ff0774 ret  */
  ESPCHK(0x11ff06c0u, _esp0);
  ESP += 4; return;
L_11ff0775:;
  /* 11ff0775 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11ff0778 pop esi */
  ESI = (pop32());
  /* 11ff0779 pop edi */
  EDI = (pop32());
  /* 11ff077a pop ebx */
  EBX = (pop32());
  /* 11ff077b ret  */
  ESPCHK(0x11ff06c0u, _esp0);
  ESP += 4; return;
  /* 11ff077e cld  */
  C.df=0;
  /* 11ff077f adc eax, dword ptr [ecx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX))),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
}

/* RtlUnwind @ 0x11ff077c (6 bytes, 1 insns) */
void f_11ff077c(void) {
  FTRACE(0x11ff077cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff077c jmp dword ptr [0x120113fc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x120113fc)))); return;
}

/* Unwind@100277b0 @ 0x11ff77b0 (11 bytes, 5 insns) */
void f_11ff77b0(void) {
  FTRACE(0x11ff77b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ff77b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ff77b3 push eax */
  push32((uint32_t)(EAX));
  /* 11ff77b4 call 0x11fd9140 */
  push32(0x11ff77b9u); f_11fd9140();
  /* 11ff77b9 pop ecx */
  ECX = (pop32());
  /* 11ff77ba ret  */
  ESPCHK(0x11ff77b0u, _esp0);
  ESP += 4; return;
}

