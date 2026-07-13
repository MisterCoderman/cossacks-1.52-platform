#include "recomp.h"

/* FUN_100168a0 @ 0x11ba68a0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11ba68a0(void) {
  FTRACE(0x11ba68a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba68a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba68a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba68a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba68a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba68a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ba68b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba68b3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11ba68ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba68bd mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11ba68c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba68c7 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba68ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba68cc je 0x11ba68e4 */
  if (C.zf) goto L_11ba68e4;
  /* 11ba68ce mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11ba68d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba68d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba68db or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba68de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba68e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba68e4:;
  /* 11ba68e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba68e7 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba68ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba68ec je 0x11ba6903 */
  if (C.zf) goto L_11ba6903;
  /* 11ba68ee mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11ba68f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba68f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba68fb or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ba68fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6900 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ba6903:;
  /* 11ba6903 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6906 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba690b je 0x11ba6923 */
  if (C.zf) goto L_11ba6923;
  /* 11ba690d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11ba6914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6917 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba691a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba691d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6920 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ba6923:;
  /* 11ba6923 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6926 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba692b je 0x11ba6943 */
  if (C.zf) goto L_11ba6943;
  /* 11ba692d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11ba6934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6937 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba693a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba693d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6940 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba6943:;
  /* 11ba6943 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6946 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6949 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba694b je 0x11ba6962 */
  if (C.zf) goto L_11ba6962;
  /* 11ba694d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11ba6954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6957 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba695a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11ba695c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba695f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ba6962:;
  /* 11ba6962 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6965 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6967 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba696a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba696c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba696e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ba696f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6972 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ba6975 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6978 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba697b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba697e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6983 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba6986 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6989 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba698b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba698e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba6990 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba6992 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ba6993 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6996 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11ba6999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba699c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba699f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba69a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba69a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba69a7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba69aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba69ad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba69af and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba69b2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba69b4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba69b6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ba69b7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba69ba shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba69bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba69c0 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba69c3 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11ba69c5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba69c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba69ca mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ba69cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba69d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba69d2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba69d5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba69d7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba69d9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ba69da and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba69dd shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba69df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba69e2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba69e5 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba69e8 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba69ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba69ed mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba69f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba69f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba69f5 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba69f8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba69fa sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba69fc inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ba69fd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a03 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba6a06 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6a09 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6a0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a0e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba6a11 call 0x11ba72a0 */
  push32(0x11ba6a16u); f_11ba72a0();
  /* 11ba6a16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba6a19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba6a1c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6a1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba6a21 je 0x11ba6a32 */
  if (C.zf) goto L_11ba6a32;
  /* 11ba6a23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a26 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba6a29 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6a2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a2f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11ba6a32:;
  /* 11ba6a32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba6a35 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6a38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6a3a je 0x11ba6a4a */
  if (C.zf) goto L_11ba6a4a;
  /* 11ba6a3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a3f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ba6a42 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ba6a44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a47 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11ba6a4a:;
  /* 11ba6a4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba6a4d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6a50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6a52 je 0x11ba6a63 */
  if (C.zf) goto L_11ba6a63;
  /* 11ba6a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ba6a5a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6a5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11ba6a63:;
  /* 11ba6a63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba6a66 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba6a6b je 0x11ba6a7c */
  if (C.zf) goto L_11ba6a7c;
  /* 11ba6a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a70 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba6a73 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a79 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11ba6a7c:;
  /* 11ba6a7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba6a7f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6a82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6a84 je 0x11ba6a94 */
  if (C.zf) goto L_11ba6a94;
  /* 11ba6a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ba6a8c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ba6a8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6a91 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11ba6a94:;
  /* 11ba6a94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6a97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6a99 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6a9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba6aa1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6aa8 ja 0x11ba6ac4 */
  if ((!C.cf&&!C.zf)) goto L_11ba6ac4;
  /* 11ba6aaa cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6ab1 je 0x11ba6ade */
  if (C.zf) goto L_11ba6ade;
  /* 11ba6ab3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6ab7 je 0x11ba6b02 */
  if (C.zf) goto L_11ba6b02;
  /* 11ba6ab9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6ac0 je 0x11ba6af0 */
  if (C.zf) goto L_11ba6af0;
  /* 11ba6ac2 jmp 0x11ba6b0f */
  goto L_11ba6b0f;
L_11ba6ac4:;
  /* 11ba6ac4 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6acb je 0x11ba6acf */
  if (C.zf) goto L_11ba6acf;
  /* 11ba6acd jmp 0x11ba6b0f */
  goto L_11ba6b0f;
L_11ba6acf:;
  /* 11ba6acf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6ad2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6ad4 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6ad7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6ada mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba6adc jmp 0x11ba6b0f */
  goto L_11ba6b0f;
L_11ba6ade:;
  /* 11ba6ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6ae1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6ae3 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6ae6 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6aec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba6aee jmp 0x11ba6b0f */
  goto L_11ba6b0f;
L_11ba6af0:;
  /* 11ba6af0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6af3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6af5 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6af8 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6afb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6afe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba6b00 jmp 0x11ba6b0f */
  goto L_11ba6b0f;
L_11ba6b02:;
  /* 11ba6b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6b07 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6b0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba6b0f:;
  /* 11ba6b0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6b12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6b14 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6b1a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba6b1d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6b21 je 0x11ba6b58 */
  if (C.zf) goto L_11ba6b58;
  /* 11ba6b23 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6b2a je 0x11ba6b46 */
  if (C.zf) goto L_11ba6b46;
  /* 11ba6b2c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6b33 je 0x11ba6b37 */
  if (C.zf) goto L_11ba6b37;
  /* 11ba6b35 jmp 0x11ba6b68 */
  goto L_11ba6b68;
L_11ba6b37:;
  /* 11ba6b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba6b3c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ba6b44 jmp 0x11ba6b68 */
  goto L_11ba6b68;
L_11ba6b46:;
  /* 11ba6b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba6b4b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6b4e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6b51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ba6b56 jmp 0x11ba6b68 */
  goto L_11ba6b68;
L_11ba6b58:;
  /* 11ba6b58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba6b5d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6b60 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b66 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba6b68:;
  /* 11ba6b68 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba6b6b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6b70 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba6b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6b78 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6b7e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba6b85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b88 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ba6b8b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6b8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b91 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11ba6b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6b97 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ba6b9a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6b9d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6ba3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11ba6ba6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6ba9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba6bac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6bae mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11ba6bb1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba6bb4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11ba6bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6bba mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11ba6bbd or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6bc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6bc3 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11ba6bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6bc9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11ba6bcc and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6bcf or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6bd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6bd5 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11ba6bd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6bdb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba6bde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6be0 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11ba6be3 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba6be6 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11ba6be9 call 0x11ba72c0 */
  push32(0x11ba6beeu); f_11ba72c0();
  /* 11ba6bee lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11ba6bf1 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6bf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba6bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba6bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba6bf9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba6bfa call dword ptr [0x11bd035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd035c))), 0x11ba6c00u);
  /* 11ba6c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6c03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba6c06 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ba6c09 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6c0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6c0e je 0x11ba6c1d */
  if (C.zf) goto L_11ba6c1d;
  /* 11ba6c10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba6c15 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6c18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c1b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba6c1d:;
  /* 11ba6c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6c20 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba6c23 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11ba6c26 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6c29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6c2b je 0x11ba6c39 */
  if (C.zf) goto L_11ba6c39;
  /* 11ba6c2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6c32 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11ba6c34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c37 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ba6c39:;
  /* 11ba6c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6c3c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba6c3f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ba6c42 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba6c47 je 0x11ba6c56 */
  if (C.zf) goto L_11ba6c56;
  /* 11ba6c49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6c4e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6c51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c54 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba6c56:;
  /* 11ba6c56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6c59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba6c5c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba6c5e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6c61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6c63 je 0x11ba6c72 */
  if (C.zf) goto L_11ba6c72;
  /* 11ba6c65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba6c6a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6c6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba6c72:;
  /* 11ba6c72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6c75 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba6c78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6c7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6c7d je 0x11ba6c8b */
  if (C.zf) goto L_11ba6c8b;
  /* 11ba6c7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6c84 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11ba6c86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6c89 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ba6c8b:;
  /* 11ba6c8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6c8e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6c90 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6c93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba6c96 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6c9a ja 0x11ba6ce9 */
  if ((!C.cf&&!C.zf)) goto L_11ba6ce9;
  /* 11ba6c9c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba6c9f jmp dword ptr [ecx*4 + 0x11ba6d51] */
  switch (ECX) {
    case 0: goto L_11ba6cdc;
    case 1: goto L_11ba6cca;
    case 2: goto L_11ba6cb8;
    case 3: goto L_11ba6ca6;
    default: x86_unimpl("switch@0x11ba6c9f out of table"); return;
  }
L_11ba6ca6:;
  /* 11ba6ca6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6ca9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6cab and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ba6cae or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11ba6cb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6cb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba6cb6 jmp 0x11ba6ce9 */
  goto L_11ba6ce9;
L_11ba6cb8:;
  /* 11ba6cb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6cbb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6cbd and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ba6cc0 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11ba6cc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6cc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba6cc8 jmp 0x11ba6ce9 */
  goto L_11ba6ce9;
L_11ba6cca:;
  /* 11ba6cca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6ccd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6ccf and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ba6cd2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11ba6cd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6cd8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba6cda jmp 0x11ba6ce9 */
  goto L_11ba6ce9;
L_11ba6cdc:;
  /* 11ba6cdc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6cdf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6ce1 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ba6ce4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6ce7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ba6ce9:;
  /* 11ba6ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6cec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba6cee shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ba6cf1 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6cf4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba6cf7 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6cfb je 0x11ba6d0b */
  if (C.zf) goto L_11ba6d0b;
  /* 11ba6cfd cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6d01 je 0x11ba6d1d */
  if (C.zf) goto L_11ba6d1d;
  /* 11ba6d03 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6d07 je 0x11ba6d2f */
  if (C.zf) goto L_11ba6d2f;
  /* 11ba6d09 jmp 0x11ba6d3c */
  goto L_11ba6d3c;
L_11ba6d0b:;
  /* 11ba6d0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6d0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6d10 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba6d13 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba6d16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6d19 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba6d1b jmp 0x11ba6d3c */
  goto L_11ba6d3c;
L_11ba6d1d:;
  /* 11ba6d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6d20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6d22 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba6d25 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba6d28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6d2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba6d2d jmp 0x11ba6d3c */
  goto L_11ba6d3c;
L_11ba6d2f:;
  /* 11ba6d2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6d32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba6d34 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba6d37 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6d3a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba6d3c:;
  /* 11ba6d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6d3f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba6d42 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11ba6d45 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ba6d47 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11ba6d4a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba6d4d mov esp, ebp */
  ESP = (EBP);
  /* 11ba6d4f pop ebp */
  EBP = (pop32());
  /* 11ba6d50 ret  */
  ESPCHK(0x11ba68a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d70 @ 0x11ba6d70 (882 bytes, 268 insns) */
void f_11ba6d70(void) {
  FTRACE(0x11ba6d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6d71 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6d73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba6d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6d79 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba6d7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6d82 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6d85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6d87 je 0x11ba6daa */
  if (C.zf) goto L_11ba6daa;
  /* 11ba6d89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6d8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6d8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6d91 je 0x11ba6daa */
  if (C.zf) goto L_11ba6daa;
  /* 11ba6d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba6d95 call 0x11ba7320 */
  push32(0x11ba6d9au); f_11ba7320();
  /* 11ba6d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba6da0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11ba6da2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba6da5 jmp 0x11ba70ae */
  goto L_11ba70ae;
L_11ba6daa:;
  /* 11ba6daa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6dad and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6db0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6db2 je 0x11ba6dd5 */
  if (C.zf) goto L_11ba6dd5;
  /* 11ba6db4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6db7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6dba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6dbc je 0x11ba6dd5 */
  if (C.zf) goto L_11ba6dd5;
  /* 11ba6dbe push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba6dc0 call 0x11ba7320 */
  push32(0x11ba6dc5u); f_11ba7320();
  /* 11ba6dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba6dcb and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11ba6dcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba6dd0 jmp 0x11ba70ae */
  goto L_11ba70ae;
L_11ba6dd5:;
  /* 11ba6dd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6dd8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6ddb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6ddd je 0x11ba6f51 */
  if (C.zf) goto L_11ba6f51;
  /* 11ba6de3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6de6 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6deb je 0x11ba6f51 */
  if (C.zf) goto L_11ba6f51;
  /* 11ba6df1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ba6df3 call 0x11ba7320 */
  push32(0x11ba6df8u); f_11ba7320();
  /* 11ba6df8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6dfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6dfe and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6e03 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba6e06 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6e0d ja 0x11ba6e30 */
  if ((!C.cf&&!C.zf)) goto L_11ba6e30;
  /* 11ba6e0f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6e16 je 0x11ba6e85 */
  if (C.zf) goto L_11ba6e85;
  /* 11ba6e18 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6e1c je 0x11ba6e42 */
  if (C.zf) goto L_11ba6e42;
  /* 11ba6e1e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6e25 je 0x11ba6ec5 */
  if (C.zf) goto L_11ba6ec5;
  /* 11ba6e2b jmp 0x11ba6f43 */
  goto L_11ba6f43;
L_11ba6e30:;
  /* 11ba6e30 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6e37 je 0x11ba6f05 */
  if (C.zf) goto L_11ba6f05;
  /* 11ba6e3d jmp 0x11ba6f43 */
  goto L_11ba6f43;
L_11ba6e42:;
  /* 11ba6e42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6e45 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ba6e47 fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11ba6e4d fnstsw ax */
  AX = fpu_status();
  /* 11ba6e4f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ba6e52 jne 0x11ba6e67 */
  if (!C.zf) goto L_11ba6e67;
  /* 11ba6e54 mov edx, dword ptr [0x11bccb40] */
  EDX = (r32((uint32_t)(0x11bccb40)));
  /* 11ba6e5a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ba6e5d mov eax, dword ptr [0x11bccb44] */
  EAX = (r32((uint32_t)(0x11bccb44)));
  /* 11ba6e62 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ba6e65 jmp 0x11ba6e72 */
  goto L_11ba6e72;
L_11ba6e67:;
  /* 11ba6e67 fld qword ptr [0x11bccb40] */
  fpu_push(rf64((uint32_t)(0x11bccb40)));
  /* 11ba6e6d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ba6e6f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11ba6e72:;
  /* 11ba6e72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6e75 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba6e78 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba6e7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba6e7d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba6e80 jmp 0x11ba6f43 */
  goto L_11ba6f43;
L_11ba6e85:;
  /* 11ba6e85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6e88 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ba6e8a fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11ba6e90 fnstsw ax */
  AX = fpu_status();
  /* 11ba6e92 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ba6e95 jne 0x11ba6eaa */
  if (!C.zf) goto L_11ba6eaa;
  /* 11ba6e97 mov edx, dword ptr [0x11bccb40] */
  EDX = (r32((uint32_t)(0x11bccb40)));
  /* 11ba6e9d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ba6ea0 mov eax, dword ptr [0x11bccb44] */
  EAX = (r32((uint32_t)(0x11bccb44)));
  /* 11ba6ea5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ba6ea8 jmp 0x11ba6eb5 */
  goto L_11ba6eb5;
L_11ba6eaa:;
  /* 11ba6eaa fld qword ptr [0x11bccb50] */
  fpu_push(rf64((uint32_t)(0x11bccb50)));
  /* 11ba6eb0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ba6eb2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11ba6eb5:;
  /* 11ba6eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6eb8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba6ebb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba6ebd mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba6ec0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba6ec3 jmp 0x11ba6f43 */
  goto L_11ba6f43;
L_11ba6ec5:;
  /* 11ba6ec5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6ec8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ba6eca fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11ba6ed0 fnstsw ax */
  AX = fpu_status();
  /* 11ba6ed2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ba6ed5 jne 0x11ba6eea */
  if (!C.zf) goto L_11ba6eea;
  /* 11ba6ed7 mov edx, dword ptr [0x11bccb50] */
  EDX = (r32((uint32_t)(0x11bccb50)));
  /* 11ba6edd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11ba6ee0 mov eax, dword ptr [0x11bccb54] */
  EAX = (r32((uint32_t)(0x11bccb54)));
  /* 11ba6ee5 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ba6ee8 jmp 0x11ba6ef5 */
  goto L_11ba6ef5;
L_11ba6eea:;
  /* 11ba6eea fld qword ptr [0x11bccb40] */
  fpu_push(rf64((uint32_t)(0x11bccb40)));
  /* 11ba6ef0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ba6ef2 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11ba6ef5:;
  /* 11ba6ef5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6ef8 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba6efb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba6efd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba6f00 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba6f03 jmp 0x11ba6f43 */
  goto L_11ba6f43;
L_11ba6f05:;
  /* 11ba6f05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6f08 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ba6f0a fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11ba6f10 fnstsw ax */
  AX = fpu_status();
  /* 11ba6f12 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ba6f15 jne 0x11ba6f2a */
  if (!C.zf) goto L_11ba6f2a;
  /* 11ba6f17 mov edx, dword ptr [0x11bccb50] */
  EDX = (r32((uint32_t)(0x11bccb50)));
  /* 11ba6f1d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11ba6f20 mov eax, dword ptr [0x11bccb54] */
  EAX = (r32((uint32_t)(0x11bccb54)));
  /* 11ba6f25 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ba6f28 jmp 0x11ba6f35 */
  goto L_11ba6f35;
L_11ba6f2a:;
  /* 11ba6f2a fld qword ptr [0x11bccb50] */
  fpu_push(rf64((uint32_t)(0x11bccb50)));
  /* 11ba6f30 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ba6f32 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11ba6f35:;
  /* 11ba6f35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6f38 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ba6f3b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba6f3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba6f40 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ba6f43:;
  /* 11ba6f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba6f46 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6f49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba6f4c jmp 0x11ba70ae */
  goto L_11ba70ae;
L_11ba6f51:;
  /* 11ba6f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6f54 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6f57 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba6f59 je 0x11ba70ae */
  if (C.zf) goto L_11ba70ae;
  /* 11ba6f5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6f62 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba6f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba6f67 je 0x11ba70ae */
  if (C.zf) goto L_11ba70ae;
  /* 11ba6f6d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba6f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6f77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba6f7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba6f7c je 0x11ba6f85 */
  if (C.zf) goto L_11ba6f85;
  /* 11ba6f7e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ba6f85:;
  /* 11ba6f85 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6f88 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11ba6f8a fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11ba6f90 fnstsw ax */
  AX = fpu_status();
  /* 11ba6f92 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11ba6f95 jne 0x11ba708e */
  if (!C.zf) goto L_11ba708e;
  /* 11ba6f9b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ba6f9e push eax */
  push32((uint32_t)(EAX));
  /* 11ba6f9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6fa2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba6fa5 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6fa6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ba6fa8 push eax */
  push32((uint32_t)(EAX));
  /* 11ba6fa9 call 0x11baa4d0 */
  push32(0x11ba6faeu); f_11baa4d0();
  /* 11ba6fae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6fb1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11ba6fb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba6fb7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba6fbd mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba6fc0 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6fc7 jge 0x11ba6fe1 */
  if ((C.sf==C.of)) goto L_11ba6fe1;
  /* 11ba6fc9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ba6fcc fmul qword ptr [0x11bc8718] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11bc8718)));
  /* 11ba6fd2 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11ba6fd5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ba6fdc jmp 0x11ba707e */
  goto L_11ba707e;
L_11ba6fe1:;
  /* 11ba6fe1 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ba6fe4 fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11ba6fea fnstsw ax */
  AX = fpu_status();
  /* 11ba6fec test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11ba6fef je 0x11ba6ffa */
  if (C.zf) goto L_11ba6ffa;
  /* 11ba6ff1 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11ba6ff8 jmp 0x11ba7001 */
  goto L_11ba7001;
L_11ba6ffa:;
  /* 11ba6ffa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11ba7001:;
  /* 11ba7001 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ba7004 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba7007 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11ba700b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11ba700f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11ba7013 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11ba7017 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11ba701a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11ba701e jmp 0x11ba7029 */
  goto L_11ba7029;
L_11ba7020:;
  /* 11ba7020 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba7023 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7026 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ba7029:;
  /* 11ba7029 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7030 jge 0x11ba7070 */
  if ((C.sf==C.of)) goto L_11ba7070;
  /* 11ba7032 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba7035 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba703a je 0x11ba7049 */
  if (C.zf) goto L_11ba7049;
  /* 11ba703c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7040 jne 0x11ba7049 */
  if (!C.zf) goto L_11ba7049;
  /* 11ba7042 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ba7049:;
  /* 11ba7049 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba704c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ba704e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba7051 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7054 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba7057 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba7059 je 0x11ba7066 */
  if (C.zf) goto L_11ba7066;
  /* 11ba705b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba705e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7063 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ba7066:;
  /* 11ba7066 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7069 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ba706b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba706e jmp 0x11ba7020 */
  goto L_11ba7020;
L_11ba7070:;
  /* 11ba7070 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7074 je 0x11ba707e */
  if (C.zf) goto L_11ba707e;
  /* 11ba7076 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ba7079 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ba707b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11ba707e:;
  /* 11ba707e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7081 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba7084 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ba7086 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7089 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba708c jmp 0x11ba7095 */
  goto L_11ba7095;
L_11ba708e:;
  /* 11ba708e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ba7095:;
  /* 11ba7095 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7099 je 0x11ba70a5 */
  if (C.zf) goto L_11ba70a5;
  /* 11ba709b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ba709d call 0x11ba7320 */
  push32(0x11ba70a2u); f_11ba7320();
  /* 11ba70a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba70a5:;
  /* 11ba70a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba70a8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba70ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba70ae:;
  /* 11ba70ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba70b1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba70b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba70b6 je 0x11ba70d5 */
  if (C.zf) goto L_11ba70d5;
  /* 11ba70b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba70bb and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba70be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba70c0 je 0x11ba70d5 */
  if (C.zf) goto L_11ba70d5;
  /* 11ba70c2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ba70c4 call 0x11ba7320 */
  push32(0x11ba70c9u); f_11ba7320();
  /* 11ba70c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba70cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba70cf and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba70d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba70d5:;
  /* 11ba70d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba70d7 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba70db sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ba70de mov esp, ebp */
  ESP = (EBP);
  /* 11ba70e0 pop ebp */
  EBP = (pop32());
  /* 11ba70e1 ret  */
  ESPCHK(0x11ba6d70u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11ba70f0 (155 bytes, 54 insns) */
void f_11ba70f0(void) {
  FTRACE(0x11ba70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba70f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba70f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba70f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba70f9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba70fa call 0x11ba71d0 */
  push32(0x11ba70ffu); f_11ba71d0();
  /* 11ba70ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7102 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ba7105 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7109 je 0x11ba7167 */
  if (C.zf) goto L_11ba7167;
  /* 11ba710b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba710e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ba7111 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7114 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ba7117 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba711a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba711d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba7120 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba7123 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba7126 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba7129 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba712c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba712f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ba7132 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba7135 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba713a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba713d push edx */
  push32((uint32_t)(EDX));
  /* 11ba713e call 0x11ba72e0 */
  push32(0x11ba7143u); f_11ba72e0();
  /* 11ba7143 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7146 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ba7149 push eax */
  push32((uint32_t)(EAX));
  /* 11ba714a call 0x11ba7290 */
  push32(0x11ba714fu); f_11ba7290();
  /* 11ba714f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7154 jne 0x11ba7162 */
  if (!C.zf) goto L_11ba7162;
  /* 11ba7156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7159 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba715a call 0x11ba7190 */
  push32(0x11ba715fu); f_11ba7190();
  /* 11ba715f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7162:;
  /* 11ba7162 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ba7165 jmp 0x11ba7187 */
  goto L_11ba7187;
L_11ba7167:;
  /* 11ba7167 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba716c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba716f push edx */
  push32((uint32_t)(EDX));
  /* 11ba7170 call 0x11ba72e0 */
  push32(0x11ba7175u); f_11ba72e0();
  /* 11ba7175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba717b push eax */
  push32((uint32_t)(EAX));
  /* 11ba717c call 0x11ba7190 */
  push32(0x11ba7181u); f_11ba7190();
  /* 11ba7181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7184 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11ba7187:;
  /* 11ba7187 mov esp, ebp */
  ESP = (EBP);
  /* 11ba7189 pop ebp */
  EBP = (pop32());
  /* 11ba718a ret  */
  ESPCHK(0x11ba70f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11ba7190 (58 bytes, 20 insns) */
void f_11ba7190(void) {
  FTRACE(0x11ba7190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7190 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7191 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7193 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7197 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba719a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba719e je 0x11ba71ae */
  if (C.zf) goto L_11ba71ae;
  /* 11ba71a0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba71a4 jle 0x11ba71c6 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba71c6;
  /* 11ba71a6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba71aa jle 0x11ba71bb */
  if ((C.zf||C.sf!=C.of)) goto L_11ba71bb;
  /* 11ba71ac jmp 0x11ba71c6 */
  goto L_11ba71c6;
L_11ba71ae:;
  /* 11ba71ae call 0x11ba6620 */
  push32(0x11ba71b3u); f_11ba6620();
  /* 11ba71b3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11ba71b9 jmp 0x11ba71c6 */
  goto L_11ba71c6;
L_11ba71bb:;
  /* 11ba71bb call 0x11ba6620 */
  push32(0x11ba71c0u); f_11ba6620();
  /* 11ba71c0 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11ba71c6:;
  /* 11ba71c6 mov esp, ebp */
  ESP = (EBP);
  /* 11ba71c8 pop ebp */
  EBP = (pop32());
  /* 11ba71c9 ret  */
  ESPCHK(0x11ba7190u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11ba71d0 (63 bytes, 22 insns) */
void f_11ba71d0(void) {
  FTRACE(0x11ba71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba71d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba71d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba71d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba71db jmp 0x11ba71e6 */
  goto L_11ba71e6;
L_11ba71dd:;
  /* 11ba71dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba71e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba71e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba71e6:;
  /* 11ba71e6 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba71ea jge 0x11ba7209 */
  if ((C.sf==C.of)) goto L_11ba7209;
  /* 11ba71ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba71ef mov edx, dword ptr [ecx*8 + 0x11bcc8f8] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11bcc8f8)));
  /* 11ba71f6 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba71f9 jne 0x11ba7207 */
  if (!C.zf) goto L_11ba7207;
  /* 11ba71fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba71fe mov eax, dword ptr [eax*8 + 0x11bcc8fc] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11bcc8fc)));
  /* 11ba7205 jmp 0x11ba720b */
  goto L_11ba720b;
L_11ba7207:;
  /* 11ba7207 jmp 0x11ba71dd */
  goto L_11ba71dd;
L_11ba7209:;
  /* 11ba7209 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba720b:;
  /* 11ba720b mov esp, ebp */
  ESP = (EBP);
  /* 11ba720d pop ebp */
  EBP = (pop32());
  /* 11ba720e ret  */
  ESPCHK(0x11ba71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017210 @ 0x11ba7210 (113 bytes, 38 insns) */
void f_11ba7210(void) {
  FTRACE(0x11ba7210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7210 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7211 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7213 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7217 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba721a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba721c je 0x11ba7227 */
  if (C.zf) goto L_11ba7227;
  /* 11ba721e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11ba7225 jmp 0x11ba727a */
  goto L_11ba727a;
L_11ba7227:;
  /* 11ba7227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba722a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba722d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba722f je 0x11ba723a */
  if (C.zf) goto L_11ba723a;
  /* 11ba7231 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba7238 jmp 0x11ba727a */
  goto L_11ba727a;
L_11ba723a:;
  /* 11ba723a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba723d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba7240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba7242 je 0x11ba724d */
  if (C.zf) goto L_11ba724d;
  /* 11ba7244 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ba724b jmp 0x11ba727a */
  goto L_11ba727a;
L_11ba724d:;
  /* 11ba724d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7250 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7255 je 0x11ba7260 */
  if (C.zf) goto L_11ba7260;
  /* 11ba7257 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11ba725e jmp 0x11ba727a */
  goto L_11ba727a;
L_11ba7260:;
  /* 11ba7260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7263 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba7266 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba7268 je 0x11ba7273 */
  if (C.zf) goto L_11ba7273;
  /* 11ba726a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11ba7271 jmp 0x11ba727a */
  goto L_11ba727a;
L_11ba7273:;
  /* 11ba7273 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba727a:;
  /* 11ba727a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba727d mov esp, ebp */
  ESP = (EBP);
  /* 11ba727f pop ebp */
  EBP = (pop32());
  /* 11ba7280 ret  */
  ESPCHK(0x11ba7210u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11ba7290 (7 bytes, 5 insns) */
void f_11ba7290(void) {
  FTRACE(0x11ba7290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7290 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7291 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7295 pop ebp */
  EBP = (pop32());
  /* 11ba7296 ret  */
  ESPCHK(0x11ba7290u, _esp0);
  ESP += 4; return;
}

/* FUN_100172a0 @ 0x11ba72a0 (22 bytes, 15 insns) */
void f_11ba72a0(void) {
  FTRACE(0x11ba72a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba72a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba72a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba72a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba72a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba72a5 push esi */
  push32((uint32_t)(ESI));
  /* 11ba72a6 push edi */
  push32((uint32_t)(EDI));
  /* 11ba72a7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba72a8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11ba72ab movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11ba72af pop edi */
  EDI = (pop32());
  /* 11ba72b0 pop esi */
  ESI = (pop32());
  /* 11ba72b1 pop ebx */
  EBX = (pop32());
  /* 11ba72b2 mov esp, ebp */
  ESP = (EBP);
  /* 11ba72b4 pop ebp */
  EBP = (pop32());
  /* 11ba72b5 ret  */
  ESPCHK(0x11ba72a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100172c0 @ 0x11ba72c0 (23 bytes, 15 insns) */
void f_11ba72c0(void) {
  FTRACE(0x11ba72c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba72c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba72c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba72c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba72c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba72c5 push esi */
  push32((uint32_t)(ESI));
  /* 11ba72c6 push edi */
  push32((uint32_t)(EDI));
  /* 11ba72c7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11ba72ca fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11ba72cc movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11ba72d0 pop edi */
  EDI = (pop32());
  /* 11ba72d1 pop esi */
  ESI = (pop32());
  /* 11ba72d2 pop ebx */
  EBX = (pop32());
  /* 11ba72d3 mov esp, ebp */
  ESP = (EBP);
  /* 11ba72d5 pop ebp */
  EBP = (pop32());
  /* 11ba72d6 ret  */
  ESPCHK(0x11ba72c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100172e0 @ 0x11ba72e0 (50 bytes, 24 insns) */
void f_11ba72e0(void) {
  FTRACE(0x11ba72e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba72e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba72e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba72e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba72e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba72e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ba72e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ba72e9 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba72ea fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11ba72ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba72f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11ba72f3 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11ba72f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba72fa not edx */
  EDX = (~(EDX));
  /* 11ba72fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba72fe or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7300 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ba7304 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11ba7307 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11ba730b pop edi */
  EDI = (pop32());
  /* 11ba730c pop esi */
  ESI = (pop32());
  /* 11ba730d pop ebx */
  EBX = (pop32());
  /* 11ba730e mov esp, ebp */
  ESP = (EBP);
  /* 11ba7310 pop ebp */
  EBP = (pop32());
  /* 11ba7311 ret  */
  ESPCHK(0x11ba72e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017320 @ 0x11ba7320 (117 bytes, 53 insns) */
void f_11ba7320(void) {
  FTRACE(0x11ba7320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7321 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7326 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba7327 push esi */
  push32((uint32_t)(ESI));
  /* 11ba7328 push edi */
  push32((uint32_t)(EDI));
  /* 11ba7329 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba732c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba732f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7331 je 0x11ba733d */
  if (C.zf) goto L_11ba733d;
  /* 11ba7333 fld xword ptr [0x11bcc9d4] */
  fpu_push(rf80((uint32_t)(0x11bcc9d4)));
  /* 11ba7339 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11ba733c wait  */
  /* wait (no observable integer/reg state) */
L_11ba733d:;
  /* 11ba733d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7340 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba7343 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba7345 je 0x11ba7357 */
  if (C.zf) goto L_11ba7357;
  /* 11ba7347 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba7348 fnstsw ax */
  AX = fpu_status();
  /* 11ba734a fld xword ptr [0x11bcc9d4] */
  fpu_push(rf80((uint32_t)(0x11bcc9d4)));
  /* 11ba7350 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ba7353 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba7354 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba7355 fnstsw ax */
  AX = fpu_status();
L_11ba7357:;
  /* 11ba7357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba735a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba735d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba735f je 0x11ba736b */
  if (C.zf) goto L_11ba736b;
  /* 11ba7361 fld xword ptr [0x11bcc9e0] */
  fpu_push(rf80((uint32_t)(0x11bcc9e0)));
  /* 11ba7367 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ba736a wait  */
  /* wait (no observable integer/reg state) */
L_11ba736b:;
  /* 11ba736b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba736e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7373 je 0x11ba737e */
  if (C.zf) goto L_11ba737e;
  /* 11ba7375 fldz  */
  fpu_push(0.0);
  /* 11ba7377 fld1  */
  fpu_push(1.0);
  /* 11ba7379 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11ba737b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ba737d wait  */
  /* wait (no observable integer/reg state) */
L_11ba737e:;
  /* 11ba737e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7381 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba7384 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba7386 je 0x11ba738e */
  if (C.zf) goto L_11ba738e;
  /* 11ba7388 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11ba738a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ba738d wait  */
  /* wait (no observable integer/reg state) */
L_11ba738e:;
  /* 11ba738e pop edi */
  EDI = (pop32());
  /* 11ba738f pop esi */
  ESI = (pop32());
  /* 11ba7390 pop ebx */
  EBX = (pop32());
  /* 11ba7391 mov esp, ebp */
  ESP = (EBP);
  /* 11ba7393 pop ebp */
  EBP = (pop32());
  /* 11ba7394 ret  */
  ESPCHK(0x11ba7320u, _esp0);
  ESP += 4; return;
}

/* FUN_100173a0 @ 0x11ba73a0 (421 bytes, 148 insns) */
void f_11ba73a0(void) {
  FTRACE(0x11ba73a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba73a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba73a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba73a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ba73a5 push 0x11bc9400 */
  push32((uint32_t)(0x11bc9400u));
  /* 11ba73aa push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11ba73af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ba73b5 push eax */
  push32((uint32_t)(EAX));
  /* 11ba73b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ba73bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba73c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba73c1 push esi */
  push32((uint32_t)(ESI));
  /* 11ba73c2 push edi */
  push32((uint32_t)(EDI));
  /* 11ba73c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ba73c6 cmp dword ptr [0x11bce624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba73cd jne 0x11ba741e */
  if (!C.zf) goto L_11ba741e;
  /* 11ba73cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ba73d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba73d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba73d5 push 0x11bc93fc */
  push32((uint32_t)(0x11bc93fcu));
  /* 11ba73da push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba73dc call dword ptr [0x11bd0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0350))), 0x11ba73e2u);
  /* 11ba73e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba73e4 je 0x11ba73f2 */
  if (C.zf) goto L_11ba73f2;
  /* 11ba73e6 mov dword ptr [0x11bce624], 1 */
  w32((uint32_t)(0x11bce624), (0x1u));
  /* 11ba73f0 jmp 0x11ba741e */
  goto L_11ba741e;
L_11ba73f2:;
  /* 11ba73f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11ba73f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba73f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba73f8 push 0x11bc93f8 */
  push32((uint32_t)(0x11bc93f8u));
  /* 11ba73fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba73ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7401 call dword ptr [0x11bd0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0354))), 0x11ba7407u);
  /* 11ba7407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7409 je 0x11ba7417 */
  if (C.zf) goto L_11ba7417;
  /* 11ba740b mov dword ptr [0x11bce624], 2 */
  w32((uint32_t)(0x11bce624), (0x2u));
  /* 11ba7415 jmp 0x11ba741e */
  goto L_11ba741e;
L_11ba7417:;
  /* 11ba7417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7419 jmp 0x11ba7548 */
  goto L_11ba7548;
L_11ba741e:;
  /* 11ba741e cmp dword ptr [0x11bce624], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce624))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7425 jne 0x11ba7455 */
  if (!C.zf) goto L_11ba7455;
  /* 11ba7427 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba742b jne 0x11ba7436 */
  if (!C.zf) goto L_11ba7436;
  /* 11ba742d mov edx, dword ptr [0x11bce63c] */
  EDX = (r32((uint32_t)(0x11bce63c)));
  /* 11ba7433 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11ba7436:;
  /* 11ba7436 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba7439 push eax */
  push32((uint32_t)(EAX));
  /* 11ba743a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba743d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba743e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7441 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7445 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7446 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba7449 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba744a call dword ptr [0x11bd0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0354))), 0x11ba7450u);
  /* 11ba7450 jmp 0x11ba7548 */
  goto L_11ba7548;
L_11ba7455:;
  /* 11ba7455 cmp dword ptr [0x11bce624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba745c jne 0x11ba7546 */
  if (!C.zf) goto L_11ba7546;
  /* 11ba7462 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7466 jne 0x11ba7471 */
  if (!C.zf) goto L_11ba7471;
  /* 11ba7468 mov edx, dword ptr [0x11bce64c] */
  EDX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba746e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11ba7471:;
  /* 11ba7471 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7473 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7478 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7479 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba747c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba747d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba7480 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba7482 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7484 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba7487 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba748a push edx */
  push32((uint32_t)(EDX));
  /* 11ba748b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba748e push eax */
  push32((uint32_t)(EAX));
  /* 11ba748f call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11ba7495u);
  /* 11ba7495 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba7498 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba749c jne 0x11ba74a5 */
  if (!C.zf) goto L_11ba74a5;
  /* 11ba749e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba74a0 jmp 0x11ba7548 */
  goto L_11ba7548;
L_11ba74a5:;
  /* 11ba74a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba74ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba74af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba74b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba74b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ba74b6 call 0x11ba01f0 */
  push32(0x11ba74bbu); f_11ba01f0();
  /* 11ba74bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11ba74be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ba74c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba74c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ba74c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba74ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba74cc push edx */
  push32((uint32_t)(EDX));
  /* 11ba74cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba74cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba74d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba74d3 call 0x11ba1d00 */
  push32(0x11ba74d8u); f_11ba1d00();
  /* 11ba74d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba74db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ba74e2 jmp 0x11ba74fb */
  goto L_11ba74fb;
  /* 11ba74e4 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba74e9 ret  */
  ESPCHK(0x11ba73a0u, _esp0);
  ESP += 4; return;
  /* 11ba74ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba74ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ba74f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ba74fb:;
  /* 11ba74fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba74ff jne 0x11ba7505 */
  if (!C.zf) goto L_11ba7505;
  /* 11ba7501 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7503 jmp 0x11ba7548 */
  goto L_11ba7548;
L_11ba7505:;
  /* 11ba7505 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba7508 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7509 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba750c push edx */
  push32((uint32_t)(EDX));
  /* 11ba750d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7510 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7511 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7514 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7515 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba7517 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba751a push edx */
  push32((uint32_t)(EDX));
  /* 11ba751b call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11ba7521u);
  /* 11ba7521 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba7524 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7528 jne 0x11ba752e */
  if (!C.zf) goto L_11ba752e;
  /* 11ba752a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba752c jmp 0x11ba7548 */
  goto L_11ba7548;
L_11ba752e:;
  /* 11ba752e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba7531 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7532 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba7535 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7536 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba7539 push edx */
  push32((uint32_t)(EDX));
  /* 11ba753a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba753d push eax */
  push32((uint32_t)(EAX));
  /* 11ba753e call dword ptr [0x11bd0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0350))), 0x11ba7544u);
  /* 11ba7544 jmp 0x11ba7548 */
  goto L_11ba7548;
L_11ba7546:;
  /* 11ba7546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba7548:;
  /* 11ba7548 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11ba754b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba754e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ba7555 pop edi */
  EDI = (pop32());
  /* 11ba7556 pop esi */
  ESI = (pop32());
  /* 11ba7557 pop ebx */
  EBX = (pop32());
  /* 11ba7558 mov esp, ebp */
  ESP = (EBP);
  /* 11ba755a pop ebp */
  EBP = (pop32());
  /* 11ba755b ret  */
  ESPCHK(0x11ba73a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017560 @ 0x11ba7560 (1007 bytes, 269 insns) */
void f_11ba7560(void) {
  FTRACE(0x11ba7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7560 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7561 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7563 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7569 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba756d jl 0x11ba7575 */
  if ((C.sf!=C.of)) goto L_11ba7575;
  /* 11ba756f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7573 jle 0x11ba757c */
  if ((C.zf||C.sf!=C.of)) goto L_11ba757c;
L_11ba7575:;
  /* 11ba7575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7577 jmp 0x11ba794b */
  goto L_11ba794b;
L_11ba757c:;
  /* 11ba757c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba757e call 0x11b9a6d0 */
  push32(0x11ba7583u); f_11b9a6d0();
  /* 11ba7583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7586 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba758d mov eax, dword ptr [0x11bce6ec] */
  EAX = (r32((uint32_t)(0x11bce6ec)));
  /* 11ba7592 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7595 mov dword ptr [0x11bce6ec], eax */
  w32((uint32_t)(0x11bce6ec), (EAX));
L_11ba759a:;
  /* 11ba759a cmp dword ptr [0x11bce6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba75a1 je 0x11ba75ad */
  if (C.zf) goto L_11ba75ad;
  /* 11ba75a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba75a5 call dword ptr [0x11bd034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd034c))), 0x11ba75abu);
  /* 11ba75ab jmp 0x11ba759a */
  goto L_11ba759a;
L_11ba75ad:;
  /* 11ba75ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba75b1 je 0x11ba75f1 */
  if (C.zf) goto L_11ba75f1;
  /* 11ba75b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba75b7 je 0x11ba75d1 */
  if (C.zf) goto L_11ba75d1;
  /* 11ba75b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba75bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ba75bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba75c0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba75c1 call 0x11ba7950 */
  push32(0x11ba75c6u); f_11ba7950();
  /* 11ba75c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba75c9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11ba75cf jmp 0x11ba75e3 */
  goto L_11ba75e3;
L_11ba75d1:;
  /* 11ba75d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba75d4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba75d7 mov ecx, dword ptr [eax + 0x11bccafc] */
  ECX = (r32((uint32_t)(EAX + 0x11bccafc)));
  /* 11ba75dd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11ba75e3:;
  /* 11ba75e3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11ba75e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba75ec jmp 0x11ba792b */
  goto L_11ba792b;
L_11ba75f1:;
  /* 11ba75f1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11ba75f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba75ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7603 je 0x11ba7923 */
  if (C.zf) goto L_11ba7923;
  /* 11ba7609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba760c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba760f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7612 jne 0x11ba7834 */
  if (!C.zf) goto L_11ba7834;
  /* 11ba7618 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba761b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ba761f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7622 jne 0x11ba7834 */
  if (!C.zf) goto L_11ba7834;
  /* 11ba7628 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba762b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11ba762f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7632 jne 0x11ba7834 */
  if (!C.zf) goto L_11ba7834;
  /* 11ba7638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba763b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11ba7641:;
  /* 11ba7641 push 0x11bc9450 */
  push32((uint32_t)(0x11bc9450u));
  /* 11ba7646 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba764c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba764d call 0x11babb50 */
  push32(0x11ba7652u); f_11babb50();
  /* 11ba7652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7655 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11ba765b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7662 je 0x11ba768d */
  if (C.zf) goto L_11ba768d;
  /* 11ba7664 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba766a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7670 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11ba7676 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba767d je 0x11ba768d */
  if (C.zf) goto L_11ba768d;
  /* 11ba767f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba7685 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba7688 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba768b jne 0x11ba76b3 */
  if (!C.zf) goto L_11ba76b3;
L_11ba768d:;
  /* 11ba768d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7691 je 0x11ba76ac */
  if (C.zf) goto L_11ba76ac;
  /* 11ba7693 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba7695 call 0x11b9a770 */
  push32(0x11ba769au); f_11b9a770();
  /* 11ba769a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba769d mov edx, dword ptr [0x11bce6ec] */
  EDX = (r32((uint32_t)(0x11bce6ec)));
  /* 11ba76a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba76a6 mov dword ptr [0x11bce6ec], edx */
  w32((uint32_t)(0x11bce6ec), (EDX));
L_11ba76ac:;
  /* 11ba76ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba76ae jmp 0x11ba794b */
  goto L_11ba794b;
L_11ba76b3:;
  /* 11ba76b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ba76ba jmp 0x11ba76c5 */
  goto L_11ba76c5;
L_11ba76bc:;
  /* 11ba76bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba76bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba76c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ba76c5:;
  /* 11ba76c5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba76c9 jg 0x11ba7713 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba7713;
  /* 11ba76cb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ba76d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba76d2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba76d8 push edx */
  push32((uint32_t)(EDX));
  /* 11ba76d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba76dc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba76df mov ecx, dword ptr [eax + 0x11bccaf8] */
  ECX = (r32((uint32_t)(EAX + 0x11bccaf8)));
  /* 11ba76e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba76e6 call 0x11babb10 */
  push32(0x11ba76ebu); f_11babb10();
  /* 11ba76eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba76ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba76f0 jne 0x11ba7711 */
  if (!C.zf) goto L_11ba7711;
  /* 11ba76f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba76f5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba76f8 mov eax, dword ptr [edx + 0x11bccaf8] */
  EAX = (r32((uint32_t)(EDX + 0x11bccaf8)));
  /* 11ba76fe push eax */
  push32((uint32_t)(EAX));
  /* 11ba76ff call 0x11b9fe80 */
  push32(0x11ba7704u); f_11b9fe80();
  /* 11ba7704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7707 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba770d jne 0x11ba7711 */
  if (!C.zf) goto L_11ba7711;
  /* 11ba770f jmp 0x11ba7713 */
  goto L_11ba7713;
L_11ba7711:;
  /* 11ba7711 jmp 0x11ba76bc */
  goto L_11ba76bc;
L_11ba7713:;
  /* 11ba7713 push 0x11bc944c */
  push32((uint32_t)(0x11bc944cu));
  /* 11ba7718 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba771e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7721 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11ba7727 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba772d push edx */
  push32((uint32_t)(EDX));
  /* 11ba772e call 0x11babad0 */
  push32(0x11ba7733u); f_11babad0();
  /* 11ba7733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7736 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11ba773c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7743 jne 0x11ba7779 */
  if (!C.zf) goto L_11ba7779;
  /* 11ba7745 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba774b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba774e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7751 je 0x11ba7779 */
  if (C.zf) goto L_11ba7779;
  /* 11ba7753 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7757 je 0x11ba7772 */
  if (C.zf) goto L_11ba7772;
  /* 11ba7759 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba775b call 0x11b9a770 */
  push32(0x11ba7760u); f_11b9a770();
  /* 11ba7760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7763 mov edx, dword ptr [0x11bce6ec] */
  EDX = (r32((uint32_t)(0x11bce6ec)));
  /* 11ba7769 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba776c mov dword ptr [0x11bce6ec], edx */
  w32((uint32_t)(0x11bce6ec), (EDX));
L_11ba7772:;
  /* 11ba7772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7774 jmp 0x11ba794b */
  goto L_11ba794b;
L_11ba7779:;
  /* 11ba7779 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba777d jg 0x11ba77ca */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba77ca;
  /* 11ba777f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ba7785 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7786 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba778c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba778d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11ba7793 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7794 call 0x11ba0870 */
  push32(0x11ba7799u); f_11ba0870();
  /* 11ba7799 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba779c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ba77a2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11ba77aa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11ba77b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba77b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba77b4 push edx */
  push32((uint32_t)(EDX));
  /* 11ba77b5 call 0x11ba7950 */
  push32(0x11ba77bau); f_11ba7950();
  /* 11ba77ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba77bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba77bf je 0x11ba77ca */
  if (C.zf) goto L_11ba77ca;
  /* 11ba77c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba77c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba77c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba77ca:;
  /* 11ba77ca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba77d0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba77d6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ba77dc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba77e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba77e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba77e7 je 0x11ba77f8 */
  if (C.zf) goto L_11ba77f8;
  /* 11ba77e9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba77ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba77f2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11ba77f8:;
  /* 11ba77f8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba77fe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba7801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7803 jne 0x11ba7641 */
  if (!C.zf) goto L_11ba7641;
  /* 11ba7809 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba780d je 0x11ba781c */
  if (C.zf) goto L_11ba781c;
  /* 11ba780f call 0x11ba7af0 */
  push32(0x11ba7814u); f_11ba7af0();
  /* 11ba7814 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11ba781a jmp 0x11ba7826 */
  goto L_11ba7826;
L_11ba781c:;
  /* 11ba781c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11ba7826:;
  /* 11ba7826 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11ba782c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba782f jmp 0x11ba7921 */
  goto L_11ba7921;
L_11ba7834:;
  /* 11ba7834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7837 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7838 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba783a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba783c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ba7842 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7846 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7847 call 0x11ba7bf0 */
  push32(0x11ba784cu); f_11ba7bf0();
  /* 11ba784c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba784f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba7852 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7856 je 0x11ba7921 */
  if (C.zf) goto L_11ba7921;
  /* 11ba785c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ba7863 jmp 0x11ba786e */
  goto L_11ba786e;
L_11ba7865:;
  /* 11ba7865 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba7868 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba786b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ba786e:;
  /* 11ba786e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7872 jg 0x11ba78d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba78d0;
  /* 11ba7874 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7878 je 0x11ba78ce */
  if (C.zf) goto L_11ba78ce;
  /* 11ba787a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba787d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7880 mov ecx, dword ptr [eax + 0x11bccafc] */
  ECX = (r32((uint32_t)(EAX + 0x11bccafc)));
  /* 11ba7886 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7887 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11ba788d push edx */
  push32((uint32_t)(EDX));
  /* 11ba788e call 0x11ba4390 */
  push32(0x11ba7893u); f_11ba4390();
  /* 11ba7893 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7898 je 0x11ba78c5 */
  if (C.zf) goto L_11ba78c5;
  /* 11ba789a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ba78a0 push eax */
  push32((uint32_t)(EAX));
  /* 11ba78a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba78a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba78a5 call 0x11ba7950 */
  push32(0x11ba78aau); f_11ba7950();
  /* 11ba78aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba78ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba78af je 0x11ba78bc */
  if (C.zf) goto L_11ba78bc;
  /* 11ba78b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba78b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba78b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba78ba jmp 0x11ba78c3 */
  goto L_11ba78c3;
L_11ba78bc:;
  /* 11ba78bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11ba78c3:;
  /* 11ba78c3 jmp 0x11ba78ce */
  goto L_11ba78ce;
L_11ba78c5:;
  /* 11ba78c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba78c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba78cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba78ce:;
  /* 11ba78ce jmp 0x11ba7865 */
  goto L_11ba7865;
L_11ba78d0:;
  /* 11ba78d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba78d4 je 0x11ba78fb */
  if (C.zf) goto L_11ba78fb;
  /* 11ba78d6 call 0x11ba7af0 */
  push32(0x11ba78dbu); f_11ba7af0();
  /* 11ba78db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba78de push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba78e0 mov ecx, dword ptr [0x11bccafc] */
  ECX = (r32((uint32_t)(0x11bccafc)));
  /* 11ba78e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba78e7 call 0x11b9b260 */
  push32(0x11ba78ecu); f_11b9b260();
  /* 11ba78ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba78ef mov dword ptr [0x11bccafc], 0 */
  w32((uint32_t)(0x11bccafc), (0x0u));
  /* 11ba78f9 jmp 0x11ba7921 */
  goto L_11ba7921;
L_11ba78fb:;
  /* 11ba78fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba78ff je 0x11ba790e */
  if (C.zf) goto L_11ba790e;
  /* 11ba7901 call 0x11ba7af0 */
  push32(0x11ba7906u); f_11ba7af0();
  /* 11ba7906 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11ba790c jmp 0x11ba7918 */
  goto L_11ba7918;
L_11ba790e:;
  /* 11ba790e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11ba7918:;
  /* 11ba7918 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11ba791e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ba7921:;
  /* 11ba7921 jmp 0x11ba792b */
  goto L_11ba792b;
L_11ba7923:;
  /* 11ba7923 call 0x11ba7af0 */
  push32(0x11ba7928u); f_11ba7af0();
  /* 11ba7928 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba792b:;
  /* 11ba792b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba792f je 0x11ba7948 */
  if (C.zf) goto L_11ba7948;
  /* 11ba7931 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba7933 call 0x11b9a770 */
  push32(0x11ba7938u); f_11b9a770();
  /* 11ba7938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba793b mov eax, dword ptr [0x11bce6ec] */
  EAX = (r32((uint32_t)(0x11bce6ec)));
  /* 11ba7940 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7943 mov dword ptr [0x11bce6ec], eax */
  w32((uint32_t)(0x11bce6ec), (EAX));
L_11ba7948:;
  /* 11ba7948 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ba794b:;
  /* 11ba794b mov esp, ebp */
  ESP = (EBP);
  /* 11ba794d pop ebp */
  EBP = (pop32());
  /* 11ba794e ret  */
  ESPCHK(0x11ba7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10017950 @ 0x11ba7950 (403 bytes, 117 insns) */
void f_11ba7950(void) {
  FTRACE(0x11ba7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7950 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7951 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7953 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba795c push eax */
  push32((uint32_t)(EAX));
  /* 11ba795d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11ba7963 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7964 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11ba796a push edx */
  push32((uint32_t)(EDX));
  /* 11ba796b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11ba7971 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7972 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7975 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7976 call 0x11ba7bf0 */
  push32(0x11ba797bu); f_11ba7bf0();
  /* 11ba797b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba797e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7980 jne 0x11ba7989 */
  if (!C.zf) goto L_11ba7989;
  /* 11ba7982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7984 jmp 0x11ba7adf */
  goto L_11ba7adf;
L_11ba7989:;
  /* 11ba7989 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11ba798e push 0x11bc9454 */
  push32((uint32_t)(0x11bc9454u));
  /* 11ba7993 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7995 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11ba799b push edx */
  push32((uint32_t)(EDX));
  /* 11ba799c call 0x11b9fe80 */
  push32(0x11ba79a1u); f_11b9fe80();
  /* 11ba79a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba79a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba79a7 push eax */
  push32((uint32_t)(EAX));
  /* 11ba79a8 call 0x11b9a7d0 */
  push32(0x11ba79adu); f_11b9a7d0();
  /* 11ba79ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba79b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba79b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba79b7 jne 0x11ba79c0 */
  if (!C.zf) goto L_11ba79c0;
  /* 11ba79b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba79bb jmp 0x11ba7adf */
  goto L_11ba7adf;
L_11ba79c0:;
  /* 11ba79c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba79c3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba79c6 mov ecx, dword ptr [eax + 0x11bccafc] */
  ECX = (r32((uint32_t)(EAX + 0x11bccafc)));
  /* 11ba79cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba79cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba79d2 mov eax, dword ptr [edx*4 + 0x11bce634] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bce634)));
  /* 11ba79d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba79dc push 6 */
  push32((uint32_t)(0x6u));
  /* 11ba79de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba79e1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba79e4 add ecx, 0x11bce674 */
  { uint32_t _a=(ECX),_b=(0x11bce674u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba79ea push ecx */
  push32((uint32_t)(ECX));
  /* 11ba79eb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ba79ee push edx */
  push32((uint32_t)(EDX));
  /* 11ba79ef call 0x11ba6240 */
  push32(0x11ba79f4u); f_11ba6240();
  /* 11ba79f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba79f7 mov eax, dword ptr [0x11bce64c] */
  EAX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba79fc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba79ff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11ba7a05 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7a06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba7a09 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7a0a call 0x11ba0000 */
  push32(0x11ba7a0fu); f_11ba0000();
  /* 11ba7a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7a12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7a15 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7a18 mov dword ptr [ecx + 0x11bccafc], eax */
  w32((uint32_t)(ECX + 0x11bccafc), (EAX));
  /* 11ba7a1e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11ba7a24 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba7a2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7a2d mov dword ptr [eax*4 + 0x11bce634], edx */
  w32((uint32_t)(EAX*4 + 0x11bce634), (EDX));
  /* 11ba7a34 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ba7a36 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11ba7a3c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7a3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7a40 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7a43 add edx, 0x11bce674 */
  { uint32_t _a=(EDX),_b=(0x11bce674u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7a49 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7a4a call 0x11ba6240 */
  push32(0x11ba7a4fu); f_11ba6240();
  /* 11ba7a4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7a52 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7a56 jne 0x11ba7a63 */
  if (!C.zf) goto L_11ba7a63;
  /* 11ba7a58 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba7a5e mov dword ptr [0x11bce64c], eax */
  w32((uint32_t)(0x11bce64c), (EAX));
L_11ba7a63:;
  /* 11ba7a63 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7a67 jne 0x11ba7a75 */
  if (!C.zf) goto L_11ba7a75;
  /* 11ba7a69 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ba7a6f mov dword ptr [0x11bce650], ecx */
  w32((uint32_t)(0x11bce650), (ECX));
L_11ba7a75:;
  /* 11ba7a75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7a78 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7a7b call dword ptr [edx + 0x11bccb00] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11bccb00))), 0x11ba7a81u);
  /* 11ba7a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7a83 je 0x11ba7abc */
  if (C.zf) goto L_11ba7abc;
  /* 11ba7a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7a88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7a8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7a8e mov dword ptr [eax + 0x11bccafc], ecx */
  w32((uint32_t)(EAX + 0x11bccafc), (ECX));
  /* 11ba7a94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7a96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba7a99 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7a9a call 0x11b9b260 */
  push32(0x11ba7a9fu); f_11b9b260();
  /* 11ba7a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7aa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7aa8 mov dword ptr [eax*4 + 0x11bce634], ecx */
  w32((uint32_t)(EAX*4 + 0x11bce634), (ECX));
  /* 11ba7aaf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba7ab2 mov dword ptr [0x11bce64c], edx */
  w32((uint32_t)(0x11bce64c), (EDX));
  /* 11ba7ab8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7aba jmp 0x11ba7adf */
  goto L_11ba7adf;
L_11ba7abc:;
  /* 11ba7abc cmp dword ptr [ebp - 0xc], 0x11bcc9ec */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11bcc9ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7ac3 je 0x11ba7ad3 */
  if (C.zf) goto L_11ba7ad3;
  /* 11ba7ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7ac7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7aca push eax */
  push32((uint32_t)(EAX));
  /* 11ba7acb call 0x11b9b260 */
  push32(0x11ba7ad0u); f_11b9b260();
  /* 11ba7ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7ad3:;
  /* 11ba7ad3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7ad6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7ad9 mov eax, dword ptr [ecx + 0x11bccafc] */
  EAX = (r32((uint32_t)(ECX + 0x11bccafc)));
L_11ba7adf:;
  /* 11ba7adf mov esp, ebp */
  ESP = (EBP);
  /* 11ba7ae1 pop ebp */
  EBP = (pop32());
  /* 11ba7ae2 ret  */
  ESPCHK(0x11ba7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10017af0 @ 0x11ba7af0 (256 bytes, 72 insns) */
void f_11ba7af0(void) {
  FTRACE(0x11ba7af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7af1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7af6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ba7afd cmp dword ptr [0x11bccafc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bccafc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7b04 jne 0x11ba7b24 */
  if (!C.zf) goto L_11ba7b24;
  /* 11ba7b06 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11ba7b0b push 0x11bc9454 */
  push32((uint32_t)(0x11bc9454u));
  /* 11ba7b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7b12 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11ba7b17 call 0x11b9a7d0 */
  push32(0x11ba7b1cu); f_11b9a7d0();
  /* 11ba7b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7b1f mov dword ptr [0x11bccafc], eax */
  w32((uint32_t)(0x11bccafc), (EAX));
L_11ba7b24:;
  /* 11ba7b24 mov eax, dword ptr [0x11bccafc] */
  EAX = (r32((uint32_t)(0x11bccafc)));
  /* 11ba7b29 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ba7b2c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba7b33 jmp 0x11ba7b3e */
  goto L_11ba7b3e;
L_11ba7b35:;
  /* 11ba7b35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7b38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7b3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba7b3e:;
  /* 11ba7b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7b41 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7b44 mov eax, dword ptr [edx + 0x11bccafc] */
  EAX = (r32((uint32_t)(EDX + 0x11bccafc)));
  /* 11ba7b4a push eax */
  push32((uint32_t)(EAX));
  /* 11ba7b4b push 0x11bc9460 */
  push32((uint32_t)(0x11bc9460u));
  /* 11ba7b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7b53 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7b56 mov edx, dword ptr [ecx + 0x11bccaf8] */
  EDX = (r32((uint32_t)(ECX + 0x11bccaf8)));
  /* 11ba7b5c push edx */
  push32((uint32_t)(EDX));
  /* 11ba7b5d push 3 */
  push32((uint32_t)(0x3u));
  /* 11ba7b5f mov eax, dword ptr [0x11bccafc] */
  EAX = (r32((uint32_t)(0x11bccafc)));
  /* 11ba7b64 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7b65 call 0x11ba7d90 */
  push32(0x11ba7b6au); f_11ba7d90();
  /* 11ba7b6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7b6d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7b71 jge 0x11ba7bb9 */
  if ((C.sf==C.of)) goto L_11ba7bb9;
  /* 11ba7b73 push 0x11bc944c */
  push32((uint32_t)(0x11bc944cu));
  /* 11ba7b78 mov ecx, dword ptr [0x11bccafc] */
  ECX = (r32((uint32_t)(0x11bccafc)));
  /* 11ba7b7e push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7b7f call 0x11ba0010 */
  push32(0x11ba7b84u); f_11ba0010();
  /* 11ba7b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7b87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7b8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7b8d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7b90 mov eax, dword ptr [edx + 0x11bccafc] */
  EAX = (r32((uint32_t)(EDX + 0x11bccafc)));
  /* 11ba7b96 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7b9a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba7b9d mov edx, dword ptr [ecx + 0x11bccafc] */
  EDX = (r32((uint32_t)(ECX + 0x11bccafc)));
  /* 11ba7ba3 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7ba4 call 0x11ba4390 */
  push32(0x11ba7ba9u); f_11ba4390();
  /* 11ba7ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7bae je 0x11ba7bb7 */
  if (C.zf) goto L_11ba7bb7;
  /* 11ba7bb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ba7bb7:;
  /* 11ba7bb7 jmp 0x11ba7be7 */
  goto L_11ba7be7;
L_11ba7bb9:;
  /* 11ba7bb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7bbd jne 0x11ba7bc6 */
  if (!C.zf) goto L_11ba7bc6;
  /* 11ba7bbf mov eax, dword ptr [0x11bccafc] */
  EAX = (r32((uint32_t)(0x11bccafc)));
  /* 11ba7bc4 jmp 0x11ba7bec */
  goto L_11ba7bec;
L_11ba7bc6:;
  /* 11ba7bc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7bc8 mov eax, dword ptr [0x11bccafc] */
  EAX = (r32((uint32_t)(0x11bccafc)));
  /* 11ba7bcd push eax */
  push32((uint32_t)(EAX));
  /* 11ba7bce call 0x11b9b260 */
  push32(0x11ba7bd3u); f_11b9b260();
  /* 11ba7bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7bd6 mov dword ptr [0x11bccafc], 0 */
  w32((uint32_t)(0x11bccafc), (0x0u));
  /* 11ba7be0 mov eax, dword ptr [0x11bccb14] */
  EAX = (r32((uint32_t)(0x11bccb14)));
  /* 11ba7be5 jmp 0x11ba7bec */
  goto L_11ba7bec;
L_11ba7be7:;
  /* 11ba7be7 jmp 0x11ba7b35 */
  goto L_11ba7b35;
L_11ba7bec:;
  /* 11ba7bec mov esp, ebp */
  ESP = (EBP);
  /* 11ba7bee pop ebp */
  EBP = (pop32());
  /* 11ba7bef ret  */
  ESPCHK(0x11ba7af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017bf0 @ 0x11ba7bf0 (388 bytes, 115 insns) */
void f_11ba7bf0(void) {
  FTRACE(0x11ba7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7bf3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7bf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7bfd jne 0x11ba7c06 */
  if (!C.zf) goto L_11ba7c06;
  /* 11ba7bff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7c01 jmp 0x11ba7d70 */
  goto L_11ba7d70;
L_11ba7c06:;
  /* 11ba7c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7c09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba7c0c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7c0f jne 0x11ba7c60 */
  if (!C.zf) goto L_11ba7c60;
  /* 11ba7c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7c14 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ba7c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7c1a jne 0x11ba7c60 */
  if (!C.zf) goto L_11ba7c60;
  /* 11ba7c1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7c1f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11ba7c22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7c25 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11ba7c29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7c2d je 0x11ba7c49 */
  if (C.zf) goto L_11ba7c49;
  /* 11ba7c2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7c32 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11ba7c37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7c3a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11ba7c40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7c43 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11ba7c49:;
  /* 11ba7c49 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7c4d je 0x11ba7c58 */
  if (C.zf) goto L_11ba7c58;
  /* 11ba7c4f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba7c52 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ba7c58:;
  /* 11ba7c58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7c5b jmp 0x11ba7d70 */
  goto L_11ba7d70;
L_11ba7c60:;
  /* 11ba7c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7c63 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7c64 push 0x11bcca74 */
  push32((uint32_t)(0x11bcca74u));
  /* 11ba7c69 call 0x11ba4390 */
  push32(0x11ba7c6eu); f_11ba4390();
  /* 11ba7c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7c73 je 0x11ba7d28 */
  if (C.zf) goto L_11ba7d28;
  /* 11ba7c79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7c7c push edx */
  push32((uint32_t)(EDX));
  /* 11ba7c7d push 0x11bcc9f0 */
  push32((uint32_t)(0x11bcc9f0u));
  /* 11ba7c82 call 0x11ba4390 */
  push32(0x11ba7c87u); f_11ba4390();
  /* 11ba7c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7c8c je 0x11ba7d28 */
  if (C.zf) goto L_11ba7d28;
  /* 11ba7c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7c95 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7c96 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11ba7c9c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7c9d call 0x11ba7de0 */
  push32(0x11ba7ca2u); f_11ba7de0();
  /* 11ba7ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7ca7 je 0x11ba7cb0 */
  if (C.zf) goto L_11ba7cb0;
  /* 11ba7ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7cab jmp 0x11ba7d70 */
  goto L_11ba7d70;
L_11ba7cb0:;
  /* 11ba7cb0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11ba7cb6 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7cb7 push 0x11bce628 */
  push32((uint32_t)(0x11bce628u));
  /* 11ba7cbc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11ba7cc2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7cc3 call 0x11babb90 */
  push32(0x11ba7cc8u); f_11babb90();
  /* 11ba7cc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7ccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7ccd jne 0x11ba7cd6 */
  if (!C.zf) goto L_11ba7cd6;
  /* 11ba7ccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7cd1 jmp 0x11ba7d70 */
  goto L_11ba7d70;
L_11ba7cd6:;
  /* 11ba7cd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba7cd8 mov cx, word ptr [0x11bce62c] */
  CX = (r16((uint32_t)(0x11bce62c)));
  /* 11ba7cdf mov dword ptr [0x11bce630], ecx */
  w32((uint32_t)(0x11bce630), (ECX));
  /* 11ba7ce5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11ba7ceb push edx */
  push32((uint32_t)(EDX));
  /* 11ba7cec push 0x11bcca74 */
  push32((uint32_t)(0x11bcca74u));
  /* 11ba7cf1 call 0x11ba7f40 */
  push32(0x11ba7cf6u); f_11ba7f40();
  /* 11ba7cf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7cfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba7cff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba7d01 je 0x11ba7d16 */
  if (C.zf) goto L_11ba7d16;
  /* 11ba7d03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7d06 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7d07 push 0x11bcc9f0 */
  push32((uint32_t)(0x11bcc9f0u));
  /* 11ba7d0c call 0x11ba0000 */
  push32(0x11ba7d11u); f_11ba0000();
  /* 11ba7d11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7d14 jmp 0x11ba7d28 */
  goto L_11ba7d28;
L_11ba7d16:;
  /* 11ba7d16 push 0x11bcca74 */
  push32((uint32_t)(0x11bcca74u));
  /* 11ba7d1b push 0x11bcc9f0 */
  push32((uint32_t)(0x11bcc9f0u));
  /* 11ba7d20 call 0x11ba0000 */
  push32(0x11ba7d25u); f_11ba0000();
  /* 11ba7d25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7d28:;
  /* 11ba7d28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7d2c je 0x11ba7d41 */
  if (C.zf) goto L_11ba7d41;
  /* 11ba7d2e push 6 */
  push32((uint32_t)(0x6u));
  /* 11ba7d30 push 0x11bce628 */
  push32((uint32_t)(0x11bce628u));
  /* 11ba7d35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba7d38 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7d39 call 0x11ba6240 */
  push32(0x11ba7d3eu); f_11ba6240();
  /* 11ba7d3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7d41:;
  /* 11ba7d41 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7d45 je 0x11ba7d5a */
  if (C.zf) goto L_11ba7d5a;
  /* 11ba7d47 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba7d49 push 0x11bce630 */
  push32((uint32_t)(0x11bce630u));
  /* 11ba7d4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba7d51 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7d52 call 0x11ba6240 */
  push32(0x11ba7d57u); f_11ba6240();
  /* 11ba7d57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7d5a:;
  /* 11ba7d5a push 0x11bcca74 */
  push32((uint32_t)(0x11bcca74u));
  /* 11ba7d5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7d62 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7d63 call 0x11ba0000 */
  push32(0x11ba7d68u); f_11ba0000();
  /* 11ba7d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7d6b mov eax, 0x11bcca74 */
  EAX = (0x11bcca74u);
L_11ba7d70:;
  /* 11ba7d70 mov esp, ebp */
  ESP = (EBP);
  /* 11ba7d72 pop ebp */
  EBP = (pop32());
  /* 11ba7d73 ret  */
  ESPCHK(0x11ba7bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d80 @ 0x11ba7d80 (7 bytes, 5 insns) */
void f_11ba7d80(void) {
  FTRACE(0x11ba7d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7d81 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7d85 pop ebp */
  EBP = (pop32());
  /* 11ba7d86 ret  */
  ESPCHK(0x11ba7d80u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11ba7d90 (79 bytes, 28 insns) */
void f_11ba7d90(void) {
  FTRACE(0x11ba7d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7d91 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7d96 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ba7d99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba7d9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba7da3 jmp 0x11ba7dae */
  goto L_11ba7dae;
L_11ba7da5:;
  /* 11ba7da5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba7da8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7dab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ba7dae:;
  /* 11ba7dae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba7db1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7db4 jge 0x11ba7dd4 */
  if ((C.sf==C.of)) goto L_11ba7dd4;
  /* 11ba7db6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7db9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7dbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba7dbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7dc2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ba7dc5 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7dc9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7dca call 0x11ba0010 */
  push32(0x11ba7dcfu); f_11ba0010();
  /* 11ba7dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7dd2 jmp 0x11ba7da5 */
  goto L_11ba7da5;
L_11ba7dd4:;
  /* 11ba7dd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba7ddb mov esp, ebp */
  ESP = (EBP);
  /* 11ba7ddd pop ebp */
  EBP = (pop32());
  /* 11ba7dde ret  */
  ESPCHK(0x11ba7d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10017de0 @ 0x11ba7de0 (349 bytes, 122 insns) */
void f_11ba7de0(void) {
  FTRACE(0x11ba7de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7de1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7de3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba7de6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11ba7deb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7df0 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7df1 call 0x11ba1d00 */
  push32(0x11ba7df6u); f_11ba1d00();
  /* 11ba7df6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7df9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7dfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba7dff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba7e01 jne 0x11ba7e0a */
  if (!C.zf) goto L_11ba7e0a;
  /* 11ba7e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7e05 jmp 0x11ba7f39 */
  goto L_11ba7f39;
L_11ba7e0a:;
  /* 11ba7e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7e0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba7e10 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7e13 jne 0x11ba7e40 */
  if (!C.zf) goto L_11ba7e40;
  /* 11ba7e15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7e18 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ba7e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7e1e je 0x11ba7e40 */
  if (C.zf) goto L_11ba7e40;
  /* 11ba7e20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7e23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7e26 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7e27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7e2a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7e30 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7e31 call 0x11ba0000 */
  push32(0x11ba7e36u); f_11ba0000();
  /* 11ba7e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7e3b jmp 0x11ba7f39 */
  goto L_11ba7f39;
L_11ba7e40:;
  /* 11ba7e40 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba7e47 jmp 0x11ba7e52 */
  goto L_11ba7e52;
L_11ba7e49:;
  /* 11ba7e49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba7e4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7e4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba7e52:;
  /* 11ba7e52 push 0x11bc9464 */
  push32((uint32_t)(0x11bc9464u));
  /* 11ba7e57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7e5a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7e5b call 0x11babad0 */
  push32(0x11ba7e60u); f_11babad0();
  /* 11ba7e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7e63 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba7e66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7e6a jne 0x11ba7e74 */
  if (!C.zf) goto L_11ba7e74;
  /* 11ba7e6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7e6f jmp 0x11ba7f39 */
  goto L_11ba7f39;
L_11ba7e74:;
  /* 11ba7e74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7e77 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7e7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba7e7c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ba7e7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7e83 jne 0x11ba7eaa */
  if (!C.zf) goto L_11ba7eaa;
  /* 11ba7e85 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7e89 jge 0x11ba7eaa */
  if ((C.sf==C.of)) goto L_11ba7eaa;
  /* 11ba7e8b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ba7e8f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7e92 je 0x11ba7eaa */
  if (C.zf) goto L_11ba7eaa;
  /* 11ba7e94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7e97 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7e98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7e9b push eax */
  push32((uint32_t)(EAX));
  /* 11ba7e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7ea0 call 0x11ba0870 */
  push32(0x11ba7ea5u); f_11ba0870();
  /* 11ba7ea5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7ea8 jmp 0x11ba7f10 */
  goto L_11ba7f10;
L_11ba7eaa:;
  /* 11ba7eaa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7eae jne 0x11ba7ed8 */
  if (!C.zf) goto L_11ba7ed8;
  /* 11ba7eb0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7eb4 jge 0x11ba7ed8 */
  if ((C.sf==C.of)) goto L_11ba7ed8;
  /* 11ba7eb6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ba7eba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7ebd je 0x11ba7ed8 */
  if (C.zf) goto L_11ba7ed8;
  /* 11ba7ebf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7ec2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7ec3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7ec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7eca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7ecd push edx */
  push32((uint32_t)(EDX));
  /* 11ba7ece call 0x11ba0870 */
  push32(0x11ba7ed3u); f_11ba0870();
  /* 11ba7ed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7ed6 jmp 0x11ba7f10 */
  goto L_11ba7f10;
L_11ba7ed8:;
  /* 11ba7ed8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7edc jne 0x11ba7f0b */
  if (!C.zf) goto L_11ba7f0b;
  /* 11ba7ede movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ba7ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7ee4 je 0x11ba7eef */
  if (C.zf) goto L_11ba7eef;
  /* 11ba7ee6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ba7eea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7eed jne 0x11ba7f0b */
  if (!C.zf) goto L_11ba7f0b;
L_11ba7eef:;
  /* 11ba7eef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7ef2 push edx */
  push32((uint32_t)(EDX));
  /* 11ba7ef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7ef6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7ef7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7efa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7f00 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7f01 call 0x11ba0870 */
  push32(0x11ba7f06u); f_11ba0870();
  /* 11ba7f06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7f09 jmp 0x11ba7f10 */
  goto L_11ba7f10;
L_11ba7f0b:;
  /* 11ba7f0b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba7f0e jmp 0x11ba7f39 */
  goto L_11ba7f39;
L_11ba7f10:;
  /* 11ba7f10 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ba7f14 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7f17 jne 0x11ba7f1b */
  if (!C.zf) goto L_11ba7f1b;
  /* 11ba7f19 jmp 0x11ba7f37 */
  goto L_11ba7f37;
L_11ba7f1b:;
  /* 11ba7f1b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ba7f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7f21 jne 0x11ba7f25 */
  if (!C.zf) goto L_11ba7f25;
  /* 11ba7f23 jmp 0x11ba7f37 */
  goto L_11ba7f37;
L_11ba7f25:;
  /* 11ba7f25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba7f28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7f2b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11ba7f2f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ba7f32 jmp 0x11ba7e49 */
  goto L_11ba7e49;
L_11ba7f37:;
  /* 11ba7f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba7f39:;
  /* 11ba7f39 mov esp, ebp */
  ESP = (EBP);
  /* 11ba7f3b pop ebp */
  EBP = (pop32());
  /* 11ba7f3c ret  */
  ESPCHK(0x11ba7de0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11ba7f40 (101 bytes, 36 insns) */
void f_11ba7f40(void) {
  FTRACE(0x11ba7f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7f41 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7f43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7f46 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7f4a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7f4b call 0x11ba0000 */
  push32(0x11ba7f50u); f_11ba0000();
  /* 11ba7f50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7f56 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11ba7f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7f5c je 0x11ba7f78 */
  if (C.zf) goto L_11ba7f78;
  /* 11ba7f5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7f61 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7f64 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba7f65 push 0x11bc946c */
  push32((uint32_t)(0x11bc946cu));
  /* 11ba7f6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7f6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7f6f push edx */
  push32((uint32_t)(EDX));
  /* 11ba7f70 call 0x11ba7d90 */
  push32(0x11ba7f75u); f_11ba7d90();
  /* 11ba7f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7f78:;
  /* 11ba7f78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7f7b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11ba7f82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba7f84 je 0x11ba7fa3 */
  if (C.zf) goto L_11ba7fa3;
  /* 11ba7f86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba7f89 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7f8f push edx */
  push32((uint32_t)(EDX));
  /* 11ba7f90 push 0x11bc9468 */
  push32((uint32_t)(0x11bc9468u));
  /* 11ba7f95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba7f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba7f9a push eax */
  push32((uint32_t)(EAX));
  /* 11ba7f9b call 0x11ba7d90 */
  push32(0x11ba7fa0u); f_11ba7d90();
  /* 11ba7fa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba7fa3:;
  /* 11ba7fa3 pop ebp */
  EBP = (pop32());
  /* 11ba7fa4 ret  */
  ESPCHK(0x11ba7f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fb0 @ 0x11ba7fb0 (727 bytes, 263 insns) */
void f_11ba7fb0(void) {
  FTRACE(0x11ba7fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba7fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba7fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba7fb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ba7fb5 push 0x11bc9470 */
  push32((uint32_t)(0x11bc9470u));
  /* 11ba7fba push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11ba7fbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ba7fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11ba7fc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ba7fcd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba7fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba7fd1 push esi */
  push32((uint32_t)(ESI));
  /* 11ba7fd2 push edi */
  push32((uint32_t)(EDI));
  /* 11ba7fd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ba7fd6 cmp dword ptr [0x11bce654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba7fdd jne 0x11ba8036 */
  if (!C.zf) goto L_11ba8036;
  /* 11ba7fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba7fe5 push 0x11bc93fc */
  push32((uint32_t)(0x11bc93fcu));
  /* 11ba7fea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba7fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba7ff1 call dword ptr [0x11bd0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0344))), 0x11ba7ff7u);
  /* 11ba7ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba7ff9 je 0x11ba8007 */
  if (C.zf) goto L_11ba8007;
  /* 11ba7ffb mov dword ptr [0x11bce654], 1 */
  w32((uint32_t)(0x11bce654), (0x1u));
  /* 11ba8005 jmp 0x11ba8036 */
  goto L_11ba8036;
L_11ba8007:;
  /* 11ba8007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8009 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba800b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba800d push 0x11bc93f8 */
  push32((uint32_t)(0x11bc93f8u));
  /* 11ba8012 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba8017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8019 call dword ptr [0x11bd0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0348))), 0x11ba801fu);
  /* 11ba801f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba8021 je 0x11ba802f */
  if (C.zf) goto L_11ba802f;
  /* 11ba8023 mov dword ptr [0x11bce654], 2 */
  w32((uint32_t)(0x11bce654), (0x2u));
  /* 11ba802d jmp 0x11ba8036 */
  goto L_11ba8036;
L_11ba802f:;
  /* 11ba802f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8031 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba8036:;
  /* 11ba8036 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba803a jle 0x11ba804f */
  if ((C.zf||C.sf!=C.of)) goto L_11ba804f;
  /* 11ba803c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba803f push eax */
  push32((uint32_t)(EAX));
  /* 11ba8040 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8043 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8044 call 0x11ba82c0 */
  push32(0x11ba8049u); f_11ba82c0();
  /* 11ba8049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba804c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11ba804f:;
  /* 11ba804f cmp dword ptr [0x11bce654], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce654))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8056 jne 0x11ba807b */
  if (!C.zf) goto L_11ba807b;
  /* 11ba8058 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba805b push edx */
  push32((uint32_t)(EDX));
  /* 11ba805c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba805f push eax */
  push32((uint32_t)(EAX));
  /* 11ba8060 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba8063 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8064 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8067 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba806b push eax */
  push32((uint32_t)(EAX));
  /* 11ba806c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba806f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8070 call dword ptr [0x11bd0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0348))), 0x11ba8076u);
  /* 11ba8076 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba807b:;
  /* 11ba807b cmp dword ptr [0x11bce654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8082 jne 0x11ba829f */
  if (!C.zf) goto L_11ba829f;
  /* 11ba8088 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba808c jne 0x11ba8097 */
  if (!C.zf) goto L_11ba8097;
  /* 11ba808e mov edx, dword ptr [0x11bce64c] */
  EDX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba8094 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11ba8097:;
  /* 11ba8097 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8099 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba809b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba809e push eax */
  push32((uint32_t)(EAX));
  /* 11ba809f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba80a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba80a3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ba80a6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba80a8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba80aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba80ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba80b0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba80b1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba80b4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba80b5 call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11ba80bbu);
  /* 11ba80bb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ba80be cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba80c2 jne 0x11ba80cb */
  if (!C.zf) goto L_11ba80cb;
  /* 11ba80c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba80c6 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba80cb:;
  /* 11ba80cb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba80d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba80d5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba80d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba80da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ba80dc call 0x11ba01f0 */
  push32(0x11ba80e1u); f_11ba01f0();
  /* 11ba80e1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11ba80e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ba80e7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba80ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ba80ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ba80f4 jmp 0x11ba810d */
  goto L_11ba810d;
  /* 11ba80f6 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba80fb ret  */
  ESPCHK(0x11ba7fb0u, _esp0);
  ESP += 4; return;
  /* 11ba80fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba80ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ba8106 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ba810d:;
  /* 11ba810d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8111 jne 0x11ba811a */
  if (!C.zf) goto L_11ba811a;
  /* 11ba8113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8115 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba811a:;
  /* 11ba811a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba811d push edx */
  push32((uint32_t)(EDX));
  /* 11ba811e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba8121 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8122 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba8125 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8126 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8129 push edx */
  push32((uint32_t)(EDX));
  /* 11ba812a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba812c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba812f push eax */
  push32((uint32_t)(EAX));
  /* 11ba8130 call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11ba8136u);
  /* 11ba8136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba8138 jne 0x11ba8141 */
  if (!C.zf) goto L_11ba8141;
  /* 11ba813a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba813c jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba8141:;
  /* 11ba8141 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8143 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8145 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba8148 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8149 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba814c push edx */
  push32((uint32_t)(EDX));
  /* 11ba814d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba8150 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8151 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8154 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8155 call dword ptr [0x11bd0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0344))), 0x11ba815bu);
  /* 11ba815b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba815e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8162 jne 0x11ba816b */
  if (!C.zf) goto L_11ba816b;
  /* 11ba8164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8166 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba816b:;
  /* 11ba816b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba816e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8174 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba8176 je 0x11ba81bb */
  if (C.zf) goto L_11ba81bb;
  /* 11ba8178 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba817c je 0x11ba81b6 */
  if (C.zf) goto L_11ba81b6;
  /* 11ba817e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba8181 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8184 jle 0x11ba818d */
  if ((C.zf||C.sf!=C.of)) goto L_11ba818d;
  /* 11ba8186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8188 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba818d:;
  /* 11ba818d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba8190 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8191 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba8194 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8195 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba8198 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8199 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba819c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba819d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba81a0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba81a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba81a4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba81a5 call dword ptr [0x11bd0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0344))), 0x11ba81abu);
  /* 11ba81ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba81ad jne 0x11ba81b6 */
  if (!C.zf) goto L_11ba81b6;
  /* 11ba81af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba81b1 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba81b6:;
  /* 11ba81b6 jmp 0x11ba829a */
  goto L_11ba829a;
L_11ba81bb:;
  /* 11ba81bb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba81be mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ba81c1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba81c8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba81cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba81cd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba81d0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ba81d2 call 0x11ba01f0 */
  push32(0x11ba81d7u); f_11ba01f0();
  /* 11ba81d7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11ba81da mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ba81dd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba81e0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ba81e3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ba81ea jmp 0x11ba8203 */
  goto L_11ba8203;
  /* 11ba81ec mov eax, 1 */
  EAX = (0x1u);
  /* 11ba81f1 ret  */
  ESPCHK(0x11ba7fb0u, _esp0);
  ESP += 4; return;
  /* 11ba81f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba81f5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ba81fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ba8203:;
  /* 11ba8203 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8207 jne 0x11ba8210 */
  if (!C.zf) goto L_11ba8210;
  /* 11ba8209 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba820b jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba8210:;
  /* 11ba8210 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba8213 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8214 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba8217 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8218 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba821b push edx */
  push32((uint32_t)(EDX));
  /* 11ba821c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba821f push eax */
  push32((uint32_t)(EAX));
  /* 11ba8220 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba8223 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8227 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8228 call dword ptr [0x11bd0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0344))), 0x11ba822eu);
  /* 11ba822e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba8230 jne 0x11ba8236 */
  if (!C.zf) goto L_11ba8236;
  /* 11ba8232 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8234 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba8236:;
  /* 11ba8236 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba823a jne 0x11ba826a */
  if (!C.zf) goto L_11ba826a;
  /* 11ba823c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba823e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8240 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8242 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba8244 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba8247 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8248 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba824b push ecx */
  push32((uint32_t)(ECX));
  /* 11ba824c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ba8251 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba8254 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8255 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11ba825bu);
  /* 11ba825b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba825e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8262 jne 0x11ba8268 */
  if (!C.zf) goto L_11ba8268;
  /* 11ba8264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8266 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba8268:;
  /* 11ba8268 jmp 0x11ba829a */
  goto L_11ba829a;
L_11ba826a:;
  /* 11ba826a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba826c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba826e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba8271 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8272 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba8275 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8276 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba8279 push edx */
  push32((uint32_t)(EDX));
  /* 11ba827a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba827d push eax */
  push32((uint32_t)(EAX));
  /* 11ba827e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ba8283 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba8286 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8287 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11ba828du);
  /* 11ba828d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba8290 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8294 jne 0x11ba829a */
  if (!C.zf) goto L_11ba829a;
  /* 11ba8296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8298 jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba829a:;
  /* 11ba829a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba829d jmp 0x11ba82a1 */
  goto L_11ba82a1;
L_11ba829f:;
  /* 11ba829f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba82a1:;
  /* 11ba82a1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11ba82a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba82a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ba82ae pop edi */
  EDI = (pop32());
  /* 11ba82af pop esi */
  ESI = (pop32());
  /* 11ba82b0 pop ebx */
  EBX = (pop32());
  /* 11ba82b1 mov esp, ebp */
  ESP = (EBP);
  /* 11ba82b3 pop ebp */
  EBP = (pop32());
  /* 11ba82b4 ret  */
  ESPCHK(0x11ba7fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100182c0 @ 0x11ba82c0 (80 bytes, 32 insns) */
void f_11ba82c0(void) {
  FTRACE(0x11ba82c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba82c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba82c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba82c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba82c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba82c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba82cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba82cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba82d2:;
  /* 11ba82d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba82d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba82d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba82db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba82de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba82e0 je 0x11ba82f7 */
  if (C.zf) goto L_11ba82f7;
  /* 11ba82e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba82e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba82e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba82ea je 0x11ba82f7 */
  if (C.zf) goto L_11ba82f7;
  /* 11ba82ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba82ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba82f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba82f5 jmp 0x11ba82d2 */
  goto L_11ba82d2;
L_11ba82f7:;
  /* 11ba82f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba82fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba82fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba82ff jne 0x11ba8309 */
  if (!C.zf) goto L_11ba8309;
  /* 11ba8301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8304 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8307 jmp 0x11ba830c */
  goto L_11ba830c;
L_11ba8309:;
  /* 11ba8309 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ba830c:;
  /* 11ba830c mov esp, ebp */
  ESP = (EBP);
  /* 11ba830e pop ebp */
  EBP = (pop32());
  /* 11ba830f ret  */
  ESPCHK(0x11ba82c0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11ba8310 (62 bytes, 23 insns) */
void f_11ba8310(void) {
  FTRACE(0x11ba8310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba8310 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba8311 mov ebp, esp */
  EBP = (ESP);
  /* 11ba8313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8316 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba831d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8320 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba8326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8329 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba832c jb 0x11ba8336 */
  if (C.cf) goto L_11ba8336;
  /* 11ba832e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8331 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8334 jae 0x11ba833f */
  if (!C.cf) goto L_11ba833f;
L_11ba8336:;
  /* 11ba8336 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba8339 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba833c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba833f:;
  /* 11ba833f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8342 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8345 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba8347 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba834a mov esp, ebp */
  ESP = (EBP);
  /* 11ba834c pop ebp */
  EBP = (pop32());
  /* 11ba834d ret  */
  ESPCHK(0x11ba8310u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11ba8350 (173 bytes, 66 insns) */
void f_11ba8350(void) {
  FTRACE(0x11ba8350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba8350 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba8351 mov ebp, esp */
  EBP = (ESP);
  /* 11ba8353 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8359 push eax */
  push32((uint32_t)(EAX));
  /* 11ba835a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba835d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba835f push edx */
  push32((uint32_t)(EDX));
  /* 11ba8360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8363 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba8365 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8366 call 0x11ba8310 */
  push32(0x11ba836bu); f_11ba8310();
  /* 11ba836b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba836e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba8371 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8375 je 0x11ba83a7 */
  if (C.zf) goto L_11ba83a7;
  /* 11ba8377 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba837a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba837d push edx */
  push32((uint32_t)(EDX));
  /* 11ba837e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba8380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8383 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba8386 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8387 call 0x11ba8310 */
  push32(0x11ba838cu); f_11ba8310();
  /* 11ba838c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba838f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba8392 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8396 je 0x11ba83a7 */
  if (C.zf) goto L_11ba83a7;
  /* 11ba8398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba839b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba839e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba83a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83a4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11ba83a7:;
  /* 11ba83a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83aa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba83ad push edx */
  push32((uint32_t)(EDX));
  /* 11ba83ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba83b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba83b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba83b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba83bb push eax */
  push32((uint32_t)(EAX));
  /* 11ba83bc call 0x11ba8310 */
  push32(0x11ba83c1u); f_11ba8310();
  /* 11ba83c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba83c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba83c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba83cb je 0x11ba83dc */
  if (C.zf) goto L_11ba83dc;
  /* 11ba83cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83d0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba83d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba83d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83d9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11ba83dc:;
  /* 11ba83dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba83e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba83e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba83e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba83e9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba83ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba83ed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba83f0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba83f1 call 0x11ba8310 */
  push32(0x11ba83f6u); f_11ba8310();
  /* 11ba83f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba83f9 mov esp, ebp */
  ESP = (EBP);
  /* 11ba83fb pop ebp */
  EBP = (pop32());
  /* 11ba83fc ret  */
  ESPCHK(0x11ba8350u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11ba8400 (96 bytes, 37 insns) */
void f_11ba8400(void) {
  FTRACE(0x11ba8400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba8400 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba8401 mov ebp, esp */
  EBP = (ESP);
  /* 11ba8403 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8409 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba840b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8411 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba8413 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8415 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba8417 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba841a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba841d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba8420 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8425 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba8427 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8429 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba842b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba842e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba8433 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba8435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8438 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba843a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba843d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba8440 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba8442 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8448 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba844b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba844e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba8451 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba8453 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8459 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba845c mov esp, ebp */
  ESP = (EBP);
  /* 11ba845e pop ebp */
  EBP = (pop32());
  /* 11ba845f ret  */
  ESPCHK(0x11ba8400u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11ba8460 (99 bytes, 37 insns) */
void f_11ba8460(void) {
  FTRACE(0x11ba8460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba8460 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba8461 mov ebp, esp */
  EBP = (ESP);
  /* 11ba8463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8469 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba846c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba846f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba8471 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8473 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8479 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba847c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba847f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba8482 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8485 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba8487 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8489 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba848e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba8491 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8494 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba8497 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba8499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba849c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba849f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba84a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba84a5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba84a7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba84aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba84ad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba84b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba84b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba84b5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba84b7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba84ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba84bd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba84bf mov esp, ebp */
  ESP = (EBP);
  /* 11ba84c1 pop ebp */
  EBP = (pop32());
  /* 11ba84c2 ret  */
  ESPCHK(0x11ba8460u, _esp0);
  ESP += 4; return;
}

/* FUN_100184d0 @ 0x11ba84d0 (315 bytes, 101 insns) */
void f_11ba84d0(void) {
  FTRACE(0x11ba84d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba84d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba84d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba84d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba84d6 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11ba84dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba84df mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba84e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba84e8 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ba84ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba84f2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ba84f9 jmp 0x11ba850d */
  goto L_11ba850d;
L_11ba84fb:;
  /* 11ba84fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba84fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8501 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ba8504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8507 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba850a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ba850d:;
  /* 11ba850d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8511 jbe 0x11ba8587 */
  if ((C.cf||C.zf)) goto L_11ba8587;
  /* 11ba8513 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8516 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba8518 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba851b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba851e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba8521 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba8524 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba8527 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba852a push eax */
  push32((uint32_t)(EAX));
  /* 11ba852b call 0x11ba8400 */
  push32(0x11ba8530u); f_11ba8400();
  /* 11ba8530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8533 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8536 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8537 call 0x11ba8400 */
  push32(0x11ba853cu); f_11ba8400();
  /* 11ba853c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba853f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ba8542 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8543 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8546 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8547 call 0x11ba8350 */
  push32(0x11ba854cu); f_11ba8350();
  /* 11ba854c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba854f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8552 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8553 call 0x11ba8400 */
  push32(0x11ba8558u); f_11ba8400();
  /* 11ba8558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba855b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba855e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba8561 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba8564 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba856b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba8572 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ba8575 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8576 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8579 push edx */
  push32((uint32_t)(EDX));
  /* 11ba857a call 0x11ba8350 */
  push32(0x11ba857fu); f_11ba8350();
  /* 11ba857f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8582 jmp 0x11ba84fb */
  goto L_11ba84fb;
L_11ba8587:;
  /* 11ba8587 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba858a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba858e jne 0x11ba85d3 */
  if (!C.zf) goto L_11ba85d3;
  /* 11ba8590 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8593 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba8596 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11ba8599 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba859c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba859f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba85a5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11ba85a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba85ad shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11ba85b0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba85b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85b5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba85b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba85bd shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11ba85c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba85c5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ba85c9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ba85cd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11ba85d1 jmp 0x11ba8587 */
  goto L_11ba8587;
L_11ba85d3:;
  /* 11ba85d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba85d9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba85de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba85e0 jne 0x11ba85fc */
  if (!C.zf) goto L_11ba85fc;
  /* 11ba85e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba85e6 call 0x11ba8400 */
  push32(0x11ba85ebu); f_11ba8400();
  /* 11ba85eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba85ee mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ba85f2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ba85f6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11ba85fa jmp 0x11ba85d3 */
  goto L_11ba85d3;
L_11ba85fc:;
  /* 11ba85fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba85ff mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ba8603 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11ba8607 mov esp, ebp */
  ESP = (EBP);
  /* 11ba8609 pop ebp */
  EBP = (pop32());
  /* 11ba860a ret  */
  ESPCHK(0x11ba84d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018610 @ 0x11ba8610 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11ba8610(void) {
  FTRACE(0x11ba8610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba8610 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba8611 mov ebp, esp */
  EBP = (ESP);
  /* 11ba8613 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8619 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ba861c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11ba861f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ba8625 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11ba862c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11ba8633 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11ba863a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba8641 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ba8648 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11ba864f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11ba8656 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ba865d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11ba8664 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ba866b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11ba8672 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba8675 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba8678 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba867b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11ba867e jmp 0x11ba8689 */
  goto L_11ba8689;
L_11ba8680:;
  /* 11ba8680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8683 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8686 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8689:;
  /* 11ba8689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba868c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba868f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8692 je 0x11ba86b5 */
  if (C.zf) goto L_11ba86b5;
  /* 11ba8694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8697 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba869a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba869d je 0x11ba86b5 */
  if (C.zf) goto L_11ba86b5;
  /* 11ba869f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba86a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba86a5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba86a8 je 0x11ba86b5 */
  if (C.zf) goto L_11ba86b5;
  /* 11ba86aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba86ad movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba86b0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba86b3 jne 0x11ba86b7 */
  if (!C.zf) goto L_11ba86b7;
L_11ba86b5:;
  /* 11ba86b5 jmp 0x11ba8680 */
  goto L_11ba8680;
L_11ba86b7:;
  /* 11ba86b7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba86bb je 0x11ba8e18 */
  if (C.zf) goto L_11ba8e18;
  /* 11ba86c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba86c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba86c6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11ba86c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba86cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba86cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba86d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ba86d5 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11ba86d8 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba86dc ja 0x11ba8e13 */
  if ((!C.cf&&!C.zf)) goto L_11ba8e13;
  /* 11ba86e2 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11ba86e5 jmp dword ptr [ecx*4 + 0x11ba902a] */
  switch (ECX) {
    case 0: goto L_11ba86ec;
    case 1: goto L_11ba878a;
    case 2: goto L_11ba8840;
    case 3: goto L_11ba88ab;
    case 4: goto L_11ba89c3;
    case 5: goto L_11ba8af5;
    case 6: goto L_11ba8b6b;
    case 7: goto L_11ba8c50;
    case 8: goto L_11ba8bf2;
    case 9: goto L_11ba8ca3;
    case 10: goto L_11ba8e13;
    case 11: goto L_11ba8daf;
    case 12: goto L_11ba8819;
    case 13: goto L_11ba8807;
    case 14: goto L_11ba8810;
    case 15: goto L_11ba882b;
    default: x86_unimpl("switch@0x11ba86e5 out of table"); return;
  }
L_11ba86ec:;
  /* 11ba86ec movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba86f0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba86f3 jl 0x11ba8710 */
  if ((C.sf!=C.of)) goto L_11ba8710;
  /* 11ba86f5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba86f9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba86fc jg 0x11ba8710 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba8710;
  /* 11ba86fe mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11ba8705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8708 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba870b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba870e jmp 0x11ba8785 */
  goto L_11ba8785;
L_11ba8710:;
  /* 11ba8710 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8714 movsx eax, byte ptr [0x11bcc004] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bcc004))));
  /* 11ba871b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba871d jne 0x11ba8728 */
  if (!C.zf) goto L_11ba8728;
  /* 11ba871f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11ba8726 jmp 0x11ba8785 */
  goto L_11ba8785;
L_11ba8728:;
  /* 11ba8728 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ba872b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11ba8731 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8738 je 0x11ba8757 */
  if (C.zf) goto L_11ba8757;
  /* 11ba873a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8741 je 0x11ba8766 */
  if (C.zf) goto L_11ba8766;
  /* 11ba8743 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba874a je 0x11ba874e */
  if (C.zf) goto L_11ba874e;
  /* 11ba874c jmp 0x11ba8775 */
  goto L_11ba8775;
L_11ba874e:;
  /* 11ba874e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11ba8755 jmp 0x11ba8785 */
  goto L_11ba8785;
L_11ba8757:;
  /* 11ba8757 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11ba875e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ba8764 jmp 0x11ba8785 */
  goto L_11ba8785;
L_11ba8766:;
  /* 11ba8766 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11ba876d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11ba8773 jmp 0x11ba8785 */
  goto L_11ba8785;
L_11ba8775:;
  /* 11ba8775 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba877c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba877f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8782 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba8785:;
  /* 11ba8785 jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba878a:;
  /* 11ba878a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11ba8791 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8795 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8798 jl 0x11ba87b8 */
  if ((C.sf!=C.of)) goto L_11ba87b8;
  /* 11ba879a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba879e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba87a1 jg 0x11ba87b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba87b8;
  /* 11ba87a3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11ba87aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba87ad sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba87b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba87b3 jmp 0x11ba883b */
  goto L_11ba883b;
L_11ba87b8:;
  /* 11ba87b8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba87bc movsx ecx, byte ptr [0x11bcc004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bcc004))));
  /* 11ba87c3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba87c5 jne 0x11ba87d0 */
  if (!C.zf) goto L_11ba87d0;
  /* 11ba87c7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11ba87ce jmp 0x11ba883b */
  goto L_11ba883b;
L_11ba87d0:;
  /* 11ba87d0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba87d4 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11ba87da mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11ba87e0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba87e3 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11ba87e9 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba87f0 ja 0x11ba882b */
  if ((!C.cf&&!C.zf)) goto L_11ba882b;
  /* 11ba87f2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11ba87f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba87fa mov cl, byte ptr [edx + 0x11ba906a] */
  CL = (r8((uint32_t)(EDX + 0x11ba906a)));
  /* 11ba8800 jmp dword ptr [ecx*4 + 0x11ba905a] */
  switch (ECX) {
    case 0: goto L_11ba8819;
    case 1: goto L_11ba8807;
    case 2: goto L_11ba8810;
    case 3: goto L_11ba882b;
    default: x86_unimpl("switch@0x11ba8800 out of table"); return;
  }
L_11ba8807:;
  /* 11ba8807 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11ba880e jmp 0x11ba883b */
  goto L_11ba883b;
L_11ba8810:;
  /* 11ba8810 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11ba8817 jmp 0x11ba883b */
  goto L_11ba883b;
L_11ba8819:;
  /* 11ba8819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba881c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba881f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba8822 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11ba8829 jmp 0x11ba883b */
  goto L_11ba883b;
L_11ba882b:;
  /* 11ba882b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8835 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8838 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba883b:;
  /* 11ba883b jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8840:;
  /* 11ba8840 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8844 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8847 jl 0x11ba8864 */
  if ((C.sf!=C.of)) goto L_11ba8864;
  /* 11ba8849 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba884d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8850 jg 0x11ba8864 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba8864;
  /* 11ba8852 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11ba8859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba885c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba885f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba8862 jmp 0x11ba88a6 */
  goto L_11ba88a6;
L_11ba8864:;
  /* 11ba8864 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8868 movsx eax, byte ptr [0x11bcc004] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bcc004))));
  /* 11ba886f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8871 jne 0x11ba887c */
  if (!C.zf) goto L_11ba887c;
  /* 11ba8873 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11ba887a jmp 0x11ba88a6 */
  goto L_11ba88a6;
L_11ba887c:;
  /* 11ba887c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ba887f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11ba8885 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba888c je 0x11ba8890 */
  if (C.zf) goto L_11ba8890;
  /* 11ba888e jmp 0x11ba8899 */
  goto L_11ba8899;
L_11ba8890:;
  /* 11ba8890 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11ba8897 jmp 0x11ba88a6 */
  goto L_11ba88a6;
L_11ba8899:;
  /* 11ba8899 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba88a0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ba88a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba88a6:;
  /* 11ba88a6 jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba88ab:;
  /* 11ba88ab mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11ba88b2 jmp 0x11ba88c5 */
  goto L_11ba88c5;
L_11ba88b4:;
  /* 11ba88b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba88b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba88b9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11ba88bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba88bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba88c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba88c5:;
  /* 11ba88c5 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba88cc jle 0x11ba88e9 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba88e9;
  /* 11ba88ce push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba88d0 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba88d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba88d8 push eax */
  push32((uint32_t)(EAX));
  /* 11ba88d9 call 0x11ba0f90 */
  push32(0x11ba88deu); f_11ba0f90();
  /* 11ba88de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba88e1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11ba88e7 jmp 0x11ba8907 */
  goto L_11ba8907;
L_11ba88e9:;
  /* 11ba88e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba88ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba88f2 mov edx, dword ptr [0x11bcc00c] */
  EDX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba88f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba88fa mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ba88fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8901 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11ba8907:;
  /* 11ba8907 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba890e je 0x11ba8944 */
  if (C.zf) goto L_11ba8944;
  /* 11ba8910 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8914 jae 0x11ba8936 */
  if (!C.cf) goto L_11ba8936;
  /* 11ba8916 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba8919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba891c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11ba891f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8923 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8926 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8929 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ba892b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba892e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8931 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11ba8934 jmp 0x11ba893f */
  goto L_11ba893f;
L_11ba8936:;
  /* 11ba8936 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba8939 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba893c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11ba893f:;
  /* 11ba893f jmp 0x11ba88b4 */
  goto L_11ba88b4;
L_11ba8944:;
  /* 11ba8944 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8948 movsx ecx, byte ptr [0x11bcc004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bcc004))));
  /* 11ba894f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8951 jne 0x11ba895c */
  if (!C.zf) goto L_11ba895c;
  /* 11ba8953 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11ba895a jmp 0x11ba89be */
  goto L_11ba89be;
L_11ba895c:;
  /* 11ba895c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8960 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11ba8966 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ba896c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba896f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11ba8975 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba897c ja 0x11ba89ae */
  if ((!C.cf&&!C.zf)) goto L_11ba89ae;
  /* 11ba897e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ba8984 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8986 mov cl, byte ptr [edx + 0x11ba90b1] */
  CL = (r8((uint32_t)(EDX + 0x11ba90b1)));
  /* 11ba898c jmp dword ptr [ecx*4 + 0x11ba90a5] */
  switch (ECX) {
    case 0: goto L_11ba899c;
    case 1: goto L_11ba8993;
    case 2: goto L_11ba89ae;
    default: x86_unimpl("switch@0x11ba898c out of table"); return;
  }
L_11ba8993:;
  /* 11ba8993 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11ba899a jmp 0x11ba89be */
  goto L_11ba89be;
L_11ba899c:;
  /* 11ba899c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba899f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba89a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba89a5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11ba89ac jmp 0x11ba89be */
  goto L_11ba89be;
L_11ba89ae:;
  /* 11ba89ae mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba89b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba89b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba89bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba89be:;
  /* 11ba89be jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba89c3:;
  /* 11ba89c3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11ba89ca mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11ba89d1 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba89d5 jne 0x11ba89fe */
  if (!C.zf) goto L_11ba89fe;
  /* 11ba89d7 jmp 0x11ba89ea */
  goto L_11ba89ea;
L_11ba89d9:;
  /* 11ba89d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba89dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba89de mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11ba89e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba89e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba89e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba89ea:;
  /* 11ba89ea movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba89ee cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba89f1 jne 0x11ba89fe */
  if (!C.zf) goto L_11ba89fe;
  /* 11ba89f3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba89f6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba89f9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11ba89fc jmp 0x11ba89d9 */
  goto L_11ba89d9;
L_11ba89fe:;
  /* 11ba89fe jmp 0x11ba8a11 */
  goto L_11ba8a11;
L_11ba8a00:;
  /* 11ba8a00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8a03 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba8a05 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11ba8a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8a0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8a0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8a11:;
  /* 11ba8a11 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8a18 jle 0x11ba8a36 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba8a36;
  /* 11ba8a1a push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba8a1c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8a1f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8a26 call 0x11ba0f90 */
  push32(0x11ba8a2bu); f_11ba0f90();
  /* 11ba8a2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8a2e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11ba8a34 jmp 0x11ba8a53 */
  goto L_11ba8a53;
L_11ba8a36:;
  /* 11ba8a36 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8a39 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8a3f mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba8a44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8a46 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ba8a4a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8a4d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11ba8a53:;
  /* 11ba8a53 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8a5a je 0x11ba8a8e */
  if (C.zf) goto L_11ba8a8e;
  /* 11ba8a5c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8a60 jae 0x11ba8a89 */
  if (!C.cf) goto L_11ba8a89;
  /* 11ba8a62 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba8a65 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8a68 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11ba8a6b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8a6f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8a72 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8a75 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ba8a77 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8a7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8a7d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11ba8a80 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba8a83 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8a86 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11ba8a89:;
  /* 11ba8a89 jmp 0x11ba8a00 */
  goto L_11ba8a00;
L_11ba8a8e:;
  /* 11ba8a8e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8a92 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ba8a98 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba8a9e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8aa1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11ba8aa7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8aae ja 0x11ba8ae0 */
  if ((!C.cf&&!C.zf)) goto L_11ba8ae0;
  /* 11ba8ab0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ba8ab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8ab8 mov al, byte ptr [ecx + 0x11ba90f8] */
  AL = (r8((uint32_t)(ECX + 0x11ba90f8)));
  /* 11ba8abe jmp dword ptr [eax*4 + 0x11ba90ec] */
  switch (EAX) {
    case 0: goto L_11ba8ace;
    case 1: goto L_11ba8ac5;
    case 2: goto L_11ba8ae0;
    default: x86_unimpl("switch@0x11ba8abe out of table"); return;
  }
L_11ba8ac5:;
  /* 11ba8ac5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11ba8acc jmp 0x11ba8af0 */
  goto L_11ba8af0;
L_11ba8ace:;
  /* 11ba8ace mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8ad1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8ad4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba8ad7 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11ba8ade jmp 0x11ba8af0 */
  goto L_11ba8af0;
L_11ba8ae0:;
  /* 11ba8ae0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8aea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8aed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8af0:;
  /* 11ba8af0 jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8af5:;
  /* 11ba8af5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11ba8afc cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8b03 jle 0x11ba8b21 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba8b21;
  /* 11ba8b05 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba8b07 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8b0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8b10 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8b11 call 0x11ba0f90 */
  push32(0x11ba8b16u); f_11ba0f90();
  /* 11ba8b16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8b19 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11ba8b1f jmp 0x11ba8b3e */
  goto L_11ba8b3e;
L_11ba8b21:;
  /* 11ba8b21 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8b24 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8b2a mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba8b2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8b31 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ba8b35 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8b38 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11ba8b3e:;
  /* 11ba8b3e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8b45 je 0x11ba8b59 */
  if (C.zf) goto L_11ba8b59;
  /* 11ba8b47 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11ba8b4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8b51 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8b54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba8b57 jmp 0x11ba8b66 */
  goto L_11ba8b66;
L_11ba8b59:;
  /* 11ba8b59 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8b60 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ba8b63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8b66:;
  /* 11ba8b66 jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8b6b:;
  /* 11ba8b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8b6e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8b71 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11ba8b74 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8b78 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8b7b jl 0x11ba8b98 */
  if ((C.sf!=C.of)) goto L_11ba8b98;
  /* 11ba8b7d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8b81 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8b84 jg 0x11ba8b98 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba8b98;
  /* 11ba8b86 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11ba8b8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8b90 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8b93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba8b96 jmp 0x11ba8bed */
  goto L_11ba8bed;
L_11ba8b98:;
  /* 11ba8b98 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ba8b9b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11ba8ba1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8ba8 je 0x11ba8bd7 */
  if (C.zf) goto L_11ba8bd7;
  /* 11ba8baa cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8bb1 je 0x11ba8bc7 */
  if (C.zf) goto L_11ba8bc7;
  /* 11ba8bb3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8bba je 0x11ba8bbe */
  if (C.zf) goto L_11ba8bbe;
  /* 11ba8bbc jmp 0x11ba8be0 */
  goto L_11ba8be0;
L_11ba8bbe:;
  /* 11ba8bbe mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11ba8bc5 jmp 0x11ba8bed */
  goto L_11ba8bed;
L_11ba8bc7:;
  /* 11ba8bc7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ba8bce mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11ba8bd5 jmp 0x11ba8bed */
  goto L_11ba8bed;
L_11ba8bd7:;
  /* 11ba8bd7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ba8bde jmp 0x11ba8bed */
  goto L_11ba8bed;
L_11ba8be0:;
  /* 11ba8be0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8be7 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ba8bea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8bed:;
  /* 11ba8bed jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8bf2:;
  /* 11ba8bf2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11ba8bf9 jmp 0x11ba8c0c */
  goto L_11ba8c0c;
L_11ba8bfb:;
  /* 11ba8bfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8bfe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba8c00 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11ba8c03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8c06 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8c0c:;
  /* 11ba8c0c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8c10 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8c13 jne 0x11ba8c17 */
  if (!C.zf) goto L_11ba8c17;
  /* 11ba8c15 jmp 0x11ba8bfb */
  goto L_11ba8bfb;
L_11ba8c17:;
  /* 11ba8c17 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8c1b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8c1e jl 0x11ba8c3b */
  if ((C.sf!=C.of)) goto L_11ba8c3b;
  /* 11ba8c20 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8c24 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8c27 jg 0x11ba8c3b */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba8c3b;
  /* 11ba8c29 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11ba8c30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8c33 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8c36 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba8c39 jmp 0x11ba8c4b */
  goto L_11ba8c4b;
L_11ba8c3b:;
  /* 11ba8c3b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8c45 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8c48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba8c4b:;
  /* 11ba8c4b jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8c50:;
  /* 11ba8c50 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8c54 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8c57 jl 0x11ba8c74 */
  if ((C.sf!=C.of)) goto L_11ba8c74;
  /* 11ba8c59 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8c5d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8c60 jg 0x11ba8c74 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba8c74;
  /* 11ba8c62 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11ba8c69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8c6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8c6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba8c72 jmp 0x11ba8c9e */
  goto L_11ba8c9e;
L_11ba8c74:;
  /* 11ba8c74 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ba8c77 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11ba8c7d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8c84 je 0x11ba8c88 */
  if (C.zf) goto L_11ba8c88;
  /* 11ba8c86 jmp 0x11ba8c91 */
  goto L_11ba8c91;
L_11ba8c88:;
  /* 11ba8c88 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11ba8c8f jmp 0x11ba8c9e */
  goto L_11ba8c9e;
L_11ba8c91:;
  /* 11ba8c91 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8c98 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ba8c9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba8c9e:;
  /* 11ba8c9e jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8ca3:;
  /* 11ba8ca3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11ba8caa mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11ba8cb1 jmp 0x11ba8cc4 */
  goto L_11ba8cc4;
L_11ba8cb3:;
  /* 11ba8cb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8cb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba8cb8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11ba8cbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8cbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8cc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba8cc4:;
  /* 11ba8cc4 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8ccb jle 0x11ba8ce9 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba8ce9;
  /* 11ba8ccd push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba8ccf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8cd2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8cd8 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8cd9 call 0x11ba0f90 */
  push32(0x11ba8cdeu); f_11ba0f90();
  /* 11ba8cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8ce1 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11ba8ce7 jmp 0x11ba8d06 */
  goto L_11ba8d06;
L_11ba8ce9:;
  /* 11ba8ce9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8cec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8cf1 mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba8cf7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8cf9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ba8cfd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8d00 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11ba8d06:;
  /* 11ba8d06 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8d0d je 0x11ba8d37 */
  if (C.zf) goto L_11ba8d37;
  /* 11ba8d0f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ba8d12 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba8d15 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ba8d19 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11ba8d1d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11ba8d20 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8d27 jle 0x11ba8d32 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba8d32;
  /* 11ba8d29 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11ba8d30 jmp 0x11ba8d37 */
  goto L_11ba8d37;
L_11ba8d32:;
  /* 11ba8d32 jmp 0x11ba8cb3 */
  goto L_11ba8cb3;
L_11ba8d37:;
  /* 11ba8d37 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ba8d3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba8d3d jmp 0x11ba8d50 */
  goto L_11ba8d50;
L_11ba8d3f:;
  /* 11ba8d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8d42 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba8d44 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11ba8d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8d4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8d50:;
  /* 11ba8d50 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8d57 jle 0x11ba8d75 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba8d75;
  /* 11ba8d59 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba8d5b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8d5e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8d64 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8d65 call 0x11ba0f90 */
  push32(0x11ba8d6au); f_11ba0f90();
  /* 11ba8d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8d6d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11ba8d73 jmp 0x11ba8d92 */
  goto L_11ba8d92;
L_11ba8d75:;
  /* 11ba8d75 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba8d78 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8d7e mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba8d83 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8d85 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ba8d89 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8d8c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11ba8d92:;
  /* 11ba8d92 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8d99 je 0x11ba8d9d */
  if (C.zf) goto L_11ba8d9d;
  /* 11ba8d9b jmp 0x11ba8d3f */
  goto L_11ba8d3f;
L_11ba8d9d:;
  /* 11ba8d9d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8da4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8da7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8daa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba8dad jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8daf:;
  /* 11ba8daf cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8db3 je 0x11ba8e03 */
  if (C.zf) goto L_11ba8e03;
  /* 11ba8db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8db8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8dbb mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11ba8dbe mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ba8dc1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11ba8dc7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8dce je 0x11ba8deb */
  if (C.zf) goto L_11ba8deb;
  /* 11ba8dd0 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba8dd7 je 0x11ba8ddb */
  if (C.zf) goto L_11ba8ddb;
  /* 11ba8dd9 jmp 0x11ba8df4 */
  goto L_11ba8df4;
L_11ba8ddb:;
  /* 11ba8ddb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ba8de2 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11ba8de9 jmp 0x11ba8e01 */
  goto L_11ba8e01;
L_11ba8deb:;
  /* 11ba8deb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ba8df2 jmp 0x11ba8e01 */
  goto L_11ba8e01;
L_11ba8df4:;
  /* 11ba8df4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8dfb mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ba8dfe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba8e01:;
  /* 11ba8e01 jmp 0x11ba8e13 */
  goto L_11ba8e13;
L_11ba8e03:;
  /* 11ba8e03 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ba8e0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8e0d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8e10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba8e13:;
  /* 11ba8e13 jmp 0x11ba86b7 */
  goto L_11ba86b7;
L_11ba8e18:;
  /* 11ba8e18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba8e1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba8e1e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba8e20 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8e24 je 0x11ba8f67 */
  if (C.zf) goto L_11ba8f67;
  /* 11ba8e2a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8e2e jne 0x11ba8f67 */
  if (!C.zf) goto L_11ba8f67;
  /* 11ba8e34 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8e38 jne 0x11ba8f67 */
  if (!C.zf) goto L_11ba8f67;
  /* 11ba8e3e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8e42 jbe 0x11ba8e6f */
  if ((C.cf||C.zf)) goto L_11ba8e6f;
  /* 11ba8e44 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11ba8e48 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8e4b jl 0x11ba8e56 */
  if ((C.sf!=C.of)) goto L_11ba8e56;
  /* 11ba8e4d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11ba8e50 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba8e53 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11ba8e56:;
  /* 11ba8e56 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11ba8e5d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8e60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8e63 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11ba8e66 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba8e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8e6c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11ba8e6f:;
  /* 11ba8e6f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8e73 jbe 0x11ba8f4a */
  if ((C.cf||C.zf)) goto L_11ba8f4a;
  /* 11ba8e79 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8e7c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8e7f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11ba8e82 jmp 0x11ba8e8d */
  goto L_11ba8e8d;
L_11ba8e84:;
  /* 11ba8e84 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8e87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8e8a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11ba8e8d:;
  /* 11ba8e8d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba8e90 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba8e93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba8e95 jne 0x11ba8eab */
  if (!C.zf) goto L_11ba8eab;
  /* 11ba8e97 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba8e9a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8e9d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11ba8ea0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba8ea3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8ea6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11ba8ea9 jmp 0x11ba8e84 */
  goto L_11ba8e84;
L_11ba8eab:;
  /* 11ba8eab lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11ba8eae push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8eaf mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba8eb2 push edx */
  push32((uint32_t)(EDX));
  /* 11ba8eb3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ba8eb6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba8eb7 call 0x11ba84d0 */
  push32(0x11ba8ebcu); f_11ba84d0();
  /* 11ba8ebc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8ebf cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8ec3 jge 0x11ba8ecd */
  if ((C.sf==C.of)) goto L_11ba8ecd;
  /* 11ba8ec5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba8ec8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba8eca mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ba8ecd:;
  /* 11ba8ecd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba8ed0 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8ed3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ba8ed6 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8eda jne 0x11ba8ee5 */
  if (!C.zf) goto L_11ba8ee5;
  /* 11ba8edc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba8edf add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8ee2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ba8ee5:;
  /* 11ba8ee5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8ee9 jne 0x11ba8ef4 */
  if (!C.zf) goto L_11ba8ef4;
  /* 11ba8eeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba8eee sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba8ef1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ba8ef4:;
  /* 11ba8ef4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8efb jle 0x11ba8f06 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba8f06;
  /* 11ba8efd mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11ba8f04 jmp 0x11ba8f48 */
  goto L_11ba8f48;
L_11ba8f06:;
  /* 11ba8f06 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8f0d jge 0x11ba8f18 */
  if ((C.sf==C.of)) goto L_11ba8f18;
  /* 11ba8f0f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11ba8f16 jmp 0x11ba8f48 */
  goto L_11ba8f48;
L_11ba8f18:;
  /* 11ba8f18 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba8f1b push edx */
  push32((uint32_t)(EDX));
  /* 11ba8f1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba8f1f push eax */
  push32((uint32_t)(EAX));
  /* 11ba8f20 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11ba8f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba8f24 call 0x11bacd70 */
  push32(0x11ba8f29u); f_11bacd70();
  /* 11ba8f29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba8f2c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11ba8f30 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11ba8f34 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11ba8f37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba8f3a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11ba8f3d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba8f40 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11ba8f44 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11ba8f48:;
  /* 11ba8f48 jmp 0x11ba8f67 */
  goto L_11ba8f67;
L_11ba8f4a:;
  /* 11ba8f4a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ba8f50 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11ba8f56 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ba8f59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8f5e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba8f61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba8f64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ba8f67:;
  /* 11ba8f67 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8f6b jne 0x11ba8f96 */
  if (!C.zf) goto L_11ba8f96;
  /* 11ba8f6d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ba8f73 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11ba8f79 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ba8f7c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8f82 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba8f85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba8f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba8f8b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ba8f8e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba8f91 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ba8f94 jmp 0x11ba8fed */
  goto L_11ba8fed;
L_11ba8f96:;
  /* 11ba8f96 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8f9a je 0x11ba8fc1 */
  if (C.zf) goto L_11ba8fc1;
  /* 11ba8f9c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11ba8fa2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11ba8fa9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba8fb0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ba8fb6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ba8fb9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8fbc mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11ba8fbf jmp 0x11ba8fed */
  goto L_11ba8fed;
L_11ba8fc1:;
  /* 11ba8fc1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba8fc5 je 0x11ba8fed */
  if (C.zf) goto L_11ba8fed;
  /* 11ba8fc7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ba8fcd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11ba8fd3 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ba8fd6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba8fdb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba8fde mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba8fe1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba8fe4 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ba8fe7 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba8fea mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11ba8fed:;
  /* 11ba8fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8ff0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11ba8ff4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11ba8ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba8ffa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba8ffd mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11ba9000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9003 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba9006 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11ba9009 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ba900c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9011 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba9014 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba901a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba901c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba901f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11ba9023 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ba9026 mov esp, ebp */
  ESP = (EBP);
  /* 11ba9028 pop ebp */
  EBP = (pop32());
  /* 11ba9029 ret  */
  ESPCHK(0x11ba8610u, _esp0);
  ESP += 4; return;
}

/* FUN_10019140 @ 0x11ba9140 (79 bytes, 33 insns) */
void f_11ba9140(void) {
  FTRACE(0x11ba9140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9140 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9141 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9143 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9146 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba9148 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba914a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba914c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba914f push eax */
  push32((uint32_t)(EAX));
  /* 11ba9150 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba9153 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9157 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9158 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ba915b push eax */
  push32((uint32_t)(EAX));
  /* 11ba915c call 0x11ba8610 */
  push32(0x11ba9161u); f_11ba8610();
  /* 11ba9161 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9164 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba9167 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba916a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba916b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ba916e push edx */
  push32((uint32_t)(EDX));
  /* 11ba916f call 0x11ba1890 */
  push32(0x11ba9174u); f_11ba1890();
  /* 11ba9174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9177 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba917a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba917e jne 0x11ba9188 */
  if (!C.zf) goto L_11ba9188;
  /* 11ba9180 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba9183 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ba9185 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ba9188:;
  /* 11ba9188 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba918b mov esp, ebp */
  ESP = (EBP);
  /* 11ba918d pop ebp */
  EBP = (pop32());
  /* 11ba918e ret  */
  ESPCHK(0x11ba9140u, _esp0);
  ESP += 4; return;
}

/* FUN_10019190 @ 0x11ba9190 (1302 bytes, 386 insns) */
void f_11ba9190(void) {
  FTRACE(0x11ba9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9190 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9191 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9193 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9196 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11ba919c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11ba91a2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11ba91a8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11ba91af mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11ba91b3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11ba91b7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11ba91bb mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11ba91bf mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11ba91c3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11ba91c7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11ba91cb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11ba91cf mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11ba91d3 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11ba91d7 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11ba91db mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11ba91df mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11ba91e6 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11ba91ea mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11ba91ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba91f1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ba91f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba91f7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11ba91fa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba91fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9202 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9207 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11ba920b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11ba920f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11ba9214 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11ba9218 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba921b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9221 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba9223 je 0x11ba922e */
  if (C.zf) goto L_11ba922e;
  /* 11ba9225 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9228 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11ba922c jmp 0x11ba9235 */
  goto L_11ba9235;
L_11ba922e:;
  /* 11ba922e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9231 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11ba9235:;
  /* 11ba9235 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba9238 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba923e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba9240 jne 0x11ba927c */
  if (!C.zf) goto L_11ba927c;
  /* 11ba9242 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9246 jne 0x11ba927c */
  if (!C.zf) goto L_11ba927c;
  /* 11ba9248 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba924c jne 0x11ba927c */
  if (!C.zf) goto L_11ba927c;
  /* 11ba924e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9251 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11ba9256 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9259 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11ba925d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9260 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11ba9264 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9267 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11ba926b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba926e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11ba9272 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba9277 jmp 0x11ba96a2 */
  goto L_11ba96a2;
L_11ba927c:;
  /* 11ba927c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba927f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9285 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba928b jne 0x11ba9376 */
  if (!C.zf) goto L_11ba9376;
  /* 11ba9291 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9294 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11ba9299 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba92a0 jne 0x11ba92a8 */
  if (!C.zf) goto L_11ba92a8;
  /* 11ba92a2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba92a6 je 0x11ba92dc */
  if (C.zf) goto L_11ba92dc;
L_11ba92a8:;
  /* 11ba92a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba92ab and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba92b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba92b3 jne 0x11ba92dc */
  if (!C.zf) goto L_11ba92dc;
  /* 11ba92b5 push 0x11bc94a0 */
  push32((uint32_t)(0x11bc94a0u));
  /* 11ba92ba mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba92bd add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba92c0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba92c1 call 0x11ba0000 */
  push32(0x11ba92c6u); f_11ba0000();
  /* 11ba92c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba92c9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba92cc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11ba92d0 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ba92d7 jmp 0x11ba9371 */
  goto L_11ba9371;
L_11ba92dc:;
  /* 11ba92dc mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ba92df and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba92e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba92e7 je 0x11ba931c */
  if (C.zf) goto L_11ba931c;
  /* 11ba92e9 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba92f0 jne 0x11ba931c */
  if (!C.zf) goto L_11ba931c;
  /* 11ba92f2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba92f6 jne 0x11ba931c */
  if (!C.zf) goto L_11ba931c;
  /* 11ba92f8 push 0x11bc9498 */
  push32((uint32_t)(0x11bc9498u));
  /* 11ba92fd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9300 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9303 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9304 call 0x11ba0000 */
  push32(0x11ba9309u); f_11ba0000();
  /* 11ba9309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba930c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba930f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11ba9313 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ba931a jmp 0x11ba9371 */
  goto L_11ba9371;
L_11ba931c:;
  /* 11ba931c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9323 jne 0x11ba934f */
  if (!C.zf) goto L_11ba934f;
  /* 11ba9325 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9329 jne 0x11ba934f */
  if (!C.zf) goto L_11ba934f;
  /* 11ba932b push 0x11bc9490 */
  push32((uint32_t)(0x11bc9490u));
  /* 11ba9330 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9333 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9336 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9337 call 0x11ba0000 */
  push32(0x11ba933cu); f_11ba0000();
  /* 11ba933c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba933f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9342 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11ba9346 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ba934d jmp 0x11ba9371 */
  goto L_11ba9371;
L_11ba934f:;
  /* 11ba934f push 0x11bc9488 */
  push32((uint32_t)(0x11bc9488u));
  /* 11ba9354 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9357 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba935a push eax */
  push32((uint32_t)(EAX));
  /* 11ba935b call 0x11ba0000 */
  push32(0x11ba9360u); f_11ba0000();
  /* 11ba9360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9363 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9366 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11ba936a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11ba9371:;
  /* 11ba9371 jmp 0x11ba969f */
  goto L_11ba969f;
L_11ba9376:;
  /* 11ba9376 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba9379 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba937f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ba9382 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11ba9386 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba9389 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba938e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9393 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11ba9397 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba939a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11ba939d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11ba93a1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ba93a4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba93aa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ba93ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba93b2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba93b5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba93b8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba93be mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba93c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba93c6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba93c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba93cb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ba93ce and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba93d4 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ba93d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba93dc imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba93df add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba93e1 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba93e4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba93e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba93ea sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11ba93ed mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11ba93f1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11ba93f5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11ba93f9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba93fc mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11ba93ff mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ba9402 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11ba9405 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11ba940b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba940d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11ba9411 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba9413 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9414 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ba9417 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9418 call 0x11bacd70 */
  push32(0x11ba941du); f_11bacd70();
  /* 11ba941d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9420 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11ba9423 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9429 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba942f jl 0x11ba944d */
  if ((C.sf!=C.of)) goto L_11ba944d;
  /* 11ba9431 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11ba9435 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ba9439 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11ba943d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11ba9440 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9441 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ba9444 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9445 call 0x11bac930 */
  push32(0x11ba944au); f_11bac930();
  /* 11ba944a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba944d:;
  /* 11ba944d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9450 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11ba9454 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ba9457 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba945a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba945d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba945f je 0x11ba94a1 */
  if (C.zf) goto L_11ba94a1;
  /* 11ba9461 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11ba9465 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba9468 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba946a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11ba946d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9471 jg 0x11ba94a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba94a1;
  /* 11ba9473 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9476 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11ba947b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba947e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11ba9482 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9485 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11ba9489 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba948c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11ba9490 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9493 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11ba9497 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba949c jmp 0x11ba96a2 */
  goto L_11ba96a2;
L_11ba94a1:;
  /* 11ba94a1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba94a5 jle 0x11ba94ae */
  if ((C.zf||C.sf!=C.of)) goto L_11ba94ae;
  /* 11ba94a7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11ba94ae:;
  /* 11ba94ae mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11ba94b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba94b6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba94bb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ba94be mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11ba94c4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ba94cb jmp 0x11ba94d6 */
  goto L_11ba94d6;
L_11ba94cd:;
  /* 11ba94cd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ba94d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba94d3 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11ba94d6:;
  /* 11ba94d6 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba94da jge 0x11ba94ea */
  if ((C.sf==C.of)) goto L_11ba94ea;
  /* 11ba94dc lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11ba94df push edx */
  push32((uint32_t)(EDX));
  /* 11ba94e0 call 0x11ba8400 */
  push32(0x11ba94e5u); f_11ba8400();
  /* 11ba94e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba94e8 jmp 0x11ba94cd */
  goto L_11ba94cd;
L_11ba94ea:;
  /* 11ba94ea cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba94ee jge 0x11ba951c */
  if ((C.sf==C.of)) goto L_11ba951c;
  /* 11ba94f0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba94f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba94f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba94fa mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11ba94fd jmp 0x11ba9508 */
  goto L_11ba9508;
L_11ba94ff:;
  /* 11ba94ff mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11ba9502 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9505 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11ba9508:;
  /* 11ba9508 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba950c jle 0x11ba951c */
  if ((C.zf||C.sf!=C.of)) goto L_11ba951c;
  /* 11ba950e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11ba9511 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9512 call 0x11ba8460 */
  push32(0x11ba9517u); f_11ba8460();
  /* 11ba9517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba951a jmp 0x11ba94ff */
  goto L_11ba94ff;
L_11ba951c:;
  /* 11ba951c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba951f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba9525 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba9528 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba952b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba952e jmp 0x11ba9539 */
  goto L_11ba9539;
L_11ba9530:;
  /* 11ba9530 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba9533 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9536 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ba9539:;
  /* 11ba9539 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba953d jle 0x11ba95a5 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba95a5;
  /* 11ba953f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba9542 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ba9545 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba9548 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ba954b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba954e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ba9551 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ba9554 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9555 call 0x11ba8400 */
  push32(0x11ba955au); f_11ba8400();
  /* 11ba955a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba955d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ba9560 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9561 call 0x11ba8400 */
  push32(0x11ba9566u); f_11ba8400();
  /* 11ba9566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9569 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11ba956c push edx */
  push32((uint32_t)(EDX));
  /* 11ba956d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ba9570 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9571 call 0x11ba8350 */
  push32(0x11ba9576u); f_11ba8350();
  /* 11ba9576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9579 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ba957c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba957d call 0x11ba8400 */
  push32(0x11ba9582u); f_11ba8400();
  /* 11ba9582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9585 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11ba9588 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba958e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9594 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ba9596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9599 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba959c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba959f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11ba95a3 jmp 0x11ba9530 */
  goto L_11ba9530;
L_11ba95a5:;
  /* 11ba95a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95a8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba95ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba95ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95b1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba95b3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11ba95b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba95bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba95bf movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ba95c3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba95c6 jl 0x11ba9623 */
  if ((C.sf!=C.of)) goto L_11ba9623;
  /* 11ba95c8 jmp 0x11ba95d3 */
  goto L_11ba95d3;
L_11ba95ca:;
  /* 11ba95ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba95d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba95d3:;
  /* 11ba95d3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba95d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba95d9 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba95dc jb 0x11ba95f1 */
  if (C.cf) goto L_11ba95f1;
  /* 11ba95de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba95e4 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba95e7 jne 0x11ba95f1 */
  if (!C.zf) goto L_11ba95f1;
  /* 11ba95e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95ec mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ba95ef jmp 0x11ba95ca */
  goto L_11ba95ca;
L_11ba95f1:;
  /* 11ba95f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba95f4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba95f7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba95fa jae 0x11ba9615 */
  if (!C.cf) goto L_11ba9615;
  /* 11ba95fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba95ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9602 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba9605 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9608 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ba960b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ba960f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9612 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11ba9615:;
  /* 11ba9615 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9618 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba961a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba961c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba961f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ba9621 jmp 0x11ba967c */
  goto L_11ba967c;
L_11ba9623:;
  /* 11ba9623 jmp 0x11ba962e */
  goto L_11ba962e;
L_11ba9625:;
  /* 11ba9625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9628 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba962b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba962e:;
  /* 11ba962e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9631 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9634 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9637 jb 0x11ba9646 */
  if (C.cf) goto L_11ba9646;
  /* 11ba9639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba963c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba963f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9642 jne 0x11ba9646 */
  if (!C.zf) goto L_11ba9646;
  /* 11ba9644 jmp 0x11ba9625 */
  goto L_11ba9625;
L_11ba9646:;
  /* 11ba9646 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9649 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba964c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba964f jae 0x11ba967c */
  if (!C.cf) goto L_11ba967c;
  /* 11ba9651 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9654 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11ba9659 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba965c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11ba9660 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9663 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11ba9667 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba966a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11ba966e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9671 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11ba9675 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba967a jmp 0x11ba96a2 */
  goto L_11ba96a2;
L_11ba967c:;
  /* 11ba967c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba967f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9685 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9687 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba968a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba968d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11ba9690 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba9693 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11ba9697 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba969a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11ba969f:;
  /* 11ba969f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11ba96a2:;
  /* 11ba96a2 mov esp, ebp */
  ESP = (EBP);
  /* 11ba96a4 pop ebp */
  EBP = (pop32());
  /* 11ba96a5 ret  */
  ESPCHK(0x11ba9190u, _esp0);
  ESP += 4; return;
}

/* FUN_100196b0 @ 0x11ba96b0 (255 bytes, 88 insns) */
void f_11ba96b0(void) {
  FTRACE(0x11ba96b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba96b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba96b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba96b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11ba96b6:;
  /* 11ba96b6 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba96bd jle 0x11ba96d6 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba96d6;
  /* 11ba96bf push 8 */
  push32((uint32_t)(0x8u));
  /* 11ba96c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba96c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba96c6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba96c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba96c9 call 0x11ba0f90 */
  push32(0x11ba96ceu); f_11ba0f90();
  /* 11ba96ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba96d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba96d4 jmp 0x11ba96ef */
  goto L_11ba96ef;
L_11ba96d6:;
  /* 11ba96d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba96d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba96db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba96dd mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba96e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba96e5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ba96e9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba96ec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ba96ef:;
  /* 11ba96ef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba96f3 je 0x11ba9700 */
  if (C.zf) goto L_11ba9700;
  /* 11ba96f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba96f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba96fb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ba96fe jmp 0x11ba96b6 */
  goto L_11ba96b6;
L_11ba9700:;
  /* 11ba9700 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9703 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9705 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba9707 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba970a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba970d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9710 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ba9713 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9716 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba9719 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba971d je 0x11ba9725 */
  if (C.zf) goto L_11ba9725;
  /* 11ba971f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9723 jne 0x11ba9738 */
  if (!C.zf) goto L_11ba9738;
L_11ba9725:;
  /* 11ba9725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba972a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba972c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba972f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9732 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9735 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ba9738:;
  /* 11ba9738 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ba973f:;
  /* 11ba973f cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9746 jle 0x11ba975b */
  if ((C.zf||C.sf!=C.of)) goto L_11ba975b;
  /* 11ba9748 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba974a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba974d push edx */
  push32((uint32_t)(EDX));
  /* 11ba974e call 0x11ba0f90 */
  push32(0x11ba9753u); f_11ba0f90();
  /* 11ba9753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9756 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba9759 jmp 0x11ba9770 */
  goto L_11ba9770;
L_11ba975b:;
  /* 11ba975b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba975e mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba9764 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9766 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ba976a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba976d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ba9770:;
  /* 11ba9770 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9774 je 0x11ba979b */
  if (C.zf) goto L_11ba979b;
  /* 11ba9776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9779 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba977c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba977f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11ba9783 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba9786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9789 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba978b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba978d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba9790 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9793 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9796 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ba9799 jmp 0x11ba973f */
  goto L_11ba973f;
L_11ba979b:;
  /* 11ba979b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba979f jne 0x11ba97a8 */
  if (!C.zf) goto L_11ba97a8;
  /* 11ba97a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba97a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba97a6 jmp 0x11ba97ab */
  goto L_11ba97ab;
L_11ba97a8:;
  /* 11ba97a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ba97ab:;
  /* 11ba97ab mov esp, ebp */
  ESP = (EBP);
  /* 11ba97ad pop ebp */
  EBP = (pop32());
  /* 11ba97ae ret  */
  ESPCHK(0x11ba96b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100197b0 @ 0x11ba97b0 (17 bytes, 8 insns) */
void f_11ba97b0(void) {
  FTRACE(0x11ba97b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba97b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba97b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba97b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba97b6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba97b7 call 0x11ba96b0 */
  push32(0x11ba97bcu); f_11ba96b0();
  /* 11ba97bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba97bf pop ebp */
  EBP = (pop32());
  /* 11ba97c0 ret  */
  ESPCHK(0x11ba97b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100197d0 @ 0x11ba97d0 (297 bytes, 106 insns) */
void f_11ba97d0(void) {
  FTRACE(0x11ba97d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba97d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba97d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba97d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba97d6 push esi */
  push32((uint32_t)(ESI));
L_11ba97d7:;
  /* 11ba97d7 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba97de jle 0x11ba97f7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba97f7;
  /* 11ba97e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ba97e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba97e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba97e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba97e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba97ea call 0x11ba0f90 */
  push32(0x11ba97efu); f_11ba0f90();
  /* 11ba97ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba97f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba97f5 jmp 0x11ba9810 */
  goto L_11ba9810;
L_11ba97f7:;
  /* 11ba97f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba97fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba97fc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba97fe mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba9804 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9806 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ba980a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba980d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ba9810:;
  /* 11ba9810 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9814 je 0x11ba9821 */
  if (C.zf) goto L_11ba9821;
  /* 11ba9816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9819 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba981c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ba981f jmp 0x11ba97d7 */
  goto L_11ba97d7;
L_11ba9821:;
  /* 11ba9821 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9826 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba9828 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba982b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba982e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9831 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ba9834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9837 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba983a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba983e je 0x11ba9846 */
  if (C.zf) goto L_11ba9846;
  /* 11ba9840 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9844 jne 0x11ba9859 */
  if (!C.zf) goto L_11ba9859;
L_11ba9846:;
  /* 11ba9846 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba984b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba984d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba9850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9853 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9856 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ba9859:;
  /* 11ba9859 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba9860 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ba9867:;
  /* 11ba9867 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba986e jle 0x11ba9883 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba9883;
  /* 11ba9870 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba9872 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9875 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9876 call 0x11ba0f90 */
  push32(0x11ba987bu); f_11ba0f90();
  /* 11ba987b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba987e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba9881 jmp 0x11ba9898 */
  goto L_11ba9898;
L_11ba9883:;
  /* 11ba9883 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9886 mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba988c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba988e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ba9892 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9895 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11ba9898:;
  /* 11ba9898 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba989c je 0x11ba98d9 */
  if (C.zf) goto L_11ba98d9;
  /* 11ba989e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba98a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ba98a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba98a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ba98a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba98a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba98aa call 0x11bace40 */
  push32(0x11ba98afu); f_11bace40();
  /* 11ba98af mov ecx, eax */
  ECX = (EAX);
  /* 11ba98b1 mov esi, edx */
  ESI = (EDX);
  /* 11ba98b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba98b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba98b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba98ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba98bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba98be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba98c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11ba98c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba98c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba98c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba98cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba98ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba98d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba98d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ba98d7 jmp 0x11ba9867 */
  goto L_11ba9867;
L_11ba98d9:;
  /* 11ba98d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba98dd jne 0x11ba98ee */
  if (!C.zf) goto L_11ba98ee;
  /* 11ba98df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba98e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba98e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba98e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba98ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba98ec jmp 0x11ba98f4 */
  goto L_11ba98f4;
L_11ba98ee:;
  /* 11ba98ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba98f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11ba98f4:;
  /* 11ba98f4 pop esi */
  ESI = (pop32());
  /* 11ba98f5 mov esp, ebp */
  ESP = (EBP);
  /* 11ba98f7 pop ebp */
  EBP = (pop32());
  /* 11ba98f8 ret  */
  ESPCHK(0x11ba97d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019900 @ 0x11ba9900 (46 bytes, 18 insns) */
void f_11ba9900(void) {
  FTRACE(0x11ba9900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9900 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9901 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9903 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9904 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba9906 call 0x11b9a6d0 */
  push32(0x11ba990bu); f_11b9a6d0();
  /* 11ba990b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba990e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9911 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9912 call 0x11ba9930 */
  push32(0x11ba9917u); f_11ba9930();
  /* 11ba9917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba991a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba991d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba991f call 0x11b9a770 */
  push32(0x11ba9924u); f_11b9a770();
  /* 11ba9924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba992a mov esp, ebp */
  ESP = (EBP);
  /* 11ba992c pop ebp */
  EBP = (pop32());
  /* 11ba992d ret  */
  ESPCHK(0x11ba9900u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11ba9930 (198 bytes, 69 insns) */
void f_11ba9930(void) {
  FTRACE(0x11ba9930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9930 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9931 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9936 mov eax, dword ptr [0x11bce3fc] */
  EAX = (r32((uint32_t)(0x11bce3fc)));
  /* 11ba993b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba993e cmp dword ptr [0x11bcfe80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9945 jne 0x11ba994e */
  if (!C.zf) goto L_11ba994e;
  /* 11ba9947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9949 jmp 0x11ba99f2 */
  goto L_11ba99f2;
L_11ba994e:;
  /* 11ba994e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9952 jne 0x11ba9976 */
  if (!C.zf) goto L_11ba9976;
  /* 11ba9954 cmp dword ptr [0x11bce404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba995b je 0x11ba9976 */
  if (C.zf) goto L_11ba9976;
  /* 11ba995d call 0x11baced0 */
  push32(0x11ba9962u); f_11baced0();
  /* 11ba9962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba9964 je 0x11ba996d */
  if (C.zf) goto L_11ba996d;
  /* 11ba9966 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9968 jmp 0x11ba99f2 */
  goto L_11ba99f2;
L_11ba996d:;
  /* 11ba996d mov ecx, dword ptr [0x11bce3fc] */
  ECX = (r32((uint32_t)(0x11bce3fc)));
  /* 11ba9973 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ba9976:;
  /* 11ba9976 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba997a je 0x11ba99f0 */
  if (C.zf) goto L_11ba99f0;
  /* 11ba997c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9980 je 0x11ba99f0 */
  if (C.zf) goto L_11ba99f0;
  /* 11ba9982 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9985 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9986 call 0x11b9fe80 */
  push32(0x11ba998bu); f_11b9fe80();
  /* 11ba998b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba998e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba9991:;
  /* 11ba9991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9994 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9997 je 0x11ba99f0 */
  if (C.zf) goto L_11ba99f0;
  /* 11ba9999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba999c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba999e push edx */
  push32((uint32_t)(EDX));
  /* 11ba999f call 0x11b9fe80 */
  push32(0x11ba99a4u); f_11b9fe80();
  /* 11ba99a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba99a7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba99aa jbe 0x11ba99e5 */
  if ((C.cf||C.zf)) goto L_11ba99e5;
  /* 11ba99ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba99af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba99b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba99b4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11ba99b8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba99bb jne 0x11ba99e5 */
  if (!C.zf) goto L_11ba99e5;
  /* 11ba99bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba99c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba99c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba99c4 push edx */
  push32((uint32_t)(EDX));
  /* 11ba99c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba99c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba99ca push ecx */
  push32((uint32_t)(ECX));
  /* 11ba99cb call 0x11bace80 */
  push32(0x11ba99d0u); f_11bace80();
  /* 11ba99d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba99d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba99d5 jne 0x11ba99e5 */
  if (!C.zf) goto L_11ba99e5;
  /* 11ba99d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba99da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba99dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba99df lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11ba99e3 jmp 0x11ba99f2 */
  goto L_11ba99f2;
L_11ba99e5:;
  /* 11ba99e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba99e8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba99eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba99ee jmp 0x11ba9991 */
  goto L_11ba9991;
L_11ba99f0:;
  /* 11ba99f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba99f2:;
  /* 11ba99f2 mov esp, ebp */
  ESP = (EBP);
  /* 11ba99f4 pop ebp */
  EBP = (pop32());
  /* 11ba99f5 ret  */
  ESPCHK(0x11ba9930u, _esp0);
  ESP += 4; return;
}

/* FUN_10019a00 @ 0x11ba9a00 (482 bytes, 138 insns) */
void f_11ba9a00(void) {
  FTRACE(0x11ba9a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9a01 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9a03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9a06 push esi */
  push32((uint32_t)(ESI));
  /* 11ba9a07 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11ba9a0e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11ba9a10 call 0x11b9a6d0 */
  push32(0x11ba9a15u); f_11b9a6d0();
  /* 11ba9a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9a18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba9a1f jmp 0x11ba9a2a */
  goto L_11ba9a2a;
L_11ba9a21:;
  /* 11ba9a21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9a24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9a27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba9a2a:;
  /* 11ba9a2a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9a2e jge 0x11ba9bd0 */
  if ((C.sf==C.of)) goto L_11ba9bd0;
  /* 11ba9a34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9a37 cmp dword ptr [ecx*4 + 0x11bcfd40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11bcfd40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9a3f je 0x11ba9b36 */
  if (C.zf) goto L_11ba9b36;
  /* 11ba9a45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9a48 mov eax, dword ptr [edx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11ba9a4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba9a52 jmp 0x11ba9a5d */
  goto L_11ba9a5d;
L_11ba9a54:;
  /* 11ba9a54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9a57 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9a5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba9a5d:;
  /* 11ba9a5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9a60 mov eax, dword ptr [edx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11ba9a67 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9a6c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9a6f jae 0x11ba9b26 */
  if (!C.cf) goto L_11ba9b26;
  /* 11ba9a75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9a78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba9a7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9a7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba9a81 jne 0x11ba9b21 */
  if (!C.zf) goto L_11ba9b21;
  /* 11ba9a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9a8a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9a8e jne 0x11ba9ac9 */
  if (!C.zf) goto L_11ba9ac9;
  /* 11ba9a90 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ba9a92 call 0x11b9a6d0 */
  push32(0x11ba9a97u); f_11b9a6d0();
  /* 11ba9a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9a9d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9aa1 jne 0x11ba9abf */
  if (!C.zf) goto L_11ba9abf;
  /* 11ba9aa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9aa6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9aa9 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9aaa call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11ba9ab0u);
  /* 11ba9ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9ab3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba9ab6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9ab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9abc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ba9abf:;
  /* 11ba9abf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ba9ac1 call 0x11b9a770 */
  push32(0x11ba9ac6u); f_11b9a770();
  /* 11ba9ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba9ac9:;
  /* 11ba9ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9acc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9acf push eax */
  push32((uint32_t)(EAX));
  /* 11ba9ad0 call dword ptr [0x11bd0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0410))), 0x11ba9ad6u);
  /* 11ba9ad6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9ad9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba9add and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9ae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba9ae2 je 0x11ba9af6 */
  if (C.zf) goto L_11ba9af6;
  /* 11ba9ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9ae7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9aea push eax */
  push32((uint32_t)(EAX));
  /* 11ba9aeb call dword ptr [0x11bd0428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0428))), 0x11ba9af1u);
  /* 11ba9af1 jmp 0x11ba9a54 */
  goto L_11ba9a54;
L_11ba9af6:;
  /* 11ba9af6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9af9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ba9aff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9b02 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba9b05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9b0b sub eax, dword ptr [edx*4 + 0x11bcfd40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11bcfd40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9b12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba9b13 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11ba9b18 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba9b1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9b1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba9b1f jmp 0x11ba9b26 */
  goto L_11ba9b26;
L_11ba9b21:;
  /* 11ba9b21 jmp 0x11ba9a54 */
  goto L_11ba9a54;
L_11ba9b26:;
  /* 11ba9b26 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9b2a je 0x11ba9b31 */
  if (C.zf) goto L_11ba9b31;
  /* 11ba9b2c jmp 0x11ba9bd0 */
  goto L_11ba9bd0;
L_11ba9b31:;
  /* 11ba9b31 jmp 0x11ba9bcb */
  goto L_11ba9bcb;
L_11ba9b36:;
  /* 11ba9b36 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11ba9b38 push 0x11bc94a8 */
  push32((uint32_t)(0x11bc94a8u));
  /* 11ba9b3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba9b3f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ba9b44 call 0x11b9a7d0 */
  push32(0x11ba9b49u); f_11b9a7d0();
  /* 11ba9b49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba9b4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9b53 je 0x11ba9bc9 */
  if (C.zf) goto L_11ba9bc9;
  /* 11ba9b55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9b5b mov dword ptr [eax*4 + 0x11bcfd40], ecx */
  w32((uint32_t)(EAX*4 + 0x11bcfd40), (ECX));
  /* 11ba9b62 mov edx, dword ptr [0x11bcfe7c] */
  EDX = (r32((uint32_t)(0x11bcfe7c)));
  /* 11ba9b68 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9b6b mov dword ptr [0x11bcfe7c], edx */
  w32((uint32_t)(0x11bcfe7c), (EDX));
  /* 11ba9b71 jmp 0x11ba9b7c */
  goto L_11ba9b7c;
L_11ba9b73:;
  /* 11ba9b73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9b76 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba9b7c:;
  /* 11ba9b7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9b7f mov edx, dword ptr [ecx*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba9b86 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9b8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9b8f jae 0x11ba9bb4 */
  if (!C.cf) goto L_11ba9bb4;
  /* 11ba9b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9b94 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ba9b98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9b9b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ba9ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9ba4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ba9ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9bab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ba9bb2 jmp 0x11ba9b73 */
  goto L_11ba9b73;
L_11ba9bb4:;
  /* 11ba9bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba9bb7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba9bba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba9bbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9bc0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9bc1 call 0x11ba9f10 */
  push32(0x11ba9bc6u); f_11ba9f10();
  /* 11ba9bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba9bc9:;
  /* 11ba9bc9 jmp 0x11ba9bd0 */
  goto L_11ba9bd0;
L_11ba9bcb:;
  /* 11ba9bcb jmp 0x11ba9a21 */
  goto L_11ba9a21;
L_11ba9bd0:;
  /* 11ba9bd0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11ba9bd2 call 0x11b9a770 */
  push32(0x11ba9bd7u); f_11b9a770();
  /* 11ba9bd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9bda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9bdd pop esi */
  ESI = (pop32());
  /* 11ba9bde mov esp, ebp */
  ESP = (EBP);
  /* 11ba9be0 pop ebp */
  EBP = (pop32());
  /* 11ba9be1 ret  */
  ESPCHK(0x11ba9a00u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11ba9bf0 (183 bytes, 57 insns) */
void f_11ba9bf0(void) {
  FTRACE(0x11ba9bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9bf7 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9bfd jae 0x11ba9c8a */
  if (!C.cf) goto L_11ba9c8a;
  /* 11ba9c03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9c06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba9c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9c0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9c0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9c12 mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba9c19 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9c1d jne 0x11ba9c8a */
  if (!C.zf) goto L_11ba9c8a;
  /* 11ba9c1f cmp dword ptr [0x11bce360], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce360))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9c26 jne 0x11ba9c6a */
  if (!C.zf) goto L_11ba9c6a;
  /* 11ba9c28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9c2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba9c2e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9c32 je 0x11ba9c42 */
  if (C.zf) goto L_11ba9c42;
  /* 11ba9c34 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9c38 je 0x11ba9c50 */
  if (C.zf) goto L_11ba9c50;
  /* 11ba9c3a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9c3e je 0x11ba9c5e */
  if (C.zf) goto L_11ba9c5e;
  /* 11ba9c40 jmp 0x11ba9c6a */
  goto L_11ba9c6a;
L_11ba9c42:;
  /* 11ba9c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9c45 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9c46 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ba9c48 call dword ptr [0x11bd0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0340))), 0x11ba9c4eu);
  /* 11ba9c4e jmp 0x11ba9c6a */
  goto L_11ba9c6a;
L_11ba9c50:;
  /* 11ba9c50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9c53 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9c54 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ba9c56 call dword ptr [0x11bd0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0340))), 0x11ba9c5cu);
  /* 11ba9c5c jmp 0x11ba9c6a */
  goto L_11ba9c6a;
L_11ba9c5e:;
  /* 11ba9c5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9c61 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9c62 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ba9c64 call dword ptr [0x11bd0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0340))), 0x11ba9c6au);
L_11ba9c6a:;
  /* 11ba9c6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9c6d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ba9c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9c73 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9c76 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9c79 mov ecx, dword ptr [edx*4 + 0x11bcfd40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11ba9c80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9c83 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11ba9c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9c88 jmp 0x11ba9ca3 */
  goto L_11ba9ca3;
L_11ba9c8a:;
  /* 11ba9c8a call 0x11ba6620 */
  push32(0x11ba9c8fu); f_11ba6620();
  /* 11ba9c8f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba9c95 call 0x11ba6630 */
  push32(0x11ba9c9au); f_11ba6630();
  /* 11ba9c9a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba9ca0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ba9ca3:;
  /* 11ba9ca3 mov esp, ebp */
  ESP = (EBP);
  /* 11ba9ca5 pop ebp */
  EBP = (pop32());
  /* 11ba9ca6 ret  */
  ESPCHK(0x11ba9bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019cb0 @ 0x11ba9cb0 (216 bytes, 63 insns) */
void f_11ba9cb0(void) {
  FTRACE(0x11ba9cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9cb7 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9cbd jae 0x11ba9d6b */
  if (!C.cf) goto L_11ba9d6b;
  /* 11ba9cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9cc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba9cc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9ccc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9ccf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9cd2 mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba9cd9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ba9cde and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9ce1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba9ce3 je 0x11ba9d6b */
  if (C.zf) goto L_11ba9d6b;
  /* 11ba9ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9cec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ba9cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9cf2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9cf5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9cf8 mov ecx, dword ptr [edx*4 + 0x11bcfd40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11ba9cff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9d03 je 0x11ba9d6b */
  if (C.zf) goto L_11ba9d6b;
  /* 11ba9d05 cmp dword ptr [0x11bce360], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce360))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9d0c jne 0x11ba9d4a */
  if (!C.zf) goto L_11ba9d4a;
  /* 11ba9d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9d11 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba9d14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9d18 je 0x11ba9d28 */
  if (C.zf) goto L_11ba9d28;
  /* 11ba9d1a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9d1e je 0x11ba9d34 */
  if (C.zf) goto L_11ba9d34;
  /* 11ba9d20 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9d24 je 0x11ba9d40 */
  if (C.zf) goto L_11ba9d40;
  /* 11ba9d26 jmp 0x11ba9d4a */
  goto L_11ba9d4a;
L_11ba9d28:;
  /* 11ba9d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba9d2a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ba9d2c call dword ptr [0x11bd0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0340))), 0x11ba9d32u);
  /* 11ba9d32 jmp 0x11ba9d4a */
  goto L_11ba9d4a;
L_11ba9d34:;
  /* 11ba9d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba9d36 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ba9d38 call dword ptr [0x11bd0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0340))), 0x11ba9d3eu);
  /* 11ba9d3e jmp 0x11ba9d4a */
  goto L_11ba9d4a;
L_11ba9d40:;
  /* 11ba9d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba9d42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ba9d44 call dword ptr [0x11bd0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0340))), 0x11ba9d4au);
L_11ba9d4a:;
  /* 11ba9d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9d4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba9d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9d53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9d56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9d59 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba9d60 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11ba9d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9d69 jmp 0x11ba9d84 */
  goto L_11ba9d84;
L_11ba9d6b:;
  /* 11ba9d6b call 0x11ba6620 */
  push32(0x11ba9d70u); f_11ba6620();
  /* 11ba9d70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba9d76 call 0x11ba6630 */
  push32(0x11ba9d7bu); f_11ba6630();
  /* 11ba9d7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba9d81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ba9d84:;
  /* 11ba9d84 mov esp, ebp */
  ESP = (EBP);
  /* 11ba9d86 pop ebp */
  EBP = (pop32());
  /* 11ba9d87 ret  */
  ESPCHK(0x11ba9cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d90 @ 0x11ba9d90 (102 bytes, 30 insns) */
void f_11ba9d90(void) {
  FTRACE(0x11ba9d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9d91 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9d96 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9d9c jae 0x11ba9ddb */
  if (!C.cf) goto L_11ba9ddb;
  /* 11ba9d9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9da1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba9da4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9da7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9daa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9dad mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba9db4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ba9db9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba9dbe je 0x11ba9ddb */
  if (C.zf) goto L_11ba9ddb;
  /* 11ba9dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9dc3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ba9dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9dc9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9dcc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9dcf mov ecx, dword ptr [edx*4 + 0x11bcfd40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11ba9dd6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11ba9dd9 jmp 0x11ba9df4 */
  goto L_11ba9df4;
L_11ba9ddb:;
  /* 11ba9ddb call 0x11ba6620 */
  push32(0x11ba9de0u); f_11ba6620();
  /* 11ba9de0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba9de6 call 0x11ba6630 */
  push32(0x11ba9debu); f_11ba6630();
  /* 11ba9deb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba9df1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ba9df4:;
  /* 11ba9df4 pop ebp */
  EBP = (pop32());
  /* 11ba9df5 ret  */
  ESPCHK(0x11ba9d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e00 @ 0x11ba9e00 (260 bytes, 83 insns) */
void f_11ba9e00(void) {
  FTRACE(0x11ba9e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9e01 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9e06 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba9e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9e0d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba9e12 je 0x11ba9e1d */
  if (C.zf) goto L_11ba9e1d;
  /* 11ba9e14 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9e17 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ba9e1a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11ba9e1d:;
  /* 11ba9e1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9e20 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba9e26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba9e28 je 0x11ba9e32 */
  if (C.zf) goto L_11ba9e32;
  /* 11ba9e2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9e2d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11ba9e2f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11ba9e32:;
  /* 11ba9e32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba9e35 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9e3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba9e3d je 0x11ba9e48 */
  if (C.zf) goto L_11ba9e48;
  /* 11ba9e3f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9e42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11ba9e45 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11ba9e48:;
  /* 11ba9e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9e4b push eax */
  push32((uint32_t)(EAX));
  /* 11ba9e4c call dword ptr [0x11bd03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03b4))), 0x11ba9e52u);
  /* 11ba9e52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba9e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9e59 jne 0x11ba9e72 */
  if (!C.zf) goto L_11ba9e72;
  /* 11ba9e5b call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11ba9e61u);
  /* 11ba9e61 push eax */
  push32((uint32_t)(EAX));
  /* 11ba9e62 call 0x11ba6580 */
  push32(0x11ba9e67u); f_11ba6580();
  /* 11ba9e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9e6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9e6d jmp 0x11ba9f00 */
  goto L_11ba9f00;
L_11ba9e72:;
  /* 11ba9e72 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9e76 jne 0x11ba9e83 */
  if (!C.zf) goto L_11ba9e83;
  /* 11ba9e78 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9e7b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11ba9e7e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11ba9e81 jmp 0x11ba9e92 */
  goto L_11ba9e92;
L_11ba9e83:;
  /* 11ba9e83 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9e87 jne 0x11ba9e92 */
  if (!C.zf) goto L_11ba9e92;
  /* 11ba9e89 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9e8c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ba9e8f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11ba9e92:;
  /* 11ba9e92 call 0x11ba9a00 */
  push32(0x11ba9e97u); f_11ba9a00();
  /* 11ba9e97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba9e9a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9e9e jne 0x11ba9ebb */
  if (!C.zf) goto L_11ba9ebb;
  /* 11ba9ea0 call 0x11ba6620 */
  push32(0x11ba9ea5u); f_11ba6620();
  /* 11ba9ea5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11ba9eab call 0x11ba6630 */
  push32(0x11ba9eb0u); f_11ba6630();
  /* 11ba9eb0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba9eb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba9eb9 jmp 0x11ba9f00 */
  goto L_11ba9f00;
L_11ba9ebb:;
  /* 11ba9ebb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9ebe push eax */
  push32((uint32_t)(EAX));
  /* 11ba9ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9ec3 call 0x11ba9bf0 */
  push32(0x11ba9ec8u); f_11ba9bf0();
  /* 11ba9ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9ecb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9ece or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11ba9ed1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11ba9ed4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9ed7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba9eda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9edd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9ee0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9ee3 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba9eea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba9eed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11ba9ef1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9ef5 call 0x11ba9fa0 */
  push32(0x11ba9efau); f_11ba9fa0();
  /* 11ba9efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9efd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ba9f00:;
  /* 11ba9f00 mov esp, ebp */
  ESP = (EBP);
  /* 11ba9f02 pop ebp */
  EBP = (pop32());
  /* 11ba9f03 ret  */
  ESPCHK(0x11ba9e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f10 @ 0x11ba9f10 (134 bytes, 44 insns) */
void f_11ba9f10(void) {
  FTRACE(0x11ba9f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9f11 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba9f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9f17 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba9f1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9f1d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9f20 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9f23 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba9f2a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9f2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba9f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9f32 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9f36 jne 0x11ba9f71 */
  if (!C.zf) goto L_11ba9f71;
  /* 11ba9f38 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ba9f3a call 0x11b9a6d0 */
  push32(0x11ba9f3fu); f_11b9a6d0();
  /* 11ba9f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9f42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9f45 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba9f49 jne 0x11ba9f67 */
  if (!C.zf) goto L_11ba9f67;
  /* 11ba9f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9f4e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9f51 push edx */
  push32((uint32_t)(EDX));
  /* 11ba9f52 call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11ba9f58u);
  /* 11ba9f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9f5b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba9f5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba9f64 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ba9f67:;
  /* 11ba9f67 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ba9f69 call 0x11b9a770 */
  push32(0x11ba9f6eu); f_11b9a770();
  /* 11ba9f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba9f71:;
  /* 11ba9f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9f74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba9f77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9f7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9f7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9f80 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba9f87 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11ba9f8b push eax */
  push32((uint32_t)(EAX));
  /* 11ba9f8c call dword ptr [0x11bd0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0410))), 0x11ba9f92u);
  /* 11ba9f92 mov esp, ebp */
  ESP = (EBP);
  /* 11ba9f94 pop ebp */
  EBP = (pop32());
  /* 11ba9f95 ret  */
  ESPCHK(0x11ba9f10u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11ba9fa0 (38 bytes, 13 insns) */
void f_11ba9fa0(void) {
  FTRACE(0x11ba9fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9fa6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba9fa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba9fac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba9faf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba9fb2 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba9fb9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11ba9fbd push eax */
  push32((uint32_t)(EAX));
  /* 11ba9fbe call dword ptr [0x11bd0428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0428))), 0x11ba9fc4u);
  /* 11ba9fc4 pop ebp */
  EBP = (pop32());
  /* 11ba9fc5 ret  */
  ESPCHK(0x11ba9fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fd0 @ 0x11ba9fd0 (218 bytes, 63 insns) */
void f_11ba9fd0(void) {
  FTRACE(0x11ba9fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba9fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba9fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba9fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba9fd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba9fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba9fdf call 0x11b9a6d0 */
  push32(0x11ba9fe4u); f_11b9a6d0();
  /* 11ba9fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9fe7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11ba9fee jmp 0x11ba9ff9 */
  goto L_11ba9ff9;
L_11ba9ff0:;
  /* 11ba9ff0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9ff3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba9ff6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba9ff9:;
  /* 11ba9ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba9ffc cmp ecx, dword ptr [0x11bcfd00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa002 jge 0x11baa099 */
  if ((C.sf==C.of)) goto L_11baa099;
  /* 11baa008 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa00b mov eax, dword ptr [0x11bce9a8] */
  EAX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa010 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa014 je 0x11baa094 */
  if (C.zf) goto L_11baa094;
  /* 11baa016 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa019 mov edx, dword ptr [0x11bce9a8] */
  EDX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa01f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11baa022 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11baa025 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11baa02b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baa02d je 0x11baa051 */
  if (C.zf) goto L_11baa051;
  /* 11baa02f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa032 mov eax, dword ptr [0x11bce9a8] */
  EAX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa037 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11baa03a push ecx */
  push32((uint32_t)(ECX));
  /* 11baa03b call 0x11bacf80 */
  push32(0x11baa040u); f_11bacf80();
  /* 11baa040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa043 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa046 je 0x11baa051 */
  if (C.zf) goto L_11baa051;
  /* 11baa048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa04b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa04e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11baa051:;
  /* 11baa051 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa055 jl 0x11baa094 */
  if ((C.sf!=C.of)) goto L_11baa094;
  /* 11baa057 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa05a mov ecx, dword ptr [0x11bce9a8] */
  ECX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa060 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11baa063 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa066 push edx */
  push32((uint32_t)(EDX));
  /* 11baa067 call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11baa06du);
  /* 11baa06d push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa06f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa072 mov ecx, dword ptr [0x11bce9a8] */
  ECX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa078 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11baa07b push edx */
  push32((uint32_t)(EDX));
  /* 11baa07c call 0x11b9b260 */
  push32(0x11baa081u); f_11b9b260();
  /* 11baa081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa087 mov ecx, dword ptr [0x11bce9a8] */
  ECX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa08d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11baa094:;
  /* 11baa094 jmp 0x11ba9ff0 */
  goto L_11ba9ff0;
L_11baa099:;
  /* 11baa099 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa09b call 0x11b9a770 */
  push32(0x11baa0a0u); f_11b9a770();
  /* 11baa0a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa0a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa0a6 mov esp, ebp */
  ESP = (EBP);
  /* 11baa0a8 pop ebp */
  EBP = (pop32());
  /* 11baa0a9 ret  */
  ESPCHK(0x11ba9fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a0b0 @ 0x11baa0b0 (68 bytes, 26 insns) */
void f_11baa0b0(void) {
  FTRACE(0x11baa0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa0b1 mov ebp, esp */
  EBP = (ESP);
  /* 11baa0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa0b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa0b8 jne 0x11baa0c6 */
  if (!C.zf) goto L_11baa0c6;
  /* 11baa0ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11baa0bc call 0x11baa220 */
  push32(0x11baa0c1u); f_11baa220();
  /* 11baa0c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa0c4 jmp 0x11baa0f0 */
  goto L_11baa0f0;
L_11baa0c6:;
  /* 11baa0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa0c9 push eax */
  push32((uint32_t)(EAX));
  /* 11baa0ca call 0x11ba5740 */
  push32(0x11baa0cfu); f_11ba5740();
  /* 11baa0cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa0d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa0d6 call 0x11baa100 */
  push32(0x11baa0dbu); f_11baa100();
  /* 11baa0db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa0de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baa0e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa0e4 push edx */
  push32((uint32_t)(EDX));
  /* 11baa0e5 call 0x11ba57b0 */
  push32(0x11baa0eau); f_11ba57b0();
  /* 11baa0ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa0ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11baa0f0:;
  /* 11baa0f0 mov esp, ebp */
  ESP = (EBP);
  /* 11baa0f2 pop ebp */
  EBP = (pop32());
  /* 11baa0f3 ret  */
  ESPCHK(0x11baa0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a100 @ 0x11baa100 (65 bytes, 26 insns) */
void f_11baa100(void) {
  FTRACE(0x11baa100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa100 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa101 mov ebp, esp */
  EBP = (ESP);
  /* 11baa103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa106 push eax */
  push32((uint32_t)(EAX));
  /* 11baa107 call 0x11baa150 */
  push32(0x11baa10cu); f_11baa150();
  /* 11baa10c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa10f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baa111 je 0x11baa118 */
  if (C.zf) goto L_11baa118;
  /* 11baa113 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa116 jmp 0x11baa13f */
  goto L_11baa13f;
L_11baa118:;
  /* 11baa118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa11b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baa11e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11baa124 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baa126 je 0x11baa13d */
  if (C.zf) goto L_11baa13d;
  /* 11baa128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa12b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11baa12e push ecx */
  push32((uint32_t)(ECX));
  /* 11baa12f call 0x11bad0d0 */
  push32(0x11baa134u); f_11bad0d0();
  /* 11baa134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa137 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11baa139 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa13b jmp 0x11baa13f */
  goto L_11baa13f;
L_11baa13d:;
  /* 11baa13d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baa13f:;
  /* 11baa13f pop ebp */
  EBP = (pop32());
  /* 11baa140 ret  */
  ESPCHK(0x11baa100u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a150 @ 0x11baa150 (183 bytes, 62 insns) */
void f_11baa150(void) {
  FTRACE(0x11baa150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa150 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa151 mov ebp, esp */
  EBP = (ESP);
  /* 11baa153 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa156 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baa15d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa160 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11baa163 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa166 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baa169 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11baa16c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa16f jne 0x11baa1eb */
  if (!C.zf) goto L_11baa1eb;
  /* 11baa171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa174 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11baa177 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11baa17d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baa17f je 0x11baa1eb */
  if (C.zf) goto L_11baa1eb;
  /* 11baa181 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa184 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa187 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11baa189 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa18c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa18f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa193 jle 0x11baa1eb */
  if ((C.zf||C.sf!=C.of)) goto L_11baa1eb;
  /* 11baa195 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa198 push edx */
  push32((uint32_t)(EDX));
  /* 11baa199 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa19c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11baa19f push ecx */
  push32((uint32_t)(ECX));
  /* 11baa1a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11baa1a6 push eax */
  push32((uint32_t)(EAX));
  /* 11baa1a7 call 0x11ba51d0 */
  push32(0x11baa1acu); f_11ba51d0();
  /* 11baa1ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa1af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa1b2 jne 0x11baa1d5 */
  if (!C.zf) goto L_11baa1d5;
  /* 11baa1b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baa1ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11baa1c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baa1c2 je 0x11baa1d3 */
  if (C.zf) goto L_11baa1d3;
  /* 11baa1c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11baa1ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11baa1cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11baa1d3:;
  /* 11baa1d3 jmp 0x11baa1eb */
  goto L_11baa1eb;
L_11baa1d5:;
  /* 11baa1d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11baa1db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11baa1de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11baa1e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11baa1eb:;
  /* 11baa1eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11baa1f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11baa1f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baa1f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11baa200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa203 mov esp, ebp */
  ESP = (EBP);
  /* 11baa205 pop ebp */
  EBP = (pop32());
  /* 11baa206 ret  */
  ESPCHK(0x11baa150u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a210 @ 0x11baa210 (15 bytes, 7 insns) */
void f_11baa210(void) {
  FTRACE(0x11baa210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa210 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa211 mov ebp, esp */
  EBP = (ESP);
  /* 11baa213 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa215 call 0x11baa220 */
  push32(0x11baa21au); f_11baa220();
  /* 11baa21a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa21d pop ebp */
  EBP = (pop32());
  /* 11baa21e ret  */
  ESPCHK(0x11baa210u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a220 @ 0x11baa220 (319 bytes, 94 insns) */
void f_11baa220(void) {
  FTRACE(0x11baa220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa220 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa221 mov ebp, esp */
  EBP = (ESP);
  /* 11baa223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa226 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baa22d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11baa234 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa236 call 0x11b9a6d0 */
  push32(0x11baa23bu); f_11b9a6d0();
  /* 11baa23b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa23e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11baa245 jmp 0x11baa250 */
  goto L_11baa250;
L_11baa247:;
  /* 11baa247 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa24a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa24d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11baa250:;
  /* 11baa250 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa253 cmp ecx, dword ptr [0x11bcfd00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa259 jge 0x11baa343 */
  if ((C.sf==C.of)) goto L_11baa343;
  /* 11baa25f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa262 mov eax, dword ptr [0x11bce9a8] */
  EAX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa267 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa26b je 0x11baa33e */
  if (C.zf) goto L_11baa33e;
  /* 11baa271 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa274 mov edx, dword ptr [0x11bce9a8] */
  EDX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa27a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11baa27d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11baa280 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11baa286 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baa288 je 0x11baa33e */
  if (C.zf) goto L_11baa33e;
  /* 11baa28e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa291 mov eax, dword ptr [0x11bce9a8] */
  EAX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa296 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11baa299 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa29a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa29d push edx */
  push32((uint32_t)(EDX));
  /* 11baa29e call 0x11ba5780 */
  push32(0x11baa2a3u); f_11ba5780();
  /* 11baa2a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa2a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa2a9 mov ecx, dword ptr [0x11bce9a8] */
  ECX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa2af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11baa2b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11baa2b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baa2bc je 0x11baa325 */
  if (C.zf) goto L_11baa325;
  /* 11baa2be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa2c2 jne 0x11baa2e9 */
  if (!C.zf) goto L_11baa2e9;
  /* 11baa2c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa2c7 mov edx, dword ptr [0x11bce9a8] */
  EDX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa2cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11baa2d0 push eax */
  push32((uint32_t)(EAX));
  /* 11baa2d1 call 0x11baa100 */
  push32(0x11baa2d6u); f_11baa100();
  /* 11baa2d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa2d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa2dc je 0x11baa2e7 */
  if (C.zf) goto L_11baa2e7;
  /* 11baa2de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa2e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa2e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11baa2e7:;
  /* 11baa2e7 jmp 0x11baa325 */
  goto L_11baa325;
L_11baa2e9:;
  /* 11baa2e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa2ed jne 0x11baa325 */
  if (!C.zf) goto L_11baa325;
  /* 11baa2ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa2f2 mov eax, dword ptr [0x11bce9a8] */
  EAX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa2f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11baa2fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baa2fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11baa300 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baa302 je 0x11baa325 */
  if (C.zf) goto L_11baa325;
  /* 11baa304 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa307 mov ecx, dword ptr [0x11bce9a8] */
  ECX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa30d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11baa310 push edx */
  push32((uint32_t)(EDX));
  /* 11baa311 call 0x11baa100 */
  push32(0x11baa316u); f_11baa100();
  /* 11baa316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa319 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa31c jne 0x11baa325 */
  if (!C.zf) goto L_11baa325;
  /* 11baa31e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11baa325:;
  /* 11baa325 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa328 mov ecx, dword ptr [0x11bce9a8] */
  ECX = (r32((uint32_t)(0x11bce9a8)));
  /* 11baa32e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11baa331 push edx */
  push32((uint32_t)(EDX));
  /* 11baa332 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa335 push eax */
  push32((uint32_t)(EAX));
  /* 11baa336 call 0x11ba57f0 */
  push32(0x11baa33bu); f_11ba57f0();
  /* 11baa33b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baa33e:;
  /* 11baa33e jmp 0x11baa247 */
  goto L_11baa247;
L_11baa343:;
  /* 11baa343 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa345 call 0x11b9a770 */
  push32(0x11baa34au); f_11b9a770();
  /* 11baa34a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa34d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa351 jne 0x11baa358 */
  if (!C.zf) goto L_11baa358;
  /* 11baa353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa356 jmp 0x11baa35b */
  goto L_11baa35b;
L_11baa358:;
  /* 11baa358 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11baa35b:;
  /* 11baa35b mov esp, ebp */
  ESP = (EBP);
  /* 11baa35d pop ebp */
  EBP = (pop32());
  /* 11baa35e ret  */
  ESPCHK(0x11baa220u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a360 @ 0x11baa360 (62 bytes, 21 insns) */
void f_11baa360(void) {
  FTRACE(0x11baa360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa360 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa361 mov ebp, esp */
  EBP = (ESP);
  /* 11baa363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa369 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11baa36c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa36f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11baa372 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baa375 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa37b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11baa37e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa381 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa386 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa38b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa38e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11baa391 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11baa393 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11baa397 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11baa39a mov esp, ebp */
  ESP = (EBP);
  /* 11baa39c pop ebp */
  EBP = (pop32());
  /* 11baa39d ret  */
  ESPCHK(0x11baa360u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3a0 @ 0x11baa3a0 (45 bytes, 15 insns) */
void f_11baa3a0(void) {
  FTRACE(0x11baa3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa3a1 mov ebp, esp */
  EBP = (ESP);
  /* 11baa3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa3a4 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa3a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa3ac and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa3b1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11baa3b4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11baa3b8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11baa3bc sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11baa3c1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11baa3c5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11baa3c9 mov esp, ebp */
  ESP = (EBP);
  /* 11baa3cb pop ebp */
  EBP = (pop32());
  /* 11baa3cc ret  */
  ESPCHK(0x11baa3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3d0 @ 0x11baa3d0 (51 bytes, 18 insns) */
void f_11baa3d0(void) {
  FTRACE(0x11baa3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11baa3d3 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa3d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa3db and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa3e0 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11baa3e3 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11baa3e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baa3e9 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11baa3f0 push eax */
  push32((uint32_t)(EAX));
  /* 11baa3f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa3f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa3f8 push edx */
  push32((uint32_t)(EDX));
  /* 11baa3f9 call 0x11baa360 */
  push32(0x11baa3feu); f_11baa360();
  /* 11baa3fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa401 pop ebp */
  EBP = (pop32());
  /* 11baa402 ret  */
  ESPCHK(0x11baa3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a410 @ 0x11baa410 (52 bytes, 18 insns) */
void f_11baa410(void) {
  FTRACE(0x11baa410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa410 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa411 mov ebp, esp */
  EBP = (ESP);
  /* 11baa413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa419 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11baa41c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa41f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11baa422 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa425 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11baa42b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11baa431 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baa434 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11baa437 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11baa439 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11baa43d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11baa440 mov esp, ebp */
  ESP = (EBP);
  /* 11baa442 pop ebp */
  EBP = (pop32());
  /* 11baa443 ret  */
  ESPCHK(0x11baa410u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a450 @ 0x11baa450 (124 bytes, 37 insns) */
void f_11baa450(void) {
  FTRACE(0x11baa450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa450 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa451 mov ebp, esp */
  EBP = (ESP);
  /* 11baa453 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa45a jne 0x11baa469 */
  if (!C.zf) goto L_11baa469;
  /* 11baa45c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa460 jne 0x11baa469 */
  if (!C.zf) goto L_11baa469;
  /* 11baa462 mov eax, 1 */
  EAX = (0x1u);
  /* 11baa467 jmp 0x11baa4ca */
  goto L_11baa4ca;
L_11baa469:;
  /* 11baa469 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa470 jne 0x11baa47f */
  if (!C.zf) goto L_11baa47f;
  /* 11baa472 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa476 jne 0x11baa47f */
  if (!C.zf) goto L_11baa47f;
  /* 11baa478 mov eax, 2 */
  EAX = (0x2u);
  /* 11baa47d jmp 0x11baa4ca */
  goto L_11baa4ca;
L_11baa47f:;
  /* 11baa47f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa482 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa487 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa48c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa491 jne 0x11baa49a */
  if (!C.zf) goto L_11baa49a;
  /* 11baa493 mov eax, 3 */
  EAX = (0x3u);
  /* 11baa498 jmp 0x11baa4ca */
  goto L_11baa4ca;
L_11baa49a:;
  /* 11baa49a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa49d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11baa4a3 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11baa4a9 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa4af jne 0x11baa4c8 */
  if (!C.zf) goto L_11baa4c8;
  /* 11baa4b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa4b4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11baa4b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baa4b9 jne 0x11baa4c1 */
  if (!C.zf) goto L_11baa4c1;
  /* 11baa4bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa4bf je 0x11baa4c8 */
  if (C.zf) goto L_11baa4c8;
L_11baa4c1:;
  /* 11baa4c1 mov eax, 4 */
  EAX = (0x4u);
  /* 11baa4c6 jmp 0x11baa4ca */
  goto L_11baa4ca;
L_11baa4c8:;
  /* 11baa4c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baa4ca:;
  /* 11baa4ca pop ebp */
  EBP = (pop32());
  /* 11baa4cb ret  */
  ESPCHK(0x11baa450u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a4d0 @ 0x11baa4d0 (313 bytes, 95 insns) */
void f_11baa4d0(void) {
  FTRACE(0x11baa4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11baa4d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa4d6 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11baa4d9 fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11baa4df fnstsw ax */
  AX = fpu_status();
  /* 11baa4e1 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11baa4e4 je 0x11baa500 */
  if (C.zf) goto L_11baa500;
  /* 11baa4e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11baa4ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11baa4f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baa4fb jmp 0x11baa5fa */
  goto L_11baa5fa;
L_11baa500:;
  /* 11baa500 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa503 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa508 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baa50f jne 0x11baa5c9 */
  if (!C.zf) goto L_11baa5c9;
  /* 11baa515 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa518 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11baa51b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baa51d jne 0x11baa529 */
  if (!C.zf) goto L_11baa529;
  /* 11baa51f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa523 je 0x11baa5c9 */
  if (C.zf) goto L_11baa5c9;
L_11baa529:;
  /* 11baa529 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11baa530 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11baa533 fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11baa539 fnstsw ax */
  AX = fpu_status();
  /* 11baa53b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11baa53e je 0x11baa549 */
  if (C.zf) goto L_11baa549;
  /* 11baa540 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11baa547 jmp 0x11baa550 */
  goto L_11baa550;
L_11baa549:;
  /* 11baa549 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11baa550:;
  /* 11baa550 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11baa553 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11baa556:;
  /* 11baa556 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa559 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa55e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baa563 jne 0x11baa595 */
  if (!C.zf) goto L_11baa595;
  /* 11baa565 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa568 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11baa56a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11baa56d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa570 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11baa576 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baa578 je 0x11baa582 */
  if (C.zf) goto L_11baa582;
  /* 11baa57a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa57d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11baa57f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11baa582:;
  /* 11baa582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa585 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11baa587 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11baa58a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa58d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa590 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11baa593 jmp 0x11baa556 */
  goto L_11baa556;
L_11baa595:;
  /* 11baa595 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11baa599 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11baa59d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11baa5a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa5a5 je 0x11baa5b2 */
  if (C.zf) goto L_11baa5b2;
  /* 11baa5a7 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11baa5ab or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11baa5ae mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11baa5b2:;
  /* 11baa5b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baa5b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa5b7 push edx */
  push32((uint32_t)(EDX));
  /* 11baa5b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa5bb push eax */
  push32((uint32_t)(EAX));
  /* 11baa5bc call 0x11baa360 */
  push32(0x11baa5c1u); f_11baa360();
  /* 11baa5c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa5c4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11baa5c7 jmp 0x11baa5fa */
  goto L_11baa5fa;
L_11baa5c9:;
  /* 11baa5c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baa5cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baa5ce push ecx */
  push32((uint32_t)(ECX));
  /* 11baa5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa5d2 push edx */
  push32((uint32_t)(EDX));
  /* 11baa5d3 call 0x11baa360 */
  push32(0x11baa5d8u); f_11baa360();
  /* 11baa5d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa5db fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11baa5de mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11baa5e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa5e6 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11baa5eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11baa5ee movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11baa5f1 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa5f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11baa5fa:;
  /* 11baa5fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baa5fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa600 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11baa602 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11baa605 mov esp, ebp */
  ESP = (EBP);
  /* 11baa607 pop ebp */
  EBP = (pop32());
  /* 11baa608 ret  */
  ESPCHK(0x11baa4d0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11baa610 (219 bytes, 64 insns) */
void f_11baa610(void) {
  FTRACE(0x11baa610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa610 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa611 mov ebp, esp */
  EBP = (ESP);
  /* 11baa613 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa614 cmp dword ptr [0x11bce648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa61b je 0x11baa6b1 */
  if (C.zf) goto L_11baa6b1;
  /* 11baa621 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11baa623 push 0x11bc94b4 */
  push32((uint32_t)(0x11bc94b4u));
  /* 11baa628 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa62a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11baa62f push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa631 call 0x11b9abe0 */
  push32(0x11baa636u); f_11b9abe0();
  /* 11baa636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baa63c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa640 jne 0x11baa64c */
  if (!C.zf) goto L_11baa64c;
  /* 11baa642 mov eax, 1 */
  EAX = (0x1u);
  /* 11baa647 jmp 0x11baa6e7 */
  goto L_11baa6e7;
L_11baa64c:;
  /* 11baa64c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa64f push eax */
  push32((uint32_t)(EAX));
  /* 11baa650 call 0x11baa6f0 */
  push32(0x11baa655u); f_11baa6f0();
  /* 11baa655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baa65a je 0x11baa67d */
  if (C.zf) goto L_11baa67d;
  /* 11baa65c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa65f push ecx */
  push32((uint32_t)(ECX));
  /* 11baa660 call 0x11baac80 */
  push32(0x11baa665u); f_11baac80();
  /* 11baa665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa668 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa66a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa66d push edx */
  push32((uint32_t)(EDX));
  /* 11baa66e call 0x11b9b260 */
  push32(0x11baa673u); f_11b9b260();
  /* 11baa673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa676 mov eax, 1 */
  EAX = (0x1u);
  /* 11baa67b jmp 0x11baa6e7 */
  goto L_11baa6e7;
L_11baa67d:;
  /* 11baa67d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa680 mov dword ptr [0x11bcd2f0], eax */
  w32((uint32_t)(0x11bcd2f0), (EAX));
  /* 11baa685 mov ecx, dword ptr [0x11bce658] */
  ECX = (r32((uint32_t)(0x11bce658)));
  /* 11baa68b push ecx */
  push32((uint32_t)(ECX));
  /* 11baa68c call 0x11baac80 */
  push32(0x11baa691u); f_11baac80();
  /* 11baa691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa694 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa696 mov edx, dword ptr [0x11bce658] */
  EDX = (r32((uint32_t)(0x11bce658)));
  /* 11baa69c push edx */
  push32((uint32_t)(EDX));
  /* 11baa69d call 0x11b9b260 */
  push32(0x11baa6a2u); f_11b9b260();
  /* 11baa6a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa6a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa6a8 mov dword ptr [0x11bce658], eax */
  w32((uint32_t)(0x11bce658), (EAX));
  /* 11baa6ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baa6af jmp 0x11baa6e7 */
  goto L_11baa6e7;
L_11baa6b1:;
  /* 11baa6b1 mov dword ptr [0x11bcd2f0], 0x11bcd2f8 */
  w32((uint32_t)(0x11bcd2f0), (0x11bcd2f8u));
  /* 11baa6bb mov ecx, dword ptr [0x11bce658] */
  ECX = (r32((uint32_t)(0x11bce658)));
  /* 11baa6c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11baa6c2 call 0x11baac80 */
  push32(0x11baa6c7u); f_11baac80();
  /* 11baa6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa6ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11baa6cc mov edx, dword ptr [0x11bce658] */
  EDX = (r32((uint32_t)(0x11bce658)));
  /* 11baa6d2 push edx */
  push32((uint32_t)(EDX));
  /* 11baa6d3 call 0x11b9b260 */
  push32(0x11baa6d8u); f_11b9b260();
  /* 11baa6d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa6db mov dword ptr [0x11bce658], 0 */
  w32((uint32_t)(0x11bce658), (0x0u));
  /* 11baa6e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baa6e7:;
  /* 11baa6e7 mov esp, ebp */
  ESP = (EBP);
  /* 11baa6e9 pop ebp */
  EBP = (pop32());
  /* 11baa6ea ret  */
  ESPCHK(0x11baa610u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a6f0 @ 0x11baa6f0 (1423 bytes, 533 insns) */
void f_11baa6f0(void) {
  FTRACE(0x11baa6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baa6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baa6f1 mov ebp, esp */
  EBP = (ESP);
  /* 11baa6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baa6f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11baa6fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baa6ff mov ax, word ptr [0x11bce692] */
  AX = (r16((uint32_t)(0x11bce692)));
  /* 11baa705 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baa708 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa70a mov cx, word ptr [0x11bce694] */
  CX = (r16((uint32_t)(0x11bce694)));
  /* 11baa711 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11baa714 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baa718 jne 0x11baa722 */
  if (!C.zf) goto L_11baa722;
  /* 11baa71a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baa71d jmp 0x11baac7b */
  goto L_11baac7b;
L_11baa722:;
  /* 11baa722 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa725 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa728 push edx */
  push32((uint32_t)(EDX));
  /* 11baa729 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11baa72b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa72e push eax */
  push32((uint32_t)(EAX));
  /* 11baa72f push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa731 call 0x11bae620 */
  push32(0x11baa736u); f_11bae620();
  /* 11baa736 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa739 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa73c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa73e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa744 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa747 push edx */
  push32((uint32_t)(EDX));
  /* 11baa748 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11baa74a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa74d push eax */
  push32((uint32_t)(EAX));
  /* 11baa74e push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa750 call 0x11bae620 */
  push32(0x11baa755u); f_11bae620();
  /* 11baa755 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa758 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa75b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa75d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa760 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa763 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa766 push edx */
  push32((uint32_t)(EDX));
  /* 11baa767 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11baa769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa76c push eax */
  push32((uint32_t)(EAX));
  /* 11baa76d push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa76f call 0x11bae620 */
  push32(0x11baa774u); f_11bae620();
  /* 11baa774 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa777 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa77a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa77c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa77f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa782 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa785 push edx */
  push32((uint32_t)(EDX));
  /* 11baa786 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11baa788 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa78b push eax */
  push32((uint32_t)(EAX));
  /* 11baa78c push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa78e call 0x11bae620 */
  push32(0x11baa793u); f_11bae620();
  /* 11baa793 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa796 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa799 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa79b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa7a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa7a4 push edx */
  push32((uint32_t)(EDX));
  /* 11baa7a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11baa7a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa7aa push eax */
  push32((uint32_t)(EAX));
  /* 11baa7ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa7ad call 0x11bae620 */
  push32(0x11baa7b2u); f_11bae620();
  /* 11baa7b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa7b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa7b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa7ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa7bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa7c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa7c3 push edx */
  push32((uint32_t)(EDX));
  /* 11baa7c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11baa7c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa7c9 push eax */
  push32((uint32_t)(EAX));
  /* 11baa7ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa7cc call 0x11bae620 */
  push32(0x11baa7d1u); f_11bae620();
  /* 11baa7d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa7d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa7d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa7d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa7dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa7df push edx */
  push32((uint32_t)(EDX));
  /* 11baa7e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11baa7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa7e5 push eax */
  push32((uint32_t)(EAX));
  /* 11baa7e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa7e8 call 0x11bae620 */
  push32(0x11baa7edu); f_11bae620();
  /* 11baa7ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa7f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa7f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa7f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa7f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa7fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa7fe push edx */
  push32((uint32_t)(EDX));
  /* 11baa7ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11baa801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa804 push eax */
  push32((uint32_t)(EAX));
  /* 11baa805 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa807 call 0x11bae620 */
  push32(0x11baa80cu); f_11bae620();
  /* 11baa80c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa80f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa812 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa814 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa81a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa81d push edx */
  push32((uint32_t)(EDX));
  /* 11baa81e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11baa820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa823 push eax */
  push32((uint32_t)(EAX));
  /* 11baa824 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa826 call 0x11bae620 */
  push32(0x11baa82bu); f_11bae620();
  /* 11baa82b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa82e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa831 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa833 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa836 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa839 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa83c push edx */
  push32((uint32_t)(EDX));
  /* 11baa83d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11baa83f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa842 push eax */
  push32((uint32_t)(EAX));
  /* 11baa843 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa845 call 0x11bae620 */
  push32(0x11baa84au); f_11bae620();
  /* 11baa84a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa84d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa850 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa852 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa858 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa85b push edx */
  push32((uint32_t)(EDX));
  /* 11baa85c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11baa85e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa861 push eax */
  push32((uint32_t)(EAX));
  /* 11baa862 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa864 call 0x11bae620 */
  push32(0x11baa869u); f_11bae620();
  /* 11baa869 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa86c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa86f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa871 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa877 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa87a push edx */
  push32((uint32_t)(EDX));
  /* 11baa87b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11baa87d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa880 push eax */
  push32((uint32_t)(EAX));
  /* 11baa881 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa883 call 0x11bae620 */
  push32(0x11baa888u); f_11bae620();
  /* 11baa888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa88b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa88e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa890 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa896 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa899 push edx */
  push32((uint32_t)(EDX));
  /* 11baa89a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11baa89c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa89f push eax */
  push32((uint32_t)(EAX));
  /* 11baa8a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa8a2 call 0x11bae620 */
  push32(0x11baa8a7u); f_11bae620();
  /* 11baa8a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa8aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa8ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa8af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa8b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa8b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa8b8 push edx */
  push32((uint32_t)(EDX));
  /* 11baa8b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11baa8bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa8be push eax */
  push32((uint32_t)(EAX));
  /* 11baa8bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa8c1 call 0x11bae620 */
  push32(0x11baa8c6u); f_11bae620();
  /* 11baa8c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa8c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa8cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa8ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa8d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa8d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa8d7 push edx */
  push32((uint32_t)(EDX));
  /* 11baa8d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11baa8da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa8dd push eax */
  push32((uint32_t)(EAX));
  /* 11baa8de push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa8e0 call 0x11bae620 */
  push32(0x11baa8e5u); f_11bae620();
  /* 11baa8e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa8e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa8eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa8ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa8f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa8f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa8f6 push edx */
  push32((uint32_t)(EDX));
  /* 11baa8f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11baa8f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa8fc push eax */
  push32((uint32_t)(EAX));
  /* 11baa8fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa8ff call 0x11bae620 */
  push32(0x11baa904u); f_11bae620();
  /* 11baa904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa907 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa90a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa90c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa90f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa912 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa915 push edx */
  push32((uint32_t)(EDX));
  /* 11baa916 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11baa918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa91b push eax */
  push32((uint32_t)(EAX));
  /* 11baa91c push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa91e call 0x11bae620 */
  push32(0x11baa923u); f_11bae620();
  /* 11baa923 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa926 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa929 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa92b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa92e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa931 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa934 push edx */
  push32((uint32_t)(EDX));
  /* 11baa935 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11baa937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa93a push eax */
  push32((uint32_t)(EAX));
  /* 11baa93b push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa93d call 0x11bae620 */
  push32(0x11baa942u); f_11bae620();
  /* 11baa942 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa948 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa94a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa94d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa950 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa953 push edx */
  push32((uint32_t)(EDX));
  /* 11baa954 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11baa956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa959 push eax */
  push32((uint32_t)(EAX));
  /* 11baa95a push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa95c call 0x11bae620 */
  push32(0x11baa961u); f_11bae620();
  /* 11baa961 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa964 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa967 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa969 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa96c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa96f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa972 push edx */
  push32((uint32_t)(EDX));
  /* 11baa973 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11baa975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa978 push eax */
  push32((uint32_t)(EAX));
  /* 11baa979 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa97b call 0x11bae620 */
  push32(0x11baa980u); f_11bae620();
  /* 11baa980 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa983 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa986 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa988 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa98b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa98e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa991 push edx */
  push32((uint32_t)(EDX));
  /* 11baa992 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11baa994 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa997 push eax */
  push32((uint32_t)(EAX));
  /* 11baa998 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa99a call 0x11bae620 */
  push32(0x11baa99fu); f_11bae620();
  /* 11baa99f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa9a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa9a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa9aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa9ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9b0 push edx */
  push32((uint32_t)(EDX));
  /* 11baa9b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11baa9b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa9b6 push eax */
  push32((uint32_t)(EAX));
  /* 11baa9b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa9b9 call 0x11bae620 */
  push32(0x11baa9beu); f_11bae620();
  /* 11baa9be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa9c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa9c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa9c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa9cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9cf push edx */
  push32((uint32_t)(EDX));
  /* 11baa9d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11baa9d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa9d5 push eax */
  push32((uint32_t)(EAX));
  /* 11baa9d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa9d8 call 0x11bae620 */
  push32(0x11baa9ddu); f_11bae620();
  /* 11baa9dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baa9e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baa9e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baa9e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baa9eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9ee push edx */
  push32((uint32_t)(EDX));
  /* 11baa9ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11baa9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baa9f4 push eax */
  push32((uint32_t)(EAX));
  /* 11baa9f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baa9f7 call 0x11bae620 */
  push32(0x11baa9fcu); f_11bae620();
  /* 11baa9fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baa9ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaa02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaa04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaa07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaa0a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa0d push edx */
  push32((uint32_t)(EDX));
  /* 11baaa0e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11baaa10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaa13 push eax */
  push32((uint32_t)(EAX));
  /* 11baaa14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaa16 call 0x11bae620 */
  push32(0x11baaa1bu); f_11bae620();
  /* 11baaa1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaa21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaa23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaa26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaa29 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa2c push edx */
  push32((uint32_t)(EDX));
  /* 11baaa2d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11baaa2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaa32 push eax */
  push32((uint32_t)(EAX));
  /* 11baaa33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaa35 call 0x11bae620 */
  push32(0x11baaa3au); f_11bae620();
  /* 11baaa3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaa40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaa42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaa45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaa48 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa4b push edx */
  push32((uint32_t)(EDX));
  /* 11baaa4c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11baaa4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaa51 push eax */
  push32((uint32_t)(EAX));
  /* 11baaa52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaa54 call 0x11bae620 */
  push32(0x11baaa59u); f_11bae620();
  /* 11baaa59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaa5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaa61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaa64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaa67 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa6a push edx */
  push32((uint32_t)(EDX));
  /* 11baaa6b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11baaa6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaa70 push eax */
  push32((uint32_t)(EAX));
  /* 11baaa71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaa73 call 0x11bae620 */
  push32(0x11baaa78u); f_11bae620();
  /* 11baaa78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaa7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaa80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaa83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaa86 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa89 push edx */
  push32((uint32_t)(EDX));
  /* 11baaa8a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11baaa8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaa8f push eax */
  push32((uint32_t)(EAX));
  /* 11baaa90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaa92 call 0x11bae620 */
  push32(0x11baaa97u); f_11bae620();
  /* 11baaa97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaa9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaa9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaa9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaaa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaaa5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaaa8 push edx */
  push32((uint32_t)(EDX));
  /* 11baaaa9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11baaaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaaae push eax */
  push32((uint32_t)(EAX));
  /* 11baaaaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaab1 call 0x11bae620 */
  push32(0x11baaab6u); f_11bae620();
  /* 11baaab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaab9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaabc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaabe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaac4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaac7 push edx */
  push32((uint32_t)(EDX));
  /* 11baaac8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11baaaca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaacd push eax */
  push32((uint32_t)(EAX));
  /* 11baaace push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaad0 call 0x11bae620 */
  push32(0x11baaad5u); f_11bae620();
  /* 11baaad5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaad8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaadb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaadd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaae3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaae6 push edx */
  push32((uint32_t)(EDX));
  /* 11baaae7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11baaae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaaec push eax */
  push32((uint32_t)(EAX));
  /* 11baaaed push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaaef call 0x11bae620 */
  push32(0x11baaaf4u); f_11bae620();
  /* 11baaaf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaaf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaafa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaaff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baab02 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab08 push edx */
  push32((uint32_t)(EDX));
  /* 11baab09 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11baab0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baab0e push eax */
  push32((uint32_t)(EAX));
  /* 11baab0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11baab11 call 0x11bae620 */
  push32(0x11baab16u); f_11bae620();
  /* 11baab16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baab1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baab1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baab21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baab24 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab2a push edx */
  push32((uint32_t)(EDX));
  /* 11baab2b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11baab2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baab30 push eax */
  push32((uint32_t)(EAX));
  /* 11baab31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baab33 call 0x11bae620 */
  push32(0x11baab38u); f_11bae620();
  /* 11baab38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baab3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baab40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baab43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baab46 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab4c push edx */
  push32((uint32_t)(EDX));
  /* 11baab4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11baab4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baab52 push eax */
  push32((uint32_t)(EAX));
  /* 11baab53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baab55 call 0x11bae620 */
  push32(0x11baab5au); f_11bae620();
  /* 11baab5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baab60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baab62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baab65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baab68 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab6e push edx */
  push32((uint32_t)(EDX));
  /* 11baab6f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11baab71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baab74 push eax */
  push32((uint32_t)(EAX));
  /* 11baab75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baab77 call 0x11bae620 */
  push32(0x11baab7cu); f_11bae620();
  /* 11baab7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baab82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baab84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baab87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baab8a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baab90 push edx */
  push32((uint32_t)(EDX));
  /* 11baab91 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11baab93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baab96 push eax */
  push32((uint32_t)(EAX));
  /* 11baab97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baab99 call 0x11bae620 */
  push32(0x11baab9eu); f_11bae620();
  /* 11baab9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaba1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baaba4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baaba6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baaba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baabac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baabb2 push edx */
  push32((uint32_t)(EDX));
  /* 11baabb3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11baabb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baabb8 push eax */
  push32((uint32_t)(EAX));
  /* 11baabb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baabbb call 0x11bae620 */
  push32(0x11baabc0u); f_11bae620();
  /* 11baabc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baabc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baabc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baabc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baabcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baabce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baabd4 push edx */
  push32((uint32_t)(EDX));
  /* 11baabd5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11baabd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baabda push eax */
  push32((uint32_t)(EAX));
  /* 11baabdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11baabdd call 0x11bae620 */
  push32(0x11baabe2u); f_11bae620();
  /* 11baabe2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baabe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baabe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baabea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baabed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baabf0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baabf6 push edx */
  push32((uint32_t)(EDX));
  /* 11baabf7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11baabf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baabfc push eax */
  push32((uint32_t)(EAX));
  /* 11baabfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11baabff call 0x11bae620 */
  push32(0x11baac04u); f_11bae620();
  /* 11baac04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baac0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baac0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baac0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baac12 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac18 push edx */
  push32((uint32_t)(EDX));
  /* 11baac19 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11baac1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baac1e push eax */
  push32((uint32_t)(EAX));
  /* 11baac1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11baac21 call 0x11bae620 */
  push32(0x11baac26u); f_11bae620();
  /* 11baac26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baac2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baac2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baac31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baac34 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac3a push edx */
  push32((uint32_t)(EDX));
  /* 11baac3b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11baac3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baac40 push eax */
  push32((uint32_t)(EAX));
  /* 11baac41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baac43 call 0x11bae620 */
  push32(0x11baac48u); f_11bae620();
  /* 11baac48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baac4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baac50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baac53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baac56 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac5c push edx */
  push32((uint32_t)(EDX));
  /* 11baac5d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11baac62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baac65 push eax */
  push32((uint32_t)(EAX));
  /* 11baac66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baac68 call 0x11bae620 */
  push32(0x11baac6du); f_11bae620();
  /* 11baac6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baac73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baac75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baac78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11baac7b:;
  /* 11baac7b mov esp, ebp */
  ESP = (EBP);
  /* 11baac7d pop ebp */
  EBP = (pop32());
  /* 11baac7e ret  */
  ESPCHK(0x11baa6f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11baac80 (779 bytes, 265 insns) */
void f_11baac80(void) {
  FTRACE(0x11baac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baac80 push ebp */
  push32((uint32_t)(EBP));
  /* 11baac81 mov ebp, esp */
  EBP = (ESP);
  /* 11baac83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baac87 jne 0x11baac8e */
  if (!C.zf) goto L_11baac8e;
  /* 11baac89 jmp 0x11baaf89 */
  goto L_11baaf89;
L_11baac8e:;
  /* 11baac8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11baac90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baac93 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11baac96 push ecx */
  push32((uint32_t)(ECX));
  /* 11baac97 call 0x11b9b260 */
  push32(0x11baac9cu); f_11b9b260();
  /* 11baac9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baac9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaca4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11baaca7 push eax */
  push32((uint32_t)(EAX));
  /* 11baaca8 call 0x11b9b260 */
  push32(0x11baacadu); f_11b9b260();
  /* 11baacad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baacb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baacb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baacb5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baacb8 push edx */
  push32((uint32_t)(EDX));
  /* 11baacb9 call 0x11b9b260 */
  push32(0x11baacbeu); f_11b9b260();
  /* 11baacbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baacc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baacc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baacc6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11baacc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11baacca call 0x11b9b260 */
  push32(0x11baaccfu); f_11b9b260();
  /* 11baaccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baacd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baacd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baacd7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11baacda push eax */
  push32((uint32_t)(EAX));
  /* 11baacdb call 0x11b9b260 */
  push32(0x11baace0u); f_11b9b260();
  /* 11baace0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baace3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baace5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baace8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11baaceb push edx */
  push32((uint32_t)(EDX));
  /* 11baacec call 0x11b9b260 */
  push32(0x11baacf1u); f_11b9b260();
  /* 11baacf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baacf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baacf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baacf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11baacfb push ecx */
  push32((uint32_t)(ECX));
  /* 11baacfc call 0x11b9b260 */
  push32(0x11baad01u); f_11b9b260();
  /* 11baad01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad09 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11baad0c push eax */
  push32((uint32_t)(EAX));
  /* 11baad0d call 0x11b9b260 */
  push32(0x11baad12u); f_11b9b260();
  /* 11baad12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad1a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11baad1d push edx */
  push32((uint32_t)(EDX));
  /* 11baad1e call 0x11b9b260 */
  push32(0x11baad23u); f_11b9b260();
  /* 11baad23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad2b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11baad2e push ecx */
  push32((uint32_t)(ECX));
  /* 11baad2f call 0x11b9b260 */
  push32(0x11baad34u); f_11b9b260();
  /* 11baad34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad3c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11baad3f push eax */
  push32((uint32_t)(EAX));
  /* 11baad40 call 0x11b9b260 */
  push32(0x11baad45u); f_11b9b260();
  /* 11baad45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad4d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11baad50 push edx */
  push32((uint32_t)(EDX));
  /* 11baad51 call 0x11b9b260 */
  push32(0x11baad56u); f_11b9b260();
  /* 11baad56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad5e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11baad61 push ecx */
  push32((uint32_t)(ECX));
  /* 11baad62 call 0x11b9b260 */
  push32(0x11baad67u); f_11b9b260();
  /* 11baad67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad6f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11baad72 push eax */
  push32((uint32_t)(EAX));
  /* 11baad73 call 0x11b9b260 */
  push32(0x11baad78u); f_11b9b260();
  /* 11baad78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad7b push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad80 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11baad83 push edx */
  push32((uint32_t)(EDX));
  /* 11baad84 call 0x11b9b260 */
  push32(0x11baad89u); f_11b9b260();
  /* 11baad89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad8c push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baad91 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11baad94 push ecx */
  push32((uint32_t)(ECX));
  /* 11baad95 call 0x11b9b260 */
  push32(0x11baad9au); f_11b9b260();
  /* 11baad9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baad9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11baad9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baada2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11baada5 push eax */
  push32((uint32_t)(EAX));
  /* 11baada6 call 0x11b9b260 */
  push32(0x11baadabu); f_11b9b260();
  /* 11baadab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baadae push 2 */
  push32((uint32_t)(0x2u));
  /* 11baadb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baadb3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11baadb6 push edx */
  push32((uint32_t)(EDX));
  /* 11baadb7 call 0x11b9b260 */
  push32(0x11baadbcu); f_11b9b260();
  /* 11baadbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baadbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11baadc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baadc4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11baadc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11baadc8 call 0x11b9b260 */
  push32(0x11baadcdu); f_11b9b260();
  /* 11baadcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baadd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baadd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baadd5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11baadd8 push eax */
  push32((uint32_t)(EAX));
  /* 11baadd9 call 0x11b9b260 */
  push32(0x11baaddeu); f_11b9b260();
  /* 11baadde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baade1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baade3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baade6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11baade9 push edx */
  push32((uint32_t)(EDX));
  /* 11baadea call 0x11b9b260 */
  push32(0x11baadefu); f_11b9b260();
  /* 11baadef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baadf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baadf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baadf7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11baadfa push ecx */
  push32((uint32_t)(ECX));
  /* 11baadfb call 0x11b9b260 */
  push32(0x11baae00u); f_11b9b260();
  /* 11baae00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11baae0b push eax */
  push32((uint32_t)(EAX));
  /* 11baae0c call 0x11b9b260 */
  push32(0x11baae11u); f_11b9b260();
  /* 11baae11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11baae1c push edx */
  push32((uint32_t)(EDX));
  /* 11baae1d call 0x11b9b260 */
  push32(0x11baae22u); f_11b9b260();
  /* 11baae22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11baae2d push ecx */
  push32((uint32_t)(ECX));
  /* 11baae2e call 0x11b9b260 */
  push32(0x11baae33u); f_11b9b260();
  /* 11baae33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11baae3e push eax */
  push32((uint32_t)(EAX));
  /* 11baae3f call 0x11b9b260 */
  push32(0x11baae44u); f_11b9b260();
  /* 11baae44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11baae4f push edx */
  push32((uint32_t)(EDX));
  /* 11baae50 call 0x11b9b260 */
  push32(0x11baae55u); f_11b9b260();
  /* 11baae55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11baae60 push ecx */
  push32((uint32_t)(ECX));
  /* 11baae61 call 0x11b9b260 */
  push32(0x11baae66u); f_11b9b260();
  /* 11baae66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11baae71 push eax */
  push32((uint32_t)(EAX));
  /* 11baae72 call 0x11b9b260 */
  push32(0x11baae77u); f_11b9b260();
  /* 11baae77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11baae82 push edx */
  push32((uint32_t)(EDX));
  /* 11baae83 call 0x11b9b260 */
  push32(0x11baae88u); f_11b9b260();
  /* 11baae88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baae90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11baae93 push ecx */
  push32((uint32_t)(ECX));
  /* 11baae94 call 0x11b9b260 */
  push32(0x11baae99u); f_11b9b260();
  /* 11baae99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baae9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11baae9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaea1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11baaea4 push eax */
  push32((uint32_t)(EAX));
  /* 11baaea5 call 0x11b9b260 */
  push32(0x11baaeaau); f_11b9b260();
  /* 11baaeaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaead push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaeaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaeb2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11baaeb8 push edx */
  push32((uint32_t)(EDX));
  /* 11baaeb9 call 0x11b9b260 */
  push32(0x11baaebeu); f_11b9b260();
  /* 11baaebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaec1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaec6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11baaecc push ecx */
  push32((uint32_t)(ECX));
  /* 11baaecd call 0x11b9b260 */
  push32(0x11baaed2u); f_11b9b260();
  /* 11baaed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaed5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaeda mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11baaee0 push eax */
  push32((uint32_t)(EAX));
  /* 11baaee1 call 0x11b9b260 */
  push32(0x11baaee6u); f_11b9b260();
  /* 11baaee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaeeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaeee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11baaef4 push edx */
  push32((uint32_t)(EDX));
  /* 11baaef5 call 0x11b9b260 */
  push32(0x11baaefau); f_11b9b260();
  /* 11baaefa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaefd push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaeff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf02 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11baaf08 push ecx */
  push32((uint32_t)(ECX));
  /* 11baaf09 call 0x11b9b260 */
  push32(0x11baaf0eu); f_11b9b260();
  /* 11baaf0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaf11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaf13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf16 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11baaf1c push eax */
  push32((uint32_t)(EAX));
  /* 11baaf1d call 0x11b9b260 */
  push32(0x11baaf22u); f_11b9b260();
  /* 11baaf22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaf25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaf27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf2a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11baaf30 push edx */
  push32((uint32_t)(EDX));
  /* 11baaf31 call 0x11b9b260 */
  push32(0x11baaf36u); f_11b9b260();
  /* 11baaf36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaf39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaf3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf3e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11baaf44 push ecx */
  push32((uint32_t)(ECX));
  /* 11baaf45 call 0x11b9b260 */
  push32(0x11baaf4au); f_11b9b260();
  /* 11baaf4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaf4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaf4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf52 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11baaf58 push eax */
  push32((uint32_t)(EAX));
  /* 11baaf59 call 0x11b9b260 */
  push32(0x11baaf5eu); f_11b9b260();
  /* 11baaf5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaf61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaf63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf66 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11baaf6c push edx */
  push32((uint32_t)(EDX));
  /* 11baaf6d call 0x11b9b260 */
  push32(0x11baaf72u); f_11b9b260();
  /* 11baaf72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baaf75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baaf77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baaf7a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11baaf80 push ecx */
  push32((uint32_t)(ECX));
  /* 11baaf81 call 0x11b9b260 */
  push32(0x11baaf86u); f_11b9b260();
  /* 11baaf86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baaf89:;
  /* 11baaf89 pop ebp */
  EBP = (pop32());
  /* 11baaf8a ret  */
  ESPCHK(0x11baac80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af90 @ 0x11baaf90 (678 bytes, 180 insns) */
void f_11baaf90(void) {
  FTRACE(0x11baaf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baaf90 push ebp */
  push32((uint32_t)(EBP));
  /* 11baaf91 mov ebp, esp */
  EBP = (ESP);
  /* 11baaf93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baaf96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11baaf9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baaf9f mov ax, word ptr [0x11bce68e] */
  AX = (r16((uint32_t)(0x11bce68e)));
  /* 11baafa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baafa8 cmp dword ptr [0x11bce644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baafaf je 0x11bab10a */
  if (C.zf) goto L_11bab10a;
  /* 11baafb5 push 0x11bce65c */
  push32((uint32_t)(0x11bce65cu));
  /* 11baafba push 0xe */
  push32((uint32_t)(0xeu));
  /* 11baafbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baafbf push ecx */
  push32((uint32_t)(ECX));
  /* 11baafc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baafc2 call 0x11bae620 */
  push32(0x11baafc7u); f_11bae620();
  /* 11baafc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baafca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baafcd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11baafcf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11baafd2 push 0x11bce660 */
  push32((uint32_t)(0x11bce660u));
  /* 11baafd7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11baafd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baafdc push eax */
  push32((uint32_t)(EAX));
  /* 11baafdd push 1 */
  push32((uint32_t)(0x1u));
  /* 11baafdf call 0x11bae620 */
  push32(0x11baafe4u); f_11bae620();
  /* 11baafe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baafe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baafea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11baafec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11baafef push 0x11bce664 */
  push32((uint32_t)(0x11bce664u));
  /* 11baaff4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11baaff6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baaff9 push edx */
  push32((uint32_t)(EDX));
  /* 11baaffa push 1 */
  push32((uint32_t)(0x1u));
  /* 11baaffc call 0x11bae620 */
  push32(0x11bab001u); f_11bae620();
  /* 11bab001 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab007 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab009 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab00c mov edx, dword ptr [0x11bce664] */
  EDX = (r32((uint32_t)(0x11bce664)));
  /* 11bab012 push edx */
  push32((uint32_t)(EDX));
  /* 11bab013 call 0x11bab240 */
  push32(0x11bab018u); f_11bab240();
  /* 11bab018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab01b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab01f je 0x11bab079 */
  if (C.zf) goto L_11bab079;
  /* 11bab021 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab023 mov eax, dword ptr [0x11bce65c] */
  EAX = (r32((uint32_t)(0x11bce65c)));
  /* 11bab028 push eax */
  push32((uint32_t)(EAX));
  /* 11bab029 call 0x11b9b260 */
  push32(0x11bab02eu); f_11b9b260();
  /* 11bab02e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab031 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab033 mov ecx, dword ptr [0x11bce660] */
  ECX = (r32((uint32_t)(0x11bce660)));
  /* 11bab039 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab03a call 0x11b9b260 */
  push32(0x11bab03fu); f_11b9b260();
  /* 11bab03f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab042 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab044 mov edx, dword ptr [0x11bce664] */
  EDX = (r32((uint32_t)(0x11bce664)));
  /* 11bab04a push edx */
  push32((uint32_t)(EDX));
  /* 11bab04b call 0x11b9b260 */
  push32(0x11bab050u); f_11b9b260();
  /* 11bab050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab053 mov dword ptr [0x11bce65c], 0 */
  w32((uint32_t)(0x11bce65c), (0x0u));
  /* 11bab05d mov dword ptr [0x11bce660], 0 */
  w32((uint32_t)(0x11bce660), (0x0u));
  /* 11bab067 mov dword ptr [0x11bce664], 0 */
  w32((uint32_t)(0x11bce664), (0x0u));
  /* 11bab071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bab074 jmp 0x11bab232 */
  goto L_11bab232;
L_11bab079:;
  /* 11bab079 mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab07e cmp dword ptr [eax], 0x11bcd3a8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11bcd3a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab084 je 0x11bab0c0 */
  if (C.zf) goto L_11bab0c0;
  /* 11bab086 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab088 mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab08e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bab090 push edx */
  push32((uint32_t)(EDX));
  /* 11bab091 call 0x11b9b260 */
  push32(0x11bab096u); f_11b9b260();
  /* 11bab096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab099 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab09b mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab0a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bab0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab0a4 call 0x11b9b260 */
  push32(0x11bab0a9u); f_11b9b260();
  /* 11bab0a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab0ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab0ae mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab0b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bab0b7 push eax */
  push32((uint32_t)(EAX));
  /* 11bab0b8 call 0x11b9b260 */
  push32(0x11bab0bdu); f_11b9b260();
  /* 11bab0bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bab0c0:;
  /* 11bab0c0 mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab0c6 mov edx, dword ptr [0x11bce65c] */
  EDX = (r32((uint32_t)(0x11bce65c)));
  /* 11bab0cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11bab0ce mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab0d3 mov ecx, dword ptr [0x11bce660] */
  ECX = (r32((uint32_t)(0x11bce660)));
  /* 11bab0d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11bab0dc mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab0e2 mov eax, dword ptr [0x11bce664] */
  EAX = (r32((uint32_t)(0x11bce664)));
  /* 11bab0e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11bab0ea mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab0f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bab0f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bab0f4 mov byte ptr [0x11bcc004], al */
  w8((uint32_t)(0x11bcc004), (AL));
  /* 11bab0f9 mov dword ptr [0x11bcc008], 1 */
  w32((uint32_t)(0x11bcc008), (0x1u));
  /* 11bab103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab105 jmp 0x11bab232 */
  goto L_11bab232;
L_11bab10a:;
  /* 11bab10a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab10c mov ecx, dword ptr [0x11bce65c] */
  ECX = (r32((uint32_t)(0x11bce65c)));
  /* 11bab112 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab113 call 0x11b9b260 */
  push32(0x11bab118u); f_11b9b260();
  /* 11bab118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab11b push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab11d mov edx, dword ptr [0x11bce660] */
  EDX = (r32((uint32_t)(0x11bce660)));
  /* 11bab123 push edx */
  push32((uint32_t)(EDX));
  /* 11bab124 call 0x11b9b260 */
  push32(0x11bab129u); f_11b9b260();
  /* 11bab129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab12c push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab12e mov eax, dword ptr [0x11bce664] */
  EAX = (r32((uint32_t)(0x11bce664)));
  /* 11bab133 push eax */
  push32((uint32_t)(EAX));
  /* 11bab134 call 0x11b9b260 */
  push32(0x11bab139u); f_11b9b260();
  /* 11bab139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab13c mov dword ptr [0x11bce65c], 0 */
  w32((uint32_t)(0x11bce65c), (0x0u));
  /* 11bab146 mov dword ptr [0x11bce660], 0 */
  w32((uint32_t)(0x11bce660), (0x0u));
  /* 11bab150 mov dword ptr [0x11bce664], 0 */
  w32((uint32_t)(0x11bce664), (0x0u));
  /* 11bab15a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11bab15f push 0x11bc94c0 */
  push32((uint32_t)(0x11bc94c0u));
  /* 11bab164 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab166 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab168 call 0x11b9a7d0 */
  push32(0x11bab16du); f_11b9a7d0();
  /* 11bab16d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab170 mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab176 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bab178 mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab17e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab181 jne 0x11bab18b */
  if (!C.zf) goto L_11bab18b;
  /* 11bab183 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bab186 jmp 0x11bab232 */
  goto L_11bab232;
L_11bab18b:;
  /* 11bab18b push 0x11bc9468 */
  push32((uint32_t)(0x11bc9468u));
  /* 11bab190 mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab195 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bab197 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab198 call 0x11ba0000 */
  push32(0x11bab19du); f_11ba0000();
  /* 11bab19d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab1a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11bab1a5 push 0x11bc94c0 */
  push32((uint32_t)(0x11bc94c0u));
  /* 11bab1aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab1ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab1ae call 0x11b9a7d0 */
  push32(0x11bab1b3u); f_11b9a7d0();
  /* 11bab1b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab1b6 mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab1bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11bab1bf mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab1c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab1c8 jne 0x11bab1cf */
  if (!C.zf) goto L_11bab1cf;
  /* 11bab1ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bab1cd jmp 0x11bab232 */
  goto L_11bab232;
L_11bab1cf:;
  /* 11bab1cf mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab1d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bab1d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11bab1db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11bab1e0 push 0x11bc94c0 */
  push32((uint32_t)(0x11bc94c0u));
  /* 11bab1e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab1e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab1e9 call 0x11b9a7d0 */
  push32(0x11bab1eeu); f_11b9a7d0();
  /* 11bab1ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab1f1 mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab1f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11bab1fa mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab200 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab204 jne 0x11bab20b */
  if (!C.zf) goto L_11bab20b;
  /* 11bab206 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bab209 jmp 0x11bab232 */
  goto L_11bab232;
L_11bab20b:;
  /* 11bab20b mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab210 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bab213 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11bab216 mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab21c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bab21e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bab220 mov byte ptr [0x11bcc004], cl */
  w8((uint32_t)(0x11bcc004), (CL));
  /* 11bab226 mov dword ptr [0x11bcc008], 1 */
  w32((uint32_t)(0x11bcc008), (0x1u));
  /* 11bab230 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bab232:;
  /* 11bab232 mov esp, ebp */
  ESP = (EBP);
  /* 11bab234 pop ebp */
  EBP = (pop32());
  /* 11bab235 ret  */
  ESPCHK(0x11baaf90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11bab240 (125 bytes, 49 insns) */
void f_11bab240(void) {
  FTRACE(0x11bab240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bab240 push ebp */
  push32((uint32_t)(EBP));
  /* 11bab241 mov ebp, esp */
  EBP = (ESP);
  /* 11bab243 push ecx */
  push32((uint32_t)(ECX));
L_11bab244:;
  /* 11bab244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bab24a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bab24c je 0x11bab2b9 */
  if (C.zf) goto L_11bab2b9;
  /* 11bab24e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab251 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bab254 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab257 jl 0x11bab27d */
  if ((C.sf!=C.of)) goto L_11bab27d;
  /* 11bab259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab25c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bab25f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab262 jg 0x11bab27d */
  if ((!C.zf&&C.sf==C.of)) goto L_11bab27d;
  /* 11bab264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab267 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bab26a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bab26d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab270 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bab272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab275 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab278 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bab27b jmp 0x11bab2b7 */
  goto L_11bab2b7;
L_11bab27d:;
  /* 11bab27d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab280 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bab283 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab286 jne 0x11bab2ae */
  if (!C.zf) goto L_11bab2ae;
  /* 11bab288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab28b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bab28e:;
  /* 11bab28e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab294 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11bab297 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bab299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab29c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab29f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bab2a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab2a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bab2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab2aa jne 0x11bab28e */
  if (!C.zf) goto L_11bab28e;
  /* 11bab2ac jmp 0x11bab2b7 */
  goto L_11bab2b7;
L_11bab2ae:;
  /* 11bab2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab2b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab2b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11bab2b7:;
  /* 11bab2b7 jmp 0x11bab244 */
  goto L_11bab244;
L_11bab2b9:;
  /* 11bab2b9 mov esp, ebp */
  ESP = (EBP);
  /* 11bab2bb pop ebp */
  EBP = (pop32());
  /* 11bab2bc ret  */
  ESPCHK(0x11bab240u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b2c0 @ 0x11bab2c0 (304 bytes, 85 insns) */
void f_11bab2c0(void) {
  FTRACE(0x11bab2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bab2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bab2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bab2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab2c4 cmp dword ptr [0x11bce640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab2cb je 0x11bab38c */
  if (C.zf) goto L_11bab38c;
  /* 11bab2d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11bab2d3 push 0x11bc94cc */
  push32((uint32_t)(0x11bc94ccu));
  /* 11bab2d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab2da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11bab2dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab2de call 0x11b9abe0 */
  push32(0x11bab2e3u); f_11b9abe0();
  /* 11bab2e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab2e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bab2e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab2ed jne 0x11bab2f9 */
  if (!C.zf) goto L_11bab2f9;
  /* 11bab2ef mov eax, 1 */
  EAX = (0x1u);
  /* 11bab2f4 jmp 0x11bab3ec */
  goto L_11bab3ec;
L_11bab2f9:;
  /* 11bab2f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab2fc push eax */
  push32((uint32_t)(EAX));
  /* 11bab2fd call 0x11bab3f0 */
  push32(0x11bab302u); f_11bab3f0();
  /* 11bab302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab307 je 0x11bab32d */
  if (C.zf) goto L_11bab32d;
  /* 11bab309 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab30c push ecx */
  push32((uint32_t)(ECX));
  /* 11bab30d call 0x11bab680 */
  push32(0x11bab312u); f_11bab680();
  /* 11bab312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab315 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab31a push edx */
  push32((uint32_t)(EDX));
  /* 11bab31b call 0x11b9b260 */
  push32(0x11bab320u); f_11b9b260();
  /* 11bab320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab323 mov eax, 1 */
  EAX = (0x1u);
  /* 11bab328 jmp 0x11bab3ec */
  goto L_11bab3ec;
L_11bab32d:;
  /* 11bab32d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab330 mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab336 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bab338 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bab33a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab33d mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab343 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bab346 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11bab349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab34c mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab352 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11bab355 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11bab358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab35b mov dword ptr [0x11bcd3e0], eax */
  w32((uint32_t)(0x11bcd3e0), (EAX));
  /* 11bab360 mov ecx, dword ptr [0x11bce668] */
  ECX = (r32((uint32_t)(0x11bce668)));
  /* 11bab366 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab367 call 0x11bab680 */
  push32(0x11bab36cu); f_11bab680();
  /* 11bab36c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab36f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab371 mov edx, dword ptr [0x11bce668] */
  EDX = (r32((uint32_t)(0x11bce668)));
  /* 11bab377 push edx */
  push32((uint32_t)(EDX));
  /* 11bab378 call 0x11b9b260 */
  push32(0x11bab37du); f_11b9b260();
  /* 11bab37d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab383 mov dword ptr [0x11bce668], eax */
  w32((uint32_t)(0x11bce668), (EAX));
  /* 11bab388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab38a jmp 0x11bab3ec */
  goto L_11bab3ec;
L_11bab38c:;
  /* 11bab38c mov ecx, dword ptr [0x11bcd3e0] */
  ECX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab392 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bab394 mov dword ptr [0x11bcd3b0], edx */
  w32((uint32_t)(0x11bcd3b0), (EDX));
  /* 11bab39a mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab39f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bab3a2 mov dword ptr [0x11bcd3b4], ecx */
  w32((uint32_t)(0x11bcd3b4), (ECX));
  /* 11bab3a8 mov edx, dword ptr [0x11bcd3e0] */
  EDX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bab3ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bab3b1 mov dword ptr [0x11bcd3b8], eax */
  w32((uint32_t)(0x11bcd3b8), (EAX));
  /* 11bab3b6 mov dword ptr [0x11bcd3e0], 0x11bcd3b0 */
  w32((uint32_t)(0x11bcd3e0), (0x11bcd3b0u));
  /* 11bab3c0 mov ecx, dword ptr [0x11bce668] */
  ECX = (r32((uint32_t)(0x11bce668)));
  /* 11bab3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab3c7 call 0x11bab680 */
  push32(0x11bab3ccu); f_11bab680();
  /* 11bab3cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab3cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab3d1 mov edx, dword ptr [0x11bce668] */
  EDX = (r32((uint32_t)(0x11bce668)));
  /* 11bab3d7 push edx */
  push32((uint32_t)(EDX));
  /* 11bab3d8 call 0x11b9b260 */
  push32(0x11bab3ddu); f_11b9b260();
  /* 11bab3dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab3e0 mov dword ptr [0x11bce668], 0 */
  w32((uint32_t)(0x11bce668), (0x0u));
  /* 11bab3ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bab3ec:;
  /* 11bab3ec mov esp, ebp */
  ESP = (EBP);
  /* 11bab3ee pop ebp */
  EBP = (pop32());
  /* 11bab3ef ret  */
  ESPCHK(0x11bab2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b3f0 @ 0x11bab3f0 (525 bytes, 200 insns) */
void f_11bab3f0(void) {
  FTRACE(0x11bab3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bab3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bab3f1 mov ebp, esp */
  EBP = (ESP);
  /* 11bab3f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bab3f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bab3fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab3ff mov ax, word ptr [0x11bce688] */
  AX = (r16((uint32_t)(0x11bce688)));
  /* 11bab405 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bab408 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab40c jne 0x11bab416 */
  if (!C.zf) goto L_11bab416;
  /* 11bab40e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bab411 jmp 0x11bab5f9 */
  goto L_11bab5f9;
L_11bab416:;
  /* 11bab416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab419 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab41c push ecx */
  push32((uint32_t)(ECX));
  /* 11bab41d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11bab41f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab422 push edx */
  push32((uint32_t)(EDX));
  /* 11bab423 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab425 call 0x11bae620 */
  push32(0x11bab42au); f_11bae620();
  /* 11bab42a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab42d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab430 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab432 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab438 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab43b push edx */
  push32((uint32_t)(EDX));
  /* 11bab43c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11bab43e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab441 push eax */
  push32((uint32_t)(EAX));
  /* 11bab442 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab444 call 0x11bae620 */
  push32(0x11bab449u); f_11bae620();
  /* 11bab449 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab44c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab44f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab451 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab457 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab45a push edx */
  push32((uint32_t)(EDX));
  /* 11bab45b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11bab45d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab460 push eax */
  push32((uint32_t)(EAX));
  /* 11bab461 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab463 call 0x11bae620 */
  push32(0x11bab468u); f_11bae620();
  /* 11bab468 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab46b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab46e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab470 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab473 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab476 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab479 push edx */
  push32((uint32_t)(EDX));
  /* 11bab47a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11bab47c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab47f push eax */
  push32((uint32_t)(EAX));
  /* 11bab480 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab482 call 0x11bae620 */
  push32(0x11bab487u); f_11bae620();
  /* 11bab487 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab48a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab48d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab48f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab495 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab498 push edx */
  push32((uint32_t)(EDX));
  /* 11bab499 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11bab49b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab49e push eax */
  push32((uint32_t)(EAX));
  /* 11bab49f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab4a1 call 0x11bae620 */
  push32(0x11bab4a6u); f_11bae620();
  /* 11bab4a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab4a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab4ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab4ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab4b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab4b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bab4b7 push eax */
  push32((uint32_t)(EAX));
  /* 11bab4b8 call 0x11bab600 */
  push32(0x11bab4bdu); f_11bab600();
  /* 11bab4bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab4c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab4c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab4c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11bab4c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab4cc push edx */
  push32((uint32_t)(EDX));
  /* 11bab4cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab4cf call 0x11bae620 */
  push32(0x11bab4d4u); f_11bae620();
  /* 11bab4d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab4d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab4da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab4dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab4df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab4e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab4e5 push edx */
  push32((uint32_t)(EDX));
  /* 11bab4e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11bab4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab4eb push eax */
  push32((uint32_t)(EAX));
  /* 11bab4ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab4ee call 0x11bae620 */
  push32(0x11bab4f3u); f_11bae620();
  /* 11bab4f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab4f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab4f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab4fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab4fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab501 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab504 push edx */
  push32((uint32_t)(EDX));
  /* 11bab505 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11bab507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab50a push eax */
  push32((uint32_t)(EAX));
  /* 11bab50b push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab50d call 0x11bae620 */
  push32(0x11bab512u); f_11bae620();
  /* 11bab512 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab515 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab518 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab51a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab51d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab520 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab523 push edx */
  push32((uint32_t)(EDX));
  /* 11bab524 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bab526 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab529 push eax */
  push32((uint32_t)(EAX));
  /* 11bab52a push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab52c call 0x11bae620 */
  push32(0x11bab531u); f_11bae620();
  /* 11bab531 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab534 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab537 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab539 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab53c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab53f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab542 push edx */
  push32((uint32_t)(EDX));
  /* 11bab543 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11bab545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab548 push eax */
  push32((uint32_t)(EAX));
  /* 11bab549 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab54b call 0x11bae620 */
  push32(0x11bab550u); f_11bae620();
  /* 11bab550 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab553 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab556 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab558 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab55b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab55e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab561 push edx */
  push32((uint32_t)(EDX));
  /* 11bab562 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11bab564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab567 push eax */
  push32((uint32_t)(EAX));
  /* 11bab568 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab56a call 0x11bae620 */
  push32(0x11bab56fu); f_11bae620();
  /* 11bab56f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab572 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab575 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab577 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab57a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab57d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab580 push edx */
  push32((uint32_t)(EDX));
  /* 11bab581 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11bab583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab586 push eax */
  push32((uint32_t)(EAX));
  /* 11bab587 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab589 call 0x11bae620 */
  push32(0x11bab58eu); f_11bae620();
  /* 11bab58e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab591 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab594 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab596 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab59c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab59f push edx */
  push32((uint32_t)(EDX));
  /* 11bab5a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11bab5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab5a5 push eax */
  push32((uint32_t)(EAX));
  /* 11bab5a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab5a8 call 0x11bae620 */
  push32(0x11bab5adu); f_11bae620();
  /* 11bab5ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab5b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab5b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab5b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab5b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab5bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab5be push edx */
  push32((uint32_t)(EDX));
  /* 11bab5bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11bab5c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab5c4 push eax */
  push32((uint32_t)(EAX));
  /* 11bab5c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab5c7 call 0x11bae620 */
  push32(0x11bab5ccu); f_11bae620();
  /* 11bab5cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab5cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab5d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab5d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab5d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab5da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab5dd push edx */
  push32((uint32_t)(EDX));
  /* 11bab5de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11bab5e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab5e3 push eax */
  push32((uint32_t)(EAX));
  /* 11bab5e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab5e6 call 0x11bae620 */
  push32(0x11bab5ebu); f_11bae620();
  /* 11bab5eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab5ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bab5f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab5f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bab5f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11bab5f9:;
  /* 11bab5f9 mov esp, ebp */
  ESP = (EBP);
  /* 11bab5fb pop ebp */
  EBP = (pop32());
  /* 11bab5fc ret  */
  ESPCHK(0x11bab3f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11bab600 (125 bytes, 49 insns) */
void f_11bab600(void) {
  FTRACE(0x11bab600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bab600 push ebp */
  push32((uint32_t)(EBP));
  /* 11bab601 mov ebp, esp */
  EBP = (ESP);
  /* 11bab603 push ecx */
  push32((uint32_t)(ECX));
L_11bab604:;
  /* 11bab604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bab60a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bab60c je 0x11bab679 */
  if (C.zf) goto L_11bab679;
  /* 11bab60e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab611 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bab614 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab617 jl 0x11bab63d */
  if ((C.sf!=C.of)) goto L_11bab63d;
  /* 11bab619 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab61c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bab61f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab622 jg 0x11bab63d */
  if ((!C.zf&&C.sf==C.of)) goto L_11bab63d;
  /* 11bab624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab627 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bab62a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bab62d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab630 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bab632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab635 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab638 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bab63b jmp 0x11bab677 */
  goto L_11bab677;
L_11bab63d:;
  /* 11bab63d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab640 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bab643 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab646 jne 0x11bab66e */
  if (!C.zf) goto L_11bab66e;
  /* 11bab648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab64b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bab64e:;
  /* 11bab64e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab654 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11bab657 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bab659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab65c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab65f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bab662 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bab665 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bab668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab66a jne 0x11bab64e */
  if (!C.zf) goto L_11bab64e;
  /* 11bab66c jmp 0x11bab677 */
  goto L_11bab677;
L_11bab66e:;
  /* 11bab66e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab671 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab674 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11bab677:;
  /* 11bab677 jmp 0x11bab604 */
  goto L_11bab604;
L_11bab679:;
  /* 11bab679 mov esp, ebp */
  ESP = (EBP);
  /* 11bab67b pop ebp */
  EBP = (pop32());
  /* 11bab67c ret  */
  ESPCHK(0x11bab600u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b680 @ 0x11bab680 (147 bytes, 52 insns) */
void f_11bab680(void) {
  FTRACE(0x11bab680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bab680 push ebp */
  push32((uint32_t)(EBP));
  /* 11bab681 mov ebp, esp */
  EBP = (ESP);
  /* 11bab683 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab687 jne 0x11bab68e */
  if (!C.zf) goto L_11bab68e;
  /* 11bab689 jmp 0x11bab711 */
  goto L_11bab711;
L_11bab68e:;
  /* 11bab68e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab691 cmp dword ptr [eax + 0xc], 0x11bce6c4 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11bce6c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab698 je 0x11bab711 */
  if (C.zf) goto L_11bab711;
  /* 11bab69a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab69c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab69f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bab6a2 push edx */
  push32((uint32_t)(EDX));
  /* 11bab6a3 call 0x11b9b260 */
  push32(0x11bab6a8u); f_11b9b260();
  /* 11bab6a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab6ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab6ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab6b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bab6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab6b4 call 0x11b9b260 */
  push32(0x11bab6b9u); f_11b9b260();
  /* 11bab6b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab6bc push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab6be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab6c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bab6c4 push eax */
  push32((uint32_t)(EAX));
  /* 11bab6c5 call 0x11b9b260 */
  push32(0x11bab6cau); f_11b9b260();
  /* 11bab6ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab6cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab6d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11bab6d5 push edx */
  push32((uint32_t)(EDX));
  /* 11bab6d6 call 0x11b9b260 */
  push32(0x11bab6dbu); f_11b9b260();
  /* 11bab6db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab6de push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab6e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bab6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bab6e7 call 0x11b9b260 */
  push32(0x11bab6ecu); f_11b9b260();
  /* 11bab6ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab6ef push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab6f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab6f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11bab6f7 push eax */
  push32((uint32_t)(EAX));
  /* 11bab6f8 call 0x11b9b260 */
  push32(0x11bab6fdu); f_11b9b260();
  /* 11bab6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab700 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab702 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bab705 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11bab708 push edx */
  push32((uint32_t)(EDX));
  /* 11bab709 call 0x11b9b260 */
  push32(0x11bab70eu); f_11b9b260();
  /* 11bab70e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bab711:;
  /* 11bab711 pop ebp */
  EBP = (pop32());
  /* 11bab712 ret  */
  ESPCHK(0x11bab680u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b720 @ 0x11bab720 (928 bytes, 284 insns) */
void f_11bab720(void) {
  FTRACE(0x11bab720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bab720 push ebp */
  push32((uint32_t)(EBP));
  /* 11bab721 mov ebp, esp */
  EBP = (ESP);
  /* 11bab723 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bab726 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11bab72d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11bab734 cmp dword ptr [0x11bce63c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce63c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab73b je 0x11baba71 */
  if (C.zf) goto L_11baba71;
  /* 11bab741 cmp dword ptr [0x11bce64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab748 jne 0x11bab770 */
  if (!C.zf) goto L_11bab770;
  /* 11bab74a push 0x11bce64c */
  push32((uint32_t)(0x11bce64cu));
  /* 11bab74f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11bab754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab756 mov ax, word ptr [0x11bce680] */
  AX = (r16((uint32_t)(0x11bce680)));
  /* 11bab75c push eax */
  push32((uint32_t)(EAX));
  /* 11bab75d push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab75f call 0x11bae620 */
  push32(0x11bab764u); f_11bae620();
  /* 11bab764 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab769 je 0x11bab770 */
  if (C.zf) goto L_11bab770;
  /* 11bab76b jmp 0x11baba32 */
  goto L_11baba32;
L_11bab770:;
  /* 11bab770 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11bab772 push 0x11bc94d8 */
  push32((uint32_t)(0x11bc94d8u));
  /* 11bab777 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab779 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11bab77e call 0x11b9a7d0 */
  push32(0x11bab783u); f_11b9a7d0();
  /* 11bab783 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab786 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11bab789 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11bab78b push 0x11bc94d8 */
  push32((uint32_t)(0x11bc94d8u));
  /* 11bab790 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab792 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11bab797 call 0x11b9a7d0 */
  push32(0x11bab79cu); f_11b9a7d0();
  /* 11bab79c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab79f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bab7a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11bab7a4 push 0x11bc94d8 */
  push32((uint32_t)(0x11bc94d8u));
  /* 11bab7a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab7ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11bab7b0 call 0x11b9a7d0 */
  push32(0x11bab7b5u); f_11b9a7d0();
  /* 11bab7b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab7b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11bab7bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11bab7bd push 0x11bc94d8 */
  push32((uint32_t)(0x11bc94d8u));
  /* 11bab7c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab7c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11bab7c9 call 0x11b9a7d0 */
  push32(0x11bab7ceu); f_11b9a7d0();
  /* 11bab7ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab7d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bab7d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab7d8 je 0x11bab7ec */
  if (C.zf) goto L_11bab7ec;
  /* 11bab7da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab7de je 0x11bab7ec */
  if (C.zf) goto L_11bab7ec;
  /* 11bab7e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab7e4 je 0x11bab7ec */
  if (C.zf) goto L_11bab7ec;
  /* 11bab7e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab7ea jne 0x11bab7f1 */
  if (!C.zf) goto L_11bab7f1;
L_11bab7ec:;
  /* 11bab7ec jmp 0x11baba32 */
  goto L_11baba32;
L_11bab7f1:;
  /* 11bab7f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bab7f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11bab7f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bab7fe jmp 0x11bab809 */
  goto L_11bab809;
L_11bab800:;
  /* 11bab800 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bab803 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab806 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11bab809:;
  /* 11bab809 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab810 jge 0x11bab825 */
  if ((C.sf==C.of)) goto L_11bab825;
  /* 11bab812 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab815 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11bab818 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11bab81a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab81d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab820 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bab823 jmp 0x11bab800 */
  goto L_11bab800;
L_11bab825:;
  /* 11bab825 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11bab828 push eax */
  push32((uint32_t)(EAX));
  /* 11bab829 mov ecx, dword ptr [0x11bce64c] */
  ECX = (r32((uint32_t)(0x11bce64c)));
  /* 11bab82f push ecx */
  push32((uint32_t)(ECX));
  /* 11bab830 call dword ptr [0x11bd0368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0368))), 0x11bab836u);
  /* 11bab836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab838 jne 0x11bab83f */
  if (!C.zf) goto L_11bab83f;
  /* 11bab83a jmp 0x11baba32 */
  goto L_11baba32;
L_11bab83f:;
  /* 11bab83f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab843 jbe 0x11bab84a */
  if ((C.cf||C.zf)) goto L_11bab84a;
  /* 11bab845 jmp 0x11baba32 */
  goto L_11baba32;
L_11bab84a:;
  /* 11bab84a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bab84d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bab853 mov dword ptr [0x11bcc000], edx */
  w32((uint32_t)(0x11bcc000), (EDX));
  /* 11bab859 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab860 jle 0x11bab8b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11bab8b9;
  /* 11bab862 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11bab865 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bab868 jmp 0x11bab873 */
  goto L_11bab873;
L_11bab86a:;
  /* 11bab86a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab86d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab870 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11bab873:;
  /* 11bab873 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab876 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab878 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bab87a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab87c je 0x11bab8b9 */
  if (C.zf) goto L_11bab8b9;
  /* 11bab87e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab881 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bab883 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11bab886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bab888 je 0x11bab8b9 */
  if (C.zf) goto L_11bab8b9;
  /* 11bab88a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab88d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab88f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bab891 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bab894 jmp 0x11bab89f */
  goto L_11bab89f;
L_11bab896:;
  /* 11bab896 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bab899 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab89c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11bab89f:;
  /* 11bab89f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab8a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab8a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11bab8a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab8aa jg 0x11bab8b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bab8b7;
  /* 11bab8ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bab8af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab8b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11bab8b5 jmp 0x11bab896 */
  goto L_11bab896;
L_11bab8b7:;
  /* 11bab8b7 jmp 0x11bab86a */
  goto L_11bab86a;
L_11bab8b9:;
  /* 11bab8b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab8bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab8bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab8bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bab8c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab8c5 push eax */
  push32((uint32_t)(EAX));
  /* 11bab8c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11bab8cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bab8ce push ecx */
  push32((uint32_t)(ECX));
  /* 11bab8cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab8d1 call 0x11ba73a0 */
  push32(0x11bab8d6u); f_11ba73a0();
  /* 11bab8d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab8d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab8db jne 0x11bab8e2 */
  if (!C.zf) goto L_11bab8e2;
  /* 11bab8dd jmp 0x11baba32 */
  goto L_11baba32;
L_11bab8e2:;
  /* 11bab8e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bab8e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11bab8ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bab8ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bab8f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bab8f7 jmp 0x11bab902 */
  goto L_11bab902;
L_11bab8f9:;
  /* 11bab8f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bab8fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab8ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11bab902:;
  /* 11bab902 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab909 jge 0x11bab920 */
  if ((C.sf==C.of)) goto L_11bab920;
  /* 11bab90b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bab90e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11bab912 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11bab915 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bab918 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab91b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bab91e jmp 0x11bab8f9 */
  goto L_11bab8f9;
L_11bab920:;
  /* 11bab920 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab922 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bab924 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bab927 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab92a push edx */
  push32((uint32_t)(EDX));
  /* 11bab92b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11bab930 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bab933 push eax */
  push32((uint32_t)(EAX));
  /* 11bab934 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bab936 call 0x11bae8c0 */
  push32(0x11bab93bu); f_11bae8c0();
  /* 11bab93b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bab940 jne 0x11bab947 */
  if (!C.zf) goto L_11bab947;
  /* 11bab942 jmp 0x11baba32 */
  goto L_11baba32;
L_11bab947:;
  /* 11bab947 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bab94a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11bab94f cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab956 jle 0x11bab9b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11bab9b3;
  /* 11bab958 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11bab95b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bab95e jmp 0x11bab969 */
  goto L_11bab969;
L_11bab960:;
  /* 11bab960 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab963 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab966 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11bab969:;
  /* 11bab969 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab96c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bab96e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bab970 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bab972 je 0x11bab9b3 */
  if (C.zf) goto L_11bab9b3;
  /* 11bab974 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab977 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bab979 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11bab97c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bab97e je 0x11bab9b3 */
  if (C.zf) goto L_11bab9b3;
  /* 11bab980 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab985 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bab987 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bab98a jmp 0x11bab995 */
  goto L_11bab995;
L_11bab98c:;
  /* 11bab98c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bab98f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab992 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11bab995:;
  /* 11bab995 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bab998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bab99a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11bab99d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab9a0 jg 0x11bab9b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bab9b1;
  /* 11bab9a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bab9a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bab9a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11bab9af jmp 0x11bab98c */
  goto L_11bab98c;
L_11bab9b1:;
  /* 11bab9b1 jmp 0x11bab960 */
  goto L_11bab960;
L_11bab9b3:;
  /* 11bab9b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bab9b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab9b9 mov dword ptr [0x11bcc00c], eax */
  w32((uint32_t)(0x11bcc00c), (EAX));
  /* 11bab9be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bab9c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bab9c4 mov dword ptr [0x11bcc010], ecx */
  w32((uint32_t)(0x11bcc010), (ECX));
  /* 11bab9ca cmp dword ptr [0x11bce66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab9d1 je 0x11bab9e4 */
  if (C.zf) goto L_11bab9e4;
  /* 11bab9d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab9d5 mov edx, dword ptr [0x11bce66c] */
  EDX = (r32((uint32_t)(0x11bce66c)));
  /* 11bab9db push edx */
  push32((uint32_t)(EDX));
  /* 11bab9dc call 0x11b9b260 */
  push32(0x11bab9e1u); f_11b9b260();
  /* 11bab9e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bab9e4:;
  /* 11bab9e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bab9e7 mov dword ptr [0x11bce66c], eax */
  w32((uint32_t)(0x11bce66c), (EAX));
  /* 11bab9ec cmp dword ptr [0x11bce670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bab9f3 je 0x11baba06 */
  if (C.zf) goto L_11baba06;
  /* 11bab9f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bab9f7 mov ecx, dword ptr [0x11bce670] */
  ECX = (r32((uint32_t)(0x11bce670)));
  /* 11bab9fd push ecx */
  push32((uint32_t)(ECX));
  /* 11bab9fe call 0x11b9b260 */
  push32(0x11baba03u); f_11b9b260();
  /* 11baba03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baba06:;
  /* 11baba06 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baba09 mov dword ptr [0x11bce670], edx */
  w32((uint32_t)(0x11bce670), (EDX));
  /* 11baba0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba11 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11baba14 push eax */
  push32((uint32_t)(EAX));
  /* 11baba15 call 0x11b9b260 */
  push32(0x11baba1au); f_11b9b260();
  /* 11baba1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baba22 push ecx */
  push32((uint32_t)(ECX));
  /* 11baba23 call 0x11b9b260 */
  push32(0x11baba28u); f_11b9b260();
  /* 11baba28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baba2d jmp 0x11bababc */
  goto L_11bababc;
L_11baba32:;
  /* 11baba32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11baba37 push edx */
  push32((uint32_t)(EDX));
  /* 11baba38 call 0x11b9b260 */
  push32(0x11baba3du); f_11b9b260();
  /* 11baba3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baba45 push eax */
  push32((uint32_t)(EAX));
  /* 11baba46 call 0x11b9b260 */
  push32(0x11baba4bu); f_11b9b260();
  /* 11baba4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11baba53 push ecx */
  push32((uint32_t)(ECX));
  /* 11baba54 call 0x11b9b260 */
  push32(0x11baba59u); f_11b9b260();
  /* 11baba59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba5e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baba61 push edx */
  push32((uint32_t)(EDX));
  /* 11baba62 call 0x11b9b260 */
  push32(0x11baba67u); f_11b9b260();
  /* 11baba67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba6a mov eax, 1 */
  EAX = (0x1u);
  /* 11baba6f jmp 0x11bababc */
  goto L_11bababc;
L_11baba71:;
  /* 11baba71 mov dword ptr [0x11bcc00c], 0x11bcc016 */
  w32((uint32_t)(0x11bcc00c), (0x11bcc016u));
  /* 11baba7b mov dword ptr [0x11bcc010], 0x11bcc016 */
  w32((uint32_t)(0x11bcc010), (0x11bcc016u));
  /* 11baba85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba87 mov eax, dword ptr [0x11bce66c] */
  EAX = (r32((uint32_t)(0x11bce66c)));
  /* 11baba8c push eax */
  push32((uint32_t)(EAX));
  /* 11baba8d call 0x11b9b260 */
  push32(0x11baba92u); f_11b9b260();
  /* 11baba92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baba95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baba97 mov ecx, dword ptr [0x11bce670] */
  ECX = (r32((uint32_t)(0x11bce670)));
  /* 11baba9d push ecx */
  push32((uint32_t)(ECX));
  /* 11baba9e call 0x11b9b260 */
  push32(0x11babaa3u); f_11b9b260();
  /* 11babaa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babaa6 mov dword ptr [0x11bce66c], 0 */
  w32((uint32_t)(0x11bce66c), (0x0u));
  /* 11babab0 mov dword ptr [0x11bce670], 0 */
  w32((uint32_t)(0x11bce670), (0x0u));
  /* 11bababa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bababc:;
  /* 11bababc mov esp, ebp */
  ESP = (EBP);
  /* 11bababe pop ebp */
  EBP = (pop32());
  /* 11bababf ret  */
  ESPCHK(0x11bab720u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bac0 @ 0x11babac0 (7 bytes, 5 insns) */
void f_11babac0(void) {
  FTRACE(0x11babac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11babac1 mov ebp, esp */
  EBP = (ESP);
  /* 11babac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babac5 pop ebp */
  EBP = (pop32());
  /* 11babac6 ret  */
  ESPCHK(0x11babac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bad0 @ 0x11babad0 (62 bytes, 35 insns) */
void f_11babad0(void) {
  FTRACE(0x11babad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11babad1 mov ebp, esp */
  EBP = (ESP);
  /* 11babad3 push esi */
  push32((uint32_t)(ESI));
  /* 11babad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babad6 push eax */
  push32((uint32_t)(EAX));
  /* 11babad7 push eax */
  push32((uint32_t)(EAX));
  /* 11babad8 push eax */
  push32((uint32_t)(EAX));
  /* 11babad9 push eax */
  push32((uint32_t)(EAX));
  /* 11babada push eax */
  push32((uint32_t)(EAX));
  /* 11babadb push eax */
  push32((uint32_t)(EAX));
  /* 11babadc push eax */
  push32((uint32_t)(EAX));
  /* 11babadd push eax */
  push32((uint32_t)(EAX));
  /* 11babade mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11babae1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11babae4:;
  /* 11babae4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11babae6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11babae8 je 0x11babaf1 */
  if (C.zf) goto L_11babaf1;
  /* 11babaea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11babaeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11babaeb");
  /* 11babaef jmp 0x11babae4 */
  goto L_11babae4;
L_11babaf1:;
  /* 11babaf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11babaf4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11babaf7 nop  */
  /* nop */
L_11babaf8:;
  /* 11babaf8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11babaf9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11babafb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11babafd je 0x11babb06 */
  if (C.zf) goto L_11babb06;
  /* 11babaff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11babb00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11babb00");
  /* 11babb04 jae 0x11babaf8 */
  if (!C.cf) goto L_11babaf8;
L_11babb06:;
  /* 11babb06 mov eax, ecx */
  EAX = (ECX);
  /* 11babb08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babb0b pop esi */
  ESI = (pop32());
  /* 11babb0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11babb0d ret  */
  ESPCHK(0x11babad0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11babb10 (56 bytes, 31 insns) */
void f_11babb10(void) {
  FTRACE(0x11babb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11babb11 mov ebp, esp */
  EBP = (ESP);
  /* 11babb13 push edi */
  push32((uint32_t)(EDI));
  /* 11babb14 push esi */
  push32((uint32_t)(ESI));
  /* 11babb15 push ebx */
  push32((uint32_t)(EBX));
  /* 11babb16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11babb19 jecxz 0x11babb41 */
  x86_unimpl("jecxz @ 0x11babb19");
  /* 11babb1b mov ebx, ecx */
  EBX = (ECX);
  /* 11babb1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11babb20 mov esi, edi */
  ESI = (EDI);
  /* 11babb22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babb24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11babb26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11babb28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babb2a mov edi, esi */
  EDI = (ESI);
  /* 11babb2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11babb2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11babb31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11babb34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11babb36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11babb39 ja 0x11babb3f */
  if ((!C.cf&&!C.zf)) goto L_11babb3f;
  /* 11babb3b je 0x11babb41 */
  if (C.zf) goto L_11babb41;
  /* 11babb3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11babb3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11babb3f:;
  /* 11babb3f not ecx */
  ECX = (~(ECX));
L_11babb41:;
  /* 11babb41 mov eax, ecx */
  EAX = (ECX);
  /* 11babb43 pop ebx */
  EBX = (pop32());
  /* 11babb44 pop esi */
  ESI = (pop32());
  /* 11babb45 pop edi */
  EDI = (pop32());
  /* 11babb46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11babb47 ret  */
  ESPCHK(0x11babb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb50 @ 0x11babb50 (58 bytes, 32 insns) */
void f_11babb50(void) {
  FTRACE(0x11babb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11babb51 mov ebp, esp */
  EBP = (ESP);
  /* 11babb53 push esi */
  push32((uint32_t)(ESI));
  /* 11babb54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babb56 push eax */
  push32((uint32_t)(EAX));
  /* 11babb57 push eax */
  push32((uint32_t)(EAX));
  /* 11babb58 push eax */
  push32((uint32_t)(EAX));
  /* 11babb59 push eax */
  push32((uint32_t)(EAX));
  /* 11babb5a push eax */
  push32((uint32_t)(EAX));
  /* 11babb5b push eax */
  push32((uint32_t)(EAX));
  /* 11babb5c push eax */
  push32((uint32_t)(EAX));
  /* 11babb5d push eax */
  push32((uint32_t)(EAX));
  /* 11babb5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11babb61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11babb64:;
  /* 11babb64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11babb66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11babb68 je 0x11babb71 */
  if (C.zf) goto L_11babb71;
  /* 11babb6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11babb6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11babb6b");
  /* 11babb6f jmp 0x11babb64 */
  goto L_11babb64;
L_11babb71:;
  /* 11babb71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11babb74:;
  /* 11babb74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11babb76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11babb78 je 0x11babb84 */
  if (C.zf) goto L_11babb84;
  /* 11babb7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11babb7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11babb7b");
  /* 11babb7f jae 0x11babb74 */
  if (!C.cf) goto L_11babb74;
  /* 11babb81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11babb84:;
  /* 11babb84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babb87 pop esi */
  ESI = (pop32());
  /* 11babb88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11babb89 ret  */
  ESPCHK(0x11babb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb90 @ 0x11babb90 (512 bytes, 147 insns) */
void f_11babb90(void) {
  FTRACE(0x11babb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11babb91 mov ebp, esp */
  EBP = (ESP);
  /* 11babb93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babb96 cmp dword ptr [0x11bce6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babb9d jne 0x11babbc2 */
  if (!C.zf) goto L_11babbc2;
  /* 11babb9f call 0x11bac660 */
  push32(0x11babba4u); f_11bac660();
  /* 11babba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babba6 je 0x11babbb2 */
  if (C.zf) goto L_11babbb2;
  /* 11babba8 mov eax, dword ptr [0x11bd0334] */
  EAX = (r32((uint32_t)(0x11bd0334)));
  /* 11babbad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11babbb0 jmp 0x11babbb9 */
  goto L_11babbb9;
L_11babbb2:;
  /* 11babbb2 mov dword ptr [ebp - 8], 0x11bac6b0 */
  w32((uint32_t)(EBP + -0x8), (0x11bac6b0u));
L_11babbb9:;
  /* 11babbb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11babbbc mov dword ptr [0x11bce6b8], ecx */
  w32((uint32_t)(0x11bce6b8), (ECX));
L_11babbc2:;
  /* 11babbc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babbc6 jne 0x11babbd2 */
  if (!C.zf) goto L_11babbd2;
  /* 11babbc8 call 0x11bac4b0 */
  push32(0x11babbcdu); f_11bac4b0();
  /* 11babbcd jmp 0x11babc9e */
  goto L_11babc9e;
L_11babbd2:;
  /* 11babbd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11babbd5 mov dword ptr [0x11bce6a8], edx */
  w32((uint32_t)(0x11bce6a8), (EDX));
  /* 11babbdb cmp dword ptr [0x11bce6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babbe2 je 0x11babc04 */
  if (C.zf) goto L_11babc04;
  /* 11babbe4 mov eax, dword ptr [0x11bce6a8] */
  EAX = (r32((uint32_t)(0x11bce6a8)));
  /* 11babbe9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11babbec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11babbee je 0x11babc04 */
  if (C.zf) goto L_11babc04;
  /* 11babbf0 push 0x11bce6a8 */
  push32((uint32_t)(0x11bce6a8u));
  /* 11babbf5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11babbf7 push 0x11bcd0e0 */
  push32((uint32_t)(0x11bcd0e0u));
  /* 11babbfc call 0x11babd90 */
  push32(0x11babc01u); f_11babd90();
  /* 11babc01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11babc04:;
  /* 11babc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11babc07 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babc0a mov dword ptr [0x11bce6ac], edx */
  w32((uint32_t)(0x11bce6ac), (EDX));
  /* 11babc10 cmp dword ptr [0x11bce6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babc17 je 0x11babc39 */
  if (C.zf) goto L_11babc39;
  /* 11babc19 mov eax, dword ptr [0x11bce6ac] */
  EAX = (r32((uint32_t)(0x11bce6ac)));
  /* 11babc1e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11babc21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11babc23 je 0x11babc39 */
  if (C.zf) goto L_11babc39;
  /* 11babc25 push 0x11bce6ac */
  push32((uint32_t)(0x11bce6acu));
  /* 11babc2a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11babc2c push 0x11bcd028 */
  push32((uint32_t)(0x11bcd028u));
  /* 11babc31 call 0x11babd90 */
  push32(0x11babc36u); f_11babd90();
  /* 11babc36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11babc39:;
  /* 11babc39 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
  /* 11babc43 cmp dword ptr [0x11bce6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babc4a je 0x11babc7d */
  if (C.zf) goto L_11babc7d;
  /* 11babc4c mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11babc52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11babc55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babc57 je 0x11babc7d */
  if (C.zf) goto L_11babc7d;
  /* 11babc59 cmp dword ptr [0x11bce6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babc60 je 0x11babc76 */
  if (C.zf) goto L_11babc76;
  /* 11babc62 mov ecx, dword ptr [0x11bce6ac] */
  ECX = (r32((uint32_t)(0x11bce6ac)));
  /* 11babc68 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11babc6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11babc6d je 0x11babc76 */
  if (C.zf) goto L_11babc76;
  /* 11babc6f call 0x11babe20 */
  push32(0x11babc74u); f_11babe20();
  /* 11babc74 jmp 0x11babc7b */
  goto L_11babc7b;
L_11babc76:;
  /* 11babc76 call 0x11bac210 */
  push32(0x11babc7bu); f_11bac210();
L_11babc7b:;
  /* 11babc7b jmp 0x11babc9e */
  goto L_11babc9e;
L_11babc7d:;
  /* 11babc7d cmp dword ptr [0x11bce6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babc84 je 0x11babc99 */
  if (C.zf) goto L_11babc99;
  /* 11babc86 mov eax, dword ptr [0x11bce6ac] */
  EAX = (r32((uint32_t)(0x11bce6ac)));
  /* 11babc8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11babc8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11babc90 je 0x11babc99 */
  if (C.zf) goto L_11babc99;
  /* 11babc92 call 0x11bac3b0 */
  push32(0x11babc97u); f_11bac3b0();
  /* 11babc97 jmp 0x11babc9e */
  goto L_11babc9e;
L_11babc99:;
  /* 11babc99 call 0x11bac4b0 */
  push32(0x11babc9eu); f_11bac4b0();
L_11babc9e:;
  /* 11babc9e cmp dword ptr [0x11bce6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babca5 jne 0x11babcae */
  if (!C.zf) goto L_11babcae;
  /* 11babca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babca9 jmp 0x11babd8c */
  goto L_11babd8c;
L_11babcae:;
  /* 11babcae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11babcb1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babcb7 push edx */
  push32((uint32_t)(EDX));
  /* 11babcb8 call 0x11bac4e0 */
  push32(0x11babcbdu); f_11bac4e0();
  /* 11babcbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babcc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11babcc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babcc7 je 0x11babcdc */
  if (C.zf) goto L_11babcdc;
  /* 11babcc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babccc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11babcd1 push eax */
  push32((uint32_t)(EAX));
  /* 11babcd2 call dword ptr [0x11bd0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0338))), 0x11babcd8u);
  /* 11babcd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babcda jne 0x11babce3 */
  if (!C.zf) goto L_11babce3;
L_11babcdc:;
  /* 11babcdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babcde jmp 0x11babd8c */
  goto L_11babd8c;
L_11babce3:;
  /* 11babce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11babce5 mov ecx, dword ptr [0x11bce698] */
  ECX = (r32((uint32_t)(0x11bce698)));
  /* 11babceb push ecx */
  push32((uint32_t)(ECX));
  /* 11babcec call dword ptr [0x11bd033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd033c))), 0x11babcf2u);
  /* 11babcf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babcf4 jne 0x11babcfd */
  if (!C.zf) goto L_11babcfd;
  /* 11babcf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babcf8 jmp 0x11babd8c */
  goto L_11babd8c;
L_11babcfd:;
  /* 11babcfd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babd01 je 0x11babd28 */
  if (C.zf) goto L_11babd28;
  /* 11babd03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11babd06 mov ax, word ptr [0x11bce698] */
  AX = (r16((uint32_t)(0x11bce698)));
  /* 11babd0c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11babd0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11babd12 mov dx, word ptr [0x11bce6b4] */
  DX = (r16((uint32_t)(0x11bce6b4)));
  /* 11babd19 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11babd1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11babd20 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11babd24 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11babd28:;
  /* 11babd28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babd2c je 0x11babd87 */
  if (C.zf) goto L_11babd87;
  /* 11babd2e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11babd30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11babd33 push edx */
  push32((uint32_t)(EDX));
  /* 11babd34 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11babd39 mov eax, dword ptr [0x11bce698] */
  EAX = (r32((uint32_t)(0x11bce698)));
  /* 11babd3e push eax */
  push32((uint32_t)(EAX));
  /* 11babd3f call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11babd45u);
  /* 11babd45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babd47 jne 0x11babd4d */
  if (!C.zf) goto L_11babd4d;
  /* 11babd49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babd4b jmp 0x11babd8c */
  goto L_11babd8c;
L_11babd4d:;
  /* 11babd4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11babd4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11babd52 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babd55 push ecx */
  push32((uint32_t)(ECX));
  /* 11babd56 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11babd5b mov edx, dword ptr [0x11bce6b4] */
  EDX = (r32((uint32_t)(0x11bce6b4)));
  /* 11babd61 push edx */
  push32((uint32_t)(EDX));
  /* 11babd62 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11babd68u);
  /* 11babd68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babd6a jne 0x11babd70 */
  if (!C.zf) goto L_11babd70;
  /* 11babd6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11babd6e jmp 0x11babd8c */
  goto L_11babd8c;
L_11babd70:;
  /* 11babd70 push 0xa */
  push32((uint32_t)(0xau));
  /* 11babd72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11babd75 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babd7a push eax */
  push32((uint32_t)(EAX));
  /* 11babd7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babd7e push ecx */
  push32((uint32_t)(ECX));
  /* 11babd7f call 0x11b9fb90 */
  push32(0x11babd84u); f_11b9fb90();
  /* 11babd84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11babd87:;
  /* 11babd87 mov eax, 1 */
  EAX = (0x1u);
L_11babd8c:;
  /* 11babd8c mov esp, ebp */
  ESP = (EBP);
  /* 11babd8e pop ebp */
  EBP = (pop32());
  /* 11babd8f ret  */
  ESPCHK(0x11babb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd90 @ 0x11babd90 (130 bytes, 47 insns) */
void f_11babd90(void) {
  FTRACE(0x11babd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babd90 push ebp */
  push32((uint32_t)(EBP));
  /* 11babd91 mov ebp, esp */
  EBP = (ESP);
  /* 11babd93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babd96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11babd9d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11babda4:;
  /* 11babda4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11babda7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babdaa jg 0x11babe0e */
  if ((!C.zf&&C.sf==C.of)) goto L_11babe0e;
  /* 11babdac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babdb0 je 0x11babe0e */
  if (C.zf) goto L_11babe0e;
  /* 11babdb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11babdb5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babdb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11babdb9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babdbb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11babdbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11babdc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babdc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11babdc6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11babdc9 push eax */
  push32((uint32_t)(EAX));
  /* 11babdca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11babdcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11babdcf push edx */
  push32((uint32_t)(EDX));
  /* 11babdd0 call 0x11baeb30 */
  push32(0x11babdd5u); f_11baeb30();
  /* 11babdd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babdd8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11babddb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babddf jne 0x11babdf2 */
  if (!C.zf) goto L_11babdf2;
  /* 11babde1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babde4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11babde7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11babdeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11babdee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11babdf0 jmp 0x11babe0c */
  goto L_11babe0c;
L_11babdf2:;
  /* 11babdf2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babdf6 jge 0x11babe03 */
  if ((C.sf==C.of)) goto L_11babe03;
  /* 11babdf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babdfb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babdfe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11babe01 jmp 0x11babe0c */
  goto L_11babe0c;
L_11babe03:;
  /* 11babe03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babe06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babe09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11babe0c:;
  /* 11babe0c jmp 0x11babda4 */
  goto L_11babda4;
L_11babe0e:;
  /* 11babe0e mov esp, ebp */
  ESP = (EBP);
  /* 11babe10 pop ebp */
  EBP = (pop32());
  /* 11babe11 ret  */
  ESPCHK(0x11babd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be20 @ 0x11babe20 (186 bytes, 50 insns) */
void f_11babe20(void) {
  FTRACE(0x11babe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babe20 push ebp */
  push32((uint32_t)(EBP));
  /* 11babe21 mov ebp, esp */
  EBP = (ESP);
  /* 11babe23 push ecx */
  push32((uint32_t)(ECX));
  /* 11babe24 mov eax, dword ptr [0x11bce6a8] */
  EAX = (r32((uint32_t)(0x11bce6a8)));
  /* 11babe29 push eax */
  push32((uint32_t)(EAX));
  /* 11babe2a call 0x11b9fe80 */
  push32(0x11babe2fu); f_11b9fe80();
  /* 11babe2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babe32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11babe34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babe37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11babe3a mov dword ptr [0x11bce6a4], ecx */
  w32((uint32_t)(0x11bce6a4), (ECX));
  /* 11babe40 mov edx, dword ptr [0x11bce6ac] */
  EDX = (r32((uint32_t)(0x11bce6ac)));
  /* 11babe46 push edx */
  push32((uint32_t)(EDX));
  /* 11babe47 call 0x11b9fe80 */
  push32(0x11babe4cu); f_11b9fe80();
  /* 11babe4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babe4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11babe51 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babe54 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11babe57 mov dword ptr [0x11bce69c], ecx */
  w32((uint32_t)(0x11bce69c), (ECX));
  /* 11babe5d mov dword ptr [0x11bce698], 0 */
  w32((uint32_t)(0x11bce698), (0x0u));
  /* 11babe67 cmp dword ptr [0x11bce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babe6e je 0x11babe79 */
  if (C.zf) goto L_11babe79;
  /* 11babe70 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11babe77 jmp 0x11babe8b */
  goto L_11babe8b;
L_11babe79:;
  /* 11babe79 mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11babe7f push edx */
  push32((uint32_t)(EDX));
  /* 11babe80 call 0x11bac8c0 */
  push32(0x11babe85u); f_11bac8c0();
  /* 11babe85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babe88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11babe8b:;
  /* 11babe8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11babe8e mov dword ptr [0x11bce6a0], eax */
  w32((uint32_t)(0x11bce6a0), (EAX));
  /* 11babe93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11babe95 push 0x11babee0 */
  push32((uint32_t)(0x11babee0u));
  /* 11babe9a call dword ptr [0x11bd0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0330))), 0x11babea0u);
  /* 11babea0 mov ecx, dword ptr [0x11bce6b0] */
  ECX = (r32((uint32_t)(0x11bce6b0)));
  /* 11babea6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11babeac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11babeae je 0x11babecc */
  if (C.zf) goto L_11babecc;
  /* 11babeb0 mov edx, dword ptr [0x11bce6b0] */
  EDX = (r32((uint32_t)(0x11bce6b0)));
  /* 11babeb6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11babebc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11babebe je 0x11babecc */
  if (C.zf) goto L_11babecc;
  /* 11babec0 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11babec5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11babec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babeca jne 0x11babed6 */
  if (!C.zf) goto L_11babed6;
L_11babecc:;
  /* 11babecc mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
L_11babed6:;
  /* 11babed6 mov esp, ebp */
  ESP = (EBP);
  /* 11babed8 pop ebp */
  EBP = (pop32());
  /* 11babed9 ret  */
  ESPCHK(0x11babe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bee0 @ 0x11babee0 (804 bytes, 220 insns) */
void f_11babee0(void) {
  FTRACE(0x11babee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11babee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11babee1 mov ebp, esp */
  EBP = (ESP);
  /* 11babee3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11babee9 push eax */
  push32((uint32_t)(EAX));
  /* 11babeea call 0x11bac840 */
  push32(0x11babeefu); f_11bac840();
  /* 11babeef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babef2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11babef5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11babef7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11babefa push ecx */
  push32((uint32_t)(ECX));
  /* 11babefb mov edx, dword ptr [0x11bce69c] */
  EDX = (r32((uint32_t)(0x11bce69c)));
  /* 11babf01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11babf03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babf05 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11babf0b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babf11 push edx */
  push32((uint32_t)(EDX));
  /* 11babf12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11babf15 push eax */
  push32((uint32_t)(EAX));
  /* 11babf16 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11babf1cu);
  /* 11babf1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babf1e jne 0x11babf34 */
  if (!C.zf) goto L_11babf34;
  /* 11babf20 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
  /* 11babf2a mov eax, 1 */
  EAX = (0x1u);
  /* 11babf2f jmp 0x11bac1fe */
  goto L_11bac1fe;
L_11babf34:;
  /* 11babf34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11babf37 push ecx */
  push32((uint32_t)(ECX));
  /* 11babf38 mov edx, dword ptr [0x11bce6ac] */
  EDX = (r32((uint32_t)(0x11bce6ac)));
  /* 11babf3e push edx */
  push32((uint32_t)(EDX));
  /* 11babf3f call 0x11baeb30 */
  push32(0x11babf44u); f_11baeb30();
  /* 11babf44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babf47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babf49 jne 0x11bac06f */
  if (!C.zf) goto L_11bac06f;
  /* 11babf4f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11babf51 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11babf54 push eax */
  push32((uint32_t)(EAX));
  /* 11babf55 mov ecx, dword ptr [0x11bce6a4] */
  ECX = (r32((uint32_t)(0x11bce6a4)));
  /* 11babf5b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11babf5d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11babf5f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11babf65 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11babf6b push ecx */
  push32((uint32_t)(ECX));
  /* 11babf6c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11babf6f push edx */
  push32((uint32_t)(EDX));
  /* 11babf70 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11babf76u);
  /* 11babf76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babf78 jne 0x11babf8e */
  if (!C.zf) goto L_11babf8e;
  /* 11babf7a mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
  /* 11babf84 mov eax, 1 */
  EAX = (0x1u);
  /* 11babf89 jmp 0x11bac1fe */
  goto L_11bac1fe;
L_11babf8e:;
  /* 11babf8e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11babf91 push eax */
  push32((uint32_t)(EAX));
  /* 11babf92 mov ecx, dword ptr [0x11bce6a8] */
  ECX = (r32((uint32_t)(0x11bce6a8)));
  /* 11babf98 push ecx */
  push32((uint32_t)(ECX));
  /* 11babf99 call 0x11baeb30 */
  push32(0x11babf9eu); f_11baeb30();
  /* 11babf9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11babfa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11babfa3 jne 0x11babfd0 */
  if (!C.zf) goto L_11babfd0;
  /* 11babfa5 mov edx, dword ptr [0x11bce6b0] */
  EDX = (r32((uint32_t)(0x11bce6b0)));
  /* 11babfab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11babfb1 mov dword ptr [0x11bce6b0], edx */
  w32((uint32_t)(0x11bce6b0), (EDX));
  /* 11babfb7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11babfba mov dword ptr [0x11bce6b4], eax */
  w32((uint32_t)(0x11bce6b4), (EAX));
  /* 11babfbf mov ecx, dword ptr [0x11bce6b4] */
  ECX = (r32((uint32_t)(0x11bce6b4)));
  /* 11babfc5 mov dword ptr [0x11bce698], ecx */
  w32((uint32_t)(0x11bce698), (ECX));
  /* 11babfcb jmp 0x11bac06f */
  goto L_11bac06f;
L_11babfd0:;
  /* 11babfd0 mov edx, dword ptr [0x11bce6b0] */
  EDX = (r32((uint32_t)(0x11bce6b0)));
  /* 11babfd6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11babfd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11babfdb jne 0x11bac06f */
  if (!C.zf) goto L_11bac06f;
  /* 11babfe1 cmp dword ptr [0x11bce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11babfe8 je 0x11bac03d */
  if (C.zf) goto L_11bac03d;
  /* 11babfea mov eax, dword ptr [0x11bce6a0] */
  EAX = (r32((uint32_t)(0x11bce6a0)));
  /* 11babfef push eax */
  push32((uint32_t)(EAX));
  /* 11babff0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11babff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11babff4 mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11babffa push edx */
  push32((uint32_t)(EDX));
  /* 11babffb call 0x11baec00 */
  push32(0x11bac000u); f_11baec00();
  /* 11bac000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac005 jne 0x11bac03d */
  if (!C.zf) goto L_11bac03d;
  /* 11bac007 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac00c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11bac00e mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
  /* 11bac013 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac016 mov dword ptr [0x11bce6b4], ecx */
  w32((uint32_t)(0x11bce6b4), (ECX));
  /* 11bac01c mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac022 push edx */
  push32((uint32_t)(EDX));
  /* 11bac023 call 0x11b9fe80 */
  push32(0x11bac028u); f_11b9fe80();
  /* 11bac028 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac02b cmp eax, dword ptr [0x11bce6a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bce6a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac031 jne 0x11bac03b */
  if (!C.zf) goto L_11bac03b;
  /* 11bac033 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac036 mov dword ptr [0x11bce698], eax */
  w32((uint32_t)(0x11bce698), (EAX));
L_11bac03b:;
  /* 11bac03b jmp 0x11bac06f */
  goto L_11bac06f;
L_11bac03d:;
  /* 11bac03d mov ecx, dword ptr [0x11bce6b0] */
  ECX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac043 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bac046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bac048 jne 0x11bac06f */
  if (!C.zf) goto L_11bac06f;
  /* 11bac04a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac04d push edx */
  push32((uint32_t)(EDX));
  /* 11bac04e call 0x11bac580 */
  push32(0x11bac053u); f_11bac580();
  /* 11bac053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac058 je 0x11bac06f */
  if (C.zf) goto L_11bac06f;
  /* 11bac05a mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac05f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11bac061 mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
  /* 11bac066 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac069 mov dword ptr [0x11bce6b4], ecx */
  w32((uint32_t)(0x11bce6b4), (ECX));
L_11bac06f:;
  /* 11bac06f mov edx, dword ptr [0x11bce6b0] */
  EDX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac075 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11bac07b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac081 je 0x11bac1f1 */
  if (C.zf) goto L_11bac1f1;
  /* 11bac087 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bac089 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bac08c push eax */
  push32((uint32_t)(EAX));
  /* 11bac08d mov ecx, dword ptr [0x11bce6a4] */
  ECX = (r32((uint32_t)(0x11bce6a4)));
  /* 11bac093 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac095 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac097 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11bac09d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac0a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac0a7 push edx */
  push32((uint32_t)(EDX));
  /* 11bac0a8 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11bac0aeu);
  /* 11bac0ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac0b0 jne 0x11bac0c6 */
  if (!C.zf) goto L_11bac0c6;
  /* 11bac0b2 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
  /* 11bac0bc mov eax, 1 */
  EAX = (0x1u);
  /* 11bac0c1 jmp 0x11bac1fe */
  goto L_11bac1fe;
L_11bac0c6:;
  /* 11bac0c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bac0c9 push eax */
  push32((uint32_t)(EAX));
  /* 11bac0ca mov ecx, dword ptr [0x11bce6a8] */
  ECX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac0d1 call 0x11baeb30 */
  push32(0x11bac0d6u); f_11baeb30();
  /* 11bac0d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac0d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac0db jne 0x11bac190 */
  if (!C.zf) goto L_11bac190;
  /* 11bac0e1 mov edx, dword ptr [0x11bce6b0] */
  EDX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac0e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11bac0ea mov dword ptr [0x11bce6b0], edx */
  w32((uint32_t)(0x11bce6b0), (EDX));
  /* 11bac0f0 cmp dword ptr [0x11bce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac0f7 je 0x11bac11a */
  if (C.zf) goto L_11bac11a;
  /* 11bac0f9 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac0fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11bac101 mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
  /* 11bac106 cmp dword ptr [0x11bce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac10d jne 0x11bac118 */
  if (!C.zf) goto L_11bac118;
  /* 11bac10f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac112 mov dword ptr [0x11bce698], ecx */
  w32((uint32_t)(0x11bce698), (ECX));
L_11bac118:;
  /* 11bac118 jmp 0x11bac18e */
  goto L_11bac18e;
L_11bac11a:;
  /* 11bac11a cmp dword ptr [0x11bce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac121 je 0x11bac16f */
  if (C.zf) goto L_11bac16f;
  /* 11bac123 mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac129 push edx */
  push32((uint32_t)(EDX));
  /* 11bac12a call 0x11b9fe80 */
  push32(0x11bac12fu); f_11b9fe80();
  /* 11bac12f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac132 cmp eax, dword ptr [0x11bce6a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bce6a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac138 jne 0x11bac16f */
  if (!C.zf) goto L_11bac16f;
  /* 11bac13a push 1 */
  push32((uint32_t)(0x1u));
  /* 11bac13c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac13f push eax */
  push32((uint32_t)(EAX));
  /* 11bac140 call 0x11bac5d0 */
  push32(0x11bac145u); f_11bac5d0();
  /* 11bac145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac14a je 0x11bac16d */
  if (C.zf) goto L_11bac16d;
  /* 11bac14c mov ecx, dword ptr [0x11bce6b0] */
  ECX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac152 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11bac155 mov dword ptr [0x11bce6b0], ecx */
  w32((uint32_t)(0x11bce6b0), (ECX));
  /* 11bac15b cmp dword ptr [0x11bce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac162 jne 0x11bac16d */
  if (!C.zf) goto L_11bac16d;
  /* 11bac164 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac167 mov dword ptr [0x11bce698], edx */
  w32((uint32_t)(0x11bce698), (EDX));
L_11bac16d:;
  /* 11bac16d jmp 0x11bac18e */
  goto L_11bac18e;
L_11bac16f:;
  /* 11bac16f mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac174 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11bac177 mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
  /* 11bac17c cmp dword ptr [0x11bce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac183 jne 0x11bac18e */
  if (!C.zf) goto L_11bac18e;
  /* 11bac185 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac188 mov dword ptr [0x11bce698], ecx */
  w32((uint32_t)(0x11bce698), (ECX));
L_11bac18e:;
  /* 11bac18e jmp 0x11bac1f1 */
  goto L_11bac1f1;
L_11bac190:;
  /* 11bac190 cmp dword ptr [0x11bce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac197 jne 0x11bac1f1 */
  if (!C.zf) goto L_11bac1f1;
  /* 11bac199 cmp dword ptr [0x11bce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac1a0 je 0x11bac1f1 */
  if (C.zf) goto L_11bac1f1;
  /* 11bac1a2 mov edx, dword ptr [0x11bce6a0] */
  EDX = (r32((uint32_t)(0x11bce6a0)));
  /* 11bac1a8 push edx */
  push32((uint32_t)(EDX));
  /* 11bac1a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bac1ac push eax */
  push32((uint32_t)(EAX));
  /* 11bac1ad mov ecx, dword ptr [0x11bce6a8] */
  ECX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac1b4 call 0x11baec00 */
  push32(0x11bac1b9u); f_11baec00();
  /* 11bac1b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac1bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac1be jne 0x11bac1f1 */
  if (!C.zf) goto L_11bac1f1;
  /* 11bac1c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bac1c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac1c5 push edx */
  push32((uint32_t)(EDX));
  /* 11bac1c6 call 0x11bac5d0 */
  push32(0x11bac1cbu); f_11bac5d0();
  /* 11bac1cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac1ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac1d0 je 0x11bac1f1 */
  if (C.zf) goto L_11bac1f1;
  /* 11bac1d2 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac1d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11bac1da mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
  /* 11bac1df cmp dword ptr [0x11bce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac1e6 jne 0x11bac1f1 */
  if (!C.zf) goto L_11bac1f1;
  /* 11bac1e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac1eb mov dword ptr [0x11bce698], ecx */
  w32((uint32_t)(0x11bce698), (ECX));
L_11bac1f1:;
  /* 11bac1f1 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac1f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11bac1f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac1fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac1fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11bac1fe:;
  /* 11bac1fe mov esp, ebp */
  ESP = (EBP);
  /* 11bac200 pop ebp */
  EBP = (pop32());
  /* 11bac201 ret 4 */
  ESPCHK(0x11babee0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c210 @ 0x11bac210 (116 bytes, 33 insns) */
void f_11bac210(void) {
  FTRACE(0x11bac210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac210 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac211 mov ebp, esp */
  EBP = (ESP);
  /* 11bac213 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac214 mov eax, dword ptr [0x11bce6a8] */
  EAX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac219 push eax */
  push32((uint32_t)(EAX));
  /* 11bac21a call 0x11b9fe80 */
  push32(0x11bac21fu); f_11b9fe80();
  /* 11bac21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac222 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bac224 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac227 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11bac22a mov dword ptr [0x11bce6a4], ecx */
  w32((uint32_t)(0x11bce6a4), (ECX));
  /* 11bac230 cmp dword ptr [0x11bce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac237 je 0x11bac242 */
  if (C.zf) goto L_11bac242;
  /* 11bac239 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11bac240 jmp 0x11bac254 */
  goto L_11bac254;
L_11bac242:;
  /* 11bac242 mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac248 push edx */
  push32((uint32_t)(EDX));
  /* 11bac249 call 0x11bac8c0 */
  push32(0x11bac24eu); f_11bac8c0();
  /* 11bac24e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac251 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bac254:;
  /* 11bac254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bac257 mov dword ptr [0x11bce6a0], eax */
  w32((uint32_t)(0x11bce6a0), (EAX));
  /* 11bac25c push 1 */
  push32((uint32_t)(0x1u));
  /* 11bac25e push 0x11bac290 */
  push32((uint32_t)(0x11bac290u));
  /* 11bac263 call dword ptr [0x11bd0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0330))), 0x11bac269u);
  /* 11bac269 mov ecx, dword ptr [0x11bce6b0] */
  ECX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac26f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11bac272 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bac274 jne 0x11bac280 */
  if (!C.zf) goto L_11bac280;
  /* 11bac276 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
L_11bac280:;
  /* 11bac280 mov esp, ebp */
  ESP = (EBP);
  /* 11bac282 pop ebp */
  EBP = (pop32());
  /* 11bac283 ret  */
  ESPCHK(0x11bac210u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c290 @ 0x11bac290 (287 bytes, 86 insns) */
void f_11bac290(void) {
  FTRACE(0x11bac290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac290 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac291 mov ebp, esp */
  EBP = (ESP);
  /* 11bac293 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac299 push eax */
  push32((uint32_t)(EAX));
  /* 11bac29a call 0x11bac840 */
  push32(0x11bac29fu); f_11bac840();
  /* 11bac29f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac2a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11bac2a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bac2a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bac2aa push ecx */
  push32((uint32_t)(ECX));
  /* 11bac2ab mov edx, dword ptr [0x11bce6a4] */
  EDX = (r32((uint32_t)(0x11bce6a4)));
  /* 11bac2b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac2b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac2b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11bac2bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac2c1 push edx */
  push32((uint32_t)(EDX));
  /* 11bac2c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac2c5 push eax */
  push32((uint32_t)(EAX));
  /* 11bac2c6 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11bac2ccu);
  /* 11bac2cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac2ce jne 0x11bac2e4 */
  if (!C.zf) goto L_11bac2e4;
  /* 11bac2d0 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
  /* 11bac2da mov eax, 1 */
  EAX = (0x1u);
  /* 11bac2df jmp 0x11bac3a9 */
  goto L_11bac3a9;
L_11bac2e4:;
  /* 11bac2e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bac2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac2e8 mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac2ee push edx */
  push32((uint32_t)(EDX));
  /* 11bac2ef call 0x11baeb30 */
  push32(0x11bac2f4u); f_11baeb30();
  /* 11bac2f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac2f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac2f9 jne 0x11bac339 */
  if (!C.zf) goto L_11bac339;
  /* 11bac2fb cmp dword ptr [0x11bce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac302 jne 0x11bac316 */
  if (!C.zf) goto L_11bac316;
  /* 11bac304 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bac306 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac309 push eax */
  push32((uint32_t)(EAX));
  /* 11bac30a call 0x11bac5d0 */
  push32(0x11bac30fu); f_11bac5d0();
  /* 11bac30f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac314 je 0x11bac337 */
  if (C.zf) goto L_11bac337;
L_11bac316:;
  /* 11bac316 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac319 mov dword ptr [0x11bce6b4], ecx */
  w32((uint32_t)(0x11bce6b4), (ECX));
  /* 11bac31f mov edx, dword ptr [0x11bce6b4] */
  EDX = (r32((uint32_t)(0x11bce6b4)));
  /* 11bac325 mov dword ptr [0x11bce698], edx */
  w32((uint32_t)(0x11bce698), (EDX));
  /* 11bac32b mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac330 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11bac332 mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
L_11bac337:;
  /* 11bac337 jmp 0x11bac39c */
  goto L_11bac39c;
L_11bac339:;
  /* 11bac339 cmp dword ptr [0x11bce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac340 jne 0x11bac39c */
  if (!C.zf) goto L_11bac39c;
  /* 11bac342 cmp dword ptr [0x11bce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac349 je 0x11bac39c */
  if (C.zf) goto L_11bac39c;
  /* 11bac34b mov ecx, dword ptr [0x11bce6a0] */
  ECX = (r32((uint32_t)(0x11bce6a0)));
  /* 11bac351 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac352 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11bac355 push edx */
  push32((uint32_t)(EDX));
  /* 11bac356 mov eax, dword ptr [0x11bce6a8] */
  EAX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac35b push eax */
  push32((uint32_t)(EAX));
  /* 11bac35c call 0x11baec00 */
  push32(0x11bac361u); f_11baec00();
  /* 11bac361 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac366 jne 0x11bac39c */
  if (!C.zf) goto L_11bac39c;
  /* 11bac368 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bac36a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac36d push ecx */
  push32((uint32_t)(ECX));
  /* 11bac36e call 0x11bac5d0 */
  push32(0x11bac373u); f_11bac5d0();
  /* 11bac373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac378 je 0x11bac39c */
  if (C.zf) goto L_11bac39c;
  /* 11bac37a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac37d mov dword ptr [0x11bce6b4], edx */
  w32((uint32_t)(0x11bce6b4), (EDX));
  /* 11bac383 mov eax, dword ptr [0x11bce6b4] */
  EAX = (r32((uint32_t)(0x11bce6b4)));
  /* 11bac388 mov dword ptr [0x11bce698], eax */
  w32((uint32_t)(0x11bce698), (EAX));
  /* 11bac38d mov ecx, dword ptr [0x11bce6b0] */
  ECX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac393 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11bac396 mov dword ptr [0x11bce6b0], ecx */
  w32((uint32_t)(0x11bce6b0), (ECX));
L_11bac39c:;
  /* 11bac39c mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac3a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11bac3a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac3a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac3a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11bac3a9:;
  /* 11bac3a9 mov esp, ebp */
  ESP = (EBP);
  /* 11bac3ab pop ebp */
  EBP = (pop32());
  /* 11bac3ac ret 4 */
  ESPCHK(0x11bac290u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c3b0 @ 0x11bac3b0 (69 bytes, 20 insns) */
void f_11bac3b0(void) {
  FTRACE(0x11bac3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac3b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bac3b3 mov eax, dword ptr [0x11bce6ac] */
  EAX = (r32((uint32_t)(0x11bce6ac)));
  /* 11bac3b8 push eax */
  push32((uint32_t)(EAX));
  /* 11bac3b9 call 0x11b9fe80 */
  push32(0x11bac3beu); f_11b9fe80();
  /* 11bac3be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac3c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bac3c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac3c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11bac3c9 mov dword ptr [0x11bce69c], ecx */
  w32((uint32_t)(0x11bce69c), (ECX));
  /* 11bac3cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11bac3d1 push 0x11bac400 */
  push32((uint32_t)(0x11bac400u));
  /* 11bac3d6 call dword ptr [0x11bd0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0330))), 0x11bac3dcu);
  /* 11bac3dc mov edx, dword ptr [0x11bce6b0] */
  EDX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac3e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bac3e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bac3e7 jne 0x11bac3f3 */
  if (!C.zf) goto L_11bac3f3;
  /* 11bac3e9 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
L_11bac3f3:;
  /* 11bac3f3 pop ebp */
  EBP = (pop32());
  /* 11bac3f4 ret  */
  ESPCHK(0x11bac3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c400 @ 0x11bac400 (172 bytes, 54 insns) */
void f_11bac400(void) {
  FTRACE(0x11bac400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac400 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac401 mov ebp, esp */
  EBP = (ESP);
  /* 11bac403 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac409 push eax */
  push32((uint32_t)(EAX));
  /* 11bac40a call 0x11bac840 */
  push32(0x11bac40fu); f_11bac840();
  /* 11bac40f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac412 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11bac415 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bac417 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bac41a push ecx */
  push32((uint32_t)(ECX));
  /* 11bac41b mov edx, dword ptr [0x11bce69c] */
  EDX = (r32((uint32_t)(0x11bce69c)));
  /* 11bac421 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac423 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac425 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11bac42b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac431 push edx */
  push32((uint32_t)(EDX));
  /* 11bac432 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac435 push eax */
  push32((uint32_t)(EAX));
  /* 11bac436 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11bac43cu);
  /* 11bac43c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac43e jne 0x11bac451 */
  if (!C.zf) goto L_11bac451;
  /* 11bac440 mov dword ptr [0x11bce6b0], 0 */
  w32((uint32_t)(0x11bce6b0), (0x0u));
  /* 11bac44a mov eax, 1 */
  EAX = (0x1u);
  /* 11bac44f jmp 0x11bac4a6 */
  goto L_11bac4a6;
L_11bac451:;
  /* 11bac451 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bac454 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac455 mov edx, dword ptr [0x11bce6ac] */
  EDX = (r32((uint32_t)(0x11bce6ac)));
  /* 11bac45b push edx */
  push32((uint32_t)(EDX));
  /* 11bac45c call 0x11baeb30 */
  push32(0x11bac461u); f_11baeb30();
  /* 11bac461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac466 jne 0x11bac499 */
  if (!C.zf) goto L_11bac499;
  /* 11bac468 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac46b push eax */
  push32((uint32_t)(EAX));
  /* 11bac46c call 0x11bac580 */
  push32(0x11bac471u); f_11bac580();
  /* 11bac471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac476 je 0x11bac499 */
  if (C.zf) goto L_11bac499;
  /* 11bac478 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bac47b mov dword ptr [0x11bce6b4], ecx */
  w32((uint32_t)(0x11bce6b4), (ECX));
  /* 11bac481 mov edx, dword ptr [0x11bce6b4] */
  EDX = (r32((uint32_t)(0x11bce6b4)));
  /* 11bac487 mov dword ptr [0x11bce698], edx */
  w32((uint32_t)(0x11bce698), (EDX));
  /* 11bac48d mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac492 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11bac494 mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
L_11bac499:;
  /* 11bac499 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac49e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11bac4a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac4a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac4a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11bac4a6:;
  /* 11bac4a6 mov esp, ebp */
  ESP = (EBP);
  /* 11bac4a8 pop ebp */
  EBP = (pop32());
  /* 11bac4a9 ret 4 */
  ESPCHK(0x11bac400u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c4b0 @ 0x11bac4b0 (43 bytes, 11 insns) */
void f_11bac4b0(void) {
  FTRACE(0x11bac4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bac4b3 mov eax, dword ptr [0x11bce6b0] */
  EAX = (r32((uint32_t)(0x11bce6b0)));
  /* 11bac4b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11bac4bd mov dword ptr [0x11bce6b0], eax */
  w32((uint32_t)(0x11bce6b0), (EAX));
  /* 11bac4c2 call dword ptr [0x11bd032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd032c))), 0x11bac4c8u);
  /* 11bac4c8 mov dword ptr [0x11bce6b4], eax */
  w32((uint32_t)(0x11bce6b4), (EAX));
  /* 11bac4cd mov ecx, dword ptr [0x11bce6b4] */
  ECX = (r32((uint32_t)(0x11bce6b4)));
  /* 11bac4d3 mov dword ptr [0x11bce698], ecx */
  w32((uint32_t)(0x11bce698), (ECX));
  /* 11bac4d9 pop ebp */
  EBP = (pop32());
  /* 11bac4da ret  */
  ESPCHK(0x11bac4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c4e0 @ 0x11bac4e0 (155 bytes, 57 insns) */
void f_11bac4e0(void) {
  FTRACE(0x11bac4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bac4e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac4e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac4ea je 0x11bac50b */
  if (C.zf) goto L_11bac50b;
  /* 11bac4ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac4ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bac4f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bac4f4 je 0x11bac50b */
  if (C.zf) goto L_11bac50b;
  /* 11bac4f6 push 0x11bc9b68 */
  push32((uint32_t)(0x11bc9b68u));
  /* 11bac4fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac4fe push edx */
  push32((uint32_t)(EDX));
  /* 11bac4ff call 0x11ba4390 */
  push32(0x11bac504u); f_11ba4390();
  /* 11bac504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac509 jne 0x11bac533 */
  if (!C.zf) goto L_11bac533;
L_11bac50b:;
  /* 11bac50b push 8 */
  push32((uint32_t)(0x8u));
  /* 11bac50d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11bac510 push eax */
  push32((uint32_t)(EAX));
  /* 11bac511 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11bac516 mov ecx, dword ptr [0x11bce6b4] */
  ECX = (r32((uint32_t)(0x11bce6b4)));
  /* 11bac51c push ecx */
  push32((uint32_t)(ECX));
  /* 11bac51d call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11bac523u);
  /* 11bac523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac525 jne 0x11bac52b */
  if (!C.zf) goto L_11bac52b;
  /* 11bac527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bac529 jmp 0x11bac577 */
  goto L_11bac577;
L_11bac52b:;
  /* 11bac52b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11bac52e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bac531 jmp 0x11bac56b */
  goto L_11bac56b;
L_11bac533:;
  /* 11bac533 push 0x11bc9b64 */
  push32((uint32_t)(0x11bc9b64u));
  /* 11bac538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac53b push eax */
  push32((uint32_t)(EAX));
  /* 11bac53c call 0x11ba4390 */
  push32(0x11bac541u); f_11ba4390();
  /* 11bac541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac546 jne 0x11bac56b */
  if (!C.zf) goto L_11bac56b;
  /* 11bac548 push 8 */
  push32((uint32_t)(0x8u));
  /* 11bac54a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11bac54d push ecx */
  push32((uint32_t)(ECX));
  /* 11bac54e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bac550 mov edx, dword ptr [0x11bce6b4] */
  EDX = (r32((uint32_t)(0x11bce6b4)));
  /* 11bac556 push edx */
  push32((uint32_t)(EDX));
  /* 11bac557 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11bac55du);
  /* 11bac55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac55f jne 0x11bac565 */
  if (!C.zf) goto L_11bac565;
  /* 11bac561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bac563 jmp 0x11bac577 */
  goto L_11bac577;
L_11bac565:;
  /* 11bac565 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11bac568 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11bac56b:;
  /* 11bac56b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac56e push ecx */
  push32((uint32_t)(ECX));
  /* 11bac56f call 0x11ba96b0 */
  push32(0x11bac574u); f_11ba96b0();
  /* 11bac574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bac577:;
  /* 11bac577 mov esp, ebp */
  ESP = (EBP);
  /* 11bac579 pop ebp */
  EBP = (pop32());
  /* 11bac57a ret  */
  ESPCHK(0x11bac4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c580 @ 0x11bac580 (79 bytes, 26 insns) */
void f_11bac580(void) {
  FTRACE(0x11bac580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac580 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac581 mov ebp, esp */
  EBP = (ESP);
  /* 11bac583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac586 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11bac58a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11bac58e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bac595 jmp 0x11bac5a0 */
  goto L_11bac5a0;
L_11bac597:;
  /* 11bac597 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bac59a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac59d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11bac5a0:;
  /* 11bac5a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac5a4 jae 0x11bac5c6 */
  if (!C.cf) goto L_11bac5c6;
  /* 11bac5a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bac5a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bac5af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bac5b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bac5b4 mov cx, word ptr [eax*2 + 0x11bcd014] */
  CX = (r16((uint32_t)(EAX*2 + 0x11bcd014)));
  /* 11bac5bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac5be jne 0x11bac5c4 */
  if (!C.zf) goto L_11bac5c4;
  /* 11bac5c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bac5c2 jmp 0x11bac5cb */
  goto L_11bac5cb;
L_11bac5c4:;
  /* 11bac5c4 jmp 0x11bac597 */
  goto L_11bac597;
L_11bac5c6:;
  /* 11bac5c6 mov eax, 1 */
  EAX = (0x1u);
L_11bac5cb:;
  /* 11bac5cb mov esp, ebp */
  ESP = (EBP);
  /* 11bac5cd pop ebp */
  EBP = (pop32());
  /* 11bac5ce ret  */
  ESPCHK(0x11bac580u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c5d0 @ 0x11bac5d0 (135 bytes, 48 insns) */
void f_11bac5d0(void) {
  FTRACE(0x11bac5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bac5d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac5d6 push esi */
  push32((uint32_t)(ESI));
  /* 11bac5d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac5da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bac5df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bac5e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bac5e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11bac5ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bac5f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bac5f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bac5f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11bac5f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11bac5fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11bac5fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bac5ff push edx */
  push32((uint32_t)(EDX));
  /* 11bac600 call dword ptr [0x11bce6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce6b8))), 0x11bac606u);
  /* 11bac606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac608 jne 0x11bac60e */
  if (!C.zf) goto L_11bac60e;
  /* 11bac60a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bac60c jmp 0x11bac652 */
  goto L_11bac652;
L_11bac60e:;
  /* 11bac60e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11bac611 push eax */
  push32((uint32_t)(EAX));
  /* 11bac612 call 0x11bac840 */
  push32(0x11bac617u); f_11bac840();
  /* 11bac617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac61a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac61d je 0x11bac64d */
  if (C.zf) goto L_11bac64d;
  /* 11bac61f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac623 je 0x11bac64d */
  if (C.zf) goto L_11bac64d;
  /* 11bac625 mov ecx, dword ptr [0x11bce6a8] */
  ECX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac62b push ecx */
  push32((uint32_t)(ECX));
  /* 11bac62c call 0x11bac8c0 */
  push32(0x11bac631u); f_11bac8c0();
  /* 11bac631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac634 mov esi, eax */
  ESI = (EAX);
  /* 11bac636 mov edx, dword ptr [0x11bce6a8] */
  EDX = (r32((uint32_t)(0x11bce6a8)));
  /* 11bac63c push edx */
  push32((uint32_t)(EDX));
  /* 11bac63d call 0x11b9fe80 */
  push32(0x11bac642u); f_11b9fe80();
  /* 11bac642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac645 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac647 jne 0x11bac64d */
  if (!C.zf) goto L_11bac64d;
  /* 11bac649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bac64b jmp 0x11bac652 */
  goto L_11bac652;
L_11bac64d:;
  /* 11bac64d mov eax, 1 */
  EAX = (0x1u);
L_11bac652:;
  /* 11bac652 pop esi */
  ESI = (pop32());
  /* 11bac653 mov esp, ebp */
  ESP = (EBP);
  /* 11bac655 pop ebp */
  EBP = (pop32());
  /* 11bac656 ret  */
  ESPCHK(0x11bac5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c660 @ 0x11bac660 (77 bytes, 18 insns) */
void f_11bac660(void) {
  FTRACE(0x11bac660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac660 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac661 mov ebp, esp */
  EBP = (ESP);
  /* 11bac663 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac669 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11bac673 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11bac679 push eax */
  push32((uint32_t)(EAX));
  /* 11bac67a call dword ptr [0x11bd0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0328))), 0x11bac680u);
  /* 11bac680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bac682 je 0x11bac699 */
  if (C.zf) goto L_11bac699;
  /* 11bac684 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac68b jne 0x11bac699 */
  if (!C.zf) goto L_11bac699;
  /* 11bac68d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11bac697 jmp 0x11bac6a3 */
  goto L_11bac6a3;
L_11bac699:;
  /* 11bac699 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11bac6a3:;
  /* 11bac6a3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11bac6a9 mov esp, ebp */
  ESP = (EBP);
  /* 11bac6ab pop ebp */
  EBP = (pop32());
  /* 11bac6ac ret  */
  ESPCHK(0x11bac660u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11bac6b0 (388 bytes, 118 insns) */
void f_11bac6b0(void) {
  FTRACE(0x11bac6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac6b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bac6b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac6b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bac6bd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11bac6c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11bac6cb:;
  /* 11bac6cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bac6ce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac6d1 jg 0x11bac818 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bac818;
  /* 11bac6d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bac6da add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac6dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bac6de sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac6e0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bac6e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bac6e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac6e8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac6eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac6ee cmp edx, dword ptr [ecx + 0x11bccb70] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11bccb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac6f4 jne 0x11bac7ee */
  if (!C.zf) goto L_11bac7ee;
  /* 11bac6fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bac6fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bac700 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac704 ja 0x11bac727 */
  if ((!C.cf&&!C.zf)) goto L_11bac727;
  /* 11bac706 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac70a je 0x11bac799 */
  if (C.zf) goto L_11bac799;
  /* 11bac710 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac714 je 0x11bac744 */
  if (C.zf) goto L_11bac744;
  /* 11bac716 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac71a je 0x11bac766 */
  if (C.zf) goto L_11bac766;
  /* 11bac71c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac720 je 0x11bac788 */
  if (C.zf) goto L_11bac788;
  /* 11bac722 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac727:;
  /* 11bac727 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac72e je 0x11bac755 */
  if (C.zf) goto L_11bac755;
  /* 11bac730 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac737 je 0x11bac777 */
  if (C.zf) goto L_11bac777;
  /* 11bac739 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac740 je 0x11bac7aa */
  if (C.zf) goto L_11bac7aa;
  /* 11bac742 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac744:;
  /* 11bac744 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac747 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac74a add ecx, 0x11bccb74 */
  { uint32_t _a=(ECX),_b=(0x11bccb74u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac750 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bac753 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac755:;
  /* 11bac755 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac758 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac75b mov eax, dword ptr [edx + 0x11bccb7c] */
  EAX = (r32((uint32_t)(EDX + 0x11bccb7c)));
  /* 11bac761 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bac764 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac766:;
  /* 11bac766 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac769 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac76c add ecx, 0x11bccb80 */
  { uint32_t _a=(ECX),_b=(0x11bccb80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac772 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bac775 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac777:;
  /* 11bac777 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac77a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac77d mov eax, dword ptr [edx + 0x11bccb84] */
  EAX = (r32((uint32_t)(EDX + 0x11bccb84)));
  /* 11bac783 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bac786 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac788:;
  /* 11bac788 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac78b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac78e add ecx, 0x11bccb88 */
  { uint32_t _a=(ECX),_b=(0x11bccb88u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac794 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bac797 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac799:;
  /* 11bac799 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac79c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac79f add edx, 0x11bccb8c */
  { uint32_t _a=(EDX),_b=(0x11bccb8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac7a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bac7a8 jmp 0x11bac7b8 */
  goto L_11bac7b8;
L_11bac7aa:;
  /* 11bac7aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac7ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac7b0 add eax, 0x11bccb94 */
  { uint32_t _a=(EAX),_b=(0x11bccb94u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac7b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bac7b8:;
  /* 11bac7b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac7bc je 0x11bac7c4 */
  if (C.zf) goto L_11bac7c4;
  /* 11bac7be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac7c2 jge 0x11bac7c6 */
  if ((C.sf==C.of)) goto L_11bac7c6;
L_11bac7c4:;
  /* 11bac7c4 jmp 0x11bac818 */
  goto L_11bac818;
L_11bac7c6:;
  /* 11bac7c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bac7c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac7cc push ecx */
  push32((uint32_t)(ECX));
  /* 11bac7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bac7d0 push edx */
  push32((uint32_t)(EDX));
  /* 11bac7d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bac7d4 push eax */
  push32((uint32_t)(EAX));
  /* 11bac7d5 call 0x11ba0870 */
  push32(0x11bac7dau); f_11ba0870();
  /* 11bac7da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac7dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bac7e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac7e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11bac7e7 mov eax, 1 */
  EAX = (0x1u);
  /* 11bac7ec jmp 0x11bac82e */
  goto L_11bac82e;
L_11bac7ee:;
  /* 11bac7ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac7f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bac7f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac7f7 cmp eax, dword ptr [edx + 0x11bccb70] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11bccb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac7fd jae 0x11bac80a */
  if (!C.cf) goto L_11bac80a;
  /* 11bac7ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac802 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac805 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bac808 jmp 0x11bac813 */
  goto L_11bac813;
L_11bac80a:;
  /* 11bac80a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bac80d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac810 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bac813:;
  /* 11bac813 jmp 0x11bac6cb */
  goto L_11bac6cb;
L_11bac818:;
  /* 11bac818 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bac81b push eax */
  push32((uint32_t)(EAX));
  /* 11bac81c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bac81f push ecx */
  push32((uint32_t)(ECX));
  /* 11bac820 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bac823 push edx */
  push32((uint32_t)(EDX));
  /* 11bac824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac827 push eax */
  push32((uint32_t)(EAX));
  /* 11bac828 call dword ptr [0x11bd0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0334))), 0x11bac82eu);
L_11bac82e:;
  /* 11bac82e mov esp, ebp */
  ESP = (EBP);
  /* 11bac830 pop ebp */
  EBP = (pop32());
  /* 11bac831 ret 0x10 */
  ESPCHK(0x11bac6b0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001c840 @ 0x11bac840 (118 bytes, 42 insns) */
void f_11bac840(void) {
  FTRACE(0x11bac840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac840 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac841 mov ebp, esp */
  EBP = (ESP);
  /* 11bac843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac846 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bac84d:;
  /* 11bac84d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac850 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bac852 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11bac855 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bac859 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac85c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac85f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bac862 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bac864 je 0x11bac8af */
  if (C.zf) goto L_11bac8af;
  /* 11bac866 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bac86a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac86d jl 0x11bac882 */
  if ((C.sf!=C.of)) goto L_11bac882;
  /* 11bac86f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bac873 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac876 jg 0x11bac882 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bac882;
  /* 11bac878 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11bac87b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bac87d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11bac880 jmp 0x11bac89c */
  goto L_11bac89c;
L_11bac882:;
  /* 11bac882 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bac886 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac889 jl 0x11bac89c */
  if ((C.sf!=C.of)) goto L_11bac89c;
  /* 11bac88b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bac88f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac892 jg 0x11bac89c */
  if ((!C.zf&&C.sf==C.of)) goto L_11bac89c;
  /* 11bac894 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11bac897 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bac899 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11bac89c:;
  /* 11bac89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bac89f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11bac8a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bac8a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11bac8aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bac8ad jmp 0x11bac84d */
  goto L_11bac84d;
L_11bac8af:;
  /* 11bac8af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bac8b2 mov esp, ebp */
  ESP = (EBP);
  /* 11bac8b4 pop ebp */
  EBP = (pop32());
  /* 11bac8b5 ret  */
  ESPCHK(0x11bac840u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11bac8c0 (101 bytes, 36 insns) */
void f_11bac8c0(void) {
  FTRACE(0x11bac8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bac8c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac8c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bac8cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac8d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bac8d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11bac8d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac8d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac8db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11bac8de:;
  /* 11bac8de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bac8e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac8e5 jl 0x11bac8f0 */
  if ((C.sf!=C.of)) goto L_11bac8f0;
  /* 11bac8e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bac8eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac8ee jle 0x11bac902 */
  if ((C.zf||C.sf!=C.of)) goto L_11bac902;
L_11bac8f0:;
  /* 11bac8f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bac8f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac8f7 jl 0x11bac91e */
  if ((C.sf!=C.of)) goto L_11bac91e;
  /* 11bac8f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bac8fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac900 jg 0x11bac91e */
  if ((!C.zf&&C.sf==C.of)) goto L_11bac91e;
L_11bac902:;
  /* 11bac902 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bac905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac908 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bac90b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac90e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bac910 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11bac913 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac916 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac919 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bac91c jmp 0x11bac8de */
  goto L_11bac8de;
L_11bac91e:;
  /* 11bac91e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bac921 mov esp, ebp */
  ESP = (EBP);
  /* 11bac923 pop ebp */
  EBP = (pop32());
  /* 11bac924 ret  */
  ESPCHK(0x11bac8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c930 @ 0x11bac930 (1085 bytes, 299 insns) */
void f_11bac930(void) {
  FTRACE(0x11bac930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bac930 push ebp */
  push32((uint32_t)(EBP));
  /* 11bac931 mov ebp, esp */
  EBP = (ESP);
  /* 11bac933 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac936 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11bac93c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bac943 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11bac94a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bac951 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bac958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bac95b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11bac95f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11bac963 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bac966 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11bac96a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11bac96e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bac971 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bac977 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bac97a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bac980 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11bac982 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11bac988 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11bac98c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11bac990 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11bac994 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11bac998 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11bac99c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11bac9a1 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11bac9a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bac9a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bac9ae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bac9b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bac9b6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bac9b8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11bac9bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bac9bf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bac9c5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac9cb jge 0x11bac9ed */
  if ((C.sf==C.of)) goto L_11bac9ed;
  /* 11bac9cd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bac9d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bac9d6 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac9dc jge 0x11bac9ed */
  if ((C.sf==C.of)) goto L_11bac9ed;
  /* 11bac9de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bac9e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bac9e6 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bac9eb jle 0x11baca24 */
  if ((C.zf||C.sf!=C.of)) goto L_11baca24;
L_11bac9ed:;
  /* 11bac9ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bac9f0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bac9f6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bac9f8 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bac9fa and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11baca00 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baca06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca09 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11baca0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca0f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11baca16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca19 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11baca1f jmp 0x11bacd69 */
  goto L_11bacd69;
L_11baca24:;
  /* 11baca24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11baca27 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11baca2d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baca33 jg 0x11baca57 */
  if ((!C.zf&&C.sf==C.of)) goto L_11baca57;
  /* 11baca35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca38 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11baca3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca42 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11baca49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca4c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11baca52 jmp 0x11bacd69 */
  goto L_11bacd69;
L_11baca57:;
  /* 11baca57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11baca5a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baca5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baca61 jne 0x11baca9d */
  if (!C.zf) goto L_11baca9d;
  /* 11baca63 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11baca67 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11baca6b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11baca6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11baca75 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baca7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baca7c jne 0x11baca9d */
  if (!C.zf) goto L_11baca9d;
  /* 11baca7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca81 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baca85 jne 0x11baca9d */
  if (!C.zf) goto L_11baca9d;
  /* 11baca87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baca8d jne 0x11baca9d */
  if (!C.zf) goto L_11baca9d;
  /* 11baca8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baca92 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11baca98 jmp 0x11bacd69 */
  goto L_11bacd69;
L_11baca9d:;
  /* 11baca9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bacaa0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bacaa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bacaa8 jne 0x11bacaf9 */
  if (!C.zf) goto L_11bacaf9;
  /* 11bacaaa mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11bacaae add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11bacab2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11bacab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacab9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bacabc and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bacac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bacac4 jne 0x11bacaf9 */
  if (!C.zf) goto L_11bacaf9;
  /* 11bacac6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacac9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacacd jne 0x11bacaf9 */
  if (!C.zf) goto L_11bacaf9;
  /* 11bacacf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacad2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacad5 jne 0x11bacaf9 */
  if (!C.zf) goto L_11bacaf9;
  /* 11bacad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacada mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11bacae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacae4 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11bacaeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacaee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bacaf4 jmp 0x11bacd69 */
  goto L_11bacd69;
L_11bacaf9:;
  /* 11bacaf9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11bacb00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11bacb07 jmp 0x11bacb12 */
  goto L_11bacb12;
L_11bacb09:;
  /* 11bacb09 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bacb0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacb0f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11bacb12:;
  /* 11bacb12 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacb16 jge 0x11bacbd1 */
  if ((C.sf==C.of)) goto L_11bacbd1;
  /* 11bacb1c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bacb1f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11bacb21 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11bacb24 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11bacb2b mov eax, 5 */
  EAX = (0x5u);
  /* 11bacb30 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacb33 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11bacb36 jmp 0x11bacb41 */
  goto L_11bacb41;
L_11bacb38:;
  /* 11bacb38 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11bacb3b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacb3e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11bacb41:;
  /* 11bacb41 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacb45 jle 0x11bacbc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11bacbc3;
  /* 11bacb47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacb4a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacb4d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11bacb50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacb53 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacb56 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11bacb59 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bacb5c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11bacb60 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11bacb63 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11bacb66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bacb68 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11bacb6b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11bacb6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bacb70 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11bacb73 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bacb76 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11bacb79 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bacb7c push ecx */
  push32((uint32_t)(ECX));
  /* 11bacb7d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11bacb80 push edx */
  push32((uint32_t)(EDX));
  /* 11bacb81 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bacb84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bacb86 push ecx */
  push32((uint32_t)(ECX));
  /* 11bacb87 call 0x11ba8310 */
  push32(0x11bacb8cu); f_11ba8310();
  /* 11bacb8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacb8f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11bacb92 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacb96 je 0x11bacbac */
  if (C.zf) goto L_11bacbac;
  /* 11bacb98 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bacb9b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11bacba0 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11bacba4 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bacba7 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11bacbac:;
  /* 11bacbac mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bacbaf add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacbb2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11bacbb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bacbb8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacbbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bacbbe jmp 0x11bacb38 */
  goto L_11bacb38;
L_11bacbc3:;
  /* 11bacbc3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bacbc6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacbc9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11bacbcc jmp 0x11bacb09 */
  goto L_11bacb09;
L_11bacbd1:;
  /* 11bacbd1 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11bacbd5 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11bacbda mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11bacbde:;
  /* 11bacbde movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11bacbe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bacbe4 jle 0x11bacc0d */
  if ((C.zf||C.sf!=C.of)) goto L_11bacc0d;
  /* 11bacbe6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bacbe9 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11bacbef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bacbf1 jne 0x11bacc0d */
  if (!C.zf) goto L_11bacc0d;
  /* 11bacbf3 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11bacbf6 push edx */
  push32((uint32_t)(EDX));
  /* 11bacbf7 call 0x11ba8400 */
  push32(0x11bacbfcu); f_11ba8400();
  /* 11bacbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacbff mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11bacc03 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11bacc07 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11bacc0b jmp 0x11bacbde */
  goto L_11bacbde;
L_11bacc0d:;
  /* 11bacc0d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11bacc11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bacc13 jg 0x11bacc6d */
  if ((!C.zf&&C.sf==C.of)) goto L_11bacc6d;
  /* 11bacc15 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11bacc19 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11bacc1d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11bacc21:;
  /* 11bacc21 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11bacc25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bacc27 jge 0x11bacc5c */
  if ((C.sf==C.of)) goto L_11bacc5c;
  /* 11bacc29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bacc2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bacc32 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bacc35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bacc37 je 0x11bacc42 */
  if (C.zf) goto L_11bacc42;
  /* 11bacc39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacc3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacc3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bacc42:;
  /* 11bacc42 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11bacc45 push eax */
  push32((uint32_t)(EAX));
  /* 11bacc46 call 0x11ba8460 */
  push32(0x11bacc4bu); f_11ba8460();
  /* 11bacc4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacc4e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11bacc52 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11bacc56 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11bacc5a jmp 0x11bacc21 */
  goto L_11bacc21;
L_11bacc5c:;
  /* 11bacc5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacc60 je 0x11bacc6d */
  if (C.zf) goto L_11bacc6d;
  /* 11bacc62 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11bacc66 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11bacc69 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11bacc6d:;
  /* 11bacc6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bacc70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bacc75 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacc7a jg 0x11bacc8d */
  if ((!C.zf&&C.sf==C.of)) goto L_11bacc8d;
  /* 11bacc7c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bacc7f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bacc85 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacc8b jne 0x11baccee */
  if (!C.zf) goto L_11baccee;
L_11bacc8d:;
  /* 11bacc8d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacc91 jne 0x11bacce5 */
  if (!C.zf) goto L_11bacce5;
  /* 11bacc93 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11bacc9a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacc9e jne 0x11baccda */
  if (!C.zf) goto L_11baccda;
  /* 11bacca0 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11bacca7 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11baccaa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11baccb0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baccb6 jne 0x11bacccc */
  if (!C.zf) goto L_11bacccc;
  /* 11baccb8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11baccbe mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11baccc2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11baccc6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11baccca jmp 0x11baccd8 */
  goto L_11baccd8;
L_11bacccc:;
  /* 11bacccc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11baccd0 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11baccd4 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11baccd8:;
  /* 11baccd8 jmp 0x11bacce3 */
  goto L_11bacce3;
L_11baccda:;
  /* 11baccda mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11baccdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacce0 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11bacce3:;
  /* 11bacce3 jmp 0x11baccee */
  goto L_11baccee;
L_11bacce5:;
  /* 11bacce5 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11bacce8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacceb mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11baccee:;
  /* 11baccee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11baccf1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11baccf7 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baccfd jl 0x11bacd33 */
  if ((C.sf!=C.of)) goto L_11bacd33;
  /* 11baccff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bacd02 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bacd08 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bacd0a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacd0c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bacd12 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacd18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11bacd1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd21 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11bacd28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd2b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11bacd31 jmp 0x11bacd69 */
  goto L_11bacd69;
L_11bacd33:;
  /* 11bacd33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd36 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11bacd3a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11bacd3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bacd43 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11bacd46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bacd4c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11bacd4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bacd52 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bacd57 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bacd5a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bacd60 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11bacd62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacd65 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11bacd69:;
  /* 11bacd69 mov esp, ebp */
  ESP = (EBP);
  /* 11bacd6b pop ebp */
  EBP = (pop32());
  /* 11bacd6c ret  */
  ESPCHK(0x11bac930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cd70 @ 0x11bacd70 (195 bytes, 67 insns) */
void f_11bacd70(void) {
  FTRACE(0x11bacd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bacd70 push ebp */
  push32((uint32_t)(EBP));
  /* 11bacd71 mov ebp, esp */
  EBP = (ESP);
  /* 11bacd73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacd76 mov eax, 0x11bcd3f0 */
  EAX = (0x11bcd3f0u);
  /* 11bacd7b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacd7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bacd81 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacd85 jne 0x11bacd8c */
  if (!C.zf) goto L_11bacd8c;
  /* 11bacd87 jmp 0x11bace2f */
  goto L_11bace2f;
L_11bacd8c:;
  /* 11bacd8c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacd90 jge 0x11bacda5 */
  if ((C.sf==C.of)) goto L_11bacda5;
  /* 11bacd92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacd95 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bacd97 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11bacd9a mov edx, 0x11bcd550 */
  EDX = (0x11bcd550u);
  /* 11bacd9f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bacda2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bacda5:;
  /* 11bacda5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacda9 jne 0x11bacdb3 */
  if (!C.zf) goto L_11bacdb3;
  /* 11bacdab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacdae mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11bacdb3:;
  /* 11bacdb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacdb7 je 0x11bace2f */
  if (C.zf) goto L_11bace2f;
  /* 11bacdb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacdbc add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacdbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bacdc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacdc5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11bacdc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bacdcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bacdce sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11bacdd1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11bacdd4 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacdd8 jne 0x11bacddc */
  if (!C.zf) goto L_11bacddc;
  /* 11bacdda jmp 0x11bacdb3 */
  goto L_11bacdb3;
L_11bacddc:;
  /* 11bacddc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bacddf imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bacde2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacde5 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacde7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bacdea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bacded xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bacdef mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11bacdf2 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacdf8 jl 0x11bace1d */
  if ((C.sf!=C.of)) goto L_11bace1d;
  /* 11bacdfa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bacdfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bacdff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bace02 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11bace05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bace08 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bace0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bace0e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11bace11 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bace14 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11bace17 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11bace1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11bace1d:;
  /* 11bace1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bace20 push edx */
  push32((uint32_t)(EDX));
  /* 11bace21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bace24 push eax */
  push32((uint32_t)(EAX));
  /* 11bace25 call 0x11bac930 */
  push32(0x11bace2au); f_11bac930();
  /* 11bace2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bace2d jmp 0x11bacdb3 */
  goto L_11bacdb3;
L_11bace2f:;
  /* 11bace2f mov esp, ebp */
  ESP = (EBP);
  /* 11bace31 pop ebp */
  EBP = (pop32());
  /* 11bace32 ret  */
  ESPCHK(0x11bacd70u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11bace40 (52 bytes, 19 insns) */
void f_11bace40(void) {
  FTRACE(0x11bace40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bace40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bace44 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11bace48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bace4a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11bace4e jne 0x11bace59 */
  if (!C.zf) goto L_11bace59;
  /* 11bace50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11bace54 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bace56 ret 0x10 */
  ESPCHK(0x11bace40u, _esp0);
  ESP += 20; return;
L_11bace59:;
  /* 11bace59 push ebx */
  push32((uint32_t)(EBX));
  /* 11bace5a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bace5c mov ebx, eax */
  EBX = (EAX);
  /* 11bace5e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bace62 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bace66 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bace68 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bace6c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bace6e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bace70 pop ebx */
  EBX = (pop32());
  /* 11bace71 ret 0x10 */
  ESPCHK(0x11bace40u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x11bace80 (79 bytes, 32 insns) */
void f_11bace80(void) {
  FTRACE(0x11bace80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bace80 push ebp */
  push32((uint32_t)(EBP));
  /* 11bace81 mov ebp, esp */
  EBP = (ESP);
  /* 11bace83 push ecx */
  push32((uint32_t)(ECX));
  /* 11bace84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bace88 jne 0x11bace8e */
  if (!C.zf) goto L_11bace8e;
  /* 11bace8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bace8c jmp 0x11bacecb */
  goto L_11bacecb;
L_11bace8e:;
  /* 11bace8e mov eax, dword ptr [0x11bce700] */
  EAX = (r32((uint32_t)(0x11bce700)));
  /* 11bace93 push eax */
  push32((uint32_t)(EAX));
  /* 11bace94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bace97 push ecx */
  push32((uint32_t)(ECX));
  /* 11bace98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bace9b push edx */
  push32((uint32_t)(EDX));
  /* 11bace9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bace9f push eax */
  push32((uint32_t)(EAX));
  /* 11bacea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bacea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bacea6 mov edx, dword ptr [0x11bce9a4] */
  EDX = (r32((uint32_t)(0x11bce9a4)));
  /* 11baceac push edx */
  push32((uint32_t)(EDX));
  /* 11bacead call 0x11baed10 */
  push32(0x11baceb2u); f_11baed10();
  /* 11baceb2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baceb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baceb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacebc jne 0x11bacec5 */
  if (!C.zf) goto L_11bacec5;
  /* 11bacebe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11bacec3 jmp 0x11bacecb */
  goto L_11bacecb;
L_11bacec5:;
  /* 11bacec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacec8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11bacecb:;
  /* 11bacecb mov esp, ebp */
  ESP = (EBP);
  /* 11bacecd pop ebp */
  EBP = (pop32());
  /* 11bacece ret  */
  ESPCHK(0x11bace80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ced0 @ 0x11baced0 (174 bytes, 66 insns) */
void f_11baced0(void) {
  FTRACE(0x11baced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baced0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baced1 mov ebp, esp */
  EBP = (ESP);
  /* 11baced3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baced6 mov eax, dword ptr [0x11bce404] */
  EAX = (r32((uint32_t)(0x11bce404)));
  /* 11bacedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bacede:;
  /* 11bacede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacee1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacee4 je 0x11bacf78 */
  if (C.zf) goto L_11bacf78;
  /* 11baceea push 0 */
  push32((uint32_t)(0x0u));
  /* 11baceec push 0 */
  push32((uint32_t)(0x0u));
  /* 11baceee push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacef2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bacef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacef7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bacef9 push eax */
  push32((uint32_t)(EAX));
  /* 11bacefa push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacefc push 1 */
  push32((uint32_t)(0x1u));
  /* 11bacefe call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11bacf04u);
  /* 11bacf04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bacf07 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacf0b jne 0x11bacf12 */
  if (!C.zf) goto L_11bacf12;
  /* 11bacf0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bacf10 jmp 0x11bacf7a */
  goto L_11bacf7a;
L_11bacf12:;
  /* 11bacf12 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11bacf14 push 0x11bc9b6c */
  push32((uint32_t)(0x11bc9b6cu));
  /* 11bacf19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bacf1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bacf1e push ecx */
  push32((uint32_t)(ECX));
  /* 11bacf1f call 0x11b9a7d0 */
  push32(0x11bacf24u); f_11b9a7d0();
  /* 11bacf24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacf27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bacf2a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacf2e jne 0x11bacf35 */
  if (!C.zf) goto L_11bacf35;
  /* 11bacf30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bacf33 jmp 0x11bacf7a */
  goto L_11bacf7a;
L_11bacf35:;
  /* 11bacf35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacf37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacf39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bacf3c push edx */
  push32((uint32_t)(EDX));
  /* 11bacf3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bacf40 push eax */
  push32((uint32_t)(EAX));
  /* 11bacf41 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bacf43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacf46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bacf48 push edx */
  push32((uint32_t)(EDX));
  /* 11bacf49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacf4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11bacf4d call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11bacf53u);
  /* 11bacf53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bacf55 jne 0x11bacf5c */
  if (!C.zf) goto L_11bacf5c;
  /* 11bacf57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bacf5a jmp 0x11bacf7a */
  goto L_11bacf7a;
L_11bacf5c:;
  /* 11bacf5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacf5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bacf61 push eax */
  push32((uint32_t)(EAX));
  /* 11bacf62 call 0x11baf160 */
  push32(0x11bacf67u); f_11baf160();
  /* 11bacf67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacf6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacf6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacf70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bacf73 jmp 0x11bacede */
  goto L_11bacede;
L_11bacf78:;
  /* 11bacf78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bacf7a:;
  /* 11bacf7a mov esp, ebp */
  ESP = (EBP);
  /* 11bacf7c pop ebp */
  EBP = (pop32());
  /* 11bacf7d ret  */
  ESPCHK(0x11baced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf80 @ 0x11bacf80 (130 bytes, 50 insns) */
void f_11bacf80(void) {
  FTRACE(0x11bacf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bacf80 push ebp */
  push32((uint32_t)(EBP));
  /* 11bacf81 mov ebp, esp */
  EBP = (ESP);
  /* 11bacf83 push ecx */
  push32((uint32_t)(ECX));
  /* 11bacf84 push ebx */
  push32((uint32_t)(EBX));
  /* 11bacf85 push esi */
  push32((uint32_t)(ESI));
  /* 11bacf86 push edi */
  push32((uint32_t)(EDI));
  /* 11bacf87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bacf8e:;
  /* 11bacf8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacf92 jne 0x11bacfb2 */
  if (!C.zf) goto L_11bacfb2;
  /* 11bacf94 push 0x11bc9b84 */
  push32((uint32_t)(0x11bc9b84u));
  /* 11bacf99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bacf9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11bacf9d push 0x11bc9b78 */
  push32((uint32_t)(0x11bc9b78u));
  /* 11bacfa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bacfa4 call 0x11b99390 */
  push32(0x11bacfa9u); f_11b99390();
  /* 11bacfa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacfac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bacfaf jne 0x11bacfb2 */
  if (!C.zf) goto L_11bacfb2;
  /* 11bacfb1 int3  */
  x86_unimpl("int3 @ 0x11bacfb1");
L_11bacfb2:;
  /* 11bacfb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bacfb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bacfb6 jne 0x11bacf8e */
  if (!C.zf) goto L_11bacf8e;
  /* 11bacfb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacfbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bacfbe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11bacfc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bacfc3 je 0x11bacfd1 */
  if (C.zf) goto L_11bacfd1;
  /* 11bacfc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacfc8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11bacfcf jmp 0x11bacff8 */
  goto L_11bacff8;
L_11bacfd1:;
  /* 11bacfd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacfd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11bacfd5 call 0x11ba5740 */
  push32(0x11bacfdau); f_11ba5740();
  /* 11bacfda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacfdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacfe0 push edx */
  push32((uint32_t)(EDX));
  /* 11bacfe1 call 0x11bad010 */
  push32(0x11bacfe6u); f_11bad010();
  /* 11bacfe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bacfe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bacfec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bacfef push eax */
  push32((uint32_t)(EAX));
  /* 11bacff0 call 0x11ba57b0 */
  push32(0x11bacff5u); f_11ba57b0();
  /* 11bacff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bacff8:;
  /* 11bacff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bacffb pop edi */
  EDI = (pop32());
  /* 11bacffc pop esi */
  ESI = (pop32());
  /* 11bacffd pop ebx */
  EBX = (pop32());
  /* 11bacffe mov esp, ebp */
  ESP = (EBP);
  /* 11bad000 pop ebp */
  EBP = (pop32());
  /* 11bad001 ret  */
  ESPCHK(0x11bacf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d010 @ 0x11bad010 (190 bytes, 67 insns) */
void f_11bad010(void) {
  FTRACE(0x11bad010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad010 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad011 mov ebp, esp */
  EBP = (ESP);
  /* 11bad013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad016 push ebx */
  push32((uint32_t)(EBX));
  /* 11bad017 push esi */
  push32((uint32_t)(ESI));
  /* 11bad018 push edi */
  push32((uint32_t)(EDI));
  /* 11bad019 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bad020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad023 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bad026:;
  /* 11bad026 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad02a jne 0x11bad04a */
  if (!C.zf) goto L_11bad04a;
  /* 11bad02c push 0x11bc8f04 */
  push32((uint32_t)(0x11bc8f04u));
  /* 11bad031 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bad033 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11bad035 push 0x11bc9b78 */
  push32((uint32_t)(0x11bc9b78u));
  /* 11bad03a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bad03c call 0x11b99390 */
  push32(0x11bad041u); f_11b99390();
  /* 11bad041 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad044 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad047 jne 0x11bad04a */
  if (!C.zf) goto L_11bad04a;
  /* 11bad049 int3  */
  x86_unimpl("int3 @ 0x11bad049");
L_11bad04a:;
  /* 11bad04a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bad04c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bad04e jne 0x11bad026 */
  if (!C.zf) goto L_11bad026;
  /* 11bad050 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad053 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11bad056 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11bad05b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bad05d je 0x11bad0ba */
  if (C.zf) goto L_11bad0ba;
  /* 11bad05f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad062 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad063 call 0x11baa150 */
  push32(0x11bad068u); f_11baa150();
  /* 11bad068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad06b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bad06e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad071 push edx */
  push32((uint32_t)(EDX));
  /* 11bad072 call 0x11baf6e0 */
  push32(0x11bad077u); f_11baf6e0();
  /* 11bad077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad07a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad07d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bad080 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad081 call 0x11baf5b0 */
  push32(0x11bad086u); f_11baf5b0();
  /* 11bad086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bad08b jge 0x11bad096 */
  if ((C.sf==C.of)) goto L_11bad096;
  /* 11bad08d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bad094 jmp 0x11bad0ba */
  goto L_11bad0ba;
L_11bad096:;
  /* 11bad096 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad099 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad09d je 0x11bad0ba */
  if (C.zf) goto L_11bad0ba;
  /* 11bad09f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bad0a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad0a4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bad0a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad0a8 call 0x11b9b260 */
  push32(0x11bad0adu); f_11b9b260();
  /* 11bad0ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad0b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad0b3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11bad0ba:;
  /* 11bad0ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad0bd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11bad0c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad0c7 pop edi */
  EDI = (pop32());
  /* 11bad0c8 pop esi */
  ESI = (pop32());
  /* 11bad0c9 pop ebx */
  EBX = (pop32());
  /* 11bad0ca mov esp, ebp */
  ESP = (EBP);
  /* 11bad0cc pop ebp */
  EBP = (pop32());
  /* 11bad0cd ret  */
  ESPCHK(0x11bad010u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d0d0 @ 0x11bad0d0 (210 bytes, 63 insns) */
void f_11bad0d0(void) {
  FTRACE(0x11bad0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bad0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad0d7 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad0dd jae 0x11bad101 */
  if (!C.cf) goto L_11bad101;
  /* 11bad0df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad0e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bad0e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad0e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bad0eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bad0ee mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11bad0f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bad0fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bad0fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bad0ff jne 0x11bad114 */
  if (!C.zf) goto L_11bad114;
L_11bad101:;
  /* 11bad101 call 0x11ba6620 */
  push32(0x11bad106u); f_11ba6620();
  /* 11bad106 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bad10c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bad10f jmp 0x11bad19e */
  goto L_11bad19e;
L_11bad114:;
  /* 11bad114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad117 push edx */
  push32((uint32_t)(EDX));
  /* 11bad118 call 0x11ba9f10 */
  push32(0x11bad11du); f_11ba9f10();
  /* 11bad11d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad123 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bad126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad129 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bad12c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bad12f mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11bad136 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11bad13b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11bad13e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bad140 je 0x11bad17d */
  if (C.zf) goto L_11bad17d;
  /* 11bad142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad145 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad146 call 0x11ba9d90 */
  push32(0x11bad14bu); f_11ba9d90();
  /* 11bad14b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad14e push eax */
  push32((uint32_t)(EAX));
  /* 11bad14f call dword ptr [0x11bd0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0324))), 0x11bad155u);
  /* 11bad155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bad157 jne 0x11bad164 */
  if (!C.zf) goto L_11bad164;
  /* 11bad159 call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11bad15fu);
  /* 11bad15f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bad162 jmp 0x11bad16b */
  goto L_11bad16b;
L_11bad164:;
  /* 11bad164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bad16b:;
  /* 11bad16b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad16f jne 0x11bad173 */
  if (!C.zf) goto L_11bad173;
  /* 11bad171 jmp 0x11bad18f */
  goto L_11bad18f;
L_11bad173:;
  /* 11bad173 call 0x11ba6630 */
  push32(0x11bad178u); f_11ba6630();
  /* 11bad178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad17b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bad17d:;
  /* 11bad17d call 0x11ba6620 */
  push32(0x11bad182u); f_11ba6620();
  /* 11bad182 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bad188 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bad18f:;
  /* 11bad18f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad192 push eax */
  push32((uint32_t)(EAX));
  /* 11bad193 call 0x11ba9fa0 */
  push32(0x11bad198u); f_11ba9fa0();
  /* 11bad198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bad19e:;
  /* 11bad19e mov esp, ebp */
  ESP = (EBP);
  /* 11bad1a0 pop ebp */
  EBP = (pop32());
  /* 11bad1a1 ret  */
  ESPCHK(0x11bad0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d1b0 @ 0x11bad1b0 (289 bytes, 97 insns) */
void f_11bad1b0(void) {
  FTRACE(0x11bad1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bad1b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad1b6 push esi */
  push32((uint32_t)(ESI));
  /* 11bad1b7 mov eax, dword ptr [0x11bcd2f0] */
  EAX = (r32((uint32_t)(0x11bcd2f0)));
  /* 11bad1bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bad1bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bad1c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad1cd jmp 0x11bad1d8 */
  goto L_11bad1d8;
L_11bad1cf:;
  /* 11bad1cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad1d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad1d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bad1d8:;
  /* 11bad1d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad1dc jae 0x11bad211 */
  if (!C.cf) goto L_11bad211;
  /* 11bad1de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad1e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad1e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bad1e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad1e8 call 0x11b9fe80 */
  push32(0x11bad1edu); f_11b9fe80();
  /* 11bad1ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad1f0 mov esi, eax */
  ESI = (EAX);
  /* 11bad1f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad1f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad1f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11bad1fc push ecx */
  push32((uint32_t)(ECX));
  /* 11bad1fd call 0x11b9fe80 */
  push32(0x11bad202u); f_11b9fe80();
  /* 11bad202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad205 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad208 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bad20c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bad20f jmp 0x11bad1cf */
  goto L_11bad1cf;
L_11bad211:;
  /* 11bad211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad217 push eax */
  push32((uint32_t)(EAX));
  /* 11bad218 call 0x11b9a7b0 */
  push32(0x11bad21du); f_11b9a7b0();
  /* 11bad21d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bad223 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad227 je 0x11bad2c9 */
  if (C.zf) goto L_11bad2c9;
  /* 11bad22d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad230 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bad233 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad23a jmp 0x11bad245 */
  goto L_11bad245;
L_11bad23c:;
  /* 11bad23c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad23f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad242 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bad245:;
  /* 11bad245 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad249 jae 0x11bad2ba */
  if (!C.cf) goto L_11bad2ba;
  /* 11bad24b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad24e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11bad251 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad254 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad257 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bad25a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad25d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad260 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bad263 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad264 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad267 push edx */
  push32((uint32_t)(EDX));
  /* 11bad268 call 0x11ba0000 */
  push32(0x11bad26du); f_11ba0000();
  /* 11bad26d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad270 push eax */
  push32((uint32_t)(EAX));
  /* 11bad271 call 0x11b9fe80 */
  push32(0x11bad276u); f_11b9fe80();
  /* 11bad276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad279 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad27c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad27e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bad281 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad284 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11bad287 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad28a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad28d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bad290 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad293 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad296 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11bad29a push eax */
  push32((uint32_t)(EAX));
  /* 11bad29b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad29e push ecx */
  push32((uint32_t)(ECX));
  /* 11bad29f call 0x11ba0000 */
  push32(0x11bad2a4u); f_11ba0000();
  /* 11bad2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad2a7 push eax */
  push32((uint32_t)(EAX));
  /* 11bad2a8 call 0x11b9fe80 */
  push32(0x11bad2adu); f_11b9fe80();
  /* 11bad2ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad2b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad2b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad2b5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad2b8 jmp 0x11bad23c */
  goto L_11bad23c;
L_11bad2ba:;
  /* 11bad2ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad2bd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bad2c0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad2c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad2c6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11bad2c9:;
  /* 11bad2c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad2cc pop esi */
  ESI = (pop32());
  /* 11bad2cd mov esp, ebp */
  ESP = (EBP);
  /* 11bad2cf pop ebp */
  EBP = (pop32());
  /* 11bad2d0 ret  */
  ESPCHK(0x11bad1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d2e0 @ 0x11bad2e0 (291 bytes, 97 insns) */
void f_11bad2e0(void) {
  FTRACE(0x11bad2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bad2e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad2e6 push esi */
  push32((uint32_t)(ESI));
  /* 11bad2e7 mov eax, dword ptr [0x11bcd2f0] */
  EAX = (r32((uint32_t)(0x11bcd2f0)));
  /* 11bad2ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bad2ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bad2f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad2fd jmp 0x11bad308 */
  goto L_11bad308;
L_11bad2ff:;
  /* 11bad2ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad305 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bad308:;
  /* 11bad308 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad30c jae 0x11bad342 */
  if (!C.cf) goto L_11bad342;
  /* 11bad30e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad314 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11bad318 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad319 call 0x11b9fe80 */
  push32(0x11bad31eu); f_11b9fe80();
  /* 11bad31e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad321 mov esi, eax */
  ESI = (EAX);
  /* 11bad323 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad326 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad329 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11bad32d push ecx */
  push32((uint32_t)(ECX));
  /* 11bad32e call 0x11b9fe80 */
  push32(0x11bad333u); f_11b9fe80();
  /* 11bad333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad336 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad339 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bad33d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bad340 jmp 0x11bad2ff */
  goto L_11bad2ff;
L_11bad342:;
  /* 11bad342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad348 push eax */
  push32((uint32_t)(EAX));
  /* 11bad349 call 0x11b9a7b0 */
  push32(0x11bad34eu); f_11b9a7b0();
  /* 11bad34e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad351 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bad354 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad358 je 0x11bad3fb */
  if (C.zf) goto L_11bad3fb;
  /* 11bad35e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad361 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bad364 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad36b jmp 0x11bad376 */
  goto L_11bad376;
L_11bad36d:;
  /* 11bad36d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad370 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad373 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bad376:;
  /* 11bad376 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad37a jae 0x11bad3ec */
  if (!C.cf) goto L_11bad3ec;
  /* 11bad37c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad37f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11bad382 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad388 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bad38b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad38e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad391 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11bad395 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad396 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad399 push edx */
  push32((uint32_t)(EDX));
  /* 11bad39a call 0x11ba0000 */
  push32(0x11bad39fu); f_11ba0000();
  /* 11bad39f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3a2 push eax */
  push32((uint32_t)(EAX));
  /* 11bad3a3 call 0x11b9fe80 */
  push32(0x11bad3a8u); f_11b9fe80();
  /* 11bad3a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bad3b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3b6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11bad3b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bad3c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad3c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad3c8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bad3cc push eax */
  push32((uint32_t)(EAX));
  /* 11bad3cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad3d1 call 0x11ba0000 */
  push32(0x11bad3d6u); f_11ba0000();
  /* 11bad3d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3d9 push eax */
  push32((uint32_t)(EAX));
  /* 11bad3da call 0x11b9fe80 */
  push32(0x11bad3dfu); f_11b9fe80();
  /* 11bad3df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3e5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3e7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad3ea jmp 0x11bad36d */
  goto L_11bad36d;
L_11bad3ec:;
  /* 11bad3ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3ef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bad3f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad3f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad3f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11bad3fb:;
  /* 11bad3fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad3fe pop esi */
  ESI = (pop32());
  /* 11bad3ff mov esp, ebp */
  ESP = (EBP);
  /* 11bad401 pop ebp */
  EBP = (pop32());
  /* 11bad402 ret  */
  ESPCHK(0x11bad2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d410 @ 0x11bad410 (878 bytes, 273 insns) */
void f_11bad410(void) {
  FTRACE(0x11bad410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad410 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad411 mov ebp, esp */
  EBP = (ESP);
  /* 11bad413 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad416 push esi */
  push32((uint32_t)(ESI));
  /* 11bad417 mov eax, dword ptr [0x11bcd2f0] */
  EAX = (r32((uint32_t)(0x11bcd2f0)));
  /* 11bad41c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bad41f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bad426 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad42d jmp 0x11bad438 */
  goto L_11bad438;
L_11bad42f:;
  /* 11bad42f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad435 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bad438:;
  /* 11bad438 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad43c jae 0x11bad471 */
  if (!C.cf) goto L_11bad471;
  /* 11bad43e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad444 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bad447 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad448 call 0x11b9fe80 */
  push32(0x11bad44du); f_11b9fe80();
  /* 11bad44d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad450 mov esi, eax */
  ESI = (EAX);
  /* 11bad452 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad455 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad458 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11bad45c push ecx */
  push32((uint32_t)(ECX));
  /* 11bad45d call 0x11b9fe80 */
  push32(0x11bad462u); f_11b9fe80();
  /* 11bad462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad465 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad468 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bad46c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bad46f jmp 0x11bad42f */
  goto L_11bad42f;
L_11bad471:;
  /* 11bad471 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad478 jmp 0x11bad483 */
  goto L_11bad483;
L_11bad47a:;
  /* 11bad47a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad47d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad480 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bad483:;
  /* 11bad483 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad487 jae 0x11bad4bd */
  if (!C.cf) goto L_11bad4bd;
  /* 11bad489 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad48c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad48f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11bad493 push eax */
  push32((uint32_t)(EAX));
  /* 11bad494 call 0x11b9fe80 */
  push32(0x11bad499u); f_11b9fe80();
  /* 11bad499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad49c mov esi, eax */
  ESI = (EAX);
  /* 11bad49e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad4a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad4a4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bad4a8 push eax */
  push32((uint32_t)(EAX));
  /* 11bad4a9 call 0x11b9fe80 */
  push32(0x11bad4aeu); f_11b9fe80();
  /* 11bad4ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad4b1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad4b4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bad4b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bad4bb jmp 0x11bad47a */
  goto L_11bad47a;
L_11bad4bd:;
  /* 11bad4bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad4c0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11bad4c6 push eax */
  push32((uint32_t)(EAX));
  /* 11bad4c7 call 0x11b9fe80 */
  push32(0x11bad4ccu); f_11b9fe80();
  /* 11bad4cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad4cf mov esi, eax */
  ESI = (EAX);
  /* 11bad4d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad4d4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11bad4da push edx */
  push32((uint32_t)(EDX));
  /* 11bad4db call 0x11b9fe80 */
  push32(0x11bad4e0u); f_11b9fe80();
  /* 11bad4e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad4e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad4e6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bad4ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bad4ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad4f0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11bad4f6 push edx */
  push32((uint32_t)(EDX));
  /* 11bad4f7 call 0x11b9fe80 */
  push32(0x11bad4fcu); f_11b9fe80();
  /* 11bad4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad4ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad502 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bad506 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bad509 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad50c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11bad512 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad513 call 0x11b9fe80 */
  push32(0x11bad518u); f_11b9fe80();
  /* 11bad518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad51b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad51e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bad522 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bad525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad528 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11bad52e push edx */
  push32((uint32_t)(EDX));
  /* 11bad52f call 0x11b9fe80 */
  push32(0x11bad534u); f_11b9fe80();
  /* 11bad534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad53a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bad53e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bad541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bad544 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad549 push eax */
  push32((uint32_t)(EAX));
  /* 11bad54a call 0x11b9a7b0 */
  push32(0x11bad54fu); f_11b9a7b0();
  /* 11bad54f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bad555 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad559 je 0x11bad776 */
  if (C.zf) goto L_11bad776;
  /* 11bad55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad562 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11bad565 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad568 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad56e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad571 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11bad576 mov eax, dword ptr [0x11bcd2f0] */
  EAX = (r32((uint32_t)(0x11bcd2f0)));
  /* 11bad57b push eax */
  push32((uint32_t)(EAX));
  /* 11bad57c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad57f push ecx */
  push32((uint32_t)(ECX));
  /* 11bad580 call 0x11ba6240 */
  push32(0x11bad585u); f_11ba6240();
  /* 11bad585 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad588 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad58f jmp 0x11bad59a */
  goto L_11bad59a;
L_11bad591:;
  /* 11bad591 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad594 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad597 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bad59a:;
  /* 11bad59a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad59e jae 0x11bad60e */
  if (!C.cf) goto L_11bad60e;
  /* 11bad5a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad5a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad5a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad5a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11bad5ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad5af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad5b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bad5b5 push edx */
  push32((uint32_t)(EDX));
  /* 11bad5b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad5b9 push eax */
  push32((uint32_t)(EAX));
  /* 11bad5ba call 0x11ba0000 */
  push32(0x11bad5bfu); f_11ba0000();
  /* 11bad5bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad5c2 push eax */
  push32((uint32_t)(EAX));
  /* 11bad5c3 call 0x11b9fe80 */
  push32(0x11bad5c8u); f_11b9fe80();
  /* 11bad5c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad5cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad5ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bad5d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad5d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad5d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad5db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad5de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11bad5e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad5e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad5e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11bad5ec push edx */
  push32((uint32_t)(EDX));
  /* 11bad5ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad5f0 push eax */
  push32((uint32_t)(EAX));
  /* 11bad5f1 call 0x11ba0000 */
  push32(0x11bad5f6u); f_11ba0000();
  /* 11bad5f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad5f9 push eax */
  push32((uint32_t)(EAX));
  /* 11bad5fa call 0x11b9fe80 */
  push32(0x11bad5ffu); f_11b9fe80();
  /* 11bad5ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad602 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad605 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bad609 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad60c jmp 0x11bad591 */
  goto L_11bad591;
L_11bad60e:;
  /* 11bad60e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bad615 jmp 0x11bad620 */
  goto L_11bad620;
L_11bad617:;
  /* 11bad617 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad61a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad61d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bad620:;
  /* 11bad620 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad624 jae 0x11bad696 */
  if (!C.cf) goto L_11bad696;
  /* 11bad626 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad629 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad62c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad62f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11bad633 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad636 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad639 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11bad63d push eax */
  push32((uint32_t)(EAX));
  /* 11bad63e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad641 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad642 call 0x11ba0000 */
  push32(0x11bad647u); f_11ba0000();
  /* 11bad647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad64a push eax */
  push32((uint32_t)(EAX));
  /* 11bad64b call 0x11b9fe80 */
  push32(0x11bad650u); f_11b9fe80();
  /* 11bad650 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad653 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad656 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bad65a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bad65d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad660 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad663 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad666 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11bad66a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad66d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad670 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bad674 push eax */
  push32((uint32_t)(EAX));
  /* 11bad675 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad678 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad679 call 0x11ba0000 */
  push32(0x11bad67eu); f_11ba0000();
  /* 11bad67e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad681 push eax */
  push32((uint32_t)(EAX));
  /* 11bad682 call 0x11b9fe80 */
  push32(0x11bad687u); f_11b9fe80();
  /* 11bad687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad68a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad68d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bad691 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bad694 jmp 0x11bad617 */
  goto L_11bad617;
L_11bad696:;
  /* 11bad696 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad699 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad69c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11bad6a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad6a5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11bad6ab push ecx */
  push32((uint32_t)(ECX));
  /* 11bad6ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad6af push edx */
  push32((uint32_t)(EDX));
  /* 11bad6b0 call 0x11ba0000 */
  push32(0x11bad6b5u); f_11ba0000();
  /* 11bad6b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad6b8 push eax */
  push32((uint32_t)(EAX));
  /* 11bad6b9 call 0x11b9fe80 */
  push32(0x11bad6beu); f_11b9fe80();
  /* 11bad6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad6c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad6c4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bad6c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad6cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad6ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad6d1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11bad6d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad6da mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11bad6e0 push eax */
  push32((uint32_t)(EAX));
  /* 11bad6e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad6e5 call 0x11ba0000 */
  push32(0x11bad6eau); f_11ba0000();
  /* 11bad6ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad6ed push eax */
  push32((uint32_t)(EAX));
  /* 11bad6ee call 0x11b9fe80 */
  push32(0x11bad6f3u); f_11b9fe80();
  /* 11bad6f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad6f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad6f9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bad6fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bad700 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad703 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad706 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11bad70c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad70f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11bad715 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad716 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad719 push edx */
  push32((uint32_t)(EDX));
  /* 11bad71a call 0x11ba0000 */
  push32(0x11bad71fu); f_11ba0000();
  /* 11bad71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad722 push eax */
  push32((uint32_t)(EAX));
  /* 11bad723 call 0x11b9fe80 */
  push32(0x11bad728u); f_11b9fe80();
  /* 11bad728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad72b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad72e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bad732 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bad735 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad738 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad73b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11bad741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad744 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11bad74a push eax */
  push32((uint32_t)(EAX));
  /* 11bad74b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad74e push ecx */
  push32((uint32_t)(ECX));
  /* 11bad74f call 0x11ba0000 */
  push32(0x11bad754u); f_11ba0000();
  /* 11bad754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad757 push eax */
  push32((uint32_t)(EAX));
  /* 11bad758 call 0x11b9fe80 */
  push32(0x11bad75du); f_11b9fe80();
  /* 11bad75d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad760 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad763 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bad767 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bad76a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bad76d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bad770 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11bad776:;
  /* 11bad776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad779 pop esi */
  ESI = (pop32());
  /* 11bad77a mov esp, ebp */
  ESP = (EBP);
  /* 11bad77c pop ebp */
  EBP = (pop32());
  /* 11bad77d ret  */
  ESPCHK(0x11bad410u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d780 @ 0x11bad780 (31 bytes, 15 insns) */
void f_11bad780(void) {
  FTRACE(0x11bad780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad780 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad781 mov ebp, esp */
  EBP = (ESP);
  /* 11bad783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bad785 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bad788 push eax */
  push32((uint32_t)(EAX));
  /* 11bad789 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad78c push ecx */
  push32((uint32_t)(ECX));
  /* 11bad78d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad790 push edx */
  push32((uint32_t)(EDX));
  /* 11bad791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad794 push eax */
  push32((uint32_t)(EAX));
  /* 11bad795 call 0x11bad7a0 */
  push32(0x11bad79au); f_11bad7a0();
  /* 11bad79a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad79d pop ebp */
  EBP = (pop32());
  /* 11bad79e ret  */
  ESPCHK(0x11bad780u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d7a0 @ 0x11bad7a0 (393 bytes, 123 insns) */
void f_11bad7a0(void) {
  FTRACE(0x11bad7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bad7a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad7a6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad7aa jne 0x11bad7b6 */
  if (!C.zf) goto L_11bad7b6;
  /* 11bad7ac mov eax, dword ptr [0x11bcd2f0] */
  EAX = (r32((uint32_t)(0x11bcd2f0)));
  /* 11bad7b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bad7b4 jmp 0x11bad7bc */
  goto L_11bad7bc;
L_11bad7b6:;
  /* 11bad7b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bad7b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bad7bc:;
  /* 11bad7bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bad7bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bad7c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad7c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bad7c8 push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11bad7cd call dword ptr [0x11bd0414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0414))), 0x11bad7d3u);
  /* 11bad7d3 cmp dword ptr [0x11bce6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad7da je 0x11bad7fa */
  if (C.zf) goto L_11bad7fa;
  /* 11bad7dc push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11bad7e1 call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11bad7e7u);
  /* 11bad7e7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bad7e9 call 0x11b9a6d0 */
  push32(0x11bad7eeu); f_11b9a6d0();
  /* 11bad7ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad7f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11bad7f8 jmp 0x11bad801 */
  goto L_11bad801;
L_11bad7fa:;
  /* 11bad7fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11bad801:;
  /* 11bad801 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad805 jbe 0x11bad8f2 */
  if ((C.cf||C.zf)) goto L_11bad8f2;
  /* 11bad80b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad80e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bad810 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11bad813 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bad817 je 0x11bad821 */
  if (C.zf) goto L_11bad821;
  /* 11bad819 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bad81d je 0x11bad826 */
  if (C.zf) goto L_11bad826;
  /* 11bad81f jmp 0x11bad880 */
  goto L_11bad880;
L_11bad821:;
  /* 11bad821 jmp 0x11bad8f2 */
  goto L_11bad8f2;
L_11bad826:;
  /* 11bad826 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad82c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11bad82f mov dword ptr [0x11bce6d8], 0 */
  w32((uint32_t)(0x11bce6d8), (0x0u));
  /* 11bad839 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad83c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bad83f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad842 jne 0x11bad857 */
  if (!C.zf) goto L_11bad857;
  /* 11bad844 mov dword ptr [0x11bce6d8], 1 */
  w32((uint32_t)(0x11bce6d8), (0x1u));
  /* 11bad84e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad851 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad854 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11bad857:;
  /* 11bad857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bad85a push ecx */
  push32((uint32_t)(ECX));
  /* 11bad85b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11bad85e push edx */
  push32((uint32_t)(EDX));
  /* 11bad85f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11bad862 push eax */
  push32((uint32_t)(EAX));
  /* 11bad863 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bad866 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad867 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad86a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bad86c push eax */
  push32((uint32_t)(EAX));
  /* 11bad86d call 0x11bad930 */
  push32(0x11bad872u); f_11bad930();
  /* 11bad872 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad875 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad878 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad87b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11bad87e jmp 0x11bad8ed */
  goto L_11bad8ed;
L_11bad880:;
  /* 11bad880 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bad885 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bad887 mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11bad88d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bad88f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bad893 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bad899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bad89b je 0x11bad8c8 */
  if (C.zf) goto L_11bad8c8;
  /* 11bad89d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad8a1 jbe 0x11bad8c8 */
  if ((C.cf||C.zf)) goto L_11bad8c8;
  /* 11bad8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad8a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad8a9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bad8ab mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bad8ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad8b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad8b3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bad8b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad8b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad8bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11bad8bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad8c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad8c5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bad8c8:;
  /* 11bad8c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad8cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad8ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bad8d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bad8d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad8d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad8d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bad8db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad8de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad8e1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11bad8e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad8e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad8ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bad8ed:;
  /* 11bad8ed jmp 0x11bad801 */
  goto L_11bad801;
L_11bad8f2:;
  /* 11bad8f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad8f6 je 0x11bad904 */
  if (C.zf) goto L_11bad904;
  /* 11bad8f8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bad8fa call 0x11b9a770 */
  push32(0x11bad8ffu); f_11b9a770();
  /* 11bad8ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad902 jmp 0x11bad90f */
  goto L_11bad90f;
L_11bad904:;
  /* 11bad904 push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11bad909 call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11bad90fu);
L_11bad90f:;
  /* 11bad90f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad913 jbe 0x11bad923 */
  if ((C.cf||C.zf)) goto L_11bad923;
  /* 11bad915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bad918 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bad91b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad91e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad921 jmp 0x11bad925 */
  goto L_11bad925;
L_11bad923:;
  /* 11bad923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bad925:;
  /* 11bad925 mov esp, ebp */
  ESP = (EBP);
  /* 11bad927 pop ebp */
  EBP = (pop32());
  /* 11bad928 ret  */
  ESPCHK(0x11bad7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d930 @ 0x11bad930 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11bad930(void) {
  FTRACE(0x11bad930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bad930 push ebp */
  push32((uint32_t)(EBP));
  /* 11bad931 mov ebp, esp */
  EBP = (ESP);
  /* 11bad933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad936 push esi */
  push32((uint32_t)(ESI));
  /* 11bad937 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11bad93b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bad93e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad941 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bad944 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bad947 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad94b ja 0x11bade98 */
  if ((!C.cf&&!C.zf)) goto L_11bade98;
  /* 11bad951 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bad954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bad956 mov dl, byte ptr [eax + 0x11badef9] */
  DL = (r8((uint32_t)(EAX + 0x11badef9)));
  /* 11bad95c jmp dword ptr [edx*4 + 0x11bade9d] */
  switch (EDX) {
    case 0: goto L_11bade76;
    case 1: goto L_11bad985;
    case 2: goto L_11bad9cb;
    case 3: goto L_11badb18;
    case 4: goto L_11badb40;
    case 5: goto L_11badbdf;
    case 6: goto L_11badc4b;
    case 7: goto L_11badc74;
    case 8: goto L_11badcb5;
    case 9: goto L_11badd97;
    case 10: goto L_11baddfe;
    case 11: goto L_11bade4b;
    case 12: goto L_11bad963;
    case 13: goto L_11bad9a8;
    case 14: goto L_11bad9ee;
    case 15: goto L_11badaee;
    case 16: goto L_11badb85;
    case 17: goto L_11badbb2;
    case 18: goto L_11badc07;
    case 19: goto L_11badc8b;
    case 20: goto L_11badd39;
    case 21: goto L_11baddc8;
    case 22: goto L_11bade98;
    default: x86_unimpl("switch@0x11bad95c out of table"); return;
  }
L_11bad963:;
  /* 11bad963 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bad966 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad967 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad96a push edx */
  push32((uint32_t)(EDX));
  /* 11bad96b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad96e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11bad971 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bad974 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11bad977 push eax */
  push32((uint32_t)(EAX));
  /* 11bad978 call 0x11badf50 */
  push32(0x11bad97du); f_11badf50();
  /* 11bad97d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad980 jmp 0x11bade98 */
  goto L_11bade98;
L_11bad985:;
  /* 11bad985 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bad988 push ecx */
  push32((uint32_t)(ECX));
  /* 11bad989 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad98c push edx */
  push32((uint32_t)(EDX));
  /* 11bad98d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad990 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11bad993 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bad996 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11bad99a push eax */
  push32((uint32_t)(EAX));
  /* 11bad99b call 0x11badf50 */
  push32(0x11bad9a0u); f_11badf50();
  /* 11bad9a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad9a3 jmp 0x11bade98 */
  goto L_11bade98;
L_11bad9a8:;
  /* 11bad9a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bad9ab push ecx */
  push32((uint32_t)(ECX));
  /* 11bad9ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad9af push edx */
  push32((uint32_t)(EDX));
  /* 11bad9b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad9b3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bad9b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bad9b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11bad9bd push eax */
  push32((uint32_t)(EAX));
  /* 11bad9be call 0x11badf50 */
  push32(0x11bad9c3u); f_11badf50();
  /* 11bad9c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad9c6 jmp 0x11bade98 */
  goto L_11bade98;
L_11bad9cb:;
  /* 11bad9cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bad9ce push ecx */
  push32((uint32_t)(ECX));
  /* 11bad9cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bad9d2 push edx */
  push32((uint32_t)(EDX));
  /* 11bad9d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bad9d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bad9d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bad9dc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bad9e0 push eax */
  push32((uint32_t)(EAX));
  /* 11bad9e1 call 0x11badf50 */
  push32(0x11bad9e6u); f_11badf50();
  /* 11bad9e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bad9e9 jmp 0x11bade98 */
  goto L_11bade98;
L_11bad9ee:;
  /* 11bad9ee cmp dword ptr [0x11bce6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bad9f5 je 0x11bada76 */
  if (C.zf) goto L_11bada76;
  /* 11bad9f7 mov dword ptr [0x11bce6d8], 0 */
  w32((uint32_t)(0x11bce6d8), (0x0u));
  /* 11bada01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bada04 push ecx */
  push32((uint32_t)(ECX));
  /* 11bada05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada08 push edx */
  push32((uint32_t)(EDX));
  /* 11bada09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bada0c push eax */
  push32((uint32_t)(EAX));
  /* 11bada0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bada10 push ecx */
  push32((uint32_t)(ECX));
  /* 11bada11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bada14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11bada1a push eax */
  push32((uint32_t)(EAX));
  /* 11bada1b call 0x11bae100 */
  push32(0x11bada20u); f_11bae100();
  /* 11bada20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bada23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bada29 jne 0x11bada30 */
  if (!C.zf) goto L_11bada30;
  /* 11bada2b jmp 0x11bade98 */
  goto L_11bade98;
L_11bada30:;
  /* 11bada30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bada33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bada35 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11bada38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bada3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bada3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bada40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bada43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bada45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada48 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bada4a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bada4d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bada52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bada55 push ecx */
  push32((uint32_t)(ECX));
  /* 11bada56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada59 push edx */
  push32((uint32_t)(EDX));
  /* 11bada5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bada5d push eax */
  push32((uint32_t)(EAX));
  /* 11bada5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bada61 push ecx */
  push32((uint32_t)(ECX));
  /* 11bada62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bada65 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11bada6b push eax */
  push32((uint32_t)(EAX));
  /* 11bada6c call 0x11bae100 */
  push32(0x11bada71u); f_11bae100();
  /* 11bada71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bada74 jmp 0x11badae9 */
  goto L_11badae9;
L_11bada76:;
  /* 11bada76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bada79 push ecx */
  push32((uint32_t)(ECX));
  /* 11bada7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada7d push edx */
  push32((uint32_t)(EDX));
  /* 11bada7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bada81 push eax */
  push32((uint32_t)(EAX));
  /* 11bada82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bada85 push ecx */
  push32((uint32_t)(ECX));
  /* 11bada86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bada89 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11bada8f push eax */
  push32((uint32_t)(EAX));
  /* 11bada90 call 0x11bae100 */
  push32(0x11bada95u); f_11bae100();
  /* 11bada95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bada98 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bada9b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bada9e jne 0x11badaa5 */
  if (!C.zf) goto L_11badaa5;
  /* 11badaa0 jmp 0x11bade98 */
  goto L_11bade98;
L_11badaa5:;
  /* 11badaa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badaa8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11badaaa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11badaad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badab0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11badab2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badab5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badab8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11badaba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badabd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11badabf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11badac2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badac5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11badac7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badaca push ecx */
  push32((uint32_t)(ECX));
  /* 11badacb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badace push edx */
  push32((uint32_t)(EDX));
  /* 11badacf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badad2 push eax */
  push32((uint32_t)(EAX));
  /* 11badad3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11badad7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badada mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11badae0 push eax */
  push32((uint32_t)(EAX));
  /* 11badae1 call 0x11bae100 */
  push32(0x11badae6u); f_11bae100();
  /* 11badae6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11badae9:;
  /* 11badae9 jmp 0x11bade98 */
  goto L_11bade98;
L_11badaee:;
  /* 11badaee mov ecx, dword ptr [0x11bce6d8] */
  ECX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badaf4 mov dword ptr [0x11bce6e8], ecx */
  w32((uint32_t)(0x11bce6e8), (ECX));
  /* 11badafa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badafd push edx */
  push32((uint32_t)(EDX));
  /* 11badafe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badb01 push eax */
  push32((uint32_t)(EAX));
  /* 11badb02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11badb04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badb07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11badb0a push edx */
  push32((uint32_t)(EDX));
  /* 11badb0b call 0x11badfa0 */
  push32(0x11badb10u); f_11badfa0();
  /* 11badb10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badb13 jmp 0x11bade98 */
  goto L_11bade98;
L_11badb18:;
  /* 11badb18 mov eax, dword ptr [0x11bce6d8] */
  EAX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badb1d mov dword ptr [0x11bce6e8], eax */
  w32((uint32_t)(0x11bce6e8), (EAX));
  /* 11badb22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badb25 push ecx */
  push32((uint32_t)(ECX));
  /* 11badb26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badb29 push edx */
  push32((uint32_t)(EDX));
  /* 11badb2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11badb2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badb2f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11badb32 push ecx */
  push32((uint32_t)(ECX));
  /* 11badb33 call 0x11badfa0 */
  push32(0x11badb38u); f_11badfa0();
  /* 11badb38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badb3b jmp 0x11bade98 */
  goto L_11bade98;
L_11badb40:;
  /* 11badb40 mov edx, dword ptr [0x11bce6d8] */
  EDX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badb46 mov dword ptr [0x11bce6e8], edx */
  w32((uint32_t)(0x11bce6e8), (EDX));
  /* 11badb4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badb4f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11badb52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11badb53 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11badb58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11badb5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11badb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badb61 jne 0x11badb6a */
  if (!C.zf) goto L_11badb6a;
  /* 11badb63 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11badb6a:;
  /* 11badb6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badb6d push edx */
  push32((uint32_t)(EDX));
  /* 11badb6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badb71 push eax */
  push32((uint32_t)(EAX));
  /* 11badb72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11badb74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11badb77 push ecx */
  push32((uint32_t)(ECX));
  /* 11badb78 call 0x11badfa0 */
  push32(0x11badb7du); f_11badfa0();
  /* 11badb7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badb80 jmp 0x11bade98 */
  goto L_11bade98;
L_11badb85:;
  /* 11badb85 mov edx, dword ptr [0x11bce6d8] */
  EDX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badb8b mov dword ptr [0x11bce6e8], edx */
  w32((uint32_t)(0x11bce6e8), (EDX));
  /* 11badb91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badb94 push eax */
  push32((uint32_t)(EAX));
  /* 11badb95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badb98 push ecx */
  push32((uint32_t)(ECX));
  /* 11badb99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11badb9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badb9e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11badba1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badba4 push eax */
  push32((uint32_t)(EAX));
  /* 11badba5 call 0x11badfa0 */
  push32(0x11badbaau); f_11badfa0();
  /* 11badbaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badbad jmp 0x11bade98 */
  goto L_11bade98;
L_11badbb2:;
  /* 11badbb2 mov ecx, dword ptr [0x11bce6d8] */
  ECX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badbb8 mov dword ptr [0x11bce6e8], ecx */
  w32((uint32_t)(0x11bce6e8), (ECX));
  /* 11badbbe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badbc1 push edx */
  push32((uint32_t)(EDX));
  /* 11badbc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badbc5 push eax */
  push32((uint32_t)(EAX));
  /* 11badbc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11badbc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badbcb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11badbce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badbd1 push edx */
  push32((uint32_t)(EDX));
  /* 11badbd2 call 0x11badfa0 */
  push32(0x11badbd7u); f_11badfa0();
  /* 11badbd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badbda jmp 0x11bade98 */
  goto L_11bade98;
L_11badbdf:;
  /* 11badbdf mov eax, dword ptr [0x11bce6d8] */
  EAX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badbe4 mov dword ptr [0x11bce6e8], eax */
  w32((uint32_t)(0x11bce6e8), (EAX));
  /* 11badbe9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badbec push ecx */
  push32((uint32_t)(ECX));
  /* 11badbed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badbf0 push edx */
  push32((uint32_t)(EDX));
  /* 11badbf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11badbf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badbf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11badbf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11badbfa call 0x11badfa0 */
  push32(0x11badbffu); f_11badfa0();
  /* 11badbff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badc02 jmp 0x11bade98 */
  goto L_11bade98;
L_11badc07:;
  /* 11badc07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badc0a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badc0e jg 0x11badc2c */
  if ((!C.zf&&C.sf==C.of)) goto L_11badc2c;
  /* 11badc10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badc13 push eax */
  push32((uint32_t)(EAX));
  /* 11badc14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badc17 push ecx */
  push32((uint32_t)(ECX));
  /* 11badc18 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badc1b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11badc21 push eax */
  push32((uint32_t)(EAX));
  /* 11badc22 call 0x11badf50 */
  push32(0x11badc27u); f_11badf50();
  /* 11badc27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badc2a jmp 0x11badc46 */
  goto L_11badc46;
L_11badc2c:;
  /* 11badc2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badc2f push ecx */
  push32((uint32_t)(ECX));
  /* 11badc30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badc33 push edx */
  push32((uint32_t)(EDX));
  /* 11badc34 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badc37 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11badc3d push ecx */
  push32((uint32_t)(ECX));
  /* 11badc3e call 0x11badf50 */
  push32(0x11badc43u); f_11badf50();
  /* 11badc43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11badc46:;
  /* 11badc46 jmp 0x11bade98 */
  goto L_11bade98;
L_11badc4b:;
  /* 11badc4b mov edx, dword ptr [0x11bce6d8] */
  EDX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badc51 mov dword ptr [0x11bce6e8], edx */
  w32((uint32_t)(0x11bce6e8), (EDX));
  /* 11badc57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badc5a push eax */
  push32((uint32_t)(EAX));
  /* 11badc5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badc5e push ecx */
  push32((uint32_t)(ECX));
  /* 11badc5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11badc61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badc64 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11badc66 push eax */
  push32((uint32_t)(EAX));
  /* 11badc67 call 0x11badfa0 */
  push32(0x11badc6cu); f_11badfa0();
  /* 11badc6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badc6f jmp 0x11bade98 */
  goto L_11bade98;
L_11badc74:;
  /* 11badc74 mov ecx, dword ptr [0x11bce6d8] */
  ECX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badc7a mov dword ptr [0x11bce6e8], ecx */
  w32((uint32_t)(0x11bce6e8), (ECX));
  /* 11badc80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badc83 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11badc86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11badc89 jmp 0x11badcdd */
  goto L_11badcdd;
L_11badc8b:;
  /* 11badc8b mov ecx, dword ptr [0x11bce6d8] */
  ECX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badc91 mov dword ptr [0x11bce6e8], ecx */
  w32((uint32_t)(0x11bce6e8), (ECX));
  /* 11badc97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badc9a push edx */
  push32((uint32_t)(EDX));
  /* 11badc9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badc9e push eax */
  push32((uint32_t)(EAX));
  /* 11badc9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11badca1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badca4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11badca7 push edx */
  push32((uint32_t)(EDX));
  /* 11badca8 call 0x11badfa0 */
  push32(0x11badcadu); f_11badfa0();
  /* 11badcad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badcb0 jmp 0x11bade98 */
  goto L_11bade98;
L_11badcb5:;
  /* 11badcb5 mov eax, dword ptr [0x11bce6d8] */
  EAX = (r32((uint32_t)(0x11bce6d8)));
  /* 11badcba mov dword ptr [0x11bce6e8], eax */
  w32((uint32_t)(0x11bce6e8), (EAX));
  /* 11badcbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badcc2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badcc6 jne 0x11badcd1 */
  if (!C.zf) goto L_11badcd1;
  /* 11badcc8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11badccf jmp 0x11badcdd */
  goto L_11badcdd;
L_11badcd1:;
  /* 11badcd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badcd4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11badcd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11badcda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11badcdd:;
  /* 11badcdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badce0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11badce3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badce6 jge 0x11badcf1 */
  if ((C.sf==C.of)) goto L_11badcf1;
  /* 11badce8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11badcef jmp 0x11badd1e */
  goto L_11badd1e;
L_11badcf1:;
  /* 11badcf1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badcf4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11badcf7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11badcf8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11badcfd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11badcff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11badd02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badd05 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11badd08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11badd09 mov ecx, 7 */
  ECX = (0x7u);
  /* 11badd0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11badd10 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badd13 jl 0x11badd1e */
  if ((C.sf!=C.of)) goto L_11badd1e;
  /* 11badd15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11badd18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badd1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11badd1e:;
  /* 11badd1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badd21 push eax */
  push32((uint32_t)(EAX));
  /* 11badd22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badd25 push ecx */
  push32((uint32_t)(ECX));
  /* 11badd26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11badd28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11badd2b push edx */
  push32((uint32_t)(EDX));
  /* 11badd2c call 0x11badfa0 */
  push32(0x11badd31u); f_11badfa0();
  /* 11badd31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badd34 jmp 0x11bade98 */
  goto L_11bade98;
L_11badd39:;
  /* 11badd39 cmp dword ptr [0x11bce6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badd40 je 0x11badd70 */
  if (C.zf) goto L_11badd70;
  /* 11badd42 mov dword ptr [0x11bce6d8], 0 */
  w32((uint32_t)(0x11bce6d8), (0x0u));
  /* 11badd4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badd4f push eax */
  push32((uint32_t)(EAX));
  /* 11badd50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badd53 push ecx */
  push32((uint32_t)(ECX));
  /* 11badd54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badd57 push edx */
  push32((uint32_t)(EDX));
  /* 11badd58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badd5b push eax */
  push32((uint32_t)(EAX));
  /* 11badd5c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badd5f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11badd65 push edx */
  push32((uint32_t)(EDX));
  /* 11badd66 call 0x11bae100 */
  push32(0x11badd6bu); f_11bae100();
  /* 11badd6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badd6e jmp 0x11badd92 */
  goto L_11badd92;
L_11badd70:;
  /* 11badd70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badd73 push eax */
  push32((uint32_t)(EAX));
  /* 11badd74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badd77 push ecx */
  push32((uint32_t)(ECX));
  /* 11badd78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badd7b push edx */
  push32((uint32_t)(EDX));
  /* 11badd7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badd7f push eax */
  push32((uint32_t)(EAX));
  /* 11badd80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badd83 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11badd89 push edx */
  push32((uint32_t)(EDX));
  /* 11badd8a call 0x11bae100 */
  push32(0x11badd8fu); f_11bae100();
  /* 11badd8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11badd92:;
  /* 11badd92 jmp 0x11bade98 */
  goto L_11bade98;
L_11badd97:;
  /* 11badd97 mov dword ptr [0x11bce6d8], 0 */
  w32((uint32_t)(0x11bce6d8), (0x0u));
  /* 11badda1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11badda4 push eax */
  push32((uint32_t)(EAX));
  /* 11badda5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badda8 push ecx */
  push32((uint32_t)(ECX));
  /* 11badda9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baddac push edx */
  push32((uint32_t)(EDX));
  /* 11baddad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baddb0 push eax */
  push32((uint32_t)(EAX));
  /* 11baddb1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baddb4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11baddba push edx */
  push32((uint32_t)(EDX));
  /* 11baddbb call 0x11bae100 */
  push32(0x11baddc0u); f_11bae100();
  /* 11baddc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baddc3 jmp 0x11bade98 */
  goto L_11bade98;
L_11baddc8:;
  /* 11baddc8 mov eax, dword ptr [0x11bce6d8] */
  EAX = (r32((uint32_t)(0x11bce6d8)));
  /* 11baddcd mov dword ptr [0x11bce6e8], eax */
  w32((uint32_t)(0x11bce6e8), (EAX));
  /* 11baddd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baddd5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11baddd8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11baddd9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11baddde idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11badde0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11badde3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badde6 push edx */
  push32((uint32_t)(EDX));
  /* 11badde7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baddea push eax */
  push32((uint32_t)(EAX));
  /* 11baddeb push 2 */
  push32((uint32_t)(0x2u));
  /* 11badded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baddf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11baddf1 call 0x11badfa0 */
  push32(0x11baddf6u); f_11badfa0();
  /* 11baddf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baddf9 jmp 0x11bade98 */
  goto L_11bade98;
L_11baddfe:;
  /* 11baddfe mov edx, dword ptr [0x11bce6d8] */
  EDX = (r32((uint32_t)(0x11bce6d8)));
  /* 11bade04 mov dword ptr [0x11bce6e8], edx */
  w32((uint32_t)(0x11bce6e8), (EDX));
  /* 11bade0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bade0d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11bade10 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bade11 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11bade16 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bade18 mov ecx, eax */
  ECX = (EAX);
  /* 11bade1a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bade1d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bade20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bade23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bade26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bade27 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11bade2c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bade2e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bade30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bade33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bade36 push eax */
  push32((uint32_t)(EAX));
  /* 11bade37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bade3a push ecx */
  push32((uint32_t)(ECX));
  /* 11bade3b push 4 */
  push32((uint32_t)(0x4u));
  /* 11bade3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bade40 push edx */
  push32((uint32_t)(EDX));
  /* 11bade41 call 0x11badfa0 */
  push32(0x11bade46u); f_11badfa0();
  /* 11bade46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bade49 jmp 0x11bade98 */
  goto L_11bade98;
L_11bade4b:;
  /* 11bade4b call 0x11ba4740 */
  push32(0x11bade50u); f_11ba4740();
  /* 11bade50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bade53 push eax */
  push32((uint32_t)(EAX));
  /* 11bade54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bade57 push ecx */
  push32((uint32_t)(ECX));
  /* 11bade58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bade5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bade5d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bade61 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11bade64 mov ecx, dword ptr [eax*4 + 0x11bcc374] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcc374)));
  /* 11bade6b push ecx */
  push32((uint32_t)(ECX));
  /* 11bade6c call 0x11badf50 */
  push32(0x11bade71u); f_11badf50();
  /* 11bade71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bade74 jmp 0x11bade98 */
  goto L_11bade98;
L_11bade76:;
  /* 11bade76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bade79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bade7b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11bade7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bade81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bade83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bade86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bade89 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bade8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bade8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bade90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bade93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bade96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bade98:;
  /* 11bade98 pop esi */
  ESI = (pop32());
  /* 11bade99 mov esp, ebp */
  ESP = (EBP);
  /* 11bade9b pop ebp */
  EBP = (pop32());
  /* 11bade9c ret  */
  ESPCHK(0x11bad930u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11badf50 (72 bytes, 30 insns) */
void f_11badf50(void) {
  FTRACE(0x11badf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11badf50 push ebp */
  push32((uint32_t)(EBP));
  /* 11badf51 mov ebp, esp */
  EBP = (ESP);
L_11badf53:;
  /* 11badf53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badf56 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badf59 je 0x11badf96 */
  if (C.zf) goto L_11badf96;
  /* 11badf5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11badf5e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11badf61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11badf63 je 0x11badf96 */
  if (C.zf) goto L_11badf96;
  /* 11badf65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badf68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11badf6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11badf6d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11badf6f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11badf71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badf74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11badf76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badf79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badf7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11badf7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11badf81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badf84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11badf87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badf8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11badf8c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11badf8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badf92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11badf94 jmp 0x11badf53 */
  goto L_11badf53;
L_11badf96:;
  /* 11badf96 pop ebp */
  EBP = (pop32());
  /* 11badf97 ret  */
  ESPCHK(0x11badf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dfa0 @ 0x11badfa0 (173 bytes, 64 insns) */
void f_11badfa0(void) {
  FTRACE(0x11badfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11badfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11badfa1 mov ebp, esp */
  EBP = (ESP);
  /* 11badfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11badfa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11badfab cmp dword ptr [0x11bce6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badfb2 je 0x11badfca */
  if (C.zf) goto L_11badfca;
  /* 11badfb4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badfb7 push eax */
  push32((uint32_t)(EAX));
  /* 11badfb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11badfbb push ecx */
  push32((uint32_t)(ECX));
  /* 11badfbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11badfbf push edx */
  push32((uint32_t)(EDX));
  /* 11badfc0 call 0x11bae050 */
  push32(0x11badfc5u); f_11bae050();
  /* 11badfc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11badfc8 jmp 0x11bae049 */
  goto L_11bae049;
L_11badfca:;
  /* 11badfca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11badfcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badfd0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11badfd2 jae 0x11bae040 */
  if (!C.cf) goto L_11bae040;
  /* 11badfd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badfd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11badfda mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11badfdd jmp 0x11badfe8 */
  goto L_11badfe8;
L_11badfdf:;
  /* 11badfdf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badfe2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11badfe5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11badfe8:;
  /* 11badfe8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11badfeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11badfee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11badff0 je 0x11bae024 */
  if (C.zf) goto L_11bae024;
  /* 11badff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11badff5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11badff6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11badffb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11badffd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae000 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae005 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae008 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11bae00b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae00e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bae00f mov ecx, 0xa */
  ECX = (0xau);
  /* 11bae014 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bae016 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bae019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae01c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae01f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bae022 jmp 0x11badfdf */
  goto L_11badfdf;
L_11bae024:;
  /* 11bae024 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae027 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae029 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae02c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae02f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bae031 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae034 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae036 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae039 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae03c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bae03e jmp 0x11bae049 */
  goto L_11bae049;
L_11bae040:;
  /* 11bae040 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae043 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11bae049:;
  /* 11bae049 mov esp, ebp */
  ESP = (EBP);
  /* 11bae04b pop ebp */
  EBP = (pop32());
  /* 11bae04c ret  */
  ESPCHK(0x11badfa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11bae050 (172 bytes, 65 insns) */
void f_11bae050(void) {
  FTRACE(0x11bae050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bae050 push ebp */
  push32((uint32_t)(EBP));
  /* 11bae051 mov ebp, esp */
  EBP = (ESP);
  /* 11bae053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae05b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bae05e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae061 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae064 jbe 0x11bae0ab */
  if ((C.cf||C.zf)) goto L_11bae0ab;
L_11bae066:;
  /* 11bae066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae069 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bae06a mov ecx, 0xa */
  ECX = (0xau);
  /* 11bae06f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bae071 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae077 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bae079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae07c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae07f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bae082 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae085 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae087 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae08a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae08d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bae08f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae092 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bae093 mov ecx, 0xa */
  ECX = (0xau);
  /* 11bae098 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bae09a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bae09d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae0a1 jle 0x11bae0ab */
  if ((C.zf||C.sf!=C.of)) goto L_11bae0ab;
  /* 11bae0a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae0a6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae0a9 ja 0x11bae066 */
  if ((!C.cf&&!C.zf)) goto L_11bae066;
L_11bae0ab:;
  /* 11bae0ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae0ae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae0b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bae0b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae0b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11bae0bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae0be sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae0c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bae0c4:;
  /* 11bae0c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae0c7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bae0c9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11bae0cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae0cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bae0d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bae0d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bae0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae0d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae0dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bae0df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bae0e2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bae0e5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11bae0e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bae0ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae0ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bae0f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bae0f3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae0f6 jb 0x11bae0c4 */
  if (C.cf) goto L_11bae0c4;
  /* 11bae0f8 mov esp, ebp */
  ESP = (EBP);
  /* 11bae0fa pop ebp */
  EBP = (pop32());
  /* 11bae0fb ret  */
  ESPCHK(0x11bae050u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e100 @ 0x11bae100 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11bae100(void) {
  FTRACE(0x11bae100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bae100 push ebp */
  push32((uint32_t)(EBP));
  /* 11bae101 mov ebp, esp */
  EBP = (ESP);
  /* 11bae103 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11bae106:;
  /* 11bae106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae109 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bae10c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bae10e je 0x11bae57c */
  if (C.zf) goto L_11bae57c;
  /* 11bae114 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae117 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae11a je 0x11bae57c */
  if (C.zf) goto L_11bae57c;
  /* 11bae120 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bae124 mov dword ptr [0x11bce6e8], 0 */
  w32((uint32_t)(0x11bce6e8), (0x0u));
  /* 11bae12e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bae135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bae13b jmp 0x11bae146 */
  goto L_11bae146;
L_11bae13d:;
  /* 11bae13d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae140 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae143 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11bae146:;
  /* 11bae146 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae149 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bae14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae14f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bae152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae158 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bae15b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae15d jne 0x11bae161 */
  if (!C.zf) goto L_11bae161;
  /* 11bae15f jmp 0x11bae13d */
  goto L_11bae13d;
L_11bae161:;
  /* 11bae161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae164 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae167 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bae16a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae16d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bae170 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bae173 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bae176 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae179 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bae17c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae180 ja 0x11bae4d0 */
  if ((!C.cf&&!C.zf)) goto L_11bae4d0;
  /* 11bae186 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bae189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae18b mov al, byte ptr [ecx + 0x11bae5ac] */
  AL = (r8((uint32_t)(ECX + 0x11bae5ac)));
  /* 11bae191 jmp dword ptr [eax*4 + 0x11bae580] */
  switch (EAX) {
    case 0: goto L_11bae3ef;
    case 1: goto L_11bae2d3;
    case 2: goto L_11bae25e;
    case 3: goto L_11bae198;
    case 4: goto L_11bae1d6;
    case 5: goto L_11bae237;
    case 6: goto L_11bae285;
    case 7: goto L_11bae2ac;
    case 8: goto L_11bae31a;
    case 9: goto L_11bae214;
    case 10: goto L_11bae4d0;
    default: x86_unimpl("switch@0x11bae191 out of table"); return;
  }
L_11bae198:;
  /* 11bae198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae19b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bae19e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bae1a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae1a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bae1a7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae1ab ja 0x11bae1d1 */
  if ((!C.cf&&!C.zf)) goto L_11bae1d1;
  /* 11bae1ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bae1b0 jmp dword ptr [ecx*4 + 0x11bae5ff] */
  switch (ECX) {
    case 0: goto L_11bae1b7;
    case 1: goto L_11bae1c1;
    case 2: goto L_11bae1c7;
    case 3: goto L_11bae1cd;
    case 4: goto L_11bae1f5;
    case 5: goto L_11bae1ff;
    case 6: goto L_11bae205;
    case 7: goto L_11bae20b;
    default: x86_unimpl("switch@0x11bae1b0 out of table"); return;
  }
L_11bae1b7:;
  /* 11bae1b7 mov dword ptr [0x11bce6e8], 1 */
  w32((uint32_t)(0x11bce6e8), (0x1u));
L_11bae1c1:;
  /* 11bae1c1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11bae1c5 jmp 0x11bae1d1 */
  goto L_11bae1d1;
L_11bae1c7:;
  /* 11bae1c7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11bae1cb jmp 0x11bae1d1 */
  goto L_11bae1d1;
L_11bae1cd:;
  /* 11bae1cd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11bae1d1:;
  /* 11bae1d1 jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae1d6:;
  /* 11bae1d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae1d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11bae1dc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bae1df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae1e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bae1e5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae1e9 ja 0x11bae20f */
  if ((!C.cf&&!C.zf)) goto L_11bae20f;
  /* 11bae1eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bae1ee jmp dword ptr [ecx*4 + 0x11bae60f] */
  switch (ECX) {
    case 0: goto L_11bae1f5;
    case 1: goto L_11bae1ff;
    case 2: goto L_11bae205;
    case 3: goto L_11bae20b;
    default: x86_unimpl("switch@0x11bae1ee out of table"); return;
  }
L_11bae1f5:;
  /* 11bae1f5 mov dword ptr [0x11bce6e8], 1 */
  w32((uint32_t)(0x11bce6e8), (0x1u));
L_11bae1ff:;
  /* 11bae1ff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11bae203 jmp 0x11bae20f */
  goto L_11bae20f;
L_11bae205:;
  /* 11bae205 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11bae209 jmp 0x11bae20f */
  goto L_11bae20f;
L_11bae20b:;
  /* 11bae20b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11bae20f:;
  /* 11bae20f jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae214:;
  /* 11bae214 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae217 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11bae21a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae21e je 0x11bae228 */
  if (C.zf) goto L_11bae228;
  /* 11bae220 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae224 je 0x11bae22e */
  if (C.zf) goto L_11bae22e;
  /* 11bae226 jmp 0x11bae232 */
  goto L_11bae232;
L_11bae228:;
  /* 11bae228 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11bae22c jmp 0x11bae232 */
  goto L_11bae232;
L_11bae22e:;
  /* 11bae22e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11bae232:;
  /* 11bae232 jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae237:;
  /* 11bae237 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae23a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bae23d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae241 je 0x11bae24b */
  if (C.zf) goto L_11bae24b;
  /* 11bae243 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae247 je 0x11bae255 */
  if (C.zf) goto L_11bae255;
  /* 11bae249 jmp 0x11bae259 */
  goto L_11bae259;
L_11bae24b:;
  /* 11bae24b mov dword ptr [0x11bce6e8], 1 */
  w32((uint32_t)(0x11bce6e8), (0x1u));
L_11bae255:;
  /* 11bae255 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11bae259:;
  /* 11bae259 jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae25e:;
  /* 11bae25e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae261 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11bae264 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae268 je 0x11bae272 */
  if (C.zf) goto L_11bae272;
  /* 11bae26a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae26e je 0x11bae27c */
  if (C.zf) goto L_11bae27c;
  /* 11bae270 jmp 0x11bae280 */
  goto L_11bae280;
L_11bae272:;
  /* 11bae272 mov dword ptr [0x11bce6e8], 1 */
  w32((uint32_t)(0x11bce6e8), (0x1u));
L_11bae27c:;
  /* 11bae27c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11bae280:;
  /* 11bae280 jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae285:;
  /* 11bae285 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae288 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11bae28b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae28f je 0x11bae299 */
  if (C.zf) goto L_11bae299;
  /* 11bae291 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae295 je 0x11bae2a3 */
  if (C.zf) goto L_11bae2a3;
  /* 11bae297 jmp 0x11bae2a7 */
  goto L_11bae2a7;
L_11bae299:;
  /* 11bae299 mov dword ptr [0x11bce6e8], 1 */
  w32((uint32_t)(0x11bce6e8), (0x1u));
L_11bae2a3:;
  /* 11bae2a3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11bae2a7:;
  /* 11bae2a7 jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae2ac:;
  /* 11bae2ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae2af mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11bae2b2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae2b6 je 0x11bae2c0 */
  if (C.zf) goto L_11bae2c0;
  /* 11bae2b8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae2bc je 0x11bae2ca */
  if (C.zf) goto L_11bae2ca;
  /* 11bae2be jmp 0x11bae2ce */
  goto L_11bae2ce;
L_11bae2c0:;
  /* 11bae2c0 mov dword ptr [0x11bce6e8], 1 */
  w32((uint32_t)(0x11bce6e8), (0x1u));
L_11bae2ca:;
  /* 11bae2ca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11bae2ce:;
  /* 11bae2ce jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae2d3:;
  /* 11bae2d3 push 0x11bc9cbc */
  push32((uint32_t)(0x11bc9cbcu));
  /* 11bae2d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae2db push ecx */
  push32((uint32_t)(ECX));
  /* 11bae2dc call 0x11baeb30 */
  push32(0x11bae2e1u); f_11baeb30();
  /* 11bae2e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae2e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bae2e6 jne 0x11bae2f3 */
  if (!C.zf) goto L_11bae2f3;
  /* 11bae2e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae2eb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae2ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bae2f1 jmp 0x11bae311 */
  goto L_11bae311;
L_11bae2f3:;
  /* 11bae2f3 push 0x11bc9cb8 */
  push32((uint32_t)(0x11bc9cb8u));
  /* 11bae2f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae2fb push eax */
  push32((uint32_t)(EAX));
  /* 11bae2fc call 0x11baeb30 */
  push32(0x11bae301u); f_11baeb30();
  /* 11bae301 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bae306 jne 0x11bae311 */
  if (!C.zf) goto L_11bae311;
  /* 11bae308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae30b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae30e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bae311:;
  /* 11bae311 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11bae315 jmp 0x11bae4d0 */
  goto L_11bae4d0;
L_11bae31a:;
  /* 11bae31a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae31d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae321 jg 0x11bae331 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bae331;
  /* 11bae323 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bae326 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11bae32c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bae32f jmp 0x11bae33d */
  goto L_11bae33d;
L_11bae331:;
  /* 11bae331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bae334 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11bae33a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bae33d:;
  /* 11bae33d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae341 jle 0x11bae3e4 */
  if ((C.zf||C.sf!=C.of)) goto L_11bae3e4;
  /* 11bae347 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae34a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae34d jbe 0x11bae3e4 */
  if ((C.cf||C.zf)) goto L_11bae3e4;
  /* 11bae353 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bae356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae358 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bae35a mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11bae360 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bae362 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bae366 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bae36c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bae36e je 0x11bae3a7 */
  if (C.zf) goto L_11bae3a7;
  /* 11bae370 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae373 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae376 jbe 0x11bae3a7 */
  if ((C.cf||C.zf)) goto L_11bae3a7;
  /* 11bae378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae37b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bae37d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bae380 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bae382 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bae384 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae387 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae38c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae38f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bae391 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bae394 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae397 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11bae39a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae39d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae39f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae3a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae3a5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11bae3a7:;
  /* 11bae3a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae3aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae3ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bae3af mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bae3b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bae3b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae3b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bae3b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae3bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae3be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bae3c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bae3c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae3c6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bae3c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae3cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae3ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae3d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae3d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bae3d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae3d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae3dc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bae3df jmp 0x11bae33d */
  goto L_11bae33d;
L_11bae3e4:;
  /* 11bae3e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae3e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bae3ea jmp 0x11bae106 */
  goto L_11bae106;
L_11bae3ef:;
  /* 11bae3ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae3f2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bae3f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bae3f7 je 0x11bae4c2 */
  if (C.zf) goto L_11bae4c2;
  /* 11bae3fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae400 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae403 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11bae406:;
  /* 11bae406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae409 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bae40c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bae40e je 0x11bae4c0 */
  if (C.zf) goto L_11bae4c0;
  /* 11bae414 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae417 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae41a je 0x11bae4c0 */
  if (C.zf) goto L_11bae4c0;
  /* 11bae420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae423 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bae426 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae429 jne 0x11bae439 */
  if (!C.zf) goto L_11bae439;
  /* 11bae42b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae42e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae431 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bae434 jmp 0x11bae4c0 */
  goto L_11bae4c0;
L_11bae439:;
  /* 11bae439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae43c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bae43e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bae440 mov edx, dword ptr [0x11bcc00c] */
  EDX = (r32((uint32_t)(0x11bcc00c)));
  /* 11bae446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae448 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11bae44c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11bae451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bae453 je 0x11bae48c */
  if (C.zf) goto L_11bae48c;
  /* 11bae455 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae458 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae45b jbe 0x11bae48c */
  if ((C.cf||C.zf)) goto L_11bae48c;
  /* 11bae45d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae460 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae465 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bae467 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bae469 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae46c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae46e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae471 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae474 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bae476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae47c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bae47f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae482 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bae484 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae487 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae48a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bae48c:;
  /* 11bae48c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae48f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bae491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae494 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bae496 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bae498 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae49b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae49d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae4a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae4a3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bae4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae4a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae4ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bae4ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae4b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae4b3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae4b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae4b9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bae4bb jmp 0x11bae406 */
  goto L_11bae406;
L_11bae4c0:;
  /* 11bae4c0 jmp 0x11bae4cb */
  goto L_11bae4cb;
L_11bae4c2:;
  /* 11bae4c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae4c5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae4c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11bae4cb:;
  /* 11bae4cb jmp 0x11bae106 */
  goto L_11bae106;
L_11bae4d0:;
  /* 11bae4d0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bae4d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bae4d6 je 0x11bae4fc */
  if (C.zf) goto L_11bae4fc;
  /* 11bae4d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bae4db push edx */
  push32((uint32_t)(EDX));
  /* 11bae4dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae4df push eax */
  push32((uint32_t)(EAX));
  /* 11bae4e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae4e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae4e7 push edx */
  push32((uint32_t)(EDX));
  /* 11bae4e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11bae4eb push eax */
  push32((uint32_t)(EAX));
  /* 11bae4ec call 0x11bad930 */
  push32(0x11bae4f1u); f_11bad930();
  /* 11bae4f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae4f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bae4f7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bae4fa jmp 0x11bae577 */
  goto L_11bae577;
L_11bae4fc:;
  /* 11bae4fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae501 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bae503 mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11bae509 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bae50b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bae50f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bae515 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bae517 je 0x11bae548 */
  if (C.zf) goto L_11bae548;
  /* 11bae519 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae51c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae51e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae521 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bae523 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bae525 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae528 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bae52a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae52d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae530 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bae532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae538 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bae53b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae53e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae540 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae543 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae546 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11bae548:;
  /* 11bae548 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae54b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bae54d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae550 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bae552 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bae554 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae557 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae559 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae55c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae55f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bae561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae564 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae567 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bae56a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae56d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bae56f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae572 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae575 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bae577:;
  /* 11bae577 jmp 0x11bae106 */
  goto L_11bae106;
L_11bae57c:;
  /* 11bae57c mov esp, ebp */
  ESP = (EBP);
  /* 11bae57e pop ebp */
  EBP = (pop32());
  /* 11bae57f ret  */
  ESPCHK(0x11bae100u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e620 @ 0x11bae620 (650 bytes, 178 insns) */
void f_11bae620(void) {
  FTRACE(0x11bae620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bae620 push ebp */
  push32((uint32_t)(EBP));
  /* 11bae621 mov ebp, esp */
  EBP = (ESP);
  /* 11bae623 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bae629 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae62d jne 0x11bae789 */
  if (!C.zf) goto L_11bae789;
  /* 11bae633 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae636 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11bae63c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11bae642 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bae645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bae64c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11bae656 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae658 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11bae65e push edx */
  push32((uint32_t)(EDX));
  /* 11bae65f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae662 push eax */
  push32((uint32_t)(EAX));
  /* 11bae663 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae666 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae667 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae66a push edx */
  push32((uint32_t)(EDX));
  /* 11bae66b call 0x11baf920 */
  push32(0x11bae670u); f_11baf920();
  /* 11bae670 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae673 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bae676 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae67a jne 0x11bae70f */
  if (!C.zf) goto L_11bae70f;
  /* 11bae680 call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11bae686u);
  /* 11bae686 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae689 je 0x11bae690 */
  if (C.zf) goto L_11bae690;
  /* 11bae68b jmp 0x11bae76d */
  goto L_11bae76d;
L_11bae690:;
  /* 11bae690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae694 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae696 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae699 push eax */
  push32((uint32_t)(EAX));
  /* 11bae69a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae69d push ecx */
  push32((uint32_t)(ECX));
  /* 11bae69e call 0x11baf920 */
  push32(0x11bae6a3u); f_11baf920();
  /* 11bae6a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae6a6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11bae6ac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae6b3 jne 0x11bae6ba */
  if (!C.zf) goto L_11bae6ba;
  /* 11bae6b5 jmp 0x11bae76d */
  goto L_11bae76d;
L_11bae6ba:;
  /* 11bae6ba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11bae6bc push 0x11bc9cc4 */
  push32((uint32_t)(0x11bc9cc4u));
  /* 11bae6c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bae6c3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11bae6c9 push edx */
  push32((uint32_t)(EDX));
  /* 11bae6ca call 0x11b9a7d0 */
  push32(0x11bae6cfu); f_11b9a7d0();
  /* 11bae6cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae6d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bae6d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae6d9 jne 0x11bae6e0 */
  if (!C.zf) goto L_11bae6e0;
  /* 11bae6db jmp 0x11bae76d */
  goto L_11bae76d;
L_11bae6e0:;
  /* 11bae6e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bae6e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae6e9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11bae6ef push eax */
  push32((uint32_t)(EAX));
  /* 11bae6f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae6f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae6f7 push edx */
  push32((uint32_t)(EDX));
  /* 11bae6f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae6fb push eax */
  push32((uint32_t)(EAX));
  /* 11bae6fc call 0x11baf920 */
  push32(0x11bae701u); f_11baf920();
  /* 11bae701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae704 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bae707 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae70b jne 0x11bae70f */
  if (!C.zf) goto L_11bae70f;
  /* 11bae70d jmp 0x11bae76d */
  goto L_11bae76d;
L_11bae70f:;
  /* 11bae70f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11bae711 push 0x11bc9cc4 */
  push32((uint32_t)(0x11bc9cc4u));
  /* 11bae716 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bae718 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bae71b push ecx */
  push32((uint32_t)(ECX));
  /* 11bae71c call 0x11b9a7d0 */
  push32(0x11bae721u); f_11b9a7d0();
  /* 11bae721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae724 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11bae72a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11bae72c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11bae732 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae735 jne 0x11bae739 */
  if (!C.zf) goto L_11bae739;
  /* 11bae737 jmp 0x11bae76d */
  goto L_11bae76d;
L_11bae739:;
  /* 11bae739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bae73c push ecx */
  push32((uint32_t)(ECX));
  /* 11bae73d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae740 push edx */
  push32((uint32_t)(EDX));
  /* 11bae741 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11bae747 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bae749 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae74a call 0x11ba0870 */
  push32(0x11bae74fu); f_11ba0870();
  /* 11bae74f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae752 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae756 je 0x11bae766 */
  if (C.zf) goto L_11bae766;
  /* 11bae758 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bae75a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae75d push edx */
  push32((uint32_t)(EDX));
  /* 11bae75e call 0x11b9b260 */
  push32(0x11bae763u); f_11b9b260();
  /* 11bae763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bae766:;
  /* 11bae766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae768 jmp 0x11bae8a6 */
  goto L_11bae8a6;
L_11bae76d:;
  /* 11bae76d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae771 je 0x11bae781 */
  if (C.zf) goto L_11bae781;
  /* 11bae773 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bae775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bae778 push eax */
  push32((uint32_t)(EAX));
  /* 11bae779 call 0x11b9b260 */
  push32(0x11bae77eu); f_11b9b260();
  /* 11bae77e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bae781:;
  /* 11bae781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bae784 jmp 0x11bae8a6 */
  goto L_11bae8a6;
L_11bae789:;
  /* 11bae789 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae78d jne 0x11bae8a3 */
  if (!C.zf) goto L_11bae8a3;
  /* 11bae793 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11bae79d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae7a0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11bae7a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae7a8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11bae7ae push edx */
  push32((uint32_t)(EDX));
  /* 11bae7af push 0x11bce6bc */
  push32((uint32_t)(0x11bce6bcu));
  /* 11bae7b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae7b7 push eax */
  push32((uint32_t)(EAX));
  /* 11bae7b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae7bb push ecx */
  push32((uint32_t)(ECX));
  /* 11bae7bc call 0x11baf780 */
  push32(0x11bae7c1u); f_11baf780();
  /* 11bae7c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae7c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bae7c6 jne 0x11bae7d0 */
  if (!C.zf) goto L_11bae7d0;
  /* 11bae7c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bae7cb jmp 0x11bae8a6 */
  goto L_11bae8a6;
L_11bae7d0:;
  /* 11bae7d0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bae7d6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11bae7d9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11bae7e3 jmp 0x11bae7f4 */
  goto L_11bae7f4;
L_11bae7e5:;
  /* 11bae7e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bae7eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae7ee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11bae7f4:;
  /* 11bae7f4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae7fb jge 0x11bae89f */
  if ((C.sf==C.of)) goto L_11bae89f;
  /* 11bae801 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae808 jle 0x11bae83b */
  if ((C.zf||C.sf!=C.of)) goto L_11bae83b;
  /* 11bae80a push 4 */
  push32((uint32_t)(0x4u));
  /* 11bae80c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bae812 mov dl, byte ptr [ecx*2 + 0x11bce6bc] */
  DL = (r8((uint32_t)(ECX*2 + 0x11bce6bc)));
  /* 11bae819 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11bae81f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11bae825 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bae82a push eax */
  push32((uint32_t)(EAX));
  /* 11bae82b call 0x11ba0f90 */
  push32(0x11bae830u); f_11ba0f90();
  /* 11bae830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae833 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11bae839 jmp 0x11bae86e */
  goto L_11bae86e;
L_11bae83b:;
  /* 11bae83b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bae841 mov dl, byte ptr [ecx*2 + 0x11bce6bc] */
  DL = (r8((uint32_t)(ECX*2 + 0x11bce6bc)));
  /* 11bae848 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11bae84e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11bae854 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bae859 mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11bae85f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bae861 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bae865 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bae868 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11bae86e:;
  /* 11bae86e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae875 je 0x11bae898 */
  if (C.zf) goto L_11bae898;
  /* 11bae877 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bae87d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bae880 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bae883 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11bae88a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11bae88e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bae894 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bae896 jmp 0x11bae89a */
  goto L_11bae89a;
L_11bae898:;
  /* 11bae898 jmp 0x11bae89f */
  goto L_11bae89f;
L_11bae89a:;
  /* 11bae89a jmp 0x11bae7e5 */
  goto L_11bae7e5;
L_11bae89f:;
  /* 11bae89f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae8a1 jmp 0x11bae8a6 */
  goto L_11bae8a6;
L_11bae8a3:;
  /* 11bae8a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11bae8a6:;
  /* 11bae8a6 mov esp, ebp */
  ESP = (EBP);
  /* 11bae8a8 pop ebp */
  EBP = (pop32());
  /* 11bae8a9 ret  */
  ESPCHK(0x11bae620u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e8b0 @ 0x11bae8b0 (10 bytes, 5 insns) */
void f_11bae8b0(void) {
  FTRACE(0x11bae8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bae8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bae8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bae8b3 mov eax, dword ptr [0x11bcd3e0] */
  EAX = (r32((uint32_t)(0x11bcd3e0)));
  /* 11bae8b8 pop ebp */
  EBP = (pop32());
  /* 11bae8b9 ret  */
  ESPCHK(0x11bae8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e8c0 @ 0x11bae8c0 (575 bytes, 196 insns) */
void f_11bae8c0(void) {
  FTRACE(0x11bae8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bae8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bae8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bae8c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bae8c5 push 0x11bc9cd0 */
  push32((uint32_t)(0x11bc9cd0u));
  /* 11bae8ca push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11bae8cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11bae8d5 push eax */
  push32((uint32_t)(EAX));
  /* 11bae8d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11bae8dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae8e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11bae8e1 push esi */
  push32((uint32_t)(ESI));
  /* 11bae8e2 push edi */
  push32((uint32_t)(EDI));
  /* 11bae8e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bae8e6 cmp dword ptr [0x11bce6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae8ed jne 0x11bae93e */
  if (!C.zf) goto L_11bae93e;
  /* 11bae8ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11bae8f2 push eax */
  push32((uint32_t)(EAX));
  /* 11bae8f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bae8f5 push 0x11bc93fc */
  push32((uint32_t)(0x11bc93fcu));
  /* 11bae8fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11bae8fc call dword ptr [0x11bd0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0350))), 0x11bae902u);
  /* 11bae902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bae904 je 0x11bae912 */
  if (C.zf) goto L_11bae912;
  /* 11bae906 mov dword ptr [0x11bce6c8], 1 */
  w32((uint32_t)(0x11bce6c8), (0x1u));
  /* 11bae910 jmp 0x11bae93e */
  goto L_11bae93e;
L_11bae912:;
  /* 11bae912 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11bae915 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae916 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bae918 push 0x11bc93f8 */
  push32((uint32_t)(0x11bc93f8u));
  /* 11bae91d push 1 */
  push32((uint32_t)(0x1u));
  /* 11bae91f push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae921 call dword ptr [0x11bd0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0354))), 0x11bae927u);
  /* 11bae927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bae929 je 0x11bae937 */
  if (C.zf) goto L_11bae937;
  /* 11bae92b mov dword ptr [0x11bce6c8], 2 */
  w32((uint32_t)(0x11bce6c8), (0x2u));
  /* 11bae935 jmp 0x11bae93e */
  goto L_11bae93e;
L_11bae937:;
  /* 11bae937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae939 jmp 0x11baeb19 */
  goto L_11baeb19;
L_11bae93e:;
  /* 11bae93e cmp dword ptr [0x11bce6c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae945 jne 0x11bae962 */
  if (!C.zf) goto L_11bae962;
  /* 11bae947 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bae94a push edx */
  push32((uint32_t)(EDX));
  /* 11bae94b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae94e push eax */
  push32((uint32_t)(EAX));
  /* 11bae94f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae952 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bae956 push edx */
  push32((uint32_t)(EDX));
  /* 11bae957 call dword ptr [0x11bd0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0350))), 0x11bae95du);
  /* 11bae95d jmp 0x11baeb19 */
  goto L_11baeb19;
L_11bae962:;
  /* 11bae962 cmp dword ptr [0x11bce6c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae969 jne 0x11baeb17 */
  if (!C.zf) goto L_11baeb17;
  /* 11bae96f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae973 jne 0x11bae97d */
  if (!C.zf) goto L_11bae97d;
  /* 11bae975 mov eax, dword ptr [0x11bce64c] */
  EAX = (r32((uint32_t)(0x11bce64c)));
  /* 11bae97a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11bae97d:;
  /* 11bae97d push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae97f push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae981 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae983 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae985 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bae988 push ecx */
  push32((uint32_t)(ECX));
  /* 11bae989 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bae98c push edx */
  push32((uint32_t)(EDX));
  /* 11bae98d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bae992 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bae995 push eax */
  push32((uint32_t)(EAX));
  /* 11bae996 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11bae99cu);
  /* 11bae99c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bae99f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bae9a3 jne 0x11bae9ac */
  if (!C.zf) goto L_11bae9ac;
  /* 11bae9a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bae9a7 jmp 0x11baeb19 */
  goto L_11baeb19;
L_11bae9ac:;
  /* 11bae9ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bae9b3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bae9b6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae9b9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bae9bb call 0x11ba01f0 */
  push32(0x11bae9c0u); f_11ba01f0();
  /* 11bae9c0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11bae9c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bae9c6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bae9c9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11bae9cc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bae9cf push edx */
  push32((uint32_t)(EDX));
  /* 11bae9d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bae9d2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bae9d5 push eax */
  push32((uint32_t)(EAX));
  /* 11bae9d6 call 0x11ba1d00 */
  push32(0x11bae9dbu); f_11ba1d00();
  /* 11bae9db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bae9de mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bae9e5 jmp 0x11bae9fe */
  goto L_11bae9fe;
  /* 11bae9e7 mov eax, 1 */
  EAX = (0x1u);
  /* 11bae9ec ret  */
  ESPCHK(0x11bae8c0u, _esp0);
  ESP += 4; return;
  /* 11bae9ed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bae9f0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11bae9f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bae9fe:;
  /* 11bae9fe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baea02 jne 0x11baea0b */
  if (!C.zf) goto L_11baea0b;
  /* 11baea04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baea06 jmp 0x11baeb19 */
  goto L_11baeb19;
L_11baea0b:;
  /* 11baea0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11baea0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11baea0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baea12 push ecx */
  push32((uint32_t)(ECX));
  /* 11baea13 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11baea16 push edx */
  push32((uint32_t)(EDX));
  /* 11baea17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baea1a push eax */
  push32((uint32_t)(EAX));
  /* 11baea1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baea1e push ecx */
  push32((uint32_t)(ECX));
  /* 11baea1f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11baea24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baea27 push edx */
  push32((uint32_t)(EDX));
  /* 11baea28 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11baea2eu);
  /* 11baea2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baea30 jne 0x11baea39 */
  if (!C.zf) goto L_11baea39;
  /* 11baea32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baea34 jmp 0x11baeb19 */
  goto L_11baeb19;
L_11baea39:;
  /* 11baea39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11baea40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baea43 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11baea47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baea4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11baea4c call 0x11ba01f0 */
  push32(0x11baea51u); f_11ba01f0();
  /* 11baea51 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11baea54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baea57 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11baea5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11baea5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11baea64 jmp 0x11baea7d */
  goto L_11baea7d;
  /* 11baea66 mov eax, 1 */
  EAX = (0x1u);
  /* 11baea6b ret  */
  ESPCHK(0x11bae8c0u, _esp0);
  ESP += 4; return;
  /* 11baea6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11baea6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11baea76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11baea7d:;
  /* 11baea7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baea81 jne 0x11baea8a */
  if (!C.zf) goto L_11baea8a;
  /* 11baea83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baea85 jmp 0x11baeb19 */
  goto L_11baeb19;
L_11baea8a:;
  /* 11baea8a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baea8e jne 0x11baea99 */
  if (!C.zf) goto L_11baea99;
  /* 11baea90 mov edx, dword ptr [0x11bce63c] */
  EDX = (r32((uint32_t)(0x11bce63c)));
  /* 11baea96 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11baea99:;
  /* 11baea99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baea9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baea9f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11baeaa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baeaa8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baeaab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11baeab2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baeab5 push ecx */
  push32((uint32_t)(ECX));
  /* 11baeab6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baeab9 push edx */
  push32((uint32_t)(EDX));
  /* 11baeaba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11baeabd push eax */
  push32((uint32_t)(EAX));
  /* 11baeabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baeac1 push ecx */
  push32((uint32_t)(ECX));
  /* 11baeac2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11baeac5 push edx */
  push32((uint32_t)(EDX));
  /* 11baeac6 call dword ptr [0x11bd0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0354))), 0x11baeaccu);
  /* 11baeacc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11baeacf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baead2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baead5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baead7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11baeadc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeae2 je 0x11baeaf8 */
  if (C.zf) goto L_11baeaf8;
  /* 11baeae4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baeae7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baeaea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baeaec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11baeaf0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeaf6 je 0x11baeafc */
  if (C.zf) goto L_11baeafc;
L_11baeaf8:;
  /* 11baeaf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baeafa jmp 0x11baeb19 */
  goto L_11baeb19;
L_11baeafc:;
  /* 11baeafc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baeaff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11baeb01 push eax */
  push32((uint32_t)(EAX));
  /* 11baeb02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baeb05 push ecx */
  push32((uint32_t)(ECX));
  /* 11baeb06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baeb09 push edx */
  push32((uint32_t)(EDX));
  /* 11baeb0a call 0x11ba1d60 */
  push32(0x11baeb0fu); f_11ba1d60();
  /* 11baeb0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baeb12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baeb15 jmp 0x11baeb19 */
  goto L_11baeb19;
L_11baeb17:;
  /* 11baeb17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baeb19:;
  /* 11baeb19 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11baeb1c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baeb1f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11baeb26 pop edi */
  EDI = (pop32());
  /* 11baeb27 pop esi */
  ESI = (pop32());
  /* 11baeb28 pop ebx */
  EBX = (pop32());
  /* 11baeb29 mov esp, ebp */
  ESP = (EBP);
  /* 11baeb2b pop ebp */
  EBP = (pop32());
  /* 11baeb2c ret  */
  ESPCHK(0x11bae8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb30 @ 0x11baeb30 (208 bytes, 85 insns) */
void f_11baeb30(void) {
  FTRACE(0x11baeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 11baeb31 mov ebp, esp */
  EBP = (ESP);
  /* 11baeb33 push edi */
  push32((uint32_t)(EDI));
  /* 11baeb34 push esi */
  push32((uint32_t)(ESI));
  /* 11baeb35 push ebx */
  push32((uint32_t)(EBX));
  /* 11baeb36 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11baeb39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11baeb3c lea eax, [0x11bce634] */
  EAX = ((uint32_t)(0x11bce634));
  /* 11baeb42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeb46 jne 0x11baeb83 */
  if (!C.zf) goto L_11baeb83;
  /* 11baeb48 mov al, 0xff */
  AL = (0xffu);
  /* 11baeb4a mov edi, edi */
  EDI = (EDI);
L_11baeb4c:;
  /* 11baeb4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11baeb4e je 0x11baeb7e */
  if (C.zf) goto L_11baeb7e;
  /* 11baeb50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11baeb52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11baeb53 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11baeb55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11baeb56 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baeb58 je 0x11baeb4c */
  if (C.zf) goto L_11baeb4c;
  /* 11baeb5a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11baeb5c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baeb5e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11baeb60 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11baeb63 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11baeb65 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11baeb67 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11baeb69 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11baeb6b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baeb6d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11baeb6f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11baeb72 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11baeb74 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11baeb76 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baeb78 je 0x11baeb4c */
  if (C.zf) goto L_11baeb4c;
  /* 11baeb7a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11baeb7c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11baeb7e:;
  /* 11baeb7e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11baeb81 jmp 0x11baebfb */
  goto L_11baebfb;
L_11baeb83:;
  /* 11baeb83 lock inc dword ptr [0x11bce6fc] */
  x86_unimpl("lock inc @ 0x11baeb83");
  /* 11baeb8a cmp dword ptr [0x11bce6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeb91 jg 0x11baeb97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11baeb97;
  /* 11baeb93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baeb95 jmp 0x11baebac */
  goto L_11baebac;
L_11baeb97:;
  /* 11baeb97 lock dec dword ptr [0x11bce6fc] */
  x86_unimpl("lock dec @ 0x11baeb97");
  /* 11baeb9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11baeba0 call 0x11b9a6d0 */
  push32(0x11baeba5u); f_11b9a6d0();
  /* 11baeba5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11baebac:;
  /* 11baebac mov eax, 0xff */
  EAX = (0xffu);
  /* 11baebb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11baebb3 nop  */
  /* nop */
L_11baebb4:;
  /* 11baebb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11baebb6 je 0x11baebdf */
  if (C.zf) goto L_11baebdf;
  /* 11baebb8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11baebba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11baebbb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11baebbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11baebbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baebc0 je 0x11baebb4 */
  if (C.zf) goto L_11baebb4;
  /* 11baebc2 push eax */
  push32((uint32_t)(EAX));
  /* 11baebc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11baebc4 call 0x11ba1100 */
  push32(0x11baebc9u); f_11ba1100();
  /* 11baebc9 mov ebx, eax */
  EBX = (EAX);
  /* 11baebcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baebce call 0x11ba1100 */
  push32(0x11baebd3u); f_11ba1100();
  /* 11baebd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baebd6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baebd8 je 0x11baebb4 */
  if (C.zf) goto L_11baebb4;
  /* 11baebda sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baebdc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11baebdf:;
  /* 11baebdf mov ebx, eax */
  EBX = (EAX);
  /* 11baebe1 pop eax */
  EAX = (pop32());
  /* 11baebe2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baebe4 jne 0x11baebef */
  if (!C.zf) goto L_11baebef;
  /* 11baebe6 lock dec dword ptr [0x11bce6fc] */
  x86_unimpl("lock dec @ 0x11baebe6");
  /* 11baebed jmp 0x11baebf9 */
  goto L_11baebf9;
L_11baebef:;
  /* 11baebef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11baebf1 call 0x11b9a770 */
  push32(0x11baebf6u); f_11b9a770();
  /* 11baebf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baebf9:;
  /* 11baebf9 mov eax, ebx */
  EAX = (EBX);
L_11baebfb:;
  /* 11baebfb pop ebx */
  EBX = (pop32());
  /* 11baebfc pop esi */
  ESI = (pop32());
  /* 11baebfd pop edi */
  EDI = (pop32());
  /* 11baebfe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11baebff ret  */
  ESPCHK(0x11baeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ec00 @ 0x11baec00 (257 bytes, 103 insns) */
void f_11baec00(void) {
  FTRACE(0x11baec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baec00 push ebp */
  push32((uint32_t)(EBP));
  /* 11baec01 mov ebp, esp */
  EBP = (ESP);
  /* 11baec03 push edi */
  push32((uint32_t)(EDI));
  /* 11baec04 push esi */
  push32((uint32_t)(ESI));
  /* 11baec05 push ebx */
  push32((uint32_t)(EBX));
  /* 11baec06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baec09 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baec0b je 0x11baecfa */
  if (C.zf) goto L_11baecfa;
  /* 11baec11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11baec14 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11baec17 lea eax, [0x11bce634] */
  EAX = ((uint32_t)(0x11bce634));
  /* 11baec1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baec21 jne 0x11baec71 */
  if (!C.zf) goto L_11baec71;
  /* 11baec23 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11baec25 mov bl, 0x5a */
  BL = (0x5au);
  /* 11baec27 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11baec29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11baec2c:;
  /* 11baec2c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11baec2e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11baec30 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11baec32 je 0x11baec55 */
  if (C.zf) goto L_11baec55;
  /* 11baec34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11baec36 je 0x11baec55 */
  if (C.zf) goto L_11baec55;
  /* 11baec38 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11baec39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11baec3a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baec3c jb 0x11baec44 */
  if (C.cf) goto L_11baec44;
  /* 11baec3e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baec40 ja 0x11baec44 */
  if ((!C.cf&&!C.zf)) goto L_11baec44;
  /* 11baec42 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11baec44:;
  /* 11baec44 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baec46 jb 0x11baec4e */
  if (C.cf) goto L_11baec4e;
  /* 11baec48 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baec4a ja 0x11baec4e */
  if ((!C.cf&&!C.zf)) goto L_11baec4e;
  /* 11baec4c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11baec4e:;
  /* 11baec4e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baec50 jne 0x11baec5f */
  if (!C.zf) goto L_11baec5f;
  /* 11baec52 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11baec53 jne 0x11baec2c */
  if (!C.zf) goto L_11baec2c;
L_11baec55:;
  /* 11baec55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baec57 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11baec59 je 0x11baecfa */
  if (C.zf) goto L_11baecfa;
L_11baec5f:;
  /* 11baec5f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11baec64 jb 0x11baecfa */
  if (C.cf) goto L_11baecfa;
  /* 11baec6a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11baec6c jmp 0x11baecfa */
  goto L_11baecfa;
L_11baec71:;
  /* 11baec71 lock inc dword ptr [0x11bce6fc] */
  x86_unimpl("lock inc @ 0x11baec71");
  /* 11baec78 cmp dword ptr [0x11bce6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baec7f jg 0x11baec85 */
  if ((!C.zf&&C.sf==C.of)) goto L_11baec85;
  /* 11baec81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baec83 jmp 0x11baec9e */
  goto L_11baec9e;
L_11baec85:;
  /* 11baec85 lock dec dword ptr [0x11bce6fc] */
  x86_unimpl("lock dec @ 0x11baec85");
  /* 11baec8c mov ebx, ecx */
  EBX = (ECX);
  /* 11baec8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11baec90 call 0x11b9a6d0 */
  push32(0x11baec95u); f_11b9a6d0();
  /* 11baec95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11baec9c mov ecx, ebx */
  ECX = (EBX);
L_11baec9e:;
  /* 11baec9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baeca0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11baeca2 mov edi, edi */
  EDI = (EDI);
L_11baeca4:;
  /* 11baeca4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11baeca6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baeca8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11baecaa je 0x11baeccf */
  if (C.zf) goto L_11baeccf;
  /* 11baecac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11baecae je 0x11baeccf */
  if (C.zf) goto L_11baeccf;
  /* 11baecb0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11baecb1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11baecb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11baecb3 push eax */
  push32((uint32_t)(EAX));
  /* 11baecb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11baecb5 call 0x11ba1100 */
  push32(0x11baecbau); f_11ba1100();
  /* 11baecba mov ebx, eax */
  EBX = (EAX);
  /* 11baecbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baecbf call 0x11ba1100 */
  push32(0x11baecc4u); f_11ba1100();
  /* 11baecc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baecc7 pop ecx */
  ECX = (pop32());
  /* 11baecc8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baecca jne 0x11baecd5 */
  if (!C.zf) goto L_11baecd5;
  /* 11baeccc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11baeccd jne 0x11baeca4 */
  if (!C.zf) goto L_11baeca4;
L_11baeccf:;
  /* 11baeccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baecd1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baecd3 je 0x11baecde */
  if (C.zf) goto L_11baecde;
L_11baecd5:;
  /* 11baecd5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11baecda jb 0x11baecde */
  if (C.cf) goto L_11baecde;
  /* 11baecdc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11baecde:;
  /* 11baecde pop eax */
  EAX = (pop32());
  /* 11baecdf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baece1 jne 0x11baecec */
  if (!C.zf) goto L_11baecec;
  /* 11baece3 lock dec dword ptr [0x11bce6fc] */
  x86_unimpl("lock dec @ 0x11baece3");
  /* 11baecea jmp 0x11baecfa */
  goto L_11baecfa;
L_11baecec:;
  /* 11baecec mov ebx, ecx */
  EBX = (ECX);
  /* 11baecee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11baecf0 call 0x11b9a770 */
  push32(0x11baecf5u); f_11b9a770();
  /* 11baecf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baecf8 mov ecx, ebx */
  ECX = (EBX);
L_11baecfa:;
  /* 11baecfa mov eax, ecx */
  EAX = (ECX);
  /* 11baecfc pop ebx */
  EBX = (pop32());
  /* 11baecfd pop esi */
  ESI = (pop32());
  /* 11baecfe pop edi */
  EDI = (pop32());
  /* 11baecff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11baed00 ret  */
  ESPCHK(0x11baec00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ed10 @ 0x11baed10 (970 bytes, 340 insns) */
void f_11baed10(void) {
  FTRACE(0x11baed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baed10 push ebp */
  push32((uint32_t)(EBP));
  /* 11baed11 mov ebp, esp */
  EBP = (ESP);
  /* 11baed13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11baed15 push 0x11bc9d30 */
  push32((uint32_t)(0x11bc9d30u));
  /* 11baed1a push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11baed1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11baed25 push eax */
  push32((uint32_t)(EAX));
  /* 11baed26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11baed2d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baed30 push ebx */
  push32((uint32_t)(EBX));
  /* 11baed31 push esi */
  push32((uint32_t)(ESI));
  /* 11baed32 push edi */
  push32((uint32_t)(EDI));
  /* 11baed33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baed36 cmp dword ptr [0x11bce6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baed3d jne 0x11baed96 */
  if (!C.zf) goto L_11baed96;
  /* 11baed3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11baed41 push 0x11bc93fc */
  push32((uint32_t)(0x11bc93fcu));
  /* 11baed46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baed48 push 0x11bc93fc */
  push32((uint32_t)(0x11bc93fcu));
  /* 11baed4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11baed4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11baed51 call dword ptr [0x11bd031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd031c))), 0x11baed57u);
  /* 11baed57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baed59 je 0x11baed67 */
  if (C.zf) goto L_11baed67;
  /* 11baed5b mov dword ptr [0x11bce6cc], 1 */
  w32((uint32_t)(0x11bce6cc), (0x1u));
  /* 11baed65 jmp 0x11baed96 */
  goto L_11baed96;
L_11baed67:;
  /* 11baed67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baed69 push 0x11bc93f8 */
  push32((uint32_t)(0x11bc93f8u));
  /* 11baed6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11baed70 push 0x11bc93f8 */
  push32((uint32_t)(0x11bc93f8u));
  /* 11baed75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baed77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baed79 call dword ptr [0x11bd0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0320))), 0x11baed7fu);
  /* 11baed7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baed81 je 0x11baed8f */
  if (C.zf) goto L_11baed8f;
  /* 11baed83 mov dword ptr [0x11bce6cc], 2 */
  w32((uint32_t)(0x11bce6cc), (0x2u));
  /* 11baed8d jmp 0x11baed96 */
  goto L_11baed96;
L_11baed8f:;
  /* 11baed8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baed91 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baed96:;
  /* 11baed96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baed9a jle 0x11baedaf */
  if ((C.zf||C.sf!=C.of)) goto L_11baedaf;
  /* 11baed9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baed9f push eax */
  push32((uint32_t)(EAX));
  /* 11baeda0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baeda3 push ecx */
  push32((uint32_t)(ECX));
  /* 11baeda4 call 0x11baf110 */
  push32(0x11baeda9u); f_11baf110();
  /* 11baeda9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baedac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11baedaf:;
  /* 11baedaf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baedb3 jle 0x11baedc8 */
  if ((C.zf||C.sf!=C.of)) goto L_11baedc8;
  /* 11baedb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11baedb8 push edx */
  push32((uint32_t)(EDX));
  /* 11baedb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baedbc push eax */
  push32((uint32_t)(EAX));
  /* 11baedbd call 0x11baf110 */
  push32(0x11baedc2u); f_11baf110();
  /* 11baedc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baedc5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11baedc8:;
  /* 11baedc8 cmp dword ptr [0x11bce6cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baedcf jne 0x11baedf4 */
  if (!C.zf) goto L_11baedf4;
  /* 11baedd1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11baedd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11baedd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baedd8 push edx */
  push32((uint32_t)(EDX));
  /* 11baedd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baeddc push eax */
  push32((uint32_t)(EAX));
  /* 11baeddd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baede0 push ecx */
  push32((uint32_t)(ECX));
  /* 11baede1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baede4 push edx */
  push32((uint32_t)(EDX));
  /* 11baede5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baede8 push eax */
  push32((uint32_t)(EAX));
  /* 11baede9 call dword ptr [0x11bd0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0320))), 0x11baedefu);
  /* 11baedef jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baedf4:;
  /* 11baedf4 cmp dword ptr [0x11bce6cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baedfb jne 0x11baf0f2 */
  if (!C.zf) goto L_11baf0f2;
  /* 11baee01 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee05 jne 0x11baee10 */
  if (!C.zf) goto L_11baee10;
  /* 11baee07 mov ecx, dword ptr [0x11bce64c] */
  ECX = (r32((uint32_t)(0x11bce64c)));
  /* 11baee0d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11baee10:;
  /* 11baee10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee14 je 0x11baee20 */
  if (C.zf) goto L_11baee20;
  /* 11baee16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee1a jne 0x11baef9c */
  if (!C.zf) goto L_11baef9c;
L_11baee20:;
  /* 11baee20 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baee23 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee26 jne 0x11baee32 */
  if (!C.zf) goto L_11baee32;
  /* 11baee28 mov eax, 2 */
  EAX = (0x2u);
  /* 11baee2d jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baee32:;
  /* 11baee32 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee36 jle 0x11baee42 */
  if ((C.zf||C.sf!=C.of)) goto L_11baee42;
  /* 11baee38 mov eax, 1 */
  EAX = (0x1u);
  /* 11baee3d jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baee42:;
  /* 11baee42 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee46 jle 0x11baee52 */
  if ((C.zf||C.sf!=C.of)) goto L_11baee52;
  /* 11baee48 mov eax, 3 */
  EAX = (0x3u);
  /* 11baee4d jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baee52:;
  /* 11baee52 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11baee55 push eax */
  push32((uint32_t)(EAX));
  /* 11baee56 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11baee59 push ecx */
  push32((uint32_t)(ECX));
  /* 11baee5a call dword ptr [0x11bd0368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0368))), 0x11baee60u);
  /* 11baee60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baee62 jne 0x11baee6b */
  if (!C.zf) goto L_11baee6b;
  /* 11baee64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baee66 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baee6b:;
  /* 11baee6b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee6f jne 0x11baee77 */
  if (!C.zf) goto L_11baee77;
  /* 11baee71 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee75 je 0x11baeea4 */
  if (C.zf) goto L_11baeea4;
L_11baee77:;
  /* 11baee77 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee7b jne 0x11baee83 */
  if (!C.zf) goto L_11baee83;
  /* 11baee7d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baee81 je 0x11baeea4 */
  if (C.zf) goto L_11baeea4;
L_11baee83:;
  /* 11baee83 push 0x11bc9cf0 */
  push32((uint32_t)(0x11bc9cf0u));
  /* 11baee88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baee8a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11baee8f push 0x11bc9ce8 */
  push32((uint32_t)(0x11bc9ce8u));
  /* 11baee94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baee96 call 0x11b99390 */
  push32(0x11baee9bu); f_11b99390();
  /* 11baee9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baee9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeea1 jne 0x11baeea4 */
  if (!C.zf) goto L_11baeea4;
  /* 11baeea3 int3  */
  x86_unimpl("int3 @ 0x11baeea3");
L_11baeea4:;
  /* 11baeea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baeea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baeea8 jne 0x11baee6b */
  if (!C.zf) goto L_11baee6b;
  /* 11baeeaa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeeae jle 0x11baef23 */
  if ((C.zf||C.sf!=C.of)) goto L_11baef23;
  /* 11baeeb0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeeb4 jae 0x11baeec0 */
  if (!C.cf) goto L_11baeec0;
  /* 11baeeb6 mov eax, 3 */
  EAX = (0x3u);
  /* 11baeebb jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baeec0:;
  /* 11baeec0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11baeec3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11baeec6 jmp 0x11baeed1 */
  goto L_11baeed1;
L_11baeec8:;
  /* 11baeec8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baeecb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baeece mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11baeed1:;
  /* 11baeed1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baeed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baeed6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11baeed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baeeda je 0x11baef19 */
  if (C.zf) goto L_11baef19;
  /* 11baeedc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baeedf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baeee1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11baeee4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baeee6 je 0x11baef19 */
  if (C.zf) goto L_11baef19;
  /* 11baeee8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baeeeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baeeed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11baeeef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baeef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baeef4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11baeef6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baeef8 jl 0x11baef17 */
  if ((C.sf!=C.of)) goto L_11baef17;
  /* 11baeefa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baeefd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baeeff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11baef01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baef04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baef06 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11baef09 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baef0b jg 0x11baef17 */
  if ((!C.zf&&C.sf==C.of)) goto L_11baef17;
  /* 11baef0d mov eax, 2 */
  EAX = (0x2u);
  /* 11baef12 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baef17:;
  /* 11baef17 jmp 0x11baeec8 */
  goto L_11baeec8;
L_11baef19:;
  /* 11baef19 mov eax, 3 */
  EAX = (0x3u);
  /* 11baef1e jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baef23:;
  /* 11baef23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baef27 jle 0x11baef9c */
  if ((C.zf||C.sf!=C.of)) goto L_11baef9c;
  /* 11baef29 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baef2d jae 0x11baef39 */
  if (!C.cf) goto L_11baef39;
  /* 11baef2f mov eax, 1 */
  EAX = (0x1u);
  /* 11baef34 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baef39:;
  /* 11baef39 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11baef3c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11baef3f jmp 0x11baef4a */
  goto L_11baef4a;
L_11baef41:;
  /* 11baef41 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baef44 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baef47 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11baef4a:;
  /* 11baef4a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baef4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baef4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11baef51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baef53 je 0x11baef92 */
  if (C.zf) goto L_11baef92;
  /* 11baef55 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baef58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baef5a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11baef5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baef5f je 0x11baef92 */
  if (C.zf) goto L_11baef92;
  /* 11baef61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baef64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baef66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11baef68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baef6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11baef6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11baef6f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baef71 jl 0x11baef90 */
  if ((C.sf!=C.of)) goto L_11baef90;
  /* 11baef73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baef76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11baef78 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11baef7a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11baef7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baef7f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11baef82 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baef84 jg 0x11baef90 */
  if ((!C.zf&&C.sf==C.of)) goto L_11baef90;
  /* 11baef86 mov eax, 2 */
  EAX = (0x2u);
  /* 11baef8b jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baef90:;
  /* 11baef90 jmp 0x11baef41 */
  goto L_11baef41;
L_11baef92:;
  /* 11baef92 mov eax, 1 */
  EAX = (0x1u);
  /* 11baef97 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baef9c:;
  /* 11baef9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11baef9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11baefa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baefa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11baefa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baefa7 push edx */
  push32((uint32_t)(EDX));
  /* 11baefa8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11baefaa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11baefad push eax */
  push32((uint32_t)(EAX));
  /* 11baefae call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11baefb4u);
  /* 11baefb4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11baefb7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baefbb jne 0x11baefc4 */
  if (!C.zf) goto L_11baefc4;
  /* 11baefbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baefbf jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baefc4:;
  /* 11baefc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baefcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baefce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11baefd0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baefd3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11baefd5 call 0x11ba01f0 */
  push32(0x11baefdau); f_11ba01f0();
  /* 11baefda mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11baefdd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baefe0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11baefe3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11baefe6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11baefed jmp 0x11baf006 */
  goto L_11baf006;
  /* 11baefef mov eax, 1 */
  EAX = (0x1u);
  /* 11baeff4 ret  */
  ESPCHK(0x11baed10u, _esp0);
  ESP += 4; return;
  /* 11baeff5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11baeff8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11baefff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11baf006:;
  /* 11baf006 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf00a jne 0x11baf013 */
  if (!C.zf) goto L_11baf013;
  /* 11baf00c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf00e jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baf013:;
  /* 11baf013 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baf016 push edx */
  push32((uint32_t)(EDX));
  /* 11baf017 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baf01a push eax */
  push32((uint32_t)(EAX));
  /* 11baf01b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baf01e push ecx */
  push32((uint32_t)(ECX));
  /* 11baf01f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baf022 push edx */
  push32((uint32_t)(EDX));
  /* 11baf023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf025 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11baf028 push eax */
  push32((uint32_t)(EAX));
  /* 11baf029 call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11baf02fu);
  /* 11baf02f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf031 jne 0x11baf03a */
  if (!C.zf) goto L_11baf03a;
  /* 11baf033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf035 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baf03a:;
  /* 11baf03a push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf03c push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf03e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11baf041 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf042 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baf045 push edx */
  push32((uint32_t)(EDX));
  /* 11baf046 push 9 */
  push32((uint32_t)(0x9u));
  /* 11baf048 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11baf04b push eax */
  push32((uint32_t)(EAX));
  /* 11baf04c call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11baf052u);
  /* 11baf052 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11baf055 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf059 jne 0x11baf062 */
  if (!C.zf) goto L_11baf062;
  /* 11baf05b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf05d jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baf062:;
  /* 11baf062 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11baf069 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baf06c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11baf06e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf071 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11baf073 call 0x11ba01f0 */
  push32(0x11baf078u); f_11ba01f0();
  /* 11baf078 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11baf07b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baf07e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11baf081 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11baf084 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11baf08b jmp 0x11baf0a4 */
  goto L_11baf0a4;
  /* 11baf08d mov eax, 1 */
  EAX = (0x1u);
  /* 11baf092 ret  */
  ESPCHK(0x11baed10u, _esp0);
  ESP += 4; return;
  /* 11baf093 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11baf096 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11baf09d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11baf0a4:;
  /* 11baf0a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf0a8 jne 0x11baf0ae */
  if (!C.zf) goto L_11baf0ae;
  /* 11baf0aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf0ac jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baf0ae:;
  /* 11baf0ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baf0b1 push edx */
  push32((uint32_t)(EDX));
  /* 11baf0b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baf0b5 push eax */
  push32((uint32_t)(EAX));
  /* 11baf0b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11baf0b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf0ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baf0bd push edx */
  push32((uint32_t)(EDX));
  /* 11baf0be push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf0c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11baf0c3 push eax */
  push32((uint32_t)(EAX));
  /* 11baf0c4 call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11baf0cau);
  /* 11baf0ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf0cc jne 0x11baf0d2 */
  if (!C.zf) goto L_11baf0d2;
  /* 11baf0ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf0d0 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baf0d2:;
  /* 11baf0d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baf0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf0d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baf0d9 push edx */
  push32((uint32_t)(EDX));
  /* 11baf0da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baf0dd push eax */
  push32((uint32_t)(EAX));
  /* 11baf0de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baf0e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf0e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf0e5 push edx */
  push32((uint32_t)(EDX));
  /* 11baf0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf0e9 push eax */
  push32((uint32_t)(EAX));
  /* 11baf0ea call dword ptr [0x11bd031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd031c))), 0x11baf0f0u);
  /* 11baf0f0 jmp 0x11baf0f4 */
  goto L_11baf0f4;
L_11baf0f2:;
  /* 11baf0f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baf0f4:;
  /* 11baf0f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11baf0f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf0fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11baf101 pop edi */
  EDI = (pop32());
  /* 11baf102 pop esi */
  ESI = (pop32());
  /* 11baf103 pop ebx */
  EBX = (pop32());
  /* 11baf104 mov esp, ebp */
  ESP = (EBP);
  /* 11baf106 pop ebp */
  EBP = (pop32());
  /* 11baf107 ret  */
  ESPCHK(0x11baed10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f110 @ 0x11baf110 (80 bytes, 32 insns) */
void f_11baf110(void) {
  FTRACE(0x11baf110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf110 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf111 mov ebp, esp */
  EBP = (ESP);
  /* 11baf113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf119 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11baf11c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf11f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11baf122:;
  /* 11baf122 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf128 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf12b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11baf12e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baf130 je 0x11baf147 */
  if (C.zf) goto L_11baf147;
  /* 11baf132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf135 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11baf138 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baf13a je 0x11baf147 */
  if (C.zf) goto L_11baf147;
  /* 11baf13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf13f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf142 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baf145 jmp 0x11baf122 */
  goto L_11baf122;
L_11baf147:;
  /* 11baf147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf14a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11baf14d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baf14f jne 0x11baf159 */
  if (!C.zf) goto L_11baf159;
  /* 11baf151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf154 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf157 jmp 0x11baf15c */
  goto L_11baf15c;
L_11baf159:;
  /* 11baf159 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11baf15c:;
  /* 11baf15c mov esp, ebp */
  ESP = (EBP);
  /* 11baf15e pop ebp */
  EBP = (pop32());
  /* 11baf15f ret  */
  ESPCHK(0x11baf110u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f160 @ 0x11baf160 (736 bytes, 224 insns) */
void f_11baf160(void) {
  FTRACE(0x11baf160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf160 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf161 mov ebp, esp */
  EBP = (ESP);
  /* 11baf163 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf166 push esi */
  push32((uint32_t)(ESI));
  /* 11baf167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf16b je 0x11baf18c */
  if (C.zf) goto L_11baf18c;
  /* 11baf16d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11baf16f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf172 push eax */
  push32((uint32_t)(EAX));
  /* 11baf173 call 0x11bafad0 */
  push32(0x11baf178u); f_11bafad0();
  /* 11baf178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf17b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11baf17e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf182 je 0x11baf18c */
  if (C.zf) goto L_11baf18c;
  /* 11baf184 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf187 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf18a jne 0x11baf194 */
  if (!C.zf) goto L_11baf194;
L_11baf18c:;
  /* 11baf18c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf18f jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf194:;
  /* 11baf194 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11baf197 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11baf19b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11baf19d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf19f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11baf1a0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11baf1a3 mov ecx, dword ptr [0x11bce3fc] */
  ECX = (r32((uint32_t)(0x11bce3fc)));
  /* 11baf1a9 cmp ecx, dword ptr [0x11bce400] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bce400))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf1af jne 0x11baf1c5 */
  if (!C.zf) goto L_11baf1c5;
  /* 11baf1b1 mov edx, dword ptr [0x11bce3fc] */
  EDX = (r32((uint32_t)(0x11bce3fc)));
  /* 11baf1b7 push edx */
  push32((uint32_t)(EDX));
  /* 11baf1b8 call 0x11baf4c0 */
  push32(0x11baf1bdu); f_11baf4c0();
  /* 11baf1bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf1c0 mov dword ptr [0x11bce3fc], eax */
  w32((uint32_t)(0x11bce3fc), (EAX));
L_11baf1c5:;
  /* 11baf1c5 cmp dword ptr [0x11bce3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf1cc jne 0x11baf285 */
  if (!C.zf) goto L_11baf285;
  /* 11baf1d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf1d6 je 0x11baf1f7 */
  if (C.zf) goto L_11baf1f7;
  /* 11baf1d8 cmp dword ptr [0x11bce404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf1df je 0x11baf1f7 */
  if (C.zf) goto L_11baf1f7;
  /* 11baf1e1 call 0x11baced0 */
  push32(0x11baf1e6u); f_11baced0();
  /* 11baf1e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf1e8 je 0x11baf1f2 */
  if (C.zf) goto L_11baf1f2;
  /* 11baf1ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf1ed jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf1f2:;
  /* 11baf1f2 jmp 0x11baf285 */
  goto L_11baf285;
L_11baf1f7:;
  /* 11baf1f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf1fb je 0x11baf204 */
  if (C.zf) goto L_11baf204;
  /* 11baf1fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf1ff jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf204:;
  /* 11baf204 cmp dword ptr [0x11bce3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf20b jne 0x11baf244 */
  if (!C.zf) goto L_11baf244;
  /* 11baf20d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11baf212 push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf217 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf219 push 4 */
  push32((uint32_t)(0x4u));
  /* 11baf21b call 0x11b9a7d0 */
  push32(0x11baf220u); f_11b9a7d0();
  /* 11baf220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf223 mov dword ptr [0x11bce3fc], eax */
  w32((uint32_t)(0x11bce3fc), (EAX));
  /* 11baf228 cmp dword ptr [0x11bce3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf22f jne 0x11baf239 */
  if (!C.zf) goto L_11baf239;
  /* 11baf231 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf234 jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf239:;
  /* 11baf239 mov eax, dword ptr [0x11bce3fc] */
  EAX = (r32((uint32_t)(0x11bce3fc)));
  /* 11baf23e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11baf244:;
  /* 11baf244 cmp dword ptr [0x11bce404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf24b jne 0x11baf285 */
  if (!C.zf) goto L_11baf285;
  /* 11baf24d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11baf252 push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf257 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf259 push 4 */
  push32((uint32_t)(0x4u));
  /* 11baf25b call 0x11b9a7d0 */
  push32(0x11baf260u); f_11b9a7d0();
  /* 11baf260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf263 mov dword ptr [0x11bce404], eax */
  w32((uint32_t)(0x11bce404), (EAX));
  /* 11baf268 cmp dword ptr [0x11bce404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf26f jne 0x11baf279 */
  if (!C.zf) goto L_11baf279;
  /* 11baf271 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf274 jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf279:;
  /* 11baf279 mov ecx, dword ptr [0x11bce404] */
  ECX = (r32((uint32_t)(0x11bce404)));
  /* 11baf27f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11baf285:;
  /* 11baf285 mov edx, dword ptr [0x11bce3fc] */
  EDX = (r32((uint32_t)(0x11bce3fc)));
  /* 11baf28b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11baf28e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11baf291 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf294 push eax */
  push32((uint32_t)(EAX));
  /* 11baf295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf298 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf299 call 0x11baf440 */
  push32(0x11baf29eu); f_11baf440();
  /* 11baf29e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf2a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11baf2a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf2a8 jl 0x11baf341 */
  if ((C.sf!=C.of)) goto L_11baf341;
  /* 11baf2ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf2b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf2b4 je 0x11baf341 */
  if (C.zf) goto L_11baf341;
  /* 11baf2ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf2be je 0x11baf333 */
  if (C.zf) goto L_11baf333;
  /* 11baf2c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf2c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf2c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf2c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11baf2cb push edx */
  push32((uint32_t)(EDX));
  /* 11baf2cc call 0x11b9b260 */
  push32(0x11baf2d1u); f_11b9b260();
  /* 11baf2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf2d4 jmp 0x11baf2df */
  goto L_11baf2df;
L_11baf2d6:;
  /* 11baf2d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf2d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf2dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11baf2df:;
  /* 11baf2df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf2e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf2e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf2e9 je 0x11baf300 */
  if (C.zf) goto L_11baf300;
  /* 11baf2eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf2ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf2f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf2f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf2f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11baf2fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11baf2fe jmp 0x11baf2d6 */
  goto L_11baf2d6;
L_11baf300:;
  /* 11baf300 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11baf305 push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf30a push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf30c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf30f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11baf312 push eax */
  push32((uint32_t)(EAX));
  /* 11baf313 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf316 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf317 call 0x11b9ac60 */
  push32(0x11baf31cu); f_11b9ac60();
  /* 11baf31c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf31f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11baf322 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf326 je 0x11baf331 */
  if (C.zf) goto L_11baf331;
  /* 11baf328 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf32b mov dword ptr [0x11bce3fc], edx */
  w32((uint32_t)(0x11bce3fc), (EDX));
L_11baf331:;
  /* 11baf331 jmp 0x11baf33f */
  goto L_11baf33f;
L_11baf333:;
  /* 11baf333 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf336 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf33c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11baf33f:;
  /* 11baf33f jmp 0x11baf3b4 */
  goto L_11baf3b4;
L_11baf341:;
  /* 11baf341 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf345 jne 0x11baf3ad */
  if (!C.zf) goto L_11baf3ad;
  /* 11baf347 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf34b jge 0x11baf355 */
  if ((C.sf==C.of)) goto L_11baf355;
  /* 11baf34d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf350 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11baf352 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11baf355:;
  /* 11baf355 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11baf35a push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf35f push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf361 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf364 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11baf36b push edx */
  push32((uint32_t)(EDX));
  /* 11baf36c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf36f push eax */
  push32((uint32_t)(EAX));
  /* 11baf370 call 0x11b9ac60 */
  push32(0x11baf375u); f_11b9ac60();
  /* 11baf375 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf378 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11baf37b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf37f jne 0x11baf389 */
  if (!C.zf) goto L_11baf389;
  /* 11baf381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf384 jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf389:;
  /* 11baf389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf38c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf38f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf392 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11baf395 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf398 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf39b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11baf3a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf3a6 mov dword ptr [0x11bce3fc], eax */
  w32((uint32_t)(0x11bce3fc), (EAX));
  /* 11baf3ab jmp 0x11baf3b4 */
  goto L_11baf3b4;
L_11baf3ad:;
  /* 11baf3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf3af jmp 0x11baf43b */
  goto L_11baf43b;
L_11baf3b4:;
  /* 11baf3b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf3b8 je 0x11baf439 */
  if (C.zf) goto L_11baf439;
  /* 11baf3ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11baf3bf push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf3c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf3c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf3c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf3ca call 0x11b9fe80 */
  push32(0x11baf3cfu); f_11b9fe80();
  /* 11baf3cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf3d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf3d5 push eax */
  push32((uint32_t)(EAX));
  /* 11baf3d6 call 0x11b9a7d0 */
  push32(0x11baf3dbu); f_11b9a7d0();
  /* 11baf3db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf3de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11baf3e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf3e5 je 0x11baf439 */
  if (C.zf) goto L_11baf439;
  /* 11baf3e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf3ea push edx */
  push32((uint32_t)(EDX));
  /* 11baf3eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf3ee push eax */
  push32((uint32_t)(EAX));
  /* 11baf3ef call 0x11ba0000 */
  push32(0x11baf3f4u); f_11ba0000();
  /* 11baf3f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf3f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11baf3fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf3fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf400 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf402 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11baf405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf408 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11baf40b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf40e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf411 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11baf414 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11baf417 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11baf419 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf41b not edx */
  EDX = (~(EDX));
  /* 11baf41d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11baf420 push edx */
  push32((uint32_t)(EDX));
  /* 11baf421 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf424 push eax */
  push32((uint32_t)(EAX));
  /* 11baf425 call dword ptr [0x11bd0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0318))), 0x11baf42bu);
  /* 11baf42b push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf42d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf430 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf431 call 0x11b9b260 */
  push32(0x11baf436u); f_11b9b260();
  /* 11baf436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baf439:;
  /* 11baf439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baf43b:;
  /* 11baf43b pop esi */
  ESI = (pop32());
  /* 11baf43c mov esp, ebp */
  ESP = (EBP);
  /* 11baf43e pop ebp */
  EBP = (pop32());
  /* 11baf43f ret  */
  ESPCHK(0x11baf160u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11baf440 (124 bytes, 47 insns) */
void f_11baf440(void) {
  FTRACE(0x11baf440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf440 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf441 mov ebp, esp */
  EBP = (ESP);
  /* 11baf443 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf444 mov eax, dword ptr [0x11bce3fc] */
  EAX = (r32((uint32_t)(0x11bce3fc)));
  /* 11baf449 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baf44c jmp 0x11baf457 */
  goto L_11baf457;
L_11baf44e:;
  /* 11baf44e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf451 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf454 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11baf457:;
  /* 11baf457 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf45a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf45d je 0x11baf4aa */
  if (C.zf) goto L_11baf4aa;
  /* 11baf45f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf462 push eax */
  push32((uint32_t)(EAX));
  /* 11baf463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf466 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11baf468 push edx */
  push32((uint32_t)(EDX));
  /* 11baf469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf46c push eax */
  push32((uint32_t)(EAX));
  /* 11baf46d call 0x11bace80 */
  push32(0x11baf472u); f_11bace80();
  /* 11baf472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf477 jne 0x11baf4a8 */
  if (!C.zf) goto L_11baf4a8;
  /* 11baf479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf47c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11baf47e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf481 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11baf485 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf488 je 0x11baf49a */
  if (C.zf) goto L_11baf49a;
  /* 11baf48a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf48d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11baf48f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf492 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11baf496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baf498 jne 0x11baf4a8 */
  if (!C.zf) goto L_11baf4a8;
L_11baf49a:;
  /* 11baf49a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf49d sub eax, dword ptr [0x11bce3fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bce3fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf4a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11baf4a6 jmp 0x11baf4b8 */
  goto L_11baf4b8;
L_11baf4a8:;
  /* 11baf4a8 jmp 0x11baf44e */
  goto L_11baf44e;
L_11baf4aa:;
  /* 11baf4aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf4ad sub eax, dword ptr [0x11bce3fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bce3fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf4b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11baf4b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11baf4b8:;
  /* 11baf4b8 mov esp, ebp */
  ESP = (EBP);
  /* 11baf4ba pop ebp */
  EBP = (pop32());
  /* 11baf4bb ret  */
  ESPCHK(0x11baf440u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11baf4c0 (238 bytes, 80 insns) */
void f_11baf4c0(void) {
  FTRACE(0x11baf4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11baf4c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11baf4c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11baf4cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf4d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11baf4d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf4d7 jne 0x11baf4e0 */
  if (!C.zf) goto L_11baf4e0;
  /* 11baf4d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf4db jmp 0x11baf5aa */
  goto L_11baf5aa;
L_11baf4e0:;
  /* 11baf4e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf4e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11baf4e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf4e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf4eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11baf4ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baf4f0 je 0x11baf4fd */
  if (C.zf) goto L_11baf4fd;
  /* 11baf4f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf4f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf4f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11baf4fb jmp 0x11baf4e0 */
  goto L_11baf4e0;
L_11baf4fd:;
  /* 11baf4fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11baf502 push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf507 push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf509 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf50c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11baf513 push eax */
  push32((uint32_t)(EAX));
  /* 11baf514 call 0x11b9a7d0 */
  push32(0x11baf519u); f_11b9a7d0();
  /* 11baf519 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf51c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11baf51f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf522 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11baf525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf529 jne 0x11baf535 */
  if (!C.zf) goto L_11baf535;
  /* 11baf52b push 9 */
  push32((uint32_t)(0x9u));
  /* 11baf52d call 0x11b99240 */
  push32(0x11baf532u); f_11b99240();
  /* 11baf532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baf535:;
  /* 11baf535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf538 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11baf53b:;
  /* 11baf53b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf53e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf541 je 0x11baf59e */
  if (C.zf) goto L_11baf59e;
  /* 11baf543 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11baf548 push 0x11bc9d48 */
  push32((uint32_t)(0x11bc9d48u));
  /* 11baf54d push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf54f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf552 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11baf554 push edx */
  push32((uint32_t)(EDX));
  /* 11baf555 call 0x11b9fe80 */
  push32(0x11baf55au); f_11b9fe80();
  /* 11baf55a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf55d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf560 push eax */
  push32((uint32_t)(EAX));
  /* 11baf561 call 0x11b9a7d0 */
  push32(0x11baf566u); f_11b9a7d0();
  /* 11baf566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf569 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf56c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11baf56e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf571 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf574 je 0x11baf58a */
  if (C.zf) goto L_11baf58a;
  /* 11baf576 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf579 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11baf57b push ecx */
  push32((uint32_t)(ECX));
  /* 11baf57c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf57f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11baf581 push eax */
  push32((uint32_t)(EAX));
  /* 11baf582 call 0x11ba0000 */
  push32(0x11baf587u); f_11ba0000();
  /* 11baf587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11baf58a:;
  /* 11baf58a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11baf58d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11baf593 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf596 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf599 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11baf59c jmp 0x11baf53b */
  goto L_11baf53b;
L_11baf59e:;
  /* 11baf59e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11baf5a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11baf5a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11baf5aa:;
  /* 11baf5aa mov esp, ebp */
  ESP = (EBP);
  /* 11baf5ac pop ebp */
  EBP = (pop32());
  /* 11baf5ad ret  */
  ESPCHK(0x11baf4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f5b0 @ 0x11baf5b0 (122 bytes, 39 insns) */
void f_11baf5b0(void) {
  FTRACE(0x11baf5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11baf5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf5b7 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf5bd jae 0x11baf5e1 */
  if (!C.cf) goto L_11baf5e1;
  /* 11baf5bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf5c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11baf5c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf5c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11baf5cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11baf5ce mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11baf5d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11baf5da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11baf5dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baf5df jne 0x11baf5fc */
  if (!C.zf) goto L_11baf5fc;
L_11baf5e1:;
  /* 11baf5e1 call 0x11ba6620 */
  push32(0x11baf5e6u); f_11ba6620();
  /* 11baf5e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11baf5ec call 0x11ba6630 */
  push32(0x11baf5f1u); f_11ba6630();
  /* 11baf5f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11baf5f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf5fa jmp 0x11baf626 */
  goto L_11baf626;
L_11baf5fc:;
  /* 11baf5fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf5ff push edx */
  push32((uint32_t)(EDX));
  /* 11baf600 call 0x11ba9f10 */
  push32(0x11baf605u); f_11ba9f10();
  /* 11baf605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf60b push eax */
  push32((uint32_t)(EAX));
  /* 11baf60c call 0x11baf630 */
  push32(0x11baf611u); f_11baf630();
  /* 11baf611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11baf617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf61a push ecx */
  push32((uint32_t)(ECX));
  /* 11baf61b call 0x11ba9fa0 */
  push32(0x11baf620u); f_11ba9fa0();
  /* 11baf620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11baf626:;
  /* 11baf626 mov esp, ebp */
  ESP = (EBP);
  /* 11baf628 pop ebp */
  EBP = (pop32());
  /* 11baf629 ret  */
  ESPCHK(0x11baf5b0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11baf630 (170 bytes, 59 insns) */
void f_11baf630(void) {
  FTRACE(0x11baf630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf630 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf631 mov ebp, esp */
  EBP = (ESP);
  /* 11baf633 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf634 push esi */
  push32((uint32_t)(ESI));
  /* 11baf635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf638 push eax */
  push32((uint32_t)(EAX));
  /* 11baf639 call 0x11ba9d90 */
  push32(0x11baf63eu); f_11ba9d90();
  /* 11baf63e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf641 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf644 je 0x11baf683 */
  if (C.zf) goto L_11baf683;
  /* 11baf646 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf64a je 0x11baf652 */
  if (C.zf) goto L_11baf652;
  /* 11baf64c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf650 jne 0x11baf66c */
  if (!C.zf) goto L_11baf66c;
L_11baf652:;
  /* 11baf652 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf654 call 0x11ba9d90 */
  push32(0x11baf659u); f_11ba9d90();
  /* 11baf659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf65c mov esi, eax */
  ESI = (EAX);
  /* 11baf65e push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf660 call 0x11ba9d90 */
  push32(0x11baf665u); f_11ba9d90();
  /* 11baf665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf668 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf66a je 0x11baf683 */
  if (C.zf) goto L_11baf683;
L_11baf66c:;
  /* 11baf66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf66f push ecx */
  push32((uint32_t)(ECX));
  /* 11baf670 call 0x11ba9d90 */
  push32(0x11baf675u); f_11ba9d90();
  /* 11baf675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf678 push eax */
  push32((uint32_t)(EAX));
  /* 11baf679 call dword ptr [0x11bd0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0314))), 0x11baf67fu);
  /* 11baf67f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf681 je 0x11baf68c */
  if (C.zf) goto L_11baf68c;
L_11baf683:;
  /* 11baf683 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baf68a jmp 0x11baf695 */
  goto L_11baf695;
L_11baf68c:;
  /* 11baf68c call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11baf692u);
  /* 11baf692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11baf695:;
  /* 11baf695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf698 push edx */
  push32((uint32_t)(EDX));
  /* 11baf699 call 0x11ba9cb0 */
  push32(0x11baf69eu); f_11ba9cb0();
  /* 11baf69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf6a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf6a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11baf6a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf6aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11baf6ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11baf6b0 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11baf6b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11baf6bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf6c0 je 0x11baf6d3 */
  if (C.zf) goto L_11baf6d3;
  /* 11baf6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11baf6c5 push eax */
  push32((uint32_t)(EAX));
  /* 11baf6c6 call 0x11ba6580 */
  push32(0x11baf6cbu); f_11ba6580();
  /* 11baf6cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf6ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11baf6d1 jmp 0x11baf6d5 */
  goto L_11baf6d5;
L_11baf6d3:;
  /* 11baf6d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baf6d5:;
  /* 11baf6d5 pop esi */
  ESI = (pop32());
  /* 11baf6d6 mov esp, ebp */
  ESP = (EBP);
  /* 11baf6d8 pop ebp */
  EBP = (pop32());
  /* 11baf6d9 ret  */
  ESPCHK(0x11baf630u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f6e0 @ 0x11baf6e0 (146 bytes, 52 insns) */
void f_11baf6e0(void) {
  FTRACE(0x11baf6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf6e1 mov ebp, esp */
  EBP = (ESP);
  /* 11baf6e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11baf6e4 push esi */
  push32((uint32_t)(ESI));
  /* 11baf6e5 push edi */
  push32((uint32_t)(EDI));
L_11baf6e6:;
  /* 11baf6e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf6ea jne 0x11baf70a */
  if (!C.zf) goto L_11baf70a;
  /* 11baf6ec push 0x11bc9b84 */
  push32((uint32_t)(0x11bc9b84u));
  /* 11baf6f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf6f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11baf6f5 push 0x11bc9d54 */
  push32((uint32_t)(0x11bc9d54u));
  /* 11baf6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf6fc call 0x11b99390 */
  push32(0x11baf701u); f_11b99390();
  /* 11baf701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf707 jne 0x11baf70a */
  if (!C.zf) goto L_11baf70a;
  /* 11baf709 int3  */
  x86_unimpl("int3 @ 0x11baf709");
L_11baf70a:;
  /* 11baf70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf70e jne 0x11baf6e6 */
  if (!C.zf) goto L_11baf6e6;
  /* 11baf710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf713 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baf716 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11baf71c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11baf71e je 0x11baf76d */
  if (C.zf) goto L_11baf76d;
  /* 11baf720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf723 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11baf726 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11baf729 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11baf72b je 0x11baf76d */
  if (C.zf) goto L_11baf76d;
  /* 11baf72d push 2 */
  push32((uint32_t)(0x2u));
  /* 11baf72f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf732 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11baf735 push eax */
  push32((uint32_t)(EAX));
  /* 11baf736 call 0x11b9b260 */
  push32(0x11baf73bu); f_11b9b260();
  /* 11baf73b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf73e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf741 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11baf744 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11baf74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf74d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11baf750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf753 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11baf759 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf75c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11baf763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf766 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11baf76d:;
  /* 11baf76d pop edi */
  EDI = (pop32());
  /* 11baf76e pop esi */
  ESI = (pop32());
  /* 11baf76f pop ebx */
  EBX = (pop32());
  /* 11baf770 pop ebp */
  EBP = (pop32());
  /* 11baf771 ret  */
  ESPCHK(0x11baf6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f780 @ 0x11baf780 (382 bytes, 135 insns) */
void f_11baf780(void) {
  FTRACE(0x11baf780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf780 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf781 mov ebp, esp */
  EBP = (ESP);
  /* 11baf783 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11baf785 push 0x11bc9d60 */
  push32((uint32_t)(0x11bc9d60u));
  /* 11baf78a push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11baf78f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11baf795 push eax */
  push32((uint32_t)(EAX));
  /* 11baf796 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11baf79d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf7a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11baf7a1 push esi */
  push32((uint32_t)(ESI));
  /* 11baf7a2 push edi */
  push32((uint32_t)(EDI));
  /* 11baf7a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baf7a6 cmp dword ptr [0x11bce6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf7ad jne 0x11baf7f2 */
  if (!C.zf) goto L_11baf7f2;
  /* 11baf7af push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf7b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf7b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf7b7 call dword ptr [0x11bd0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0310))), 0x11baf7bdu);
  /* 11baf7bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf7bf je 0x11baf7cd */
  if (C.zf) goto L_11baf7cd;
  /* 11baf7c1 mov dword ptr [0x11bce6d0], 1 */
  w32((uint32_t)(0x11bce6d0), (0x1u));
  /* 11baf7cb jmp 0x11baf7f2 */
  goto L_11baf7f2;
L_11baf7cd:;
  /* 11baf7cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf7d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf7d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf7d5 call dword ptr [0x11bd0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0334))), 0x11baf7dbu);
  /* 11baf7db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf7dd je 0x11baf7eb */
  if (C.zf) goto L_11baf7eb;
  /* 11baf7df mov dword ptr [0x11bce6d0], 2 */
  w32((uint32_t)(0x11bce6d0), (0x2u));
  /* 11baf7e9 jmp 0x11baf7f2 */
  goto L_11baf7f2;
L_11baf7eb:;
  /* 11baf7eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf7ed jmp 0x11baf901 */
  goto L_11baf901;
L_11baf7f2:;
  /* 11baf7f2 cmp dword ptr [0x11bce6d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf7f9 jne 0x11baf816 */
  if (!C.zf) goto L_11baf816;
  /* 11baf7fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baf7fe push eax */
  push32((uint32_t)(EAX));
  /* 11baf7ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baf802 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf806 push edx */
  push32((uint32_t)(EDX));
  /* 11baf807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf80a push eax */
  push32((uint32_t)(EAX));
  /* 11baf80b call dword ptr [0x11bd0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0310))), 0x11baf811u);
  /* 11baf811 jmp 0x11baf901 */
  goto L_11baf901;
L_11baf816:;
  /* 11baf816 cmp dword ptr [0x11bce6d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf81d jne 0x11baf8ff */
  if (!C.zf) goto L_11baf8ff;
  /* 11baf823 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf827 jne 0x11baf832 */
  if (!C.zf) goto L_11baf832;
  /* 11baf829 mov ecx, dword ptr [0x11bce64c] */
  ECX = (r32((uint32_t)(0x11bce64c)));
  /* 11baf82f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11baf832:;
  /* 11baf832 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf834 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf836 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf839 push edx */
  push32((uint32_t)(EDX));
  /* 11baf83a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf83d push eax */
  push32((uint32_t)(EAX));
  /* 11baf83e call dword ptr [0x11bd0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0334))), 0x11baf844u);
  /* 11baf844 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11baf847 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf84b jne 0x11baf854 */
  if (!C.zf) goto L_11baf854;
  /* 11baf84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf84f jmp 0x11baf901 */
  goto L_11baf901;
L_11baf854:;
  /* 11baf854 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baf85b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baf85e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf861 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11baf863 call 0x11ba01f0 */
  push32(0x11baf868u); f_11ba01f0();
  /* 11baf868 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11baf86b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baf86e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11baf871 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11baf874 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11baf87b jmp 0x11baf894 */
  goto L_11baf894;
  /* 11baf87d mov eax, 1 */
  EAX = (0x1u);
  /* 11baf882 ret  */
  ESPCHK(0x11baf780u, _esp0);
  ESP += 4; return;
  /* 11baf883 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11baf886 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11baf88d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11baf894:;
  /* 11baf894 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf898 jne 0x11baf89e */
  if (!C.zf) goto L_11baf89e;
  /* 11baf89a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf89c jmp 0x11baf901 */
  goto L_11baf901;
L_11baf89e:;
  /* 11baf89e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baf8a1 push edx */
  push32((uint32_t)(EDX));
  /* 11baf8a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baf8a5 push eax */
  push32((uint32_t)(EAX));
  /* 11baf8a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf8a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf8aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf8ad push edx */
  push32((uint32_t)(EDX));
  /* 11baf8ae call dword ptr [0x11bd0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0334))), 0x11baf8b4u);
  /* 11baf8b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf8b6 jne 0x11baf8bc */
  if (!C.zf) goto L_11baf8bc;
  /* 11baf8b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf8ba jmp 0x11baf901 */
  goto L_11baf901;
L_11baf8bc:;
  /* 11baf8bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf8c0 jne 0x11baf8dd */
  if (!C.zf) goto L_11baf8dd;
  /* 11baf8c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf8c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf8c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11baf8c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baf8cb push eax */
  push32((uint32_t)(EAX));
  /* 11baf8cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf8ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baf8d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf8d2 call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11baf8d8u);
  /* 11baf8d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11baf8db jmp 0x11baf8fa */
  goto L_11baf8fa;
L_11baf8dd:;
  /* 11baf8dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baf8e0 push edx */
  push32((uint32_t)(EDX));
  /* 11baf8e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baf8e4 push eax */
  push32((uint32_t)(EAX));
  /* 11baf8e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11baf8e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11baf8ea push ecx */
  push32((uint32_t)(ECX));
  /* 11baf8eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf8ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11baf8f0 push edx */
  push32((uint32_t)(EDX));
  /* 11baf8f1 call dword ptr [0x11bd0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0358))), 0x11baf8f7u);
  /* 11baf8f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11baf8fa:;
  /* 11baf8fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11baf8fd jmp 0x11baf901 */
  goto L_11baf901;
L_11baf8ff:;
  /* 11baf8ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11baf901:;
  /* 11baf901 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11baf904 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11baf907 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11baf90e pop edi */
  EDI = (pop32());
  /* 11baf90f pop esi */
  ESI = (pop32());
  /* 11baf910 pop ebx */
  EBX = (pop32());
  /* 11baf911 mov esp, ebp */
  ESP = (EBP);
  /* 11baf913 pop ebp */
  EBP = (pop32());
  /* 11baf914 ret  */
  ESPCHK(0x11baf780u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f920 @ 0x11baf920 (398 bytes, 140 insns) */
void f_11baf920(void) {
  FTRACE(0x11baf920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11baf920 push ebp */
  push32((uint32_t)(EBP));
  /* 11baf921 mov ebp, esp */
  EBP = (ESP);
  /* 11baf923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11baf925 push 0x11bc9d70 */
  push32((uint32_t)(0x11bc9d70u));
  /* 11baf92a push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11baf92f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11baf935 push eax */
  push32((uint32_t)(EAX));
  /* 11baf936 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11baf93d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11baf940 push ebx */
  push32((uint32_t)(EBX));
  /* 11baf941 push esi */
  push32((uint32_t)(ESI));
  /* 11baf942 push edi */
  push32((uint32_t)(EDI));
  /* 11baf943 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11baf946 cmp dword ptr [0x11bce6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf94d jne 0x11baf992 */
  if (!C.zf) goto L_11baf992;
  /* 11baf94f push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf951 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf953 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf957 call dword ptr [0x11bd0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0310))), 0x11baf95du);
  /* 11baf95d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf95f je 0x11baf96d */
  if (C.zf) goto L_11baf96d;
  /* 11baf961 mov dword ptr [0x11bce6d4], 1 */
  w32((uint32_t)(0x11bce6d4), (0x1u));
  /* 11baf96b jmp 0x11baf992 */
  goto L_11baf992;
L_11baf96d:;
  /* 11baf96d push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf96f push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf971 push 1 */
  push32((uint32_t)(0x1u));
  /* 11baf973 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf975 call dword ptr [0x11bd0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0334))), 0x11baf97bu);
  /* 11baf97b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11baf97d je 0x11baf98b */
  if (C.zf) goto L_11baf98b;
  /* 11baf97f mov dword ptr [0x11bce6d4], 2 */
  w32((uint32_t)(0x11bce6d4), (0x2u));
  /* 11baf989 jmp 0x11baf992 */
  goto L_11baf992;
L_11baf98b:;
  /* 11baf98b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf98d jmp 0x11bafab1 */
  goto L_11bafab1;
L_11baf992:;
  /* 11baf992 cmp dword ptr [0x11bce6d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf999 jne 0x11baf9b6 */
  if (!C.zf) goto L_11baf9b6;
  /* 11baf99b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11baf99e push eax */
  push32((uint32_t)(EAX));
  /* 11baf99f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11baf9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11baf9a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf9a6 push edx */
  push32((uint32_t)(EDX));
  /* 11baf9a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf9aa push eax */
  push32((uint32_t)(EAX));
  /* 11baf9ab call dword ptr [0x11bd0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0334))), 0x11baf9b1u);
  /* 11baf9b1 jmp 0x11bafab1 */
  goto L_11bafab1;
L_11baf9b6:;
  /* 11baf9b6 cmp dword ptr [0x11bce6d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf9bd jne 0x11bafaaf */
  if (!C.zf) goto L_11bafaaf;
  /* 11baf9c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf9c7 jne 0x11baf9d2 */
  if (!C.zf) goto L_11baf9d2;
  /* 11baf9c9 mov ecx, dword ptr [0x11bce64c] */
  ECX = (r32((uint32_t)(0x11bce64c)));
  /* 11baf9cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11baf9d2:;
  /* 11baf9d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf9d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11baf9d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11baf9d9 push edx */
  push32((uint32_t)(EDX));
  /* 11baf9da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11baf9dd push eax */
  push32((uint32_t)(EAX));
  /* 11baf9de call dword ptr [0x11bd0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0310))), 0x11baf9e4u);
  /* 11baf9e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11baf9e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11baf9eb jne 0x11baf9f4 */
  if (!C.zf) goto L_11baf9f4;
  /* 11baf9ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11baf9ef jmp 0x11bafab1 */
  goto L_11bafab1;
L_11baf9f4:;
  /* 11baf9f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11baf9fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11baf9fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bafa00 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafa03 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bafa05 call 0x11ba01f0 */
  push32(0x11bafa0au); f_11ba01f0();
  /* 11bafa0a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11bafa0d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bafa10 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bafa13 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bafa16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bafa1d jmp 0x11bafa36 */
  goto L_11bafa36;
  /* 11bafa1f mov eax, 1 */
  EAX = (0x1u);
  /* 11bafa24 ret  */
  ESPCHK(0x11baf920u, _esp0);
  ESP += 4; return;
  /* 11bafa25 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bafa28 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bafa2f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bafa36:;
  /* 11bafa36 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bafa3a jne 0x11bafa40 */
  if (!C.zf) goto L_11bafa40;
  /* 11bafa3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bafa3e jmp 0x11bafab1 */
  goto L_11bafab1;
L_11bafa40:;
  /* 11bafa40 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bafa43 push edx */
  push32((uint32_t)(EDX));
  /* 11bafa44 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bafa47 push eax */
  push32((uint32_t)(EAX));
  /* 11bafa48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bafa4b push ecx */
  push32((uint32_t)(ECX));
  /* 11bafa4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafa4f push edx */
  push32((uint32_t)(EDX));
  /* 11bafa50 call dword ptr [0x11bd0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0310))), 0x11bafa56u);
  /* 11bafa56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bafa58 jne 0x11bafa5e */
  if (!C.zf) goto L_11bafa5e;
  /* 11bafa5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bafa5c jmp 0x11bafab1 */
  goto L_11bafab1;
L_11bafa5e:;
  /* 11bafa5e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bafa62 jne 0x11bafa86 */
  if (!C.zf) goto L_11bafa86;
  /* 11bafa64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bafa66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bafa68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bafa6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11bafa6c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bafa6e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bafa71 push eax */
  push32((uint32_t)(EAX));
  /* 11bafa72 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bafa77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bafa7a push ecx */
  push32((uint32_t)(ECX));
  /* 11bafa7b call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11bafa81u);
  /* 11bafa81 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bafa84 jmp 0x11bafaaa */
  goto L_11bafaaa;
L_11bafa86:;
  /* 11bafa86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bafa88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bafa8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bafa8d push edx */
  push32((uint32_t)(EDX));
  /* 11bafa8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bafa91 push eax */
  push32((uint32_t)(EAX));
  /* 11bafa92 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bafa94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bafa97 push ecx */
  push32((uint32_t)(ECX));
  /* 11bafa98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bafa9d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bafaa0 push edx */
  push32((uint32_t)(EDX));
  /* 11bafaa1 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11bafaa7u);
  /* 11bafaa7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11bafaaa:;
  /* 11bafaaa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bafaad jmp 0x11bafab1 */
  goto L_11bafab1;
L_11bafaaf:;
  /* 11bafaaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bafab1:;
  /* 11bafab1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11bafab4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bafab7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11bafabe pop edi */
  EDI = (pop32());
  /* 11bafabf pop esi */
  ESI = (pop32());
  /* 11bafac0 pop ebx */
  EBX = (pop32());
  /* 11bafac1 mov esp, ebp */
  ESP = (EBP);
  /* 11bafac3 pop ebp */
  EBP = (pop32());
  /* 11bafac4 ret  */
  ESPCHK(0x11baf920u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fad0 @ 0x11bafad0 (237 bytes, 81 insns) */
void f_11bafad0(void) {
  FTRACE(0x11bafad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bafad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bafad1 mov ebp, esp */
  EBP = (ESP);
  /* 11bafad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bafad4 cmp dword ptr [0x11bce78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bafadb jne 0x11bafaf2 */
  if (!C.zf) goto L_11bafaf2;
  /* 11bafadd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bafae0 push eax */
  push32((uint32_t)(EAX));
  /* 11bafae1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafae4 push ecx */
  push32((uint32_t)(ECX));
  /* 11bafae5 call 0x11bafbd0 */
  push32(0x11bafaeau); f_11bafbd0();
  /* 11bafaea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafaed jmp 0x11bafbb9 */
  goto L_11bafbb9;
L_11bafaf2:;
  /* 11bafaf2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bafaf4 call 0x11b9a6d0 */
  push32(0x11bafaf9u); f_11b9a6d0();
  /* 11bafaf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafafc jmp 0x11bafb07 */
  goto L_11bafb07;
L_11bafafe:;
  /* 11bafafe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafb01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafb04 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11bafb07:;
  /* 11bafb07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafb0a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11bafb0e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11bafb12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bafb15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bafb1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bafb1d je 0x11bafb9b */
  if (C.zf) goto L_11bafb9b;
  /* 11bafb1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bafb22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bafb27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bafb29 mov cl, byte ptr [eax + 0x11bce8a1] */
  CL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11bafb2f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11bafb32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bafb34 je 0x11bafb86 */
  if (C.zf) goto L_11bafb86;
  /* 11bafb36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafb39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafb3c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bafb3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafb42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bafb44 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bafb46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bafb48 jne 0x11bafb58 */
  if (!C.zf) goto L_11bafb58;
  /* 11bafb4a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bafb4c call 0x11b9a770 */
  push32(0x11bafb51u); f_11b9a770();
  /* 11bafb51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafb54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bafb56 jmp 0x11bafbb9 */
  goto L_11bafbb9;
L_11bafb58:;
  /* 11bafb58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bafb5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bafb61 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11bafb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafb67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bafb69 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bafb6b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11bafb6d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bafb70 jne 0x11bafb84 */
  if (!C.zf) goto L_11bafb84;
  /* 11bafb72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bafb74 call 0x11b9a770 */
  push32(0x11bafb79u); f_11b9a770();
  /* 11bafb79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafb7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafb7f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bafb82 jmp 0x11bafbb9 */
  goto L_11bafbb9;
L_11bafb84:;
  /* 11bafb84 jmp 0x11bafb96 */
  goto L_11bafb96;
L_11bafb86:;
  /* 11bafb86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bafb89 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bafb8f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bafb92 jne 0x11bafb96 */
  if (!C.zf) goto L_11bafb96;
  /* 11bafb94 jmp 0x11bafb9b */
  goto L_11bafb9b;
L_11bafb96:;
  /* 11bafb96 jmp 0x11bafafe */
  goto L_11bafafe;
L_11bafb9b:;
  /* 11bafb9b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bafb9d call 0x11b9a770 */
  push32(0x11bafba2u); f_11b9a770();
  /* 11bafba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bafba8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bafbad cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bafbb0 jne 0x11bafbb7 */
  if (!C.zf) goto L_11bafbb7;
  /* 11bafbb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bafbb5 jmp 0x11bafbb9 */
  goto L_11bafbb9;
L_11bafbb7:;
  /* 11bafbb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bafbb9:;
  /* 11bafbb9 mov esp, ebp */
  ESP = (EBP);
  /* 11bafbbb pop ebp */
  EBP = (pop32());
  /* 11bafbbc ret  */
  ESPCHK(0x11bafad0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11bafbd0 (193 bytes, 87 insns) */
void f_11bafbd0(void) {
  FTRACE(0x11bafbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bafbd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bafbd2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11bafbd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11bafbd7 mov ebx, eax */
  EBX = (EAX);
  /* 11bafbd9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11bafbdc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bafbe0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11bafbe6 je 0x11bafbfb */
  if (C.zf) goto L_11bafbfb;
L_11bafbe8:;
  /* 11bafbe8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11bafbea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11bafbeb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bafbed je 0x11bafbc0 */
  if (C.zf) { jmp_ind(0x11bafbc0u); return; }
  /* 11bafbef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11bafbf1 je 0x11bafc44 */
  if (C.zf) goto L_11bafc44;
  /* 11bafbf3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11bafbf9 jne 0x11bafbe8 */
  if (!C.zf) goto L_11bafbe8;
L_11bafbfb:;
  /* 11bafbfb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11bafbfd push edi */
  push32((uint32_t)(EDI));
  /* 11bafbfe mov eax, ebx */
  EAX = (EBX);
  /* 11bafc00 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11bafc03 push esi */
  push32((uint32_t)(ESI));
  /* 11bafc04 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11bafc06:;
  /* 11bafc06 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11bafc08 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11bafc0d mov eax, ecx */
  EAX = (ECX);
  /* 11bafc0f mov esi, edi */
  ESI = (EDI);
  /* 11bafc11 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11bafc13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafc15 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafc17 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bafc1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bafc1d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11bafc1f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11bafc21 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bafc24 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11bafc2a jne 0x11bafc48 */
  if (!C.zf) goto L_11bafc48;
  /* 11bafc2c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11bafc31 je 0x11bafc06 */
  if (C.zf) goto L_11bafc06;
  /* 11bafc33 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11bafc38 jne 0x11bafc42 */
  if (!C.zf) goto L_11bafc42;
  /* 11bafc3a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11bafc40 jne 0x11bafc06 */
  if (!C.zf) goto L_11bafc06;
L_11bafc42:;
  /* 11bafc42 pop esi */
  ESI = (pop32());
  /* 11bafc43 pop edi */
  EDI = (pop32());
L_11bafc44:;
  /* 11bafc44 pop ebx */
  EBX = (pop32());
  /* 11bafc45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bafc47 ret  */
  ESPCHK(0x11bafbd0u, _esp0);
  ESP += 4; return;
L_11bafc48:;
  /* 11bafc48 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11bafc4b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bafc4d je 0x11bafc85 */
  if (C.zf) goto L_11bafc85;
  /* 11bafc4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11bafc51 je 0x11bafc42 */
  if (C.zf) goto L_11bafc42;
  /* 11bafc53 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bafc55 je 0x11bafc7e */
  if (C.zf) goto L_11bafc7e;
  /* 11bafc57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11bafc59 je 0x11bafc42 */
  if (C.zf) goto L_11bafc42;
  /* 11bafc5b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11bafc5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bafc60 je 0x11bafc77 */
  if (C.zf) goto L_11bafc77;
  /* 11bafc62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11bafc64 je 0x11bafc42 */
  if (C.zf) goto L_11bafc42;
  /* 11bafc66 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bafc68 je 0x11bafc70 */
  if (C.zf) goto L_11bafc70;
  /* 11bafc6a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11bafc6c je 0x11bafc42 */
  if (C.zf) goto L_11bafc42;
  /* 11bafc6e jmp 0x11bafc06 */
  goto L_11bafc06;
L_11bafc70:;
  /* 11bafc70 pop esi */
  ESI = (pop32());
  /* 11bafc71 pop edi */
  EDI = (pop32());
  /* 11bafc72 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11bafc75 pop ebx */
  EBX = (pop32());
  /* 11bafc76 ret  */
  ESPCHK(0x11bafbd0u, _esp0);
  ESP += 4; return;
L_11bafc77:;
  /* 11bafc77 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11bafc7a pop esi */
  ESI = (pop32());
  /* 11bafc7b pop edi */
  EDI = (pop32());
  /* 11bafc7c pop ebx */
  EBX = (pop32());
  /* 11bafc7d ret  */
  ESPCHK(0x11bafbd0u, _esp0);
  ESP += 4; return;
L_11bafc7e:;
  /* 11bafc7e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11bafc81 pop esi */
  ESI = (pop32());
  /* 11bafc82 pop edi */
  EDI = (pop32());
  /* 11bafc83 pop ebx */
  EBX = (pop32());
  /* 11bafc84 ret  */
  ESPCHK(0x11bafbd0u, _esp0);
  ESP += 4; return;
L_11bafc85:;
  /* 11bafc85 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11bafc88 pop esi */
  ESI = (pop32());
  /* 11bafc89 pop edi */
  EDI = (pop32());
  /* 11bafc8a pop ebx */
  EBX = (pop32());
  /* 11bafc8b ret  */
  ESPCHK(0x11bafbd0u, _esp0);
  ESP += 4; return;
  /* 11bafc8e loopne 0x11bafc93 */
  x86_unimpl("loopne @ 0x11bafc8e");
}

/* RtlUnwind @ 0x11bafc8c (6 bytes, 1 insns) */
void f_11bafc8c(void) {
  FTRACE(0x11bafc8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bafc8c jmp dword ptr [0x11bd03e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11bd03e0)))); return;
}

